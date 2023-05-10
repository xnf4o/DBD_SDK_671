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
	 * BlueprintGeneratedClass BP_Menu_CamperFemale18.BP_Menu_CamperFemale18_C
	 * Size -> 0x000E (FullSize[0x06A8] - InheritedSize[0x069A])
	 */
	class ABP_Menu_CamperFemale18_C : public ABP_Menu_Base_Camper_C
	{
	public:
		unsigned char                                              UnknownData_BDA9[0x6];                                   // 0x069A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Menu_CamperFemale18(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
