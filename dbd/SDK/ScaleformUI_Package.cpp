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
	 * 		Name   -> PredefinedFunction UGFxEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ScaleformUI.GFxEngine"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B834A0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.Start
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bRefresh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::Start(bool bRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.Start"));
		
		UGFxMoviePlayer_Start_Params params {};
		params.bRefresh = bRefresh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B83320
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetVisibility
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetVisibility(const class FString& MovieClipName, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetVisibility"));
		
		UGFxMoviePlayer_SetVisibility_Params params {};
		params.MovieClipName = MovieClipName;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B83150
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGFxScaleMode                                      ScaleMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetViewScaleMode(EGFxScaleMode ScaleMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode"));
		
		UGFxMoviePlayer_SetViewScaleMode_Params params {};
		params.ScaleMode = ScaleMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B831D0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetViewport
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetViewport"));
		
		UGFxMoviePlayer_SetViewport_Params params {};
		params.X = X;
		params.Y = Y;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B83070
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetView3D
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  ViewTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetView3D(const struct FTransform& ViewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetView3D"));
		
		UGFxMoviePlayer_SetView3D_Params params {};
		params.ViewTransform = ViewTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B82ED0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName, TArray<struct FASValue> value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray"));
		
		UGFxMoviePlayer_SetVariableValueArray_Params params {};
		params.MovieClipName = MovieClipName;
		params.MemberName = MemberName;
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B82D40
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetVariableValue
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FASValue                                    value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetVariableValue(const class FString& MovieClipName, const class FString& MemberName, const struct FASValue& value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetVariableValue"));
		
		UGFxMoviePlayer_SetVariableValue_Params params {};
		params.MovieClipName = MovieClipName;
		params.MemberName = MemberName;
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B82CC0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetTimingMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGFxTimingMode                                     TimingMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetTimingMode(EGFxTimingMode TimingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetTimingMode"));
		
		UGFxMoviePlayer_SetTimingMode_Params params {};
		params.TimingMode = TimingMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B82AC0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetScale
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              XScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetScale(const class FString& MovieClipName, float XScale, float YScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetScale"));
		
		UGFxMoviePlayer_SetScale_Params params {};
		params.MovieClipName = MovieClipName;
		params.XScale = XScale;
		params.YScale = YScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B828C0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetPosition
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetPosition(const class FString& MovieClipName, float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetPosition"));
		
		UGFxMoviePlayer_SetPosition_Params params {};
		params.MovieClipName = MovieClipName;
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B82810
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FASPerspectiveTransform                     PerspectiveTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetPerspective3D"));
		
		UGFxMoviePlayer_SetPerspective3D_Params params {};
		params.PerspectiveTransform = PerspectiveTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B82780
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetPause
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bPausePlayback                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetPause(bool bPausePlayback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetPause"));
		
		UGFxMoviePlayer_SetPause_Params params {};
		params.bPausePlayback = bPausePlayback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B826F0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCanReceiveInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput"));
		
		UGFxMoviePlayer_SetMovieCanReceiveInput_Params params {};
		params.bCanReceiveInput = bCanReceiveInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B82660
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCanReceiveFocus                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus"));
		
		UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params {};
		params.bCanReceiveFocus = bCanReceiveFocus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B822B0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FKey>                                Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetFocusIgnoreKeys(TArray<struct FKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys"));
		
		UGFxMoviePlayer_SetFocusIgnoreKeys_Params params {};
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B821B0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Resource                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::SetExternalTexture(const class FString& Resource, class UTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetExternalTexture"));
		
		UGFxMoviePlayer_SetExternalTexture_Params params {};
		params.Resource = Resource;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81F90
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  DisplayTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetDisplayTransform(const class FString& MovieClipName, const struct FTransform& DisplayTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform"));
		
		UGFxMoviePlayer_SetDisplayTransform_Params params {};
		params.MovieClipName = MovieClipName;
		params.DisplayTransform = DisplayTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81DB0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FASDisplayInfo                              Info                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetDisplayInfo(const class FString& MovieClipName, const struct FASDisplayInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo"));
		
		UGFxMoviePlayer_SetDisplayInfo_Params params {};
		params.MovieClipName = MovieClipName;
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81C10
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetColorTransform
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FASColorTransform                           UnrealColorTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetColorTransform(const class FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetColorTransform"));
		
		UGFxMoviePlayer_SetColorTransform_Params params {};
		params.MovieClipName = MovieClipName;
		params.UnrealColorTransform = UnrealColorTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81B10
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FKey>                                Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetCaptureKeys(TArray<struct FKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys"));
		
		UGFxMoviePlayer_SetCaptureKeys_Params params {};
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81A90
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetAlignment
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGFxAlign                                          Align                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetAlignment(EGFxAlign Align)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.SetAlignment"));
		
		UGFxMoviePlayer_SetAlignment_Params params {};
		params.Align = Align;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81990
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Arguments                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::ReceiveGFxCommand(const class FString& Command, const class FString& Arguments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand"));
		
		UGFxMoviePlayer_ReceiveGFxCommand_Params params {};
		params.Command = Command;
		params.Arguments = Arguments;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B815F0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OpenMovie
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USwfMovie*                                   SwfMovie                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ExternalScriptInterface                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      RenderToTexture                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DisplayWithHudOff                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               StartPaused                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxMoviePlayer* UGFxMoviePlayer::STATIC_OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.OpenMovie"));
		
		UGFxMoviePlayer_OpenMovie_Params params {};
		params.SwfMovie = SwfMovie;
		params.ExternalScriptInterface = ExternalScriptInterface;
		params.RenderToTexture = RenderToTexture;
		params.MoviePlayer = MoviePlayer;
		params.DisplayWithHudOff = DisplayWithHudOff;
		params.StartPaused = StartPaused;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81560
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnTick
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::OnTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.OnTick"));
		
		UGFxMoviePlayer_OnTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81540
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnStart
	 * 		Flags  -> (Native, Public)
	 */
	void UGFxMoviePlayer::OnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.OnStart"));
		
		UGFxMoviePlayer_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B814B0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnFocusLost
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		int32_t                                            LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::OnFocusLost(int32_t LocalPlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.OnFocusLost"));
		
		UGFxMoviePlayer_OnFocusLost_Params params {};
		params.LocalPlayerIndex = LocalPlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81420
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnFocusGained
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		int32_t                                            LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::OnFocusGained(int32_t LocalPlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.OnFocusGained"));
		
		UGFxMoviePlayer_OnFocusGained_Params params {};
		params.LocalPlayerIndex = LocalPlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81400
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnClose
	 * 		Flags  -> (Native, Public)
	 */
	void UGFxMoviePlayer::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.OnClose"));
		
		UGFxMoviePlayer_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B812B0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.LoadAndStart
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class FString                                      InSwfAssetName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRefresh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::LoadAndStart(const class FString& InSwfAssetName, bool bRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.LoadAndStart"));
		
		UGFxMoviePlayer_LoadAndStart_Params params {};
		params.InSwfAssetName = InSwfAssetName;
		params.bRefresh = bRefresh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80C00
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.Invoke
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FASValue UGFxMoviePlayer::Invoke(const class FString& MovieClipName, const class FString& FunctionName, TArray<struct FASValue> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.Invoke"));
		
		UGFxMoviePlayer_Invoke_Params params {};
		params.MovieClipName = MovieClipName;
		params.FunctionName = FunctionName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80A90
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::GotoAndStopI(const class FString& MovieClipName, int32_t Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GotoAndStopI"));
		
		UGFxMoviePlayer_GotoAndStopI_Params params {};
		params.MovieClipName = MovieClipName;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B808F0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndStop
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::GotoAndStop(const class FString& MovieClipName, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GotoAndStop"));
		
		UGFxMoviePlayer_GotoAndStop_Params params {};
		params.MovieClipName = MovieClipName;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80780
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::GotoAndPlayI(const class FString& MovieClipName, int32_t Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI"));
		
		UGFxMoviePlayer_GotoAndPlayI_Params params {};
		params.MovieClipName = MovieClipName;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B805E0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::GotoAndPlay(const class FString& MovieClipName, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GotoAndPlay"));
		
		UGFxMoviePlayer_GotoAndPlay_Params params {};
		params.MovieClipName = MovieClipName;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80500
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetVisibility
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::GetVisibility(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetVisibility"));
		
		UGFxMoviePlayer_GetVisibility_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80490
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetView3D
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FTransform UGFxMoviePlayer::GetView3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetView3D"));
		
		UGFxMoviePlayer_GetView3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80330
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FASValue> UGFxMoviePlayer::GetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray"));
		
		UGFxMoviePlayer_GetVariableValueArray_Params params {};
		params.MovieClipName = MovieClipName;
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B801F0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetVariableValue
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASValue UGFxMoviePlayer::GetVariableValue(const class FString& MovieClipName, const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetVariableValue"));
		
		UGFxMoviePlayer_GetVariableValue_Params params {};
		params.MovieClipName = MovieClipName;
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7FFB0
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetScale
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              XScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::GetScale(const class FString& MovieClipName, float* XScale, float* YScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetScale"));
		
		UGFxMoviePlayer_GetScale_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XScale != nullptr)
			*XScale = params.XScale;
		if (YScale != nullptr)
			*YScale = params.YScale;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7FD70
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetPosition
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::GetPosition(const class FString& MovieClipName, float* X, float* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetPosition"));
		
		UGFxMoviePlayer_GetPosition_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7FD20
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	struct FASPerspectiveTransform UGFxMoviePlayer::GetPerspective3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetPerspective3D"));
		
		UGFxMoviePlayer_GetPerspective3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7FC70
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetMovieClip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UGFxMoviePlayer::GetMovieClip(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetMovieClip"));
		
		UGFxMoviePlayer_GetMovieClip_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F870
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UGFxMoviePlayer::GetDisplayTransform(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform"));
		
		UGFxMoviePlayer_GetDisplayTransform_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F740
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASDisplayInfo UGFxMoviePlayer::GetDisplayInfo(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo"));
		
		UGFxMoviePlayer_GetDisplayInfo_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F640
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetColorTransform
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASColorTransform UGFxMoviePlayer::GetColorTransform(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.GetColorTransform"));
		
		UGFxMoviePlayer_GetColorTransform_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04202700
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.Close
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Unload                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::Close(bool Unload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxMoviePlayer.Close"));
		
		UGFxMoviePlayer_Close_Params params {};
		params.Unload = Unload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxMoviePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxMoviePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ScaleformUI.GFxMoviePlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B83410
	 * 		Name   -> Function ScaleformUI.GFxObject.SetVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.SetVisible"));
		
		UGFxObject_SetVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B82BF0
	 * 		Name   -> Function ScaleformUI.GFxObject.SetScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              XScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetScale(float XScale, float YScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.SetScale"));
		
		UGFxObject_SetScale_Params params {};
		params.XScale = XScale;
		params.YScale = YScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B829F0
	 * 		Name   -> Function ScaleformUI.GFxObject.SetPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetPosition(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.SetPosition"));
		
		UGFxObject_SetPosition_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B824E0
	 * 		Name   -> Function ScaleformUI.GFxObject.SetMemberValueArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Input                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName, TArray<struct FASValue> Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.SetMemberValueArray"));
		
		UGFxObject_SetMemberValueArray_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.MemberName = MemberName;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B823B0
	 * 		Name   -> Function ScaleformUI.GFxObject.SetMemberValue
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FASValue                                    Input                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetMemberValue(const class FString& MemberName, const struct FASValue& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.SetMemberValue"));
		
		UGFxObject_SetMemberValue_Params params {};
		params.MemberName = MemberName;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B820D0
	 * 		Name   -> Function ScaleformUI.GFxObject.SetDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  DisplayTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetDisplayTransform(const struct FTransform& DisplayTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.SetDisplayTransform"));
		
		UGFxObject_SetDisplayTransform_Params params {};
		params.DisplayTransform = DisplayTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81ED0
	 * 		Name   -> Function ScaleformUI.GFxObject.SetDisplayInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FASDisplayInfo                              UnrealDisplayInfo                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.SetDisplayInfo"));
		
		UGFxObject_SetDisplayInfo_Params params {};
		params.UnrealDisplayInfo = UnrealDisplayInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81D10
	 * 		Name   -> Function ScaleformUI.GFxObject.SetColorTransform
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FASColorTransform                           UnrealColorTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetColorTransform(const struct FASColorTransform& UnrealColorTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.SetColorTransform"));
		
		UGFxObject_SetColorTransform_Params params {};
		params.UnrealColorTransform = UnrealColorTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80DD0
	 * 		Name   -> Function ScaleformUI.GFxObject.Invoke
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FASValue UGFxObject::Invoke(const class FString& FunctionName, TArray<struct FASValue> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.Invoke"));
		
		UGFxObject_Invoke_Params params {};
		params.FunctionName = FunctionName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80B70
	 * 		Name   -> Function ScaleformUI.GFxObject.GotoAndStopI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::GotoAndStopI(int32_t FrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GotoAndStopI"));
		
		UGFxObject_GotoAndStopI_Params params {};
		params.FrameNumber = FrameNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B809F0
	 * 		Name   -> Function ScaleformUI.GFxObject.GotoAndStop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FrameString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::GotoAndStop(const class FString& FrameString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GotoAndStop"));
		
		UGFxObject_GotoAndStop_Params params {};
		params.FrameString = FrameString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80860
	 * 		Name   -> Function ScaleformUI.GFxObject.GotoAndPlayI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::GotoAndPlayI(int32_t FrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GotoAndPlayI"));
		
		UGFxObject_GotoAndPlayI_Params params {};
		params.FrameNumber = FrameNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B806E0
	 * 		Name   -> Function ScaleformUI.GFxObject.GotoAndPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FrameString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::GotoAndPlay(const class FString& FrameString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GotoAndPlay"));
		
		UGFxObject_GotoAndPlay_Params params {};
		params.FrameString = FrameString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B805B0
	 * 		Name   -> Function ScaleformUI.GFxObject.GetVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGFxObject::GetVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GetVisible"));
		
		UGFxObject_GetVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80100
	 * 		Name   -> Function ScaleformUI.GFxObject.GetScale
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              XScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxObject::GetScale(float* XScale, float* YScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GetScale"));
		
		UGFxObject_GetScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XScale != nullptr)
			*XScale = params.XScale;
		if (YScale != nullptr)
			*YScale = params.YScale;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7FEC0
	 * 		Name   -> Function ScaleformUI.GFxObject.GetPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxObject::GetPosition(float* X, float* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GetPosition"));
		
		UGFxObject_GetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7FB70
	 * 		Name   -> Function ScaleformUI.GFxObject.GetMemberValueArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FASValue> UGFxObject::GetMemberValueArray(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GetMemberValueArray"));
		
		UGFxObject_GetMemberValueArray_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7FA90
	 * 		Name   -> Function ScaleformUI.GFxObject.GetMemberValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASValue UGFxObject::GetMemberValue(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GetMemberValue"));
		
		UGFxObject_GetMemberValue_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F950
	 * 		Name   -> Function ScaleformUI.GFxObject.GetDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FTransform UGFxObject::GetDisplayTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GetDisplayTransform"));
		
		UGFxObject_GetDisplayTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F820
	 * 		Name   -> Function ScaleformUI.GFxObject.GetDisplayInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FASDisplayInfo UGFxObject::GetDisplayInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GetDisplayInfo"));
		
		UGFxObject_GetDisplayInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F700
	 * 		Name   -> Function ScaleformUI.GFxObject.GetColorTransform
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FASColorTransform UGFxObject::GetColorTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.GFxObject.GetColorTransform"));
		
		UGFxObject_GetColorTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ScaleformUI.GFxObject"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B817C0
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USwfMovie*                                   Movie                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ExternalInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      RenderTexture                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DisplayWithHudOff                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               StartPaused                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxMoviePlayer* UScaleformBlueprintLibrary::STATIC_OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie"));
		
		UScaleformBlueprintLibrary_OpenMovie_Params params {};
		params.Movie = Movie;
		params.ExternalInterface = ExternalInterface;
		params.RenderTexture = RenderTexture;
		params.MoviePlayer = MoviePlayer;
		params.DisplayWithHudOff = DisplayWithHudOff;
		params.StartPaused = StartPaused;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B81140
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASValue UScaleformBlueprintLibrary::STATIC_InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams"));
		
		UScaleformBlueprintLibrary_InvokeNoParams_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B80F50
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.Invoke
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FASValue UScaleformBlueprintLibrary::STATIC_Invoke(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName, TArray<struct FASValue> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.ScaleformBlueprintLibrary.Invoke"));
		
		UScaleformBlueprintLibrary_Invoke_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.FunctionName = FunctionName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F9B0
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariablePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UScaleformBlueprintLibrary::STATIC_GetVariable(class UGFxMoviePlayer* MoviePlayer, const class FString& VariablePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable"));
		
		UScaleformBlueprintLibrary_GetVariable_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.VariablePath = VariablePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F9B0
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UScaleformBlueprintLibrary::STATIC_GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip"));
		
		UScaleformBlueprintLibrary_GetMovieClip_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F9B0
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.GetMember
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UScaleformBlueprintLibrary::STATIC_GetMember(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.ScaleformBlueprintLibrary.GetMember"));
		
		UScaleformBlueprintLibrary_GetMember_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B7F5C0
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScaleformBlueprintLibrary::STATIC_CloseMovie(class UGFxMoviePlayer* MoviePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie"));
		
		UScaleformBlueprintLibrary_CloseMovie_Params params {};
		params.MoviePlayer = MoviePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScaleformBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScaleformBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ScaleformUI.ScaleformBlueprintLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwfMovie.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwfMovie::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ScaleformUI.SwfMovie"));
		return ptr;
	}

}


