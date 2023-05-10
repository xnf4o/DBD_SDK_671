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
	 * Class DBDUIPresenters.SubPresenter
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class USubPresenter : public UObject
	{
	public:
		unsigned char                                              UnknownData_G5E8[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchiveCompendiumSubPresenter
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UArchiveCompendiumSubPresenter : public USubPresenter
	{
	public:
		unsigned char                                              _archiveCompendiumWidget[0x10];                          // 0x0038(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_FBUZ[0x70];                                  // 0x0048(0x0070) MISSED OFFSET (PADDING)

	public:
		void OnTomeSelected(const class FString& tomeId);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchiveQuestMapSubPresenter
	 * Size -> 0x01F8 (FullSize[0x0230] - InheritedSize[0x0038])
	 */
	class UArchiveQuestMapSubPresenter : public USubPresenter
	{
	public:
		unsigned char                                              UnknownData_NWGE[0x150];                                 // 0x0038(0x0150) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _archiveQuestMapWidget[0x10];                            // 0x0188(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              _archiveLevelProgressionWidget[0x10];                    // 0x0198(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_3B50[0x58];                                  // 0x01A8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EArchivesStoryLevelStatus>                          _storyLevelStatusCache;                                  // 0x0200(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XEO2[0x20];                                  // 0x0210(0x0020) MISSED OFFSET (PADDING)

	public:
		void UpdateTomeLevels();
		void OnTomeMapCreated();
		void OnTomeLevelRewardAnimationDone();
		void OnQuestNodeUnhovered(EPlayerRole Role);
		void OnQuestNodeHovered(EPlayerRole Role);
		void OnNodeSelected(const class FName& nodeId, EPlayerRole Role, const struct FVector2D& position);
		void OnLevelSelected(int32_t levelIndex);
		void NavigateToNextLevelAfterUnlock();
		void GetCurrentLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchiveEditorSubPresenter
	 * Size -> 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
	 */
	class UArchiveEditorSubPresenter : public UArchiveQuestMapSubPresenter
	{
	public:
		unsigned char                                              UnknownData_UUV7[0x18];                                  // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _archiveEditorWidget[0x10];                              // 0x0248(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		void OnSaveTomeGraph(TArray<struct FArchiveNodeGraphViewData> nodeList);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.UIComponent
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUIComponent : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.Presenter
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class UPresenter : public UUIComponent
	{
	public:
		bool                                                       _overrideWidgetInstantiationPhase;                       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPresenterPhase                                            _widgetInstantiationPhase;                               // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       RequestPresentationAtBeginPlay;                          // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlateVisibility                                           InitialVisibility;                                       // 0x0033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _widgetZOrder;                                           // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUserWidget*                                         _widget;                                                 // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPresenterContainerInfo                             _parentContainerInfo;                                    // 0x0040(0x0028) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SAO7[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _ignoredPresentationRequirementFunctions[0x50];          // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class UPresenterRequirementFunction*>               _presentationRequirementFunctions;                       // 0x00C8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AZHU[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (PADDING)

	public:
		bool ShouldPresent();
		void OnContextSectionChanged(EContext Context);
		bool IsPlayerStateReady();
		bool IsGameStateReady();
		bool IsContextReady();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchiveImageViewerPresenter
	 * Size -> 0x0090 (FullSize[0x0180] - InheritedSize[0x00F0])
	 */
	class UArchiveImageViewerPresenter : public UPresenter
	{
	public:
		class UClass*                                              ArchiveImageViewerWidgetClass;                           // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQJ4[0x88];                                  // 0x00F8(0x0088) MISSED OFFSET (PADDING)

	public:
		void OnTextVisibilityChanged();
		void OnImageViewerVoiceOverPlayed();
		void OnImageViewerVoiceOverAutoplay(bool autoplay);
		void OnBackAction();
		void OnArchivesVoiceOverPlayed(bool Playing);
		void OnArchivesVoiceOverAutoplay(bool autoplay);
		bool CanShowFullScreenMode();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchiveJournalSubPresenter
	 * Size -> 0x00D8 (FullSize[0x0110] - InheritedSize[0x0038])
	 */
	class UArchiveJournalSubPresenter : public USubPresenter
	{
	public:
		unsigned char                                              UnknownData_A8A6[0x38];                                  // 0x0038(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _archiveJournalWidget[0x10];                             // 0x0070(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_RXQ1[0x90];                                  // 0x0080(0x0090) MISSED OFFSET (PADDING)

	public:
		void OnVignetteSelected(const class FString& VignetteId);
		void OnShowImageViewer();
		void OnPlayCinematic(int32_t Index);
		void OnImageViewerVoiceOverPlayed();
		void OnImageViewerVoiceOverAutoplay(bool autoplay);
		void OnEntrySelected(int32_t entryIndex);
		void OnClickPlayButton(int32_t entryIndex);
		void OnAutoplayChanged(bool autoplayActive, int32_t entryIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchiveMenuPresenter
	 * Size -> 0x00C8 (FullSize[0x01B8] - InheritedSize[0x00F0])
	 */
	class UArchiveMenuPresenter : public UPresenter
	{
	public:
		class UClass*                                              ArchiveMenuWidgetClass;                                  // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArchiveTomeSubPresenter*                            _archiveTomeSubPresenter;                                // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArchiveRiftSubPresenter*                            _archiveRiftSubPresenter;                                // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArchiveCompendiumSubPresenter*                      _archiveCompendiumSubPresenter;                          // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USubPresenter*                                       _activeSubPresenter;                                     // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RGMP[0xA0];                                  // 0x0118(0x00A0) MISSED OFFSET (PADDING)

	public:
		void OnSlotSelectorClosed();
		void OnShowImageViewer(bool voiceOverIsPlaying);
		void OnMenuTabSelected(EArchiveMenuState menuState, bool alreadySelected);
		void OnInfoClicked();
		void OnHideImageViewer();
		void OnChallengeReminderSlotSelected(EPlayerRole Role);
		void OnChallengeReminderClicked(EPlayerRole Role);
		void OnBackAction();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.BasePopupPresenter
	 * Size -> 0x0040 (FullSize[0x0130] - InheritedSize[0x00F0])
	 */
	class UBasePopupPresenter : public UPresenter
	{
	public:
		EContext                                                   ObservedContext;                                         // 0x00F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTFN[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PopupWidgetClass;                                        // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3D8M[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBasePopupViewData*                                  _viewData;                                               // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LP1W[0x20];                                  // 0x0110(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnContextLeave(EContext Context);
		void OnContextEnter(EContext Context);
		bool IsContextEntered();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.GenericPopupPresenter
	 * Size -> 0x0050 (FullSize[0x0180] - InheritedSize[0x0130])
	 */
	class UGenericPopupPresenter : public UBasePopupPresenter
	{
	public:
		unsigned char                                              UnknownData_OM6O[0x50];                                  // 0x0130(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnBack();
		void OnAppResumed(bool isAppResumed);
		void OnAction(EPopupButtonType popupAction);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchivePassPurchasePopupPresenter
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UArchivePassPurchasePopupPresenter : public UGenericPopupPresenter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchivePresenterHelper
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArchivePresenterHelper : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchiveRiftSubPresenter
	 * Size -> 0x0120 (FullSize[0x0158] - InheritedSize[0x0038])
	 */
	class UArchiveRiftSubPresenter : public USubPresenter
	{
	public:
		unsigned char                                              UnknownData_MN0R[0x60];                                  // 0x0038(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _archiveRiftWidget[0x10];                                // 0x0098(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_C5V9[0xB0];                                  // 0x00A8(0x00B0) MISSED OFFSET (PADDING)

	public:
		void OnToggleOutfitDisplay();
		void OnRewardItemClicked(const class FName& ItemId);
		void OnRewardCurrencyClicked(ECurrencyType CurrencyType);
		void OnClickPurchaseTiers();
		void OnClickPurchasePremiumPass();
		void OnBonusTierTooltipShown();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchiveTierPurchasePopupPresenter
	 * Size -> 0x0060 (FullSize[0x01E0] - InheritedSize[0x0180])
	 */
	class UArchiveTierPurchasePopupPresenter : public UGenericPopupPresenter
	{
	public:
		unsigned char                                              UnknownData_7Z5V[0x60];                                  // 0x0180(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnConfirmPurchase(int32_t tiersToPurchaseNumber);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ArchiveTomeSubPresenter
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UArchiveTomeSubPresenter : public USubPresenter
	{
	public:
		unsigned char                                              UnknownData_WH7H[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UArchiveQuestMapSubPresenter*                        _archiveQuestMapSubPresenter;                            // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArchiveEditorSubPresenter*                          _archiveEditorSubPresenter;                              // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArchiveJournalSubPresenter*                         _archiveJournalSubPresenter;                             // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USubPresenter*                                       _activeSubPresenter;                                     // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _archiveTomeWidget[0x10];                                // 0x0088(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class UMaterialInterface*                                  _archiveSideNavSkinMaterial;                             // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YJFK[0x28];                                  // 0x00A0(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnMenuTabSelected(EArchiveTomeMenuState menuState);
		void OnEditorWidgetSwitchComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudPresenter
	 * Size -> 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
	 */
	class UHudPresenter : public UPresenter
	{
	public:
		EHudParentContainerType                                    HudParentContainer;                                      // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YHAB[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _pendingCharacter;                                       // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADBDPlayer*                                          _presentedCharacter;                                     // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDSpectator*                                       _spectatorPawn;                                          // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7IHE[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHudScreen*                                          _hudScreen;                                              // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoreHudRootWidget*                                  _rootWidget;                                             // 0x0120(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnPawnUnpossessed(class APawn* Pawn);
		void OnPawnPossessed(class APawn* Pawn);
		void OnLocallyObservedChanged();
		bool IsPendingPawnReady();
		bool IsHudReady();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ChallengeTrackerPresenter
	 * Size -> 0x00A0 (FullSize[0x01C8] - InheritedSize[0x0128])
	 */
	class UChallengeTrackerPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              ChallengeTrackerWidgetClass;                             // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReadingTimeDelaySec;                                     // 0x0130(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UHGX[0x94];                                  // 0x0134(0x0094) MISSED OFFSET (PADDING)

	public:
		void OnWidgetProgressingDone();
		void OnWidgetOpeningDone();
		void OnWidgetClosingDone();
		void OnReadingTimeDelayDone();
		void OnQuestEventRepetitionValueChanged(int32_t value, const class FString& questEventIdTracked);
		void BindToQuestRepetitionEvents();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ContextObserver
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UContextObserver : public UUIComponent
	{
	public:
		EContextSection                                            ObservedContextSection;                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E62W[0x6F];                                  // 0x0031(0x006F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.CreditsPresenter
	 * Size -> 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
	 */
	class UCreditsPresenter : public UPresenter
	{
	public:
		class UClass*                                              CreditsScreenWidgetClass;                                // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9VO[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnBackAction();
		void Credits_ScrollToName(const class FString& Name, float Delay);
		void Credits_ScrollToEnd();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.DailyRitualsPopupPresenter
	 * Size -> 0x0020 (FullSize[0x01A0] - InheritedSize[0x0180])
	 */
	class UDailyRitualsPopupPresenter : public UGenericPopupPresenter
	{
	public:
		unsigned char                                              UnknownData_2UEQ[0x20];                                  // 0x0180(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnRitualsSyncErrorEvent();
		void OnRitualsFetchedEvent();
		void OnRemoveRitual(const class FString& ID);
		void OnClaimRitual(const class FString& ID);
		void OnClaimAllRituals();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.DirectionalMinigamePresenter
	 * Size -> 0x0030 (FullSize[0x0158] - InheritedSize[0x0128])
	 */
	class UDirectionalMinigamePresenter : public UHudPresenter
	{
	public:
		class UClass*                                              DirectionalMinigameWidgetClass;                          // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberItemMax;                                           // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNLI[0x24];                                  // 0x0134(0x0024) MISSED OFFSET (PADDING)

	public:
		void OnMinigameStart(TArray<EDirectionalInputKey> Sequence, int32_t currentIndex);
		void OnMinigameEnterKey(EDirectionalInputKey enteredKey, int32_t enteredIndex, bool isCorrect, int32_t currentIndex);
		void OnMinigameEnd(EDirectionalMinigameResult Result);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.DisplayStandPresenter
	 * Size -> 0x0068 (FullSize[0x0158] - InheritedSize[0x00F0])
	 */
	class UDisplayStandPresenter : public UPresenter
	{
	public:
		class UClass*                                              CoreDisplayStandWidgetClass;                             // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContext                                                   ObservedContext;                                         // 0x00F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_477N[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DisplayStandName;                                        // 0x00FC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnchorData                                         DragZoneLayoutData;                                      // 0x0108(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DragZonePositionX;                                       // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragZonePositionY;                                       // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragZoneSizeX;                                           // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragZoneSizeY;                                           // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A03I[0x18];                                  // 0x0140(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnDisplayStandRotation(float distance);
		bool IsContextEntered();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.EventEntryPopupPresenter
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UEventEntryPopupPresenter : public UGenericPopupPresenter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ExamplePresenter
	 * Size -> 0x0040 (FullSize[0x0168] - InheritedSize[0x0128])
	 */
	class UExamplePresenter : public UHudPresenter
	{
	public:
		class UClass*                                              ExampleWidgetClass;                                      // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7I7[0x38];                                  // 0x0130(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnButtonClick();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ExternalEffectsPresenter
	 * Size -> 0x0018 (FullSize[0x0140] - InheritedSize[0x0128])
	 */
	class UExternalEffectsPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              CoreExternalEffectsWidgetClass;                          // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZO97[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnShowExternalEffect(const struct FExternalEffectData& Data);
		void OnHideExternalEffect(const class FName& ItemId, EExternalEffectSource ExternalEffectSource);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.FearMarketPopupPresenter
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UFearMarketPopupPresenter : public UGenericPopupPresenter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.FocusHandler
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UFocusHandler : public UUIComponent
	{
	public:
		unsigned char                                              UnknownData_NAWS[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.GameManualSubPresenter
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UGameManualSubPresenter : public USubPresenter
	{
	public:
		unsigned char                                              _gameManualWidget[0x10];                                 // 0x0038(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		void OnCategoryCategoryEntered(EHelpType categoryType);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.GenericTextInputPopupPresenter
	 * Size -> 0x0060 (FullSize[0x01E0] - InheritedSize[0x0180])
	 */
	class UGenericTextInputPopupPresenter : public UGenericPopupPresenter
	{
	public:
		unsigned char                                              UnknownData_8IKC[0x60];                                  // 0x0180(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudEndGameScenarioPresenter
	 * Size -> 0x0040 (FullSize[0x0168] - InheritedSize[0x0128])
	 */
	class UHudEndGameScenarioPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              EndGameCollapseBarWidgetClass;                           // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBKT[0x38];                                  // 0x0130(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudObjectivesPresenter
	 * Size -> 0x0070 (FullSize[0x0198] - InheritedSize[0x0128])
	 */
	class UHudObjectivesPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              CoreHudObjectivesWidgetClass;                            // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KI76[0x68];                                  // 0x0130(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnEventProgressPendingChanged(int32_t value, EVoidEnergyChangeReason reasonEnergyChanged);
		void OnEventProgressionDataInitialized(const struct FEventProgressionData& HudEventProgressionViewData);
		void OnEventProgressBankedChanged(int32_t value);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudPeekingPromptsPresenter
	 * Size -> 0x0030 (FullSize[0x0158] - InheritedSize[0x0128])
	 */
	class UHudPeekingPromptsPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              LeaningArrowsWidgetClass;                                // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X907[0x28];                                  // 0x0130(0x0028) MISSED OFFSET (PADDING)

	public:
		void UpdatePeekingState(ELeanState potentialLeanState);
		void HandleBestPlayerInteractionsChanged();
		bool CanPlayerLean();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudSpectatePresenter
	 * Size -> 0x0028 (FullSize[0x0150] - InheritedSize[0x0128])
	 */
	class UHudSpectatePresenter : public UHudPresenter
	{
	public:
		class UClass*                                              CoreSpectateBarWidget;                                   // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8CC[0x20];                                  // 0x0130(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnPreviousPlayerTriggered();
		void OnPlayerGameStateChanged(class ADBDPlayerState* DBDPlayerState, EGameState newGameState);
		void OnNextPlayerTriggered();
		void OnLeaveTriggered();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudTutorialObjectivesPresenter
	 * Size -> 0x0070 (FullSize[0x0198] - InheritedSize[0x0128])
	 */
	class UHudTutorialObjectivesPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              TutorialObjectivesWidgetClass;                           // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YRL[0x68];                                  // 0x0130(0x0068) MISSED OFFSET (PADDING)

	public:
		bool IsInTutorial();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.LightSensitivityPresenter
	 * Size -> 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
	 */
	class ULightSensitivityPresenter : public UPresenter
	{
	public:
		class UClass*                                              LightSensitivityScreenWidgetClass;                       // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCompleteTime;                                        // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O4P1[0x1C];                                  // 0x00FC(0x001C) MISSED OFFSET (PADDING)

	public:
		void OnContinue();
		void OnCompletedFadeOut();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.LoadoutMenuPopupPresenter
	 * Size -> 0x0040 (FullSize[0x01C0] - InheritedSize[0x0180])
	 */
	class ULoadoutMenuPopupPresenter : public UGenericPopupPresenter
	{
	public:
		unsigned char                                              UnknownData_3VUR[0x10];                                  // 0x0180(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULoadoutMenuPopupViewData*>                   _loadoutPopupSlotData;                                   // 0x0190(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ULoadoutMenuPopupViewData*>                   _loadoutPopupInventoryData;                              // 0x01A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C6V6[0x10];                                  // 0x01B0(0x0010) MISSED OFFSET (PADDING)

	public:
		class ULoadoutMenuPopupViewData* SetLoadoutPopupViewData(const struct FInventorySlotData& SlotData, EPlayerRole PlayerRole);
		void OnSelectedCharacterChanged(int32_t selectedCharacterIndex);
		void OnLoadoutMenuSlotIsSelected(ELoadoutSlot slotSelected);
		void OnLoadoutMenuPresetSelected(int32_t presetId, ELoadoutSlot slotSelected);
		void OnLoadoutMenuPresetClicked(int32_t presetId, ELoadoutSlot slotSelected);
		void OnLoadoutMenuInventorySlotClick(ELoadoutSlot itemIndex, const class FName& ItemId);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.OnboardingMenuPresenter
	 * Size -> 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
	 */
	class UOnboardingMenuPresenter : public UPresenter
	{
	public:
		class UClass*                                              OnboardingMenuWidgetClass;                               // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOnboardingTutorialSubPresenter*                     _onboardingTutorialSubPresenter;                         // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameManualSubPresenter*                             _gameManualSubPresenter;                                 // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USubPresenter*                                       _activeSubPresenter;                                     // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q1O6[0x18];                                  // 0x0110(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnSetUIEnabled(bool Enabled);
		void OnSettingsAction();
		void OnQuitGameAction();
		void OnMenuTabSelectedAgain(EOnboardingMenuState menuState);
		void OnMenuTabSelected(EOnboardingMenuState menuState);
		void OnFirstOnboardingStepsDone(bool isFirstStepsDone);
		void OnChangeAccountAction();
		void OnBackAction();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.OnboardingTutorialSubPresenter
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UOnboardingTutorialSubPresenter : public USubPresenter
	{
	public:
		unsigned char                                              _onboardingTutorialWidget[0x10];                         // 0x0038(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_BY5K[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnSelectTutorial(const class FString& stepId, const class FString& tutorialId);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PawnObserver
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UPawnObserver : public UUIComponent
	{
	public:
		unsigned char                                              UnknownData_C1XT[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnPawnControllerSet(class APawn* Pawn, class AController* OldController, class AController* NewController);
		void OnLocallyObservedChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PingStatusPresenter
	 * Size -> 0x0038 (FullSize[0x0160] - InheritedSize[0x0128])
	 */
	class UPingStatusPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              PingStatusWidgetClass;                                   // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZA6[0x30];                                  // 0x0130(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PlayerProfilePresenter
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UPlayerProfilePresenter : public UPresenter
	{
	public:
		class UClass*                                              CorePlayerProfileWidgetClass;                            // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Filter;                                                  // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A2FY[0x14];                                  // 0x00FC(0x0014) MISSED OFFSET (PADDING)

	public:
		void RefreshWallet();
		void OnWalletUpdated(TArray<struct FShopWalletUpdate> walletUpdates);
		void OnShowImageViewer(bool voiceOverIsPlaying);
		void OnHideImageViewer();
		void OnCurrentSpecialEventChanged(const struct FCombinedSpecialEventData& previousSpecialEvent, ESpecialEventStatus previousSpecialEventStatus, const struct FCombinedSpecialEventData& currentSpecialEvent, ESpecialEventStatus currentSpecialEventStatus);
		class FText GetPlayerName();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PresenterContainer
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class UPresenterContainer : public UUserWidget
	{
	public:
		class UGridPanel*                                          Container;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PresenterGroup
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UPresenterGroup : public UUIComponent
	{
	public:
		EPresenterPhase                                            WidgetInstantiationPhase;                                // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R5U[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUIComponent*>                                _components;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UPresenter*>                                  _presenters;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PresenterManager
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UPresenterManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_7KLO[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPresenterGroup*>                             _persistentPresenterGroups;                              // 0x0040(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UPresenterGroup*>                             _transientPresenterGroups;                               // 0x0050(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2KOV[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnViewportCreated();
		void OnLoadingTransition(ELoadingTransitionType TransitionType);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PresenterRequirementFunction
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UPresenterRequirementFunction : public UObject
	{
	public:
		unsigned char                                              UnknownData_T4Q2[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.RootContainer
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class URootContainer : public UUIComponent
	{
	public:
		EGameLayer                                                 GameLayer;                                               // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93ZZ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnfocusedOpacity;                                        // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_44YC[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, class UPresenterContainer*>            _presenterContainers;                                    // 0x0048(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UUserWidget*                                         _rootWidget;                                             // 0x0098(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.RootWidget
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class URootWidget : public UUserWidget
	{
	public:
		class UCanvasPanel*                                        _canvasPanel;                                            // 0x0298(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.SkillCheckPresenter
	 * Size -> 0x0030 (FullSize[0x0158] - InheritedSize[0x0128])
	 */
	class USkillCheckPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              SkillCheckWidgetClass;                                   // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83QS[0x28];                                  // 0x0130(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.SubtitlesPresenter
	 * Size -> 0x0058 (FullSize[0x0148] - InheritedSize[0x00F0])
	 */
	class USubtitlesPresenter : public UPresenter
	{
	public:
		class UClass*                                              SubtitlesWidgetClass;                                    // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfCharactersPerLine;                               // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationPerLine;                                         // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       KeepSingleCharacter;                                     // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8KZ[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSubtitlesEntry>                             _entryQueue;                                             // 0x0108(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        _timerHandle;                                            // 0x0118(0x0008) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UNavigationScreen>                    _navigationScreen;                                       // 0x0120(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W1EZ[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnEntryTimedOut();
		bool IsSubtitlesEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.TemplatePresenter
	 * Size -> 0x0020 (FullSize[0x0148] - InheritedSize[0x0128])
	 */
	class UTemplatePresenter : public UHudPresenter
	{
	public:
		class UClass*                                              TemplateWidgetClass;                                     // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5I5P[0x18];                                  // 0x0130(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.TestBuildFlagPresenter
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UTestBuildFlagPresenter : public UPresenter
	{
	public:
		class UClass*                                              TestBuildFlagWidgetClass;                                // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETestBuildFlagPosition                                     testBuildFlagPosition;                                   // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8ZRP[0x17];                                  // 0x00F9(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.TestPresenter
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class UTestPresenter : public UPresenter
	{
	public:
		class UClass*                                              TestWidgetClass;                                         // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQHE[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudTutorialBlockingNotificationsPresenter
	 * Size -> 0x00E8 (FullSize[0x0210] - InheritedSize[0x0128])
	 */
	class UHudTutorialBlockingNotificationsPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              CoreTutorialBlockingNotificationsWidget;                 // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILEU[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATutorialsUtilities*                                 _tutorialsUtilities;                                     // 0x0138(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CWJL[0xD0];                                  // 0x0140(0x00D0) MISSED OFFSET (PADDING)

	public:
		void OnTutorialNotificationClosedByUserInput();
		void OnTutorialHudFadeOutTriggered();
		void OnTutorialHudFadeInTriggered();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudTutorialMysteryNotesPresenter
	 * Size -> 0x0018 (FullSize[0x0140] - InheritedSize[0x0128])
	 */
	class UHudTutorialMysteryNotesPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              CoreTutorialMysteryNoteWidget;                           // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KN8E[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.UIConsoleCommands
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UUIConsoleCommands : public UObject
	{
	public:
		unsigned char                                              UnknownData_CT6W[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		void DBD_ToggleTestWidget();
		void DBD_ToggleDPICurve();
		void DBD_ShowPresenterDebugInfo(int32_t presenterDebugMode);
		void DBD_ShowHUDWidgetsInfo(bool Show);
		void DBD_SetUMGVisible(bool IsVisible);
		void DBD_SetMenuScaleFactor(float ScaleFactor);
		void DBD_SetHUDWidgetVisible(int32_t Index, bool IsVisible);
		void DBD_SetHudVisible(bool IsVisible);
		void DBD_SetHudScaleFactor(float ScaleFactor);
		void DBD_SetApplicationScale(float ApplicationScale);
		void DBD_SetAllHUDWidgetsVisible(bool IsVisible);
		void DBD_ResetPresenters();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.UnlockPersonalPerksPopupPresenter
	 * Size -> 0x0010 (FullSize[0x0190] - InheritedSize[0x0180])
	 */
	class UUnlockPersonalPerksPopupPresenter : public UGenericPopupPresenter
	{
	public:
		TArray<class UMenuPerkViewData*>                           _perksData;                                              // 0x0180(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.WatermarkPresenter
	 * Size -> 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
	 */
	class UWatermarkPresenter : public UPresenter
	{
	public:
		class UClass*                                              WatermarkWidgetClass;                                    // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SG8L[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsUsingCommandLineArgument();
		bool IsSteamBuild();
		bool IsNonShippingBuild();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
