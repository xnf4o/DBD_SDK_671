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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum TheK29.EK29SurvivorInteractionBlockReason
	 */
	enum class EK29SurvivorInteractionBlockReason : uint8_t
	{
		BeingRushed  = 0,
		BeingThrown  = 1,
		BeingSmashed = 2,
		MAX          = 3
	};

	/**
	 * Enum TheK29.EK29RushPhase
	 */
	enum class EK29RushPhase : uint8_t
	{
		EndingInteraction    = 0,
		Charging             = 1,
		Rushing              = 2,
		Bouncing             = 3,
		BetweenRushes        = 4,
		IntoGrabbingSurvivor = 5,
		GrabbingSurvivor     = 6,
		SmashSurvivor        = 7,
		MAX                  = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheK29.K29SurvivorStatus
	 * Size -> 0x0060
	 */
	struct FK29SurvivorStatus
	{
	public:
		bool                                                       IsGrabbedByPower;                                        // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFI3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastTimeGrabbedByPower;                                  // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ACamperPlayer*                                       OwningSurvivor;                                          // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InfectionLevel;                                          // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesCuredByHeal;                                        // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfected;                                              // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfectionActive;                                       // 0x0019(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V16Y[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableInteractionDefinition*                    UseInfectionRemoverInteractionSelf;                      // 0x0020(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UChargeableInteractionDefinition*                    UseInfectionRemoverInteractionOther;                     // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UChargeableComponent*                                UseInfectionRemoverChargeable;                           // 0x0030(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AreInfectionRemoverInteractionsInitialized;              // 0x0038(0x0001) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDB2[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK29SurvivorCarriableComponent*                      CarriableComponent;                                      // 0x0040(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UK29SurvivorThrowableComponent*                      ThrowableComponent;                                      // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EK29SurvivorInteractionBlockReason>                 InteractionBlockReasons;                                 // 0x0050(0x0010) ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK29.K29RushMovementSpeedSetting
	 * Size -> 0x0110
	 */
	struct FK29RushMovementSpeedSetting
	{
	public:
		bool                                                       InUse;                                                   // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROCM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SpeedCurve;                                              // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                PitchTurnRateMultiplier;                                 // 0x0010(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                YawTurnRateLimit;                                        // 0x0038(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                YawTurnRateMultiplier;                                   // 0x0060(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTunableStat                                        Duration;                                                // 0x0088(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMovementAllowed;                                       // 0x0108(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJ64[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK29.K29FloorDetectionResult
	 * Size -> 0x0002
	 */
	struct FK29FloorDetectionResult
	{
	public:
		unsigned char                                              UnknownData_WH9A[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK29.K29GuidedMovementInstance
	 * Size -> 0x0050
	 */
	struct FK29GuidedMovementInstance
	{
	public:
		float                                                      MovementDuration;                                        // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartingPosition;                                        // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndingPosition;                                          // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ForwardDirection;                                        // 0x001C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             XYForwardDirection;                                      // 0x0028(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EndInImpact;                                             // 0x0034(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EndAtLedge;                                              // 0x0035(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGG1[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartingTime;                                            // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndingTime;                                              // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     MovementCurve;                                           // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK29.K29GuidedMovementSettings
	 * Size -> 0x0050
	 */
	struct FK29GuidedMovementSettings
	{
	public:
		class ADBDPlayer*                                          MovingActor;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartPosition;                                           // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ForwardDirection;                                        // 0x0014(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleHeight;                                           // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleCenterHeightOffset;                               // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleRadius;                                           // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumRequiredDistance;                                 // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDuration;                                         // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementSpeedInCmPerSecond;                              // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCarryingSurvivor;                                      // 0x0038(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6N7S[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      IgnoredActors;                                           // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
