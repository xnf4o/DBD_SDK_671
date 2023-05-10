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
	 * Function LightingInterface.LightingInterface_C.GetDetectionZoneIntensity
	 */
	struct ULightingInterface_C_GetDetectionZoneIntensity_Params
	{
	public:
		ELightingInterfaceEnum                                     BPType;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2GG2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DetectionZoneCylinderIntensityOverride;                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DetectionZoneDecalIntensityOverride;                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightingInterface.LightingInterface_C.GetCondemnedStatusVignetteIntensity
	 */
	struct ULightingInterface_C_GetCondemnedStatusVignetteIntensity_Params
	{
	public:
		ELightingInterfaceEnum                                     BPType;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TGIG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CondemnedStatusIntensityOverride;                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightingInterface.LightingInterface_C.SetPostOverride
	 */
	struct ULightingInterface_C_SetPostOverride_Params
	{
	public:
		struct FPostProcessSettings                                PostSettings;                                            // 0x0000(0x0560)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
		class UPostProcessComponent*                               postProcess;                                             // 0x0560(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightingInterface.LightingInterface_C.GetLightingPost
	 */
	struct ULightingInterface_C_GetLightingPost_Params
	{
	public:
		TArray<class UPostProcessComponent*>                       postProcess;                                             // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		ELightingInterfaceEnum                                     BPType;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightingInterface.LightingInterface_C.GetBasementPost
	 */
	struct ULightingInterface_C_GetBasementPost_Params
	{
	public:
		ELightingInterfaceEnum                                     BPType;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YVZP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDBDPerPlatformFloat                                Override;                                                // 0x0004(0x0004)  (Parm, OutParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
