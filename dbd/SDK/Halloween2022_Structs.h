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
	 * Enum Halloween2022.EVoidEnergyTier
	 */
	enum class EVoidEnergyTier : uint8_t
	{
		None   = 0,
		Small  = 1,
		Medium = 2,
		Large  = 3,
		Count  = 4,
		MAX    = 5
	};

	/**
	 * Enum Halloween2022.EVoidEnergyType
	 */
	enum class EVoidEnergyType : uint8_t
	{
		None              = 0,
		PalletStun        = 1,
		WiggleStun        = 2,
		LockerStun        = 3,
		FlashlightStun    = 4,
		GeneratorProgress = 5,
		MeatHook          = 6,
		Pumpkin           = 7,
		DownSurvivor      = 8,
		MAX               = 9
	};

	/**
	 * Enum Halloween2022.EVoidEnergyChangeReason
	 */
	enum class EVoidEnergyChangeReason : uint8_t
	{
		None        = 0,
		AddEnergy   = 1,
		LoseEnergy  = 2,
		SpendEnergy = 3,
		MAX         = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Halloween2022.OrbProperties
	 * Size -> 0x0030
	 */
	struct FOrbProperties
	{
	public:
		EVoidEnergyType                                            VoidEnergyType;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1Z6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpawnLocation;                                           // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HoverLocation;                                           // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CustomEndLocation;                                       // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75SD[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
