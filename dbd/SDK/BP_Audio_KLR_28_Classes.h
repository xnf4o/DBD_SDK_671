﻿#pragma once

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
	 * BlueprintGeneratedClass BP_Audio_KLR_28.BP_Audio_KLR_27_C
	 * Size -> 0x0010 (FullSize[0x0200] - InheritedSize[0x01F0])
	 */
	class UBP_Audio_KLR_27_C : public UBP_Audio_KLR_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkAudioEvent*                                       AudioStatusStartMenuEvent;                               // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnKillerSoundbankLoaded(EAkResult Result);
		void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<class FString>* characterName, bool* IsCharacter);
		void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent);
		void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);
		void ExecuteUbergraph_BP_Audio_KLR_28(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
