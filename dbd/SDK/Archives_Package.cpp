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
	 * 		Name   -> PredefinedFunction UActorPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ActorPathFollowingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EEF90
	 * 		Name   -> Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAfterExitOpenQEEvaluator::OnExitGateOpened(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened"));
		
		UAfterExitOpenQEEvaluator_OnExitGateOpened_Params params {};
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
	 * 		Name   -> PredefinedFunction UAfterExitOpenQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAfterExitOpenQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.AfterExitOpenQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecentlyActiveStateTagEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecentlyActiveStateTagEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.RecentlyActiveStateTagEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAllRecentlyActiveStateTagEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAllRecentlyActiveStateTagEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.AllRecentlyActiveStateTagEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.AlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnyRecentlyActiveStateTagEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnyRecentlyActiveStateTagEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.AnyRecentlyActiveStateTagEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseRecentEventEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseRecentEventEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.BaseRecentEventEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF2C0
	 * 		Name   -> Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBloodPointsQEEvaluator::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying"));
		
		UBloodPointsQEEvaluator_OnFinishedPlaying_Params params {};
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
	 * 		Name   -> PredefinedFunction UBloodPointsQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodPointsQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.BloodPointsQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCarryDistanceQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCarryDistanceQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.CarryDistanceQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF0A0
	 * 		Name   -> Function Archives.ChaseInBasementQEEvaluator.OnEscapeChase
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaseInBasementQEEvaluator::OnEscapeChase(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.ChaseInBasementQEEvaluator.OnEscapeChase"));
		
		UChaseInBasementQEEvaluator_OnEscapeChase_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EEE80
	 * 		Name   -> Function Archives.ChaseInBasementQEEvaluator.OnChaseStart
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaseInBasementQEEvaluator::OnChaseStart(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.ChaseInBasementQEEvaluator.OnChaseStart"));
		
		UChaseInBasementQEEvaluator_OnChaseStart_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EED70
	 * 		Name   -> Function Archives.ChaseInBasementQEEvaluator.OnChaseEnd
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaseInBasementQEEvaluator::OnChaseEnd(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.ChaseInBasementQEEvaluator.OnChaseEnd"));
		
		UChaseInBasementQEEvaluator_OnChaseEnd_Params params {};
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
	 * 		Name   -> PredefinedFunction UChaseInBasementQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaseInBasementQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ChaseInBasementQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EFA40
	 * 		Name   -> Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SpecialBehaviourId                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UContextualQuestUtilities::STATIC_PlayerHasToCompleteAssociatedQuest(class ADBDPlayer* Player, const class FName& SpecialBehaviourId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest"));
		
		UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Params params {};
		params.Player = Player;
		params.SpecialBehaviourId = SpecialBehaviourId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF960
	 * 		Name   -> Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SpecialBehaviourId                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UContextualQuestUtilities::STATIC_PlayerHasAssociatedQuest(class ADBDPlayer* Player, const class FName& SpecialBehaviourId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest"));
		
		UContextualQuestUtilities_PlayerHasAssociatedQuest_Params params {};
		params.Player = Player;
		params.SpecialBehaviourId = SpecialBehaviourId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextualQuestUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextualQuestUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ContextualQuestUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomValueEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomValueEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.CustomValueEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomValueLessThanAmountQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomValueLessThanAmountQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.CustomValueLessThanAmountQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomValueMoreThanAmountQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomValueMoreThanAmountQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.CustomValueMoreThanAmountQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomValuePercentQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomValuePercentQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.CustomValuePercentQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomValueQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomValueQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.CustomValueQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDifferentSurvivorsNearMeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDifferentSurvivorsNearMeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.DifferentSurvivorsNearMeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF1B0
	 * 		Name   -> Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDoBeforeEscapeQEEvaluator::OnEscaped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped"));
		
		UDoBeforeEscapeQEEvaluator_OnEscaped_Params params {};
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
	 * 		Name   -> PredefinedFunction UDoBeforeEscapeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoBeforeEscapeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.DoBeforeEscapeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF5F0
	 * 		Name   -> Function Archives.DoBeforeHookQEEvaluator.OnHooked
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDoBeforeHookQEEvaluator::OnHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.DoBeforeHookQEEvaluator.OnHooked"));
		
		UDoBeforeHookQEEvaluator_OnHooked_Params params {};
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
	 * 		Name   -> PredefinedFunction UDoBeforeHookQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoBeforeHookQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.DoBeforeHookQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EEF90
	 * 		Name   -> Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDuringEndGameCollapseQEEvaluator::OnEndGameCollapseStart(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart"));
		
		UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Params params {};
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
	 * 		Name   -> PredefinedFunction UDuringEndGameCollapseQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDuringEndGameCollapseQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.DuringEndGameCollapseQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF3D0
	 * 		Name   -> Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEarnEmblemQualityQEEvaluator::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying"));
		
		UEarnEmblemQualityQEEvaluator_OnFinishedPlaying_Params params {};
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
	 * 		Name   -> PredefinedFunction UEarnEmblemQualityQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEarnEmblemQualityQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.EarnEmblemQualityQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF4E0
	 * 		Name   -> Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEndOfGameQEEvaluator::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying"));
		
		UEndOfGameQEEvaluator_OnFinishedPlaying_Params params {};
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
	 * 		Name   -> PredefinedFunction UEndOfGameQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndOfGameQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.EndOfGameQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF850
	 * 		Name   -> Function Archives.EscapeBasementItemQEEvaluator.OnTargetEscapeFromTrial
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEscapeBasementItemQEEvaluator::OnTargetEscapeFromTrial(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.EscapeBasementItemQEEvaluator.OnTargetEscapeFromTrial"));
		
		UEscapeBasementItemQEEvaluator_OnTargetEscapeFromTrial_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF700
	 * 		Name   -> Function Archives.EscapeBasementItemQEEvaluator.OnItemCollectedFromChest
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEscapeBasementItemQEEvaluator::OnItemCollectedFromChest(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.EscapeBasementItemQEEvaluator.OnItemCollectedFromChest"));
		
		UEscapeBasementItemQEEvaluator_OnItemCollectedFromChest_Params params {};
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
	 * 		Name   -> PredefinedFunction UEscapeBasementItemQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEscapeBasementItemQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.EscapeBasementItemQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEscapeOtherInTrialQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEscapeOtherInTrialQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.EscapeOtherInTrialQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventAfterOtherWithMinimumCustomValueQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventAfterOtherWithMinimumCustomValueQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.EventAfterOtherWithMinimumCustomValueQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventCountComparisonQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventCountComparisonQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.EventCountComparisonQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventInTimeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventInTimeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.EventInTimeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventOccuredAndStayNearQuestEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventOccuredAndStayNearQuestEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.EventOccuredAndStayNearQuestEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventOccurredBetweenQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventOccurredBetweenQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.EventOccurredBetweenQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFinishPreventGateEscapeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFinishPreventGateEscapeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.FinishPreventGateEscapeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF830
	 * 		Name   -> Function Archives.FragileObjectComponent.OnRep_Repaired
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UFragileObjectComponent::OnRep_Repaired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.FragileObjectComponent.OnRep_Repaired"));
		
		UFragileObjectComponent_OnRep_Repaired_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction Archives.FragileObjectComponent.OnFragileObjectStateChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UFragileObjectComponent::OnFragileObjectStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction Archives.FragileObjectComponent.OnFragileObjectStateChanged__DelegateSignature"));
		
		UFragileObjectComponent_OnFragileObjectStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EED40
	 * 		Name   -> Function Archives.FragileObjectComponent.IsRepaired
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFragileObjectComponent::IsRepaired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.FragileObjectComponent.IsRepaired"));
		
		UFragileObjectComponent_IsRepaired_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EEC70
	 * 		Name   -> Function Archives.FragileObjectComponent.GetPreviousCollector
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* UFragileObjectComponent::GetPreviousCollector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.FragileObjectComponent.GetPreviousCollector"));
		
		UFragileObjectComponent_GetPreviousCollector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function Archives.FragileObjectComponent.DBD_RepairFragileObject
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UFragileObjectComponent::DBD_RepairFragileObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.FragileObjectComponent.DBD_RepairFragileObject"));
		
		UFragileObjectComponent_DBD_RepairFragileObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFragileObjectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFragileObjectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.FragileObjectComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorCoOpEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorCoOpEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.GeneratorCoOpEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorsNeededCountQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorsNeededCountQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.GeneratorsNeededCountQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EF810
	 * 		Name   -> Function Archives.Glyph.OnRep_PlayersWithVisibility
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AGlyph::OnRep_PlayersWithVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.OnRep_PlayersWithVisibility"));
		
		AGlyph_OnRep_PlayersWithVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EECA0
	 * 		Name   -> Function Archives.Glyph.IsPlayerOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGlyph::IsPlayerOwner(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.IsPlayerOwner"));
		
		AGlyph_IsPlayerOwner_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EEC40
	 * 		Name   -> Function Archives.Glyph.DoesLocalPlayerHaveVisibility
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure)
	 */
	bool AGlyph::DoesLocalPlayerHaveVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.DoesLocalPlayerHaveVisibility"));
		
		AGlyph_DoesLocalPlayerHaveVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.Glyph.Cosmetic_OnStoppedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AGlyph::Cosmetic_OnStoppedInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.Cosmetic_OnStoppedInteracting"));
		
		AGlyph_Cosmetic_OnStoppedInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.Glyph.Cosmetic_OnStartedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGlyph::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.Cosmetic_OnStartedInteracting"));
		
		AGlyph_Cosmetic_OnStartedInteracting_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.interactionDuration = interactionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.Glyph.Cosmetic_OnInteractionCompleted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGlyph::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.Cosmetic_OnInteractionCompleted"));
		
		AGlyph_Cosmetic_OnInteractionCompleted_Params params {};
		params.interactingPlayer = interactingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGlyph::Cosmetic_OnGlyphVisibilityChanged(class ADBDPlayer* interactingPlayer, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged"));
		
		AGlyph_Cosmetic_OnGlyphVisibilityChanged_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EEB20
	 * 		Name   -> Function Archives.Glyph.Authority_TrackPlayerWithBehaviourID
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  DBDPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGlyph::Authority_TrackPlayerWithBehaviourID(class ADBDPlayer* DBDPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.Authority_TrackPlayerWithBehaviourID"));
		
		AGlyph_Authority_TrackPlayerWithBehaviourID_Params params {};
		params.DBDPlayer = DBDPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EEA50
	 * 		Name   -> Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isWithinRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      trackedActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGlyph::Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold"));
		
		AGlyph_Authority_OnPlayerBreachedRangeThreshold_Params params {};
		params.isWithinRange = isWithinRange;
		params.trackedActor = trackedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EEA30
	 * 		Name   -> Function Archives.Glyph.Authority_OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGlyph::Authority_OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.Authority_OnIntroCompleted"));
		
		AGlyph_Authority_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.Glyph.Authority_OnInteractionCompleted
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGlyph::Authority_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.Glyph.Authority_OnInteractionCompleted"));
		
		AGlyph_Authority_OnInteractionCompleted_Params params {};
		params.interactingPlayer = interactingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGlyph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlyph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.Glyph"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlyphDebugComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlyphDebugComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.GlyphDebugComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlyphEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlyphEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.GlyphEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlyphInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlyphInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.GlyphInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlyphOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlyphOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.GlyphOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EEBB0
	 * 		Name   -> Function Archives.GreenGlyphActivatorComponent.DBD_ShowAuraGreenGlyphsActive
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGreenGlyphActivatorComponent::DBD_ShowAuraGreenGlyphsActive(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.GreenGlyphActivatorComponent.DBD_ShowAuraGreenGlyphsActive"));
		
		UGreenGlyphActivatorComponent_DBD_ShowAuraGreenGlyphsActive_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EE920
	 * 		Name   -> Function Archives.GreenGlyphActivatorComponent.Authority_OnActivateGlyphEvents
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGreenGlyphActivatorComponent::Authority_OnActivateGlyphEvents(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.GreenGlyphActivatorComponent.Authority_OnActivateGlyphEvents"));
		
		UGreenGlyphActivatorComponent_Authority_OnActivateGlyphEvents_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043EE810
	 * 		Name   -> Function Archives.GreenGlyphActivatorComponent.Authority_EndGameScenarioBegins
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGreenGlyphActivatorComponent::Authority_EndGameScenarioBegins(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.GreenGlyphActivatorComponent.Authority_EndGameScenarioBegins"));
		
		UGreenGlyphActivatorComponent_Authority_EndGameScenarioBegins_Params params {};
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
	 * 		Name   -> PredefinedFunction UGreenGlyphActivatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGreenGlyphActivatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.GreenGlyphActivatorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5E00
	 * 		Name   -> Function Archives.GreenGlyphComponent.OnRep_SetShouldOutlineBeActive
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGreenGlyphComponent::OnRep_SetShouldOutlineBeActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.GreenGlyphComponent.OnRep_SetShouldOutlineBeActive"));
		
		UGreenGlyphComponent_OnRep_SetShouldOutlineBeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5180
	 * 		Name   -> Function Archives.GreenGlyphComponent.Multicast_Cheat_ShowAuraGreenGlyphActive
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShowAura                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGreenGlyphComponent::Multicast_Cheat_ShowAuraGreenGlyphActive(bool Enabled, bool bForceShowAura)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.GreenGlyphComponent.Multicast_Cheat_ShowAuraGreenGlyphActive"));
		
		UGreenGlyphComponent_Multicast_Cheat_ShowAuraGreenGlyphActive_Params params {};
		params.Enabled = Enabled;
		params.bForceShowAura = bForceShowAura;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGreenGlyphComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGreenGlyphComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.GreenGlyphComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasAnyVisibleStatusEffectOfType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasAnyVisibleStatusEffectOfType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasAnyVisibleStatusEffectOfType"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasEventHappenedEnoughTimesEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasEventHappenedEnoughTimesEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasEventHappenedEnoughTimesEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasEventHappenedEnoughTimesResettableEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasEventHappenedEnoughTimesResettableEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasEventHappenedEnoughTimesResettableEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasEventHappenedEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasEventHappenedEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasEventHappenedEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasEventNotHappenedEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasEventNotHappenedEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasEventNotHappenedEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasGameplayTagEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasGameplayTagEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasGameplayTagEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5DE0
	 * 		Name   -> Function Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHasInteractedMapTrackedInteractorQEEvaluator::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnLevelReadyToPlay"));
		
		UHasInteractedMapTrackedInteractorQEEvaluator_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5260
	 * 		Name   -> Function Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnActorTrackedByMap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      newActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHasInteractedMapTrackedInteractorQEEvaluator::OnActorTrackedByMap(class AActor* newActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnActorTrackedByMap"));
		
		UHasInteractedMapTrackedInteractorQEEvaluator_OnActorTrackedByMap_Params params {};
		params.newActor = newActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasInteractedMapTrackedInteractorQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasInteractedMapTrackedInteractorQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasInteractedMapTrackedInteractorQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasItemNoChargesQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasItemNoChargesQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasItemNoChargesQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasItemRarityEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasItemRarityEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasItemRarityEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemRarityQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemRarityQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ItemRarityQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasItemRarityQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasItemRarityQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasItemRarityQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasItemTypeEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasItemTypeEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasItemTypeEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasItemTypeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasItemTypeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasItemTypeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasModifierOfTypeEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasModifierOfTypeEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasModifierOfTypeEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasOneOfEventsHappenedEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasOneOfEventsHappenedEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasOneOfEventsHappenedEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasStateTagNearGameObjectQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasStateTagNearGameObjectQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasStateTagNearGameObjectQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasStatusEffectEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasStatusEffectEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HasStatusEffectEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexTotemsAtEndTrialCountQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexTotemsAtEndTrialCountQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HexTotemsAtEndTrialCountQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAC60
	 * 		Name   -> Function Archives.NearKillerQEEvaluator.OnRangeChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNearKillerQEEvaluator::OnRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.NearKillerQEEvaluator.OnRangeChanged"));
		
		UNearKillerQEEvaluator_OnRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNearKillerQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNearKillerQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.NearKillerQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5E20
	 * 		Name   -> Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHideNearKillerQEEvaluator::OnSlashHarpoonedCamper(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper"));
		
		UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F59A0
	 * 		Name   -> Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHideNearKillerQEEvaluator::OnHarpoonHit(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit"));
		
		UHideNearKillerQEEvaluator_OnHarpoonHit_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5890
	 * 		Name   -> Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHideNearKillerQEEvaluator::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying"));
		
		UHideNearKillerQEEvaluator_OnFinishedPlaying_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F54D0
	 * 		Name   -> Function Archives.HideNearKillerQEEvaluator.OnChaseStart
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  chasedSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideNearKillerQEEvaluator::OnChaseStart(class ADBDPlayer* chasedSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.HideNearKillerQEEvaluator.OnChaseStart"));
		
		UHideNearKillerQEEvaluator_OnChaseStart_Params params {};
		params.chasedSurvivor = chasedSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5400
	 * 		Name   -> Function Archives.HideNearKillerQEEvaluator.OnChaseEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  chasedSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              chaseTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideNearKillerQEEvaluator::OnChaseEnd(class ADBDPlayer* chasedSurvivor, float chaseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.HideNearKillerQEEvaluator.OnChaseEnd"));
		
		UHideNearKillerQEEvaluator_OnChaseEnd_Params params {};
		params.chasedSurvivor = chasedSurvivor;
		params.chaseTime = chaseTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F52F0
	 * 		Name   -> Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHideNearKillerQEEvaluator::OnCamperBreakFreeFromHarpoon(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon"));
		
		UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Params params {};
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
	 * 		Name   -> PredefinedFunction UHideNearKillerQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHideNearKillerQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HideNearKillerQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHideInTerrorRadiusQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHideInTerrorRadiusQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HideInTerrorRadiusQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHideNearKillerWhileInjuredQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHideNearKillerWhileInjuredQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HideNearKillerWhileInjuredQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5F30
	 * 		Name   -> Function Archives.MaxEventCountQEEvaluator.OnStopEventCount
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMaxEventCountQEEvaluator::OnStopEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.MaxEventCountQEEvaluator.OnStopEventCount"));
		
		UMaxEventCountQEEvaluator_OnStopEventCount_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5AB0
	 * 		Name   -> Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMaxEventCountQEEvaluator::OnIncrementEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount"));
		
		UMaxEventCountQEEvaluator_OnIncrementEventCount_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5780
	 * 		Name   -> Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMaxEventCountQEEvaluator::OnDecrementEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount"));
		
		UMaxEventCountQEEvaluator_OnDecrementEventCount_Params params {};
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
	 * 		Name   -> PredefinedFunction UMaxEventCountQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaxEventCountQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.MaxEventCountQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitDifferentInFrenzyMaxCountQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitDifferentInFrenzyMaxCountQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HitDifferentInFrenzyMaxCountQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FB240
	 * 		Name   -> Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USurvivorHookSameTimeQEEvaluator::OnSurvivorUnhooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked"));
		
		USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FB020
	 * 		Name   -> Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USurvivorHookSameTimeQEEvaluator::OnSurvivorHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked"));
		
		USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Params params {};
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
	 * 		Name   -> PredefinedFunction USurvivorHookSameTimeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorHookSameTimeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.SurvivorHookSameTimeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHookSameTimeBasementQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHookSameTimeBasementQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.HookSameTimeBasementQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInChaseTargetStateTagEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInChaseTargetStateTagEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InChaseTargetStateTagEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInDirectionOfKillerQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInDirectionOfKillerQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InDirectionOfKillerQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInflictMadnessBaseQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInflictMadnessBaseQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InflictMadnessBaseQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInjuredDyingHookManyQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInjuredDyingHookManyQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InjuredDyingHookManyQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInjuredDyingMultipleQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInjuredDyingMultipleQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InjuredDyingMultipleQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5670
	 * 		Name   -> Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInLockerNearKillerQEEvaluator::OnClosetHideExit(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit"));
		
		UInLockerNearKillerQEEvaluator_OnClosetHideExit_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5560
	 * 		Name   -> Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInLockerNearKillerQEEvaluator::OnClosetHideEnter(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter"));
		
		UInLockerNearKillerQEEvaluator_OnClosetHideEnter_Params params {};
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
	 * 		Name   -> PredefinedFunction UInLockerNearKillerQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInLockerNearKillerQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InLockerNearKillerQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstigatorHookCountQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstigatorHookCountQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InstigatorHookCountQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstigatorInBasementQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstigatorInBasementQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InstigatorInBasementQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstigatorInBasementPercentQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstigatorInBasementPercentQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InstigatorInBasementPercentQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstigatorTargetDistanceEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstigatorTargetDistanceEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.InstigatorTargetDistanceEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsEventAttackOfTypeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsEventAttackOfTypeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.IsEventAttackOfTypeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsInteractingEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsInteractingEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.IsInteractingEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsPerformingInteractionEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPerformingInteractionEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.IsPerformingInteractionEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5BC0
	 * 		Name   -> Function Archives.ItemConsumedQEEvaluator.OnItemConsumed
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UItemConsumedQEEvaluator::OnItemConsumed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.ItemConsumedQEEvaluator.OnItemConsumed"));
		
		UItemConsumedQEEvaluator_OnItemConsumed_Params params {};
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
	 * 		Name   -> PredefinedFunction UItemConsumedQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemConsumedQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ItemConsumedQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemPerformedQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemPerformedQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ItemPerformedQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemPerformedPercentQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemPerformedPercentQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ItemPerformedPercentQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5CD0
	 * 		Name   -> Function Archives.ItemUsedQEEvaluator.OnItemUsed
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UItemUsedQEEvaluator::OnItemUsed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.ItemUsedQEEvaluator.OnItemUsed"));
		
		UItemUsedQEEvaluator_OnItemUsed_Params params {};
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
	 * 		Name   -> PredefinedFunction UItemUsedQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemUsedQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ItemUsedQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerNearRedHerringGeneratorQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerNearRedHerringGeneratorQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.KillerNearRedHerringGeneratorQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F60D0
	 * 		Name   -> Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorRemoved                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULivingSurvivorsCountQEEvaluator::OnSurvivorRemoved(class ACamperPlayer* survivorRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved"));
		
		ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Params params {};
		params.survivorRemoved = survivorRemoved;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F6040
	 * 		Name   -> Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorAdded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULivingSurvivorsCountQEEvaluator::OnSurvivorAdded(class ACamperPlayer* survivorAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded"));
		
		ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Params params {};
		params.survivorAdded = survivorAdded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULivingSurvivorsCountQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULivingSurvivorsCountQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.LivingSurvivorsCountQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaxSameTargetQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaxSameTargetQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.MaxSameTargetQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultipleEventsBeforeResetEventQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultipleEventsBeforeResetEventQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.MultipleEventsBeforeResetEventQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultipleEventsInSameFrameQuestEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultipleEventsInSameFrameQuestEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.MultipleEventsInSameFrameQuestEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultipleEventsInTimeFrameQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultipleEventsInTimeFrameQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.MultipleEventsInTimeFrameQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultipleMadSurvivorsQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultipleMadSurvivorsQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.MultipleMadSurvivorsQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNearGameObjectEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNearGameObjectEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.NearGameObjectEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNearMeEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNearMeEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.NearMeEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNearPalletVaultWallQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNearPalletVaultWallQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.NearPalletVaultWallQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FB460
	 * 		Name   -> Function Archives.NearTrackedActorComponent.StopTrackingActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNearTrackedActorComponent::StopTrackingActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.NearTrackedActorComponent.StopTrackingActor"));
		
		UNearTrackedActorComponent_StopTrackingActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FB3D0
	 * 		Name   -> Function Archives.NearTrackedActorComponent.StartTrackingActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNearTrackedActorComponent::StartTrackingActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.NearTrackedActorComponent.StartTrackingActor"));
		
		UNearTrackedActorComponent_StartTrackingActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FB350
	 * 		Name   -> Function Archives.NearTrackedActorComponent.SetDistanceThreshold
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNearTrackedActorComponent::SetDistanceThreshold(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.NearTrackedActorComponent.SetDistanceThreshold"));
		
		UNearTrackedActorComponent_SetDistanceThreshold_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               isWithinRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      trackedActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNearTrackedActorComponent::OnIsWithinRangeChanged__DelegateSignature(bool isWithinRange, class AActor* trackedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature"));
		
		UNearTrackedActorComponent_OnIsWithinRangeChanged__DelegateSignature_Params params {};
		params.isWithinRange = isWithinRange;
		params.trackedActor = trackedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA610
	 * 		Name   -> Function Archives.NearTrackedActorComponent.IsActorWithinRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNearTrackedActorComponent::IsActorWithinRange(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.NearTrackedActorComponent.IsActorWithinRange"));
		
		UNearTrackedActorComponent_IsActorWithinRange_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNearTrackedActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNearTrackedActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.NearTrackedActorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNurseChainBlinkNumberQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNurseChainBlinkNumberQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.NurseChainBlinkNumberQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOniDashHitDiffInTimeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOniDashHitDiffInTimeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.OniDashHitDiffInTimeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrangeGlyphAdjustmentStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrangeGlyphAdjustmentStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.OrangeGlyphAdjustmentStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA480
	 * 		Name   -> Function Archives.OrangeGlyphComponent.Cosmetic_ApplyNegativeEffects
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  affectedPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrangeGlyphComponent::Cosmetic_ApplyNegativeEffects(class ADBDPlayer* affectedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.OrangeGlyphComponent.Cosmetic_ApplyNegativeEffects"));
		
		UOrangeGlyphComponent_Cosmetic_ApplyNegativeEffects_Params params {};
		params.affectedPlayer = affectedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrangeGlyphComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrangeGlyphComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.OrangeGlyphComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAD50
	 * 		Name   -> Function Archives.PinkGlyphComponent.OnRep_MarkedProgress
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPinkGlyphComponent::OnRep_MarkedProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.OnRep_MarkedProgress"));
		
		UPinkGlyphComponent_OnRep_MarkedProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAD30
	 * 		Name   -> Function Archives.PinkGlyphComponent.OnRep_IsPinkGlyphActive
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UPinkGlyphComponent::OnRep_IsPinkGlyphActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.OnRep_IsPinkGlyphActive"));
		
		UPinkGlyphComponent_OnRep_IsPinkGlyphActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAD10
	 * 		Name   -> Function Archives.PinkGlyphComponent.OnRep_IsMarking
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UPinkGlyphComponent::OnRep_IsMarking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.OnRep_IsMarking"));
		
		UPinkGlyphComponent_OnRep_IsMarking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FACF0
	 * 		Name   -> Function Archives.PinkGlyphComponent.OnRep_HasLineOfSightToSurvivor
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UPinkGlyphComponent::OnRep_HasLineOfSightToSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.OnRep_HasLineOfSightToSurvivor"));
		
		UPinkGlyphComponent_OnRep_HasLineOfSightToSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction Archives.PinkGlyphComponent.OnMarkProgressChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPinkGlyphComponent::OnMarkProgressChanged__DelegateSignature(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction Archives.PinkGlyphComponent.OnMarkProgressChanged__DelegateSignature"));
		
		UPinkGlyphComponent_OnMarkProgressChanged__DelegateSignature_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction Archives.PinkGlyphComponent.OnGlyphEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UPinkGlyphComponent::OnGlyphEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction Archives.PinkGlyphComponent.OnGlyphEvent__DelegateSignature"));
		
		UPinkGlyphComponent_OnGlyphEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA740
	 * 		Name   -> Function Archives.PinkGlyphComponent.Multicast_TeleportGlyph
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPinkGlyphComponent::Multicast_TeleportGlyph(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.Multicast_TeleportGlyph"));
		
		UPinkGlyphComponent_Multicast_TeleportGlyph_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA720
	 * 		Name   -> Function Archives.PinkGlyphComponent.Multicast_StartGlyphPreTeleport
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 */
	void UPinkGlyphComponent::Multicast_StartGlyphPreTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.Multicast_StartGlyphPreTeleport"));
		
		UPinkGlyphComponent_Multicast_StartGlyphPreTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA700
	 * 		Name   -> Function Archives.PinkGlyphComponent.Multicast_IsFullyMarkedSurvivor
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 */
	void UPinkGlyphComponent::Multicast_IsFullyMarkedSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.Multicast_IsFullyMarkedSurvivor"));
		
		UPinkGlyphComponent_Multicast_IsFullyMarkedSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA6E0
	 * 		Name   -> Function Archives.PinkGlyphComponent.Multicast_EnterGlyphRange
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 */
	void UPinkGlyphComponent::Multicast_EnterGlyphRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.Multicast_EnterGlyphRange"));
		
		UPinkGlyphComponent_Multicast_EnterGlyphRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA6B0
	 * 		Name   -> Function Archives.PinkGlyphComponent.IsMarking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPinkGlyphComponent::IsMarking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.IsMarking"));
		
		UPinkGlyphComponent_IsMarking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA460
	 * 		Name   -> Function Archives.PinkGlyphComponent.Authority_TeleportGlyph
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPinkGlyphComponent::Authority_TeleportGlyph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.Authority_TeleportGlyph"));
		
		UPinkGlyphComponent_Authority_TeleportGlyph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA340
	 * 		Name   -> Function Archives.PinkGlyphComponent.Authority_OnSurvivorInMovementRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPinkGlyphComponent::Authority_OnSurvivorInMovementRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.Authority_OnSurvivorInMovementRangeChanged"));
		
		UPinkGlyphComponent_Authority_OnSurvivorInMovementRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA270
	 * 		Name   -> Function Archives.PinkGlyphComponent.Authority_OnPlayerBreachedRangeThreshold
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isWithinRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      trackedActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPinkGlyphComponent::Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.Authority_OnPlayerBreachedRangeThreshold"));
		
		UPinkGlyphComponent_Authority_OnPlayerBreachedRangeThreshold_Params params {};
		params.isWithinRange = isWithinRange;
		params.trackedActor = trackedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA250
	 * 		Name   -> Function Archives.PinkGlyphComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPinkGlyphComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.Authority_OnLevelReadyToPlay"));
		
		UPinkGlyphComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA180
	 * 		Name   -> Function Archives.PinkGlyphComponent.Authority_OnDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 newDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPinkGlyphComponent::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PinkGlyphComponent.Authority_OnDamageStateChanged"));
		
		UPinkGlyphComponent_Authority_OnDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.newDamageState = newDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPinkGlyphComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPinkGlyphComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.PinkGlyphComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlagueCorruptUniqueTargetsQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlagueCorruptUniqueTargetsQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.PlagueCorruptUniqueTargetsQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FB130
	 * 		Name   -> Function Archives.PreventExitGateOpenQEEvaluator.OnSurvivorLeftMatch
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPreventExitGateOpenQEEvaluator::OnSurvivorLeftMatch(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PreventExitGateOpenQEEvaluator.OnSurvivorLeftMatch"));
		
		UPreventExitGateOpenQEEvaluator_OnSurvivorLeftMatch_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAF90
	 * 		Name   -> Function Archives.PreventExitGateOpenQEEvaluator.OnSurvivorAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorAdded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreventExitGateOpenQEEvaluator::OnSurvivorAdded(class ACamperPlayer* survivorAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PreventExitGateOpenQEEvaluator.OnSurvivorAdded"));
		
		UPreventExitGateOpenQEEvaluator_OnSurvivorAdded_Params params {};
		params.survivorAdded = survivorAdded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA7C0
	 * 		Name   -> Function Archives.PreventExitGateOpenQEEvaluator.OnExitGateOpened
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPreventExitGateOpenQEEvaluator::OnExitGateOpened(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PreventExitGateOpenQEEvaluator.OnExitGateOpened"));
		
		UPreventExitGateOpenQEEvaluator_OnExitGateOpened_Params params {};
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
	 * 		Name   -> PredefinedFunction UPreventExitGateOpenQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreventExitGateOpenQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.PreventExitGateOpenQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.PurpleGlyphComponent.StopGlyphMovement
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               useDeceleration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPurpleGlyphComponent::StopGlyphMovement(bool useDeceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.StopGlyphMovement"));
		
		UPurpleGlyphComponent_StopGlyphMovement_Params params {};
		params.useDeceleration = useDeceleration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.PurpleGlyphComponent.StartGlyphMovement
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPurpleGlyphComponent::StartGlyphMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.StartGlyphMovement"));
		
		UPurpleGlyphComponent_StartGlyphMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.PurpleGlyphComponent.ResumeGlyphMovement
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               useAcceleration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPurpleGlyphComponent::ResumeGlyphMovement(bool useAcceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.ResumeGlyphMovement"));
		
		UPurpleGlyphComponent_ResumeGlyphMovement_Params params {};
		params.useAcceleration = useAcceleration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAB70
	 * 		Name   -> Function Archives.PurpleGlyphComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPurpleGlyphComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.OnLevelReadyToPlay"));
		
		UPurpleGlyphComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA560
	 * 		Name   -> Function Archives.PurpleGlyphComponent.GetTrackedPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ADBDPlayer* UPurpleGlyphComponent::GetTrackedPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.GetTrackedPlayer"));
		
		UPurpleGlyphComponent_GetTrackedPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA530
	 * 		Name   -> Function Archives.PurpleGlyphComponent.GetOwningGlyph
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AGlyph* UPurpleGlyphComponent::GetOwningGlyph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.GetOwningGlyph"));
		
		UPurpleGlyphComponent_GetOwningGlyph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA3D0
	 * 		Name   -> Function Archives.PurpleGlyphComponent.Authority_StartMoveWithAcceleration
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     goalLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPurpleGlyphComponent::Authority_StartMoveWithAcceleration(const struct FVector& goalLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.Authority_StartMoveWithAcceleration"));
		
		UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Params params {};
		params.goalLocation = goalLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA0F0
	 * 		Name   -> Function Archives.PurpleGlyphComponent.Authority_MoveTo
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPurpleGlyphComponent::Authority_MoveTo(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.Authority_MoveTo"));
		
		UPurpleGlyphComponent_Authority_MoveTo_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA0B0
	 * 		Name   -> Function Archives.PurpleGlyphComponent.Authority_GetNextLocation
	 * 		Flags  -> (Final, Native, Private, HasDefaults, BlueprintCallable)
	 */
	struct FVector UPurpleGlyphComponent::Authority_GetNextLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.Authority_GetNextLocation"));
		
		UPurpleGlyphComponent_Authority_GetNextLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA090
	 * 		Name   -> Function Archives.PurpleGlyphComponent.Authority_AbortMoveWithDeceleration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPurpleGlyphComponent::Authority_AbortMoveWithDeceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.Authority_AbortMoveWithDeceleration"));
		
		UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA070
	 * 		Name   -> Function Archives.PurpleGlyphComponent.Authority_AbortMove
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPurpleGlyphComponent::Authority_AbortMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.PurpleGlyphComponent.Authority_AbortMove"));
		
		UPurpleGlyphComponent_Authority_AbortMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPurpleGlyphComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPurpleGlyphComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.PurpleGlyphComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAB90
	 * 		Name   -> Function Archives.QuestEventsHandler.OnPlayerGameStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayerState*                             PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameState                                         GameState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestEventsHandler::OnPlayerGameStateChanged(class ADBDPlayerState* PlayerState, EGameState GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.QuestEventsHandler.OnPlayerGameStateChanged"));
		
		UQuestEventsHandler_OnPlayerGameStateChanged_Params params {};
		params.PlayerState = PlayerState;
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA9E0
	 * 		Name   -> Function Archives.QuestEventsHandler.OnGameEnded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EEndGameReason                                     Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestEventsHandler::OnGameEnded(EEndGameReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.QuestEventsHandler.OnGameEnded"));
		
		UQuestEventsHandler_OnGameEnded_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA8D0
	 * 		Name   -> Function Archives.QuestEventsHandler.OnFinishedPlaying
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UQuestEventsHandler::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.QuestEventsHandler.OnFinishedPlaying"));
		
		UQuestEventsHandler_OnFinishedPlaying_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA510
	 * 		Name   -> Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UQuestEventsHandler::DBD_ShowInGameCurrentQuestInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos"));
		
		UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE3050
	 * 		Name   -> Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestEventsHandler::DBD_InGameAddProgressionToCurrentQuest(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest"));
		
		UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestEventsHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestEventsHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.QuestEventsHandler"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestEventsHandlerTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestEventsHandlerTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.QuestEventsHandlerTest"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA590
	 * 		Name   -> Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UQuestEventsHandler*                         QuestEventsHandler                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuestEventsHandlerUtilities::STATIC_InitializeQuestEventHandler(class UQuestEventsHandler* QuestEventsHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler"));
		
		UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Params params {};
		params.QuestEventsHandler = QuestEventsHandler;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestEventsHandlerUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestEventsHandlerUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.QuestEventsHandlerUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URepairCoopQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepairCoopQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.RepairCoopQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReturnTheFavorQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReturnTheFavorQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ReturnTheFavorQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreamSpecialCaseQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreamSpecialCaseQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.ScreamSpecialCaseQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAA60
	 * 		Name   -> Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USearchItemRarityQEEvaluator::OnItemSpawnedFromChest(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest"));
		
		USearchItemRarityQEEvaluator_OnItemSpawnedFromChest_Params params {};
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
	 * 		Name   -> PredefinedFunction USearchItemRarityQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USearchItemRarityQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.SearchItemRarityQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecondHookStageReachedQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondHookStageReachedQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.SecondHookStageReachedQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAE80
	 * 		Name   -> Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USkillCheckConsecutiveQEEvaluator::OnSkillCheckSuccess(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess"));
		
		USkillCheckConsecutiveQEEvaluator_OnSkillCheckSuccess_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FAD70
	 * 		Name   -> Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USkillCheckConsecutiveQEEvaluator::OnSkillCheckFail(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail"));
		
		USkillCheckConsecutiveQEEvaluator_OnSkillCheckFail_Params params {};
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
	 * 		Name   -> PredefinedFunction USkillCheckConsecutiveQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillCheckConsecutiveQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.SkillCheckConsecutiveQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlasherIsCarryingQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlasherIsCarryingQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.SlasherIsCarryingQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStateTagEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStateTagEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.StateTagEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorNearMeEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorNearMeEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.SurvivorNearMeEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetInBasementQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetInBasementQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TargetInBasementQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetIsObsessionQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetIsObsessionQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TargetIsObsessionQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetNearPalletVaultWallQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetNearPalletVaultWallQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TargetNearPalletVaultWallQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetOfEventRecentlyQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetOfEventRecentlyQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TargetOfEventRecentlyQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetTriggeredEventRecentlyQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetTriggeredEventRecentlyQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TargetTriggeredEventRecentlyQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetWasDamagedBySpecialAttackRecentlyEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetWasDamagedBySpecialAttackRecentlyEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TargetWasDamagedBySpecialAttackRecentlyEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetWasTargetedByEventRecentlyEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetWasTargetedByEventRecentlyEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TargetWasTargetedByEventRecentlyEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTotalDistanceEvaluatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTotalDistanceEvaluatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TotalDistanceEvaluatorCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTotemsAtEndTrialCountQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTotemsAtEndTrialCountQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TotemsAtEndTrialCountQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriggerWithSameTargetWithinTimeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriggerWithSameTargetWithinTimeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.TriggerWithSameTargetWithinTimeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniqueTargetIncrementQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniqueTargetIncrementQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.UniqueTargetIncrementQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniqueTargetsInTimeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniqueTargetsInTimeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.UniqueTargetsInTimeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction Archives.WhiteGlyphBasementComponent.OnReadyForInteractionDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UWhiteGlyphBasementComponent::OnReadyForInteractionDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction Archives.WhiteGlyphBasementComponent.OnReadyForInteractionDelegate__DelegateSignature"));
		
		UWhiteGlyphBasementComponent_OnReadyForInteractionDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA530
	 * 		Name   -> Function Archives.WhiteGlyphBasementComponent.GetOwningGlyph
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AGlyph* UWhiteGlyphBasementComponent::GetOwningGlyph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.WhiteGlyphBasementComponent.GetOwningGlyph"));
		
		UWhiteGlyphBasementComponent_GetOwningGlyph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWhiteGlyphBasementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWhiteGlyphBasementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.WhiteGlyphBasementComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA530
	 * 		Name   -> Function Archives.WhiteGlyphSpawnerComponent.GetOwningGlyph
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AGlyph* UWhiteGlyphSpawnerComponent::GetOwningGlyph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.WhiteGlyphSpawnerComponent.GetOwningGlyph"));
		
		UWhiteGlyphSpawnerComponent_GetOwningGlyph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FD0F0
	 * 		Name   -> Function Archives.WhiteGlyphSpawnerComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWhiteGlyphSpawnerComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.WhiteGlyphSpawnerComponent.Authority_OnLevelReadyToPlay"));
		
		UWhiteGlyphSpawnerComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWhiteGlyphSpawnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWhiteGlyphSpawnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.WhiteGlyphSpawnerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FD1B0
	 * 		Name   -> Function Archives.WhiteGlyphSurfaceComponent.Multicast_TeleportGlyph
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWhiteGlyphSurfaceComponent::Multicast_TeleportGlyph(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.WhiteGlyphSurfaceComponent.Multicast_TeleportGlyph"));
		
		UWhiteGlyphSurfaceComponent_Multicast_TeleportGlyph_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA530
	 * 		Name   -> Function Archives.WhiteGlyphSurfaceComponent.GetOwningGlyph
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AGlyph* UWhiteGlyphSurfaceComponent::GetOwningGlyph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.WhiteGlyphSurfaceComponent.GetOwningGlyph"));
		
		UWhiteGlyphSurfaceComponent_GetOwningGlyph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWhiteGlyphSurfaceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWhiteGlyphSurfaceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.WhiteGlyphSurfaceComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWithPulledUpPalletQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWithPulledUpPalletQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.WithPulledUpPalletQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.YellowGlyphComponent.StartGlyphPreTeleportVFX
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UYellowGlyphComponent::StartGlyphPreTeleportVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.YellowGlyphComponent.StartGlyphPreTeleportVFX"));
		
		UYellowGlyphComponent_StartGlyphPreTeleportVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Archives.YellowGlyphComponent.StartGlyphPostTeleportVFX
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UYellowGlyphComponent::StartGlyphPostTeleportVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.YellowGlyphComponent.StartGlyphPostTeleportVFX"));
		
		UYellowGlyphComponent_StartGlyphPostTeleportVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FD240
	 * 		Name   -> Function Archives.YellowGlyphComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UYellowGlyphComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.YellowGlyphComponent.OnLevelReadyToPlay"));
		
		UYellowGlyphComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FD1B0
	 * 		Name   -> Function Archives.YellowGlyphComponent.Multicast_TeleportGlyph
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYellowGlyphComponent::Multicast_TeleportGlyph(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.YellowGlyphComponent.Multicast_TeleportGlyph"));
		
		UYellowGlyphComponent_Multicast_TeleportGlyph_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA530
	 * 		Name   -> Function Archives.YellowGlyphComponent.GetOwningGlyph
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AGlyph* UYellowGlyphComponent::GetOwningGlyph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.YellowGlyphComponent.GetOwningGlyph"));
		
		UYellowGlyphComponent_GetOwningGlyph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FD110
	 * 		Name   -> Function Archives.YellowGlyphComponent.Authority_TeleportGlyph
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            maxNumberOfTries                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UYellowGlyphComponent::Authority_TeleportGlyph(int32_t maxNumberOfTries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Archives.YellowGlyphComponent.Authority_TeleportGlyph"));
		
		UYellowGlyphComponent_Authority_TeleportGlyph_Params params {};
		params.maxNumberOfTries = maxNumberOfTries;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UYellowGlyphComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYellowGlyphComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Archives.YellowGlyphComponent"));
		return ptr;
	}

}


