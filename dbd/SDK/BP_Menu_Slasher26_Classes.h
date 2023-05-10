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
	 * BlueprintGeneratedClass BP_Menu_Slasher26.BP_Menu_Slasher26_C
	 * Size -> 0x0020 (FullSize[0x070C] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher26_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_N0HS[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_26_C*                                  BP_Audio_KLR_27;                                         // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CrowHead_Mesh;                                           // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomInterupt_1;                                        // 0x0708(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetIn();
		void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Menu_Slasher26(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
