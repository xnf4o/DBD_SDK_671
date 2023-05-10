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
	 * BlueprintGeneratedClass BP_TheOnryoCondemnMoriInteraction.BP_TheOnryoCondemnMoriInteraction_C
	 * Size -> 0x000C (FullSize[0x07DC] - InheritedSize[0x07D0])
	 */
	class UBP_TheOnryoCondemnMoriInteraction_C : public UCondemnMoriInteraction
	{
	public:
		class FName                                                CondemnMoriMontageID;                                    // 0x07D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FAnimationMontageDescriptor GetExitMontage(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
