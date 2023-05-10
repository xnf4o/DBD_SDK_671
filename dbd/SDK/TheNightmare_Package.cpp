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
	 * 		Name   -> PredefinedFunction UBlackBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.BlackBox"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodWarden.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodWarden::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.BloodWarden"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195D80
	 * 		Name   -> Function TheNightmare.DreamInducerComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDreamInducerComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.DreamInducerComponent.Authority_OnLevelReadyToPlay"));
		
		UDreamInducerComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDreamInducerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDreamInducerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.DreamInducerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADreamSnare.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADreamSnare::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.DreamSnare"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.DreamSnareEffect.OnActorEndOverlap
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDreamSnareEffect::OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.DreamSnareEffect.OnActorEndOverlap"));
		
		UDreamSnareEffect_OnActorEndOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.DreamSnareEffect.OnActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDreamSnareEffect::OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.DreamSnareEffect.OnActorBeginOverlap"));
		
		UDreamSnareEffect_OnActorBeginOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDreamSnareEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDreamSnareEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.DreamSnareEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196230
	 * 		Name   -> Function TheNightmare.GeneratorDreamworldComponent.OnRepairSkillCheckFailed
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
	void UGeneratorDreamworldComponent::OnRepairSkillCheckFailed(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorDreamworldComponent.OnRepairSkillCheckFailed"));
		
		UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Params params {};
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
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.GeneratorDreamworldComponent.Cosmetic_OnPlayerFailSkillCheck
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorDreamworldComponent::Cosmetic_OnPlayerFailSkillCheck(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorDreamworldComponent.Cosmetic_OnPlayerFailSkillCheck"));
		
		UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorDreamworldComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorDreamworldComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.GeneratorDreamworldComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197560
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UGeneratorTeleportInteraction::StopBloodSpurts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts"));
		
		UGeneratorTeleportInteraction_StopBloodSpurts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197540
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UGeneratorTeleportInteraction::StartBloodSpurts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts"));
		
		UGeneratorTeleportInteraction_StartBloodSpurts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGeneratorTeleportInteraction::ShowBloodSpurtsVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX"));
		
		UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197480
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorTeleportInteraction::Server_SetSelectedGenerator(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator"));
		
		UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGeneratorTeleportInteraction::OnTeleportReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady"));
		
		UGeneratorTeleportInteraction_OnTeleportReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Location                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGeneratorTeleportInteraction::OnTeleportLocationChosen(class AGenerator* Generator, const struct FTransform& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen"));
		
		UGeneratorTeleportInteraction_OnTeleportLocationChosen_Params params {};
		params.Generator = Generator;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.OnTeleported
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  transformBeforeTeleport                                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGeneratorTeleportInteraction::OnTeleported(const struct FTransform& transformBeforeTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.OnTeleported"));
		
		UGeneratorTeleportInteraction_OnTeleported_Params params {};
		params.transformBeforeTeleport = transformBeforeTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  selectedGenerator                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorTeleportInteraction::OnSelectedGeneratorSet(class AGenerator* selectedGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet"));
		
		UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Params params {};
		params.selectedGenerator = selectedGenerator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197460
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGeneratorTeleportInteraction::OnRep_TeleportCooldownTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer"));
		
		UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197440
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGeneratorTeleportInteraction::OnRep_SelectedGenerator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator"));
		
		UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  selectedGenerator                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorTeleportInteraction::OnLocallySelectedGeneratorSet(class AGenerator* selectedGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet"));
		
		UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Params params {};
		params.selectedGenerator = selectedGenerator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197420
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UGeneratorTeleportInteraction::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted"));
		
		UGeneratorTeleportInteraction_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197400
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.OnBloodSpurts
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UGeneratorTeleportInteraction::OnBloodSpurts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.OnBloodSpurts"));
		
		UGeneratorTeleportInteraction_OnBloodSpurts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05054860
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGeneratorTeleportInteraction::Multicast_TeleportPlayer(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer"));
		
		UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051972B0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Location                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGeneratorTeleportInteraction::Multicast_OnTeleportLocationChosen(class AGenerator* Generator, const struct FTransform& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen"));
		
		UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Params params {};
		params.Generator = Generator;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197280
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGeneratorTeleportInteraction::IsTeleportAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable"));
		
		UGeneratorTeleportInteraction_IsTeleportAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051971F0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorTeleportInteraction::InitializeTunableValues(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues"));
		
		UGeneratorTeleportInteraction_InitializeTunableValues_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051971C0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.HasTeleportFailed
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGeneratorTeleportInteraction::HasTeleportFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.HasTeleportFailed"));
		
		UGeneratorTeleportInteraction_HasTeleportFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197190
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* UGeneratorTeleportInteraction::GetOwningPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer"));
		
		UGeneratorTeleportInteraction_GetOwningPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051970F0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AGenerator* UGeneratorTeleportInteraction::GetInlineGenerator(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator"));
		
		UGeneratorTeleportInteraction_GetInlineGenerator_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197050
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeneratorTeleportInteraction::CanTeleportAtGenerator(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator"));
		
		UGeneratorTeleportInteraction_CanTeleportAtGenerator_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196F80
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  playerToTeleport                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeneratorTeleportInteraction::Authority_TeleportPlayerToGenerator(class ADBDPlayer* playerToTeleport, class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator"));
		
		UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Params params {};
		params.playerToTeleport = playerToTeleport;
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196EF0
	 * 		Name   -> Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               teleported                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorTeleportInteraction::Authority_StartTeleportCooldown(bool teleported)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown"));
		
		UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Params params {};
		params.teleported = teleported;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorTeleportInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorTeleportInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.GeneratorTeleportInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInDreamSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInDreamSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.InDreamSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNightmareAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNightmareAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.NightmareAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function TheNightmare.NightmareCheatComponent.OnRep_AllowWakeUpAnyClock
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNightmareCheatComponent::OnRep_AllowWakeUpAnyClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.NightmareCheatComponent.OnRep_AllowWakeUpAnyClock"));
		
		UNightmareCheatComponent_OnRep_AllowWakeUpAnyClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2E70
	 * 		Name   -> Function TheNightmare.NightmareCheatComponent.DBD_AllowWakeUpAtAnyClock
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               allow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNightmareCheatComponent::DBD_AllowWakeUpAtAnyClock(bool allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.NightmareCheatComponent.DBD_AllowWakeUpAtAnyClock"));
		
		UNightmareCheatComponent_DBD_AllowWakeUpAtAnyClock_Params params {};
		params.allow = allow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNightmareCheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNightmareCheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.NightmareCheatComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APalletTracker*                              trackerAtLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaceDreamPalletInteraction::SpawnDreamPallet(class APalletTracker* trackerAtLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet"));
		
		UPlaceDreamPalletInteraction_SpawnDreamPallet_Params params {};
		params.trackerAtLocation = trackerAtLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197D60
	 * 		Name   -> Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlaceDreamPalletInteraction::InitializeTunableValues(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues"));
		
		UPlaceDreamPalletInteraction_InitializeTunableValues_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197D30
	 * 		Name   -> Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class APalletTracker* UPlaceDreamPalletInteraction::GetTargetedPallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet"));
		
		UPlaceDreamPalletInteraction_GetTargetedPallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197C90
	 * 		Name   -> Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class APalletTracker*                              tracker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlaceDreamPalletInteraction::CanSpawnDreamPalletAtTracker(class APalletTracker* tracker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker"));
		
		UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Params params {};
		params.tracker = tracker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaceDreamPalletInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaceDreamPalletInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.PlaceDreamPalletInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPresentationGeneratorTeleportProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPresentationGeneratorTeleportProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.PresentationGeneratorTeleportProgressComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051980A0
	 * 		Name   -> Function TheNightmare.RememberMe.DidLoseHealthState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            oldHealthStateCount                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URememberMe::DidLoseHealthState(class AActor* DamagedActor, int32_t oldHealthStateCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.RememberMe.DidLoseHealthState"));
		
		URememberMe_DidLoseHealthState_Params params {};
		params.DamagedActor = DamagedActor;
		params.oldHealthStateCount = oldHealthStateCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URememberMe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URememberMe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.RememberMe"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463AA60
	 * 		Name   -> Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USetDreamSnareInteraction::HasCancelledDreamSnare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare"));
		
		USetDreamSnareInteraction_HasCancelledDreamSnare_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05198370
	 * 		Name   -> Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USetDreamSnareInteraction::GetTrapDistanceFromControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation"));
		
		USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetDreamSnareInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetDreamSnareInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheNightmare.SetDreamSnareInteraction"));
		return ptr;
	}

}


