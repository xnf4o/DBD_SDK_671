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
	 * Class Lunar2023.Lunar2023EventComponent
	 * Size -> 0x0070 (FullSize[0x0230] - InheritedSize[0x01C0])
	 */
	class ULunar2023EventComponent : public ULunar2022EventComponent
	{
	public:
		struct FDBDTunableRowHandle                                _paperLanternSwitchTimerMin;                             // 0x01C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _paperLanternSwitchTimerMax;                             // 0x01E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTimedInteractionRespawnableTrigger*                 _timedInteractionRespawnableTrigger;                     // 0x0210(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8FPK[0x18];                                  // 0x0218(0x0018) MISSED OFFSET (PADDING)

	public:
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class Lunar2023.PaperLantern
	 * Size -> 0x0128 (FullSize[0x0478] - InheritedSize[0x0350])
	 */
	class APaperLantern : public ARespawnableInteractable
	{
	public:
		class UPaperLanternInteraction*                            _paperLanternInteractionSurvivor;                        // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPaperLanternInteraction*                            _paperLanternInteractionKiller;                          // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _paperLanternInteractionChargeableSurvivor;              // 0x0360(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _paperLanternInteractionChargeableKiller;                // 0x0368(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _paperLanternInteractor;                                 // 0x0370(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _paperLanternInteractionZone;                            // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _paperLanternStaticMesh;                                 // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _paperLanternInteractionSecondsToChargeSurvivor;         // 0x0390(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _paperLanternInteractionSecondsToChargeKiller;           // 0x03B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _paperLanternSpeedBoost;                                 // 0x03E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _paperLanternVaultSpeedBoost;                            // 0x0408(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _paperLanternBuffDuration;                               // 0x0430(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _auraColorWhileInteracting;                              // 0x0458(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _paperLanternSpeedEffect;                                // 0x0468(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _paperLanternVaultSpeedEffect;                           // 0x0470(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);
		void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
		void Cosmetic_OnInteractionCancelled(class ADBDPlayer* interactingPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class Lunar2023.PaperLanternInteraction
	 * Size -> 0x0020 (FullSize[0x0760] - InheritedSize[0x0740])
	 */
	class UPaperLanternInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_YSLR[0x20];                                  // 0x0740(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
