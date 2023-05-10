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
	 * 		Name   -> Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.UpdateHarpoonOnRifle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      RifleMesh                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher19_C::UpdateHarpoonOnRifle(class USkeletalMeshComponent* RifleMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.UpdateHarpoonOnRifle"));
		
		ABP_Menu_Slasher19_C_UpdateHarpoonOnRifle_Params params {};
		params.RifleMesh = RifleMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Slasher19_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ReceiveBeginPlay"));
		
		ABP_Menu_Slasher19_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.OnMeshSwitchBP
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECustomizationCategory                             Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher19_C::OnMeshSwitchBP(ECustomizationCategory Category, class USkeletalMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.OnMeshSwitchBP"));
		
		ABP_Menu_Slasher19_C_OnMeshSwitchBP_Params params {};
		params.Category = Category;
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ExecuteUbergraph_BP_Menu_Slasher19
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher19_C::ExecuteUbergraph_BP_Menu_Slasher19(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ExecuteUbergraph_BP_Menu_Slasher19"));
		
		ABP_Menu_Slasher19_C_ExecuteUbergraph_BP_Menu_Slasher19_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Menu_Slasher19_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Slasher19_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_Menu_Slasher19.BP_Menu_Slasher19_C"));
		return ptr;
	}

}


