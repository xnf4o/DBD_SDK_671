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
	 * 		Name   -> Function BP_Audio_KLR_06.BP_Audio_KLR_06_C.OnKillerSoundbankLoaded
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAkResult                                          Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_KLR_06_C::OnKillerSoundbankLoaded(EAkResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Audio_KLR_06.BP_Audio_KLR_06_C.OnKillerSoundbankLoaded"));
		
		UBP_Audio_KLR_06_C_OnKillerSoundbankLoaded_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Audio_KLR_06_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Audio_KLR_06_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_Audio_KLR_06.BP_Audio_KLR_06_C"));
		return ptr;
	}

}


