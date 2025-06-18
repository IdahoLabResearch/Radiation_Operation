#include "pch-cpp.hpp"




#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct KeyCollection_tF10B99F6E09082A28F0A88CEEFEE8EEC2974C5B1;
struct KeyCollection_tFE5FBA5E830CEC8CCF69FFCC2A0F7E398DC69DD4;
struct KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B;
struct KeyCollection_tA222D41639096ACC5CFEF4F8C91BA2BFDEEDA19C;
struct KeyCollection_t304DFD5A0E4619A012FCB1763FC797D8F7CBA71A;
struct KeyCollection_t31778E37064B20473E234BE4072FB2008963CA04;
struct ValueCollection_tA72BD7D724CE3349A8B73188A810631DD6C92C68;
struct ValueCollection_t1BC017A4606D628FD831524F3D0D25B115E8C902;
struct ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08;
struct ValueCollection_t0FECE70B0A65619572297DAD06A6618E4A6A044D;
struct ValueCollection_t34BBEB9C03313D552CDFBC4C7554A405EF018D18;
struct ValueCollection_t213820D1291B006215466FC472F2AF2A1295581B;
struct EntryU5BU5D_t2D773360023B366541A954D8D8740BA28904C9FE;
struct EntryU5BU5D_tFA629ADBFE833B08B4110D3A1A44A94E9DB19D44;
struct EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D;
struct EntryU5BU5D_t66003D39C62F5C4D6ABE34EAF1A21A549D8F7386;
struct EntryU5BU5D_t0251DEA7A90D733BCA68E7A473C992294FE187F4;
struct EntryU5BU5D_t78B8E710EE9395C4BF503D2160E92165447499A5;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t04B3E1791DA6C7C33C73FE8B05B06560A27B63EA;
struct IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t8CBFAB6169A9B7F5ECDBC048D811C34DB2916034 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEB7324FF3D71FAC3BE3AF13333F723EB32910FE3(IIterator_1_t04B3E1791DA6C7C33C73FE8B05B06560A27B63EA** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m862AFAC632CDBE4E632B6F9D75F9A14E40F29EA0(int32_t ___0_key, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mD0FDE5F72CEACFFFC6E0444BE1BE0A53346CEF33(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1F1B54F2E279C858D85C137E87E7DE6918FE90DD(int32_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mEC92701B394634036A9AAF157627743A57040FD5(IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1** ___0_first, IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1** ___1_second) = 0;
};
struct NOVTABLE IMap_2_t3D320724FDE659D05B6077D091F4742ACE27125A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mBDED666304189CF48B3140804EF74CAFC3A70A55(int32_t ___0_key, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m87C837CE2DF1B1E64A938729F5645F545282F863(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m6F42302E5CF0EF61ADADB3593DDC64F5618C63D7(int32_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m12C4C75315B60AD6D7ECD7B5D03D53F185E296DB(IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m01F1C4B07FD0116FA3945153FA47C640EB928D98(int32_t ___0_key, uint32_t ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m2DD05DA69D32C4BF26A58FF71ED928D2F8C6A364(int32_t ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mA81F2053C69005F67B481EB8A6A0F01907562DB8() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t2D773360023B366541A954D8D8740BA28904C9FE* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF10B99F6E09082A28F0A88CEEFEE8EEC2974C5B1* ____keys;
	ValueCollection_tA72BD7D724CE3349A8B73188A810631DD6C92C68* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t0526AECE934424D76FE3AB711BC33997A7DF331C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tFA629ADBFE833B08B4110D3A1A44A94E9DB19D44* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFE5FBA5E830CEC8CCF69FFCC2A0F7E398DC69DD4* ____keys;
	ValueCollection_t1BC017A4606D628FD831524F3D0D25B115E8C902* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B* ____keys;
	ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3E357A1769AE47773EA400B376B6EE4170AFF709  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t66003D39C62F5C4D6ABE34EAF1A21A549D8F7386* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA222D41639096ACC5CFEF4F8C91BA2BFDEEDA19C* ____keys;
	ValueCollection_t0FECE70B0A65619572297DAD06A6618E4A6A044D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0251DEA7A90D733BCA68E7A473C992294FE187F4* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t304DFD5A0E4619A012FCB1763FC797D8F7CBA71A* ____keys;
	ValueCollection_t34BBEB9C03313D552CDFBC4C7554A405EF018D18* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t78B8E710EE9395C4BF503D2160E92165447499A5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t31778E37064B20473E234BE4072FB2008963CA04* ____keys;
	ValueCollection_t213820D1291B006215466FC472F2AF2A1295581B* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IMap_2_Lookup_mBDED666304189CF48B3140804EF74CAFC3A70A55_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m87C837CE2DF1B1E64A938729F5645F545282F863_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m6F42302E5CF0EF61ADADB3593DDC64F5618C63D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m12C4C75315B60AD6D7ECD7B5D03D53F185E296DB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m01F1C4B07FD0116FA3945153FA47C640EB928D98_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, uint32_t ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m2DD05DA69D32C4BF26A58FF71ED928D2F8C6A364_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key);
il2cpp_hresult_t IMap_2_Clear_mA81F2053C69005F67B481EB8A6A0F01907562DB8_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mEB7324FF3D71FAC3BE3AF13333F723EB32910FE3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t04B3E1791DA6C7C33C73FE8B05B06560A27B63EA** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m862AFAC632CDBE4E632B6F9D75F9A14E40F29EA0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mD0FDE5F72CEACFFFC6E0444BE1BE0A53346CEF33_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m1F1B54F2E279C858D85C137E87E7DE6918FE90DD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mEC92701B394634036A9AAF157627743A57040FD5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1** ___0_first, IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1** ___1_second);



struct Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_ComCallableWrapper>, IMap_2_t3D320724FDE659D05B6077D091F4742ACE27125A, IIterable_1_t8CBFAB6169A9B7F5ECDBC048D811C34DB2916034, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1
{
	inline Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t3D320724FDE659D05B6077D091F4742ACE27125A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t3D320724FDE659D05B6077D091F4742ACE27125A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t8CBFAB6169A9B7F5ECDBC048D811C34DB2916034::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t8CBFAB6169A9B7F5ECDBC048D811C34DB2916034*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1*>(this);
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
		interfaceIds[0] = IMap_2_t3D320724FDE659D05B6077D091F4742ACE27125A::IID;
		interfaceIds[1] = IIterable_1_t8CBFAB6169A9B7F5ECDBC048D811C34DB2916034::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mBDED666304189CF48B3140804EF74CAFC3A70A55(int32_t ___0_key, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_mBDED666304189CF48B3140804EF74CAFC3A70A55_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m87C837CE2DF1B1E64A938729F5645F545282F863(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m87C837CE2DF1B1E64A938729F5645F545282F863_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m6F42302E5CF0EF61ADADB3593DDC64F5618C63D7(int32_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m6F42302E5CF0EF61ADADB3593DDC64F5618C63D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m12C4C75315B60AD6D7ECD7B5D03D53F185E296DB(IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m12C4C75315B60AD6D7ECD7B5D03D53F185E296DB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m01F1C4B07FD0116FA3945153FA47C640EB928D98(int32_t ___0_key, uint32_t ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m01F1C4B07FD0116FA3945153FA47C640EB928D98_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m2DD05DA69D32C4BF26A58FF71ED928D2F8C6A364(int32_t ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m2DD05DA69D32C4BF26A58FF71ED928D2F8C6A364_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mA81F2053C69005F67B481EB8A6A0F01907562DB8() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mA81F2053C69005F67B481EB8A6A0F01907562DB8_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEB7324FF3D71FAC3BE3AF13333F723EB32910FE3(IIterator_1_t04B3E1791DA6C7C33C73FE8B05B06560A27B63EA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEB7324FF3D71FAC3BE3AF13333F723EB32910FE3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m862AFAC632CDBE4E632B6F9D75F9A14E40F29EA0(int32_t ___0_key, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m862AFAC632CDBE4E632B6F9D75F9A14E40F29EA0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mD0FDE5F72CEACFFFC6E0444BE1BE0A53346CEF33(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mD0FDE5F72CEACFFFC6E0444BE1BE0A53346CEF33_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1F1B54F2E279C858D85C137E87E7DE6918FE90DD(int32_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m1F1B54F2E279C858D85C137E87E7DE6918FE90DD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mEC92701B394634036A9AAF157627743A57040FD5(IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1** ___0_first, IMapView_2_t435E5180756974A65021820CE1121D14A6D365E1** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mEC92701B394634036A9AAF157627743A57040FD5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_ComCallableWrapper(obj));
}

struct Dictionary_2_t0526AECE934424D76FE3AB711BC33997A7DF331C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t0526AECE934424D76FE3AB711BC33997A7DF331C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t0526AECE934424D76FE3AB711BC33997A7DF331C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t0526AECE934424D76FE3AB711BC33997A7DF331C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t0526AECE934424D76FE3AB711BC33997A7DF331C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t0526AECE934424D76FE3AB711BC33997A7DF331C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t0526AECE934424D76FE3AB711BC33997A7DF331C_ComCallableWrapper(obj));
}

struct Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0_ComCallableWrapper(obj));
}

struct Dictionary_2_t3E357A1769AE47773EA400B376B6EE4170AFF709_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t3E357A1769AE47773EA400B376B6EE4170AFF709_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t3E357A1769AE47773EA400B376B6EE4170AFF709_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t3E357A1769AE47773EA400B376B6EE4170AFF709_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t3E357A1769AE47773EA400B376B6EE4170AFF709(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t3E357A1769AE47773EA400B376B6EE4170AFF709_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t3E357A1769AE47773EA400B376B6EE4170AFF709_ComCallableWrapper(obj));
}

struct Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_ComCallableWrapper(obj));
}

struct Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_ComCallableWrapper(obj));
}
