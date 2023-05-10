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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct SpecificReactionDialogue.SpecificReactionDialogue
	 * Size -> 0x0020
	 */
	struct FSpecificReactionDialogue
	{
	public:
		class FString                                              CharacterName_2_F0326D2A4FE40230378F258FBAE1A79B;        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FAkEventWithSubtitle>                        AudioEvents_6_CBA5DAE649A496B3060304AF525B86A1;          // 0x0010(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
