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
	 * 		RVA    -> 0x051CC760
	 * 		Name   -> Function TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbBloodOrbsInteraction::SetPlayerOwner(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner"));
		
		UAbsorbBloodOrbsInteraction_SetPlayerOwner_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbsorbBloodOrbsInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbsorbBloodOrbsInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.AbsorbBloodOrbsInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindOrb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindOrb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.AISkill_FindOrb"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_OrbAbsorb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_OrbAbsorb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.AISkill_Interaction_OrbAbsorb"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_DashOni.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_DashOni::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.AISkill_InteractionTarget_DashOni"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_DemonMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_DemonMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.AISkill_InteractionTarget_DemonMode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.BloodOrb.UpdateAttracted_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Destination                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  absorber                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABloodOrb::UpdateAttracted_Cosmetic(const struct FVector& Destination, class ADBDPlayer* absorber, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.UpdateAttracted_Cosmetic"));
		
		ABloodOrb_UpdateAttracted_Cosmetic_Params params {};
		params.Destination = Destination;
		params.absorber = absorber;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.BloodOrb.UpdateAbsorbed_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Destination                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  absorber                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABloodOrb::UpdateAbsorbed_Cosmetic(const struct FVector& Destination, class ADBDPlayer* absorber, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.UpdateAbsorbed_Cosmetic"));
		
		ABloodOrb_UpdateAbsorbed_Cosmetic_Params params {};
		params.Destination = Destination;
		params.absorber = absorber;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC5C0
	 * 		Name   -> Function TheOni.BloodOrb.OnRep_State
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EBloodOrbState                                     oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABloodOrb::OnRep_State(EBloodOrbState oldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.OnRep_State"));
		
		ABloodOrb_OnRep_State_Params params {};
		params.oldState = oldState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.BloodOrb.OnIsAttractedChangedCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isAttracted                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABloodOrb::OnIsAttractedChangedCosmetic(bool isAttracted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.OnIsAttractedChangedCosmetic"));
		
		ABloodOrb_OnIsAttractedChangedCosmetic_Params params {};
		params.isAttracted = isAttracted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.BloodOrb.OnDestroyedCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ABloodOrb::OnDestroyedCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.OnDestroyedCosmetic"));
		
		ABloodOrb_OnDestroyedCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.BloodOrb.OnAbsorbedCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ABloodOrb::OnAbsorbedCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.OnAbsorbedCosmetic"));
		
		ABloodOrb_OnAbsorbedCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC090
	 * 		Name   -> Function TheOni.BloodOrb.GetDroppingPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* ABloodOrb::GetDroppingPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.GetDroppingPlayer"));
		
		ABloodOrb_GetDroppingPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.BloodOrb.Authority_OnDropped
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  droppedBy                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ImpulseFactor                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABloodOrb::Authority_OnDropped(class ADBDPlayer* droppedBy, float ImpulseFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.Authority_OnDropped"));
		
		ABloodOrb_Authority_OnDropped_Params params {};
		params.droppedBy = droppedBy;
		params.ImpulseFactor = ImpulseFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBAC0
	 * 		Name   -> Function TheOni.BloodOrb.Authority_OnDropFinished
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void ABloodOrb::Authority_OnDropFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.Authority_OnDropFinished"));
		
		ABloodOrb_Authority_OnDropFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB040
	 * 		Name   -> Function TheOni.BloodOrb.Authority_DestroyBloodOrb
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABloodOrb::Authority_DestroyBloodOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.Authority_DestroyBloodOrb"));
		
		ABloodOrb_Authority_DestroyBloodOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB020
	 * 		Name   -> Function TheOni.BloodOrb.Authority_Despawn
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void ABloodOrb::Authority_Despawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrb.Authority_Despawn"));
		
		ABloodOrb_Authority_Despawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABloodOrb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABloodOrb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrb"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC640
	 * 		Name   -> Function TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               inAbsorptionMode                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbAbsorberComponent::SetInAbsorbMode(bool inAbsorptionMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode"));
		
		UBloodOrbAbsorberComponent_SetInAbsorbMode_Params params {};
		params.inAbsorptionMode = inAbsorptionMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC0C0
	 * 		Name   -> Function TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBloodOrbAbsorberComponent::IsInAbsorbMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode"));
		
		UBloodOrbAbsorberComponent_IsInAbsorbMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodOrbAbsorberComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbAbsorberComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbAbsorberComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodOrbCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbCollection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CCC80
	 * 		Name   -> Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		class UBloodOrbVisibilityComponent*                BloodOrbVisibilityComponent                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  killer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbConfiguratorComponent::UpdateSurvivorBloodOrbVisibilityRange(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange"));
		
		UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Params params {};
		params.BloodOrbVisibilityComponent = BloodOrbVisibilityComponent;
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CCBB0
	 * 		Name   -> Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		class UBloodOrbVisibilityComponent*                BloodOrbVisibilityComponent                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbConfiguratorComponent::UpdateKillerBloodOrbVisiblityRanges(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges"));
		
		UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Params params {};
		params.BloodOrbVisibilityComponent = BloodOrbVisibilityComponent;
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CCAE0
	 * 		Name   -> Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		class UBloodOrbAbsorberComponent*                  BloodOrbAbsorberComponent                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbConfiguratorComponent::UpdateBloodOrbAttractSpeed(class UBloodOrbAbsorberComponent* BloodOrbAbsorberComponent, class ADBDPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed"));
		
		UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Params params {};
		params.BloodOrbAbsorberComponent = BloodOrbAbsorberComponent;
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC470
	 * 		Name   -> Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBloodOrbConfiguratorComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay"));
		
		UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBE60
	 * 		Name   -> Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  killer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbConfiguratorComponent::Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(class ADBDPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier"));
		
		UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodOrbConfiguratorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbConfiguratorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbConfiguratorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE3050
	 * 		Name   -> Function TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		int32_t                                            numOrbs                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbDropperComponent::DBD_DropBloodOrbs(int32_t numOrbs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs"));
		
		UBloodOrbDropperComponent_DBD_DropBloodOrbs_Params params {};
		params.numOrbs = numOrbs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBDD0
	 * 		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_SetPaused
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               paused                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbDropperComponent::Authority_SetPaused(bool paused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbDropperComponent.Authority_SetPaused"));
		
		UBloodOrbDropperComponent_Authority_SetPaused_Params params {};
		params.paused = paused;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBC70
	 * 		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbDropperComponent::Authority_OnOwningCamperDamageStateChanged(ECamperDamageState oldState, ECamperDamageState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged"));
		
		UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Params params {};
		params.oldState = oldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBAE0
	 * 		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBloodOrbDropParams                         dropParams                                                 (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbDropperComponent::Authority_OnDropOrbsGameEvent(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData, const struct FBloodOrbDropParams& dropParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent"));
		
		UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Params params {};
		params.GameEvent = GameEvent;
		params.GameEventData = GameEventData;
		params.dropParams = dropParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB8A0
	 * 		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbDropperComponent::Authority_OnCamperUnhooked(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked"));
		
		UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Params params {};
		params.GameEvent = GameEvent;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB790
	 * 		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbDropperComponent::Authority_OnCamperHooked(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked"));
		
		UBloodOrbDropperComponent_Authority_OnCamperHooked_Params params {};
		params.GameEvent = GameEvent;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB680
	 * 		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbDropperComponent::Authority_OnCamperCrouched(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched"));
		
		UBloodOrbDropperComponent_Authority_OnCamperCrouched_Params params {};
		params.GameEvent = GameEvent;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodOrbDropperComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbDropperComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbDropperComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodOrbFadeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbFadeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbFadeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC530
	 * 		Name   -> Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            previousOverlappingOrbs                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbOverlapComponent::OnRep_CurrentOverlappingOrbs(int32_t previousOverlappingOrbs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs"));
		
		UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Params params {};
		params.previousOverlappingOrbs = previousOverlappingOrbs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBA30
	 * 		Name   -> Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbOverlapComponent::Authority_OnDestroyedBloodOrb(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb"));
		
		UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB600
	 * 		Name   -> Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EBloodOrbVisibilityMode                            visibilityMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbOverlapComponent::Authority_OnBloodOrbVisibilityModeChanged(EBloodOrbVisibilityMode visibilityMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged"));
		
		UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Params params {};
		params.visibilityMode = visibilityMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB3D0
	 * 		Name   -> Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbOverlapComponent::Authority_OnBloodOrbEndOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap"));
		
		UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Params params {};
		params.HitComponent = HitComponent;
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
	 * 		RVA    -> 0x051CB1B0
	 * 		Name   -> Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbOverlapComponent::Authority_OnBloodOrbBeginOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap"));
		
		UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Params params {};
		params.HitComponent = HitComponent;
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
	 * 		Name   -> PredefinedFunction UBloodOrbOverlapComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbOverlapComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbOverlapComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodOrbOverlapRevealToKiller.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbOverlapRevealToKiller::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbOverlapRevealToKiller"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC2D0
	 * 		Name   -> Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		EBloodOrbState                                     oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBloodOrbState                                     NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbStateMonitorComponent::OnBloodOrbStateChanged(EBloodOrbState oldState, EBloodOrbState NewState, class ABloodOrb* BloodOrb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged"));
		
		UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Params params {};
		params.oldState = oldState;
		params.NewState = NewState;
		params.BloodOrb = BloodOrb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC1B0
	 * 		Name   -> Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbStateMonitorComponent::OnBloodOrbSpawned(class ABloodOrb* BloodOrb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned"));
		
		UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Params params {};
		params.BloodOrb = BloodOrb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC120
	 * 		Name   -> Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbStateMonitorComponent::OnBloodOrbDestroyed(class ABloodOrb* BloodOrb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed"));
		
		UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Params params {};
		params.BloodOrb = BloodOrb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodOrbStateMonitorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbStateMonitorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbStateMonitorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBF20
	 * 		Name   -> Function TheOni.BloodOrbUtilities.GetAllBloodOrbs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ABloodOrb*> UBloodOrbUtilities::STATIC_GetAllBloodOrbs(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbUtilities.GetAllBloodOrbs"));
		
		UBloodOrbUtilities_GetAllBloodOrbs_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodOrbUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04616200
	 * 		Name   -> Function TheOni.BloodOrbVisibilityComponent.SetVisibilityRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              visibilityRange                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbVisibilityComponent::SetVisibilityRange(float visibilityRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbVisibilityComponent.SetVisibilityRange"));
		
		UBloodOrbVisibilityComponent_SetVisibilityRange_Params params {};
		params.visibilityRange = visibilityRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CCA30
	 * 		Name   -> Function TheOni.BloodOrbVisibilityComponent.SetVisibilityMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EBloodOrbVisibilityMode                            visibilityMode                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbVisibilityComponent::SetVisibilityMode(EBloodOrbVisibilityMode visibilityMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbVisibilityComponent.SetVisibilityMode"));
		
		UBloodOrbVisibilityComponent_SetVisibilityMode_Params params {};
		params.visibilityMode = visibilityMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC9A0
	 * 		Name   -> Function TheOni.BloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Show                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbVisibilityComponent::SetShowAttractedBloodOrbsAuras(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras"));
		
		UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04616280
	 * 		Name   -> Function TheOni.BloodOrbVisibilityComponent.SetAuraVisibilityRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              auraVisibilityRange                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbVisibilityComponent::SetAuraVisibilityRange(float auraVisibilityRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbVisibilityComponent.SetAuraVisibilityRange"));
		
		UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Params params {};
		params.auraVisibilityRange = auraVisibilityRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC240
	 * 		Name   -> Function TheOni.BloodOrbVisibilityComponent.OnBloodOrbSpawned
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodOrbVisibilityComponent::OnBloodOrbSpawned(class ABloodOrb* BloodOrb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.BloodOrbVisibilityComponent.OnBloodOrbSpawned"));
		
		UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Params params {};
		params.BloodOrb = BloodOrb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodOrbVisibilityComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodOrbVisibilityComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.BloodOrbVisibilityComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CCAB0
	 * 		Name   -> Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDemonModeComponent::ShouldLoseDemonModeOnStun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun"));
		
		UDemonModeComponent_ShouldLoseDemonModeOnStun_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC510
	 * 		Name   -> Function TheOni.DemonModeComponent.OnPowerChargeFull
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UDemonModeComponent::OnPowerChargeFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.OnPowerChargeFull"));
		
		UDemonModeComponent_OnPowerChargeFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC4F0
	 * 		Name   -> Function TheOni.DemonModeComponent.OnPowerChargeEmpty
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UDemonModeComponent::OnPowerChargeEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.OnPowerChargeEmpty"));
		
		UDemonModeComponent_OnPowerChargeEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC3E0
	 * 		Name   -> Function TheOni.DemonModeComponent.OnIsPowerChanged
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		bool                                               IsInPower                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemonModeComponent::OnIsPowerChanged(bool IsInPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.OnIsPowerChanged"));
		
		UDemonModeComponent_OnIsPowerChanged_Params params {};
		params.IsInPower = IsInPower;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D00CF0
	 * 		Name   -> Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UDemonModeComponent::Multicast_DemonModeInterruptedOnStartup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup"));
		
		UDemonModeComponent_Multicast_DemonModeInterruptedOnStartup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA700
	 * 		Name   -> Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UDemonModeComponent::Multicast_DemonModeInterruptedOnEnding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding"));
		
		UDemonModeComponent_Multicast_DemonModeInterruptedOnEnding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC0F0
	 * 		Name   -> Function TheOni.DemonModeComponent.IsInDemonMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDemonModeComponent::IsInDemonMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.IsInDemonMode"));
		
		UDemonModeComponent_IsInDemonMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC060
	 * 		Name   -> Function TheOni.DemonModeComponent.GetDemonModeState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EDemonModeState UDemonModeComponent::GetDemonModeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.GetDemonModeState"));
		
		UDemonModeComponent_GetDemonModeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC030
	 * 		Name   -> Function TheOni.DemonModeComponent.GetCurrentCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDemonModeComponent::GetCurrentCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.GetCurrentCharge"));
		
		UDemonModeComponent_GetCurrentCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC000
	 * 		Name   -> Function TheOni.DemonModeComponent.GetChargePercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDemonModeComponent::GetChargePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.GetChargePercent"));
		
		UDemonModeComponent_GetChargePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2E70
	 * 		Name   -> Function TheOni.DemonModeComponent.DBD_DemonModeForever
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               forever                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemonModeComponent::DBD_DemonModeForever(bool forever)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.DBD_DemonModeForever"));
		
		UDemonModeComponent_DBD_DemonModeForever_Params params {};
		params.forever = forever;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBEF0
	 * 		Name   -> Function TheOni.DemonModeComponent.CanStartDemonMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDemonModeComponent::CanStartDemonMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.CanStartDemonMode"));
		
		UDemonModeComponent_CanStartDemonMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBD40
	 * 		Name   -> Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInteractionDefinition*                      Interaction                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemonModeComponent::Authority_SetDemonModeCooldownInteraction(class UInteractionDefinition* Interaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction"));
		
		UDemonModeComponent_Authority_SetDemonModeCooldownInteraction_Params params {};
		params.Interaction = Interaction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CBC50
	 * 		Name   -> Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDemonModeComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay"));
		
		UDemonModeComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB9B0
	 * 		Name   -> Function TheOni.DemonModeComponent.Authority_OnChargeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              currentChargePercent                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemonModeComponent::Authority_OnChargeChanged(float currentChargePercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.Authority_OnChargeChanged"));
		
		UDemonModeComponent_Authority_OnChargeChanged_Params params {};
		params.currentChargePercent = currentChargePercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB060
	 * 		Name   -> Function TheOni.DemonModeComponent.Authority_InterruptedMontage
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FAnimationMontageDescriptor                 Montage                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemonModeComponent::Authority_InterruptedMontage(const struct FAnimationMontageDescriptor& Montage, bool interrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.Authority_InterruptedMontage"));
		
		UDemonModeComponent_Authority_InterruptedMontage_Params params {};
		params.Montage = Montage;
		params.interrupted = interrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CAFA0
	 * 		Name   -> Function TheOni.DemonModeComponent.Authority_AddCharge
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ChargeAmount                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemonModeComponent::Authority_AddCharge(float ChargeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeComponent.Authority_AddCharge"));
		
		UDemonModeComponent_Authority_AddCharge_Params params {};
		params.ChargeAmount = ChargeAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemonModeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemonModeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.DemonModeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC7F0
	 * 		Name   -> Function TheOni.DemonModeCooldownInteraction.SetPlayerOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Owner                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemonModeCooldownInteraction::SetPlayerOwner(class ADBDPlayer* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeCooldownInteraction.SetPlayerOwner"));
		
		UDemonModeCooldownInteraction_SetPlayerOwner_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC490
	 * 		Name   -> Function TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDemonModeCooldownInteraction::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay"));
		
		UDemonModeCooldownInteraction_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemonModeCooldownInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemonModeCooldownInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.DemonModeCooldownInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC6D0
	 * 		Name   -> Function TheOni.DemonModeMenuComponent.SetInMenuDemonMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               inMenuDemonMode                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemonModeMenuComponent::SetInMenuDemonMode(bool inMenuDemonMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.DemonModeMenuComponent.SetInMenuDemonMode"));
		
		UDemonModeMenuComponent_SetInMenuDemonMode_Params params {};
		params.inMenuDemonMode = inMenuDemonMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemonModeMenuComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemonModeMenuComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.DemonModeMenuComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsPlayerAbsorbingBloodOrbsCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPlayerAbsorbingBloodOrbsCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.IsPlayerAbsorbingBloodOrbsCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMobileBloodOrbRenderer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMobileBloodOrbRenderer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.MobileBloodOrbRenderer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniAttackPicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniAttackPicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniAttackPicker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniBasicAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniBasicAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniBasicAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniBasicAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniBasicAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniBasicAttackSuccessSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CDA4F0
	 * 		Name   -> Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsInDemonMode                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOniCustomizationItemAnimInstance::SetIsInDemonMode(bool IsInDemonMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode"));
		
		UOniCustomizationItemAnimInstance_SetIsInDemonMode_Params params {};
		params.IsInDemonMode = IsInDemonMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniCustomizationItemAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniCustomizationItemAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniCustomizationItemAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC880
	 * 		Name   -> Function TheOni.OniDashInteraction.SetPlayerOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOniDashInteraction::SetPlayerOwner(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.OniDashInteraction.SetPlayerOwner"));
		
		UOniDashInteraction_SetPlayerOwner_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC4B0
	 * 		Name   -> Function TheOni.OniDashInteraction.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOniDashInteraction::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.OniDashInteraction.OnLevelReadyToPlay"));
		
		UOniDashInteraction_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.OniDashInteraction.OnDashEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOniDashInteraction::OnDashEnd(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.OniDashInteraction.OnDashEnd"));
		
		UOniDashInteraction_OnDashEnd_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.OniDashInteraction.OnDashBegin
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOniDashInteraction::OnDashBegin(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.OniDashInteraction.OnDashBegin"));
		
		UOniDashInteraction_OnDashBegin_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.OniDashInteraction.OnChargeEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               chargeCompleted                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOniDashInteraction::OnChargeEnd(class ADBDPlayer* Player, bool chargeCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.OniDashInteraction.OnChargeEnd"));
		
		UOniDashInteraction_OnChargeEnd_Params params {};
		params.Player = Player;
		params.chargeCompleted = chargeCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOni.OniDashInteraction.OnChargeBegin
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOniDashInteraction::OnChargeBegin(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.OniDashInteraction.OnChargeBegin"));
		
		UOniDashInteraction_OnChargeBegin_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDashInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDashInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDashInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDemonBasicAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDemonBasicAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDemonBasicAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDemonPowerAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDemonPowerAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDemonPowerAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDemonDashAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDemonDashAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDemonDashAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDemonPowerAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDemonPowerAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDemonPowerAttackOpenSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDemonDashAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDemonDashAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDemonDashAttackOpenSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDemonPowerAttackHittingSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDemonPowerAttackHittingSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDemonPowerAttackHittingSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDemonPowerAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDemonPowerAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDemonPowerAttackSuccessSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDemonPowerAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDemonPowerAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDemonPowerAttackMissSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDemonPowerAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDemonPowerAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniDemonPowerAttackObstructSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniPounceInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniPounceInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.OniPounceInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CB530
	 * 		Name   -> Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      overlappingActor                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URenjirosBloodyGlove::Authority_OnBloodOrbOverlapBegin(class AActor* overlappingActor, class ABloodOrb* BloodOrb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin"));
		
		URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Params params {};
		params.overlappingActor = overlappingActor;
		params.BloodOrb = BloodOrb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URenjirosBloodyGlove.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URenjirosBloodyGlove::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.RenjirosBloodyGlove"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC910
	 * 		Name   -> Function TheOni.StartDemonModeInteraction.SetPlayerOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Owner                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStartDemonModeInteraction::SetPlayerOwner(class ADBDPlayer* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.StartDemonModeInteraction.SetPlayerOwner"));
		
		UStartDemonModeInteraction_SetPlayerOwner_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC4D0
	 * 		Name   -> Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStartDemonModeInteraction::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay"));
		
		UStartDemonModeInteraction_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartDemonModeInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartDemonModeInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOni.StartDemonModeInteraction"));
		return ptr;
	}

}


