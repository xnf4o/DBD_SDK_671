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
	 * BlueprintGeneratedClass BP_Menu_Slasher08.BP_Menu_Slasher08_C
	 * Size -> 0x002D (FullSize[0x0719] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher08_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_AOJJ[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_08_C*                                  BP_Audio_KLR_08;                                         // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ItemMesh_Axe;                                            // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Dissolve_01C466A74EFEFADB8976FC84BC95D44F;    // 0x0708(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_01C466A74EFEFADB8976FC84BC95D44F;  // 0x070C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IMRA[0x3];                                   // 0x070D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHatchetVisible;                                        // 0x0718(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void FX_MakeHatchetAppear();
		void FX_MakeHatchetDisappear();
		void OnCustomizationUpdated();
		void ReceiveBeginPlay();
		void K08_FX_MakeHatchetAppear();
		void K08_FX_MakeHatchetDisappear();
		void ExecuteUbergraph_BP_Menu_Slasher08(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
