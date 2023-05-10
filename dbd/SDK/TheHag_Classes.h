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
	 * Class TheHag.HagAnimInstance
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UHagAnimInstance : public UKillerAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHag.HagDynamicAccessoryAnimInstance
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class UHagDynamicAccessoryAnimInstance : public UDynamicAccessoryAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHag.HagScoreComponent
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class UHagScoreComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _trapAttackDuration;                                     // 0x00B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8C48[0x80];                                  // 0x00E0(0x0080) MISSED OFFSET (PADDING)

	public:
		void Authority_OnActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class TheHag.PhantomTrap
	 * Size -> 0x0098 (FullSize[0x03C0] - InheritedSize[0x0328])
	 */
	class APhantomTrap : public AInteractable
	{
	public:
		unsigned char                                              UnknownData_4SOJ[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrorRadiusEmitterComponent*                       _terrorRadiusEmitter;                                    // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _camperOutlineDuration;                                  // 0x0348(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lineOfSightTraceMinInterval;                            // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _speedTolerance;                                         // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1UWM[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     _trapLocation;                                           // 0x0358(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USphereComponent*                                    _triggerZone;                                            // 0x0360(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _wipeAwayInteractionChargeable;                          // 0x0368(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWipeAwayPhantomTrapInteraction*                     _wipeAwayInteraction;                                    // 0x0370(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _wipeAwayInteractor;                                     // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _wipeAwayInteractionZone;                                // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _wipeAwayTimeDuration;                                   // 0x0388(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XVHI[0xD];                                   // 0x03B0(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _hasTrapBeenSetOff;                                      // 0x03BD(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasTrapBeenDestroyed;                                   // 0x03BE(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2ANN[0x1];                                   // 0x03BF(0x0001) MISSED OFFSET (PADDING)

	public:
		void OnTrapReset();
		void OnTrapActivated();
		void Multicast_DestroyTrap(class ACamperPlayer* playerDestroyingTrap);
		bool IsTrapSet();
		void InitializeTerrorRadiusEmitter(class ASlasherPlayer* OwningSlasher);
		class USkeletalMeshComponent* GetMesh();
		bool CanActivateTrap(class ACamperPlayer* camper, bool IsInUse);
		void BP_OnTrapDestroyed(class ACamperPlayer* playerDestroyingTrap);
		static UClass* StaticClass();
	};

	/**
	 * Class TheHag.TeleportToPhantomTrap
	 * Size -> 0x0068 (FullSize[0x0680] - InheritedSize[0x0618])
	 */
	class UTeleportToPhantomTrap : public UInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _teleportMaxDistance;                                    // 0x0618(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _slowdownTimeAfterTeleport;                              // 0x0640(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _hagSlowdownAfterTeleportEffectID;                       // 0x0668(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N2LM[0xC];                                   // 0x0674(0x000C) MISSED OFFSET (PADDING)

	public:
		float GetTeleportMaxDistance(class ASlasherPlayer* Slasher);
		class APhantomTrap* GetPhantomTrap();
		void Cosmetic_OnTeleport(class ASlasherPlayer* Slasher, class APhantomTrap* trap);
		void Cosmetic_OnInteractionFinished(class ADBDPlayer* Slasher, bool hasInteractionStarted);
		void BP_OnTeleport(class ASlasherPlayer* Slasher, class APhantomTrap* trap);
		static UClass* StaticClass();
	};

	/**
	 * Class TheHag.WipeAwayPhantomTrapInteraction
	 * Size -> 0x0008 (FullSize[0x0780] - InheritedSize[0x0778])
	 */
	class UWipeAwayPhantomTrapInteraction : public UBasicChargeableInteraction
	{
	public:
		unsigned char                                              UnknownData_SWXK[0x8];                                   // 0x0778(0x0008) Fix Super Size

	public:
		void CancelInteraction(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
