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
	 * 		Name   -> Function BPI_Effect_Environment.BPI_Effect_Environment_C.KNY_StartSnowstorm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_Environment_C::KNY_StartSnowstorm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_Environment.BPI_Effect_Environment_C.KNY_StartSnowstorm"));
		
		UBPI_Effect_Environment_C_KNY_StartSnowstorm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Effect_Environment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Effect_Environment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPI_Effect_Environment.BPI_Effect_Environment_C"));
		return ptr;
	}

}


