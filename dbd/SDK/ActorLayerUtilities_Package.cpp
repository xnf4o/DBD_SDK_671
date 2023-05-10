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
	 * 		RVA    -> 0x0421D5C0
	 * 		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorLayer                                 Layer                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULayersBlueprintLibrary::STATIC_RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer"));
		
		ULayersBlueprintLibrary_RemoveActorFromLayer_Params params {};
		params.InActor = InActor;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0421D4A0
	 * 		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorLayer                                 ActorLayer                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> ULayersBlueprintLibrary::STATIC_GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors"));
		
		ULayersBlueprintLibrary_GetActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorLayer = ActorLayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0421D3D0
	 * 		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorLayer                                 Layer                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULayersBlueprintLibrary::STATIC_AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer"));
		
		ULayersBlueprintLibrary_AddActorToLayer_Params params {};
		params.InActor = InActor;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULayersBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULayersBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ActorLayerUtilities.LayersBlueprintLibrary"));
		return ptr;
	}

}


