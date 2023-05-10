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
	 * 		Name   -> PredefinedFunction UGeometryCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCache"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82970
	 * 		Name   -> Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent"));
		
		AGeometryCacheActor_GetGeometryCacheComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeometryCacheActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCacheActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheCodecBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheCodecBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheCodecRaw.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecRaw::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheCodecRaw"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheCodecV1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecV1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheCodecV1"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F83150
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Time                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInIsRunning                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInBackwards                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInIsLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.TickAtThisTime"));
		
		UGeometryCacheComponent_TickAtThisTime_Params params {};
		params.Time = Time;
		params.bInIsRunning = bInIsRunning;
		params.bInBackwards = bInBackwards;
		params.bInIsLooping = bInIsLooping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F83130
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGeometryCacheComponent::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.Stop"));
		
		UGeometryCacheComponent_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F830B0
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewStartTimeOffset                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset"));
		
		UGeometryCacheComponent_SetStartTimeOffset_Params params {};
		params.NewStartTimeOffset = NewStartTimeOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F83030
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewPlaybackSpeed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed"));
		
		UGeometryCacheComponent_SetPlaybackSpeed_Params params {};
		params.NewPlaybackSpeed = NewPlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82FB0
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewMotionVectorScale                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetMotionVectorScale(float NewMotionVectorScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale"));
		
		UGeometryCacheComponent_SetMotionVectorScale_Params params {};
		params.NewMotionVectorScale = NewMotionVectorScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82D20
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewLooping                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetLooping(bool bNewLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.SetLooping"));
		
		UGeometryCacheComponent_SetLooping_Params params {};
		params.bNewLooping = bNewLooping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82C80
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGeometryCache*                              NewGeomCache                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.SetGeometryCache"));
		
		UGeometryCacheComponent_SetGeometryCache_Params params {};
		params.NewGeomCache = NewGeomCache;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82BF0
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewExtrapolating                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetExtrapolateFrames(bool bNewExtrapolating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames"));
		
		UGeometryCacheComponent_SetExtrapolateFrames_Params params {};
		params.bNewExtrapolating = bNewExtrapolating;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82BD0
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGeometryCacheComponent::PlayReversedFromEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd"));
		
		UGeometryCacheComponent_PlayReversedFromEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82BB0
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.PlayReversed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGeometryCacheComponent::PlayReversed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.PlayReversed"));
		
		UGeometryCacheComponent_PlayReversed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82B90
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.PlayFromStart
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGeometryCacheComponent::PlayFromStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.PlayFromStart"));
		
		UGeometryCacheComponent_PlayFromStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82B70
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGeometryCacheComponent::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.Play"));
		
		UGeometryCacheComponent_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82B50
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGeometryCacheComponent::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.Pause"));
		
		UGeometryCacheComponent_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82B20
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGeometryCacheComponent::IsPlayingReversed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed"));
		
		UGeometryCacheComponent_IsPlayingReversed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82AF0
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGeometryCacheComponent::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.IsPlaying"));
		
		UGeometryCacheComponent_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82AC0
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGeometryCacheComponent::IsLooping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.IsLooping"));
		
		UGeometryCacheComponent_IsLooping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82A90
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGeometryCacheComponent::IsExtrapolatingFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames"));
		
		UGeometryCacheComponent_IsExtrapolatingFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82A60
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGeometryCacheComponent::GetStartTimeOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset"));
		
		UGeometryCacheComponent_GetStartTimeOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82A30
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGeometryCacheComponent::GetPlaybackSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed"));
		
		UGeometryCacheComponent_GetPlaybackSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82A00
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGeometryCacheComponent::GetPlaybackDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection"));
		
		UGeometryCacheComponent_GetPlaybackDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F829D0
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGeometryCacheComponent::GetNumberOfFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames"));
		
		UGeometryCacheComponent_GetNumberOfFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F829A0
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGeometryCacheComponent::GetMotionVectorScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale"));
		
		UGeometryCacheComponent_GetMotionVectorScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82940
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGeometryCacheComponent::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.GetDuration"));
		
		UGeometryCacheComponent_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82910
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetAnimationTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGeometryCacheComponent::GetAnimationTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheComponent.GetAnimationTime"));
		
		UGeometryCacheComponent_GetAnimationTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F826B0
	 * 		Name   -> Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGeometryCacheMeshData                      MeshData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              SampleTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample"));
		
		UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params params {};
		params.MeshData = MeshData;
		params.SampleTime = SampleTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrack_FlipbookAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_FlipbookAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrackStreamable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrackStreamable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheTrackStreamable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82DB0
	 * 		Name   -> Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGeometryCacheMeshData                      NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh"));
		
		UGeometryCacheTrack_TransformAnimation_SetMesh_Params params {};
		params.NewMeshData = NewMeshData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrack_TransformAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_TransformAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheTrack_TransformAnimation"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F82DB0
	 * 		Name   -> Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGeometryCacheMeshData                      NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh"));
		
		UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params params {};
		params.NewMeshData = NewMeshData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrack_TransformGroupAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_TransformGroupAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation"));
		return ptr;
	}

}


