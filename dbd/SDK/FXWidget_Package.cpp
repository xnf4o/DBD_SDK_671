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
	 * 		RVA    -> 0x04267560
	 * 		Name   -> Function FXWidget.FXUserWidgetBase.StopParticle
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, Const)
	 */
	void UFXUserWidgetBase::StopParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function FXWidget.FXUserWidgetBase.StopParticle"));
		
		UFXUserWidgetBase_StopParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04267490
	 * 		Name   -> Function FXWidget.FXUserWidgetBase.PlayParticle
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFXUserWidgetBase::PlayParticle(float StartAtTime, int32_t NumLoopsToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function FXWidget.FXUserWidgetBase.PlayParticle"));
		
		UFXUserWidgetBase_PlayParticle_Params params {};
		params.StartAtTime = StartAtTime;
		params.NumLoopsToPlay = NumLoopsToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BC10
	 * 		Name   -> Function FXWidget.FXUserWidgetBase.GetNiagaraFX
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	class UNiagaraComponent* UFXUserWidgetBase::GetNiagaraFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function FXWidget.FXUserWidgetBase.GetNiagaraFX"));
		
		UFXUserWidgetBase_GetNiagaraFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFXUserWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFXUserWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class FXWidget.FXUserWidgetBase"));
		return ptr;
	}

}


