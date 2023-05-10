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
	 * BlueprintGeneratedClass BP_Audio_KLR_14.BP_Audio_KLR_13_C
	 * Size -> 0x0008 (FullSize[0x01F8] - InheritedSize[0x01F0])
	 */
	class UBP_Audio_KLR_13_C : public UBP_Audio_KLR_Base_C
	{
	public:
		class UAkAudioEvent*                                       AudioStatusStartMenuEvent;                               // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
