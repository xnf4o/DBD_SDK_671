﻿#pragma once

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
	 * Class DBDInput.ControlModeManager
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UControlModeManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_IADA[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameInstance*                                       _gameInstance;                                           // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.DBDInputManager
	 * Size -> 0x00E0 (FullSize[0x0118] - InheritedSize[0x0038])
	 */
	class UDBDInputManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_LQON[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlModeManager*                                 _controlModeManager;                                     // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USwitchDockStateManager*                             _switchDockStateManager;                                 // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVirtualKeyboardManager*                             _virtualKeyboardManager;                                 // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          _analogCursorDb;                                         // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YZMG[0xA0];                                  // 0x0078(0x00A0) MISSED OFFSET (PADDING)

	public:
		void RemovePresenterRootWidget(class UUserWidget* presenterRootWidget);
		void AddPresenterRootWidget(class UUserWidget* presenterRootWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.InteractiveWidgetInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInteractiveWidgetInterface : public UInterface
	{
	public:
		void HandleKeyUpEvent(const struct FKeyEvent& InKeyEvent);
		void HandleKeyHoldEvent(const struct FKeyEvent& InKeyEvent);
		void HandleKeyDownEvent(const struct FKeyEvent& InKeyEvent);
		void HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.MultipleGamepadsControlModeInfo
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UMultipleGamepadsControlModeInfo : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_SVHU[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.SwitchDockStateManager
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USwitchDockStateManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_VZO8[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.UIInputUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUIInputUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_ShouldUseAtlantaControls(class UObject* WorldContextObject);
		bool STATIC_IsInputKeyControlModePairValid(const struct FKey& InputKey, EControlMode controlMode);
		struct FKey STATIC_GetKeyFromUIAction(EUIActionType ActionType, bool isUsingGamepad);
		bool STATIC_AreGamepadButtonsXOSwitched();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.VirtualKeyboardManager
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UVirtualKeyboardManager : public UObject
	{
	public:
		class UVirtualKeyboard*                                    _virtualKeyboard;                                        // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WK8R[0x38];                                  // 0x0038(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
