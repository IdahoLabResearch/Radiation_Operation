#include "pch-cpp.hpp"




#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct KeyCollection_t2B357606A0A02E15450DFA4CEFEC7AE50E4B398D;
struct KeyCollection_tB729D93646D8A6027E2D679782DDB7E901DCF0AF;
struct KeyCollection_t3575640C549DE0C7E24A50C20EEF818807D76D0B;
struct KeyCollection_tB85051CC3864AFB17DAD89C957D522CD315C7468;
struct KeyCollection_t15EEDCB8AD1B6D66B11102F6C608774BE45055C3;
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
struct ValueCollection_tD3EB8E9BC1FCF7BE9DCBC46C2517083BD443C78D;
struct ValueCollection_t4876451FA318FDA79A55527F48BEE069D876C982;
struct ValueCollection_t5E6A14DD0CAA2ED7985B5985168CC52AC0D4B809;
struct ValueCollection_tCC369E2FBF783D7EC0904D8C2FA476347D2DB243;
struct ValueCollection_t7B3B437C7076A1C527F148763DB94220402D97D7;
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
struct EntryU5BU5D_t607A63810D59CA9211EA44BF724C3CF32DB27D94;
struct EntryU5BU5D_t905677747FB83521132326E1936E2EDC193C684F;
struct EntryU5BU5D_tEE0A79692C3F237A74CADB72737344F4323824A4;
struct EntryU5BU5D_t08F60CF908D9099BDF2CC4CEC1CD5A3AD0484BF6;
struct EntryU5BU5D_tE9CB9A79C3F8882201B893D94A105690122BD854;
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A;
struct IIterator_1_tBB6FADFDFAF38D05605B973E51C6B48A0122CF40;
struct IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD058D179712C4018B99B783E24B78336A056E8C8(IIterator_1_tBB6FADFDFAF38D05605B973E51C6B48A0122CF40** comReturnValue) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t607A63810D59CA9211EA44BF724C3CF32DB27D94* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t2B357606A0A02E15450DFA4CEFEC7AE50E4B398D* ____keys;
	ValueCollection_tD3EB8E9BC1FCF7BE9DCBC46C2517083BD443C78D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t905677747FB83521132326E1936E2EDC193C684F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB729D93646D8A6027E2D679782DDB7E901DCF0AF* ____keys;
	ValueCollection_t4876451FA318FDA79A55527F48BEE069D876C982* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEE0A79692C3F237A74CADB72737344F4323824A4* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t3575640C549DE0C7E24A50C20EEF818807D76D0B* ____keys;
	ValueCollection_t5E6A14DD0CAA2ED7985B5985168CC52AC0D4B809* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t8CE01BF50BF06150609FD3EA65F0D579EE2DC411  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t08F60CF908D9099BDF2CC4CEC1CD5A3AD0484BF6* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB85051CC3864AFB17DAD89C957D522CD315C7468* ____keys;
	ValueCollection_tCC369E2FBF783D7EC0904D8C2FA476347D2DB243* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t303DCA18E8F72F03F9743103D41E82C26EA2367E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE9CB9A79C3F8882201B893D94A105690122BD854* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t15EEDCB8AD1B6D66B11102F6C608774BE45055C3* ____keys;
	ValueCollection_t7B3B437C7076A1C527F148763DB94220402D97D7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys;
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct NOVTABLE IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m99BAE388D3B59979CC69B576EAE5DC54C68B68F0(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m75F675F15B90CEE0072CE193F564C4D463068E8A(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4870D82D42B1F35D2D7CEB5FC6A1D1A12237622B(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m36E541102B2E2C0A717DB25EB338D216E79A3FC8(IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___0_first, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___1_second) = 0;
};
struct NOVTABLE IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m09DBF7F042AB20DC1EDD4F96CC7D0CFA675B94AF(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mE51973912653274766A4C679978C358509D6001A(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m0426FCB6DF60B8B9C3011832F5EEE4038E3E73F4(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2FBF700E9603095AE27E2AFDE6C6F4D28C460207(IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC870E0D4611D68E310B3F2E7ADBCC146AEA6637F(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A* ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m05D951C0273A8021A8A172C6031166DC047BA8DA(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m7A6514EB337BDCE30CF107C902B989476C2B719A() = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m09DBF7F042AB20DC1EDD4F96CC7D0CFA675B94AF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mE51973912653274766A4C679978C358509D6001A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m0426FCB6DF60B8B9C3011832F5EEE4038E3E73F4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m2FBF700E9603095AE27E2AFDE6C6F4D28C460207_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mC870E0D4611D68E310B3F2E7ADBCC146AEA6637F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A* ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m05D951C0273A8021A8A172C6031166DC047BA8DA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_m7A6514EB337BDCE30CF107C902B989476C2B719A_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mD058D179712C4018B99B783E24B78336A056E8C8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tBB6FADFDFAF38D05605B973E51C6B48A0122CF40** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m99BAE388D3B59979CC69B576EAE5DC54C68B68F0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m75F675F15B90CEE0072CE193F564C4D463068E8A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m4870D82D42B1F35D2D7CEB5FC6A1D1A12237622B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m36E541102B2E2C0A717DB25EB338D216E79A3FC8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___0_first, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___1_second);



struct Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182_ComCallableWrapper(obj));
}

struct Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper>, IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7, IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8
{
	inline Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8*>(this);
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
		interfaceIds[0] = IMap_2_tA96591BC6E75808572E0F883B02887C4924D9CE7::IID;
		interfaceIds[1] = IIterable_1_tD4B39232A2FF5F6116B72EEAA6B1EEDD2799A541::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m09DBF7F042AB20DC1EDD4F96CC7D0CFA675B94AF(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m09DBF7F042AB20DC1EDD4F96CC7D0CFA675B94AF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mE51973912653274766A4C679978C358509D6001A(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mE51973912653274766A4C679978C358509D6001A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m0426FCB6DF60B8B9C3011832F5EEE4038E3E73F4(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m0426FCB6DF60B8B9C3011832F5EEE4038E3E73F4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2FBF700E9603095AE27E2AFDE6C6F4D28C460207(IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m2FBF700E9603095AE27E2AFDE6C6F4D28C460207_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC870E0D4611D68E310B3F2E7ADBCC146AEA6637F(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A* ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mC870E0D4611D68E310B3F2E7ADBCC146AEA6637F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m05D951C0273A8021A8A172C6031166DC047BA8DA(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m05D951C0273A8021A8A172C6031166DC047BA8DA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m7A6514EB337BDCE30CF107C902B989476C2B719A() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m7A6514EB337BDCE30CF107C902B989476C2B719A_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD058D179712C4018B99B783E24B78336A056E8C8(IIterator_1_tBB6FADFDFAF38D05605B973E51C6B48A0122CF40** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD058D179712C4018B99B783E24B78336A056E8C8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m99BAE388D3B59979CC69B576EAE5DC54C68B68F0(Il2CppWindowsRuntimeTypeName ___0_key, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m99BAE388D3B59979CC69B576EAE5DC54C68B68F0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m75F675F15B90CEE0072CE193F564C4D463068E8A(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m75F675F15B90CEE0072CE193F564C4D463068E8A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4870D82D42B1F35D2D7CEB5FC6A1D1A12237622B(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m4870D82D42B1F35D2D7CEB5FC6A1D1A12237622B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m36E541102B2E2C0A717DB25EB338D216E79A3FC8(IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___0_first, IMapView_2_t8009ACAFAB73AE39E7E583437DF562C9C8A483A8** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m36E541102B2E2C0A717DB25EB338D216E79A3FC8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t88F9D07997217643F26FACD2A0561EE1E86E5E75_ComCallableWrapper(obj));
}

struct Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E_ComCallableWrapper(obj));
}

struct Dictionary_2_t8CE01BF50BF06150609FD3EA65F0D579EE2DC411_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t8CE01BF50BF06150609FD3EA65F0D579EE2DC411_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t8CE01BF50BF06150609FD3EA65F0D579EE2DC411_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t8CE01BF50BF06150609FD3EA65F0D579EE2DC411_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t8CE01BF50BF06150609FD3EA65F0D579EE2DC411(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t8CE01BF50BF06150609FD3EA65F0D579EE2DC411_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t8CE01BF50BF06150609FD3EA65F0D579EE2DC411_ComCallableWrapper(obj));
}

struct Dictionary_2_t303DCA18E8F72F03F9743103D41E82C26EA2367E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t303DCA18E8F72F03F9743103D41E82C26EA2367E_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t303DCA18E8F72F03F9743103D41E82C26EA2367E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t303DCA18E8F72F03F9743103D41E82C26EA2367E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t303DCA18E8F72F03F9743103D41E82C26EA2367E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t303DCA18E8F72F03F9743103D41E82C26EA2367E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t303DCA18E8F72F03F9743103D41E82C26EA2367E_ComCallableWrapper(obj));
}

struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper(obj));
}
