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
	 * 		Name   -> PredefinedFunction UActorPairQueryEvaluatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorPairQueryEvaluatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class QueryService.ActorPairQueryEvaluatorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A627C0
	 * 		Name   -> Function QueryService.ActorPairQueryEvaluatorSubscriberTest.OnRangeChanged
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActorPairQueryEvaluatorSubscriberTest::OnRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function QueryService.ActorPairQueryEvaluatorSubscriberTest.OnRangeChanged"));
		
		AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActorPairQueryEvaluatorSubscriberTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActorPairQueryEvaluatorSubscriberTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class QueryService.ActorPairQueryEvaluatorSubscriberTest"));
		return ptr;
	}

}


