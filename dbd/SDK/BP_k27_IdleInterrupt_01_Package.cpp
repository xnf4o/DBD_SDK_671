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
	 * 		Name   -> Function BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_k27_IdleInterrupt_01_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.UserConstructionScript"));
		
		ABP_k27_IdleInterrupt_01_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_k27_IdleInterrupt_01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.ReceiveBeginPlay"));
		
		ABP_k27_IdleInterrupt_01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.ExecuteUbergraph_BP_k27_IdleInterrupt_01
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_k27_IdleInterrupt_01_C::ExecuteUbergraph_BP_k27_IdleInterrupt_01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.ExecuteUbergraph_BP_k27_IdleInterrupt_01"));
		
		ABP_k27_IdleInterrupt_01_C_ExecuteUbergraph_BP_k27_IdleInterrupt_01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_k27_IdleInterrupt_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_k27_IdleInterrupt_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C"));
		return ptr;
	}

}


