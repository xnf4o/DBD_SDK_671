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
	 * 		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Menu_Slasher24_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimGraph"));
		
		UAB_Menu_Slasher24_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher24_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.BlueprintUpdateAnimation"));
		
		UAB_Menu_Slasher24_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher24_C::AnimNotify_K24_Inter_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Start"));
		
		UAB_Menu_Slasher24_C_AnimNotify_K24_Inter_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Stop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher24_C::AnimNotify_K24_Inter_Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Stop"));
		
		UAB_Menu_Slasher24_C_AnimNotify_K24_Inter_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_Menu_Slasher24_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.BlueprintInitializeAnimation"));
		
		UAB_Menu_Slasher24_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.ExecuteUbergraph_AB_Menu_Slasher24
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher24_C::ExecuteUbergraph_AB_Menu_Slasher24(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.ExecuteUbergraph_AB_Menu_Slasher24"));
		
		UAB_Menu_Slasher24_C_ExecuteUbergraph_AB_Menu_Slasher24_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Menu_Slasher24_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Slasher24_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("AnimBlueprintGeneratedClass AB_Menu_Slasher24.AB_Menu_Slasher24_C"));
		return ptr;
	}

}


