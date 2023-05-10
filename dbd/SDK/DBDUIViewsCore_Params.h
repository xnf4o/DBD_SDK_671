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
	 * Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale
	 */
	struct UCoreBaseUserWidget_UpdateScale_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseUserWidget.StopAnimationByName
	 */
	struct UCoreBaseUserWidget_StopAnimationByName_Params
	{
	public:
		class FName                                                animName;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
	 */
	struct UCoreBaseUserWidget_RegisterForInput_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreBaseUserWidget.PlayAnimationByName
	 */
	struct UCoreBaseUserWidget_PlayAnimationByName_Params
	{
	public:
		class FName                                                animName;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      starttime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    loopcount;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUMGSequencePlayMode                                       PlayMode;                                                // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8XPO[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlaybackSpeed;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
	 */
	struct UCoreBaseUserWidget_OnControlModeChangedBP_Params
	{
	public:
		EControlMode                                               controlMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseUserWidget.GetAnimationByName
	 */
	struct UCoreBaseUserWidget_GetAnimationByName_Params
	{
	public:
		class FName                                                animName;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_96KR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
	 */
	struct UCoreBaseUserWidget_DeregisterFromInput_Params
	{	};

	/**
	 * Function DBDUIViewsCore.ArchiveCompendiumTooltipWidget.SetTooltipData
	 */
	struct UArchiveCompendiumTooltipWidget_SetTooltipData_Params
	{
	public:
		struct FCompendiumButtonData                               tooltipViewData;                                         // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.ArchiveCompendiumTooltipWidget.Reset
	 */
	struct UArchiveCompendiumTooltipWidget_Reset_Params
	{	};

	/**
	 * Function DBDUIViewsCore.ArchiveNodeTooltipWidget.SetTooltipData
	 */
	struct UArchiveNodeTooltipWidget_SetTooltipData_Params
	{
	public:
		struct FArchiveNodeViewData                                NodeViewData;                                            // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.ArchiveNodeTooltipWidget.SetNodeType
	 */
	struct UArchiveNodeTooltipWidget_SetNodeType_Params
	{
	public:
		EArchiveNodeType                                           Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.ArchiveNodeTooltipWidget.Reset
	 */
	struct UArchiveNodeTooltipWidget_Reset_Params
	{	};

	/**
	 * Function DBDUIViewsCore.AspectRatioBox.SetAspectRatio
	 */
	struct UAspectRatioBox_SetAspectRatio_Params
	{
	public:
		float                                                      inAspectRatio;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.AspectRatioBox.ClearAspectRatio
	 */
	struct UAspectRatioBox_ClearAspectRatio_Params
	{	};

	/**
	 * Function DBDUIViewsCore.AspectRatioBoxSlot.SetVerticalAlignment
	 */
	struct UAspectRatioBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         inVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.AspectRatioBoxSlot.SetPadding
	 */
	struct UAspectRatioBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.AspectRatioBoxSlot.SetHorizontalAlignment
	 */
	struct UAspectRatioBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       inHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData
	 */
	struct UCharacterTooltipWidget_SetTooltipData_Params
	{
	public:
		struct FCharacterTooltipViewData                           characterViewData;                                       // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel
	 */
	struct UCharacterTooltipWidget_SetLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty
	 */
	struct UCharacterTooltipWidget_SetDifficulty_Params
	{
	public:
		ECharacterDifficulty                                       Difficulty;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
	 */
	struct UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params
	{
	public:
		int32_t                                                    StackCount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
	 */
	struct UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params
	{
	public:
		EItemRarity                                                Rarity;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
	 */
	struct UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetVisible
	 */
	struct UCoreButtonWidget_SetVisible_Params
	{
	public:
		EButtonWidgetVisibility                                    visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetRepeatable
	 */
	struct UCoreButtonWidget_SetRepeatable_Params
	{
	public:
		bool                                                       isRepeatable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EJ6J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         repetitionDelayCurve;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetPressable
	 */
	struct UCoreButtonWidget_SetPressable_Params
	{
	public:
		bool                                                       isPressable;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetLabel
	 */
	struct UCoreButtonWidget_SetLabel_Params
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetHoverable
	 */
	struct UCoreButtonWidget_SetHoverable_Params
	{
	public:
		bool                                                       isHoverable;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetHoldable
	 */
	struct UCoreButtonWidget_SetHoldable_Params
	{
	public:
		bool                                                       isHoldable;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetEnabled
	 */
	struct UCoreButtonWidget_SetEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetClickable
	 */
	struct UCoreButtonWidget_SetClickable_Params
	{
	public:
		bool                                                       isClickable;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetChargeable
	 */
	struct UCoreButtonWidget_SetChargeable_Params
	{
	public:
		bool                                                       isChargeable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetBackground
	 */
	struct UCoreButtonWidget_SetBackground_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetAlignment
	 */
	struct UCoreButtonWidget_SetAlignment_Params
	{
	public:
		ETextJustify                                               newAlignment;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.SetAdditionalIcon
	 */
	struct UCoreButtonWidget_SetAdditionalIcon_Params
	{	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnUnhoveredDelegate__DelegateSignature
	 */
	struct UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered
	 */
	struct UCoreButtonWidget_OnUnhovered_Params
	{	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnReleasedDelegate__DelegateSignature
	 */
	struct UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnReleased
	 */
	struct UCoreButtonWidget_OnReleased_Params
	{	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnPressedDelegate__DelegateSignature
	 */
	struct UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnPressed
	 */
	struct UCoreButtonWidget_OnPressed_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered
	 */
	struct UCoreButtonWidget_OnInternalUnhovered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased
	 */
	struct UCoreButtonWidget_OnInternalReleased_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed
	 */
	struct UCoreButtonWidget_OnInternalPressed_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered
	 */
	struct UCoreButtonWidget_OnInternalHovered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked
	 */
	struct UCoreButtonWidget_OnInternalClicked_Params
	{	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnHoveredDelegate__DelegateSignature
	 */
	struct UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnHovered
	 */
	struct UCoreButtonWidget_OnHovered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnEnabledChanged
	 */
	struct UCoreButtonWidget_OnEnabledChanged_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnClickedDelegate__DelegateSignature
	 */
	struct UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnClicked
	 */
	struct UCoreButtonWidget_OnClicked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.OnAlignmentChanged
	 */
	struct UCoreButtonWidget_OnAlignmentChanged_Params
	{
	public:
		ETextJustify                                               newAlignment;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.IsEnabled
	 */
	struct UCoreButtonWidget_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonWidget.GetHitzonePaintSpaceGeometry
	 */
	struct UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Params
	{
	public:
		struct FGeometry                                           ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreSelectableButtonWidget.UpdateBackgroundSkin
	 */
	struct UCoreSelectableButtonWidget_UpdateBackgroundSkin_Params
	{
	public:
		class UMaterialInterface*                                  skinMaterial;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected
	 */
	struct UCoreSelectableButtonWidget_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelectable
	 */
	struct UCoreSelectableButtonWidget_SetSelectable_Params
	{
	public:
		bool                                                       IsSelectable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChangedDelegate__DelegateSignature
	 */
	struct UCoreSelectableButtonWidget_OnSelectedChangedDelegate__DelegateSignature_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsSelected;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChanged
	 */
	struct UCoreSelectableButtonWidget_OnSelectedChanged_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedAgainDelegate__DelegateSignature
	 */
	struct UCoreSelectableButtonWidget_OnSelectedAgainDelegate__DelegateSignature_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected
	 */
	struct UCoreSelectableButtonWidget_IsSelected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelectable
	 */
	struct UCoreSelectableButtonWidget_IsSelectable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateVisualState
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Params
	{
	public:
		struct FArchiveChallengeReminderViewData                   Data;                                                    // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateProgressBar
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateActiveState
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PlayAnimation;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SwapChallenge
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Params
	{
	public:
		struct FArchiveChallengeReminderViewData                   Data;                                                    // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetSlotSelectorState
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Params
	{
	public:
		bool                                                       isSelectorOpen;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetQuestNodeHoverEffect
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetData
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_SetData_Params
	{
	public:
		struct FArchiveChallengeReminderViewData                   Data;                                                    // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.InitVisualState
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_InitVisualState_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.Init
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_Init_Params
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.ClearData
	 */
	struct UCoreArchiveChallengeReminderSlotWidget_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetLevelProgressionVisual
	 */
	struct UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Params
	{
	public:
		int32_t                                                    buttonLevel;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EArchivesStoryLevelStatus                                  levelStatus;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetGhostStory
	 */
	struct UCoreArchiveCompendiumButtonWidget_SetGhostStory_Params
	{
	public:
		bool                                                       isGhostStory;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonVisual
	 */
	struct UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Params
	{
	public:
		struct FCompendiumButtonData                               buttonData;                                              // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonData
	 */
	struct UCoreArchiveCompendiumButtonWidget_SetButtonData_Params
	{
	public:
		struct FCompendiumButtonData                               buttonData;                                              // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.ResetVisuals
	 */
	struct UCoreArchiveCompendiumButtonWidget_ResetVisuals_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonUnhovered
	 */
	struct UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonHovered
	 */
	struct UCoreArchiveCompendiumButtonWidget_OnButtonHovered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.GetTomeId
	 */
	struct UCoreArchiveCompendiumButtonWidget_GetTomeId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContentWidget.StopFadeInTweening
	 */
	struct UCoreTabContentWidget_StopFadeInTweening_Params
	{
	public:
		float                                                      opacityValue;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContentWidget.ResetFade
	 */
	struct UCoreTabContentWidget_ResetFade_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreTabContentWidget.FadeOutContent
	 */
	struct UCoreTabContentWidget_FadeOutContent_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreTabContentWidget.FadeInContent
	 */
	struct UCoreTabContentWidget_FadeInContent_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumWidget.SetGridSlot
	 */
	struct UCoreArchiveCompendiumWidget_SetGridSlot_Params
	{
	public:
		class UGridSlot*                                           GridSlot;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumWidget.ResetScroll
	 */
	struct UCoreArchiveCompendiumWidget_ResetScroll_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumWidget.Reset
	 */
	struct UCoreArchiveCompendiumWidget_Reset_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumWidget.OnPastStoryClicked
	 */
	struct UCoreArchiveCompendiumWidget_OnPastStoryClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateGhostStories
	 */
	struct UCoreArchiveCompendiumWidget_CreateGhostStories_Params
	{
	public:
		int32_t                                                    currentStoryNum;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateAndAddButtonToGrid
	 */
	struct UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0F29[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCoreArchiveCompendiumButtonWidget*                  ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetVoiceOverText
	 */
	struct UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Params
	{
	public:
		class FText                                                playVoiceOverText;                                       // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                stopVoiceOverText;                                       // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                autoplayVoiceOverText;                                   // 0x0030(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetTextVisibilityInputText
	 */
	struct UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Params
	{
	public:
		class FText                                                DisplayText;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                hideText;                                                // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetScrollData
	 */
	struct UCoreArchiveJournalImageViewerWidget_SetScrollData_Params
	{
	public:
		class FText                                                journalEntryScrollPromptText;                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetData
	 */
	struct UCoreArchiveJournalImageViewerWidget_SetData_Params
	{
	public:
		struct FArchivesVignetteEntryViewData                      Data;                                                    // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       hasTitle;                                                // 0x0070(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       hasDescription;                                          // 0x0071(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverPlay
	 */
	struct UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverAutoPlay
	 */
	struct UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Params
	{
	public:
		bool                                                       autoplay;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnTextVisibilityChanged
	 */
	struct UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.ShowImageViewer
	 */
	struct UCoreArchiveJournalWidget_ShowImageViewer_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverText
	 */
	struct UCoreArchiveJournalWidget_SetVoiceOverText_Params
	{
	public:
		class FText                                                playVoiceOverText;                                       // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                stopVoiceOverText;                                       // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                autoplayVoiceOverText;                                   // 0x0030(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverButtonsVisibility
	 */
	struct UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVignetteText
	 */
	struct UCoreArchiveJournalWidget_SetVignetteText_Params
	{
	public:
		class FText                                                titleText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                subtitleText;                                            // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.SetTopFogOffset
	 */
	struct UCoreArchiveJournalWidget_SetTopFogOffset_Params
	{
	public:
		bool                                                       hasTitle;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       hasDescription;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryText
	 */
	struct UCoreArchiveJournalWidget_SetEntryText_Params
	{
	public:
		class FText                                                titleText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                descriptionText;                                         // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryImage
	 */
	struct UCoreArchiveJournalWidget_SetEntryImage_Params
	{
	public:
		class FText                                                titleText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                descriptionText;                                         // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D9ZY[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      textureOffset;                                           // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.SetBottomFogOffset
	 */
	struct UCoreArchiveJournalWidget_SetBottomFogOffset_Params
	{
	public:
		bool                                                       HasAudio;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverPlay
	 */
	struct UCoreArchiveJournalWidget_OnVoiceOverPlay_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverAutoPlay
	 */
	struct UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Params
	{
	public:
		bool                                                       autoplay;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteEntrySelected
	 */
	struct UCoreArchiveJournalWidget_OnVignetteEntrySelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteCinematicSelected
	 */
	struct UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteButtonSelected
	 */
	struct UCoreArchiveJournalWidget_OnVignetteButtonSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnRightArrowTriggered
	 */
	struct UCoreArchiveJournalWidget_OnRightArrowTriggered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnRewardImageLoaded
	 */
	struct UCoreArchiveJournalWidget_OnRewardImageLoaded_Params
	{
	public:
		unsigned char                                              UnknownData_XW5U[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       success;                                                 // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DU84[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                titleText;                                               // 0x0038(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                descriptionText;                                         // 0x0050(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      textureOffset;                                           // 0x0068(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnLeftArrowTriggered
	 */
	struct UCoreArchiveJournalWidget_OnLeftArrowTriggered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnJournalEntriesUnlocked
	 */
	struct UCoreArchiveJournalWidget_OnJournalEntriesUnlocked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.OnFirstJournalEntryUnlocked
	 */
	struct UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveJournalWidget.InitializeArrow
	 */
	struct UCoreArchiveJournalWidget_InitializeArrow_Params
	{
	public:
		class UCoreInputSwitcherWidget*                            arrowWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Active;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnTomeLevelUnlockedAnimation
	 */
	struct UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnStoryLevelSelected
	 */
	struct UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveMenuWidget.SetScrollData
	 */
	struct UCoreArchiveMenuWidget_SetScrollData_Params
	{
	public:
		class FText                                                vignetteListScrollPromptText;                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                journalEntryScrollPromptText;                            // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelectionCancelled
	 */
	struct UCoreArchiveMenuWidget_OnSlotSelectionCancelled_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelected
	 */
	struct UCoreArchiveMenuWidget_OnSlotSelected_Params
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelectedAgain
	 */
	struct UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelected
	 */
	struct UCoreArchiveMenuWidget_OnMenuTabSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveMenuWidget.OnInfoButtonClicked
	 */
	struct UCoreArchiveMenuWidget_OnInfoButtonClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveMenuWidget.OnChallengeReminderClick
	 */
	struct UCoreArchiveMenuWidget_OnChallengeReminderClick_Params
	{
	public:
		class UCoreButtonWidget*                                   Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveMenuWidget.GetTimeRemainingLabelFromMenuState
	 */
	struct UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Params
	{
	public:
		EArchiveMenuState                                          menuState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BQOD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveObjectiveWidget.SetData
	 */
	struct UCoreArchiveObjectiveWidget_SetData_Params
	{
	public:
		struct FArchiveNodeObjectiveViewData                       objectiveData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBasePopupWidget.Show
	 */
	struct UCoreBasePopupWidget_Show_Params
	{
	public:
		class UBasePopupViewData*                                  Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBasePopupWidget.Hide
	 */
	struct UCoreBasePopupWidget_Hide_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreGenericPopupWidget.OnRegressionAction
	 */
	struct UCoreGenericPopupWidget_OnRegressionAction_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreGenericPopupWidget.OnProgressionAction
	 */
	struct UCoreGenericPopupWidget_OnProgressionAction_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreGenericPopupWidget.OnAlternativeAction
	 */
	struct UCoreGenericPopupWidget_OnAlternativeAction_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchivePassPurchasePopupWidget.GetTranslatedAvailabilityTitleText
	 */
	struct UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromPath
	 */
	struct UCoreArchiveQuestMapWidget_UnbindFromPath_Params
	{
	public:
		class UCoreArchiveQuestPathWidget*                         Path;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromNode
	 */
	struct UCoreArchiveQuestMapWidget_UnbindFromNode_Params
	{
	public:
		class UCoreArchiveQuestNodeWidget*                         Node;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupPath
	 */
	struct UCoreArchiveQuestMapWidget_SetupPath_Params
	{
	public:
		struct FArchiveMapPathViewData                             PathData;                                                // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupNode
	 */
	struct UCoreArchiveQuestMapWidget_SetupNode_Params
	{
	public:
		struct FArchiveNodeGraphViewData                           NodeData;                                                // 0x0000(0x00F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeUnhovered
	 */
	struct UCoreArchiveQuestMapWidget_OnNodeUnhovered_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodesRevealCompleted
	 */
	struct UCoreArchiveQuestMapWidget_OnNodesRevealCompleted_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeHovered
	 */
	struct UCoreArchiveQuestMapWidget_OnNodeHovered_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeClicked
	 */
	struct UCoreArchiveQuestMapWidget_OnNodeClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToPath
	 */
	struct UCoreArchiveQuestMapWidget_BindToPath_Params
	{
	public:
		class UCoreArchiveQuestPathWidget*                         Path;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToNode
	 */
	struct UCoreArchiveQuestMapWidget_BindToNode_Params
	{
	public:
		class UCoreArchiveQuestNodeWidget*                         Node;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetHighlightedGridLines
	 */
	struct UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Params
	{
	public:
		int32_t                                                    verticalIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    horizontalIndex;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetGridLinesArray
	 */
	struct UCoreArchiveQuestEditorWidget_SetGridLinesArray_Params
	{
	public:
		TArray<struct FLinePair>                                   gridArrayVertical;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FLinePair>                                   gridArrayHorizontal;                                     // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSnapGridChecked
	 */
	struct UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Params
	{
	public:
		bool                                                       checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSaveGraphClick
	 */
	struct UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnRefreshGridClick
	 */
	struct UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnPathClicked
	 */
	struct UCoreArchiveQuestEditorWidget_OnPathClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPixelChanged
	 */
	struct UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPercentChanged
	 */
	struct UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPixelChanged
	 */
	struct UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPercentChanged
	 */
	struct UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeSubmitClick
	 */
	struct UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeBeginDrag
	 */
	struct UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnMoveNodesModeChecked
	 */
	struct UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Params
	{
	public:
		bool                                                       checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnLinkNodesModeChecked
	 */
	struct UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Params
	{
	public:
		bool                                                       checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridVisbilityChecked
	 */
	struct UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Params
	{
	public:
		bool                                                       checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPixelChanged
	 */
	struct UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPercentChanged
	 */
	struct UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPixelChanged
	 */
	struct UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPercentChanged
	 */
	struct UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.NodeDragged
	 */
	struct UCoreArchiveQuestEditorWidget_NodeDragged_Params
	{
	public:
		struct FVector2D                                           position;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.IntermediatePathMove
	 */
	struct UCoreArchiveQuestEditorWidget_IntermediatePathMove_Params
	{
	public:
		struct FVector2D                                           position;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateStoryIndicatorOpacity
	 */
	struct UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Params
	{
	public:
		bool                                                       IsImageReward;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isCompleted;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateNode
	 */
	struct UCoreArchiveQuestNodeWidget_UpdateNode_Params
	{
	public:
		struct FArchiveNodeViewData                                Data;                                                    // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateAllStoryIndicators
	 */
	struct UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.ShowRewardNodeTooltip
	 */
	struct UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.SetRewardRarity
	 */
	struct UCoreArchiveQuestNodeWidget_SetRewardRarity_Params
	{
	public:
		EItemRarity                                                Rarity;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.Reset
	 */
	struct UCoreArchiveQuestNodeWidget_Reset_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnStatusChanged
	 */
	struct UCoreArchiveQuestNodeWidget_OnStatusChanged_Params
	{
	public:
		ENodeStatusChange                                          nodeStatusChange;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnReset
	 */
	struct UCoreArchiveQuestNodeWidget_OnReset_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnInit
	 */
	struct UCoreArchiveQuestNodeWidget_OnInit_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.NeedsChallengeReminderHoverAnimation
	 */
	struct UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsValidNode
	 */
	struct UCoreArchiveQuestNodeWidget_IsValidNode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsSelectableNode
	 */
	struct UCoreArchiveQuestNodeWidget_IsSelectableNode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.InitNode
	 */
	struct UCoreArchiveQuestNodeWidget_InitNode_Params
	{
	public:
		class FName                                                nodeId;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JZ82[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FArchiveNodeViewData                                Data;                                                    // 0x0010(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       isChallengeReminderNode;                                 // 0x00C8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.HandleStatusChange
	 */
	struct UCoreArchiveQuestNodeWidget_HandleStatusChange_Params
	{
	public:
		EStoryNodeState                                            prevStatus;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EStoryNodeState                                            currentStatus;                                           // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.BroadcastDragBegin
	 */
	struct UCoreArchiveQuestNodeWidget_BroadcastDragBegin_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestPathWidget.UpdatePath
	 */
	struct UCoreArchiveQuestPathWidget_UpdatePath_Params
	{
	public:
		struct FArchiveMapPathViewData                             Data;                                                    // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestPathWidget.SetVisualState
	 */
	struct UCoreArchiveQuestPathWidget_SetVisualState_Params
	{
	public:
		EArchivePathStatus                                         pathStatus;                                              // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestPathWidget.Reset
	 */
	struct UCoreArchiveQuestPathWidget_Reset_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveQuestPathWidget.InitPath
	 */
	struct UCoreArchiveQuestPathWidget_InitPath_Params
	{
	public:
		struct FArchiveMapPathViewData                             Data;                                                    // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftTierItem.SetLockedState
	 */
	struct UCoreArchiveRiftTierItem_SetLockedState_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       hasPremium;                                              // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftTierItem.SetGenericData
	 */
	struct UCoreArchiveRiftTierItem_SetGenericData_Params
	{
	public:
		struct FArchiveRiftTierRewardsViewData                     Data;                                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftTierItem.PlayUnlockanimation
	 */
	struct UCoreArchiveRiftTierItem_PlayUnlockanimation_Params
	{
	public:
		bool                                                       IsPremiumUnlocked;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JRQO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftTierItem.OnRewardClicked
	 */
	struct UCoreArchiveRiftTierItem_OnRewardClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftTierItem.Clear
	 */
	struct UCoreArchiveRiftTierItem_Clear_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.SetVisualData
	 */
	struct UCoreArchiveRiftWidget_SetVisualData_Params
	{
	public:
		struct FArchivesRiftGenericViewData                        Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.SetTierVisuals
	 */
	struct UCoreArchiveRiftWidget_SetTierVisuals_Params
	{
	public:
		ETierType                                                  TierType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.SetPaginationVisuals
	 */
	struct UCoreArchiveRiftWidget_SetPaginationVisuals_Params
	{
	public:
		bool                                                       showBonusTierHighlight;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DU2C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                bonusTierTooltipText;                                    // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.PlayPremiumTrackUnlockAnimation
	 */
	struct UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardItemClicked
	 */
	struct UCoreArchiveRiftWidget_OnRewardItemClicked_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LDQH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCoreButtonWidget*                                   Button;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isPremium;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TBJ9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardAnimationCompleted
	 */
	struct UCoreArchiveRiftWidget_OnRewardAnimationCompleted_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.OnPreviousButtonClicked
	 */
	struct UCoreArchiveRiftWidget_OnPreviousButtonClicked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonUnhovered
	 */
	struct UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Params
	{
	public:
		class UCoreButtonWidget*                                   Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonHovered
	 */
	struct UCoreArchiveRiftWidget_OnOutfitButtonHovered_Params
	{
	public:
		class UCoreButtonWidget*                                   Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonClicked
	 */
	struct UCoreArchiveRiftWidget_OnOutfitButtonClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.OnNextButtonClicked
	 */
	struct UCoreArchiveRiftWidget_OnNextButtonClicked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.OnCurrentPageAnimationCompleted
	 */
	struct UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveRiftWidget.DisplayPage
	 */
	struct UCoreArchiveRiftWidget_DisplayPage_Params
	{
	public:
		class UUITweenInstance*                                    tween;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnSurvivorSelection
	 */
	struct UCoreArchiveSlotSelectorWidget_OnSurvivorSelection_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnKillerSelection
	 */
	struct UCoreArchiveSlotSelectorWidget_OnKillerSelection_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnCancelSelection
	 */
	struct UCoreArchiveSlotSelectorWidget_OnCancelSelection_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnBothSelection
	 */
	struct UCoreArchiveSlotSelectorWidget_OnBothSelection_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.SetVisualData
	 */
	struct UCoreArchiveTierPurchasePopupWidget_SetVisualData_Params
	{
	public:
		class UArchiveTierPurchasePopupViewData*                   ViewData;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnMoreInputTriggered
	 */
	struct UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnLessInputTriggered
	 */
	struct UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnConfirmPurchase
	 */
	struct UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveTomeWidget.OnMenuTabSelected
	 */
	struct UCoreArchiveTomeWidget_OnMenuTabSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonSelector.UnselectCurrent
	 */
	struct UCoreButtonSelector_UnselectCurrent_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreButtonSelector.SetInputsEnabled
	 */
	struct UCoreButtonSelector_SetInputsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonSelector.SetAllEnabled
	 */
	struct UCoreButtonSelector_SetAllEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonSelector.SelectPrevious
	 */
	struct UCoreButtonSelector_SelectPrevious_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonSelector.SelectNext
	 */
	struct UCoreButtonSelector_SelectNext_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonSelector.Select
	 */
	struct UCoreButtonSelector_Select_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         buttonToSelect;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       performAction;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnUnselectedDelegate__DelegateSignature
	 */
	struct UCoreButtonSelector_OnUnselectedDelegate__DelegateSignature_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         unselectedButton;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedDelegate__DelegateSignature
	 */
	struct UCoreButtonSelector_OnSelectedDelegate__DelegateSignature_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedAgainDelegate__DelegateSignature
	 */
	struct UCoreButtonSelector_OnSelectedAgainDelegate__DelegateSignature_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedChanged
	 */
	struct UCoreButtonSelector_OnButtonSelectedChanged_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsSelected;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedAgain
	 */
	struct UCoreButtonSelector_OnButtonSelectedAgain_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreButtonSelector.HasSelection
	 */
	struct UCoreButtonSelector_HasSelection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.UpdateBackgroundSkin
	 */
	struct UCoreTabContainerWidget_UpdateBackgroundSkin_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TSMZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  skinMaterial;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.SetUseControllerTabSwitching
	 */
	struct UCoreTabContainerWidget_SetUseControllerTabSwitching_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.SetTabVisible
	 */
	struct UCoreTabContainerWidget_SetTabVisible_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       visible;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.SetTabEnabled
	 */
	struct UCoreTabContainerWidget_SetTabEnabled_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.SetNotificationVisibility
	 */
	struct UCoreTabContainerWidget_SetNotificationVisibility_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HasNotification;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.RemoveTabs
	 */
	struct UCoreTabContainerWidget_RemoveTabs_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.OnTabSelected
	 */
	struct UCoreTabContainerWidget_OnTabSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.LayOutTabs
	 */
	struct UCoreTabContainerWidget_LayOutTabs_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.Init
	 */
	struct UCoreTabContainerWidget_Init_Params
	{
	public:
		TArray<struct FTabWidgetData>                              tabsData;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabContainerWidget.GetTab
	 */
	struct UCoreTabContainerWidget_GetTab_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OSD8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCoreTabWidget*                                      ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabWidget.SetNotificationVisibility
	 */
	struct UCoreTabWidget_SetNotificationVisibility_Params
	{
	public:
		bool                                                       HasNotification;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabWidget.SetIconTexture
	 */
	struct UCoreTabWidget_SetIconTexture_Params
	{
	public:
		class UTexture2D*                                          IconTexture;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           forcedIconSize;                                          // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabWidget.SetIconSoftTexture
	 */
	struct UCoreTabWidget_SetIconSoftTexture_Params
	{
	public:
		unsigned char                                              UnknownData_IU8W[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           forcedIconSize;                                          // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabWidget.PostInit
	 */
	struct UCoreTabWidget_PostInit_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreTabWidget.HasLabelTooltip
	 */
	struct UCoreTabWidget_HasLabelTooltip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabWidget.GetTabText
	 */
	struct UCoreTabWidget_GetTabText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTabWidget.GetKey
	 */
	struct UCoreTabWidget_GetKey_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVisualData
	 */
	struct UCoreArchiveVignetteButtonWidget_SetVisualData_Params
	{
	public:
		class FText                                                vignetteTitle;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                vignetteSubtitle;                                        // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                vignetteProgressText;                                    // 0x0030(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       displayProgress;                                         // 0x0048(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CKH6[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      vignetteProgress;                                        // 0x004C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isUnread;                                                // 0x0050(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3A5K[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                unreadIndicatorText;                                     // 0x0058(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       showCinematics;                                          // 0x0070(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       lockCinematics;                                          // 0x0071(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVignetteRead
	 */
	struct UCoreArchiveVignetteButtonWidget_SetVignetteRead_Params
	{
	public:
		bool                                                       IsRead;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetData
	 */
	struct UCoreArchiveVignetteButtonWidget_SetData_Params
	{
	public:
		struct FArchivesVignetteViewData                           vignetteDataList;                                        // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteCinematicButton.UnlockCinematic
	 */
	struct UCoreArchiveVignetteCinematicButton_UnlockCinematic_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteCinematicButton.SetIsForceDisabled
	 */
	struct UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Params
	{
	public:
		bool                                                       isForceDisabled;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteCinematicContainerWidget.UnlockCinematics
	 */
	struct UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.UnlockEntry
	 */
	struct UCoreArchiveVignetteEntryButtonWidget_UnlockEntry_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetVisualData
	 */
	struct UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Params
	{
	public:
		int32_t                                                    entryNumber;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsRead;                                                  // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O3EP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                unreadIndicatorText;                                     // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       isImage;                                                 // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetData
	 */
	struct UCoreArchiveVignetteEntryButtonWidget_SetData_Params
	{
	public:
		int32_t                                                    entryNumber;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsRead;                                                  // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isImage;                                                 // 0x0005(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.GetEntryNumber
	 */
	struct UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockProgress
	 */
	struct UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Params
	{
	public:
		class UUITweenInstance*                                    tween;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockComplete
	 */
	struct UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Params
	{
	public:
		class UUITweenInstance*                                    tween;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
	 */
	struct UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
	 */
	struct UCoreBaseHudWidget_PlayFocusAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreBinkVideoPlayerWidget.SetSize
	 */
	struct UCoreBinkVideoPlayerWidget_SetSize_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreRewardWidget.SetIsLocked
	 */
	struct UCoreRewardWidget_SetIsLocked_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       useAnimation;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreRewardWidget.GetLockedOverlay
	 */
	struct UCoreRewardWidget_GetLockedOverlay_Params
	{
	public:
		class UCoreLockedOverlayWidget*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreRewardWidget.ClearData
	 */
	struct UCoreRewardWidget_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData
	 */
	struct UCoreCharacterRewardWidget_SetData_Params
	{
	public:
		struct FCharacterRewardViewData                            CharacterRewardViewData;                                 // 0x0000(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreCreditsWidget.ScrollText
	 */
	struct UCoreCreditsWidget_ScrollText_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreCreditsWidget.OnScrollEnd
	 */
	struct UCoreCreditsWidget_OnScrollEnd_Params
	{
	public:
		class UUITweenInstance*                                    tween;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreCurrencyExpirationLabelWidget.SetData
	 */
	struct UCoreCurrencyExpirationLabelWidget_SetData_Params
	{
	public:
		struct FCurrencyExpirationLabelViewData                    ViewData;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreCurrencyForTooltipsWidget.SetData
	 */
	struct UCoreCurrencyForTooltipsWidget_SetData_Params
	{
	public:
		struct FCurrencyProgressionRewardViewData                  currencyRewardViewData;                                  // 0x0000(0x0128)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreCurrencyLabelWidget.UpdateCurrency
	 */
	struct UCoreCurrencyLabelWidget_UpdateCurrency_Params
	{
	public:
		int32_t                                                    newBalance;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    previousBalance;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreCurrencyLabelWidget.SetData
	 */
	struct UCoreCurrencyLabelWidget_SetData_Params
	{
	public:
		struct FCurrencyLabelViewData                              ViewData;                                                // 0x0000(0x0100)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreCurrencyLabelWidget.PlayNotEnoughCurrency
	 */
	struct UCoreCurrencyLabelWidget_PlayNotEnoughCurrency_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreCurrencyProgressionRewardWidget.SetData
	 */
	struct UCoreCurrencyProgressionRewardWidget_SetData_Params
	{
	public:
		struct FCurrencyProgressionRewardViewData                  CurrencyProgressionRewardViewData;                       // 0x0000(0x0128)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetRarity
	 */
	struct UCoreCustomizationRewardWidget_SetRarity_Params
	{
	public:
		EItemRarity                                                Rarity;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetOwnedText
	 */
	struct UCoreCustomizationRewardWidget_SetOwnedText_Params
	{
	public:
		class FText                                                ownedText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData
	 */
	struct UCoreCustomizationRewardWidget_SetData_Params
	{
	public:
		struct FCustomizationRewardViewData                        CustomizationRewardViewData;                             // 0x0000(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreDisplayStandWidget.OnDrag
	 */
	struct UCoreDisplayStandWidget_OnDrag_Params
	{
	public:
		struct FVector2D                                           cursorDelta;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
	 */
	struct UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
	 */
	struct UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk_Implementation
	 */
	struct UCoreExternalEffectsWidget_HideExternalPerk_Implementation_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon_Implementation
	 */
	struct UCoreExternalEffectsWidget_HideExternalAddon_Implementation_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreFooterButtonWidget.SetUnhoveredColor
	 */
	struct UCoreFooterButtonWidget_SetUnhoveredColor_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreFooterButtonWidget.SetHoveredColor
	 */
	struct UCoreFooterButtonWidget_SetHoveredColor_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.SetUIAction
	 */
	struct UCoreInputSwitcherWidget_SetUIAction_Params
	{
	public:
		EUIActionType                                              ActionType;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.SetRepeatable
	 */
	struct UCoreInputSwitcherWidget_SetRepeatable_Params
	{
	public:
		bool                                                       isRepeatable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QZ1N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         repetitionDelayCurve;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.SetLabel
	 */
	struct UCoreInputSwitcherWidget_SetLabel_Params
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.SetKeyOverride
	 */
	struct UCoreInputSwitcherWidget_SetKeyOverride_Params
	{
	public:
		struct FKey                                                keyOverride;                                             // 0x0000(0x0020)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.SetEnabled
	 */
	struct UCoreInputSwitcherWidget_SetEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.SetBackground
	 */
	struct UCoreInputSwitcherWidget_SetBackground_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.SetAlignment
	 */
	struct UCoreInputSwitcherWidget_SetAlignment_Params
	{
	public:
		ETextJustify                                               newAlignment;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.SetAdditionalIcon
	 */
	struct UCoreInputSwitcherWidget_SetAdditionalIcon_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.OnInputPromptTriggered
	 */
	struct UCoreInputSwitcherWidget_OnInputPromptTriggered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.OnButtonClicked
	 */
	struct UCoreInputSwitcherWidget_OnButtonClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.OnAlignmentChanged
	 */
	struct UCoreInputSwitcherWidget_OnAlignmentChanged_Params
	{
	public:
		ETextJustify                                               newAlignment;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.GetInputPrompt
	 */
	struct UCoreInputSwitcherWidget_GetInputPrompt_Params
	{
	public:
		class UCoreKeyListenerInputPromptWidget*                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputSwitcherWidget.GetButton
	 */
	struct UCoreInputSwitcherWidget_GetButton_Params
	{
	public:
		class UCoreButtonWidget*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText
	 */
	struct UCoreGameManualCategoryButton_SetText_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FText                                                Description;                                             // 0x0018(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState
	 */
	struct UCoreGameManualPanelWidget_ToggleGameManualMenuState_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics
	 */
	struct UCoreGameManualPanelWidget_ShowHelpTopics_Params
	{
	public:
		EHelpType                                                  categoryType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState
	 */
	struct UCoreGameManualPanelWidget_SetGameManualMenuState_Params
	{
	public:
		EGameManualMenuState                                       menuState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle
	 */
	struct UCoreGameManualPanelWidget_SetCurrentOnbardingMenuSubtitle_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls
	 */
	struct UCoreGameManualPanelWidget_ResetScrolls_Params
	{
	public:
		bool                                                       resetTopicsScroll;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicsTabSelected
	 */
	struct UCoreGameManualPanelWidget_OnTopicsTabSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
	 */
	struct UCoreHudAlertWidget_PopAlert_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
	 */
	struct UCoreHudAlertWidget_OnPopAlertComplete_Params
	{
	public:
		class UUITweenInstance*                                    tween;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
	 */
	struct UCoreHudAlertWidget_OnClearAlertsComplete_Params
	{
	public:
		class UUITweenInstance*                                    tween;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
	 */
	struct UCoreHudAlertWidget_GetRemainingTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
	 */
	struct UCoreHudAlertWidget_GetPendingAlerts_Params
	{
	public:
		TArray<class UCoreBaseUserWidget*>                         ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
	 */
	struct UCoreHudAlertWidget_GetAlerts_Params
	{
	public:
		TArray<class UCoreBaseUserWidget*>                         ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
	 */
	struct UCoreHudAlertWidget_ClearAlerts_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.UpdateResult
	 */
	struct UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Params
	{
	public:
		bool                                                       IsSuccessful;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.RevealDirection
	 */
	struct UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Params
	{
	public:
		bool                                                       withAnimation;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.Init
	 */
	struct UCoreHudDirectionalMiniGameItemWidget_Init_Params
	{
	public:
		EDirectionalInputKey                                       Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.ShowVisual
	 */
	struct UCoreHudDirectionalMiniGameWidget_ShowVisual_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.GetWidgets
	 */
	struct UCoreHudDirectionalMiniGameWidget_GetWidgets_Params
	{
	public:
		TArray<class UCoreHudDirectionalMiniGameItemWidget*>       ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
	 */
	struct UCoreHudScoreAlertItem_SetData_Params
	{
	public:
		struct FScoreAlertViewData                                 Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
	 */
	struct UCoreHudStatusEffectAlertItem_SetData_Params
	{
	public:
		struct FStatusEffectAlertViewData                          Data;                                                    // 0x0000(0x01B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
	 */
	struct UCoreInputPromptWidget_SetInputKey_Params
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputPromptWidget.SetEnabled
	 */
	struct UCoreInputPromptWidget_SetEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
	 */
	struct UCoreInputPromptWidget_PromptNotFound_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreInputPromptWidget.OnEnabledChanged
	 */
	struct UCoreInputPromptWidget_OnEnabledChanged_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputPromptWidget.IsEnabled
	 */
	struct UCoreInputPromptWidget_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
	 */
	struct UCoreInputPromptWidget_GetInputShortDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputPromptWidget.GetInputKey
	 */
	struct UCoreInputPromptWidget_GetInputKey_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
	 */
	struct UCoreInputPromptWidget_DisplayPrompt_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies
	 */
	struct UCoreInteractionProgressWidget_SetProficiencies_Params
	{
	public:
		TArray<struct FStatusEffectViewData>                       proficiencyDatas;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
	 */
	struct UCoreInteractionPromptActionWidget_StopIdleAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey4
	 */
	struct UCoreInteractionPromptActionWidget_SetInputKey4_Params
	{
	public:
		struct FKey                                                InputKey4;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey3
	 */
	struct UCoreInteractionPromptActionWidget_SetInputKey3_Params
	{
	public:
		struct FKey                                                InputKey3;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
	 */
	struct UCoreInteractionPromptActionWidget_SetInputKey2_Params
	{
	public:
		struct FKey                                                InputKey2;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey
	 */
	struct UCoreInteractionPromptActionWidget_SetInputKey_Params
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
	 */
	struct UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasThirdPrompt
	 */
	struct UCoreInteractionPromptActionWidget_HasThirdPrompt_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
	 */
	struct UCoreInteractionPromptActionWidget_HasSecondPrompt_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasFourthPrompt
	 */
	struct UCoreInteractionPromptActionWidget_HasFourthPrompt_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
	 */
	struct UCoreInteractionPromptWidget_SetData_Params
	{
	public:
		struct FInteractionPromptViewData                          Data;                                                    // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged
	 */
	struct UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Params
	{
	public:
		bool                                                       isLargeTextEnabled;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
	 */
	struct UCoreInteractionPromptWidget_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerButtonWidget.SetUIAction
	 */
	struct UCoreKeyListenerButtonWidget_SetUIAction_Params
	{
	public:
		EUIActionType                                              ActionType;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerButtonWidget.SetKeyOverride
	 */
	struct UCoreKeyListenerButtonWidget_SetKeyOverride_Params
	{
	public:
		struct FKey                                                keyOverride;                                             // 0x0000(0x0020)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetUIAction
	 */
	struct UCoreKeyListenerInputPromptWidget_SetUIAction_Params
	{
	public:
		EUIActionType                                              ActionType;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetRepeatable
	 */
	struct UCoreKeyListenerInputPromptWidget_SetRepeatable_Params
	{
	public:
		bool                                                       isRepeatable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9QNP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         repetitionDelayCurve;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetLabel
	 */
	struct UCoreKeyListenerInputPromptWidget_SetLabel_Params
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetKeyOverride
	 */
	struct UCoreKeyListenerInputPromptWidget_SetKeyOverride_Params
	{
	public:
		struct FKey                                                keyOverride;                                             // 0x0000(0x0020)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetEnabled
	 */
	struct UCoreKeyListenerInputPromptWidget_SetEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetAdditionalIcon
	 */
	struct UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.OnEnabledChanged
	 */
	struct UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.IsEnabled
	 */
	struct UCoreKeyListenerInputPromptWidget_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreLockedOverlayWidget.SetIsLocked
	 */
	struct UCoreLockedOverlayWidget_SetIsLocked_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       useAnimation;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetSelectedState
	 */
	struct UCoreMenuLoadoutPartWidget_SetSelectedState_Params
	{
	public:
		bool                                                       selectedState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartTooltipData
	 */
	struct UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Params
	{
	public:
		struct FLoadoutTooltipData                                 TooltipData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartScale
	 */
	struct UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartData
	 */
	struct UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Params
	{
	public:
		class UMenuLoadoutPartViewData*                            Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetEmptyWidget
	 */
	struct UCoreMenuLoadoutPartWidget_SetEmptyWidget_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetDisabledWidget
	 */
	struct UCoreMenuLoadoutPartWidget_SetDisabledWidget_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundShadowLayers
	 */
	struct UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundLayers
	 */
	struct UCoreMenuLoadoutPartWidget_SetBackgroundLayers_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetLockedState
	 */
	struct UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetItemId
	 */
	struct UCoreMenuLoadoutPartWidget_GetWidgetItemId_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetTooltipData
	 */
	struct UCoreMenuLoadoutPartWidget_GetTooltipData_Params
	{
	public:
		struct FLoadoutTooltipData                                 ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuAddonWidget.UpdateWidgetScale
	 */
	struct UCoreMenuAddonWidget_UpdateWidgetScale_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonTooltipData
	 */
	struct UCoreMenuAddonWidget_SetMenuAddonTooltipData_Params
	{
	public:
		struct FLoadoutTooltipData                                 TooltipData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonData
	 */
	struct UCoreMenuAddonWidget_SetMenuAddonData_Params
	{
	public:
		class UMenuAddonViewData*                                  Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuAddonWidget.SetAddonDisabled
	 */
	struct UCoreMenuAddonWidget_SetAddonDisabled_Params
	{
	public:
		bool                                                       IsParentAvailable;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuAddonWidget.HidePlusIcon
	 */
	struct UCoreMenuAddonWidget_HidePlusIcon_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreMenuAddonWidget.GetWidgetParentDisplayName
	 */
	struct UCoreMenuAddonWidget_GetWidgetParentDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemTooltipData
	 */
	struct UCoreMenuItemWidget_SetMenuItemTooltipData_Params
	{
	public:
		struct FLoadoutTooltipData                                 TooltipData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemData
	 */
	struct UCoreMenuItemWidget_SetMenuItemData_Params
	{
	public:
		class UMenuItemViewData*                                   Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingTooltipData
	 */
	struct UCoreMenuOfferingWidget_SetMenuOfferingTooltipData_Params
	{
	public:
		struct FLoadoutTooltipData                                 TooltipData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingData
	 */
	struct UCoreMenuOfferingWidget_SetMenuOfferingData_Params
	{
	public:
		class UMenuOfferingViewData*                               Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkTooltipData
	 */
	struct UCoreMenuPerkWidget_SetMenuPerkTooltipData_Params
	{
	public:
		struct FLoadoutTooltipData                                 TooltipData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkLevel
	 */
	struct UCoreMenuPerkWidget_SetMenuPerkLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkData
	 */
	struct UCoreMenuPerkWidget_SetMenuPerkData_Params
	{
	public:
		class UMenuPerkViewData*                                   Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuPerkWidget.SetEmptyPerk
	 */
	struct UCoreMenuPerkWidget_SetEmptyPerk_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerTooltipData
	 */
	struct UCoreMenuPowerWidget_SetMenuPowerTooltipData_Params
	{
	public:
		struct FLoadoutTooltipData                                 TooltipData;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerData
	 */
	struct UCoreMenuPowerWidget_SetMenuPowerData_Params
	{
	public:
		class UMenuPowerViewData*                                  Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnClickedTutorialButton
	 */
	struct UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Params
	{
	public:
		class UCoreButtonWidget*                                   clickedTutorialButton;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnButtonSetDataAnimationCompleteDelegate
	 */
	struct UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.GetStepId
	 */
	struct UCoreOnboardingButtonHolderWidget_GetStepId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle
	 */
	struct UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Params
	{
	public:
		class FText                                                menuTitle;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle
	 */
	struct UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Params
	{
	public:
		class FText                                                menuTitle;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle
	 */
	struct UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Params
	{
	public:
		class FText                                                menuTitle;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                menuSubTitle;                                            // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle
	 */
	struct UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText
	 */
	struct UCoreOnboardingMenuWidget_SetTitleText_Params
	{
	public:
		bool                                                       IsInTutorial;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButton
	 */
	struct UCoreOnboardingMenuWidget_SetBackButton_Params
	{
	public:
		bool                                                       isFTUE;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelectedAgain
	 */
	struct UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelected
	 */
	struct UCoreOnboardingMenuWidget_OnMenuTabSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual
	 */
	struct UCoreOnboardingTutorialButtonWidget_SetVisual_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled
	 */
	struct UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetIsKillSwitch
	 */
	struct UCoreOnboardingTutorialButtonWidget_SetIsKillSwitch_Params
	{
	public:
		bool                                                       IsKillSwitch;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData
	 */
	struct UCoreOnboardingTutorialButtonWidget_SetData_Params
	{
	public:
		struct FOnboardingTutorialButtonViewData                   ViewData;                                                // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       isRefreshingWithAnimation;                               // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased
	 */
	struct UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed
	 */
	struct UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked
	 */
	struct UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep
	 */
	struct UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.TryBroadcastSelectedTutorial
	 */
	struct UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators
	 */
	struct UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Params
	{
	public:
		class FString                                              completedStepId;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription
	 */
	struct UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       isWarning;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated
	 */
	struct UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate
	 */
	struct UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreOnHoverBorderWidget.UpdateColors
	 */
	struct UCoreOnHoverBorderWidget_UpdateColors_Params
	{
	public:
		struct FLinearColor                                        progressBarColor;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        BackgroundColor;                                         // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnHoverBorderWidget.UnbindFromButton
	 */
	struct UCoreOnHoverBorderWidget_UnbindFromButton_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayPressedAnimation
	 */
	struct UCoreOnHoverBorderWidget_PlayPressedAnimation_Params
	{
	public:
		bool                                                       playForward;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayHoveredAnimation
	 */
	struct UCoreOnHoverBorderWidget_PlayHoveredAnimation_Params
	{
	public:
		bool                                                       playForward;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreOnHoverBorderWidget.BindToButton
	 */
	struct UCoreOnHoverBorderWidget_BindToButton_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonToBindOn;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePaginationContainerWidget.UpdateSelectedWidget
	 */
	struct UCorePaginationContainerWidget_UpdateSelectedWidget_Params
	{
	public:
		int32_t                                                    currentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    numberOfPages;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDUIViewsCore.CorePaginationContainerWidget.OnSelectedPageDelegate__DelegateSignature
	 */
	struct UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    selectedPage;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isUpdate;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePaginationContainerWidget.OnPaginationSelected
	 */
	struct UCorePaginationContainerWidget_OnPaginationSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePaginationContainerWidget.GetCurrentPage
	 */
	struct UCorePaginationContainerWidget_GetCurrentPage_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerNameWidget.SetPlayerName
	 */
	struct UCorePlayerNameWidget_SetPlayerName_Params
	{
	public:
		class FText                                                playerName;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData
	 */
	struct UCorePlayerStatusKillerEffectWidget_SetKillerData_Params
	{
	public:
		struct FPlayerStatusViewData                               Data;                                                    // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual
	 */
	struct UCorePlayerStatusKillerEffectWidget_ClearVisual_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit
	 */
	struct UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
	 */
	struct UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params
	{
	public:
		ESleepingUIState                                           newSleepState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
	 */
	struct UCorePlayerStatusWidget_HasTimerProgressChanged_Params
	{
	public:
		float                                                      newTimerProgress;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
	 */
	struct UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params
	{
	public:
		struct FPlayerStatusViewData                               newViewData;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
	 */
	struct UCorePlayerStatusWidget_HasPlayerStateChanged_Params
	{
	public:
		EPlayerStatus                                              newPlayerState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
	 */
	struct UCorePlayerStatusWidget_HasObsessionStateChanged_Params
	{
	public:
		EObsessionUIState                                          newObsessionState;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
	 */
	struct UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params
	{
	public:
		struct FPlayerStatusViewData                               newViewData;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
	 */
	struct UCorePlayerStatusWidget_GetPlayerStateChangeType_Params
	{
	public:
		struct FPlayerStatusViewData                               newViewData;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EPlayerStateChangeType                                     ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget
	 */
	struct UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Params
	{
	public:
		class UCorePlayerStatusKillerEffectWidget*                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusDataMappingDB
	 */
	struct UCorePlayerStatusWidget_GetKillerStatusDataMappingDB_Params
	{
	public:
		class UDataTable*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePlayerStatusWidget.CacheViewData
	 */
	struct UCorePlayerStatusWidget_CacheViewData_Params
	{
	public:
		struct FPlayerStatusViewData                               Data;                                                    // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FPlayerStatusViewData                               ReturnValue;                                             // 0x0048(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePresetWidgetContainer.SetSelectedPreset
	 */
	struct UCorePresetWidgetContainer_SetSelectedPreset_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CorePresetWidgetContainer.SetPreset
	 */
	struct UCorePresetWidgetContainer_SetPreset_Params
	{
	public:
		TArray<int32_t>                                            presetData;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    selectedPreset;                                          // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDUIViewsCore.CorePresetWidgetContainer.OnSelectedPresetDelegate__DelegateSignature
	 */
	struct UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    selectedPreset;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsLocked
	 */
	struct UCoreRewardWrapperWidget_SetIsLocked_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PlayAnimation;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsClickable
	 */
	struct UCoreRewardWrapperWidget_SetIsClickable_Params
	{
	public:
		bool                                                       isClickable;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData
	 */
	struct UCoreRewardWrapperWidget_SetData_Params
	{
	public:
		struct FRewardWrapperViewData                              ViewData;                                                // 0x0000(0x0340)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget
	 */
	struct UCoreRewardWrapperWidget_GetRewardWidget_Params
	{
	public:
		class UCoreRewardWidget*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData
	 */
	struct UCoreRewardWrapperWidget_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap
	 */
	struct UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Params
	{
	public:
		TMap<class FString, class UCoreScreenIndicatorWidget*>     ReturnValue;                                             // 0x0000(0x0050)  (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey
	 */
	struct UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Params
	{
	public:
		class UCoreScreenIndicatorWidget*                          value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData
	 */
	struct UCoreScreenIndicatorWidget_SetData_Params
	{
	public:
		struct FScreenIndicatorViewData                            Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData
	 */
	struct UCoreScreenIndicatorWidget_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreSpectateBarWidget.OnRightArrowTriggered
	 */
	struct UCoreSpectateBarWidget_OnRightArrowTriggered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeftArrowTriggered
	 */
	struct UCoreSpectateBarWidget_OnLeftArrowTriggered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeaveTriggered
	 */
	struct UCoreSpectateBarWidget_OnLeaveTriggered_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete
	 */
	struct UCoreStartSequenceWidget_OnHideStartSequenceComplete_Params
	{
	public:
		class UUITweenInstance*                                    tween;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
	 */
	struct UCoreStatusEffectIcon_UpdateWidget_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
	 */
	struct UCoreStatusEffectIcon_UpdatePercentageFill_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
	 */
	struct UCoreStatusEffectIcon_SetStatusEffectData_Params
	{
	public:
		struct FStatusEffectViewData                               Data;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
	 */
	struct UCoreStatusEffectIcon_SetInactiveTicks_Params
	{
	public:
		int32_t                                                    inactiveTicks;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStatusEffectIcon.ResetWidget
	 */
	struct UCoreStatusEffectIcon_ResetWidget_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
	 */
	struct UCoreStatusEffectIcon_GetStatusEffectData_Params
	{
	public:
		struct FStatusEffectViewData                               ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
	 */
	struct UCoreStatusEffectIcon_GetInactiveTicks_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
	 */
	struct UCoreStatusEffectWidget_GetStatusEffectMap_Params
	{
	public:
		TMap<class FName, class UCoreStatusEffectIcon*>            ReturnValue;                                             // 0x0000(0x0050)  (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisualStatus
	 */
	struct UCoreStoryLevelButtonWidget_UpdateVisualStatus_Params
	{
	public:
		EArchivesStoryLevelStatus                                  newStatus;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       newlyUnlocked;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisual
	 */
	struct UCoreStoryLevelButtonWidget_UpdateVisual_Params
	{
	public:
		class UArchiveStoryLevelViewData*                          ViewData;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       newlyUnlocked;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateStatusData
	 */
	struct UCoreStoryLevelButtonWidget_UpdateStatusData_Params
	{
	public:
		EArchivesStoryLevelStatus                                  newStatus;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isSelectorReadOnly;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelButtonWidget.SetData
	 */
	struct UCoreStoryLevelButtonWidget_SetData_Params
	{
	public:
		class UArchiveStoryLevelViewData*                          ViewData;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isSelectorReadOnly;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelButtonWidget.GetLevel
	 */
	struct UCoreStoryLevelButtonWidget_GetLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateVisual
	 */
	struct UCoreStoryLevelsSelectorWidget_UpdateVisual_Params
	{
	public:
		EArchivesStoryLevelStatus                                  globalStatus;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PlayAnimation;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateLevelStatus
	 */
	struct UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EArchivesStoryLevelStatus                                  Status;                                                  // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetUpInteractionMode
	 */
	struct UCoreStoryLevelsSelectorWidget_SetUpInteractionMode_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetEnabled
	 */
	struct UCoreStoryLevelsSelectorWidget_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetData
	 */
	struct UCoreStoryLevelsSelectorWidget_SetData_Params
	{
	public:
		TArray<class UArchiveStoryLevelViewData*>                  levelbuttonsData;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.OnStoryLevelUnlockedAnimation
	 */
	struct UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.GetStoryLevelButton
	 */
	struct UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YSND[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCoreStoryLevelButtonWidget*                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.AdaptButtonsPoolToData
	 */
	struct UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Params
	{
	public:
		int32_t                                                    dataNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreToggleButtonWidget.SetToDefaultState
	 */
	struct UCoreToggleButtonWidget_SetToDefaultState_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CoreToggleButtonWidget.SetActiveVisualState
	 */
	struct UCoreToggleButtonWidget_SetActiveVisualState_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreToggleButtonWidget.IsToggled
	 */
	struct UCoreToggleButtonWidget_IsToggled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
	 */
	struct UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params
	{
	public:
		bool                                                       removeAfterCompletion;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
	 */
	struct UCoreTutorialObjectiveItem_InitObjective_Params
	{
	public:
		struct FTutorialObjectivesViewData                         interactionsViewData;                                    // 0x0000(0x0170)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
	 */
	struct UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params
	{
	public:
		class UCoreTutorialObjectiveItem*                          Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.ShowMenuPerkTooltip
	 */
	struct UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Params
	{
	public:
		class UCoreButtonWidget*                                   hoveredSlotWidget;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.HideMenuPerkTooltip
	 */
	struct UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Params
	{
	public:
		class UCoreButtonWidget*                                   unhoveredSlotWidget;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreWalletWidget.UpdateCurrency
	 */
	struct UCoreWalletWidget_UpdateCurrency_Params
	{
	public:
		ECurrencyType                                              Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9X8X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    newBalance;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    previousBalance;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreWalletWidget.PlayNotEnoughCurrency
	 */
	struct UCoreWalletWidget_PlayNotEnoughCurrency_Params
	{
	public:
		ECurrencyType                                              Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreWalletWidget.InitWallet
	 */
	struct UCoreWalletWidget_InitWallet_Params
	{
	public:
		TArray<struct FCurrencyLabelViewData>                      walletData;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreWalletWidget.FullUpdateCurrency
	 */
	struct UCoreWalletWidget_FullUpdateCurrency_Params
	{
	public:
		struct FCurrencyLabelViewData                              ViewData;                                                // 0x0000(0x0100)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CoreWatermarkWidget.UpdateWatermarkText
	 */
	struct UCoreWatermarkWidget_UpdateWatermarkText_Params
	{	};

	/**
	 * Function DBDUIViewsCore.CurrencyProgressionTooltipWidget.SetTooltipData
	 */
	struct UCurrencyProgressionTooltipWidget_SetTooltipData_Params
	{
	public:
		struct FCurrencyProgressionTooltipViewData                 currencyViewData;                                        // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData
	 */
	struct UCustomizationTooltipWidget_SetTooltipData_Params
	{
	public:
		struct FCustomizationTooltipViewData                       customizationViewData;                                   // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText
	 */
	struct UCustomizationTooltipWidget_SetStatusText_Params
	{
	public:
		bool                                                       IsEquipped;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsOwned;                                                 // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsLocked;                                                // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.CustomizationTooltipWidget.AppendToDescriptionText
	 */
	struct UCustomizationTooltipWidget_AppendToDescriptionText_Params
	{
	public:
		class FText                                                appendedText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsContainerWidget.StartAnim
	 */
	struct UDailyRitualsContainerWidget_StartAnim_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsContainerWidget.SetData
	 */
	struct UDailyRitualsContainerWidget_SetData_Params
	{
	public:
		TArray<struct FDailyRitualViewData>                        dailyRitualsData;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       isAfterTrial;                                            // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsContainerWidget.OnRecentlyAssignedDailyRitualFadeInComplete
	 */
	struct UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Params
	{
	public:
		class UDailyRitualTileWidget*                              dailyRitualTile;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDelayUntilFadeInSequenceComplete
	 */
	struct UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Params
	{
	public:
		class UUITweenInstance*                                    delayUntilFadeInSequenceTween;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualTileFadeOutComplete
	 */
	struct UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Params
	{
	public:
		class UDailyRitualTileWidget*                              dailyRitualTile;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualRemoveButtonClicked
	 */
	struct UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Params
	{
	public:
		class FString                                              dailyRitualKey;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualClaimButtonClicked
	 */
	struct UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Params
	{
	public:
		class FString                                              dailyRitualKey;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsPopupWidget.SetVisuals
	 */
	struct UDailyRitualsPopupWidget_SetVisuals_Params
	{
	public:
		bool                                                       isAfterTrial;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualRemoveButtonClicked
	 */
	struct UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Params
	{
	public:
		class FString                                              dailyRitualKey;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimButtonClicked
	 */
	struct UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Params
	{
	public:
		class FString                                              dailyRitualKey;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimAllButtonClicked
	 */
	struct UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DailyRitualTileWidget.PlayFadeOutAnimation
	 */
	struct UDailyRitualTileWidget_PlayFadeOutAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DailyRitualTileWidget.PlayFadeInAnimation
	 */
	struct UDailyRitualTileWidget_PlayFadeInAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DailyRitualTileWidget.OnRemoveButtonClicked
	 */
	struct UDailyRitualTileWidget_OnRemoveButtonClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DailyRitualTileWidget.OnClaimButtonClicked
	 */
	struct UDailyRitualTileWidget_OnClaimButtonClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDComboBoxString.SetData
	 */
	struct UDBDComboBoxString_SetData_Params
	{
	public:
		TArray<class FString>                                      OptionsList;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              DefaultOption;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDDropDownListButton.ToggleDropDownArrow
	 */
	struct UDBDDropDownListButton_ToggleDropDownArrow_Params
	{
	public:
		bool                                                       showArrow;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDDropDownListWidget.UpdateDropDown
	 */
	struct UDBDDropDownListWidget_UpdateDropDown_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDDropDownListWidget.UnbindFromTrigger
	 */
	struct UDBDDropDownListWidget_UnbindFromTrigger_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDDropDownListWidget.OnUserClicked
	 */
	struct UDBDDropDownListWidget_OnUserClicked_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDDropDownListWidget.OnTriggerClicked
	 */
	struct UDBDDropDownListWidget_OnTriggerClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   buttonTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDUIViewsCore.DBDDropDownListWidget.OnSelectedOptionDelegate__DelegateSignature
	 */
	struct UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Params
	{
	public:
		struct FTabWidgetData                                      buttonData;                                              // 0x0000(0x0080)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDDropDownListWidget.OnOptionSelected
	 */
	struct UDBDDropDownListWidget_OnOptionSelected_Params
	{
	public:
		class UCoreSelectableButtonWidget*                         selectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDDropDownListWidget.HideDropDownList
	 */
	struct UDBDDropDownListWidget_HideDropDownList_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDDropDownListWidget.BindToTrigger
	 */
	struct UDBDDropDownListWidget_BindToTrigger_Params
	{
	public:
		class UCoreButtonWidget*                                   triggerButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
	 */
	struct UDBDImage_SetBrushFromTextureWithDefault_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       matchSize;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault
	 */
	struct UDBDImage_SetBrushFromSoftTextureWithDefault_Params
	{
	public:
		unsigned char                                              UnknownData_G8O4[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       matchSize;                                               // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase
	 */
	struct UDBDRichTextBlock_SetIsUpperCase_Params
	{
	public:
		bool                                                       isUpperCase;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText
	 */
	struct UDBDRichTextBlock_SetHTMLText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDRichTextBlock.PreviewUndocked
	 */
	struct UDBDRichTextBlock_PreviewUndocked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDRichTextBlock.PreviewLargeText
	 */
	struct UDBDRichTextBlock_PreviewLargeText_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged
	 */
	struct UDBDRichTextBlock_OnSwitchDockStateChanged_Params
	{
	public:
		bool                                                       isDocked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDRichTextBlock.OnLargeTextSettingsChanged
	 */
	struct UDBDRichTextBlock_OnLargeTextSettingsChanged_Params
	{
	public:
		bool                                                       isLargeText;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase
	 */
	struct UDBDRichTextBlock_GetIsUpperCase_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDScrollBox.UpdateSmoothMask
	 */
	struct UDBDScrollBox_UpdateSmoothMask_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt
	 */
	struct UDBDScrollBox_UpdateDisplayPrompt_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDScrollBox.SetDisplayPrompt
	 */
	struct UDBDScrollBox_SetDisplayPrompt_Params
	{
	public:
		class UCoreKeyListenerInputPromptWidget*                   DisplayPrompt;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged
	 */
	struct UDBDScrollBox_OnControlModeChanged_Params
	{
	public:
		EControlMode                                               controlMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDScrollBox.IsMouseOver
	 */
	struct UDBDScrollBox_IsMouseOver_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput
	 */
	struct UDBDScrollBox_HandleControllerInput_Params
	{
	public:
		float                                                      analogValue;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
	 */
	struct UDBDTextBlock_SetIsUpperCase_Params
	{
	public:
		bool                                                       isUpperCase;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTextBlock.PreviewUndocked
	 */
	struct UDBDTextBlock_PreviewUndocked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDTextBlock.PreviewLargeText
	 */
	struct UDBDTextBlock_PreviewLargeText_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
	 */
	struct UDBDTextBlock_OnSwitchDockStateChanged_Params
	{
	public:
		bool                                                       isDocked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged
	 */
	struct UDBDTextBlock_OnLargeTextSettingsChanged_Params
	{
	public:
		bool                                                       isLargeText;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
	 */
	struct UDBDTextBlock_GetIsUpperCase_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.ShowLoadoutTooltip
	 */
	struct UDBDTooltipManager_ShowLoadoutTooltip_Params
	{
	public:
		struct FLoadoutTooltipData                                 tooltipViewData;                                         // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGeometry                                           triggerGeometry;                                         // 0x0090(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ETooltipHorizontalAlignment                                tooltipHorizontalAlignment;                              // 0x00C8(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETooltipVerticalAlignment                                  tooltipVerticalAlignment;                                // 0x00C9(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.ShowLabelTooltip
	 */
	struct UDBDTooltipManager_ShowLabelTooltip_Params
	{
	public:
		class FText                                                tooltipViewData;                                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGeometry                                           triggerGeometry;                                         // 0x0018(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ETooltipHorizontalAlignment                                tooltipHorizontalAlignment;                              // 0x0050(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETooltipVerticalAlignment                                  tooltipVerticalAlignment;                                // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip
	 */
	struct UDBDTooltipManager_ShowCustomizationTooltip_Params
	{
	public:
		struct FCustomizationTooltipViewData                       tooltipViewData;                                         // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGeometry                                           triggerGeometry;                                         // 0x00E8(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ETooltipHorizontalAlignment                                tooltipHorizontalAlignment;                              // 0x0120(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETooltipVerticalAlignment                                  tooltipVerticalAlignment;                                // 0x0121(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip
	 */
	struct UDBDTooltipManager_ShowCurrencyTooltip_Params
	{
	public:
		struct FCurrencyProgressionTooltipViewData                 tooltipViewData;                                         // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGeometry                                           triggerGeometry;                                         // 0x00C0(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ETooltipHorizontalAlignment                                tooltipHorizontalAlignment;                              // 0x00F8(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETooltipVerticalAlignment                                  tooltipVerticalAlignment;                                // 0x00F9(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip
	 */
	struct UDBDTooltipManager_ShowCharacterTooltip_Params
	{
	public:
		struct FCharacterTooltipViewData                           tooltipViewData;                                         // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGeometry                                           triggerGeometry;                                         // 0x0070(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ETooltipHorizontalAlignment                                tooltipHorizontalAlignment;                              // 0x00A8(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETooltipVerticalAlignment                                  tooltipVerticalAlignment;                                // 0x00A9(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveRewardNodeTooltip
	 */
	struct UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Params
	{
	public:
		struct FArchiveRewardNodeTooltipViewData                   tooltipViewData;                                         // 0x0000(0x00F8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGeometry                                           triggerGeometry;                                         // 0x00F8(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ETooltipHorizontalAlignment                                tooltipHorizontalAlignment;                              // 0x0130(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETooltipVerticalAlignment                                  tooltipVerticalAlignment;                                // 0x0131(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveNodeTooltip
	 */
	struct UDBDTooltipManager_ShowArchiveNodeTooltip_Params
	{
	public:
		struct FArchiveNodeViewData                                tooltipViewData;                                         // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGeometry                                           triggerGeometry;                                         // 0x00B8(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ETooltipHorizontalAlignment                                tooltipHorizontalAlignment;                              // 0x00F0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETooltipVerticalAlignment                                  tooltipVerticalAlignment;                                // 0x00F1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveCompendiumTooltip
	 */
	struct UDBDTooltipManager_ShowArchiveCompendiumTooltip_Params
	{
	public:
		struct FCompendiumButtonData                               tooltipViewData;                                         // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGeometry                                           triggerGeometry;                                         // 0x0070(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ETooltipHorizontalAlignment                                tooltipHorizontalAlignment;                              // 0x00A8(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETooltipVerticalAlignment                                  tooltipVerticalAlignment;                                // 0x00A9(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.OnViewportCreated
	 */
	struct UDBDTooltipManager_OnViewportCreated_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDTooltipManager.HideTooltip
	 */
	struct UDBDTooltipManager_HideTooltip_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
	 */
	struct UDBDWrapBox_SetInnerSlotPadding_Params
	{
	public:
		struct FVector2D                                           InPadding;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
	 */
	struct UDBDWrapBox_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       inHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
	 */
	struct UDBDWrapBox_AddChildToWrapBox_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDBDWrapBoxSlot*                                     ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
	 */
	struct UDBDWrapBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         inVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
	 */
	struct UDBDWrapBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
	 */
	struct UDBDWrapBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       inHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
	 */
	struct UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params
	{
	public:
		float                                                      InFillSpanWhenLessThan;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
	 */
	struct UDBDWrapBoxSlot_SetFillEmptySpace_Params
	{
	public:
		bool                                                       InbFillEmptySpace;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DragZone.OnMouseReleaseGlobal
	 */
	struct UDragZone_OnMouseReleaseGlobal_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DragZone.OnMousePressHitzone
	 */
	struct UDragZone_OnMousePressHitzone_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DragZone.OnMousePressGlobal
	 */
	struct UDragZone_OnMousePressGlobal_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DragZone.OnMouseMoveGlobal
	 */
	struct UDragZone_OnMouseMoveGlobal_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.DragZone.OnMouseHoverHitzone
	 */
	struct UDragZone_OnMouseHoverHitzone_Params
	{	};

	/**
	 * Function DBDUIViewsCore.DragZone.OnAnalogInput
	 */
	struct UDragZone_OnAnalogInput_Params
	{
	public:
		struct FAnalogInputEvent                                   analogEvent;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.EventEntryPopupWidget.setWidgetSkinFromEventLabel
	 */
	struct UEventEntryPopupWidget_setWidgetSkinFromEventLabel_Params
	{
	public:
		class FText                                                EventLabel;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LabelTooltipWidget.SetTooltipData
	 */
	struct ULabelTooltipWidget_SetTooltipData_Params
	{
	public:
		class FText                                                labelText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LabelTooltipWidget.Reset
	 */
	struct ULabelTooltipWidget_Reset_Params
	{	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.UpdateInventoryItemData
	 */
	struct ULoadoutMenuPopupWidget_UpdateInventoryItemData_Params
	{	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.ShowMenuLoadoutPartsTooltip
	 */
	struct ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Params
	{
	public:
		class UCoreButtonWidget*                                   hoveredSlotWidget;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.SetInventoryItemEnabled
	 */
	struct ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Params
	{
	public:
		class UCoreMenuLoadoutPartWidget*                          Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EItemAvailability                                          Availability;                                            // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationOutAnimation
	 */
	struct ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Params
	{
	public:
		bool                                                       isNextPage;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationInAnimation
	 */
	struct ULoadoutMenuPopupWidget_PlayPaginationInAnimation_Params
	{	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnPaginationSelected
	 */
	struct ULoadoutMenuPopupWidget_OnPaginationSelected_Params
	{
	public:
		int32_t                                                    currentPage;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isUpdate;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuRightArrowClicked
	 */
	struct ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPresetClicked
	 */
	struct ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Params
	{
	public:
		int32_t                                                    selectedPresetId;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPowerSlotClicked
	 */
	struct ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   menuPowerWidget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPerkSlotClicked
	 */
	struct ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   menuPerkWidget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuOfferingSlotClicked
	 */
	struct ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   menuOfferingWidget;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuLeftArrowClicked
	 */
	struct ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked_Params
	{	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuItemSlotClicked
	 */
	struct ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   menuItemWidget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuInventorySlotClicked
	 */
	struct ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   menuPerkWidget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuAddonSlotClicked
	 */
	struct ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Params
	{
	public:
		class UCoreButtonWidget*                                   menuAddonWidget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropdownSelected
	 */
	struct ULoadoutMenuPopupWidget_OnDropdownSelected_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropDownListSelectedOptionChanged
	 */
	struct ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Params
	{
	public:
		struct FTabWidgetData                                      buttonData;                                              // 0x0000(0x0080)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutMenuPopupWidget.HideMenuLoadoutPartsTooltip
	 */
	struct ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Params
	{
	public:
		class UCoreButtonWidget*                                   unhoveredSlotWidget;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutTooltipWidget.SetTooltipData
	 */
	struct ULoadoutTooltipWidget_SetTooltipData_Params
	{
	public:
		struct FLoadoutTooltipData                                 tooltipViewData;                                         // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipPerkLevel
	 */
	struct ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipLockedState
	 */
	struct ULoadoutTooltipWidget_SetLoadoutTooltipLockedState_Params
	{	};

	/**
	 * Function DBDUIViewsCore.LoadoutTooltipWidget.Reset
	 */
	struct ULoadoutTooltipWidget_Reset_Params
	{	};

	/**
	 * Function DBDUIViewsCore.TestWidget.SetShowWorkbench
	 */
	struct UTestWidget_SetShowWorkbench_Params
	{
	public:
		bool                                                       showWorkbench;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
