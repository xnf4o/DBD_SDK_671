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
	 * 		Name   -> PredefinedFunction AStandInMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandInMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class StandinActor.StandInMeshActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStandinProxyContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandinProxyContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class StandinActor.StandinProxyContainer"));
		return ptr;
	}

}


