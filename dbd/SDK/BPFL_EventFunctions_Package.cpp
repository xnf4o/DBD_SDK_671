/**
 * Name: dbd
 * Version: 6711
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPFL_EventFunctions.BPFL_EventFunctions_C.UnregisterEventListener
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameEventDispatcherHandleBP                GameEventDelegateHandle                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_EventFunctions_C::STATIC_UnregisterEventListener(const struct FGameEventDispatcherHandleBP& GameEventDelegateHandle, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPFL_EventFunctions.BPFL_EventFunctions_C.UnregisterEventListener"));
		
		UBPFL_EventFunctions_C_UnregisterEventListener_Params params {};
		params.GameEventDelegateHandle = GameEventDelegateHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPFL_EventFunctions.BPFL_EventFunctions_C.LocallyDispatchEvent
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDPlayer*                                  Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CustomValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_EventFunctions_C::STATIC_LocallyDispatchEvent(const struct FGameplayTag& gameEventType, class ADBDPlayer* Instigator, class AActor* Target, float CustomValue, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPFL_EventFunctions.BPFL_EventFunctions_C.LocallyDispatchEvent"));
		
		UBPFL_EventFunctions_C_LocallyDispatchEvent_Params params {};
		params.gameEventType = gameEventType;
		params.Instigator = Instigator;
		params.Target = Target;
		params.CustomValue = CustomValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPFL_EventFunctions.BPFL_EventFunctions_C.RemotelyDispatchEvent
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDPlayer*                                  Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CustomValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_EventFunctions_C::STATIC_RemotelyDispatchEvent(const struct FGameplayTag& gameEventType, class ADBDPlayer* Instigator, class AActor* Target, float CustomValue, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPFL_EventFunctions.BPFL_EventFunctions_C.RemotelyDispatchEvent"));
		
		UBPFL_EventFunctions_C_RemotelyDispatchEvent_Params params {};
		params.gameEventType = gameEventType;
		params.Instigator = Instigator;
		params.Target = Target;
		params.CustomValue = CustomValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPFL_EventFunctions.BPFL_EventFunctions_C.RegisterEventListener
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              GameEventDelegate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		struct FGameplayTag                                Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameEventDispatcherHandleBP                GameEventDispatcherHandle                                  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	 */
	void UBPFL_EventFunctions_C::STATIC_RegisterEventListener(const class FScriptDelegate& GameEventDelegate, const struct FGameplayTag& Filter, class UObject* __WorldContext, struct FGameEventDispatcherHandleBP* GameEventDispatcherHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPFL_EventFunctions.BPFL_EventFunctions_C.RegisterEventListener"));
		
		UBPFL_EventFunctions_C_RegisterEventListener_Params params {};
		params.GameEventDelegate = GameEventDelegate;
		params.Filter = Filter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameEventDispatcherHandle != nullptr)
			*GameEventDispatcherHandle = params.GameEventDispatcherHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_EventFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_EventFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPFL_EventFunctions.BPFL_EventFunctions_C"));
		return ptr;
	}

}


