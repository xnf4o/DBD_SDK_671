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
	 * Enum TheDemogorgon.EDemogorgonPortalState
	 */
	enum class EDemogorgonPortalState : uint8_t
	{
		Hidden  = 0,
		InUse   = 1,
		Exposed = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheDemogorgon.PortalRestrictedLocation
	 * Size -> 0x0010
	 */
	struct FPortalRestrictedLocation
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceSquared;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
