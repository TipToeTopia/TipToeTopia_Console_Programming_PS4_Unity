﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69;
// System.Action`2<System.Int32,System.Object>
struct Action_2_tDD9145FF6BEFC0F795374D3C54FE5138E8FDDC96;
// System.Action`2<System.Int32,System.String>
struct Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E;
// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>
struct Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mAE82763C69B62BB2DCEC50B2155DC3C01EC0B853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mF977BD6E0AC11495BFEA806E8C8B68309E0A93FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mEB548896FF6E1DBCAF2EA1E8DFF4FD4E87E93674_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBD55D819095BEB8CFBE9189C81CA6F594153328E 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngineInternal.Input.NativeInputSystem
struct NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8  : public RuntimeObject
{
public:

public:
};

struct NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_StaticFields
{
public:
	// UnityEngineInternal.Input.NativeUpdateCallback UnityEngineInternal.Input.NativeInputSystem::onUpdate
	NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * ___onUpdate_0;
	// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> UnityEngineInternal.Input.NativeInputSystem::onBeforeUpdate
	Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 * ___onBeforeUpdate_1;
	// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> UnityEngineInternal.Input.NativeInputSystem::onShouldRunUpdate
	Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 * ___onShouldRunUpdate_2;
	// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___s_OnDeviceDiscoveredCallback_3;

public:
	inline static int32_t get_offset_of_onUpdate_0() { return static_cast<int32_t>(offsetof(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_StaticFields, ___onUpdate_0)); }
	inline NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * get_onUpdate_0() const { return ___onUpdate_0; }
	inline NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 ** get_address_of_onUpdate_0() { return &___onUpdate_0; }
	inline void set_onUpdate_0(NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * value)
	{
		___onUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_0), (void*)value);
	}

	inline static int32_t get_offset_of_onBeforeUpdate_1() { return static_cast<int32_t>(offsetof(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_StaticFields, ___onBeforeUpdate_1)); }
	inline Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 * get_onBeforeUpdate_1() const { return ___onBeforeUpdate_1; }
	inline Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 ** get_address_of_onBeforeUpdate_1() { return &___onBeforeUpdate_1; }
	inline void set_onBeforeUpdate_1(Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 * value)
	{
		___onBeforeUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onBeforeUpdate_1), (void*)value);
	}

	inline static int32_t get_offset_of_onShouldRunUpdate_2() { return static_cast<int32_t>(offsetof(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_StaticFields, ___onShouldRunUpdate_2)); }
	inline Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 * get_onShouldRunUpdate_2() const { return ___onShouldRunUpdate_2; }
	inline Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 ** get_address_of_onShouldRunUpdate_2() { return &___onShouldRunUpdate_2; }
	inline void set_onShouldRunUpdate_2(Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 * value)
	{
		___onShouldRunUpdate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onShouldRunUpdate_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnDeviceDiscoveredCallback_3() { return static_cast<int32_t>(offsetof(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_StaticFields, ___s_OnDeviceDiscoveredCallback_3)); }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * get_s_OnDeviceDiscoveredCallback_3() const { return ___s_OnDeviceDiscoveredCallback_3; }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 ** get_address_of_s_OnDeviceDiscoveredCallback_3() { return &___s_OnDeviceDiscoveredCallback_3; }
	inline void set_s_OnDeviceDiscoveredCallback_3(Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * value)
	{
		___s_OnDeviceDiscoveredCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnDeviceDiscoveredCallback_3), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngineInternal.Input.NativeInputEventBuffer
struct NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Void* UnityEngineInternal.Input.NativeInputEventBuffer::eventBuffer
					void* ___eventBuffer_0;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					void* ___eventBuffer_0_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding[8];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::eventCount
					int32_t ___eventCount_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding_forAlignmentOnly[8];
					int32_t ___eventCount_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[12];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::sizeInBytes
					int32_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[12];
					int32_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::capacityInBytes
					int32_t ___capacityInBytes_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding_forAlignmentOnly[16];
					int32_t ___capacityInBytes_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4__padding[20];
	};

public:
	inline static int32_t get_offset_of_eventBuffer_0() { return static_cast<int32_t>(offsetof(NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4, ___eventBuffer_0)); }
	inline void* get_eventBuffer_0() const { return ___eventBuffer_0; }
	inline void** get_address_of_eventBuffer_0() { return &___eventBuffer_0; }
	inline void set_eventBuffer_0(void* value)
	{
		___eventBuffer_0 = value;
	}

	inline static int32_t get_offset_of_eventCount_1() { return static_cast<int32_t>(offsetof(NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4, ___eventCount_1)); }
	inline int32_t get_eventCount_1() const { return ___eventCount_1; }
	inline int32_t* get_address_of_eventCount_1() { return &___eventCount_1; }
	inline void set_eventCount_1(int32_t value)
	{
		___eventCount_1 = value;
	}

	inline static int32_t get_offset_of_sizeInBytes_2() { return static_cast<int32_t>(offsetof(NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4, ___sizeInBytes_2)); }
	inline int32_t get_sizeInBytes_2() const { return ___sizeInBytes_2; }
	inline int32_t* get_address_of_sizeInBytes_2() { return &___sizeInBytes_2; }
	inline void set_sizeInBytes_2(int32_t value)
	{
		___sizeInBytes_2 = value;
	}

	inline static int32_t get_offset_of_capacityInBytes_3() { return static_cast<int32_t>(offsetof(NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4, ___capacityInBytes_3)); }
	inline int32_t get_capacityInBytes_3() const { return ___capacityInBytes_3; }
	inline int32_t* get_address_of_capacityInBytes_3() { return &___capacityInBytes_3; }
	inline void set_capacityInBytes_3(int32_t value)
	{
		___capacityInBytes_3 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngineInternal.Input.NativeInputUpdateType
struct NativeInputUpdateType_t4225BE835D53F0F56168B34BEF726468058A5C94 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeInputUpdateType_t4225BE835D53F0F56168B34BEF726468058A5C94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Int32,System.String>
struct Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>
struct Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m0D209CF360D14991E324C1E8CEF44ADCD3221F07_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m8BBAA8DB79C997A6A50E8482DE93CF79B0FCAA42_gshared (Action_2_tDD9145FF6BEFC0F795374D3C54FE5138E8FDDC96 * __this, int32_t ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32Enum,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_mB78B794D170AFCEF85EB351F63293E98F8B89119_gshared (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * __this, int32_t ___arg0, const RuntimeMethod* method);

// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_m5F071F40EB3C2A0B86913CEDC03F3AA7112EB68B (bool ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>::Invoke(!0)
inline void Action_1_Invoke_mAE82763C69B62BB2DCEC50B2155DC3C01EC0B853 (Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m0D209CF360D14991E324C1E8CEF44ADCD3221F07_gshared)(__this, ___obj0, method);
}
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUpdateCallback_Invoke_m323D2546D5B759E75B912EBF7ACF1EC1113DBFCC (NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * __this, int32_t ___updateType0, NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 * ___buffer1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_mF977BD6E0AC11495BFEA806E8C8B68309E0A93FE (Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * __this, int32_t ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *, int32_t, String_t*, const RuntimeMethod*))Action_2_Invoke_m8BBAA8DB79C997A6A50E8482DE93CF79B0FCAA42_gshared)(__this, ___arg10, ___arg21, method);
}
// !1 System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_mEB548896FF6E1DBCAF2EA1E8DFF4FD4E87E93674 (Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 * __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 *, int32_t, const RuntimeMethod*))Func_2_Invoke_mB78B794D170AFCEF85EB351F63293E98F8B89119_gshared)(__this, ___arg0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem__cctor_m3BC901B5BBA7D392F2E7D8CAECFD776DA9008171 (const RuntimeMethod* method)
{
	{
		NativeInputSystem_set_hasDeviceDiscoveredCallback_m5F071F40EB3C2A0B86913CEDC03F3AA7112EB68B((bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyBeforeUpdate_m10163C54D7E8DCFF64B6D2E0E6DC9020DA9EDFAF (int32_t ___updateType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mAE82763C69B62BB2DCEC50B2155DC3C01EC0B853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var);
		Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 * L_0 = ((NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var))->get_onBeforeUpdate_1();
		V_0 = L_0;
		Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t00E4A8EB7B3DEB920C557B08D67DF7101F4ADF69 * L_3 = V_0;
		int32_t L_4 = ___updateType0;
		Action_1_Invoke_mAE82763C69B62BB2DCEC50B2155DC3C01EC0B853(L_3, L_4, /*hidden argument*/Action_1_Invoke_mAE82763C69B62BB2DCEC50B2155DC3C01EC0B853_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyUpdate_m3FEEEF44D59A1DF6C8D47515039AEBD3909748C5 (int32_t ___updateType0, intptr_t ___eventBuffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * V_0 = NULL;
	NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 * V_1 = NULL;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var);
		NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * L_0 = ((NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var))->get_onUpdate_0();
		V_0 = L_0;
		void* L_1;
		L_1 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&___eventBuffer1), /*hidden argument*/NULL);
		V_1 = (NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 *)L_1;
		NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * L_2 = V_0;
		V_2 = (bool)((((RuntimeObject*)(NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 * L_4 = V_1;
		L_4->set_eventCount_1(0);
		NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 * L_5 = V_1;
		L_5->set_sizeInBytes_2(0);
		goto IL_0034;
	}

IL_0029:
	{
		NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * L_6 = V_0;
		int32_t L_7 = ___updateType0;
		NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 * L_8 = V_1;
		NativeUpdateCallback_Invoke_m323D2546D5B759E75B912EBF7ACF1EC1113DBFCC(L_6, L_7, (NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 *)(NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 *)L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyDeviceDiscovered_mE2A2EE5101C84476F03E375C543C0A90E71ABED4 (int32_t ___deviceId0, String_t* ___deviceDescriptor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mF977BD6E0AC11495BFEA806E8C8B68309E0A93FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var);
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_0 = ((NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var))->get_s_OnDeviceDiscoveredCallback_3();
		V_0 = L_0;
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_3 = V_0;
		int32_t L_4 = ___deviceId0;
		String_t* L_5 = ___deviceDescriptor1;
		Action_2_Invoke_mF977BD6E0AC11495BFEA806E8C8B68309E0A93FE(L_3, L_4, L_5, /*hidden argument*/Action_2_Invoke_mF977BD6E0AC11495BFEA806E8C8B68309E0A93FE_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_ShouldRunUpdate_m1399A591D0D59B1B4E8F05E26ECA85979583214A (int32_t ___updateType0, bool* ___retval1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mEB548896FF6E1DBCAF2EA1E8DFF4FD4E87E93674_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 * V_0 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var);
		Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 * L_0 = ((NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t572C01B054179054C92FCEFDB084BB5E8451BEA8_il2cpp_TypeInfo_var))->get_onShouldRunUpdate_2();
		V_0 = L_0;
		bool* L_1 = ___retval1;
		Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 * L_2 = V_0;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_000e:
	{
		Func_2_t9D79DEEDC6C6EC508B371394EC6976EDC57FB472 * L_3 = V_0;
		int32_t L_4 = ___updateType0;
		bool L_5;
		L_5 = Func_2_Invoke_mEB548896FF6E1DBCAF2EA1E8DFF4FD4E87E93674(L_3, L_4, /*hidden argument*/Func_2_Invoke_mEB548896FF6E1DBCAF2EA1E8DFF4FD4E87E93674_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_m5F071F40EB3C2A0B86913CEDC03F3AA7112EB68B (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NativeInputSystem_set_hasDeviceDiscoveredCallback_m5F071F40EB3C2A0B86913CEDC03F3AA7112EB68B_ftn) (bool);
	static NativeInputSystem_set_hasDeviceDiscoveredCallback_m5F071F40EB3C2A0B86913CEDC03F3AA7112EB68B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_set_hasDeviceDiscoveredCallback_m5F071F40EB3C2A0B86913CEDC03F3AA7112EB68B_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 (NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * __this, int32_t ___updateType0, NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 * ___buffer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___updateType0, ___buffer1);

}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUpdateCallback__ctor_mBCA97F21830E76C5C6422815CEA55013C19E30B6 (NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUpdateCallback_Invoke_m323D2546D5B759E75B912EBF7ACF1EC1113DBFCC (NativeUpdateCallback_t617743B3361FE4B086E28DDB8EDB4A7AC2490FC6 * __this, int32_t ___updateType0, NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 * ___buffer1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___updateType0, ___buffer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___updateType0, ___buffer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___updateType0) - 1), ___buffer1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, NativeInputEventBuffer_t023B708C62AA03D87D92E48DC9C472FDAC4375B4 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___updateType0, ___buffer1, targetMethod);
			}
		}
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
