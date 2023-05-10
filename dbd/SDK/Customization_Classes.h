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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Customization.Accessory
	 * Size -> 0x0004 (FullSize[0x1030] - InheritedSize[0x102C])
	 */
	class UAccessory : public UDBDSkeletalMeshComponentBudgeted
	{
	public:
		unsigned char                                              UnknownData_DDS4[0x4];                                   // 0x102C(0x0004) Fix Super Size

	public:
		void BP_DestroyComponent(class UActorComponent* componentToDestroy);
		static UClass* StaticClass();
	};

	/**
	 * Class Customization.AccessoryUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAccessoryUtilities : public UBlueprintFunctionLibrary
	{
	public:
		class UBoneSocketLocalVelocityEvaluator* STATIC_AddBoneSocketLocalVelocityEvaluatorToAccessory(class UAccessory* Accessory, TArray<class FName> trackedBoneSocketNames);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
