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
	 * Function CoreMemory.CoreMemoryChallengePlayerSpecificController.OnRep_Fragments
	 */
	struct ACoreMemoryChallengePlayerSpecificController_OnRep_Fragments_Params
	{	};

	/**
	 * Function CoreMemory.CoreMemoryChallengePlayerSpecificController.OnRep_Controller
	 */
	struct ACoreMemoryChallengePlayerSpecificController_OnRep_Controller_Params
	{	};

	/**
	 * Function CoreMemory.CoreMemoryController.Authority_OnCharacterAdded
	 */
	struct UCoreMemoryController_Authority_OnCharacterAdded_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoreMemory.CoreMemoryController.Authority_CreatePlayerSpecificController
	 */
	struct UCoreMemoryController_Authority_CreatePlayerSpecificController_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoreMemory.CoreMemoryFragment.OnRep_SpawnLocation
	 */
	struct ACoreMemoryFragment_OnRep_SpawnLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoreMemory.CoreMemoryFragmentComponent.Server_OnFragmentCollected
	 */
	struct UCoreMemoryFragmentComponent_Server_OnFragmentCollected_Params
	{	};

	/**
	 * Function CoreMemory.CoreMemoryFragmentComponent.OnRep_WasTriggered
	 */
	struct UCoreMemoryFragmentComponent_OnRep_WasTriggered_Params
	{	};

	/**
	 * Function CoreMemory.CoreMemoryFragmentComponent.OnRep_OwningPlayer
	 */
	struct UCoreMemoryFragmentComponent_OnRep_OwningPlayer_Params
	{	};

	/**
	 * Function CoreMemory.CoreMemoryFragmentComponent.OnLocallyObservedChanged
	 */
	struct UCoreMemoryFragmentComponent_OnLocallyObservedChanged_Params
	{
	public:
		bool                                                       IsLocallyObserved;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoreMemory.CoreMemoryFragmentComponent.OnIntroComplete
	 */
	struct UCoreMemoryFragmentComponent_OnIntroComplete_Params
	{	};

	/**
	 * Function CoreMemory.CoreMemoryFragmentComponent.OnCollectZoneEntered
	 */
	struct UCoreMemoryFragmentComponent_OnCollectZoneEntered_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9NI8[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoreMemory.CoreMemoryFragmentComponent.Authority_OnTriggerZoneExited
	 */
	struct UCoreMemoryFragmentComponent_Authority_OnTriggerZoneExited_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoreMemory.CoreMemoryFragmentComponent.Authority_OnTriggerZoneEntered
	 */
	struct UCoreMemoryFragmentComponent_Authority_OnTriggerZoneEntered_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3E5V[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoreMemory.CoreMemoryFragmentComponent.Authority_CheckLineOfSight
	 */
	struct UCoreMemoryFragmentComponent_Authority_CheckLineOfSight_Params
	{	};

	/**
	 * Function CoreMemory.CoreMemoryPortalComponent.GetPlayersWithActivePortal
	 */
	struct UCoreMemoryPortalComponent_GetPlayersWithActivePortal_Params
	{
	public:
		TArray<class ADBDPlayer*>                                  ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
