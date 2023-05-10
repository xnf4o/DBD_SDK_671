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
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.Alert.OnPerkActivate_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UAlert::OnPerkActivate_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.Alert.OnPerkActivate_Cosmetic"));
		
		UAlert_OnPerkActivate_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlert.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlert::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.Alert"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCalmBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCalmBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.CalmBaseAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCalmIntermittentFakeTerrorRadiusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCalmIntermittentFakeTerrorRadiusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.CalmIntermittentFakeTerrorRadiusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.CartersSpark.Cosmetic_OnShockTherapyZoneDetonated
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            survivorsHitCount                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACartersSpark::Cosmetic_OnShockTherapyZoneDetonated(class ADBDPlayer* killer, int32_t survivorsHitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.CartersSpark.Cosmetic_OnShockTherapyZoneDetonated"));
		
		ACartersSpark_Cosmetic_OnShockTherapyZoneDetonated_Params params {};
		params.killer = killer;
		params.survivorsHitCount = survivorsHitCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F44940
	 * 		Name   -> Function TheDoctor.CartersSpark.CancelSurvivorInteraction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACartersSpark::CancelSurvivorInteraction(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.CartersSpark.CancelSurvivorInteraction"));
		
		ACartersSpark_CancelSurvivorInteraction_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F448B0
	 * 		Name   -> Function TheDoctor.CartersSpark.Authority_StartShockAttackComboTimer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               shockedSurvivor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACartersSpark::Authority_StartShockAttackComboTimer(class ACamperPlayer* shockedSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.CartersSpark.Authority_StartShockAttackComboTimer"));
		
		ACartersSpark_Authority_StartShockAttackComboTimer_Params params {};
		params.shockedSurvivor = shockedSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACartersSpark.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACartersSpark::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.CartersSpark"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F44E00
	 * 		Name   -> Function TheDoctor.DisciplineEffect.SetRedStainInterpolating
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isInterpolating                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDisciplineEffect::SetRedStainInterpolating(bool isInterpolating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DisciplineEffect.SetRedStainInterpolating"));
		
		UDisciplineEffect_SetRedStainInterpolating_Params params {};
		params.isInterpolating = isInterpolating;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DisciplineEffect.Cosmetic_UpdateSurvivorRedStain
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDisciplineEffect::Cosmetic_UpdateSurvivorRedStain(bool visible, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DisciplineEffect.Cosmetic_UpdateSurvivorRedStain"));
		
		UDisciplineEffect_Cosmetic_UpdateSurvivorRedStain_Params params {};
		params.visible = visible;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DisciplineEffect.Cosmetic_UpdateKillerRedStain
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDisciplineEffect::Cosmetic_UpdateKillerRedStain(bool visible, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DisciplineEffect.Cosmetic_UpdateKillerRedStain"));
		
		UDisciplineEffect_Cosmetic_UpdateKillerRedStain_Params params {};
		params.visible = visible;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DisciplineEffect.Cosmetic_SpawnRedStains
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UDisciplineEffect::Cosmetic_SpawnRedStains()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DisciplineEffect.Cosmetic_SpawnRedStains"));
		
		UDisciplineEffect_Cosmetic_SpawnRedStains_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DisciplineEffect.Cosmetic_ActivateSurvivorRedStain
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDisciplineEffect::Cosmetic_ActivateSurvivorRedStain(bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DisciplineEffect.Cosmetic_ActivateSurvivorRedStain"));
		
		UDisciplineEffect_Cosmetic_ActivateSurvivorRedStain_Params params {};
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DisciplineEffect.Cosmetic_ActivateKillerRedStain
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDisciplineEffect::Cosmetic_ActivateKillerRedStain(bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DisciplineEffect.Cosmetic_ActivateKillerRedStain"));
		
		UDisciplineEffect_Cosmetic_ActivateKillerRedStain_Params params {};
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisciplineEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisciplineEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.DisciplineEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoctorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoctorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.DoctorAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F452C0
	 * 		Name   -> Function TheDoctor.DoctorCheatComponent.DBD_AddMadness
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              madnessToAdd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      localPlayerId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoctorCheatComponent::DBD_AddMadness(float madnessToAdd, const class FString& localPlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorCheatComponent.DBD_AddMadness"));
		
		UDoctorCheatComponent_DBD_AddMadness_Params params {};
		params.madnessToAdd = madnessToAdd;
		params.localPlayerId = localPlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoctorCheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoctorCheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.DoctorCheatComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F455B0
	 * 		Name   -> Function TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStop
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UDoctorPowerSubAnimInstance::OnShockTherapyAnimationAttackStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStop"));
		
		UDoctorPowerSubAnimInstance_OnShockTherapyAnimationAttackStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F45590
	 * 		Name   -> Function TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStart
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UDoctorPowerSubAnimInstance::OnShockTherapyAnimationAttackStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStart"));
		
		UDoctorPowerSubAnimInstance_OnShockTherapyAnimationAttackStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoctorPowerSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoctorPowerSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.DoctorPowerSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F45F40
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.IsSurvivorOperatingLocker
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADoctorSurvivorCosmeticHelperActor::IsSurvivorOperatingLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.IsSurvivorOperatingLocker"));
		
		ADoctorSurvivorCosmeticHelperActor_IsSurvivorOperatingLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F45F10
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.GetSurvivorMadnessEffect
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class USurvivorMadnessEffect* ADoctorSurvivorCosmeticHelperActor::GetSurvivorMadnessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.GetSurvivorMadnessEffect"));
		
		ADoctorSurvivorCosmeticHelperActor_GetSurvivorMadnessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F45EE0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.GetIllusionaryDoctor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AIllusionaryDoctor* ADoctorSurvivorCosmeticHelperActor::GetIllusionaryDoctor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.GetIllusionaryDoctor"));
		
		ADoctorSurvivorCosmeticHelperActor_GetIllusionaryDoctor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorShocked
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ADoctorSurvivorCosmeticHelperActor::Cosmetic_OnOwningSurvivorShocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorShocked"));
		
		ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnOwningSurvivorShocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessIntermittentScream
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ADoctorSurvivorCosmeticHelperActor::Cosmetic_OnMadnessIntermittentScream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessIntermittentScream"));
		
		ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnMadnessIntermittentScream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newTier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               increased                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADoctorSurvivorCosmeticHelperActor::Cosmetic_OnMadnessChanged(int32_t newTier, bool increased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessChanged"));
		
		ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnMadnessChanged_Params params {};
		params.newTier = newTier;
		params.increased = increased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnInsaneSkillCheck
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ADoctorSurvivorCosmeticHelperActor::Cosmetic_OnInsaneSkillCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnInsaneSkillCheck"));
		
		ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnInsaneSkillCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletDeactivated
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APallet*                                     Pallet                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADoctorSurvivorCosmeticHelperActor::Cosmetic_OnIllusionaryPalletDeactivated(class APallet* Pallet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletDeactivated"));
		
		ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnIllusionaryPalletDeactivated_Params params {};
		params.Pallet = Pallet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletActivated
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APallet*                                     Pallet                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADoctorSurvivorCosmeticHelperActor::Cosmetic_OnIllusionaryPalletActivated(class APallet* Pallet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletActivated"));
		
		ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnIllusionaryPalletActivated_Params params {};
		params.Pallet = Pallet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryDoctorApparitionSequenceStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  illusionaryDoctorTransform                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              apparitionDuration                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADoctorSurvivorCosmeticHelperActor::Cosmetic_OnIllusionaryDoctorApparitionSequenceStart(const struct FTransform& illusionaryDoctorTransform, float apparitionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryDoctorApparitionSequenceStart"));
		
		ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnIllusionaryDoctorApparitionSequenceStart_Params params {};
		params.illusionaryDoctorTransform = illusionaryDoctorTransform;
		params.apparitionDuration = apparitionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F45E10
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayShockedAnimation
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADoctorSurvivorCosmeticHelperActor::CanPlayShockedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayShockedAnimation"));
		
		ADoctorSurvivorCosmeticHelperActor_CanPlayShockedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F45DE0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAudio
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADoctorSurvivorCosmeticHelperActor::CanPlayOverwhelmingMadnessAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAudio"));
		
		ADoctorSurvivorCosmeticHelperActor_CanPlayOverwhelmingMadnessAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F45DB0
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAnimation
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADoctorSurvivorCosmeticHelperActor::CanPlayOverwhelmingMadnessAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAnimation"));
		
		ADoctorSurvivorCosmeticHelperActor_CanPlayOverwhelmingMadnessAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F45E40
	 * 		Name   -> Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayerSeeIllusionaryPalletGlitch
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class APallet*                                     Pallet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADoctorSurvivorCosmeticHelperActor::CanPlayerSeeIllusionaryPalletGlitch(class APallet* Pallet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayerSeeIllusionaryPalletGlitch"));
		
		ADoctorSurvivorCosmeticHelperActor_CanPlayerSeeIllusionaryPalletGlitch_Params params {};
		params.Pallet = Pallet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoctorSurvivorCosmeticHelperActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoctorSurvivorCosmeticHelperActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.DoctorSurvivorCosmeticHelperActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F461F0
	 * 		Name   -> Function TheDoctor.IllusionaryDoctor.DeactivateIllusion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AIllusionaryDoctor::DeactivateIllusion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryDoctor.DeactivateIllusion"));
		
		AIllusionaryDoctor_DeactivateIllusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F46110
	 * 		Name   -> Function TheDoctor.IllusionaryDoctor.ActivateIllusion
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AIllusionaryDoctor::ActivateIllusion(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryDoctor.ActivateIllusion"));
		
		AIllusionaryDoctor_ActivateIllusion_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIllusionaryDoctor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIllusionaryDoctor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.IllusionaryDoctor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F46510
	 * 		Name   -> Function TheDoctor.IllusionaryDoctorEffect.Multicast_StartIllusionaryDoctorAppearSequence
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FTransform                                  illusionaryDoctorTransform                                 (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIllusionaryDoctorEffect::Multicast_StartIllusionaryDoctorAppearSequence(const struct FTransform& illusionaryDoctorTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryDoctorEffect.Multicast_StartIllusionaryDoctorAppearSequence"));
		
		UIllusionaryDoctorEffect_Multicast_StartIllusionaryDoctorAppearSequence_Params params {};
		params.illusionaryDoctorTransform = illusionaryDoctorTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F46440
	 * 		Name   -> Function TheDoctor.IllusionaryDoctorEffect.Multicast_DebugDisplayInfo
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		float                                              timeRemainingBeforeActivation                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      messageColor                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIllusionaryDoctorEffect::Multicast_DebugDisplayInfo(float timeRemainingBeforeActivation, const struct FColor& messageColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryDoctorEffect.Multicast_DebugDisplayInfo"));
		
		UIllusionaryDoctorEffect_Multicast_DebugDisplayInfo_Params params {};
		params.timeRemainingBeforeActivation = timeRemainingBeforeActivation;
		params.messageColor = messageColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIllusionaryDoctorEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIllusionaryDoctorEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.IllusionaryDoctorEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F46B60
	 * 		Name   -> Function TheDoctor.IllusionaryPalletBaseAddon.Multicast_DeactivateIllusionaryPallet
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class APallet*                                     Pallet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  triggeringPlayer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIllusionaryPalletBaseAddon::Multicast_DeactivateIllusionaryPallet(class APallet* Pallet, class ADBDPlayer* triggeringPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryPalletBaseAddon.Multicast_DeactivateIllusionaryPallet"));
		
		UIllusionaryPalletBaseAddon_Multicast_DeactivateIllusionaryPallet_Params params {};
		params.Pallet = Pallet;
		params.triggeringPlayer = triggeringPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F46A90
	 * 		Name   -> Function TheDoctor.IllusionaryPalletBaseAddon.Multicast_ActivateIllusionaryPallet
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class APallet*                                     Pallet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isPalletDown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIllusionaryPalletBaseAddon::Multicast_ActivateIllusionaryPallet(class APallet* Pallet, bool isPalletDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryPalletBaseAddon.Multicast_ActivateIllusionaryPallet"));
		
		UIllusionaryPalletBaseAddon_Multicast_ActivateIllusionaryPallet_Params params {};
		params.Pallet = Pallet;
		params.isPalletDown = isPalletDown;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F46870
	 * 		Name   -> Function TheDoctor.IllusionaryPalletBaseAddon.Authority_OnIllusionaryPalletActorOverlapped
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIllusionaryPalletBaseAddon::Authority_OnIllusionaryPalletActorOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryPalletBaseAddon.Authority_OnIllusionaryPalletActorOverlapped"));
		
		UIllusionaryPalletBaseAddon_Authority_OnIllusionaryPalletActorOverlapped_Params params {};
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
	 * 		Name   -> PredefinedFunction UIllusionaryPalletBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIllusionaryPalletBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.IllusionaryPalletBaseAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletDeactivation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  triggeringPlayer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIllusionaryPalletComponent::OnStartIllusionaryPalletDeactivation(class ADBDPlayer* triggeringPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletDeactivation"));
		
		UIllusionaryPalletComponent_OnStartIllusionaryPalletDeactivation_Params params {};
		params.triggeringPlayer = triggeringPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletActivation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isPalletDown                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIllusionaryPalletComponent::OnStartIllusionaryPalletActivation(bool isPalletDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletActivation"));
		
		UIllusionaryPalletComponent_OnStartIllusionaryPalletActivation_Params params {};
		params.isPalletDown = isPalletDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F47030
	 * 		Name   -> Function TheDoctor.IllusionaryPalletComponent.GetGlitchEffectRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UIllusionaryPalletComponent::GetGlitchEffectRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryPalletComponent.GetGlitchEffectRange"));
		
		UIllusionaryPalletComponent_GetGlitchEffectRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F47010
	 * 		Name   -> Function TheDoctor.IllusionaryPalletComponent.DeactivateIllusionaryPallet
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UIllusionaryPalletComponent::DeactivateIllusionaryPallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryPalletComponent.DeactivateIllusionaryPallet"));
		
		UIllusionaryPalletComponent_DeactivateIllusionaryPallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F46FE0
	 * 		Name   -> Function TheDoctor.IllusionaryPalletComponent.CanLocallyObservedPlayerSeeIllusionaryPallet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UIllusionaryPalletComponent::CanLocallyObservedPlayerSeeIllusionaryPallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryPalletComponent.CanLocallyObservedPlayerSeeIllusionaryPallet"));
		
		UIllusionaryPalletComponent_CanLocallyObservedPlayerSeeIllusionaryPallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F46F50
	 * 		Name   -> Function TheDoctor.IllusionaryPalletComponent.ActivateIllusionaryPallet
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isPalletDown                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIllusionaryPalletComponent::ActivateIllusionaryPallet(bool isPalletDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IllusionaryPalletComponent.ActivateIllusionaryPallet"));
		
		UIllusionaryPalletComponent_ActivateIllusionaryPallet_Params params {};
		params.isPalletDown = isPalletDown;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIllusionaryPalletComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIllusionaryPalletComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.IllusionaryPalletComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F47970
	 * 		Name   -> Function TheDoctor.IridescentQueenEffect.OnRep_ChargeActive
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UIridescentQueenEffect::OnRep_ChargeActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IridescentQueenEffect.OnRep_ChargeActive"));
		
		UIridescentQueenEffect_OnRep_ChargeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F478E0
	 * 		Name   -> Function TheDoctor.IridescentQueenEffect.Multicast_DischargeOnSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIridescentQueenEffect::Multicast_DischargeOnSurvivor(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IridescentQueenEffect.Multicast_DischargeOnSurvivor"));
		
		UIridescentQueenEffect_Multicast_DischargeOnSurvivor_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F478B0
	 * 		Name   -> Function TheDoctor.IridescentQueenEffect.GetStaticFieldMovementSpeed
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	EStaticFieldMovementSpeed UIridescentQueenEffect::GetStaticFieldMovementSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IridescentQueenEffect.GetStaticFieldMovementSpeed"));
		
		UIridescentQueenEffect_GetStaticFieldMovementSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.IridescentQueenEffect.Cosmetic_UpdateStaticFieldFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UIridescentQueenEffect::Cosmetic_UpdateStaticFieldFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IridescentQueenEffect.Cosmetic_UpdateStaticFieldFX"));
		
		UIridescentQueenEffect_Cosmetic_UpdateStaticFieldFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.IridescentQueenEffect.Cosmetic_SpawnStaticFieldFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UIridescentQueenEffect::Cosmetic_SpawnStaticFieldFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IridescentQueenEffect.Cosmetic_SpawnStaticFieldFX"));
		
		UIridescentQueenEffect_Cosmetic_SpawnStaticFieldFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneDeactivated
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UIridescentQueenEffect::Cosmetic_OnDischargeZoneDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneDeactivated"));
		
		UIridescentQueenEffect_Cosmetic_OnDischargeZoneDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneActivated
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UIridescentQueenEffect::Cosmetic_OnDischargeZoneActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneActivated"));
		
		UIridescentQueenEffect_Cosmetic_OnDischargeZoneActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeOnSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  survivorToShock                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIridescentQueenEffect::Cosmetic_OnDischargeOnSurvivor(class ADBDPlayer* survivorToShock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeOnSurvivor"));
		
		UIridescentQueenEffect_Cosmetic_OnDischargeOnSurvivor_Params params {};
		params.survivorToShock = survivorToShock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F47690
	 * 		Name   -> Function TheDoctor.IridescentQueenEffect.Authority_OnSurvivorOverlappedDischargeZone
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UIridescentQueenEffect::Authority_OnSurvivorOverlappedDischargeZone(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.IridescentQueenEffect.Authority_OnSurvivorOverlappedDischargeZone"));
		
		UIridescentQueenEffect_Authority_OnSurvivorOverlappedDischargeZone_Params params {};
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
	 * 		Name   -> PredefinedFunction UIridescentQueenEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIridescentQueenEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.IridescentQueenEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F47BB0
	 * 		Name   -> Function TheDoctor.Lithe.GetMovementSpeedPercentage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ULithe::GetMovementSpeedPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.Lithe.GetMovementSpeedPercentage"));
		
		ULithe_GetMovementSpeedPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F47B90
	 * 		Name   -> Function TheDoctor.Lithe.GetMovementSpeedDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ULithe::GetMovementSpeedDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.Lithe.GetMovementSpeedDuration"));
		
		ULithe_GetMovementSpeedDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULithe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULithe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.Lithe"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMadnessSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMadnessSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.MadnessSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheDoctor.Overcharge.GetSkillCheckFailurePenaltyAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UOvercharge::GetSkillCheckFailurePenaltyAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.Overcharge.GetSkillCheckFailurePenaltyAtLevel"));
		
		UOvercharge_GetSkillCheckFailurePenaltyAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE1FD0
	 * 		Name   -> Function TheDoctor.Overcharge.GetRegressionRateMultiplierCurve
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCurveFloat* UOvercharge::GetRegressionRateMultiplierCurve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.Overcharge.GetRegressionRateMultiplierCurve"));
		
		UOvercharge_GetRegressionRateMultiplierCurve_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOvercharge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOvercharge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.Overcharge"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URestraintRevealToKillerEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URestraintRevealToKillerEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.RestraintRevealToKillerEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F485A0
	 * 		Name   -> Function TheDoctor.ShockTherapy.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UShockTherapy::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.ShockTherapy.OnLevelReadyToPlay"));
		
		UShockTherapy_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F484B0
	 * 		Name   -> Function TheDoctor.ShockTherapy.Multicast_DetonateShockTherapy
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<class ACamperPlayer*>                       shockedSurvivors                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              madnessToAdd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShockTherapy::Multicast_DetonateShockTherapy(TArray<class ACamperPlayer*> shockedSurvivors, float madnessToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.ShockTherapy.Multicast_DetonateShockTherapy"));
		
		UShockTherapy_Multicast_DetonateShockTherapy_Params params {};
		params.shockedSurvivors = shockedSurvivors;
		params.madnessToAdd = madnessToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F483E0
	 * 		Name   -> Function TheDoctor.ShockTherapy.Multicast_ActivateShockTherapyAOE
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FTransform                                  shockTherapyZoneTransform                                  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UShockTherapy::Multicast_ActivateShockTherapyAOE(const struct FTransform& shockTherapyZoneTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.ShockTherapy.Multicast_ActivateShockTherapyAOE"));
		
		UShockTherapy_Multicast_ActivateShockTherapyAOE_Params params {};
		params.shockTherapyZoneTransform = shockTherapyZoneTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.ShockTherapy.Cosmetic_OnShockTherapyChargeEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               charged                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShockTherapy::Cosmetic_OnShockTherapyChargeEnd(class ADBDPlayer* Player, bool charged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.ShockTherapy.Cosmetic_OnShockTherapyChargeEnd"));
		
		UShockTherapy_Cosmetic_OnShockTherapyChargeEnd_Params params {};
		params.Player = Player;
		params.charged = charged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShockTherapy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShockTherapy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.ShockTherapy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.ShockTherapyAOE.OnScaleInitialized
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AShockTherapyAOE::OnScaleInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.ShockTherapyAOE.OnScaleInitialized"));
		
		AShockTherapyAOE_OnScaleInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.ShockTherapyAOE.Cosmetic_ActivateShockTherapyAOE
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AShockTherapyAOE::Cosmetic_ActivateShockTherapyAOE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.ShockTherapyAOE.Cosmetic_ActivateShockTherapyAOE"));
		
		AShockTherapyAOE_Cosmetic_ActivateShockTherapyAOE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShockTherapyAOE.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShockTherapyAOE::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.ShockTherapyAOE"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.ShockTherapyAOEPreview.SetAttackZonePreviewScale
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Scale                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShockTherapyAOEPreview::SetAttackZonePreviewScale(const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.ShockTherapyAOEPreview.SetAttackZonePreviewScale"));
		
		AShockTherapyAOEPreview_SetAttackZonePreviewScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShockTherapyAOEPreview.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShockTherapyAOEPreview::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.ShockTherapyAOEPreview"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F48B60
	 * 		Name   -> Function TheDoctor.SnapOutOfIt.Authority_OnSkillCheckResponseAuthority
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerLoudNoise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USnapOutOfIt::Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, ESkillCheckCustomType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.SnapOutOfIt.Authority_OnSkillCheckResponseAuthority"));
		
		USnapOutOfIt_Authority_OnSkillCheckResponseAuthority_Params params {};
		params.success = success;
		params.Bonus = Bonus;
		params.Player = Player;
		params.TriggerLoudNoise = TriggerLoudNoise;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USnapOutOfIt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnapOutOfIt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.SnapOutOfIt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F48FE0
	 * 		Name   -> Function TheDoctor.StaticBlast.Multicast_StaticBlastShockSurvivors
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<class ACamperPlayer*>                       survivorsToShock                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStaticBlast::Multicast_StaticBlastShockSurvivors(TArray<class ACamperPlayer*> survivorsToShock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.StaticBlast.Multicast_StaticBlastShockSurvivors"));
		
		UStaticBlast_Multicast_StaticBlastShockSurvivors_Params params {};
		params.survivorsToShock = survivorsToShock;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.StaticBlast.Cosmetic_OnStaticBlastChargeEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               charged                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStaticBlast::Cosmetic_OnStaticBlastChargeEnd(class ADBDPlayer* Player, bool charged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.StaticBlast.Cosmetic_OnStaticBlastChargeEnd"));
		
		UStaticBlast_Cosmetic_OnStaticBlastChargeEnd_Params params {};
		params.Player = Player;
		params.charged = charged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticBlast.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticBlast::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.StaticBlast"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorCartersSparkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorCartersSparkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.SurvivorCartersSparkComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.SpawnMadnessBubbleIndicator
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurvivorMadnessEffect::SpawnMadnessBubbleIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.SurvivorMadnessEffect.SpawnMadnessBubbleIndicator"));
		
		USurvivorMadnessEffect_SpawnMadnessBubbleIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F49760
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.OnRep_MadnessAmount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USurvivorMadnessEffect::OnRep_MadnessAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.SurvivorMadnessEffect.OnRep_MadnessAmount"));
		
		USurvivorMadnessEffect_OnRep_MadnessAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F49690
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierChanged
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		int32_t                                            newMadnessTier                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            oldMadnessTier                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorMadnessEffect::Multicast_OnMadnessTierChanged(int32_t newMadnessTier, int32_t oldMadnessTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierChanged"));
		
		USurvivorMadnessEffect_Multicast_OnMadnessTierChanged_Params params {};
		params.newMadnessTier = newMadnessTier;
		params.oldMadnessTier = oldMadnessTier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E2DB00
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.Multicast_MadnessIntermittentScream
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
	 */
	void USurvivorMadnessEffect::Multicast_MadnessIntermittentScream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.SurvivorMadnessEffect.Multicast_MadnessIntermittentScream"));
		
		USurvivorMadnessEffect_Multicast_MadnessIntermittentScream_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F49660
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.GetMadnessTier
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t USurvivorMadnessEffect::GetMadnessTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.SurvivorMadnessEffect.GetMadnessTier"));
		
		USurvivorMadnessEffect_GetMadnessTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F495E0
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.Authority_AddMadness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              amountToAdd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorMadnessEffect::Authority_AddMadness(float amountToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.SurvivorMadnessEffect.Authority_AddMadness"));
		
		USurvivorMadnessEffect_Authority_AddMadness_Params params {};
		params.amountToAdd = amountToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.ActivateMadnessBubbleIndicator
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurvivorMadnessEffect::ActivateMadnessBubbleIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.SurvivorMadnessEffect.ActivateMadnessBubbleIndicator"));
		
		USurvivorMadnessEffect_ActivateMadnessBubbleIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorMadnessEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorMadnessEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.SurvivorMadnessEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F49B50
	 * 		Name   -> Function TheDoctor.TheDoctorUtilities.IsTotallyInsane
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTheDoctorUtilities::STATIC_IsTotallyInsane(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.TheDoctorUtilities.IsTotallyInsane"));
		
		UTheDoctorUtilities_IsTotallyInsane_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F49AC0
	 * 		Name   -> Function TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USurvivorMadnessEffect* UTheDoctorUtilities::STATIC_GetSurvivorMadnessEffect(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect"));
		
		UTheDoctorUtilities_GetSurvivorMadnessEffect_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F49A30
	 * 		Name   -> Function TheDoctor.TheDoctorUtilities.GetMadnessTier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTheDoctorUtilities::STATIC_GetMadnessTier(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.TheDoctorUtilities.GetMadnessTier"));
		
		UTheDoctorUtilities_GetMadnessTier_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F499A0
	 * 		Name   -> Function TheDoctor.TheDoctorUtilities.CanGainInsanity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTheDoctorUtilities::STATIC_CanGainInsanity(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheDoctor.TheDoctorUtilities.CanGainInsanity"));
		
		UTheDoctorUtilities_CanGainInsanity_Params params {};
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
	 * 		Name   -> PredefinedFunction UTheDoctorUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheDoctorUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheDoctor.TheDoctorUtilities"));
		return ptr;
	}

}


