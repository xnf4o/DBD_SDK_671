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
	 * BlueprintGeneratedClass ActionSpeedProficiency.ActionSpeedProficiency_C
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UActionSpeedProficiency_C : public UInteractionProficiency
	{
	public:
		TArray<class ADBDPlayer*> FetchInteractingPlayers(class UInteractionDefinition* ChargeableInteraction, class ADBDPlayer* InteractingPlayer);
		float ComputeOverallspeedincludingmultipleinteractors(class UChargeableInteractionDefinition* ChargeableInteraction, class ADBDPlayer* InteractingPlayer);
		bool ShouldAndCanShowMultipleActorsSpeedProficiency(class UChargeableInteractionDefinition* ChargeableInteraction);
		float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
