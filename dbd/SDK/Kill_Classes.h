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
	 * BlueprintGeneratedClass Kill.Kill_C
	 * Size -> 0x0009 (FullSize[0x07D9] - InheritedSize[0x07D0])
	 */
	class UKill_C : public UKillInteractionDefinition
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ActivateCrazyStateAudioSwitchDuringKill;                 // 0x07D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DeactivateKillAudio(class ADBDPlayer* interactingPlayer);
		void ActivateKillAudio(class ADBDPlayer* interactingPlayer);
		void OnKillAudioActivation(bool Active, class ADBDPlayer* interactingPlayer);
		void ExecuteUbergraph_Kill(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
