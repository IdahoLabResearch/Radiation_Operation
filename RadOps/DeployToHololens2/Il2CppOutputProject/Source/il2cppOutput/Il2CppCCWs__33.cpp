﻿#include "pch-cpp.hpp"




#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t9C770ED0AAB2B03D163EE9D403005B9F2D2425CF;
struct IEqualityComparer_1_tF243239734BDDDDD92301D5875DF82A03FE6AD54;
struct IEqualityComparer_1_t06C346ACFCD6FA7B6357E6392FA8842A209C66E7;
struct IEqualityComparer_1_t4C406F82823FF96EEFA77E78C84DE151AFA91A85;
struct IEqualityComparer_1_t57A43DC72C9BCCA9EDCF71364B5BF21D7EB6497C;
struct IEqualityComparer_1_tEFAB779335C4A007E1AD53A1C338A19269F0F08E;
struct KeyCollection_t1F9416215890AA601AAB56A4897A6BDD1346A8B5;
struct KeyCollection_t3BDDAB353520F13B525F1919C12D7003DB4BB269;
struct KeyCollection_t3C424D67D4225CC3F2A1DEEFF9324356426F375A;
struct KeyCollection_t229589DCF03EE31DB947D6CE299E3DBDE6CB17F6;
struct KeyCollection_t9325E1CD5BBDAB326FE91442A9D50EC7CC06A55B;
struct KeyCollection_t4D7DA787A93DDAF0BABFB925A669246A4158151B;
struct ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C;
struct ValueCollection_t6DDEF148D620310FB52BFEAF625E948D503888E6;
struct ValueCollection_tB06B2A29DF54C2FB4DDBF725559C8A6BD4FF7FC8;
struct ValueCollection_t0B26E4B3C38CB1A4ACC49343E9894102148208D7;
struct ValueCollection_t520222CDDCBEA05AE7BFBA0D8224ADE305A3C3D2;
struct ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D;
struct EntryU5BU5D_t4A3F1BAF1CC0E111B0DF404358356DEE59091B4F;
struct EntryU5BU5D_t292051C387807A7560110AFA3D88C604D9AD8D5F;
struct EntryU5BU5D_t227DBC7DE172D56DD47E4F490CD131CEED5753A9;
struct EntryU5BU5D_tD262EE85E5DADC96CC3207CC3844BAC603609B47;
struct EntryU5BU5D_t4327D04F5C9693548AD2D4D41508F4F85AAC9504;
struct EntryU5BU5D_tE8C0C185230F4E3DBD06313A3DB98257D2195B6E;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t7FC3B8A5C409ED56E0DC5AB185FCE77D3CEE7501;
struct IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t26B0E8FB2AE68726C3084A882B35F936C0DBE579 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m8645CA1DF37986281AC3340BD5C5835A1E7281A9(IIterator_1_t7FC3B8A5C409ED56E0DC5AB185FCE77D3CEE7501** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m197E5F8785B8482E3CB8641EB70AAF495E5B5CF6(uint8_t ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mFA9DB3992CE037BC60A6CB097986283FFDC4AD3E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mCA5989FBFDAC21530A49606F05E81D6B341A9ECD(uint8_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3C01A28FBB14909E998EB849CE371E2C776DB65C(IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3** ___0_first, IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3** ___1_second) = 0;
};
struct NOVTABLE IMap_2_tB9688015331FA086167E6B0303D271147BB8CA09 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m953D78C7A8101D0CC43E6C5B0B460690A76158B4(uint8_t ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m40E7832A1965FAA049BDACA1B4330727C06B5BB6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mAB92383A1FA1A392F75E2F6727D4EBB79907E1AC(uint8_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m02EDB60921C684805844D6732A2511D39524E7AD(IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m7D5D2B0D221A8CA143AFF5CAB87E5677A2C5B374(uint8_t ___0_key, Il2CppHString ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE3CE7A0CFF88FE7EC7BC45E42E9E0AC2796D647A(uint8_t ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m0140971CC6721440621D9B603C694673B739521B() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4A3F1BAF1CC0E111B0DF404358356DEE59091B4F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t1F9416215890AA601AAB56A4897A6BDD1346A8B5* ____keys;
	ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t07FDB367D731290389827DD0F4EC9E25848DB50B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t292051C387807A7560110AFA3D88C604D9AD8D5F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t3BDDAB353520F13B525F1919C12D7003DB4BB269* ____keys;
	ValueCollection_t6DDEF148D620310FB52BFEAF625E948D503888E6* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t227DBC7DE172D56DD47E4F490CD131CEED5753A9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t3C424D67D4225CC3F2A1DEEFF9324356426F375A* ____keys;
	ValueCollection_tB06B2A29DF54C2FB4DDBF725559C8A6BD4FF7FC8* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD262EE85E5DADC96CC3207CC3844BAC603609B47* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t229589DCF03EE31DB947D6CE299E3DBDE6CB17F6* ____keys;
	ValueCollection_t0B26E4B3C38CB1A4ACC49343E9894102148208D7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tD6EE7C0E79A84BB083579D63F0A06C2FC6359DD2  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4327D04F5C9693548AD2D4D41508F4F85AAC9504* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9325E1CD5BBDAB326FE91442A9D50EC7CC06A55B* ____keys;
	ValueCollection_t520222CDDCBEA05AE7BFBA0D8224ADE305A3C3D2* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE8C0C185230F4E3DBD06313A3DB98257D2195B6E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t4D7DA787A93DDAF0BABFB925A669246A4158151B* ____keys;
	ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m953D78C7A8101D0CC43E6C5B0B460690A76158B4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m40E7832A1965FAA049BDACA1B4330727C06B5BB6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_mAB92383A1FA1A392F75E2F6727D4EBB79907E1AC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m02EDB60921C684805844D6732A2511D39524E7AD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m7D5D2B0D221A8CA143AFF5CAB87E5677A2C5B374_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, Il2CppHString ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mE3CE7A0CFF88FE7EC7BC45E42E9E0AC2796D647A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key);
il2cpp_hresult_t IMap_2_Clear_m0140971CC6721440621D9B603C694673B739521B_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m8645CA1DF37986281AC3340BD5C5835A1E7281A9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t7FC3B8A5C409ED56E0DC5AB185FCE77D3CEE7501** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m197E5F8785B8482E3CB8641EB70AAF495E5B5CF6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mFA9DB3992CE037BC60A6CB097986283FFDC4AD3E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mCA5989FBFDAC21530A49606F05E81D6B341A9ECD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m3C01A28FBB14909E998EB849CE371E2C776DB65C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3** ___0_first, IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3** ___1_second);



struct Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B_ComCallableWrapper(obj));
}

struct Dictionary_2_t07FDB367D731290389827DD0F4EC9E25848DB50B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t07FDB367D731290389827DD0F4EC9E25848DB50B_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t07FDB367D731290389827DD0F4EC9E25848DB50B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t07FDB367D731290389827DD0F4EC9E25848DB50B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t07FDB367D731290389827DD0F4EC9E25848DB50B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t07FDB367D731290389827DD0F4EC9E25848DB50B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t07FDB367D731290389827DD0F4EC9E25848DB50B_ComCallableWrapper(obj));
}

struct Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tE738E3156DB830A7FCEA2AE6066FC5BEA6715F0D_ComCallableWrapper(obj));
}

struct Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0_ComCallableWrapper>, IMap_2_tB9688015331FA086167E6B0303D271147BB8CA09, IIterable_1_t26B0E8FB2AE68726C3084A882B35F936C0DBE579, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3
{
	inline Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_tB9688015331FA086167E6B0303D271147BB8CA09::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tB9688015331FA086167E6B0303D271147BB8CA09*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t26B0E8FB2AE68726C3084A882B35F936C0DBE579::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t26B0E8FB2AE68726C3084A882B35F936C0DBE579*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_tB9688015331FA086167E6B0303D271147BB8CA09::IID;
		interfaceIds[1] = IIterable_1_t26B0E8FB2AE68726C3084A882B35F936C0DBE579::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m953D78C7A8101D0CC43E6C5B0B460690A76158B4(uint8_t ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m953D78C7A8101D0CC43E6C5B0B460690A76158B4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m40E7832A1965FAA049BDACA1B4330727C06B5BB6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m40E7832A1965FAA049BDACA1B4330727C06B5BB6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mAB92383A1FA1A392F75E2F6727D4EBB79907E1AC(uint8_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_mAB92383A1FA1A392F75E2F6727D4EBB79907E1AC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m02EDB60921C684805844D6732A2511D39524E7AD(IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m02EDB60921C684805844D6732A2511D39524E7AD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m7D5D2B0D221A8CA143AFF5CAB87E5677A2C5B374(uint8_t ___0_key, Il2CppHString ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m7D5D2B0D221A8CA143AFF5CAB87E5677A2C5B374_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE3CE7A0CFF88FE7EC7BC45E42E9E0AC2796D647A(uint8_t ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mE3CE7A0CFF88FE7EC7BC45E42E9E0AC2796D647A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m0140971CC6721440621D9B603C694673B739521B() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m0140971CC6721440621D9B603C694673B739521B_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m8645CA1DF37986281AC3340BD5C5835A1E7281A9(IIterator_1_t7FC3B8A5C409ED56E0DC5AB185FCE77D3CEE7501** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m8645CA1DF37986281AC3340BD5C5835A1E7281A9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m197E5F8785B8482E3CB8641EB70AAF495E5B5CF6(uint8_t ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m197E5F8785B8482E3CB8641EB70AAF495E5B5CF6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mFA9DB3992CE037BC60A6CB097986283FFDC4AD3E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mFA9DB3992CE037BC60A6CB097986283FFDC4AD3E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mCA5989FBFDAC21530A49606F05E81D6B341A9ECD(uint8_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mCA5989FBFDAC21530A49606F05E81D6B341A9ECD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3C01A28FBB14909E998EB849CE371E2C776DB65C(IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3** ___0_first, IMapView_2_tD2399FDD2C5587E8270863A988B92F6637CF3AD3** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m3C01A28FBB14909E998EB849CE371E2C776DB65C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t5BDC855EB3C5F93CBEDD8BFCF6CE61702F13A4A0_ComCallableWrapper(obj));
}

struct Dictionary_2_tD6EE7C0E79A84BB083579D63F0A06C2FC6359DD2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tD6EE7C0E79A84BB083579D63F0A06C2FC6359DD2_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tD6EE7C0E79A84BB083579D63F0A06C2FC6359DD2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tD6EE7C0E79A84BB083579D63F0A06C2FC6359DD2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tD6EE7C0E79A84BB083579D63F0A06C2FC6359DD2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tD6EE7C0E79A84BB083579D63F0A06C2FC6359DD2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tD6EE7C0E79A84BB083579D63F0A06C2FC6359DD2_ComCallableWrapper(obj));
}

struct Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper(obj));
}
