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
	 * BlueprintGeneratedClass BP_Menu_Slasher29.BP_Menu_Slasher29_C
	 * Size -> 0x001C (FullSize[0x0708] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher29_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_9W89[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              TentacleArm;                                             // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Audio_KLR_29_C*                                  BP_Audio_KLR_30;                                         // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BeginSmokeIn();
		void EnableCloth();
		void PlayTentacleInterrupt();
		void ExecuteUbergraph_BP_Menu_Slasher29(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
