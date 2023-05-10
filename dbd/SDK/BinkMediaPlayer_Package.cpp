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
	 * 		RVA    -> 0x04262900
	 * 		Name   -> Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FTimespan UBinkFunctionLibrary::STATIC_BinkLoadingMovie_GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime"));
		
		UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042628C0
	 * 		Name   -> Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FTimespan UBinkFunctionLibrary::STATIC_BinkLoadingMovie_GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration"));
		
		UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262940
	 * 		Name   -> Function BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UBinkFunctionLibrary::STATIC_Bink_DrawOverlays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays"));
		
		UBinkFunctionLibrary_Bink_DrawOverlays_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBinkFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBinkFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class BinkMediaPlayer.BinkFunctionLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE30E0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::SupportsSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking"));
		
		UBinkMediaPlayer_SupportsSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE30E0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::SupportsScrubbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing"));
		
		UBinkMediaPlayer_SupportsScrubbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04263240
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::SupportsRate(float Rate, bool Unthinned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate"));
		
		UBinkMediaPlayer_SupportsRate_Params params {};
		params.Rate = Rate;
		params.Unthinned = Unthinned;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04263220
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBinkMediaPlayer::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.Stop"));
		
		UBinkMediaPlayer_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042631A0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SetVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinkMediaPlayer::SetVolume(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.SetVolume"));
		
		UBinkMediaPlayer_SetVolume_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04263110
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SetRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::SetRate(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.SetRate"));
		
		UBinkMediaPlayer_SetRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262FE0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InLooping                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::SetLooping(bool InLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.SetLooping"));
		
		UBinkMediaPlayer_SetLooping_Params params {};
		params.InLooping = InLooping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262F40
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Seek
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTimespan                                   InTime                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::Seek(const struct FTimespan& InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.Seek"));
		
		UBinkMediaPlayer_Seek_Params params {};
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262F10
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Rewind
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UBinkMediaPlayer::Rewind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.Rewind"));
		
		UBinkMediaPlayer_Rewind_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262EE0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UBinkMediaPlayer::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.Play"));
		
		UBinkMediaPlayer_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262EB0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UBinkMediaPlayer::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.Pause"));
		
		UBinkMediaPlayer_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262E00
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewUrl                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::OpenUrl(const class FString& NewUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl"));
		
		UBinkMediaPlayer_OpenUrl_Params params {};
		params.NewUrl = NewUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262DD0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.IsStopped"));
		
		UBinkMediaPlayer_IsStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262DA0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsSeeking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.IsSeeking"));
		
		UBinkMediaPlayer_IsSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262D70
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying"));
		
		UBinkMediaPlayer_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262D40
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.IsPaused"));
		
		UBinkMediaPlayer_IsPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262D10
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsLooping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.IsLooping"));
		
		UBinkMediaPlayer_IsLooping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262CE0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized"));
		
		UBinkMediaPlayer_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262CA0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.GetUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UBinkMediaPlayer::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.GetUrl"));
		
		UBinkMediaPlayer_GetUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262C60
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.GetTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UBinkMediaPlayer::GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.GetTime"));
		
		UBinkMediaPlayer_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262C30
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.GetRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBinkMediaPlayer::GetRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.GetRate"));
		
		UBinkMediaPlayer_GetRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262BF0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UBinkMediaPlayer::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.GetDuration"));
		
		UBinkMediaPlayer_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262A00
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Draw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               tonemap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            out_nits                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               srgb_decode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hdr                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinkMediaPlayer::Draw(class UTexture* Texture, bool tonemap, int32_t out_nits, float alpha, bool srgb_decode, bool hdr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.Draw"));
		
		UBinkMediaPlayer_Draw_Params params {};
		params.Texture = Texture;
		params.tonemap = tonemap;
		params.out_nits = out_nits;
		params.alpha = alpha;
		params.srgb_decode = srgb_decode;
		params.hdr = hdr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042629E0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.CloseUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBinkMediaPlayer::CloseUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.CloseUrl"));
		
		UBinkMediaPlayer_CloseUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262990
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.CanPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::CanPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.CanPlay"));
		
		UBinkMediaPlayer_CanPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04262960
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.CanPause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::CanPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaPlayer.CanPause"));
		
		UBinkMediaPlayer_CanPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBinkMediaPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBinkMediaPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class BinkMediaPlayer.BinkMediaPlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04263080
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBinkMediaPlayer*                            InMediaPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinkMediaTexture::SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer"));
		
		UBinkMediaTexture_SetMediaPlayer_Params params {};
		params.InMediaPlayer = InMediaPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042629C0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaTexture.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBinkMediaTexture::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BinkMediaPlayer.BinkMediaTexture.Clear"));
		
		UBinkMediaTexture_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBinkMediaTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBinkMediaTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class BinkMediaPlayer.BinkMediaTexture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBinkMoviePlayerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBinkMoviePlayerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class BinkMediaPlayer.BinkMoviePlayerSettings"));
		return ptr;
	}

}


