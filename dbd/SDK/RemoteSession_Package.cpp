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
	 * 		Name   -> PredefinedFunction URemoteSessionMediaOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteSessionMediaOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class RemoteSession.RemoteSessionMediaOutput"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteSessionMediaCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteSessionMediaCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class RemoteSession.RemoteSessionMediaCapture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteSessionSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteSessionSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class RemoteSession.RemoteSessionSettings"));
		return ptr;
	}

}


