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
	 * BlueprintGeneratedClass StunBySkillCheck.StunBySkillCheck_C
	 * Size -> 0x0010 (FullSize[0x0628] - InheritedSize[0x0618])
	 */
	class UStunBySkillCheck_C : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_5G2I[0x8];                                   // 0x0618(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool CanOverrideInteraction(class UInteractionDefinition* Interaction);
		void GetCarriedCamper(class ACamperPlayer** camper);
		void GetSlasher(class ASlasherPlayer** Slasher);
		bool IsInteractionPossibleBP(class ADBDPlayer* Player, EInputInteractionType interactionType);
		void ReceiveBeginPlay();
		void OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime);
		void ExecuteUbergraph_StunBySkillCheck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
