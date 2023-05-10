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
	 * Class CoreMemory.CoreMemoryBehaviourBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreMemoryBehaviourBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryChallengePlayerSpecificController
	 * Size -> 0x00A8 (FullSize[0x02D8] - InheritedSize[0x0230])
	 */
	class ACoreMemoryChallengePlayerSpecificController : public AInfo
	{
	public:
		unsigned char                                              UnknownData_S4SW[0x78];                                  // 0x0230(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _owningPlayer;                                           // 0x02A8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoreMemoryController*                               _controller;                                             // 0x02B0(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UCoreMemoryFragmentComponent*>                _fragments;                                              // 0x02B8(0x0010) ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
		int32_t                                                    _numFragmentsToCollect;                                  // 0x02C8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4T0X[0xC];                                   // 0x02CC(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnRep_Fragments();
		void OnRep_Controller();
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryController
	 * Size -> 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
	 */
	class UCoreMemoryController : public UActorComponent
	{
	public:
		TArray<class UCoreMemoryBehaviourBase*>                    _behaviours;                                             // 0x00B8(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class ACoreMemoryChallengePlayerSpecificController*> _playerSpecificControllers;                              // 0x00C8(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7318[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _archiveSpecialBehaviourId;                              // 0x00E0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _coreMemorySpecialBehaviourKey;                          // 0x00EC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnCharacterAdded(class ADBDPlayer* Player);
		void Authority_CreatePlayerSpecificController(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryDebugSpawnBehaviour
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreMemoryDebugSpawnBehaviour : public UCoreMemoryBehaviourBase
	{
	public:
		class UClass*                                              _fragmentClass;                                          // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    _numberOfFragmentsToSpawn;                               // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      _fragmentSpawnOffset;                                    // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryDefaultQuestProgressBehaviour
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UCoreMemoryDefaultQuestProgressBehaviour : public UCoreMemoryBehaviourBase
	{
	public:
		struct FGameplayTag                                        _onPlayerExitWithMemoryAcquiredScoreTag;                 // 0x0030(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _onFragmentCollectedScoreTag;                            // 0x003C(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _onMemoryAcquiredScoreTag;                               // 0x0048(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _onMemorySynchronizedScoreTag;                           // 0x0054(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H607[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryFragment
	 * Size -> 0x00B0 (FullSize[0x02E0] - InheritedSize[0x0230])
	 */
	class ACoreMemoryFragment : public AActor
	{
	public:
		class UStaticMeshComponent*                                _coreMemoryFragmentStaticMesh;                           // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoreMemoryFragmentComponent*                        _coreMemoryFragmentComponent;                            // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoreMemoryFragmentFXComponent*                      _coreMemoryFragmentFXComponent;                          // 0x0240(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USphereComponent*                                    _coreMemoryFragmentTriggerZone;                          // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USphereComponent*                                    _coreMemoryFragmentCollectionZone;                       // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _spawnLocation;                                          // 0x0258(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LDRT[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _heightOffset;                                           // 0x0268(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _triggerZoneRadius;                                      // 0x0290(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _collectionZoneRadius;                                   // 0x02B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_SpawnLocation(const struct FVector& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryFragmentComponent
	 * Size -> 0x0108 (FullSize[0x01C0] - InheritedSize[0x00B8])
	 */
	class UCoreMemoryFragmentComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_S5T3[0x60];                                  // 0x00B8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _owningPlayer;                                           // 0x0118(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ACoreMemoryChallengePlayerSpecificController*        _controller;                                             // 0x0120(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lineOfSightTimerRate;                                   // 0x0128(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _wasTriggered;                                           // 0x012C(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1A91[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _killerPreventingTags;                                   // 0x0130(0x0020) Edit, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               _camperPreventingTags;                                   // 0x0150(0x0020) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RIOQ[0x50];                                  // 0x0170(0x0050) MISSED OFFSET (PADDING)

	public:
		void Server_OnFragmentCollected();
		void OnRep_WasTriggered();
		void OnRep_OwningPlayer();
		void OnLocallyObservedChanged(bool IsLocallyObserved);
		void OnIntroComplete();
		void OnCollectZoneEntered(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void Authority_OnTriggerZoneExited(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Authority_OnTriggerZoneEntered(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void Authority_CheckLineOfSight();
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryFragmentFXComponent
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UCoreMemoryFragmentFXComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             Cosmetic_FragmentTriggered;                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cosmetic_FragmentSpawned;                                // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cosmetic_FragmentDespawn;                                // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cosmetic_FragmentCollected;                              // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTUB[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryFragmentSimpleMovementComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UCoreMemoryFragmentSimpleMovementComponent : public UActorComponent
	{
	public:
		class FName                                                _characterBoneName;                                      // 0x00B8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P6OO[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _fragmentMoveSpeed;                                      // 0x00D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _speedCurve;                                             // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CLCO[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryImposeStatusEffectBehaviour
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UCoreMemoryImposeStatusEffectBehaviour : public UCoreMemoryBehaviourBase
	{
	public:
		struct FCoreMemoryStatusEffectDetails                      _statusEffectToImposeOnFragmentCollected;                // 0x0030(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		struct FCoreMemoryStatusEffectDetails                      _statusEffectToImposeOnMemoryAcquired;                   // 0x0040(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		struct FCoreMemoryStatusEffectDetails                      _statusEffectToImposeOnStartedSynchronizingMemory;       // 0x0050(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		struct FCoreMemoryStatusEffectDetails                      _statusEffectToImposeOnMemorySynchronized;               // 0x0060(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryPortal
	 * Size -> 0x00A0 (FullSize[0x0408] - InheritedSize[0x0368])
	 */
	class ACoreMemoryPortal : public ASpecialBehaviourInteractable
	{
	public:
		class UStaticMeshComponent*                                _coreMemoryPortalStaticMesh;                             // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoreMemoryController*                               _coreMemoryController;                                   // 0x0370(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoreMemoryPortalComponent*                          _coreMemoryPortalComponent;                              // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoreMemoryPortalFXComponent*                        _coreMemoryPortalFXComponent;                            // 0x0380(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _synchronizeCoreMemoryInteractor;                        // 0x0388(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USynchronizeCoreMemoryInteraction*                   _synchronizeCoreMemoryInteraction;                       // 0x0390(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USynchronizeCoreMemoryInteraction*                   _synchronizeCoreMemoryInteractionKiller;                 // 0x0398(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _synchronizeCoreMemoryInteractionChargeable;             // 0x03A0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _synchronizeCoreMemoryInteractionChargeableKiller;       // 0x03A8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _synchronizeCoreMemoryInteractionZone;                   // 0x03B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _synchronizeCoreMemoryInteractionSecondsToCharge;        // 0x03B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _synchronizeCoreMemoryInteractionSecondsToChargeKiller;  // 0x03E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryPortalComponent
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UCoreMemoryPortalComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_7WAK[0x78];                                  // 0x00B8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ADBDPlayer*>                                  _playersWithActivePortal;                                // 0x0130(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		TArray<class ADBDPlayer*> GetPlayersWithActivePortal();
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryPortalDefaultBehaviour
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreMemoryPortalDefaultBehaviour : public UCoreMemoryBehaviourBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryPortalFXComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UCoreMemoryPortalFXComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             Cosmetic_OnPortalSpawned;                                // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cosmetic_OnPlayerStartedInteractingWithPortal;           // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cosmetic_OnPortalInteractionInterrupted;                 // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cosmetic_OnPortalDeactivated;                            // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cosmetic_OnInteractionComplete;                          // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryPortalOutlineUpdateStrategy
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UCoreMemoryPortalOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _outlineColor;                                           // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8VUH[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour : public UCoreMemoryBehaviourBase
	{
	public:
		class UClass*                                              _fragmentClass;                                          // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _triggerZoneRadiusDistance;                              // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _spawnDistanceFromPlayer;                                // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _spawnDistanceFromOtherFragments;                        // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _heightDistance;                                         // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.CoreMemoryUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreMemoryUtilities : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreMemory.SynchronizeCoreMemoryInteraction
	 * Size -> 0x0060 (FullSize[0x07A0] - InheritedSize[0x0740])
	 */
	class USynchronizeCoreMemoryInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_A9RT[0x60];                                  // 0x0740(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
