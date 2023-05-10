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
	 * 		Name   -> PredefinedFunction UActorPairQueryEvaluatorUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorPairQueryEvaluatorUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.ActorPairQueryEvaluatorUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046163B0
	 * 		Name   -> Function DBDGameplay.AimableComponent.SetProcessors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UAimPointProcessor*>                  processors                                                 (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAimableComponent::SetProcessors(TArray<class UAimPointProcessor*> processors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AimableComponent.SetProcessors"));
		
		UAimableComponent_SetProcessors_Params params {};
		params.processors = processors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04616300
	 * 		Name   -> Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              IgnoredActors                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAimableComponent::SetOcclusionIgnoredActors(TArray<class AActor*> IgnoredActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors"));
		
		UAimableComponent_SetOcclusionIgnoredActors_Params params {};
		params.IgnoredActors = IgnoredActors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04616180
	 * 		Name   -> Function DBDGameplay.AimableComponent.SetMaxAimDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              maxAimDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimableComponent::SetMaxAimDistance(float maxAimDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AimableComponent.SetMaxAimDistance"));
		
		UAimableComponent_SetMaxAimDistance_Params params {};
		params.maxAimDistance = maxAimDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAimableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.AimableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAimDirectionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimDirectionProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.AimDirectionProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAimPointProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimPointProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.AimPointProcessor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04616280
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetNoiseFrequencyMultiplier(float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier"));
		
		UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Params params {};
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04616200
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetNoiseAmplitudeMultiplier(float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier"));
		
		UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Params params {};
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615E50
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              noisePersistence                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetBaseInaccuracyNoisePersistence(float noisePersistence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence"));
		
		UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Params params {};
		params.noisePersistence = noisePersistence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615DC0
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            octaveCount                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetBaseInaccuracyNoiseOctaveCount(int32_t octaveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount"));
		
		UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Params params {};
		params.octaveCount = octaveCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615D40
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Frequency                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetBaseInaccuracyNoiseFrequency(float Frequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency"));
		
		UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Params params {};
		params.Frequency = Frequency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615CC0
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Amplitude                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetBaseInaccuracyNoiseAmplitude(float Amplitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude"));
		
		UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Params params {};
		params.Amplitude = Amplitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAimPointPerlinNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimPointPerlinNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.AimPointPerlinNoise"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Terror.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Terror::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.AISenseConfig_Terror"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseEvent_Terror.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseEvent_Terror::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.AISenseEvent_Terror"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046159E0
	 * 		Name   -> Function DBDGameplay.AISense_Terror.ReportTerrorEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     worldContextObj                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTerrorRadiusEmitterComponent*               TerrorEmitter                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISense_Terror::STATIC_ReportTerrorEvent(class UObject* worldContextObj, const struct FVector& Location, class AActor* Instigator, class UTerrorRadiusEmitterComponent* TerrorEmitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AISense_Terror.ReportTerrorEvent"));
		
		UAISense_Terror_ReportTerrorEvent_Params params {};
		params.worldContextObj = worldContextObj;
		params.Location = Location;
		params.Instigator = Instigator;
		params.TerrorEmitter = TerrorEmitter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Terror.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Terror::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.AISense_Terror"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615B30
	 * 		Name   -> Function DBDGameplay.AuraOverriderComponent.ResetAura
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAuraOverriderComponent::ResetAura(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AuraOverriderComponent.ResetAura"));
		
		UAuraOverriderComponent_ResetAura_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046152D0
	 * 		Name   -> Function DBDGameplay.AuraOverriderComponent.ForceShowAura
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsAlwaysVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              minimumOutlineDistance                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAuraOverriderComponent::ForceShowAura(class AActor* Actor, const struct FLinearColor& Color, bool IsAlwaysVisible, float minimumOutlineDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.AuraOverriderComponent.ForceShowAura"));
		
		UAuraOverriderComponent_ForceShowAura_Params params {};
		params.Actor = Actor;
		params.Color = Color;
		params.IsAlwaysVisible = IsAlwaysVisible;
		params.minimumOutlineDistance = minimumOutlineDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAuraOverriderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAuraOverriderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.AuraOverriderComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615570
	 * 		Name   -> Function DBDGameplay.BaseActorAttackableComponent.HitWithProjectile
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseActorAttackableComponent::HitWithProjectile(class ABaseProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.BaseActorAttackableComponent.HitWithProjectile"));
		
		UBaseActorAttackableComponent_HitWithProjectile_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseActorAttackableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseActorAttackableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.BaseActorAttackableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseCamperCollectable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseCamperCollectable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.BaseCamperCollectable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046164A0
	 * 		Name   -> Function DBDGameplay.BaseHusk.SetScalarParameterOnAllChildrenMeshes
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseHusk::SetScalarParameterOnAllChildrenMeshes(const class FName& ParameterName, float value, class USkeletalMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.BaseHusk.SetScalarParameterOnAllChildrenMeshes"));
		
		ABaseHusk_SetScalarParameterOnAllChildrenMeshes_Params params {};
		params.ParameterName = ParameterName;
		params.value = value;
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046160F0
	 * 		Name   -> Function DBDGameplay.BaseHusk.SetHuskVisibility
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseHusk::SetHuskVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.BaseHusk.SetHuskVisibility"));
		
		ABaseHusk_SetHuskVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615600
	 * 		Name   -> Function DBDGameplay.BaseHusk.InitializeHusk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCustomizedSkeletalMesh*                     customizedSkeletalMeshToCopy                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseHusk::InitializeHusk(class UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.BaseHusk.InitializeHusk"));
		
		ABaseHusk_InitializeHusk_Params params {};
		params.customizedSkeletalMeshToCopy = customizedSkeletalMeshToCopy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.BaseHusk.Cosmetic_InitializeSkeletalMesh
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseHusk::Cosmetic_InitializeSkeletalMesh(class USkeletalMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.BaseHusk.Cosmetic_InitializeSkeletalMesh"));
		
		ABaseHusk_Cosmetic_InitializeSkeletalMesh_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseHusk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseHusk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.BaseHusk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightableLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightableLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FlashlightableLightingStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightablePointsLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightablePointsLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FlashlightablePointsLightingStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlindFlashlightableLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlindFlashlightableLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.BlindFlashlightableLightingStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619C20
	 * 		Name   -> Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsLit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightTargetFXComponent::OnIsLitChanged(bool IsLit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged"));
		
		UFlashlightTargetFXComponent_OnIsLitChanged_Params params {};
		params.IsLit = IsLit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightTargetFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightTargetFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FlashlightTargetFXComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlindFlashlightTargetFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlindFlashlightTargetFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.BlindFlashlightTargetFXComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFootstepCreatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootstepCreatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FootstepCreatorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046156F0
	 * 		Name   -> Function DBDGameplay.CamperFootstepCreatorComponent.OnLoudNoiseTriggered
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      originator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      instigatingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               shouldTrack                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              audibleRange                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isQuickAction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isDeceivingNoise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCamperFootstepCreatorComponent::OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, const struct FVector& Location, bool shouldTrack, float* audibleRange, bool isQuickAction, bool isDeceivingNoise)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.CamperFootstepCreatorComponent.OnLoudNoiseTriggered"));
		
		UCamperFootstepCreatorComponent_OnLoudNoiseTriggered_Params params {};
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
	 * 		Name   -> PredefinedFunction UCamperFootstepCreatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamperFootstepCreatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.CamperFootstepCreatorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFootstepPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootstepPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FootstepPerceptionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerFootstepPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerFootstepPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PlayerFootstepPerceptionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCamperFootstepPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamperFootstepPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.CamperFootstepPerceptionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterOptimizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterOptimizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.CharacterOptimizer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615450
	 * 		Name   -> Function DBDGameplay.CollectableComponentUtilities.GetCollector
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ADBDPlayer* UCollectableComponentUtilities::STATIC_GetCollector(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.CollectableComponentUtilities.GetCollector"));
		
		UCollectableComponentUtilities_GetCollector_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectableComponentUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectableComponentUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.CollectableComponentUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConspicuousActionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConspicuousActionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.ConspicuousActionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDCharacterPusherComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDCharacterPusherComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.DBDCharacterPusherComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046165D0
	 * 		Name   -> Function DBDGameplay.DebugIndicator.SetVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               visible                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADebugIndicator::SetVisible(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.DebugIndicator.SetVisible"));
		
		ADebugIndicator_SetVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615ED0
	 * 		Name   -> Function DBDGameplay.DebugIndicator.SetColor
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADebugIndicator::SetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.DebugIndicator.SetColor"));
		
		ADebugIndicator_SetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.DebugIndicator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615F60
	 * 		Name   -> Function DBDGameplay.DecoySlasherComponent.SetDecoyIsActive
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               visibleRedGlow                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDecoySlasherComponent::SetDecoyIsActive(bool IsActive, const struct FVector& Location, const struct FRotator& Rotation, bool visibleRedGlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.DecoySlasherComponent.SetDecoyIsActive"));
		
		UDecoySlasherComponent_SetDecoyIsActive_Params params {};
		params.IsActive = IsActive;
		params.Location = Location;
		params.Rotation = Rotation;
		params.visibleRedGlow = visibleRedGlow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615940
	 * 		Name   -> Function DBDGameplay.DecoySlasherComponent.OnRealSlasherTerrorRadiusChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDecoySlasherComponent::OnRealSlasherTerrorRadiusChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.DecoySlasherComponent.OnRealSlasherTerrorRadiusChanged"));
		
		UDecoySlasherComponent_OnRealSlasherTerrorRadiusChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615690
	 * 		Name   -> Function DBDGameplay.DecoySlasherComponent.IsDecoyActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDecoySlasherComponent::IsDecoyActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.DecoySlasherComponent.IsDecoyActive"));
		
		UDecoySlasherComponent_IsDecoyActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615510
	 * 		Name   -> Function DBDGameplay.DecoySlasherComponent.GetRealSlasher
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* UDecoySlasherComponent::GetRealSlasher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.DecoySlasherComponent.GetRealSlasher"));
		
		UDecoySlasherComponent_GetRealSlasher_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046151F0
	 * 		Name   -> Function DBDGameplay.DecoySlasherComponent.DoPostVFXUpdates
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDecoySlasherComponent::DoPostVFXUpdates(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.DecoySlasherComponent.DoPostVFXUpdates"));
		
		UDecoySlasherComponent_DoPostVFXUpdates_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046151D0
	 * 		Name   -> Function DBDGameplay.DecoySlasherComponent.CopyCustomizationFromSlasher
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDecoySlasherComponent::CopyCustomizationFromSlasher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.DecoySlasherComponent.CopyCustomizationFromSlasher"));
		
		UDecoySlasherComponent_CopyCustomizationFromSlasher_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecoySlasherComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecoySlasherComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.DecoySlasherComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615BC0
	 * 		Name   -> Function DBDGameplay.EtherealComponent.Server_SetIsEthereal
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Ethereal                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEtherealComponent::Server_SetIsEthereal(float Timestamp, bool Ethereal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.EtherealComponent.Server_SetIsEthereal"));
		
		UEtherealComponent_Server_SetIsEthereal_Params params {};
		params.Timestamp = Timestamp;
		params.Ethereal = Ethereal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046159C0
	 * 		Name   -> Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UEtherealComponent::OnRep_OnIsEtherealChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged"));
		
		UEtherealComponent_OnRep_OnIsEtherealChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEtherealComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEtherealComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.EtherealComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E690
	 * 		Name   -> Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URangeToActorsTrackerStrategy::OnInRangeToTrackedActorsChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged"));
		
		URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URangeToActorsTrackerStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeToActorsTrackerStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.RangeToActorsTrackerStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExitGateSwitchesRangeTrackerStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExitGateSwitchesRangeTrackerStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046154E0
	 * 		Name   -> Function DBDGameplay.FadeComponent.GetFadePercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFadeComponent::GetFadePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FadeComponent.GetFadePercent"));
		
		UFadeComponent_GetFadePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFadeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFadeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FadeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFirecrackerSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFirecrackerSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FirecrackerSpawner"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615540
	 * 		Name   -> Function DBDGameplay.Flashlight.GetSpotlightComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpotLightComponent* AFlashlight::GetSpotlightComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.Flashlight.GetSpotlightComponent"));
		
		AFlashlight_GetSpotlightComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlashlight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlashlight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.Flashlight"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightLitChangedEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               IsLit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightableComponent::OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightLitChangedEvent__DelegateSignature"));
		
		UFlashlightableComponent_OnFlashlightLitChangedEvent__DelegateSignature_Params params {};
		params.IsLit = IsLit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightableComponent::OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature"));
		
		UFlashlightableComponent_OnFlashlightAddedRemovedEvent__DelegateSignature_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046156C0
	 * 		Name   -> Function DBDGameplay.FlashlightableComponent.IsLit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFlashlightableComponent::IsLit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightableComponent.IsLit"));
		
		UFlashlightableComponent_IsLit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FlashlightableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461A200
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.TurnOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFlashlightComponent::TurnOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightComponent.TurnOn"));
		
		UFlashlightComponent_TurnOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461A1E0
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.TurnOff
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFlashlightComponent::TurnOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightComponent.TurnOff"));
		
		UFlashlightComponent_TurnOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619FB0
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		TArray<class UFlashlightableComponent*>            newLitFlashlightables                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UFlashlightComponent::Server_SetAndUpdateAutonomousLitFlashlightables(TArray<class UFlashlightableComponent*> newLitFlashlightables)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables"));
		
		UFlashlightComponent_Server_SetAndUpdateAutonomousLitFlashlightables_Params params {};
		params.newLitFlashlightables = newLitFlashlightables;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619DF0
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightComponent::OnRep_ReplicatedLitFlashlightables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables"));
		
		UFlashlightComponent_OnRep_ReplicatedLitFlashlightables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619DD0
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightComponent::OnRep_IsOwnerLagging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging"));
		
		UFlashlightComponent_OnRep_IsOwnerLagging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UFlashlightComponent::OnFlashlightEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature"));
		
		UFlashlightComponent_OnFlashlightEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619AE0
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.IsOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFlashlightComponent::IsOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightComponent.IsOn"));
		
		UFlashlightComponent_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619A20
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightComponent::GetEffectiveTimeToBlindModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier"));
		
		UFlashlightComponent_GetEffectiveTimeToBlindModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619990
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightComponent::GetEffectiveBlindnessDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration"));
		
		UFlashlightComponent_GetEffectiveBlindnessDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FlashlightComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619A50
	 * 		Name   -> Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightConeComponent::GetOcclusionDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance"));
		
		UFlashlightConeComponent_GetOcclusionDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046199F0
	 * 		Name   -> Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightConeComponent::GetEffectiveConeLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength"));
		
		UFlashlightConeComponent_GetEffectiveConeLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046199C0
	 * 		Name   -> Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightConeComponent::GetEffectiveConeHalfAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle"));
		
		UFlashlightConeComponent_GetEffectiveConeHalfAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightConeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightConeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FlashlightConeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461A220
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightFXComponent::UpdateFXTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets"));
		
		UFlashlightFXComponent_UpdateFXTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              halfAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightFXComponent::UpdateConeEvent(float Length, float halfAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent"));
		
		UFlashlightFXComponent_UpdateConeEvent_Params params {};
		params.Length = Length;
		params.halfAngle = halfAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlashlightFXComponent::PostUpdateEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent"));
		
		UFlashlightFXComponent_PostUpdateEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619EE0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnTurnedOn
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightFXComponent::OnTurnedOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.OnTurnedOn"));
		
		UFlashlightFXComponent_OnTurnedOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619EC0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnTurnedOff
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightFXComponent::OnTurnedOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.OnTurnedOff"));
		
		UFlashlightFXComponent_OnTurnedOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnStopEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlashlightFXComponent::OnStopEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.OnStopEvent"));
		
		UFlashlightFXComponent_OnStopEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnStartEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlashlightFXComponent::OnStartEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.OnStartEvent"));
		
		UFlashlightFXComponent_OnStartEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UFlashlightFXComponent::OnFlashEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature"));
		
		UFlashlightFXComponent_OnFlashEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlashlightFXComponent::OnDroppedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent"));
		
		UFlashlightFXComponent_OnDroppedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocallyObserved                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightFXComponent::OnCollectorLocallyObservedChangedEvent(bool IsLocallyObserved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent"));
		
		UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Params params {};
		params.IsLocallyObserved = IsLocallyObserved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightFXComponent::OnCollectedEvent(class ADBDPlayer* collector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent"));
		
		UFlashlightFXComponent_OnCollectedEvent_Params params {};
		params.collector = collector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619900
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightFXComponent::GetBlindingSuccessRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio"));
		
		UFlashlightFXComponent_GetBlindingSuccessRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FlashlightFXComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FlashlightUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461A100
	 * 		Name   -> Function DBDGameplay.FootstepManagerComponent.TriggerSpawnFootstep
	 * 		Flags  -> (Final, Native, Public, HasDefaults)
	 * Parameters:
	 * 		class UFootstepCreatorComponent*                   originatorComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFootstepManagerComponent::TriggerSpawnFootstep(class UFootstepCreatorComponent* originatorComponent, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FootstepManagerComponent.TriggerSpawnFootstep"));
		
		UFootstepManagerComponent_TriggerSpawnFootstep_Params params {};
		params.originatorComponent = originatorComponent;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619F90
	 * 		Name   -> Function DBDGameplay.FootstepManagerComponent.OnUpdateObserverFootsteps
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UFootstepManagerComponent::OnUpdateObserverFootsteps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FootstepManagerComponent.OnUpdateObserverFootsteps"));
		
		UFootstepManagerComponent_OnUpdateObserverFootsteps_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619F00
	 * 		Name   -> Function DBDGameplay.FootstepManagerComponent.OnUpdateCreatorFootsteps
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UFootstepCreatorComponent*                   creator                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFootstepManagerComponent::OnUpdateCreatorFootsteps(class UFootstepCreatorComponent* creator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.FootstepManagerComponent.OnUpdateCreatorFootsteps"));
		
		UFootstepManagerComponent_OnUpdateCreatorFootsteps_Params params {};
		params.creator = creator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFootstepManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootstepManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.FootstepManagerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHooksWithSurvivorRangeTrackerStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHooksWithSurvivorRangeTrackerStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619E10
	 * 		Name   -> Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInteractionStarterComponent::OnRep_ShouldStartInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction"));
		
		UInteractionStarterComponent_OnRep_ShouldStartInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619C00
	 * 		Name   -> Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInteractionStarterComponent::OnInteractionStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted"));
		
		UInteractionStarterComponent_OnInteractionStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionStarterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionStarterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.InteractionStarterComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerFlashlightSFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerFlashlightSFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.KillerFlashlightSFXComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerFootstepPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerFootstepPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.KillerFootstepPerceptionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461A070
	 * 		Name   -> Function DBDGameplay.KillerInstinctComponent.SetParticleSystem
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UNiagaraComponent*                           ParticleSystemComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKillerInstinctComponent::SetParticleSystem(class UNiagaraComponent* ParticleSystemComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.KillerInstinctComponent.SetParticleSystem"));
		
		UKillerInstinctComponent_SetParticleSystem_Params params {};
		params.ParticleSystemComponent = ParticleSystemComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619CB0
	 * 		Name   -> Function DBDGameplay.KillerInstinctComponent.OnKillerLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               locallyObserved                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKillerInstinctComponent::OnKillerLocallyObservedChanged(bool locallyObserved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.KillerInstinctComponent.OnKillerLocallyObservedChanged"));
		
		UKillerInstinctComponent_OnKillerLocallyObservedChanged_Params params {};
		params.locallyObserved = locallyObserved;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619B10
	 * 		Name   -> Function DBDGameplay.KillerInstinctComponent.IsOwnerInKillerInstinctRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UKillerInstinctComponent::IsOwnerInKillerInstinctRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.KillerInstinctComponent.IsOwnerInKillerInstinctRadius"));
		
		UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619A80
	 * 		Name   -> Function DBDGameplay.KillerInstinctComponent.GetParticleSystem
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	class UNiagaraComponent* UKillerInstinctComponent::GetParticleSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.KillerInstinctComponent.GetParticleSystem"));
		
		UKillerInstinctComponent_GetParticleSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerInstinctComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerInstinctComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.KillerInstinctComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619E30
	 * 		Name   -> Function DBDGameplay.LullabyFeedbackComponent.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULullabyFeedbackComponent::OnSlasherSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.LullabyFeedbackComponent.OnSlasherSet"));
		
		ULullabyFeedbackComponent_OnSlasherSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULullabyFeedbackComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULullabyFeedbackComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.LullabyFeedbackComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.MapCollectable.GetChargerComponent
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class UChargerComponent* AMapCollectable::GetChargerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.MapCollectable.GetChargerComponent"));
		
		AMapCollectable_GetChargerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.MapCollectable.GetChargeableComponent
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class UChargeableComponent* AMapCollectable::GetChargeableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.MapCollectable.GetChargeableComponent"));
		
		AMapCollectable_GetChargeableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.MapCollectable.GetActorKnowledgeCollection
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class UActorKnowledgeCollection* AMapCollectable::GetActorKnowledgeCollection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.MapCollectable.GetActorKnowledgeCollection"));
		
		AMapCollectable_GetActorKnowledgeCollection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapCollectable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapCollectable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.MapCollectable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461A240
	 * 		Name   -> Function DBDGameplay.Medkit.UseCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMedkit::UseCharge(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.Medkit.UseCharge"));
		
		AMedkit_UseCharge_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619D40
	 * 		Name   -> Function DBDGameplay.Medkit.OnMedkitHealedCamper
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  healedPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMedkit::OnMedkitHealedCamper(class ADBDPlayer* healedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.Medkit.OnMedkitHealedCamper"));
		
		AMedkit_OnMedkitHealedCamper_Params params {};
		params.healedPlayer = healedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619AB0
	 * 		Name   -> Function DBDGameplay.Medkit.HasCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AMedkit::HasCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.Medkit.HasCharge"));
		
		AMedkit_HasCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619960
	 * 		Name   -> Function DBDGameplay.Medkit.GetChargeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AMedkit::GetChargeMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.Medkit.GetChargeMultiplier"));
		
		AMedkit_GetChargeMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619930
	 * 		Name   -> Function DBDGameplay.Medkit.GetCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AMedkit::GetCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.Medkit.GetCharge"));
		
		AMedkit_GetCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619850
	 * 		Name   -> Function DBDGameplay.Medkit.Authority_OnChargeStateChange
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               Empty                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMedkit::Authority_OnChargeStateChange(bool Empty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.Medkit.Authority_OnChargeStateChange"));
		
		AMedkit_Authority_OnChargeStateChange_Params params {};
		params.Empty = Empty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046197C0
	 * 		Name   -> Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               IsInteracting                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMedkit::Authority_OnAnyOngoingInteractionChanged(bool IsInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged"));
		
		AMedkit_Authority_OnAnyOngoingInteractionChanged_Params params {};
		params.IsInteracting = IsInteracting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046197A0
	 * 		Name   -> Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AMedkit::Authority_ConsumeIfNotInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting"));
		
		AMedkit_Authority_ConsumeIfNotInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMedkit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMedkit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.Medkit"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPointsProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPointsProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PointsProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSocketPointsProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSocketPointsProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.MeshSocketPointsProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619B40
	 * 		Name   -> Function DBDGameplay.MoveToGroundComponent.MoveOwnerToGround
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UMoveToGroundComponent::MoveOwnerToGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.MoveToGroundComponent.MoveOwnerToGround"));
		
		UMoveToGroundComponent_MoveOwnerToGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveToGroundComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveToGroundComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.MoveToGroundComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiSceneComponentPointProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiSceneComponentPointProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.MultiSceneComponentPointProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619B80
	 * 		Name   -> Function DBDGameplay.NearestOutsideMapBoundsLocator.OnGameEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EEndGameReason                                     endGameReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNearestOutsideMapBoundsLocator::OnGameEnd(EEndGameReason endGameReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.NearestOutsideMapBoundsLocator.OnGameEnd"));
		
		UNearestOutsideMapBoundsLocator_OnGameEnd_Params params {};
		params.endGameReason = endGameReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619B60
	 * 		Name   -> Function DBDGameplay.NearestOutsideMapBoundsLocator.OnGameBegin
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNearestOutsideMapBoundsLocator::OnGameBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.NearestOutsideMapBoundsLocator.OnGameBegin"));
		
		UNearestOutsideMapBoundsLocator_OnGameBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046198E0
	 * 		Name   -> Function DBDGameplay.NearestOutsideMapBoundsLocator.Client_InitializeAkLimitPointEvent
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNearestOutsideMapBoundsLocator::Client_InitializeAkLimitPointEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.NearestOutsideMapBoundsLocator.Client_InitializeAkLimitPointEvent"));
		
		UNearestOutsideMapBoundsLocator_Client_InitializeAkLimitPointEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNearestOutsideMapBoundsLocator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNearestOutsideMapBoundsLocator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.NearestOutsideMapBoundsLocator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerCameraAimDirectionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerCameraAimDirectionProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PlayerCameraAimDirectionProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461EE40
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionStart
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::UnlistenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionStart"));
		
		UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461ED60
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionEnd
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::UnlistenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionEnd"));
		
		UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E4E0
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.OnActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::OnActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerInteractionListenerComponent.OnActorDestroyed"));
		
		UPlayerInteractionListenerComponent_OnActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D9C0
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionStart
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              interactionDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::ListenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const class FScriptDelegate& interactionDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionStart"));
		
		UPlayerInteractionListenerComponent_ListenToInteractionStart_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		params.interactionDelegate = interactionDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D860
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionEnd
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              interactionDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::ListenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const class FScriptDelegate& interactionDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionEnd"));
		
		UPlayerInteractionListenerComponent_ListenToInteractionEnd_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		params.interactionDelegate = interactionDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionMulticastDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::InteractionMulticastDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionMulticastDelegate__DelegateSignature"));
		
		UPlayerInteractionListenerComponent_InteractionMulticastDelegate__DelegateSignature_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::InteractionDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionDelegate__DelegateSignature"));
		
		UPlayerInteractionListenerComponent_InteractionDelegate__DelegateSignature_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerInteractionListenerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerInteractionListenerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PlayerInteractionListenerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E420
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_SetGamepadYawCurve(class ADBDPlayer* Player, class UCurveFloat* Curve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve"));
		
		UPlayerMovementUtilities_Local_SetGamepadYawCurve_Params params {};
		params.Player = Player;
		params.Curve = Curve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E360
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_SetGamepadPitchCurve(class ADBDPlayer* Player, class UCurveFloat* Curve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve"));
		
		UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Params params {};
		params.Player = Player;
		params.Curve = Curve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E2A0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ResetRotationScale(class ADBDPlayer* Player, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale"));
		
		UPlayerMovementUtilities_Local_ResetRotationScale_Params params {};
		params.Player = Player;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E220
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ResetGamepadLookCurves(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves"));
		
		UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E120
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier"));
		
		UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E020
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyRotationScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier"));
		
		UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461DF20
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier"));
		
		UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461DE20
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyMouseYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier"));
		
		UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461DD20
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyMousePitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier"));
		
		UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461DC20
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyGamepadYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier"));
		
		UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461DB20
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyGamepadPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier"));
		
		UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerMovementUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMovementUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PlayerMovementUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461EB40
	 * 		Name   -> Function DBDGameplay.PoseableHusk.SetIsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APoseableHusk::SetIsActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PoseableHusk.SetIsActive"));
		
		APoseableHusk_SetIsActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.PoseableHusk.OnActiveStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APoseableHusk::OnActiveStateChanged(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PoseableHusk.OnActiveStateChanged"));
		
		APoseableHusk_OnActiveStateChanged_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D6C0
	 * 		Name   -> Function DBDGameplay.PoseableHusk.GetIsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool APoseableHusk::GetIsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PoseableHusk.GetIsActive"));
		
		APoseableHusk_GetIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplay.PoseableHusk.Cosmetic_OnAnimationPoseCaptured
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void APoseableHusk::Cosmetic_OnAnimationPoseCaptured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PoseableHusk.Cosmetic_OnAnimationPoseCaptured"));
		
		APoseableHusk_Cosmetic_OnAnimationPoseCaptured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D5E0
	 * 		Name   -> Function DBDGameplay.PoseableHusk.CapturePose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void APoseableHusk::CapturePose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PoseableHusk.CapturePose"));
		
		APoseableHusk_CapturePose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoseableHusk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoseableHusk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PoseableHusk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPositionLagCompensationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPositionLagCompensationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PositionLagCompensationComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E740
	 * 		Name   -> Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPowerChargeComponent::OnRep_CurrentCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge"));
		
		UPowerChargeComponent_OnRep_CurrentCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E570
	 * 		Name   -> Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPowerChargeComponent::OnCurrentChargeChanged(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged"));
		
		UPowerChargeComponent_OnCurrentChargeChanged_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPowerChargeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerChargeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PowerChargeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPowerChargePresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerChargePresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PowerChargePresentationItemProgressComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E760
	 * 		Name   -> Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UPowerToggleComponent::OnRep_IsInPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower"));
		
		UPowerToggleComponent_OnRep_IsInPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPowerToggleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerToggleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.PowerToggleComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E720
	 * 		Name   -> Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URangeToActorsTrackerComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay"));
		
		URangeToActorsTrackerComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URangeToActorsTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeToActorsTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.RangeToActorsTrackerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URangeToActorsTrackerDefaultStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeToActorsTrackerDefaultStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.RangeToActorsTrackerDefaultStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReadMapInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReadMapInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.ReadMapInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneComponentPointProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneComponentPointProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.SceneComponentPointProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USightRevealableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USightRevealableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.SightRevealableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461ECE0
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.SetTerrorRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTerrorRadiusEmitterComponent::SetTerrorRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.SetTerrorRadius"));
		
		UTerrorRadiusEmitterComponent_SetTerrorRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461EC60
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.SetSimulatedFixedDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTerrorRadiusEmitterComponent::SetSimulatedFixedDistance(float distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.SetSimulatedFixedDistance"));
		
		UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Params params {};
		params.distance = distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461EBD0
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.SetIsFakeTerrorRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTerrorRadiusEmitterComponent::SetIsFakeTerrorRadius(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.SetIsFakeTerrorRadius"));
		
		UTerrorRadiusEmitterComponent_SetIsFakeTerrorRadius_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461EAB0
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.SetImitatesAudioOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               imitatesAudioOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTerrorRadiusEmitterComponent::SetImitatesAudioOnly(bool imitatesAudioOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.SetImitatesAudioOnly"));
		
		UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Params params {};
		params.imitatesAudioOnly = imitatesAudioOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461EA20
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.SetEmitterActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTerrorRadiusEmitterComponent::SetEmitterActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.SetEmitterActive"));
		
		UTerrorRadiusEmitterComponent_SetEmitterActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D760
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.IsInTerrorRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UTerrorRadiusReceiverComponent*              receiver                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTerrorRadiusEmitterComponent::IsInTerrorRadius(class UTerrorRadiusReceiverComponent* receiver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.IsInTerrorRadius"));
		
		UTerrorRadiusEmitterComponent_IsInTerrorRadius_Params params {};
		params.receiver = receiver;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D730
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.GetSimulatedFixedDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTerrorRadiusEmitterComponent::GetSimulatedFixedDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.GetSimulatedFixedDistance"));
		
		UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D710
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.GetRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTerrorRadiusEmitterComponent::GetRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.GetRadius"));
		
		UTerrorRadiusEmitterComponent_GetRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D6E0
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.GetIsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTerrorRadiusEmitterComponent::GetIsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.GetIsActive"));
		
		UTerrorRadiusEmitterComponent_GetIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D690
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterComponent.GetImitatesAudioOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTerrorRadiusEmitterComponent::GetImitatesAudioOnly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterComponent.GetImitatesAudioOnly"));
		
		UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrorRadiusEmitterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorRadiusEmitterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.TerrorRadiusEmitterComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E940
	 * 		Name   -> Function DBDGameplay.SlasherTerrorRadiusEmitterComponent.SetBaseTerrorRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              baseTerrorRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               progressive                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlasherTerrorRadiusEmitterComponent::SetBaseTerrorRadius(float baseTerrorRadius, bool progressive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.SlasherTerrorRadiusEmitterComponent.SetBaseTerrorRadius"));
		
		USlasherTerrorRadiusEmitterComponent_SetBaseTerrorRadius_Params params {};
		params.baseTerrorRadius = baseTerrorRadius;
		params.progressive = progressive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlasherTerrorRadiusEmitterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlasherTerrorRadiusEmitterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.SlasherTerrorRadiusEmitterComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E780
	 * 		Name   -> Function DBDGameplay.StruggleComponent.OnSkillCheckEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStruggleComponent::OnSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.StruggleComponent.OnSkillCheckEnd"));
		
		UStruggleComponent_OnSkillCheckEnd_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D5C0
	 * 		Name   -> Function DBDGameplay.StruggleComponent.Authority_TryActivateSkillCheck
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStruggleComponent::Authority_TryActivateSkillCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.StruggleComponent.Authority_TryActivateSkillCheck"));
		
		UStruggleComponent_Authority_TryActivateSkillCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStruggleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStruggleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.StruggleComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorAimStanceCameraDirectionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAimStanceCameraDirectionProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorAimStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAimStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.SurvivorAimStateComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrorRadiusAudioFeedbackComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorRadiusAudioFeedbackComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.TerrorRadiusAudioFeedbackComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrorRadiusBPMComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorRadiusBPMComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.TerrorRadiusBPMComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D600
	 * 		Name   -> Function DBDGameplay.TerrorRadiusEmitterFunctionLibrary.GetActiveFakeTerrorRadiusEmittersCount
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTerrorRadiusEmitterFunctionLibrary::STATIC_GetActiveFakeTerrorRadiusEmittersCount(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusEmitterFunctionLibrary.GetActiveFakeTerrorRadiusEmittersCount"));
		
		UTerrorRadiusEmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Params params {};
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
	 * 		Name   -> PredefinedFunction UTerrorRadiusEmitterFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorRadiusEmitterFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.TerrorRadiusEmitterFunctionLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDGameplay.TerrorRadiusReceiverComponent.OnIsInTerrorRadiusChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UTerrorRadiusReceiverComponent::OnIsInTerrorRadiusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDGameplay.TerrorRadiusReceiverComponent.OnIsInTerrorRadiusChanged__DelegateSignature"));
		
		UTerrorRadiusReceiverComponent_OnIsInTerrorRadiusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D830
	 * 		Name   -> Function DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadiusRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTerrorRadiusReceiverComponent::IsInTerrorRadiusRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadiusRange"));
		
		UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D800
	 * 		Name   -> Function DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTerrorRadiusReceiverComponent::IsInTerrorRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadius"));
		
		UTerrorRadiusReceiverComponent_IsInTerrorRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrorRadiusReceiverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorRadiusReceiverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.TerrorRadiusReceiverComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461E5F0
	 * 		Name   -> Function DBDGameplay.TerrorRadiusScreenIndicatorComponent.OnHeartStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FGameplayTag                                heartState                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTerrorRadiusScreenIndicatorComponent::OnHeartStateChanged(const struct FGameplayTag& heartState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.TerrorRadiusScreenIndicatorComponent.OnHeartStateChanged"));
		
		UTerrorRadiusScreenIndicatorComponent_OnHeartStateChanged_Params params {};
		params.heartState = heartState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrorRadiusScreenIndicatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorRadiusScreenIndicatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.TerrorRadiusScreenIndicatorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrorRadiusVisualFeedbackComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorRadiusVisualFeedbackComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.TerrorRadiusVisualFeedbackComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTracingConeFlashlightableLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTracingConeFlashlightableLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.TracingConeFlashlightableLightingStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnhookedSurvivorTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnhookedSurvivorTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.UnhookedSurvivorTrackerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisibleHatchRangeTrackerStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisibleHatchRangeTrackerStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.VisibleHatchRangeTrackerStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA700
	 * 		Name   -> Function DBDGameplay.WiggleComponent.Server_OnWiggleEnd
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UWiggleComponent::Server_OnWiggleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.Server_OnWiggleEnd"));
		
		UWiggleComponent_Server_OnWiggleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620BD0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnWiggleSkillCheckEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.OnWiggleSkillCheckEnd"));
		
		UWiggleComponent_OnWiggleSkillCheckEnd_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620BB0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnWiggleInput
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleComponent::OnWiggleInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.OnWiggleInput"));
		
		UWiggleComponent_OnWiggleInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620B90
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnWiggleEnd
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleComponent::OnWiggleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.OnWiggleEnd"));
		
		UWiggleComponent_OnWiggleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046209E0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnPlayerPickedUpStart
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnPlayerPickedUpStart(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.OnPlayerPickedUpStart"));
		
		UWiggleComponent_OnPlayerPickedUpStart_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620950
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnPlayerPickedUpEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnPlayerPickedUpEnd(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.OnPlayerPickedUpEnd"));
		
		UWiggleComponent_OnPlayerPickedUpEnd_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620790
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnPickedUpSkillCheckEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.OnPickedUpSkillCheckEnd"));
		
		UWiggleComponent_OnPickedUpSkillCheckEnd_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620770
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.OnLevelReadyToPlay"));
		
		UWiggleComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620750
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnKeyBindingsChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleComponent::OnKeyBindingsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.OnKeyBindingsChanged"));
		
		UWiggleComponent_OnKeyBindingsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620650
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnHideWiggleSkillCheck
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnHideWiggleSkillCheck(ESkillCheckCustomType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.OnHideWiggleSkillCheck"));
		
		UWiggleComponent_OnHideWiggleSkillCheck_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620620
	 * 		Name   -> Function DBDGameplay.WiggleComponent.GetWiggleChargeable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UChargeableComponent* UWiggleComponent::GetWiggleChargeable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.GetWiggleChargeable"));
		
		UWiggleComponent_GetWiggleChargeable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2F00
	 * 		Name   -> Function DBDGameplay.WiggleComponent.DBD_SetWiggleProgress
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		float                                              ProgressPercent                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::DBD_SetWiggleProgress(float ProgressPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.DBD_SetWiggleProgress"));
		
		UWiggleComponent_DBD_SetWiggleProgress_Params params {};
		params.ProgressPercent = ProgressPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620600
	 * 		Name   -> Function DBDGameplay.WiggleComponent.Authority_TutorialEndWiggle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWiggleComponent::Authority_TutorialEndWiggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.Authority_TutorialEndWiggle"));
		
		UWiggleComponent_Authority_TutorialEndWiggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046203B0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.Authority_AddWiggleCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ChargeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::Authority_AddWiggleCharge(float ChargeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleComponent.Authority_AddWiggleCharge"));
		
		UWiggleComponent_Authority_AddWiggleCharge_Params params {};
		params.ChargeAmount = ChargeAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWiggleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWiggleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.WiggleComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046205E0
	 * 		Name   -> Function DBDGameplay.WiggleFreeComponent.Authority_OnWiggleEnd
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleFreeComponent::Authority_OnWiggleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleFreeComponent.Authority_OnWiggleEnd"));
		
		UWiggleFreeComponent_Authority_OnWiggleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620550
	 * 		Name   -> Function DBDGameplay.WiggleFreeComponent.Authority_OnPlayerPickedUpEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleFreeComponent::Authority_OnPlayerPickedUpEnd(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleFreeComponent.Authority_OnPlayerPickedUpEnd"));
		
		UWiggleFreeComponent_Authority_OnPlayerPickedUpEnd_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620530
	 * 		Name   -> Function DBDGameplay.WiggleFreeComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleFreeComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleFreeComponent.Authority_OnLevelReadyToPlay"));
		
		UWiggleFreeComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620430
	 * 		Name   -> Function DBDGameplay.WiggleFreeComponent.Authority_OnChargeableCompleteEvent
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		bool                                               COMPLETED                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWiggleFreeComponent::Authority_OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleFreeComponent.Authority_OnChargeableCompleteEvent"));
		
		UWiggleFreeComponent_Authority_OnChargeableCompleteEvent_Params params {};
		params.COMPLETED = COMPLETED;
		params.instigatorsForCompletion = instigatorsForCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWiggleFreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWiggleFreeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.WiggleFreeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620FE0
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.SetIsBeingWiggled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isBeingWiggled                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::SetIsBeingWiggled(bool isBeingWiggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleMotionComponent.SetIsBeingWiggled"));
		
		UWiggleMotionComponent_SetIsBeingWiggled_Params params {};
		params.isBeingWiggled = isBeingWiggled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620F50
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.Server_SetIsBeingWiggled
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               isBeingWiggled                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::Server_SetIsBeingWiggled(bool isBeingWiggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleMotionComponent.Server_SetIsBeingWiggled"));
		
		UWiggleMotionComponent_Server_SetIsBeingWiggled_Params params {};
		params.isBeingWiggled = isBeingWiggled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620D90
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.OnWiggleSkillCheckEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleMotionComponent.OnWiggleSkillCheckEnd"));
		
		UWiggleMotionComponent_OnWiggleSkillCheckEnd_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620B00
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::OnSurvivorRemoved(class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleMotionComponent.OnSurvivorRemoved"));
		
		UWiggleMotionComponent_OnSurvivorRemoved_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04620A70
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.OnSurvivorPickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::OnSurvivorPickedUp(class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleMotionComponent.OnSurvivorPickedUp"));
		
		UWiggleMotionComponent_OnSurvivorPickedUp_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046206D0
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.OnHideWiggleSkillCheck
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::OnHideWiggleSkillCheck(ESkillCheckCustomType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplay.WiggleMotionComponent.OnHideWiggleSkillCheck"));
		
		UWiggleMotionComponent_OnHideWiggleSkillCheck_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWiggleMotionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWiggleMotionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplay.WiggleMotionComponent"));
		return ptr;
	}

}


