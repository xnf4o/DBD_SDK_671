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
	 * BlueprintGeneratedClass BP_Menu_Slasher03.BP_Menu_Slasher03_C
	 * Size -> 0x001C (FullSize[0x0708] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher03_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_U9E2[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_03_C*                                  BP_Audio_KLR_03;                                         // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ChainSaw01_REF;                                          // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void K03_FX_ShowChainsaw();
		void ExecuteUbergraph_BP_Menu_Slasher03(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
