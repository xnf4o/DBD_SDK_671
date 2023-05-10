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
	 * 		Name   -> PredefinedFunction UAIDisplayDebugInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDisplayDebugInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AIDisplayDebugInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIGoalGeneratorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIGoalGeneratorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AIGoalGeneratorInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIIntentionValidatorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIIntentionValidatorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AIIntentionValidatorInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPathValidatorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPathValidatorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AIPathValidatorInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045531B0
	 * 		Name   -> Function DBDBots.AISkill_DirectionalMinigame.OnMinigameStart
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		TArray<EDirectionalInputKey>                       Sequence                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            currentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISkill_DirectionalMinigame::OnMinigameStart(TArray<EDirectionalInputKey> Sequence, int32_t currentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.AISkill_DirectionalMinigame.OnMinigameStart"));
		
		UAISkill_DirectionalMinigame_OnMinigameStart_Params params {};
		params.Sequence = Sequence;
		params.currentIndex = currentIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04553130
	 * 		Name   -> Function DBDBots.AISkill_DirectionalMinigame.OnMinigameEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EDirectionalMinigameResult                         Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISkill_DirectionalMinigame::OnMinigameEnd(EDirectionalMinigameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.AISkill_DirectionalMinigame.OnMinigameEnd"));
		
		UAISkill_DirectionalMinigame_OnMinigameEnd_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_DirectionalMinigame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_DirectionalMinigame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_DirectionalMinigame"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Diversion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Diversion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Diversion"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Find.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Find::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Find"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindInteractable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindCollectable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindCollectable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindCollectable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindCollectable_Camper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindCollectable_Camper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindCollectable_Camper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindCollectable_Hatchet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindCollectable_Hatchet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindCollectable_Hatchet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindCollectable_Searchable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindCollectable_Searchable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindCollectable_Searchable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindCollectable_Trap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindCollectable_Trap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindCollectable_Trap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindInteractable_CloseTelevisionNearGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable_CloseTelevisionNearGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindInteractable_CloseTelevisionNearGenerator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindInteractable_Drone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable_Drone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindInteractable_Drone"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindInteractable_SolveCondemned.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable_SolveCondemned::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindInteractable_SolveCondemned"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindInteractable_SolveRBT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable_SolveRBT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindInteractable_SolveRBT"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindInteractable_SolveSickness.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable_SolveSickness::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindInteractable_SolveSickness"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindInteractable_StatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable_StatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindInteractable_StatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindInteractable_StatusEffect_Plague.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable_StatusEffect_Plague::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindInteractable_StatusEffect_Plague"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindInteractable_Waker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable_Waker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_FindInteractable_Waker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_AttachRBT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_AttachRBT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_AttachRBT"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_Clairvoyance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_Clairvoyance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_Clairvoyance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_ForThePeople.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_ForThePeople::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_ForThePeople"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_GeneratorSecondaryInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_GeneratorSecondaryInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_GeneratorSecondaryInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_InLocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_InLocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_InLocker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_InLocker_BuiltToLast.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_InLocker_BuiltToLast::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_InLocker_BuiltToLast"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_InLocker_Flashbang.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_InLocker_Flashbang::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_InLocker_Flashbang"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_InLocker_HeadOn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_InLocker_HeadOn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_InLocker_HeadOn"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_InLocker_InnerHealing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_InLocker_InnerHealing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_InLocker_InnerHealing"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_Kill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_Kill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_Kill"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_RecoverWhileCrawling.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_RecoverWhileCrawling::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_RecoverWhileCrawling"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_Reel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_Reel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_Reel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_SendToDeathBed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_SendToDeathBed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_SendToDeathBed"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_SetGeneratorTrap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_SetGeneratorTrap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_SetGeneratorTrap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_StaticBlast.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_StaticBlast::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Interaction_StaticBlast"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionSetTrap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionSetTrap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionSetTrap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionSetTrap_Demogorgon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionSetTrap_Demogorgon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionSetTrap_Demogorgon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionSetTrap_DreamPallet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionSetTrap_DreamPallet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionSetTrap_DreamPallet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionSetTrap_DreamSnare.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionSetTrap_DreamSnare::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionSetTrap_DreamSnare"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionSetTrap_Phantom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionSetTrap_Phantom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionSetTrap_Phantom"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_Aim.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_Aim::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_Aim"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_AmbushAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_AmbushAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_AmbushAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_AmbushMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_AmbushMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_AmbushMode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_Cloak.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_Cloak::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_Cloak"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_Dash.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_Dash::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_Dash"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_DashAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_DashAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_DashAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_DashAttack_Cannibal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_DashAttack_Cannibal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_DashAttack_Cannibal"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_DashAttack_Chainsaw.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_DashAttack_Chainsaw::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_DashAttack_Chainsaw"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_DashAttack_Demogorgon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_DashAttack_Demogorgon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_DashAttack_Demogorgon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_DashHillbilly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_DashHillbilly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_DashHillbilly"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_DeadHard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_DeadHard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_DeadHard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_Fire.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_Fire::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_Fire"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_Frenzy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_Frenzy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_Frenzy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_LungeAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_LungeAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_LungeAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_PhaseWalk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_PhaseWalk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_PhaseWalk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_ReloadDeathSlinger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_ReloadDeathSlinger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_ReloadDeathSlinger"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_ShockTherapy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_ShockTherapy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_ShockTherapy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_Stalk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_Stalk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_Stalk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_StalkGhost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_StalkGhost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_StalkGhost"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_StalkShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_StalkShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_StalkShape"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_StealthGhost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_StealthGhost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_StealthGhost"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_Throw.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_Throw::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_Throw"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_ThrowHatchet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_ThrowHatchet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_ThrowHatchet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_ThrowPlague.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_ThrowPlague::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_ThrowPlague"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_TormentAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_TormentAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_TormentAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_TormentMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_TormentMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTarget_TormentMode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTeleport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTeleport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTeleport"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTeleportEthereal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTeleportEthereal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTeleportEthereal"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTeleportEthereal_Blink.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTeleportEthereal_Blink::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTeleportEthereal_Blink"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTeleportEthereal_Demogorgon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTeleportEthereal_Demogorgon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTeleportEthereal_Demogorgon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTeleportEthereal_Nightmare.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTeleportEthereal_Nightmare::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionTeleportEthereal_Nightmare"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionUseItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_FirecrackerLike.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_FirecrackerLike::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionUseItem_FirecrackerLike"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_Firecracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_Firecracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionUseItem_Firecracker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_Flashbang.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_Flashbang::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionUseItem_Flashbang"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_Flashlight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_Flashlight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionUseItem_Flashlight"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_Key_Addon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_Key_Addon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionUseItem_Key_Addon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_Map.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_Map::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionUseItem_Map"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_Medkit_Addon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_Medkit_Addon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_InteractionUseItem_Medkit_Addon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_PossessTheKiller.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_PossessTheKiller::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_PossessTheKiller"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_SkillCheck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_SkillCheck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_SkillCheck"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Strafe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Strafe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_Strafe"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_StrafeChained.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_StrafeChained::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_StrafeChained"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_StrafeDodge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_StrafeDodge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_StrafeDodge"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_ThroughTorment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_ThroughTorment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.AISkill_ThroughTorment"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TickableBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TickableBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_TickableBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CanRecoverMore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CanRecoverMore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_CanRecoverMore"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CanRunSkill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CanRunSkill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_CanRunSkill"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CanUnsafeAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CanUnsafeAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_CanUnsafeAction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareInteractorCharge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareInteractorCharge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_CompareInteractorCharge"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ContainsInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ContainsInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_ContainsInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ExtCompareBBEntries.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ExtCompareBBEntries::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_ExtCompareBBEntries"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ExtConeCheck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ExtConeCheck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_ExtConeCheck"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ExtIsAtLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ExtIsAtLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_ExtIsAtLocation"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ExtIsBBEntryOfClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ExtIsBBEntryOfClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_ExtIsBBEntryOfClass"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ExtTimeLimit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ExtTimeLimit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_ExtTimeLimit"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_GameplayModifierValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_GameplayModifierValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_GameplayModifierValue"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasActivatedBoonPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasActivatedBoonPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_HasActivatedBoonPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasBetterItemValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasBetterItemValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_HasBetterItemValue"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasDynamicSubtree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasDynamicSubtree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_HasDynamicSubtree"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasGoodHookEscapeChance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasGoodHookEscapeChance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_HasGoodHookEscapeChance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasItemAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasItemAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_HasItemAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_HasPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasPerkFlag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasPerkFlag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_HasPerkFlag"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasStateTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasStateTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_HasStateTag"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_HasStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsBeforeTimerExpiration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsBeforeTimerExpiration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsBeforeTimerExpiration"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsCamperState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsCamperState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsCamperState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsExitOpened.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsExitOpened::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsExitOpened"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsGameState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsInteractionAvailable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsInteractionAvailable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsInteractionAvailable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsInteractorAvailable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsInteractorAvailable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsInteractorAvailable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsLocationInPressureZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsLocationInPressureZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsLocationInPressureZone"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsNearestThan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsNearestThan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsNearestThan"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsObjectFocused.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsObjectFocused::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsObjectFocused"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsTunable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsTunable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_IsTunable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_Random.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Random::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_Random"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_RandomByDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_RandomByDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_RandomByDistance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_RandomByRetry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_RandomByRetry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTDecorator_RandomByRetry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_AroundEQS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_AroundEQS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_AroundEQS"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_OnRelevantBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_OnRelevantBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_OnRelevantBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_ClearBBEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_ClearBBEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_ClearBBEntry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_CopyBBEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_CopyBBEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_CopyBBEntry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_Find_Character.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_Find_Character::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_Find_Character"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractable_Totem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractable_Totem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractable_Totem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_Camper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_Camper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_Camper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_Exit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_Exit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_Exit"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_Generator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_Generator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_Generator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_Locker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_Locker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_Locker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_MeatHook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_MeatHook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_MeatHook"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_Pallet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_Pallet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_Pallet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_Searchable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_Searchable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_Searchable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_Totem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_Totem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_Totem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_Trap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_Trap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_Trap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindInteractor_WishList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindInteractor_WishList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindInteractor_WishList"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_FindObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_FindObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_FindObject"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_Flee.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_Flee::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_Flee"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_GetPinLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_GetPinLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_GetPinLocation"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_GetPinObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_GetPinObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_GetPinObject"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_GoalCoordinator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_GoalCoordinator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_GoalCoordinator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_InputAtTiming.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_InputAtTiming::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_InputAtTiming"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_Patrol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_Patrol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_Patrol"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_Patrol_Discovery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_Patrol_Discovery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_Patrol_Discovery"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_Patrol_PointOfInterest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_Patrol_PointOfInterest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_Patrol_PointOfInterest"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_PushObjectFocus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_PushObjectFocus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_PushObjectFocus"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_RunSkills.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_RunSkills::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_RunSkills"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetBBEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetBBEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_SetBBEntry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetBBEntryTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetBBEntryTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_SetBBEntryTime"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetFocusCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetFocusCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_SetFocusCooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetMovementMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetMovementMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_SetMovementMode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetPathSpeedFactor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetPathSpeedFactor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_SetPathSpeedFactor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetTagCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetTagCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_SetTagCooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_StateMonitor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_StateMonitor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_StateMonitor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_StateMonitor_Camper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_StateMonitor_Camper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_StateMonitor_Camper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_StateMonitor_Slasher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_StateMonitor_Slasher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_StateMonitor_Slasher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_StimuliMonitor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_StimuliMonitor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_StimuliMonitor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_StimuliMonitor_Camper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_StimuliMonitor_Camper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_StimuliMonitor_Camper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_StimuliMonitor_Slasher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_StimuliMonitor_Slasher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTService_StimuliMonitor_Slasher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ClearBBEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ClearBBEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_ClearBBEntry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_CopyBBEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_CopyBBEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_CopyBBEntry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ExtMoveDirecltyToward.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ExtMoveDirecltyToward::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_ExtMoveDirecltyToward"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ExtMoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ExtMoveTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_ExtMoveTo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ExtWait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ExtWait::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_ExtWait"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_FleeMoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_FleeMoveTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_FleeMoveTo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_InputPress.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_InputPress::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_InputPress"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_Interact.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_Interact::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_Interact"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RotateToBBInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RotateToBBInteractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_RotateToBBInteractor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RunSkills.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RunSkills::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_RunSkills"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBBEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBBEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_SetBBEntry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBBEntryTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBBEntryTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_SetBBEntryTime"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetFleeLoopCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetFleeLoopCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_SetFleeLoopCooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetFocusCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetFocusCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_SetFocusCooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetIsChased.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetIsChased::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_SetIsChased"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetMovementMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetMovementMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_SetMovementMode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetRandomNavPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetRandomNavPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_SetRandomNavPoint"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_StealthMoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_StealthMoveTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.BTTask_StealthMoveTo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0455FCE0
	 * 		Name   -> Function DBDBots.DBDAIBTController.OnPawnBump
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADBDAIBTController::OnPawnBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.DBDAIBTController.OnPawnBump"));
		
		ADBDAIBTController_OnPawnBump_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0455FCC0
	 * 		Name   -> Function DBDBots.DBDAIBTController.Authority_FinishedPlaying
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ADBDAIBTController::Authority_FinishedPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.DBDAIBTController.Authority_FinishedPlaying"));
		
		ADBDAIBTController_Authority_FinishedPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADBDAIBTController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADBDAIBTController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDAIBTController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDAIBTUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDAIBTUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDAIBTUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDAIGoalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDAIGoalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDAIGoalComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDAIPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDAIPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDAIPerceptionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045600A0
	 * 		Name   -> Function DBDBots.DBDAIStateComponent.OnUniqueGameplayEvent
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EDBDScoreTypes                                     EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDAIStateComponent::OnUniqueGameplayEvent(EDBDScoreTypes EventType, float Amount, class AActor* Instigator, class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.DBDAIStateComponent.OnUniqueGameplayEvent"));
		
		UDBDAIStateComponent_OnUniqueGameplayEvent_Params params {};
		params.EventType = EventType;
		params.Amount = Amount;
		params.Instigator = Instigator;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0455FF90
	 * 		Name   -> Function DBDBots.DBDAIStateComponent.OnStartAimingEventDispatched
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDBDAIStateComponent::OnStartAimingEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.DBDAIStateComponent.OnStartAimingEventDispatched"));
		
		UDBDAIStateComponent_OnStartAimingEventDispatched_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0455FE80
	 * 		Name   -> Function DBDBots.DBDAIStateComponent.OnSpecialAttackEventDispatched
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDBDAIStateComponent::OnSpecialAttackEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.DBDAIStateComponent.OnSpecialAttackEventDispatched"));
		
		UDBDAIStateComponent_OnSpecialAttackEventDispatched_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDAIStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDAIStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDAIStateComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDBehaviorTreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDBehaviorTreeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDBehaviorTreeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDBlackboardComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDBlackboardComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDBlackboardComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04564640
	 * 		Name   -> Function DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDBDNavLinkCustomComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay"));
		
		UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDNavLinkCustomComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDNavLinkCustomComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDNavLinkCustomComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDNavMeshExplorerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDNavMeshExplorerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDNavMeshExplorerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.DBDPathFollowingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_CenterOfMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_CenterOfMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryContext_CenterOfMap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_EscapeDoors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_EscapeDoors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryContext_EscapeDoors"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Generators.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Generators::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryContext_Generators"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Hooks.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Hooks::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryContext_Hooks"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Lockers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Lockers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryContext_Lockers"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_PinActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_PinActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryContext_PinActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_PinLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_PinLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryContext_PinLocation"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_TerrorRadius.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_TerrorRadius::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryContext_TerrorRadius"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_IsInDangerObjectRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_IsInDangerObjectRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryTest_IsInDangerObjectRange"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_IsValidDestination.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_IsValidDestination::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryTest_IsValidDestination"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_LineOfSight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_LineOfSight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.EnvQueryTest_LineOfSight"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Blink.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_Blink::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavArea_Blink"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Breakable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_Breakable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavArea_Breakable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Vault.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_Vault::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavArea_Vault"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationQueryFilter_Player.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationQueryFilter_Player::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavigationQueryFilter_Player"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationQueryFilter_Camper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationQueryFilter_Camper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavigationQueryFilter_Camper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationQueryFilter_Camper_Cheap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationQueryFilter_Camper_Cheap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavigationQueryFilter_Camper_Cheap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationQueryFilter_CamperStealth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationQueryFilter_CamperStealth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavigationQueryFilter_CamperStealth"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationQueryFilter_Slasher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationQueryFilter_Slasher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavigationQueryFilter_Slasher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationQueryFilter_Slasher_Limited.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationQueryFilter_Slasher_Limited::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavigationQueryFilter_Slasher_Limited"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04564660
	 * 		Name   -> Function DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      MovingActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DestinationPoint                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANavLinkProxy_Base::OnSmartLinkReachedCallback(class AActor* MovingActor, const struct FVector& DestinationPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback"));
		
		ANavLinkProxy_Base_OnSmartLinkReachedCallback_Params params {};
		params.MovingActor = MovingActor;
		params.DestinationPoint = DestinationPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04564600
	 * 		Name   -> Function DBDBots.NavLinkProxy_Base.AutoAdjustSmartLinkPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ANavLinkProxy_Base::AutoAdjustSmartLinkPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.NavLinkProxy_Base.AutoAdjustSmartLinkPoints"));
		
		ANavLinkProxy_Base_AutoAdjustSmartLinkPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavLinkProxy_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavLinkProxy_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavLinkProxy_Base"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04564620
	 * 		Name   -> Function DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ANavLinkProxy_DirectMove::OnDisplayDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo"));
		
		ANavLinkProxy_DirectMove_OnDisplayDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavLinkProxy_DirectMove.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavLinkProxy_DirectMove::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavLinkProxy_DirectMove"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavLinkProxy_Interaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavLinkProxy_Interaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavLinkProxy_Interaction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavMovePath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavMovePath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.NavMovePath"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathBuilder"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathBuilder_EQS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathBuilder_EQS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathBuilder_EQS"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathBuilder_EvadeLoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathBuilder_EvadeLoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathBuilder_EvadeLoop"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathBuilder_LastGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathBuilder_LastGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathBuilder_LastGoal"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathStrategy_Flee.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathStrategy_Flee::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathStrategy_Flee"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathStrategy_FleeLoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathStrategy_FleeLoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathStrategy_FleeLoop"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathStrategy_FleeLOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathStrategy_FleeLOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathStrategy_FleeLOS"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathStrategySelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathStrategySelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathStrategySelector"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathStrategySelector_Flee.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathStrategySelector_Flee::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDBots.PathStrategySelector_Flee"));
		return ptr;
	}

}


