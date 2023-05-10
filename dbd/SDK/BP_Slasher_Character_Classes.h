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
	 * BlueprintGeneratedClass BP_Slasher_Character.BP_Slasher_Character_C
	 * Size -> 0x038D (FullSize[0x19BD] - InheritedSize[0x1630])
	 */
	class ABP_Slasher_Character_C : public ASlasherPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USlasherFootstepPerceptionComponent_C*               SlasherFootstepPerceptionComponent;                      // 0x1638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USignificanceManagerComponent*                       SignificanceManager;                                     // 0x1640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USlasherTerrorRadiusEmitterComponent*                SlasherTerrorRadiusEmitter;                              // 0x1648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPNearestOutsideMapBoundsLocator_C*                 BPNearestOutsideMapBoundsLocator;                        // 0x1650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPositionLagCompensationComponent*                   PositionLagCompensation;                                 // 0x1658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCharacterOptimizer*                                 CharacterOptimizer;                                      // 0x1660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWiggleMotionComponent*                              WiggleMotion;                                            // 0x1668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEtherealComponent*                                  Ethereal;                                                // 0x1670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UKillerFlashlightSFXComponent*                       KillerFlashlightSFX;                                     // 0x1678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInteractionAnalyticsComponent*                      InteractionAnalytics;                                    // 0x1680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBlindFlashlightTargetFXComponent*                   BlindFlashlightTargetFX;                                 // 0x1688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFlashlightableComponent*                            BodyFlashlightable;                                      // 0x1690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFlashlightableComponent*                            EyesFlashlightable;                                      // 0x1698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_KillerLeftFootGroundDetector_C*                  LeftFootGroundDetector;                                  // 0x16A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_KillerRightFootGroundDetector_C*                 RightFootGroundDetector;                                 // 0x16A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UQuestEventsHandler*                                 QuestEventsHandler;                                      // 0x16B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_RedStainComponent_C*                             RedStainComponent;                                       // 0x16B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameEventListenerCollectionComponent*               GameEventListenerCollection;                             // 0x16C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsulePlayerOverlapComponent*                      pawnDetector;                                            // 0x16C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_MiddleT;                             // 0x16D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Vignette_EndGame_Top;                                  // 0x16D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UEndGameEffectsComponent_C*                          EndGameEffectsComponent;                                 // 0x16E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera1;                                                 // 0x16E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USlasherOutlineUpdateStrategy*                       SlasherOutlineUpdateStrategy;                            // 0x16F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCustomizedAudioComponent*                           CustomizedAudio;                                         // 0x16F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               BlindedPostProcess_new;                                  // 0x1700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_004;                                          // 0x1708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    audioAmbientDetector;                                    // 0x1710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_Wedge_Large;                                  // 0x1718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_Wedge_Standard;                               // 0x1720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               VignetteBloodlust;                                       // 0x1728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirecrackerEffectHandlerComponent*                  FirecrackerEffectHandler;                                // 0x1730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZoneHigh_003;                                      // 0x1738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZoneHigh_002;                                      // 0x1740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZoneHigh_001;                                      // 0x1748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ObstructionShape;                                        // 0x1750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_003;                                          // 0x1758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_002;                                          // 0x1760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AttackZone_001;                                          // 0x1768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     attackZonePivot;                                         // 0x1770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        Ak_Audio_Killer;                                         // 0x1778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ChainsawObstruction;                                     // 0x1780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   InteractionDetector;                                     // 0x1788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CamperDropOffPoint;                                      // 0x1790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDBDOutlineComponent*                                DBDOutline;                                              // 0x1798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCustomizedSkeletalMesh*                             CustomizedSkeletalMesh;                                  // 0x17A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Mesh2SoundPlayer_C*                              BP_Mesh2SoundPlayer;                                     // 0x17A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       BlinkAttackLockZone;                                     // 0x17B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_LeftT;                               // 0x17B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_RightT;                              // 0x17C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Vignette_LeftB;                                        // 0x17C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_LeftB;                               // 0x17D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Vignette_RightB;                                       // 0x17D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScreenSpaceLocationComponent*                       ScreenSpaceLocation_RightB;                              // 0x17E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULoudNoiseHUDIndicator*                              LoudNoiseHUDIndicator;                                   // 0x17E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Fx_FSbloodfx;                                            // 0x17F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Distortion_55E19FBE44A263E2F58D6CBD8B8F6FF5;  // 0x17F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Fade_55E19FBE44A263E2F58D6CBD8B8F6FF5;        // 0x17FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_55E19FBE44A263E2F58D6CBD8B8F6FF5;  // 0x1800(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YTCT[0x7];                                   // 0x1801(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x1808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_LungeAttack_Vignette_C6A1D26A45B8D21BE38076A15A900F67; // 0x1810(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_LungeAttack__Direction_C6A1D26A45B8D21BE38076A15A900F67; // 0x1814(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IDST[0x3];                                   // 0x1815(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_LungeAttack;                                         // 0x1818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BloodSplatterOpacityAnim_NewTrack_0_C8565C8848DC851A61C85CA0D1C69D9F; // 0x1820(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         BloodSplatterOpacityAnim__Direction_C8565C8848DC851A61C85CA0D1C69D9F; // 0x1824(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HPZB[0x3];                                   // 0x1825(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BloodSplatterOpacityAnim;                                // 0x1828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BloodSplatterFrameAnim_NewTrack_0_89AF70DC41EF75E7CD3BF6B72CCE267B; // 0x1830(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         BloodSplatterFrameAnim__Direction_89AF70DC41EF75E7CD3BF6B72CCE267B; // 0x1834(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3AFI[0x3];                                   // 0x1835(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BloodSplatterFrameAnim;                                  // 0x1838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Bloodlust_Timeline_Blend_7510578B48E7070D9984B9923F94253F; // 0x1840(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Bloodlust_Timeline__Direction_7510578B48E7070D9984B9923F94253F; // 0x1844(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5736[0x3];                                   // 0x1845(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BloodlustTimeline;                                       // 0x1848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Dissolve_99584B454ECDABDE86BE6E8CD0241B00;    // 0x1850(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_99584B454ECDABDE86BE6E8CD0241B00;  // 0x1854(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3E57[0x3];                                   // 0x1855(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x1858(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseTurnRate;                                            // 0x1860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseLookUpRate;                                          // 0x1864(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FKRY[0x8];                                   // 0x1868(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CenterOfWorld;                                           // 0x1870(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Attack;                                                  // 0x18A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VXJ5[0x3];                                   // 0x18A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IsTurning;                                               // 0x18A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CharacterHeadMesh;                                       // 0x18A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkinnedMeshComponent*                               MeshMachette;                                            // 0x18B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            TrapMaterial;                                            // 0x18B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrapPlacementValid;                                      // 0x18C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X7UM[0x3];                                   // 0x18C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TrapIndicatorOffset;                                     // 0x18C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseMaxWalkSpeed;                                        // 0x18C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      baseTerrorRadius;                                        // 0x18CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACamperPlayer*                                       SurvivorBeingKilled;                                     // 0x18D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DissolveMaterialGroupName;                               // 0x18D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              FirstPersonMaterialGroupName;                            // 0x18E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DissolveGroupName;                                       // 0x18F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              FirstPersonDissolve;                                     // 0x1908(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              FirstPersonGroupName;                                    // 0x1918(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsDissolving;                                            // 0x1928(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K4LI[0x3];                                   // 0x1929(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Weapon;                                                  // 0x192C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RootMeshIsHeadOnly;                                      // 0x1938(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QGG4[0x3];                                   // 0x1939(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TrapPlacementRaycastStart;                               // 0x193C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TrapPlacementRaycastEnd;                                 // 0x1948(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JZ71[0x4];                                   // 0x1954(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MID_Damage;                                              // 0x1958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_LockOn;                                              // 0x1960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         BlindnessCurve;                                          // 0x1968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         BlindnessMaterialCurve;                                  // 0x1970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_Stun;                                                 // 0x1978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_Smoke;                                                // 0x1980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_Chase;                                                // 0x1988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PPFlashlight;                                            // 0x1990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_SlasherBlood;                                         // 0x1998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DOFFocusPoint;                                           // 0x19A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AFTX[0x4];                                   // 0x19A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            PP_LungeAttack;                                          // 0x19A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CameraSocketName;                                        // 0x19B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSnowmanActive;                                         // 0x19BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetTrapPlacementLocation_World(struct FVector* WorldLocation);
		void GetSlasherAudioComponent(class UAkComponent** AudioComponent);
		void IsTrapPlacementValid(bool* Result);
		void SetAudioSwitchSubKillerState(const class FString& switchState);
		void InitializeBlindingFXComponent();
		void PlayAudioKillerGameStart();
		void CreateSlasherBloodPP();
		void IsActivePhaseWalking(bool* Result);
		void ShouldShowBlackVignette(bool* Show);
		void IsPassivePhaseWalking(bool* Result);
		bool LocallyObservedCharacterIsShowingFakeKillerStain();
		class UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh();
		struct FVector GetPlayerDropOffPoint();
		bool IsCloaking();
		void GetCurrentStalkTier(float* currentTier);
		void UpdateStalkModeEffect(float StalkModePercent);
		void SetDetectionZones(EAttackZoneSet AttackZones);
		void isFirstPerson(bool* FirstPerson);
		bool IsUncloaking();
		void SetMacheteCustomDepth();
		void ResetMaterials();
		void ApplyFirstPersonShaders();
		void UserConstructionScript();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void BloodlustTimeline__FinishedFunc();
		void BloodlustTimeline__UpdateFunc();
		void TML_LungeAttack__FinishedFunc();
		void TML_LungeAttack__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void BloodSplatterOpacityAnim__FinishedFunc();
		void BloodSplatterOpacityAnim__UpdateFunc();
		void BloodSplatterFrameAnim__FinishedFunc();
		void BloodSplatterFrameAnim__UpdateFunc();
		void StartTravellingPP();
		void StartTravellingDissolve();
		void StopTravellingDissolve();
		void StartPounceVFX();
		void StopPounceVFX();
		void StartSalivaVFX();
		void StopSalivaVFX();
		void StopTravellingPP();
		void ActivatePounceStateVFX();
		void SwitchKanoboToDemonMode();
		void SwitchKanobotoNormalMode();
		void HideOniKatana();
		void ShowOniKatana();
		void DestroyBloodOrb();
		void SwitchOniWeaponsToNormal();
		void ShowDemonCosmetic();
		void HideDemonCosmetic();
		void DisableDemonMode();
		void HideOniKatana_TPV();
		void ShowGunBullet();
		void HideGunBullet();
		void SpawnFakeBullet();
		void ActivateSacrificeCamBlood();
		void StartDeathBedDissolve();
		void DeactivateKnockoutVFX();
		void ActivateKnockoutVFX();
		void SpawnFullScreenBlood();
		void StartDeathBedRelocateVignette();
		void ActivateAttemptEscapeVFX();
		void ShowSyringe();
		void HideSyringe();
		void AnimateLiquidSyringe();
		void ActivateVignetteOnWallCollision();
		void HideSyringeOnStun();
		void K22_SpawnWipeVFX();
		void K22_HighlightDormantMain(bool IsDormantMain);
		void K22_HighlightDormant(bool IsDormant);
		void K22_HighlightMissJump();
		void K22_DormantAttachedSlasher();
		void K22_JumpTrail_Activate();
		void K22_JumpTrail_Deactivate();
		void K22_ReleaseBrother();
		void K22_MembraneRecovery();
		void K22_MembraneDelete();
		void K22_BabyBloodDissolve();
		void K22_BabyRespawn();
		void K22_Jump_Active();
		void K22_Jump_Inactive();
		void OnExecution();
		void K22_WrongLanding(bool WrongLanding);
		void K22_AttachedToSurvivor_VFX();
		void K22_DetachedFromSurvivor_VFX();
		void K22_WrongLandingVignette(bool WrongLanding);
		void K12_GetToxinVignette(EBombType BombType);
		void K12_GetAntidoteVignette();
		void K12_Killer_AntidoteEnd();
		void K12_Killer_AntidoteBegin();
		void K12_Killer_BombSmokeColor();
		void K12_Killer_RemoveVignette();
		void K12_Killer_PlaceVignette();
		void K22_QuickDissolveBrother();
		void Camper_AntidoteBoostVignette_Start();
		void Camper_AntidoteBoostVignette_End();
		void K22_BrotherDissolveLocker();
		void K22_HighlightMissJump_Stop();
		void K23_CamperHitByKnife(bool IsLocallyObserved, float lacerationPercent, bool isDangerous);
		void K22_IsAttachedLocker(bool IsAttachedLocker);
		void K23_ShowKnifeLT();
		void K23_ShowKnifeRT();
		void K23_ShowBat();
		void K23_HideBat();
		void K23_HideKnifeRT();
		void K23_HideKnifeLT();
		void AddBloodDrippingGKMoriMale();
		void ReturnOniToNormal();
		void Survivor_BoonRadius_Enter();
		void Survivor_BoonRadius_Exit();
		void Boon_Unbound();
		void BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight);
		void BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight);
		void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic* GlitchFX, bool Face, bool Madness, bool killer);
		void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic* LightningFX, bool intense);
		void BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit);
		void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState);
		void SetHighlightedVFX();
		void SetPlayerExposedVFX();
		void ActivateLocalPlayerExposedVFX();
		void Dissolve(bool Dissolve);
		void ActivatePlayerExposedVFX();
		void TelekinesisOn();
		void TelekinesisOff();
		void K23_StunnedByPallet();
		void NurseInvisibleOn();
		void NurseInvisibleOff();
		void FX_SetTrap();
		void FX_TrapImpact();
		void FX_TrapImpactOff();
		void FX_BloodDrops();
		void K23_Hide_LTKnife();
		void UpdateRageTierEffect(int32_t previousTier, int32_t currentTier);
		void FX_BloodDropWipe();
		void FX_WI_BloodDrops();
		void ActivateEndGameVignette(bool IsActive);
		void K23_Hide_RTKnife();
		void EvaluateBlackVignetteVisibility();
		void OnStealthChanged(bool stealth);
		void K23_Show_LTKnife();
		void ReturnToDemonMode();
		void PlayBloodHitsEffects();
		void PostProcessBloodFX();
		void K23_Show_RTKnife();
		void K23_Exit_SuperMode();
		void K05_BloodDrops();
		void K05_TrapImpactOff();
		void K05_TrapImpact();
		void K05_SetTrap();
		void K04_InvisibleOff();
		void K04_InvisibleOn();
		void K04_TelekinesisOff();
		void K04_TelekinesisOn();
		void K23_Enter_SuperMode();
		void Killer_LungeAttack_Start();
		void Killer_LungeAttack_End();
		void EventK23Camper();
		void StopBloodSplatter();
		void PlayBloodSplatter();
		void ReceiveBeginPlay();
		void OnDestroyed_Event_Machete_Copy(class AActor* DestroyedActor);
		void OnClientRestart();
		void OnEscapeDoorActivated();
		void OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
		void OnLocallyObservedChanged();
		void SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet);
		void SetAnimationCrouchState(bool crouched);
		void DisplayAttackZones(bool Display);
		void MergeLockOnDamageZones(bool enable);
		void OnLevelReadyToPlay();
		void Cosmetic_OnPickUpEnd();
		void Cosmetic_OnDropCamperEnd();
		void BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature();
		void BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature();
		void OnIntroCompleted();
		void UpdateDOF();
		void Cosmetic_OnCancelCarry();
		void OnIsKillingSurvivorWithMoriUpdated(bool isKillingSurvivorWithMori);
		void ExecuteUbergraph_BP_Slasher_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
