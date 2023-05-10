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
	 * 		Name   -> PredefinedFunction USentryIoBaseSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryIoBaseSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SentryIo.SentryIoBaseSubsystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentryIoSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryIoSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SentryIo.SentryIoSubsystem"));
		return ptr;
	}

}


