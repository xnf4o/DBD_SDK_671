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
	 * BlueprintGeneratedClass ConsecutiveWakeUpPenaltyProficiency.ConsecutiveWakeUpPenaltyProficiency_C
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UConsecutiveWakeUpPenaltyProficiency_C : public UInteractionProficiency
	{
	public:
		float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
