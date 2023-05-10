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
	 * Function Barrel2023.Barrel.SetDissolveStarted
	 */
	struct ABarrel_SetDissolveStarted_Params
	{
	public:
		bool                                                       isDissolveStarted;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.Barrel.OnRep_OnLocationChanged
	 */
	struct ABarrel_OnRep_OnLocationChanged_Params
	{	};

	/**
	 * Function Barrel2023.Barrel.OnBarrelDespawnCosmeticsComplete
	 */
	struct ABarrel_OnBarrelDespawnCosmeticsComplete_Params
	{	};

	/**
	 * Function Barrel2023.Barrel.Cosmetic_OnStoppedInteracting
	 */
	struct ABarrel_Cosmetic_OnStoppedInteracting_Params
	{	};

	/**
	 * Function Barrel2023.Barrel.Cosmetic_OnStartedInteracting
	 */
	struct ABarrel_Cosmetic_OnStartedInteracting_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      interactionDuration;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.Barrel.Cosmetic_OnInteractionInterruptedByPlayer
	 */
	struct ABarrel_Cosmetic_OnInteractionInterruptedByPlayer_Params
	{	};

	/**
	 * Function Barrel2023.Barrel.Cosmetic_OnInteractionCompleted
	 */
	struct ABarrel_Cosmetic_OnInteractionCompleted_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.Barrel.Cosmetic_OnFirstBarrelSpawn
	 */
	struct ABarrel_Cosmetic_OnFirstBarrelSpawn_Params
	{	};

	/**
	 * Function Barrel2023.Barrel.Cosmetic_OnBarrelRespawn
	 */
	struct ABarrel_Cosmetic_OnBarrelRespawn_Params
	{	};

	/**
	 * Function Barrel2023.Barrel.Cosmetic_OnBarrelDespawn
	 */
	struct ABarrel_Cosmetic_OnBarrelDespawn_Params
	{
	public:
		bool                                                       wasInteractionCompleted;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnRedBarrel
	 */
	struct UBarrelEventComponent_DBD_BarrelSpawnRedBarrel_Params
	{	};

	/**
	 * Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnGreenBarrel
	 */
	struct UBarrelEventComponent_DBD_BarrelSpawnGreenBarrel_Params
	{	};

	/**
	 * Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnBlueBarrel
	 */
	struct UBarrelEventComponent_DBD_BarrelSpawnBlueBarrel_Params
	{	};

	/**
	 * Function Barrel2023.BarrelEventComponent.DBD_BarrelPauseAllTimers
	 */
	struct UBarrelEventComponent_DBD_BarrelPauseAllTimers_Params
	{
	public:
		bool                                                       shouldPause;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.BarrelEventComponent.DBD_BarrelDebugBarrelSpawnPositions
	 */
	struct UBarrelEventComponent_DBD_BarrelDebugBarrelSpawnPositions_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.BarrelEventComponent.Authority_OnIntroComplete
	 */
	struct UBarrelEventComponent_Authority_OnIntroComplete_Params
	{	};

	/**
	 * Function Barrel2023.BarrelEventComponent.Authority_OnBarrelTimerDone
	 */
	struct UBarrelEventComponent_Authority_OnBarrelTimerDone_Params
	{
	public:
		class ARespawnableInteractable*                            RespawnableInteractable;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.BarrelEventComponent.Authority_OnBarrelInteractionChanged
	 */
	struct UBarrelEventComponent_Authority_OnBarrelInteractionChanged_Params
	{
	public:
		class ARespawnableInteractable*                            RespawnableInteractable;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsInteracting;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.BarrelPlayerComponent.Server_SetCharmInfo
	 */
	struct UBarrelPlayerComponent_Server_SetCharmInfo_Params
	{
	public:
		bool                                                       isRedUnlocked;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isGreenUnlocked;                                         // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isBlueUnlocked;                                          // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.BarrelPlayerComponent.GetInteractedBarrels
	 */
	struct UBarrelPlayerComponent_GetInteractedBarrels_Params
	{
	public:
		TArray<EBarrelType>                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Barrel2023.BarrelPlayerComponent.DBD_BarrelResetInteractedBarrels
	 */
	struct UBarrelPlayerComponent_DBD_BarrelResetInteractedBarrels_Params
	{	};

	/**
	 * Function Barrel2023.BarrelPlayerComponent.Cosmetic_TriggerPlayerVignette
	 */
	struct UBarrelPlayerComponent_Cosmetic_TriggerPlayerVignette_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBarrelType                                                BarrelType;                                              // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
