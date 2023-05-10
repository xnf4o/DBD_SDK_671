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
	 * Function Lunar2023.Lunar2023EventComponent.Authority_OnLevelReadyToPlay
	 */
	struct ULunar2023EventComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function Lunar2023.PaperLantern.Cosmetic_OnStartedInteracting
	 */
	struct APaperLantern_Cosmetic_OnStartedInteracting_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      interactionDuration;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lunar2023.PaperLantern.Cosmetic_OnInteractionCompleted
	 */
	struct APaperLantern_Cosmetic_OnInteractionCompleted_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lunar2023.PaperLantern.Cosmetic_OnInteractionCancelled
	 */
	struct APaperLantern_Cosmetic_OnInteractionCancelled_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
