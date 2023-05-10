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
	 * BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C
	 * Size -> 0x001E (FullSize[0x06B8] - InheritedSize[0x069A])
	 */
	class ABP_Menu_CamperMale04_C : public ABP_Menu_Base_Camper_C
	{
	public:
		unsigned char                                              UnknownData_Z88S[0x6];                                   // 0x069A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Cigarette_NewTrack_0_97E71C104E36EF0B3195F484D090F427;   // 0x06A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Cigarette__Direction_97E71C104E36EF0B3195F484D090F427;   // 0x06AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1UF2[0x3];                                   // 0x06AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Cigarette;                                               // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Cigarette__FinishedFunc();
		void Cigarette__UpdateFunc();
		void ReceiveBeginPlay();
		void BeginDestroySequence_Internal();
		void ExecuteUbergraph_BP_Menu_CamperMale04(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
