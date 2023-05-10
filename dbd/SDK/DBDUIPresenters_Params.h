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
	 * Function DBDUIPresenters.ArchiveCompendiumSubPresenter.OnTomeSelected
	 */
	struct UArchiveCompendiumSubPresenter_OnTomeSelected_Params
	{
	public:
		class FString                                              tomeId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveQuestMapSubPresenter.UpdateTomeLevels
	 */
	struct UArchiveQuestMapSubPresenter_UpdateTomeLevels_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeMapCreated
	 */
	struct UArchiveQuestMapSubPresenter_OnTomeMapCreated_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeLevelRewardAnimationDone
	 */
	struct UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeUnhovered
	 */
	struct UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Params
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeHovered
	 */
	struct UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Params
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnNodeSelected
	 */
	struct UArchiveQuestMapSubPresenter_OnNodeSelected_Params
	{
	public:
		class FName                                                nodeId;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPlayerRole                                                Role;                                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z1QW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           position;                                                // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnLevelSelected
	 */
	struct UArchiveQuestMapSubPresenter_OnLevelSelected_Params
	{
	public:
		int32_t                                                    levelIndex;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveQuestMapSubPresenter.NavigateToNextLevelAfterUnlock
	 */
	struct UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveQuestMapSubPresenter.GetCurrentLevel
	 */
	struct UArchiveQuestMapSubPresenter_GetCurrentLevel_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveEditorSubPresenter.OnSaveTomeGraph
	 */
	struct UArchiveEditorSubPresenter_OnSaveTomeGraph_Params
	{
	public:
		TArray<struct FArchiveNodeGraphViewData>                   nodeList;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.Presenter.ShouldPresent
	 */
	struct UPresenter_ShouldPresent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.Presenter.OnContextSectionChanged
	 */
	struct UPresenter_OnContextSectionChanged_Params
	{
	public:
		EContext                                                   Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.Presenter.IsPlayerStateReady
	 */
	struct UPresenter_IsPlayerStateReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.Presenter.IsGameStateReady
	 */
	struct UPresenter_IsGameStateReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.Presenter.IsContextReady
	 */
	struct UPresenter_IsContextReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveImageViewerPresenter.OnTextVisibilityChanged
	 */
	struct UArchiveImageViewerPresenter_OnTextVisibilityChanged_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverPlayed
	 */
	struct UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverAutoplay
	 */
	struct UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Params
	{
	public:
		bool                                                       autoplay;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveImageViewerPresenter.OnBackAction
	 */
	struct UArchiveImageViewerPresenter_OnBackAction_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverPlayed
	 */
	struct UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Params
	{
	public:
		bool                                                       Playing;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverAutoplay
	 */
	struct UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Params
	{
	public:
		bool                                                       autoplay;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveImageViewerPresenter.CanShowFullScreenMode
	 */
	struct UArchiveImageViewerPresenter_CanShowFullScreenMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveJournalSubPresenter.OnVignetteSelected
	 */
	struct UArchiveJournalSubPresenter_OnVignetteSelected_Params
	{
	public:
		class FString                                              VignetteId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveJournalSubPresenter.OnShowImageViewer
	 */
	struct UArchiveJournalSubPresenter_OnShowImageViewer_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveJournalSubPresenter.OnPlayCinematic
	 */
	struct UArchiveJournalSubPresenter_OnPlayCinematic_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverPlayed
	 */
	struct UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverAutoplay
	 */
	struct UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Params
	{
	public:
		bool                                                       autoplay;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveJournalSubPresenter.OnEntrySelected
	 */
	struct UArchiveJournalSubPresenter_OnEntrySelected_Params
	{
	public:
		int32_t                                                    entryIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveJournalSubPresenter.OnClickPlayButton
	 */
	struct UArchiveJournalSubPresenter_OnClickPlayButton_Params
	{
	public:
		int32_t                                                    entryIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveJournalSubPresenter.OnAutoplayChanged
	 */
	struct UArchiveJournalSubPresenter_OnAutoplayChanged_Params
	{
	public:
		bool                                                       autoplayActive;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RC0Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    entryIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveMenuPresenter.OnSlotSelectorClosed
	 */
	struct UArchiveMenuPresenter_OnSlotSelectorClosed_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveMenuPresenter.OnShowImageViewer
	 */
	struct UArchiveMenuPresenter_OnShowImageViewer_Params
	{
	public:
		bool                                                       voiceOverIsPlaying;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveMenuPresenter.OnMenuTabSelected
	 */
	struct UArchiveMenuPresenter_OnMenuTabSelected_Params
	{
	public:
		EArchiveMenuState                                          menuState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       alreadySelected;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveMenuPresenter.OnInfoClicked
	 */
	struct UArchiveMenuPresenter_OnInfoClicked_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveMenuPresenter.OnHideImageViewer
	 */
	struct UArchiveMenuPresenter_OnHideImageViewer_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderSlotSelected
	 */
	struct UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Params
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderClicked
	 */
	struct UArchiveMenuPresenter_OnChallengeReminderClicked_Params
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveMenuPresenter.OnBackAction
	 */
	struct UArchiveMenuPresenter_OnBackAction_Params
	{	};

	/**
	 * Function DBDUIPresenters.BasePopupPresenter.OnContextLeave
	 */
	struct UBasePopupPresenter_OnContextLeave_Params
	{
	public:
		EContext                                                   Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.BasePopupPresenter.OnContextEnter
	 */
	struct UBasePopupPresenter_OnContextEnter_Params
	{
	public:
		EContext                                                   Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.BasePopupPresenter.IsContextEntered
	 */
	struct UBasePopupPresenter_IsContextEntered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.GenericPopupPresenter.OnBack
	 */
	struct UGenericPopupPresenter_OnBack_Params
	{	};

	/**
	 * Function DBDUIPresenters.GenericPopupPresenter.OnAppResumed
	 */
	struct UGenericPopupPresenter_OnAppResumed_Params
	{
	public:
		bool                                                       isAppResumed;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.GenericPopupPresenter.OnAction
	 */
	struct UGenericPopupPresenter_OnAction_Params
	{
	public:
		EPopupButtonType                                           popupAction;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveRiftSubPresenter.OnToggleOutfitDisplay
	 */
	struct UArchiveRiftSubPresenter_OnToggleOutfitDisplay_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardItemClicked
	 */
	struct UArchiveRiftSubPresenter_OnRewardItemClicked_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardCurrencyClicked
	 */
	struct UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Params
	{
	public:
		ECurrencyType                                              CurrencyType;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchaseTiers
	 */
	struct UArchiveRiftSubPresenter_OnClickPurchaseTiers_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchasePremiumPass
	 */
	struct UArchiveRiftSubPresenter_OnClickPurchasePremiumPass_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveRiftSubPresenter.OnBonusTierTooltipShown
	 */
	struct UArchiveRiftSubPresenter_OnBonusTierTooltipShown_Params
	{	};

	/**
	 * Function DBDUIPresenters.ArchiveTierPurchasePopupPresenter.OnConfirmPurchase
	 */
	struct UArchiveTierPurchasePopupPresenter_OnConfirmPurchase_Params
	{
	public:
		int32_t                                                    tiersToPurchaseNumber;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveTomeSubPresenter.OnMenuTabSelected
	 */
	struct UArchiveTomeSubPresenter_OnMenuTabSelected_Params
	{
	public:
		EArchiveTomeMenuState                                      menuState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ArchiveTomeSubPresenter.OnEditorWidgetSwitchComplete
	 */
	struct UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete_Params
	{	};

	/**
	 * Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed
	 */
	struct UHudPresenter_OnPawnUnpossessed_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudPresenter.OnPawnPossessed
	 */
	struct UHudPresenter_OnPawnPossessed_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudPresenter.OnLocallyObservedChanged
	 */
	struct UHudPresenter_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function DBDUIPresenters.HudPresenter.IsPendingPawnReady
	 */
	struct UHudPresenter_IsPendingPawnReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudPresenter.IsHudReady
	 */
	struct UHudPresenter_IsHudReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetProgressingDone
	 */
	struct UChallengeTrackerPresenter_OnWidgetProgressingDone_Params
	{	};

	/**
	 * Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetOpeningDone
	 */
	struct UChallengeTrackerPresenter_OnWidgetOpeningDone_Params
	{	};

	/**
	 * Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetClosingDone
	 */
	struct UChallengeTrackerPresenter_OnWidgetClosingDone_Params
	{	};

	/**
	 * Function DBDUIPresenters.ChallengeTrackerPresenter.OnReadingTimeDelayDone
	 */
	struct UChallengeTrackerPresenter_OnReadingTimeDelayDone_Params
	{	};

	/**
	 * Function DBDUIPresenters.ChallengeTrackerPresenter.OnQuestEventRepetitionValueChanged
	 */
	struct UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Params
	{
	public:
		int32_t                                                    value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DRPC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              questEventIdTracked;                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ChallengeTrackerPresenter.BindToQuestRepetitionEvents
	 */
	struct UChallengeTrackerPresenter_BindToQuestRepetitionEvents_Params
	{	};

	/**
	 * Function DBDUIPresenters.CreditsPresenter.OnBackAction
	 */
	struct UCreditsPresenter_OnBackAction_Params
	{	};

	/**
	 * Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToName
	 */
	struct UCreditsPresenter_Credits_ScrollToName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToEnd
	 */
	struct UCreditsPresenter_Credits_ScrollToEnd_Params
	{	};

	/**
	 * Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsSyncErrorEvent
	 */
	struct UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent_Params
	{	};

	/**
	 * Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsFetchedEvent
	 */
	struct UDailyRitualsPopupPresenter_OnRitualsFetchedEvent_Params
	{	};

	/**
	 * Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRemoveRitual
	 */
	struct UDailyRitualsPopupPresenter_OnRemoveRitual_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimRitual
	 */
	struct UDailyRitualsPopupPresenter_OnClaimRitual_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimAllRituals
	 */
	struct UDailyRitualsPopupPresenter_OnClaimAllRituals_Params
	{	};

	/**
	 * Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameStart
	 */
	struct UDirectionalMinigamePresenter_OnMinigameStart_Params
	{
	public:
		TArray<EDirectionalInputKey>                               Sequence;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    currentIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnterKey
	 */
	struct UDirectionalMinigamePresenter_OnMinigameEnterKey_Params
	{
	public:
		EDirectionalInputKey                                       enteredKey;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZVLB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    enteredIndex;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isCorrect;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QILQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    currentIndex;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnd
	 */
	struct UDirectionalMinigamePresenter_OnMinigameEnd_Params
	{
	public:
		EDirectionalMinigameResult                                 Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.DisplayStandPresenter.OnDisplayStandRotation
	 */
	struct UDisplayStandPresenter_OnDisplayStandRotation_Params
	{
	public:
		float                                                      distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.DisplayStandPresenter.IsContextEntered
	 */
	struct UDisplayStandPresenter_IsContextEntered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ExamplePresenter.OnButtonClick
	 */
	struct UExamplePresenter_OnButtonClick_Params
	{	};

	/**
	 * Function DBDUIPresenters.ExternalEffectsPresenter.OnShowExternalEffect
	 */
	struct UExternalEffectsPresenter_OnShowExternalEffect_Params
	{
	public:
		struct FExternalEffectData                                 Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ExternalEffectsPresenter.OnHideExternalEffect
	 */
	struct UExternalEffectsPresenter_OnHideExternalEffect_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EExternalEffectSource                                      ExternalEffectSource;                                    // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered
	 */
	struct UGameManualSubPresenter_OnCategoryCategoryEntered_Params
	{
	public:
		EHelpType                                                  categoryType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudObjectivesPresenter.OnEventProgressPendingChanged
	 */
	struct UHudObjectivesPresenter_OnEventProgressPendingChanged_Params
	{
	public:
		int32_t                                                    value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVoidEnergyChangeReason                                    reasonEnergyChanged;                                     // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudObjectivesPresenter.OnEventProgressionDataInitialized
	 */
	struct UHudObjectivesPresenter_OnEventProgressionDataInitialized_Params
	{
	public:
		struct FEventProgressionData                               HudEventProgressionViewData;                             // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudObjectivesPresenter.OnEventProgressBankedChanged
	 */
	struct UHudObjectivesPresenter_OnEventProgressBankedChanged_Params
	{
	public:
		int32_t                                                    value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudPeekingPromptsPresenter.UpdatePeekingState
	 */
	struct UHudPeekingPromptsPresenter_UpdatePeekingState_Params
	{
	public:
		ELeanState                                                 potentialLeanState;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudPeekingPromptsPresenter.HandleBestPlayerInteractionsChanged
	 */
	struct UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged_Params
	{	};

	/**
	 * Function DBDUIPresenters.HudPeekingPromptsPresenter.CanPlayerLean
	 */
	struct UHudPeekingPromptsPresenter_CanPlayerLean_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudSpectatePresenter.OnPreviousPlayerTriggered
	 */
	struct UHudSpectatePresenter_OnPreviousPlayerTriggered_Params
	{	};

	/**
	 * Function DBDUIPresenters.HudSpectatePresenter.OnPlayerGameStateChanged
	 */
	struct UHudSpectatePresenter_OnPlayerGameStateChanged_Params
	{
	public:
		class ADBDPlayerState*                                     DBDPlayerState;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameState                                                 newGameState;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudSpectatePresenter.OnNextPlayerTriggered
	 */
	struct UHudSpectatePresenter_OnNextPlayerTriggered_Params
	{	};

	/**
	 * Function DBDUIPresenters.HudSpectatePresenter.OnLeaveTriggered
	 */
	struct UHudSpectatePresenter_OnLeaveTriggered_Params
	{	};

	/**
	 * Function DBDUIPresenters.HudTutorialObjectivesPresenter.IsInTutorial
	 */
	struct UHudTutorialObjectivesPresenter_IsInTutorial_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.LightSensitivityPresenter.OnContinue
	 */
	struct ULightSensitivityPresenter_OnContinue_Params
	{	};

	/**
	 * Function DBDUIPresenters.LightSensitivityPresenter.OnCompletedFadeOut
	 */
	struct ULightSensitivityPresenter_OnCompletedFadeOut_Params
	{	};

	/**
	 * Function DBDUIPresenters.LoadoutMenuPopupPresenter.SetLoadoutPopupViewData
	 */
	struct ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Params
	{
	public:
		struct FInventorySlotData                                  SlotData;                                                // 0x0000(0x0128)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EPlayerRole                                                PlayerRole;                                              // 0x0128(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HGG4[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULoadoutMenuPopupViewData*                           ReturnValue;                                             // 0x0130(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnSelectedCharacterChanged
	 */
	struct ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Params
	{
	public:
		int32_t                                                    selectedCharacterIndex;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuSlotIsSelected
	 */
	struct ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Params
	{
	public:
		ELoadoutSlot                                               slotSelected;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetSelected
	 */
	struct ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Params
	{
	public:
		int32_t                                                    presetId;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELoadoutSlot                                               slotSelected;                                            // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetClicked
	 */
	struct ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Params
	{
	public:
		int32_t                                                    presetId;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELoadoutSlot                                               slotSelected;                                            // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuInventorySlotClick
	 */
	struct ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Params
	{
	public:
		ELoadoutSlot                                               itemIndex;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QAGN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ItemId;                                                  // 0x0004(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
	 */
	struct UOnboardingMenuPresenter_OnSetUIEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnSettingsAction
	 */
	struct UOnboardingMenuPresenter_OnSettingsAction_Params
	{	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnQuitGameAction
	 */
	struct UOnboardingMenuPresenter_OnQuitGameAction_Params
	{	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain
	 */
	struct UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Params
	{
	public:
		EOnboardingMenuState                                       menuState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected
	 */
	struct UOnboardingMenuPresenter_OnMenuTabSelected_Params
	{
	public:
		EOnboardingMenuState                                       menuState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnFirstOnboardingStepsDone
	 */
	struct UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Params
	{
	public:
		bool                                                       isFirstStepsDone;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnChangeAccountAction
	 */
	struct UOnboardingMenuPresenter_OnChangeAccountAction_Params
	{	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
	 */
	struct UOnboardingMenuPresenter_OnBackAction_Params
	{	};

	/**
	 * Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
	 */
	struct UOnboardingTutorialSubPresenter_OnSelectTutorial_Params
	{
	public:
		class FString                                              stepId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              tutorialId;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.PawnObserver.OnPawnControllerSet
	 */
	struct UPawnObserver_OnPawnControllerSet_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         OldController;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         NewController;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged
	 */
	struct UPawnObserver_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function DBDUIPresenters.PlayerProfilePresenter.RefreshWallet
	 */
	struct UPlayerProfilePresenter_RefreshWallet_Params
	{	};

	/**
	 * Function DBDUIPresenters.PlayerProfilePresenter.OnWalletUpdated
	 */
	struct UPlayerProfilePresenter_OnWalletUpdated_Params
	{
	public:
		TArray<struct FShopWalletUpdate>                           walletUpdates;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.PlayerProfilePresenter.OnShowImageViewer
	 */
	struct UPlayerProfilePresenter_OnShowImageViewer_Params
	{
	public:
		bool                                                       voiceOverIsPlaying;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.PlayerProfilePresenter.OnHideImageViewer
	 */
	struct UPlayerProfilePresenter_OnHideImageViewer_Params
	{	};

	/**
	 * Function DBDUIPresenters.PlayerProfilePresenter.OnCurrentSpecialEventChanged
	 */
	struct UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Params
	{
	public:
		struct FCombinedSpecialEventData                           previousSpecialEvent;                                    // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ESpecialEventStatus                                        previousSpecialEventStatus;                              // 0x02F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V4AS[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCombinedSpecialEventData                           currentSpecialEvent;                                     // 0x02F8(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ESpecialEventStatus                                        currentSpecialEventStatus;                               // 0x05E8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.PlayerProfilePresenter.GetPlayerName
	 */
	struct UPlayerProfilePresenter_GetPlayerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.PresenterManager.OnViewportCreated
	 */
	struct UPresenterManager_OnViewportCreated_Params
	{	};

	/**
	 * Function DBDUIPresenters.PresenterManager.OnLoadingTransition
	 */
	struct UPresenterManager_OnLoadingTransition_Params
	{
	public:
		ELoadingTransitionType                                     TransitionType;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.SubtitlesPresenter.OnEntryTimedOut
	 */
	struct USubtitlesPresenter_OnEntryTimedOut_Params
	{	};

	/**
	 * Function DBDUIPresenters.SubtitlesPresenter.IsSubtitlesEnabled
	 */
	struct USubtitlesPresenter_IsSubtitlesEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialNotificationClosedByUserInput
	 */
	struct UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput_Params
	{	};

	/**
	 * Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeOutTriggered
	 */
	struct UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered_Params
	{	};

	/**
	 * Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeInTriggered
	 */
	struct UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered_Params
	{	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
	 */
	struct UUIConsoleCommands_DBD_ToggleTestWidget_Params
	{	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
	 */
	struct UUIConsoleCommands_DBD_ToggleDPICurve_Params
	{	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_ShowPresenterDebugInfo
	 */
	struct UUIConsoleCommands_DBD_ShowPresenterDebugInfo_Params
	{
	public:
		int32_t                                                    presenterDebugMode;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_ShowHUDWidgetsInfo
	 */
	struct UUIConsoleCommands_DBD_ShowHUDWidgetsInfo_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetUMGVisible
	 */
	struct UUIConsoleCommands_DBD_SetUMGVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor
	 */
	struct UUIConsoleCommands_DBD_SetMenuScaleFactor_Params
	{
	public:
		float                                                      ScaleFactor;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetHUDWidgetVisible
	 */
	struct UUIConsoleCommands_DBD_SetHUDWidgetVisible_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsVisible;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
	 */
	struct UUIConsoleCommands_DBD_SetHudVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
	 */
	struct UUIConsoleCommands_DBD_SetHudScaleFactor_Params
	{
	public:
		float                                                      ScaleFactor;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
	 */
	struct UUIConsoleCommands_DBD_SetApplicationScale_Params
	{
	public:
		float                                                      ApplicationScale;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetAllHUDWidgetsVisible
	 */
	struct UUIConsoleCommands_DBD_SetAllHUDWidgetsVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_ResetPresenters
	 */
	struct UUIConsoleCommands_DBD_ResetPresenters_Params
	{	};

	/**
	 * Function DBDUIPresenters.WatermarkPresenter.IsUsingCommandLineArgument
	 */
	struct UWatermarkPresenter_IsUsingCommandLineArgument_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.WatermarkPresenter.IsSteamBuild
	 */
	struct UWatermarkPresenter_IsSteamBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.WatermarkPresenter.IsNonShippingBuild
	 */
	struct UWatermarkPresenter_IsNonShippingBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
