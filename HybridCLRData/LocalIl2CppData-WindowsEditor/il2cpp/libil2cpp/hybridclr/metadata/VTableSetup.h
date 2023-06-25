#pragma once

#include <vector>
#include <unordered_map>

#include "metadata/Il2CppTypeHash.h"
#include "metadata/Il2CppTypeCompare.h"

#include "../CommonDef.h"
#include "MetadataUtil.h"

namespace hybridclr
{
namespace metadata
{
	struct GenericClassMethod
	{
		const Il2CppType* type;
		const Il2CppMethodDefinition* method;
		const char* name; // TODO remove
	};

	struct VirtualMethodImpl
	{
		const Il2CppMethodDefinition* method;
		const Il2CppType* type;
		uint16_t slot;
		const char* name; //  TODO for debug
	};

	class VTableSetUp;

	struct RawInterfaceOffsetInfo
	{
		const Il2CppType* type;
		VTableSetUp* tree;
		uint32_t offset;
	};

	typedef std::unordered_map<const Il2CppType*, VTableSetUp*, Il2CppTypeHash, Il2CppTypeEqualTo> Il2CppType2TypeDeclaringTreeMap;

	class VTableSetUp
	{
	public:
		static VTableSetUp* BuildByType(Il2CppType2TypeDeclaringTreeMap& cache, const Il2CppType* type);
		static VTableSetUp* InflateVts(Il2CppType2TypeDeclaringTreeMap& cache, VTableSetUp* genericType, const Il2CppType* type);

		VTableSetUp()
		{

		}

		const VTableSetUp* GetParent() const { return _parent; }

		void ComputVtables(Il2CppType2TypeDeclaringTreeMap& cache);
		void ComputAotTypeVtables(Il2CppType2TypeDeclaringTreeMap& cache);
		void ComputInterpTypeVtables(Il2CppType2TypeDeclaringTreeMap& cache);
		void ComputInterfaceVtables(Il2CppType2TypeDeclaringTreeMap& cache);

		const Il2CppType* FindImplType(const Il2CppMethodDefinition* methodDef);
		const VTableSetUp* FindAncestorTypeTree(const Il2CppType* implType);
		const GenericClassMethod* FindImplMethod(const Il2CppType* containerType, const Il2CppMethodDefinition* methodDef, bool throwExceptionIfNotFind = true);
		const std::vector<RawInterfaceOffsetInfo>& GetInterfaceOffsetInfos() const { return _interfaceOffsetInfos; }
		const std::vector<VirtualMethodImpl>& GetVirtualMethodImpls() const { return _methodImpls; }
		const Il2CppType* GetType() const { return _type; }
		uint32_t GetTypeIndex() const { return _typeDef->byvalTypeIndex; }
		bool IsInterType() const { return hybridclr::metadata::IsInterpreterType(_typeDef); }
	private:
		void ApplyOverrideMethod(const GenericClassMethod* beOverrideParentMethod, const Il2CppMethodDefinition* overrideMethodDef, uint16_t checkOverrideMaxIdx, std::vector<uint16_t>& implInterfaceOffsetIdxs);

		VTableSetUp* _parent;
		std::vector<VTableSetUp*> _interfaces;
		std::vector<RawInterfaceOffsetInfo> _interfaceOffsetInfos;

		const Il2CppType* _type;
		const Il2CppTypeDefinition* _typeDef;
		const char* _name; // TODO remove

		std::vector<GenericClassMethod> _virtualMethods;
		std::vector<VirtualMethodImpl> _methodImpls;
	};
}
}
