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
	 * Class DBDAnimationBudgetAllocator.DBDSkeletalMeshComponentBudgeted
	 * Size -> 0x006C (FullSize[0x102C] - InheritedSize[0x0FC0])
	 */
	class UDBDSkeletalMeshComponentBudgeted : public USkeletalMeshComponentBudgeted
	{
	public:
		unsigned char                                              UnknownData_KEPA[0x49];                                  // 0x0FC0(0x0049) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _autoRegisterToAnimBudgeter;                             // 0x1009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _autoComputeSignificance;                                // 0x100A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IRTU[0x5];                                   // 0x100B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USignificanceStrategy*                               _significanceStrategy;                                   // 0x1010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimBudgeterSignificanceStrategy*                   _animBudgeterSignificanceStrategy;                       // 0x1018(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZN8P[0xC];                                   // 0x1020(0x000C) Fix size for supers

	public:
		void SetAnimationDependency(class USkeletalMeshComponent* meshDependency);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimationBudgetAllocator.AnimBudgeterSignificanceStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnimBudgeterSignificanceStrategy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimationBudgetAllocator.SimpleAnimBudgeterSignificanceStrategy
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class USimpleAnimBudgeterSignificanceStrategy : public UAnimBudgeterSignificanceStrategy
	{
	public:
		bool                                                       _tickEvenIfNotRendered;                                  // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YJ70[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimationBudgetAllocator.DBDAnimationBudgetAllocator
	 * Size -> 0x0120 (FullSize[0x0158] - InheritedSize[0x0038])
	 */
	class UDBDAnimationBudgetAllocator : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_FRYE[0x120];                                 // 0x0038(0x0120) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimationBudgetAllocator.SkeletalMeshActorBudgeted
	 * Size -> 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
	 */
	class ASkeletalMeshActorBudgeted : public ASkeletalMeshActor
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
