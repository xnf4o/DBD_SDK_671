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
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C.GetOwningSkeletalMesh
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_CustomizationFunctions_C::STATIC_GetOwningSkeletalMesh(class UAnimInstance* AnimInstance, class UObject* __WorldContext, class USkeletalMeshComponent** SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C.GetOwningSkeletalMesh"));
		
		UBPFL_CustomizationFunctions_C_GetOwningSkeletalMesh_Params params {};
		params.AnimInstance = AnimInstance;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkeletalMeshComponent != nullptr)
			*SkeletalMeshComponent = params.SkeletalMeshComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_CustomizationFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_CustomizationFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C"));
		return ptr;
	}

}


