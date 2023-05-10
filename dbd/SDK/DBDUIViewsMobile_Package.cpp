﻿/**
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
	 * 		Name   -> PredefinedFunction UFriendsMenuUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendsMenuUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.FriendsMenuUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchConfigDifficultyDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchConfigDifficultyDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.MatchConfigDifficultyDataAsset"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchConfigOptionsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchConfigOptionsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.MatchConfigOptionsDataAsset"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchConfigTabsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchConfigTabsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.MatchConfigTabsDataAsset"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DDD0
	 * 		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.TutorialAnimationFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UMobileBaseUserWidget::TutorialAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.MobileBaseUserWidget.TutorialAnimationFinished"));
		
		UMobileBaseUserWidget_TutorialAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DDB0
	 * 		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.TryBroadcastOnHighlightWidgetClicked
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UMobileBaseUserWidget::TryBroadcastOnHighlightWidgetClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.MobileBaseUserWidget.TryBroadcastOnHighlightWidgetClicked"));
		
		UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DD90
	 * 		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.TriggerTutorialVisuals
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UMobileBaseUserWidget::TriggerTutorialVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.MobileBaseUserWidget.TriggerTutorialVisuals"));
		
		UMobileBaseUserWidget_TriggerTutorialVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DB30
	 * 		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.PropagateOnHighlightWidgetClicked
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FName                                        onBoardingID                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMobileBaseUserWidget::PropagateOnHighlightWidgetClicked(const class FName& onBoardingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.MobileBaseUserWidget.PropagateOnHighlightWidgetClicked"));
		
		UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Params params {};
		params.onBoardingID = onBoardingID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMobileBaseUserWidget::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.MobileBaseUserWidget.OnSynchronizeProperties"));
		
		UMobileBaseUserWidget_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DB00
	 * 		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.IsInTutorialState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMobileBaseUserWidget::IsInTutorialState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.MobileBaseUserWidget.IsInTutorialState"));
		
		UMobileBaseUserWidget_IsInTutorialState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041565F0
	 * 		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.FinishTutorialVisuals
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UMobileBaseUserWidget::FinishTutorialVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.MobileBaseUserWidget.FinishTutorialVisuals"));
		
		UMobileBaseUserWidget_FinishTutorialVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMobileBaseUserWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMobileBaseUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.MobileBaseUserWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGAtlantaCustomMatchLobbyRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGAtlantaCustomMatchLobbyRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyRule"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D920
	 * 		Name   -> Function DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen.HandleEditConfigButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UUMGAtlantaCustomMatchLobbyScreen::HandleEditConfigButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen.HandleEditConfigButtonClicked"));
		
		UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGAtlantaCustomMatchLobbyScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGAtlantaCustomMatchLobbyScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D960
	 * 		Name   -> Function DBDUIViewsMobile.UMGPageScrollWidget.HandlePageButtonClicked
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            pageIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGPageScrollWidget::HandlePageButtonClicked(int32_t pageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGPageScrollWidget.HandlePageButtonClicked"));
		
		UUMGPageScrollWidget_HandlePageButtonClicked_Params params {};
		params.pageIndex = pageIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGPageScrollWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGPageScrollWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGPageScrollWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGGridPageScrollWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGGridPageScrollWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGGridPageScrollWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGAtlantaMatchConfigPageScroll.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGAtlantaMatchConfigPageScroll::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScroll"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonReleased__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUMGBaseButtonWidget::OnBaseButtonReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonReleased__DelegateSignature"));
		
		UUMGBaseButtonWidget_OnBaseButtonReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonPressed__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUMGBaseButtonWidget::OnBaseButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonPressed__DelegateSignature"));
		
		UUMGBaseButtonWidget_OnBaseButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonLongPress__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUMGBaseButtonWidget::OnBaseButtonLongPress__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonLongPress__DelegateSignature"));
		
		UUMGBaseButtonWidget_OnBaseButtonLongPress__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUMGBaseButtonWidget::OnBaseButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonClicked__DelegateSignature"));
		
		UUMGBaseButtonWidget_OnBaseButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C1A0
	 * 		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonReleasedEvent
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void UUMGBaseButtonWidget::HandleButtonReleasedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonReleasedEvent"));
		
		UUMGBaseButtonWidget_HandleButtonReleasedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C180
	 * 		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonPressedEvent
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void UUMGBaseButtonWidget::HandleButtonPressedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonPressedEvent"));
		
		UUMGBaseButtonWidget_HandleButtonPressedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C160
	 * 		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonLongPressEvent
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void UUMGBaseButtonWidget::HandleButtonLongPressEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonLongPressEvent"));
		
		UUMGBaseButtonWidget_HandleButtonLongPressEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D8E0
	 * 		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonHoveredEvent
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void UUMGBaseButtonWidget::HandleButtonHoveredEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonHoveredEvent"));
		
		UUMGBaseButtonWidget_HandleButtonHoveredEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0415C1C0
	 * 		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonClickedEvent
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void UUMGBaseButtonWidget::HandleButtonClickedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonClickedEvent"));
		
		UUMGBaseButtonWidget_HandleButtonClickedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGBaseButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGBaseButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGBaseButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGAtlantaMatchConfigPageScrollItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGAtlantaMatchConfigPageScrollItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScrollItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D8C0
	 * 		Name   -> Function DBDUIViewsMobile.UMGAtlantaMatchConfigScreen.HandleBackButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UUMGAtlantaMatchConfigScreen::HandleBackButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGAtlantaMatchConfigScreen.HandleBackButtonClicked"));
		
		UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGAtlantaMatchConfigScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGAtlantaMatchConfigScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGAtlantaMatchConfigScreen"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGAtlantaMatchConfigTab.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGAtlantaMatchConfigTab::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGAtlantaMatchConfigTab"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DBD0
	 * 		Name   -> Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.SetIsActive
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGAtlantaRequestRoleButton::SetIsActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.SetIsActive"));
		
		UUMGAtlantaRequestRoleButton_SetIsActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.OnToggleActiveState
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGAtlantaRequestRoleButton::OnToggleActiveState(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.OnToggleActiveState"));
		
		UUMGAtlantaRequestRoleButton_OnToggleActiveState_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D800
	 * 		Name   -> Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.GetIsActive
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUMGAtlantaRequestRoleButton::GetIsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.GetIsActive"));
		
		UUMGAtlantaRequestRoleButton_GetIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGAtlantaRequestRoleButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGAtlantaRequestRoleButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGAtlantaRequestRoleButton"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D840
	 * 		Name   -> Function DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget.HandleActionTriggered
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EActionOnFriendType                                ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGBaseFriendListContextualMenuWidget::HandleActionTriggered(EActionOnFriendType ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget.HandleActionTriggered"));
		
		UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGBaseFriendListContextualMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGBaseFriendListContextualMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DD10
	 * 		Name   -> Function DBDUIViewsMobile.UMGBaseFriendListElement.TriggerActionOnThisFriend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EActionOnFriendType                                ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGBaseFriendListElement::TriggerActionOnThisFriend(EActionOnFriendType ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGBaseFriendListElement.TriggerActionOnThisFriend"));
		
		UUMGBaseFriendListElement_TriggerActionOnThisFriend_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGBaseFriendListElement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGBaseFriendListElement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGBaseFriendListElement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGBaseTabButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGBaseTabButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGBaseTabButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGBaseTabListWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGBaseTabListWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGBaseTabListWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DCF0
	 * 		Name   -> Function DBDUIViewsMobile.UMGExpandableListWidget.ToggleExpansion
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UUMGExpandableListWidget::ToggleExpansion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGExpandableListWidget.ToggleExpansion"));
		
		UUMGExpandableListWidget_ToggleExpansion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGExpandableListWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGExpandableListWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGExpandableListWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGFriendBaseTabListWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGFriendBaseTabListWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGFriendBaseTabListWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGFriendButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGFriendButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGFriendButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGFriendContextualMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGFriendContextualMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGFriendContextualMenuWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DA10
	 * 		Name   -> Function DBDUIViewsMobile.UMGFriendElementWidget.HandleSelectionButton
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UUMGFriendElementWidget::HandleSelectionButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGFriendElementWidget.HandleSelectionButton"));
		
		UUMGFriendElementWidget_HandleSelectionButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D940
	 * 		Name   -> Function DBDUIViewsMobile.UMGFriendElementWidget.HandleFavoriteButtonClicked
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUMGFriendElementWidget::HandleFavoriteButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGFriendElementWidget.HandleFavoriteButtonClicked"));
		
		UUMGFriendElementWidget_HandleFavoriteButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGFriendElementWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGFriendElementWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGFriendElementWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGFriendListTabWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGFriendListTabWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGFriendListTabWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D900
	 * 		Name   -> Function DBDUIViewsMobile.UMGFriendPartyListElementWidget.HandleCancelInviteButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UUMGFriendPartyListElementWidget::HandleCancelInviteButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGFriendPartyListElementWidget.HandleCancelInviteButtonClicked"));
		
		UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGFriendPartyListElementWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGFriendPartyListElementWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGFriendPartyListElementWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DA30
	 * 		Name   -> Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleTextInputChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FText                                        textInput                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUMGFriendSearchBarWidget::HandleTextInputChanged(const class FText& textInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleTextInputChanged"));
		
		UUMGFriendSearchBarWidget_HandleTextInputChanged_Params params {};
		params.textInput = textInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D9F0
	 * 		Name   -> Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleSearchButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UUMGFriendSearchBarWidget::HandleSearchButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleSearchButtonClicked"));
		
		UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGFriendSearchBarWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGFriendSearchBarWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGFriendSearchBarWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGFriendTabButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGFriendTabButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGFriendTabButtonWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGRequestsListTabWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGRequestsListTabWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGRequestsListTabWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418DC60
	 * 		Name   -> Function DBDUIViewsMobile.UMGScrollListPageButton.SetIsSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGScrollListPageButton::SetIsSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGScrollListPageButton.SetIsSelected"));
		
		UUMGScrollListPageButton_SetIsSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0418D820
	 * 		Name   -> Function DBDUIViewsMobile.UMGScrollListPageButton.HandleActionButtonClick
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUMGScrollListPageButton::HandleActionButtonClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewsMobile.UMGScrollListPageButton.HandleActionButtonClick"));
		
		UUMGScrollListPageButton_HandleActionButtonClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGScrollListPageButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGScrollListPageButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGScrollListPageButton"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMGSuggestionsListTabWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGSuggestionsListTabWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewsMobile.UMGSuggestionsListTabWidget"));
		return ptr;
	}

}


