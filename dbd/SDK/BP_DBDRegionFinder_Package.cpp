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
	 * 		Name   -> Function BP_DBDRegionFinder.BP_DBDRegionFinder_C.ConstructionScript
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DBDRegionFinder_C::ConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_DBDRegionFinder.BP_DBDRegionFinder_C.ConstructionScript"));
		
		UBP_DBDRegionFinder_C_ConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DBDRegionFinder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DBDRegionFinder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_DBDRegionFinder.BP_DBDRegionFinder_C"));
		return ptr;
	}

}


