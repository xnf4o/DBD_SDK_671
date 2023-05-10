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
	 * BlueprintGeneratedClass BP_Menu_Slasher21.BP_Menu_Slasher21_C
	 * Size -> 0x0014 (FullSize[0x0700] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher21_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_LXRS[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_21_C*                                  BP_Audio_KLR_22;                                         // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState);
		void ExecuteUbergraph_BP_Menu_Slasher21(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
