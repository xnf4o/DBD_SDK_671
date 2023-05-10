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
	 * 		Name   -> PredefinedFunction UMovieSceneSignedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSignedObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSignedObject"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA5F0
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetRowIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewRowIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetRowIndex(int32_t NewRowIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.SetRowIndex"));
		
		UMovieSceneSection_SetRowIndex_Params params {};
		params.NewRowIndex = NewRowIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA560
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetPreRollFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InPreRollFrames                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetPreRollFrames(int32_t InPreRollFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.SetPreRollFrames"));
		
		UMovieSceneSection_SetPreRollFrames_Params params {};
		params.InPreRollFrames = InPreRollFrames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA4D0
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetPostRollFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InPostRollFrames                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetPostRollFrames(int32_t InPostRollFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.SetPostRollFrames"));
		
		UMovieSceneSection_SetPostRollFrames_Params params {};
		params.InPostRollFrames = InPostRollFrames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA2A0
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetOverlapPriority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetOverlapPriority(int32_t NewPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.SetOverlapPriority"));
		
		UMovieSceneSection_SetOverlapPriority_Params params {};
		params.NewPriority = NewPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA210
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetIsLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsLocked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetIsLocked(bool bInIsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.SetIsLocked"));
		
		UMovieSceneSection_SetIsLocked_Params params {};
		params.bInIsLocked = bInIsLocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA160
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetIsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetIsActive(bool bInIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.SetIsActive"));
		
		UMovieSceneSection_SetIsActive_Params params {};
		params.bInIsActive = bInIsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9EB0
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetCompletionMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EMovieSceneCompletionMode                          InCompletionMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetCompletionMode(EMovieSceneCompletionMode InCompletionMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.SetCompletionMode"));
		
		UMovieSceneSection_SetCompletionMode_Params params {};
		params.InCompletionMode = InCompletionMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9E30
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetBlendType
	 * 		Flags  -> (RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EMovieSceneBlendType                               InBlendType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetBlendType(EMovieSceneBlendType InBlendType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.SetBlendType"));
		
		UMovieSceneSection_SetBlendType_Params params {};
		params.InBlendType = InBlendType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9250
	 * 		Name   -> Function MovieScene.MovieSceneSection.IsLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneSection::IsLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.IsLocked"));
		
		UMovieSceneSection_IsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9220
	 * 		Name   -> Function MovieScene.MovieSceneSection.IsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneSection::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.IsActive"));
		
		UMovieSceneSection_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0438CEE0
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetRowIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneSection::GetRowIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.GetRowIndex"));
		
		UMovieSceneSection_GetRowIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9170
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetPreRollFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneSection::GetPreRollFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.GetPreRollFrames"));
		
		UMovieSceneSection_GetPreRollFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9150
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetPostRollFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneSection::GetPostRollFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.GetPostRollFrames"));
		
		UMovieSceneSection_GetPostRollFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9100
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetOverlapPriority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneSection::GetOverlapPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.GetOverlapPriority"));
		
		UMovieSceneSection_GetOverlapPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8EA0
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetCompletionMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.GetCompletionMode"));
		
		UMovieSceneSection_GetCompletionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8D60
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetBlendType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSection.GetBlendType"));
		
		UMovieSceneSection_GetBlendType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNameableTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNameableTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneNameableTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8C70
	 * 		Name   -> Function MovieScene.MovieSceneSequence.FindBindingsByTag
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InBindingName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(const class FName& InBindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequence.FindBindingsByTag"));
		
		UMovieSceneSequence_FindBindingsByTag_Params params {};
		params.InBindingName = InBindingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8BA0
	 * 		Name   -> Function MovieScene.MovieSceneSequence.FindBindingByTag
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InBindingName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(const class FName& InBindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequence.FindBindingByTag"));
		
		UMovieSceneSequence_FindBindingByTag_Params params {};
		params.InBindingName = InBindingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSequence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA770
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneSequencePlayer::StopAtCurrentTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime"));
		
		UMovieSceneSequencePlayer_StopAtCurrentTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA750
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneSequencePlayer::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.Stop"));
		
		UMovieSceneSequencePlayer_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA680
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              starttime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetTimeRange(float starttime, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange"));
		
		UMovieSceneSequencePlayer_SetTimeRange_Params params {};
		params.starttime = starttime;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA330
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate"));
		
		UMovieSceneSequencePlayer_SetPlayRate_Params params {};
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA3B0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneSequencePlaybackParams           PlaybackParams                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition"));
		
		UMovieSceneSequencePlayer_SetPlaybackPosition_Params params {};
		params.PlaybackParams = PlaybackParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CA0D0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FFrameRate                                  FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate"));
		
		UMovieSceneSequencePlayer_SetFrameRate_Params params {};
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9FC0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange"));
		
		UMovieSceneSequencePlayer_SetFrameRange_Params params {};
		params.StartFrame = StartFrame;
		params.Duration = Duration;
		params.SubFrames = SubFrames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9F30
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInDisableCameraCuts                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts"));
		
		UMovieSceneSequencePlayer_SetDisableCameraCuts_Params params {};
		params.bInDisableCameraCuts = bInDisableCameraCuts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9D80
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds"));
		
		UMovieSceneSequencePlayer_ScrubToSeconds_Params params {};
		params.TimeInSeconds = TimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9C70
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(const class FString& InLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame"));
		
		UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params params {};
		params.InLabel = InLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9BC0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame"));
		
		UMovieSceneSequencePlayer_ScrubToFrame_Params params {};
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9BA0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.Scrub
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneSequencePlayer::Scrub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.Scrub"));
		
		UMovieSceneSequencePlayer_Scrub_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9AE0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FFrameTime                                  StoppedTime                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::RPC_OnStopEvent(const struct FFrameTime& StoppedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent"));
		
		UMovieSceneSequencePlayer_RPC_OnStopEvent_Params params {};
		params.StoppedTime = StoppedTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9A00
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		EUpdatePositionMethod                              Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameTime                                  RelevantTime                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent"));
		
		UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params params {};
		params.Method = Method;
		params.RelevantTime = RelevantTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9B80
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.RestoreState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneSequencePlayer::RestoreState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.RestoreState"));
		
		UMovieSceneSequencePlayer_RestoreState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9950
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds"));
		
		UMovieSceneSequencePlayer_PlayToSeconds_Params params {};
		params.TimeInSeconds = TimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9840
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequencePlayer::PlayToMarkedFrame(const class FString& InLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame"));
		
		UMovieSceneSequencePlayer_PlayToMarkedFrame_Params params {};
		params.InLabel = InLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9790
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame"));
		
		UMovieSceneSequencePlayer_PlayToFrame_Params params {};
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9670
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneSequencePlaybackParams           PlaybackParams                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.PlayTo"));
		
		UMovieSceneSequencePlayer_PlayTo_Params params {};
		params.PlaybackParams = PlaybackParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9650
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneSequencePlayer::PlayReverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.PlayReverse"));
		
		UMovieSceneSequencePlayer_PlayReverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C95C0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumLoops                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::PlayLooping(int32_t NumLoops)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.PlayLooping"));
		
		UMovieSceneSequencePlayer_PlayLooping_Params params {};
		params.NumLoops = NumLoops;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C95A0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneSequencePlayer::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.Play"));
		
		UMovieSceneSequencePlayer_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9580
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneSequencePlayer::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.Pause"));
		
		UMovieSceneSequencePlayer_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C94D0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds"));
		
		UMovieSceneSequencePlayer_JumpToSeconds_Params params {};
		params.TimeInSeconds = TimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C93C0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequencePlayer::JumpToMarkedFrame(const class FString& InLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame"));
		
		UMovieSceneSequencePlayer_JumpToMarkedFrame_Params params {};
		params.InLabel = InLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9310
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame"));
		
		UMovieSceneSequencePlayer_JumpToFrame_Params params {};
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C92E0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsReversed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneSequencePlayer::IsReversed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.IsReversed"));
		
		UMovieSceneSequencePlayer_IsReversed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C92B0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneSequencePlayer::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.IsPlaying"));
		
		UMovieSceneSequencePlayer_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9280
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneSequencePlayer::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.IsPaused"));
		
		UMovieSceneSequencePlayer_IsPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9200
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneSequencePlayer::GoToEndAndStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop"));
		
		UMovieSceneSequencePlayer_GoToEndAndStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C91B0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetStartTime"));
		
		UMovieSceneSequencePlayer_GetStartTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9190
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMovieSceneSequence* UMovieSceneSequencePlayer::GetSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetSequence"));
		
		UMovieSceneSequencePlayer_GetSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9120
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneSequencePlayer::GetPlayRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate"));
		
		UMovieSceneSequencePlayer_GetPlayRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9020
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     inObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(class UObject* inObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings"));
		
		UMovieSceneSequencePlayer_GetObjectBindings_Params params {};
		params.inObject = inObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C9000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate"));
		
		UMovieSceneSequencePlayer_GetFrameRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8FD0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneSequencePlayer::GetFrameDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration"));
		
		UMovieSceneSequencePlayer_GetFrameDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8F70
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetEndTime"));
		
		UMovieSceneSequencePlayer_GetEndTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8F30
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetDuration"));
		
		UMovieSceneSequencePlayer_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8F00
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts"));
		
		UMovieSceneSequencePlayer_GetDisableCameraCuts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8EC0
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime"));
		
		UMovieSceneSequencePlayer_GetCurrentTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8D90
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  ObjectBinding                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects"));
		
		UMovieSceneSequencePlayer_GetBoundObjects_Params params {};
		params.ObjectBinding = ObjectBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066C8B80
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneSequencePlayer::ChangePlaybackDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection"));
		
		UMovieSceneSequencePlayer_ChangePlaybackDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSequencePlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CD8A0
	 * 		Name   -> Function MovieScene.MovieSceneSubSection.SetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSubSection::SetSequence(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSubSection.SetSequence"));
		
		UMovieSceneSubSection_SetSequence_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066CD870
	 * 		Name   -> Function MovieScene.MovieSceneSubSection.GetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMovieSceneSequence* UMovieSceneSubSection::GetSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneSubSection.GetSequence"));
		
		UMovieSceneSubSection_GetSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSubSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSubSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSubSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEntitySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEntitySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneEntitySystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSubTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSubTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSubTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04000360
	 * 		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnTick
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneCustomClockSource.OnTick"));
		
		UMovieSceneCustomClockSource_OnTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.InPlayRate = InPlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066BD840
	 * 		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InStopTime                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCustomClockSource::OnStopPlaying(const struct FQualifiedFrameTime& InStopTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying"));
		
		UMovieSceneCustomClockSource_OnStopPlaying_Params params {};
		params.InStopTime = InStopTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066BD790
	 * 		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InStartTime                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCustomClockSource::OnStartPlaying(const struct FQualifiedFrameTime& InStartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying"));
		
		UMovieSceneCustomClockSource_OnStartPlaying_Params params {};
		params.InStartTime = InStartTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066BD690
	 * 		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InCurrentTime                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneCustomClockSource::OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime"));
		
		UMovieSceneCustomClockSource_OnRequestCurrentTime_Params params {};
		params.InCurrentTime = InCurrentTime;
		params.InPlayRate = InPlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCustomClockSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCustomClockSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneCustomClockSource"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneDeterminismSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneDeterminismSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneDeterminismSource"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEntityProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEntityProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneEntityProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEvaluationHook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEvaluationHook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneEvaluationHook"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePlaybackClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePlaybackClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieScenePlaybackClient"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneTrackTemplateProducer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrackTemplateProducer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneTrackTemplateProducer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNodeAndChannelMappings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNodeAndChannelMappings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.NodeAndChannelMappings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNodeGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNodeGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneNodeGroup"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNodeGroupCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNodeGroupCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneNodeGroupCollection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieScene"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneBindingOverrides.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBindingOverrides::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneBindingOverrides"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneBindingOwnerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBindingOwnerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneBindingOwnerInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneBlenderSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBlenderSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneBlenderSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneBoolSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBoolSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneBoolSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEntityInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEntityInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneEntityInstantiatorSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneGenericBoundObjectInstantiator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneGenericBoundObjectInstantiator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneGenericBoundObjectInstantiator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneBoundSceneComponentInstantiator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBoundSceneComponentInstantiator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneBoundSceneComponentInstantiator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSceneComponentImpersonator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSceneComponentImpersonator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSceneComponentImpersonator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCompiledData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCompiledData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneCompiledData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCompiledDataManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCompiledDataManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneCompiledDataManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneFloatDecomposer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFloatDecomposer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneFloatDecomposer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneBuiltInEasingFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBuiltInEasingFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneBuiltInEasingFunction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEasingExternalCurve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEasingExternalCurve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneEasingExternalCurve"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function MovieScene.MovieSceneEasingFunction.OnEvaluate
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Interp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneEasingFunction::OnEvaluate(float Interp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MovieScene.MovieSceneEasingFunction.OnEvaluate"));
		
		UMovieSceneEasingFunction_OnEvaluate_Params params {};
		params.Interp = Interp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEasingFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEasingFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneEasingFunction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEntitySystemLinker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEntitySystemLinker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneEntitySystemLinker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEvalTimeSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEvalTimeSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneEvalTimeSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEvaluationHookSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEvaluationHookSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneEvaluationHookSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneFolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneFolder"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneHookSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneHookSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneHookSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneKeyProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneKeyProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneKeyProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMasterInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMasterInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneMasterInstantiatorSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePreAnimatedStateSystemInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePreAnimatedStateSystemInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieScenePreAnimatedStateSystemInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCachePreAnimatedStateSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCachePreAnimatedStateSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneCachePreAnimatedStateSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneRestorePreAnimatedStateSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneRestorePreAnimatedStateSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneRestorePreAnimatedStateSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSequenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSequenceActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSequenceTickManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSequenceTickManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSequenceTickManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSpawnablesSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSpawnablesSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSpawnablesSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSpawnSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSpawnSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSpawnSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSpawnTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSpawnTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneSpawnTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestMovieSceneTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.TestMovieSceneTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestMovieSceneSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.TestMovieSceneSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestMovieSceneSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.TestMovieSceneSequence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestMovieSceneSubTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneSubTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.TestMovieSceneSubTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestMovieSceneSubSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneSubSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.TestMovieSceneSubSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestMovieSceneEvalHookTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneEvalHookTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.TestMovieSceneEvalHookTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestMovieSceneEvalHookSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneEvalHookSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.TestMovieSceneEvalHookSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneTrackInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrackInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneTrackInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneTrackInstanceInstantiator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrackInstanceInstantiator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneTrackInstanceInstantiator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneTrackInstanceSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrackInstanceSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MovieScene.MovieSceneTrackInstanceSystem"));
		return ptr;
	}

}


