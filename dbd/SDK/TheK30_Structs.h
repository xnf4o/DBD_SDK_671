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
	 * Enum TheK30.EPowerState
	 */
	enum class EPowerState : uint8_t
	{
		Ready         = 0,
		Charging      = 1,
		Snapping      = 2,
		DrawPath      = 3,
		DrawPathDone  = 4,
		OrderStarted  = 5,
		PatrolStarted = 6,
		HuntStarted   = 7,
		InCooldown    = 8,
		MAX           = 9
	};

	/**
	 * Enum TheK30.EChargeState
	 */
	enum class EChargeState : uint8_t
	{
		Inactive        = 0,
		Charging        = 1,
		ChargeCompleted = 2,
		MAX             = 3
	};

	/**
	 * Enum TheK30.EGuardHuntEndReason
	 */
	enum class EGuardHuntEndReason : uint8_t
	{
		TimerExpired                   = 0,
		GuardHitSurvivor               = 1,
		SurvivorCapturedFlag           = 2,
		UnhookedSurvivor               = 3,
		KillerDamagedSurvivor          = 4,
		GuardPulledSurvivorOutOfLocker = 5,
		UnexpectedError                = 6,
		MAX                            = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheK30.TrailData
	 * Size -> 0x0030
	 */
	struct FTrailData
	{
	public:
		TArray<class ATrailNode*>                                  _visualNodes;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     _navigationWaypoints;                                    // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class AActor*                                              _owner;                                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isCompleted;                                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F7MK[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK30.TrailSettings
	 * Size -> 0x0068
	 */
	struct FTrailSettings
	{
	public:
		struct FDBDTunableRowHandle                                MaximumDistanceBetweenNodes;                             // 0x0000(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                MinimumDistanceBetweenVisualNodes;                       // 0x0028(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleHalfHeight;                                       // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleRadius;                                           // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionChannel;                                        // 0x0058(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OURE[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _trailNodeClass;                                         // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
