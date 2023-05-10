#pragma once

/**
 * Name: dbd
 * Version: 6711
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Achievements.AchievementBase
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAchievementBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_7UNZ[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.AchievementHandler
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UAchievementHandler : public UGameInstanceSubsystem
	{
	public:
		TArray<class UAchievementBase*>                            _achievements;                                           // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8B39[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.AchievementsData
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UAchievementsData : public UDataAsset
	{
	public:
		TArray<struct FGameEventSimpleAchievementInfo>             gameEventSimpleAchievements;                             // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FScoreEventSimpleAchievementInfo>            scoreEventSimpleAchievements;                            // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameEventClassAchievementInfo>              gameEventClassAchievements;                              // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCustomAchievementInfo>                      customEventClassAchievements;                            // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.AchievementUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAchievementUtilities : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.OnGameEventAchievement
	 * Size -> 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
	 */
	class UOnGameEventAchievement : public UAchievementBase
	{
	public:
		unsigned char                                              UnknownData_LY2X[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _gameEvents;                                             // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<EDBDScoreTypes>                                     _scoreTypes;                                             // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void OnScoreTypeEvent(EDBDScoreTypes scoreType, float Amount, class AActor* Instigator, class AActor* Target);
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.AddNewPerkAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UAddNewPerkAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.AwardPipsAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UAwardPipsAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.CollectItemFromBasementChestAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UCollectItemFromBasementChestAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.CooldownReactivationTypeAchievement
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UCooldownReactivationTypeAchievement : public UOnGameEventAchievement
	{
	public:
		unsigned char                                              UnknownData_8N9D[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.EscapeTypeAchievement
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UEscapeTypeAchievement : public UOnGameEventAchievement
	{
	public:
		unsigned char                                              UnknownData_1BED[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.EscapeAsObsessionWithoutInjuryAchievement
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UEscapeAsObsessionWithoutInjuryAchievement : public UEscapeTypeAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ExitGateOpenedAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UExitGateOpenedAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.FinishGameWithCharacterPerksAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UFinishGameWithCharacterPerksAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.FinishGameWithMercilessVictoryAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UFinishGameWithMercilessVictoryAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.HealFromDyingAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHealFromDyingAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.K26CrowDamagedSurvivorAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UK26CrowDamagedSurvivorAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.KillerDamagedSurvivorWithHasteAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UKillerDamagedSurvivorWithHasteAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.KillerHitSurvivorDuringGuardHuntAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UKillerHitSurvivorDuringGuardHuntAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.KillerVaultDuringChaseAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UKillerVaultDuringChaseAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.KONextToRaisedPalletAchievement
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UKONextToRaisedPalletAchievement : public UOnGameEventAchievement
	{
	public:
		unsigned char                                              UnknownData_3RTC[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.MaxBloodpointsAllCategoriesAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UMaxBloodpointsAllCategoriesAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ScoreCamperHealOtherAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UScoreCamperHealOtherAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ScoreCamperSurviveAchievement
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UScoreCamperSurviveAchievement : public UEscapeTypeAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ScoreLevelUpAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UScoreLevelUpAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ScoreSlasherDamageGeneratorKickAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UScoreSlasherDamageGeneratorKickAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ScoreSlasherHookCamper
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UScoreSlasherHookCamper : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ScoreSlasherKillAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UScoreSlasherKillAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ScoreSlasherPowerK24HitSurvivor
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UScoreSlasherPowerK24HitSurvivor : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.ScoreSlasherSacrificeSuccess
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UScoreSlasherSacrificeSuccess : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.SlasherHookCamperInBasement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class USlasherHookCamperInBasement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.StartGameAchievement
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UStartGameAchievement : public UOnGameEventAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.SurvivorIncreaseOthersMovementSpeedWithCooldown
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class USurvivorIncreaseOthersMovementSpeedWithCooldown : public UCooldownReactivationTypeAchievement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.SurvivorRevealedKillerAuraAchievement
	 * Size -> 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
	 */
	class USurvivorRevealedKillerAuraAchievement : public UAchievementBase
	{
	public:
		unsigned char                                              UnknownData_KFUG[0x4];                                   // 0x0040(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _survivorFlagTag;                                        // 0x0044(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _killerFlagTag;                                          // 0x0050(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _modifierTag;                                            // 0x005C(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               _dontAwardIfKillerHasTags;                               // 0x0068(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		void OnLevelReadyToPlay();
		void Local_OnRevealKillerAura();
		static UClass* StaticClass();
	};

	/**
	 * Class Achievements.TotalPlaytimeAchievement
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UTotalPlaytimeAchievement : public UAchievementBase
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
