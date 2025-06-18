#include "pch-cpp.hpp"




#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct KeyCollection_t97828E793E08E7AE593254EBFD6895A9E9604AF2;
struct KeyCollection_t8440122F14DC6A1AF95D4B31A198A41CFB0B6EBD;
struct KeyCollection_t964FB6F0B8AB39EFA999EEB4CD7A3BAC03155322;
struct KeyCollection_tD1936865E635C816F656BCB3D050A69085C59B01;
struct KeyCollection_tD0682AD32D5103AA26BD9ACE4E4C55033A748E6B;
struct KeyCollection_tB8089C47DE42CE5424A9FA4059BCA47EA7AC8410;
struct ValueCollection_tBB50DA6B04BF6793F609F48ADA1A351088E36D60;
struct ValueCollection_t65F3B995DF2A2E03202A98C05FD28FC7174550E4;
struct ValueCollection_t3A77F3AE705D5AB7F79B9B2E629F8E76A8EB0603;
struct ValueCollection_t7F4BE9D6703B6E51587A5A9F3F0F916189979EF7;
struct ValueCollection_t7EFC1233BDEF920B9CFDF75D25CF9890FFAA7376;
struct ValueCollection_tFB11AF1A16E62995C9860FE31669231CB4EE2218;
struct EntryU5BU5D_t0D4B039A690585E4A149FAC6B11C554E9BAA164A;
struct EntryU5BU5D_tB4084BECACC34BA7F32389FFE707850E51F97B80;
struct EntryU5BU5D_tE7E8E9AC1C54379B490D0E2C248EE74E4B8E411B;
struct EntryU5BU5D_tDC8844A92E01CBE004A36690A4A33B88E4FCC3CE;
struct EntryU5BU5D_t54BD433DD7B276DC1AEFC02D77EE1AAAD0F3E78E;
struct EntryU5BU5D_t53979C3433EC7FD8A316D31E1CC2D6DE1ACD74FC;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t20ADB1ADCD52494C3072399D70BE0761A2D400A4;
struct IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t0BE64794F1F71424467E92FCF6DE58ED5B11502D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m79D4EE2EBC5486DC9E53B54D6F1573FBDC8F2F4E(IIterator_1_t20ADB1ADCD52494C3072399D70BE0761A2D400A4** comReturnValue) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0D4B039A690585E4A149FAC6B11C554E9BAA164A* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t97828E793E08E7AE593254EBFD6895A9E9604AF2* ____keys;
	ValueCollection_tBB50DA6B04BF6793F609F48ADA1A351088E36D60* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3ECC0A0D579183A347F8AE00758620AA008C715A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB4084BECACC34BA7F32389FFE707850E51F97B80* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t8440122F14DC6A1AF95D4B31A198A41CFB0B6EBD* ____keys;
	ValueCollection_t65F3B995DF2A2E03202A98C05FD28FC7174550E4* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tD24879A9B92D2B2D486110818CD29C513B42AF62  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE7E8E9AC1C54379B490D0E2C248EE74E4B8E411B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t964FB6F0B8AB39EFA999EEB4CD7A3BAC03155322* ____keys;
	ValueCollection_t3A77F3AE705D5AB7F79B9B2E629F8E76A8EB0603* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tDC8844A92E01CBE004A36690A4A33B88E4FCC3CE* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD1936865E635C816F656BCB3D050A69085C59B01* ____keys;
	ValueCollection_t7F4BE9D6703B6E51587A5A9F3F0F916189979EF7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t4003FE92106CBCA42529AD4D4999203963E3C73F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t54BD433DD7B276DC1AEFC02D77EE1AAAD0F3E78E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD0682AD32D5103AA26BD9ACE4E4C55033A748E6B* ____keys;
	ValueCollection_t7EFC1233BDEF920B9CFDF75D25CF9890FFAA7376* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tBDD02A03073B49D98E514F9FDE894CE445376A36  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t53979C3433EC7FD8A316D31E1CC2D6DE1ACD74FC* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB8089C47DE42CE5424A9FA4059BCA47EA7AC8410* ____keys;
	ValueCollection_tFB11AF1A16E62995C9860FE31669231CB4EE2218* ____values;
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
struct NOVTABLE IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mE7EE4A44941FEF5A6BB05DB317BD176CFDDB13A1(int32_t ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m8DB5D9C87E5780D72C17B06BA3F3F9248F06342C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mA879F040F2798061145C23989D33092AE3561A95(int32_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mFB6DA67BA8BC2B895897401497358FAB9841A399(IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB** ___0_first, IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB** ___1_second) = 0;
};
struct NOVTABLE IMap_2_tFBE9CCEA135F902CD32A9F36EF492DDE70FFB899 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m6EE99903F58F3C17E98BFB49F922DAD650823DB6(int32_t ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m40E78251A9B3E40E40E27DAAA964B6E6AF9D06A2(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1D81A9319F3046D9660CF07E46D83CF47B5385C8(int32_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m50B6B1A6282D51C590B6A07B5BE91110D8CBF82F(IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mB4D9A89ABAAA9896E93166073CC430981A06C415(int32_t ___0_key, Il2CppWindowsRuntimeTypeName ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m4B1BA54B8D4B66E038FA71FA76DA15707BD676FD(int32_t ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m051E3B724C43373F324D6E07D6D03768DD5637A4() = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m6EE99903F58F3C17E98BFB49F922DAD650823DB6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m40E78251A9B3E40E40E27DAAA964B6E6AF9D06A2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m1D81A9319F3046D9660CF07E46D83CF47B5385C8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m50B6B1A6282D51C590B6A07B5BE91110D8CBF82F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mB4D9A89ABAAA9896E93166073CC430981A06C415_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, Il2CppWindowsRuntimeTypeName ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m4B1BA54B8D4B66E038FA71FA76DA15707BD676FD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key);
il2cpp_hresult_t IMap_2_Clear_m051E3B724C43373F324D6E07D6D03768DD5637A4_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m79D4EE2EBC5486DC9E53B54D6F1573FBDC8F2F4E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t20ADB1ADCD52494C3072399D70BE0761A2D400A4** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mE7EE4A44941FEF5A6BB05DB317BD176CFDDB13A1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m8DB5D9C87E5780D72C17B06BA3F3F9248F06342C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mA879F040F2798061145C23989D33092AE3561A95_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mFB6DA67BA8BC2B895897401497358FAB9841A399_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB** ___0_first, IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB** ___1_second);



struct Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_ComCallableWrapper(obj));
}

struct Dictionary_2_t3ECC0A0D579183A347F8AE00758620AA008C715A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t3ECC0A0D579183A347F8AE00758620AA008C715A_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t3ECC0A0D579183A347F8AE00758620AA008C715A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t3ECC0A0D579183A347F8AE00758620AA008C715A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t3ECC0A0D579183A347F8AE00758620AA008C715A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t3ECC0A0D579183A347F8AE00758620AA008C715A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t3ECC0A0D579183A347F8AE00758620AA008C715A_ComCallableWrapper(obj));
}

struct Dictionary_2_tD24879A9B92D2B2D486110818CD29C513B42AF62_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tD24879A9B92D2B2D486110818CD29C513B42AF62_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tD24879A9B92D2B2D486110818CD29C513B42AF62_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tD24879A9B92D2B2D486110818CD29C513B42AF62_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tD24879A9B92D2B2D486110818CD29C513B42AF62(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tD24879A9B92D2B2D486110818CD29C513B42AF62_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tD24879A9B92D2B2D486110818CD29C513B42AF62_ComCallableWrapper(obj));
}

struct Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9_ComCallableWrapper(obj));
}

struct Dictionary_2_t4003FE92106CBCA42529AD4D4999203963E3C73F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t4003FE92106CBCA42529AD4D4999203963E3C73F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t4003FE92106CBCA42529AD4D4999203963E3C73F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t4003FE92106CBCA42529AD4D4999203963E3C73F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t4003FE92106CBCA42529AD4D4999203963E3C73F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t4003FE92106CBCA42529AD4D4999203963E3C73F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t4003FE92106CBCA42529AD4D4999203963E3C73F_ComCallableWrapper(obj));
}

struct Dictionary_2_tBDD02A03073B49D98E514F9FDE894CE445376A36_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tBDD02A03073B49D98E514F9FDE894CE445376A36_ComCallableWrapper>, IMap_2_tFBE9CCEA135F902CD32A9F36EF492DDE70FFB899, IIterable_1_t0BE64794F1F71424467E92FCF6DE58ED5B11502D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB
{
	inline Dictionary_2_tBDD02A03073B49D98E514F9FDE894CE445376A36_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tBDD02A03073B49D98E514F9FDE894CE445376A36_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tFBE9CCEA135F902CD32A9F36EF492DDE70FFB899::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tFBE9CCEA135F902CD32A9F36EF492DDE70FFB899*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0BE64794F1F71424467E92FCF6DE58ED5B11502D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0BE64794F1F71424467E92FCF6DE58ED5B11502D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB*>(this);
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
		interfaceIds[0] = IMap_2_tFBE9CCEA135F902CD32A9F36EF492DDE70FFB899::IID;
		interfaceIds[1] = IIterable_1_t0BE64794F1F71424467E92FCF6DE58ED5B11502D::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m6EE99903F58F3C17E98BFB49F922DAD650823DB6(int32_t ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m6EE99903F58F3C17E98BFB49F922DAD650823DB6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m40E78251A9B3E40E40E27DAAA964B6E6AF9D06A2(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m40E78251A9B3E40E40E27DAAA964B6E6AF9D06A2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1D81A9319F3046D9660CF07E46D83CF47B5385C8(int32_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m1D81A9319F3046D9660CF07E46D83CF47B5385C8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m50B6B1A6282D51C590B6A07B5BE91110D8CBF82F(IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m50B6B1A6282D51C590B6A07B5BE91110D8CBF82F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mB4D9A89ABAAA9896E93166073CC430981A06C415(int32_t ___0_key, Il2CppWindowsRuntimeTypeName ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mB4D9A89ABAAA9896E93166073CC430981A06C415_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m4B1BA54B8D4B66E038FA71FA76DA15707BD676FD(int32_t ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m4B1BA54B8D4B66E038FA71FA76DA15707BD676FD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m051E3B724C43373F324D6E07D6D03768DD5637A4() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m051E3B724C43373F324D6E07D6D03768DD5637A4_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m79D4EE2EBC5486DC9E53B54D6F1573FBDC8F2F4E(IIterator_1_t20ADB1ADCD52494C3072399D70BE0761A2D400A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m79D4EE2EBC5486DC9E53B54D6F1573FBDC8F2F4E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mE7EE4A44941FEF5A6BB05DB317BD176CFDDB13A1(int32_t ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mE7EE4A44941FEF5A6BB05DB317BD176CFDDB13A1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m8DB5D9C87E5780D72C17B06BA3F3F9248F06342C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m8DB5D9C87E5780D72C17B06BA3F3F9248F06342C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mA879F040F2798061145C23989D33092AE3561A95(int32_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mA879F040F2798061145C23989D33092AE3561A95_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mFB6DA67BA8BC2B895897401497358FAB9841A399(IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB** ___0_first, IMapView_2_tC33CCDB37B84B0E7329A0E831F1F9C441D1A10FB** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mFB6DA67BA8BC2B895897401497358FAB9841A399_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tBDD02A03073B49D98E514F9FDE894CE445376A36(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tBDD02A03073B49D98E514F9FDE894CE445376A36_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tBDD02A03073B49D98E514F9FDE894CE445376A36_ComCallableWrapper(obj));
}
