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
	 * BlueprintGeneratedClass BP_Menu_Slasher28.BP_Menu_Slasher28_C
	 * Size -> 0x002C (FullSize[0x0718] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher28_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_6JZQ[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_28_C*                                  BP_Audio_KLR_29;                                         // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              MoriArmes;                                               // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HorseHead;                                               // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GrabArmes;                                               // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetAudioSwitchSubKillerState(const class FString& SwitchState);
		void FX_K28_NightBegins();
		void FX_K28_NightEnds();
		void FX_K28_ExitingLocker();
		void FX_K28_ShowKiller();
		void FX_K28_HideKiller();
		void ExecuteUbergraph_BP_Menu_Slasher28(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
