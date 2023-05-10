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
	 * 		Name   -> PredefinedFunction USignificanceStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignificanceStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SignificanceUtilities.SignificanceStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A04CB0
	 * 		Name   -> Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDistanceBasedTickDisabler::UnregisterComponent(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent"));
		
		UDistanceBasedTickDisabler_UnregisterComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A04C20
	 * 		Name   -> Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDistanceBasedTickDisabler::RegisterComponent(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent"));
		
		UDistanceBasedTickDisabler_RegisterComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistanceBasedTickDisabler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistanceBasedTickDisabler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SignificanceUtilities.DistanceBasedTickDisabler"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USignificanceManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignificanceManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SignificanceUtilities.SignificanceManagerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinearSignificanceStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinearSignificanceStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SignificanceUtilities.LinearSignificanceStrategy"));
		return ptr;
	}

}


