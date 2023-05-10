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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonAnimProxyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonAnimProxyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonAnimProxyComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2C330
	 * 		Name   -> Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonHuskAnimInstance::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet"));
		
		UDemogorgonHuskAnimInstance_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonHuskAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonHuskAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonHuskAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.TriggerDirtExplosion
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADemogorgonPortal::TriggerDirtExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.TriggerDirtExplosion"));
		
		ADemogorgonPortal_TriggerDirtExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.ShowPortalTeleportInteractionStartVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ADemogorgonPortal::ShowPortalTeleportInteractionStartVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.ShowPortalTeleportInteractionStartVFX"));
		
		ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.ShowPortalActiveVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ADemogorgonPortal::ShowPortalActiveVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.ShowPortalActiveVFX"));
		
		ADemogorgonPortal_ShowPortalActiveVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.RemovePortalTeleportInteractionStartVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ADemogorgonPortal::RemovePortalTeleportInteractionStartVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.RemovePortalTeleportInteractionStartVFX"));
		
		ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.RemovePortalActiveVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ADemogorgonPortal::RemovePortalActiveVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.RemovePortalActiveVFX"));
		
		ADemogorgonPortal_RemovePortalActiveVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.PlaySoundFromPortal
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               SoundEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADemogorgonPortal::PlaySoundFromPortal(class UAkAudioEvent* SoundEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.PlaySoundFromPortal"));
		
		ADemogorgonPortal_PlaySoundFromPortal_Params params {};
		params.SoundEvent = SoundEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.OnTeleportAbilityCooldownChangedVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isOnCooldown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADemogorgonPortal::OnTeleportAbilityCooldownChangedVFX(bool isOnCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.OnTeleportAbilityCooldownChangedVFX"));
		
		ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Params params {};
		params.isOnCooldown = isOnCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.OnTargetedChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADemogorgonPortal::OnTargetedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.OnTargetedChanged"));
		
		ADemogorgonPortal_OnTargetedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.OnPortalStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EDemogorgonPortalState                             State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADemogorgonPortal::OnPortalStateChanged(EDemogorgonPortalState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.OnPortalStateChanged"));
		
		ADemogorgonPortal_OnPortalStateChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2D1D0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.OnPortalDestroyed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADemogorgonPortal::OnPortalDestroyed(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.OnPortalDestroyed"));
		
		ADemogorgonPortal_OnPortalDestroyed_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2D070
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.OnEndOverlapPortalArea
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADemogorgonPortal::OnEndOverlapPortalArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.OnEndOverlapPortalArea"));
		
		ADemogorgonPortal_OnEndOverlapPortalArea_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2CE50
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.OnBeginOverlapPortalArea
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADemogorgonPortal::OnBeginOverlapPortalArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.OnBeginOverlapPortalArea"));
		
		ADemogorgonPortal_OnBeginOverlapPortalArea_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.MakePortalDisappearVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ADemogorgonPortal::MakePortalDisappearVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.MakePortalDisappearVFX"));
		
		ADemogorgonPortal_MakePortalDisappearVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2CE30
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.IsTargeted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADemogorgonPortal::IsTargeted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.IsTargeted"));
		
		ADemogorgonPortal_IsTargeted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2CE10
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.Authority_StopDestroyingPlayers
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void ADemogorgonPortal::Authority_StopDestroyingPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.Authority_StopDestroyingPlayers"));
		
		ADemogorgonPortal_Authority_StopDestroyingPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2CD00
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.Authority_OnTeleportChargePercentChanged
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADemogorgonPortal::Authority_OnTeleportChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.Authority_OnTeleportChargePercentChanged"));
		
		ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Params params {};
		params.ChargeableComponent = ChargeableComponent;
		params.PercentCompletionChange = PercentCompletionChange;
		params.TotalPercentComplete = TotalPercentComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2CBF0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortal.Authority_OnDestroyChargePercentChanged
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADemogorgonPortal::Authority_OnDestroyChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortal.Authority_OnDestroyChargePercentChanged"));
		
		ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Params params {};
		params.ChargeableComponent = ChargeableComponent;
		params.PercentCompletionChange = PercentCompletionChange;
		params.TotalPercentComplete = TotalPercentComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADemogorgonPortal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADemogorgonPortal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPortal"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPortalOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPortalOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPortalOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPortalPlacementValidationStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPortalPlacementValidationStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPortalPlacementValidationStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2DB10
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.UpdateRemainingPortalCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDemogorgonPortalPlacerStateComponent::UpdateRemainingPortalCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.UpdateRemainingPortalCount"));
		
		UDemogorgonPortalPlacerStateComponent_UpdateRemainingPortalCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2DAF0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDemogorgonPortalPlacerStateComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnLevelReadyToPlay"));
		
		UDemogorgonPortalPlacerStateComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnDemogorgonTeleportCooldownComplete__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UDemogorgonPortalPlacerStateComponent::OnDemogorgonTeleportCooldownComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnDemogorgonTeleportCooldownComplete__DelegateSignature"));
		
		UDemogorgonPortalPlacerStateComponent_OnDemogorgonTeleportCooldownComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2DAC0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.IsUsePortalCooldownDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDemogorgonPortalPlacerStateComponent::IsUsePortalCooldownDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.IsUsePortalCooldownDone"));
		
		UDemogorgonPortalPlacerStateComponent_IsUsePortalCooldownDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2DA30
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.InitializeTunableValues
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonPortalPlacerStateComponent::InitializeTunableValues(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.InitializeTunableValues"));
		
		UDemogorgonPortalPlacerStateComponent_InitializeTunableValues_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2DA10
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetTeleportDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDemogorgonPortalPlacerStateComponent::GetTeleportDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetTeleportDuration"));
		
		UDemogorgonPortalPlacerStateComponent_GetTeleportDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2D9F0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetRemainingPortalCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UDemogorgonPortalPlacerStateComponent::GetRemainingPortalCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetRemainingPortalCount"));
		
		UDemogorgonPortalPlacerStateComponent_GetRemainingPortalCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPortalPlacerStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPortalPlacerStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPortalPlacerStateComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2DEA0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnRep_PlayersInsideRadius
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDemogorgonPortalRadiusDetectorComponent::OnRep_PlayersInsideRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnRep_PlayersInsideRadius"));
		
		UDemogorgonPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnPortalEffectsAppliedMultiDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UDemogorgonPortalRadiusDetectorComponent::OnPortalEffectsAppliedMultiDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnPortalEffectsAppliedMultiDelegate__DelegateSignature"));
		
		UDemogorgonPortalRadiusDetectorComponent_OnPortalEffectsAppliedMultiDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2DE80
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDemogorgonPortalRadiusDetectorComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_OnLevelReadyToPlay"));
		
		UDemogorgonPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2DDD0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_CallOnPortalEffectsApplied
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonPortalRadiusDetectorComponent::Authority_CallOnPortalEffectsApplied(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_CallOnPortalEffectsApplied"));
		
		UDemogorgonPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPortalRadiusDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPortalRadiusDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPortalRadiusDetectorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2E320
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalTargetingComponent.SetIsPorting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isPorting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonPortalTargetingComponent::SetIsPorting(bool isPorting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalTargetingComponent.SetIsPorting"));
		
		UDemogorgonPortalTargetingComponent_SetIsPorting_Params params {};
		params.isPorting = isPorting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2E260
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalTargetingComponent.Server_SetTargetedPortal
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		class ADemogorgonPortal*                           targetedPortal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonPortalTargetingComponent::Server_SetTargetedPortal(class ADemogorgonPortal* targetedPortal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalTargetingComponent.Server_SetTargetedPortal"));
		
		UDemogorgonPortalTargetingComponent_Server_SetTargetedPortal_Params params {};
		params.targetedPortal = targetedPortal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2E1A0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalTargetingComponent.Multicast_SetTargetedPortal
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
	 * Parameters:
	 * 		class ADemogorgonPortal*                           targetedPortal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonPortalTargetingComponent::Multicast_SetTargetedPortal(class ADemogorgonPortal* targetedPortal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalTargetingComponent.Multicast_SetTargetedPortal"));
		
		UDemogorgonPortalTargetingComponent_Multicast_SetTargetedPortal_Params params {};
		params.targetedPortal = targetedPortal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2E180
	 * 		Name   -> Function TheDemogorgon.DemogorgonPortalTargetingComponent.GetTargetedPortal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ADemogorgonPortal* UDemogorgonPortalTargetingComponent::GetTargetedPortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPortalTargetingComponent.GetTargetedPortal"));
		
		UDemogorgonPortalTargetingComponent_GetTargetedPortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPortalTargetingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPortalTargetingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPortalTargetingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPounceAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPounceAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPounceAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPounceAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPounceAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPounceAttackMissSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPounceAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHunting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonPounceInteraction::TriggerHuntingAudioEvent(bool isHunting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent"));
		
		UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params params {};
		params.isHunting = isHunting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UDemogorgonPounceInteraction::TriggerChargeCancelAudioEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent"));
		
		UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Ready                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonPounceInteraction::OnChargedAttackReadyChanged(bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged"));
		
		UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D78EE0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UDemogorgonPounceInteraction::OnCancelCooldownComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete"));
		
		UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPounceInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPounceInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADemogorgonPower.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADemogorgonPower::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPower"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonPowerItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPowerItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonPowerItemProgressComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonScoreComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonScoreComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonScoreComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2F350
	 * 		Name   -> Function TheDemogorgon.DemogorgonStealthComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDemogorgonStealthComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DemogorgonStealthComponent.Authority_OnLevelReadyToPlay"));
		
		UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemogorgonStealthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonStealthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DemogorgonStealthComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2F4E0
	 * 		Name   -> Function TheDemogorgon.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDestroyDemogorgonPortalInteraction::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied"));
		
		UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Params params {};
		params.individualChargeAmount = individualChargeAmount;
		params.totalChargeAmount = totalChargeAmount;
		params.chargeInstigator = chargeInstigator;
		params.wasCoop = wasCoop;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestroyDemogorgonPortalInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroyDemogorgonPortalInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.DestroyDemogorgonPortalInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2FA30
	 * 		Name   -> Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, Const)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UElevensSodaAddon::Multicast_UnhighlightGenerator(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator"));
		
		UElevensSodaAddon_Multicast_UnhighlightGenerator_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2F9A0
	 * 		Name   -> Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, Const)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UElevensSodaAddon::Multicast_HighlightGenerator(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator"));
		
		UElevensSodaAddon_Multicast_HighlightGenerator_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElevensSodaAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElevensSodaAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.ElevensSodaAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPortalSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPortalSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.PortalSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetGroundPortalInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetGroundPortalInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.SetGroundPortalInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UTeleportToDemogorgonPortalInteraction::OnTeleportInteractionCanceledVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX"));
		
		UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F30080
	 * 		Name   -> Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportToDemogorgonPortalInteraction::OnSlasherSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnSlasherSet"));
		
		UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F2FFF0
	 * 		Name   -> Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isKillerLocallyObserved                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportToDemogorgonPortalInteraction::OnLocallyObservedChanged(bool isKillerLocallyObserved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnLocallyObservedChanged"));
		
		UTeleportToDemogorgonPortalInteraction_OnLocallyObservedChanged_Params params {};
		params.isKillerLocallyObserved = isKillerLocallyObserved;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeleportToDemogorgonPortalInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeleportToDemogorgonPortalInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDemogorgon.TeleportToDemogorgonPortalInteraction"));
		return ptr;
	}

}


