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
	 * 		Name   -> PredefinedFunction UTestInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UnitTestUtilities.TestInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UnitTestUtilities.TestActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UnitTestUtilities.TestActorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestActorComponentImplementingTestInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestActorComponentImplementingTestInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UnitTestUtilities.TestActorComponentImplementingTestInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestActorImplementingTestInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestActorImplementingTestInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UnitTestUtilities.TestActorImplementingTestInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestMovableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestMovableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UnitTestUtilities.TestMovableActor"));
		return ptr;
	}

}


