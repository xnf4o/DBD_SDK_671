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
	 * Class TheGunslinger.ChainPlayerMovementStatusEffect
	 * Size -> 0x0058 (FullSize[0x03A8] - InheritedSize[0x0350])
	 */
	class UChainPlayerMovementStatusEffect : public UStatusEffect
	{
	public:
		struct FDBDTunableRowHandle                                _baseMovementSpeedMultiplier;                            // 0x0350(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _collisionMovementSpeedMultiplier;                       // 0x0378(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ARifleChain*                                         _chain;                                                  // 0x03A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnIsChainCollidingChanged(bool IsColliding);
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.ChainKillerMovementStatusEffect
	 * Size -> 0x0068 (FullSize[0x0410] - InheritedSize[0x03A8])
	 */
	class UChainKillerMovementStatusEffect : public UChainPlayerMovementStatusEffect
	{
	public:
		struct FDBDTunableRowHandle                                _backwardMovementSpeedMultiplier;                        // 0x03A8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _backwardMovementAngle;                                  // 0x03D0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3J9[0x18];                                  // 0x03F8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.ChainLinkableComponent
	 * Size -> 0x00D0 (FullSize[0x0188] - InheritedSize[0x00B8])
	 */
	class UChainLinkableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_8FCI[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _cameraTargetingStrategyClass;                           // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _movementStatusEffectName;                               // 0x00D8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _linkedStatusEffectName;                                 // 0x00E4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayerReelInputAccelerationConstraintStrategy*      _inputAccelerationStrategy;                              // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URiflePlayerLinker*                                  _chainLink;                                              // 0x00F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F5G8[0x30];                                  // 0x0100(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagStateBool                                       _isLinkedLingering;                                      // 0x0130(0x0030) Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChainPlayerMovementStatusEffect*                    _movementStatusEffect;                                   // 0x0160(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_773N[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseCameraTargetingStrategy*                        _cameraStrategy;                                         // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WCNC[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.DeadMansSwitch
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class UDeadMansSwitch : public UPerk
	{
	public:
		unsigned char                                              UnknownData_DR2E[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _activationDurationByLevels[0x3];                        // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _anySurvivorLetGo;                                       // 0x03DC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I5CF[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGenerator*>                                  _blockedGenerators;                                      // 0x03E0(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XAOH[0x10];                                  // 0x03F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_BlockedGenerators();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.FireHarpoonRifleInteraction
	 * Size -> 0x04F8 (FullSize[0x0B10] - InheritedSize[0x0618])
	 */
	class UFireHarpoonRifleInteraction : public UInteractionDefinition
	{
	public:
		class FScriptMulticastDelegate                             OnFireHarpoon;                                           // 0x0618(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHitPlayer;                                             // 0x0628(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOLD[0x1];                                   // 0x0638(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFireHarpoonRifleAimingInteractionSubState                 _aimingSubState;                                         // 0x0639(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SP27[0x6];                                   // 0x063A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHarpoonProjectile*                                  _harpoon;                                                // 0x0640(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _collector;                                              // 0x0648(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimDownSightDuration;                                   // 0x0650(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimDownSightZoom;                                       // 0x0678(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimDownSightMousePitchScaleMultiplier;                  // 0x06A0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimDownSightMouseYawScaleMultiplier;                    // 0x06C8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimDownSightGamepadPitchScaleMultiplier;                // 0x06F0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimDownSightGamepadYawScaleMultiplier;                  // 0x0718(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _aimDownSightGamepadPitchCurve;                          // 0x0740(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _aimDownSightGamepadYawCurve;                            // 0x0748(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimDownSightRotationScaleAdjustmentTime;                // 0x0750(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _aimDownSightMovementSpeedMultiplier;                    // 0x0778(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _fireDuration;                                           // 0x07F8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _fireRotationScaleMultiplier;                            // 0x0820(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _fireRotationScaleAdjustmentTime;                        // 0x0848(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _fireMovementSpeedMultiplier;                            // 0x0870(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _longRangeShotMinDistance;                               // 0x0898(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7P34[0x8];                                   // 0x08C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _successMovementSpeedMultiplier;                         // 0x08C8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _missMovementSpeedMultiplier;                            // 0x08F0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _missShotCooldownDuration;                               // 0x0918(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _nearMissShotMaxDistance;                                // 0x0998(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _successShotDuration;                                    // 0x09C0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W4U3[0x128];                                 // 0x09E8(0x0128) MISSED OFFSET (PADDING)

	public:
		void Server_SetAimingSubstate(EFireHarpoonRifleAimingInteractionSubState NewState);
		void Server_HandleMissShotScores(TArray<class ADBDPlayer*> nearMissedPlayers);
		void OnHitPlayer__DelegateSignature();
		void OnFireHarpoon__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.ForThePeople
	 * Size -> 0x00C8 (FullSize[0x0490] - InheritedSize[0x03C8])
	 */
	class UForThePeople : public UPerk
	{
	public:
		unsigned char                                              UnknownData_65DM[0x19];                                  // 0x03C8(0x0019) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isHealStartedOnServer;                                  // 0x03E1(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R171[0x2];                                   // 0x03E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _brokenEffectDurations[0x3];                             // 0x03E4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _forThePeopleBrokenEffect;                               // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _forThePeopleObsessionEffect;                            // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSecondaryInteractionProperties                     _secondaryActionProperties;                              // 0x0400(0x0038) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NIEP[0x58];                                  // 0x0438(0x0058) MISSED OFFSET (PADDING)

	public:
		void Server_OnActionInputPressed();
		void OnRep_SetIsHealStartedOnServer();
		void OnHealingAbilityUsed(class ACamperPlayer* healingSurvivor, class ACamperPlayer* healedSurvivor);
		void Multicast_OnHealAbilityUsed(class ACamperPlayer* healer, class ACamperPlayer* healTarget, float amountHealed);
		void Client_OnActionInputPressedEnded();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.Gearhead
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UGearhead : public UPerk
	{
	public:
		class UClass*                                              _timedRevealToKillerEffect;                              // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _surviorAuraDurations[0x3];                              // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _perkDuration;                                           // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESkillCheckType                                            _skillCheckType;                                         // 0x03E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _basicAttack;                                            // 0x03E1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CH3J[0x6];                                   // 0x03E2(0x0006) MISSED OFFSET (PADDING)

	public:
		void Authority_OnCamperRemoved(class ACamperPlayer* removedPlayer);
		void Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.GunslingerAnimInstance
	 * Size -> 0x01E0 (FullSize[0x07E0] - InheritedSize[0x0600])
	 */
	class UGunslingerAnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isAiming;                                               // 0x0600(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAimingWarmup;                                         // 0x0601(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAimingCooldown;                                       // 0x0602(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAimingReadyToShoot;                                   // 0x0603(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isFiring;                                               // 0x0604(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInMissShotCooldown;                                   // 0x0605(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInSuccessShot;                                        // 0x0606(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isLinked;                                               // 0x0607(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isReeling;                                              // 0x0608(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInGunState;                                           // 0x0609(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PLON[0x2];                                   // 0x060A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _idleToAimAnimPlayrate;                                  // 0x060C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimToIdleAnimPlayrate;                                  // 0x0610(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _fireAnimPlayRate;                                       // 0x0614(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _missShotCooldownAnimPlayRate;                           // 0x0618(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _successShotAnimPlayRate;                                // 0x061C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _idleToAimAnim;                                          // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _aimToIdleAnim;                                          // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _fireAnim;                                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _missShotCooldownAnim;                                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _successShotAnim;                                        // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _idleToAimAnimDuration;                                  // 0x0648(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _aimToIdleAnimDuration;                                  // 0x0670(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _fireAnimDuration;                                       // 0x0698(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _missShotCooldownAnimDuration;                           // 0x06C0(0x0080) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _successShotAnimDuration;                                // 0x0740(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NA5V[0x78];                                  // 0x0768(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.GunslingerCameraTargetingStrategy
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UGunslingerCameraTargetingStrategy : public UBaseCameraTargetingStrategy
	{
	public:
		class FName                                                _cameraSocketName;                                       // 0x0050(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _survivorHarpoonSocketName;                              // 0x005C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.GunslingerEffectsComponent
	 * Size -> 0x0098 (FullSize[0x0150] - InheritedSize[0x00B8])
	 */
	class UGunslingerEffectsComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnIsAimingChanged;                                       // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PlayOutOfAmmoSound;                                      // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      _minimumTimeBetweenBroadcast;                            // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LOP2[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHarpoonRifle*                                       _rifle;                                                  // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9SZV[0x68];                                  // 0x00E8(0x0068) MISSED OFFSET (PADDING)

	public:
		void PlayOutOfAmmoSound__DelegateSignature();
		void OnItemUsedStateChanged(bool IsPressed);
		void OnIsAimingChanged__DelegateSignature(bool isAiming);
		void Multicast_PlayOutOfAmmoSound();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.GunslingerUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGunslingerUtilities : public UBlueprintFunctionLibrary
	{
	public:
		class AHarpoonRifle* STATIC_GetHarpoonRifle(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HarpoonChainPositioner
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UHarpoonChainPositioner : public UActorComponent
	{
	public:
		class UClass*                                              _harpoonPropClass;                                       // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _survivorAttachSocket;                                   // 0x00C0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _animationSocket;                                        // 0x00CC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _reelBackToRifleSpeed;                                   // 0x00D8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _harpoonMinimumSnapBackDistance;                         // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J05P[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHarpoonProp*                                        _harpoonProp;                                            // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AHarpoonProjectile*                                  _harpoonProjectile;                                      // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _collector;                                              // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CQKD[0x8];                                   // 0x0120(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARifleChain*                                         _chain;                                                  // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CLU7[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnOwnerCollected(class ADBDPlayer* collector);
		void OnHarpoonTravelingChanged(bool isTravelling);
		void OnHarpoonLoadedOnRifle();
		void OnCurrentHarpoonChanged(class AActor* currentHarpoon);
		class AHarpoonProp* GetHarpoonProp();
		class AActor* GetCurrentHarpoon();
		void AttachToRifle();
		void AttachToAnimSocket();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HarpoonedSurvivorSubAnimInstance
	 * Size -> 0x00B8 (FullSize[0x0600] - InheritedSize[0x0548])
	 */
	class UHarpoonedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_01EK[0x8];                                   // 0x0548(0x0008) Fix Super Size
		float                                                      _linkedMaxSpeed;                                         // 0x0550(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _timeBeforeHarpoonHitReset;                              // 0x0554(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _hitHarpoonedEnterEvent;                                 // 0x0558(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _chainBreakEnterEvent;                                   // 0x0564(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChainLinked;                                          // 0x0570(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingReeled;                                          // 0x0571(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasLinkInput;                                           // 0x0572(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SWXV[0x1];                                   // 0x0573(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _linkInputX;                                             // 0x0574(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _linkInputY;                                             // 0x0578(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _chainBreakTrigger;                                      // 0x057C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _triggerHarpoonHit;                                      // 0x057D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0JWN[0x2];                                   // 0x057E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _harpoonHitTurnAnimNormalizedStartTime;                  // 0x0580(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _harpoonHitAnimTurnRight;                                // 0x0584(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x0585(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0586(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6GY0[0x1];                                   // 0x0587(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _walkAnimSpeed;                                          // 0x0588(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yaw;                                                    // 0x058C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _pitch;                                                  // 0x0590(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7IKC[0x6C];                                  // 0x0594(0x006C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HarpoonLauncher
	 * Size -> 0x0058 (FullSize[0x01D8] - InheritedSize[0x0180])
	 */
	class UHarpoonLauncher : public UKillerProjectileLauncher
	{
	public:
		struct FDBDTunableRowHandle                                _launchSpeed;                                            // 0x0180(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _launchDistanceFromCamera;                               // 0x01A8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _launchZOffset;                                          // 0x01D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J9MS[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HarpoonProjectile
	 * Size -> 0x00D0 (FullSize[0x0408] - InheritedSize[0x0338])
	 */
	class AHarpoonProjectile : public AKillerProjectile
	{
	public:
		unsigned char                                              UnknownData_LG30[0x78];                                  // 0x0338(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _launchDistanceFromCamera;                               // 0x03B0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHarpoonProjectileMovementComponent*                 _movement;                                               // 0x03D8(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _environmentCollider;                                    // 0x03E0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _targetCollider;                                         // 0x03E8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              _skeletalMesh;                                           // 0x03F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPoolableActorComponent*                             _poolableActorComponent;                                 // 0x03F8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ROJA[0x8];                                   // 0x0400(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnHarpoonStop(const struct FHitResult& Result);
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HarpoonProjectileMovementComponent
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UHarpoonProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
	{
	public:
		struct FDBDTunableRowHandle                                _maxTravelDistance;                                      // 0x0260(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SDRV[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HarpoonProp
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class AHarpoonProp : public AActor
	{
	public:
		unsigned char                                              UnknownData_3YR6[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              _skeletalMesh;                                           // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HarpoonProviderComponent
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UHarpoonProviderComponent : public USingleProjectileProviderComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HarpoonRifle
	 * Size -> 0x00C0 (FullSize[0x0570] - InheritedSize[0x04B0])
	 */
	class AHarpoonRifle : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_HNWD[0x18];                                  // 0x04B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _survivorLinkableClass;                                  // 0x04C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _killerLinkableClass;                                    // 0x04D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _chainClass;                                             // 0x04D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _rifleMuzzleSocket;                                      // 0x04E0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _rifleHarpoonLoadingSocket;                              // 0x04EC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _crowActiveRange;                                        // 0x04F8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHarpoonLauncher*                                    _launcher;                                               // 0x0520(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHarpoonProviderComponent*                           _harpoonProvider;                                        // 0x0528(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ARifleChain*                                         _chain;                                                  // 0x0530(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URifleChainTensionComponent*                         _chainTensionComponent;                                  // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _chainTensionChargeable;                                 // 0x0540(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URiflePlayerLinker*                                  _playerLinker;                                           // 0x0548(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHarpoonChainPositioner*                             _harpoonChainPositioner;                                 // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFireHarpoonRifleInteraction*                        _fireInteraction;                                        // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTriggerableActivatorComponent*                      _crowsActivatorComponent;                                // 0x0560(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SE98[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		class ARifleChain* GetChain();
		void Authority_OnFireHarpoon();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HarpoonRifleAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UHarpoonRifleAnimInstance : public UAnimInstance
	{
	public:
		class ARifleChain*                                         _chain;                                                  // 0x02C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _chainUnwindingSpeed;                                    // 0x02C8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HRN8[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HellshireIronAddon
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class UHellshireIronAddon : public UItemAddon
	{
	public:
		float                                                      _undetectableDurationPostHarpoon;                        // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EDQH[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _undetectableTimedEffectClass;                           // 0x02C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _statusEffect;                                           // 0x02C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HexRetribution
	 * Size -> 0x0018 (FullSize[0x0460] - InheritedSize[0x0448])
	 */
	class UHexRetribution : public UHexPerk
	{
	public:
		float                                                      _obliviousDurationByLevels[0x3];                         // 0x0448(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _auraRevealDuration;                                     // 0x0454(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _revealEffectClass;                                      // 0x0458(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.HoneyLocustThornsAddon
	 * Size -> 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
	 */
	class UHoneyLocustThornsAddon : public UItemAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.GunslingerHarpoon
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGunslingerHarpoon : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.IridescentCoinAddon
	 * Size -> 0x0030 (FullSize[0x02E8] - InheritedSize[0x02B8])
	 */
	class UIridescentCoinAddon : public UItemAddon
	{
	public:
		class UStatusEffect*                                       _exposedStatusEffect;                                    // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R5VA[0x28];                                  // 0x02C0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.KillerChainLinkableComponent
	 * Size -> 0x0010 (FullSize[0x0198] - InheritedSize[0x0188])
	 */
	class UKillerChainLinkableComponent : public UChainLinkableComponent
	{
	public:
		unsigned char                                              UnknownData_O0VV[0x10];                                  // 0x0188(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.OffTheRecord
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UOffTheRecord : public UPerk
	{
	public:
		float                                                      _activationDurationLevels[0x3];                          // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QSMK[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _activatableEnduranceEffectClass;                        // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UActivatableEnduranceEffect*                         _activatableEnduranceEffect;                             // 0x03E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetActivationDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.PlayerReelInputAccelerationConstraintStrategy
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UPlayerReelInputAccelerationConstraintStrategy : public UBaseInputAccelerationConstraintStrategy
	{
	public:
		unsigned char                                              UnknownData_23LH[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.PrisonChainAddon
	 * Size -> 0x0030 (FullSize[0x02E8] - InheritedSize[0x02B8])
	 */
	class UPrisonChainAddon : public UItemAddon
	{
	public:
		struct FDBDTunableRowHandle                                _maxTensionCharge;                                       // 0x02B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _tensionChargeModifier;                                  // 0x02E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O97M[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.RedHerring
	 * Size -> 0x00B0 (FullSize[0x0478] - InheritedSize[0x03C8])
	 */
	class URedHerring : public UPerk
	{
	public:
		unsigned char                                              UnknownData_SO30[0x68];                                  // 0x03C8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGenerator*                                          _generatorBeingRepaired;                                 // 0x0430(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGenerator*                                          _markedGenerator;                                        // 0x0438(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _secondsToActivatePerk;                                  // 0x0440(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _loudNoiseTriggeredNotifyTime;                           // 0x0444(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _cooldownLevels[0x3];                                    // 0x0448(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E5X0[0x24];                                  // 0x0454(0x0024) MISSED OFFSET (PADDING)

	public:
		void OnRep_MarkedGenerator(class AGenerator* oldMarkedGenerator);
		void OnLoudNoiseTriggered();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.ReelChainInteraction
	 * Size -> 0x0038 (FullSize[0x0650] - InheritedSize[0x0618])
	 */
	class UReelChainInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_1KPC[0x8];                                   // 0x0618(0x0008) Fix Super Size
		float                                                      _minimumFrontVelocity;                                   // 0x0620(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G2YZ[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _linkedPlayer;                                           // 0x0628(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HPX7[0x20];                                  // 0x0630(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.ReloadHarpoonRifleInteraction
	 * Size -> 0x00B0 (FullSize[0x07F0] - InheritedSize[0x0740])
	 */
	class UReloadHarpoonRifleInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _reloadTime;                                             // 0x0740(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _movementSpeedMultiplier;                                // 0x0768(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _rotationScaleMultiplier;                                // 0x0790(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _rotationScaleAdjustmentTime;                            // 0x07B8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C5W1[0x10];                                  // 0x07E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.RifleChain
	 * Size -> 0x01E8 (FullSize[0x0418] - InheritedSize[0x0230])
	 */
	class ARifleChain : public AActor
	{
	public:
		class FScriptMulticastDelegate                             OnProjectileSet;                                         // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsCollidingChanged;                                    // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAkComponent*                                        _chainCenterAkComponent;                                 // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _collisionLoopStartEvent;                                // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _collisionLoopEndEvent;                                  // 0x0260(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAkSoundLoop>                                _collisionSoundLoops;                                    // 0x0268(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		float                                                      _sphereTraceRadius;                                      // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _timeBetweenTrace;                                       // 0x027C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _harpoon[0x10];                                          // 0x0280(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_0LYI[0x188];                                 // 0x0290(0x0188) MISSED OFFSET (PADDING)

	public:
		void UpdateChainMesh(class UInstancedStaticMeshComponent* Mesh, class USplineComponent* spline, float alpha);
		int32_t SpawnChainPoints(const struct FVector& Start, const struct FVector& Stop, class UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, class USplineComponent* spline);
		void OnUnattachFromPlayer(class ADBDPlayer* Player);
		void OnReelBackToRifle();
		void OnProjectileSet__DelegateSignature(class AActor* Projectile);
		void OnLaunch();
		void OnIsCollidingChanged__DelegateSignature(bool IsColliding);
		void OnAttachToPlayer(class ADBDPlayer* Player);
		bool IsColliding();
		float GetUnwindingSpeed();
		class URiflePlayerLinker* GetRiflePlayerLinker();
		TArray<struct FHitResult> GetFirstAndLastCollisionHits();
		class URifleChainTensionComponent* GetChainTensionComponent();
		struct FVector GetChainStart();
		struct FVector GetChainEnd();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.RifleChainTensionComponent
	 * Size -> 0x01E8 (FullSize[0x02A0] - InheritedSize[0x00B8])
	 */
	class URifleChainTensionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_8YXT[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnIsBuildingTensionChanged;                              // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HEYO[0x18];                                  // 0x00D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isBuildingTension;                                      // 0x00E8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_83JF[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USurvivorChainLinkableComponent*                     _targetlinkable;                                         // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U8CR[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxTensionCharge;                                       // 0x0108(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _baseTensionRate;                                        // 0x0130(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _collisionTensionRate;                                   // 0x0158(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _survivorPullingTensionRate;                             // 0x0180(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNonTunableStat                                     _currentTensionRate;                                     // 0x0200(0x0060) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EProgressModifier                                          _progressModifierForSurvivors;                           // 0x0260(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GALT[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                _chargeProgressDescriptionText;                          // 0x0268(0x0018) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SPEF[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARifleChain*                                         _chain;                                                  // 0x0290(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RMT6[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnTensionChargeableCompletionChanged(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
		void OnRep_IsBuildingTension();
		void OnIsBuildingTensionChanged__DelegateSignature(bool IsBuildingTension);
		bool IsBuildingTension();
		float GetProgress();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.RiflePlayerLinker
	 * Size -> 0x0158 (FullSize[0x0210] - InheritedSize[0x00B8])
	 */
	class URiflePlayerLinker : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLinkedPlayerSet;                                       // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ADBDPlayer*                                          _linkedPlayer;                                           // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _linkedPlayerDuringAttack;                               // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _linkOwner;                                              // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _desiredLinkLength;                                      // 0x00E0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2TOL[0x3C];                                  // 0x00E4(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _elasticLength;                                          // 0x0120(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minimumLinkLength;                                      // 0x0148(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _breakFreeCloseRangeMaxDistance;                         // 0x0170(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0FB7[0x4];                                   // 0x0198(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _movementLinkReductionThreshold;                         // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _movementAccelerationTreshold;                           // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TXKZ[0x6C];                                  // 0x01A4(0x006C) MISSED OFFSET (PADDING)

	public:
		void Server_OnClientConfirmTensionBreakChain(class ADBDPlayer* Player);
		void OnLinkedPlayerSet__DelegateSignature(class ADBDPlayer* linkedPlayer);
		void Multicast_Unlink();
		void Multicast_Link(class ADBDPlayer* linkedPlayer);
		class ADBDPlayer* GetLinkOwner();
		class ADBDPlayer* GetLinkedPlayer();
		void Client_OnAuthorityTensionBreakChain(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.RustedSpikeAddon
	 * Size -> 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
	 */
	class URustedSpikeAddon : public UItemAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.SurvivorChainLinkableComponent
	 * Size -> 0x00E0 (FullSize[0x0268] - InheritedSize[0x0188])
	 */
	class USurvivorChainLinkableComponent : public UChainLinkableComponent
	{
	public:
		struct FDBDTunableRowHandle                                _pullbackAngle;                                          // 0x0188(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B1Y7[0x8];                                   // 0x01B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _immobilizationDuration;                                 // 0x01B8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               _linkableInteractionTags;                                // 0x01E0(0x0020) Edit, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               _cancelableInteractionTags;                              // 0x0200(0x0020) Edit, NativeAccessSpecifierPrivate
		class UClass*                                              _velocityAdditiveStrategyClass;                          // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _immobilizationEffectName;                               // 0x0228(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CA8S[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize10                               _linkedMoveInput;                                        // 0x0238(0x000C) Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GVIV[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _immobilizationEffect;                                   // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USurvivorReelVelocityAdditiveStrategy*               _velocityAdditiveStrategy;                               // 0x0250(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NKK3[0x10];                                  // 0x0258(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_VelocityAdditiveStrategy();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.SurvivorReelVelocityAdditiveStrategy
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class USurvivorReelVelocityAdditiveStrategy : public UBaseCharacterVelocityAdditiveStrategy
	{
	public:
		struct FTunableStat                                        _reelSpeed;                                              // 0x00B8(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minimumLinkLengthDelta;                                 // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maximumVelocityAdditive;                                // 0x013C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTagStateBool                                       _isBeingReeled;                                          // 0x0140(0x0030) Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTagStateBool                                       _isBeingPulled;                                          // 0x0170(0x0030) Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ICWE[0x30];                                  // 0x01A0(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheGunslinger.TestOffTheRecord
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class UTestOffTheRecord : public UOffTheRecord
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
