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
	 * Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting
	 */
	struct AGnome_Cosmetic_OnStoppedInteracting_Params
	{	};

	/**
	 * Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting
	 */
	struct AGnome_Cosmetic_OnStartedInteracting_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      interactionDuration;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted
	 */
	struct AGnome_Cosmetic_OnInteractionCompleted_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted
	 */
	struct UGnomeEventComponent_Authority_OnEndGameStarted_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1N1J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
