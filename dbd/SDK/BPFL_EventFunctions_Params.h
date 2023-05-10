#pragma once

/**
 * Name: dbd
 * Version: 6711
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPFL_EventFunctions.BPFL_EventFunctions_C.UnregisterEventListener
	 */
	struct UBPFL_EventFunctions_C_UnregisterEventListener_Params
	{
	public:
		struct FGameEventDispatcherHandleBP                        GameEventDelegateHandle;                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_EventFunctions.BPFL_EventFunctions_C.LocallyDispatchEvent
	 */
	struct UBPFL_EventFunctions_C_LocallyDispatchEvent_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XGKV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Instigator;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Target;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CustomValue;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TL4D[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_EventFunctions.BPFL_EventFunctions_C.RemotelyDispatchEvent
	 */
	struct UBPFL_EventFunctions_C_RemotelyDispatchEvent_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_II32[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Instigator;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Target;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CustomValue;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MMDZ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_EventFunctions.BPFL_EventFunctions_C.RegisterEventListener
	 */
	struct UBPFL_EventFunctions_C_RegisterEventListener_Params
	{
	public:
		class FScriptDelegate                                      GameEventDelegate;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
		struct FGameplayTag                                        Filter;                                                  // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameEventDispatcherHandleBP                        GameEventDispatcherHandle;                               // 0x0028(0x0020)  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
