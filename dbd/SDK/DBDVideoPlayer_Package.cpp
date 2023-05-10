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
	 * 		RVA    -> 0x07A2B9A0
	 * 		Name   -> Function DBDVideoPlayer.VideoBinkPlayer.OnMediaOpened
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVideoBinkPlayer::OnMediaOpened(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDVideoPlayer.VideoBinkPlayer.OnMediaOpened"));
		
		AVideoBinkPlayer_OnMediaOpened_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A2B980
	 * 		Name   -> Function DBDVideoPlayer.VideoBinkPlayer.OnMediaClosed
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AVideoBinkPlayer::OnMediaClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDVideoPlayer.VideoBinkPlayer.OnMediaClosed"));
		
		AVideoBinkPlayer_OnMediaClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A2B960
	 * 		Name   -> Function DBDVideoPlayer.VideoBinkPlayer.OnEndReached
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AVideoBinkPlayer::OnEndReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDVideoPlayer.VideoBinkPlayer.OnEndReached"));
		
		AVideoBinkPlayer_OnEndReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVideoBinkPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVideoBinkPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDVideoPlayer.VideoBinkPlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVideoNativePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVideoNativePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDVideoPlayer.VideoNativePlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVideoPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVideoPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDVideoPlayer.VideoPlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A2C1E0
	 * 		Name   -> Function DBDVideoPlayer.VideoThumbnailPlayer.OnVideoAssetLoaded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AVideoThumbnailPlayer::OnVideoAssetLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDVideoPlayer.VideoThumbnailPlayer.OnVideoAssetLoaded"));
		
		AVideoThumbnailPlayer_OnVideoAssetLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A2C0F0
	 * 		Name   -> Function DBDVideoPlayer.VideoThumbnailPlayer.OnMediaOpened
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVideoThumbnailPlayer::OnMediaOpened(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDVideoPlayer.VideoThumbnailPlayer.OnMediaOpened"));
		
		AVideoThumbnailPlayer_OnMediaOpened_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A2C0D0
	 * 		Name   -> Function DBDVideoPlayer.VideoThumbnailPlayer.OnMediaClosed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AVideoThumbnailPlayer::OnMediaClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDVideoPlayer.VideoThumbnailPlayer.OnMediaClosed"));
		
		AVideoThumbnailPlayer_OnMediaClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A2B960
	 * 		Name   -> Function DBDVideoPlayer.VideoThumbnailPlayer.OnEndReached
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AVideoThumbnailPlayer::OnEndReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDVideoPlayer.VideoThumbnailPlayer.OnEndReached"));
		
		AVideoThumbnailPlayer_OnEndReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVideoThumbnailPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVideoThumbnailPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDVideoPlayer.VideoThumbnailPlayer"));
		return ptr;
	}

}


