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
	 * Enum SnowmanWinterEvent.ESnowmanDestructionType
	 */
	enum class ESnowmanDestructionType : uint8_t
	{
		None                        = 0,
		SurvivorRunExit             = 1,
		KillerAttackExit            = 2,
		KillerCancelExit            = 3,
		KillerAttackWhileControlled = 4,
		KillerAttackWhileEmpty      = 5,
		MAX                         = 6
	};

	/**
	 * Enum SnowmanWinterEvent.ESnowmanState
	 */
	enum class ESnowmanState : uint8_t
	{
		Idle         = 0,
		BeingEntered = 1,
		Controlled   = 2,
		Destroyed    = 3,
		MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SnowmanWinterEvent.SnowmanSpawnLocationData
	 * Size -> 0x0028
	 */
	struct FSnowmanSpawnLocationData
	{
	public:
		struct FVector                                             OriginLocation;                                          // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3Z8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     NavmeshLocations;                                        // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9PC[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SnowmanWinterEvent.SnowmanSpawnData
	 * Size -> 0x0018
	 */
	struct FSnowmanSpawnData
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            SpawnRotation;                                           // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
