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
	 * BlueprintGeneratedClass BP_Menu_CamperMale15.BP_Menu_CamperMale15_C
	 * Size -> 0x0016 (FullSize[0x06B0] - InheritedSize[0x069A])
	 */
	class ABP_Menu_CamperMale15_C : public ABP_Menu_Base_Camper_C
	{
	public:
		unsigned char                                              UnknownData_O613[0x6];                                   // 0x069A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              TapeMesh;                                                // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GoToAddVomitDecal();
		void StartEndGameDissolve();
		void CK_StartSacrificeDissolve();
		void AddBloodOnCamper();
		void ReceiveBeginPlay();
		void GoToAddMoriVomitStain();
		void HideProps();
		void ShowProps();
		void ExecuteUbergraph_BP_Menu_CamperMale15(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
