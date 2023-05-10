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
	 * 		Name   -> PredefinedFunction UAchievementBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.AchievementBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAchievementHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.AchievementHandler"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAchievementsData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementsData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.AchievementsData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAchievementUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.AchievementUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043B0310
	 * 		Name   -> Function Achievements.OnGameEventAchievement.OnScoreTypeEvent
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		EDBDScoreTypes                                     scoreType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnGameEventAchievement::OnScoreTypeEvent(EDBDScoreTypes scoreType, float Amount, class AActor* Instigator, class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Achievements.OnGameEventAchievement.OnScoreTypeEvent"));
		
		UOnGameEventAchievement_OnScoreTypeEvent_Params params {};
		params.scoreType = scoreType;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnGameEventAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnGameEventAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.OnGameEventAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddNewPerkAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddNewPerkAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.AddNewPerkAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAwardPipsAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAwardPipsAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.AwardPipsAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectItemFromBasementChestAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectItemFromBasementChestAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.CollectItemFromBasementChestAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCooldownReactivationTypeAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCooldownReactivationTypeAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.CooldownReactivationTypeAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEscapeTypeAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEscapeTypeAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.EscapeTypeAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEscapeAsObsessionWithoutInjuryAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEscapeAsObsessionWithoutInjuryAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.EscapeAsObsessionWithoutInjuryAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExitGateOpenedAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExitGateOpenedAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ExitGateOpenedAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFinishGameWithCharacterPerksAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFinishGameWithCharacterPerksAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.FinishGameWithCharacterPerksAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFinishGameWithMercilessVictoryAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFinishGameWithMercilessVictoryAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.FinishGameWithMercilessVictoryAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHealFromDyingAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHealFromDyingAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.HealFromDyingAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK26CrowDamagedSurvivorAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK26CrowDamagedSurvivorAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.K26CrowDamagedSurvivorAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerDamagedSurvivorWithHasteAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerDamagedSurvivorWithHasteAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.KillerDamagedSurvivorWithHasteAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerHitSurvivorDuringGuardHuntAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerHitSurvivorDuringGuardHuntAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.KillerHitSurvivorDuringGuardHuntAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerVaultDuringChaseAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerVaultDuringChaseAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.KillerVaultDuringChaseAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKONextToRaisedPalletAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKONextToRaisedPalletAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.KONextToRaisedPalletAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaxBloodpointsAllCategoriesAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaxBloodpointsAllCategoriesAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.MaxBloodpointsAllCategoriesAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreCamperHealOtherAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreCamperHealOtherAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ScoreCamperHealOtherAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreCamperSurviveAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreCamperSurviveAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ScoreCamperSurviveAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreLevelUpAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreLevelUpAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ScoreLevelUpAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreSlasherDamageGeneratorKickAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreSlasherDamageGeneratorKickAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ScoreSlasherDamageGeneratorKickAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreSlasherHookCamper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreSlasherHookCamper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ScoreSlasherHookCamper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreSlasherKillAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreSlasherKillAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ScoreSlasherKillAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreSlasherPowerK24HitSurvivor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreSlasherPowerK24HitSurvivor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ScoreSlasherPowerK24HitSurvivor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreSlasherSacrificeSuccess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreSlasherSacrificeSuccess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.ScoreSlasherSacrificeSuccess"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlasherHookCamperInBasement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlasherHookCamperInBasement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.SlasherHookCamperInBasement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartGameAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartGameAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.StartGameAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorIncreaseOthersMovementSpeedWithCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorIncreaseOthersMovementSpeedWithCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.SurvivorIncreaseOthersMovementSpeedWithCooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043B02F0
	 * 		Name   -> Function Achievements.SurvivorRevealedKillerAuraAchievement.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Public)
	 */
	void USurvivorRevealedKillerAuraAchievement::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Achievements.SurvivorRevealedKillerAuraAchievement.OnLevelReadyToPlay"));
		
		USurvivorRevealedKillerAuraAchievement_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043B02D0
	 * 		Name   -> Function Achievements.SurvivorRevealedKillerAuraAchievement.Local_OnRevealKillerAura
	 * 		Flags  -> (Final, Native, Public)
	 */
	void USurvivorRevealedKillerAuraAchievement::Local_OnRevealKillerAura()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Achievements.SurvivorRevealedKillerAuraAchievement.Local_OnRevealKillerAura"));
		
		USurvivorRevealedKillerAuraAchievement_Local_OnRevealKillerAura_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorRevealedKillerAuraAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorRevealedKillerAuraAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.SurvivorRevealedKillerAuraAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTotalPlaytimeAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTotalPlaytimeAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Achievements.TotalPlaytimeAchievement"));
		return ptr;
	}

}


