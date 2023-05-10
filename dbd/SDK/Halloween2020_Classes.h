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
	 * Class Halloween2020.BlightedSerumAddon
	 * Size -> 0x0058 (FullSize[0x0310] - InheritedSize[0x02B8])
	 */
	class UBlightedSerumAddon : public UItemAddon
	{
	public:
		class UClass*                                              _blightedSerumCollectable;                               // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlightedSerumDashInteraction*                       _dashInteraction;                                        // 0x02C0(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _theBlightExtraTokens;                                   // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _numberOfDashesPerEvent;                                 // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z74R[0x40];                                  // 0x02D0(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnRep_DashInteraction();
		void OnBlightedDashEnabledVfxSfx();
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2020.BlightedSerumCollisionInteraction
	 * Size -> 0x0018 (FullSize[0x0630] - InheritedSize[0x0618])
	 */
	class UBlightedSerumCollisionInteraction : public UInteractionDefinition
	{
	public:
		class UBlightedSerumCooldownInteraction*                   _cooldownInteraction;                                    // 0x0618(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _bounceTime;                                             // 0x0620(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JXKD[0xC];                                   // 0x0624(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2020.BlightedSerumCooldownInteraction
	 * Size -> 0x0018 (FullSize[0x0630] - InheritedSize[0x0618])
	 */
	class UBlightedSerumCooldownInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_YB8S[0x4];                                   // 0x0618(0x0004) Fix Super Size
		float                                                      _cameraPitchRecenterTime;                                // 0x061C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JHC1[0x10];                                  // 0x0620(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2020.BlightedSerumDashInteraction
	 * Size -> 0x0098 (FullSize[0x06B0] - InheritedSize[0x0618])
	 */
	class UBlightedSerumDashInteraction : public UInteractionDefinition
	{
	public:
		class UBlightedSerumCooldownInteraction*                   _cooldownInteraction;                                    // 0x0618(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlightedSerumCollisionInteraction*                  _collisionInteraction;                                   // 0x0620(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _dashSpeedCurve;                                         // 0x0628(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _lookAngleToTurnRateCurveController;                     // 0x0630(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _lookAngleToTurnRateCurveMouse;                          // 0x0638(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _dashDuration;                                           // 0x0640(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _vectorInterpToSpeed;                                    // 0x0644(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wallDashAccelerationMultiplier;                         // 0x0648(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cameraPitchRecenterTime;                                // 0x064C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lookAngleTurnRateModifier;                              // 0x0650(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wallDashCollisionRadius;                                // 0x0654(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wallDashCollisionHeight;                                // 0x0658(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wallDashCollisionRange;                                 // 0x065C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RZTO[0x50];                                  // 0x0660(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
		void SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2020.ToxinPlantInteractable
	 * Size -> 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
	 */
	class AToxinPlantInteractable : public ASpecialBehaviourInteractable
	{
	public:
		unsigned char                                              UnknownData_2FXA[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetToxinPlantComplete(bool IsComplete);
		void OnToxinPlantComplete();
		void OnSalvageInteractionStart();
		void OnSalvageInteractionFinished();
		bool IsToxinPlantComplete();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
