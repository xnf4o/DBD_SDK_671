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
	 * 		Name   -> PredefinedFunction UControlModeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlModeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInput.ControlModeManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A0FBB0
	 * 		Name   -> Function DBDInput.DBDInputManager.RemovePresenterRootWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UUserWidget*                                 presenterRootWidget                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDInputManager::RemovePresenterRootWidget(class UUserWidget* presenterRootWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.DBDInputManager.RemovePresenterRootWidget"));
		
		UDBDInputManager_RemovePresenterRootWidget_Params params {};
		params.presenterRootWidget = presenterRootWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A0FB20
	 * 		Name   -> Function DBDInput.DBDInputManager.AddPresenterRootWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UUserWidget*                                 presenterRootWidget                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDInputManager::AddPresenterRootWidget(class UUserWidget* presenterRootWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.DBDInputManager.AddPresenterRootWidget"));
		
		UDBDInputManager_AddPresenterRootWidget_Params params {};
		params.presenterRootWidget = presenterRootWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDInputManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDInputManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInput.DBDInputManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A10580
	 * 		Name   -> Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInteractiveWidgetInterface::HandleKeyUpEvent(const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent"));
		
		UInteractiveWidgetInterface_HandleKeyUpEvent_Params params {};
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A10480
	 * 		Name   -> Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInteractiveWidgetInterface::HandleKeyHoldEvent(const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent"));
		
		UInteractiveWidgetInterface_HandleKeyHoldEvent_Params params {};
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A10380
	 * 		Name   -> Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInteractiveWidgetInterface::HandleKeyDownEvent(const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent"));
		
		UInteractiveWidgetInterface_HandleKeyDownEvent_Params params {};
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A10260
	 * 		Name   -> Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInteractiveWidgetInterface::HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent"));
		
		UInteractiveWidgetInterface_HandleAnalogInputEvent_Params params {};
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveWidgetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveWidgetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInput.InteractiveWidgetInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultipleGamepadsControlModeInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultipleGamepadsControlModeInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInput.MultipleGamepadsControlModeInfo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwitchDockStateManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwitchDockStateManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInput.SwitchDockStateManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A10E30
	 * 		Name   -> Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUIInputUtilities::STATIC_ShouldUseAtlantaControls(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls"));
		
		UUIInputUtilities_ShouldUseAtlantaControls_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A10CF0
	 * 		Name   -> Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlMode                                       controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUIInputUtilities::STATIC_IsInputKeyControlModePairValid(const struct FKey& InputKey, EControlMode controlMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid"));
		
		UUIInputUtilities_IsInputKeyControlModePairValid_Params params {};
		params.InputKey = InputKey;
		params.controlMode = controlMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A10B90
	 * 		Name   -> Function DBDInput.UIInputUtilities.GetKeyFromUIAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUIActionType                                      ActionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isUsingGamepad                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKey UUIInputUtilities::STATIC_GetKeyFromUIAction(EUIActionType ActionType, bool isUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.UIInputUtilities.GetKeyFromUIAction"));
		
		UUIInputUtilities_GetKeyFromUIAction_Params params {};
		params.ActionType = ActionType;
		params.isUsingGamepad = isUsingGamepad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A10B60
	 * 		Name   -> Function DBDInput.UIInputUtilities.AreGamepadButtonsXOSwitched
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UUIInputUtilities::STATIC_AreGamepadButtonsXOSwitched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInput.UIInputUtilities.AreGamepadButtonsXOSwitched"));
		
		UUIInputUtilities_AreGamepadButtonsXOSwitched_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIInputUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIInputUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInput.UIInputUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVirtualKeyboardManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVirtualKeyboardManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInput.VirtualKeyboardManager"));
		return ptr;
	}

}


