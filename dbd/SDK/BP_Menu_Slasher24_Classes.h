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
	 * BlueprintGeneratedClass BP_Menu_Slasher24.BP_Menu_Slasher24_C
	 * Size -> 0x0024 (FullSize[0x0710] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher24_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_6BAO[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UK24_KillerAudioMenuReaction_C*                      K24_KillerAudioMenuReaction;                             // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              _tentacle;                                               // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Audio_KLR_24_C*                                  BP_Audio_KLR_25;                                         // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnNotifyEnd_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void OnNotifyBegin_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void OnInterrupted_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void OnBlendOut_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void OnCompleted_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void ReceiveBeginPlay();
		void K24_FX_HideTentacle();
		void K24_FX_ShowTentacle();
		void ExecuteUbergraph_BP_Menu_Slasher24(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
