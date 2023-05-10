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
	 * Function DBDBots.AISkill_DirectionalMinigame.OnMinigameStart
	 */
	struct UAISkill_DirectionalMinigame_OnMinigameStart_Params
	{
	public:
		TArray<EDirectionalInputKey>                               Sequence;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    currentIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDBots.AISkill_DirectionalMinigame.OnMinigameEnd
	 */
	struct UAISkill_DirectionalMinigame_OnMinigameEnd_Params
	{
	public:
		EDirectionalMinigameResult                                 Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDBots.DBDAIBTController.OnPawnBump
	 */
	struct ADBDAIBTController_OnPawnBump_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDBots.DBDAIBTController.Authority_FinishedPlaying
	 */
	struct ADBDAIBTController_Authority_FinishedPlaying_Params
	{	};

	/**
	 * Function DBDBots.DBDAIStateComponent.OnUniqueGameplayEvent
	 */
	struct UDBDAIStateComponent_OnUniqueGameplayEvent_Params
	{
	public:
		EDBDScoreTypes                                             EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U2GR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Instigator;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Target;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDBots.DBDAIStateComponent.OnStartAimingEventDispatched
	 */
	struct UDBDAIStateComponent_OnStartAimingEventDispatched_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GIIJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDBots.DBDAIStateComponent.OnSpecialAttackEventDispatched
	 */
	struct UDBDAIStateComponent_OnSpecialAttackEventDispatched_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AWQI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay
	 */
	struct UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback
	 */
	struct ANavLinkProxy_Base_OnSmartLinkReachedCallback_Params
	{
	public:
		class AActor*                                              MovingActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DestinationPoint;                                        // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDBots.NavLinkProxy_Base.AutoAdjustSmartLinkPoints
	 */
	struct ANavLinkProxy_Base_AutoAdjustSmartLinkPoints_Params
	{	};

	/**
	 * Function DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo
	 */
	struct ANavLinkProxy_DirectMove_OnDisplayDebugInfo_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
