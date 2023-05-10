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
	 * Class TheK24.ActivateK24PowerInteraction
	 * Size -> 0x0090 (FullSize[0x07D0] - InheritedSize[0x0740])
	 */
	class UActivateK24PowerInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_KIJK[0x10];                                  // 0x0740(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _interactionViewPitchMax;                                // 0x0750(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _interactionViewPitchMin;                                // 0x0778(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maximumTimeToTriggerRegularAttack;                      // 0x07A0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4GRI[0x8];                                   // 0x07C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetK24Power(class AK24Power* K24Power);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.Addon_K24_04
	 * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
	 */
	class UAddon_K24_04 : public UOnEventBaseAddon
	{
	public:
		float                                                      _effectTime;                                             // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        OutlineColor;                                            // 0x02CC(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JJSX[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.Addon_K24_19
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UAddon_K24_19 : public UImposeStatusEffectOnEventAddon
	{
	public:
		class UClass*                                              _zombieEscapeDoorPointsActor;                            // 0x02E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.AISkill_FindCollectable_SupplyCrate
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UAISkill_FindCollectable_SupplyCrate : public UAISkill_FindCollectable_Searchable
	{
	public:
		struct FAITunableParameter                                 UrgencyGoalWeight;                                       // 0x0148(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.AISkill_InteractionUseItem_Serum
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionUseItem_Serum : public UAISkill_InteractionUseItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BiteTheBullet
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UBiteTheBullet : public UPerk
	{
	public:
		class UClass*                                              _effectClass;                                            // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _server_healTarget;                                      // 0x03D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BiteTheBulletEffect
	 * Size -> 0x0008 (FullSize[0x0360] - InheritedSize[0x0358])
	 */
	class UBiteTheBulletEffect : public UBaseLingeringStatusEffect
	{
	public:
		unsigned char                                              UnknownData_DPYQ[0x8];                                   // 0x0358(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMine
	 * Size -> 0x0020 (FullSize[0x04D8] - InheritedSize[0x04B8])
	 */
	class UBlastMine : public UGeneratorTrapPerk
	{
	public:
		class UClass*                                              _blastMinePlacerClass;                                   // 0x04B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _blastMineFirecrackerClass;                              // 0x04C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ABlastMineFirecracker*                               _blastMine;                                              // 0x04C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GT80[0x8];                                   // 0x04D0(0x0008) MISSED OFFSET (PADDING)

	public:
		void TrapAttachedToGenerator_Cosmetic(class AGenerator* trappedGenerator);
		void ThrowBubbleIndicator_Cosmetic(const struct FTransform& Location);
		void Client_TrapActivatedLoudNotification(const struct FTransform& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineFirecracker
	 * Size -> 0x0080 (FullSize[0x0400] - InheritedSize[0x0380])
	 */
	class ABlastMineFirecracker : public AFirecracker
	{
	public:
		unsigned char                                              UnknownData_9SSN[0x30];                                  // 0x0380(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTrapRemovedBlueprintEvent;                             // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class AGenerator*                                          _trappedGenerator;                                       // 0x03C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RUP2[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleStateMachine*                                 _stateMachine;                                           // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlastMineKickSensor*                                _kickSensor;                                             // 0x03D8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlastMineVisibilityController*                      _visibilityController;                                   // 0x03E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lifetime;                                               // 0x03E8(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _authority_ExplosionCount;                               // 0x03EC(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _authority_CurrentState;                                 // 0x03F0(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TNCY[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnTrapRemovedBlueprintEvent__DelegateSignature(EBlastMineRemovedReason removedReason);
		void OnRep_Lifetime();
		void OnRep_AuthorityExplosionCount();
		void OnRep_AuthorityCurrentState();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineKickSensor
	 * Size -> 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
	 */
	class UBlastMineKickSensor : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_7ZME[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         _kickChargeTriggerRange;                                 // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASlasherPlayer*                                      _kickingKiller;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _kickGeneratorChargeable;                                // 0x00E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGenerator*                                          _generator;                                              // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HMMM[0x20];                                  // 0x00F8(0x0020) MISSED OFFSET (PADDING)

	public:
		void Authority_OnKickChargeablePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineState_Explode
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	class UBlastMineState_Explode : public USimpleStateMachineBaseState
	{
	public:
		unsigned char                                              UnknownData_1CSX[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineTransition_ExplodeToHidden
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UBlastMineTransition_ExplodeToHidden : public USimpleStateMachineBaseTransition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineState_Hidden
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UBlastMineState_Hidden : public USimpleStateMachineBaseState
	{
	public:
		unsigned char                                              UnknownData_90DU[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineTransition_HiddenToSpawned
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UBlastMineTransition_HiddenToSpawned : public USimpleStateMachineBaseTransition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineState_Spawned
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	class UBlastMineState_Spawned : public USimpleStateMachineBaseState
	{
	public:
		unsigned char                                              UnknownData_AXDR[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineTransition_SpawnedToExplode
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UBlastMineTransition_SpawnedToExplode : public USimpleStateMachineBaseTransition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineTransition_SpawnedToHidden
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UBlastMineTransition_SpawnedToHidden : public USimpleStateMachineBaseTransition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlastMineVisibilityController
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class UBlastMineVisibilityController : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GHF1[0x70];                                  // 0x00B8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _systems[0x50];                                          // 0x0128(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              _meshes[0x50];                                           // 0x0178(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_BUGY[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool IsVisible();
		void AddMeshComponent(class UMeshComponent* MeshComponent);
		void AddFXSystem(class UFXSystemComponent* System);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BlindZombieFlashlightableLightingStrategy
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UBlindZombieFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.BTTask_MoveToAbortIfStuck
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UBTTask_MoveToAbortIfStuck : public UBTTask_MoveTo
	{
	public:
		unsigned char                                              UnknownData_WTM5[0x4];                                   // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _deltaConsideredStuck;                                   // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1Z0X[0xC];                                   // 0x00C8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _maxTimeStuck;                                           // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ChangeZombieStateBTTask
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UChangeZombieStateBTTask : public UBTTask_BlueprintBase
	{
	public:
		EZombieState                                               _zombieState;                                            // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RZHP[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ContaminationSerumCollectable
	 * Size -> 0x0018 (FullSize[0x0510] - InheritedSize[0x04F8])
	 */
	class AContaminationSerumCollectable : public ABaseCamperCollectable
	{
	public:
		unsigned char                                              UnknownData_OOCJ[0x18];                                  // 0x04F8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ContaminationSubAnimInstance
	 * Size -> 0x0078 (FullSize[0x05C0] - InheritedSize[0x0548])
	 */
	class UContaminationSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_TWXY[0x8];                                   // 0x0548(0x0008) Fix Super Size
		bool                                                       _isContaminated;                                         // 0x0550(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInjectingSerumSelf;                                   // 0x0551(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInjectingSerumOther;                                  // 0x0552(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingInjectedWithSerum;                               // 0x0553(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingHealed;                                          // 0x0554(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isFirstContaminationHit;                                // 0x0555(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _triggerCough;                                           // 0x0556(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L8LX[0x1];                                   // 0x0557(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _timeBetweenCough;                                       // 0x0558(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x055C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x055D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInsideCloset;                                         // 0x055E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInteracting;                                          // 0x055F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHoldingAimItem;                                       // 0x0560(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x0561(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHooked;                                               // 0x0562(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDead;                                                 // 0x0563(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isFrightScreaming;                                      // 0x0564(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHoldingSmallItem;                                     // 0x0565(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingAimItem;                                         // 0x0566(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHoldingHandleItem;                                    // 0x0567(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInjured;                                              // 0x0568(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCarried;                                              // 0x0569(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EInteractionAnimation                                      _interactionType;                                        // 0x056A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HX6C[0x55];                                  // 0x056B(0x0055) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.Counterforce
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class UCounterforce : public UPerk
	{
	public:
		unsigned char                                              UnknownData_5O3B[0x4];                                   // 0x03C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _totemAuraVisibleDuration[0x3];                          // 0x03CC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _startingTotemCleanseSpeedBonus[0x3];                    // 0x03D8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _stackableTotemCleanseSpeedBonus[0x3];                   // 0x03E4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Multicast_ShowTotemAura(class ATotem* Totem);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.EnvQueryContext_ZombiePatrolAreaPoint
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_ZombiePatrolAreaPoint : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.Eruption
	 * Size -> 0x0050 (FullSize[0x0418] - InheritedSize[0x03C8])
	 */
	class UEruption : public UPerk
	{
	public:
		TArray<class AGenerator*>                                  _server_affectedGenerators;                              // 0x03C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		bool                                                       _isPerkEnabled;                                          // 0x03D8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RMLS[0x3];                                   // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _generatorRegressPercentage[0x3];                        // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorImposedStatusEffectDuration[0x3];               // 0x03E8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _perkCooldownDuration[0x3];                              // 0x03F4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _screamRevealLocationDuration;                           // 0x0400(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GBA4[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _survivorEffectClass;                                    // 0x0408(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W7L4[0x8];                                   // 0x0410(0x0008) MISSED OFFSET (PADDING)

	public:
		void Multicast_TriggerPerk(TArray<class AGenerator*> explodingGenerators);
		void Multicast_HighlightGenerator(class AGenerator* Generator);
		void MakeSurvivorScreamCosmetic(class ADBDPlayer* screamingSurvivor);
		float GetSurvivorImposedStatusEffectDurationAtLevel();
		float GetScreamRevealLocationDuration();
		float GetGeneratorRegressPercentageAtLevel();
		void Cosmetic_OnGeneratorHighlightStart(class AGenerator* highlightedGenerator);
		void Cosmetic_OnGeneratorHighlightEnd(class AGenerator* highlightedGenerator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.EruptionIconStrategy
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UEruptionIconStrategy : public UBasePerkIconStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.Flashbang
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class UFlashbang : public UPerk
	{
	public:
		unsigned char                                              UnknownData_DU7S[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGenerator*                                          _generatorBeingRepaired;                                 // 0x03D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _generatorsRepairTargetProgression;                      // 0x03E0(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _generatorRepairPercentToCraftFlashbang[0x3];            // 0x03E4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_GeneratorsRepairProgress();
		float GetGeneratorRepairPercentToCraftFlashbangAtLevel();
		void Cosmetic_OnGeneratorRepairProgressionTargetAchieved();
		void Client_OnGeneratorRepairProgressionTargetAchieved();
		void Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.GeneratorBlastMinePlacerComponent
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UGeneratorBlastMinePlacerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_SMLV[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _mineRelativeHeightFromGenerator;                        // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5RYH[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABlastMineFirecracker*                               _blastMine;                                              // 0x00D8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_BlastMine();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.Hysteria
	 * Size -> 0x0078 (FullSize[0x0440] - InheritedSize[0x03C8])
	 */
	class UHysteria : public UPerk
	{
	public:
		float                                                      _obliviousEffectDuration[0x3];                           // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _perkCooldownDuration[0x3];                              // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ARDS[0x8];                                   // 0x03E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _obliviousEffectClass;                                   // 0x03E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class ACamperPlayer*, class UHysteriaObliviousEffect*> _obliviousEffectPerSurvivorMap;                          // 0x03F0(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.HysteriaObliviousEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UHysteriaObliviousEffect : public UTimedObliviousEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.InClosetFlashbangItemCraftInteraction
	 * Size -> 0x0000 (FullSize[0x0630] - InheritedSize[0x0630])
	 */
	class UInClosetFlashbangItemCraftInteraction : public UItemCraftInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.IncreaseZombiesSpeedStatusEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UIncreaseZombiesSpeedStatusEffect : public UStatusEffect
	{
	public:
		float                                                      _zombieSpeedAdditive;                                    // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SF2I[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.InjectSerumInteraction
	 * Size -> 0x00C0 (FullSize[0x0800] - InheritedSize[0x0740])
	 */
	class UInjectSerumInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FTunableStat                                        _injectSerumKillerInstinctTime;                          // 0x0740(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7Y9M[0x8];                                   // 0x07C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _scoreEvent;                                             // 0x07C8(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A5WE[0x4];                                   // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _serumApplyHeal;                                         // 0x07D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnSurvivorCured_Cosmetic();
		void OnKillerSet(class ASlasherPlayer* killer);
		class ACamperPlayer* GetInjectionTarget();
		void Authority_CureSurvivor(class ACamperPlayer* CamperPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.InjectSerumOther
	 * Size -> 0x0000 (FullSize[0x0800] - InheritedSize[0x0800])
	 */
	class UInjectSerumOther : public UInjectSerumInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.InjectSerumSelf
	 * Size -> 0x0000 (FullSize[0x0800] - InheritedSize[0x0800])
	 */
	class UInjectSerumSelf : public UInjectSerumInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24AnimInstance
	 * Size -> 0x0020 (FullSize[0x0620] - InheritedSize[0x0600])
	 */
	class UK24AnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isInPowerMode;                                          // 0x0600(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChargingPower;                                        // 0x0601(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isK24PowerAttacking;                                    // 0x0602(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isRequestingPowerAttack;                                // 0x0603(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _powerLevel;                                             // 0x0604(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GWW9[0x18];                                  // 0x0608(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnKillerPowerLevelChanged(int32_t powerlevel);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24CharacterFXComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UK24CharacterFXComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPowerLevelChangedFx;                                   // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Local_OnKillerHitZombie;                                 // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Local_OnKillerContaminatedSurvivor;                      // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LBI[0x28];                                  // 0x00E8(0x0028) MISSED OFFSET (PADDING)

	public:
		void Local_OnKillerPowerLevelChanged(int32_t powerlevel);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24CheatComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UK24CheatComponent : public UActorComponent
	{
	public:
		class UClass*                                              _zombieManagementClass;                                  // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AZombiesManagement*                                  _zombiesManagement;                                      // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void DBD_TeleportZombiesTo(float X, float Y, float Z);
		void DBD_K24ZombieFall(float Zvalue);
		void DBD_K24StopAllZombies();
		void DBD_K24StartAllZombies();
		void DBD_K24SpawnZombieOnKiller();
		void DBD_K24SetPowerLevelPoints(float value);
		void DBD_K24SetContaminationOnSurvivor(bool value);
		void DBD_K24ComeToMeMyZombies();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24PounceAttack
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class UK24PounceAttack : public UPounceAttack
	{
	public:
		void Server_HitZombie(class AZombieCharacter* zombie, float TargetLocationTimestamp);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24Power
	 * Size -> 0x0428 (FullSize[0x08D8] - InheritedSize[0x04B0])
	 */
	class AK24Power : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_I5T5[0x88];                                  // 0x04B0(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _powerWalkSpeed;                                         // 0x0538(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _powerWalkSpeedLevel3;                                   // 0x0560(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _normalWalkSpeed;                                        // 0x0588(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _powerMouseYawScale;                                     // 0x05B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _powerYawAdjustTime;                                     // 0x05D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _powerGamePadYawScale;                                   // 0x0600(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _activateK24PowerCharge;                                 // 0x0628(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _activateK24PowerSecondsToCharge;                        // 0x0630(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _activatePowerChargeSpeedCurve;                          // 0x0658(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _activatePowerChargeLvl3SpeedCurve;                      // 0x0660(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _playedPowerChargeSpeedCurve;                            // 0x0668(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _k24PowerCooldownInteraction;                            // 0x0670(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _whipLengthLevel1;                                       // 0x0678(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _whipLengthLevel2;                                       // 0x06A0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _whipLengthLevel3;                                       // 0x06C8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _contaminationComponentBP;                               // 0x06F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _powerChargeSurvivorContaminatedPoint;                   // 0x06F8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _powerChargeZombieKilledPoint;                           // 0x0778(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _powerChargeSurvivorHitPoint;                            // 0x07F8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _powerLevelPoints;                                       // 0x0878(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_474L[0x4];                                   // 0x087C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _powerLevelPointsToLevel2;                               // 0x0880(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _powerLevelPointsToLevel3;                               // 0x08A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VDMZ[0x8];                                   // 0x08D0(0x0008) MISSED OFFSET (PADDING)

	public:
		void WhipAttackStart_Cosmetic();
		void WhipAttackMove_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& whipEndLocation, bool isFirstRayCast);
		void WhipAttackHit_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& impactPointLocation, const struct FVector& whipEndLocation, bool isFirstHit, const struct FVector& ImpactNormal, const class FName& phyMaterial, bool hitACharacter);
		void WhipAttackEnd_Cosmetic();
		void Server_PowerDestroyPallet(class APallet* Pallet);
		void Server_PowerDestroyBreakable(class ABreakableBase* breakable);
		void Server_KillAZombie(class AZombieCharacter* zombie, EAttackType attackType);
		void PowerHitStateEnd_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& whipEndLocation);
		void PowerCooldownEnd_Cosmetic();
		void OnRep_PowerLevelPoints();
		void OnPowerStop_Cosmetic();
		void OnPowerStartCharge_Cosmetic();
		void OnPowerLevelChanged_Cosmetic(int32_t powerlevel);
		void Multicast_PowerDestroyPallet(class APallet* Pallet);
		void Multicast_PowerDestroyBreakable(class ABreakableBase* breakable);
		bool IsInPower();
		float GetWhipLength();
		int32_t GetPowerLevel();
		void Authority_OnSurvivorContaminated(EContaminator contaminator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24PowerAnimInstance
	 * Size -> 0x0160 (FullSize[0x0420] - InheritedSize[0x02C0])
	 */
	class UK24PowerAnimInstance : public UAnimInstance
	{
	public:
		class ASlasherPlayer*                                      _owningKiller;                                           // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInPowerMode;                                          // 0x02C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChargingPower;                                        // 0x02C9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isK24PowerAttacking;                                    // 0x02CA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isRequestingPowerAttack;                                // 0x02CB(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _tentacleLength;                                         // 0x02CC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isFirstPersonView;                                      // 0x02D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAttackSubstate                                            _attackSubstate;                                         // 0x02D1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIntroCompleted;                                       // 0x02D2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isLevelReadyToPlay;                                     // 0x02D3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _powerLevel;                                             // 0x02D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _forwardVelocity;                                        // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lateralVelocity;                                        // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x02E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isKilling;                                              // 0x02E1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2Q1M[0x6];                                   // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _swingIdleTPVSequences[0x3];                             // 0x02E8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _wipeIdleTPVSequences[0x3];                              // 0x0300(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _missIdleTPVSequences[0x3];                              // 0x0318(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _bowIdleTPVSequences[0x3];                               // 0x0330(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _swingIdleTPVSequence;                                   // 0x0348(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _wipeIdleTPVSequence;                                    // 0x0350(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _missIdleTPVSequence;                                    // 0x0358(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _bowIdleTPVSequence;                                     // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _swingLocoTPVSequence;                                   // 0x0368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _wipeLocoTPVSequence;                                    // 0x0370(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _missLocoTPVSequence;                                    // 0x0378(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _bowLocoTPVSequence;                                     // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _swingFPVSequences[0x3];                                 // 0x0388(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _wipeFPVSequences[0x3];                                  // 0x03A0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _missFPVSequences[0x3];                                  // 0x03B8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _bowFPVSequences[0x3];                                   // 0x03D0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _swingFPVSequence;                                       // 0x03E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _wipeFPVSequence;                                        // 0x03F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _missFPVSequence;                                        // 0x03F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _bowFPVSequence;                                         // 0x0400(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AK24Power*                                           _k24Power;                                               // 0x0408(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E26P[0x10];                                  // 0x0410(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		void OnKillerPowerLevelChanged(int32_t powerlevel);
		void OnIntroCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.k24PowerCooldownInteraction
	 * Size -> 0x0048 (FullSize[0x0660] - InheritedSize[0x0618])
	 */
	class Uk24PowerCooldownInteraction : public UInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _k24PowerCooldownTime;                                   // 0x0618(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _cooldownSpeedCurve;                                     // 0x0640(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _cooldownLvl3SpeedCurve;                                 // 0x0648(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _playedCooldownSpeedCurve;                               // 0x0650(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DSFH[0x8];                                   // 0x0658(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetK24Power(class AK24Power* K24Power);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24PowerPresentationItemProgressComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UK24PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class AK24Power*                                           _k24Power;                                               // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetK24Power(class AK24Power* K24Power);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24SlashAttack
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class UK24SlashAttack : public UK24PounceAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24WhipAttack
	 * Size -> 0x0070 (FullSize[0x03F0] - InheritedSize[0x0380])
	 */
	class UK24WhipAttack : public UPounceAttack
	{
	public:
		struct FDBDTunableRowHandle                                _attackSphereTraceRadius;                                // 0x0380(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _attackMinDistanceToObstruction;                         // 0x03A8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _whipMovementFromOffset;                                 // 0x03D0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _whipMovementToOffset;                                   // 0x03DC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YO2K[0x8];                                   // 0x03E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Server_HitBreakableOrZombie();
		void Server_ContaminatePlayer(class ACamperPlayer* Target, float TargetLocationTimestamp);
		void Client_ContaminationResult(class ADBDPlayer* Target, bool IsValid);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24WhipAttackOpenSubstate
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	class UK24WhipAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		class UCurveFloat*                                         _lvl3SpeedCurve;                                         // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24WhipAttackHittingSubstate
	 * Size -> 0x00C0 (FullSize[0x0260] - InheritedSize[0x01A0])
	 */
	class UK24WhipAttackHittingSubstate : public UPounceAttackHittingSubstate
	{
	public:
		struct FDBDTunableRowHandle                                _attackSphereTraceRadius;                                // 0x01A0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _powerAttackBreakObjectLevel;                            // 0x01C8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _powerCanBreakObjectAfterAPlayerDamage;                  // 0x01F0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _whipMovementFromOffset;                                 // 0x0218(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _whipMovementToOffset;                                   // 0x0224(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _whipMovementCurve;                                      // 0x0230(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _lvl3SpeedCurve;                                         // 0x0238(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _whipGroundDetectionOffset;                              // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1IX9[0x1C];                                  // 0x0244(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24WhipAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UK24WhipAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24WhipAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UK24WhipAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.K24WhipAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UK24WhipAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.LethalPursuer
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class ULethalPursuer : public UPerk
	{
	public:
		float                                                      _survivorRevealDuration[0x3];                            // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J2B3[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _timedRevealEffect;                                      // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Server_ActivatePerk();
		void Local_OnIntroCompleted();
		float GetSurvivorRevealDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.Resurgence
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UResurgence : public UPerk
	{
	public:
		float                                                      _healRegainPercentage[0x3];                              // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AKIH[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.RookieSpirit
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class URookieSpirit : public UPerk
	{
	public:
		int32_t                                                    _numberOfGreatSkillChecksOnGeneratorRepair;              // 0x03C8(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _numberOfGeneratorRepairGreatSkillChecksRequired[0x3];   // 0x03CC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_NumberOfGreatSkillChecksOnGeneratorRepair();
		void HandleGeneratorIsDamagedChanged(class AGenerator* Generator, class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.SerumOutlineUpdateStrategy
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class USerumOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.SupplyCrateOutlineUpdateStrategy
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class USupplyCrateOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.SurvivorContaminationComponent
	 * Size -> 0x0150 (FullSize[0x0208] - InheritedSize[0x00B8])
	 */
	class USurvivorContaminationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_LEKV[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagStateBool                                       _isContaminated;                                         // 0x00D0(0x0030) Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _injectSerumChargeable;                                  // 0x0100(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _injectSerumSecondsToCharge;                             // 0x0108(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hinderedEffect;                                         // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _contaminationHinderedSeconds;                           // 0x0138(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _contaminationHinderedValue;                             // 0x01B8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3UQ5[0x8];                                   // 0x01E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      _injectSerumInteractionsClasses;                         // 0x01E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UInteractionDefinition*>                      _injectSerumInteractions;                                // 0x01F8(0x0010) ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void OnRep_IsContaminated();
		void OnRep_InjectSerumInteractions();
		void OnContaminationCured_Cosmetic();
		void OnContaminated_SFX_Stinger_Cosmetic();
		void OnContaminated_Cosmetic(EContaminator contaminator);
		void Multicast_OnContaminated_Cosmetic(EContaminator contaminator);
		bool IsContaminated();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.TheK24Utilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTheK24Utilities : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieAcquirePatrolAreaBTService
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UZombieAcquirePatrolAreaBTService : public UBTService_BlueprintBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieAcquireTargetBTService
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UZombieAcquireTargetBTService : public UBTService_BlueprintBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieAIController
	 * Size -> 0x02F0 (FullSize[0x0630] - InheritedSize[0x0340])
	 */
	class AZombieAIController : public AAIController
	{
	public:
		unsigned char                                              UnknownData_M9OZ[0x18];                                  // 0x0340(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       _zombieBehaviorTree;                                     // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIPerceptionComponent*                              _aiPerceptionComponent;                                  // 0x0360(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T9K7[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACamperPlayer*>                               _survivorInVision;                                       // 0x0370(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class ACamperPlayer*                                       _chaseTargetSurvivor;                                    // 0x0380(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _goToLocation;                                           // 0x0388(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7R15[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMeatHook*                                           _patrolArea;                                             // 0x0398(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ACamperPlayer*>                               _survivorsInAttackDetector;                              // 0x03A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                _cannotChaseWhileIdleTags;                               // 0x03B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _zombieAttackHitTime;                                    // 0x03C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _zombieAttackOpenTime;                                   // 0x03E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _zombieAnimSpawnTime;                                    // 0x0410(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _zombieAnimDyingTime;                                    // 0x0438(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _zombieSightRadius;                                      // 0x0460(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _zombieLoseSightRadius;                                  // 0x04E0(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _zombieVisionHalfAngle;                                  // 0x0560(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _zombieFallSmashTime;                                    // 0x05E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _zombieAttackCooldownTime;                               // 0x0608(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnSlasherSet(class ASlasherPlayer* Slasher);
		void Authority_OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieAnimInstance
	 * Size -> 0x0090 (FullSize[0x0350] - InheritedSize[0x02C0])
	 */
	class UZombieAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isChasing;                                              // 0x02C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3FCA[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _chaseLocomotionPlayRate;                                // 0x02C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _chaseSequenceMaxSpeed;                                  // 0x02C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _chaseLocomotionIndex;                                   // 0x02CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _chaseLocomotionMaxIndex;                                // 0x02D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FFloatRange                                         _chaseLocomotionIndexChangeTimerDurationRange;           // 0x02D4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingFirstChaseLocomotionPlayer;                      // 0x02E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAttacking;                                            // 0x02E5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CA63[0x2];                                   // 0x02E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _attackIndex;                                            // 0x02E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _maxAttackIndex;                                         // 0x02EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isPatrollingOrSearching;                                // 0x02F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isStunned;                                              // 0x02F1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDying;                                                // 0x02F2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSpawning;                                             // 0x02F3(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInPool;                                               // 0x02F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1FE9[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AZombieCharacter*                                    _zombieCharacter;                                        // 0x02F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _speed;                                                  // 0x0300(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isMoving;                                               // 0x0304(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isFalling;                                              // 0x0305(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isMale;                                                 // 0x0306(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IKJI[0x1];                                   // 0x0307(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _currentDirection;                                       // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            _currentRotation;                                        // 0x030C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      _rotationInterpolationSpeed;                             // 0x0318(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _rotationInterpolationSpeedDuringChase;                  // 0x031C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X1R1[0x30];                                  // 0x0320(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieAttackSurvivorBTTask
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UZombieAttackSurvivorBTTask : public UBTTask_BlueprintBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieAttractedByGeneratorBTService
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	class UZombieAttractedByGeneratorBTService : public UBTService_BlueprintBase
	{
	public:
		float                                                      _genRepairingHearingRange;                               // 0x00A0(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L78B[0x2C];                                  // 0x00A4(0x002C) MISSED OFFSET (PADDING)

	public:
		void OnInRangeChanged(bool inRange, class AGenerator* Generator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieBlindableComponent
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UZombieBlindableComponent : public UBlindableBaseComponent
	{
	public:
		class UGameplayTagContainerComponent*                      _ownerObjectState;                                       // 0x0240(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieBlindingFXComponent
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class UZombieBlindingFXComponent : public UKillerBlindingFXComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieCharacter
	 * Size -> 0x0340 (FullSize[0x0810] - InheritedSize[0x04D0])
	 */
	class AZombieCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_H74Y[0x38];                                  // 0x04D0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _zombieWalkSpeed;                                        // 0x0508(0x0080) Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V696[0x8];                                   // 0x0588(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAuthoritativePoolableActorComponent*                _poolableComponent;                                      // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USphereComponent*                                    _zombieAttackDetector;                                   // 0x0598(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _attackDamageZone;                                       // 0x05A0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EZombieState                                               _zombieState;                                            // 0x05A8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IX5X[0x3F];                                  // 0x05A9(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _zombieRespawnTimeKilledBySlasher;                       // 0x05E8(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _zombieRespawnTimeKilledBySurvivor;                      // 0x0668(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3QZP[0x8];                                   // 0x06E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          _respawnPositionBehindGate;                              // 0x06F0(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		EZombieGender                                              _zombieGender;                                           // 0x0720(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_76YC[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       _femaleSkeletalMesh;                                     // 0x0728(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              _audioSwitchState;                                       // 0x0730(0x0010) Edit, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UZombieBlindableComponent*                           _blindableComponent;                                     // 0x0740(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _blindingChargeableComponent;                            // 0x0748(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFirecrackerEffectHandlerComponent*                  _firecrackerEffectHandlerComponent;                      // 0x0750(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFlashlightableComponent*                            _flashLightableComponent;                                // 0x0758(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3GYD[0x38];                                  // 0x0760(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _zombieStunBaseTime;                                     // 0x0798(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameplayTagContainerComponent*                      _objectState;                                            // 0x07C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BS8R[0x8];                                   // 0x07C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterPositionRecorderComponent*                 _positionRecorder;                                       // 0x07D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeMovementComponent*                     _authoritativeMovementComponent;                         // 0x07D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOtherCharactersVerticalCollisionsHandler*           _otherCharactersVerticalCollisionsHandler;               // 0x07E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      _ignoreActors;                                           // 0x07E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M6P2[0x4];                                   // 0x07F8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _zombieStunnedCapsuleRadius;                             // 0x07FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minFallHeight;                                          // 0x0800(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WEXP[0x8];                                   // 0x0804(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _afterInAirAttackCooldown;                               // 0x080C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ZombieKilledByKiller_Cosmetic(EAttackType attackType);
		void SetCharacterActive_Cosmetic(bool value);
		void OnZombieStateChanged_Cosmetic(EZombieState ZombieState);
		void OnSlasherSet(class ASlasherPlayer* Slasher);
		void OnRep_ZombieState(EZombieState previousState);
		void OnRep_ZombieGender();
		void OnFemaleGenderSet_Cosmetic();
		void OnEndOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void Multicast_ZombieKilledByKillerCosmetic(EAttackType attackType);
		EZombieGender GetZombieGender();
		class UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler();
		class UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent();
		class FString GetAudioSwitchState();
		void Authority_OnZombieStateChanged(EZombieState ZombieState);
		void Authority_OnFlashlightRemoved(class UFlashlightComponent* Flashlight);
		void Authority_OnFlashlightAdded(class UFlashlightComponent* Flashlight);
		void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
		void Authority_DeactivateZombieAndStartRespawnTimer();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieChaseStateBTService
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UZombieChaseStateBTService : public UBTService_BlueprintBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieChaseSurvivorTargetBTTask
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UZombieChaseSurvivorTargetBTTask : public UBTTask_BlueprintBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieCustomizationComponent
	 * Size -> 0x0008 (FullSize[0x0438] - InheritedSize[0x0430])
	 */
	class UZombieCustomizationComponent : public UCustomizedSkeletalMesh
	{
	public:
		TWeakObjectPtr<class ACamperPlayer>                        _survivorSource;                                         // 0x0430(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Multicast_SetZombieCustomization(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieEscapeDoorPointsActor
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class AZombieEscapeDoorPointsActor : public AActor
	{
	public:
		TArray<class UArrowComponent*>                             _availablePoints;                                        // 0x0230(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieEvaluateEnterChaseBTService
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UZombieEvaluateEnterChaseBTService : public UBTService_BlueprintBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieEvaluteEnterAttackBTService
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UZombieEvaluteEnterAttackBTService : public UBTService_BlueprintBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieFallDetectorComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UZombieFallDetectorComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _zombieDistanceConsideredSmashFall;                      // 0x00B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C5O5[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)

	public:
		void Authority_OnMovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieOutlineUpdateStrategy
	 * Size -> 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
	 */
	class UZombieOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
	{
	public:
		class AZombieCharacter*                                    _zombieCharacter;                                        // 0x0138(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieResurrector
	 * Size -> 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
	 */
	class UZombieResurrector : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_UD5M[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _powerLevelToSpawnZombie;                                // 0x00D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BV05[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AZombieCharacter*>                            _delayedSpawnZombies;                                    // 0x0108(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4BSJ[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnKillerPowerLevelChanged(int32_t powerlevel);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieRotateTowardsTargetBTTask
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UZombieRotateTowardsTargetBTTask : public UBTTask_BlueprintBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombiesInterestEventManager
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UZombiesInterestEventManager : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1N6A[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _zombieInterestEvents;                                   // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4O2K[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, const struct FVector& Location, bool shouldTrack, float* audibleRange, bool isQuickAction, bool isDeceivingNoise);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombiesManagement
	 * Size -> 0x00B8 (FullSize[0x02E8] - InheritedSize[0x0230])
	 */
	class AZombiesManagement : public AActor
	{
	public:
		unsigned char                                              UnknownData_W69E[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAuthoritativeActorPoolComponent*                    _zombiePool;                                             // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UZombiesPatrolAreaManager*                           _zombiesPatrolAreaManager;                               // 0x0240(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AZombieCharacter*>                            _spawnedZombiesArray;                                    // 0x0248(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GMKY[0x30];                                  // 0x0258(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _firstZombieSpawnTime;                                   // 0x0288(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _numberOfZombieToSpawnAtStart;                           // 0x02B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AZombieEscapeDoorPointsActor*>                _zombieEscapeDoorPoints;                                 // 0x02D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void Authority_OnIntroComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombiesPatrolAreaManager
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UZombiesPatrolAreaManager : public UActorComponent
	{
	public:
		TArray<class AMeatHook*>                                   _availablePatrolAreas;                                   // 0x00B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class AMeatHook*>                                   _usedPatrolAreas;                                        // 0x00C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		float                                                      _maxDistanceBetweenMeatHookAndPlayers;                   // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D53K[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK24.ZombieStunnableComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UZombieStunnableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BQFD[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
