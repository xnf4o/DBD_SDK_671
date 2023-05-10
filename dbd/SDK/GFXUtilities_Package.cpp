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
	 * 		RVA    -> 0x07A3F7F0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.UpdateMaterials
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBatchMeshCommands::UpdateMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.UpdateMaterials"));
		
		UBatchMeshCommands_UpdateMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F700
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetVectorParameter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetVectorParameter(const class FName& ParameterName, const struct FVector& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetVectorParameter"));
		
		UBatchMeshCommands_SetVectorParameter_Params params {};
		params.ParameterName = ParameterName;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F610
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetTextureParameter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    newTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetTextureParameter(const class FName& ParameterName, class UTexture* newTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetTextureParameter"));
		
		UBatchMeshCommands_SetTextureParameter_Params params {};
		params.ParameterName = ParameterName;
		params.newTexture = newTexture;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F520
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetStencilIntegerScalarParameter(const class FName& ParameterName, int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter"));
		
		UBatchMeshCommands_SetStencilIntegerScalarParameter_Params params {};
		params.ParameterName = ParameterName;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F430
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetScalarParameter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetScalarParameter(const class FName& ParameterName, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetScalarParameter"));
		
		UBatchMeshCommands_SetScalarParameter_Params params {};
		params.ParameterName = ParameterName;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0524D970
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               inRenderInMainPass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetRenderInMainPass(bool inRenderInMainPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass"));
		
		UBatchMeshCommands_SetRenderInMainPass_Params params {};
		params.inRenderInMainPass = inRenderInMainPass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F3A0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               renderInCustomDepth                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetRenderInCustomDepth(bool renderInCustomDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth"));
		
		UBatchMeshCommands_SetRenderInCustomDepth_Params params {};
		params.renderInCustomDepth = renderInCustomDepth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F310
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               renderInCustomColour                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetRenderInCustomColourNoDepth(bool renderInCustomColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth"));
		
		UBatchMeshCommands_SetRenderInCustomColourNoDepth_Params params {};
		params.renderInCustomColour = renderInCustomColour;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F280
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               receivesDecals                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetReceivesDecals(bool receivesDecals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetReceivesDecals"));
		
		UBatchMeshCommands_SetReceivesDecals_Params params {};
		params.receivesDecals = receivesDecals;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F1E0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GroupName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetMaterial(const class FString& GroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetMaterial"));
		
		UBatchMeshCommands_SetMaterial_Params params {};
		params.GroupName = GroupName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F160
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLightingChannels                           LightingChannels                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetLightingChannelForAllMeshes(const struct FLightingChannels& LightingChannels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes"));
		
		UBatchMeshCommands_SetLightingChannelForAllMeshes_Params params {};
		params.LightingChannels = LightingChannels;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F0D0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            stencilValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetCustomDepthStencilValue(int32_t stencilValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue"));
		
		UBatchMeshCommands_SetCustomDepthStencilValue_Params params {};
		params.stencilValue = stencilValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3EFE0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetColourParameter
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                NewValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetColourParameter(const class FName& ParameterName, const struct FLinearColor& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetColourParameter"));
		
		UBatchMeshCommands_SetColourParameter_Params params {};
		params.ParameterName = ParameterName;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3EF50
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               castCinematicShadows                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetCastCinematicShadows(bool castCinematicShadows)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows"));
		
		UBatchMeshCommands_SetCastCinematicShadows_Params params {};
		params.castCinematicShadows = castCinematicShadows;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3EEC0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          MaterialInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::SetAllToSameMaterial(class UMaterialInterface* MaterialInterface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial"));
		
		UBatchMeshCommands_SetAllToSameMaterial_Params params {};
		params.MaterialInterface = MaterialInterface;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3EEA0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.ResetMaterials
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBatchMeshCommands::ResetMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.ResetMaterials"));
		
		UBatchMeshCommands_ResetMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3EDA0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBatchMeshCommands::CopyFirstScalarParameter(const class FName& ParameterName, float* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter"));
		
		UBatchMeshCommands_CopyFirstScalarParameter_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3ECD0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPropagateToChildren                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::BatchSetVisibility(bool bNewVisibility, bool bPropagateToChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.BatchSetVisibility"));
		
		UBatchMeshCommands_BatchSetVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		params.bPropagateToChildren = bPropagateToChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3EC40
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Skip                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::BatchSetSkipComponentAndChildrenTransformUpdate(bool Skip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate"));
		
		UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Params params {};
		params.Skip = Skip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3EBB0
	 * 		Name   -> Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBatchMeshCommands::BatchSetComponentTickEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled"));
		
		UBatchMeshCommands_BatchSetComponentTickEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBatchMeshCommands.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBatchMeshCommands::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.BatchMeshCommands"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlternatingColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlternatingColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.AlternatingColor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseOutlineRenderStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseOutlineRenderStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.BaseOutlineRenderStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3FA60
	 * 		Name   -> Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 ignoredPrimitives                                          (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UClippableProviderComponent::SetIgnoredPrimitives(TArray<class UPrimitiveComponent*> ignoredPrimitives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives"));
		
		UClippableProviderComponent_SetIgnoredPrimitives_Params params {};
		params.ignoredPrimitives = ignoredPrimitives;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A3F9B0
	 * 		Name   -> Function GFXUtilities.ClippableProviderComponent.AddIgnoredPrimitives
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 ignoredPrimitives                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UClippableProviderComponent::AddIgnoredPrimitives(TArray<class UPrimitiveComponent*> ignoredPrimitives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.ClippableProviderComponent.AddIgnoredPrimitives"));
		
		UClippableProviderComponent_AddIgnoredPrimitives_Params params {};
		params.ignoredPrimitives = ignoredPrimitives;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClippableProviderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClippableProviderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.ClippableProviderComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClonedMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClonedMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.ClonedMeshComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClonedMeshComponentTranslucentOutline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClonedMeshComponentTranslucentOutline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.ClonedMeshComponentTranslucentOutline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClonedStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClonedStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.ClonedStaticMeshComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClonedSkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClonedSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.ClonedSkeletalMeshComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomDepthOutlineRenderStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomDepthOutlineRenderStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.CustomDepthOutlineRenderStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A40910
	 * 		Name   -> Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetIBLMultiplicator
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              IBLMultiplicator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDReflectionCaptureSpawnerComponent::SetIBLMultiplicator(float IBLMultiplicator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetIBLMultiplicator"));
		
		UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Params params {};
		params.IBLMultiplicator = IBLMultiplicator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A40890
	 * 		Name   -> Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ContributionFactor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDReflectionCaptureSpawnerComponent::SetContributionFactor(float ContributionFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor"));
		
		UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Params params {};
		params.ContributionFactor = ContributionFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A40810
	 * 		Name   -> Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Brightness                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDReflectionCaptureSpawnerComponent::SetBrightness(float Brightness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness"));
		
		UDBDReflectionCaptureSpawnerComponent_SetBrightness_Params params {};
		params.Brightness = Brightness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDReflectionCaptureSpawnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDReflectionCaptureSpawnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.DBDReflectionCaptureSpawnerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDBoxReflectionCaptureSpawnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDBoxReflectionCaptureSpawnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.DBDBoxReflectionCaptureSpawnerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDCullDistanceVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDCullDistanceVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.DBDCullDistanceVolumeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDSphereReflectionCaptureSpawnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDSphereReflectionCaptureSpawnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.DBDSphereReflectionCaptureSpawnerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A40C10
	 * 		Name   -> Function GFXUtilities.GFXUtilities.ActivateVFX
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFXUtilities::STATIC_ActivateVFX(class USkeletalMeshComponent* SkeletalMeshComponent, bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.GFXUtilities.ActivateVFX"));
		
		UGFXUtilities_ActivateVFX_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFXUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFXUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.GFXUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInFrustumComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInFrustumComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.InFrustumComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A41890
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isRandom                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightIntensityTimelineComponent::SetRandomizeLength(bool isRandom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength"));
		
		ULightIntensityTimelineComponent_SetRandomizeLength_Params params {};
		params.isRandom = isRandom;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A41810
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetMinLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              newMinValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightIntensityTimelineComponent::SetMinLength(float newMinValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.SetMinLength"));
		
		ULightIntensityTimelineComponent_SetMinLength_Params params {};
		params.newMinValue = newMinValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A41790
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetMaxLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              newMaxValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightIntensityTimelineComponent::SetMaxLength(float newMaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.SetMaxLength"));
		
		ULightIntensityTimelineComponent_SetMaxLength_Params params {};
		params.newMaxValue = newMaxValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A41770
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULightIntensityTimelineComponent::SetLightToMaxValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue"));
		
		ULightIntensityTimelineComponent_SetLightToMaxValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A416E0
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.SetLightCurve
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCurveFloat*                                 lightcurve                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightIntensityTimelineComponent::SetLightCurve(class UCurveFloat* lightcurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.SetLightCurve"));
		
		ULightIntensityTimelineComponent_SetLightCurve_Params params {};
		params.lightcurve = lightcurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A416C0
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULightIntensityTimelineComponent::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.Reset"));
		
		ULightIntensityTimelineComponent_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A416A0
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.RegisterForTick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULightIntensityTimelineComponent::RegisterForTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.RegisterForTick"));
		
		ULightIntensityTimelineComponent_RegisterForTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A41680
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.DeactivateTick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULightIntensityTimelineComponent::DeactivateTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.DeactivateTick"));
		
		ULightIntensityTimelineComponent_DeactivateTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A41550
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialHelper*                             matHelper                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        propName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightIntensityTimelineComponent::AddMaterialHelper(class UMaterialHelper* matHelper, const class FName& propName, float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper"));
		
		ULightIntensityTimelineComponent_AddMaterialHelper_Params params {};
		params.matHelper = matHelper;
		params.propName = propName;
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A41480
	 * 		Name   -> Function GFXUtilities.LightIntensityTimelineComponent.AddLight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULightComponent*                             Light                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightIntensityTimelineComponent::AddLight(class ULightComponent* Light, float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.LightIntensityTimelineComponent.AddLight"));
		
		ULightIntensityTimelineComponent_AddLight_Params params {};
		params.Light = Light;
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightIntensityTimelineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightIntensityTimelineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.LightIntensityTimelineComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionBHVRCustomColorOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionBHVRCustomColorOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.MaterialExpressionBHVRCustomColorOutput"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionBHVRCustomColorSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionBHVRCustomColorSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.MaterialExpressionBHVRCustomColorSampler"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A41DA0
	 * 		Name   -> Function GFXUtilities.MaterialHelper.RefreshMeshes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMaterialHelper::RefreshMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.MaterialHelper.RefreshMeshes"));
		
		UMaterialHelper_RefreshMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A41D10
	 * 		Name   -> Function GFXUtilities.MaterialHelper.RefreshMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMeshComponent*                              mc                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaterialHelper::RefreshMesh(class UMeshComponent* mc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.MaterialHelper.RefreshMesh"));
		
		UMaterialHelper_RefreshMesh_Params params {};
		params.mc = mc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.MaterialHelper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialHelperUnaffectedComponentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialHelperUnaffectedComponentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.MaterialHelperUnaffectedComponentInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialHelperUnaffectedStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialHelperUnaffectedStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.MaterialHelperUnaffectedStaticMeshComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialHelperUnaffectedNiagaraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialHelperUnaffectedNiagaraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.MaterialHelperUnaffectedNiagaraComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshCloningFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshCloningFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.MeshCloningFactory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A426F0
	 * 		Name   -> Function GFXUtilities.OuterlineComponent.SetIntensity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOuterlineComponent::SetIntensity(float Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.OuterlineComponent.SetIntensity"));
		
		UOuterlineComponent_SetIntensity_Params params {};
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOuterlineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOuterlineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.OuterlineComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A429E0
	 * 		Name   -> Function GFXUtilities.StencilOutlineRenderStrategy.EnableCopyStencilToCustomStencil
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStencilOutlineRenderStrategy::STATIC_EnableCopyStencilToCustomStencil(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GFXUtilities.StencilOutlineRenderStrategy.EnableCopyStencilToCustomStencil"));
		
		UStencilOutlineRenderStrategy_EnableCopyStencilToCustomStencil_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStencilOutlineRenderStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStencilOutlineRenderStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.StencilOutlineRenderStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTranslucentOutlineRenderStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTranslucentOutlineRenderStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GFXUtilities.TranslucentOutlineRenderStrategy"));
		return ptr;
	}

}


