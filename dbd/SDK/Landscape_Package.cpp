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
	 * 		Name   -> PredefinedFunction AControlPointMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AControlPointMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.ControlPointMeshActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlPointMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlPointMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.ControlPointMeshComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06628110
	 * 		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(const class FName& ParameterName, const struct FLinearColor& value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue"));
		
		ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params {};
		params.ParameterName = ParameterName;
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06628020
	 * 		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(const class FName& ParameterName, class UTexture* value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue"));
		
		ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params {};
		params.ParameterName = ParameterName;
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06627F30
	 * 		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(const class FName& ParameterName, float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue"));
		
		ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params {};
		params.ParameterName = ParameterName;
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06627E10
	 * 		Name   -> Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      InRenderTarget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InExportHeightIntoRGChannel                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InExportLandscapeProxies                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ALandscapeProxy::LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget"));
		
		ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Params params {};
		params.InRenderTarget = InRenderTarget;
		params.InExportHeightIntoRGChannel = InExportHeightIntoRGChannel;
		params.InExportLandscapeProxies = InExportLandscapeProxies;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D509F0
	 * 		Name   -> Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          NewLandscapeMaterial                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial"));
		
		ALandscapeProxy_EditorSetLandscapeMaterial_Params params {};
		params.NewLandscapeMaterial = NewLandscapeMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06627A70
	 * 		Name   -> Function Landscape.LandscapeProxy.EditorApplySpline
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USplineComponent*                            InSplineComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartSideFalloff                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndSideFalloff                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartRoll                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndRoll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumSubdivisions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRaiseHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLowerHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULandscapeLayerInfoObject*                   PaintLayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        EditLayerName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, const class FName& EditLayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.EditorApplySpline"));
		
		ALandscapeProxy_EditorApplySpline_Params params {};
		params.InSplineComponent = InSplineComponent;
		params.StartWidth = StartWidth;
		params.EndWidth = EndWidth;
		params.StartSideFalloff = StartSideFalloff;
		params.EndSideFalloff = EndSideFalloff;
		params.StartRoll = StartRoll;
		params.EndRoll = EndRoll;
		params.NumSubdivisions = NumSubdivisions;
		params.bRaiseHeights = bRaiseHeights;
		params.bLowerHeights = bLowerHeights;
		params.PaintLayer = PaintLayer;
		params.EditLayerName = EditLayerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066279E0
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InComponentScreenSizeToUseSubSections                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff"));
		
		ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params params {};
		params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06627950
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InUseTessellationComponentScreenSizeFalloff                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff"));
		
		ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params params {};
		params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0507CF40
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InTessellationComponentScreenSize                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize"));
		
		ALandscapeProxy_ChangeTessellationComponentScreenSize_Params params {};
		params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x066278C0
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InLODDistanceFactor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor"));
		
		ALandscapeProxy_ChangeLODDistanceFactor_Params params {};
		params.InLODDistanceFactor = InLODDistanceFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06627830
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InComponentScreenSizeToUseSubSections                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections"));
		
		ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params {};
		params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscapeProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.Landscape"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate"));
		
		ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06626120
	 * 		Name   -> Function Landscape.LandscapeBlueprintBrushBase.Render
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InIsHeightmap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      InCombinedResult                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InWeightmapLayerName                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const class FName& InWeightmapLayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeBlueprintBrushBase.Render"));
		
		ALandscapeBlueprintBrushBase_Render_Params params {};
		params.InIsHeightmap = InIsHeightmap;
		params.InCombinedResult = InCombinedResult;
		params.InWeightmapLayerName = InWeightmapLayerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06625FA0
	 * 		Name   -> Function Landscape.LandscapeBlueprintBrushBase.Initialize
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  InLandscapeTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FIntPoint                                   InLandscapeSize                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntPoint                                   InLandscapeRenderTargetSize                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeBlueprintBrushBase::Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeBlueprintBrushBase.Initialize"));
		
		ALandscapeBlueprintBrushBase_Initialize_Params params {};
		params.InLandscapeTransform = InLandscapeTransform;
		params.InLandscapeSize = InLandscapeSize;
		params.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UObject*>                             OutStreamableAssets                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<class UObject*>* OutStreamableAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies"));
		
		ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStreamableAssets != nullptr)
			*OutStreamableAssets = params.OutStreamableAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscapeBlueprintBrushBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeBlueprintBrushBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeBlueprintBrushBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeLODStreamingProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeLODStreamingProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeLODStreamingProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06625ED0
	 * 		Name   -> Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic"));
		
		ULandscapeComponent_GetMaterialInstanceDynamic_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06625DC0
	 * 		Name   -> Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InPaintLayerName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const class FName& InPaintLayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation"));
		
		ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params params {};
		params.InLocation = InLocation;
		params.InPaintLayerName = InPaintLayerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06625CE0
	 * 		Name   -> Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULandscapeLayerInfoObject*                   PaintLayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation"));
		
		ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params params {};
		params.InLocation = InLocation;
		params.PaintLayer = PaintLayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscapeGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeGizmoActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeGizmoActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscapeGizmoActiveActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeGizmoActiveActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeGizmoActiveActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeGizmoRenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeGizmoRenderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeGizmoRenderComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeGrassType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeGrassType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeGrassType"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06625F70
	 * 		Name   -> Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent"));
		
		ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeHeightfieldCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeHeightfieldCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeHeightfieldCollisionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeInfo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeInfoMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeInfoMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeInfoMap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeLayerInfoObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeLayerInfoObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeLayerInfoObject"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeMaterialInstanceConstant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeMaterialInstanceConstant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeMaterialInstanceConstant"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeMeshCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeMeshCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeMeshCollisionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscapeMeshProxyActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeMeshProxyActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeMeshProxyActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeMeshProxyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeMeshProxyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeMeshProxyComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06629D10
	 * 		Name   -> Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents"));
		
		ULandscapeSplinesComponent_GetSplineMeshComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeSplinesComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeSplinesComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeSplinesComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeSplineControlPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeSplineControlPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeSplineControlPoint"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeSplineSegment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeSplineSegment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeSplineSegment"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscapeStreamingProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeStreamingProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeStreamingProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeSubsystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeWeightmapUsage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeWeightmapUsage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.LandscapeWeightmapUsage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionLandscapeGrassOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeGrassOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.MaterialExpressionLandscapeGrassOutput"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionLandscapeLayerBlend.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerBlend::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.MaterialExpressionLandscapeLayerBlend"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionLandscapeLayerCoords.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerCoords::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.MaterialExpressionLandscapeLayerCoords"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionLandscapeLayerSample.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerSample::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.MaterialExpressionLandscapeLayerSample"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionLandscapeLayerSwitch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerSwitch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.MaterialExpressionLandscapeLayerSwitch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionLandscapeLayerWeight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerWeight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.MaterialExpressionLandscapeLayerWeight"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionLandscapePhysicalMaterialOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionLandscapeVisibilityMask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeVisibilityMask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Landscape.MaterialExpressionLandscapeVisibilityMask"));
		return ptr;
	}

}

