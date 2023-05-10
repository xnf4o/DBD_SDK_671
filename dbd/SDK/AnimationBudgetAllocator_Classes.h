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
	 * Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
		void STATIC_EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
	 * Size -> 0x0020 (FullSize[0x0FC0] - InheritedSize[0x0FA0])
	 */
	class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_3DB2[0x18];                                  // 0x0FA0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoRegisterWithBudgetAllocator : 1;                    // 0x0FB8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoCalculateSignificance : 1;                          // 0x0FB8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldUseActorRenderedFlag : 1;                         // 0x0FB8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_41IG[0x7];                                   // 0x0FB9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
