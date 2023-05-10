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
	 * Function DBDGameplay.AimableComponent.SetProcessors
	 */
	struct UAimableComponent_SetProcessors_Params
	{
	public:
		TArray<class UAimPointProcessor*>                          processors;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors
	 */
	struct UAimableComponent_SetOcclusionIgnoredActors_Params
	{
	public:
		TArray<class AActor*>                                      IgnoredActors;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AimableComponent.SetMaxAimDistance
	 */
	struct UAimableComponent_SetMaxAimDistance_Params
	{
	public:
		float                                                      maxAimDistance;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier
	 */
	struct UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier
	 */
	struct UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence
	 */
	struct UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Params
	{
	public:
		float                                                      noisePersistence;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount
	 */
	struct UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Params
	{
	public:
		int32_t                                                    octaveCount;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency
	 */
	struct UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Params
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude
	 */
	struct UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Params
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AISense_Terror.ReportTerrorEvent
	 */
	struct UAISense_Terror_ReportTerrorEvent_Params
	{
	public:
		class UObject*                                             worldContextObj;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RKJ0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Instigator;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTerrorRadiusEmitterComponent*                       TerrorEmitter;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AuraOverriderComponent.ResetAura
	 */
	struct UAuraOverriderComponent_ResetAura_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.AuraOverriderComponent.ForceShowAura
	 */
	struct UAuraOverriderComponent_ForceShowAura_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsAlwaysVisible;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VZQZ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      minimumOutlineDistance;                                  // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.BaseActorAttackableComponent.HitWithProjectile
	 */
	struct UBaseActorAttackableComponent_HitWithProjectile_Params
	{
	public:
		class ABaseProjectile*                                     Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.BaseHusk.SetScalarParameterOnAllChildrenMeshes
	 */
	struct ABaseHusk_SetScalarParameterOnAllChildrenMeshes_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.BaseHusk.SetHuskVisibility
	 */
	struct ABaseHusk_SetHuskVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.BaseHusk.InitializeHusk
	 */
	struct ABaseHusk_InitializeHusk_Params
	{
	public:
		class UCustomizedSkeletalMesh*                             customizedSkeletalMeshToCopy;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.BaseHusk.Cosmetic_InitializeSkeletalMesh
	 */
	struct ABaseHusk_Cosmetic_InitializeSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged
	 */
	struct UFlashlightTargetFXComponent_OnIsLitChanged_Params
	{
	public:
		bool                                                       IsLit;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.CamperFootstepCreatorComponent.OnLoudNoiseTriggered
	 */
	struct UCamperFootstepCreatorComponent_OnLoudNoiseTriggered_Params
	{
	public:
		class AActor*                                              originator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              instigatingActor;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       shouldTrack;                                             // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PSYW[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      audibleRange;                                            // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isQuickAction;                                           // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isDeceivingNoise;                                        // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.CollectableComponentUtilities.GetCollector
	 */
	struct UCollectableComponentUtilities_GetCollector_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.DebugIndicator.SetVisible
	 */
	struct ADebugIndicator_SetVisible_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.DebugIndicator.SetColor
	 */
	struct ADebugIndicator_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.DecoySlasherComponent.SetDecoyIsActive
	 */
	struct UDecoySlasherComponent_SetDecoyIsActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HCD6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       visibleRedGlow;                                          // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.DecoySlasherComponent.OnRealSlasherTerrorRadiusChanged
	 */
	struct UDecoySlasherComponent_OnRealSlasherTerrorRadiusChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.DecoySlasherComponent.IsDecoyActive
	 */
	struct UDecoySlasherComponent_IsDecoyActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.DecoySlasherComponent.GetRealSlasher
	 */
	struct UDecoySlasherComponent_GetRealSlasher_Params
	{
	public:
		class ASlasherPlayer*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.DecoySlasherComponent.DoPostVFXUpdates
	 */
	struct UDecoySlasherComponent_DoPostVFXUpdates_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.DecoySlasherComponent.CopyCustomizationFromSlasher
	 */
	struct UDecoySlasherComponent_CopyCustomizationFromSlasher_Params
	{	};

	/**
	 * Function DBDGameplay.EtherealComponent.Server_SetIsEthereal
	 */
	struct UEtherealComponent_Server_SetIsEthereal_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Ethereal;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged
	 */
	struct UEtherealComponent_OnRep_OnIsEtherealChanged_Params
	{	};

	/**
	 * Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged
	 */
	struct URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FadeComponent.GetFadePercent
	 */
	struct UFadeComponent_GetFadePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.Flashlight.GetSpotlightComponent
	 */
	struct AFlashlight_GetSpotlightComponent_Params
	{
	public:
		class USpotLightComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightLitChangedEvent__DelegateSignature
	 */
	struct UFlashlightableComponent_OnFlashlightLitChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       IsLit;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature
	 */
	struct UFlashlightableComponent_OnFlashlightAddedRemovedEvent__DelegateSignature_Params
	{
	public:
		class UFlashlightComponent*                                Flashlight;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightableComponent.IsLit
	 */
	struct UFlashlightableComponent_IsLit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightComponent.TurnOn
	 */
	struct UFlashlightComponent_TurnOn_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightComponent.TurnOff
	 */
	struct UFlashlightComponent_TurnOff_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables
	 */
	struct UFlashlightComponent_Server_SetAndUpdateAutonomousLitFlashlightables_Params
	{
	public:
		TArray<class UFlashlightableComponent*>                    newLitFlashlightables;                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables
	 */
	struct UFlashlightComponent_OnRep_ReplicatedLitFlashlightables_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging
	 */
	struct UFlashlightComponent_OnRep_IsOwnerLagging_Params
	{	};

	/**
	 * DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature
	 */
	struct UFlashlightComponent_OnFlashlightEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightComponent.IsOn
	 */
	struct UFlashlightComponent_IsOn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier
	 */
	struct UFlashlightComponent_GetEffectiveTimeToBlindModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration
	 */
	struct UFlashlightComponent_GetEffectiveBlindnessDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance
	 */
	struct UFlashlightConeComponent_GetOcclusionDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength
	 */
	struct UFlashlightConeComponent_GetEffectiveConeLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle
	 */
	struct UFlashlightConeComponent_GetEffectiveConeHalfAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets
	 */
	struct UFlashlightFXComponent_UpdateFXTargets_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent
	 */
	struct UFlashlightFXComponent_UpdateConeEvent_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      halfAngle;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent
	 */
	struct UFlashlightFXComponent_PostUpdateEvent_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.OnTurnedOn
	 */
	struct UFlashlightFXComponent_OnTurnedOn_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.OnTurnedOff
	 */
	struct UFlashlightFXComponent_OnTurnedOff_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.OnStopEvent
	 */
	struct UFlashlightFXComponent_OnStopEvent_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.OnStartEvent
	 */
	struct UFlashlightFXComponent_OnStartEvent_Params
	{	};

	/**
	 * DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature
	 */
	struct UFlashlightFXComponent_OnFlashEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent
	 */
	struct UFlashlightFXComponent_OnDroppedEvent_Params
	{	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent
	 */
	struct UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Params
	{
	public:
		bool                                                       IsLocallyObserved;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent
	 */
	struct UFlashlightFXComponent_OnCollectedEvent_Params
	{
	public:
		class ADBDPlayer*                                          collector;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio
	 */
	struct UFlashlightFXComponent_GetBlindingSuccessRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FootstepManagerComponent.TriggerSpawnFootstep
	 */
	struct UFootstepManagerComponent_TriggerSpawnFootstep_Params
	{
	public:
		class UFootstepCreatorComponent*                           originatorComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.FootstepManagerComponent.OnUpdateObserverFootsteps
	 */
	struct UFootstepManagerComponent_OnUpdateObserverFootsteps_Params
	{	};

	/**
	 * Function DBDGameplay.FootstepManagerComponent.OnUpdateCreatorFootsteps
	 */
	struct UFootstepManagerComponent_OnUpdateCreatorFootsteps_Params
	{
	public:
		class UFootstepCreatorComponent*                           creator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction
	 */
	struct UInteractionStarterComponent_OnRep_ShouldStartInteraction_Params
	{	};

	/**
	 * Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted
	 */
	struct UInteractionStarterComponent_OnInteractionStarted_Params
	{	};

	/**
	 * Function DBDGameplay.KillerInstinctComponent.SetParticleSystem
	 */
	struct UKillerInstinctComponent_SetParticleSystem_Params
	{
	public:
		class UNiagaraComponent*                                   ParticleSystemComponent;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.KillerInstinctComponent.OnKillerLocallyObservedChanged
	 */
	struct UKillerInstinctComponent_OnKillerLocallyObservedChanged_Params
	{
	public:
		bool                                                       locallyObserved;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.KillerInstinctComponent.IsOwnerInKillerInstinctRadius
	 */
	struct UKillerInstinctComponent_IsOwnerInKillerInstinctRadius_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.KillerInstinctComponent.GetParticleSystem
	 */
	struct UKillerInstinctComponent_GetParticleSystem_Params
	{
	public:
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.LullabyFeedbackComponent.OnSlasherSet
	 */
	struct ULullabyFeedbackComponent_OnSlasherSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.MapCollectable.GetChargerComponent
	 */
	struct AMapCollectable_GetChargerComponent_Params
	{
	public:
		class UChargerComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.MapCollectable.GetChargeableComponent
	 */
	struct AMapCollectable_GetChargeableComponent_Params
	{
	public:
		class UChargeableComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.MapCollectable.GetActorKnowledgeCollection
	 */
	struct AMapCollectable_GetActorKnowledgeCollection_Params
	{
	public:
		class UActorKnowledgeCollection*                           ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.Medkit.UseCharge
	 */
	struct AMedkit_UseCharge_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.Medkit.OnMedkitHealedCamper
	 */
	struct AMedkit_OnMedkitHealedCamper_Params
	{
	public:
		class ADBDPlayer*                                          healedPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.Medkit.HasCharge
	 */
	struct AMedkit_HasCharge_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.Medkit.GetChargeMultiplier
	 */
	struct AMedkit_GetChargeMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.Medkit.GetCharge
	 */
	struct AMedkit_GetCharge_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.Medkit.Authority_OnChargeStateChange
	 */
	struct AMedkit_Authority_OnChargeStateChange_Params
	{
	public:
		bool                                                       Empty;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged
	 */
	struct AMedkit_Authority_OnAnyOngoingInteractionChanged_Params
	{
	public:
		bool                                                       IsInteracting;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting
	 */
	struct AMedkit_Authority_ConsumeIfNotInteracting_Params
	{	};

	/**
	 * Function DBDGameplay.MoveToGroundComponent.MoveOwnerToGround
	 */
	struct UMoveToGroundComponent_MoveOwnerToGround_Params
	{	};

	/**
	 * Function DBDGameplay.NearestOutsideMapBoundsLocator.OnGameEnd
	 */
	struct UNearestOutsideMapBoundsLocator_OnGameEnd_Params
	{
	public:
		EEndGameReason                                             endGameReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.NearestOutsideMapBoundsLocator.OnGameBegin
	 */
	struct UNearestOutsideMapBoundsLocator_OnGameBegin_Params
	{	};

	/**
	 * Function DBDGameplay.NearestOutsideMapBoundsLocator.Client_InitializeAkLimitPointEvent
	 */
	struct UNearestOutsideMapBoundsLocator_Client_InitializeAkLimitPointEvent_Params
	{	};

	/**
	 * Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionStart
	 */
	struct UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        interactionSemantic;                                     // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionEnd
	 */
	struct UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        interactionSemantic;                                     // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerInteractionListenerComponent.OnActorDestroyed
	 */
	struct UPlayerInteractionListenerComponent_OnActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionStart
	 */
	struct UPlayerInteractionListenerComponent_ListenToInteractionStart_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        interactionSemantic;                                     // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      interactionDelegate;                                     // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionEnd
	 */
	struct UPlayerInteractionListenerComponent_ListenToInteractionEnd_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        interactionSemantic;                                     // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      interactionDelegate;                                     // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionMulticastDelegate__DelegateSignature
	 */
	struct UPlayerInteractionListenerComponent_InteractionMulticastDelegate__DelegateSignature_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        interactionSemantic;                                     // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionDelegate__DelegateSignature
	 */
	struct UPlayerInteractionListenerComponent_InteractionDelegate__DelegateSignature_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        interactionSemantic;                                     // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve
	 */
	struct UPlayerMovementUtilities_Local_SetGamepadYawCurve_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         Curve;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve
	 */
	struct UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         Curve;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale
	 */
	struct UPlayerMovementUtilities_Local_ResetRotationScale_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      adjustmentTime;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves
	 */
	struct UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier
	 */
	struct UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      adjustmentTime;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier
	 */
	struct UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      adjustmentTime;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier
	 */
	struct UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      adjustmentTime;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier
	 */
	struct UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      adjustmentTime;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier
	 */
	struct UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      adjustmentTime;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier
	 */
	struct UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      adjustmentTime;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier
	 */
	struct UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      adjustmentTime;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PoseableHusk.SetIsActive
	 */
	struct APoseableHusk_SetIsActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PoseableHusk.OnActiveStateChanged
	 */
	struct APoseableHusk_OnActiveStateChanged_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PoseableHusk.GetIsActive
	 */
	struct APoseableHusk_GetIsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PoseableHusk.Cosmetic_OnAnimationPoseCaptured
	 */
	struct APoseableHusk_Cosmetic_OnAnimationPoseCaptured_Params
	{	};

	/**
	 * Function DBDGameplay.PoseableHusk.CapturePose
	 */
	struct APoseableHusk_CapturePose_Params
	{	};

	/**
	 * Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge
	 */
	struct UPowerChargeComponent_OnRep_CurrentCharge_Params
	{	};

	/**
	 * Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged
	 */
	struct UPowerChargeComponent_OnCurrentChargeChanged_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower
	 */
	struct UPowerToggleComponent_OnRep_IsInPower_Params
	{	};

	/**
	 * Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay
	 */
	struct URangeToActorsTrackerComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.SetTerrorRadius
	 */
	struct UTerrorRadiusEmitterComponent_SetTerrorRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.SetSimulatedFixedDistance
	 */
	struct UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Params
	{
	public:
		float                                                      distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.SetIsFakeTerrorRadius
	 */
	struct UTerrorRadiusEmitterComponent_SetIsFakeTerrorRadius_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.SetImitatesAudioOnly
	 */
	struct UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Params
	{
	public:
		bool                                                       imitatesAudioOnly;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.SetEmitterActive
	 */
	struct UTerrorRadiusEmitterComponent_SetEmitterActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.IsInTerrorRadius
	 */
	struct UTerrorRadiusEmitterComponent_IsInTerrorRadius_Params
	{
	public:
		class UTerrorRadiusReceiverComponent*                      receiver;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.GetSimulatedFixedDistance
	 */
	struct UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.GetRadius
	 */
	struct UTerrorRadiusEmitterComponent_GetRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.GetIsActive
	 */
	struct UTerrorRadiusEmitterComponent_GetIsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterComponent.GetImitatesAudioOnly
	 */
	struct UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.SlasherTerrorRadiusEmitterComponent.SetBaseTerrorRadius
	 */
	struct USlasherTerrorRadiusEmitterComponent_SetBaseTerrorRadius_Params
	{
	public:
		float                                                      baseTerrorRadius;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       progressive;                                             // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.StruggleComponent.OnSkillCheckEnd
	 */
	struct UStruggleComponent_OnSkillCheckEnd_Params
	{
	public:
		bool                                                       hadInput;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Bonus;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkillCheckCustomType                                      Type;                                                    // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2Z0F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.StruggleComponent.Authority_TryActivateSkillCheck
	 */
	struct UStruggleComponent_Authority_TryActivateSkillCheck_Params
	{	};

	/**
	 * Function DBDGameplay.TerrorRadiusEmitterFunctionLibrary.GetActiveFakeTerrorRadiusEmittersCount
	 */
	struct UTerrorRadiusEmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DBDGameplay.TerrorRadiusReceiverComponent.OnIsInTerrorRadiusChanged__DelegateSignature
	 */
	struct UTerrorRadiusReceiverComponent_OnIsInTerrorRadiusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadiusRange
	 */
	struct UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadius
	 */
	struct UTerrorRadiusReceiverComponent_IsInTerrorRadius_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.TerrorRadiusScreenIndicatorComponent.OnHeartStateChanged
	 */
	struct UTerrorRadiusScreenIndicatorComponent_OnHeartStateChanged_Params
	{
	public:
		struct FGameplayTag                                        heartState;                                              // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleComponent.Server_OnWiggleEnd
	 */
	struct UWiggleComponent_Server_OnWiggleEnd_Params
	{	};

	/**
	 * Function DBDGameplay.WiggleComponent.OnWiggleSkillCheckEnd
	 */
	struct UWiggleComponent_OnWiggleSkillCheckEnd_Params
	{
	public:
		bool                                                       hadInput;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Bonus;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkillCheckCustomType                                      Type;                                                    // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8ACH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleComponent.OnWiggleInput
	 */
	struct UWiggleComponent_OnWiggleInput_Params
	{	};

	/**
	 * Function DBDGameplay.WiggleComponent.OnWiggleEnd
	 */
	struct UWiggleComponent_OnWiggleEnd_Params
	{	};

	/**
	 * Function DBDGameplay.WiggleComponent.OnPlayerPickedUpStart
	 */
	struct UWiggleComponent_OnPlayerPickedUpStart_Params
	{
	public:
		class ADBDPlayer*                                          picker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleComponent.OnPlayerPickedUpEnd
	 */
	struct UWiggleComponent_OnPlayerPickedUpEnd_Params
	{
	public:
		class ADBDPlayer*                                          picker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleComponent.OnPickedUpSkillCheckEnd
	 */
	struct UWiggleComponent_OnPickedUpSkillCheckEnd_Params
	{
	public:
		bool                                                       hadInput;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Bonus;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkillCheckCustomType                                      Type;                                                    // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7BG5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleComponent.OnLevelReadyToPlay
	 */
	struct UWiggleComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDGameplay.WiggleComponent.OnKeyBindingsChanged
	 */
	struct UWiggleComponent_OnKeyBindingsChanged_Params
	{	};

	/**
	 * Function DBDGameplay.WiggleComponent.OnHideWiggleSkillCheck
	 */
	struct UWiggleComponent_OnHideWiggleSkillCheck_Params
	{
	public:
		ESkillCheckCustomType                                      Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleComponent.GetWiggleChargeable
	 */
	struct UWiggleComponent_GetWiggleChargeable_Params
	{
	public:
		class UChargeableComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleComponent.DBD_SetWiggleProgress
	 */
	struct UWiggleComponent_DBD_SetWiggleProgress_Params
	{
	public:
		float                                                      ProgressPercent;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleComponent.Authority_TutorialEndWiggle
	 */
	struct UWiggleComponent_Authority_TutorialEndWiggle_Params
	{	};

	/**
	 * Function DBDGameplay.WiggleComponent.Authority_AddWiggleCharge
	 */
	struct UWiggleComponent_Authority_AddWiggleCharge_Params
	{
	public:
		float                                                      ChargeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleFreeComponent.Authority_OnWiggleEnd
	 */
	struct UWiggleFreeComponent_Authority_OnWiggleEnd_Params
	{	};

	/**
	 * Function DBDGameplay.WiggleFreeComponent.Authority_OnPlayerPickedUpEnd
	 */
	struct UWiggleFreeComponent_Authority_OnPlayerPickedUpEnd_Params
	{
	public:
		class ADBDPlayer*                                          picker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleFreeComponent.Authority_OnLevelReadyToPlay
	 */
	struct UWiggleFreeComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDGameplay.WiggleFreeComponent.Authority_OnChargeableCompleteEvent
	 */
	struct UWiggleFreeComponent_Authority_OnChargeableCompleteEvent_Params
	{
	public:
		bool                                                       COMPLETED;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_83HA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      instigatorsForCompletion;                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleMotionComponent.SetIsBeingWiggled
	 */
	struct UWiggleMotionComponent_SetIsBeingWiggled_Params
	{
	public:
		bool                                                       isBeingWiggled;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleMotionComponent.Server_SetIsBeingWiggled
	 */
	struct UWiggleMotionComponent_Server_SetIsBeingWiggled_Params
	{
	public:
		bool                                                       isBeingWiggled;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleMotionComponent.OnWiggleSkillCheckEnd
	 */
	struct UWiggleMotionComponent_OnWiggleSkillCheckEnd_Params
	{
	public:
		bool                                                       hadInput;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Bonus;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkillCheckCustomType                                      Type;                                                    // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5SSA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleMotionComponent.OnSurvivorRemoved
	 */
	struct UWiggleMotionComponent_OnSurvivorRemoved_Params
	{
	public:
		class ADBDPlayer*                                          Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleMotionComponent.OnSurvivorPickedUp
	 */
	struct UWiggleMotionComponent_OnSurvivorPickedUp_Params
	{
	public:
		class ADBDPlayer*                                          Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDGameplay.WiggleMotionComponent.OnHideWiggleSkillCheck
	 */
	struct UWiggleMotionComponent_OnHideWiggleSkillCheck_Params
	{
	public:
		ESkillCheckCustomType                                      Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
