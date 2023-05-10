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
	 * Class DBDUIViewsCore.CoreBaseUserWidget
	 * Size -> 0x0078 (FullSize[0x0310] - InheritedSize[0x0298])
	 */
	class UCoreBaseUserWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_18RN[0x10];                                  // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScaleBox*                                           ScaleContainer;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsInteractive;                                           // 0x02B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EControlMode                                               _controlMode;                                            // 0x02B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScaleType                                                 ScaleType;                                               // 0x02B2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2RPD[0x5];                                   // 0x02B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDInputManager*                                    _inputManager;                                           // 0x02B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, class UWidgetAnimation*>                 _animationMap;                                           // 0x02C0(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void UpdateScale(float Scale);
		bool StopAnimationByName(const class FName& animName);
		void RegisterForInput();
		bool PlayAnimationByName(const class FName& animName, float starttime, int32_t loopcount, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		void OnControlModeChangedBP(EControlMode controlMode);
		class UWidgetAnimation* GetAnimationByName(const class FName& animName);
		void DeregisterFromInput();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.ArchiveCompendiumTooltipWidget
	 * Size -> 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])
	 */
	class UArchiveCompendiumTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDTextBlock*                                       TomeTitleTB;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       DescriptionTB;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreStoryLevelsSelectorWidget*                      StoryLevelsSelector;                                     // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTooltipData(const struct FCompendiumButtonData& tooltipViewData);
		void Reset();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.ArchiveNodeTooltipWidget
	 * Size -> 0x0050 (FullSize[0x0360] - InheritedSize[0x0310])
	 */
	class UArchiveNodeTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDImage*                                           BackgroundIMG;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           RarityIMG;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       NodeTitleTB;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       SubtitleTB;                                              // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   NodeDescriptionRTB;                                      // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ObjectiveWidgetClass;                                    // 0x0338(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVerticalBox*                                        ArchiveObjectivesContainer;                              // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreCurrencyForTooltipsWidget*                      ProgressionRewardWidget;                                 // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreCurrencyForTooltipsWidget*                      CurrencyRewardWidget;                                    // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   VignetteRTB;                                             // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTooltipData(const struct FArchiveNodeViewData& NodeViewData);
		void SetNodeType(EArchiveNodeType Type);
		void Reset();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.ArchiveRewardNodeTooltipWidget
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UArchiveRewardNodeTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UCustomizationTooltipWidget*                         CustomizationTooltip;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.AspectRatioBox
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UAspectRatioBox : public UContentWidget
	{
	public:
		float                                                      AspectRatio;                                             // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAspectRatioOverridden : 1;                             // 0x014C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3S2T[0x13];                                  // 0x014D(0x0013) MISSED OFFSET (PADDING)

	public:
		void SetAspectRatio(float inAspectRatio);
		void ClearAspectRatio();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.AspectRatioBoxSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAspectRatioBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JK21[0x16];                                  // 0x0052(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CharacterTooltipWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCharacterTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDTextBlock*                                       InstructionTB;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       LevelTB;                                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       MarketTB;                                                // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   DifficultyRTB;                                           // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTooltipData(const struct FCharacterTooltipViewData& characterViewData);
		void SetLevel(int32_t Level);
		void SetDifficulty(ECharacterDifficulty Difficulty);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreBaseLoadoutPartWidget
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class UCoreBaseLoadoutPartWidget : public UUserWidget
	{
	public:
		class UDBDImage*                                           ImageRarity;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           ImageIcon;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          TextStackCount;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetLoadoutStackCount(int32_t StackCount);
		void SetLoadoutPartRarity(EItemRarity Rarity);
		void SetLoadoutPartIcon();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreAddonWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCoreAddonWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_HH10[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreButtonWidget
	 * Size -> 0x00F8 (FullSize[0x0408] - InheritedSize[0x0310])
	 */
	class UCoreButtonWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDImage*                                           BackgroundIMG;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDImage*                                           AdditionalIconIMG;                                       // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHoveredDelegate;                                       // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnhoveredDelegate;                                     // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPressedDelegate;                                       // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleasedDelegate;                                      // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClickedDelegate;                                       // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              HoveredSfxName;                                          // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       HoveredSfx;                                              // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PressedSfxName;                                          // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       PressedSfx;                                              // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClickedSfxName;                                          // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ClickedSfx;                                              // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnalogCursorStickiness                                    AnalogCursorStickiness;                                  // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3K4K[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDButton*                                          HitzoneButton;                                           // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       LabelTB;                                                 // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextJustify                                               _alignment;                                              // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z8FR[0x21];                                  // 0x03D1(0x0021) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       SendAnalyticsData;                                       // 0x03F2(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0GRZ[0x5];                                   // 0x03F3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnalyticsName;                                           // 0x03F8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetVisible(EButtonWidgetVisibility visible);
		void SetRepeatable(bool isRepeatable, class UCurveFloat* repetitionDelayCurve);
		void SetPressable(bool isPressable);
		void SetLabel(const class FText& label);
		void SetHoverable(bool isHoverable);
		void SetHoldable(bool isHoldable);
		void SetEnabled(bool IsEnabled);
		void SetClickable(bool isClickable);
		void SetChargeable(bool isChargeable);
		void SetBackground();
		void SetAlignment(ETextJustify newAlignment);
		void SetAdditionalIcon();
		void OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnUnhovered();
		void OnReleasedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnReleased();
		void OnPressedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnPressed();
		void OnInternalUnhovered();
		void OnInternalReleased();
		void OnInternalPressed();
		void OnInternalHovered();
		void OnInternalClicked();
		void OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnHovered();
		void OnEnabledChanged(bool IsEnabled);
		void OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnClicked();
		void OnAlignmentChanged(ETextJustify newAlignment);
		bool IsEnabled();
		struct FGeometry GetHitzonePaintSpaceGeometry();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreSelectableButtonWidget
	 * Size -> 0x0038 (FullSize[0x0440] - InheritedSize[0x0408])
	 */
	class UCoreSelectableButtonWidget : public UCoreButtonWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectedChangedDelegate;                               // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSelectedAgainDelegate;                                 // 0x0418(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              _analyticsName;                                          // 0x0428(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_41UC[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateBackgroundSkin(class UMaterialInterface* skinMaterial);
		void SetSelected(bool IsSelected);
		void SetSelectable(bool IsSelectable);
		void OnSelectedChangedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected);
		void OnSelectedChanged(bool IsSelected);
		void OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget);
		bool IsSelected();
		bool IsSelectable();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget
	 * Size -> 0x0068 (FullSize[0x04A8] - InheritedSize[0x0440])
	 */
	class UCoreArchiveChallengeReminderSlotWidget : public UCoreSelectableButtonWidget
	{
	public:
		class UCoreArchiveQuestNodeWidget*                         Node;                                                    // 0x0440(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           EmptySlotImage;                                          // 0x0448(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           InactiveBG;                                              // 0x0450(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           ActiveBG;                                                // 0x0458(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           SmokeBackground;                                         // 0x0460(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           ProgressBar;                                             // 0x0468(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           SelectorHighlight;                                       // 0x0470(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       TitleTB;                                                 // 0x0478(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       SubtitleTB;                                              // 0x0480(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       InactiveTitleTB;                                         // 0x0488(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       InactiveSubtitleTB;                                      // 0x0490(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreOnHoverBorderWidget*                            OnHoverBorder;                                           // 0x0498(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPlayerRole                                                _slotRole;                                               // 0x04A0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasActiveHoverEffect;                                   // 0x04A1(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2XX3[0x6];                                   // 0x04A2(0x0006) MISSED OFFSET (PADDING)

	public:
		void UpdateVisualState(const struct FArchiveChallengeReminderViewData& Data);
		void UpdateProgressBar(float Progress);
		void UpdateActiveState(bool IsActive, bool PlayAnimation);
		void SwapChallenge(const struct FArchiveChallengeReminderViewData& Data);
		void SetSlotSelectorState(bool isSelectorOpen);
		void SetQuestNodeHoverEffect(bool IsHovered);
		void SetData(const struct FArchiveChallengeReminderViewData& Data);
		void InitVisualState();
		void Init(EPlayerRole Role);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveCompendiumButtonWidget
	 * Size -> 0x0088 (FullSize[0x0490] - InheritedSize[0x0408])
	 */
	class UCoreArchiveCompendiumButtonWidget : public UCoreButtonWidget
	{
	public:
		ETooltipHorizontalAlignment                                HorizontalAlignment;                                     // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETooltipVerticalAlignment                                  VerticalAlignment;                                       // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1U6B[0x6];                                   // 0x040A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDImage*                                           TomeProgressStyleTexture;                                // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       VolumeIndex;                                             // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FCompendiumButtonData                               _compendiumButtonData;                                   // 0x0420(0x0070) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		void SetLevelProgressionVisual(int32_t buttonLevel, EArchivesStoryLevelStatus levelStatus);
		void SetGhostStory(bool isGhostStory);
		void SetButtonVisual(const struct FCompendiumButtonData& buttonData);
		void SetButtonData(const struct FCompendiumButtonData& buttonData);
		void ResetVisuals();
		void OnButtonUnhovered();
		void OnButtonHovered();
		class FString GetTomeId();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTabContentWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCoreTabContentWidget : public UCoreBaseUserWidget
	{
	public:
		TArray<class UWidget*>                                     ContentWidgets;                                          // 0x0310(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		float                                                      _contentFadeInTime;                                      // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                _contentFadeInEasing;                                    // 0x0324(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CCZC[0x3];                                   // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _contentFadeOutTime;                                     // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                _contentFadeOutEasing;                                   // 0x032C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P8HC[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (PADDING)

	public:
		void StopFadeInTweening(float opacityValue);
		void ResetFade();
		void FadeOutContent();
		void FadeInContent();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveCompendiumWidget
	 * Size -> 0x0058 (FullSize[0x0388] - InheritedSize[0x0330])
	 */
	class UCoreArchiveCompendiumWidget : public UCoreTabContentWidget
	{
	public:
		unsigned char                                              UnknownData_WDJA[0x8];                                   // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _compendiumButtonWidgetClass;                            // 0x0338(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onCompendiumClickedDelegate;                            // 0x0340(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class UGridPanel*                                          CompendiumGrid;                                          // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDScrollBox*                                       CompendiumScroll;                                        // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _cellsPerRow;                                            // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EZGP[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoreArchiveCompendiumButtonWidget*>          _compendiumButtonWidgetPool;                             // 0x0368(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreArchiveCompendiumButtonWidget*>          _compendiumButtonWidgetList;                             // 0x0378(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetGridSlot(class UGridSlot* GridSlot, int32_t Index);
		void ResetScroll();
		void Reset();
		void OnPastStoryClicked(class UCoreButtonWidget* Button);
		void CreateGhostStories(int32_t currentStoryNum);
		class UCoreArchiveCompendiumButtonWidget* CreateAndAddButtonToGrid(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveJournalImageViewerWidget
	 * Size -> 0x0058 (FullSize[0x0388] - InheritedSize[0x0330])
	 */
	class UCoreArchiveJournalImageViewerWidget : public UCoreTabContentWidget
	{
	public:
		unsigned char                                              UnknownData_WE2O[0x8];                                   // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreInputSwitcherWidget*                            BackInputSwitcher;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreInputSwitcherWidget*                            TextVisibilityInputSwitcher;                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             _backActionDelegate;                                     // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _imageViewerTextVisibilityActionDelegate;                // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _imageViewerVoiceOverPlayedDelegate;                     // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _imageViewerVoiceOverAutoplayDelegate;                   // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void SetVoiceOverText(const class FText& playVoiceOverText, const class FText& stopVoiceOverText, const class FText& autoplayVoiceOverText);
		void SetTextVisibilityInputText(const class FText& DisplayText, const class FText& hideText);
		void SetScrollData(const class FText& journalEntryScrollPromptText);
		void SetData(const struct FArchivesVignetteEntryViewData& Data, bool hasTitle, bool hasDescription);
		void OnVoiceOverPlay();
		void OnVoiceOverAutoPlay(bool autoplay);
		void OnTextVisibilityChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveJournalWidget
	 * Size -> 0x00E8 (FullSize[0x0418] - InheritedSize[0x0330])
	 */
	class UCoreArchiveJournalWidget : public UCoreTabContentWidget
	{
	public:
		unsigned char                                              UnknownData_VKR1[0x8];                                   // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreArchiveVignetteButtonContainerWidget*           VignetteButtonContainer;                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreArchiveVignetteEntryContainerWidget*            VignetteEntryContainer;                                  // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreArchiveVignetteCinematicContainerWidget*        VignetteCinematicsContainer;                             // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            LeftArrowInputSwitcher;                                  // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            RightArrowInputSwitcher;                                 // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              DebugRewardImage[0x30];                                  // 0x0360(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RewardImageMaxDescriptionLength;                         // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P7ZZ[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             _vignetteSelectedDelegate;                               // 0x0398(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _vignetteEntrySelectedDelegate;                          // 0x03A8(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _vignetteCinematicPlayedDelegate;                        // 0x03B8(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _vignetteVoiceOverPlayedDelegate;                        // 0x03C8(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _vignetteVoiceOverAutoplayDelegate;                      // 0x03D8(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _vignetteShowImageViewerDelegate;                        // 0x03E8(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JK0F[0x20];                                  // 0x03F8(0x0020) MISSED OFFSET (PADDING)

	public:
		void ShowImageViewer();
		void SetVoiceOverText(const class FText& playVoiceOverText, const class FText& stopVoiceOverText, const class FText& autoplayVoiceOverText);
		void SetVoiceOverButtonsVisibility(bool IsVisible);
		void SetVignetteText(const class FText& titleText, const class FText& subtitleText);
		void SetTopFogOffset(bool hasTitle, bool hasDescription);
		void SetEntryText(const class FText& titleText, const class FText& descriptionText);
		void SetEntryImage(const class FText& titleText, const class FText& descriptionText, float textureOffset);
		void SetBottomFogOffset(bool HasAudio);
		void OnVoiceOverPlay();
		void OnVoiceOverAutoPlay(bool autoplay);
		void OnVignetteEntrySelected(class UCoreSelectableButtonWidget* selectedButton);
		void OnVignetteCinematicSelected(class UCoreSelectableButtonWidget* selectedButton);
		void OnVignetteButtonSelected(class UCoreSelectableButtonWidget* selectedButton);
		void OnRightArrowTriggered();
		void OnRewardImageLoaded(bool success, const class FText& titleText, const class FText& descriptionText, float textureOffset);
		void OnLeftArrowTriggered();
		void OnJournalEntriesUnlocked();
		void OnFirstJournalEntryUnlocked();
		void InitializeArrow(class UCoreInputSwitcherWidget* arrowWidget, bool Active);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveLevelProgressionWidget
	 * Size -> 0x0068 (FullSize[0x0378] - InheritedSize[0x0310])
	 */
	class UCoreArchiveLevelProgressionWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_4D77[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             _levelSelectedDelegate;                                  // 0x0318(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _levelAnimationDoneDelegate;                             // 0x0328(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _levelRewardAnimationDoneDelegate;                       // 0x0338(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _levelUnlockedAnimationDoneDelegate;                     // 0x0348(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class UCoreStoryLevelsSelectorWidget*                      StoryLevelsSelector;                                     // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       LevelNumberTF;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       LevelCompletionTF;                                       // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            SideContent;                                             // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnTomeLevelUnlockedAnimation();
		void OnStoryLevelSelected(class UCoreSelectableButtonWidget* selectedButton);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveMenuWidget
	 * Size -> 0x0268 (FullSize[0x0578] - InheritedSize[0x0310])
	 */
	class UCoreArchiveMenuWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_1K91[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreTabContainerWidget*                             ArchiveMenuTabs;                                         // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreArchiveChallengeReminderSlotWidget*             SurvivorChallengeSlot;                                   // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreArchiveChallengeReminderSlotWidget*             KillerChallengeSlot;                                     // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreArchiveSlotSelectorWidget*                      SlotSelector;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreInputSwitcherWidget*                            BackInputSwitcher;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreButtonWidget*                                   InfoButton;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             _backActionDelegate;                                     // 0x0348(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _infoClickedDelegate;                                    // 0x0358(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _slotSelectorClosedDelegate;                             // 0x0368(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             MenuTabSelectedDelegate;                                 // 0x0378(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _challengeReminderClickedDelegate;                       // 0x0388(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _slotSelectionSelectedDelegate;                          // 0x0398(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FText                                                _riftRemainingTimeText;                                  // 0x03A8(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MY3K[0x1B8];                                 // 0x03C0(0x01B8) MISSED OFFSET (PADDING)

	public:
		void SetScrollData(const class FText& vignetteListScrollPromptText, const class FText& journalEntryScrollPromptText);
		void OnSlotSelectionCancelled();
		void OnSlotSelected(EPlayerRole Role);
		void OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);
		void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);
		void OnInfoButtonClicked(class UCoreButtonWidget* buttonTarget);
		void OnChallengeReminderClick(class UCoreButtonWidget* Button);
		class FText GetTimeRemainingLabelFromMenuState(EArchiveMenuState menuState);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveObjectiveWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCoreArchiveObjectiveWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDRichTextBlock*                                   ObjectiveDescriptionRTB;                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           ProgressBar;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       CurrentProgressTB;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       MaxProgressTB;                                           // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetData(const struct FArchiveNodeObjectiveViewData& objectiveData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreBasePopupWidget
	 * Size -> 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])
	 */
	class UCoreBasePopupWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_ROAF[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDRichTextBlock*                                   titleText;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   MessageText;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Show(class UBasePopupViewData* Data);
		void Hide();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreGenericPopupWidget
	 * Size -> 0x0040 (FullSize[0x0368] - InheritedSize[0x0328])
	 */
	class UCoreGenericPopupWidget : public UCoreBasePopupWidget
	{
	public:
		unsigned char                                              UnknownData_RBEB[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreInputSwitcherWidget*                            ProgressionButton;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            RegressionButton;                                        // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            AlternativeButton;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _popupActionDelegate;                                    // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _popupBackActionDelegate;                                // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void OnRegressionAction();
		void OnProgressionAction();
		void OnAlternativeAction();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchivePassPurchasePopupWidget
	 * Size -> 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
	 */
	class UCoreArchivePassPurchasePopupWidget : public UCoreGenericPopupWidget
	{
	public:
		unsigned char                                              UnknownData_R9YA[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (PADDING)

	public:
		class FText GetTranslatedAvailabilityTitleText();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveQuestMapWidget
	 * Size -> 0x0178 (FullSize[0x04A8] - InheritedSize[0x0330])
	 */
	class UCoreArchiveQuestMapWidget : public UCoreTabContentWidget
	{
	public:
		unsigned char                                              UnknownData_GK22[0x8];                                   // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvasPanel*                                        ChallengesContainer;                                     // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ArchiveQuestNodeWidgetClass;                             // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ArchiveQuestPathWidgetClass;                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxDisplayedNodes;                                       // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxDisplayedPaths;                                       // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      QuestMapRevealDuration;                                  // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NodeRevealDuration;                                      // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PathRevealDuration;                                      // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                NodeRevealEasingType;                                    // 0x0364(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                PathRevealEasingType;                                    // 0x0365(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K0H3[0x2];                                   // 0x0366(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       QuestMapGenerationSound;                                 // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FArchiveNodeGraphViewData>                   _nodeGraphDataList;                                      // 0x0370(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FArchiveMapPathViewData>                     _pathDataList;                                           // 0x0380(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _questMapCreatedDelegate;                                // 0x0390(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _questNodeHoveredDelegate;                               // 0x03A0(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _questNodeUnhoveredDelegate;                             // 0x03B0(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _questNodeSelectedDelegate;                              // 0x03C0(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		TMap<class FName, class UCoreArchiveQuestNodeWidget*>      _nodeDictionary;                                         // 0x03D0(0x0050) ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<class FName, class UCoreArchiveQuestPathWidget*>      _pathDictionary;                                         // 0x0420(0x0050) ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UCoreArchiveQuestNodeWidget*>                 _nodeWidgetPool;                                         // 0x0470(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreArchiveQuestPathWidget*>                 _pathWidgetPool;                                         // 0x0480(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9J3I[0x18];                                  // 0x0490(0x0018) MISSED OFFSET (PADDING)

	public:
		void UnbindFromPath(class UCoreArchiveQuestPathWidget* Path);
		void UnbindFromNode(class UCoreArchiveQuestNodeWidget* Node);
		void SetupPath(const struct FArchiveMapPathViewData& PathData);
		void SetupNode(const struct FArchiveNodeGraphViewData& NodeData);
		void OnNodeUnhovered(class UCoreButtonWidget* buttonTarget);
		void OnNodesRevealCompleted();
		void OnNodeHovered(class UCoreButtonWidget* buttonTarget);
		void OnNodeClicked(class UCoreButtonWidget* buttonTarget);
		void BindToPath(class UCoreArchiveQuestPathWidget* Path);
		void BindToNode(class UCoreArchiveQuestNodeWidget* Node);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveQuestEditorWidget
	 * Size -> 0x0100 (FullSize[0x05A8] - InheritedSize[0x04A8])
	 */
	class UCoreArchiveQuestEditorWidget : public UCoreArchiveQuestMapWidget
	{
	public:
		unsigned char                                              UnknownData_2RC1[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinePair>                                   _gridLinesListVertical;                                  // 0x04B0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FLinePair>                                   _gridLinesListHorizontal;                                // 0x04C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UCoreArchiveQuestNodeWidget*                         _activeNode;                                             // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreArchiveQuestPathWidget*                         _pathInCreation;                                         // 0x04D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _questEditorSaveDelegate;                                // 0x04E0(0x0010) ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       _isCreatingPath;                                         // 0x04F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_802H[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBorder*                                             EditorBorder;                                            // 0x04F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCheckBox*                                           MoveNodesRadioCheckbox;                                  // 0x0500(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCheckBox*                                           LinkNodesRadioCheckbox;                                  // 0x0508(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCheckBox*                                           GridVisibilityCheckbox;                                  // 0x0510(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCheckBox*                                           SnapGridCheckbox;                                        // 0x0518(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    GridTileWidthInputPixelsTextBox;                         // 0x0520(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    GridTileWidthInputPercentTextBox;                        // 0x0528(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    GridTileHeightInputPixelsTextBox;                        // 0x0530(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    GridTileHeightInputPercentTextBox;                       // 0x0538(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreKeyListenerButtonWidget*                        RefreshGridButton;                                       // 0x0540(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            NodeCoordinateContainer;                                 // 0x0548(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    NodeXInputPixels;                                        // 0x0550(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    NodeXInputPercent;                                       // 0x0558(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    NodeYInputPixels;                                        // 0x0560(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    NodeYInputPercent;                                       // 0x0568(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreKeyListenerButtonWidget*                        SubmitButton;                                            // 0x0570(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreKeyListenerButtonWidget*                        SaveQuestMapButton;                                      // 0x0578(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVerticalBox*                                        SaveInfoContainer;                                       // 0x0580(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       PathTextBlock;                                           // 0x0588(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GridTileHeightValuePercent;                              // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GridTileWidthValuePercent;                               // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsSnapping;                                              // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsGridVisible;                                           // 0x0599(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEditorMode                                                Mode;                                                    // 0x059A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L997[0xD];                                   // 0x059B(0x000D) MISSED OFFSET (PADDING)

	public:
		void SetHighlightedGridLines(int32_t verticalIndex, int32_t horizontalIndex);
		void SetGridLinesArray(TArray<struct FLinePair> gridArrayVertical, TArray<struct FLinePair> gridArrayHorizontal);
		void OnSnapGridChecked(bool checked);
		void OnSaveGraphClick(class UCoreButtonWidget* buttonTarget);
		void OnRefreshGridClick(class UCoreButtonWidget* buttonTarget);
		void OnPathClicked(class UCoreButtonWidget* buttonTarget);
		void OnNodeYPixelChanged(const class FText& Text);
		void OnNodeYPercentChanged(const class FText& Text);
		void OnNodeXPixelChanged(const class FText& Text);
		void OnNodeXPercentChanged(const class FText& Text);
		void OnNodeSubmitClick(class UCoreButtonWidget* buttonTarget);
		void OnNodeBeginDrag(const class FName& ID);
		void OnMoveNodesModeChecked(bool checked);
		void OnLinkNodesModeChecked(bool checked);
		void OnGridVisbilityChecked(bool checked);
		void OnGridTileWidthPixelChanged(const class FText& Text);
		void OnGridTileWidthPercentChanged(const class FText& Text);
		void OnGridTileHeightPixelChanged(const class FText& Text);
		void OnGridTileHeightPercentChanged(const class FText& Text);
		void NodeDragged(const struct FVector2D& position);
		void IntermediatePathMove(const struct FVector2D& position);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveQuestNodeWidget
	 * Size -> 0x0150 (FullSize[0x0558] - InheritedSize[0x0408])
	 */
	class UCoreArchiveQuestNodeWidget : public UCoreButtonWidget
	{
	public:
		unsigned char                                              UnknownData_M2GP[0x10];                                  // 0x0408(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETooltipHorizontalAlignment                                HorizontalAlignment;                                     // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETooltipVerticalAlignment                                  VerticalAlignment;                                       // 0x0419(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRPB[0x6];                                   // 0x041A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDImage*                                           Icon;                                                    // 0x0420(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            VignetteTextIndicatorOverlay;                            // 0x0428(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            VignetteImageIndicatorOverlay;                           // 0x0430(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<ENodeStatusChange, class UAkAudioEvent*>              StatusChangeAudioEvents;                                 // 0x0438(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FArchiveNodeViewData                                _nodeData;                                               // 0x0488(0x00B8) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FName                                                _nodeId;                                                 // 0x0540(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChallengeReminderNode;                                // 0x054C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDraggable;                                            // 0x054D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M7MJ[0xA];                                   // 0x054E(0x000A) MISSED OFFSET (PADDING)

	public:
		void UpdateStoryIndicatorOpacity(bool IsImageReward, bool isCompleted);
		void UpdateNode(const struct FArchiveNodeViewData& Data);
		void UpdateAllStoryIndicators();
		void ShowRewardNodeTooltip();
		void SetRewardRarity(EItemRarity Rarity);
		void Reset();
		void OnStatusChanged(ENodeStatusChange nodeStatusChange);
		void OnReset();
		void OnInit();
		bool NeedsChallengeReminderHoverAnimation();
		bool IsValidNode();
		bool IsSelectableNode();
		void InitNode(const class FName& nodeId, const struct FArchiveNodeViewData& Data, bool isChallengeReminderNode);
		void HandleStatusChange(EStoryNodeState prevStatus, EStoryNodeState currentStatus);
		void BroadcastDragBegin();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveQuestPathWidget
	 * Size -> 0x0048 (FullSize[0x0450] - InheritedSize[0x0408])
	 */
	class UCoreArchiveQuestPathWidget : public UCoreButtonWidget
	{
	public:
		class UOverlay*                                            PathOverlay;                                             // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           PathImage;                                               // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EArchivePathStatus                                         _status;                                                 // 0x0418(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8O4V[0x3];                                   // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FArchiveMapPathViewData                             _data;                                                   // 0x041C(0x002C) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0C2B[0x8];                                   // 0x0448(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdatePath(const struct FArchiveMapPathViewData& Data);
		void SetVisualState(EArchivePathStatus pathStatus);
		void Reset();
		void InitPath(const struct FArchiveMapPathViewData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveRiftTierItem
	 * Size -> 0x0060 (FullSize[0x02F8] - InheritedSize[0x0298])
	 */
	class UCoreArchiveRiftTierItem : public UUserWidget
	{
	public:
		class FScriptMulticastDelegate                             _itemClickedDelegate;                                    // 0x0298(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _unlockAnimationCompleteDelegate;                        // 0x02A8(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class UGridPanel*                                          FreeRewardsContainer;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          PremiumRewardsContainer;                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreRewardWrapperWidget*>                    _freeRewardWidgets;                                      // 0x02C8(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UCoreRewardWrapperWidget*>                    _premiumRewardWidgets;                                   // 0x02D8(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _unlockAnimationCompleteSound;                           // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7LYW[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetLockedState(bool IsLocked, bool hasPremium);
		void SetGenericData(const struct FArchiveRiftTierRewardsViewData& Data);
		void PlayUnlockanimation(bool IsPremiumUnlocked, float Delay);
		void OnRewardClicked(class UCoreButtonWidget* Button);
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveRiftWidget
	 * Size -> 0x02B8 (FullSize[0x05E8] - InheritedSize[0x0330])
	 */
	class UCoreArchiveRiftWidget : public UCoreTabContentWidget
	{
	public:
		unsigned char                                              UnknownData_3H0I[0x8];                                   // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETooltipHorizontalAlignment                                HorizontalAlignment;                                     // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETooltipVerticalAlignment                                  VerticalAlignment;                                       // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPNF[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             _rewardItemClickedDelegate;                              // 0x0340(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _rewardCurrencyClickedDelegate;                          // 0x0350(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _purchasePremiumPassClickedDelegate;                     // 0x0360(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _purchaseTierClickedDelegate;                            // 0x0370(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _outfitClickedDelegate;                                  // 0x0380(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _bonusTierShownDelegate;                                 // 0x0390(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		struct FArchivesRiftGenericViewData                        _genericData;                                            // 0x03A0(0x0020) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FArchiveRiftTierRewardsViewData>             _riftTiersData;                                          // 0x03C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		int32_t                                                    _currentPage;                                            // 0x03D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _maxTierItemsPerPage;                                    // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animationItemDelay;                                     // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animationPremiumTrackDelay;                             // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _pageSwitchFadeDuration;                                 // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                _pageSwitchFadeTweenEasing;                              // 0x03E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PYBF[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _archiveRiftTierItemClass;                               // 0x03E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                _freePurchaseButtonText;                                 // 0x03F0(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		class FText                                                _freePurchaseDescriptionText;                            // 0x0408(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		class FText                                                _premiumPurchaseButtonText;                              // 0x0420(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		class FText                                                _premiumPurchaseDescriptionText;                         // 0x0438(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		class FText                                                _maxTierText;                                            // 0x0450(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		class FText                                                _currentProgressInfoText;                                // 0x0468(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		struct FCurrencyProgressionTooltipViewData                 _riftFragmentTooltipViewData;                            // 0x0480(0x00C0) BlueprintVisible, Transient, Protected, NativeAccessSpecifierProtected
		class UCoreToggleButtonWidget*                             OutfitButton;                                            // 0x0540(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            PurchaseButton;                                          // 0x0548(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHorizontalBox*                                      RewardGrid;                                              // 0x0550(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   TierInfoDescriptionRTB;                                  // 0x0558(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       TierInfoTopTB;                                           // 0x0560(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       TierInfoBottomTB;                                        // 0x0568(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       FreeTrackLabelTB;                                        // 0x0570(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       PremiumTrackLabelTB;                                     // 0x0578(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       PaginationTB;                                            // 0x0580(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            PaginationPreviousButton;                                // 0x0588(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            PaginationNextButton;                                    // 0x0590(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreArchiveRiftTierItem*>                    _tierItemPool;                                           // 0x0598(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UUITweenInstance*                                    _contentVisbilityTween;                                  // 0x05A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUITweenInstance*                                    _pageSwitchVisbilityTween;                               // 0x05B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoreSelectableButtonWidget*                         _currentSelectedReward;                                  // 0x05B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8620[0x28];                                  // 0x05C0(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetVisualData(const struct FArchivesRiftGenericViewData& Data);
		void SetTierVisuals(ETierType TierType);
		void SetPaginationVisuals(bool showBonusTierHighlight, const class FText& bonusTierTooltipText);
		void PlayPremiumTrackUnlockAnimation();
		void OnRewardItemClicked(int32_t tier, class UCoreButtonWidget* Button, bool isPremium, int32_t Index);
		void OnRewardAnimationCompleted();
		void OnPreviousButtonClicked();
		void OnOutfitButtonUnhovered(class UCoreButtonWidget* Button);
		void OnOutfitButtonHovered(class UCoreButtonWidget* Button);
		void OnOutfitButtonClicked(class UCoreButtonWidget* Button);
		void OnNextButtonClicked();
		void OnCurrentPageAnimationCompleted();
		void DisplayPage(class UUITweenInstance* tween);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveSlotSelectorWidget
	 * Size -> 0x0048 (FullSize[0x0358] - InheritedSize[0x0310])
	 */
	class UCoreArchiveSlotSelectorWidget : public UCoreBaseUserWidget
	{
	public:
		class UArchiveNodeTooltipWidget*                           NodeTooltip;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreKeyListenerInputPromptWidget*                   SurvivorSlotPromptWidget;                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreKeyListenerInputPromptWidget*                   BothSlotPromptWidget;                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreKeyListenerInputPromptWidget*                   KillerSlotPromptWidget;                                  // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            CancelPromptWidget;                                      // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_52VG[0x20];                                  // 0x0338(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorSelection();
		void OnKillerSelection();
		void OnCancelSelection();
		void OnBothSelection();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget
	 * Size -> 0x0150 (FullSize[0x04B8] - InheritedSize[0x0368])
	 */
	class UCoreArchiveTierPurchasePopupWidget : public UCoreGenericPopupWidget
	{
	public:
		unsigned char                                              UnknownData_PKIN[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreInputSwitcherWidget*                            LessInputSwitcher;                                       // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            MoreInputSwitcher;                                       // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   CurrentQuantityText;                                     // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           ImageContainer;                                          // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            PriceContainer;                                          // 0x0390(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       PriceText;                                               // 0x0398(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       DiscountText;                                            // 0x03A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           CurrencyIcon;                                            // 0x03A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _quantityCurve;                                          // 0x03B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                _bonusTierStyleName;                                     // 0x03B8(0x0018) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              _currencyIconTextures[0x50];                             // 0x03D0(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<ECurrencyType, struct FSlateColor>                    _currencyTextColors;                                     // 0x0420(0x0050) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSlateColor                                         _unaffordablePriceColor;                                 // 0x0470(0x0028) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _confirmPurchaseDelegate;                                // 0x0498(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XOMC[0x10];                                  // 0x04A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetVisualData(class UArchiveTierPurchasePopupViewData* ViewData);
		void OnMoreInputTriggered();
		void OnLessInputTriggered();
		void OnConfirmPurchase();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveTomeWidget
	 * Size -> 0x0048 (FullSize[0x0378] - InheritedSize[0x0330])
	 */
	class UCoreArchiveTomeWidget : public UCoreTabContentWidget
	{
	public:
		unsigned char                                              UnknownData_JK8C[0x8];                                   // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _archiveQuestEditorWidgetClass;                          // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreArchiveQuestEditorWidget*                       _archiveQuestEditorWidget;                               // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreTabContainerWidget*                             ArchiveTomeSideNav;                                      // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetSwitcher*                                     EditorSwitcher;                                          // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MenuTabSelectedDelegate;                                 // 0x0358(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _editorSwitchCompleteDelegate;                           // 0x0368(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected

	public:
		void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreButtonSelector
	 * Size -> 0x0050 (FullSize[0x0360] - InheritedSize[0x0310])
	 */
	class UCoreButtonSelector : public UCoreBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectedDelegate;                                      // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSelectedAgainDelegate;                                 // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnselectedDelegate;                                    // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UCoreSelectableButtonWidget*>                 _buttons;                                                // 0x0340(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9QW9[0x10];                                  // 0x0350(0x0010) MISSED OFFSET (PADDING)

	public:
		void UnselectCurrent();
		void SetInputsEnabled(bool Enabled);
		void SetAllEnabled(bool Enabled);
		bool SelectPrevious();
		bool SelectNext();
		bool Select(class UCoreSelectableButtonWidget* buttonToSelect, bool performAction);
		void OnUnselectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* unselectedButton);
		void OnSelectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton);
		void OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton);
		void OnButtonSelectedChanged(class UCoreSelectableButtonWidget* selectedButton, bool IsSelected);
		void OnButtonSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);
		bool HasSelection();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTabContainerWidget
	 * Size -> 0x0030 (FullSize[0x0390] - InheritedSize[0x0360])
	 */
	class UCoreTabContainerWidget : public UCoreButtonSelector
	{
	public:
		bool                                                       AlignHorizontally;                                       // 0x0360(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7VB3[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             TabPadding;                                              // 0x0364(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0BLT[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CoreTabClass;                                            // 0x0378(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          TabContainer;                                            // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseControllerTabSwitching;                               // 0x0388(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CanLoop;                                                 // 0x0389(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       FillContainerSpace;                                      // 0x038A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SendAnalyticsData;                                       // 0x038B(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_53SE[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (PADDING)

	public:
		void UpdateBackgroundSkin(int32_t Key, class UMaterialInterface* skinMaterial);
		void SetUseControllerTabSwitching(bool Enabled);
		void SetTabVisible(int32_t Key, bool visible);
		void SetTabEnabled(int32_t Key, bool Enabled);
		void SetNotificationVisibility(int32_t Key, bool HasNotification);
		void RemoveTabs();
		void OnTabSelected(class UCoreSelectableButtonWidget* selectedButton);
		void LayOutTabs();
		void Init(TArray<struct FTabWidgetData> tabsData);
		class UCoreTabWidget* GetTab(int32_t Key);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveVignetteButtonContainerWidget
	 * Size -> 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
	 */
	class UCoreArchiveVignetteButtonContainerWidget : public UCoreTabContainerWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTabWidget
	 * Size -> 0x0038 (FullSize[0x0478] - InheritedSize[0x0440])
	 */
	class UCoreTabWidget : public UCoreSelectableButtonWidget
	{
	public:
		class UDBDTextBlock*                                       TabTextField;                                            // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           TabImage;                                                // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             NotificationWidget;                                      // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                LabelTooltipText;                                        // 0x0458(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0LKZ[0x8];                                   // 0x0470(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetNotificationVisibility(bool HasNotification);
		void SetIconTexture(class UTexture2D* IconTexture, const struct FVector2D& forcedIconSize);
		void SetIconSoftTexture(const struct FVector2D& forcedIconSize);
		void PostInit();
		bool HasLabelTooltip();
		class FText GetTabText();
		int32_t GetKey();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveVignetteButtonWidget
	 * Size -> 0x0078 (FullSize[0x04F0] - InheritedSize[0x0478])
	 */
	class UCoreArchiveVignetteButtonWidget : public UCoreTabWidget
	{
	public:
		unsigned char                                              UnknownData_HWD9[0x70];                                  // 0x0478(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _subtitleMaxLength;                                      // 0x04E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7VBA[0x4];                                   // 0x04EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetVisualData(const class FText& vignetteTitle, const class FText& vignetteSubtitle, const class FText& vignetteProgressText, bool displayProgress, float vignetteProgress, bool isUnread, const class FText& unreadIndicatorText, bool showCinematics, bool lockCinematics);
		void SetVignetteRead(bool IsRead);
		void SetData(const struct FArchivesVignetteViewData& vignetteDataList);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveVignetteCinematicButton
	 * Size -> 0x0008 (FullSize[0x0480] - InheritedSize[0x0478])
	 */
	class UCoreArchiveVignetteCinematicButton : public UCoreTabWidget
	{
	public:
		bool                                                       isForceDisabled;                                         // 0x0478(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PRAR[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (PADDING)

	public:
		void UnlockCinematic();
		void SetIsForceDisabled(bool isForceDisabled);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveVignetteCinematicContainerWidget
	 * Size -> 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
	 */
	class UCoreArchiveVignetteCinematicContainerWidget : public UCoreTabContainerWidget
	{
	public:
		void UnlockCinematics();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget
	 * Size -> 0x0028 (FullSize[0x04A0] - InheritedSize[0x0478])
	 */
	class UCoreArchiveVignetteEntryButtonWidget : public UCoreTabWidget
	{
	public:
		class UTexture2D*                                          TextIconLocked;                                          // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          TextIconUnlocked;                                        // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          ImageIconLocked;                                         // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          ImageIconUnlocked;                                       // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YYAP[0x8];                                   // 0x0498(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnlockEntry();
		void SetVisualData(int32_t entryNumber, bool IsRead, const class FText& unreadIndicatorText, bool isImage);
		void SetData(int32_t entryNumber, bool IsRead, bool isImage);
		int32_t GetEntryNumber();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget
	 * Size -> 0x0040 (FullSize[0x03D0] - InheritedSize[0x0390])
	 */
	class UCoreArchiveVignetteEntryContainerWidget : public UCoreTabContainerWidget
	{
	public:
		unsigned char                                              UnknownData_6JZL[0x20];                                  // 0x0390(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProgressBar*                                        JournalProgressBar;                                      // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                AnimationEasing;                                         // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UPIW[0x3];                                   // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProgressAnimationDuration;                               // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_34FY[0x10];                                  // 0x03C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnUnlockProgress(class UUITweenInstance* tween);
		void OnUnlockComplete(class UUITweenInstance* tween);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreBaseHudWidget
	 * Size -> 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])
	 */
	class UCoreBaseHudWidget : public UCoreBaseUserWidget
	{
	public:
		float                                                      FocusAnimationDuration;                                  // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FocusAnimationDelay;                                     // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                FocusAnimationEasing;                                    // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZY3H[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FocusAnimationMaxOpacity;                                // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FocusAnimationMinOpacity;                                // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P9UB[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (PADDING)

	public:
		bool ShouldPlayFocusAnimation();
		void PlayFocusAnimation();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreBinkVideoPlayerWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCoreBinkVideoPlayerWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDImage*                                           VideoBinkBG;                                             // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            VideoBinkSizeBox;                                        // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScaleBox*                                           VideoBinkScaleBox;                                       // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              VideoBinkImage;                                          // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetSize(const struct FVector2D& Size);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreChallengeTrackerWidget
	 * Size -> 0x0068 (FullSize[0x0390] - InheritedSize[0x0328])
	 */
	class UCoreChallengeTrackerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_BTGT[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             _onWidgetOpeningDone;                                    // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onWidgetClosingDone;                                    // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onWidgetProgressionDone;                                // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       OpenSfx;                                                 // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       CloseSfx;                                                // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ProgressionSfx;                                          // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       CompleteSfx;                                             // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ProgressionAudioRTPC;                                    // 0x0380(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H0VK[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreRewardWidget
	 * Size -> 0x0018 (FullSize[0x0458] - InheritedSize[0x0440])
	 */
	class UCoreRewardWidget : public UCoreSelectableButtonWidget
	{
	public:
		class UDBDImage*                                           RewardIcon;                                              // 0x0440(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreLockedOverlayWidget*                            LockedOverlay;                                           // 0x0448(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreOnHoverBorderWidget*                            OnHoverBorder;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetIsLocked(bool IsLocked, bool useAnimation);
		class UCoreLockedOverlayWidget* GetLockedOverlay();
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCharacterRewardWidget
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class UCoreCharacterRewardWidget : public UCoreRewardWidget
	{
	public:
		void SetData(const struct FCharacterRewardViewData& CharacterRewardViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCreditsWidget
	 * Size -> 0x0038 (FullSize[0x0348] - InheritedSize[0x0310])
	 */
	class UCoreCreditsWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_YWH0[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScrollSpeed;                                             // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUGN[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreInputSwitcherWidget*                            BackInputSwitcher;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   CreditsTextBlock;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _backActionDelegate;                                     // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class UUITweenInstance*                                    _tween;                                                  // 0x0340(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ScrollText();
		void OnScrollEnd(class UUITweenInstance* tween);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCurrencyExpirationLabelWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreCurrencyExpirationLabelWidget : public UCoreBaseUserWidget
	{
	public:
		void SetData(const struct FCurrencyExpirationLabelViewData& ViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCurrencyForTooltipsWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreCurrencyForTooltipsWidget : public UCoreBaseUserWidget
	{
	public:
		void SetData(const struct FCurrencyProgressionRewardViewData& currencyRewardViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCurrencyLabelWidget
	 * Size -> 0x0000 (FullSize[0x0408] - InheritedSize[0x0408])
	 */
	class UCoreCurrencyLabelWidget : public UCoreButtonWidget
	{
	public:
		void UpdateCurrency(int32_t newBalance, int32_t previousBalance);
		void SetData(const struct FCurrencyLabelViewData& ViewData);
		void PlayNotEnoughCurrency();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCurrencyProgressionRewardWidget
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class UCoreCurrencyProgressionRewardWidget : public UCoreRewardWidget
	{
	public:
		void SetData(const struct FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCustomizationRewardWidget
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class UCoreCustomizationRewardWidget : public UCoreRewardWidget
	{
	public:
		class UDBDImage*                                           RarityIMG;                                               // 0x0458(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetRarity(EItemRarity Rarity);
		void SetOwnedText(const class FText& ownedText);
		void SetData(const struct FCustomizationRewardViewData& CustomizationRewardViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreDisplayStandWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCoreDisplayStandWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_A6GL[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             _displayStandRotationDelegate;                           // 0x0318(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class UDragZone*                                           DragZone;                                                // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnDrag(const struct FVector2D& cursorDelta);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreEndGameCollapseBarWidget
	 * Size -> 0x0078 (FullSize[0x03A0] - InheritedSize[0x0328])
	 */
	class UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_6XWE[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _progressBarInterpSpeed;                                 // 0x0330(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZIPL[0x6C];                                  // 0x0334(0x006C) MISSED OFFSET (PADDING)

	public:
		void UpdateBarProgression(float Progress);
		void PlayToZeroAnimation();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget
	 * Size -> 0x0048 (FullSize[0x0358] - InheritedSize[0x0310])
	 */
	class UCoreEndGameCollapseProgressWidget : public UCoreBaseUserWidget
	{
	public:
		class UProgressBar*                                        ProgressBar;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        MarkerLeftCanvas;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        MarkerRightCanvas;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHorizontalBoxSlot*                                  _markerLeftBox;                                          // 0x0328(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBoxSlot*                                  _markerRightBox;                                         // 0x0330(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NIEA[0x20];                                  // 0x0338(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreEquippedItemWidget
	 * Size -> 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
	 */
	class UCoreEquippedItemWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_X5R2[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       ItemDisappearSfx;                                        // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreEquippedPowerWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreEquippedPowerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_O76L[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreExampleWidget
	 * Size -> 0x0098 (FullSize[0x03C0] - InheritedSize[0x0328])
	 */
	class UCoreExampleWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_9E3U[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EditAnywhere;                                            // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EditDefaultsOnly;                                        // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EditInstanceOnly;                                        // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EditNoBlueprint;                                         // 0x0360(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EditDefaultsOnlyBlueprintReadOnly;                       // 0x0370(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibleAnywhere;                                         // 0x0380(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibleDefaultsOnly;                                     // 0x0390(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibleInstanceOnly;                                     // 0x03A0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ExampleButtonClickDelegate;                              // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreExternalEffectsWidget
	 * Size -> 0x0278 (FullSize[0x05A0] - InheritedSize[0x0328])
	 */
	class UCoreExternalEffectsWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_2ZCH[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           GridSlotSize;                                            // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AddonScaleRatio;                                         // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SpacingBetweenRows;                                      // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SpacingPerks;                                            // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SpacingAddons;                                           // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SpacingBetweenPerksAndAddons;                            // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6A38[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PerkWidgetClass;                                         // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              AddonWidgetClass;                                        // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          Container;                                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HWI7[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPerkViewData>                               _perkData;                                               // 0x0370(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class FName, class UCorePerkWidget*>                  _perkWidgets;                                            // 0x0380(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCorePerkWidget*>                             _perkPool;                                               // 0x03D0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              _perkViewInterfaces[0x50];                               // 0x03E0(0x0050) UNKNOWN PROPERTY: MapProperty
		TArray<struct FAddonViewData>                              _addonData;                                              // 0x0430(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class FName, class UCoreAddonWidget*>                 _addonWidgets;                                           // 0x0440(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreAddonWidget*>                            _addonPool;                                              // 0x0490(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              _addonViewInterfaces[0x50];                              // 0x04A0(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<class FName, struct FTimerHandle>                     _timerHandleMap;                                         // 0x04F0(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class FName, class USpacer*>                          _spacerWidgets;                                          // 0x0540(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class USpacer*>                                     _spacerPool;                                             // 0x0590(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void HideExternalPerk_Implementation(const class FName& ItemId);
		void HideExternalAddon_Implementation(const class FName& ItemId);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreFearMarketWidget
	 * Size -> 0x0020 (FullSize[0x0388] - InheritedSize[0x0368])
	 */
	class UCoreFearMarketWidget : public UCoreGenericPopupWidget
	{
	public:
		unsigned char                                              UnknownData_PLW2[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreMenuPerkWidget*                                 MenuPerk;                                                // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHorizontalBox*                                      BloodpointsRewardContainer;                              // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       BloodpointsValueTB;                                      // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreFooterButtonWidget
	 * Size -> 0x0040 (FullSize[0x0448] - InheritedSize[0x0408])
	 */
	class UCoreFooterButtonWidget : public UCoreButtonWidget
	{
	public:
		class UDBDImage*                                           IconIMG;                                                 // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _hoveredColor;                                           // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _unhoveredColor;                                         // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                _tooltipLabelText;                                       // 0x0430(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		void SetUnhoveredColor();
		void SetHoveredColor();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInputSwitcherWidget
	 * Size -> 0x0090 (FullSize[0x03A0] - InheritedSize[0x0310])
	 */
	class UCoreInputSwitcherWidget : public UCoreBaseUserWidget
	{
	public:
		EInputSwitcherDisplayRule                                  ButtonDisplayRule;                                       // 0x0310(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputSwitcherDisplayRule                                  InputPromptDisplayRule;                                  // 0x0311(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZZM[0x6];                                   // 0x0312(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ButtonPressedSfxName;                                    // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ButtonPressedSfx;                                        // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ButtonHoveredSfxName;                                    // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ButtonHoveredSfx;                                        // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InputTriggeredSfxName;                                   // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       InputTriggeredSfx;                                       // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreKeyListenerInputPromptWidget*                   InputPrompt;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreButtonWidget*                                   Button;                                                  // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldRegisterForInputInConstruct;                      // 0x0370(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextJustify                                               _alignment;                                              // 0x0371(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isEnabled;                                              // 0x0372(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1E4H[0x5];                                   // 0x0373(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             _onInputSwitcherTriggeredDelegate;                       // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0XN2[0x1];                                   // 0x0388(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       SendAnalyticsData;                                       // 0x0389(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HM9G[0x6];                                   // 0x038A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnalyticsName;                                           // 0x0390(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetUIAction(EUIActionType ActionType);
		void SetRepeatable(bool isRepeatable, class UCurveFloat* repetitionDelayCurve);
		void SetLabel(const class FText& label);
		void SetKeyOverride(const struct FKey& keyOverride);
		void SetEnabled(bool IsEnabled);
		void SetBackground();
		void SetAlignment(ETextJustify newAlignment);
		void SetAdditionalIcon();
		void OnInputPromptTriggered();
		void OnButtonClicked(class UCoreButtonWidget* Target);
		void OnAlignmentChanged(ETextJustify newAlignment);
		class UCoreKeyListenerInputPromptWidget* GetInputPrompt();
		class UCoreButtonWidget* GetButton();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreFooterInputSwitcherWidget
	 * Size -> 0x0008 (FullSize[0x03A8] - InheritedSize[0x03A0])
	 */
	class UCoreFooterInputSwitcherWidget : public UCoreInputSwitcherWidget
	{
	public:
		class UTexture2D*                                          _iconTexture;                                            // 0x03A0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreGameManualCategoryButton
	 * Size -> 0x0030 (FullSize[0x0438] - InheritedSize[0x0408])
	 */
	class UCoreGameManualCategoryButton : public UCoreButtonWidget
	{
	public:
		class UDBDTextBlock*                                       Title;                                                   // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       Description;                                             // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDImage*                                           Icon;                                                    // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDImage*                                           Background;                                              // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          IconTexture;                                             // 0x0428(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BackgroundTexture;                                       // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetText(const class FText& Title, const class FText& Description);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreGameManualPanelWidget
	 * Size -> 0x00D8 (FullSize[0x03E8] - InheritedSize[0x0310])
	 */
	class UCoreGameManualPanelWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_IAV7[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameManualMenuState                                       _currentSelectedManualMenu;                              // 0x0318(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHelpType                                                  _currentGameManualTopic;                                 // 0x0319(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MZFW[0x6];                                   // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPanelWidget*                                        CategoryPanel;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreGameManualCategoryButton*                       GameCategoryButton;                                      // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreGameManualCategoryButton*                       SurvivorCategoryButton;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreGameManualCategoryButton*                       KillerCategoryButton;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        TopicsPanel;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreTabContainerWidget*                             GameManualTopicsTabs;                                    // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       GameManualContentTitle;                                  // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       GameManualContentSubtitle;                               // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   GameManualContentText;                                   // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onSetOnboardingMenuSubtitleDelegate;                    // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _onResetOnboardingMenuSubtitleDelegate;                  // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EEVB[0x60];                                  // 0x0388(0x0060) MISSED OFFSET (PADDING)

	public:
		void ToggleGameManualMenuState();
		void ShowHelpTopics(EHelpType categoryType);
		void SetGameManualMenuState(EGameManualMenuState menuState);
		void SetCurrentOnbardingMenuSubtitle();
		void ResetScrolls(bool resetTopicsScroll);
		void OnTopicsTabSelected(class UCoreSelectableButtonWidget* selectedButton);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreGenericTextInputPopupWidget
	 * Size -> 0x0038 (FullSize[0x03A0] - InheritedSize[0x0368])
	 */
	class UCoreGenericTextInputPopupWidget : public UCoreGenericPopupWidget
	{
	public:
		unsigned char                                              UnknownData_WQVN[0x20];                                  // 0x0368(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditableTextBox*                                    InputTextBox;                                            // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDScrollBox*                                       MessageScrollBox;                                        // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   ErrorMessageTextBlock;                                   // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHookCountWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreHookCountWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_YAAN[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudAlertWidget
	 * Size -> 0x0090 (FullSize[0x03B8] - InheritedSize[0x0328])
	 */
	class UCoreHudAlertWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_J86O[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxDisplayedItems;                                       // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SecondaryAlpha;                                          // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FullAlertDuration;                                       // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PendingAlertDuration;                                    // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnimationDuration;                                       // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                AnimationEasing;                                         // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BFW7[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationTranslationY;                                   // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4LB3[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CoreHudScoreAlertItemClass;                              // 0x0350(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              CoreHudStatusEffectAlertItemClass;                       // 0x0358(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          AlertContainer;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreBaseUserWidget*>                         _alerts;                                                 // 0x0368(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreBaseUserWidget*>                         _pendingAlerts;                                          // 0x0378(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreHudScoreAlertItem*>                      _scoreAlertPool;                                         // 0x0388(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreHudStatusEffectAlertItem*>               _statusEffectAlertPool;                                  // 0x0398(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8MYG[0x10];                                  // 0x03A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void PopAlert();
		void OnPopAlertComplete(class UUITweenInstance* tween);
		void OnClearAlertsComplete(class UUITweenInstance* tween);
		float GetRemainingTime();
		TArray<class UCoreBaseUserWidget*> GetPendingAlerts();
		TArray<class UCoreBaseUserWidget*> GetAlerts();
		void ClearAlerts();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class UCoreHudDirectionalMiniGameItemWidget : public UCoreBaseHudWidget
	{
	public:
		void UpdateResult(bool IsSuccessful);
		void RevealDirection(bool withAnimation);
		void Init(EDirectionalInputKey Direction);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudDirectionalMiniGameWidget
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class UCoreHudDirectionalMiniGameWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_DV9G[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemWidgetClass;                                         // 0x0330(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHorizontalBox*                                      Container;                                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreHudDirectionalMiniGameItemWidget*>       _widgets;                                                // 0x0340(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CS1Z[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShowVisual();
		TArray<class UCoreHudDirectionalMiniGameItemWidget*> GetWidgets();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudObjectivesWidget
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class UCoreHudObjectivesWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_67NP[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDTextBlock*                                       SpecialSpacer;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudScoreAlertItem
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreHudScoreAlertItem : public UCoreBaseUserWidget
	{
	public:
		void SetData(const struct FScoreAlertViewData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudStatusEffectAlertItem
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreHudStatusEffectAlertItem : public UCoreBaseUserWidget
	{
	public:
		void SetData(const struct FStatusEffectAlertViewData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInputPromptWidget
	 * Size -> 0x0040 (FullSize[0x0350] - InheritedSize[0x0310])
	 */
	class UCoreInputPromptWidget : public UCoreBaseUserWidget
	{
	public:
		class FText                                                _unfoundInputKeyText;                                    // 0x0310(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FKey                                                _inputKey;                                               // 0x0328(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isEnabled;                                              // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O3CY[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetInputKey(const struct FKey& InputKey);
		void SetEnabled(bool IsEnabled);
		void PromptNotFound();
		void OnEnabledChanged(bool IsEnabled);
		bool IsEnabled();
		class FText GetInputShortDisplayName();
		struct FKey GetInputKey();
		void DisplayPrompt();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInteractionProgressWidget
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class UCoreInteractionProgressWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_3ZXC[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoreStatusEffectIcon*>                       Proficiencies;                                           // 0x0338(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _hemorrhageAnimationIsCompleteDelegate;                  // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void SetProficiencies(TArray<struct FStatusEffectViewData> proficiencyDatas);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInteractionPromptActionWidget
	 * Size -> 0x00B8 (FullSize[0x03C8] - InheritedSize[0x0310])
	 */
	class UCoreInteractionPromptActionWidget : public UCoreBaseUserWidget
	{
	public:
		class UCoreInputPromptWidget*                              InputPrompt;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputPromptWidget*                              InputPrompt2;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputPromptWidget*                              InputPrompt3;                                            // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputPromptWidget*                              InputPrompt4;                                            // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                IdleAnimationName;                                       // 0x0330(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J70O[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                InputKey;                                                // 0x0340(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKey                                                InputKey2;                                               // 0x0360(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKey                                                InputKey3;                                               // 0x0380(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKey                                                InputKey4;                                               // 0x03A0(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QNAN[0x8];                                   // 0x03C0(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopIdleAnimation();
		void SetInputKey4(const struct FKey& InputKey4);
		void SetInputKey3(const struct FKey& InputKey3);
		void SetInputKey2(const struct FKey& InputKey2);
		void SetInputKey(const struct FKey& InputKey);
		void PlayIdleAnimation();
		bool HasThirdPrompt();
		bool HasSecondPrompt();
		bool HasFourthPrompt();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget
	 * Size -> 0x00D0 (FullSize[0x03F8] - InheritedSize[0x0328])
	 */
	class UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_IBWN[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDWrapBox*                                         CenterContainerBox;                                      // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDWrapBox*                                         ContainerBox;                                            // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              InteractionPromptWidgetClass;                            // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxDisplayedPrompts;                                     // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxDisplayedCenterPrompts;                               // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMargin                                             SlotMargin;                                              // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FInteractionPromptViewData>                  _promptViewDataList;                                     // 0x0368(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FInteractionPromptViewData>                  _centerPromptViewDataList;                               // 0x0378(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UCoreInteractionPromptWidget*>                _promptWidgets;                                          // 0x0388(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreInteractionPromptWidget*>                _centerPromptWidgets;                                    // 0x0398(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class FName, class UCoreInteractionPromptWidget*>     _displayedPromptsMap;                                    // 0x03A8(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInteractionPromptWidget
	 * Size -> 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
	 */
	class UCoreInteractionPromptWidget : public UUserWidget
	{
	public:
		float                                                      LargeTextScale;                                          // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K0LP[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScaleBox*                                           LargeTextScaleBox;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       ActionTB;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextManager*                                     _textManager;                                            // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetData(const struct FInteractionPromptViewData& Data);
		void OnLargeTextSettingsChanged(bool isLargeTextEnabled);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreItemBundleWidget
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UCoreItemBundleWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_IDJD[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreItemInteractionWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreItemInteractionWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_5D7J[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreItemWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCoreItemWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_7VJH[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreKeyListenerButtonWidget
	 * Size -> 0x0038 (FullSize[0x0440] - InheritedSize[0x0408])
	 */
	class UCoreKeyListenerButtonWidget : public UCoreButtonWidget
	{
	public:
		bool                                                       IsKeyboardLabelVisible;                                  // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZF0[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDTextBlock*                                       InputNameTB;                                             // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ITV8[0x28];                                  // 0x0418(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetUIAction(EUIActionType ActionType);
		void SetKeyOverride(const struct FKey& keyOverride);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreKeyListenerInputPromptWidget
	 * Size -> 0x0058 (FullSize[0x0368] - InheritedSize[0x0310])
	 */
	class UCoreKeyListenerInputPromptWidget : public UCoreBaseUserWidget
	{
	public:
		class FString                                              ClickedSfxName;                                          // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ClickedSfx;                                              // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreInputPromptWidget*                              InputPrompt;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       LabelTB;                                                 // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           AdditionalIconIMG;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onKeyListenerInputPromptTriggeredDelegate;              // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q5IF[0x18];                                  // 0x0350(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetUIAction(EUIActionType ActionType);
		void SetRepeatable(bool isRepeatable, class UCurveFloat* repetitionDelayCurve);
		void SetLabel(const class FText& label);
		void SetKeyOverride(const struct FKey& keyOverride);
		void SetEnabled(bool IsEnabled);
		void SetAdditionalIcon();
		void OnEnabledChanged(bool IsEnabled);
		bool IsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreLeaningArrowsWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreLeaningArrowsWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_EEAR[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreLightSensitivityWidget
	 * Size -> 0x0030 (FullSize[0x0340] - InheritedSize[0x0310])
	 */
	class UCoreLightSensitivityWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_ZYLB[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDBDRichTextBlock*>                           _lightSensitivityRichTextBlocks;                         // 0x0318(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    FadeOutAnim;                                             // 0x0328(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MP3Y[0x10];                                  // 0x0330(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreLockedOverlayWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreLockedOverlayWidget : public UCoreBaseUserWidget
	{
	public:
		void SetIsLocked(bool IsLocked, bool useAnimation);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMatchResultWidget
	 * Size -> 0x00D8 (FullSize[0x0400] - InheritedSize[0x0328])
	 */
	class UCoreMatchResultWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_MEEE[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                _survivorDefaultResultText;                              // 0x0330(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EGameState, class FText>                              _survivorResultTexts;                                    // 0x0348(0x0050) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                _killerDefaultResultText;                                // 0x0398(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EKillerMatchResult, class FText>                      _killerResultTexts;                                      // 0x03B0(0x0050) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuLoadoutPartWidget
	 * Size -> 0x0100 (FullSize[0x0540] - InheritedSize[0x0440])
	 */
	class UCoreMenuLoadoutPartWidget : public UCoreSelectableButtonWidget
	{
	public:
		ELoadoutSlot                                               slotIndex;                                               // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETooltipHorizontalAlignment                                HorizontalAlignment;                                     // 0x0441(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETooltipVerticalAlignment                                  VerticalAlignment;                                       // 0x0442(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJJ5[0x5];                                   // 0x0443(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLoadoutTooltipData                                 _loadoutTooltipViewData;                                 // 0x0448(0x0090) BlueprintVisible, Transient, Protected, NativeAccessSpecifierProtected
		class UDBDImage*                                           RarityIMG;                                               // 0x04D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           IconIMG;                                                 // 0x04E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           KillSwitchIMG;                                           // 0x04E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           lockedIcon;                                              // 0x04F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           Background;                                              // 0x04F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           ShadowOffset;                                            // 0x0500(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          Selected;                                                // 0x0508(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScaleBox*                                           LayoutScale;                                             // 0x0510(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreOnHoverBorderWidget*                            OnHoverBorder;                                           // 0x0518(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          StackCountTB;                                            // 0x0520(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          RarityTexture;                                           // 0x0528(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _itemId;                                                 // 0x0530(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A7VJ[0x4];                                   // 0x053C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSelectedState(bool selectedState);
		void SetLoadoutPartTooltipData(const struct FLoadoutTooltipData& TooltipData);
		void SetLoadoutPartScale(float Scale);
		void SetLoadoutPartData(class UMenuLoadoutPartViewData* Data);
		void SetEmptyWidget();
		void SetDisabledWidget();
		void SetBackgroundShadowLayers();
		void SetBackgroundLayers();
		bool GetWidgetLockedState();
		class FName GetWidgetItemId();
		struct FLoadoutTooltipData GetTooltipData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuAddonWidget
	 * Size -> 0x0028 (FullSize[0x0568] - InheritedSize[0x0540])
	 */
	class UCoreMenuAddonWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		class UDBDImage*                                           DisabledState;                                           // 0x0540(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _addonInventoryScale;                                    // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6B4P[0x1C];                                  // 0x054C(0x001C) MISSED OFFSET (PADDING)

	public:
		void UpdateWidgetScale();
		void SetMenuAddonTooltipData(const struct FLoadoutTooltipData& TooltipData);
		void SetMenuAddonData(class UMenuAddonViewData* Data);
		void SetAddonDisabled(bool IsParentAvailable);
		void HidePlusIcon();
		class FText GetWidgetParentDisplayName();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuItemWidget
	 * Size -> 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
	 */
	class UCoreMenuItemWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		void SetMenuItemTooltipData(const struct FLoadoutTooltipData& TooltipData);
		void SetMenuItemData(class UMenuItemViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuOfferingWidget
	 * Size -> 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
	 */
	class UCoreMenuOfferingWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		void SetMenuOfferingTooltipData(const struct FLoadoutTooltipData& TooltipData);
		void SetMenuOfferingData(class UMenuOfferingViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuPerkWidget
	 * Size -> 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
	 */
	class UCoreMenuPerkWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		void SetMenuPerkTooltipData(const struct FLoadoutTooltipData& TooltipData);
		void SetMenuPerkLevel(int32_t Level);
		void SetMenuPerkData(class UMenuPerkViewData* Data);
		void SetEmptyPerk();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuPowerWidget
	 * Size -> 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
	 */
	class UCoreMenuPowerWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		void SetMenuPowerTooltipData(const struct FLoadoutTooltipData& TooltipData);
		void SetMenuPowerData(class UMenuPowerViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOfferingInteractionWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreOfferingInteractionWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_KKEO[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOfferingWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCoreOfferingWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_T7CN[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnboardingButtonHolderWidget
	 * Size -> 0x0030 (FullSize[0x0340] - InheritedSize[0x0310])
	 */
	class UCoreOnboardingButtonHolderWidget : public UCoreBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnTutorialButtonClickedDelegate;                         // 0x0310(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetDataAnimationCompleteDelegate;                      // 0x0320(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		TArray<class UCoreOnboardingTutorialButtonWidget*>         TutorialButtons;                                         // 0x0330(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void OnClickedTutorialButton(class UCoreButtonWidget* clickedTutorialButton);
		void OnButtonSetDataAnimationCompleteDelegate();
		class FString GetStepId();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreOnboardingMenuTitleWidget : public UCoreBaseUserWidget
	{
	public:
		void SetOnboardingMenuTitle(const class FText& menuTitle);
		void SetOnboardingMenuSubtitle(const class FText& menuTitle);
		void SetOnboardingMenuDoubleTitle(const class FText& menuTitle, const class FText& menuSubTitle);
		void ResetOnboardingMenuSubtitle();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnboardingMenuWidget
	 * Size -> 0x00A0 (FullSize[0x03B0] - InheritedSize[0x0310])
	 */
	class UCoreOnboardingMenuWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_QJQA[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreTabContainerWidget*                             OnboardingMenuTabs;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreOnboardingMenuTitleWidget*                      menuTitle;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            BackInputSwitcher;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreFooterInputSwitcherWidget*                      SettingsInputSwitcher;                                   // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreFooterInputSwitcherWidget*                      QuitGameInputSwitcher;                                   // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            ChangeAccountInputSwitcher;                              // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             BackActionDelegate;                                      // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             SettingsActionDelegate;                                  // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             QuitGameActionDelegate;                                  // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             ChangeAccountActionDelegate;                             // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             MenuTabSelectedDelegate;                                 // 0x0388(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             MenuTabSelectedAgainDelegate;                            // 0x0398(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KXSL[0x8];                                   // 0x03A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetTitleText(bool IsInTutorial);
		void SetBackButton(bool isFTUE);
		void OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);
		void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget
	 * Size -> 0x00E8 (FullSize[0x04F0] - InheritedSize[0x0408])
	 */
	class UCoreOnboardingTutorialButtonWidget : public UCoreButtonWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSetDataAnimationCompleteDelegate;                      // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic
		class FString                                              UnavailablePressedSfxName;                               // 0x0418(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       UnavailablePressedSfx;                                   // 0x0428(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       titleText;                                               // 0x0430(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       descriptionText;                                         // 0x0438(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       RewardsText;                                             // 0x0440(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           RoleIcon;                                                // 0x0448(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetSwitcher*                                     StateSwitcher;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           LockedImage;                                             // 0x0458(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           CompletedImage;                                          // 0x0460(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreRewardWrapperWidget*>                    RewardWrappers;                                          // 0x0468(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FOnboardingTutorialButtonViewData                   ViewData;                                                // 0x0478(0x0078) BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		void SetVisual();
		void SetUIEnabled(bool Enabled);
		void SetIsKillSwitch(bool IsKillSwitch);
		void SetData(const struct FOnboardingTutorialButtonViewData& ViewData, bool isRefreshingWithAnimation);
		void OnRewardReleased(class UCoreButtonWidget* buttonTarget);
		void OnRewardPressed(class UCoreButtonWidget* buttonTarget);
		void OnRewardClicked(class UCoreButtonWidget* buttonTarget);
		bool IsInUnavailableStep();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget
	 * Size -> 0x0070 (FullSize[0x0380] - InheritedSize[0x0310])
	 */
	class UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_Z2J7[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UOverlay*>                                    OnboardingButtonHolderContainers;                        // 0x0318(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             TutorialSelectedDelegate;                                // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class UUserWidget*                                         LoadingWidget;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _arrowHighlightRenderOpacity;                            // 0x0340(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _arrowUnhighlightRenderOpacity;                          // 0x0344(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _oneTutorialButtonHolderWidgetClass;                     // 0x0348(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _twoTutorialButtonHolderWidgetClass;                     // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreOnboardingButtonHolderWidget*>           _onboardingButtonHolderWidgets;                          // 0x0358(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<struct FPendingStepData>                            _pendingData;                                            // 0x0368(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5XSQ[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (PADDING)

	public:
		void TryBroadcastSelectedTutorial(class UCoreButtonWidget* buttonTarget);
		void SetTutorialSeparators(const class FString& completedStepId);
		void SetTutorialDescription(const class FText& Description, bool isWarning);
		void NextPendingButtonUpdated();
		void CheckNextPendingButtonUpdate();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnHoverBorderWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreOnHoverBorderWidget : public UCoreBaseUserWidget
	{
	public:
		void UpdateColors(const struct FLinearColor& progressBarColor, const struct FLinearColor& BackgroundColor);
		void UnbindFromButton();
		void PlayPressedAnimation(bool playForward);
		void PlayHoveredAnimation(bool playForward);
		void BindToButton(class UCoreButtonWidget* buttonToBindOn);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePaginationContainerWidget
	 * Size -> 0x00D8 (FullSize[0x0438] - InheritedSize[0x0360])
	 */
	class UCorePaginationContainerWidget : public UCoreButtonSelector
	{
	public:
		class FScriptMulticastDelegate                             OnSelectedPageDelegate;                                  // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              PaginationWidgetClass;                                   // 0x0370(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxNumberOfPages;                                        // 0x0378(0x0004) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_368O[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGridPanel*                                          PaginationContainer;                                     // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreSelectableButtonWidget*                         FirstPage;                                               // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       FirstEllipsis;                                           // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       LastEllipsis;                                            // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreSelectableButtonWidget*                         LastPage;                                                // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMargin                                             _widgetPadding;                                          // 0x03A8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		TArray<class UCoreSelectableButtonWidget*>                 _paginationWidgetList;                                   // 0x03B8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U031[0x70];                                  // 0x03C8(0x0070) MISSED OFFSET (PADDING)

	public:
		void UpdateSelectedWidget(int32_t currentIndex, int32_t numberOfPages);
		void OnSelectedPageDelegate__DelegateSignature(int32_t selectedPage, bool isUpdate);
		void OnPaginationSelected(class UCoreSelectableButtonWidget* selectedButton);
		int32_t GetCurrentPage();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePerksContainerWidget
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class UCorePerksContainerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_1UN1[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCorePerkWidget*>                             PerkWidgets;                                             // 0x0330(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              _perkViewInterfaces[0x10];                               // 0x0340(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePerkWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCorePerkWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_SX2X[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePingStatusWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCorePingStatusWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_JFAX[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerLevelWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCorePlayerLevelWidget : public UCoreBaseUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerNameWidget
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UCorePlayerNameWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDTextBlock*                                       PlayerNameTB;                                            // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetPlayerName(const class FText& playerName);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerProfileWidget
	 * Size -> 0x0028 (FullSize[0x0338] - InheritedSize[0x0310])
	 */
	class UCorePlayerProfileWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_ZUT3[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreWalletWidget*                                   Wallet;                                                  // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCorePlayerNameWidget*                               playerName;                                              // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCorePlayerLevelWidget*                              PlayerLevel;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCorePlayerRankWidget*                               PlayerRank;                                              // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerRankWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCorePlayerRankWidget : public UCoreBaseUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerStatusesContainerWidget
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_OEPH[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCorePlayerStatusWidget*>                     PlayerStatusWidgets;                                     // 0x0338(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              _playerStatusViewInterfaces[0x10];                       // 0x0348(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerStatusKillerEffectWidget
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class UCorePlayerStatusKillerEffectWidget : public UCoreBaseHudWidget
	{
	public:
		void SetKillerData(const struct FPlayerStatusViewData& Data);
		void ClearVisual();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class UCorePlayerStatusKillerEffectK07Widget : public UCorePlayerStatusKillerEffectWidget
	{
	public:
		void AfflictionHit();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerStatusWidget
	 * Size -> 0x0120 (FullSize[0x0448] - InheritedSize[0x0328])
	 */
	class UCorePlayerStatusWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_HCYI[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNameLength;                                           // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9838[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPlayerStatus, struct FPlayerStatusAssets>            PlayerStatusAssets;                                      // 0x0338(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ObsessionSfx;                                            // 0x0388(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       PlayerNameTextfield;                                     // 0x0390(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            KillerStatusContainer;                                   // 0x0398(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPlayerStatusViewData                               _cachedViewData;                                         // 0x03A0(0x0048) BlueprintVisible, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L50A[0x50];                                  // 0x03E8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCorePlayerStatusKillerEffectWidget*                 _killerStatusEffectWidget;                               // 0x0438(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          _killerStatusDataMappingDB;                              // 0x0440(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool ShouldPlaySleepAnimation(ESleepingUIState newSleepState);
		bool HasTimerProgressChanged(float newTimerProgress);
		bool HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
		bool HasPlayerStateChanged(EPlayerStatus newPlayerState);
		bool HasObsessionStateChanged(EObsessionUIState newObsessionState);
		bool HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
		EPlayerStateChangeType GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData);
		class UCorePlayerStatusKillerEffectWidget* GetKillerStatusEffectWidget();
		class UDataTable* GetKillerStatusDataMappingDB();
		struct FPlayerStatusViewData CacheViewData(const struct FPlayerStatusViewData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePowerBundleWidget
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UCorePowerBundleWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_N7HB[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePowerWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCorePowerWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_WW07[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePresetWidgetContainer
	 * Size -> 0x0040 (FullSize[0x03A0] - InheritedSize[0x0360])
	 */
	class UCorePresetWidgetContainer : public UCoreButtonSelector
	{
	public:
		class FScriptMulticastDelegate                             OnSelectedPresetDelegate;                                // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UCoreSelectableButtonWidget*                         Preset_2;                                                // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreSelectableButtonWidget*                         Preset_3;                                                // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreSelectableButtonWidget*                         Preset_4;                                                // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreSelectableButtonWidget*                         Preset_5;                                                // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreSelectableButtonWidget*>                 _presetWidgets;                                          // 0x0390(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetSelectedPreset(class UCoreSelectableButtonWidget* selectedButton);
		void SetPreset(TArray<int32_t> presetData, int32_t selectedPreset);
		void OnSelectedPresetDelegate__DelegateSignature(int32_t selectedPreset);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreRewardWrapperWidget
	 * Size -> 0x0028 (FullSize[0x02C0] - InheritedSize[0x0298])
	 */
	class UCoreRewardWrapperWidget : public UUserWidget
	{
	public:
		class UClass*                                              CharacterRewardWidget;                                   // 0x0298(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              CurrencyProgressionRewardWidget;                         // 0x02A0(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              CustomizationRewardWidget;                               // 0x02A8(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        RewardContainer;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreRewardWidget*                                   _rewardWidget;                                           // 0x02B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetIsLocked(bool IsLocked, bool PlayAnimation);
		void SetIsClickable(bool isClickable);
		void SetData(const struct FRewardWrapperViewData& ViewData);
		class UCoreRewardWidget* GetRewardWidget();
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget
	 * Size -> 0x0080 (FullSize[0x03A8] - InheritedSize[0x0328])
	 */
	class UCoreScreenIndicatorsContainerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_1D98[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InactiveThreshold;                                       // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_928H[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvasPanel*                                        Container;                                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScreenIndicatorClass;                                    // 0x0340(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class UCoreScreenIndicatorWidget*>     _screenIndicatorsMap;                                    // 0x0348(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreScreenIndicatorWidget*>                  _screenIndicatorsPool;                                   // 0x0398(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		TMap<class FString, class UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap();
		class FString FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* value);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreScreenIndicatorWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCoreScreenIndicatorWidget : public UCoreBaseUserWidget
	{
	public:
		float                                                      InactiveTime;                                            // 0x0310(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           IndicatorPadding;                                        // 0x0314(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DistanceClamping;                                        // 0x031C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceRatio;                                        // 0x0324(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceAlpha;                                        // 0x0328(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JI0[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetData(const struct FScreenIndicatorViewData& Data);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreSkillCheckWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreSkillCheckWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_4JHN[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreSpectateBarWidget
	 * Size -> 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
	 */
	class UCoreSpectateBarWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_1V6W[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreInputSwitcherWidget*                            LeaveInputSwitcher;                                      // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            LeftArrowInputSwitcher;                                  // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            RightArrowInputSwitcher;                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _leaveTriggeredDelegate;                                 // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _leftArrowTriggeredDelegate;                             // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _rightArrowTriggeredDelegate;                            // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void OnRightArrowTriggered();
		void OnLeftArrowTriggered();
		void OnLeaveTriggered();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreStartSequenceWidget
	 * Size -> 0x00A0 (FullSize[0x03C8] - InheritedSize[0x0328])
	 */
	class UCoreStartSequenceWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_8032[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeInDuration;                                          // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeOutDuration;                                         // 0x0334(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                FadeInEasing;                                            // 0x0338(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                FadeOutEasing;                                           // 0x0339(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VAQF[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EThemeColorId, struct FLinearColor>                   BorderColors;                                            // 0x0340(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultColor;                                            // 0x0390(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       ThemeNameTextfield;                                      // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SeparatorImage;                                          // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       MapNameTextfield;                                        // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             StartSequenceFadeOutDelegate;                            // 0x03B8(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void OnHideStartSequenceComplete(class UUITweenInstance* tween);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreStatusEffectIcon
	 * Size -> 0x0058 (FullSize[0x0368] - InheritedSize[0x0310])
	 */
	class UCoreStatusEffectIcon : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_YYFI[0x58];                                  // 0x0310(0x0058) MISSED OFFSET (PADDING)

	public:
		void UpdateWidget();
		void UpdatePercentageFill(float Percentage);
		void SetStatusEffectData(const struct FStatusEffectViewData& Data);
		void SetInactiveTicks(int32_t inactiveTicks);
		void ResetWidget();
		struct FStatusEffectViewData GetStatusEffectData();
		int32_t GetInactiveTicks();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreStatusEffectWidget
	 * Size -> 0x0098 (FullSize[0x03C0] - InheritedSize[0x0328])
	 */
	class UCoreStatusEffectWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_9QKM[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InactiveThreshold;                                       // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PrepooledItemAmount;                                     // 0x0334(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ItemsByColumn;                                           // 0x0338(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EvenColumnOffset;                                        // 0x033C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              CoreStatusEffectIconClass;                               // 0x0340(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          StatusEffectContainer;                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreStatusEffectIcon*>                       _statusEffectPool;                                       // 0x0350(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class FName>                                        _statusEffectOrder;                                      // 0x0360(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class FName, class UCoreStatusEffectIcon*>            _statusEffectMap;                                        // 0x0370(0x0050) BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		TMap<class FName, class UCoreStatusEffectIcon*> GetStatusEffectMap();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreStoryLevelButtonWidget
	 * Size -> 0x0038 (FullSize[0x0478] - InheritedSize[0x0440])
	 */
	class UCoreStoryLevelButtonWidget : public UCoreSelectableButtonWidget
	{
	public:
		class FScriptMulticastDelegate                             _levelUnlockedAnimationDoneDelegate;                     // 0x0440(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FText                                                _tooltipText;                                            // 0x0450(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		ERemainingTimeFormat                                       _lockedLevelTimeFormat;                                  // 0x0468(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2AYH[0xF];                                   // 0x0469(0x000F) MISSED OFFSET (PADDING)

	public:
		void UpdateVisualStatus(EArchivesStoryLevelStatus newStatus, bool newlyUnlocked);
		void UpdateVisual(class UArchiveStoryLevelViewData* ViewData, bool newlyUnlocked);
		void UpdateStatusData(EArchivesStoryLevelStatus newStatus, bool isSelectorReadOnly);
		void SetData(class UArchiveStoryLevelViewData* ViewData, bool isSelectorReadOnly);
		int32_t GetLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreStoryLevelsSelectorWidget
	 * Size -> 0x0048 (FullSize[0x03A8] - InheritedSize[0x0360])
	 */
	class UCoreStoryLevelsSelectorWidget : public UCoreButtonSelector
	{
	public:
		bool                                                       IsReadOnly;                                              // 0x0360(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ST8A[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CoreStoryLevelButtonWidgetClass;                         // 0x0368(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          LevelButtonsContainer;                                   // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            PreviousLevelInputSwitcher;                              // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            NextLevelInputSwitcher;                                  // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UArchiveStoryLevelViewData*>                  _levelButtonsData;                                       // 0x0388(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_074Z[0x10];                                  // 0x0398(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateVisual(EArchivesStoryLevelStatus globalStatus, bool PlayAnimation);
		void UpdateLevelStatus(int32_t Level, EArchivesStoryLevelStatus Status);
		void SetUpInteractionMode();
		void SetEnabled(bool Enabled);
		void SetData(TArray<class UArchiveStoryLevelViewData*> levelbuttonsData);
		void OnStoryLevelUnlockedAnimation();
		class UCoreStoryLevelButtonWidget* GetStoryLevelButton(int32_t Level);
		void AdaptButtonsPoolToData(int32_t dataNumber);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreSubtitlesWidget
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UCoreSubtitlesWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_P564[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDTextBlock*                                       SubtitlesTB;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTemplateWidget
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class UCoreTemplateWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_VLFT[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTestBuildFlagWidget
	 * Size -> 0x0070 (FullSize[0x0398] - InheritedSize[0x0328])
	 */
	class UCoreTestBuildFlagWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_XTI8[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGridPanel*                                          HudTestFlagContainer;                                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          HudTopLineTextfield;                                     // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          HudBottomLineTextfield;                                  // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6VEH[0x50];                                  // 0x0348(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreToggleButtonWidget
	 * Size -> 0x0008 (FullSize[0x0410] - InheritedSize[0x0408])
	 */
	class UCoreToggleButtonWidget : public UCoreButtonWidget
	{
	public:
		bool                                                       DefaultToggleState;                                      // 0x0408(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_190T[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetToDefaultState();
		void SetActiveVisualState(bool IsActive);
		bool IsToggled();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreTutorialMysteryNoteWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_9SZK[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTutorialObjectiveItem
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             TutorialObjectiveCompletedDelegate;                      // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic

	public:
		void SetObjectiveCompleted(bool removeAfterCompletion);
		void InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTutorialObjectivesContainer
	 * Size -> 0x0080 (FullSize[0x03A8] - InheritedSize[0x0328])
	 */
	class UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_D24G[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CoreTutorialObjectiveItemClass;                          // 0x0330(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BasePooledInstanceAmount;                                // 0x0338(0x0004) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VL16[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGridPanel*                                          ObjectiveContainer;                                      // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreTutorialObjectiveItem*>                  _objectivePool;                                          // 0x0348(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class FName, class UCoreTutorialObjectiveItem*>       _objectiveItems;                                         // 0x0358(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTutorialPopupWidget
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class UCoreTutorialPopupWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_AGKB[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreInputSwitcherWidget*                            ProgressionInputSwitcher;                                // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ClosePopupSfx;                                           // 0x0338(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _notifTutoConfirmButtonClickDelegate;                    // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget
	 * Size -> 0x0030 (FullSize[0x0398] - InheritedSize[0x0368])
	 */
	class UCoreUnlockPersonalPerksPopupWidget : public UCoreGenericPopupWidget
	{
	public:
		unsigned char                                              UnknownData_NE5B[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoreMenuPerkWidget*>                         _perkArray;                                              // 0x0370(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UCoreMenuPerkWidget*                                 FirstPerk;                                               // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuPerkWidget*                                 SecondPerk;                                              // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuPerkWidget*                                 ThirdPerk;                                               // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ShowMenuPerkTooltip(class UCoreButtonWidget* hoveredSlotWidget);
		void HideMenuPerkTooltip(class UCoreButtonWidget* unhoveredSlotWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreWalletWidget
	 * Size -> 0x0060 (FullSize[0x0370] - InheritedSize[0x0310])
	 */
	class UCoreWalletWidget : public UCoreBaseUserWidget
	{
	public:
		class UClass*                                              CoreCurrencyLabelWidgetClass;                            // 0x0310(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGridPanel*                                          CurrencyContainer;                                       // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<ECurrencyType, class UCoreCurrencyLabelWidget*>       _currencyWidgetMap;                                      // 0x0320(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void UpdateCurrency(ECurrencyType Type, int32_t newBalance, int32_t previousBalance);
		void PlayNotEnoughCurrency(ECurrencyType Type);
		void InitWallet(TArray<struct FCurrencyLabelViewData> walletData);
		void FullUpdateCurrency(const struct FCurrencyLabelViewData& ViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreWatermarkWidget
	 * Size -> 0x0040 (FullSize[0x0350] - InheritedSize[0x0310])
	 */
	class UCoreWatermarkWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_1504[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDBDTextBlock*>                               _watermarkDBDTextBlocks;                                 // 0x0318(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HLBP[0x28];                                  // 0x0328(0x0028) MISSED OFFSET (PADDING)

	public:
		void UpdateWatermarkText();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CurrencyProgressionTooltipWidget
	 * Size -> 0x0078 (FullSize[0x0388] - InheritedSize[0x0310])
	 */
	class UCurrencyProgressionTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		int32_t                                                    MaxExpirationLabels;                                     // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BF8T[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CoreCurrencyExpirationLabelWidgetClass;                  // 0x0318(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       CurrencyTB;                                              // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       CurrencyTitleTB;                                         // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDRichTextBlock*                                   CurrencyDescriptionRTB;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDImage*                                           TitleBgIMG;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        EventContainer;                                          // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       EventNameTB;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       EventDescriptionTB;                                      // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       EventTimerTB;                                            // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        ExpirationPanel;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVerticalBox*                                        ExpirationLabelContainer;                                // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       ExpirationTitleTB;                                       // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UCoreCurrencyExpirationLabelWidget*>          _currencyExpirationWidgetPool;                           // 0x0378(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetTooltipData(const struct FCurrencyProgressionTooltipViewData& currencyViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CustomizationTooltipWidget
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UCustomizationTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDTextBlock*                                       ToolTipStatusTB;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   ToolTipDescriptionRTB;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData);
		void SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked);
		void AppendToDescriptionText(const class FText& appendedText);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DailyRitualsContainerWidget
	 * Size -> 0x0098 (FullSize[0x03A8] - InheritedSize[0x0310])
	 */
	class UDailyRitualsContainerWidget : public UCoreBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             _claimButtonClickedDelegate;                             // 0x0310(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _removeButtonClickedDelegate;                            // 0x0320(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onOutOfDailyRitualsDelegate;                            // 0x0330(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class UClass*                                              DailyRitualTileWidgetClass;                              // 0x0340(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        Container;                                               // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       NoRitualWarningText;                                     // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TilePadding;                                             // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeInNoRitualsWarningTextDuration;                      // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AlignmentAnimationDuration;                              // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1Z91[0x3C];                                  // 0x0364(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUITweenInstance*                                    _alignAssignedRitualsTween;                              // 0x03A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StartAnim();
		void SetData(TArray<struct FDailyRitualViewData> dailyRitualsData, bool isAfterTrial);
		void OnRecentlyAssignedDailyRitualFadeInComplete(class UDailyRitualTileWidget* dailyRitualTile);
		void OnDelayUntilFadeInSequenceComplete(class UUITweenInstance* delayUntilFadeInSequenceTween);
		void OnDailyRitualTileFadeOutComplete(class UDailyRitualTileWidget* dailyRitualTile);
		void OnDailyRitualRemoveButtonClicked(const class FString& dailyRitualKey);
		void OnDailyRitualClaimButtonClicked(const class FString& dailyRitualKey);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DailyRitualsPopupWidget
	 * Size -> 0x0070 (FullSize[0x03D8] - InheritedSize[0x0368])
	 */
	class UDailyRitualsPopupWidget : public UCoreGenericPopupWidget
	{
	public:
		unsigned char                                              UnknownData_Q1ZW[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             _onRemovedDailyRitualDelegate;                           // 0x0370(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onClaimedRitualDelegate;                                // 0x0380(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onClaimedAllRitualsDelegate;                            // 0x0390(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class UDBDImage*                                           BaseBG;                                                  // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            DailyRitualsDetails;                                     // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDailyRitualsContainerWidget*                        DailyRitualsContainer;                                   // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   FooterText;                                              // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstance*                                   DefaultBackgroundMaterialInstance;                       // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstance*                                   AfterTrialBackgroundMaterialInstance;                    // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E4KU[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetVisuals(bool isAfterTrial);
		void OnDailyRitualRemoveButtonClicked(const class FString& dailyRitualKey);
		void OnDailyRitualClaimButtonClicked(const class FString& dailyRitualKey);
		void OnDailyRitualClaimAllButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DailyRitualTileWidget
	 * Size -> 0x0128 (FullSize[0x0438] - InheritedSize[0x0310])
	 */
	class UDailyRitualTileWidget : public UCoreBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             _claimButtonClickedDelegate;                             // 0x0310(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _removeButtonClickedDelegate;                            // 0x0320(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onDailyRitualTileFadeInCompletedDelegate;               // 0x0330(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onDailyRitualTileFadeOutCompletedDelegate;              // 0x0340(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class USizeBox*                                            ContainerSizeBox;                                        // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           IconImage;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           BackgroundImage;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           ProgressBar;                                             // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       TitleTextBlock;                                          // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       RewardTextBlock;                                         // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       DescriptionTextBlock;                                    // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       ProgressTextBlock;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreButtonWidget*                                   ClaimButton;                                             // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreButtonWidget*                                   RemoveButton;                                            // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          DefaultBackgroundTexture;                                // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          NewBackgroundTexture;                                    // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          CompletedBackgroundTexture;                              // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDailyRitualViewData                                _dailyRitualData;                                        // 0x03B8(0x0078) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3H0S[0x8];                                   // 0x0430(0x0008) MISSED OFFSET (PADDING)

	public:
		void PlayFadeOutAnimation();
		void PlayFadeInAnimation();
		void OnRemoveButtonClicked(class UCoreButtonWidget* Button);
		void OnClaimButtonClicked(class UCoreButtonWidget* Button);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDButton
	 * Size -> 0x0018 (FullSize[0x04B8] - InheritedSize[0x04A0])
	 */
	class UDBDButton : public UButton
	{
	public:
		bool                                                       SendAnalyticsData;                                       // 0x04A0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UZ7X[0x7];                                   // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnalyticsName;                                           // 0x04A8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDComboBoxString
	 * Size -> 0x0000 (FullSize[0x0EE8] - InheritedSize[0x0EE8])
	 */
	class UDBDComboBoxString : public UComboBoxString
	{
	public:
		void SetData(TArray<class FString> OptionsList, const class FString& DefaultOption);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDDropDownListButton
	 * Size -> 0x0000 (FullSize[0x0478] - InheritedSize[0x0478])
	 */
	class UDBDDropDownListButton : public UCoreTabWidget
	{
	public:
		void ToggleDropDownArrow(bool showArrow);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDDropDownListWidget
	 * Size -> 0x0028 (FullSize[0x03B8] - InheritedSize[0x0390])
	 */
	class UDBDDropDownListWidget : public UCoreTabContainerWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectedOptionDelegate;                                // 0x0390(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UCoreButtonWidget*                                   _triggerButton;                                          // 0x03A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5SSU[0x10];                                  // 0x03A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateDropDown();
		void UnbindFromTrigger();
		void OnUserClicked(const struct FPointerEvent& MouseEvent);
		void OnTriggerClicked(class UCoreButtonWidget* buttonTarget);
		void OnSelectedOptionDelegate__DelegateSignature(const struct FTabWidgetData& buttonData);
		void OnOptionSelected(class UCoreSelectableButtonWidget* selectedButton);
		void HideDropDownList();
		void BindToTrigger(class UCoreButtonWidget* triggerButton);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDImage
	 * Size -> 0x0048 (FullSize[0x0298] - InheritedSize[0x0250])
	 */
	class UDBDImage : public UImage
	{
	public:
		class UTexture2D*                                          DefaultImage;                                            // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             _onImageStreamingCancelled;                              // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             _onImageStreamingStarted;                                // 0x0268(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             _onImageStreamingCompleted;                              // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOLD[0x10];                                  // 0x0288(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetBrushFromTextureWithDefault(class UTexture2D* Texture, bool matchSize);
		void SetBrushFromSoftTextureWithDefault(bool matchSize);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDRichTextBlock
	 * Size -> 0x0110 (FullSize[0x07E0] - InheritedSize[0x06D0])
	 */
	class UDBDRichTextBlock : public URichTextBlock
	{
	public:
		class FString                                              TextStyle;                                               // 0x06D0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USwitchDockStateManager*                             _switchDockStateManager;                                 // 0x06E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextManager*                                     _textManager;                                            // 0x06E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _characterLimit;                                         // 0x06F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUpperCase;                                            // 0x06F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasLargeText;                                           // 0x06F5(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_24WQ[0x2];                                   // 0x06F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockOverrideProperties                        _largeTextProperties;                                    // 0x06F8(0x0048) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5MUT[0x1];                                   // 0x0740(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _overrideUndockedPropertiesWithLargeText;                // 0x0741(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasUndocking;                                           // 0x0742(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DK1A[0x5];                                   // 0x0743(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockOverrideProperties                        _undockedProperties;                                     // 0x0748(0x0048) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WN9C[0x50];                                  // 0x0790(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetIsUpperCase(bool isUpperCase);
		void SetHTMLText(const class FText& InText);
		void PreviewUndocked();
		void PreviewLargeText();
		void OnSwitchDockStateChanged(bool isDocked);
		void OnLargeTextSettingsChanged(bool isLargeText);
		bool GetIsUpperCase();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDScrollBox
	 * Size -> 0x0040 (FullSize[0x0950] - InheritedSize[0x0910])
	 */
	class UDBDScrollBox : public UScrollBox
	{
	public:
		bool                                                       _useControllerScroll;                                    // 0x0910(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldScrollOnMouseOver;                                // 0x0911(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IU5G[0x2];                                   // 0x0912(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _scrollSpeed;                                            // 0x0914(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreKeyListenerInputPromptWidget*                   _displayPrompt;                                          // 0x0918(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                _displayPromptText;                                      // 0x0920(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NoClear, Protected, NativeAccessSpecifierProtected
		EShowScrollDisplayPrompt                                   _showDisplayPrompt;                                      // 0x0938(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsUsingSmoothMask;                                       // 0x0939(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RX6A[0x6];                                   // 0x093A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URetainerBox*                                        SmoothMaskRetainerBox;                                   // 0x0940(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L3XF[0x8];                                   // 0x0948(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateSmoothMask(float CurrentOffset);
		void UpdateDisplayPrompt();
		void SetDisplayPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);
		void OnControlModeChanged(EControlMode controlMode);
		bool IsMouseOver();
		void HandleControllerInput(float analogValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDTextBlock
	 * Size -> 0x0110 (FullSize[0x0400] - InheritedSize[0x02F0])
	 */
	class UDBDTextBlock : public UTextBlock
	{
	public:
		class FString                                              TextStyle;                                               // 0x02F0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USwitchDockStateManager*                             _switchDockStateManager;                                 // 0x0300(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextManager*                                     _textManager;                                            // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _characterLimit;                                         // 0x0310(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUpperCase;                                            // 0x0314(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasLargeText;                                           // 0x0315(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EKOH[0x2];                                   // 0x0316(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockOverrideProperties                        _largeTextProperties;                                    // 0x0318(0x0048) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XFOQ[0x1];                                   // 0x0360(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _overrideUndockedPropertiesWithLargeText;                // 0x0361(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasUndocking;                                           // 0x0362(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OELU[0x5];                                   // 0x0363(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockOverrideProperties                        _undockedProperties;                                     // 0x0368(0x0048) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1NDP[0x50];                                  // 0x03B0(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetIsUpperCase(bool isUpperCase);
		void PreviewUndocked();
		void PreviewLargeText();
		void OnSwitchDockStateChanged(bool isDocked);
		void OnLargeTextSettingsChanged(bool isLargeText);
		bool GetIsUpperCase();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.TooltipRoot
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class UTooltipRoot : public UUserWidget
	{
	public:
		class UCanvasPanel*                                        _canvasPanel;                                            // 0x0298(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDTooltipManager
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UDBDTooltipManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_OIZF[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTooltipRoot*                                        _rootWidget;                                             // 0x0040(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<ETooltipType, class UUserWidget*>                     _tooltipPool;                                            // 0x0048(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UUserWidget*                                         _currentTooltip;                                         // 0x0098(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ShowLoadoutTooltip(const struct FLoadoutTooltipData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);
		void ShowLabelTooltip(const class FText& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);
		void ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);
		void ShowCurrencyTooltip(const struct FCurrencyProgressionTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);
		void ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);
		void ShowArchiveRewardNodeTooltip(const struct FArchiveRewardNodeTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);
		void ShowArchiveNodeTooltip(const struct FArchiveNodeViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);
		void ShowArchiveCompendiumTooltip(const struct FCompendiumButtonData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);
		void OnViewportCreated();
		void HideTooltip();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDWrapBox
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UDBDWrapBox : public UPanelWidget
	{
	public:
		struct FVector2D                                           InnerSlotPadding;                                        // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WrapWidth;                                               // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExplicitWrapWidth;                                      // 0x0154(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0155(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8CI[0x12];                                  // 0x0156(0x0012) MISSED OFFSET (PADDING)

	public:
		void SetInnerSlotPadding(const struct FVector2D& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		class UDBDWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDWrapBoxSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UDBDWrapBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFillEmptySpace;                                         // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2G74[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FillSpanWhenLessThan;                                    // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FH6F[0xE];                                   // 0x005A(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
		void SetFillEmptySpace(bool InbFillEmptySpace);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DragZone
	 * Size -> 0x0058 (FullSize[0x02F0] - InheritedSize[0x0298])
	 */
	class UDragZone : public UUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnDragDelegate;                                          // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      DeadZone;                                                // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDragZoneAxis                                              Axis;                                                    // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IT9Z[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBorder*                                             DebugPreview;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDButton*                                          HitzoneButton;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6WUY[0x30];                                  // 0x02C0(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnMouseReleaseGlobal(const struct FPointerEvent& MouseEvent);
		void OnMousePressHitzone();
		void OnMousePressGlobal(const struct FPointerEvent& MouseEvent);
		void OnMouseMoveGlobal(const struct FPointerEvent& MouseEvent);
		void OnMouseHoverHitzone();
		void OnAnalogInput(const struct FAnalogInputEvent& analogEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.EventEntryPopupWidget
	 * Size -> 0x0058 (FullSize[0x03C0] - InheritedSize[0x0368])
	 */
	class UEventEntryPopupWidget : public UCoreGenericPopupWidget
	{
	public:
		unsigned char                                              UnknownData_IDH6[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDImage*                                           ImageContainer;                                          // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           TitleBanner;                                             // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           TitleImage;                                              // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           BackgroundImage;                                         // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDScrollBox*                                       ScrollBox;                                               // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       EventDateText;                                           // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   AdditionalInformationText;                               // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          _eventSkinDataTable;                                     // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _eventEntrySkinUpdatedEvent;                             // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected

	public:
		void setWidgetSkinFromEventLabel(const class FText& EventLabel);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.LabelTooltipWidget
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class ULabelTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDRichTextBlock*                                   LabelRTB;                                                // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTooltipData(const class FText& labelText);
		void Reset();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.LoadoutMenuPopupWidget
	 * Size -> 0x02D8 (FullSize[0x0640] - InheritedSize[0x0368])
	 */
	class ULoadoutMenuPopupWidget : public UCoreGenericPopupWidget
	{
	public:
		unsigned char                                              UnknownData_KGNK[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDRichTextBlock*                                   LoadoutMenuPowerItemRTB;                                 // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   LoadoutMenuAddonRTB;                                     // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   LoadoutMenuOfferingRTB;                                  // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   LoadoutMenuPerkRTB;                                      // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       BotRoleIndexText;                                        // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   LoadoutMenuInventoryRTB;                                 // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   LoadoutMenuSubtitleRTB;                                  // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   LoadoutMenuPresetRTB;                                    // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDDropDownListWidget*                              DropDownListWidget;                                      // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDDropDownListButton*                              DropDownListTrigger;                                     // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuPowerWidget*                                CoreMenuPower;                                           // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuItemWidget*                                 CoreMenuItem;                                            // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuAddonWidget*                                CoreAddon_2;                                             // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuAddonWidget*                                CoreAddon_3;                                             // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuOfferingWidget*                             CoreOffering;                                            // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuPerkWidget*                                 CorePerk_2;                                              // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuPerkWidget*                                 CorePerk_3;                                              // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuPerkWidget*                                 CorePerk_4;                                              // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreMenuPerkWidget*                                 CorePerk_5;                                              // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCorePresetWidgetContainer*                          PresetContainer;                                         // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          InventoryGridContainer;                                  // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCorePaginationContainerWidget*                      PaginationGridContainer;                                 // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            LeftArrow;                                               // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            RightArrow;                                              // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onPaginationAnimationCompletedDelegate;                 // 0x0430(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onLoadoutMenuSlotClickedDelegate;                       // 0x0440(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onLoadoutMenuSlotSelectedDelegate;                      // 0x0450(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onLoadoutMenuInventorySlotClickedDelegate;              // 0x0460(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onLoadoutMenuPresetSlotClickedDelegate;                 // 0x0470(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onSelectedCharacterChangedDelegate;                     // 0x0480(0x0010) ZeroConstructor, InstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class UClass*                                              _loadoutPowerClass;                                      // 0x0490(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _loadoutItemWidgetClass;                                 // 0x0498(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _loadoutAddonClass;                                      // 0x04A0(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _loadoutOfferingClass;                                   // 0x04A8(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _loadoutPerkClass;                                       // 0x04B0(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _paginationWidgetClass;                                  // 0x04B8(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _inventoryPerRow;                                        // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _inventoryPerColumn;                                     // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _cellsPerRow;                                            // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMargin                                             _inventoryItemPadding;                                   // 0x04CC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMargin                                             _inventoryPerkPadding;                                   // 0x04DC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMargin                                             _inventoryOfferingPadding;                               // 0x04EC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      _inventoryPerkExtraNudge;                                // 0x04FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _inventoryOfferingExtraNudge;                            // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETooltipHorizontalAlignment                                HorizontalAlignment;                                     // 0x0504(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETooltipVerticalAlignment                                  VerticalAlignment;                                       // 0x0505(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MTNA[0x2];                                   // 0x0506(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoreMenuLoadoutPartWidget*>                  _inventoryItemWidgetList;                                // 0x0508(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreMenuPerkWidget*>                         _perkSlotWidget;                                         // 0x0518(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreMenuAddonWidget*>                        _addonSlotWidget;                                        // 0x0528(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UMenuLoadoutPartViewData*                            _menuLoadoutPartViewData;                                // 0x0538(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ELoadoutSlot                                               _loadoutSelectedSlot;                                    // 0x0540(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_62HP[0x3];                                   // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _numberOfPaginationItem;                                 // 0x0544(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ULoadoutMenuPopupViewData*>                   _perkData;                                               // 0x0548(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ULoadoutMenuPopupViewData*>                   _addonLoadoutData;                                       // 0x0558(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ULoadoutMenuPopupViewData*>                   _inventoryViewData;                                      // 0x0568(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C1TK[0xC8];                                  // 0x0578(0x00C8) MISSED OFFSET (PADDING)

	public:
		void UpdateInventoryItemData();
		void ShowMenuLoadoutPartsTooltip(class UCoreButtonWidget* hoveredSlotWidget);
		void SetInventoryItemEnabled(class UCoreMenuLoadoutPartWidget* Widget, EItemAvailability Availability);
		void PlayPaginationOutAnimation(bool isNextPage);
		void PlayPaginationInAnimation();
		void OnPaginationSelected(int32_t currentPage, bool isUpdate);
		void OnLoadoutMenuRightArrowClicked();
		void OnLoadoutMenuPresetClicked(int32_t selectedPresetId);
		void OnLoadoutMenuPowerSlotClicked(class UCoreButtonWidget* menuPowerWidget);
		void OnLoadoutMenuPerkSlotClicked(class UCoreButtonWidget* menuPerkWidget);
		void OnLoadoutMenuOfferingSlotClicked(class UCoreButtonWidget* menuOfferingWidget);
		void OnLoadoutMenuLeftArrowClicked();
		void OnLoadoutMenuItemSlotClicked(class UCoreButtonWidget* menuItemWidget);
		void OnLoadoutMenuInventorySlotClicked(class UCoreButtonWidget* menuPerkWidget);
		void OnLoadoutMenuAddonSlotClicked(class UCoreButtonWidget* menuAddonWidget);
		void OnDropdownSelected(ESlateVisibility InVisibility);
		void OnDropDownListSelectedOptionChanged(const struct FTabWidgetData& buttonData);
		void HideMenuLoadoutPartsTooltip(class UCoreButtonWidget* unhoveredSlotWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.LoadoutTooltipWidget
	 * Size -> 0x0050 (FullSize[0x0360] - InheritedSize[0x0310])
	 */
	class ULoadoutTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDTextBlock*                                       TooltipTitle;                                            // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   ToolTipDescriptionRTB;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       SpecialEventTitle;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       SpecialEventDescription;                                 // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       UnlockInstructionText;                                   // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       RarityTypeSubtitle;                                      // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           RarityBG;                                                // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           Line_2;                                                  // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           LevelIcon;                                               // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   ToolTipWarning;                                          // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTooltipData(const struct FLoadoutTooltipData& tooltipViewData);
		void SetLoadoutTooltipPerkLevel(int32_t Level);
		void SetLoadoutTooltipLockedState();
		void Reset();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.RichTextBlockImageSharedSizeDecorator
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class URichTextBlockImageSharedSizeDecorator : public URichTextBlockImageDecorator
	{
	public:
		int32_t                                                    Width;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.RichTextBlockScalableImageDecorator
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URichTextBlockScalableImageDecorator : public URichTextBlockImageDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.RichTextHTMLDecorator
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class URichTextHTMLDecorator : public URichTextBlockDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.RichTextNestedTagsDecorator
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class URichTextNestedTagsDecorator : public URichTextBlockDecorator
	{
	public:
		unsigned char                                              UnknownData_ZZ3U[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.TestWidget
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UTestWidget : public UCoreBaseUserWidget
	{
	public:
		class UPanelWidget*                                        Workbench;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       showWorkbench;                                           // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I4B6[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetShowWorkbench(bool showWorkbench);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
