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
	 * BlueprintGeneratedClass BP_Menu_CamperMale14.BP_Menu_CamperMale14_C
	 * Size -> 0x001F (FullSize[0x06B9] - InheritedSize[0x069A])
	 */
	class ABP_Menu_CamperMale14_C : public ABP_Menu_Base_Camper_C
	{
	public:
		unsigned char                                              UnknownData_IUM4[0x6];                                   // 0x069A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SM_ION_Tablet_01_REF;                                    // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ADBDMenuPlayer*                                      DBDMenuPlayer;                                           // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Issiteonlog;                                             // 0x06B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Menu_CamperMale14(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
