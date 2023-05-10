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
	 * 		Name   -> PredefinedFunction UActivateByBlinkAttackTimedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateByBlinkAttackTimedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.ActivateByBlinkAttackTimedEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNurse.AnxiousGaspAddon.PlayScream
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnxiousGaspAddon::PlayScream(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.AnxiousGaspAddon.PlayScream"));
		
		UAnxiousGaspAddon_PlayScream_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051ACBD0
	 * 		Name   -> Function TheNurse.AnxiousGaspAddon.OnDetectorOverlapBegin
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAnxiousGaspAddon::OnDetectorOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.AnxiousGaspAddon.OnDetectorOverlapBegin"));
		
		UAnxiousGaspAddon_OnDetectorOverlapBegin_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnxiousGaspAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnxiousGaspAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.AnxiousGaspAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseInstantBlinkInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseInstantBlinkInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BaseInstantBlinkInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomaticBlinkInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomaticBlinkInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.AutomaticBlinkInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBadMansLastBreathAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBadMansLastBreathAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BadMansLastBreathAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E21A80
	 * 		Name   -> Function TheNurse.BalancedLanding.Server_WarnBalancedLandingPredicted
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, BlueprintCallable)
	 */
	void UBalancedLanding::Server_WarnBalancedLandingPredicted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BalancedLanding.Server_WarnBalancedLandingPredicted"));
		
		UBalancedLanding_Server_WarnBalancedLandingPredicted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA100
	 * 		Name   -> Function TheNurse.BalancedLanding.GetSprintDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBalancedLanding::GetSprintDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BalancedLanding.GetSprintDuration"));
		
		UBalancedLanding_GetSprintDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003B60
	 * 		Name   -> Function TheNurse.BalancedLanding.GetExhaustionDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBalancedLanding::GetExhaustionDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BalancedLanding.GetExhaustionDurationAtLevel"));
		
		UBalancedLanding_GetExhaustionDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA210
	 * 		Name   -> Function TheNurse.BalancedLanding.Client_UnvalidateBalanceLanding
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UBalancedLanding::Client_UnvalidateBalanceLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BalancedLanding.Client_UnvalidateBalanceLanding"));
		
		UBalancedLanding_Client_UnvalidateBalanceLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBalancedLanding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBalancedLanding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BalancedLanding"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseNursePerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseNursePerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BaseNursePerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkAttackSuccessSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkBackInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkBackInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkBackInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkIndicatorController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkIndicatorController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkIndicatorController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AE450
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Server_StartBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		struct FBlinkParams                                Params                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBlinkPlayerComponent::Server_StartBlink(const struct FBlinkParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPlayerComponent.Server_StartBlink"));
		
		UBlinkPlayerComponent_Server_StartBlink_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D00CF0
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Server_EndBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UBlinkPlayerComponent::Server_EndBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPlayerComponent.Server_EndBlink"));
		
		UBlinkPlayerComponent_Server_EndBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AE380
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Multicast_StartBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FBlinkParams                                Params                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBlinkPlayerComponent::Multicast_StartBlink(const struct FBlinkParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPlayerComponent.Multicast_StartBlink"));
		
		UBlinkPlayerComponent_Multicast_StartBlink_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA700
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Multicast_EndBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UBlinkPlayerComponent::Multicast_EndBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPlayerComponent.Multicast_EndBlink"));
		
		UBlinkPlayerComponent_Multicast_EndBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AE270
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Local_OnMovementModeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPlayerComponent::Local_OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPlayerComponent.Local_OnMovementModeChanged"));
		
		UBlinkPlayerComponent_Local_OnMovementModeChanged_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkPlayerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkPowerDebugComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkPowerDebugComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkPowerDebugComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkPowerEventDispatcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkPowerEventDispatcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkPowerEventDispatcher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABlinkPowerItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlinkPowerItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkPowerItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF6C0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Setup
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBlinkPowerSetupParams                      Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Setup(const struct FBlinkPowerSetupParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.Setup"));
		
		UBlinkPowerPlayerComponent_Setup_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB03D0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerCooldown
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Server_TriggerCooldown(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerCooldown"));
		
		UBlinkPowerPlayerComponent_Server_TriggerCooldown_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF630
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerChainBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		int32_t                                            remainingBlinkCharges                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Server_TriggerChainBlink(int32_t remainingBlinkCharges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerChainBlink"));
		
		UBlinkPowerPlayerComponent_Server_TriggerChainBlink_Params params {};
		params.remainingBlinkCharges = remainingBlinkCharges;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D3DDF0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Server_SetState
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		EBlinkPowerState                                   State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Server_SetState(EBlinkPowerState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.Server_SetState"));
		
		UBlinkPowerPlayerComponent_Server_SetState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE7780
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Server_InterruptDuringChainBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class AActor*                                      interruptedPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Server_InterruptDuringChainBlink(class AActor* interruptedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.Server_InterruptDuringChainBlink"));
		
		UBlinkPowerPlayerComponent_Server_InterruptDuringChainBlink_Params params {};
		params.interruptedPlayer = interruptedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF5B0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EBlinkPowerState                                   oldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::OnRep_BlinkState(EBlinkPowerState oldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkState"));
		
		UBlinkPowerPlayerComponent_OnRep_BlinkState_Params params {};
		params.oldState = oldState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF590
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkCharges
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBlinkPowerPlayerComponent::OnRep_BlinkCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkCharges"));
		
		UBlinkPowerPlayerComponent_OnRep_BlinkCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF570
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBlinkPowerPlayerComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.OnLevelReadyToPlay"));
		
		UBlinkPowerPlayerComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF4F0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnAttackStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EAttackType                                        attackType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::OnAttackStarted(EAttackType attackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.OnAttackStarted"));
		
		UBlinkPowerPlayerComponent_OnAttackStarted_Params params {};
		params.attackType = attackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF470
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnAttackFinished
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EAttackType                                        attackType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::OnAttackFinished(EAttackType attackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.OnAttackFinished"));
		
		UBlinkPowerPlayerComponent_OnAttackFinished_Params params {};
		params.attackType = attackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF440
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.IsChargingBlink
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBlinkPowerPlayerComponent::IsChargingBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.IsChargingBlink"));
		
		UBlinkPowerPlayerComponent_IsChargingBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF410
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.IsChargeFull
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBlinkPowerPlayerComponent::IsChargeFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.IsChargeFull"));
		
		UBlinkPowerPlayerComponent_IsChargeFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF3E0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.IsBlinking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBlinkPowerPlayerComponent::IsBlinking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.IsBlinking"));
		
		UBlinkPowerPlayerComponent_IsBlinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF3B0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetRechargeProgressPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetRechargeProgressPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.GetRechargeProgressPercent"));
		
		UBlinkPowerPlayerComponent_GetRechargeProgressPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF380
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetPowerState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EBlinkPowerState UBlinkPowerPlayerComponent::GetPowerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.GetPowerState"));
		
		UBlinkPowerPlayerComponent_GetPowerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF350
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetCooldownTimerDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetCooldownTimerDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.GetCooldownTimerDuration"));
		
		UBlinkPowerPlayerComponent_GetCooldownTimerDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF320
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetCooldownRemainingTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetCooldownRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.GetCooldownRemainingTime"));
		
		UBlinkPowerPlayerComponent_GetCooldownRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF2F0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetCooldownProgressPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetCooldownProgressPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.GetCooldownProgressPercent"));
		
		UBlinkPowerPlayerComponent_GetCooldownProgressPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF2C0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkTimerDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetChainBlinkTimerDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkTimerDuration"));
		
		UBlinkPowerPlayerComponent_GetChainBlinkTimerDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF290
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkRemainingTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetChainBlinkRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkRemainingTime"));
		
		UBlinkPowerPlayerComponent_GetChainBlinkRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF260
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkProgressPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetChainBlinkProgressPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkProgressPercent"));
		
		UBlinkPowerPlayerComponent_GetChainBlinkProgressPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051AF230
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetBlinkCharges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UBlinkPowerPlayerComponent::GetBlinkCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.BlinkPowerPlayerComponent.GetBlinkCharges"));
		
		UBlinkPowerPlayerComponent_GetBlinkCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkPowerPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkPowerPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkPowerPlayerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlinkTargetFinder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkTargetFinder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.BlinkTargetFinder"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDarkCinctureAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDarkCinctureAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.DarkCinctureAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFragileWheezeAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFragileWheezeAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.FragileWheezeAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsChainBlinkingCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsChainBlinkingCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.IsChainBlinkingCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsInChainBlinkWindowCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsInChainBlinkWindowCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.IsInChainBlinkWindowCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKavanaghsLastBreathAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKavanaghsLastBreathAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.KavanaghsLastBreathAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchboxAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchboxAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.MatchboxAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNurse.NurseAnimInstance.OnBlinkTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UNurseAnimInstance::OnBlinkTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.NurseAnimInstance.OnBlinkTriggered"));
		
		UNurseAnimInstance_OnBlinkTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNurseAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNurseAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.NurseAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNurseAttackPicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNurseAttackPicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.NurseAttackPicker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNurse.NurseFXInterface.Cosmetic_SpawnSpasmodicBreathVignette
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNurseFXInterface::Cosmetic_SpawnSpasmodicBreathVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.NurseFXInterface.Cosmetic_SpawnSpasmodicBreathVignette"));
		
		UNurseFXInterface_Cosmetic_SpawnSpasmodicBreathVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNurse.NurseFXInterface.Cosmetic_OnSpasmodicBreathAddonEffectActive
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               activeValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNurseFXInterface::Cosmetic_OnSpasmodicBreathAddonEffectActive(bool activeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.NurseFXInterface.Cosmetic_OnSpasmodicBreathAddonEffectActive"));
		
		UNurseFXInterface_Cosmetic_OnSpasmodicBreathAddonEffectActive_Params params {};
		params.activeValue = activeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNurseFXInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNurseFXInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.NurseFXInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051B0750
	 * 		Name   -> Function TheNurse.NurseHelper.GetBlinkPowerItem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ABlinkPowerItem* UNurseHelper::STATIC_GetBlinkPowerItem(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.NurseHelper.GetBlinkPowerItem"));
		
		UNurseHelper_GetBlinkPowerItem_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNurseHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNurseHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.NurseHelper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpasmodicBreathAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpasmodicBreathAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.SpasmodicBreathAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051B0C00
	 * 		Name   -> Function TheNurse.StreetwiseEffect.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreetwiseEffect::Authority_OnInRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNurse.StreetwiseEffect.Authority_OnInRangeChanged"));
		
		UStreetwiseEffect_Authority_OnInRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreetwiseEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreetwiseEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.StreetwiseEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThanatophobiaEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThanatophobiaEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.ThanatophobiaEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThanatophobiaPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThanatophobiaPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNurse.ThanatophobiaPerk"));
		return ptr;
	}

}


