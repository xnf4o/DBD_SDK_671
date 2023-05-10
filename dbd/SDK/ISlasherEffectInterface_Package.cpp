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
	 * 		Name   -> Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetTrapPlacementLocation_World
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UISlasherEffectInterface_C::GetTrapPlacementLocation_World(struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetTrapPlacementLocation_World"));
		
		UISlasherEffectInterface_C_GetTrapPlacementLocation_World_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetSlasherAudioComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AudioComponent                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UISlasherEffectInterface_C::GetSlasherAudioComponent(class UAkComponent** AudioComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetSlasherAudioComponent"));
		
		UISlasherEffectInterface_C_GetSlasherAudioComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AudioComponent != nullptr)
			*AudioComponent = params.AudioComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UISlasherEffectInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UISlasherEffectInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass ISlasherEffectInterface.ISlasherEffectInterface_C"));
		return ptr;
	}

}


