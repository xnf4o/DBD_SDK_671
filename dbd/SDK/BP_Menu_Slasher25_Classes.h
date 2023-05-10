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
	 * BlueprintGeneratedClass BP_Menu_Slasher25.BP_Menu_Slasher25_C
	 * Size -> 0x0034 (FullSize[0x0720] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher25_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_LI2M[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              LamentConfMesh;                                          // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ChainsMesh;                                              // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Audio_KLR_25_C*                                  BP_Audio_KLR_26;                                         // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TM_LamentBoxVisibility_Dissolve_A56755B4431C0BE684B0688D2A09C847; // 0x0710(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TM_LamentBoxVisibility__Direction_A56755B4431C0BE684B0688D2A09C847; // 0x0714(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AEAA[0x3];                                   // 0x0715(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TM_LamentBoxVisibility;                                  // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TM_LamentBoxVisibility__FinishedFunc();
		void TM_LamentBoxVisibility__UpdateFunc();
		void ReceiveBeginPlay();
		void MakeLamentBoxDisappear();
		void MakeLamentBoxAppear();
		void ExecuteUbergraph_BP_Menu_Slasher25(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
