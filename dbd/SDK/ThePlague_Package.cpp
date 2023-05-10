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
	 * 		RVA    -> 0x051F9080
	 * 		Name   -> Function ThePlague.CleanseSickness.OnCleanseComplete
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCleanseSickness::OnCleanseComplete(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ThePlague.CleanseSickness.OnCleanseComplete"));
		
		UCleanseSickness_OnCleanseComplete_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCleanseSickness.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCleanseSickness::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePlague.CleanseSickness"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlagueSurvivorAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlagueSurvivorAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePlague.PlagueSurvivorAnalyticsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USicknessSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USicknessSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePlague.SicknessSurvivorSubAnimInstance"));
		return ptr;
	}

}


