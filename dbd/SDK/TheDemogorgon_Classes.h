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
	 * Class TheDemogorgon.DemogorgonAnimInstance
	 * Size -> 0x0020 (FullSize[0x0620] - InheritedSize[0x0600])
	 */
	class UDemogorgonAnimInstance : public UKillerAnimInstance
	{
	public:
		float                                                      _leftArmPushback;                                        // 0x0600(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _rightArmPushback;                                       // 0x0604(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDemogorgonCharging;                                   // 0x0608(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K9EH[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _demogorgonChargingPercent;                              // 0x060C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X2MX[0x10];                                  // 0x0610(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonAnimProxyComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UDemogorgonAnimProxyComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BPK5[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonHuskAnimInstance
	 * Size -> 0x0080 (FullSize[0x0340] - InheritedSize[0x02C0])
	 */
	class UDemogorgonHuskAnimInstance : public UAnimInstance
	{
	public:
		class APawn*                                               _owningPawn;                                             // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _teleportDuration;                                       // 0x02C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _teleportExitPlayRate;                                   // 0x02CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSlowerExit;                                           // 0x02D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isTeleporting;                                          // 0x02D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_64UB[0x6];                                   // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _huskPortalSlowerExit;                                   // 0x02D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _huskPortalExit;                                         // 0x02E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        _demogorgonPortalExit;                                   // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        _demogorgonPortalEntry;                                  // 0x02F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UDemogorgonPortalPlacerStateComponent> _demogorgonPortalPlacerState;                            // 0x02F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y6HF[0x40];                                  // 0x0300(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPortal
	 * Size -> 0x00C0 (FullSize[0x03E8] - InheritedSize[0x0328])
	 */
	class ADemogorgonPortal : public AInteractable
	{
	public:
		unsigned char                                              UnknownData_ODF2[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 _portalAreaCollider;                                     // 0x0338(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargeableComponent*                                _destroyChargeable;                                      // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargeableComponent*                                _teleportChargeable;                                     // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDemogorgonPortalState                                     _portalState;                                            // 0x0350(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P4F0[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       _portalIdleSound;                                        // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _portalDestroyingStart;                                  // 0x0360(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _portalTeleportingSound;                                 // 0x0368(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     _destroyParticleSystem;                                  // 0x0370(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _destroyDuration;                                        // 0x0378(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KPLK[0x24];                                  // 0x037C(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ADBDPlayer*>                                  _destroyingPlayers;                                      // 0x03A0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0QLR[0x30];                                  // 0x03B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPerceptionStimuliSourceComponent*                 _perceptionStimuliComponent;                             // 0x03E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TriggerDirtExplosion();
		void ShowPortalTeleportInteractionStartVFX();
		void ShowPortalActiveVFX();
		void RemovePortalTeleportInteractionStartVFX();
		void RemovePortalActiveVFX();
		void PlaySoundFromPortal(class UAkAudioEvent* SoundEvent);
		void OnTeleportAbilityCooldownChangedVFX(bool isOnCooldown);
		void OnTargetedChanged();
		void OnPortalStateChanged(EDemogorgonPortalState State);
		void OnPortalDestroyed(class ADBDPlayer* Player);
		void OnEndOverlapPortalArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlapPortalArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void MakePortalDisappearVFX();
		bool IsTargeted();
		void Authority_StopDestroyingPlayers();
		void Authority_OnTeleportChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		void Authority_OnDestroyChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPortalOutlineUpdateStrategy
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UDemogorgonPortalOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _survivorAuraColor;                                      // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPortalPlacementValidationStrategy
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UDemogorgonPortalPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
	{
	public:
		class UDemogorgonPortalPlacerStateComponent*               _portalPlacerState;                                      // 0x00E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargedAttackStateComponent*                        _chargedAttackState;                                     // 0x00E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceForWorldCollisionDetection;                     // 0x00F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _numberOfGroundTest;                                     // 0x00F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _portalEdgeTestRadius;                                   // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxElevationDifferentialOnPortalEdge;                   // 0x00FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPortalPlacerStateComponent
	 * Size -> 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
	 */
	class UDemogorgonPortalPlacerStateComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnTeleportCooldownComplete;                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92AA[0xC];                                   // 0x00C8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _remainingPortals;                                       // 0x00D4(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TEUQ[0x48];                                  // 0x00D8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ADemogorgonPortal*>                           _placedPortals;                                          // 0x0120(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FPortalRestrictedLocation>                   _restrictedPortalLocations;                              // 0x0130(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1SE5[0x18];                                  // 0x0140(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateRemainingPortalCount();
		void OnLevelReadyToPlay();
		void OnDemogorgonTeleportCooldownComplete__DelegateSignature();
		bool IsUsePortalCooldownDone();
		void InitializeTunableValues(class ASlasherPlayer* killer);
		float GetTeleportDuration();
		int32_t GetRemainingPortalCount();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPortalRadiusDetectorComponent
	 * Size -> 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
	 */
	class UDemogorgonPortalRadiusDetectorComponent : public UActorComponent
	{
	public:
		TArray<class ADemogorgonPortal*>                           Portals;                                                 // 0x00B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ADBDPlayer*>                                  _playersInsideRadius;                                    // 0x00C8(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W0CW[0x38];                                  // 0x00D8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _portalContactEffect;                                    // 0x0110(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _portalProximityHuntingCamperEffect;                     // 0x0118(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_PlayersInsideRadius();
		void OnPortalEffectsAppliedMultiDelegate__DelegateSignature();
		void Authority_OnLevelReadyToPlay();
		void Authority_CallOnPortalEffectsApplied(const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPortalTargetingComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UDemogorgonPortalTargetingComponent : public UActorComponent
	{
	public:
		class ADemogorgonPortal*                                   _targetedPortal;                                         // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDemogorgonPortalPlacerStateComponent*               _portalPlacerState;                                      // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LVRV[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetIsPorting(bool isPorting);
		void Server_SetTargetedPortal(class ADemogorgonPortal* targetedPortal);
		void Multicast_SetTargetedPortal(class ADemogorgonPortal* targetedPortal);
		class ADemogorgonPortal* GetTargetedPortal();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttack
	 * Size -> 0x0070 (FullSize[0x03F0] - InheritedSize[0x0380])
	 */
	class UDemogorgonPounceAttack : public UPounceAttack
	{
	public:
		unsigned char                                              UnknownData_T8ZF[0x70];                                  // 0x0380(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UDemogorgonPounceAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UDemogorgonPounceAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UDemogorgonPounceAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UDemogorgonPounceAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceInteraction
	 * Size -> 0x00B0 (FullSize[0x07F0] - InheritedSize[0x0740])
	 */
	class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_FK4C[0x70];                                  // 0x0740(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargedAttackStateComponent*                        _chargedAttackState;                                     // 0x07B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASlasherPlayer*                                      _owningSlasher;                                          // 0x07B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZNVW[0x30];                                  // 0x07C0(0x0030) MISSED OFFSET (PADDING)

	public:
		void TriggerHuntingAudioEvent(bool isHunting);
		void TriggerChargeCancelAudioEvent();
		void OnChargedAttackReadyChanged(bool Ready);
		void OnCancelCooldownComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPower
	 * Size -> 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
	 */
	class ADemogorgonPower : public ACollectable
	{
	public:
		class UClass*                                              _demogorgonHuskClass;                                    // 0x04B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              _demogorgonHusk;                                         // 0x04B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPowerItemProgressComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UDemogorgonPortalPlacerStateComponent*               _portalPlacerState;                                      // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonScoreComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UDemogorgonScoreComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_DY4X[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonStealthComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UDemogorgonStealthComponent : public UActorComponent
	{
	public:
		class UStatusEffect*                                       _stealthEffect;                                          // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _stealthEffectClass;                                     // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3921[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (PADDING)

	public:
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DestroyDemogorgonPortalInteraction
	 * Size -> 0x0010 (FullSize[0x0750] - InheritedSize[0x0740])
	 */
	class UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition
	{
	public:
		class ADemogorgonPortal*                                   _owningPortal;                                           // 0x0740(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0VTH[0x8];                                   // 0x0748(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.ElevensSodaAddon
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class UElevensSodaAddon : public UItemAddon
	{
	public:
		unsigned char                                              UnknownData_F616[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGenerator*>                                  _generatorsBeingRepaired;                                // 0x02C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void Multicast_UnhighlightGenerator(class AGenerator* Generator);
		void Multicast_HighlightGenerator(class AGenerator* Generator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.PortalSurvivorSubAnimInstance
	 * Size -> 0x0048 (FullSize[0x0590] - InheritedSize[0x0548])
	 */
	class UPortalSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_E8PX[0x8];                                   // 0x0548(0x0008) Fix Super Size
		unsigned char                                              UnknownData_K4XO[0x38];                                  // 0x0550(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isDestroyingPortal;                                     // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSpooked;                                              // 0x0589(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasSkillCheckFailed;                                    // 0x058A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O2O2[0x5];                                   // 0x058B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.SetGroundPortalInteraction
	 * Size -> 0x0020 (FullSize[0x0760] - InheritedSize[0x0740])
	 */
	class USetGroundPortalInteraction : public UChargeableInteractionDefinition
	{
	public:
		class UDemogorgonPortalPlacerStateComponent*               _portalPlacerState;                                      // 0x0740(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObjectPlacerComponent*                              _trapPlacerComponent;                                    // 0x0748(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _portalClassToSpawn;                                     // 0x0750(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JF5X[0x8];                                   // 0x0758(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.TeleportToDemogorgonPortalInteraction
	 * Size -> 0x00C0 (FullSize[0x0800] - InheritedSize[0x0740])
	 */
	class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      TeleportToPortalSoundRange;                              // 0x0740(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _enterPortalPhaseDuration;                               // 0x0744(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cancelTeleportingPhaseDuration;                         // 0x0748(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EXMF[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDemogorgonPortalTargetingComponent*                 _portalTargetingComponent;                               // 0x0750(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDemogorgonPortalPlacerStateComponent*               _portalPlacerState;                                      // 0x0758(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADemogorgonPortal*                                   _startingPortal;                                         // 0x0760(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADemogorgonPortal*                                   _targetedPortal;                                         // 0x0768(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _interactingPlayer;                                      // 0x0770(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GCCI[0x88];                                  // 0x0778(0x0088) MISSED OFFSET (PADDING)

	public:
		void OnTeleportInteractionCanceledVFX();
		void OnSlasherSet(class ASlasherPlayer* killer);
		void OnLocallyObservedChanged(bool isKillerLocallyObserved);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
