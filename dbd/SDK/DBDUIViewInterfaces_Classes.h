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
	 * Class DBDUIViewInterfaces.AddonViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAddonViewInterface : public UInterface
	{
	public:
		void SetData(const struct FAddonViewData& BaseLoadoutPartViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveCompendiumViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveCompendiumViewInterface : public UInterface
	{
	public:
		void SetPastTomesViewData(TArray<struct FCompendiumButtonData> pastStoryButtonData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveEditorViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveEditorViewInterface : public UInterface
	{
	public:
		void InitEditor();
		void DisplayEditorSaving(const class FString& Path);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveImageViewerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveImageViewerViewInterface : public UInterface
	{
	public:
		void UpdateContent(const struct FArchivesVignetteEntryViewData& Data);
		void SetVoiceOverPlaying(bool voiceOverPlaying);
		void SetVoiceOverAutoplay(bool voiceOverAutoplay);
		void SetTextVisibility(bool visible);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveJournalViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveJournalViewInterface : public UInterface
	{
	public:
		void SetVoiceOverPlaying(bool voiceOverPlaying);
		void SetVoiceOverAutoplay(bool voiceOverAutoplay);
		void SetVignetteList(TArray<struct FArchivesVignetteViewData> vignetteDataList);
		void SetVignetteInputsEnabled(bool Enabled);
		void SetVignetteData(const struct FArchivesVignetteViewData& vignetteViewData);
		void SetEntryData(const struct FArchivesVignetteEntryViewData& entryViewData);
		void SetCinematicButtonsEnabled(bool Enabled);
		void SetArrowButtonEnabled(bool IsEnabled);
		void OnImageViewerVoiceOverPlayed();
		void OnImageViewerVoiceOverAutoplay(bool autoplay);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveLevelProgressionViewInterface : public UInterface
	{
	public:
		void UpdateLevelStatus(int32_t Level, EArchivesStoryLevelStatus Status);
		void SetTomeRewardsData(TArray<struct FRewardWrapperViewData> RewardsData, bool areLocked);
		void SetTomeLevelsData(TArray<class UArchiveStoryLevelViewData*> levelsData, int32_t selectedLevel);
		void SetRewardsContainerVisibility(bool IsVisible);
		void SetLevelSelectorVisibility(bool IsVisible);
		void SetLevelSelectorEnabled(bool Enabled);
		void SetActiveLevel(int32_t levelIndex, bool performAction);
		void PlayRewardsAnimation();
		void GoToNextLevel(int32_t levelIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveStoryLevelViewData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UArchiveStoryLevelViewData : public UObject
	{
	public:
		int32_t                                                    Level;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EArchivesStoryLevelStatus                                  Status;                                                  // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9DW[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           StartDate;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveMenuViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveMenuViewInterface : public UInterface
	{
	public:
		void UpdateBackgroundSkin(int32_t Key, const struct FArchiveTomeSkinData& Data);
		void ShowUI();
		void ShowSlotSelector(const struct FArchiveNodeViewData& Data);
		void SetTitle(const class FText& Title);
		void SetTabsInputsEnabled(bool Enabled);
		void SetTabSelected(int32_t Key);
		void SetTabsData(TArray<struct FTabWidgetData> tabsData, int32_t SelectedKey);
		void SetTabEnabled(int32_t Key, bool Enabled);
		void SetSubtitleVisible(bool IsVisible);
		void SetSubtitle(const class FText& Subtitle);
		void SetReminderSlotsEnabled(bool Enabled);
		void SetRemainingTimeVisible(bool IsVisible);
		void SetRemainingTime(const class FString& RemainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState);
		void SetQuestNodeHoverEffect(EPlayerRole Role, bool IsHovered);
		void SetMenuState(EArchiveMenuState menuState);
		void SetInfoButtonVisible(bool IsVisible);
		void SetInfoButtonEnabled(bool IsEnabled);
		void SetEventLabel(const class FString& EventLabel);
		void SetControllerElementsEnabled(bool Enabled);
		void SetChallengeReminderVisibility(bool IsVisible);
		void SetChallengeReminderData(const struct FArchiveChallengeReminderViewData& Data, EPlayerRole Role, bool needsAnimation, const struct FVector2D& animationOriginalPosition);
		void Init();
		void HideUI();
		void GetArchiveTomeInterface();
		void GetArchiveRiftInterface();
		void GetArchiveCompendiumInterface();
		void CloseSlotSelector();
		void ClearChallengeReminderData(EPlayerRole Role);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.BasePopupViewData
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UBasePopupViewData : public UObject
	{
	public:
		EPopupPriority                                             Priority;                                                // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVTK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Message;                                                 // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.GenericPopupViewData
	 * Size -> 0x0188 (FullSize[0x01F0] - InheritedSize[0x0068])
	 */
	class UGenericPopupViewData : public UBasePopupViewData
	{
	public:
		unsigned char                                              UnknownData_CFFA[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPopupButtonViewData                                ProgressionData;                                         // 0x0070(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPopupButtonViewData                                RegressionData;                                          // 0x00F0(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPopupButtonViewData                                AlternativeData;                                         // 0x0170(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchivePassPurchasePopupViewData
	 * Size -> 0x0060 (FullSize[0x0250] - InheritedSize[0x01F0])
	 */
	class UArchivePassPurchasePopupViewData : public UGenericPopupViewData
	{
	public:
		class FText                                                AvailabilityDates;                                       // 0x01F0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              ImageTexture[0x30];                                      // 0x0208(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		ECurrencyType                                              CurrencyType;                                            // 0x0238(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JATQ[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Price;                                                   // 0x023C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiscountPercentage;                                      // 0x0240(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAffordable;                                            // 0x0244(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PE8A[0xB];                                   // 0x0245(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchivePassPurchasePopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchivePassPurchasePopupViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveQuestMapViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveQuestMapViewInterface : public UInterface
	{
	public:
		void UpdateQuestMapData(TArray<struct FArchiveNodeGraphViewData> nodeDataList, TArray<struct FArchiveMapPathViewData> pathDataList);
		void SetQuestMapData(TArray<struct FArchiveNodeGraphViewData> nodeDataList, TArray<struct FArchiveMapPathViewData> pathDataList, bool needsCascadeAppear);
		void SetLoadingSpinner(bool isLoading);
		void Reset();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveRiftViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveRiftViewInterface : public UInterface
	{
	public:
		void SetRiftFragmentTooltipViewData(const struct FCurrencyProgressionTooltipViewData& RiftFragmentTooltipViewData);
		void SetRewardTiersData(TArray<struct FArchiveRiftTierRewardsViewData> riftTiersData);
		void SetMatchmakingSoftlockState(bool isInMatchmakingSoftlock);
		void SetLoadingSpinner(bool isLoading);
		void SetData(const struct FArchivesRiftGenericViewData& Data);
		void PlayUnlockingAnimation(const struct FArchivesRiftUnlockSequenceData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveTierPurchasePopupViewData
	 * Size -> 0x0060 (FullSize[0x0250] - InheritedSize[0x01F0])
	 */
	class UArchiveTierPurchasePopupViewData : public UGenericPopupViewData
	{
	public:
		unsigned char                                              ImageTexture[0x30];                                      // 0x01F0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    MaxTiers;                                                // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    currentTier;                                             // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECurrencyType                                              CurrencyType;                                            // 0x0228(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCAY[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UnitPrice;                                               // 0x022C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiscountPercentage;                                      // 0x0230(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAffordable;                                            // 0x0234(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MG87[0x3];                                   // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentWalletAmount;                                     // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialQuantity;                                         // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FirstBonusTier;                                          // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastBonusTier;                                           // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBonusTier;                                             // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWSI[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveTierPurchasePopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveTierPurchasePopupViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ArchiveTomeViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchiveTomeViewInterface : public UInterface
	{
	public:
		void UpdateBackgroundSkin(int32_t Key, class UMaterialInterface* skinMaterail);
		void ToggleEditor(bool IsEnabled);
		void SetSideNavTabsVisibility(int32_t Key, bool IsVisible);
		void SetSideNavTabsEnabled(int32_t Key, bool IsEnabled);
		void SetSideNavTabsData(TArray<struct FTabWidgetData> tabsData, int32_t SelectedKey);
		void SetNotificationVisibility(int32_t Key, bool HasNotification);
		void SetMenuState(EArchiveTomeMenuState menuState);
		EArchiveTomeMenuState GetMenuState();
		void GetArchiveQuestMapInterface();
		void GetArchiveLevelProgressionInterface();
		void GetArchiveJournalInterface();
		struct FEditorInterfaces GetArchiveEditorInterface();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.BasePopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBasePopupViewInterface : public UInterface
	{
	public:
		void Leave();
		void Enter(class UBasePopupViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ChallengeTrackerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UChallengeTrackerViewInterface : public UInterface
	{
	public:
		void UpdateWidgetProgression(const struct FArchiveNodeObjectiveViewData& ProgressionData);
		void OpenWidget();
		void InitWidgetData(const struct FChallengeTrackerViewData& ViewData);
		void CloseWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.CoreBaseViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreBaseViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.CreditsViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCreditsViewInterface : public UInterface
	{
	public:
		void SetText(const class FText& Text);
		void ScrollToName(const class FString& Name, float Delay);
		void ScrollToEnd();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.DailyRitualsPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDailyRitualsPopupViewInterface : public UInterface
	{
	public:
		void StartAnim();
		void SetDailyRitualsData(TArray<struct FDailyRitualViewData> dailyRitualsData, bool isAfterTrial);
		void SetCanRemoveDailyRitual(bool canRemoveDailyRitual);
		void SetAllDailyRitualTilesVisible();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.DisplayStandViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDisplayStandViewInterface : public UInterface
	{
	public:
		void SetDragZone(const struct FDisplayStandViewData& layoutData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.EndGameCollapseBarViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEndGameCollapseBarViewInterface : public UInterface
	{
	public:
		void StartEndGameScenario();
		void SetEndGameScenarioProgressionValue(float Amount);
		void SetEndGameScenarioProgressionMode(bool isSlowMode);
		void InitEndGameScenario();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.EquippedItemViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEquippedItemViewInterface : public UInterface
	{
	public:
		void SetFakeItem(bool isHoldingFakeItem);
		void SetData(const struct FItemBundleViewData& itemBundleData);
		void SetActiveState(bool IsActive);
		void ClearData(bool fullClear);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.EquippedPowerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEquippedPowerViewInterface : public UInterface
	{
	public:
		void SetData(const struct FPowerBundleViewData& powerBundleData);
		void SetCarryingMode(bool IsCarrying);
		void SetActiveState(bool IsActive);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.EventEntryPopupViewData
	 * Size -> 0x0080 (FullSize[0x0270] - InheritedSize[0x01F0])
	 */
	class UEventEntryPopupViewData : public UGenericPopupViewData
	{
	public:
		class FText                                                AvailabilityDates;                                       // 0x01F0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                EventFrameLabel;                                         // 0x0208(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ImageBannerText;                                         // 0x0220(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              ImageTexture[0x30];                                      // 0x0238(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ShouldShowEventTomeButton;                               // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5960[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.EventEntryPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEventEntryPopupViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ExampleViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UExampleViewInterface : public UInterface
	{
	public:
		void SetExampleText(const class FString& Text);
		void SetExampleProgressRatio(float Ratio);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ExternalEffectsViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UExternalEffectsViewInterface : public UInterface
	{
	public:
		void ShowExternalPerk(const struct FPerkViewData& PerkViewData);
		void ShowExternalAddon(const struct FAddonViewData& AddonViewData);
		void HideExternalPerk(const class FName& ItemId);
		void HideExternalAddon(const class FName& ItemId);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.FearMarketPopupViewData
	 * Size -> 0x0020 (FullSize[0x0210] - InheritedSize[0x01F0])
	 */
	class UFearMarketPopupViewData : public UGenericPopupViewData
	{
	public:
		class UMenuPerkViewData*                                   ItemData;                                                // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Cost;                                                    // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodpointConversion;                                    // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPurchased;                                             // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlreadyOwned;                                            // 0x0201(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XCA[0x2];                                   // 0x0202(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AvailableTokens;                                         // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9G7M[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.FearMarketPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFearMarketPopupViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.GameManualViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGameManualViewInterface : public UInterface
	{
	public:
		void SetCurrentManualMenuState(EGameManualMenuState menuState);
		void SetCategoryData(const struct FHelpCategoryData& categoryData, TArray<struct FHelpTopicData> topicsData);
		EGameManualMenuState GetCurrentManualMenuState();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.GenericPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGenericPopupViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.GenericTextInputPopupViewData
	 * Size -> 0x00E0 (FullSize[0x02D0] - InheritedSize[0x01F0])
	 */
	class UGenericTextInputPopupViewData : public UGenericPopupViewData
	{
	public:
		unsigned char                                              UnknownData_039V[0xE0];                                  // 0x01F0(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.GenericTextInputPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGenericTextInputPopupViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.HookCountViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHookCountViewInterface : public UInterface
	{
	public:
		void SetHookCountVisibility(bool visible);
		void SetData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount);
		void InitWidget();
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.HudAlertViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHudAlertViewInterface : public UInterface
	{
	public:
		void ShowStatusEffectAlert(const struct FStatusEffectAlertViewData& Data);
		void ShowScoreAlert(const struct FScoreAlertViewData& Data);
		void SetScoreEventsVisibility(bool visible);
		void FadeOut(float Delay);
		void FadeIn();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHudDirectionalMiniGameViewInterface : public UInterface
	{
	public:
		void UpdateResult(int32_t Index, bool IsSuccessful);
		void UpdateFinalResult(EDirectionalMinigameResult finalResult);
		void Show(TArray<EDirectionalInputKey> directions);
		void Init(int32_t maxItems);
		void Hide();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.HudObjectivesViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHudObjectivesViewInterface : public UInterface
	{
	public:
		void UpdateEventPendingProgress(const struct FHudEventProgressionViewData& HudEventProgressionViewData);
		void UpdateEventBankedProgress(const struct FHudEventProgressionViewData& HudEventProgressionViewData);
		void SetHudObjectiveData(const struct FHudObjectivesViewData& hudObjectiveViewData);
		void SetHookCountVisibility(bool visible);
		void SetHookCountData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount);
		void InitWidget();
		void InitEventProgression(const struct FHudEventProgressionViewData& HudEventProgressionViewData);
		void EnableEventProgression(bool IsEnabled);
		void ClearHookCountData();
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.InteractionProgressViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInteractionProgressViewInterface : public UInterface
	{
	public:
		void UpdateInputProgress(float Progress, float itemCharge);
		void SetInputProgressPrompt(const struct FInteractionProgressViewData& Data);
		void PlayHemorrhageAnimation();
		void HideInputProgressPrompt();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.InteractionPromptsContainerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInteractionPromptsContainerViewInterface : public UInterface
	{
	public:
		void RemovePrompt(const class FName& ID);
		void RemoveAllPrompts();
		void AddPrompt(const struct FInteractionPromptViewData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ItemBundleViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UItemBundleViewInterface : public UInterface
	{
	public:
		void SetData(const struct FItemBundleViewData& ItemBundleViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ItemInteractionViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UItemInteractionViewInterface : public UInterface
	{
	public:
		void SetData(const struct FItemBundleViewData& itemBundleData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ItemViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UItemViewInterface : public UInterface
	{
	public:
		void SetData(const struct FItemViewData& ItemViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.LeaningArrowsViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULeaningArrowsViewInterface : public UInterface
	{
	public:
		void SetData(ELeanState leanState);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.LightSensitivityViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULightSensitivityViewInterface : public UInterface
	{
	public:
		void StartFadeOut();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.LoadoutMenuPopupViewData
	 * Size -> 0x0110 (FullSize[0x0300] - InheritedSize[0x01F0])
	 */
	class ULoadoutMenuPopupViewData : public UGenericPopupViewData
	{
	public:
		unsigned char                                              LoadoutIcon[0x30];                                       // 0x01F0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                ItemId;                                                  // 0x0220(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y1F2[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0230(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ParentDisplayName;                                       // 0x0248(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ParentTypeDisplayName;                                   // 0x0260(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       IsParentAvailable;                                       // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V00[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0280(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EInventoryItemType                                         ItemType;                                                // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectType                                          StatusEffectType;                                        // 0x029A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VS5G[0x1];                                   // 0x029B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Subtitle;                                                // 0x02A0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemAvailability                                          Availability;                                            // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTeachablePerk;                                         // 0x02BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSlasherPerk;                                           // 0x02BE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSlasher;                                               // 0x02BF(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocked;                                                // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsKillSwitch;                                            // 0x02C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FV0P[0x6];                                   // 0x02C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                EventName;                                               // 0x02C8(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FString                                              EventId;                                                 // 0x02E0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPastEvent;                                             // 0x02F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2027[0xF];                                   // 0x02F1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.LoadoutMenuPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULoadoutMenuPopupViewInterface : public UInterface
	{
	public:
		void UpdatePresetData(TArray<int32_t> presetData, int32_t selectedPreset);
		void SetSelectedInventoryItem(TArray<int32_t> selectedIndex, bool isUnequip);
		void SetSelectableCharacters(TArray<struct FTabWidgetData> selectableCharacters, const struct FTabWidgetData& selectedCharacterData, int32_t botIndex);
		void SetLoadoutMenuSlotData(TArray<class ULoadoutMenuPopupViewData*> loadoutMenuSlotButtonData);
		void SetLoadoutMenuInventoryData(TArray<class ULoadoutMenuPopupViewData*> loadoutMenuSlotButtonData, ELoadoutSlot slotSelected, bool isNextSlot);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MatchResultViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMatchResultViewInterface : public UInterface
	{
	public:
		void UpdateWidget(const struct FMatchResultViewData& Data);
		void PlayAnimationSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuLoadoutPartViewData
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UMenuLoadoutPartViewData : public UObject
	{
	public:
		class FName                                                ItemId;                                                  // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7BX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IconTexture[0x30];                                       // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EItemRarity                                                Rarity;                                                  // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68ZH[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackCount;                                              // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ParentDisplayName;                                       // 0x0078(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       IsLocked;                                                // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemAvailability                                          Availability;                                            // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsKillSwitchEnabled;                                     // 0x0092(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9XN[0x5];                                   // 0x0093(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuAddonViewData
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UMenuAddonViewData : public UMenuLoadoutPartViewData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuItemViewData
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UMenuItemViewData : public UMenuLoadoutPartViewData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuOfferingViewData
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UMenuOfferingViewData : public UMenuLoadoutPartViewData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuPerkViewData
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UMenuPerkViewData : public UMenuLoadoutPartViewData
	{
	public:
		int32_t                                                    Level;                                                   // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6B6[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x00A0(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x00B8(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                EventName;                                               // 0x00D0(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FString                                              EventId;                                                 // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuPowerViewData
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UMenuPowerViewData : public UMenuLoadoutPartViewData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.OfferingInteractionViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOfferingInteractionViewInterface : public UInterface
	{
	public:
		void SetData(const struct FOfferingViewData& OfferingData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.OfferingViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOfferingViewInterface : public UInterface
	{
	public:
		void SetData(const struct FOfferingViewData& OfferingViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.OnboardingMenuViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOnboardingMenuViewInterface : public UInterface
	{
	public:
		void SetUIEnabled(bool Enabled);
		void SetQuitGameButtonVisible(bool visible);
		void SetOnboardingMenuState(EOnboardingMenuState menuState);
		void SetFirstTimeUserExperience(bool ftue);
		void SetChangeAccountInputSwitcherVisible(bool visible);
		void SetChangeAccountInputSwitcherPlayerNickname(const class FString& playerNickname);
		void SetBackButtonVisible(bool visible);
		void GetOnboardingTutorialInterface();
		void GetGameManualInterface();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.OnboardingTutorialViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOnboardingTutorialViewInterface : public UInterface
	{
	public:
		void UpdateProgress(TArray<struct FOnboardingStepViewData> before, TArray<struct FOnboardingStepViewData> after, TArray<struct FRewardWrapperViewData> Rewards);
		void StopLoadingSpinner();
		void SetUIEnabled(bool Enabled);
		void SetTutorialProgressionFeedbacks(const class FString& completedStepId, bool isOnboardingEnabled);
		void SetProgress(TArray<struct FOnboardingStepViewData> Progress);
		void SetIsKillSwitch(bool IsKillSwitch);
		void SetCanShowGoToMainMenuTutorialButton(bool canShowGoToMainMenuTutorialButton);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PerksContainerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPerksContainerViewInterface : public UInterface
	{
	public:
		void GetPerkInterface(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PerkViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPerkViewInterface : public UInterface
	{
	public:
		void UpdatePerkCooldown(float cooldownValue, bool IsRechargeable, bool IsRechargeableActive);
		void SetData(const struct FPerkViewData& PerkViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PingStatusViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPingStatusViewInterface : public UInterface
	{
	public:
		void SetLocalPingStatus(EConnectionQuality localPing);
		void SetLocalPacketLossStatus(EConnectionQuality localPacketLoss);
		void SetKillerConnectionQualityStatus(EConnectionQuality killerConnectionQuality);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PlayerProfileViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerProfileViewInterface : public UInterface
	{
	public:
		void UpdateWallet(ECurrencyType Type, int32_t newBalance, int32_t previousBalance);
		void ShowUI();
		void SetWallet(TArray<struct FCurrencyLabelViewData> walletData);
		void SetPlayerName(const class FText& playerNameText);
		void HideWallet();
		void HideUI();
		void HidePlayerRank();
		void HidePlayerName();
		void HidePlayerLevel();
		void FullUpdateCurrency(const struct FCurrencyLabelViewData& ViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PlayerStatusesContainerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerStatusesContainerViewInterface : public UInterface
	{
	public:
		void GetPlayerStatusInterface(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.KillerStatusData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UKillerStatusData : public UObject
	{
	public:
		bool IsEqual(class UKillerStatusData* Other);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.DoctorStatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDoctorStatusData : public UKillerStatusData
	{
	public:
		EAfflictionLevel                                           AfflictionLevel;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZMJ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ExecutionerStatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UExecutionerStatusData : public UKillerStatusData
	{
	public:
		float                                                      AgonyProgress;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5I2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TwinsStatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UTwinsStatusData : public UKillerStatusData
	{
	public:
		bool                                                       TwinsActive;                                             // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HG66[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.GhostfaceStatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UGhostfaceStatusData : public UKillerStatusData
	{
	public:
		bool                                                       IsExposed;                                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WT6[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StalkingProgress;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.NightmareStatusData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UNightmareStatusData : public UKillerStatusData
	{
	public:
		ESleepingUIState                                           SleepingState;                                           // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05X6[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SleepingProgress;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SleepProtectionRemainingDuration;                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PW5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PigStatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPigStatusData : public UKillerStatusData
	{
	public:
		EReverseBearTrapUIState                                    ReverseBearTrapState;                                    // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16X6[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimerProgress;                                           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PlagueStatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPlagueStatusData : public UKillerStatusData
	{
	public:
		ESicknessLevel                                             SicknessLevel;                                           // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGBW[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SicknessProgress;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TricksterStatusData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UTricksterStatusData : public UKillerStatusData
	{
	public:
		float                                                      CurrentLacerationLevel;                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumLacerationLevel;                                  // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDangerousLacerationLevel;                              // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WasRecentlyDamagedByLaceration;                          // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62CC[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.K24StatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UK24StatusData : public UKillerStatusData
	{
	public:
		bool                                                       IsContaminated;                                          // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Q3Z[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.K25StatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UK25StatusData : public UKillerStatusData
	{
	public:
		float                                                      ChainHuntProgressPercentage;                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHoldingLamentConfiguration;                            // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSolvingLamentConfiguration;                            // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SR1K[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.K26StatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UK26StatusData : public UKillerStatusData
	{
	public:
		bool                                                       IsCrowAttached;                                          // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKOD[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TheOnryoStatusData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UTheOnryoStatusData : public UKillerStatusData
	{
	public:
		bool                                                       IsCondemnedActive;                                       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZJG[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CondemnedProgress;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFullCondemned;                                         // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHoldingTape;                                           // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IVC[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.K28StatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UK28StatusData : public UKillerStatusData
	{
	public:
		float                                                      DayNightCycleProgressPercentage;                         // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDaytime;                                               // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTransitioningToNighttime;                              // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNighttime;                                             // 0x0036(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTransitioningToDaytime;                                // 0x0037(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.K29StatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UK29StatusData : public UKillerStatusData
	{
	public:
		float                                                      InfectionPercentage;                                     // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfected;                                              // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfectionActive;                                       // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfectionCritical;                                     // 0x0036(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UM2P[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.K30StatusData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UK30StatusData : public UKillerStatusData
	{
	public:
		float                                                      HuntRemainingPercentage;                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHuntingSurvivor;                                       // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2X9C[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.K31StatusData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UK31StatusData : public UKillerStatusData
	{
	public:
		float                                                      EffectProgressPercentage;                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAffectedByEffect;                                      // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFullyAffectedByEffect;                                 // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsClawTrapped;                                           // 0x0036(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsClawTrapBroadcasting;                                  // 0x0037(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClawTrapBatteryPercentage;                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMUN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PlayerStatusViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerStatusViewInterface : public UInterface
	{
	public:
		void UpdateSurvivorSpecificPingIcon(EConnectionQuality connectionQuality);
		void UpdateSurvivorActivityProgress(float Progress);
		void TriggerAfflictionHit();
		void ShowSurvivorActivity(bool ShouldDisplayProgress);
		void SetTimerProgress(float value, bool IsDeepWound);
		void SetPlayerNameVisibility(bool visible);
		void SetKiller(const struct FGameplayTag& killerTag);
		void SetData(const struct FPlayerStatusViewData& Data);
		void SetCampProgress(float value, bool IsLocalPlayerAKiller);
		void PlayTimerAnimation();
		void PlayHookEscapeFailedAnimation();
		void HideSurvivorActivity();
		void EnableChasesMode(bool isChased);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PowerBundleViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPowerBundleViewInterface : public UInterface
	{
	public:
		void SetData(const struct FPowerBundleViewData& PowerBundleViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PowerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPowerViewInterface : public UInterface
	{
	public:
		void SetData(const struct FPowerViewData& PowerViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UScreenIndicatorsContainerViewInterface : public UInterface
	{
	public:
		void ShowDirectionIndicator(const struct FScreenIndicatorViewData& Data);
		void RemoveDirectionIndicator(const class FString& ID);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.SkillCheckViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USkillCheckViewInterface : public UInterface
	{
	public:
		void UpdateProgress(float value);
		void UpdatePositionOffset(int32_t X, int32_t Y);
		void ShowSkillCheckSuccess(bool IsBonus);
		void ShowSkillCheckFail();
		void ShowSkillCheck(const struct FSkillCheckViewData& skillCheckData);
		void HideSkillCheck();
		void ApplyScaleFactor(float Scale);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.SpectateBarViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USpectateBarViewInterface : public UInterface
	{
	public:
		void SetSpectatedName(const class FString& playerName);
		void SetSpectateBarVisibility(bool IsVisible);
		void SetArrowsVisibility(bool IsVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.StartSequenceViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStartSequenceViewInterface : public UInterface
	{
	public:
		void ShowStartSequence(const struct FStartSequenceViewData& Data);
		void HideStartSequence();
		bool GetIsStartSequenceVisible();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.StatusEffectViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusEffectViewInterface : public UInterface
	{
	public:
		void ShowActiveStatusEffect(const struct FStatusEffectViewData& statusEffectData);
		void RemoveExistingStatusEffect(const class FName& statusEffectID);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.SubtitlesViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USubtitlesViewInterface : public UInterface
	{
	public:
		void ShowSubtitle(const class FText& subtitleText);
		void SetSubtitlesSize(ESubtitlesSize Size);
		void SetSubtitlesPosition(ESubtitlesPosition position);
		void SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity Opacity);
		void SetConstrainAspectRatioChanged(bool isConstrained, float AspectRatio);
		void HideSubtitles();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TemplateViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTemplateViewInterface : public UInterface
	{
	public:
		void TemplateExampleFunction(const struct FTemplateViewData& templateData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TestBuildFlagViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTestBuildFlagViewInterface : public UInterface
	{
	public:
		void UpdateWidget(ETestBuildType testBuildType, ETestBuildFlagPosition testBuildFlagPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TutorialHighlightViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTutorialHighlightViewInterface : public UInterface
	{
	public:
		void SetTutorialHighlight(bool Show, EHudComponent componentId);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TutorialMysteryNoteViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTutorialMysteryNoteViewInterface : public UInterface
	{
	public:
		void ShowMysteryNote(const struct FNotifTutorialPopupViewData& notifData);
		void HideMysteryNote();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TutorialObjectivesViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTutorialObjectivesViewInterface : public UInterface
	{
	public:
		void RemoveTutorialObjective(const class FName& ID);
		void RemoveAllTutorialObjectives();
		void CompleteTutorialObjective(const class FName& ID, bool removeAfterCompletion);
		void AddTutorialObjective(const class FName& ID, const struct FTutorialObjectivesViewData& InteractionPromptViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TutorialPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTutorialPopupViewInterface : public UInterface
	{
	public:
		void ShowNotifTutorialPopup(const struct FNotifTutorialPopupViewData& notifTutoData);
		void HideTutorialPopup(bool playSoundEffect);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.UIUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUIUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ConvertArchiveCurrentAndMaxProgressionInPercentage(int32_t* outCurrentProgression, int32_t* outMaxProgression);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.UnlockPersonalPerksPopupViewData
	 * Size -> 0x0010 (FullSize[0x0200] - InheritedSize[0x01F0])
	 */
	class UUnlockPersonalPerksPopupViewData : public UGenericPopupViewData
	{
	public:
		TArray<class UMenuPerkViewData*>                           PerksData;                                               // 0x01F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.UnlockPersonalPerksPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUnlockPersonalPerksPopupViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.WatermarkViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UWatermarkViewInterface : public UInterface
	{
	public:
		void SetSteamValuesText(const class FString& SteamName, const class FString& SteamId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
