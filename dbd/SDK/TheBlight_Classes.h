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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class TheBlight.ActivateBlightPower
	 * Size -> 0x0000 (FullSize[0x0740] - InheritedSize[0x0740])
	 */
	class UActivateBlightPower : public UChargeableInteractionDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.Addon_TheBlight_14
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class UAddon_TheBlight_14 : public UItemAddon
	{
	public:
		float                                                      _speedIncreasePerDash;                                   // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XVO1[0xC];                                   // 0x02BC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.Addon_TheBlight_15
	 * Size -> 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
	 */
	class UAddon_TheBlight_15 : public UOnEventBaseAddon
	{
	public:
		float                                                      _palletPulldownBlockRange;                               // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _palletPulldownBlockSeconds;                             // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.Addon_TheBlight_18
	 * Size -> 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
	 */
	class UAddon_TheBlight_18 : public UOnEventBaseAddon
	{
	public:
		float                                                      _survivorInRangeDistance;                                // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hinderedSeconds;                                        // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SpawnParticleOnSurvivor(class ACamperPlayer* CamperPlayer);
		void Multicast_SpawnParticleOnSurvivors(TArray<class ACamperPlayer*> survivors);
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.Addon_TheBlight_19
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UAddon_TheBlight_19 : public UItemAddon
	{
	public:
		class UClass*                                              _blightUndetectableEffect;                               // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.Addon_TheBlight_20
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UAddon_TheBlight_20 : public UItemAddon
	{
	public:
		float                                                      _survivorInRangeDistance;                                // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorRevealTime;                                     // 0x02BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.Addon_TheBlight_21
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UAddon_TheBlight_21 : public UItemAddon
	{
	public:
		class UStatusEffect*                                       _forceKoStatusEffect;                                    // 0x02B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class UAddon_TheBlight_ConsecutiveDashSpeedBonus : public UItemAddon
	{
	public:
		float                                                      _speedIncreasePerDash;                                   // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DA7X[0xC];                                   // 0x02BC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.Addon_TheBlight_SoulChemical
	 * Size -> 0x0060 (FullSize[0x0318] - InheritedSize[0x02B8])
	 */
	class UAddon_TheBlight_SoulChemical : public UItemAddon
	{
	public:
		float                                                      _triggerDistance;                                        // 0x02B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESkillCheckCustomType                                      _skillCheckType;                                         // 0x02BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H208[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _interactionSemantics;                                   // 0x02C0(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               _blightPowerStateTag;                                    // 0x02E0(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8WJ1[0x18];                                  // 0x0300(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightAnimInstance
	 * Size -> 0x0020 (FullSize[0x0620] - InheritedSize[0x0600])
	 */
	class UBlightAnimInstance : public UKillerAnimInstance
	{
	public:
		class UBlightPowerStateComponent*                          _blightPowerStateComponent;                              // 0x0600(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWallGrabState                                             _powerState;                                             // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LC4W[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _stateTimeRemaining;                                     // 0x060C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lookAngle;                                              // 0x0610(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UU4T[0xC];                                   // 0x0614(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightAttackPicker
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UBlightAttackPicker : public USlasherAttackPickerComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightDashAttack
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class UBlightDashAttack : public UPounceAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightDashAttackOpenSubstate
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UBlightDashAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightDashAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UBlightDashAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightDashAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UBlightDashAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightDashAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UBlightDashAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPower
	 * Size -> 0x0158 (FullSize[0x0608] - InheritedSize[0x04B0])
	 */
	class ABlightPower : public ACollectable
	{
	public:
		class UPowerChargeComponent*                               _blightPowerCharge;                                      // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerToggleComponent*                               _blightPowerToggle;                                      // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _blightPowerActivateChargeable;                          // 0x04C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlightPowerStateComponent*                          _blightPowerStateComponent;                              // 0x04C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _blightPowerActivateMaxCharge;                           // 0x04D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _blightPowerMaxCharge;                                   // 0x04F8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _blightPowerDechargeRate;                                // 0x0578(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _blightPowerRechargeRate;                                // 0x05A0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4P66[0x40];                                  // 0x05C8(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnPowerStateChanged(EWallGrabState previousState, EWallGrabState NewState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerEstimatedCollisionIndicator
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ABlightPowerEstimatedCollisionIndicator : public AActor
	{
	public:
		unsigned char                                              UnknownData_A8BE[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnShowIndicator_Cosmetic();
		void OnHideIndicator_Cosmetic();
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerState
	 * Size -> 0x0150 (FullSize[0x0180] - InheritedSize[0x0030])
	 */
	class UBlightPowerState : public UObject
	{
	public:
		unsigned char                                              UnknownData_52AI[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _stateSpeedCurve;                                        // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _stateDuration;                                          // 0x0048(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _cameraPitchRecenterTime;                                // 0x00C8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _wallDashCollisionRadius;                                // 0x00F0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _wallDashCollisionHeight;                                // 0x0118(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _wallDashCollisionRange;                                 // 0x0140(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _playerCanCancelEarly;                                   // 0x0168(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DB63[0xF];                                   // 0x0169(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _displayCollisionIndicator;                              // 0x0178(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5UBS[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (PADDING)

	public:
		float GetStateDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateAdjusting
	 * Size -> 0x0040 (FullSize[0x01C0] - InheritedSize[0x0180])
	 */
	class UBlightPowerStateAdjusting : public UBlightPowerState
	{
	public:
		bool                                                       _adjustRotationOnCollision;                              // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _bounceAwayFromCollision;                                // 0x0181(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _allowNavigation;                                        // 0x0182(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _smashBreakables;                                        // 0x0183(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MRJN[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxDistanceForSurvivorFacing;                           // 0x0188(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PKAT[0x10];                                  // 0x01B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateDash
	 * Size -> 0x00D0 (FullSize[0x0250] - InheritedSize[0x0180])
	 */
	class UBlightPowerStateDash : public UBlightPowerState
	{
	public:
		unsigned char                                              UnknownData_NBQN[0x8];                                   // 0x0180(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _vectorInterpToSpeed;                                    // 0x0188(0x0080) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _noDashTimeLimitSpeedCurve;                              // 0x0208(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _lookAngleToTurnRateCurveController;                     // 0x0210(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _lookAngleToTurnRateCurveMouse;                          // 0x0218(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _lookAngleToMaxTurnRateCurveMouse;                       // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LR3J[0x28];                                  // 0x0228(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateAttack
	 * Size -> 0x0028 (FullSize[0x0278] - InheritedSize[0x0250])
	 */
	class UBlightPowerStateAttack : public UBlightPowerStateDash
	{
	public:
		unsigned char                                              UnknownData_7K11[0x28];                                  // 0x0250(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateComponent
	 * Size -> 0x02A8 (FullSize[0x0360] - InheritedSize[0x00B8])
	 */
	class UBlightPowerStateComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_9W7P[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPowerCollided;                                         // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      _blightPowerStateClasses;                                // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _canDashCheckCollisionRadius;                            // 0x00F0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _canDashCheckCollisionHeight;                            // 0x0118(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _canDashCheckCollisionRange;                             // 0x0140(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               _canWallGrabPlayerTags;                                  // 0x0168(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _blightLethalDashDodgeRadius;                            // 0x0188(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInteractionDefinition*                              _powerInteractionDefinition;                             // 0x01B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LPZE[0x18];                                  // 0x01B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimerObject*                                        _stateTimer;                                             // 0x01D0(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UBlightPowerState*>                           _blightPowerStates;                                      // 0x01D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UBlightPowerState*                                   _currentBlightPowerState;                                // 0x01E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _dashTokens;                                             // 0x01F0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JUWY[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _maximumDashTokens;                                      // 0x01F8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _tokenChargeRate;                                        // 0x0278(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FZ8S[0x68];                                  // 0x02F8(0x0068) MISSED OFFSET (PADDING)

	public:
		void Server_SetWallGrabState(EWallGrabState NewState);
		void ResetDashTokens();
		void OnRep_StateTimer();
		void OnRep_DashTokens();
		void OnLevelReadyToPlay();
		void Multicast_SetWallGrabState(EWallGrabState NewState);
		float GetStateTimeRemaining();
		class UTimerObject* GetStateTimer();
		float GetStateTimeElapsed();
		class UBlightPowerState* GetPowerStateByEnum(EWallGrabState StateEnum);
		EWallGrabState GetPowerState();
		float GetLookAngleDegrees();
		unsigned char GetDashTokensRemaining();
		class UBlightPowerState* GetCurrentPowerState();
		bool CanDash();
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateCooldown
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UBlightPowerStateCooldown : public UBlightPowerState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateHolding
	 * Size -> 0x0040 (FullSize[0x01C0] - InheritedSize[0x0180])
	 */
	class UBlightPowerStateHolding : public UBlightPowerState
	{
	public:
		struct FSecondaryInteractionProperties                     _secondaryInteractionProperties;                         // 0x0180(0x0038) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		bool                                                       _allowNavigation;                                        // 0x01B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PD86[0x3];                                   // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _dashSpeedForProjection;                                 // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlightPowerStateInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateLethalDash
	 * Size -> 0x0040 (FullSize[0x0290] - InheritedSize[0x0250])
	 */
	class UBlightPowerStateLethalDash : public UBlightPowerStateDash
	{
	public:
		struct FSecondaryInteractionProperties                     _secondaryInteractionProperties;                         // 0x0250(0x0038) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		bool                                                       _smashBreakables;                                        // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TF6V[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateNonLethalDash
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	class UBlightPowerStateNonLethalDash : public UBlightPowerStateDash
	{
	public:
		bool                                                       _smashBreakables;                                        // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7ERF[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BlightPowerStateReady
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UBlightPowerStateReady : public UBlightPowerState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.BuiltToLast
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class UBuiltToLast : public UPerk
	{
	public:
		float                                                      _refillPercentage[0x3];                                  // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _hideDuration[0x3];                                      // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              _numberOfTimesPerkTriggered;                             // 0x03E0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2AAE[0xF];                                   // 0x03E1(0x000F) MISSED OFFSET (PADDING)

	public:
		void OnBuiltToLastTrigger_Cosmetic();
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.DesperateMeasures
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UDesperateMeasures : public UPerk
	{
	public:
		float                                                      _healAndUnhookMultiplier[0x3];                           // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _nbInjuredHookedOrDyingSurvivors;                        // 0x03D4(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.DragonsGrip
	 * Size -> 0x0060 (FullSize[0x0428] - InheritedSize[0x03C8])
	 */
	class UDragonsGrip : public UPerk
	{
	public:
		class AGenerator*                                          _kickedGenerator;                                        // 0x03C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _activationDuration[0x3];                                // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownDuration[0x3];                                  // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _exposedEffectDuration[0x3];                             // 0x03E8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _onlyExposeFirstSurvivor;                                // 0x03F4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5TLM[0xB];                                   // 0x03F5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _loudNoiseRange;                                         // 0x0400(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRevealSurvivor(class ADBDPlayer* Instigator);
		void Multicast_OnRevealSurvivor(class ADBDPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.HexBloodFavor
	 * Size -> 0x0018 (FullSize[0x0460] - InheritedSize[0x0448])
	 */
	class UHexBloodFavor : public UHexPerk
	{
	public:
		float                                                      _palletInRange[0x3];                                     // 0x0448(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _palletPulldownBlockTime[0x3];                           // 0x0454(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.HexUndying
	 * Size -> 0x0068 (FullSize[0x04B0] - InheritedSize[0x0448])
	 */
	class UHexUndying : public UHexPerk
	{
	public:
		unsigned char                                              UnknownData_NN7Q[0x58];                                  // 0x0448(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _revealAuraDistanceFromTotem[0x3];                       // 0x04A0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TH0A[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (PADDING)

	public:
		void Authority_UpdateHexPerkStatusView(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable);
		void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);
		void Authority_OnCamperCleansedHexPerk(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.Visionary
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UVisionary : public UPerk
	{
	public:
		float                                                      _auraVisibilityRange[0x3];                               // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownDuration[0x3];                                  // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetRangeAtLevel();
		float GetCooldownAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheBlight.WallGrabInteractionDefinition
	 * Size -> 0x0048 (FullSize[0x0660] - InheritedSize[0x0618])
	 */
	class UWallGrabInteractionDefinition : public UInteractionDefinition
	{
	public:
		class UBlightPowerStateComponent*                          _blightPowerStateComponent;                              // 0x0618(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _wallDashAccelerationMultiplier;                         // 0x0620(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ABlightPowerEstimatedCollisionIndicator*             _blightPowerCollisionIndicator;                          // 0x0648(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _collisionIndicatorActorClass;                           // 0x0650(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LEG5[0x8];                                   // 0x0658(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
