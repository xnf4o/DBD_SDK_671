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
	 * 		RVA    -> 0x044B4870
	 * 		Name   -> Function DBDAnimationBudgetAllocator.DBDSkeletalMeshComponentBudgeted.SetAnimationDependency
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      meshDependency                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDSkeletalMeshComponentBudgeted::SetAnimationDependency(class USkeletalMeshComponent* meshDependency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimationBudgetAllocator.DBDSkeletalMeshComponentBudgeted.SetAnimationDependency"));
		
		UDBDSkeletalMeshComponentBudgeted_SetAnimationDependency_Params params {};
		params.meshDependency = meshDependency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDSkeletalMeshComponentBudgeted.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDSkeletalMeshComponentBudgeted::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimationBudgetAllocator.DBDSkeletalMeshComponentBudgeted"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBudgeterSignificanceStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBudgeterSignificanceStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimationBudgetAllocator.AnimBudgeterSignificanceStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleAnimBudgeterSignificanceStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleAnimBudgeterSignificanceStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimationBudgetAllocator.SimpleAnimBudgeterSignificanceStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDAnimationBudgetAllocator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDAnimationBudgetAllocator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimationBudgetAllocator.DBDAnimationBudgetAllocator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASkeletalMeshActorBudgeted.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASkeletalMeshActorBudgeted::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimationBudgetAllocator.SkeletalMeshActorBudgeted"));
		return ptr;
	}

}


