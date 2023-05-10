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
	 * 		RVA    -> 0x04412940
	 * 		Name   -> Function Customization.Accessory.BP_DestroyComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             componentToDestroy                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAccessory::BP_DestroyComponent(class UActorComponent* componentToDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Customization.Accessory.BP_DestroyComponent"));
		
		UAccessory_BP_DestroyComponent_Params params {};
		params.componentToDestroy = componentToDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAccessory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAccessory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Customization.Accessory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04412B30
	 * 		Name   -> Function Customization.AccessoryUtilities.AddBoneSocketLocalVelocityEvaluatorToAccessory
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAccessory*                                  Accessory                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                trackedBoneSocketNames                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UBoneSocketLocalVelocityEvaluator* UAccessoryUtilities::STATIC_AddBoneSocketLocalVelocityEvaluatorToAccessory(class UAccessory* Accessory, TArray<class FName> trackedBoneSocketNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Customization.AccessoryUtilities.AddBoneSocketLocalVelocityEvaluatorToAccessory"));
		
		UAccessoryUtilities_AddBoneSocketLocalVelocityEvaluatorToAccessory_Params params {};
		params.Accessory = Accessory;
		params.trackedBoneSocketNames = trackedBoneSocketNames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAccessoryUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAccessoryUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Customization.AccessoryUtilities"));
		return ptr;
	}

}


