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
	 * Function TheHag.HagScoreComponent.Authority_OnActorEndPlay
	 */
	struct UHagScoreComponent_Authority_OnActorEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.PhantomTrap.OnTrapReset
	 */
	struct APhantomTrap_OnTrapReset_Params
	{	};

	/**
	 * Function TheHag.PhantomTrap.OnTrapActivated
	 */
	struct APhantomTrap_OnTrapActivated_Params
	{	};

	/**
	 * Function TheHag.PhantomTrap.Multicast_DestroyTrap
	 */
	struct APhantomTrap_Multicast_DestroyTrap_Params
	{
	public:
		class ACamperPlayer*                                       playerDestroyingTrap;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.PhantomTrap.IsTrapSet
	 */
	struct APhantomTrap_IsTrapSet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.PhantomTrap.InitializeTerrorRadiusEmitter
	 */
	struct APhantomTrap_InitializeTerrorRadiusEmitter_Params
	{
	public:
		class ASlasherPlayer*                                      OwningSlasher;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.PhantomTrap.GetMesh
	 */
	struct APhantomTrap_GetMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.PhantomTrap.CanActivateTrap
	 */
	struct APhantomTrap_CanActivateTrap_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsInUse;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.PhantomTrap.BP_OnTrapDestroyed
	 */
	struct APhantomTrap_BP_OnTrapDestroyed_Params
	{
	public:
		class ACamperPlayer*                                       playerDestroyingTrap;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.TeleportToPhantomTrap.GetTeleportMaxDistance
	 */
	struct UTeleportToPhantomTrap_GetTeleportMaxDistance_Params
	{
	public:
		class ASlasherPlayer*                                      Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.TeleportToPhantomTrap.GetPhantomTrap
	 */
	struct UTeleportToPhantomTrap_GetPhantomTrap_Params
	{
	public:
		class APhantomTrap*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.TeleportToPhantomTrap.Cosmetic_OnTeleport
	 */
	struct UTeleportToPhantomTrap_Cosmetic_OnTeleport_Params
	{
	public:
		class ASlasherPlayer*                                      Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APhantomTrap*                                        trap;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.TeleportToPhantomTrap.Cosmetic_OnInteractionFinished
	 */
	struct UTeleportToPhantomTrap_Cosmetic_OnInteractionFinished_Params
	{
	public:
		class ADBDPlayer*                                          Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       hasInteractionStarted;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.TeleportToPhantomTrap.BP_OnTeleport
	 */
	struct UTeleportToPhantomTrap_BP_OnTeleport_Params
	{
	public:
		class ASlasherPlayer*                                      Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APhantomTrap*                                        trap;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheHag.WipeAwayPhantomTrapInteraction.CancelInteraction
	 */
	struct UWipeAwayPhantomTrapInteraction_CancelInteraction_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
