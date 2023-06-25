#pragma once
#include "Image.h"

namespace hybridclr
{
namespace metadata
{
	struct InterfaceOffsetInfo
	{
		const Il2CppType* type;
		uint32_t offset;
	};


	struct TypeDefinitionDetail
	{
		uint32_t index; // from 0
		Il2CppTypeDefinition* typeDef;
		Il2CppTypeDefinitionSizes typeSizes;
		std::vector<VirtualMethodImpl> vtable;
		std::vector<MethodImpl> methodImpls;
	};

	struct ParamDetail
	{
		Il2CppType type;
		Il2CppParameterDefinition paramDef;
		const Il2CppMethodDefinition* methodDef;
		//uint32_t methodIndex;
		uint32_t parameterIndex;
		uint32_t defaultValueIndex; // -1 for invalid
	};

	struct FieldDetail
	{
		Il2CppFieldDefinition fieldDef;
		uint32_t typeDefIndex;
		uint32_t offset;
		uint32_t defaultValueIndex; // -1 for invalid
	};

	struct PropertyDetail
	{
		const char* name;
		uint16_t flags;
		uint32_t signatureBlobIndex;
		uint32_t getterMethodIndex; // start from 1;
		uint32_t setterMethodIndex;
#if HYBRIDCLR_UNITY_2019
		Il2CppTypeDefinition* declaringType;
		Il2CppPropertyDefinition il2cppDefinition;
#endif
	};

	struct EventDetail
	{
		const char* name;
		uint16_t eventFlags;
		uint32_t eventType; // TypeDefOrRef codedIndex
		uint32_t addMethodIndex; // start from 1
		uint32_t removeMethodIndex; // start from 1
		uint32_t fireMethodIndex; // start from 1;
#if HYBRIDCLR_UNITY_2019
		Il2CppTypeDefinition* declaringType;
		Il2CppEventDefinition il2cppDefinition;
#endif
	};

	struct CustomAttribute
	{
		uint32_t ctorMethodToken;
		uint32_t value;
	};

	struct CustomAtttributesInfo
	{
		int32_t typeRangeIndex;
	};

	class InterpreterImage : public Image
	{
	public:

		static void Initialize();

		static uint32_t AllocImageIndex();

		static void RegisterImage(InterpreterImage* image);

		static InterpreterImage* GetImage(uint32_t imageIndex)
		{
			//os::FastAutoLock lock(&s_imageLock);
			IL2CPP_ASSERT(imageIndex <= kMaxLoadImageCount);
			return s_images[imageIndex];
		}

	private:

		static uint32_t s_cliImageCount;
		static InterpreterImage* s_images[kMaxLoadImageCount + 1];

	public:

		InterpreterImage(uint32_t imageIndex) : _index(imageIndex), _inited(false), _il2cppImage(nullptr)
		{

		}

		LoadImageErrorCode Load(const void* imageData, size_t length)
		{
			if (_inited)
			{
				RaiseExecutionEngineException("image can't be init again");
			}
			_inited = true;
			return _rawImage.Load(imageData, length);
		}

		bool IsInitialized() const
		{
			return _inited;
		}

		uint32_t GetIndex() const
		{
			return _index;
		}

		const Il2CppImage* GetIl2CppImage() const
		{
			return _il2cppImage;
		}

		uint32_t EncodeWithIndex(uint32_t rawIndex) const
		{
			return EncodeImageAndMetadataIndex(_index, rawIndex);
		}

		uint32_t EncodeWithIndexExcept0(uint32_t rawIndex) const
		{
			return rawIndex != 0 ? EncodeImageAndMetadataIndex(_index, rawIndex) : 0;
		}

		MethodBody* GetMethodBody(uint32_t token) override
		{
			IL2CPP_ASSERT(DecodeTokenTableType(token) == TableType::METHOD);
			uint32_t rowIndex = DecodeTokenRowIndex(token);
			IL2CPP_ASSERT(rowIndex > 0 && rowIndex <= (uint32_t)_methodBodies.size());
			return &_methodBodies[rowIndex - 1];
		}

		// type index start from 0, difference with table index...
		Il2CppMetadataTypeHandle GetAssemblyTypeHandleFromRawIndex(AssemblyTypeIndex index) const
		{
			IL2CPP_ASSERT(DecodeImageIndex(index) == 0);
			IL2CPP_ASSERT(index >= 0 && (size_t)index < _typesDefines.size());
			return (Il2CppMetadataTypeHandle)&_typesDefines[index];
		}

		Il2CppMetadataTypeHandle GetAssemblyExportedTypeHandleFromRawIndex(AssemblyTypeIndex index) const
		{
			IL2CPP_ASSERT(DecodeImageIndex(index) == 0);
			IL2CPP_ASSERT(index >= 0 && (size_t)index < _typesDefines.size());
			return (Il2CppMetadataTypeHandle)&_exportedTypeDefines[index];
		}

		const Il2CppTypeDefinitionSizes* GetTypeDefinitionSizesFromRawIndex(TypeDefinitionIndex index)
		{
			IL2CPP_ASSERT((size_t)index < _typeDetails.size());
			return &_typeDetails[index].typeSizes;
		}

		const char* GetStringFromRawIndex(StringIndex index) const
		{
			IL2CPP_ASSERT(DecodeImageIndex(index) == 0);
			return _rawImage.GetStringFromRawIndex(index);
		}

		uint32_t GetTypeRawIndex(const Il2CppTypeDefinition* typeDef) const
		{
			return (uint32_t)(typeDef - &_typesDefines[0]);
		}

		uint32_t GetTypeRawIndexByEncodedIl2CppTypeIndex(int32_t il2cppTypeIndex) const
		{
			return GetTypeRawIndex((const Il2CppTypeDefinition*)_types[DecodeMetadataIndex(il2cppTypeIndex)].data.typeHandle);
		}

		const Il2CppTypeDefinition* GetTypeFromRawIndex(uint32_t index) const
		{
			IL2CPP_ASSERT((size_t)index < _typesDefines.size());
			return &_typesDefines[index];
		}

		const Il2CppType* GetIl2CppTypeFromRawIndex(uint32_t index) const
		{
			IL2CPP_ASSERT((size_t)index < _types.size());
			return &_types[index];
		}

		const Il2CppType* GetIl2CppTypeFromRawTypeDefIndex(uint32_t index) override
		{
			IL2CPP_ASSERT(index < (uint32_t)_typeDetails.size());
			return &_types[DecodeMetadataIndex(_typeDetails[index].typeDef->byvalTypeIndex)];
		}

		const Il2CppFieldDefinition* GetFieldDefinitionFromRawIndex(uint32_t index)
		{
			IL2CPP_ASSERT(index < (uint32_t)_fieldDetails.size());
			return &(_fieldDetails[index].fieldDef);
		}

		const FieldDetail& GetFieldDetailFromRawIndex(uint32_t index)
		{
			IL2CPP_ASSERT(index < (uint32_t)_fieldDetails.size());
			return _fieldDetails[index];
		}

		const Il2CppMethodDefinition* GetMethodDefinitionFromRawIndex(uint32_t index) override
		{
			IL2CPP_ASSERT((size_t)index < _methodDefines.size());
			return &_methodDefines[index];
		}

		const Il2CppGenericParameter* GetGenericParameterByGlobalIndex(uint32_t index)
		{
			IL2CPP_ASSERT(index < (uint32_t)_genericParams.size());
			return &_genericParams[index];
		}

		const Il2CppGenericParameter* GetGenericParameterByRawIndex(const Il2CppGenericContainer* container, uint32_t index)
		{
			uint32_t globalIndex = DecodeMetadataIndex(container->genericParameterStart) + index;
			IL2CPP_ASSERT(globalIndex < (uint32_t)_genericParams.size());
			return &_genericParams[globalIndex];
		}

		Il2CppGenericContainer* GetGenericContainerByRawIndex(uint32_t index) override
		{
			if (index != kGenericContainerIndexInvalid)
			{
				IL2CPP_ASSERT(index < (uint32_t)_genericContainers.size());
				return &_genericContainers[index];
			}
			return nullptr;
		}

		Il2CppGenericContainer* GetGenericContainerByTypeDefinition(const Il2CppTypeDefinition* typeDef)
		{
			GenericContainerIndex idx = DecodeMetadataIndex(typeDef->genericContainerIndex);
			if (idx != kGenericContainerIndexInvalid)
			{
				IL2CPP_ASSERT(idx < (GenericContainerIndex)_genericContainers.size());
				return &_genericContainers[idx];
			}
			return nullptr;
		}

		Il2CppGenericContainer* GetGenericContainerByTypeDefRawIndex(int32_t typeDefIndex) override
		{
			IL2CPP_ASSERT(typeDefIndex < (int32_t)_typeDetails.size());
			return GetGenericContainerByTypeDefinition(&_typesDefines[typeDefIndex]);
		}

		const std::vector<MethodImpl>& GetTypeMethodImplByTypeDefinition(const Il2CppTypeDefinition* typeDef)
		{
			uint32_t index = (uint32_t)(typeDef - &_typesDefines[0]);
			IL2CPP_ASSERT(index < (uint32_t)_typeDetails.size());
			return _typeDetails[index].methodImpls;
		}

		Il2CppType* GetGenericParameterConstraintFromIndex(GenericParameterConstraintIndex index)
		{
			IL2CPP_ASSERT((size_t)index < _genericConstraints.size());
			return &_types[_genericConstraints[index]];
		}

		Il2CppClass* GetNestedTypeFromOffset(const Il2CppClass* klass, TypeNestedTypeIndex offset);
		Il2CppClass* GetNestedTypeFromOffset(const Il2CppTypeDefinition* typeDef, TypeNestedTypeIndex offset);

		const MethodInfo* GetMethodInfoFromMethodDefinitionRawIndex(uint32_t index);
		const MethodInfo* GetMethodInfoFromMethodDefinition(const Il2CppMethodDefinition* methodDef);
		const Il2CppMethodDefinition* GetMethodDefinitionFromVTableSlot(const Il2CppTypeDefinition* typeDefine, int32_t vTableSlot);
		const MethodInfo* GetMethodInfoFromVTableSlot(const Il2CppClass* klass, int32_t vTableSlot);

		Il2CppTypeDefinition* GetNestedTypes(Il2CppTypeDefinition* handle, void** iter);

		void GetClassAndMethodGenericContainerFromGenericContainerIndex(GenericContainerIndex idx, const Il2CppGenericContainer*& klassGc, const Il2CppGenericContainer*& methodGc);

		Il2CppMethodPointer GetAdjustorThunk(uint32_t token);
		Il2CppMethodPointer GetMethodPointer(uint32_t token);
		InvokerMethod GetMethodInvoker(uint32_t token);

		const Il2CppParameterDefinition* GetParameterDefinitionFromIndex(uint32_t index)
		{
			IL2CPP_ASSERT((size_t)index < _params.size());
			return &_params[index].paramDef;
		}

		const Il2CppParameterDefaultValue* GetParameterDefaultValueEntryByRawIndex(uint32_t index)
		{
			IL2CPP_ASSERT(index < (uint32_t)_params.size());
			uint32_t defaultValueIndex = _params[index].defaultValueIndex;
			return defaultValueIndex != kDefaultValueIndexNull ? &_paramDefaultValues[defaultValueIndex] : nullptr;
		}

		uint32_t GetFieldOffset(const Il2CppTypeDefinition* typeDef, int32_t fieldIndexInType)
		{
			uint32_t fieldActualIndex = DecodeMetadataIndex(typeDef->fieldStart) + fieldIndexInType;
			IL2CPP_ASSERT(fieldActualIndex < (uint32_t)_fieldDetails.size());
			return _fieldDetails[fieldActualIndex].offset;
		}

		uint32_t GetFieldOffset(TypeDefinitionIndex typeIndex, int32_t fieldIndexInType)
		{
			Il2CppTypeDefinition* typeDef = _typeDetails[typeIndex].typeDef;
			return GetFieldOffset(typeDef, fieldIndexInType);
		}

		uint32_t GetFieldOffset(const Il2CppClass* klass, int32_t fieldIndexInType)
		{
			Il2CppTypeDefinition* typeDef = (Il2CppTypeDefinition*)(klass->typeMetadataHandle);
			return GetFieldOffset(typeDef, fieldIndexInType);
		}

		int32_t GetPackingSize(const Il2CppTypeDefinition* typeDef)
		{
			int32_t typeIndex = GetTypeRawIndex(typeDef);
			auto it = _classLayouts.find(typeIndex);
			return it != _classLayouts.end() ? it->second.packingSize : 0;
		}

		const Il2CppFieldDefaultValue* GetFieldDefaultValueEntryByRawIndex(uint32_t index)
		{
			IL2CPP_ASSERT(index < (uint32_t)_fieldDetails.size());
			uint32_t fdvIndex = _fieldDetails[index].defaultValueIndex;
			IL2CPP_ASSERT(fdvIndex != kDefaultValueIndexNull);
			return &_fieldDefaultValues[fdvIndex];
		}

		const uint8_t* GetFieldOrParameterDefalutValueByRawIndex(uint32_t index)
		{
			return _rawImage.GetFieldOrParameterDefalutValueByRawIndex(index);
		}

#ifdef HYBRIDCLR_UNITY_2019
		Il2CppPropertyDefinition* GetPropertyDefinitionFromIndex(PropertyIndex index)
		{
			IL2CPP_ASSERT(index > 0 && index <= (int32_t)_propeties.size());
			PropertyDetail& pd = _propeties[(uint32_t)index - 1];
			return &pd.il2cppDefinition;
		}
#endif

		Il2CppMetadataPropertyInfo GetPropertyInfo(const Il2CppClass* klass, TypePropertyIndex index)
		{
			const Il2CppTypeDefinition* typeDef = (Il2CppTypeDefinition*)klass->typeMetadataHandle;
			IL2CPP_ASSERT(typeDef->propertyStart);
			uint32_t rowIndex = DecodeMetadataIndex(typeDef->propertyStart) + index;
			PropertyDetail& pd = _propeties[rowIndex - 1];
			uint32_t baseMethodIdx = DecodeMetadataIndex(typeDef->methodStart) + 1;
			const MethodInfo* getter = pd.getterMethodIndex ? klass->methods[pd.getterMethodIndex - baseMethodIdx] : nullptr;
			const MethodInfo* setter = pd.setterMethodIndex ? klass->methods[pd.setterMethodIndex - baseMethodIdx] : nullptr;
			return { pd.name, getter, setter, pd.flags, EncodeToken(TableType::PROPERTY, rowIndex) };
		}

#ifdef HYBRIDCLR_UNITY_2019
		const Il2CppEventDefinition* GetEventDefinitionFromIndex(EventIndex index)
		{
			IL2CPP_ASSERT(index > 0 && index <= (int32_t)_events.size());
			EventDetail& pd = _events[index - 1];
			return &pd.il2cppDefinition;
		}
#endif

		Il2CppMetadataEventInfo GetEventInfo(const Il2CppClass* klass, TypeEventIndex index)
		{
			const Il2CppTypeDefinition* typeDef = (Il2CppTypeDefinition*)klass->typeMetadataHandle;
			IL2CPP_ASSERT(typeDef->eventStart);
			uint32_t rowIndex = DecodeMetadataIndex(typeDef->eventStart) + index;
			EventDetail& pd = _events[rowIndex - 1];
			uint32_t baseMethodIdx = DecodeMetadataIndex(typeDef->methodStart) + 1;
			const MethodInfo* addOn = pd.addMethodIndex ? klass->methods[pd.addMethodIndex - baseMethodIdx] : nullptr;
			const MethodInfo* removeOn = pd.removeMethodIndex ? klass->methods[pd.removeMethodIndex - baseMethodIdx] : nullptr;
			const MethodInfo* raiseOn = pd.fireMethodIndex ? klass->methods[pd.fireMethodIndex - baseMethodIdx] : nullptr;
			return { pd.name, &klass->byval_arg, addOn, removeOn, raiseOn, EncodeToken(TableType::EVENT, rowIndex) };
		}

		const Il2CppAssembly* GetReferencedAssembly(int32_t referencedAssemblyTableIndex, const Il2CppAssembly assembliesTable[], int assembliesCount);

		Il2CppMetadataCustomAttributeHandle GetCustomAttributeTypeToken(uint32_t token)
		{
			auto it = _tokenCustomAttributes.find(token);
			return it != _tokenCustomAttributes.end() ? (Il2CppMetadataCustomAttributeHandle)&_customAttributeHandles[DecodeMetadataIndex(it->second.typeRangeIndex)] : nullptr;
		}

		CustomAttributeIndex GetCustomAttributeIndex(uint32_t token)
		{
			auto it = _tokenCustomAttributes.find(token);
			return it != _tokenCustomAttributes.end() ? it->second.typeRangeIndex : kCustomAttributeIndexInvalid;
		}

		std::tuple<void*, void*> GetCustomAttributeDataRange(uint32_t token)
		{
			const Il2CppCustomAttributeTypeRange* dataRangeCur = (const Il2CppCustomAttributeTypeRange*)GetCustomAttributeTypeToken(token);
			CustomAttributeIndex curIndex = DecodeMetadataIndex(GET_CUSTOM_ATTRIBUTE_TYPE_RANGE_START(*dataRangeCur));
			CustomAttributeIndex nextIndex = DecodeMetadataIndex(GET_CUSTOM_ATTRIBUTE_TYPE_RANGE_START(*(dataRangeCur + 1)));
			CustomAttribute& curCa = _customAttribues[curIndex];
			CustomAttribute& nextCa = _customAttribues[nextIndex];
			return std::make_tuple<void*, void*>((void*)_rawImage.GetBlobReaderByRawIndex(curCa.value).GetData(), (void*)_rawImage.GetBlobReaderByRawIndex(nextCa.value).GetData());
		}

		CustomAttributesCache* GenerateCustomAttributesCacheInternal(const Il2CppCustomAttributeTypeRange* typeRange)
		{
			CustomAttributeIndex index = (CustomAttributeIndex)(typeRange - (const Il2CppCustomAttributeTypeRange*)&_customAttributeHandles[0]);
			IL2CPP_ASSERT(index >= 0 && index < (CustomAttributeIndex)_customAttributeHandles.size());
			return GenerateCustomAttributesCacheInternal(index);
		}

		bool HasAttribute(CustomAttributeIndex index, Il2CppClass* attribute)
		{
			const Il2CppCustomAttributeTypeRange* typeRange = &_customAttributeHandles[DecodeMetadataIndex(index)];
			return HasAttribute(typeRange, attribute);
		}

		bool HasAttribute(const Il2CppCustomAttributeTypeRange* typeRange, Il2CppClass* attribute)
		{
			CustomAttributesCache* attrCache = GenerateCustomAttributesCacheInternal(typeRange);
			return HasAttribute(attrCache, attribute);
		}

		bool HasAttributeByToken(uint32_t token, Il2CppClass* attribute)
		{
			CustomAttributeIndex index = GetCustomAttributeIndex(token);
			if (index == kCustomAttributeIndexInvalid)
			{
				return false;
			}
			CustomAttributesCache* attrCache = GenerateCustomAttributesCacheInternal(DecodeMetadataIndex(index));
			return HasAttribute(attrCache, attribute);
		}

		bool HasAttribute(CustomAttributesCache* attrCache, Il2CppClass* attribute)
		{
			for (int i = 0; i < attrCache->count; i++)
			{
				Il2CppObject* attrObj = attrCache->attributes[i];
				if (il2cpp::vm::Class::IsAssignableFrom(attribute, attrObj->klass))
				{
					return true;
				}
			}
			return false;
		}
		
		CustomAttributesCache* GenerateCustomAttributesCacheInternal(CustomAttributeIndex index);

#ifdef HYBRIDCLR_UNITY_2021_OR_NEW
		Il2CppArray* GetCustomAttributesDataInternal(uint32_t token);
#endif

		Il2CppClass* GetTypeInfoFromTypeDefinitionRawIndex(uint32_t index);

		const Il2CppType* GetInterfaceFromIndex(const Il2CppClass* klass, TypeInterfaceIndex index);
		const Il2CppType* GetInterfaceFromOffset(const Il2CppClass* klass, TypeInterfaceIndex offset);
		const Il2CppType* GetInterfaceFromOffset(const Il2CppTypeDefinition* typeDefine, TypeInterfaceIndex offset);

		Il2CppInterfaceOffsetInfo GetInterfaceOffsetInfo(const Il2CppTypeDefinition* typeDefine, TypeInterfaceOffsetIndex index);

		uint32_t AddIl2CppTypeCache(Il2CppType& type);

		uint32_t AddIl2CppGenericContainers(Il2CppGenericContainer& geneContainer);

		bool GetModuleIl2CppType(Il2CppType& type, uint32_t moduleRowIndex, uint32_t typeNamespace, uint32_t typeName, bool raiseExceptionIfNotFound) override;
		void ReadFieldRefInfoFromFieldDefToken(uint32_t rowIndex, FieldRefInfo& ret) override;
		void ReadMethodDefSig(BlobReader& reader, const Il2CppGenericContainer* klassGenericContainer, const Il2CppGenericContainer* methodGenericContainer, Il2CppMethodDefinition& methodDef, std::vector<ParamDetail>& paramArr);

		void InitBasic(Il2CppImage* image);
		void BuildIl2CppImage(Il2CppImage* image);
		void BuildIl2CppAssembly(Il2CppAssembly* assembly);

		void InitRuntimeMetadatas() override;
	protected:

		void InitTypeDefs_0();
		void InitTypeDefs_1();
		void InitTypeDefs_2();
		void InitConsts();

		void InitClass();

		void InitParamDefs();
		void InitGenericParamConstraintDefs();
		void InitGenericParamDefs0();
		void InitGenericParamDefs();
		void InitFieldDefs();
		void InitFieldLayouts();
		void InitFieldRVAs();
		void InitBlittables();
		void InitMethodDefs0();
		void InitMethodDefs();
		void InitMethodImpls0();
		void InitNestedClass();
		void InitClassLayouts();
		void InitCustomAttributes();
		void InitProperties();
		void InitEvents();
		void InitMethodSemantics();
		void InitInterfaces();
		void InitVTables();

		void ComputeBlittable(Il2CppTypeDefinition* def, std::vector<bool>& computFlags);
		void ComputeVTable(TypeDefinitionDetail* tdd);

		void SetIl2CppImage(Il2CppImage* image)
		{
			_il2cppImage = image;
		}

		Il2CppString* ReadSerString(BlobReader& reader);
		Il2CppReflectionType* ReadSystemType(BlobReader& reader);
		Il2CppObject* ReadBoxedValue(BlobReader& reader);
		void ReadFixedArg(BlobReader& reader, const Il2CppType* argType, void* data);
		void ReadCustomAttributeFieldOrPropType(BlobReader& reader, Il2CppType& type);
		void ConstructCustomAttribute(BlobReader& reader, Il2CppObject* obj, const MethodInfo* ctorMethod);


		bool _inited;
		Il2CppImage* _il2cppImage;
		const uint32_t _index;

		std::vector<TypeDefinitionDetail> _typeDetails;
		std::vector<Il2CppTypeDefinition> _typesDefines;
		std::vector<Il2CppTypeDefinition> _exportedTypeDefines;

		std::vector<Il2CppType> _types;
		std::unordered_map<Il2CppType, uint32_t, Il2CppTypeHashShallow, Il2CppTypeEqualityComparerShallow> _type2Indexs;
		std::vector<TypeIndex> _interfaceDefines;
		std::vector<InterfaceOffsetInfo> _interfaceOffsets;

		std::vector<const MethodInfo*> _methodDefine2InfoCaches;
		std::vector<Il2CppMethodDefinition> _methodDefines;
		std::vector<MethodBody> _methodBodies;

		std::vector<ParamDetail> _params;
		std::vector<int32_t> _paramRawIndex2ActualParamIndex; // rawIindex = rowIndex - 1; because local function, param list count maybe less than actual method param count
		std::vector<Il2CppParameterDefaultValue> _paramDefaultValues;

		std::vector<Il2CppGenericParameter> _genericParams;
		std::vector<TypeIndex> _genericConstraints; // raw TypeIndex
		std::vector<Il2CppGenericContainer> _genericContainers;

		std::vector<FieldDetail> _fieldDetails;
		std::vector<Il2CppFieldDefaultValue> _fieldDefaultValues;

		std::unordered_map<uint32_t, TbClassLayout> _classLayouts;
		std::vector<uint32_t> _nestedTypeDefineIndexs;

		// runtime data 
		std::vector<Il2CppClass*> _classList;
		Il2CppType2TypeDeclaringTreeMap _cacheTrees;


		std::unordered_map<uint32_t, CustomAtttributesInfo> _tokenCustomAttributes;
		std::vector<Il2CppCustomAttributeTypeRange> _customAttributeHandles;
		std::vector<CustomAttributesCache*> _customAttribtesCaches;
		std::vector<CustomAttribute> _customAttribues;

		std::vector<PropertyDetail> _propeties;
		std::vector<EventDetail> _events;
	};
}
}