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
	 * Function VFXUtilities.VFXUtilities.SetParticleSystemsActive
	 */
	struct UVFXUtilities_SetParticleSystemsActive_Params
	{
	public:
		unsigned char                                              UnknownData_HVR7[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       Active;                                                  // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Reset;                                                   // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VFXUtilities.VFXUtilities.SetParticleSystemActive
	 */
	struct UVFXUtilities_SetParticleSystemActive_Params
	{
	public:
		class UFXSystemComponent*                                  ParticleSystem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Active;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Reset;                                                   // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
