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
	 * 		Name   -> PredefinedFunction UAIInteractableTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIInteractableTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Interaction.AIInteractableTargetInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Interaction.Interaction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionPerformer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionPerformer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Interaction.InteractionPerformer"));
		return ptr;
	}

}


