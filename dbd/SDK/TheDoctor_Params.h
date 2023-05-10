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
	 * Function TheDoctor.Alert.OnPerkActivate_Cosmetic
	 */
	struct UAlert_OnPerkActivate_Cosmetic_Params
	{	};

	/**
	 * Function TheDoctor.CartersSpark.Cosmetic_OnShockTherapyZoneDetonated
	 */
	struct ACartersSpark_Cosmetic_OnShockTherapyZoneDetonated_Params
	{
	public:
		class ADBDPlayer*                                          killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    survivorsHitCount;                                       // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.CartersSpark.CancelSurvivorInteraction
	 */
	struct ACartersSpark_CancelSurvivorInteraction_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.CartersSpark.Authority_StartShockAttackComboTimer
	 */
	struct ACartersSpark_Authority_StartShockAttackComboTimer_Params
	{
	public:
		class ACamperPlayer*                                       shockedSurvivor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DisciplineEffect.SetRedStainInterpolating
	 */
	struct UDisciplineEffect_SetRedStainInterpolating_Params
	{
	public:
		bool                                                       isInterpolating;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DisciplineEffect.Cosmetic_UpdateSurvivorRedStain
	 */
	struct UDisciplineEffect_Cosmetic_UpdateSurvivorRedStain_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZFM1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DisciplineEffect.Cosmetic_UpdateKillerRedStain
	 */
	struct UDisciplineEffect_Cosmetic_UpdateKillerRedStain_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R3WN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DisciplineEffect.Cosmetic_SpawnRedStains
	 */
	struct UDisciplineEffect_Cosmetic_SpawnRedStains_Params
	{	};

	/**
	 * Function TheDoctor.DisciplineEffect.Cosmetic_ActivateSurvivorRedStain
	 */
	struct UDisciplineEffect_Cosmetic_ActivateSurvivorRedStain_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DisciplineEffect.Cosmetic_ActivateKillerRedStain
	 */
	struct UDisciplineEffect_Cosmetic_ActivateKillerRedStain_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorCheatComponent.DBD_AddMadness
	 */
	struct UDoctorCheatComponent_DBD_AddMadness_Params
	{
	public:
		float                                                      madnessToAdd;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OVCS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              localPlayerId;                                           // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStop
	 */
	struct UDoctorPowerSubAnimInstance_OnShockTherapyAnimationAttackStop_Params
	{	};

	/**
	 * Function TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStart
	 */
	struct UDoctorPowerSubAnimInstance_OnShockTherapyAnimationAttackStart_Params
	{	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.IsSurvivorOperatingLocker
	 */
	struct ADoctorSurvivorCosmeticHelperActor_IsSurvivorOperatingLocker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.GetSurvivorMadnessEffect
	 */
	struct ADoctorSurvivorCosmeticHelperActor_GetSurvivorMadnessEffect_Params
	{
	public:
		class USurvivorMadnessEffect*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.GetIllusionaryDoctor
	 */
	struct ADoctorSurvivorCosmeticHelperActor_GetIllusionaryDoctor_Params
	{
	public:
		class AIllusionaryDoctor*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorShocked
	 */
	struct ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnOwningSurvivorShocked_Params
	{	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessIntermittentScream
	 */
	struct ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnMadnessIntermittentScream_Params
	{	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessChanged
	 */
	struct ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnMadnessChanged_Params
	{
	public:
		int32_t                                                    newTier;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       increased;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnInsaneSkillCheck
	 */
	struct ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnInsaneSkillCheck_Params
	{	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletDeactivated
	 */
	struct ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnIllusionaryPalletDeactivated_Params
	{
	public:
		class APallet*                                             Pallet;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletActivated
	 */
	struct ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnIllusionaryPalletActivated_Params
	{
	public:
		class APallet*                                             Pallet;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryDoctorApparitionSequenceStart
	 */
	struct ADoctorSurvivorCosmeticHelperActor_Cosmetic_OnIllusionaryDoctorApparitionSequenceStart_Params
	{
	public:
		struct FTransform                                          illusionaryDoctorTransform;                              // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      apparitionDuration;                                      // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayShockedAnimation
	 */
	struct ADoctorSurvivorCosmeticHelperActor_CanPlayShockedAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAudio
	 */
	struct ADoctorSurvivorCosmeticHelperActor_CanPlayOverwhelmingMadnessAudio_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAnimation
	 */
	struct ADoctorSurvivorCosmeticHelperActor_CanPlayOverwhelmingMadnessAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayerSeeIllusionaryPalletGlitch
	 */
	struct ADoctorSurvivorCosmeticHelperActor_CanPlayerSeeIllusionaryPalletGlitch_Params
	{
	public:
		class APallet*                                             Pallet;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryDoctor.DeactivateIllusion
	 */
	struct AIllusionaryDoctor_DeactivateIllusion_Params
	{	};

	/**
	 * Function TheDoctor.IllusionaryDoctor.ActivateIllusion
	 */
	struct AIllusionaryDoctor_ActivateIllusion_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryDoctorEffect.Multicast_StartIllusionaryDoctorAppearSequence
	 */
	struct UIllusionaryDoctorEffect_Multicast_StartIllusionaryDoctorAppearSequence_Params
	{
	public:
		struct FTransform                                          illusionaryDoctorTransform;                              // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryDoctorEffect.Multicast_DebugDisplayInfo
	 */
	struct UIllusionaryDoctorEffect_Multicast_DebugDisplayInfo_Params
	{
	public:
		float                                                      timeRemainingBeforeActivation;                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              messageColor;                                            // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryPalletBaseAddon.Multicast_DeactivateIllusionaryPallet
	 */
	struct UIllusionaryPalletBaseAddon_Multicast_DeactivateIllusionaryPallet_Params
	{
	public:
		class APallet*                                             Pallet;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          triggeringPlayer;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryPalletBaseAddon.Multicast_ActivateIllusionaryPallet
	 */
	struct UIllusionaryPalletBaseAddon_Multicast_ActivateIllusionaryPallet_Params
	{
	public:
		class APallet*                                             Pallet;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isPalletDown;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryPalletBaseAddon.Authority_OnIllusionaryPalletActorOverlapped
	 */
	struct UIllusionaryPalletBaseAddon_Authority_OnIllusionaryPalletActorOverlapped_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TVM7[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletDeactivation
	 */
	struct UIllusionaryPalletComponent_OnStartIllusionaryPalletDeactivation_Params
	{
	public:
		class ADBDPlayer*                                          triggeringPlayer;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletActivation
	 */
	struct UIllusionaryPalletComponent_OnStartIllusionaryPalletActivation_Params
	{
	public:
		bool                                                       isPalletDown;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryPalletComponent.GetGlitchEffectRange
	 */
	struct UIllusionaryPalletComponent_GetGlitchEffectRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryPalletComponent.DeactivateIllusionaryPallet
	 */
	struct UIllusionaryPalletComponent_DeactivateIllusionaryPallet_Params
	{	};

	/**
	 * Function TheDoctor.IllusionaryPalletComponent.CanLocallyObservedPlayerSeeIllusionaryPallet
	 */
	struct UIllusionaryPalletComponent_CanLocallyObservedPlayerSeeIllusionaryPallet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IllusionaryPalletComponent.ActivateIllusionaryPallet
	 */
	struct UIllusionaryPalletComponent_ActivateIllusionaryPallet_Params
	{
	public:
		bool                                                       isPalletDown;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IridescentQueenEffect.OnRep_ChargeActive
	 */
	struct UIridescentQueenEffect_OnRep_ChargeActive_Params
	{	};

	/**
	 * Function TheDoctor.IridescentQueenEffect.Multicast_DischargeOnSurvivor
	 */
	struct UIridescentQueenEffect_Multicast_DischargeOnSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IridescentQueenEffect.GetStaticFieldMovementSpeed
	 */
	struct UIridescentQueenEffect_GetStaticFieldMovementSpeed_Params
	{
	public:
		EStaticFieldMovementSpeed                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IridescentQueenEffect.Cosmetic_UpdateStaticFieldFX
	 */
	struct UIridescentQueenEffect_Cosmetic_UpdateStaticFieldFX_Params
	{	};

	/**
	 * Function TheDoctor.IridescentQueenEffect.Cosmetic_SpawnStaticFieldFX
	 */
	struct UIridescentQueenEffect_Cosmetic_SpawnStaticFieldFX_Params
	{	};

	/**
	 * Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneDeactivated
	 */
	struct UIridescentQueenEffect_Cosmetic_OnDischargeZoneDeactivated_Params
	{	};

	/**
	 * Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneActivated
	 */
	struct UIridescentQueenEffect_Cosmetic_OnDischargeZoneActivated_Params
	{	};

	/**
	 * Function TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeOnSurvivor
	 */
	struct UIridescentQueenEffect_Cosmetic_OnDischargeOnSurvivor_Params
	{
	public:
		class ADBDPlayer*                                          survivorToShock;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.IridescentQueenEffect.Authority_OnSurvivorOverlappedDischargeZone
	 */
	struct UIridescentQueenEffect_Authority_OnSurvivorOverlappedDischargeZone_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EW8S[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.Lithe.GetMovementSpeedPercentage
	 */
	struct ULithe_GetMovementSpeedPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.Lithe.GetMovementSpeedDuration
	 */
	struct ULithe_GetMovementSpeedDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.Overcharge.GetSkillCheckFailurePenaltyAtLevel
	 */
	struct UOvercharge_GetSkillCheckFailurePenaltyAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.Overcharge.GetRegressionRateMultiplierCurve
	 */
	struct UOvercharge_GetRegressionRateMultiplierCurve_Params
	{
	public:
		class UCurveFloat*                                         ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.ShockTherapy.OnLevelReadyToPlay
	 */
	struct UShockTherapy_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheDoctor.ShockTherapy.Multicast_DetonateShockTherapy
	 */
	struct UShockTherapy_Multicast_DetonateShockTherapy_Params
	{
	public:
		TArray<class ACamperPlayer*>                               shockedSurvivors;                                        // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      madnessToAdd;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.ShockTherapy.Multicast_ActivateShockTherapyAOE
	 */
	struct UShockTherapy_Multicast_ActivateShockTherapyAOE_Params
	{
	public:
		struct FTransform                                          shockTherapyZoneTransform;                               // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.ShockTherapy.Cosmetic_OnShockTherapyChargeEnd
	 */
	struct UShockTherapy_Cosmetic_OnShockTherapyChargeEnd_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       charged;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.ShockTherapyAOE.OnScaleInitialized
	 */
	struct AShockTherapyAOE_OnScaleInitialized_Params
	{	};

	/**
	 * Function TheDoctor.ShockTherapyAOE.Cosmetic_ActivateShockTherapyAOE
	 */
	struct AShockTherapyAOE_Cosmetic_ActivateShockTherapyAOE_Params
	{	};

	/**
	 * Function TheDoctor.ShockTherapyAOEPreview.SetAttackZonePreviewScale
	 */
	struct AShockTherapyAOEPreview_SetAttackZonePreviewScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SnapOutOfIt.Authority_OnSkillCheckResponseAuthority
	 */
	struct USnapOutOfIt_Authority_OnSkillCheckResponseAuthority_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Bonus;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6DIP[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerLoudNoise;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkillCheckCustomType                                      Type;                                                    // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.StaticBlast.Multicast_StaticBlastShockSurvivors
	 */
	struct UStaticBlast_Multicast_StaticBlastShockSurvivors_Params
	{
	public:
		TArray<class ACamperPlayer*>                               survivorsToShock;                                        // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.StaticBlast.Cosmetic_OnStaticBlastChargeEnd
	 */
	struct UStaticBlast_Cosmetic_OnStaticBlastChargeEnd_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       charged;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.SpawnMadnessBubbleIndicator
	 */
	struct USurvivorMadnessEffect_SpawnMadnessBubbleIndicator_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.OnRep_MadnessAmount
	 */
	struct USurvivorMadnessEffect_OnRep_MadnessAmount_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierChanged
	 */
	struct USurvivorMadnessEffect_Multicast_OnMadnessTierChanged_Params
	{
	public:
		int32_t                                                    newMadnessTier;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    oldMadnessTier;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.Multicast_MadnessIntermittentScream
	 */
	struct USurvivorMadnessEffect_Multicast_MadnessIntermittentScream_Params
	{	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.GetMadnessTier
	 */
	struct USurvivorMadnessEffect_GetMadnessTier_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.Authority_AddMadness
	 */
	struct USurvivorMadnessEffect_Authority_AddMadness_Params
	{
	public:
		float                                                      amountToAdd;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.SurvivorMadnessEffect.ActivateMadnessBubbleIndicator
	 */
	struct USurvivorMadnessEffect_ActivateMadnessBubbleIndicator_Params
	{	};

	/**
	 * Function TheDoctor.TheDoctorUtilities.IsTotallyInsane
	 */
	struct UTheDoctorUtilities_IsTotallyInsane_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect
	 */
	struct UTheDoctorUtilities_GetSurvivorMadnessEffect_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USurvivorMadnessEffect*                              ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.TheDoctorUtilities.GetMadnessTier
	 */
	struct UTheDoctorUtilities_GetMadnessTier_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDoctor.TheDoctorUtilities.CanGainInsanity
	 */
	struct UTheDoctorUtilities_CanGainInsanity_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
