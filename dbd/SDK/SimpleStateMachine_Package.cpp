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
	 * 		Name   -> PredefinedFunction USimpleStateMachineBaseState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleStateMachineBaseState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimpleStateMachine.SimpleStateMachineBaseState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleStateMachineBaseTransition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleStateMachineBaseTransition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimpleStateMachine.SimpleStateMachineBaseTransition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleStateMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleStateMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimpleStateMachine.SimpleStateMachine"));
		return ptr;
	}

}


