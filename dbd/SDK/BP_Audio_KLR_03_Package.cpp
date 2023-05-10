﻿/**
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
	 * 		Name   -> Function BP_Audio_KLR_03.BP_Audio_KLR_03_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Audio_KLR_03_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Audio_KLR_03.BP_Audio_KLR_03_C.ReceiveBeginPlay"));
		
		UBP_Audio_KLR_03_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Audio_KLR_03.BP_Audio_KLR_03_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_KLR_03_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Audio_KLR_03.BP_Audio_KLR_03_C.ReceiveEndPlay"));
		
		UBP_Audio_KLR_03_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Audio_KLR_03.BP_Audio_KLR_03_C.ExecuteUbergraph_BP_Audio_KLR_03
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_KLR_03_C::ExecuteUbergraph_BP_Audio_KLR_03(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Audio_KLR_03.BP_Audio_KLR_03_C.ExecuteUbergraph_BP_Audio_KLR_03"));
		
		UBP_Audio_KLR_03_C_ExecuteUbergraph_BP_Audio_KLR_03_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Audio_KLR_03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Audio_KLR_03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_Audio_KLR_03.BP_Audio_KLR_03_C"));
		return ptr;
	}

}


