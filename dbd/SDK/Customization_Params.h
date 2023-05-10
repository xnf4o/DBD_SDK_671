#pragma once

/**
 * Name: dbd
 * Version: 6711
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Customization.Accessory.BP_DestroyComponent
	 */
	struct UAccessory_BP_DestroyComponent_Params
	{
	public:
		class UActorComponent*                                     componentToDestroy;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Customization.AccessoryUtilities.AddBoneSocketLocalVelocityEvaluatorToAccessory
	 */
	struct UAccessoryUtilities_AddBoneSocketLocalVelocityEvaluatorToAccessory_Params
	{
	public:
		class UAccessory*                                          Accessory;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        trackedBoneSocketNames;                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UBoneSocketLocalVelocityEvaluator*                   ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
