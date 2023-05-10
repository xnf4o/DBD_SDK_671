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
	 * 		Name   -> PredefinedFunction UBTService_FindObject_GuardFlag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindObject_GuardFlag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.BTService_FindObject_GuardFlag"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124CE0
	 * 		Name   -> Function TheK30.DrawPatrolPathInteraction.SetIsCharging
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsCharging                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDrawPatrolPathInteraction::SetIsCharging(bool IsCharging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.DrawPatrolPathInteraction.SetIsCharging"));
		
		UDrawPatrolPathInteraction_SetIsCharging_Params params {};
		params.IsCharging = IsCharging;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D78F00
	 * 		Name   -> Function TheK30.DrawPatrolPathInteraction.Server_StartPatrol
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
	 */
	void UDrawPatrolPathInteraction::Server_StartPatrol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.DrawPatrolPathInteraction.Server_StartPatrol"));
		
		UDrawPatrolPathInteraction_Server_StartPatrol_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124C50
	 * 		Name   -> Function TheK30.DrawPatrolPathInteraction.Server_SendOrder
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
	 * Parameters:
	 * 		class AInteractable*                               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDrawPatrolPathInteraction::Server_SendOrder(class AInteractable* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.DrawPatrolPathInteraction.Server_SendOrder"));
		
		UDrawPatrolPathInteraction_Server_SendOrder_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK30.DrawPatrolPathInteraction.OnChargeStateChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               IsCharging                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsChargeCompleted                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDrawPatrolPathInteraction::OnChargeStateChanged__DelegateSignature(bool IsCharging, bool IsChargeCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK30.DrawPatrolPathInteraction.OnChargeStateChanged__DelegateSignature"));
		
		UDrawPatrolPathInteraction_OnChargeStateChanged__DelegateSignature_Params params {};
		params.IsCharging = IsCharging;
		params.IsChargeCompleted = IsChargeCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124500
	 * 		Name   -> Function TheK30.DrawPatrolPathInteraction.OnCancellationTimerCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDrawPatrolPathInteraction::OnCancellationTimerCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.DrawPatrolPathInteraction.OnCancellationTimerCompleted"));
		
		UDrawPatrolPathInteraction_OnCancellationTimerCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124400
	 * 		Name   -> Function TheK30.DrawPatrolPathInteraction.IsCharging
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDrawPatrolPathInteraction::IsCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.DrawPatrolPathInteraction.IsCharging"));
		
		UDrawPatrolPathInteraction_IsCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051243E0
	 * 		Name   -> Function TheK30.DrawPatrolPathInteraction.IsChargeCompleted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDrawPatrolPathInteraction::IsChargeCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.DrawPatrolPathInteraction.IsChargeCompleted"));
		
		UDrawPatrolPathInteraction_IsChargeCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPatrolPathInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPatrolPathInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.DrawPatrolPathInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124BC0
	 * 		Name   -> Function TheK30.FloatingCameraNavigationComponent.Server_EnableWalkOffLegdes
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFloatingCameraNavigationComponent::Server_EnableWalkOffLegdes(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.FloatingCameraNavigationComponent.Server_EnableWalkOffLegdes"));
		
		UFloatingCameraNavigationComponent_Server_EnableWalkOffLegdes_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620F50
	 * 		Name   -> Function TheK30.FloatingCameraNavigationComponent.Multicast_EnableWalkOffLegdes
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFloatingCameraNavigationComponent::Multicast_EnableWalkOffLegdes(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.FloatingCameraNavigationComponent.Multicast_EnableWalkOffLegdes"));
		
		UFloatingCameraNavigationComponent_Multicast_EnableWalkOffLegdes_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatingCameraNavigationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatingCameraNavigationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.FloatingCameraNavigationComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardAttackableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardAttackableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardAttackableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardAttackComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardAttackComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardAttackComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardOrderBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardOrderBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardOrderBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardBreakPallet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardBreakPallet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardBreakPallet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardBreakWall.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardBreakWall::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardBreakWall"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124880
	 * 		Name   -> Function TheK30.GuardController.OnTargetPerceptionUpdated
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIStimulus                                 Stimulus                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGuardController::OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardController.OnTargetPerceptionUpdated"));
		
		AGuardController_OnTargetPerceptionUpdated_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124520
	 * 		Name   -> Function TheK30.GuardController.OnLoudNoiseTriggered
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      originator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      instigatingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               shouldTrack                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              audibleRange                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isQuickAction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isDeceivingNoise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGuardController::OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, const struct FVector& Location, bool shouldTrack, float* audibleRange, bool isQuickAction, bool isDeceivingNoise)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardController.OnLoudNoiseTriggered"));
		
		AGuardController_OnLoudNoiseTriggered_Params params {};
		params.originator = originator;
		params.instigatingActor = instigatingActor;
		params.Location = Location;
		params.shouldTrack = shouldTrack;
		params.isQuickAction = isQuickAction;
		params.isDeceivingNoise = isDeceivingNoise;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (audibleRange != nullptr)
			*audibleRange = params.audibleRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGuardController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGuardController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardDamageGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardDamageGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardDamageGenerator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124790
	 * 		Name   -> Function TheK30.GuardFlag.OnRep_HuntedSurvivor
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGuardFlag::OnRep_HuntedSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardFlag.OnRep_HuntedSurvivor"));
		
		AGuardFlag_OnRep_HuntedSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E28890
	 * 		Name   -> Function TheK30.GuardFlag.Multicast_OnCamperCapturedFlag
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  huntedSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGuardFlag::Multicast_OnCamperCapturedFlag(class ADBDPlayer* huntedSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardFlag.Multicast_OnCamperCapturedFlag"));
		
		AGuardFlag_Multicast_OnCamperCapturedFlag_Params params {};
		params.huntedSurvivor = huntedSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124390
	 * 		Name   -> Function TheK30.GuardFlag.GetHuntedSurvivor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* AGuardFlag::GetHuntedSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardFlag.GetHuntedSurvivor"));
		
		AGuardFlag_GetHuntedSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124360
	 * 		Name   -> Function TheK30.GuardFlag.GetActivationTimeLeft
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float AGuardFlag::GetActivationTimeLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardFlag.GetActivationTimeLeft"));
		
		AGuardFlag_GetActivationTimeLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.GuardFlag.Cosmetic_OnSurvivorCapturedFlag
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  previouslyHuntedSurvivor                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGuardFlag::Cosmetic_OnSurvivorCapturedFlag(class ADBDPlayer* previouslyHuntedSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardFlag.Cosmetic_OnSurvivorCapturedFlag"));
		
		AGuardFlag_Cosmetic_OnSurvivorCapturedFlag_Params params {};
		params.previouslyHuntedSurvivor = previouslyHuntedSurvivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.GuardFlag.Cosmetic_OnFlagSpawned
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              activationTimerDuration                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGuardFlag::Cosmetic_OnFlagSpawned(float activationTimerDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardFlag.Cosmetic_OnFlagSpawned"));
		
		AGuardFlag_Cosmetic_OnFlagSpawned_Params params {};
		params.activationTimerDuration = activationTimerDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.GuardFlag.Cosmetic_OnFlagDisappearDueToHuntEnding
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  previouslyHuntedSurvivor                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGuardFlag::Cosmetic_OnFlagDisappearDueToHuntEnding(class ADBDPlayer* previouslyHuntedSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardFlag.Cosmetic_OnFlagDisappearDueToHuntEnding"));
		
		AGuardFlag_Cosmetic_OnFlagDisappearDueToHuntEnding_Params params {};
		params.previouslyHuntedSurvivor = previouslyHuntedSurvivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.GuardFlag.Cosmetic_OnFlagActivationTimerCompleted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AGuardFlag::Cosmetic_OnFlagActivationTimerCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardFlag.Cosmetic_OnFlagActivationTimerCompleted"));
		
		AGuardFlag_Cosmetic_OnFlagActivationTimerCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051239F0
	 * 		Name   -> Function TheK30.GuardFlag.Authority_OnBeginOverlap
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AGuardFlag::Authority_OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardFlag.Authority_OnBeginOverlap"));
		
		AGuardFlag_Authority_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGuardFlag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGuardFlag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardFlag"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardFlagOUtlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardFlagOUtlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardFlagOUtlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124770
	 * 		Name   -> Function TheK30.GuardHuntComponent.OnRep_HuntStartingLocation
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGuardHuntComponent::OnRep_HuntStartingLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardHuntComponent.OnRep_HuntStartingLocation"));
		
		UGuardHuntComponent_OnRep_HuntStartingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051247B0
	 * 		Name   -> Function TheK30.GuardHuntComponent.OnRep_HuntedSurvivor
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               previousChasedSurvivor                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGuardHuntComponent::OnRep_HuntedSurvivor(class ACamperPlayer* previousChasedSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardHuntComponent.OnRep_HuntedSurvivor"));
		
		UGuardHuntComponent_OnRep_HuntedSurvivor_Params params {};
		params.previousChasedSurvivor = previousChasedSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK30.GuardHuntComponent.OnGuardPhaseProgressUpdate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		float                                              completionProgress                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGuardHuntComponent::OnGuardPhaseProgressUpdate__DelegateSignature(float completionProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK30.GuardHuntComponent.OnGuardPhaseProgressUpdate__DelegateSignature"));
		
		UGuardHuntComponent_OnGuardPhaseProgressUpdate__DelegateSignature_Params params {};
		params.completionProgress = completionProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051243B0
	 * 		Name   -> Function TheK30.GuardHuntComponent.GetHuntedSurvivor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* UGuardHuntComponent::GetHuntedSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardHuntComponent.GetHuntedSurvivor"));
		
		UGuardHuntComponent_GetHuntedSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05123D20
	 * 		Name   -> Function TheK30.GuardHuntComponent.Authority_OnCamperUnhooked
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGuardHuntComponent::Authority_OnCamperUnhooked(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardHuntComponent.Authority_OnCamperUnhooked"));
		
		UGuardHuntComponent_Authority_OnCamperUnhooked_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05123C10
	 * 		Name   -> Function TheK30.GuardHuntComponent.Authority_OnCamperInjuredOrDowned
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGuardHuntComponent::Authority_OnCamperInjuredOrDowned(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardHuntComponent.Authority_OnCamperInjuredOrDowned"));
		
		UGuardHuntComponent_Authority_OnCamperInjuredOrDowned_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardHuntComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardHuntComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardHuntComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardHuntTeleport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardHuntTeleport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardHuntTeleport"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGuardInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGuardInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardInteractable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124840
	 * 		Name   -> Function TheK30.GuardPatrolComponent.OnRep_IsPatrolling
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGuardPatrolComponent::OnRep_IsPatrolling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardPatrolComponent.OnRep_IsPatrolling"));
		
		UGuardPatrolComponent_OnRep_IsPatrolling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardPatrolComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardPatrolComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardPatrolComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardPullSurvivorOutOfLocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardPullSurvivorOutOfLocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardPullSurvivorOutOfLocker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124AF0
	 * 		Name   -> Function TheK30.GuardSlowingZone.OnZoneEndOverlap
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGuardSlowingZone::OnZoneEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardSlowingZone.OnZoneEndOverlap"));
		
		AGuardSlowingZone_OnZoneEndOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124A20
	 * 		Name   -> Function TheK30.GuardSlowingZone.OnZoneBeginOverlap
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGuardSlowingZone::OnZoneBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardSlowingZone.OnZoneBeginOverlap"));
		
		AGuardSlowingZone_OnZoneBeginOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGuardSlowingZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGuardSlowingZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardSlowingZone"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124860
	 * 		Name   -> Function TheK30.GuardPalletSlowingZone.OnRep_LinkedPallet
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGuardPalletSlowingZone::OnRep_LinkedPallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.GuardPalletSlowingZone.OnRep_LinkedPallet"));
		
		AGuardPalletSlowingZone_OnRep_LinkedPallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGuardPalletSlowingZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGuardPalletSlowingZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardPalletSlowingZone"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30BaseStatusEffectAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30BaseStatusEffectAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30BaseStatusEffectAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051283A0
	 * 		Name   -> Function TheK30.K30InflictStatusOnEndHuntAddon.Authority_OnEndHunt
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGuardHuntEndReason                                huntEndReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30InflictStatusOnEndHuntAddon::Authority_OnEndHunt(class ADBDPlayer* Player, EGuardHuntEndReason huntEndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30InflictStatusOnEndHuntAddon.Authority_OnEndHunt"));
		
		UK30InflictStatusOnEndHuntAddon_Authority_OnEndHunt_Params params {};
		params.Player = Player;
		params.huntEndReason = huntEndReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30InflictStatusOnEndHuntAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30InflictStatusOnEndHuntAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30InflictStatusOnEndHuntAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30Addon14.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30Addon14::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30Addon14"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124130
	 * 		Name   -> Function TheK30.K30ApplyStatusOnWakeUpAddon.Authority_OnWakeUp
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class AKnightGuard*                                currentGuard                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30ApplyStatusOnWakeUpAddon::Authority_OnWakeUp(class AKnightGuard* currentGuard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30ApplyStatusOnWakeUpAddon.Authority_OnWakeUp"));
		
		UK30ApplyStatusOnWakeUpAddon_Authority_OnWakeUp_Params params {};
		params.currentGuard = currentGuard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30ApplyStatusOnWakeUpAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30ApplyStatusOnWakeUpAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30ApplyStatusOnWakeUpAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30Addon16.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30Addon16::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30Addon16"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124420
	 * 		Name   -> Function TheK30.K30Addon17.Multicast_OnMakeSurvivorScream
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              lifetime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30Addon17::Multicast_OnMakeSurvivorScream(class ADBDPlayer* Player, float lifetime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Addon17.Multicast_OnMakeSurvivorScream"));
		
		UK30Addon17_Multicast_OnMakeSurvivorScream_Params params {};
		params.Player = Player;
		params.lifetime = lifetime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.K30Addon17.BP_RevealAndMakeSurvivorScream
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  survivorPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              screamRevealDuration                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30Addon17::BP_RevealAndMakeSurvivorScream(class ADBDPlayer* survivorPlayer, float screamRevealDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Addon17.BP_RevealAndMakeSurvivorScream"));
		
		UK30Addon17_BP_RevealAndMakeSurvivorScream_Params params {};
		params.survivorPlayer = survivorPlayer;
		params.screamRevealDuration = screamRevealDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30Addon17.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30Addon17::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30Addon17"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30Addon19.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30Addon19::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30Addon19"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051240A0
	 * 		Name   -> Function TheK30.K30Addon20.Authority_OnTrailCameraGoThroughWindow
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AWindow*                                     Window                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30Addon20::Authority_OnTrailCameraGoThroughWindow(class AWindow* Window)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Addon20.Authority_OnTrailCameraGoThroughWindow"));
		
		UK30Addon20_Authority_OnTrailCameraGoThroughWindow_Params params {};
		params.Window = Window;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124010
	 * 		Name   -> Function TheK30.K30Addon20.Authority_OnStartHunt
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30Addon20::Authority_OnStartHunt(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Addon20.Authority_OnStartHunt"));
		
		UK30Addon20_Authority_OnStartHunt_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05123F00
	 * 		Name   -> Function TheK30.K30Addon20.Authority_OnHuntedSurvivorVault
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK30Addon20::Authority_OnHuntedSurvivorVault(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Addon20.Authority_OnHuntedSurvivorVault"));
		
		UK30Addon20_Authority_OnHuntedSurvivorVault_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05123E30
	 * 		Name   -> Function TheK30.K30Addon20.Authority_OnEndHunt
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGuardHuntEndReason                                huntEndReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30Addon20::Authority_OnEndHunt(class ADBDPlayer* Player, EGuardHuntEndReason huntEndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Addon20.Authority_OnEndHunt"));
		
		UK30Addon20_Authority_OnEndHunt_Params params {};
		params.Player = Player;
		params.huntEndReason = huntEndReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30Addon20.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30Addon20::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30Addon20"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30AnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30AnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30AnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051242D0
	 * 		Name   -> Function TheK30.K30CheatComponent.DBD_K30ToggleGuardAttackDespawn
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            despawnOnAttack                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30CheatComponent::DBD_K30ToggleGuardAttackDespawn(int32_t despawnOnAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30CheatComponent.DBD_K30ToggleGuardAttackDespawn"));
		
		UK30CheatComponent_DBD_K30ToggleGuardAttackDespawn_Params params {};
		params.despawnOnAttack = despawnOnAttack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124250
	 * 		Name   -> Function TheK30.K30CheatComponent.DBD_K30SetPatrolAndHuntDuration
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              secondsToPatrol                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30CheatComponent::DBD_K30SetPatrolAndHuntDuration(float secondsToPatrol)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30CheatComponent.DBD_K30SetPatrolAndHuntDuration"));
		
		UK30CheatComponent_DBD_K30SetPatrolAndHuntDuration_Params params {};
		params.secondsToPatrol = secondsToPatrol;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051241C0
	 * 		Name   -> Function TheK30.K30CheatComponent.DBD_K30SetNextGuardIndex
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            nextGuardIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30CheatComponent::DBD_K30SetNextGuardIndex(int32_t nextGuardIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30CheatComponent.DBD_K30SetNextGuardIndex"));
		
		UK30CheatComponent_DBD_K30SetNextGuardIndex_Params params {};
		params.nextGuardIndex = nextGuardIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30CheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30CheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30CheatComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124130
	 * 		Name   -> Function TheK30.K30InflictStatusOnDetectedAddon.Authority_OnDetected
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30InflictStatusOnDetectedAddon::Authority_OnDetected(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30InflictStatusOnDetectedAddon.Authority_OnDetected"));
		
		UK30InflictStatusOnDetectedAddon_Authority_OnDetected_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30InflictStatusOnDetectedAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30InflictStatusOnDetectedAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30InflictStatusOnDetectedAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128470
	 * 		Name   -> Function TheK30.K30InflictStatusOnGuardHitAddon.Authority_OnGuardHit
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30InflictStatusOnGuardHitAddon::Authority_OnGuardHit(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30InflictStatusOnGuardHitAddon.Authority_OnGuardHit"));
		
		UK30InflictStatusOnGuardHitAddon_Authority_OnGuardHit_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30InflictStatusOnGuardHitAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30InflictStatusOnGuardHitAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30InflictStatusOnGuardHitAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30KnightHuskOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30KnightHuskOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30KnightHuskOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051289B0
	 * 		Name   -> Function TheK30.K30P02.GetScreamInterval
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK30P02::GetScreamInterval()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02.GetScreamInterval"));
		
		UK30P02_GetScreamInterval_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128660
	 * 		Name   -> Function TheK30.K30P02.Authority_UncursePlayer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK30P02::Authority_UncursePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02.Authority_UncursePlayer"));
		
		UK30P02_Authority_UncursePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128590
	 * 		Name   -> Function TheK30.K30P02.Authority_OnTotemStateChanged
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		ETotemState                                        oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETotemState                                        NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30P02::Authority_OnTotemStateChanged(ETotemState oldState, ETotemState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02.Authority_OnTotemStateChanged"));
		
		UK30P02_Authority_OnTotemStateChanged_Params params {};
		params.oldState = oldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128500
	 * 		Name   -> Function TheK30.K30P02.Authority_OnSurvivorFirstScream
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30P02::Authority_OnSurvivorFirstScream(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02.Authority_OnSurvivorFirstScream"));
		
		UK30P02_Authority_OnSurvivorFirstScream_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128BF0
	 * 		Name   -> Function TheK30.K30P02ScreamStatusEffect.Multicast_MakePlayerScream
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		float                                              screamRevealDuration                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30P02ScreamStatusEffect::Multicast_MakePlayerScream(float screamRevealDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02ScreamStatusEffect.Multicast_MakePlayerScream"));
		
		UK30P02ScreamStatusEffect_Multicast_MakePlayerScream_Params params {};
		params.screamRevealDuration = screamRevealDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128B40
	 * 		Name   -> Function TheK30.K30P02ScreamStatusEffect.IsTimerPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UK30P02ScreamStatusEffect::IsTimerPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02ScreamStatusEffect.IsTimerPaused"));
		
		UK30P02ScreamStatusEffect_IsTimerPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128B10
	 * 		Name   -> Function TheK30.K30P02ScreamStatusEffect.IsTimerActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UK30P02ScreamStatusEffect::IsTimerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02ScreamStatusEffect.IsTimerActive"));
		
		UK30P02ScreamStatusEffect_IsTimerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128A40
	 * 		Name   -> Function TheK30.K30P02ScreamStatusEffect.GetTimerRemainingTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK30P02ScreamStatusEffect::GetTimerRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02ScreamStatusEffect.GetTimerRemainingTime"));
		
		UK30P02ScreamStatusEffect_GetTimerRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128A10
	 * 		Name   -> Function TheK30.K30P02ScreamStatusEffect.GetTimerElapsedTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK30P02ScreamStatusEffect::GetTimerElapsedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02ScreamStatusEffect.GetTimerElapsedTime"));
		
		UK30P02ScreamStatusEffect_GetTimerElapsedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051289E0
	 * 		Name   -> Function TheK30.K30P02ScreamStatusEffect.GetTimerDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK30P02ScreamStatusEffect::GetTimerDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02ScreamStatusEffect.GetTimerDuration"));
		
		UK30P02ScreamStatusEffect_GetTimerDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.K30P02ScreamStatusEffect.BP_MakeSurvivorScream
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  survivorPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              screamRevealDuration                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK30P02ScreamStatusEffect::BP_MakeSurvivorScream(class ADBDPlayer* survivorPlayer, float screamRevealDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30P02ScreamStatusEffect.BP_MakeSurvivorScream"));
		
		UK30P02ScreamStatusEffect_BP_MakeSurvivorScream_Params params {};
		params.survivorPlayer = survivorPlayer;
		params.screamRevealDuration = screamRevealDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30P02ScreamStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30P02ScreamStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30P02ScreamStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30P03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D01540
	 * 		Name   -> Function TheK30.K30Power.Server_OnSnappingStateChanged
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               IsSnapping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK30Power::Server_OnSnappingStateChanged(bool IsSnapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.Server_OnSnappingStateChanged"));
		
		AK30Power_Server_OnSnappingStateChanged_Params params {};
		params.IsSnapping = IsSnapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.K30Power.SendPathNearlyEndingWarning
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AK30Power::SendPathNearlyEndingWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.SendPathNearlyEndingWarning"));
		
		AK30Power_SendPathNearlyEndingWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051291D0
	 * 		Name   -> Function TheK30.K30Power.OnRep_KnightHusk
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK30Power::OnRep_KnightHusk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.OnRep_KnightHusk"));
		
		AK30Power_OnRep_KnightHusk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK30.K30Power.OnPowerStateChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EPowerState                                        previousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPowerState                                        NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK30Power::OnPowerStateChanged__DelegateSignature(EPowerState previousState, EPowerState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK30.K30Power.OnPowerStateChanged__DelegateSignature"));
		
		AK30Power_OnPowerStateChanged__DelegateSignature_Params params {};
		params.previousState = previousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05129120
	 * 		Name   -> Function TheK30.K30Power.OnOrderTargetChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK30Power::OnOrderTargetChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.OnOrderTargetChanged"));
		
		AK30Power_OnOrderTargetChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK30.K30Power.OnMoriStateChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void AK30Power::OnMoriStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK30.K30Power.OnMoriStateChanged__DelegateSignature"));
		
		AK30Power_OnMoriStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05129050
	 * 		Name   -> Function TheK30.K30Power.OnInteractionStateChanged
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               IsCharging                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsChargeCompleted                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK30Power::OnInteractionStateChanged(bool IsCharging, bool IsChargeCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.OnInteractionStateChanged"));
		
		AK30Power_OnInteractionStateChanged_Params params {};
		params.IsCharging = IsCharging;
		params.IsChargeCompleted = IsChargeCompleted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128DE0
	 * 		Name   -> Function TheK30.K30Power.OnEndOverlapWindow
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK30Power::OnEndOverlapWindow(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.OnEndOverlapWindow"));
		
		AK30Power_OnEndOverlapWindow_Params params {};
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
	 * 		RVA    -> 0x05128D30
	 * 		Name   -> Function TheK30.K30Power.Multicast_OnSnappingStateChanged
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		bool                                               IsSnapping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK30Power::Multicast_OnSnappingStateChanged(bool IsSnapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.Multicast_OnSnappingStateChanged"));
		
		AK30Power_Multicast_OnSnappingStateChanged_Params params {};
		params.IsSnapping = IsSnapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128AE0
	 * 		Name   -> Function TheK30.K30Power.IsSnapping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK30Power::IsSnapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.IsSnapping"));
		
		AK30Power_IsSnapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128AA0
	 * 		Name   -> Function TheK30.K30Power.IsDrawingPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK30Power::IsDrawingPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.IsDrawingPath"));
		
		AK30Power_IsDrawingPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128A70
	 * 		Name   -> Function TheK30.K30Power.IsChargingPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK30Power::IsChargingPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.IsChargingPower"));
		
		AK30Power_IsChargingPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.K30Power.Cosmetic_UpdateRemainingPathLength
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              remainingPathLengthPercent                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK30Power::Cosmetic_UpdateRemainingPathLength(float remainingPathLengthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.Cosmetic_UpdateRemainingPathLength"));
		
		AK30Power_Cosmetic_UpdateRemainingPathLength_Params params {};
		params.remainingPathLengthPercent = remainingPathLengthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.K30Power.Cosmetic_OnPathDrawAvailableEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK30Power::Cosmetic_OnPathDrawAvailableEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.Cosmetic_OnPathDrawAvailableEnd"));
		
		AK30Power_Cosmetic_OnPathDrawAvailableEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.K30Power.Cosmetic_OnPathDrawAvailableBegin
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK30Power::Cosmetic_OnPathDrawAvailableBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Power.Cosmetic_OnPathDrawAvailableBegin"));
		
		AK30Power_Cosmetic_OnPathDrawAvailableBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK30Power.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK30Power::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30Power"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30PowerPresentationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30PowerPresentationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30PowerPresentationComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30PresentationPowerFadeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30PresentationPowerFadeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30PresentationPowerFadeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30RepeatGuardSpawnAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30RepeatGuardSpawnAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30RepeatGuardSpawnAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFlagCaptureBuffActive                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK30SurvivorCosmeticHelperActor::Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged(bool isFlagCaptureBuffActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged"));
		
		AK30SurvivorCosmeticHelperActor_Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged_Params params {};
		params.isFlagCaptureBuffActive = isFlagCaptureBuffActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK30SurvivorCosmeticHelperActor::Cosmetic_OnHuntEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntEnd"));
		
		AK30SurvivorCosmeticHelperActor_Cosmetic_OnHuntEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntBegin
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK30SurvivorCosmeticHelperActor::Cosmetic_OnHuntBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntBegin"));
		
		AK30SurvivorCosmeticHelperActor_Cosmetic_OnHuntBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK30SurvivorCosmeticHelperActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK30SurvivorCosmeticHelperActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30SurvivorCosmeticHelperActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30SurvivorStatusComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30SurvivorStatusComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30SurvivorStatusComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051288C0
	 * 		Name   -> Function TheK30.K30Utilities.GetNextGuardIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TheK30                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UK30Utilities::STATIC_GetNextGuardIndex(class AActor* TheK30)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Utilities.GetNextGuardIndex"));
		
		UK30Utilities_GetNextGuardIndex_Params params {};
		params.TheK30 = TheK30;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128830
	 * 		Name   -> Function TheK30.K30Utilities.GetNextGuard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TheK30                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AKnightGuard* UK30Utilities::STATIC_GetNextGuard(class AActor* TheK30)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Utilities.GetNextGuard"));
		
		UK30Utilities_GetNextGuard_Params params {};
		params.TheK30 = TheK30;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051287A0
	 * 		Name   -> Function TheK30.K30Utilities.GetK30Power
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TheK30                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AK30Power* UK30Utilities::STATIC_GetK30Power(class AActor* TheK30)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Utilities.GetK30Power"));
		
		UK30Utilities_GetK30Power_Params params {};
		params.TheK30 = TheK30;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128710
	 * 		Name   -> Function TheK30.K30Utilities.GetCurrentGuardIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TheK30                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UK30Utilities::STATIC_GetCurrentGuardIndex(class AActor* TheK30)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Utilities.GetCurrentGuardIndex"));
		
		UK30Utilities_GetCurrentGuardIndex_Params params {};
		params.TheK30 = TheK30;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128680
	 * 		Name   -> Function TheK30.K30Utilities.GetCurrentGuard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TheK30                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AKnightGuard* UK30Utilities::STATIC_GetCurrentGuard(class AActor* TheK30)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.K30Utilities.GetCurrentGuard"));
		
		UK30Utilities_GetCurrentGuard_Params params {};
		params.TheK30 = TheK30;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30Utilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30Utilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.K30Utilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051291F0
	 * 		Name   -> Function TheK30.KnightGuard.OnRep_OwningKiller
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AKnightGuard::OnRep_OwningKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.OnRep_OwningKiller"));
		
		AKnightGuard_OnRep_OwningKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05129140
	 * 		Name   -> Function TheK30.KnightGuard.OnRep_IsActive
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               previousIsActive                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnightGuard::OnRep_IsActive(bool previousIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.OnRep_IsActive"));
		
		AKnightGuard_OnRep_IsActive_Params params {};
		params.previousIsActive = previousIsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128CA0
	 * 		Name   -> Function TheK30.KnightGuard.Multicast_OnPatrolEnded
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class ADBDPlayer*                                  foundSurvivor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnightGuard::Multicast_OnPatrolEnded(class ADBDPlayer* foundSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Multicast_OnPatrolEnded"));
		
		AKnightGuard_Multicast_OnPatrolEnded_Params params {};
		params.foundSurvivor = foundSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128C80
	 * 		Name   -> Function TheK30.KnightGuard.Multicast_OnOrderEnded
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void AKnightGuard::Multicast_OnOrderEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Multicast_OnOrderEnded"));
		
		AKnightGuard_Multicast_OnOrderEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128B70
	 * 		Name   -> Function TheK30.KnightGuard.Multicast_CosmeticHuntEnded
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		EGuardHuntEndReason                                Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnightGuard::Multicast_CosmeticHuntEnded(EGuardHuntEndReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Multicast_CosmeticHuntEnded"));
		
		AKnightGuard_Multicast_CosmeticHuntEnded_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128980
	 * 		Name   -> Function TheK30.KnightGuard.GetPatrolComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGuardPatrolComponent* AKnightGuard::GetPatrolComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.GetPatrolComponent"));
		
		AKnightGuard_GetPatrolComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128950
	 * 		Name   -> Function TheK30.KnightGuard.GetOwningKiller
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* AKnightGuard::GetOwningKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.GetOwningKiller"));
		
		AKnightGuard_GetOwningKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_StopOverlappingVaultOrSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AKnightGuard::Cosmetic_StopOverlappingVaultOrSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_StopOverlappingVaultOrSurvivor"));
		
		AKnightGuard_Cosmetic_StopOverlappingVaultOrSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_StartOverlappingVaultOrSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AKnightGuard::Cosmetic_StartOverlappingVaultOrSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_StartOverlappingVaultOrSurvivor"));
		
		AKnightGuard_Cosmetic_StartOverlappingVaultOrSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_ShowGuard
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AKnightGuard::Cosmetic_ShowGuard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_ShowGuard"));
		
		AKnightGuard_Cosmetic_ShowGuard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_OnPatrolStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AKnightGuard::Cosmetic_OnPatrolStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_OnPatrolStarted"));
		
		AKnightGuard_Cosmetic_OnPatrolStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_OnPatrolEnded
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  foundSurvivor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnightGuard::Cosmetic_OnPatrolEnded(class ADBDPlayer* foundSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_OnPatrolEnded"));
		
		AKnightGuard_Cosmetic_OnPatrolEnded_Params params {};
		params.foundSurvivor = foundSurvivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_OnOrderStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AKnightGuard::Cosmetic_OnOrderStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_OnOrderStarted"));
		
		AKnightGuard_Cosmetic_OnOrderStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_OnOrderEnded
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AKnightGuard::Cosmetic_OnOrderEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_OnOrderEnded"));
		
		AKnightGuard_Cosmetic_OnOrderEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_OnHuntTeleportStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnightGuard::Cosmetic_OnHuntTeleportStarted(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_OnHuntTeleportStarted"));
		
		AKnightGuard_Cosmetic_OnHuntTeleportStarted_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_OnHuntEnded
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGuardHuntEndReason                                Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnightGuard::Cosmetic_OnHuntEnded(EGuardHuntEndReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_OnHuntEnded"));
		
		AKnightGuard_Cosmetic_OnHuntEnded_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_OnGuardVisionRadiusChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AKnightGuard::Cosmetic_OnGuardVisionRadiusChanged(bool IsVisible, float Radius, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_OnGuardVisionRadiusChanged"));
		
		AKnightGuard_Cosmetic_OnGuardVisionRadiusChanged_Params params {};
		params.IsVisible = IsVisible;
		params.Radius = Radius;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_HuntChaseStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AKnightGuard::Cosmetic_HuntChaseStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_HuntChaseStarted"));
		
		AKnightGuard_Cosmetic_HuntChaseStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightGuard.Cosmetic_HideGuard
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AKnightGuard::Cosmetic_HideGuard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightGuard.Cosmetic_HideGuard"));
		
		AKnightGuard_Cosmetic_HideGuard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKnightGuard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKnightGuard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.KnightGuard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuardAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuardAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.GuardAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnightGuardStateMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnightGuardStateMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.KnightGuardStateMachine"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnightHuskStunnableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnightHuskStunnableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.KnightHuskStunnableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK30.KnightOrderComponent.OnTargetChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UKnightOrderComponent::OnTargetChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK30.KnightOrderComponent.OnTargetChanged__DelegateSignature"));
		
		UKnightOrderComponent_OnTargetChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128F40
	 * 		Name   -> Function TheK30.KnightOrderComponent.OnGameEventDispatched
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UKnightOrderComponent::OnGameEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightOrderComponent.OnGameEventDispatched"));
		
		UKnightOrderComponent_OnGameEventDispatched_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05128DC0
	 * 		Name   -> Function TheK30.KnightOrderComponent.OnCurrentInteractionFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UKnightOrderComponent::OnCurrentInteractionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightOrderComponent.OnCurrentInteractionFinished"));
		
		UKnightOrderComponent_OnCurrentInteractionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightOrderComponent.Cosmetic_OnTargetableObjectsChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AInteractable*                               Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isTargetable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnightOrderComponent::Cosmetic_OnTargetableObjectsChanged(class AInteractable* Object, bool isTargetable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightOrderComponent.Cosmetic_OnTargetableObjectsChanged"));
		
		UKnightOrderComponent_Cosmetic_OnTargetableObjectsChanged_Params params {};
		params.Object = Object;
		params.isTargetable = isTargetable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.KnightOrderComponent.Cosmetic_OnNewTargetSelected
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AInteractable*                               newTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInteractable*                               oldTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnightOrderComponent::Cosmetic_OnNewTargetSelected(class AInteractable* newTarget, class AInteractable* oldTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.KnightOrderComponent.Cosmetic_OnNewTargetSelected"));
		
		UKnightOrderComponent_Cosmetic_OnNewTargetSelected_Params params {};
		params.newTarget = newTarget;
		params.oldTarget = oldTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnightOrderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnightOrderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.KnightOrderComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationQueryFilter_Guard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationQueryFilter_Guard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.NavigationQueryFilter_Guard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNearUndestroyedPallet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNearUndestroyedPallet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.NearUndestroyedPallet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNearFallenPallet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNearFallenPallet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.NearFallenPallet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B2F0
	 * 		Name   -> Function TheK30.PatrolTrailComponent.IsTrailCompleted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPatrolTrailComponent::IsTrailCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.IsTrailCompleted"));
		
		UPatrolTrailComponent_IsTrailCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B190
	 * 		Name   -> Function TheK30.PatrolTrailComponent.GetPreviousNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATrailNode*                                  currentNode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ATrailNode* UPatrolTrailComponent::GetPreviousNode(class ATrailNode* currentNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.GetPreviousNode"));
		
		UPatrolTrailComponent_GetPreviousNode_Params params {};
		params.currentNode = currentNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B0F0
	 * 		Name   -> Function TheK30.PatrolTrailComponent.GetNextNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATrailNode*                                  currentNode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ATrailNode* UPatrolTrailComponent::GetNextNode(class ATrailNode* currentNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.GetNextNode"));
		
		UPatrolTrailComponent_GetNextNode_Params params {};
		params.currentNode = currentNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B0B0
	 * 		Name   -> Function TheK30.PatrolTrailComponent.GetLastPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UPatrolTrailComponent::GetLastPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.GetLastPosition"));
		
		UPatrolTrailComponent_GetLastPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B080
	 * 		Name   -> Function TheK30.PatrolTrailComponent.GetLastNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATrailNode* UPatrolTrailComponent::GetLastNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.GetLastNode"));
		
		UPatrolTrailComponent_GetLastNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512AFF0
	 * 		Name   -> Function TheK30.PatrolTrailComponent.GetFirstNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATrailNode* UPatrolTrailComponent::GetFirstNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.GetFirstNode"));
		
		UPatrolTrailComponent_GetFirstNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512AFC0
	 * 		Name   -> Function TheK30.PatrolTrailComponent.GetCurrentTrailLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPatrolTrailComponent::GetCurrentTrailLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.GetCurrentTrailLength"));
		
		UPatrolTrailComponent_GetCurrentTrailLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512AF90
	 * 		Name   -> Function TheK30.PatrolTrailComponent.DoesTrailExist
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPatrolTrailComponent::DoesTrailExist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.DoesTrailExist"));
		
		UPatrolTrailComponent_DoesTrailExist_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512AF70
	 * 		Name   -> Function TheK30.PatrolTrailComponent.Authority_StopRecordingTrail
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UPatrolTrailComponent::Authority_StopRecordingTrail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.Authority_StopRecordingTrail"));
		
		UPatrolTrailComponent_Authority_StopRecordingTrail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512AF50
	 * 		Name   -> Function TheK30.PatrolTrailComponent.Authority_StartRecordingTrail
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UPatrolTrailComponent::Authority_StartRecordingTrail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.PatrolTrailComponent.Authority_StartRecordingTrail"));
		
		UPatrolTrailComponent_Authority_StartRecordingTrail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatrolTrailComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatrolTrailComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.PatrolTrailComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B450
	 * 		Name   -> Function TheK30.S34P01.Server_AbilityTwoPressed
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               IsPressed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US34P01::Server_AbilityTwoPressed(bool IsPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.Server_AbilityTwoPressed"));
		
		US34P01_Server_AbilityTwoPressed_Params params {};
		params.IsPressed = IsPressed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B410
	 * 		Name   -> Function TheK30.S34P01.OnRep_IsPerkActive
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US34P01::OnRep_IsPerkActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.OnRep_IsPerkActive"));
		
		US34P01_OnRep_IsPerkActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B3F0
	 * 		Name   -> Function TheK30.S34P01.OnRep_IsAccumulatingTokens
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US34P01::OnRep_IsAccumulatingTokens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.OnRep_IsAccumulatingTokens"));
		
		US34P01_OnRep_IsAccumulatingTokens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B320
	 * 		Name   -> Function TheK30.S34P01.OnDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US34P01::OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.OnDamageStateChanged"));
		
		US34P01_OnDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.CurrentDamageState = CurrentDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA210
	 * 		Name   -> Function TheK30.S34P01.Multicast_OnUseTokens
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void US34P01::Multicast_OnUseTokens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.Multicast_OnUseTokens"));
		
		US34P01_Multicast_OnUseTokens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B2C0
	 * 		Name   -> Function TheK30.S34P01.IsPerkActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool US34P01::IsPerkActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.IsPerkActive"));
		
		US34P01_IsPerkActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B050
	 * 		Name   -> Function TheK30.S34P01.GetInitialCountdownAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US34P01::GetInitialCountdownAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.GetInitialCountdownAtLevel"));
		
		US34P01_GetInitialCountdownAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.S34P01.Cosmetic_OnUseCharge
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US34P01::Cosmetic_OnUseCharge(class ADBDPlayer* OwningPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.Cosmetic_OnUseCharge"));
		
		US34P01_Cosmetic_OnUseCharge_Params params {};
		params.OwningPlayer = OwningPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.S34P01.Cosmetic_OnStopChargingPerk
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US34P01::Cosmetic_OnStopChargingPerk(class ADBDPlayer* OwningPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.Cosmetic_OnStopChargingPerk"));
		
		US34P01_Cosmetic_OnStopChargingPerk_Params params {};
		params.OwningPlayer = OwningPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.S34P01.Cosmetic_OnStartChargingPerk
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US34P01::Cosmetic_OnStartChargingPerk(class ADBDPlayer* OwningPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.Cosmetic_OnStartChargingPerk"));
		
		US34P01_Cosmetic_OnStartChargingPerk_Params params {};
		params.OwningPlayer = OwningPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.S34P01.Cosmetic_OnFullCharge
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US34P01::Cosmetic_OnFullCharge(class ADBDPlayer* OwningPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.Cosmetic_OnFullCharge"));
		
		US34P01_Cosmetic_OnFullCharge_Params params {};
		params.OwningPlayer = OwningPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512AD10
	 * 		Name   -> Function TheK30.S34P01.Authority_OnSkillCheckResponse
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerLoudNoise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ChargeChange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US34P01::Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.Authority_OnSkillCheckResponse"));
		
		US34P01_Authority_OnSkillCheckResponse_Params params {};
		params.success = success;
		params.Bonus = Bonus;
		params.Player = Player;
		params.TriggerLoudNoise = TriggerLoudNoise;
		params.hadInput = hadInput;
		params.Type = Type;
		params.ChargeChange = ChargeChange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512AC40
	 * 		Name   -> Function TheK30.S34P01.Authority_OnAccumulateRedirectedCharge
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              ChargeAmount                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maxCharge                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US34P01::Authority_OnAccumulateRedirectedCharge(float ChargeAmount, float maxCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P01.Authority_OnAccumulateRedirectedCharge"));
		
		US34P01_Authority_OnAccumulateRedirectedCharge_Params params {};
		params.ChargeAmount = ChargeAmount;
		params.maxCharge = maxCharge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US34P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US34P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.S34P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US34P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US34P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.S34P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B230
	 * 		Name   -> Function TheK30.S34P03.GetRepairSpeedAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US34P03::GetRepairSpeedAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P03.GetRepairSpeedAtLevel"));
		
		US34P03_GetRepairSpeedAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B020
	 * 		Name   -> Function TheK30.S34P03.GetGeneratorRangeFromPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US34P03::GetGeneratorRangeFromPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.S34P03.GetGeneratorRangeFromPlayer"));
		
		US34P03_GetGeneratorRangeFromPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US34P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US34P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.S34P03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B430
	 * 		Name   -> Function TheK30.TrailNode.OnRep_PreviousNodePosition
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATrailNode::OnRep_PreviousNodePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.TrailNode.OnRep_PreviousNodePosition"));
		
		ATrailNode_OnRep_PreviousNodePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B290
	 * 		Name   -> Function TheK30.TrailNode.IsOwnerLocallyObserved
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATrailNode::IsOwnerLocallyObserved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.TrailNode.IsOwnerLocallyObserved"));
		
		ATrailNode_IsOwnerLocallyObserved_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B260
	 * 		Name   -> Function TheK30.TrailNode.IsFirstNode
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATrailNode::IsFirstNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.TrailNode.IsFirstNode"));
		
		ATrailNode_IsFirstNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.TrailNode.Cosmetic_PrepareForRemoval
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrailNode::Cosmetic_PrepareForRemoval()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.TrailNode.Cosmetic_PrepareForRemoval"));
		
		ATrailNode_Cosmetic_PrepareForRemoval_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK30.TrailNode.Client_UpdateTrail
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATrailNode::Client_UpdateTrail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK30.TrailNode.Client_UpdateTrail"));
		
		ATrailNode_Client_UpdateTrail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrailNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrailNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK30.TrailNode"));
		return ptr;
	}

}


