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
	 * 		Name   -> Function BP_VFX_Killer_AnimNotifies_Handler.BP_VFX_Killer_AnimNotifies_Handler_C.HandleAnimNotify
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NotifyName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_VFX_Killer_AnimNotifies_Handler_C::HandleAnimNotify(class AActor* Player, const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_VFX_Killer_AnimNotifies_Handler.BP_VFX_Killer_AnimNotifies_Handler_C.HandleAnimNotify"));
		
		UBP_VFX_Killer_AnimNotifies_Handler_C_HandleAnimNotify_Params params {};
		params.Player = Player;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_VFX_Killer_AnimNotifies_Handler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_VFX_Killer_AnimNotifies_Handler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_VFX_Killer_AnimNotifies_Handler.BP_VFX_Killer_AnimNotifies_Handler_C"));
		return ptr;
	}

}


