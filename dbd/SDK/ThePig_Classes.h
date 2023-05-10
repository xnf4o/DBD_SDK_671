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
	 * Class ThePig.Addon_ThePig_JigsawSketch
	 * Size -> 0x0050 (FullSize[0x0308] - InheritedSize[0x02B8])
	 */
	class UAddon_ThePig_JigsawSketch : public UItemAddon
	{
	public:
		TMap<class ACamperPlayer*, class AGenerator*>              _trackedGeneratorRepairs;                                // 0x02B8(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.AttachReverseBearTrap
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class UAttachReverseBearTrap : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_WCPP[0x8];                                   // 0x0618(0x0008) Fix Super Size

	public:
		class ACamperPlayer* GetCamper();
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.DetectivesHunch
	 * Size -> 0x0268 (FullSize[0x0630] - InheritedSize[0x03C8])
	 */
	class UDetectivesHunch : public UPerk
	{
	public:
		unsigned char                                              _interactableClasses[0x50];                              // 0x03C8(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      _revealRanges[0x3];                                      // 0x0418(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _revealDuration;                                         // 0x0424(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class AActor*, struct FTimerHandle>                   _actorToTimerMap;                                        // 0x0428(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7B2Z[0x50];                                  // 0x0478(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FObjectFastArray                                    _revealedActors;                                         // 0x04C8(0x0148) Net, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A50P[0x20];                                  // 0x0610(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.K11AnimInstance
	 * Size -> 0x0060 (FullSize[0x0660] - InheritedSize[0x0600])
	 */
	class UK11AnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isAmbushAttack;                                         // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x0601(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouchPressed;                                        // 0x0602(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_49FY[0x1];                                   // 0x0603(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _crouchPlayRate;                                         // 0x0604(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _uncrouchPlayRate;                                       // 0x0608(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UHMY[0x4];                                   // 0x060C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _crouchInteractionDefinitionClass;                       // 0x0610(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _uncrouchInteractionDefinitionClass;                     // 0x0618(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _crouchToStand;                                          // 0x0620(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _standToCrouch;                                          // 0x0628(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _crouchToStandFPV;                                       // 0x0630(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _standToCrouchFPV;                                       // 0x0638(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInteractionDefinition*                              _crouchInteractionDefinition;                            // 0x0640(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _uncrouchInteractionDefinition;                          // 0x0648(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RTBA[0x10];                                  // 0x0650(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttack
	 * Size -> 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
	 */
	class UPigAmbushAttack : public UPounceAttack
	{
	public:
		unsigned char                                              UnknownData_YMJP[0x10];                                  // 0x0380(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackOpenSubstate
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	class UPigAmbushAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		unsigned char                                              UnknownData_WH8Q[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackHittingSubstate
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UPigAmbushAttackHittingSubstate : public UPounceAttackHittingSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UPigAmbushAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UPigAmbushAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UPigAmbushAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.RBTSurvivorSubAnimInstance
	 * Size -> 0x0048 (FullSize[0x0590] - InheritedSize[0x0548])
	 */
	class URBTSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_7G7N[0x8];                                   // 0x0548(0x0008) Fix Super Size
		unsigned char                                              UnknownData_J52O[0x38];                                  // 0x0550(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isRemovingRBT;                                          // 0x0588(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasSkillCheckFailed;                                    // 0x0589(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3H39[0x6];                                   // 0x058A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.RemoveReverseBearTrapChargeable
	 * Size -> 0x0040 (FullSize[0x0780] - InheritedSize[0x0740])
	 */
	class URemoveReverseBearTrapChargeable : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _audibleRangeOnSearch;                                   // 0x0740(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _timedRevealStatusEffect;                                // 0x0768(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LGZ6[0x10];                                  // 0x0770(0x0010) MISSED OFFSET (PADDING)

	public:
		bool HasSuccessfullyRemoved();
		void BP_OnFinishWithoutDetach(class ACamperPlayer* searchingPlayer);
		void BP_OnFinishWithDetach(class ACamperPlayer* searchingPlayer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
