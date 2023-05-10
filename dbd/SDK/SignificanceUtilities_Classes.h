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
	 * Class SignificanceUtilities.SignificanceStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USignificanceStrategy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SignificanceUtilities.DistanceBasedTickDisabler
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UDistanceBasedTickDisabler : public UActorComponent
	{
	public:
		bool                                                       _autoRegisterOwner;                                      // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _autoRegisterTimelines;                                  // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8TXT[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBHVRPerDetailModeFloat                             _tickDisableDistance;                                    // 0x00C0(0x00A0) Edit, NativeAccessSpecifierPrivate
		bool                                                       _insignificantWhenBehindTheCamera;                       // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IAQW[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActorComponent*>                             _components;                                             // 0x0168(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_78NV[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnregisterComponent(class UActorComponent* Component);
		void RegisterComponent(class UActorComponent* Component);
		static UClass* StaticClass();
	};

	/**
	 * Class SignificanceUtilities.SignificanceManagerComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class USignificanceManagerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QUIZ[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USignificanceStrategy*                               _significanceStrategy;                                   // 0x00D8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      _dependentActorsToCheckSignficance;                      // 0x00E0(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SignificanceUtilities.LinearSignificanceStrategy
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class ULinearSignificanceStrategy : public USignificanceStrategy
	{
	public:
		struct FBHVRPerDetailModeFloat                             _maxDistance;                                            // 0x0030(0x00A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		bool                                                       _updateEvenIfNotRendered;                                // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TNUE[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
