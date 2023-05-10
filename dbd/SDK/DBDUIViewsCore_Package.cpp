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
	 * 		RVA    -> 0x04156F50
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBaseUserWidget::UpdateScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale"));
		
		UCoreBaseUserWidget_UpdateScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156E60
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.StopAnimationByName
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        animName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoreBaseUserWidget::StopAnimationByName(const class FName& animName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseUserWidget.StopAnimationByName"));
		
		UCoreBaseUserWidget_StopAnimationByName_Params params {};
		params.animName = animName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156610
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCoreBaseUserWidget::RegisterForInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput"));
		
		UCoreBaseUserWidget_RegisterForInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156450
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.PlayAnimationByName
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        animName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              starttime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            loopcount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoreBaseUserWidget::PlayAnimationByName(const class FName& animName, float starttime, int32_t loopcount, EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseUserWidget.PlayAnimationByName"));
		
		UCoreBaseUserWidget_PlayAnimationByName_Params params {};
		params.animName = animName;
		params.starttime = starttime;
		params.loopcount = loopcount;
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EControlMode                                       controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBaseUserWidget::OnControlModeChangedBP(EControlMode controlMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP"));
		
		UCoreBaseUserWidget_OnControlModeChangedBP_Params params {};
		params.controlMode = controlMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155BD0
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.GetAnimationByName
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        animName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidgetAnimation* UCoreBaseUserWidget::GetAnimationByName(const class FName& animName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseUserWidget.GetAnimationByName"));
		
		UCoreBaseUserWidget_GetAnimationByName_Params params {};
		params.animName = animName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155B20
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCoreBaseUserWidget::DeregisterFromInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput"));
		
		UCoreBaseUserWidget_DeregisterFromInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreBaseUserWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBaseUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreBaseUserWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C640
	 * 		Name   -> Function DBDUIViewsCore.ArchiveCompendiumTooltipWidget.SetTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FCompendiumButtonData                       tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveCompendiumTooltipWidget::SetTooltipData(const struct FCompendiumButtonData& tooltipViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.ArchiveCompendiumTooltipWidget.SetTooltipData"));
		
		UArchiveCompendiumTooltipWidget_SetTooltipData_Params params {};
		params.tooltipViewData = tooltipViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BFC0
	 * 		Name   -> Function DBDUIViewsCore.ArchiveCompendiumTooltipWidget.Reset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UArchiveCompendiumTooltipWidget::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.ArchiveCompendiumTooltipWidget.Reset"));
		
		UArchiveCompendiumTooltipWidget_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveCompendiumTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveCompendiumTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.ArchiveCompendiumTooltipWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C750
	 * 		Name   -> Function DBDUIViewsCore.ArchiveNodeTooltipWidget.SetTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FArchiveNodeViewData                        NodeViewData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveNodeTooltipWidget::SetTooltipData(const struct FArchiveNodeViewData& NodeViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.ArchiveNodeTooltipWidget.SetTooltipData"));
		
		UArchiveNodeTooltipWidget_SetTooltipData_Params params {};
		params.NodeViewData = NodeViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.ArchiveNodeTooltipWidget.SetNodeType
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EArchiveNodeType                                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveNodeTooltipWidget::SetNodeType(EArchiveNodeType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.ArchiveNodeTooltipWidget.SetNodeType"));
		
		UArchiveNodeTooltipWidget_SetNodeType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BFE0
	 * 		Name   -> Function DBDUIViewsCore.ArchiveNodeTooltipWidget.Reset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UArchiveNodeTooltipWidget::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.ArchiveNodeTooltipWidget.Reset"));
		
		UArchiveNodeTooltipWidget_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveNodeTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveNodeTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.ArchiveNodeTooltipWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveRewardNodeTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveRewardNodeTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.ArchiveRewardNodeTooltipWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C040
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBox.SetAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              inAspectRatio                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAspectRatioBox::SetAspectRatio(float inAspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.AspectRatioBox.SetAspectRatio"));
		
		UAspectRatioBox_SetAspectRatio_Params params {};
		params.inAspectRatio = inAspectRatio;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B430
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBox.ClearAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAspectRatioBox::ClearAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.AspectRatioBox.ClearAspectRatio"));
		
		UAspectRatioBox_ClearAspectRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAspectRatioBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAspectRatioBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.AspectRatioBox"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414CA70
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBoxSlot.SetVerticalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EVerticalAlignment                                 inVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAspectRatioBoxSlot::SetVerticalAlignment(EVerticalAlignment inVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.AspectRatioBoxSlot.SetVerticalAlignment"));
		
		UAspectRatioBoxSlot_SetVerticalAlignment_Params params {};
		params.inVerticalAlignment = inVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C520
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBoxSlot.SetPadding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAspectRatioBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.AspectRatioBoxSlot.SetPadding"));
		
		UAspectRatioBoxSlot_SetPadding_Params params {};
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C410
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHorizontalAlignment                               inHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAspectRatioBoxSlot::SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.AspectRatioBoxSlot.SetHorizontalAlignment"));
		
		UAspectRatioBoxSlot_SetHorizontalAlignment_Params params {};
		params.inHorizontalAlignment = inHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAspectRatioBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAspectRatioBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.AspectRatioBoxSlot"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterTooltipViewData                   characterViewData                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCharacterTooltipWidget::SetTooltipData(const struct FCharacterTooltipViewData& characterViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData"));
		
		UCharacterTooltipWidget_SetTooltipData_Params params {};
		params.characterViewData = characterViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C490
	 * 		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterTooltipWidget::SetLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel"));
		
		UCharacterTooltipWidget_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C2C0
	 * 		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		ECharacterDifficulty                               Difficulty                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterTooltipWidget::SetDifficulty(ECharacterDifficulty Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty"));
		
		UCharacterTooltipWidget_SetDifficulty_Params params {};
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CharacterTooltipWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156D20
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            StackCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBaseLoadoutPartWidget::SetLoadoutStackCount(int32_t StackCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount"));
		
		UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params params {};
		params.StackCount = StackCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156CA0
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EItemRarity                                        Rarity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBaseLoadoutPartWidget::SetLoadoutPartRarity(EItemRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity"));
		
		UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156B90
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreBaseLoadoutPartWidget::SetLoadoutPartIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon"));
		
		UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreBaseLoadoutPartWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBaseLoadoutPartWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreBaseLoadoutPartWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreAddonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreAddonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreAddonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415CD70
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EButtonWidgetVisibility                            visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetVisible(EButtonWidgetVisibility visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetVisible"));
		
		UCoreButtonWidget_SetVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415CB10
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetRepeatable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isRepeatable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 repetitionDelayCurve                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetRepeatable(bool isRepeatable, class UCurveFloat* repetitionDelayCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetRepeatable"));
		
		UCoreButtonWidget_SetRepeatable_Params params {};
		params.isRepeatable = isRepeatable;
		params.repetitionDelayCurve = repetitionDelayCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415CA00
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetPressable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isPressable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetPressable(bool isPressable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetPressable"));
		
		UCoreButtonWidget_SetPressable_Params params {};
		params.isPressable = isPressable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C930
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetLabel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        label                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetLabel(const class FText& label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetLabel"));
		
		UCoreButtonWidget_SetLabel_Params params {};
		params.label = label;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C8A0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetHoverable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isHoverable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetHoverable(bool isHoverable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetHoverable"));
		
		UCoreButtonWidget_SetHoverable_Params params {};
		params.isHoverable = isHoverable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C810
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetHoldable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isHoldable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetHoldable(bool isHoldable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetHoldable"));
		
		UCoreButtonWidget_SetHoldable_Params params {};
		params.isHoldable = isHoldable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C700
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetEnabled"));
		
		UCoreButtonWidget_SetEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C650
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetClickable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isClickable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetClickable(bool isClickable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetClickable"));
		
		UCoreButtonWidget_SetClickable_Params params {};
		params.isClickable = isClickable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C5C0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetChargeable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isChargeable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetChargeable(bool isChargeable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetChargeable"));
		
		UCoreButtonWidget_SetChargeable_Params params {};
		params.isChargeable = isChargeable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C4B0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetBackground
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreButtonWidget::SetBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetBackground"));
		
		UCoreButtonWidget_SetBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C430
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ETextJustify                                       newAlignment                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetAlignment(ETextJustify newAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetAlignment"));
		
		UCoreButtonWidget_SetAlignment_Params params {};
		params.newAlignment = newAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C320
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetAdditionalIcon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreButtonWidget::SetAdditionalIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.SetAdditionalIcon"));
		
		UCoreButtonWidget_SetAdditionalIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnUnhoveredDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnUnhoveredDelegate__DelegateSignature"));
		
		UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered"));
		
		UCoreButtonWidget_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnReleasedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnReleasedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnReleasedDelegate__DelegateSignature"));
		
		UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnReleased"));
		
		UCoreButtonWidget_OnReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnPressedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnPressedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnPressedDelegate__DelegateSignature"));
		
		UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnPressed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnPressed"));
		
		UCoreButtonWidget_OnPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C1C0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered"));
		
		UCoreButtonWidget_OnInternalUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C1A0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased"));
		
		UCoreButtonWidget_OnInternalReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C180
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed"));
		
		UCoreButtonWidget_OnInternalPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041565F0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered"));
		
		UCoreButtonWidget_OnInternalHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C160
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked"));
		
		UCoreButtonWidget_OnInternalClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnHoveredDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnHoveredDelegate__DelegateSignature"));
		
		UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnHovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnHovered"));
		
		UCoreButtonWidget_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnEnabledChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnEnabledChanged(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnEnabledChanged"));
		
		UCoreButtonWidget_OnEnabledChanged_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnClickedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnClickedDelegate__DelegateSignature"));
		
		UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnClicked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnClicked"));
		
		UCoreButtonWidget_OnClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnAlignmentChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ETextJustify                                       newAlignment                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnAlignmentChanged(ETextJustify newAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.OnAlignmentChanged"));
		
		UCoreButtonWidget_OnAlignmentChanged_Params params {};
		params.newAlignment = newAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C0C0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreButtonWidget::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.IsEnabled"));
		
		UCoreButtonWidget_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415BF40
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.GetHitzonePaintSpaceGeometry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGeometry UCoreButtonWidget::GetHitzonePaintSpaceGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonWidget.GetHitzonePaintSpaceGeometry"));
		
		UCoreButtonWidget_GetHitzonePaintSpaceGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.UpdateBackgroundSkin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          skinMaterial                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::UpdateBackgroundSkin(class UMaterialInterface* skinMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreSelectableButtonWidget.UpdateBackgroundSkin"));
		
		UCoreSelectableButtonWidget_UpdateBackgroundSkin_Params params {};
		params.skinMaterial = skinMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C8F0
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected"));
		
		UCoreSelectableButtonWidget_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C860
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelectable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsSelectable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::SetSelectable(bool IsSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelectable"));
		
		UCoreSelectableButtonWidget_SetSelectable_Params params {};
		params.IsSelectable = IsSelectable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChangedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::OnSelectedChangedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChangedDelegate__DelegateSignature"));
		
		UCoreSelectableButtonWidget_OnSelectedChangedDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::OnSelectedChanged(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChanged"));
		
		UCoreSelectableButtonWidget_OnSelectedChanged_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedAgainDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedAgainDelegate__DelegateSignature"));
		
		UCoreSelectableButtonWidget_OnSelectedAgainDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C100
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreSelectableButtonWidget::IsSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected"));
		
		UCoreSelectableButtonWidget_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C0D0
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelectable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreSelectableButtonWidget::IsSelectable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelectable"));
		
		UCoreSelectableButtonWidget_IsSelectable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreSelectableButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSelectableButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreSelectableButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateVisualState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchiveChallengeReminderViewData           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::UpdateVisualState(const struct FArchiveChallengeReminderViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateVisualState"));
		
		UCoreArchiveChallengeReminderSlotWidget_UpdateVisualState_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateProgressBar
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::UpdateProgressBar(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateProgressBar"));
		
		UCoreArchiveChallengeReminderSlotWidget_UpdateProgressBar_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateActiveState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PlayAnimation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::UpdateActiveState(bool IsActive, bool PlayAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateActiveState"));
		
		UCoreArchiveChallengeReminderSlotWidget_UpdateActiveState_Params params {};
		params.IsActive = IsActive;
		params.PlayAnimation = PlayAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SwapChallenge
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchiveChallengeReminderViewData           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::SwapChallenge(const struct FArchiveChallengeReminderViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SwapChallenge"));
		
		UCoreArchiveChallengeReminderSlotWidget_SwapChallenge_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C5B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetSlotSelectorState
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               isSelectorOpen                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::SetSlotSelectorState(bool isSelectorOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetSlotSelectorState"));
		
		UCoreArchiveChallengeReminderSlotWidget_SetSlotSelectorState_Params params {};
		params.isSelectorOpen = isSelectorOpen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetQuestNodeHoverEffect
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::SetQuestNodeHoverEffect(bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetQuestNodeHoverEffect"));
		
		UCoreArchiveChallengeReminderSlotWidget_SetQuestNodeHoverEffect_Params params {};
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C1D0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FArchiveChallengeReminderViewData           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::SetData(const struct FArchiveChallengeReminderViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetData"));
		
		UCoreArchiveChallengeReminderSlotWidget_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.InitVisualState
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::InitVisualState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.InitVisualState"));
		
		UCoreArchiveChallengeReminderSlotWidget_InitVisualState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B660
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.Init
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::Init(EPlayerRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.Init"));
		
		UCoreArchiveChallengeReminderSlotWidget_Init_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B450
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.ClearData
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCoreArchiveChallengeReminderSlotWidget::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.ClearData"));
		
		UCoreArchiveChallengeReminderSlotWidget_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveChallengeReminderSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveChallengeReminderSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetLevelProgressionVisual
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            buttonLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EArchivesStoryLevelStatus                          levelStatus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveCompendiumButtonWidget::SetLevelProgressionVisual(int32_t buttonLevel, EArchivesStoryLevelStatus levelStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetLevelProgressionVisual"));
		
		UCoreArchiveCompendiumButtonWidget_SetLevelProgressionVisual_Params params {};
		params.buttonLevel = buttonLevel;
		params.levelStatus = levelStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetGhostStory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isGhostStory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveCompendiumButtonWidget::SetGhostStory(bool isGhostStory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetGhostStory"));
		
		UCoreArchiveCompendiumButtonWidget_SetGhostStory_Params params {};
		params.isGhostStory = isGhostStory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonVisual
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompendiumButtonData                       buttonData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveCompendiumButtonWidget::SetButtonVisual(const struct FCompendiumButtonData& buttonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonVisual"));
		
		UCoreArchiveCompendiumButtonWidget_SetButtonVisual_Params params {};
		params.buttonData = buttonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C0C0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCompendiumButtonData                       buttonData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveCompendiumButtonWidget::SetButtonData(const struct FCompendiumButtonData& buttonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonData"));
		
		UCoreArchiveCompendiumButtonWidget_SetButtonData_Params params {};
		params.buttonData = buttonData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.ResetVisuals
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreArchiveCompendiumButtonWidget::ResetVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.ResetVisuals"));
		
		UCoreArchiveCompendiumButtonWidget_ResetVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B7D0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonUnhovered
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreArchiveCompendiumButtonWidget::OnButtonUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonUnhovered"));
		
		UCoreArchiveCompendiumButtonWidget_OnButtonUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B7B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonHovered
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreArchiveCompendiumButtonWidget::OnButtonHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonHovered"));
		
		UCoreArchiveCompendiumButtonWidget_OnButtonHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B5A0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.GetTomeId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UCoreArchiveCompendiumButtonWidget::GetTomeId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.GetTomeId"));
		
		UCoreArchiveCompendiumButtonWidget_GetTomeId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveCompendiumButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveCompendiumButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveCompendiumButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171B60
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContentWidget.StopFadeInTweening
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              opacityValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabContentWidget::StopFadeInTweening(float opacityValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContentWidget.StopFadeInTweening"));
		
		UCoreTabContentWidget_StopFadeInTweening_Params params {};
		params.opacityValue = opacityValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041710D0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContentWidget.ResetFade
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreTabContentWidget::ResetFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContentWidget.ResetFade"));
		
		UCoreTabContentWidget_ResetFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170640
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContentWidget.FadeOutContent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreTabContentWidget::FadeOutContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContentWidget.FadeOutContent"));
		
		UCoreTabContentWidget_FadeOutContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170620
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContentWidget.FadeInContent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreTabContentWidget::FadeInContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContentWidget.FadeInContent"));
		
		UCoreTabContentWidget_FadeInContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTabContentWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTabContentWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreTabContentWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C340
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumWidget.SetGridSlot
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGridSlot*                                   GridSlot                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveCompendiumWidget::SetGridSlot(class UGridSlot* GridSlot, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumWidget.SetGridSlot"));
		
		UCoreArchiveCompendiumWidget_SetGridSlot_Params params {};
		params.GridSlot = GridSlot;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C020
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumWidget.ResetScroll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreArchiveCompendiumWidget::ResetScroll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumWidget.ResetScroll"));
		
		UCoreArchiveCompendiumWidget_ResetScroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414C000
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumWidget.Reset
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveCompendiumWidget::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumWidget.Reset"));
		
		UCoreArchiveCompendiumWidget_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B850
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumWidget.OnPastStoryClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveCompendiumWidget::OnPastStoryClicked(class UCoreButtonWidget* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumWidget.OnPastStoryClicked"));
		
		UCoreArchiveCompendiumWidget_OnPastStoryClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B510
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateGhostStories
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            currentStoryNum                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveCompendiumWidget::CreateGhostStories(int32_t currentStoryNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateGhostStories"));
		
		UCoreArchiveCompendiumWidget_CreateGhostStories_Params params {};
		params.currentStoryNum = currentStoryNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B470
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateAndAddButtonToGrid
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreArchiveCompendiumButtonWidget* UCoreArchiveCompendiumWidget::CreateAndAddButtonToGrid(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateAndAddButtonToGrid"));
		
		UCoreArchiveCompendiumWidget_CreateAndAddButtonToGrid_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveCompendiumWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveCompendiumWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveCompendiumWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetVoiceOverText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        playVoiceOverText                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        stopVoiceOverText                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        autoplayVoiceOverText                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalImageViewerWidget::SetVoiceOverText(const class FText& playVoiceOverText, const class FText& stopVoiceOverText, const class FText& autoplayVoiceOverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetVoiceOverText"));
		
		UCoreArchiveJournalImageViewerWidget_SetVoiceOverText_Params params {};
		params.playVoiceOverText = playVoiceOverText;
		params.stopVoiceOverText = stopVoiceOverText;
		params.autoplayVoiceOverText = autoplayVoiceOverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetTextVisibilityInputText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DisplayText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        hideText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalImageViewerWidget::SetTextVisibilityInputText(const class FText& DisplayText, const class FText& hideText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetTextVisibilityInputText"));
		
		UCoreArchiveJournalImageViewerWidget_SetTextVisibilityInputText_Params params {};
		params.DisplayText = DisplayText;
		params.hideText = hideText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetScrollData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        journalEntryScrollPromptText                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalImageViewerWidget::SetScrollData(const class FText& journalEntryScrollPromptText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetScrollData"));
		
		UCoreArchiveJournalImageViewerWidget_SetScrollData_Params params {};
		params.journalEntryScrollPromptText = journalEntryScrollPromptText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchivesVignetteEntryViewData              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               hasTitle                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hasDescription                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalImageViewerWidget::SetData(const struct FArchivesVignetteEntryViewData& Data, bool hasTitle, bool hasDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetData"));
		
		UCoreArchiveJournalImageViewerWidget_SetData_Params params {};
		params.Data = Data;
		params.hasTitle = hasTitle;
		params.hasDescription = hasDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BF80
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreArchiveJournalImageViewerWidget::OnVoiceOverPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverPlay"));
		
		UCoreArchiveJournalImageViewerWidget_OnVoiceOverPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BE60
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverAutoPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               autoplay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalImageViewerWidget::OnVoiceOverAutoPlay(bool autoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverAutoPlay"));
		
		UCoreArchiveJournalImageViewerWidget_OnVoiceOverAutoPlay_Params params {};
		params.autoplay = autoplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BC70
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnTextVisibilityChanged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreArchiveJournalImageViewerWidget::OnTextVisibilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnTextVisibilityChanged"));
		
		UCoreArchiveJournalImageViewerWidget_OnTextVisibilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveJournalImageViewerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveJournalImageViewerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveJournalImageViewerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414CAF0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.ShowImageViewer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreArchiveJournalWidget::ShowImageViewer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.ShowImageViewer"));
		
		UCoreArchiveJournalWidget_ShowImageViewer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        playVoiceOverText                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        stopVoiceOverText                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        autoplayVoiceOverText                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::SetVoiceOverText(const class FText& playVoiceOverText, const class FText& stopVoiceOverText, const class FText& autoplayVoiceOverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverText"));
		
		UCoreArchiveJournalWidget_SetVoiceOverText_Params params {};
		params.playVoiceOverText = playVoiceOverText;
		params.stopVoiceOverText = stopVoiceOverText;
		params.autoplayVoiceOverText = autoplayVoiceOverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverButtonsVisibility
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::SetVoiceOverButtonsVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverButtonsVisibility"));
		
		UCoreArchiveJournalWidget_SetVoiceOverButtonsVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVignetteText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        titleText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        subtitleText                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::SetVignetteText(const class FText& titleText, const class FText& subtitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVignetteText"));
		
		UCoreArchiveJournalWidget_SetVignetteText_Params params {};
		params.titleText = titleText;
		params.subtitleText = subtitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.SetTopFogOffset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasTitle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hasDescription                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::SetTopFogOffset(bool hasTitle, bool hasDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.SetTopFogOffset"));
		
		UCoreArchiveJournalWidget_SetTopFogOffset_Params params {};
		params.hasTitle = hasTitle;
		params.hasDescription = hasDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        titleText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        descriptionText                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::SetEntryText(const class FText& titleText, const class FText& descriptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryText"));
		
		UCoreArchiveJournalWidget_SetEntryText_Params params {};
		params.titleText = titleText;
		params.descriptionText = descriptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryImage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        titleText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        descriptionText                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              textureOffset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::SetEntryImage(const class FText& titleText, const class FText& descriptionText, float textureOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryImage"));
		
		UCoreArchiveJournalWidget_SetEntryImage_Params params {};
		params.titleText = titleText;
		params.descriptionText = descriptionText;
		params.textureOffset = textureOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.SetBottomFogOffset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasAudio                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::SetBottomFogOffset(bool HasAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.SetBottomFogOffset"));
		
		UCoreArchiveJournalWidget_SetBottomFogOffset_Params params {};
		params.HasAudio = HasAudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BFA0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreArchiveJournalWidget::OnVoiceOverPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverPlay"));
		
		UCoreArchiveJournalWidget_OnVoiceOverPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BEF0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverAutoPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               autoplay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::OnVoiceOverAutoPlay(bool autoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverAutoPlay"));
		
		UCoreArchiveJournalWidget_OnVoiceOverAutoPlay_Params params {};
		params.autoplay = autoplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BDD0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteEntrySelected
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::OnVignetteEntrySelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteEntrySelected"));
		
		UCoreArchiveJournalWidget_OnVignetteEntrySelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BD40
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteCinematicSelected
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::OnVignetteCinematicSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteCinematicSelected"));
		
		UCoreArchiveJournalWidget_OnVignetteCinematicSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BCB0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteButtonSelected
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::OnVignetteButtonSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteButtonSelected"));
		
		UCoreArchiveJournalWidget_OnVignetteButtonSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BBC0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnRightArrowTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveJournalWidget::OnRightArrowTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnRightArrowTriggered"));
		
		UCoreArchiveJournalWidget_OnRightArrowTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B8E0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnRewardImageLoaded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        titleText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class FText                                        descriptionText                                            (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              textureOffset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::OnRewardImageLoaded(bool success, const class FText& titleText, const class FText& descriptionText, float textureOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnRewardImageLoaded"));
		
		UCoreArchiveJournalWidget_OnRewardImageLoaded_Params params {};
		params.success = success;
		params.titleText = titleText;
		params.descriptionText = descriptionText;
		params.textureOffset = textureOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B830
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnLeftArrowTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveJournalWidget::OnLeftArrowTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnLeftArrowTriggered"));
		
		UCoreArchiveJournalWidget_OnLeftArrowTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B810
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnJournalEntriesUnlocked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveJournalWidget::OnJournalEntriesUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnJournalEntriesUnlocked"));
		
		UCoreArchiveJournalWidget_OnJournalEntriesUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B7F0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.OnFirstJournalEntryUnlocked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveJournalWidget::OnFirstJournalEntryUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.OnFirstJournalEntryUnlocked"));
		
		UCoreArchiveJournalWidget_OnFirstJournalEntryUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414B6E0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveJournalWidget.InitializeArrow
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreInputSwitcherWidget*                    arrowWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveJournalWidget::InitializeArrow(class UCoreInputSwitcherWidget* arrowWidget, bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveJournalWidget.InitializeArrow"));
		
		UCoreArchiveJournalWidget_InitializeArrow_Params params {};
		params.arrowWidget = arrowWidget;
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveJournalWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveJournalWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveJournalWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BC90
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnTomeLevelUnlockedAnimation
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveLevelProgressionWidget::OnTomeLevelUnlockedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnTomeLevelUnlockedAnimation"));
		
		UCoreArchiveLevelProgressionWidget_OnTomeLevelUnlockedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BBE0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnStoryLevelSelected
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveLevelProgressionWidget::OnStoryLevelSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnStoryLevelSelected"));
		
		UCoreArchiveLevelProgressionWidget_OnStoryLevelSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveLevelProgressionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveLevelProgressionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveLevelProgressionWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveMenuWidget.SetScrollData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        vignetteListScrollPromptText                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        journalEntryScrollPromptText                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveMenuWidget::SetScrollData(const class FText& vignetteListScrollPromptText, const class FText& journalEntryScrollPromptText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveMenuWidget.SetScrollData"));
		
		UCoreArchiveMenuWidget_SetScrollData_Params params {};
		params.vignetteListScrollPromptText = vignetteListScrollPromptText;
		params.journalEntryScrollPromptText = journalEntryScrollPromptText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151500
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelectionCancelled
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UCoreArchiveMenuWidget::OnSlotSelectionCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelectionCancelled"));
		
		UCoreArchiveMenuWidget_OnSlotSelectionCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151480
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelected
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveMenuWidget::OnSlotSelected(EPlayerRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelected"));
		
		UCoreArchiveMenuWidget_OnSlotSelected_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150AE0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelectedAgain
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveMenuWidget::OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelectedAgain"));
		
		UCoreArchiveMenuWidget_OnMenuTabSelectedAgain_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150A50
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelected
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveMenuWidget::OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelected"));
		
		UCoreArchiveMenuWidget_OnMenuTabSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150930
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveMenuWidget.OnInfoButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveMenuWidget::OnInfoButtonClicked(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveMenuWidget.OnInfoButtonClicked"));
		
		UCoreArchiveMenuWidget_OnInfoButtonClicked_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041504D0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveMenuWidget.OnChallengeReminderClick
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveMenuWidget::OnChallengeReminderClick(class UCoreButtonWidget* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveMenuWidget.OnChallengeReminderClick"));
		
		UCoreArchiveMenuWidget_OnChallengeReminderClick_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414FBF0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveMenuWidget.GetTimeRemainingLabelFromMenuState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EArchiveMenuState                                  menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UCoreArchiveMenuWidget::GetTimeRemainingLabelFromMenuState(EArchiveMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveMenuWidget.GetTimeRemainingLabelFromMenuState"));
		
		UCoreArchiveMenuWidget_GetTimeRemainingLabelFromMenuState_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveMenuWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041515F0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveObjectiveWidget.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FArchiveNodeObjectiveViewData               objectiveData                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveObjectiveWidget::SetData(const struct FArchiveNodeObjectiveViewData& objectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveObjectiveWidget.SetData"));
		
		UCoreArchiveObjectiveWidget_SetData_Params params {};
		params.objectiveData = objectiveData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveObjectiveWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveObjectiveWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveObjectiveWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreBasePopupWidget.Show
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UBasePopupViewData*                          Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBasePopupWidget::Show(class UBasePopupViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBasePopupWidget.Show"));
		
		UCoreBasePopupWidget_Show_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreBasePopupWidget.Hide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCoreBasePopupWidget::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBasePopupWidget.Hide"));
		
		UCoreBasePopupWidget_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreBasePopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBasePopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreBasePopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C1C0
	 * 		Name   -> Function DBDUIViewsCore.CoreGenericPopupWidget.OnRegressionAction
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreGenericPopupWidget::OnRegressionAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGenericPopupWidget.OnRegressionAction"));
		
		UCoreGenericPopupWidget_OnRegressionAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041565F0
	 * 		Name   -> Function DBDUIViewsCore.CoreGenericPopupWidget.OnProgressionAction
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreGenericPopupWidget::OnProgressionAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGenericPopupWidget.OnProgressionAction"));
		
		UCoreGenericPopupWidget_OnProgressionAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C180
	 * 		Name   -> Function DBDUIViewsCore.CoreGenericPopupWidget.OnAlternativeAction
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreGenericPopupWidget::OnAlternativeAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGenericPopupWidget.OnAlternativeAction"));
		
		UCoreGenericPopupWidget_OnAlternativeAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreGenericPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGenericPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreGenericPopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414FCE0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchivePassPurchasePopupWidget.GetTranslatedAvailabilityTitleText
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UCoreArchivePassPurchasePopupWidget::GetTranslatedAvailabilityTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchivePassPurchasePopupWidget.GetTranslatedAvailabilityTitleText"));
		
		UCoreArchivePassPurchasePopupWidget_GetTranslatedAvailabilityTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchivePassPurchasePopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchivePassPurchasePopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchivePassPurchasePopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151920
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromPath
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCoreArchiveQuestPathWidget*                 Path                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestMapWidget::UnbindFromPath(class UCoreArchiveQuestPathWidget* Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromPath"));
		
		UCoreArchiveQuestMapWidget_UnbindFromPath_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151890
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromNode
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCoreArchiveQuestNodeWidget*                 Node                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestMapWidget::UnbindFromNode(class UCoreArchiveQuestNodeWidget* Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromNode"));
		
		UCoreArchiveQuestMapWidget_UnbindFromNode_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041517D0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupPath
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FArchiveMapPathViewData                     PathData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestMapWidget::SetupPath(const struct FArchiveMapPathViewData& PathData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupPath"));
		
		UCoreArchiveQuestMapWidget_SetupPath_Params params {};
		params.PathData = PathData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041516D0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupNode
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FArchiveNodeGraphViewData                   NodeData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestMapWidget::SetupNode(const struct FArchiveNodeGraphViewData& NodeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupNode"));
		
		UCoreArchiveQuestMapWidget_SetupNode_Params params {};
		params.NodeData = NodeData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150E50
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeUnhovered
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestMapWidget::OnNodeUnhovered(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeUnhovered"));
		
		UCoreArchiveQuestMapWidget_OnNodeUnhovered_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151220
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodesRevealCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveQuestMapWidget::OnNodesRevealCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodesRevealCompleted"));
		
		UCoreArchiveQuestMapWidget_OnNodesRevealCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150D30
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeHovered
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestMapWidget::OnNodeHovered(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeHovered"));
		
		UCoreArchiveQuestMapWidget_OnNodeHovered_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150CA0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeClicked
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestMapWidget::OnNodeClicked(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeClicked"));
		
		UCoreArchiveQuestMapWidget_OnNodeClicked_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414FB60
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToPath
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCoreArchiveQuestPathWidget*                 Path                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestMapWidget::BindToPath(class UCoreArchiveQuestPathWidget* Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToPath"));
		
		UCoreArchiveQuestMapWidget_BindToPath_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414FAD0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToNode
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCoreArchiveQuestNodeWidget*                 Node                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestMapWidget::BindToNode(class UCoreArchiveQuestNodeWidget* Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToNode"));
		
		UCoreArchiveQuestMapWidget_BindToNode_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveQuestMapWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveQuestMapWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveQuestMapWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetHighlightedGridLines
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            verticalIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            horizontalIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::SetHighlightedGridLines(int32_t verticalIndex, int32_t horizontalIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetHighlightedGridLines"));
		
		UCoreArchiveQuestEditorWidget_SetHighlightedGridLines_Params params {};
		params.verticalIndex = verticalIndex;
		params.horizontalIndex = horizontalIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetGridLinesArray
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinePair>                           gridArrayVertical                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinePair>                           gridArrayHorizontal                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::SetGridLinesArray(TArray<struct FLinePair> gridArrayVertical, TArray<struct FLinePair> gridArrayHorizontal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetGridLinesArray"));
		
		UCoreArchiveQuestEditorWidget_SetGridLinesArray_Params params {};
		params.gridArrayVertical = gridArrayVertical;
		params.gridArrayHorizontal = gridArrayHorizontal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151520
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSnapGridChecked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnSnapGridChecked(bool checked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSnapGridChecked"));
		
		UCoreArchiveQuestEditorWidget_OnSnapGridChecked_Params params {};
		params.checked = checked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041513F0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSaveGraphClick
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnSaveGraphClick(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSaveGraphClick"));
		
		UCoreArchiveQuestEditorWidget_OnSaveGraphClick_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041512D0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnRefreshGridClick
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnRefreshGridClick(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnRefreshGridClick"));
		
		UCoreArchiveQuestEditorWidget_OnRefreshGridClick_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151240
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnPathClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnPathClicked(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnPathClicked"));
		
		UCoreArchiveQuestEditorWidget_OnPathClicked_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151150
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPixelChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnNodeYPixelChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPixelChanged"));
		
		UCoreArchiveQuestEditorWidget_OnNodeYPixelChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151080
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPercentChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnNodeYPercentChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPercentChanged"));
		
		UCoreArchiveQuestEditorWidget_OnNodeYPercentChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150FB0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPixelChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnNodeXPixelChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPixelChanged"));
		
		UCoreArchiveQuestEditorWidget_OnNodeXPixelChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150EE0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPercentChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnNodeXPercentChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPercentChanged"));
		
		UCoreArchiveQuestEditorWidget_OnNodeXPercentChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150DC0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeSubmitClick
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnNodeSubmitClick(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeSubmitClick"));
		
		UCoreArchiveQuestEditorWidget_OnNodeSubmitClick_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150C00
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeBeginDrag
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FName                                        ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnNodeBeginDrag(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeBeginDrag"));
		
		UCoreArchiveQuestEditorWidget_OnNodeBeginDrag_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150B70
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnMoveNodesModeChecked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnMoveNodesModeChecked(bool checked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnMoveNodesModeChecked"));
		
		UCoreArchiveQuestEditorWidget_OnMoveNodesModeChecked_Params params {};
		params.checked = checked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041509C0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnLinkNodesModeChecked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnLinkNodesModeChecked(bool checked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnLinkNodesModeChecked"));
		
		UCoreArchiveQuestEditorWidget_OnLinkNodesModeChecked_Params params {};
		params.checked = checked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041508A0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridVisbilityChecked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnGridVisbilityChecked(bool checked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridVisbilityChecked"));
		
		UCoreArchiveQuestEditorWidget_OnGridVisbilityChecked_Params params {};
		params.checked = checked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041507D0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPixelChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnGridTileWidthPixelChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPixelChanged"));
		
		UCoreArchiveQuestEditorWidget_OnGridTileWidthPixelChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150700
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPercentChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnGridTileWidthPercentChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPercentChanged"));
		
		UCoreArchiveQuestEditorWidget_OnGridTileWidthPercentChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150630
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPixelChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnGridTileHeightPixelChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPixelChanged"));
		
		UCoreArchiveQuestEditorWidget_OnGridTileHeightPixelChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150560
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPercentChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::OnGridTileHeightPercentChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPercentChanged"));
		
		UCoreArchiveQuestEditorWidget_OnGridTileHeightPercentChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150440
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.NodeDragged
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::NodeDragged(const struct FVector2D& position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.NodeDragged"));
		
		UCoreArchiveQuestEditorWidget_NodeDragged_Params params {};
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041502A0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.IntermediatePathMove
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestEditorWidget::IntermediatePathMove(const struct FVector2D& position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.IntermediatePathMove"));
		
		UCoreArchiveQuestEditorWidget_IntermediatePathMove_Params params {};
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveQuestEditorWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveQuestEditorWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveQuestEditorWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateStoryIndicatorOpacity
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsImageReward                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isCompleted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestNodeWidget::UpdateStoryIndicatorOpacity(bool IsImageReward, bool isCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateStoryIndicatorOpacity"));
		
		UCoreArchiveQuestNodeWidget_UpdateStoryIndicatorOpacity_Params params {};
		params.IsImageReward = IsImageReward;
		params.isCompleted = isCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041519D0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FArchiveNodeViewData                        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestNodeWidget::UpdateNode(const struct FArchiveNodeViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateNode"));
		
		UCoreArchiveQuestNodeWidget_UpdateNode_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041519B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateAllStoryIndicators
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreArchiveQuestNodeWidget::UpdateAllStoryIndicators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateAllStoryIndicators"));
		
		UCoreArchiveQuestNodeWidget_UpdateAllStoryIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151870
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.ShowRewardNodeTooltip
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreArchiveQuestNodeWidget::ShowRewardNodeTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.ShowRewardNodeTooltip"));
		
		UCoreArchiveQuestNodeWidget_ShowRewardNodeTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.SetRewardRarity
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EItemRarity                                        Rarity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestNodeWidget::SetRewardRarity(EItemRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.SetRewardRarity"));
		
		UCoreArchiveQuestNodeWidget_SetRewardRarity_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041515B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.Reset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCoreArchiveQuestNodeWidget::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.Reset"));
		
		UCoreArchiveQuestNodeWidget_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnStatusChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ENodeStatusChange                                  nodeStatusChange                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestNodeWidget::OnStatusChanged(ENodeStatusChange nodeStatusChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnStatusChanged"));
		
		UCoreArchiveQuestNodeWidget_OnStatusChanged_Params params {};
		params.nodeStatusChange = nodeStatusChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnReset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreArchiveQuestNodeWidget::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnReset"));
		
		UCoreArchiveQuestNodeWidget_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnInit
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreArchiveQuestNodeWidget::OnInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnInit"));
		
		UCoreArchiveQuestNodeWidget_OnInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041503F0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.NeedsChallengeReminderHoverAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreArchiveQuestNodeWidget::NeedsChallengeReminderHoverAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.NeedsChallengeReminderHoverAnimation"));
		
		UCoreArchiveQuestNodeWidget_NeedsChallengeReminderHoverAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150370
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsValidNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreArchiveQuestNodeWidget::IsValidNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsValidNode"));
		
		UCoreArchiveQuestNodeWidget_IsValidNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150330
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsSelectableNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreArchiveQuestNodeWidget::IsSelectableNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsSelectableNode"));
		
		UCoreArchiveQuestNodeWidget_IsSelectableNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414FE40
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.InitNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        nodeId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FArchiveNodeViewData                        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               isChallengeReminderNode                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestNodeWidget::InitNode(const class FName& nodeId, const struct FArchiveNodeViewData& Data, bool isChallengeReminderNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.InitNode"));
		
		UCoreArchiveQuestNodeWidget_InitNode_Params params {};
		params.nodeId = nodeId;
		params.Data = Data;
		params.isChallengeReminderNode = isChallengeReminderNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414FD70
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.HandleStatusChange
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EStoryNodeState                                    prevStatus                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStoryNodeState                                    currentStatus                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestNodeWidget::HandleStatusChange(EStoryNodeState prevStatus, EStoryNodeState currentStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.HandleStatusChange"));
		
		UCoreArchiveQuestNodeWidget_HandleStatusChange_Params params {};
		params.prevStatus = prevStatus;
		params.currentStatus = currentStatus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.BroadcastDragBegin
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreArchiveQuestNodeWidget::BroadcastDragBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.BroadcastDragBegin"));
		
		UCoreArchiveQuestNodeWidget_BroadcastDragBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveQuestNodeWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveQuestNodeWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveQuestNodeWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151CF0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestPathWidget.UpdatePath
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FArchiveMapPathViewData                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestPathWidget::UpdatePath(const struct FArchiveMapPathViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestPathWidget.UpdatePath"));
		
		UCoreArchiveQuestPathWidget_UpdatePath_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestPathWidget.SetVisualState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		EArchivePathStatus                                 pathStatus                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestPathWidget::SetVisualState(EArchivePathStatus pathStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestPathWidget.SetVisualState"));
		
		UCoreArchiveQuestPathWidget_SetVisualState_Params params {};
		params.pathStatus = pathStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041515D0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestPathWidget.Reset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCoreArchiveQuestPathWidget::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestPathWidget.Reset"));
		
		UCoreArchiveQuestPathWidget_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04150200
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveQuestPathWidget.InitPath
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FArchiveMapPathViewData                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveQuestPathWidget::InitPath(const struct FArchiveMapPathViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveQuestPathWidget.InitPath"));
		
		UCoreArchiveQuestPathWidget_InitPath_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveQuestPathWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveQuestPathWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveQuestPathWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftTierItem.SetLockedState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hasPremium                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftTierItem::SetLockedState(bool IsLocked, bool hasPremium)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftTierItem.SetLockedState"));
		
		UCoreArchiveRiftTierItem_SetLockedState_Params params {};
		params.IsLocked = IsLocked;
		params.hasPremium = hasPremium;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftTierItem.SetGenericData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchiveRiftTierRewardsViewData             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftTierItem::SetGenericData(const struct FArchiveRiftTierRewardsViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftTierItem.SetGenericData"));
		
		UCoreArchiveRiftTierItem_SetGenericData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftTierItem.PlayUnlockanimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPremiumUnlocked                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftTierItem::PlayUnlockanimation(bool IsPremiumUnlocked, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftTierItem.PlayUnlockanimation"));
		
		UCoreArchiveRiftTierItem_PlayUnlockanimation_Params params {};
		params.IsPremiumUnlocked = IsPremiumUnlocked;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04151360
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftTierItem.OnRewardClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftTierItem::OnRewardClicked(class UCoreButtonWidget* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftTierItem.OnRewardClicked"));
		
		UCoreArchiveRiftTierItem_OnRewardClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftTierItem.Clear
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCoreArchiveRiftTierItem::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftTierItem.Clear"));
		
		UCoreArchiveRiftTierItem_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveRiftTierItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveRiftTierItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveRiftTierItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.SetVisualData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchivesRiftGenericViewData                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftWidget::SetVisualData(const struct FArchivesRiftGenericViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.SetVisualData"));
		
		UCoreArchiveRiftWidget_SetVisualData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.SetTierVisuals
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ETierType                                          TierType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftWidget::SetTierVisuals(ETierType TierType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.SetTierVisuals"));
		
		UCoreArchiveRiftWidget_SetTierVisuals_Params params {};
		params.TierType = TierType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.SetPaginationVisuals
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               showBonusTierHighlight                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        bonusTierTooltipText                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftWidget::SetPaginationVisuals(bool showBonusTierHighlight, const class FText& bonusTierTooltipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.SetPaginationVisuals"));
		
		UCoreArchiveRiftWidget_SetPaginationVisuals_Params params {};
		params.showBonusTierHighlight = showBonusTierHighlight;
		params.bonusTierTooltipText = bonusTierTooltipText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.PlayPremiumTrackUnlockAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreArchiveRiftWidget::PlayPremiumTrackUnlockAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.PlayPremiumTrackUnlockAnimation"));
		
		UCoreArchiveRiftWidget_PlayPremiumTrackUnlockAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041561B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardItemClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCoreButtonWidget*                           Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isPremium                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftWidget::OnRewardItemClicked(int32_t tier, class UCoreButtonWidget* Button, bool isPremium, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardItemClicked"));
		
		UCoreArchiveRiftWidget_OnRewardItemClicked_Params params {};
		params.tier = tier;
		params.Button = Button;
		params.isPremium = isPremium;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156190
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardAnimationCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveRiftWidget::OnRewardAnimationCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardAnimationCompleted"));
		
		UCoreArchiveRiftWidget_OnRewardAnimationCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156170
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.OnPreviousButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveRiftWidget::OnPreviousButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.OnPreviousButtonClicked"));
		
		UCoreArchiveRiftWidget_OnPreviousButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041560E0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonUnhovered
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftWidget::OnOutfitButtonUnhovered(class UCoreButtonWidget* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonUnhovered"));
		
		UCoreArchiveRiftWidget_OnOutfitButtonUnhovered_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156050
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonHovered
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftWidget::OnOutfitButtonHovered(class UCoreButtonWidget* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonHovered"));
		
		UCoreArchiveRiftWidget_OnOutfitButtonHovered_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155FC0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftWidget::OnOutfitButtonClicked(class UCoreButtonWidget* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonClicked"));
		
		UCoreArchiveRiftWidget_OnOutfitButtonClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155FA0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.OnNextButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveRiftWidget::OnNextButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.OnNextButtonClicked"));
		
		UCoreArchiveRiftWidget_OnNextButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155E90
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.OnCurrentPageAnimationCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveRiftWidget::OnCurrentPageAnimationCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.OnCurrentPageAnimationCompleted"));
		
		UCoreArchiveRiftWidget_OnCurrentPageAnimationCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155B40
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveRiftWidget.DisplayPage
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveRiftWidget::DisplayPage(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveRiftWidget.DisplayPage"));
		
		UCoreArchiveRiftWidget_DisplayPage_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveRiftWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveRiftWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveRiftWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156310
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnSurvivorSelection
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveSlotSelectorWidget::OnSurvivorSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnSurvivorSelection"));
		
		UCoreArchiveSlotSelectorWidget_OnSurvivorSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155EB0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnKillerSelection
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveSlotSelectorWidget::OnKillerSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnKillerSelection"));
		
		UCoreArchiveSlotSelectorWidget_OnKillerSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155E50
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnCancelSelection
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveSlotSelectorWidget::OnCancelSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnCancelSelection"));
		
		UCoreArchiveSlotSelectorWidget_OnCancelSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155CD0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnBothSelection
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveSlotSelectorWidget::OnBothSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnBothSelection"));
		
		UCoreArchiveSlotSelectorWidget_OnBothSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveSlotSelectorWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveSlotSelectorWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveSlotSelectorWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.SetVisualData
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UArchiveTierPurchasePopupViewData*           ViewData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveTierPurchasePopupWidget::SetVisualData(class UArchiveTierPurchasePopupViewData* ViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.SetVisualData"));
		
		UCoreArchiveTierPurchasePopupWidget_SetVisualData_Params params {};
		params.ViewData = ViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155F80
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnMoreInputTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveTierPurchasePopupWidget::OnMoreInputTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnMoreInputTriggered"));
		
		UCoreArchiveTierPurchasePopupWidget_OnMoreInputTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155ED0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnLessInputTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveTierPurchasePopupWidget::OnLessInputTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnLessInputTriggered"));
		
		UCoreArchiveTierPurchasePopupWidget_OnLessInputTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155E70
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnConfirmPurchase
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreArchiveTierPurchasePopupWidget::OnConfirmPurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnConfirmPurchase"));
		
		UCoreArchiveTierPurchasePopupWidget_OnConfirmPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveTierPurchasePopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveTierPurchasePopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155EF0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveTomeWidget.OnMenuTabSelected
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveTomeWidget::OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveTomeWidget.OnMenuTabSelected"));
		
		UCoreArchiveTomeWidget_OnMenuTabSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveTomeWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveTomeWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveTomeWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156F30
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.UnselectCurrent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreButtonSelector::UnselectCurrent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonSelector.UnselectCurrent"));
		
		UCoreButtonSelector_UnselectCurrent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156B00
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SetInputsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::SetInputsEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonSelector.SetInputsEnabled"));
		
		UCoreButtonSelector_SetInputsEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156760
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SetAllEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::SetAllEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonSelector.SetAllEnabled"));
		
		UCoreButtonSelector_SetAllEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156730
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SelectPrevious
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UCoreButtonSelector::SelectPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonSelector.SelectPrevious"));
		
		UCoreButtonSelector_SelectPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156700
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SelectNext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UCoreButtonSelector::SelectNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonSelector.SelectNext"));
		
		UCoreButtonSelector_SelectNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156630
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.Select
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 buttonToSelect                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               performAction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoreButtonSelector::Select(class UCoreSelectableButtonWidget* buttonToSelect, bool performAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonSelector.Select"));
		
		UCoreButtonSelector_Select_Params params {};
		params.buttonToSelect = buttonToSelect;
		params.performAction = performAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnUnselectedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 unselectedButton                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnUnselectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* unselectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnUnselectedDelegate__DelegateSignature"));
		
		UCoreButtonSelector_OnUnselectedDelegate__DelegateSignature_Params params {};
		params.unselectedButton = unselectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnSelectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedDelegate__DelegateSignature"));
		
		UCoreButtonSelector_OnSelectedDelegate__DelegateSignature_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedAgainDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedAgainDelegate__DelegateSignature"));
		
		UCoreButtonSelector_OnSelectedAgainDelegate__DelegateSignature_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155D80
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnButtonSelectedChanged(class UCoreSelectableButtonWidget* selectedButton, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedChanged"));
		
		UCoreButtonSelector_OnButtonSelectedChanged_Params params {};
		params.selectedButton = selectedButton;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155CF0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedAgain
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnButtonSelectedAgain(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedAgain"));
		
		UCoreButtonSelector_OnButtonSelectedAgain_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155CA0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.HasSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreButtonSelector::HasSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreButtonSelector.HasSelection"));
		
		UCoreButtonSelector_HasSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreButtonSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreButtonSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreButtonSelector"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171BE0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.UpdateBackgroundSkin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          skinMaterial                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabContainerWidget::UpdateBackgroundSkin(int32_t Key, class UMaterialInterface* skinMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.UpdateBackgroundSkin"));
		
		UCoreTabContainerWidget_UpdateBackgroundSkin_Params params {};
		params.Key = Key;
		params.skinMaterial = skinMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171A40
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.SetUseControllerTabSwitching
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabContainerWidget::SetUseControllerTabSwitching(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.SetUseControllerTabSwitching"));
		
		UCoreTabContainerWidget_SetUseControllerTabSwitching_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171880
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.SetTabVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabContainerWidget::SetTabVisible(int32_t Key, bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.SetTabVisible"));
		
		UCoreTabContainerWidget_SetTabVisible_Params params {};
		params.Key = Key;
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041717B0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.SetTabEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabContainerWidget::SetTabEnabled(int32_t Key, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.SetTabEnabled"));
		
		UCoreTabContainerWidget_SetTabEnabled_Params params {};
		params.Key = Key;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171520
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.SetNotificationVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HasNotification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabContainerWidget::SetNotificationVisibility(int32_t Key, bool HasNotification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.SetNotificationVisibility"));
		
		UCoreTabContainerWidget_SetNotificationVisibility_Params params {};
		params.Key = Key;
		params.HasNotification = HasNotification;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041710B0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.RemoveTabs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreTabContainerWidget::RemoveTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.RemoveTabs"));
		
		UCoreTabContainerWidget_RemoveTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170F10
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.OnTabSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabContainerWidget::OnTabSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.OnTabSelected"));
		
		UCoreTabContainerWidget_OnTabSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170ED0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.LayOutTabs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreTabContainerWidget::LayOutTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.LayOutTabs"));
		
		UCoreTabContainerWidget_LayOutTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170CA0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.Init
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FTabWidgetData>                      tabsData                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreTabContainerWidget::Init(TArray<struct FTabWidgetData> tabsData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.Init"));
		
		UCoreTabContainerWidget_Init_Params params {};
		params.tabsData = tabsData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170990
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.GetTab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreTabWidget* UCoreTabContainerWidget::GetTab(int32_t Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabContainerWidget.GetTab"));
		
		UCoreTabContainerWidget_GetTab_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTabContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTabContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreTabContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveVignetteButtonContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveVignetteButtonContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveVignetteButtonContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041715F0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabWidget.SetNotificationVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               HasNotification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabWidget::SetNotificationVisibility(bool HasNotification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabWidget.SetNotificationVisibility"));
		
		UCoreTabWidget_SetNotificationVisibility_Params params {};
		params.HasNotification = HasNotification;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171450
	 * 		Name   -> Function DBDUIViewsCore.CoreTabWidget.SetIconTexture
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  IconTexture                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   forcedIconSize                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabWidget::SetIconTexture(class UTexture2D* IconTexture, const struct FVector2D& forcedIconSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabWidget.SetIconTexture"));
		
		UCoreTabWidget_SetIconTexture_Params params {};
		params.IconTexture = IconTexture;
		params.forcedIconSize = forcedIconSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171300
	 * 		Name   -> Function DBDUIViewsCore.CoreTabWidget.SetIconSoftTexture
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   forcedIconSize                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTabWidget::SetIconSoftTexture(const struct FVector2D& forcedIconSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabWidget.SetIconSoftTexture"));
		
		UCoreTabWidget_SetIconSoftTexture_Params params {};
		params.forcedIconSize = forcedIconSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabWidget.PostInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCoreTabWidget::PostInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabWidget.PostInit"));
		
		UCoreTabWidget_PostInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170BD0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabWidget.HasLabelTooltip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UCoreTabWidget::HasLabelTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabWidget.HasLabelTooltip"));
		
		UCoreTabWidget_HasLabelTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170A30
	 * 		Name   -> Function DBDUIViewsCore.CoreTabWidget.GetTabText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UCoreTabWidget::GetTabText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabWidget.GetTabText"));
		
		UCoreTabWidget_GetTabText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170750
	 * 		Name   -> Function DBDUIViewsCore.CoreTabWidget.GetKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCoreTabWidget::GetKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTabWidget.GetKey"));
		
		UCoreTabWidget_GetKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTabWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTabWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreTabWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVisualData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        vignetteTitle                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        vignetteSubtitle                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        vignetteProgressText                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               displayProgress                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              vignetteProgress                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isUnread                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        unreadIndicatorText                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               showCinematics                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               lockCinematics                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveVignetteButtonWidget::SetVisualData(const class FText& vignetteTitle, const class FText& vignetteSubtitle, const class FText& vignetteProgressText, bool displayProgress, float vignetteProgress, bool isUnread, const class FText& unreadIndicatorText, bool showCinematics, bool lockCinematics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVisualData"));
		
		UCoreArchiveVignetteButtonWidget_SetVisualData_Params params {};
		params.vignetteTitle = vignetteTitle;
		params.vignetteSubtitle = vignetteSubtitle;
		params.vignetteProgressText = vignetteProgressText;
		params.displayProgress = displayProgress;
		params.vignetteProgress = vignetteProgress;
		params.isUnread = isUnread;
		params.unreadIndicatorText = unreadIndicatorText;
		params.showCinematics = showCinematics;
		params.lockCinematics = lockCinematics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVignetteRead
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRead                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveVignetteButtonWidget::SetVignetteRead(bool IsRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVignetteRead"));
		
		UCoreArchiveVignetteButtonWidget_SetVignetteRead_Params params {};
		params.IsRead = IsRead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041567F0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FArchivesVignetteViewData                   vignetteDataList                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveVignetteButtonWidget::SetData(const struct FArchivesVignetteViewData& vignetteDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetData"));
		
		UCoreArchiveVignetteButtonWidget_SetData_Params params {};
		params.vignetteDataList = vignetteDataList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveVignetteButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveVignetteButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveVignetteButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteCinematicButton.UnlockCinematic
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreArchiveVignetteCinematicButton::UnlockCinematic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteCinematicButton.UnlockCinematic"));
		
		UCoreArchiveVignetteCinematicButton_UnlockCinematic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteCinematicButton.SetIsForceDisabled
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isForceDisabled                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveVignetteCinematicButton::SetIsForceDisabled(bool isForceDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteCinematicButton.SetIsForceDisabled"));
		
		UCoreArchiveVignetteCinematicButton_SetIsForceDisabled_Params params {};
		params.isForceDisabled = isForceDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveVignetteCinematicButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveVignetteCinematicButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveVignetteCinematicButton"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156F10
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteCinematicContainerWidget.UnlockCinematics
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCoreArchiveVignetteCinematicContainerWidget::UnlockCinematics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteCinematicContainerWidget.UnlockCinematics"));
		
		UCoreArchiveVignetteCinematicContainerWidget_UnlockCinematics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveVignetteCinematicContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveVignetteCinematicContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveVignetteCinematicContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.UnlockEntry
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreArchiveVignetteEntryButtonWidget::UnlockEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.UnlockEntry"));
		
		UCoreArchiveVignetteEntryButtonWidget_UnlockEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetVisualData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            entryNumber                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsRead                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        unreadIndicatorText                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               isImage                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveVignetteEntryButtonWidget::SetVisualData(int32_t entryNumber, bool IsRead, const class FText& unreadIndicatorText, bool isImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetVisualData"));
		
		UCoreArchiveVignetteEntryButtonWidget_SetVisualData_Params params {};
		params.entryNumber = entryNumber;
		params.IsRead = IsRead;
		params.unreadIndicatorText = unreadIndicatorText;
		params.isImage = isImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041569F0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            entryNumber                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsRead                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isImage                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveVignetteEntryButtonWidget::SetData(int32_t entryNumber, bool IsRead, bool isImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetData"));
		
		UCoreArchiveVignetteEntryButtonWidget_SetData_Params params {};
		params.entryNumber = entryNumber;
		params.IsRead = IsRead;
		params.isImage = isImage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04155C80
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.GetEntryNumber
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCoreArchiveVignetteEntryButtonWidget::GetEntryNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.GetEntryNumber"));
		
		UCoreArchiveVignetteEntryButtonWidget_GetEntryNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveVignetteEntryButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveVignetteEntryButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041563C0
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockProgress
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveVignetteEntryContainerWidget::OnUnlockProgress(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockProgress"));
		
		UCoreArchiveVignetteEntryContainerWidget_OnUnlockProgress_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156330
	 * 		Name   -> Function DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockComplete
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreArchiveVignetteEntryContainerWidget::OnUnlockComplete(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockComplete"));
		
		UCoreArchiveVignetteEntryContainerWidget_OnUnlockComplete_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreArchiveVignetteEntryContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreArchiveVignetteEntryContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156E30
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UCoreBaseHudWidget::ShouldPlayFocusAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation"));
		
		UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041565F0
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreBaseHudWidget::PlayFocusAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation"));
		
		UCoreBaseHudWidget_PlayFocusAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreBaseHudWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBaseHudWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreBaseHudWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04156DB0
	 * 		Name   -> Function DBDUIViewsCore.CoreBinkVideoPlayerWidget.SetSize
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBinkVideoPlayerWidget::SetSize(const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreBinkVideoPlayerWidget.SetSize"));
		
		UCoreBinkVideoPlayerWidget_SetSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreBinkVideoPlayerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBinkVideoPlayerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreBinkVideoPlayerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreChallengeTrackerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreChallengeTrackerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreChallengeTrackerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C4F0
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWidget.SetIsLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               useAnimation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRewardWidget::SetIsLocked(bool IsLocked, bool useAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreRewardWidget.SetIsLocked"));
		
		UCoreRewardWidget_SetIsLocked_Params params {};
		params.IsLocked = IsLocked;
		params.useAnimation = useAnimation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BB20
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWidget.GetLockedOverlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCoreLockedOverlayWidget* UCoreRewardWidget::GetLockedOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreRewardWidget.GetLockedOverlay"));
		
		UCoreRewardWidget_GetLockedOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWidget.ClearData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreRewardWidget::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreRewardWidget.ClearData"));
		
		UCoreRewardWidget_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreRewardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRewardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreRewardWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterRewardViewData                    CharacterRewardViewData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCharacterRewardWidget::SetData(const struct FCharacterRewardViewData& CharacterRewardViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData"));
		
		UCoreCharacterRewardWidget_SetData_Params params {};
		params.CharacterRewardViewData = CharacterRewardViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreCharacterRewardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCharacterRewardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreCharacterRewardWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C300
	 * 		Name   -> Function DBDUIViewsCore.CoreCreditsWidget.ScrollText
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreCreditsWidget::ScrollText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCreditsWidget.ScrollText"));
		
		UCoreCreditsWidget_ScrollText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C1E0
	 * 		Name   -> Function DBDUIViewsCore.CoreCreditsWidget.OnScrollEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreCreditsWidget::OnScrollEnd(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCreditsWidget.OnScrollEnd"));
		
		UCoreCreditsWidget_OnScrollEnd_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreCreditsWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCreditsWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreCreditsWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreCurrencyExpirationLabelWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCurrencyExpirationLabelViewData            ViewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCurrencyExpirationLabelWidget::SetData(const struct FCurrencyExpirationLabelViewData& ViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCurrencyExpirationLabelWidget.SetData"));
		
		UCoreCurrencyExpirationLabelWidget_SetData_Params params {};
		params.ViewData = ViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreCurrencyExpirationLabelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCurrencyExpirationLabelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreCurrencyExpirationLabelWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreCurrencyForTooltipsWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCurrencyProgressionRewardViewData          currencyRewardViewData                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCurrencyForTooltipsWidget::SetData(const struct FCurrencyProgressionRewardViewData& currencyRewardViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCurrencyForTooltipsWidget.SetData"));
		
		UCoreCurrencyForTooltipsWidget_SetData_Params params {};
		params.currencyRewardViewData = currencyRewardViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreCurrencyForTooltipsWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCurrencyForTooltipsWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreCurrencyForTooltipsWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreCurrencyLabelWidget.UpdateCurrency
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newBalance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            previousBalance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreCurrencyLabelWidget::UpdateCurrency(int32_t newBalance, int32_t previousBalance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCurrencyLabelWidget.UpdateCurrency"));
		
		UCoreCurrencyLabelWidget_UpdateCurrency_Params params {};
		params.newBalance = newBalance;
		params.previousBalance = previousBalance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreCurrencyLabelWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FCurrencyLabelViewData                      ViewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCurrencyLabelWidget::SetData(const struct FCurrencyLabelViewData& ViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCurrencyLabelWidget.SetData"));
		
		UCoreCurrencyLabelWidget_SetData_Params params {};
		params.ViewData = ViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreCurrencyLabelWidget.PlayNotEnoughCurrency
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCoreCurrencyLabelWidget::PlayNotEnoughCurrency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCurrencyLabelWidget.PlayNotEnoughCurrency"));
		
		UCoreCurrencyLabelWidget_PlayNotEnoughCurrency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreCurrencyLabelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCurrencyLabelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreCurrencyLabelWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreCurrencyProgressionRewardWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCurrencyProgressionRewardViewData          CurrencyProgressionRewardViewData                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCurrencyProgressionRewardWidget::SetData(const struct FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCurrencyProgressionRewardWidget.SetData"));
		
		UCoreCurrencyProgressionRewardWidget_SetData_Params params {};
		params.CurrencyProgressionRewardViewData = CurrencyProgressionRewardViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreCurrencyProgressionRewardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCurrencyProgressionRewardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreCurrencyProgressionRewardWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415CA90
	 * 		Name   -> Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetRarity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EItemRarity                                        Rarity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreCustomizationRewardWidget::SetRarity(EItemRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetRarity"));
		
		UCoreCustomizationRewardWidget_SetRarity_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetOwnedText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ownedText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCustomizationRewardWidget::SetOwnedText(const class FText& ownedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetOwnedText"));
		
		UCoreCustomizationRewardWidget_SetOwnedText_Params params {};
		params.ownedText = ownedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomizationRewardViewData                CustomizationRewardViewData                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCustomizationRewardWidget::SetData(const struct FCustomizationRewardViewData& CustomizationRewardViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData"));
		
		UCoreCustomizationRewardWidget_SetData_Params params {};
		params.CustomizationRewardViewData = CustomizationRewardViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreCustomizationRewardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCustomizationRewardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreCustomizationRewardWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C0E0
	 * 		Name   -> Function DBDUIViewsCore.CoreDisplayStandWidget.OnDrag
	 * 		Flags  -> (Final, Native, Protected, HasDefaults)
	 * Parameters:
	 * 		struct FVector2D                                   cursorDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreDisplayStandWidget::OnDrag(const struct FVector2D& cursorDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreDisplayStandWidget.OnDrag"));
		
		UCoreDisplayStandWidget_OnDrag_Params params {};
		params.cursorDelta = cursorDelta;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreDisplayStandWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreDisplayStandWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreDisplayStandWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreEndGameCollapseBarWidget::UpdateBarProgression(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression"));
		
		UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreEndGameCollapseBarWidget::PlayToZeroAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation"));
		
		UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreEndGameCollapseBarWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEndGameCollapseBarWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreEndGameCollapseBarWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreEndGameCollapseProgressWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEndGameCollapseProgressWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreEquippedItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEquippedItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreEquippedItemWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreEquippedPowerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEquippedPowerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreEquippedPowerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreExampleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreExampleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreExampleWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C020
	 * 		Name   -> Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk_Implementation
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreExternalEffectsWidget::HideExternalPerk_Implementation(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk_Implementation"));
		
		UCoreExternalEffectsWidget_HideExternalPerk_Implementation_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415BF80
	 * 		Name   -> Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon_Implementation
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreExternalEffectsWidget::HideExternalAddon_Implementation(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon_Implementation"));
		
		UCoreExternalEffectsWidget_HideExternalAddon_Implementation_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreExternalEffectsWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreExternalEffectsWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreExternalEffectsWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreFearMarketWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreFearMarketWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreFearMarketWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreFooterButtonWidget.SetUnhoveredColor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreFooterButtonWidget::SetUnhoveredColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreFooterButtonWidget.SetUnhoveredColor"));
		
		UCoreFooterButtonWidget_SetUnhoveredColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreFooterButtonWidget.SetHoveredColor
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreFooterButtonWidget::SetHoveredColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreFooterButtonWidget.SetHoveredColor"));
		
		UCoreFooterButtonWidget_SetHoveredColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreFooterButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreFooterButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreFooterButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162940
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetUIAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUIActionType                                      ActionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetUIAction(EUIActionType ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetUIAction"));
		
		UCoreInputSwitcherWidget_SetUIAction_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041627A0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetRepeatable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isRepeatable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 repetitionDelayCurve                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetRepeatable(bool isRepeatable, class UCurveFloat* repetitionDelayCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetRepeatable"));
		
		UCoreInputSwitcherWidget_SetRepeatable_Params params {};
		params.isRepeatable = isRepeatable;
		params.repetitionDelayCurve = repetitionDelayCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162530
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetLabel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        label                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetLabel(const class FText& label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetLabel"));
		
		UCoreInputSwitcherWidget_SetLabel_Params params {};
		params.label = label;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162260
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetKeyOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        keyOverride                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetKeyOverride(const struct FKey& keyOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetKeyOverride"));
		
		UCoreInputSwitcherWidget_SetKeyOverride_Params params {};
		params.keyOverride = keyOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161D30
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetEnabled"));
		
		UCoreInputSwitcherWidget_SetEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161B90
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetBackground
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreInputSwitcherWidget::SetBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetBackground"));
		
		UCoreInputSwitcherWidget_SetBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161B10
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ETextJustify                                       newAlignment                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetAlignment(ETextJustify newAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetAlignment"));
		
		UCoreInputSwitcherWidget_SetAlignment_Params params {};
		params.newAlignment = newAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041618F0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetAdditionalIcon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreInputSwitcherWidget::SetAdditionalIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetAdditionalIcon"));
		
		UCoreInputSwitcherWidget_SetAdditionalIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161750
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.OnInputPromptTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreInputSwitcherWidget::OnInputPromptTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.OnInputPromptTriggered"));
		
		UCoreInputSwitcherWidget_OnInputPromptTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161630
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.OnButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::OnButtonClicked(class UCoreButtonWidget* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.OnButtonClicked"));
		
		UCoreInputSwitcherWidget_OnButtonClicked_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041615B0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.OnAlignmentChanged
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ETextJustify                                       newAlignment                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::OnAlignmentChanged(ETextJustify newAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.OnAlignmentChanged"));
		
		UCoreInputSwitcherWidget_OnAlignmentChanged_Params params {};
		params.newAlignment = newAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041611A0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.GetInputPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCoreKeyListenerInputPromptWidget* UCoreInputSwitcherWidget::GetInputPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.GetInputPrompt"));
		
		UCoreInputSwitcherWidget_GetInputPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041610B0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.GetButton
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCoreButtonWidget* UCoreInputSwitcherWidget::GetButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputSwitcherWidget.GetButton"));
		
		UCoreInputSwitcherWidget_GetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreInputSwitcherWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInputSwitcherWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreInputSwitcherWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreFooterInputSwitcherWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreFooterInputSwitcherWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreFooterInputSwitcherWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415CBE0
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Title                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Description                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualCategoryButton::SetText(const class FText& Title, const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText"));
		
		UCoreGameManualCategoryButton_SetText_Params params {};
		params.Title = Title;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreGameManualCategoryButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGameManualCategoryButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreGameManualCategoryButton"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415CE70
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UCoreGameManualPanelWidget::ToggleGameManualMenuState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState"));
		
		UCoreGameManualPanelWidget_ToggleGameManualMenuState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415CDF0
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		EHelpType                                          categoryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualPanelWidget::ShowHelpTopics(EHelpType categoryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics"));
		
		UCoreGameManualPanelWidget_ShowHelpTopics_Params params {};
		params.categoryType = categoryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C790
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		EGameManualMenuState                               menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualPanelWidget::SetGameManualMenuState(EGameManualMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState"));
		
		UCoreGameManualPanelWidget_SetGameManualMenuState_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C6E0
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UCoreGameManualPanelWidget::SetCurrentOnbardingMenuSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle"));
		
		UCoreGameManualPanelWidget_SetCurrentOnbardingMenuSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               resetTopicsScroll                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualPanelWidget::ResetScrolls(bool resetTopicsScroll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls"));
		
		UCoreGameManualPanelWidget_ResetScrolls_Params params {};
		params.resetTopicsScroll = resetTopicsScroll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C270
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicsTabSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualPanelWidget::OnTopicsTabSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicsTabSelected"));
		
		UCoreGameManualPanelWidget_OnTopicsTabSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreGameManualPanelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGameManualPanelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreGameManualPanelWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreGenericTextInputPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGenericTextInputPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreGenericTextInputPopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreHookCountWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHookCountWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreHookCountWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041618B0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreHudAlertWidget::PopAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert"));
		
		UCoreHudAlertWidget_PopAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161800
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreHudAlertWidget::OnPopAlertComplete(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete"));
		
		UCoreHudAlertWidget_OnPopAlertComplete_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041616C0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreHudAlertWidget::OnClearAlertsComplete(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete"));
		
		UCoreHudAlertWidget_OnClearAlertsComplete_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161320
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCoreHudAlertWidget::GetRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime"));
		
		UCoreHudAlertWidget_GetRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161260
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetPendingAlerts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts"));
		
		UCoreHudAlertWidget_GetPendingAlerts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04160FF0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetAlerts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts"));
		
		UCoreHudAlertWidget_GetAlerts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04160FD0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreHudAlertWidget::ClearAlerts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts"));
		
		UCoreHudAlertWidget_ClearAlerts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreHudAlertWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudAlertWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreHudAlertWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.UpdateResult
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSuccessful                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreHudDirectionalMiniGameItemWidget::UpdateResult(bool IsSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.UpdateResult"));
		
		UCoreHudDirectionalMiniGameItemWidget_UpdateResult_Params params {};
		params.IsSuccessful = IsSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.RevealDirection
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               withAnimation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreHudDirectionalMiniGameItemWidget::RevealDirection(bool withAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.RevealDirection"));
		
		UCoreHudDirectionalMiniGameItemWidget_RevealDirection_Params params {};
		params.withAnimation = withAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.Init
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDirectionalInputKey                               Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreHudDirectionalMiniGameItemWidget::Init(EDirectionalInputKey Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.Init"));
		
		UCoreHudDirectionalMiniGameItemWidget_Init_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreHudDirectionalMiniGameItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudDirectionalMiniGameItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.ShowVisual
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreHudDirectionalMiniGameWidget::ShowVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.ShowVisual"));
		
		UCoreHudDirectionalMiniGameWidget_ShowVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161350
	 * 		Name   -> Function DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.GetWidgets
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	TArray<class UCoreHudDirectionalMiniGameItemWidget*> UCoreHudDirectionalMiniGameWidget::GetWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.GetWidgets"));
		
		UCoreHudDirectionalMiniGameWidget_GetWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreHudDirectionalMiniGameWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudDirectionalMiniGameWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreHudDirectionalMiniGameWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreHudObjectivesWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudObjectivesWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreHudObjectivesWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreAlertViewData                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreHudScoreAlertItem::SetData(const struct FScoreAlertViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData"));
		
		UCoreHudScoreAlertItem_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreHudScoreAlertItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudScoreAlertItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreHudScoreAlertItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatusEffectAlertViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreHudStatusEffectAlertItem::SetData(const struct FStatusEffectAlertViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData"));
		
		UCoreHudStatusEffectAlertItem_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreHudStatusEffectAlertItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudStatusEffectAlertItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreHudStatusEffectAlertItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041620C0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputPromptWidget::SetInputKey(const struct FKey& InputKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey"));
		
		UCoreInputPromptWidget_SetInputKey_Params params {};
		params.InputKey = InputKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161CA0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputPromptWidget::SetEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputPromptWidget.SetEnabled"));
		
		UCoreInputPromptWidget_SetEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041618D0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreInputPromptWidget::PromptNotFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound"));
		
		UCoreInputPromptWidget_PromptNotFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.OnEnabledChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputPromptWidget::OnEnabledChanged(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputPromptWidget.OnEnabledChanged"));
		
		UCoreInputPromptWidget_OnEnabledChanged_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161560
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UCoreInputPromptWidget::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputPromptWidget.IsEnabled"));
		
		UCoreInputPromptWidget_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041611C0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UCoreInputPromptWidget::GetInputShortDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName"));
		
		UCoreInputPromptWidget_GetInputShortDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041610D0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.GetInputKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FKey UCoreInputPromptWidget::GetInputKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputPromptWidget.GetInputKey"));
		
		UCoreInputPromptWidget_GetInputKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreInputPromptWidget::DisplayPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt"));
		
		UCoreInputPromptWidget_DisplayPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreInputPromptWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInputPromptWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreInputPromptWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041626D0
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FStatusEffectViewData>               proficiencyDatas                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionProgressWidget::SetProficiencies(TArray<struct FStatusEffectViewData> proficiencyDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies"));
		
		UCoreInteractionProgressWidget_SetProficiencies_Params params {};
		params.proficiencyDatas = proficiencyDatas;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreInteractionProgressWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInteractionProgressWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreInteractionProgressWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162AC0
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreInteractionPromptActionWidget::StopIdleAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation"));
		
		UCoreInteractionPromptActionWidget_StopIdleAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161FF0
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey4
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey4                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptActionWidget::SetInputKey4(const struct FKey& InputKey4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey4"));
		
		UCoreInteractionPromptActionWidget_SetInputKey4_Params params {};
		params.InputKey4 = InputKey4;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161F20
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey3
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey3                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptActionWidget::SetInputKey3(const struct FKey& InputKey3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey3"));
		
		UCoreInteractionPromptActionWidget_SetInputKey3_Params params {};
		params.InputKey3 = InputKey3;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161E50
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey2                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptActionWidget::SetInputKey2(const struct FKey& InputKey2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2"));
		
		UCoreInteractionPromptActionWidget_SetInputKey2_Params params {};
		params.InputKey2 = InputKey2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162190
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptActionWidget::SetInputKey(const struct FKey& InputKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey"));
		
		UCoreInteractionPromptActionWidget_SetInputKey_Params params {};
		params.InputKey = InputKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161890
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreInteractionPromptActionWidget::PlayIdleAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation"));
		
		UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041614F0
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasThirdPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreInteractionPromptActionWidget::HasThirdPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasThirdPrompt"));
		
		UCoreInteractionPromptActionWidget_HasThirdPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161480
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreInteractionPromptActionWidget::HasSecondPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt"));
		
		UCoreInteractionPromptActionWidget_HasSecondPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161410
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasFourthPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreInteractionPromptActionWidget::HasFourthPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasFourthPrompt"));
		
		UCoreInteractionPromptActionWidget_HasFourthPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreInteractionPromptActionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInteractionPromptActionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreInteractionPromptActionWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreInteractionPromptsContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInteractionPromptsContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInteractionPromptViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptWidget::SetData(const struct FInteractionPromptViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData"));
		
		UCoreInteractionPromptWidget_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161770
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isLargeTextEnabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptWidget::OnLargeTextSettingsChanged(bool isLargeTextEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged"));
		
		UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Params params {};
		params.isLargeTextEnabled = isLargeTextEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreInteractionPromptWidget::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData"));
		
		UCoreInteractionPromptWidget_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreInteractionPromptWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInteractionPromptWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreInteractionPromptWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreItemBundleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreItemBundleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreItemBundleWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreItemInteractionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreItemInteractionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreItemInteractionWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreItemWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041629C0
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerButtonWidget.SetUIAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUIActionType                                      ActionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerButtonWidget::SetUIAction(EUIActionType ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerButtonWidget.SetUIAction"));
		
		UCoreKeyListenerButtonWidget_SetUIAction_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162350
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerButtonWidget.SetKeyOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        keyOverride                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerButtonWidget::SetKeyOverride(const struct FKey& keyOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerButtonWidget.SetKeyOverride"));
		
		UCoreKeyListenerButtonWidget_SetKeyOverride_Params params {};
		params.keyOverride = keyOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreKeyListenerButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreKeyListenerButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreKeyListenerButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162A40
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetUIAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUIActionType                                      ActionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::SetUIAction(EUIActionType ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetUIAction"));
		
		UCoreKeyListenerInputPromptWidget_SetUIAction_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162870
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetRepeatable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isRepeatable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 repetitionDelayCurve                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::SetRepeatable(bool isRepeatable, class UCurveFloat* repetitionDelayCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetRepeatable"));
		
		UCoreKeyListenerInputPromptWidget_SetRepeatable_Params params {};
		params.isRepeatable = isRepeatable;
		params.repetitionDelayCurve = repetitionDelayCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162600
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetLabel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        label                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::SetLabel(const class FText& label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetLabel"));
		
		UCoreKeyListenerInputPromptWidget_SetLabel_Params params {};
		params.label = label;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04162440
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetKeyOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        keyOverride                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::SetKeyOverride(const struct FKey& keyOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetKeyOverride"));
		
		UCoreKeyListenerInputPromptWidget_SetKeyOverride_Params params {};
		params.keyOverride = keyOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161DC0
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::SetEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetEnabled"));
		
		UCoreKeyListenerInputPromptWidget_SetEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161A00
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetAdditionalIcon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreKeyListenerInputPromptWidget::SetAdditionalIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetAdditionalIcon"));
		
		UCoreKeyListenerInputPromptWidget_SetAdditionalIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.OnEnabledChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::OnEnabledChanged(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.OnEnabledChanged"));
		
		UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04161580
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreKeyListenerInputPromptWidget::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.IsEnabled"));
		
		UCoreKeyListenerInputPromptWidget_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreKeyListenerInputPromptWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreKeyListenerInputPromptWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreKeyListenerInputPromptWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreLeaningArrowsWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreLeaningArrowsWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreLeaningArrowsWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreLightSensitivityWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreLightSensitivityWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreLightSensitivityWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreLockedOverlayWidget.SetIsLocked
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               useAnimation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLockedOverlayWidget::SetIsLocked(bool IsLocked, bool useAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreLockedOverlayWidget.SetIsLocked"));
		
		UCoreLockedOverlayWidget_SetIsLocked_Params params {};
		params.IsLocked = IsLocked;
		params.useAnimation = useAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreLockedOverlayWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreLockedOverlayWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreLockedOverlayWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMatchResultWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMatchResultWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreMatchResultWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167B60
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetSelectedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               selectedState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuLoadoutPartWidget::SetSelectedState(bool selectedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetSelectedState"));
		
		UCoreMenuLoadoutPartWidget_SetSelectedState_Params params {};
		params.selectedState = selectedState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167690
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLoadoutTooltipData                         TooltipData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuLoadoutPartWidget::SetLoadoutPartTooltipData(const struct FLoadoutTooltipData& TooltipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartTooltipData"));
		
		UCoreMenuLoadoutPartWidget_SetLoadoutPartTooltipData_Params params {};
		params.TooltipData = TooltipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167610
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuLoadoutPartWidget::SetLoadoutPartScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartScale"));
		
		UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167580
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuLoadoutPartViewData*                    Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuLoadoutPartWidget::SetLoadoutPartData(class UMenuLoadoutPartViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartData"));
		
		UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167560
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetEmptyWidget
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCoreMenuLoadoutPartWidget::SetEmptyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetEmptyWidget"));
		
		UCoreMenuLoadoutPartWidget_SetEmptyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetDisabledWidget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreMenuLoadoutPartWidget::SetDisabledWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetDisabledWidget"));
		
		UCoreMenuLoadoutPartWidget_SetDisabledWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundShadowLayers
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreMenuLoadoutPartWidget::SetBackgroundShadowLayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundShadowLayers"));
		
		UCoreMenuLoadoutPartWidget_SetBackgroundShadowLayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundLayers
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreMenuLoadoutPartWidget::SetBackgroundLayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundLayers"));
		
		UCoreMenuLoadoutPartWidget_SetBackgroundLayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04166FC0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetLockedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UCoreMenuLoadoutPartWidget::GetWidgetLockedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetLockedState"));
		
		UCoreMenuLoadoutPartWidget_GetWidgetLockedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04166F90
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetItemId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FName UCoreMenuLoadoutPartWidget::GetWidgetItemId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetItemId"));
		
		UCoreMenuLoadoutPartWidget_GetWidgetItemId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04166D20
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetTooltipData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FLoadoutTooltipData UCoreMenuLoadoutPartWidget::GetTooltipData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetTooltipData"));
		
		UCoreMenuLoadoutPartWidget_GetTooltipData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMenuLoadoutPartWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuLoadoutPartWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreMenuLoadoutPartWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuAddonWidget.UpdateWidgetScale
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreMenuAddonWidget::UpdateWidgetScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuAddonWidget.UpdateWidgetScale"));
		
		UCoreMenuAddonWidget_UpdateWidgetScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167820
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLoadoutTooltipData                         TooltipData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuAddonWidget::SetMenuAddonTooltipData(const struct FLoadoutTooltipData& TooltipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonTooltipData"));
		
		UCoreMenuAddonWidget_SetMenuAddonTooltipData_Params params {};
		params.TooltipData = TooltipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167790
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuAddonViewData*                          Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuAddonWidget::SetMenuAddonData(class UMenuAddonViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonData"));
		
		UCoreMenuAddonWidget_SetMenuAddonData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167440
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuAddonWidget.SetAddonDisabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsParentAvailable                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuAddonWidget::SetAddonDisabled(bool IsParentAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuAddonWidget.SetAddonDisabled"));
		
		UCoreMenuAddonWidget_SetAddonDisabled_Params params {};
		params.IsParentAvailable = IsParentAvailable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuAddonWidget.HidePlusIcon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreMenuAddonWidget::HidePlusIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuAddonWidget.HidePlusIcon"));
		
		UCoreMenuAddonWidget_HidePlusIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04166FE0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuAddonWidget.GetWidgetParentDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FText UCoreMenuAddonWidget::GetWidgetParentDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuAddonWidget.GetWidgetParentDisplayName"));
		
		UCoreMenuAddonWidget_GetWidgetParentDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMenuAddonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuAddonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreMenuAddonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167820
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLoadoutTooltipData                         TooltipData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuItemWidget::SetMenuItemTooltipData(const struct FLoadoutTooltipData& TooltipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemTooltipData"));
		
		UCoreMenuItemWidget_SetMenuItemTooltipData_Params params {};
		params.TooltipData = TooltipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167920
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuItemViewData*                           Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuItemWidget::SetMenuItemData(class UMenuItemViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemData"));
		
		UCoreMenuItemWidget_SetMenuItemData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMenuItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreMenuItemWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167820
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLoadoutTooltipData                         TooltipData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuOfferingWidget::SetMenuOfferingTooltipData(const struct FLoadoutTooltipData& TooltipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingTooltipData"));
		
		UCoreMenuOfferingWidget_SetMenuOfferingTooltipData_Params params {};
		params.TooltipData = TooltipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041679B0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuOfferingViewData*                       Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuOfferingWidget::SetMenuOfferingData(class UMenuOfferingViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingData"));
		
		UCoreMenuOfferingWidget_SetMenuOfferingData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMenuOfferingWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuOfferingWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreMenuOfferingWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167820
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLoadoutTooltipData                         TooltipData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuPerkWidget::SetMenuPerkTooltipData(const struct FLoadoutTooltipData& TooltipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkTooltipData"));
		
		UCoreMenuPerkWidget_SetMenuPerkTooltipData_Params params {};
		params.TooltipData = TooltipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkLevel
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuPerkWidget::SetMenuPerkLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkLevel"));
		
		UCoreMenuPerkWidget_SetMenuPerkLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167A40
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuPerkViewData*                           Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuPerkWidget::SetMenuPerkData(class UMenuPerkViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkData"));
		
		UCoreMenuPerkWidget_SetMenuPerkData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuPerkWidget.SetEmptyPerk
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCoreMenuPerkWidget::SetEmptyPerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuPerkWidget.SetEmptyPerk"));
		
		UCoreMenuPerkWidget_SetEmptyPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMenuPerkWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuPerkWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreMenuPerkWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167820
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLoadoutTooltipData                         TooltipData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuPowerWidget::SetMenuPowerTooltipData(const struct FLoadoutTooltipData& TooltipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerTooltipData"));
		
		UCoreMenuPowerWidget_SetMenuPowerTooltipData_Params params {};
		params.TooltipData = TooltipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167AD0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuPowerViewData*                          Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuPowerWidget::SetMenuPowerData(class UMenuPowerViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerData"));
		
		UCoreMenuPowerWidget_SetMenuPowerData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMenuPowerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuPowerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreMenuPowerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreOfferingInteractionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOfferingInteractionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreOfferingInteractionWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreOfferingWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOfferingWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreOfferingWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041670E0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnClickedTutorialButton
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           clickedTutorialButton                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingButtonHolderWidget::OnClickedTutorialButton(class UCoreButtonWidget* clickedTutorialButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnClickedTutorialButton"));
		
		UCoreOnboardingButtonHolderWidget_OnClickedTutorialButton_Params params {};
		params.clickedTutorialButton = clickedTutorialButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041670C0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnButtonSetDataAnimationCompleteDelegate
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UCoreOnboardingButtonHolderWidget::OnButtonSetDataAnimationCompleteDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnButtonSetDataAnimationCompleteDelegate"));
		
		UCoreOnboardingButtonHolderWidget_OnButtonSetDataAnimationCompleteDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04166CA0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.GetStepId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UCoreOnboardingButtonHolderWidget::GetStepId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.GetStepId"));
		
		UCoreOnboardingButtonHolderWidget_GetStepId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreOnboardingButtonHolderWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnboardingButtonHolderWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreOnboardingButtonHolderWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuTitle(const class FText& menuTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle"));
		
		UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Params params {};
		params.menuTitle = menuTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuSubtitle(const class FText& menuTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle"));
		
		UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Params params {};
		params.menuTitle = menuTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        menuSubTitle                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuDoubleTitle(const class FText& menuTitle, const class FText& menuSubTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle"));
		
		UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Params params {};
		params.menuTitle = menuTitle;
		params.menuSubTitle = menuSubTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreOnboardingMenuTitleWidget::ResetOnboardingMenuSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle"));
		
		UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreOnboardingMenuTitleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnboardingMenuTitleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167BF0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsInTutorial                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuWidget::SetTitleText(bool IsInTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText"));
		
		UCoreOnboardingMenuWidget_SetTitleText_Params params {};
		params.IsInTutorial = IsInTutorial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041674D0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButton
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isFTUE                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuWidget::SetBackButton(bool isFTUE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButton"));
		
		UCoreOnboardingMenuWidget_SetBackButton_Params params {};
		params.isFTUE = isFTUE;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167200
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelectedAgain
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuWidget::OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelectedAgain"));
		
		UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167170
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuWidget::OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelected"));
		
		UCoreOnboardingMenuWidget_OnMenuTabSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreOnboardingMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnboardingMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreOnboardingMenuWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167C80
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreOnboardingTutorialButtonWidget::SetVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual"));
		
		UCoreOnboardingTutorialButtonWidget_SetVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::SetUIEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled"));
		
		UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetIsKillSwitch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsKillSwitch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::SetIsKillSwitch(bool IsKillSwitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetIsKillSwitch"));
		
		UCoreOnboardingTutorialButtonWidget_SetIsKillSwitch_Params params {};
		params.IsKillSwitch = IsKillSwitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOnboardingTutorialButtonViewData           ViewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               isRefreshingWithAnimation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::SetData(const struct FOnboardingTutorialButtonViewData& ViewData, bool isRefreshingWithAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData"));
		
		UCoreOnboardingTutorialButtonWidget_SetData_Params params {};
		params.ViewData = ViewData;
		params.isRefreshingWithAnimation = isRefreshingWithAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041673B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::OnRewardReleased(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased"));
		
		UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167320
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::OnRewardPressed(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed"));
		
		UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167290
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::OnRewardClicked(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked"));
		
		UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04167070
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreOnboardingTutorialButtonWidget::IsInUnavailableStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep"));
		
		UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreOnboardingTutorialButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnboardingTutorialButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.TryBroadcastSelectedTutorial
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialPanelWidget::TryBroadcastSelectedTutorial(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.TryBroadcastSelectedTutorial"));
		
		UCoreOnboardingTutorialPanelWidget_TryBroadcastSelectedTutorial_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      completedStepId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialPanelWidget::SetTutorialSeparators(const class FString& completedStepId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators"));
		
		UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Params params {};
		params.completedStepId = completedStepId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Description                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               isWarning                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialPanelWidget::SetTutorialDescription(const class FText& Description, bool isWarning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription"));
		
		UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Params params {};
		params.Description = Description;
		params.isWarning = isWarning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041670A0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreOnboardingTutorialPanelWidget::NextPendingButtonUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated"));
		
		UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04166C80
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreOnboardingTutorialPanelWidget::CheckNextPendingButtonUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate"));
		
		UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreOnboardingTutorialPanelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnboardingTutorialPanelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.UpdateColors
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                progressBarColor                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                BackgroundColor                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnHoverBorderWidget::UpdateColors(const struct FLinearColor& progressBarColor, const struct FLinearColor& BackgroundColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnHoverBorderWidget.UpdateColors"));
		
		UCoreOnHoverBorderWidget_UpdateColors_Params params {};
		params.progressBarColor = progressBarColor;
		params.BackgroundColor = BackgroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.UnbindFromButton
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreOnHoverBorderWidget::UnbindFromButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnHoverBorderWidget.UnbindFromButton"));
		
		UCoreOnHoverBorderWidget_UnbindFromButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayPressedAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playForward                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnHoverBorderWidget::PlayPressedAnimation(bool playForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayPressedAnimation"));
		
		UCoreOnHoverBorderWidget_PlayPressedAnimation_Params params {};
		params.playForward = playForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayHoveredAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playForward                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnHoverBorderWidget::PlayHoveredAnimation(bool playForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayHoveredAnimation"));
		
		UCoreOnHoverBorderWidget_PlayHoveredAnimation_Params params {};
		params.playForward = playForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.BindToButton
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonToBindOn                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnHoverBorderWidget::BindToButton(class UCoreButtonWidget* buttonToBindOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreOnHoverBorderWidget.BindToButton"));
		
		UCoreOnHoverBorderWidget_BindToButton_Params params {};
		params.buttonToBindOn = buttonToBindOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreOnHoverBorderWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnHoverBorderWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreOnHoverBorderWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416CB50
	 * 		Name   -> Function DBDUIViewsCore.CorePaginationContainerWidget.UpdateSelectedWidget
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            currentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numberOfPages                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePaginationContainerWidget::UpdateSelectedWidget(int32_t currentIndex, int32_t numberOfPages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePaginationContainerWidget.UpdateSelectedWidget"));
		
		UCorePaginationContainerWidget_UpdateSelectedWidget_Params params {};
		params.currentIndex = currentIndex;
		params.numberOfPages = numberOfPages;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CorePaginationContainerWidget.OnSelectedPageDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            selectedPage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePaginationContainerWidget::OnSelectedPageDelegate__DelegateSignature(int32_t selectedPage, bool isUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CorePaginationContainerWidget.OnSelectedPageDelegate__DelegateSignature"));
		
		UCorePaginationContainerWidget_OnSelectedPageDelegate__DelegateSignature_Params params {};
		params.selectedPage = selectedPage;
		params.isUpdate = isUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C1B0
	 * 		Name   -> Function DBDUIViewsCore.CorePaginationContainerWidget.OnPaginationSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePaginationContainerWidget::OnPaginationSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePaginationContainerWidget.OnPaginationSelected"));
		
		UCorePaginationContainerWidget_OnPaginationSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BA80
	 * 		Name   -> Function DBDUIViewsCore.CorePaginationContainerWidget.GetCurrentPage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UCorePaginationContainerWidget::GetCurrentPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePaginationContainerWidget.GetCurrentPage"));
		
		UCorePaginationContainerWidget_GetCurrentPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePaginationContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePaginationContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePaginationContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePerksContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePerksContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePerksContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePerkWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePerkWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePerkWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePingStatusWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePingStatusWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePingStatusWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePlayerLevelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerLevelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePlayerLevelWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C690
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerNameWidget.SetPlayerName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        playerName                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerNameWidget::SetPlayerName(const class FText& playerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerNameWidget.SetPlayerName"));
		
		UCorePlayerNameWidget_SetPlayerName_Params params {};
		params.playerName = playerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePlayerNameWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerNameWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePlayerNameWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePlayerProfileWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerProfileWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePlayerProfileWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePlayerRankWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerRankWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePlayerRankWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePlayerStatusesContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerStatusesContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePlayerStatusesContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerStatusKillerEffectWidget::SetKillerData(const struct FPlayerStatusViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData"));
		
		UCorePlayerStatusKillerEffectWidget_SetKillerData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C180
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual
	 * 		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UCorePlayerStatusKillerEffectWidget::ClearVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual"));
		
		UCorePlayerStatusKillerEffectWidget_ClearVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePlayerStatusKillerEffectWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerStatusKillerEffectWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePlayerStatusKillerEffectWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UCorePlayerStatusKillerEffectK07Widget::AfflictionHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit"));
		
		UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePlayerStatusKillerEffectK07Widget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerStatusKillerEffectK07Widget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416CAC0
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ESleepingUIState                                   newSleepState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::ShouldPlaySleepAnimation(ESleepingUIState newSleepState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation"));
		
		UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params params {};
		params.newSleepState = newSleepState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C040
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              newTimerProgress                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasTimerProgressChanged(float newTimerProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged"));
		
		UCorePlayerStatusWidget_HasTimerProgressChanged_Params params {};
		params.newTimerProgress = newTimerProgress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BF70
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged"));
		
		UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params params {};
		params.newViewData = newViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BEE0
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EPlayerStatus                                      newPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasPlayerStateChanged(EPlayerStatus newPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged"));
		
		UCorePlayerStatusWidget_HasPlayerStateChanged_Params params {};
		params.newPlayerState = newPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BE50
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EObsessionUIState                                  newObsessionState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasObsessionStateChanged(EObsessionUIState newObsessionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged"));
		
		UCorePlayerStatusWidget_HasObsessionStateChanged_Params params {};
		params.newObsessionState = newObsessionState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BD80
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged"));
		
		UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params params {};
		params.newViewData = newViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BB40
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EPlayerStateChangeType UCorePlayerStatusWidget::GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType"));
		
		UCorePlayerStatusWidget_GetPlayerStateChangeType_Params params {};
		params.newViewData = newViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BB00
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCorePlayerStatusKillerEffectWidget* UCorePlayerStatusWidget::GetKillerStatusEffectWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget"));
		
		UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BAC0
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusDataMappingDB
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDataTable* UCorePlayerStatusWidget::GetKillerStatusDataMappingDB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusDataMappingDB"));
		
		UCorePlayerStatusWidget_GetKillerStatusDataMappingDB_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416B770
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.CacheViewData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       Data                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	struct FPlayerStatusViewData UCorePlayerStatusWidget::CacheViewData(const struct FPlayerStatusViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePlayerStatusWidget.CacheViewData"));
		
		UCorePlayerStatusWidget_CacheViewData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePlayerStatusWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerStatusWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePlayerStatusWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePowerBundleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePowerBundleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePowerBundleWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePowerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePowerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePowerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C980
	 * 		Name   -> Function DBDUIViewsCore.CorePresetWidgetContainer.SetSelectedPreset
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePresetWidgetContainer::SetSelectedPreset(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePresetWidgetContainer.SetSelectedPreset"));
		
		UCorePresetWidgetContainer_SetSelectedPreset_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C760
	 * 		Name   -> Function DBDUIViewsCore.CorePresetWidgetContainer.SetPreset
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    presetData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            selectedPreset                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePresetWidgetContainer::SetPreset(TArray<int32_t> presetData, int32_t selectedPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CorePresetWidgetContainer.SetPreset"));
		
		UCorePresetWidgetContainer_SetPreset_Params params {};
		params.presetData = presetData;
		params.selectedPreset = selectedPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CorePresetWidgetContainer.OnSelectedPresetDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            selectedPreset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePresetWidgetContainer::OnSelectedPresetDelegate__DelegateSignature(int32_t selectedPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.CorePresetWidgetContainer.OnSelectedPresetDelegate__DelegateSignature"));
		
		UCorePresetWidgetContainer_OnSelectedPresetDelegate__DelegateSignature_Params params {};
		params.selectedPreset = selectedPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePresetWidgetContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePresetWidgetContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CorePresetWidgetContainer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C5C0
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PlayAnimation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRewardWrapperWidget::SetIsLocked(bool IsLocked, bool PlayAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsLocked"));
		
		UCoreRewardWrapperWidget_SetIsLocked_Params params {};
		params.IsLocked = IsLocked;
		params.PlayAnimation = PlayAnimation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C460
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsClickable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isClickable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRewardWrapperWidget::SetIsClickable(bool isClickable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsClickable"));
		
		UCoreRewardWrapperWidget_SetIsClickable_Params params {};
		params.isClickable = isClickable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C240
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRewardWrapperViewData                      ViewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreRewardWrapperWidget::SetData(const struct FRewardWrapperViewData& ViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData"));
		
		UCoreRewardWrapperWidget_SetData_Params params {};
		params.ViewData = ViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BC10
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCoreRewardWidget* UCoreRewardWrapperWidget::GetRewardWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget"));
		
		UCoreRewardWrapperWidget_GetRewardWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416B980
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreRewardWrapperWidget::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData"));
		
		UCoreRewardWrapperWidget_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreRewardWrapperWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRewardWrapperWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreRewardWrapperWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BC30
	 * 		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	TMap<class FString, class UCoreScreenIndicatorWidget*> UCoreScreenIndicatorsContainerWidget::GetScreenIndicatorsMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap"));
		
		UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416B9A0
	 * 		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UCoreScreenIndicatorWidget*                  value                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UCoreScreenIndicatorsContainerWidget::FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey"));
		
		UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreScreenIndicatorsContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreScreenIndicatorsContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScreenIndicatorViewData                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreScreenIndicatorWidget::SetData(const struct FScreenIndicatorViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData"));
		
		UCoreScreenIndicatorWidget_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreScreenIndicatorWidget::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData"));
		
		UCoreScreenIndicatorWidget_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreScreenIndicatorWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreScreenIndicatorWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreScreenIndicatorWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreSkillCheckWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSkillCheckWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreSkillCheckWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BF80
	 * 		Name   -> Function DBDUIViewsCore.CoreSpectateBarWidget.OnRightArrowTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreSpectateBarWidget::OnRightArrowTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreSpectateBarWidget.OnRightArrowTriggered"));
		
		UCoreSpectateBarWidget_OnRightArrowTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BC70
	 * 		Name   -> Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeftArrowTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreSpectateBarWidget::OnLeftArrowTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeftArrowTriggered"));
		
		UCoreSpectateBarWidget_OnLeftArrowTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0414BC90
	 * 		Name   -> Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeaveTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreSpectateBarWidget::OnLeaveTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeaveTriggered"));
		
		UCoreSpectateBarWidget_OnLeaveTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreSpectateBarWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSpectateBarWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreSpectateBarWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C120
	 * 		Name   -> Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStartSequenceWidget::OnHideStartSequenceComplete(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete"));
		
		UCoreStartSequenceWidget_OnHideStartSequenceComplete_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreStartSequenceWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStartSequenceWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreStartSequenceWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreStatusEffectIcon::UpdateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget"));
		
		UCoreStatusEffectIcon_UpdateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStatusEffectIcon::UpdatePercentageFill(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill"));
		
		UCoreStatusEffectIcon_UpdatePercentageFill_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416CA10
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FStatusEffectViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreStatusEffectIcon::SetStatusEffectData(const struct FStatusEffectViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData"));
		
		UCoreStatusEffectIcon_SetStatusEffectData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416C3D0
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            inactiveTicks                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStatusEffectIcon::SetInactiveTicks(int32_t inactiveTicks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks"));
		
		UCoreStatusEffectIcon_SetInactiveTicks_Params params {};
		params.inactiveTicks = inactiveTicks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.ResetWidget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreStatusEffectIcon::ResetWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStatusEffectIcon.ResetWidget"));
		
		UCoreStatusEffectIcon_ResetWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BD50
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FStatusEffectViewData UCoreStatusEffectIcon::GetStatusEffectData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData"));
		
		UCoreStatusEffectIcon_GetStatusEffectData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0416BAA0
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCoreStatusEffectIcon::GetInactiveTicks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks"));
		
		UCoreStatusEffectIcon_GetInactiveTicks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreStatusEffectIcon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStatusEffectIcon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreStatusEffectIcon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170790
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<class FName, class UCoreStatusEffectIcon*> UCoreStatusEffectWidget::GetStatusEffectMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap"));
		
		UCoreStatusEffectWidget_GetStatusEffectMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreStatusEffectWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStatusEffectWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreStatusEffectWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisualStatus
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EArchivesStoryLevelStatus                          newStatus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               newlyUnlocked                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStoryLevelButtonWidget::UpdateVisualStatus(EArchivesStoryLevelStatus newStatus, bool newlyUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisualStatus"));
		
		UCoreStoryLevelButtonWidget_UpdateVisualStatus_Params params {};
		params.newStatus = newStatus;
		params.newlyUnlocked = newlyUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisual
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UArchiveStoryLevelViewData*                  ViewData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               newlyUnlocked                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStoryLevelButtonWidget::UpdateVisual(class UArchiveStoryLevelViewData* ViewData, bool newlyUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisual"));
		
		UCoreStoryLevelButtonWidget_UpdateVisual_Params params {};
		params.ViewData = ViewData;
		params.newlyUnlocked = newlyUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171E90
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateStatusData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EArchivesStoryLevelStatus                          newStatus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isSelectorReadOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStoryLevelButtonWidget::UpdateStatusData(EArchivesStoryLevelStatus newStatus, bool isSelectorReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateStatusData"));
		
		UCoreStoryLevelButtonWidget_UpdateStatusData_Params params {};
		params.newStatus = newStatus;
		params.isSelectorReadOnly = isSelectorReadOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041710F0
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelButtonWidget.SetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UArchiveStoryLevelViewData*                  ViewData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isSelectorReadOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStoryLevelButtonWidget::SetData(class UArchiveStoryLevelViewData* ViewData, bool isSelectorReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelButtonWidget.SetData"));
		
		UCoreStoryLevelButtonWidget_SetData_Params params {};
		params.ViewData = ViewData;
		params.isSelectorReadOnly = isSelectorReadOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170770
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelButtonWidget.GetLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCoreStoryLevelButtonWidget::GetLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelButtonWidget.GetLevel"));
		
		UCoreStoryLevelButtonWidget_GetLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreStoryLevelButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStoryLevelButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreStoryLevelButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateVisual
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EArchivesStoryLevelStatus                          globalStatus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PlayAnimation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStoryLevelsSelectorWidget::UpdateVisual(EArchivesStoryLevelStatus globalStatus, bool PlayAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateVisual"));
		
		UCoreStoryLevelsSelectorWidget_UpdateVisual_Params params {};
		params.globalStatus = globalStatus;
		params.PlayAnimation = PlayAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171DC0
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateLevelStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EArchivesStoryLevelStatus                          Status                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStoryLevelsSelectorWidget::UpdateLevelStatus(int32_t Level, EArchivesStoryLevelStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateLevelStatus"));
		
		UCoreStoryLevelsSelectorWidget_UpdateLevelStatus_Params params {};
		params.Level = Level;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171A20
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetUpInteractionMode
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreStoryLevelsSelectorWidget::SetUpInteractionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetUpInteractionMode"));
		
		UCoreStoryLevelsSelectorWidget_SetUpInteractionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171270
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStoryLevelsSelectorWidget::SetEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetEnabled"));
		
		UCoreStoryLevelsSelectorWidget_SetEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041711C0
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UArchiveStoryLevelViewData*>          levelbuttonsData                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreStoryLevelsSelectorWidget::SetData(TArray<class UArchiveStoryLevelViewData*> levelbuttonsData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetData"));
		
		UCoreStoryLevelsSelectorWidget_SetData_Params params {};
		params.levelbuttonsData = levelbuttonsData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170EF0
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.OnStoryLevelUnlockedAnimation
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreStoryLevelsSelectorWidget::OnStoryLevelUnlockedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.OnStoryLevelUnlockedAnimation"));
		
		UCoreStoryLevelsSelectorWidget_OnStoryLevelUnlockedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041708F0
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.GetStoryLevelButton
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreStoryLevelButtonWidget* UCoreStoryLevelsSelectorWidget::GetStoryLevelButton(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.GetStoryLevelButton"));
		
		UCoreStoryLevelsSelectorWidget_GetStoryLevelButton_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041704C0
	 * 		Name   -> Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.AdaptButtonsPoolToData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            dataNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStoryLevelsSelectorWidget::AdaptButtonsPoolToData(int32_t dataNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.AdaptButtonsPoolToData"));
		
		UCoreStoryLevelsSelectorWidget_AdaptButtonsPoolToData_Params params {};
		params.dataNumber = dataNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreStoryLevelsSelectorWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStoryLevelsSelectorWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreStoryLevelsSelectorWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreSubtitlesWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSubtitlesWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreSubtitlesWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTemplateWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTemplateWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreTemplateWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTestBuildFlagWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTestBuildFlagWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreTestBuildFlagWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171950
	 * 		Name   -> Function DBDUIViewsCore.CoreToggleButtonWidget.SetToDefaultState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreToggleButtonWidget::SetToDefaultState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreToggleButtonWidget.SetToDefaultState"));
		
		UCoreToggleButtonWidget_SetToDefaultState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreToggleButtonWidget.SetActiveVisualState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreToggleButtonWidget::SetActiveVisualState(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreToggleButtonWidget.SetActiveVisualState"));
		
		UCoreToggleButtonWidget_SetActiveVisualState_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170EA0
	 * 		Name   -> Function DBDUIViewsCore.CoreToggleButtonWidget.IsToggled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreToggleButtonWidget::IsToggled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreToggleButtonWidget.IsToggled"));
		
		UCoreToggleButtonWidget_IsToggled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreToggleButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreToggleButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreToggleButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTutorialMysteryNoteWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTutorialMysteryNoteWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               removeAfterCompletion                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTutorialObjectiveItem::SetObjectiveCompleted(bool removeAfterCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted"));
		
		UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params params {};
		params.removeAfterCompletion = removeAfterCompletion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTutorialObjectivesViewData                 interactionsViewData                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreTutorialObjectiveItem::InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective"));
		
		UCoreTutorialObjectiveItem_InitObjective_Params params {};
		params.interactionsViewData = interactionsViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTutorialObjectiveItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTutorialObjectiveItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreTutorialObjectiveItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170FA0
	 * 		Name   -> Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreTutorialObjectiveItem*                  Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTutorialObjectivesContainer::OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted"));
		
		UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTutorialObjectivesContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTutorialObjectivesContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreTutorialObjectivesContainer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTutorialPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTutorialPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreTutorialPopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171AD0
	 * 		Name   -> Function DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.ShowMenuPerkTooltip
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           hoveredSlotWidget                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreUnlockPersonalPerksPopupWidget::ShowMenuPerkTooltip(class UCoreButtonWidget* hoveredSlotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.ShowMenuPerkTooltip"));
		
		UCoreUnlockPersonalPerksPopupWidget_ShowMenuPerkTooltip_Params params {};
		params.hoveredSlotWidget = hoveredSlotWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170C10
	 * 		Name   -> Function DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.HideMenuPerkTooltip
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           unhoveredSlotWidget                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreUnlockPersonalPerksPopupWidget::HideMenuPerkTooltip(class UCoreButtonWidget* unhoveredSlotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.HideMenuPerkTooltip"));
		
		UCoreUnlockPersonalPerksPopupWidget_HideMenuPerkTooltip_Params params {};
		params.unhoveredSlotWidget = unhoveredSlotWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreUnlockPersonalPerksPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreUnlockPersonalPerksPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171CB0
	 * 		Name   -> Function DBDUIViewsCore.CoreWalletWidget.UpdateCurrency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECurrencyType                                      Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            newBalance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            previousBalance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreWalletWidget::UpdateCurrency(ECurrencyType Type, int32_t newBalance, int32_t previousBalance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreWalletWidget.UpdateCurrency"));
		
		UCoreWalletWidget_UpdateCurrency_Params params {};
		params.Type = Type;
		params.newBalance = newBalance;
		params.previousBalance = previousBalance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171030
	 * 		Name   -> Function DBDUIViewsCore.CoreWalletWidget.PlayNotEnoughCurrency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECurrencyType                                      Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreWalletWidget::PlayNotEnoughCurrency(ECurrencyType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreWalletWidget.PlayNotEnoughCurrency"));
		
		UCoreWalletWidget_PlayNotEnoughCurrency_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170DC0
	 * 		Name   -> Function DBDUIViewsCore.CoreWalletWidget.InitWallet
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FCurrencyLabelViewData>              walletData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreWalletWidget::InitWallet(TArray<struct FCurrencyLabelViewData> walletData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreWalletWidget.InitWallet"));
		
		UCoreWalletWidget_InitWallet_Params params {};
		params.walletData = walletData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170660
	 * 		Name   -> Function DBDUIViewsCore.CoreWalletWidget.FullUpdateCurrency
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCurrencyLabelViewData                      ViewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreWalletWidget::FullUpdateCurrency(const struct FCurrencyLabelViewData& ViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreWalletWidget.FullUpdateCurrency"));
		
		UCoreWalletWidget_FullUpdateCurrency_Params params {};
		params.ViewData = ViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreWalletWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreWalletWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreWalletWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171F60
	 * 		Name   -> Function DBDUIViewsCore.CoreWatermarkWidget.UpdateWatermarkText
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UCoreWatermarkWidget::UpdateWatermarkText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CoreWatermarkWidget.UpdateWatermarkText"));
		
		UCoreWatermarkWidget_UpdateWatermarkText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreWatermarkWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreWatermarkWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CoreWatermarkWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171970
	 * 		Name   -> Function DBDUIViewsCore.CurrencyProgressionTooltipWidget.SetTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCurrencyProgressionTooltipViewData         currencyViewData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCurrencyProgressionTooltipWidget::SetTooltipData(const struct FCurrencyProgressionTooltipViewData& currencyViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CurrencyProgressionTooltipWidget.SetTooltipData"));
		
		UCurrencyProgressionTooltipWidget_SetTooltipData_Params params {};
		params.currencyViewData = currencyViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCurrencyProgressionTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurrencyProgressionTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CurrencyProgressionTooltipWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomizationTooltipViewData               customizationViewData                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomizationTooltipWidget::SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData"));
		
		UCustomizationTooltipWidget_SetTooltipData_Params params {};
		params.customizationViewData = customizationViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04171680
	 * 		Name   -> Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsOwned                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsLocked                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomizationTooltipWidget::SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText"));
		
		UCustomizationTooltipWidget_SetStatusText_Params params {};
		params.IsEquipped = IsEquipped;
		params.IsOwned = IsOwned;
		params.IsLocked = IsLocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170550
	 * 		Name   -> Function DBDUIViewsCore.CustomizationTooltipWidget.AppendToDescriptionText
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FText                                        appendedText                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomizationTooltipWidget::AppendToDescriptionText(const class FText& appendedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.CustomizationTooltipWidget.AppendToDescriptionText"));
		
		UCustomizationTooltipWidget_AppendToDescriptionText_Params params {};
		params.appendedText = appendedText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.CustomizationTooltipWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04177DC0
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsContainerWidget.StartAnim
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDailyRitualsContainerWidget::StartAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsContainerWidget.StartAnim"));
		
		UDailyRitualsContainerWidget_StartAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176710
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsContainerWidget.SetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FDailyRitualViewData>                dailyRitualsData                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               isAfterTrial                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsContainerWidget::SetData(TArray<struct FDailyRitualViewData> dailyRitualsData, bool isAfterTrial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsContainerWidget.SetData"));
		
		UDailyRitualsContainerWidget_SetData_Params params {};
		params.dailyRitualsData = dailyRitualsData;
		params.isAfterTrial = isAfterTrial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175F90
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsContainerWidget.OnRecentlyAssignedDailyRitualFadeInComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UDailyRitualTileWidget*                      dailyRitualTile                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsContainerWidget::OnRecentlyAssignedDailyRitualFadeInComplete(class UDailyRitualTileWidget* dailyRitualTile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsContainerWidget.OnRecentlyAssignedDailyRitualFadeInComplete"));
		
		UDailyRitualsContainerWidget_OnRecentlyAssignedDailyRitualFadeInComplete_Params params {};
		params.dailyRitualTile = dailyRitualTile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175D50
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDelayUntilFadeInSequenceComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            delayUntilFadeInSequenceTween                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsContainerWidget::OnDelayUntilFadeInSequenceComplete(class UUITweenInstance* delayUntilFadeInSequenceTween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDelayUntilFadeInSequenceComplete"));
		
		UDailyRitualsContainerWidget_OnDelayUntilFadeInSequenceComplete_Params params {};
		params.delayUntilFadeInSequenceTween = delayUntilFadeInSequenceTween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175CC0
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualTileFadeOutComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UDailyRitualTileWidget*                      dailyRitualTile                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsContainerWidget::OnDailyRitualTileFadeOutComplete(class UDailyRitualTileWidget* dailyRitualTile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualTileFadeOutComplete"));
		
		UDailyRitualsContainerWidget_OnDailyRitualTileFadeOutComplete_Params params {};
		params.dailyRitualTile = dailyRitualTile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175B80
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualRemoveButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      dailyRitualKey                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsContainerWidget::OnDailyRitualRemoveButtonClicked(const class FString& dailyRitualKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualRemoveButtonClicked"));
		
		UDailyRitualsContainerWidget_OnDailyRitualRemoveButtonClicked_Params params {};
		params.dailyRitualKey = dailyRitualKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175A40
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualClaimButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      dailyRitualKey                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsContainerWidget::OnDailyRitualClaimButtonClicked(const class FString& dailyRitualKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualClaimButtonClicked"));
		
		UDailyRitualsContainerWidget_OnDailyRitualClaimButtonClicked_Params params {};
		params.dailyRitualKey = dailyRitualKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDailyRitualsContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDailyRitualsContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DailyRitualsContainerWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsPopupWidget.SetVisuals
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isAfterTrial                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsPopupWidget::SetVisuals(bool isAfterTrial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsPopupWidget.SetVisuals"));
		
		UDailyRitualsPopupWidget_SetVisuals_Params params {};
		params.isAfterTrial = isAfterTrial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175C20
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualRemoveButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      dailyRitualKey                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsPopupWidget::OnDailyRitualRemoveButtonClicked(const class FString& dailyRitualKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualRemoveButtonClicked"));
		
		UDailyRitualsPopupWidget_OnDailyRitualRemoveButtonClicked_Params params {};
		params.dailyRitualKey = dailyRitualKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175AE0
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      dailyRitualKey                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsPopupWidget::OnDailyRitualClaimButtonClicked(const class FString& dailyRitualKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimButtonClicked"));
		
		UDailyRitualsPopupWidget_OnDailyRitualClaimButtonClicked_Params params {};
		params.dailyRitualKey = dailyRitualKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175A20
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimAllButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UDailyRitualsPopupWidget::OnDailyRitualClaimAllButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimAllButtonClicked"));
		
		UDailyRitualsPopupWidget_OnDailyRitualClaimAllButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDailyRitualsPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDailyRitualsPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DailyRitualsPopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualTileWidget.PlayFadeOutAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDailyRitualTileWidget::PlayFadeOutAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualTileWidget.PlayFadeOutAnimation"));
		
		UDailyRitualTileWidget_PlayFadeOutAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualTileWidget.PlayFadeInAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDailyRitualTileWidget::PlayFadeInAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualTileWidget.PlayFadeInAnimation"));
		
		UDailyRitualTileWidget_PlayFadeInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176020
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualTileWidget.OnRemoveButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualTileWidget::OnRemoveButtonClicked(class UCoreButtonWidget* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualTileWidget.OnRemoveButtonClicked"));
		
		UDailyRitualTileWidget_OnRemoveButtonClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175910
	 * 		Name   -> Function DBDUIViewsCore.DailyRitualTileWidget.OnClaimButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualTileWidget::OnClaimButtonClicked(class UCoreButtonWidget* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DailyRitualTileWidget.OnClaimButtonClicked"));
		
		UDailyRitualTileWidget_OnClaimButtonClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDailyRitualTileWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDailyRitualTileWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DailyRitualTileWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDButton"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041765E0
	 * 		Name   -> Function DBDUIViewsCore.DBDComboBoxString.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              OptionsList                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      DefaultOption                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDComboBoxString::SetData(TArray<class FString> OptionsList, const class FString& DefaultOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDComboBoxString.SetData"));
		
		UDBDComboBoxString_SetData_Params params {};
		params.OptionsList = OptionsList;
		params.DefaultOption = DefaultOption;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDComboBoxString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDComboBoxString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDComboBoxString"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.DBDDropDownListButton.ToggleDropDownArrow
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               showArrow                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDDropDownListButton::ToggleDropDownArrow(bool showArrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDDropDownListButton.ToggleDropDownArrow"));
		
		UDBDDropDownListButton_ToggleDropDownArrow_Params params {};
		params.showArrow = showArrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDDropDownListButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDDropDownListButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDDropDownListButton"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C160
	 * 		Name   -> Function DBDUIViewsCore.DBDDropDownListWidget.UpdateDropDown
	 * 		Flags  -> (Native, Public)
	 */
	void UDBDDropDownListWidget::UpdateDropDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDDropDownListWidget.UpdateDropDown"));
		
		UDBDDropDownListWidget_UpdateDropDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04177DE0
	 * 		Name   -> Function DBDUIViewsCore.DBDDropDownListWidget.UnbindFromTrigger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDBDDropDownListWidget::UnbindFromTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDDropDownListWidget.UnbindFromTrigger"));
		
		UDBDDropDownListWidget_UnbindFromTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176260
	 * 		Name   -> Function DBDUIViewsCore.DBDDropDownListWidget.OnUserClicked
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDBDDropDownListWidget::OnUserClicked(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDDropDownListWidget.OnUserClicked"));
		
		UDBDDropDownListWidget_OnUserClicked_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041761D0
	 * 		Name   -> Function DBDUIViewsCore.DBDDropDownListWidget.OnTriggerClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDDropDownListWidget::OnTriggerClicked(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDDropDownListWidget.OnTriggerClicked"));
		
		UDBDDropDownListWidget_OnTriggerClicked_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsCore.DBDDropDownListWidget.OnSelectedOptionDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FTabWidgetData                              buttonData                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UDBDDropDownListWidget::OnSelectedOptionDelegate__DelegateSignature(const struct FTabWidgetData& buttonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsCore.DBDDropDownListWidget.OnSelectedOptionDelegate__DelegateSignature"));
		
		UDBDDropDownListWidget_OnSelectedOptionDelegate__DelegateSignature_Params params {};
		params.buttonData = buttonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175F00
	 * 		Name   -> Function DBDUIViewsCore.DBDDropDownListWidget.OnOptionSelected
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDDropDownListWidget::OnOptionSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDDropDownListWidget.OnOptionSelected"));
		
		UDBDDropDownListWidget_OnOptionSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041758B0
	 * 		Name   -> Function DBDUIViewsCore.DBDDropDownListWidget.HideDropDownList
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UDBDDropDownListWidget::HideDropDownList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDDropDownListWidget.HideDropDownList"));
		
		UDBDDropDownListWidget_HideDropDownList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175760
	 * 		Name   -> Function DBDUIViewsCore.DBDDropDownListWidget.BindToTrigger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           triggerButton                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDDropDownListWidget::BindToTrigger(class UCoreButtonWidget* triggerButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDDropDownListWidget.BindToTrigger"));
		
		UDBDDropDownListWidget_BindToTrigger_Params params {};
		params.triggerButton = triggerButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDDropDownListWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDDropDownListWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDDropDownListWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176510
	 * 		Name   -> Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               matchSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDImage::SetBrushFromTextureWithDefault(class UTexture2D* Texture, bool matchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault"));
		
		UDBDImage_SetBrushFromTextureWithDefault_Params params {};
		params.Texture = Texture;
		params.matchSize = matchSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041763B0
	 * 		Name   -> Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               matchSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDImage::SetBrushFromSoftTextureWithDefault(bool matchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault"));
		
		UDBDImage_SetBrushFromSoftTextureWithDefault_Params params {};
		params.matchSize = matchSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDImage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041769E0
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isUpperCase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDRichTextBlock::SetIsUpperCase(bool isUpperCase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase"));
		
		UDBDRichTextBlock_SetIsUpperCase_Params params {};
		params.isUpperCase = isUpperCase;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176910
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDBDRichTextBlock::SetHTMLText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText"));
		
		UDBDRichTextBlock_SetHTMLText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.PreviewUndocked
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UDBDRichTextBlock::PreviewUndocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDRichTextBlock.PreviewUndocked"));
		
		UDBDRichTextBlock_PreviewUndocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.PreviewLargeText
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UDBDRichTextBlock::PreviewLargeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDRichTextBlock.PreviewLargeText"));
		
		UDBDRichTextBlock_PreviewLargeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041760B0
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               isDocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDRichTextBlock::OnSwitchDockStateChanged(bool isDocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged"));
		
		UDBDRichTextBlock_OnSwitchDockStateChanged_Params params {};
		params.isDocked = isDocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175DE0
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.OnLargeTextSettingsChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               isLargeText                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDRichTextBlock::OnLargeTextSettingsChanged(bool isLargeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDRichTextBlock.OnLargeTextSettingsChanged"));
		
		UDBDRichTextBlock_OnLargeTextSettingsChanged_Params params {};
		params.isLargeText = isLargeText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041757F0
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDBDRichTextBlock::GetIsUpperCase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase"));
		
		UDBDRichTextBlock_GetIsUpperCase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDRichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDRichTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDRichTextBlock"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04177E20
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.UpdateSmoothMask
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDScrollBox::UpdateSmoothMask(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDScrollBox.UpdateSmoothMask"));
		
		UDBDScrollBox_UpdateSmoothMask_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04177E00
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UDBDScrollBox::UpdateDisplayPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt"));
		
		UDBDScrollBox_UpdateDisplayPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176880
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.SetDisplayPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreKeyListenerInputPromptWidget*           DisplayPrompt                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDScrollBox::SetDisplayPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDScrollBox.SetDisplayPrompt"));
		
		UDBDScrollBox_SetDisplayPrompt_Params params {};
		params.DisplayPrompt = DisplayPrompt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041759A0
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EControlMode                                       controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDScrollBox::OnControlModeChanged(EControlMode controlMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged"));
		
		UDBDScrollBox_OnControlModeChanged_Params params {};
		params.controlMode = controlMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041758F0
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.IsMouseOver
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UDBDScrollBox::IsMouseOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDScrollBox.IsMouseOver"));
		
		UDBDScrollBox_IsMouseOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175830
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              analogValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDScrollBox::HandleControllerInput(float analogValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput"));
		
		UDBDScrollBox_HandleControllerInput_Params params {};
		params.analogValue = analogValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDScrollBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDScrollBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDScrollBox"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176A70
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isUpperCase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTextBlock::SetIsUpperCase(bool isUpperCase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase"));
		
		UDBDTextBlock_SetIsUpperCase_Params params {};
		params.isUpperCase = isUpperCase;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.PreviewUndocked
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UDBDTextBlock::PreviewUndocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTextBlock.PreviewUndocked"));
		
		UDBDTextBlock_PreviewUndocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.PreviewLargeText
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UDBDTextBlock::PreviewLargeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTextBlock.PreviewLargeText"));
		
		UDBDTextBlock_PreviewLargeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176140
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               isDocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTextBlock::OnSwitchDockStateChanged(bool isDocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged"));
		
		UDBDTextBlock_OnSwitchDockStateChanged_Params params {};
		params.isDocked = isDocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175E70
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               isLargeText                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTextBlock::OnLargeTextSettingsChanged(bool isLargeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged"));
		
		UDBDTextBlock_OnLargeTextSettingsChanged_Params params {};
		params.isLargeText = isLargeText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04175810
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDBDTextBlock::GetIsUpperCase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase"));
		
		UDBDTextBlock_GetIsUpperCase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDTextBlock"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTooltipRoot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTooltipRoot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.TooltipRoot"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04177AF0
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowLoadoutTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLoadoutTooltipData                         tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETooltipHorizontalAlignment                        tooltipHorizontalAlignment                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETooltipVerticalAlignment                          tooltipVerticalAlignment                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowLoadoutTooltip(const struct FLoadoutTooltipData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.ShowLoadoutTooltip"));
		
		UDBDTooltipManager_ShowLoadoutTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		params.tooltipHorizontalAlignment = tooltipHorizontalAlignment;
		params.tooltipVerticalAlignment = tooltipVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04177900
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowLabelTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETooltipHorizontalAlignment                        tooltipHorizontalAlignment                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETooltipVerticalAlignment                          tooltipVerticalAlignment                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowLabelTooltip(const class FText& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.ShowLabelTooltip"));
		
		UDBDTooltipManager_ShowLabelTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		params.tooltipHorizontalAlignment = tooltipHorizontalAlignment;
		params.tooltipVerticalAlignment = tooltipVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041776F0
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCustomizationTooltipViewData               tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETooltipHorizontalAlignment                        tooltipHorizontalAlignment                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETooltipVerticalAlignment                          tooltipVerticalAlignment                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip"));
		
		UDBDTooltipManager_ShowCustomizationTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		params.tooltipHorizontalAlignment = tooltipHorizontalAlignment;
		params.tooltipVerticalAlignment = tooltipVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041774F0
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCurrencyProgressionTooltipViewData         tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETooltipHorizontalAlignment                        tooltipHorizontalAlignment                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETooltipVerticalAlignment                          tooltipVerticalAlignment                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowCurrencyTooltip(const struct FCurrencyProgressionTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip"));
		
		UDBDTooltipManager_ShowCurrencyTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		params.tooltipHorizontalAlignment = tooltipHorizontalAlignment;
		params.tooltipVerticalAlignment = tooltipVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04177320
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCharacterTooltipViewData                   tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETooltipHorizontalAlignment                        tooltipHorizontalAlignment                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETooltipVerticalAlignment                          tooltipVerticalAlignment                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip"));
		
		UDBDTooltipManager_ShowCharacterTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		params.tooltipHorizontalAlignment = tooltipHorizontalAlignment;
		params.tooltipVerticalAlignment = tooltipVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04177140
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveRewardNodeTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FArchiveRewardNodeTooltipViewData           tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETooltipHorizontalAlignment                        tooltipHorizontalAlignment                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETooltipVerticalAlignment                          tooltipVerticalAlignment                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowArchiveRewardNodeTooltip(const struct FArchiveRewardNodeTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveRewardNodeTooltip"));
		
		UDBDTooltipManager_ShowArchiveRewardNodeTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		params.tooltipHorizontalAlignment = tooltipHorizontalAlignment;
		params.tooltipVerticalAlignment = tooltipVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176D30
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveNodeTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FArchiveNodeViewData                        tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETooltipHorizontalAlignment                        tooltipHorizontalAlignment                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETooltipVerticalAlignment                          tooltipVerticalAlignment                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowArchiveNodeTooltip(const struct FArchiveNodeViewData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveNodeTooltip"));
		
		UDBDTooltipManager_ShowArchiveNodeTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		params.tooltipHorizontalAlignment = tooltipHorizontalAlignment;
		params.tooltipVerticalAlignment = tooltipVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176B00
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveCompendiumTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCompendiumButtonData                       tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETooltipHorizontalAlignment                        tooltipHorizontalAlignment                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETooltipVerticalAlignment                          tooltipVerticalAlignment                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowArchiveCompendiumTooltip(const struct FCompendiumButtonData& tooltipViewData, const struct FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveCompendiumTooltip"));
		
		UDBDTooltipManager_ShowArchiveCompendiumTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		params.tooltipHorizontalAlignment = tooltipHorizontalAlignment;
		params.tooltipVerticalAlignment = tooltipVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04176390
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.OnViewportCreated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDBDTooltipManager::OnViewportCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.OnViewportCreated"));
		
		UDBDTooltipManager_OnViewportCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041758D0
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.HideTooltip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDBDTooltipManager::HideTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDTooltipManager.HideTooltip"));
		
		UDBDTooltipManager_HideTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDTooltipManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDTooltipManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDTooltipManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B830
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding"));
		
		UDBDWrapBox_SetInnerSlotPadding_Params params {};
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B730
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHorizontalAlignment                               inHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBox::SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment"));
		
		UDBDWrapBox_SetHorizontalAlignment_Params params {};
		params.inHorizontalAlignment = inHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417A920
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDBDWrapBoxSlot* UDBDWrapBox::AddChildToWrapBox(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox"));
		
		UDBDWrapBox_AddChildToWrapBox_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDWrapBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDWrapBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDWrapBox"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417BBA0
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EVerticalAlignment                                 inVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetVerticalAlignment(EVerticalAlignment inVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment"));
		
		UDBDWrapBoxSlot_SetVerticalAlignment_Params params {};
		params.inVerticalAlignment = inVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B8B0
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding"));
		
		UDBDWrapBoxSlot_SetPadding_Params params {};
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B7B0
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHorizontalAlignment                               inHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment"));
		
		UDBDWrapBoxSlot_SetHorizontalAlignment_Params params {};
		params.inHorizontalAlignment = inHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B6B0
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InFillSpanWhenLessThan                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan"));
		
		UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params params {};
		params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B620
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InbFillEmptySpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace"));
		
		UDBDWrapBoxSlot_SetFillEmptySpace_Params params {};
		params.InbFillEmptySpace = InbFillEmptySpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDWrapBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDWrapBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DBDWrapBoxSlot"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B3E0
	 * 		Name   -> Function DBDUIViewsCore.DragZone.OnMouseReleaseGlobal
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDragZone::OnMouseReleaseGlobal(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DragZone.OnMouseReleaseGlobal"));
		
		UDragZone_OnMouseReleaseGlobal_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B3C0
	 * 		Name   -> Function DBDUIViewsCore.DragZone.OnMousePressHitzone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDragZone::OnMousePressHitzone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DragZone.OnMousePressHitzone"));
		
		UDragZone_OnMousePressHitzone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B290
	 * 		Name   -> Function DBDUIViewsCore.DragZone.OnMousePressGlobal
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDragZone::OnMousePressGlobal(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DragZone.OnMousePressGlobal"));
		
		UDragZone_OnMousePressGlobal_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B160
	 * 		Name   -> Function DBDUIViewsCore.DragZone.OnMouseMoveGlobal
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDragZone::OnMouseMoveGlobal(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DragZone.OnMouseMoveGlobal"));
		
		UDragZone_OnMouseMoveGlobal_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B140
	 * 		Name   -> Function DBDUIViewsCore.DragZone.OnMouseHoverHitzone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDragZone::OnMouseHoverHitzone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DragZone.OnMouseHoverHitzone"));
		
		UDragZone_OnMouseHoverHitzone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417A9C0
	 * 		Name   -> Function DBDUIViewsCore.DragZone.OnAnalogInput
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FAnalogInputEvent                           analogEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDragZone::OnAnalogInput(const struct FAnalogInputEvent& analogEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.DragZone.OnAnalogInput"));
		
		UDragZone_OnAnalogInput_Params params {};
		params.analogEvent = analogEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.DragZone"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417BCD0
	 * 		Name   -> Function DBDUIViewsCore.EventEntryPopupWidget.setWidgetSkinFromEventLabel
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FText                                        EventLabel                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEventEntryPopupWidget::setWidgetSkinFromEventLabel(const class FText& EventLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.EventEntryPopupWidget.setWidgetSkinFromEventLabel"));
		
		UEventEntryPopupWidget_setWidgetSkinFromEventLabel_Params params {};
		params.EventLabel = EventLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventEntryPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventEntryPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.EventEntryPopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B9D0
	 * 		Name   -> Function DBDUIViewsCore.LabelTooltipWidget.SetTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FText                                        labelText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULabelTooltipWidget::SetTooltipData(const class FText& labelText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LabelTooltipWidget.SetTooltipData"));
		
		ULabelTooltipWidget_SetTooltipData_Params params {};
		params.labelText = labelText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B5E0
	 * 		Name   -> Function DBDUIViewsCore.LabelTooltipWidget.Reset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ULabelTooltipWidget::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LabelTooltipWidget.Reset"));
		
		ULabelTooltipWidget_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULabelTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULabelTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.LabelTooltipWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417BCB0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.UpdateInventoryItemData
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void ULoadoutMenuPopupWidget::UpdateInventoryItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.UpdateInventoryItemData"));
		
		ULoadoutMenuPopupWidget_UpdateInventoryItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417BC20
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.ShowMenuLoadoutPartsTooltip
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           hoveredSlotWidget                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::ShowMenuLoadoutPartsTooltip(class UCoreButtonWidget* hoveredSlotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.ShowMenuLoadoutPartsTooltip"));
		
		ULoadoutMenuPopupWidget_ShowMenuLoadoutPartsTooltip_Params params {};
		params.hoveredSlotWidget = hoveredSlotWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.SetInventoryItemEnabled
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCoreMenuLoadoutPartWidget*                  Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EItemAvailability                                  Availability                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::SetInventoryItemEnabled(class UCoreMenuLoadoutPartWidget* Widget, EItemAvailability Availability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.SetInventoryItemEnabled"));
		
		ULoadoutMenuPopupWidget_SetInventoryItemEnabled_Params params {};
		params.Widget = Widget;
		params.Availability = Availability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationOutAnimation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isNextPage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::PlayPaginationOutAnimation(bool isNextPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationOutAnimation"));
		
		ULoadoutMenuPopupWidget_PlayPaginationOutAnimation_Params params {};
		params.isNextPage = isNextPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationInAnimation
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutMenuPopupWidget::PlayPaginationInAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationInAnimation"));
		
		ULoadoutMenuPopupWidget_PlayPaginationInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B510
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnPaginationSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            currentPage                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnPaginationSelected(int32_t currentPage, bool isUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnPaginationSelected"));
		
		ULoadoutMenuPopupWidget_OnPaginationSelected_Params params {};
		params.currentPage = currentPage;
		params.isUpdate = isUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B120
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuRightArrowClicked
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void ULoadoutMenuPopupWidget::OnLoadoutMenuRightArrowClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuRightArrowClicked"));
		
		ULoadoutMenuPopupWidget_OnLoadoutMenuRightArrowClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B090
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPresetClicked
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            selectedPresetId                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnLoadoutMenuPresetClicked(int32_t selectedPresetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPresetClicked"));
		
		ULoadoutMenuPopupWidget_OnLoadoutMenuPresetClicked_Params params {};
		params.selectedPresetId = selectedPresetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B000
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPowerSlotClicked
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           menuPowerWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnLoadoutMenuPowerSlotClicked(class UCoreButtonWidget* menuPowerWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPowerSlotClicked"));
		
		ULoadoutMenuPopupWidget_OnLoadoutMenuPowerSlotClicked_Params params {};
		params.menuPowerWidget = menuPowerWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417AF70
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPerkSlotClicked
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           menuPerkWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnLoadoutMenuPerkSlotClicked(class UCoreButtonWidget* menuPerkWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPerkSlotClicked"));
		
		ULoadoutMenuPopupWidget_OnLoadoutMenuPerkSlotClicked_Params params {};
		params.menuPerkWidget = menuPerkWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417AEE0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuOfferingSlotClicked
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           menuOfferingWidget                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnLoadoutMenuOfferingSlotClicked(class UCoreButtonWidget* menuOfferingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuOfferingSlotClicked"));
		
		ULoadoutMenuPopupWidget_OnLoadoutMenuOfferingSlotClicked_Params params {};
		params.menuOfferingWidget = menuOfferingWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417AEC0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuLeftArrowClicked
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void ULoadoutMenuPopupWidget::OnLoadoutMenuLeftArrowClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuLeftArrowClicked"));
		
		ULoadoutMenuPopupWidget_OnLoadoutMenuLeftArrowClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417AE30
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuItemSlotClicked
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           menuItemWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnLoadoutMenuItemSlotClicked(class UCoreButtonWidget* menuItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuItemSlotClicked"));
		
		ULoadoutMenuPopupWidget_OnLoadoutMenuItemSlotClicked_Params params {};
		params.menuItemWidget = menuItemWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417ADA0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuInventorySlotClicked
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           menuPerkWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnLoadoutMenuInventorySlotClicked(class UCoreButtonWidget* menuPerkWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuInventorySlotClicked"));
		
		ULoadoutMenuPopupWidget_OnLoadoutMenuInventorySlotClicked_Params params {};
		params.menuPerkWidget = menuPerkWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417AD10
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuAddonSlotClicked
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           menuAddonWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnLoadoutMenuAddonSlotClicked(class UCoreButtonWidget* menuAddonWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuAddonSlotClicked"));
		
		ULoadoutMenuPopupWidget_OnLoadoutMenuAddonSlotClicked_Params params {};
		params.menuAddonWidget = menuAddonWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417AC90
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropdownSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnDropdownSelected(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropdownSelected"));
		
		ULoadoutMenuPopupWidget_OnDropdownSelected_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417AAE0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropDownListSelectedOptionChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FTabWidgetData                              buttonData                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::OnDropDownListSelectedOptionChanged(const struct FTabWidgetData& buttonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropDownListSelectedOptionChanged"));
		
		ULoadoutMenuPopupWidget_OnDropDownListSelectedOptionChanged_Params params {};
		params.buttonData = buttonData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04170C10
	 * 		Name   -> Function DBDUIViewsCore.LoadoutMenuPopupWidget.HideMenuLoadoutPartsTooltip
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           unhoveredSlotWidget                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupWidget::HideMenuLoadoutPartsTooltip(class UCoreButtonWidget* unhoveredSlotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutMenuPopupWidget.HideMenuLoadoutPartsTooltip"));
		
		ULoadoutMenuPopupWidget_HideMenuLoadoutPartsTooltip_Params params {};
		params.unhoveredSlotWidget = unhoveredSlotWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadoutMenuPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutMenuPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.LoadoutMenuPopupWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417BAA0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutTooltipWidget.SetTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FLoadoutTooltipData                         tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULoadoutTooltipWidget::SetTooltipData(const struct FLoadoutTooltipData& tooltipViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutTooltipWidget.SetTooltipData"));
		
		ULoadoutTooltipWidget_SetTooltipData_Params params {};
		params.tooltipViewData = tooltipViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipPerkLevel
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutTooltipWidget::SetLoadoutTooltipPerkLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipPerkLevel"));
		
		ULoadoutTooltipWidget_SetLoadoutTooltipPerkLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipLockedState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ULoadoutTooltipWidget::SetLoadoutTooltipLockedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipLockedState"));
		
		ULoadoutTooltipWidget_SetLoadoutTooltipLockedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B600
	 * 		Name   -> Function DBDUIViewsCore.LoadoutTooltipWidget.Reset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ULoadoutTooltipWidget::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.LoadoutTooltipWidget.Reset"));
		
		ULoadoutTooltipWidget_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadoutTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.LoadoutTooltipWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextBlockImageSharedSizeDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextBlockImageSharedSizeDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.RichTextBlockImageSharedSizeDecorator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextBlockScalableImageDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextBlockScalableImageDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.RichTextBlockScalableImageDecorator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextHTMLDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextHTMLDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.RichTextHTMLDecorator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextNestedTagsDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextNestedTagsDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.RichTextNestedTagsDecorator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0417B940
	 * 		Name   -> Function DBDUIViewsCore.TestWidget.SetShowWorkbench
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               showWorkbench                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestWidget::SetShowWorkbench(bool showWorkbench)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsCore.TestWidget.SetShowWorkbench"));
		
		UTestWidget_SetShowWorkbench_Params params {};
		params.showWorkbench = showWorkbench;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsCore.TestWidget"));
		return ptr;
	}

}


