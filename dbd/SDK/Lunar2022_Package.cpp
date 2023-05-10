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
	 * 		RVA    -> 0x04EC5F20
	 * 		Name   -> Function Lunar2022.Lunar2022EventComponent.Authority_OnPlayerFinishPlaying
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayerState*                             PlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULunar2022EventComponent::Authority_OnPlayerFinishPlaying(class ADBDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.Lunar2022EventComponent.Authority_OnPlayerFinishPlaying"));
		
		ULunar2022EventComponent_Authority_OnPlayerFinishPlaying_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULunar2022EventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULunar2022EventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Lunar2022.Lunar2022EventComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EC6740
	 * 		Name   -> Function Lunar2022.RedEnvelope.OnRep_RedEnvelopeData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ARedEnvelope::OnRep_RedEnvelopeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.RedEnvelope.OnRep_RedEnvelopeData"));
		
		ARedEnvelope_OnRep_RedEnvelopeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EC6720
	 * 		Name   -> Function Lunar2022.RedEnvelope.OnRep_OwnerPlayerState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ARedEnvelope::OnRep_OwnerPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.RedEnvelope.OnRep_OwnerPlayerState"));
		
		ARedEnvelope_OnRep_OwnerPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EC6700
	 * 		Name   -> Function Lunar2022.RedEnvelope.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ARedEnvelope::OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.RedEnvelope.OnLocallyObservedChanged"));
		
		ARedEnvelope_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Lunar2022.RedEnvelope.Cosmetic_SetBackgroundVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARedEnvelope::Cosmetic_SetBackgroundVFX(bool isOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.RedEnvelope.Cosmetic_SetBackgroundVFX"));
		
		ARedEnvelope_Cosmetic_SetBackgroundVFX_Params params {};
		params.isOwner = isOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Lunar2022.RedEnvelope.Cosmetic_OnTriggerDisappearingVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsJackpot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARedEnvelope::Cosmetic_OnTriggerDisappearingVFX(class ADBDPlayer* interactingPlayer, bool isOwner, bool IsJackpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.RedEnvelope.Cosmetic_OnTriggerDisappearingVFX"));
		
		ARedEnvelope_Cosmetic_OnTriggerDisappearingVFX_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.isOwner = isOwner;
		params.IsJackpot = IsJackpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionUpdate
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ChargePercent                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARedEnvelope::Cosmetic_OnInteractionUpdate(class ADBDPlayer* interactingPlayer, float ChargePercent, bool isOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionUpdate"));
		
		ARedEnvelope_Cosmetic_OnInteractionUpdate_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.ChargePercent = ChargePercent;
		params.isOwner = isOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStopped
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARedEnvelope::Cosmetic_OnInteractionStopped(class ADBDPlayer* interactingPlayer, bool isOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStopped"));
		
		ARedEnvelope_Cosmetic_OnInteractionStopped_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.isOwner = isOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARedEnvelope::Cosmetic_OnInteractionStart(class ADBDPlayer* interactingPlayer, bool isOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStart"));
		
		ARedEnvelope_Cosmetic_OnInteractionStart_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.isOwner = isOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Lunar2022.RedEnvelope.Cosmetic_OnAddEmberEffect
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  OwningPlayer                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARedEnvelope::Cosmetic_OnAddEmberEffect(class ADBDPlayer* OwningPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2022.RedEnvelope.Cosmetic_OnAddEmberEffect"));
		
		ARedEnvelope_Cosmetic_OnAddEmberEffect_Params params {};
		params.OwningPlayer = OwningPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARedEnvelope.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARedEnvelope::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Lunar2022.RedEnvelope"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URedEnvelopeInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URedEnvelopeInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Lunar2022.RedEnvelopeInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URedEnvelopeOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URedEnvelopeOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Lunar2022.RedEnvelopeOutlineUpdateStrategy"));
		return ptr;
	}

}


