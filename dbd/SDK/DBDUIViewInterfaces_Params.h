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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DBDUIViewInterfaces.AddonViewInterface.SetData
	 */
	struct UAddonViewInterface_SetData_Params
	{
	public:
		struct FAddonViewData                                      BaseLoadoutPartViewData;                                 // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.AddonViewInterface.ClearData
	 */
	struct UAddonViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveCompendiumViewInterface.SetPastTomesViewData
	 */
	struct UArchiveCompendiumViewInterface_SetPastTomesViewData_Params
	{
	public:
		TArray<struct FCompendiumButtonData>                       pastStoryButtonData;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveEditorViewInterface.InitEditor
	 */
	struct UArchiveEditorViewInterface_InitEditor_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveEditorViewInterface.DisplayEditorSaving
	 */
	struct UArchiveEditorViewInterface_DisplayEditorSaving_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.UpdateContent
	 */
	struct UArchiveImageViewerViewInterface_UpdateContent_Params
	{
	public:
		struct FArchivesVignetteEntryViewData                      Data;                                                    // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverPlaying
	 */
	struct UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Params
	{
	public:
		bool                                                       voiceOverPlaying;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverAutoplay
	 */
	struct UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Params
	{
	public:
		bool                                                       voiceOverAutoplay;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetTextVisibility
	 */
	struct UArchiveImageViewerViewInterface_SetTextVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverPlaying
	 */
	struct UArchiveJournalViewInterface_SetVoiceOverPlaying_Params
	{
	public:
		bool                                                       voiceOverPlaying;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverAutoplay
	 */
	struct UArchiveJournalViewInterface_SetVoiceOverAutoplay_Params
	{
	public:
		bool                                                       voiceOverAutoplay;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteList
	 */
	struct UArchiveJournalViewInterface_SetVignetteList_Params
	{
	public:
		TArray<struct FArchivesVignetteViewData>                   vignetteDataList;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteInputsEnabled
	 */
	struct UArchiveJournalViewInterface_SetVignetteInputsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteData
	 */
	struct UArchiveJournalViewInterface_SetVignetteData_Params
	{
	public:
		struct FArchivesVignetteViewData                           vignetteViewData;                                        // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetEntryData
	 */
	struct UArchiveJournalViewInterface_SetEntryData_Params
	{
	public:
		struct FArchivesVignetteEntryViewData                      entryViewData;                                           // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetCinematicButtonsEnabled
	 */
	struct UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetArrowButtonEnabled
	 */
	struct UArchiveJournalViewInterface_SetArrowButtonEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverPlayed
	 */
	struct UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverAutoplay
	 */
	struct UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Params
	{
	public:
		bool                                                       autoplay;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.UpdateLevelStatus
	 */
	struct UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EArchivesStoryLevelStatus                                  Status;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeRewardsData
	 */
	struct UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Params
	{
	public:
		TArray<struct FRewardWrapperViewData>                      RewardsData;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       areLocked;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeLevelsData
	 */
	struct UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Params
	{
	public:
		TArray<class UArchiveStoryLevelViewData*>                  levelsData;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    selectedLevel;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetRewardsContainerVisibility
	 */
	struct UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorVisibility
	 */
	struct UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorEnabled
	 */
	struct UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetActiveLevel
	 */
	struct UArchiveLevelProgressionViewInterface_SetActiveLevel_Params
	{
	public:
		int32_t                                                    levelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       performAction;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.PlayRewardsAnimation
	 */
	struct UArchiveLevelProgressionViewInterface_PlayRewardsAnimation_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.GoToNextLevel
	 */
	struct UArchiveLevelProgressionViewInterface_GoToNextLevel_Params
	{
	public:
		int32_t                                                    levelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.UpdateBackgroundSkin
	 */
	struct UArchiveMenuViewInterface_UpdateBackgroundSkin_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DV77[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FArchiveTomeSkinData                                Data;                                                    // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowUI
	 */
	struct UArchiveMenuViewInterface_ShowUI_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowSlotSelector
	 */
	struct UArchiveMenuViewInterface_ShowSlotSelector_Params
	{
	public:
		struct FArchiveNodeViewData                                Data;                                                    // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTitle
	 */
	struct UArchiveMenuViewInterface_SetTitle_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsInputsEnabled
	 */
	struct UArchiveMenuViewInterface_SetTabsInputsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabSelected
	 */
	struct UArchiveMenuViewInterface_SetTabSelected_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsData
	 */
	struct UArchiveMenuViewInterface_SetTabsData_Params
	{
	public:
		TArray<struct FTabWidgetData>                              tabsData;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    SelectedKey;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabEnabled
	 */
	struct UArchiveMenuViewInterface_SetTabEnabled_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitleVisible
	 */
	struct UArchiveMenuViewInterface_SetSubtitleVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitle
	 */
	struct UArchiveMenuViewInterface_SetSubtitle_Params
	{
	public:
		class FText                                                Subtitle;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetReminderSlotsEnabled
	 */
	struct UArchiveMenuViewInterface_SetReminderSlotsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTimeVisible
	 */
	struct UArchiveMenuViewInterface_SetRemainingTimeVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTime
	 */
	struct UArchiveMenuViewInterface_SetRemainingTime_Params
	{
	public:
		class FString                                              RemainingTime;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isMoreThanWarningThreshold;                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EArchiveMenuState                                          menuState;                                               // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetQuestNodeHoverEffect
	 */
	struct UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Params
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsHovered;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetMenuState
	 */
	struct UArchiveMenuViewInterface_SetMenuState_Params
	{
	public:
		EArchiveMenuState                                          menuState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonVisible
	 */
	struct UArchiveMenuViewInterface_SetInfoButtonVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonEnabled
	 */
	struct UArchiveMenuViewInterface_SetInfoButtonEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetEventLabel
	 */
	struct UArchiveMenuViewInterface_SetEventLabel_Params
	{
	public:
		class FString                                              EventLabel;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetControllerElementsEnabled
	 */
	struct UArchiveMenuViewInterface_SetControllerElementsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderVisibility
	 */
	struct UArchiveMenuViewInterface_SetChallengeReminderVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderData
	 */
	struct UArchiveMenuViewInterface_SetChallengeReminderData_Params
	{
	public:
		struct FArchiveChallengeReminderViewData                   Data;                                                    // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EPlayerRole                                                Role;                                                    // 0x00D0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       needsAnimation;                                          // 0x00D1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MUDE[0x2];                                   // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           animationOriginalPosition;                               // 0x00D4(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.Init
	 */
	struct UArchiveMenuViewInterface_Init_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.HideUI
	 */
	struct UArchiveMenuViewInterface_HideUI_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveTomeInterface
	 */
	struct UArchiveMenuViewInterface_GetArchiveTomeInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveRiftInterface
	 */
	struct UArchiveMenuViewInterface_GetArchiveRiftInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveCompendiumInterface
	 */
	struct UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.CloseSlotSelector
	 */
	struct UArchiveMenuViewInterface_CloseSlotSelector_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ClearChallengeReminderData
	 */
	struct UArchiveMenuViewInterface_ClearChallengeReminderData_Params
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.UpdateQuestMapData
	 */
	struct UArchiveQuestMapViewInterface_UpdateQuestMapData_Params
	{
	public:
		TArray<struct FArchiveNodeGraphViewData>                   nodeDataList;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FArchiveMapPathViewData>                     pathDataList;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetQuestMapData
	 */
	struct UArchiveQuestMapViewInterface_SetQuestMapData_Params
	{
	public:
		TArray<struct FArchiveNodeGraphViewData>                   nodeDataList;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FArchiveMapPathViewData>                     pathDataList;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       needsCascadeAppear;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetLoadingSpinner
	 */
	struct UArchiveQuestMapViewInterface_SetLoadingSpinner_Params
	{
	public:
		bool                                                       isLoading;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.Reset
	 */
	struct UArchiveQuestMapViewInterface_Reset_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRiftFragmentTooltipViewData
	 */
	struct UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Params
	{
	public:
		struct FCurrencyProgressionTooltipViewData                 RiftFragmentTooltipViewData;                             // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRewardTiersData
	 */
	struct UArchiveRiftViewInterface_SetRewardTiersData_Params
	{
	public:
		TArray<struct FArchiveRiftTierRewardsViewData>             riftTiersData;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetMatchmakingSoftlockState
	 */
	struct UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Params
	{
	public:
		bool                                                       isInMatchmakingSoftlock;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetLoadingSpinner
	 */
	struct UArchiveRiftViewInterface_SetLoadingSpinner_Params
	{
	public:
		bool                                                       isLoading;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetData
	 */
	struct UArchiveRiftViewInterface_SetData_Params
	{
	public:
		struct FArchivesRiftGenericViewData                        Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveRiftViewInterface.PlayUnlockingAnimation
	 */
	struct UArchiveRiftViewInterface_PlayUnlockingAnimation_Params
	{
	public:
		struct FArchivesRiftUnlockSequenceData                     Data;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.UpdateBackgroundSkin
	 */
	struct UArchiveTomeViewInterface_UpdateBackgroundSkin_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YMB0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  skinMaterail;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.ToggleEditor
	 */
	struct UArchiveTomeViewInterface_ToggleEditor_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsVisibility
	 */
	struct UArchiveTomeViewInterface_SetSideNavTabsVisibility_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsVisible;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsEnabled
	 */
	struct UArchiveTomeViewInterface_SetSideNavTabsEnabled_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsEnabled;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsData
	 */
	struct UArchiveTomeViewInterface_SetSideNavTabsData_Params
	{
	public:
		TArray<struct FTabWidgetData>                              tabsData;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    SelectedKey;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetNotificationVisibility
	 */
	struct UArchiveTomeViewInterface_SetNotificationVisibility_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HasNotification;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetMenuState
	 */
	struct UArchiveTomeViewInterface_SetMenuState_Params
	{
	public:
		EArchiveTomeMenuState                                      menuState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetMenuState
	 */
	struct UArchiveTomeViewInterface_GetMenuState_Params
	{
	public:
		EArchiveTomeMenuState                                      ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveQuestMapInterface
	 */
	struct UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveLevelProgressionInterface
	 */
	struct UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveJournalInterface
	 */
	struct UArchiveTomeViewInterface_GetArchiveJournalInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveEditorInterface
	 */
	struct UArchiveTomeViewInterface_GetArchiveEditorInterface_Params
	{
	public:
		struct FEditorInterfaces                                   ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.BasePopupViewInterface.Leave
	 */
	struct UBasePopupViewInterface_Leave_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.BasePopupViewInterface.Enter
	 */
	struct UBasePopupViewInterface_Enter_Params
	{
	public:
		class UBasePopupViewData*                                  Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.UpdateWidgetProgression
	 */
	struct UChallengeTrackerViewInterface_UpdateWidgetProgression_Params
	{
	public:
		struct FArchiveNodeObjectiveViewData                       ProgressionData;                                         // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.OpenWidget
	 */
	struct UChallengeTrackerViewInterface_OpenWidget_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.InitWidgetData
	 */
	struct UChallengeTrackerViewInterface_InitWidgetData_Params
	{
	public:
		struct FChallengeTrackerViewData                           ViewData;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.CloseWidget
	 */
	struct UChallengeTrackerViewInterface_CloseWidget_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.CreditsViewInterface.SetText
	 */
	struct UCreditsViewInterface_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToName
	 */
	struct UCreditsViewInterface_ScrollToName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToEnd
	 */
	struct UCreditsViewInterface_ScrollToEnd_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.StartAnim
	 */
	struct UDailyRitualsPopupViewInterface_StartAnim_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetDailyRitualsData
	 */
	struct UDailyRitualsPopupViewInterface_SetDailyRitualsData_Params
	{
	public:
		TArray<struct FDailyRitualViewData>                        dailyRitualsData;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       isAfterTrial;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetCanRemoveDailyRitual
	 */
	struct UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Params
	{
	public:
		bool                                                       canRemoveDailyRitual;                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetAllDailyRitualTilesVisible
	 */
	struct UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.DisplayStandViewInterface.SetDragZone
	 */
	struct UDisplayStandViewInterface_SetDragZone_Params
	{
	public:
		struct FDisplayStandViewData                               layoutData;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario
	 */
	struct UEndGameCollapseBarViewInterface_StartEndGameScenario_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue
	 */
	struct UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode
	 */
	struct UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Params
	{
	public:
		bool                                                       isSlowMode;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario
	 */
	struct UEndGameCollapseBarViewInterface_InitEndGameScenario_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.EquippedItemViewInterface.SetFakeItem
	 */
	struct UEquippedItemViewInterface_SetFakeItem_Params
	{
	public:
		bool                                                       isHoldingFakeItem;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QIKR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData
	 */
	struct UEquippedItemViewInterface_SetData_Params
	{
	public:
		struct FItemBundleViewData                                 itemBundleData;                                          // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState
	 */
	struct UEquippedItemViewInterface_SetActiveState_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData
	 */
	struct UEquippedItemViewInterface_ClearData_Params
	{
	public:
		bool                                                       fullClear;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData
	 */
	struct UEquippedPowerViewInterface_SetData_Params
	{
	public:
		struct FPowerBundleViewData                                powerBundleData;                                         // 0x0000(0x0158)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode
	 */
	struct UEquippedPowerViewInterface_SetCarryingMode_Params
	{
	public:
		bool                                                       IsCarrying;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState
	 */
	struct UEquippedPowerViewInterface_SetActiveState_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData
	 */
	struct UEquippedPowerViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText
	 */
	struct UExampleViewInterface_SetExampleText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio
	 */
	struct UExampleViewInterface_SetExampleProgressRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk
	 */
	struct UExternalEffectsViewInterface_ShowExternalPerk_Params
	{
	public:
		struct FPerkViewData                                       PerkViewData;                                            // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon
	 */
	struct UExternalEffectsViewInterface_ShowExternalAddon_Params
	{
	public:
		struct FAddonViewData                                      AddonViewData;                                           // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalPerk
	 */
	struct UExternalEffectsViewInterface_HideExternalPerk_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalAddon
	 */
	struct UExternalEffectsViewInterface_HideExternalAddon_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.GameManualViewInterface.SetCurrentManualMenuState
	 */
	struct UGameManualViewInterface_SetCurrentManualMenuState_Params
	{
	public:
		EGameManualMenuState                                       menuState;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.GameManualViewInterface.SetCategoryData
	 */
	struct UGameManualViewInterface_SetCategoryData_Params
	{
	public:
		struct FHelpCategoryData                                   categoryData;                                            // 0x0000(0x0050)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		TArray<struct FHelpTopicData>                              topicsData;                                              // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.GameManualViewInterface.GetCurrentManualMenuState
	 */
	struct UGameManualViewInterface_GetCurrentManualMenuState_Params
	{
	public:
		EGameManualMenuState                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HookCountViewInterface.SetHookCountVisibility
	 */
	struct UHookCountViewInterface_SetHookCountVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HookCountViewInterface.SetData
	 */
	struct UHookCountViewInterface_SetData_Params
	{
	public:
		int32_t                                                    currentHookCount;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxHookCount;                                            // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    initialMaxHookCount;                                     // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget
	 */
	struct UHookCountViewInterface_InitWidget_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HookCountViewInterface.ClearData
	 */
	struct UHookCountViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert
	 */
	struct UHudAlertViewInterface_ShowStatusEffectAlert_Params
	{
	public:
		struct FStatusEffectAlertViewData                          Data;                                                    // 0x0000(0x01B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert
	 */
	struct UHudAlertViewInterface_ShowScoreAlert_Params
	{
	public:
		struct FScoreAlertViewData                                 Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.SetScoreEventsVisibility
	 */
	struct UHudAlertViewInterface_SetScoreEventsVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut
	 */
	struct UHudAlertViewInterface_FadeOut_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn
	 */
	struct UHudAlertViewInterface_FadeIn_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateResult
	 */
	struct UHudDirectionalMiniGameViewInterface_UpdateResult_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsSuccessful;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateFinalResult
	 */
	struct UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Params
	{
	public:
		EDirectionalMinigameResult                                 finalResult;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Show
	 */
	struct UHudDirectionalMiniGameViewInterface_Show_Params
	{
	public:
		TArray<EDirectionalInputKey>                               directions;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Init
	 */
	struct UHudDirectionalMiniGameViewInterface_Init_Params
	{
	public:
		int32_t                                                    maxItems;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Hide
	 */
	struct UHudDirectionalMiniGameViewInterface_Hide_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.UpdateEventPendingProgress
	 */
	struct UHudObjectivesViewInterface_UpdateEventPendingProgress_Params
	{
	public:
		struct FHudEventProgressionViewData                        HudEventProgressionViewData;                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.UpdateEventBankedProgress
	 */
	struct UHudObjectivesViewInterface_UpdateEventBankedProgress_Params
	{
	public:
		struct FHudEventProgressionViewData                        HudEventProgressionViewData;                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHudObjectiveData
	 */
	struct UHudObjectivesViewInterface_SetHudObjectiveData_Params
	{
	public:
		struct FHudObjectivesViewData                              hudObjectiveViewData;                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountVisibility
	 */
	struct UHudObjectivesViewInterface_SetHookCountVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountData
	 */
	struct UHudObjectivesViewInterface_SetHookCountData_Params
	{
	public:
		int32_t                                                    currentHookCount;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxHookCount;                                            // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    initialMaxHookCount;                                     // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitWidget
	 */
	struct UHudObjectivesViewInterface_InitWidget_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitEventProgression
	 */
	struct UHudObjectivesViewInterface_InitEventProgression_Params
	{
	public:
		struct FHudEventProgressionViewData                        HudEventProgressionViewData;                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.EnableEventProgression
	 */
	struct UHudObjectivesViewInterface_EnableEventProgression_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearHookCountData
	 */
	struct UHudObjectivesViewInterface_ClearHookCountData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearData
	 */
	struct UHudObjectivesViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress
	 */
	struct UInteractionProgressViewInterface_UpdateInputProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      itemCharge;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt
	 */
	struct UInteractionProgressViewInterface_SetInputProgressPrompt_Params
	{
	public:
		struct FInteractionProgressViewData                        Data;                                                    // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.InteractionProgressViewInterface.PlayHemorrhageAnimation
	 */
	struct UInteractionProgressViewInterface_PlayHemorrhageAnimation_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt
	 */
	struct UInteractionProgressViewInterface_HideInputProgressPrompt_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt
	 */
	struct UInteractionPromptsContainerViewInterface_RemovePrompt_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts
	 */
	struct UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt
	 */
	struct UInteractionPromptsContainerViewInterface_AddPrompt_Params
	{
	public:
		struct FInteractionPromptViewData                          Data;                                                    // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData
	 */
	struct UItemBundleViewInterface_SetData_Params
	{
	public:
		struct FItemBundleViewData                                 ItemBundleViewData;                                      // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData
	 */
	struct UItemBundleViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData
	 */
	struct UItemInteractionViewInterface_SetData_Params
	{
	public:
		struct FItemBundleViewData                                 itemBundleData;                                          // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData
	 */
	struct UItemInteractionViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ItemViewInterface.SetData
	 */
	struct UItemViewInterface_SetData_Params
	{
	public:
		struct FItemViewData                                       ItemViewData;                                            // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ItemViewInterface.ClearData
	 */
	struct UItemViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData
	 */
	struct ULeaningArrowsViewInterface_SetData_Params
	{
	public:
		ELeanState                                                 leanState;                                               // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.LightSensitivityViewInterface.StartFadeOut
	 */
	struct ULightSensitivityViewInterface_StartFadeOut_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.UpdatePresetData
	 */
	struct ULoadoutMenuPopupViewInterface_UpdatePresetData_Params
	{
	public:
		TArray<int32_t>                                            presetData;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    selectedPreset;                                          // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectedInventoryItem
	 */
	struct ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Params
	{
	public:
		TArray<int32_t>                                            selectedIndex;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       isUnequip;                                               // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectableCharacters
	 */
	struct ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Params
	{
	public:
		TArray<struct FTabWidgetData>                              selectableCharacters;                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTabWidgetData                                      selectedCharacterData;                                   // 0x0010(0x0080)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		int32_t                                                    botIndex;                                                // 0x0090(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuSlotData
	 */
	struct ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Params
	{
	public:
		TArray<class ULoadoutMenuPopupViewData*>                   loadoutMenuSlotButtonData;                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuInventoryData
	 */
	struct ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Params
	{
	public:
		TArray<class ULoadoutMenuPopupViewData*>                   loadoutMenuSlotButtonData;                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		ELoadoutSlot                                               slotSelected;                                            // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isNextSlot;                                              // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget
	 */
	struct UMatchResultViewInterface_UpdateWidget_Params
	{
	public:
		struct FMatchResultViewData                                Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence
	 */
	struct UMatchResultViewInterface_PlayAnimationSequence_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData
	 */
	struct UOfferingInteractionViewInterface_SetData_Params
	{
	public:
		struct FOfferingViewData                                   OfferingData;                                            // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData
	 */
	struct UOfferingInteractionViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OfferingViewInterface.SetData
	 */
	struct UOfferingViewInterface_SetData_Params
	{
	public:
		struct FOfferingViewData                                   OfferingViewData;                                        // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OfferingViewInterface.ClearData
	 */
	struct UOfferingViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetUIEnabled
	 */
	struct UOnboardingMenuViewInterface_SetUIEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetQuitGameButtonVisible
	 */
	struct UOnboardingMenuViewInterface_SetQuitGameButtonVisible_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetOnboardingMenuState
	 */
	struct UOnboardingMenuViewInterface_SetOnboardingMenuState_Params
	{
	public:
		EOnboardingMenuState                                       menuState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetFirstTimeUserExperience
	 */
	struct UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Params
	{
	public:
		bool                                                       ftue;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherVisible
	 */
	struct UOnboardingMenuViewInterface_SetChangeAccountInputSwitcherVisible_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherPlayerNickname
	 */
	struct UOnboardingMenuViewInterface_SetChangeAccountInputSwitcherPlayerNickname_Params
	{
	public:
		class FString                                              playerNickname;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetBackButtonVisible
	 */
	struct UOnboardingMenuViewInterface_SetBackButtonVisible_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetOnboardingTutorialInterface
	 */
	struct UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetGameManualInterface
	 */
	struct UOnboardingMenuViewInterface_GetGameManualInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.UpdateProgress
	 */
	struct UOnboardingTutorialViewInterface_UpdateProgress_Params
	{
	public:
		TArray<struct FOnboardingStepViewData>                     before;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FOnboardingStepViewData>                     after;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FRewardWrapperViewData>                      Rewards;                                                 // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.StopLoadingSpinner
	 */
	struct UOnboardingTutorialViewInterface_StopLoadingSpinner_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetUIEnabled
	 */
	struct UOnboardingTutorialViewInterface_SetUIEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetTutorialProgressionFeedbacks
	 */
	struct UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Params
	{
	public:
		class FString                                              completedStepId;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isOnboardingEnabled;                                     // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetProgress
	 */
	struct UOnboardingTutorialViewInterface_SetProgress_Params
	{
	public:
		TArray<struct FOnboardingStepViewData>                     Progress;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetIsKillSwitch
	 */
	struct UOnboardingTutorialViewInterface_SetIsKillSwitch_Params
	{
	public:
		bool                                                       IsKillSwitch;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetCanShowGoToMainMenuTutorialButton
	 */
	struct UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Params
	{
	public:
		bool                                                       canShowGoToMainMenuTutorialButton;                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface
	 */
	struct UPerksContainerViewInterface_GetPerkInterface_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BM50[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown
	 */
	struct UPerkViewInterface_UpdatePerkCooldown_Params
	{
	public:
		float                                                      cooldownValue;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsRechargeable;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsRechargeableActive;                                    // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PerkViewInterface.SetData
	 */
	struct UPerkViewInterface_SetData_Params
	{
	public:
		struct FPerkViewData                                       PerkViewData;                                            // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PerkViewInterface.ClearData
	 */
	struct UPerkViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPingStatus
	 */
	struct UPingStatusViewInterface_SetLocalPingStatus_Params
	{
	public:
		EConnectionQuality                                         localPing;                                               // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPacketLossStatus
	 */
	struct UPingStatusViewInterface_SetLocalPacketLossStatus_Params
	{
	public:
		EConnectionQuality                                         localPacketLoss;                                         // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PingStatusViewInterface.SetKillerConnectionQualityStatus
	 */
	struct UPingStatusViewInterface_SetKillerConnectionQualityStatus_Params
	{
	public:
		EConnectionQuality                                         killerConnectionQuality;                                 // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.UpdateWallet
	 */
	struct UPlayerProfileViewInterface_UpdateWallet_Params
	{
	public:
		ECurrencyType                                              Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PDED[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    newBalance;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    previousBalance;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.ShowUI
	 */
	struct UPlayerProfileViewInterface_ShowUI_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.SetWallet
	 */
	struct UPlayerProfileViewInterface_SetWallet_Params
	{
	public:
		TArray<struct FCurrencyLabelViewData>                      walletData;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.SetPlayerName
	 */
	struct UPlayerProfileViewInterface_SetPlayerName_Params
	{
	public:
		class FText                                                playerNameText;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.HideWallet
	 */
	struct UPlayerProfileViewInterface_HideWallet_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.HideUI
	 */
	struct UPlayerProfileViewInterface_HideUI_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerRank
	 */
	struct UPlayerProfileViewInterface_HidePlayerRank_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerName
	 */
	struct UPlayerProfileViewInterface_HidePlayerName_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerLevel
	 */
	struct UPlayerProfileViewInterface_HidePlayerLevel_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerProfileViewInterface.FullUpdateCurrency
	 */
	struct UPlayerProfileViewInterface_FullUpdateCurrency_Params
	{
	public:
		struct FCurrencyLabelViewData                              ViewData;                                                // 0x0000(0x0100)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface
	 */
	struct UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_13C1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DBDUIViewInterfaces.KillerStatusData.IsEqual
	 */
	struct UKillerStatusData_IsEqual_Params
	{
	public:
		class UKillerStatusData*                                   Other;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorSpecificPingIcon
	 */
	struct UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Params
	{
	public:
		EConnectionQuality                                         connectionQuality;                                       // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorActivityProgress
	 */
	struct UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit
	 */
	struct UPlayerStatusViewInterface_TriggerAfflictionHit_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.ShowSurvivorActivity
	 */
	struct UPlayerStatusViewInterface_ShowSurvivorActivity_Params
	{
	public:
		unsigned char                                              UnknownData_F0WY[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ShouldDisplayProgress;                                   // 0x0030(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress
	 */
	struct UPlayerStatusViewInterface_SetTimerProgress_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsDeepWound;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetPlayerNameVisibility
	 */
	struct UPlayerStatusViewInterface_SetPlayerNameVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetKiller
	 */
	struct UPlayerStatusViewInterface_SetKiller_Params
	{
	public:
		struct FGameplayTag                                        killerTag;                                               // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData
	 */
	struct UPlayerStatusViewInterface_SetData_Params
	{
	public:
		struct FPlayerStatusViewData                               Data;                                                    // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetCampProgress
	 */
	struct UPlayerStatusViewInterface_SetCampProgress_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsLocalPlayerAKiller;                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation
	 */
	struct UPlayerStatusViewInterface_PlayTimerAnimation_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation
	 */
	struct UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.HideSurvivorActivity
	 */
	struct UPlayerStatusViewInterface_HideSurvivorActivity_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.EnableChasesMode
	 */
	struct UPlayerStatusViewInterface_EnableChasesMode_Params
	{
	public:
		bool                                                       isChased;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData
	 */
	struct UPlayerStatusViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData
	 */
	struct UPowerBundleViewInterface_SetData_Params
	{
	public:
		struct FPowerBundleViewData                                PowerBundleViewData;                                     // 0x0000(0x0158)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData
	 */
	struct UPowerBundleViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PowerViewInterface.SetData
	 */
	struct UPowerViewInterface_SetData_Params
	{
	public:
		struct FPowerViewData                                      PowerViewData;                                           // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PowerViewInterface.ClearData
	 */
	struct UPowerViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.ShowDirectionIndicator
	 */
	struct UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Params
	{
	public:
		struct FScreenIndicatorViewData                            Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.RemoveDirectionIndicator
	 */
	struct UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress
	 */
	struct USkillCheckViewInterface_UpdateProgress_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset
	 */
	struct USkillCheckViewInterface_UpdatePositionOffset_Params
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Y;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckSuccess
	 */
	struct USkillCheckViewInterface_ShowSkillCheckSuccess_Params
	{
	public:
		bool                                                       IsBonus;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckFail
	 */
	struct USkillCheckViewInterface_ShowSkillCheckFail_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck
	 */
	struct USkillCheckViewInterface_ShowSkillCheck_Params
	{
	public:
		struct FSkillCheckViewData                                 skillCheckData;                                          // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck
	 */
	struct USkillCheckViewInterface_HideSkillCheck_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor
	 */
	struct USkillCheckViewInterface_ApplyScaleFactor_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName
	 */
	struct USpectateBarViewInterface_SetSpectatedName_Params
	{
	public:
		class FString                                              playerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility
	 */
	struct USpectateBarViewInterface_SetSpectateBarVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility
	 */
	struct USpectateBarViewInterface_SetArrowsVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence
	 */
	struct UStartSequenceViewInterface_ShowStartSequence_Params
	{
	public:
		struct FStartSequenceViewData                              Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence
	 */
	struct UStartSequenceViewInterface_HideStartSequence_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible
	 */
	struct UStartSequenceViewInterface_GetIsStartSequenceVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect
	 */
	struct UStatusEffectViewInterface_ShowActiveStatusEffect_Params
	{
	public:
		struct FStatusEffectViewData                               statusEffectData;                                        // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect
	 */
	struct UStatusEffectViewInterface_RemoveExistingStatusEffect_Params
	{
	public:
		class FName                                                statusEffectID;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.ShowSubtitle
	 */
	struct USubtitlesViewInterface_ShowSubtitle_Params
	{
	public:
		class FText                                                subtitleText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesSize
	 */
	struct USubtitlesViewInterface_SetSubtitlesSize_Params
	{
	public:
		ESubtitlesSize                                             Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesPosition
	 */
	struct USubtitlesViewInterface_SetSubtitlesPosition_Params
	{
	public:
		ESubtitlesPosition                                         position;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesBackgroundOpacity
	 */
	struct USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Params
	{
	public:
		ESubtitlesBackgroundOpacity                                Opacity;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.SetConstrainAspectRatioChanged
	 */
	struct USubtitlesViewInterface_SetConstrainAspectRatioChanged_Params
	{
	public:
		bool                                                       isConstrained;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OCBO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AspectRatio;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.HideSubtitles
	 */
	struct USubtitlesViewInterface_HideSubtitles_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction
	 */
	struct UTemplateViewInterface_TemplateExampleFunction_Params
	{
	public:
		struct FTemplateViewData                                   templateData;                                            // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget
	 */
	struct UTestBuildFlagViewInterface_UpdateWidget_Params
	{
	public:
		ETestBuildType                                             testBuildType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETestBuildFlagPosition                                     testBuildFlagPosition;                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight
	 */
	struct UTutorialHighlightViewInterface_SetTutorialHighlight_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHudComponent                                              componentId;                                             // 0x0001(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote
	 */
	struct UTutorialMysteryNoteViewInterface_ShowMysteryNote_Params
	{
	public:
		struct FNotifTutorialPopupViewData                         notifData;                                               // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote
	 */
	struct UTutorialMysteryNoteViewInterface_HideMysteryNote_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective
	 */
	struct UTutorialObjectivesViewInterface_RemoveTutorialObjective_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives
	 */
	struct UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective
	 */
	struct UTutorialObjectivesViewInterface_CompleteTutorialObjective_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       removeAfterCompletion;                                   // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective
	 */
	struct UTutorialObjectivesViewInterface_AddTutorialObjective_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V70I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTutorialObjectivesViewData                         InteractionPromptViewData;                               // 0x0010(0x0170)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup
	 */
	struct UTutorialPopupViewInterface_ShowNotifTutorialPopup_Params
	{
	public:
		struct FNotifTutorialPopupViewData                         notifTutoData;                                           // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup
	 */
	struct UTutorialPopupViewInterface_HideTutorialPopup_Params
	{
	public:
		bool                                                       playSoundEffect;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.UIUtilities.ConvertArchiveCurrentAndMaxProgressionInPercentage
	 */
	struct UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Params
	{
	public:
		int32_t                                                    outCurrentProgression;                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    outMaxProgression;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.WatermarkViewInterface.SetSteamValuesText
	 */
	struct UWatermarkViewInterface_SetSteamValuesText_Params
	{
	public:
		class FString                                              SteamName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SteamId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
