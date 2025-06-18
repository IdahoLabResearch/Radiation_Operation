#include "pch-cpp.hpp"




#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct KeyCollection_tA77FD1F3C4B579CC5CA9D12CD06FA2F0191A019D;
struct KeyCollection_t55696D134BBEF5DE1C8F892C5FC82FA1B46E840A;
struct KeyCollection_t116AF97BC911D4F9D2C6BE05C0E588083CD498AE;
struct KeyCollection_t83EA59C38F7E7FA9A6E7B437E0998010B86C3B74;
struct KeyCollection_tE9DB70F5884E89D1772E21D16434D28CC3076465;
struct KeyCollection_t680BCFBFAF3327C8FF86DCE628A73D8332CFB205;
struct ValueCollection_t20A674BBDAA1BDD52D1C302860E5F9DF7390F430;
struct ValueCollection_tB4F0C33FDBD15C4946D8D85C7B9EF94B43F19F3E;
struct ValueCollection_t7B769ABBF062D8AA17444EEB6DD784F00E2E6FCE;
struct ValueCollection_t36D8FB62A80F8A07B6AA846F403917C675F72B57;
struct ValueCollection_tF49DC761BAABDCF1EAE133ED3DB3EAC4DC5DDF1C;
struct ValueCollection_tE8308653281479414057477E806999F27BDF4A33;
struct EntryU5BU5D_t03249998F750A38A50294764FE8B3C034F75ABCD;
struct EntryU5BU5D_t99DC09B10D869AC5B5A04DAAFFC1DA90A35B26A1;
struct EntryU5BU5D_tF5C9825675AE2C2E466D4BA4CD84D6CD8C317850;
struct EntryU5BU5D_tB132446F915D95A6FD261BA70022317E624B3B08;
struct EntryU5BU5D_tD0EFFFD26FEDA18CD9D7D51A5EFC51F9FF3CAA4F;
struct EntryU5BU5D_t1E8A1532C27CC80F39CFA21D46B4CF060E7AD9E2;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t14D1822BAD047DFCC28C42B12A1C6AB088BF721B;
struct IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t344C5962099E0F45A1B7AE5FBDD1D57FCBFC51DA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB045A1D7AE28579544EA8FAA96E2FD4CE9AB7677(IIterator_1_t14D1822BAD047DFCC28C42B12A1C6AB088BF721B** comReturnValue) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t03249998F750A38A50294764FE8B3C034F75ABCD* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA77FD1F3C4B579CC5CA9D12CD06FA2F0191A019D* ____keys;
	ValueCollection_t20A674BBDAA1BDD52D1C302860E5F9DF7390F430* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t99DC09B10D869AC5B5A04DAAFFC1DA90A35B26A1* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t55696D134BBEF5DE1C8F892C5FC82FA1B46E840A* ____keys;
	ValueCollection_tB4F0C33FDBD15C4946D8D85C7B9EF94B43F19F3E* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t77E98BC317EF808DED789B3F747B6EA543A37463  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF5C9825675AE2C2E466D4BA4CD84D6CD8C317850* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t116AF97BC911D4F9D2C6BE05C0E588083CD498AE* ____keys;
	ValueCollection_t7B769ABBF062D8AA17444EEB6DD784F00E2E6FCE* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB132446F915D95A6FD261BA70022317E624B3B08* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t83EA59C38F7E7FA9A6E7B437E0998010B86C3B74* ____keys;
	ValueCollection_t36D8FB62A80F8A07B6AA846F403917C675F72B57* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t859718EF5EF701BC7D81252AF51DBBFF48AD2FA1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD0EFFFD26FEDA18CD9D7D51A5EFC51F9FF3CAA4F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE9DB70F5884E89D1772E21D16434D28CC3076465* ____keys;
	ValueCollection_tF49DC761BAABDCF1EAE133ED3DB3EAC4DC5DDF1C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tE4CF5543F76844546E4201920835D0464DAF537B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1E8A1532C27CC80F39CFA21D46B4CF060E7AD9E2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t680BCFBFAF3327C8FF86DCE628A73D8332CFB205* ____keys;
	ValueCollection_tE8308653281479414057477E806999F27BDF4A33* ____values;
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
struct NOVTABLE IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mEB06365FB8CB5F5EF53BAA5DC70EA47BDBF88D68(Il2CppWindowsRuntimeTypeName ___0_key, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1801EF3A8140C43A7C8DCB469F3CF508610751A9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m8F5C717CBB37A312DF31168EA02E7E90C3ECAF15(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m20161FEABFE35258F1363FF7EA85896AD09507DA(IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E** ___0_first, IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E** ___1_second) = 0;
};
struct NOVTABLE IMap_2_t998AFCBDE490D89691A0FF88A9CE4F09B9B1A49B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m04FAFDC73712EAC88CCCBA79A2E49E6B2B8C904C(Il2CppWindowsRuntimeTypeName ___0_key, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mB8B60BD88C2E69362E7F3D100F31C65D54B9C3EF(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m233353CB54FA828D4374493753C97ECB68BD79B8(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mC42900345645676AF6AC37ABAC0F5781DF9443E6(IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m43887E707AB073BDD4C6037218E641C1FD07DDC2(Il2CppWindowsRuntimeTypeName ___0_key, uint32_t ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m703C434650BB544A26CE5A7536B1B1CD6E42DBFC(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m59370EC22DF8DDBD08C7CD67B053BB729A24BEF7() = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IMap_2_Lookup_m04FAFDC73712EAC88CCCBA79A2E49E6B2B8C904C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mB8B60BD88C2E69362E7F3D100F31C65D54B9C3EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m233353CB54FA828D4374493753C97ECB68BD79B8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mC42900345645676AF6AC37ABAC0F5781DF9443E6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m43887E707AB073BDD4C6037218E641C1FD07DDC2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, uint32_t ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m703C434650BB544A26CE5A7536B1B1CD6E42DBFC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_m59370EC22DF8DDBD08C7CD67B053BB729A24BEF7_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mB045A1D7AE28579544EA8FAA96E2FD4CE9AB7677_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t14D1822BAD047DFCC28C42B12A1C6AB088BF721B** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mEB06365FB8CB5F5EF53BAA5DC70EA47BDBF88D68_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m1801EF3A8140C43A7C8DCB469F3CF508610751A9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m8F5C717CBB37A312DF31168EA02E7E90C3ECAF15_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m20161FEABFE35258F1363FF7EA85896AD09507DA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E** ___0_first, IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E** ___1_second);



struct Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05_ComCallableWrapper>, IMap_2_t998AFCBDE490D89691A0FF88A9CE4F09B9B1A49B, IIterable_1_t344C5962099E0F45A1B7AE5FBDD1D57FCBFC51DA, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E
{
	inline Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t998AFCBDE490D89691A0FF88A9CE4F09B9B1A49B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t998AFCBDE490D89691A0FF88A9CE4F09B9B1A49B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t344C5962099E0F45A1B7AE5FBDD1D57FCBFC51DA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t344C5962099E0F45A1B7AE5FBDD1D57FCBFC51DA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E*>(this);
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
		interfaceIds[0] = IMap_2_t998AFCBDE490D89691A0FF88A9CE4F09B9B1A49B::IID;
		interfaceIds[1] = IIterable_1_t344C5962099E0F45A1B7AE5FBDD1D57FCBFC51DA::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m04FAFDC73712EAC88CCCBA79A2E49E6B2B8C904C(Il2CppWindowsRuntimeTypeName ___0_key, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m04FAFDC73712EAC88CCCBA79A2E49E6B2B8C904C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mB8B60BD88C2E69362E7F3D100F31C65D54B9C3EF(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mB8B60BD88C2E69362E7F3D100F31C65D54B9C3EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m233353CB54FA828D4374493753C97ECB68BD79B8(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m233353CB54FA828D4374493753C97ECB68BD79B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mC42900345645676AF6AC37ABAC0F5781DF9443E6(IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mC42900345645676AF6AC37ABAC0F5781DF9443E6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m43887E707AB073BDD4C6037218E641C1FD07DDC2(Il2CppWindowsRuntimeTypeName ___0_key, uint32_t ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m43887E707AB073BDD4C6037218E641C1FD07DDC2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m703C434650BB544A26CE5A7536B1B1CD6E42DBFC(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m703C434650BB544A26CE5A7536B1B1CD6E42DBFC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m59370EC22DF8DDBD08C7CD67B053BB729A24BEF7() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m59370EC22DF8DDBD08C7CD67B053BB729A24BEF7_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB045A1D7AE28579544EA8FAA96E2FD4CE9AB7677(IIterator_1_t14D1822BAD047DFCC28C42B12A1C6AB088BF721B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mB045A1D7AE28579544EA8FAA96E2FD4CE9AB7677_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mEB06365FB8CB5F5EF53BAA5DC70EA47BDBF88D68(Il2CppWindowsRuntimeTypeName ___0_key, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mEB06365FB8CB5F5EF53BAA5DC70EA47BDBF88D68_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1801EF3A8140C43A7C8DCB469F3CF508610751A9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m1801EF3A8140C43A7C8DCB469F3CF508610751A9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m8F5C717CBB37A312DF31168EA02E7E90C3ECAF15(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m8F5C717CBB37A312DF31168EA02E7E90C3ECAF15_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m20161FEABFE35258F1363FF7EA85896AD09507DA(IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E** ___0_first, IMapView_2_t33FAF865591A010820E7598F009991FA4EBC387E** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m20161FEABFE35258F1363FF7EA85896AD09507DA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05_ComCallableWrapper(obj));
}

struct Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A_ComCallableWrapper(obj));
}

struct Dictionary_2_t77E98BC317EF808DED789B3F747B6EA543A37463_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t77E98BC317EF808DED789B3F747B6EA543A37463_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t77E98BC317EF808DED789B3F747B6EA543A37463_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t77E98BC317EF808DED789B3F747B6EA543A37463_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t77E98BC317EF808DED789B3F747B6EA543A37463(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t77E98BC317EF808DED789B3F747B6EA543A37463_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t77E98BC317EF808DED789B3F747B6EA543A37463_ComCallableWrapper(obj));
}

struct Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tD526B639CC6317BB12F45A134595B76D142DA2C1_ComCallableWrapper(obj));
}

struct Dictionary_2_t859718EF5EF701BC7D81252AF51DBBFF48AD2FA1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t859718EF5EF701BC7D81252AF51DBBFF48AD2FA1_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t859718EF5EF701BC7D81252AF51DBBFF48AD2FA1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t859718EF5EF701BC7D81252AF51DBBFF48AD2FA1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t859718EF5EF701BC7D81252AF51DBBFF48AD2FA1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t859718EF5EF701BC7D81252AF51DBBFF48AD2FA1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t859718EF5EF701BC7D81252AF51DBBFF48AD2FA1_ComCallableWrapper(obj));
}

struct Dictionary_2_tE4CF5543F76844546E4201920835D0464DAF537B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tE4CF5543F76844546E4201920835D0464DAF537B_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tE4CF5543F76844546E4201920835D0464DAF537B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tE4CF5543F76844546E4201920835D0464DAF537B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tE4CF5543F76844546E4201920835D0464DAF537B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tE4CF5543F76844546E4201920835D0464DAF537B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tE4CF5543F76844546E4201920835D0464DAF537B_ComCallableWrapper(obj));
}
