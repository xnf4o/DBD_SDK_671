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
	 * Enum TheK31.EK31DroneStateID
	 */
	enum class EK31DroneStateID : uint8_t
	{
		NONE           = 0,
		IN_STASH       = 1,
		BEING_DEPLOYED = 2,
		INITIALIZING   = 3,
		SCOUTING       = 4,
		ACTIVE         = 5,
		BEING_HACKED   = 6,
		DESTROYED      = 7,
		RECALLING      = 8,
		MAX            = 9
	};

	/**
	 * Enum TheK31.EK31DroneMovementMode
	 */
	enum class EK31DroneMovementMode : uint8_t
	{
		NORMAL   = 0,
		DEPLOY   = 1,
		SNAPPING = 2,
		MAX      = 3
	};

	/**
	 * Enum TheK31.EDroneFlyingHeight
	 */
	enum class EDroneFlyingHeight : uint8_t
	{
		Low  = 0,
		High = 1,
		MAX  = 2
	};

	/**
	 * Enum TheK31.EK31DroneActionResponse
	 */
	enum class EK31DroneActionResponse : uint8_t
	{
		AUTHORIZED = 0,
		DENIED     = 1,
		MAX        = 2
	};

	/**
	 * Enum TheK31.EK31PowerState
	 */
	enum class EK31PowerState : uint8_t
	{
		Deployment = 0,
		Inspection = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheK31.ActiveZoneOverlapTracker
	 * Size -> 0x0018
	 */
	struct FActiveZoneOverlapTracker
	{
	public:
		unsigned char                                              UnknownData_T2MV[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.DroneDeployDatum
	 * Size -> 0x0030
	 */
	struct FDroneDeployDatum
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    DeployCount;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBLG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACharacter*                                          DeployingCharacter;                                      // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasReachedDeployLocation;                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDeployed;                                              // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QG3M[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.DroneRepMovement
	 * Size -> 0x0038
	 */
	struct FDroneRepMovement
	{
	public:
		bool                                                       IsRotating;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasReachTarget;                                          // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q2M3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EDroneFlyingHeight                                         FlyingHeight;                                            // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPLT[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              InteractingActor;                                        // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                InteractingActorAttachSocket;                            // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SnapTime;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK31.K31DroneScoutDetectionSphereRaycastStruct
	 * Size -> 0x0008
	 */
	struct FK31DroneScoutDetectionSphereRaycastStruct
	{
	public:
		float                                                      BottomToTopPercent;                                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleRadiusPercent;                                    // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK31.SurvivorDroneFrameDatum
	 * Size -> 0x0014
	 */
	struct FSurvivorDroneFrameDatum
	{
	public:
		unsigned char                                              UnknownData_F1BD[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.K31DroneTimestampedState
	 * Size -> 0x0018
	 */
	struct FK31DroneTimestampedState
	{
	public:
		class UK31DroneState*                                      State;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timestamp;                                               // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBSX[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.K31PlayerDroneZoneStruct
	 * Size -> 0x0018
	 */
	struct FK31PlayerDroneZoneStruct
	{
	public:
		int32_t                                                    DistanceToDroneXY;                                       // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistanceToDroneZ;                                        // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPlayerInZone;                                          // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2U4Q[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK31PlayerZoneStatus*                                PlayerZoneStatus;                                        // 0x0010(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK31.K31DroneZoneOverlapDatum
	 * Size -> 0x0014
	 */
	struct FK31DroneZoneOverlapDatum
	{
	public:
		unsigned char                                              UnknownData_T1M4[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.ClawTrapUntrapDatum
	 * Size -> 0x0008
	 */
	struct FClawTrapUntrapDatum
	{
	public:
		unsigned char                                              UnknownData_SD1E[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.SurvivorWeakPointScoreDatum
	 * Size -> 0x000C
	 */
	struct FSurvivorWeakPointScoreDatum
	{
	public:
		unsigned char                                              UnknownData_B5KE[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.K31DroneActionRequest
	 * Size -> 0x0018
	 */
	struct FK31DroneActionRequest
	{
	public:
		class UK31DroneBaseAction*                                 action;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AK31Drone*                                           Drone;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActionPredictionKey                                PredictionKey;                                           // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZ33[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.K31DroneActionResponse
	 * Size -> 0x0020
	 */
	struct FK31DroneActionResponse
	{
	public:
		struct FK31DroneActionRequest                              Request;                                                 // 0x0000(0x0018) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Timestamp;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EK31DroneActionResponse                                    Response;                                                // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2X9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.DroneMovementRotationActivationDatum
	 * Size -> 0x0010
	 */
	struct FDroneMovementRotationActivationDatum
	{
	public:
		unsigned char                                              UnknownData_UOAC[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.SurvivorDroneInterpState
	 * Size -> 0x0018
	 */
	struct FSurvivorDroneInterpState
	{
	public:
		unsigned char                                              UnknownData_9EKU[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK31.K31SurvivorTraceInformationThisFrame
	 * Size -> 0x000C
	 */
	struct FK31SurvivorTraceInformationThisFrame
	{
	public:
		int32_t                                                    TotalTraces;                                             // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CompletedTraces;                                         // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CompletedTracesWithLoS;                                  // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
