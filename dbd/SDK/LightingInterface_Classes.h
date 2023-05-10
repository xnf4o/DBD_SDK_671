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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass LightingInterface.LightingInterface_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULightingInterface_C : public UInterface
	{
	public:
		void GetDetectionZoneIntensity(ELightingInterfaceEnum* BPType, float* DetectionZoneCylinderIntensityOverride, float* DetectionZoneDecalIntensityOverride);
		void GetCondemnedStatusVignetteIntensity(ELightingInterfaceEnum* BPType, float* CondemnedStatusIntensityOverride);
		void SetPostOverride(const struct FPostProcessSettings& PostSettings, class UPostProcessComponent* postProcess);
		void GetLightingPost(TArray<class UPostProcessComponent*>* postProcess, ELightingInterfaceEnum* BPType);
		void GetBasementPost(ELightingInterfaceEnum* BPType, struct FDBDPerPlatformFloat* Override);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
