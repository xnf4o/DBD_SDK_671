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
	 * Class TheClown.ActiveGasCloudTrackerComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UActiveGasCloudTrackerComponent : public UActorComponent
	{
	public:
		TArray<class ABaseGasCloudProjectile*>                     _activeToxinClouds;                                      // 0x00B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ABaseGasCloudProjectile*>                     _activeAntidoteClouds;                                   // 0x00C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.AISkill_InteractionTarget_ThrowAntidote
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UAISkill_InteractionTarget_ThrowAntidote : public UAISkill_InteractionTarget_Throw
	{
	public:
		float                                                      _minPathLengthForThrow;                                  // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minThrowDistance;                                       // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _cooldownTime;                                           // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H9VG[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnPathUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.AISkill_InteractionTarget_ThrowToxin
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UAISkill_InteractionTarget_ThrowToxin : public UAISkill_InteractionTarget_Throw
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.AISkill_Interaction_ReloadClown
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_ReloadClown : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.AISkill_Interaction_SwapToAntidote
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_SwapToAntidote : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.AISkill_Interaction_SwapToToxin
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_SwapToToxin : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.BaseGasCloudProjectile
	 * Size -> 0x0228 (FullSize[0x04E0] - InheritedSize[0x02B8])
	 */
	class ABaseGasCloudProjectile : public APhysicsBasedProjectile
	{
	public:
		EBombType                                                  _gasType;                                                // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_295A[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPoolableProjectileComponent*                        _poolableProjectile;                                     // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudDuration;                                       // 0x02C8(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudGravityScale;                                   // 0x02F0(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudBounciness;                                     // 0x0318(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudFriction;                                       // 0x0340(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _dissipateGasCloudTime;                                  // 0x0368(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudMinimumLifetime;                                // 0x0390(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudSimpleCollisionRadius;                          // 0x03B8(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudComplexCollisionRadius;                         // 0x03E0(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudSurvivorDetectionRadius;                        // 0x0408(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudDetectionDelay;                                 // 0x0430(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gasCloudCosmeticFadeDuration;                           // 0x0458(0x0028) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _overlappingTime;                                        // 0x0480(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _dissipating;                                            // 0x0484(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6OAD[0x3];                                   // 0x0485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACamperPlayer*>                               _overlappingSurvivors;                                   // 0x0488(0x0010) BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            _gasParticleSystem;                                      // 0x0498(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    _simpleCollider;                                         // 0x04A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    _complexCollider;                                        // 0x04A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpherePlayerOverlapComponent*                       _survivorDetector;                                       // 0x04B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UActiveGasCloudTrackerComponent*                     _activeGasCloudTracker;                                  // 0x04B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        _cloudSizeModifierTag;                                   // 0x04C0(0x000C) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_II06[0x4];                                   // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _cumulativeLifetime;                                     // 0x04D0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L5H1[0xC];                                   // 0x04D4(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetIsDissipating(bool IsDissipating);
		void SetIgnoredActors();
		void SetGasAudioActive(bool activated);
		void OnOverlapEnd(class UPrimitiveComponent* hitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* hitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnDelayedActivationStart(float Delay);
		void OnAcquiredChanged(bool acquired);
		void Multicast_DissipateGasCloud();
		bool IsSurvivorDetectionEnabled();
		bool IsDissipating();
		EBombType GetGasType();
		void DissipateGasCloud();
		void Authority_SetCumulativeLifetime(float value);
		float Authority_GetCumulativeLifetime();
		void ActivateCosmetic_BP();
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.AntidoteCloudProjectile
	 * Size -> 0x0000 (FullSize[0x04E0] - InheritedSize[0x04E0])
	 */
	class AAntidoteCloudProjectile : public ABaseGasCloudProjectile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.BoilOverPerk
	 * Size -> 0x00B8 (FullSize[0x0480] - InheritedSize[0x03C8])
	 */
	class UBoilOverPerk : public UPerk
	{
	public:
		TArray<struct FStatusEffectSpawnData>                      _effectsToSpawn;                                         // 0x03C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FPlayerStatusEffectSpawnerHelper                    _spawnerHelper;                                          // 0x03D8(0x0088) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      _additionnalWigglingProgressWhenFalling[0x3];            // 0x0460(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _greatHeightsValue;                                      // 0x046C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PY6P[0x10];                                  // 0x0470(0x0010) MISSED OFFSET (PADDING)

	public:
		float GetGreatHeightsValue();
		float GetAdditionnalWigglingProgressAtLevel();
		void Authority_OnWiggleEnd();
		void Authority_OnPlayerPickedUpEnd(class ADBDPlayer* picker);
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.BombLauncher
	 * Size -> 0x0018 (FullSize[0x0198] - InheritedSize[0x0180])
	 */
	class UBombLauncher : public UKillerProjectileLauncher
	{
	public:
		class UCurveFloat*                                         _speedCurve;                                             // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _pitchCurve;                                             // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBombType                                                  _currentBombType;                                        // 0x0190(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EMPS[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetProjectileSpeedCurve(class UCurveFloat* newProjectileSpeedCurve);
		void SetProjectilePitchCurve(class UCurveFloat* newProjectilePitchCurve);
		void SetPercentThrowStrength(float throwStrength);
		void Server_SwitchBombType();
		void LocalLaunch(float percentThrowStrength);
		void Local_SwitchBombType();
		bool IsBombFullyCharged();
		float GetPercentThrowStrenght();
		EBombType GetCurrentBombType();
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.ClownFingersAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UClownFingersAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isObservedCharacterSlasher;                             // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BFSF[0xF];                                   // 0x02C1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.DanceWithMePerk
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UDanceWithMePerk : public UPerk
	{
	public:
		unsigned char                                              UnknownData_APSS[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (PADDING)

	public:
		void Authority_OnPerkActivate(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.GasDizzyCosmeticEffect
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class AGasDizzyCosmeticEffect : public AActor
	{
	public:
		class UPostProcessComponent*                               _dizzyPostProcess;                                       // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OY53[0x18];                                  // 0x0238(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetWantsDizzyEffectActive(bool IsActive);
		void Cosmetic_SetDizzyEffectActive(bool IsActive);
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.GassedStatusEffect
	 * Size -> 0x00B8 (FullSize[0x0408] - InheritedSize[0x0350])
	 */
	class UGassedStatusEffect : public UStatusEffect
	{
	public:
		bool                                                       _isInCloud;                                              // 0x0350(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInAntidoteCloud;                                      // 0x0351(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EY42[0x6];                                   // 0x0352(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _overlappingClouds[0x50];                                // 0x0358(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              _overlappingAntidoteClouds[0x50];                        // 0x03A8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_8EIU[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   _totalTimesEnteringToxicClouds;                          // 0x0400(0x0002) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SLXI[0x6];                                   // 0x0402(0x0006) MISSED OFFSET (PADDING)

	public:
		void UpdateAntidoteEffectVFX(float durationRemaining);
		void SetRemainingDuration(float value);
		void SetRemainingAntidoteDuration(float value);
		void OnToxinEffectEnd(float durationSkipped);
		void OnToxinEffectBegin(float EffectDuration);
		void OnToxinCured();
		void OnRep_TotalTimesEnteringToxicClouds();
		void OnRep_IsInAntidoteCloud();
		void OnDirectBottleHit(EBombType bottleType);
		void OnAntidoteEffectEnd(float durationSkipped);
		void OnAntidoteEffectBegin(float EffectDuration);
		bool IsInCloud();
		bool IsInAntidoteCloud();
		float GetRemainingDuration();
		float GetRemainingAntidoteDuration();
		float GetCloudEffectDuration();
		float GetAntidoteCloudEffectDuration();
		void Authority_SetIsInCloud(bool value);
		void Authority_SetIsInAntidoteCloud(bool value);
		void Authority_RemoveOverlappingCloud(class ABaseGasCloudProjectile* cloud);
		void Authority_AddOverlappingCloud(class ABaseGasCloudProjectile* cloud);
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.GassedSurvivorSubAnimInstance
	 * Size -> 0x0018 (FullSize[0x0560] - InheritedSize[0x0548])
	 */
	class UGassedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_ZSTL[0x8];                                   // 0x0548(0x0008) Fix Super Size
		bool                                                       _isGassed;                                               // 0x0550(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0551(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x0552(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x0553(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C5FG[0xC];                                   // 0x0554(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.PopGoesTheWeasel
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UPopGoesTheWeasel : public UPerk
	{
	public:
		float                                                      _activePerkDuration[0x3];                                // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C2J3[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.SurvivorGasCloudEffect
	 * Size -> 0x0048 (FullSize[0x0450] - InheritedSize[0x0408])
	 */
	class USurvivorGasCloudEffect : public UGassedStatusEffect
	{
	public:
		class AGasDizzyCosmeticEffect*                             _dizzyCosmeticEffect;                                    // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _gasDizzyCosmeticEffectClass;                            // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y3OO[0x8];                                   // 0x0418(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          _dizzyEffectRelativeTransform;                           // 0x0420(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheClown.TheClownUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTheClownUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsGassed(class ADBDPlayer* Player);
		bool STATIC_IsAffectedByAntidote(class ADBDPlayer* Player);
		class UGassedStatusEffect* STATIC_GetGassedStatusEffect(class ADBDPlayer* Player);
		class UActiveGasCloudTrackerComponent* STATIC_GetActiveGasCloudTrackerComponent(class UObject* WorldContextObject);
		bool STATIC_CanBeGassed(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
