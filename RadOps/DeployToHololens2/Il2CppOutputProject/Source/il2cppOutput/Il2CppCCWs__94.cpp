#include "pch-cpp.hpp"




#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
struct KeyCollection_t91F59EBF0C6C7769856C1343F5F4387A647CEF4F;
struct KeyCollection_tA47924D4C895A36AC933B2C690DC36C379842A6E;
struct KeyCollection_t1A3A8A0DF8D600E1FD4C946B5CF605C0C3C26D41;
struct KeyCollection_tC71FA11749E936C809A9B4EF81DF00FE54556509;
struct KeyCollection_t1B0FCC60AF08E0919CBEB42B9C2E7C15737FD20C;
struct KeyCollection_t13EBAB3D3E1C1D0516B35021A0ED42367C15572C;
struct ValueCollection_t6500B210C1731AC9859F69B5733A08DB88EB45C8;
struct ValueCollection_t6B747EE4695B7F415D660E302BAC051913889527;
struct ValueCollection_t9F2C3BC25BEB8BB74C7BFA87AB759A5656B8D263;
struct ValueCollection_t8D5EC2FA30E455F3AC119716BB909FFA1CD59DBE;
struct ValueCollection_t8F70C64592235FA1B1D4D29CCECB4C57AC0C78F9;
struct ValueCollection_t018154B24774097E7CC573B84A4370DA87DD222B;
struct EntryU5BU5D_tA815AC01A149B5F0EEECC04F7825EE6976BCF3A5;
struct EntryU5BU5D_tF79BA5796CA92BC67CFDCB6CAE4491F36CE66072;
struct EntryU5BU5D_t75243F7BC7D6C8FFAC0B74C9092DA34CC102F36F;
struct EntryU5BU5D_t4F3493B13237D6830CBEDA6A37D57EEFEB165466;
struct EntryU5BU5D_t6E9F5D5EAB901B88E40FF6DA479AFFD6F32FB7E2;
struct EntryU5BU5D_t524FB57F4275986E1E35D3A27037859378EC3E9F;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t73460F6E7218A58467D9DBD7758A859AA41ABBF7;
struct IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_tA2F7DBEE7B5B5740D809CF1A07C5553C49B0F30B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5E4173DDA982224466516A74A2756A58FCC45A6F(IIterator_1_t73460F6E7218A58467D9DBD7758A859AA41ABBF7** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mD19D0FB5F2540564CE2A86F72C6A05EE3E699B45(uint32_t ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m6559E51C978F38036AD5B6AA938E192183941FA6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mC3BCE9D4AF3844152BFB815DBDEB0D9DB84509D2(uint32_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD1955AEC612339E9B9C84520EE3F3C2A5BFE81F5(IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4** ___0_first, IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4** ___1_second) = 0;
};
struct NOVTABLE IMap_2_tC3D3490C215B5BC50C44CBE8A393B0A02DDBD026 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m5015273ED12787652BA246120ABF173B8C7E5CF2(uint32_t ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m63087001A446C6C01A81DB89F0F21C112E633200(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m17D400E7107A122BA3D5D24430A8C930DBF95F41(uint32_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mD2CD76C626C9D1DF0180B0D47E59F8727CC0B918(IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m34FB3AE8183AFE973FC389124AD835B70EF33373(uint32_t ___0_key, Il2CppHString ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m421081CD57C3F899601A3CA81AEB60C776C8E99E(uint32_t ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9BD9BD5C362E59193E8C0AFA3D499EFC21C0E0C2() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_tD4154357CA320908C5A7A35ED81FA2A9856C28D9  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA815AC01A149B5F0EEECC04F7825EE6976BCF3A5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t91F59EBF0C6C7769856C1343F5F4387A647CEF4F* ____keys;
	ValueCollection_t6500B210C1731AC9859F69B5733A08DB88EB45C8* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tDC0461D8CBB2E6B52DD2C421114EDE7C1C70DE73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF79BA5796CA92BC67CFDCB6CAE4491F36CE66072* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA47924D4C895A36AC933B2C690DC36C379842A6E* ____keys;
	ValueCollection_t6B747EE4695B7F415D660E302BAC051913889527* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t75243F7BC7D6C8FFAC0B74C9092DA34CC102F36F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t1A3A8A0DF8D600E1FD4C946B5CF605C0C3C26D41* ____keys;
	ValueCollection_t9F2C3BC25BEB8BB74C7BFA87AB759A5656B8D263* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4F3493B13237D6830CBEDA6A37D57EEFEB165466* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tC71FA11749E936C809A9B4EF81DF00FE54556509* ____keys;
	ValueCollection_t8D5EC2FA30E455F3AC119716BB909FFA1CD59DBE* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6E9F5D5EAB901B88E40FF6DA479AFFD6F32FB7E2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t1B0FCC60AF08E0919CBEB42B9C2E7C15737FD20C* ____keys;
	ValueCollection_t8F70C64592235FA1B1D4D29CCECB4C57AC0C78F9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t524FB57F4275986E1E35D3A27037859378EC3E9F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t13EBAB3D3E1C1D0516B35021A0ED42367C15572C* ____keys;
	ValueCollection_t018154B24774097E7CC573B84A4370DA87DD222B* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m5015273ED12787652BA246120ABF173B8C7E5CF2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m63087001A446C6C01A81DB89F0F21C112E633200_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m17D400E7107A122BA3D5D24430A8C930DBF95F41_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mD2CD76C626C9D1DF0180B0D47E59F8727CC0B918_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m34FB3AE8183AFE973FC389124AD835B70EF33373_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_key, Il2CppHString ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m421081CD57C3F899601A3CA81AEB60C776C8E99E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_key);
il2cpp_hresult_t IMap_2_Clear_m9BD9BD5C362E59193E8C0AFA3D499EFC21C0E0C2_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m5E4173DDA982224466516A74A2756A58FCC45A6F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t73460F6E7218A58467D9DBD7758A859AA41ABBF7** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mD19D0FB5F2540564CE2A86F72C6A05EE3E699B45_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m6559E51C978F38036AD5B6AA938E192183941FA6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mC3BCE9D4AF3844152BFB815DBDEB0D9DB84509D2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mD1955AEC612339E9B9C84520EE3F3C2A5BFE81F5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4** ___0_first, IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4** ___1_second);



struct Dictionary_2_tD4154357CA320908C5A7A35ED81FA2A9856C28D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tD4154357CA320908C5A7A35ED81FA2A9856C28D9_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tD4154357CA320908C5A7A35ED81FA2A9856C28D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tD4154357CA320908C5A7A35ED81FA2A9856C28D9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tD4154357CA320908C5A7A35ED81FA2A9856C28D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tD4154357CA320908C5A7A35ED81FA2A9856C28D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tD4154357CA320908C5A7A35ED81FA2A9856C28D9_ComCallableWrapper(obj));
}

struct Dictionary_2_tDC0461D8CBB2E6B52DD2C421114EDE7C1C70DE73_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tDC0461D8CBB2E6B52DD2C421114EDE7C1C70DE73_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tDC0461D8CBB2E6B52DD2C421114EDE7C1C70DE73_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tDC0461D8CBB2E6B52DD2C421114EDE7C1C70DE73_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tDC0461D8CBB2E6B52DD2C421114EDE7C1C70DE73(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tDC0461D8CBB2E6B52DD2C421114EDE7C1C70DE73_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tDC0461D8CBB2E6B52DD2C421114EDE7C1C70DE73_ComCallableWrapper(obj));
}

struct Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF_ComCallableWrapper>, IMap_2_tC3D3490C215B5BC50C44CBE8A393B0A02DDBD026, IIterable_1_tA2F7DBEE7B5B5740D809CF1A07C5553C49B0F30B, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4
{
	inline Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tC3D3490C215B5BC50C44CBE8A393B0A02DDBD026::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tC3D3490C215B5BC50C44CBE8A393B0A02DDBD026*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tA2F7DBEE7B5B5740D809CF1A07C5553C49B0F30B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tA2F7DBEE7B5B5740D809CF1A07C5553C49B0F30B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4*>(this);
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
		interfaceIds[0] = IMap_2_tC3D3490C215B5BC50C44CBE8A393B0A02DDBD026::IID;
		interfaceIds[1] = IIterable_1_tA2F7DBEE7B5B5740D809CF1A07C5553C49B0F30B::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m5015273ED12787652BA246120ABF173B8C7E5CF2(uint32_t ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m5015273ED12787652BA246120ABF173B8C7E5CF2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m63087001A446C6C01A81DB89F0F21C112E633200(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m63087001A446C6C01A81DB89F0F21C112E633200_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m17D400E7107A122BA3D5D24430A8C930DBF95F41(uint32_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m17D400E7107A122BA3D5D24430A8C930DBF95F41_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mD2CD76C626C9D1DF0180B0D47E59F8727CC0B918(IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mD2CD76C626C9D1DF0180B0D47E59F8727CC0B918_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m34FB3AE8183AFE973FC389124AD835B70EF33373(uint32_t ___0_key, Il2CppHString ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m34FB3AE8183AFE973FC389124AD835B70EF33373_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m421081CD57C3F899601A3CA81AEB60C776C8E99E(uint32_t ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m421081CD57C3F899601A3CA81AEB60C776C8E99E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9BD9BD5C362E59193E8C0AFA3D499EFC21C0E0C2() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m9BD9BD5C362E59193E8C0AFA3D499EFC21C0E0C2_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5E4173DDA982224466516A74A2756A58FCC45A6F(IIterator_1_t73460F6E7218A58467D9DBD7758A859AA41ABBF7** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m5E4173DDA982224466516A74A2756A58FCC45A6F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mD19D0FB5F2540564CE2A86F72C6A05EE3E699B45(uint32_t ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mD19D0FB5F2540564CE2A86F72C6A05EE3E699B45_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m6559E51C978F38036AD5B6AA938E192183941FA6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m6559E51C978F38036AD5B6AA938E192183941FA6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mC3BCE9D4AF3844152BFB815DBDEB0D9DB84509D2(uint32_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mC3BCE9D4AF3844152BFB815DBDEB0D9DB84509D2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD1955AEC612339E9B9C84520EE3F3C2A5BFE81F5(IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4** ___0_first, IMapView_2_tBF84FEC2CA4EDD36E68789C6C14D04B4017926F4** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mD1955AEC612339E9B9C84520EE3F3C2A5BFE81F5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF_ComCallableWrapper(obj));
}

struct Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0_ComCallableWrapper(obj));
}

struct Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED_ComCallableWrapper(obj));
}

struct Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27_ComCallableWrapper(obj));
}
