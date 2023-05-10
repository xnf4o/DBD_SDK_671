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
	 * 		RVA    -> 0x079DFF00
	 * 		Name   -> Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ignore                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterPusherComponent::SetIgnoredCharacter(class ACharacter* Character, bool ignore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter"));
		
		UCharacterPusherComponent_SetIgnoredCharacter_Params params {};
		params.Character = Character;
		params.ignore = ignore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DFB00
	 * 		Name   -> Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterPusherComponent::OnCharacterDetectorOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit"));
		
		UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Params params {};
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
	 * 		RVA    -> 0x079DF590
	 * 		Name   -> Function GameplayUtilities.CharacterPusherComponent.Construct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCapsuleComponent*                           characterDetector                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCapsuleComponent*                           characterCollision                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBasePushStrategyComponent*                  pushStrategy                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterPusherComponent::Construct(class UCapsuleComponent* characterDetector, class UCapsuleComponent* characterCollision, class UBasePushStrategyComponent* pushStrategy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterPusherComponent.Construct"));
		
		UCharacterPusherComponent_Construct_Params params {};
		params.characterDetector = characterDetector;
		params.characterCollision = characterCollision;
		params.pushStrategy = pushStrategy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterPusherComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterPusherComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.CharacterPusherComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DFE70
	 * 		Name   -> Function GameplayUtilities.BasePoolableActorComponent.SetAcquired
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBasePoolableActorComponent::SetAcquired(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.BasePoolableActorComponent.SetAcquired"));
		
		UBasePoolableActorComponent_SetAcquired_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DEC0
	 * 		Name   -> Function GameplayUtilities.BasePoolableActorComponent.IsAcquired
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBasePoolableActorComponent::IsAcquired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.BasePoolableActorComponent.IsAcquired"));
		
		UBasePoolableActorComponent_IsAcquired_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePoolableActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePoolableActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.BasePoolableActorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DFC60
	 * 		Name   -> Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAuthoritativePoolableActorComponent::OnRep_Acquired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired"));
		
		UAuthoritativePoolableActorComponent_OnRep_Acquired_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAuthoritativePoolableActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAuthoritativePoolableActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.AuthoritativePoolableActorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseInputAccelerationConstraintStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseInputAccelerationConstraintStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.BaseInputAccelerationConstraintStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseCharacterVelocityAdditiveStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCharacterVelocityAdditiveStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.BaseCharacterVelocityAdditiveStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DFCC0
	 * 		Name   -> Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_Pool
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		TArray<class AActor*>                              previousPool                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAuthoritativeActorPoolComponent::OnRep_Pool(TArray<class AActor*> previousPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_Pool"));
		
		UAuthoritativeActorPoolComponent_OnRep_Pool_Params params {};
		params.previousPool = previousPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DF500
	 * 		Name   -> Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAuthoritativeActorPoolComponent::Authority_OnActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed"));
		
		UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAuthoritativeActorPoolComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAuthoritativeActorPoolComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.AuthoritativeActorPoolComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseCharacterRotationStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCharacterRotationStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.BaseCharacterRotationStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePushStrategyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePushStrategyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.BasePushStrategyComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DF970
	 * 		Name   -> Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBoxOcclusionQueryComponent::GetVisiblePercentOfScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen"));
		
		UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DF8B0
	 * 		Name   -> Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBoxOcclusionQueryComponent::GetNumberOfVisiblePixels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels"));
		
		UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DF7C0
	 * 		Name   -> Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBoxOcclusionQueryComponent::GetEstimatedRenderedPixelCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount"));
		
		UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoxOcclusionQueryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoxOcclusionQueryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.BoxOcclusionQueryComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.CameraUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterPositionRecorderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterPositionRecorderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.CharacterPositionRecorderComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		ESightStatus                                       Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterSightableComponent::OnHighestSightStatusChangedBP__DelegateSignature(ESightStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature"));
		
		UCharacterSightableComponent_OnHighestSightStatusChangedBP__DelegateSignature_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DF7F0
	 * 		Name   -> Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ESightStatus UCharacterSightableComponent::GetHighestSightStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus"));
		
		UCharacterSightableComponent_GetHighestSightStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSightableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSightableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.CharacterSightableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079E02C0
	 * 		Name   -> Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ValueX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ValueY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterSightComponent::SetScreenVisibilityZoneRadiusPercent(float ValueX, float ValueY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent"));
		
		UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Params params {};
		params.ValueX = ValueX;
		params.ValueY = ValueY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079E01F0
	 * 		Name   -> Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              untrigger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterSightComponent::SetMinimumCharacterVisiblePixelsPercent(float Trigger, float untrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent"));
		
		UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Params params {};
		params.Trigger = Trigger;
		params.untrigger = untrigger;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079E0120
	 * 		Name   -> Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentNotInZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              untrigger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterSightComponent::SetMinimumCharacterScreenPercentNotInZone(float Trigger, float untrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentNotInZone"));
		
		UCharacterSightComponent_SetMinimumCharacterScreenPercentNotInZone_Params params {};
		params.Trigger = Trigger;
		params.untrigger = untrigger;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079E0050
	 * 		Name   -> Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentInZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              untrigger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterSightComponent::SetMinimumCharacterScreenPercentInZone(float Trigger, float untrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentInZone"));
		
		UCharacterSightComponent_SetMinimumCharacterScreenPercentInZone_Params params {};
		params.Trigger = Trigger;
		params.untrigger = untrigger;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DFFD0
	 * 		Name   -> Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterSightComponent::SetMaximumSightDistance(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance"));
		
		UCharacterSightComponent_SetMaximumSightDistance_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DFDB0
	 * 		Name   -> Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		TArray<class ACharacter*>                          Characters                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCharacterSightComponent::Server_UpdateDiscernedCharacters(TArray<class ACharacter*> Characters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters"));
		
		UCharacterSightComponent_Server_UpdateDiscernedCharacters_Params params {};
		params.Characters = Characters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DFCA0
	 * 		Name   -> Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCharacterSightComponent::OnRep_DiscernibleCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters"));
		
		UCharacterSightComponent_OnRep_DiscernibleCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DFC80
	 * 		Name   -> Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCharacterSightComponent::OnRep_CanSee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee"));
		
		UCharacterSightComponent_OnRep_CanSee_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.CharacterSightComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DF6A0
	 * 		Name   -> Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              secondsToAdd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              baseMaxSeconds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              baseRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UChargeableUtilities::STATIC_ConvertSecondsToAddToRateMultiplier(float secondsToAdd, float baseMaxSeconds, float baseRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier"));
		
		UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Params params {};
		params.secondsToAdd = secondsToAdd;
		params.baseMaxSeconds = baseMaxSeconds;
		params.baseRate = baseRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChargeableUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChargeableUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.ChargeableUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectedObjectCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectedObjectCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.CollectedObjectCollection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContainerUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContainerUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.ContainerUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoolableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoolableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.PoolableActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPotentialAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPotentialAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.PotentialAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsLookingTowardsQueryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsLookingTowardsQueryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.IsLookingTowardsQueryComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockAuthoritativeActorPoolComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockAuthoritativeActorPoolComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.MockAuthoritativeActorPoolComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMockPoolableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMockPoolableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.MockPoolableActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMovableCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMovableCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.MovableCamera"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveActorToComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveActorToComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.MoveActorToComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DF9A0
	 * 		Name   -> Function GameplayUtilities.MovementUtilities.Local_MoveActorTo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovementUtilities::STATIC_Local_MoveActorTo(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.MovementUtilities.Local_MoveActorTo"));
		
		UMovementUtilities_Local_MoveActorTo_Params params {};
		params.Actor = Actor;
		params.Location = Location;
		params.Rotation = Rotation;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovementUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovementUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.MovementUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DF8E0
	 * 		Name   -> Function GameplayUtilities.PawnUtilities.GetOwningPawn
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Origin                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UPawnUtilities::STATIC_GetOwningPawn(class AActor* Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.PawnUtilities.GetOwningPawn"));
		
		UPawnUtilities_GetOwningPawn_Params params {};
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079DF820
	 * 		Name   -> Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UPawnUtilities::STATIC_GetLocallyObservedPawn(class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn"));
		
		UPawnUtilities_GetLocallyObservedPawn_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.PawnUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerStateExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerStateExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.PlayerStateExt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoolableActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoolableActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.PoolableActorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneComponentExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneComponentExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.SceneComponentExt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USidePushStrategyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USidePushStrategyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.SidePushStrategyComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualLoggerExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualLoggerExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayUtilities.VisualLoggerExt"));
		return ptr;
	}

}


