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
	 * BlueprintGeneratedClass BP_Audio_KLR_Base.BP_Audio_KLR_Base_C
	 * Size -> 0x0038 (FullSize[0x01F0] - InheritedSize[0x01B8])
	 */
	class UBP_Audio_KLR_Base_C : public UKillerAudioHandlerComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkAudioBank*                                        _killerAudioBank;                                        // 0x01C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       _defaultAudioStatusStartEvent;                           // 0x01C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        _audioComponent;                                         // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       _isInMenu;                                               // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_0BVB[0x3];                                   // 0x01D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _audioCharacterName;                                     // 0x01DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UAkAudioEvent*                                       _audioStartEvent;                                        // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash

	public:
		void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent);
		void OnKillerSoundbankLoaded(EAkResult Result);
		void GetAudioCharacterName(class ADBDBasePlayer* Player, class FName* AudioCharacterName);
		void InititializeComponent();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SoundbankKillerUnloaded(EAkResult Result);
		void TriggerSurvivorDamageHitAudioSFX(class ACamperPlayer* camper, EAttackType attackType, bool CausedKO, bool IsWeaponHit, bool isLightHit);
		void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);
		void ExecuteUbergraph_BP_Audio_KLR_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
