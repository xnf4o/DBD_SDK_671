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
	 * ScriptStruct DBDAnimationBudgetAllocator.RootPrerequisiteRegisteredHandle
	 * Size -> 0x0010
	 */
	struct FRootPrerequisiteRegisteredHandle
	{
	public:
		class USkeletalMeshComponentBudgeted*                      RootPrerequisite;                                        // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G59I[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnimationBudgetAllocator.DBDAnimBudgetAllocatorComponentData
	 * Size -> 0x0038
	 */
	struct FDBDAnimBudgetAllocatorComponentData
	{
	public:
		unsigned char                                              UnknownData_ZOZR[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnimationBudgetAllocator.SkeletalMeshComponentData
	 * Size -> 0x0020
	 */
	struct FSkeletalMeshComponentData
	{
	public:
		class UDBDSkeletalMeshComponentBudgeted*                   SkeletalMeshComponent;                                   // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HHY[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
