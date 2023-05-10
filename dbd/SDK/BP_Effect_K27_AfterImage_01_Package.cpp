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
	 * 		Name   -> Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Effect_K27_AfterImage_01_C::Fade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__FinishedFunc"));
		
		ABP_Effect_K27_AfterImage_01_C_Fade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Effect_K27_AfterImage_01_C::Fade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__UpdateFunc"));
		
		ABP_Effect_K27_AfterImage_01_C_Fade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__RemoveVFX__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Effect_K27_AfterImage_01_C::Fade__RemoveVFX__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__RemoveVFX__EventFunc"));
		
		ABP_Effect_K27_AfterImage_01_C_Fade__RemoveVFX__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Cosmetic_OnAnimationPoseCaptured
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ABP_Effect_K27_AfterImage_01_C::Cosmetic_OnAnimationPoseCaptured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Cosmetic_OnAnimationPoseCaptured"));
		
		ABP_Effect_K27_AfterImage_01_C_Cosmetic_OnAnimationPoseCaptured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.HideHusk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Effect_K27_AfterImage_01_C::HideHusk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.HideHusk"));
		
		ABP_Effect_K27_AfterImage_01_C_HideHusk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Cosmetic_InitializeSkeletalMesh
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Effect_K27_AfterImage_01_C::Cosmetic_InitializeSkeletalMesh(class USkeletalMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Cosmetic_InitializeSkeletalMesh"));
		
		ABP_Effect_K27_AfterImage_01_C_Cosmetic_InitializeSkeletalMesh_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.ExecuteUbergraph_BP_Effect_K27_AfterImage_01
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Effect_K27_AfterImage_01_C::ExecuteUbergraph_BP_Effect_K27_AfterImage_01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.ExecuteUbergraph_BP_Effect_K27_AfterImage_01"));
		
		ABP_Effect_K27_AfterImage_01_C_ExecuteUbergraph_BP_Effect_K27_AfterImage_01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Effect_K27_AfterImage_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Effect_K27_AfterImage_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C"));
		return ptr;
	}

}


