﻿#pragma once

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
	 * Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetTrapPlacementLocation_World
	 */
	struct UISlasherEffectInterface_C_GetTrapPlacementLocation_World_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetSlasherAudioComponent
	 */
	struct UISlasherEffectInterface_C_GetSlasherAudioComponent_Params
	{
	public:
		class UAkComponent*                                        AudioComponent;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
