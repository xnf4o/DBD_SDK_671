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
	 * 		Name   -> Function AB_K31_Radar.AB_K31_Radar_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_K31_Radar_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_K31_Radar.AB_K31_Radar_C.AnimGraph"));
		
		UAB_K31_Radar_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_K31_Radar.AB_K31_Radar_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_K31_Radar_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_K31_Radar.AB_K31_Radar_C.BlueprintBeginPlay"));
		
		UAB_K31_Radar_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_K31_Radar.AB_K31_Radar_C.AnimNotify__consumeIsActivatingADroneRadar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_K31_Radar_C::AnimNotify__consumeIsActivatingADroneRadar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_K31_Radar.AB_K31_Radar_C.AnimNotify__consumeIsActivatingADroneRadar"));
		
		UAB_K31_Radar_C_AnimNotify__consumeIsActivatingADroneRadar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_K31_Radar.AB_K31_Radar_C.AnimNotify__consumeIsRecallingADroneRadar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_K31_Radar_C::AnimNotify__consumeIsRecallingADroneRadar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_K31_Radar.AB_K31_Radar_C.AnimNotify__consumeIsRecallingADroneRadar"));
		
		UAB_K31_Radar_C_AnimNotify__consumeIsRecallingADroneRadar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_K31_Radar.AB_K31_Radar_C.ExecuteUbergraph_AB_K31_Radar
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_K31_Radar_C::ExecuteUbergraph_AB_K31_Radar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_K31_Radar.AB_K31_Radar_C.ExecuteUbergraph_AB_K31_Radar"));
		
		UAB_K31_Radar_C_ExecuteUbergraph_AB_K31_Radar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_K31_Radar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_K31_Radar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("AnimBlueprintGeneratedClass AB_K31_Radar.AB_K31_Radar_C"));
		return ptr;
	}

}


