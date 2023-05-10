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
	 * Class Barrel2023.Barrel
	 * Size -> 0x00F0 (FullSize[0x0440] - InheritedSize[0x0350])
	 */
	class ABarrel : public ARespawnableInteractable
	{
	public:
		class UBarrelInteraction*                                  _barrelInteraction;                                      // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBarrelInteraction*                                  _barrelInteractionKiller;                                // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _barrelInteractionChargeable;                            // 0x0360(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _barrelInteractionChargeableKiller;                      // 0x0368(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _barrelInteractionZone;                                  // 0x0370(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _barrelInteractor;                                       // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _barrelStaticMesh;                                       // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _extractorStaticMesh;                                    // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _barrelInteractionSecondsToCharge;                       // 0x0390(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _barrelInteractionSecondsToChargeKiller;                 // 0x03B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EBarrelType                                                _barrelType;                                             // 0x03E0(0x0001) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XT7Z[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x03E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _scoreTag;                                               // 0x03F0(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_06BC[0x34];                                  // 0x03FC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _barrelLocation;                                         // 0x0430(0x000C) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EUSH[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetDissolveStarted(bool isDissolveStarted);
		void OnRep_OnLocationChanged();
		void OnBarrelDespawnCosmeticsComplete();
		void Cosmetic_OnStoppedInteracting();
		void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);
		void Cosmetic_OnInteractionInterruptedByPlayer();
		void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
		void Cosmetic_OnFirstBarrelSpawn();
		void Cosmetic_OnBarrelRespawn();
		void Cosmetic_OnBarrelDespawn(bool wasInteractionCompleted);
		static UClass* StaticClass();
	};

	/**
	 * Class Barrel2023.BarrelEventComponent
	 * Size -> 0x01A8 (FullSize[0x0260] - InheritedSize[0x00B8])
	 */
	class UBarrelEventComponent : public UActorComponent
	{
	public:
		TArray<class UClass*>                                      _spawnableBarrelClasses;                                 // 0x00B8(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _barrelSwitchTimerMin;                                   // 0x00C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _barrelSwitchTimerMax;                                   // 0x00F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _redBarrelSpawnDelay;                                    // 0x0118(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _numberOfGeneratorsToComplete;                           // 0x0140(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _numberOfHooksToComplete;                                // 0x0168(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I415[0x38];                                  // 0x0190(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ABarrel*, struct FVector>                       _barrelLocations;                                        // 0x01C8(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A956[0x40];                                  // 0x0218(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _collisionCapsuleHalfHeight;                             // 0x0258(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _collisionCapsuleRadius;                                 // 0x025C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void DBD_BarrelSpawnRedBarrel();
		void DBD_BarrelSpawnGreenBarrel();
		void DBD_BarrelSpawnBlueBarrel();
		void DBD_BarrelPauseAllTimers(bool shouldPause);
		void DBD_BarrelDebugBarrelSpawnPositions(float Duration);
		void Authority_OnIntroComplete();
		void Authority_OnBarrelTimerDone(class ARespawnableInteractable* RespawnableInteractable);
		void Authority_OnBarrelInteractionChanged(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting);
		static UClass* StaticClass();
	};

	/**
	 * Class Barrel2023.BarrelInteraction
	 * Size -> 0x0050 (FullSize[0x0790] - InheritedSize[0x0740])
	 */
	class UBarrelInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_0R8A[0x30];                                  // 0x0740(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isInteractionChargeComplete;                            // 0x0770(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8JBK[0x3];                                   // 0x0771(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _facingTolerance;                                        // 0x0774(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _facingHeightUpOffset;                                   // 0x0778(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _facingHeightDownOffset;                                 // 0x077C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G4KK[0x10];                                  // 0x0780(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Barrel2023.BarrelPlayerComponent
	 * Size -> 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
	 */
	class UBarrelPlayerComponent : public UActorComponent
	{
	public:
		TArray<EBarrelType>                                        _interactedBarrels;                                      // 0x00B8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LDWR[0x58];                                  // 0x00C8(0x0058) MISSED OFFSET (PADDING)

	public:
		void Server_SetCharmInfo(bool isRedUnlocked, bool isGreenUnlocked, bool isBlueUnlocked);
		TArray<EBarrelType> GetInteractedBarrels();
		void DBD_BarrelResetInteractedBarrels();
		void Cosmetic_TriggerPlayerVignette(class ADBDPlayer* Player, EBarrelType BarrelType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
