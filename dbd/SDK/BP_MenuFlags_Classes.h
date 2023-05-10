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
	 * BlueprintGeneratedClass BP_MenuFlags.BP_MenuFlags_C
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class ABP_MenuFlags_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialHelper*                                     MaterialHelper;                                          // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Flag03;                                                  // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Flag02;                                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Flag01;                                                  // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TML_FlagDissolveController_DissolveSwitch_44E3C9B54D31D0CA3010458ADEAE888A; // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_FlagDissolveController_BannerOpacity_44E3C9B54D31D0CA3010458ADEAE888A; // 0x0264(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_FlagDissolveController_Banner_Dissolve_Progress_44E3C9B54D31D0CA3010458ADEAE888A; // 0x0268(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_FlagDissolveController_Flag_Stand_Dissolve_Progress_44E3C9B54D31D0CA3010458ADEAE888A; // 0x026C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_FlagDissolveController__Direction_44E3C9B54D31D0CA3010458ADEAE888A; // 0x0270(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZYOL[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_FlagDissolveController;                              // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TML_FlagDissolveController__FinishedFunc();
		void TML_FlagDissolveController__UpdateFunc();
		void TML_FlagDissolveController__DisableShadow__EventFunc();
		void Event_DissolveFlag();
		void Event_QuickDissolveFlag_In();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_MenuFlags(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
