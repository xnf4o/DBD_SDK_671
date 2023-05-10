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
	 * 		Name   -> PredefinedFunction UGMAdaptiveShadowMapAtlas.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapAtlas::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMAdaptiveShadowMapAtlas"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGMAdaptiveShadowMapController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMAdaptiveShadowMapController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EA4240
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAtlas
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UGMAdaptiveShadowMapControllerComponent::RebuildAtlas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAtlas"));
		
		UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EA4210
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	bool UGMAdaptiveShadowMapControllerComponent::IsControllerDonePreallocatingTiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles"));
		
		UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EA41E0
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	int32_t UGMAdaptiveShadowMapControllerComponent::GetTileSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize"));
		
		UGMAdaptiveShadowMapControllerComponent_GetTileSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EA41B0
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	int32_t UGMAdaptiveShadowMapControllerComponent::GetTileCountY()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY"));
		
		UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EA4180
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	int32_t UGMAdaptiveShadowMapControllerComponent::GetTileCountX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX"));
		
		UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EA4160
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.DumpDebugInfo
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UGMAdaptiveShadowMapControllerComponent::DumpDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.DumpDebugInfo"));
		
		UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGMAdaptiveShadowMapControllerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapControllerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMAdaptiveShadowMapControllerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGMAdaptiveShadowMapSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMAdaptiveShadowMapSource"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EA4660
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     BoundingSphereCenter                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BoundingSphereRadius                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGMAdaptiveShadowMapSourceComponent::SetLightRadiusWithBounds(const struct FVector& BoundingSphereCenter, float BoundingSphereRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds"));
		
		UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Params params {};
		params.BoundingSphereCenter = BoundingSphereCenter;
		params.BoundingSphereRadius = BoundingSphereRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGMAdaptiveShadowMapSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGMAdaptiveShadowMapSourceComponentSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGMAdaptiveShadowMapSourceComponentSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponentSpawner"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGMAdaptiveShadowMapSourceDirectional.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapSourceDirectional::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMAdaptiveShadowMapSourceDirectional"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGMAdaptiveShadowMapSourceSpot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapSourceSpot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMAdaptiveShadowMapSourceSpot"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGMShadowDepthCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMShadowDepthCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMShadowDepthCapture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EA5220
	 * 		Name   -> Function GraphicsExtensions.GMShadowDepthCaptureComponent.RequestCaptureUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGMShadowDepthCaptureComponent::RequestCaptureUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GraphicsExtensions.GMShadowDepthCaptureComponent.RequestCaptureUpdate"));
		
		UGMShadowDepthCaptureComponent_RequestCaptureUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGMShadowDepthCaptureComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMShadowDepthCaptureComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GraphicsExtensions.GMShadowDepthCaptureComponent"));
		return ptr;
	}

}


