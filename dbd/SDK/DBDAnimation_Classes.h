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
	 * Class DBDAnimation.DBDBaseAnimInstance
	 * Size -> 0x0030 (FullSize[0x02F0] - InheritedSize[0x02C0])
	 */
	class UDBDBaseAnimInstance : public UAnimInstance
	{
	public:
		class UAnimEffectBlackBoard*                               _animEffectBlackBoard;                                   // 0x02C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimEffectHandler*                                  _animEffectHandlerForSFX;                                // 0x02C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimEffectHandler*                                  _animEffectHandlerForVFX;                                // 0x02D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _animEffectHandlerClassForSFX;                           // 0x02D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _animEffectHandlerClassForVFX;                           // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8RU8[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool HasBeenNotified(const class FName& AnimNotify);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.PlayerAnimInstance
	 * Size -> 0x0250 (FullSize[0x0540] - InheritedSize[0x02F0])
	 */
	class UPlayerAnimInstance : public UDBDBaseAnimInstance
	{
	public:
		unsigned char                                              UnknownData_F0OA[0x20];                                  // 0x02F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _owningPlayer;                                           // 0x0310(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FTaggedAnimCollection>                       _taggedAnimCollections;                                  // 0x0318(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, class UAnimSequence*>            _animations;                                             // 0x0328(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, class UBlendSpace*>              _blendspaces;                                            // 0x0378(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, class UAimOffsetBlendSpace*>     _aimoffsets;                                             // 0x03C8(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, class UBlendSpace1D*>            _blendspaces1d;                                          // 0x0418(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, class UAimOffsetBlendSpace1D*>   _aimoffsets1d;                                           // 0x0468(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, struct FAnimSequenceSelector>    _selectors;                                              // 0x04B8(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       _isInParadise;                                           // 0x0508(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIntroCompleted;                                       // 0x0509(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isLevelReadyToPlay;                                     // 0x050A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9L78[0x5];                                   // 0x050B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActivationDefinition                               _activationDefinition;                                   // 0x0510(0x0028) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      _interactionDuration;                                    // 0x0538(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SBL5[0x4];                                   // 0x053C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		void OnIntroCompleted();
		class ADBDPlayer* GetOwningPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.BaseSurvivorAnimInstance
	 * Size -> 0x0008 (FullSize[0x0548] - InheritedSize[0x0540])
	 */
	class UBaseSurvivorAnimInstance : public UPlayerAnimInstance
	{
	public:
		class ACamperPlayer*                                       _owningSurvivor;                                         // 0x0540(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool IsPlayingMontageByName(const class FName& MontageID);
		class ACamperPlayer* GetOwningSurvivor();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.AimOffsetSurvivorSubAnimInstance
	 * Size -> 0x0058 (FullSize[0x05A0] - InheritedSize[0x0548])
	 */
	class UAimOffsetSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_DOZ5[0x4];                                   // 0x0548(0x0004) Fix Super Size
		float                                                      _yaw;                                                    // 0x054C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawInterpolated;                                        // 0x0550(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _allowLookAt;                                            // 0x0554(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingAimItem;                                         // 0x0555(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInjured;                                              // 0x0556(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x0557(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0558(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDrasticYawChangeDetected;                             // 0x0559(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JOAK[0x2];                                   // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _yawInterpolationSpeed;                                  // 0x055C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawDeadzoneStart;                                       // 0x0560(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawClampValue;                                          // 0x0564(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawDrasticChangeUpperLimit;                             // 0x0568(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawDrasticChangeLowerLimit;                             // 0x056C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawDrasticChangeInterpolationSpeed;                     // 0x0570(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BBLD[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _yawInterpolateEaseIn;                                   // 0x0578(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _yawInterpolateEaseOut;                                  // 0x0580(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawInterpolationEaseInLength;                           // 0x0588(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawInterpolationEaseOutDistance;                        // 0x058C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isYawInDeadZone;                                        // 0x0590(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CT1K[0x3];                                   // 0x0591(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _currentTargetYaw;                                       // 0x0594(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _yawAcceleration;                                        // 0x0598(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _yawAccelerationTime;                                    // 0x059C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.ArmIKSurvivorSubAnimInstance
	 * Size -> 0x0088 (FullSize[0x05D0] - InheritedSize[0x0548])
	 */
	class UArmIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		struct FRotator                                            _rightWristUpRotation;                                   // 0x0548(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            _leftWristUpRotation;                                    // 0x0554(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FFloatRange                                         _localWristYawRange;                                     // 0x0560(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FFloatRange                                         _localWristPitchRange;                                   // 0x0570(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _armInterpolationSpeed;                                  // 0x0580(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _handInterpolationSpeed;                                 // 0x0584(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _alphaLerpTime;                                          // 0x0588(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _reachPadding;                                           // 0x058C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _rightArmIKAlpha;                                        // 0x0590(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _leftArmIKAlpha;                                         // 0x0594(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EArmIkMode                                                 _armIkMode;                                              // 0x0598(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MRGE[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UArmDetectionFanComponent*                           _rightDetectionFan;                                      // 0x05A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArmDetectionFanComponent*                           _leftDetectionFan;                                       // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              _meshComponent;                                          // 0x05B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WEUC[0x18];                                  // 0x05B8(0x0018) MISSED OFFSET (PADDING)

	public:
		void ChangeMode(EArmIkMode newMode);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.BaseKillerAnimInstance
	 * Size -> 0x0010 (FullSize[0x0550] - InheritedSize[0x0540])
	 */
	class UBaseKillerAnimInstance : public UPlayerAnimInstance
	{
	public:
		class ASlasherPlayer*                                      _owningKiller;                                           // 0x0540(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _firstPersonView;                                        // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TRQQ[0x7];                                   // 0x0549(0x0007) MISSED OFFSET (PADDING)

	public:
		class ASlasherPlayer* GetOwningKiller();
		void DBD_ForceAnimPOV(int32_t animPOV);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.BasePlayerAttackSubAnimInstance
	 * Size -> 0x00C8 (FullSize[0x0608] - InheritedSize[0x0540])
	 */
	class UBasePlayerAttackSubAnimInstance : public UPlayerAnimInstance
	{
	public:
		EAttackSubstate                                            _attackState;                                            // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OYWR[0x3];                                   // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _direction;                                              // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _strafeAngle;                                            // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isStrafe;                                               // 0x054C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UT5F[0x3];                                   // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _attackInPlayRate;                                       // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4CI1[0x4];                                   // 0x0554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceSelector                               _attackIn;                                               // 0x0558(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      _attackSwingPlayRate;                                    // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_07AK[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceSelector                               _attackSwing;                                            // 0x0578(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      _attackMissPlayRate;                                     // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IM15[0x4];                                   // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceSelector                               _attackMiss;                                             // 0x0598(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      _attackHitPlayRate;                                      // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E2K1[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceSelector                               _attackHit;                                              // 0x05B8(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      _attackBounceOfWallPlayRate;                             // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5ZH0[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceSelector                               _attackBounceOfWall;                                     // 0x05D8(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HZ6R[0x14];                                  // 0x05F0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _firstPersonView;                                        // 0x0604(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KBVW[0x3];                                   // 0x0605(0x0003) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.BaseKillerAttackSubAnimInstance
	 * Size -> 0x0008 (FullSize[0x0610] - InheritedSize[0x0608])
	 */
	class UBaseKillerAttackSubAnimInstance : public UBasePlayerAttackSubAnimInstance
	{
	public:
		class ASlasherPlayer*                                      _owningKiller;                                           // 0x0608(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class ASlasherPlayer* GetOwningKiller();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.BaseKillerWeaponAnimInstance
	 * Size -> 0x00C0 (FullSize[0x0380] - InheritedSize[0x02C0])
	 */
	class UBaseKillerWeaponAnimInstance : public UAnimInstance
	{
	public:
		EAttackSubstate                                            _attackState;                                            // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCarrying;                                             // 0x02C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActive;                                               // 0x02C2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OIYQ[0x1];                                   // 0x02C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _attackInPlayRate;                                       // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimSequenceSelector                               _attackIn;                                               // 0x02C8(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      _attackSwingPlayRate;                                    // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7Y9J[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceSelector                               _attackSwing;                                            // 0x02E8(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      _attackMissPlayRate;                                     // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X96G[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceSelector                               _attackMiss;                                             // 0x0308(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      _attackHitPlayRate;                                      // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VH3U[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceSelector                               _attackHit;                                              // 0x0328(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      _attackBounceOfWallPlayRate;                             // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RZC8[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceSelector                               _attackBounceOfWall;                                     // 0x0348(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K65V[0x10];                                  // 0x0360(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _firstPersonView;                                        // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QWHX[0xF];                                   // 0x0371(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.BaseMenuAnimInstance
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UBaseMenuAnimInstance : public UDBDBaseAnimInstance
	{
	public:
		unsigned char                                              UnknownData_AWH4[0x8];                                   // 0x02F0(0x0008) Fix size for supers

	public:
		void OnCustomizationChanged(TArray<class FName> customizationArray);
		class ADBDMenuPlayer* GetOwningMenuPlayer();
		EGameFlowStep GetCurrentMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.BasePowerSubAnimInstance
	 * Size -> 0x0010 (FullSize[0x0560] - InheritedSize[0x0550])
	 */
	class UBasePowerSubAnimInstance : public UBaseKillerAnimInstance
	{
	public:
		bool                                                       _isUsingPower;                                           // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KDT2[0xF];                                   // 0x0551(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.BreathingSurvivorSubAnimInstance
	 * Size -> 0x0018 (FullSize[0x0560] - InheritedSize[0x0548])
	 */
	class UBreathingSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_9AAA[0x8];                                   // 0x0548(0x0008) Fix Super Size
		class UAnimSequence*                                       _breathing;                                              // 0x0550(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DRX6[0x8];                                   // 0x0558(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.ChestAnimInstance
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class UChestAnimInstance : public UAnimInstance
	{
	public:
		class ASearchable*                                         _owningChest;                                            // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isOpen;                                                 // 0x02C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingPriedOpen;                                       // 0x02C9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0VYK[0xE];                                   // 0x02CA(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractionDefinition*                              _openChestInteraction;                                   // 0x02D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnSearchedChanged(bool searched);
		void OnBeingPriedOpenStopped();
		void OnBeingPriedOpenStarted(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.CrowAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UCrowAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _shouldTakeOff;                                          // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LHM9[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorldRunawayMeshComponent*                          _crow;                                                   // 0x02C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.CustomizationAnimationSelector
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UCustomizationAnimationSelector : public UObject
	{
	public:
		unsigned char                                              UnknownData_3YP6[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          _customizationAnimationMappings;                         // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VE4G[0x38];                                  // 0x0050(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomizedSkeletalMesh*                             _customizedSkeletalMesh;                                 // 0x0088(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_49WQ[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.DynamicAccessoryAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UDynamicAccessoryAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isInMenu;                                               // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInGame;                                               // 0x02C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isPoseableHusk;                                         // 0x02C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JSEA[0x1];                                   // 0x02C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class USkeletalMeshComponent>               _masterMesh;                                             // 0x02C4(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y8ZO[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.EntityAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UEntityAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isStruggling;                                           // 0x02C0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ALVV[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _strugglePercent;                                        // 0x02C4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EWJ3[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.FaceCorrectionSurvivorSubAnimInstance
	 * Size -> 0x0008 (FullSize[0x0550] - InheritedSize[0x0548])
	 */
	class UFaceCorrectionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_DE91[0x8];                                   // 0x0548(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.GeneratorAnimInstance
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class UGeneratorAnimInstance : public USleepingAnimInstance
	{
	public:
		class AGenerator*                                          _owningGenerator;                                        // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _rushFailed;                                             // 0x02D8(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActivated;                                            // 0x02D9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G1LU[0x2];                                   // 0x02DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _percentComplete;                                        // 0x02DC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSkillCheckSuccess(bool success);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.HatchAnimInstance
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class UHatchAnimInstance : public USleepingAnimInstance
	{
	public:
		bool                                                       _isOpen;                                                 // 0x02D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DYAV[0xF];                                   // 0x02D1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.HealSurvivorSubAnimInstance
	 * Size -> 0x0058 (FullSize[0x05A0] - InheritedSize[0x0548])
	 */
	class UHealSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_I6RS[0x8];                                   // 0x0548(0x0008) Fix Super Size
		unsigned char                                              UnknownData_U6RC[0x38];                                  // 0x0550(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isHealingACrawlingTarget;                               // 0x0588(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHealingOtherNoMedkit;                                 // 0x0589(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHealingOtherMedkit;                                   // 0x058A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHealingSelfNoMedkit;                                  // 0x058B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHealingSelfMedkit;                                    // 0x058C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isWakingUpOther;                                        // 0x058D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingHealed;                                          // 0x058E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingMended;                                          // 0x058F(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isMendingOther;                                         // 0x0590(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasSkillCheckFailed;                                    // 0x0591(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x0592(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasHealerSkillCheckFailed;                              // 0x0593(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6IDB[0xC];                                   // 0x0594(0x000C) MISSED OFFSET (PADDING)

	public:
		void ResetHealerSkillCheckFailed();
		void OnHealerSkillCheckResponseAesthetic(bool success, class ADBDPlayer* healer);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.InteractionSurvivorSubAnimInstance
	 * Size -> 0x0048 (FullSize[0x0590] - InheritedSize[0x0548])
	 */
	class UInteractionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_POBP[0x8];                                   // 0x0548(0x0008) Fix Super Size
		float                                                      _sacrificeStrugglePercent;                               // 0x0550(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _selfUnhookFailed;                                       // 0x0554(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EInteractionAnimation                                      _interactionAnimation;                                   // 0x0555(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MPRE[0x2];                                   // 0x0556(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _snapPosition;                                           // 0x0558(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInteractingWithEscapeDoor;                            // 0x0564(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W3XZ[0x2B];                                  // 0x0565(0x002B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.KillerAnimInstance
	 * Size -> 0x00B0 (FullSize[0x0600] - InheritedSize[0x0550])
	 */
	class UKillerAnimInstance : public UBaseKillerAnimInstance
	{
	public:
		struct FVector                                             _leftHandIKLocationFPV;                                  // 0x0550(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _rightHandIKLocationFPV;                                 // 0x055C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAnyMontagePlaying;                                    // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCarrying;                                             // 0x0569(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RLME[0x2];                                   // 0x056A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _firstPersonCarryOffset;                                 // 0x056C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _firstPersonCarryOffsetLookingDown;                      // 0x0578(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInAir;                                                // 0x0584(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSpectator;                                            // 0x0585(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0586(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ICD1[0x1];                                   // 0x0587(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _animDirection;                                          // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animSpeed;                                              // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animPitch;                                              // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animYaw;                                                // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _pelvisHeight;                                           // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _idleTime;                                               // 0x059C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _directionSwitch;                                        // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAttacking;                                            // 0x05A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isPlayingAnyMontage;                                    // 0x05A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isKilling;                                              // 0x05A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U4IS[0x1];                                   // 0x05A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _leftClearFrontSpaceVector;                              // 0x05A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _rightClearFrontSpaceVector;                             // 0x05B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _velocity;                                               // 0x05C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _rightFootEffectorLocation;                              // 0x05CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _leftFootEffectorLocation;                               // 0x05D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EInteractionAnimation                                      _interactionType;                                        // 0x05E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QHBH[0x3];                                   // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UArmIKSensorComponent*                               _armIKSensorComponent;                                   // 0x05E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAttackSubstate                                            _attackState;                                            // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N9TP[0x3];                                   // 0x05F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _forwardVelocity;                                        // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lateralVelocity;                                        // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WFQX[0x4];                                   // 0x05FC(0x0004) MISSED OFFSET (PADDING)

	public:
		class FName GetWeaponCustomizationId();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.KillerAttackSubAnimInstance
	 * Size -> 0x0010 (FullSize[0x0620] - InheritedSize[0x0610])
	 */
	class UKillerAttackSubAnimInstance : public UBaseKillerAttackSubAnimInstance
	{
	public:
		bool                                                       _isCarrying;                                             // 0x0610(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActive;                                               // 0x0611(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TEX9[0xE];                                   // 0x0612(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.KillerLocomotionSubAnimInstance
	 * Size -> 0x00B0 (FullSize[0x0600] - InheritedSize[0x0550])
	 */
	class UKillerLocomotionSubAnimInstance : public UBaseKillerAnimInstance
	{
	public:
		class UAnimSequence*                                       _landLightTPV;                                           // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _landLightFPV;                                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlendSpace1D*                                       _BSLandTPV;                                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlendSpace1D*                                       _BSLandFPV;                                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _walkToFallTPV;                                          // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _walkToFallFPV;                                          // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _carryIdleTPV;                                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _carryIdleFPV;                                           // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _fallingTPV;                                             // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _fallingFPV;                                             // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _landLight;                                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlendSpace1D*                                       _BSLand;                                                 // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _walkToFall;                                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _carryIdle;                                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _falling;                                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isVaultingToFall;                                       // 0x05C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIntroState                                                _introState;                                             // 0x05C9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GMV3[0x6];                                   // 0x05CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagStateBool                                       _isVaultingToFallState;                                  // 0x05D0(0x0030) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.KillerSpecificSurvivorAnimationPicker
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UKillerSpecificSurvivorAnimationPicker : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_AXJY[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _killerSpecificAnimInstanceClass;                        // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          _killerSpecificSurvivorAnimationDB;                      // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.LegIKSurvivorSubAnimInstance
	 * Size -> 0x0108 (FullSize[0x0650] - InheritedSize[0x0548])
	 */
	class ULegIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		struct FVector                                             _leftFootOffset;                                         // 0x0548(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _rightFootOffset;                                        // 0x0554(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _pelvisOffset;                                           // 0x0560(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x056C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x056D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4O13[0x2];                                   // 0x056E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            _rightFootDeltaRotator;                                  // 0x0570(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            _leftFootDeltaRotator;                                   // 0x057C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UAnimCollection*                                     AnimCollection;                                          // 0x0588(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _floorJoint;                                             // 0x0590(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _pelvisOffsetTreshold;                                   // 0x059C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFloatRange                                         _pelvisOffsetRange;                                      // 0x05A0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFloatRange                                         _pelvisOffsetRangeCrouched;                              // 0x05B0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _pelvisOffsetInterpolationSpeed;                         // 0x05C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFloatRange                                         _footOffsetRange;                                        // 0x05C4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFloatRange                                         _footOffsetRangeCrouched;                                // 0x05D4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _footOffsetInterpolationSpeed;                           // 0x05E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFloatRange                                         _footPitchDeltaRange;                                    // 0x05E8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBaseGroundDetectorComponent*                        _leftFootGroundDetector;                                 // 0x05F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBaseGroundDetectorComponent*                        _rightFootGroundDetector;                                // 0x0600(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      maxLocalHeightForPlanting;                               // 0x0608(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LJY8[0x3C];                                  // 0x060C(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULocomotionPredictor*                                _locomotionPredictor;                                    // 0x0648(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.LocomotionLookAtSurvivorSubAnimInstance
	 * Size -> 0x0078 (FullSize[0x05C0] - InheritedSize[0x0548])
	 */
	class ULocomotionLookAtSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_8452[0x4];                                   // 0x0548(0x0004) Fix Super Size
		float                                                      _aimOffsetPitch;                                         // 0x054C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYaw;                                           // 0x0550(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYawInterpolated;                               // 0x0554(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _allowLookAt;                                            // 0x0558(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDrasticAimOffsetYawChangeDetected;                    // 0x0559(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZGRU[0x2];                                   // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _aimOffsetYawInterpolationSpeed;                         // 0x055C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYawDeadzoneStart;                              // 0x0560(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYawClampValue;                                 // 0x0564(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYawDrasticChangeUpperLimit;                    // 0x0568(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYawDrasticChangeLowerLimit;                    // 0x056C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYawDrasticChangeInterpolationSpeed;            // 0x0570(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OBIK[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _aimOffsetYawInterpolateEaseIn;                          // 0x0578(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _aimOffsetYawInterpolateEaseOut;                         // 0x0580(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYawInterpolationEaseInLength;                  // 0x0588(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYawInterpolationEaseOutDistance;               // 0x058C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAimOffsetYawInDeadZone;                               // 0x0590(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M438[0x3];                                   // 0x0591(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _alphaAimOffsetPitchDown;                                // 0x0594(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _alphaAimOffsetPitchCenter;                              // 0x0598(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _alphaAimOffsetPitchUp;                                  // 0x059C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_99IA[0x20];                                  // 0x05A0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.LocomotionPredictor
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class ULocomotionPredictor : public UObject
	{
	public:
		TMap<class UAnimSequence*, struct FFootBoneData>           _animFootData;                                           // 0x0030(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.LocomotionSurvivorSubAnimInstance
	 * Size -> 0x00C8 (FullSize[0x0610] - InheritedSize[0x0548])
	 */
	class ULocomotionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_DK1S[0x4];                                   // 0x0548(0x0004) Fix Super Size
		float                                                      _wasMovingResetTime;                                     // 0x054C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0550(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldPlayLowerCarryAnimation;                          // 0x0551(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isRunning;                                              // 0x0552(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouching;                                            // 0x0553(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x0554(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDead;                                                 // 0x0555(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8UBT[0x2];                                   // 0x0556(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _walkAnimSpeed;                                          // 0x0558(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _walkAnimStartOffset;                                    // 0x055C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _walkAnimPlayRateMultiplier;                             // 0x0560(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _wasLastDamageSourceDeepWounds;                          // 0x0564(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EH7V[0x1];                                   // 0x0565(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isStrafing;                                             // 0x0566(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingDeadHard;                                        // 0x0567(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _direction;                                              // 0x0568(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingAimItem;                                         // 0x056C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingCarried;                                         // 0x056D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VAXY[0x2];                                   // 0x056E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _crawlingDirectionWhileMoving;                           // 0x0570(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _crawlMovingJustStopped;                                 // 0x0574(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PVIU[0x3];                                   // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _aimOffsetYawInterpolated;                               // 0x0578(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _allowLookAt;                                            // 0x057C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDrasticAimOffsetYawChangeDetected;                    // 0x057D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CGDT[0x2];                                   // 0x057E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _lookAtAlphaBlendMultiDown;                              // 0x0580(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lookAtAlphaBlendMultiCenter;                            // 0x0584(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lookAtAlphaBlendMultiUp;                                // 0x0588(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lookAtStandIdleAnimationLength;                         // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimOffsetYawClampValue;                                 // 0x0590(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _maxParadiseWalkCycleOffSet;                             // 0x0594(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_95NL[0x4];                                   // 0x0598(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _minParadiseWalkPlayRateMultiplier;                      // 0x059C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WTT4[0x8];                                   // 0x05A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _lowerCarryAnimationPresenceTags;                        // 0x05A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MNVH[0x58];                                  // 0x05B8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.LookAtKillerSubAnimInstance
	 * Size -> 0x0050 (FullSize[0x0310] - InheritedSize[0x02C0])
	 */
	class ULookAtKillerSubAnimInstance : public UAnimInstance
	{
	public:
		class ADBDPlayer*                                          _owningPawn;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASlasherPlayer*                                      _owningKiller;                                           // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _enableDynamics;                                         // 0x02D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D3MD[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _dynamicsAlpha;                                          // 0x02D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldApplyDynamics;                                    // 0x02D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H6NH[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _playerMaxSpeed;                                         // 0x02DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animYaw;                                                // 0x02E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _enableTurnInPlace;                                      // 0x02E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldTurnLeft;                                         // 0x02E5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldTurnRight;                                        // 0x02E6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z622[0x1];                                   // 0x02E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _turnInPlaceThresholdAngle;                              // 0x02E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _idleNeutralRotationYaw;                                 // 0x02EC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x02F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z4D5[0x1F];                                  // 0x02F1(0x001F) MISSED OFFSET (PADDING)

	public:
		void ResetNeutralIdleRotationYaw();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.LookAtTargetKillerSubAnimInstance
	 * Size -> 0x01C0 (FullSize[0x0710] - InheritedSize[0x0550])
	 */
	class ULookAtTargetKillerSubAnimInstance : public UBaseKillerAnimInstance
	{
	public:
		float                                                      _maxDistanceForTargetDetection;                          // 0x0550(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _headSocket;                                             // 0x0554(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _rootSocket;                                             // 0x0560(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _preferredMinLookAtTime;                                 // 0x056C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _distanceScoreFactor;                                    // 0x0570(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _angleScoreFactor;                                       // 0x0574(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _sameTargetScoreFactor;                                  // 0x0578(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawToTarget;                                            // 0x057C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _pitchToTarget;                                          // 0x0580(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasVisibleTarget;                                       // 0x0584(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_892W[0x18B];                                 // 0x0585(0x018B) MISSED OFFSET (PADDING)

	public:
		void OnChaseStarted(class ADBDPlayer* Target);
		void OnChaseEnded(class ADBDPlayer* Target, float chaseTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.LookAtThreatSurvivorSubAnimInstance
	 * Size -> 0x0168 (FullSize[0x06B0] - InheritedSize[0x0548])
	 */
	class ULookAtThreatSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_6ZS7[0x4];                                   // 0x0548(0x0004) Fix Super Size
		class FName                                                _headSocket;                                             // 0x054C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _rootSocket;                                             // 0x0558(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawToThreat;                                            // 0x0564(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _pitchToThreat;                                          // 0x0568(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isVisibleThreat;                                        // 0x056C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B3EK[0x143];                                 // 0x056D(0x0143) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.MeshRotationCorrectionSubAnimInstance
	 * Size -> 0x0028 (FullSize[0x0570] - InheritedSize[0x0548])
	 */
	class UMeshRotationCorrectionSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_HIWF[0x8];                                   // 0x0548(0x0008) Fix Super Size
		struct FRotator                                            _toSlopeRotation;                                        // 0x0550(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6JAT[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         _movementComponent;                                      // 0x0560(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NELL[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.OpenChestSurvivorSubAnimInstance
	 * Size -> 0x0028 (FullSize[0x0570] - InheritedSize[0x0548])
	 */
	class UOpenChestSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_18P8[0x4];                                   // 0x0548(0x0004) Fix Super Size
		struct FGameplayTag                                        _interactionPhase;                                       // 0x054C(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInteractingWithOpenChest;                             // 0x0558(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I5WM[0x3];                                   // 0x0559(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _snapPosition;                                           // 0x055C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isVomiting;                                             // 0x0568(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1KKH[0x7];                                   // 0x0569(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.PalletAnimInstance
	 * Size -> 0x0020 (FullSize[0x02F0] - InheritedSize[0x02D0])
	 */
	class UPalletAnimInstance : public USleepingAnimInstance
	{
	public:
		bool                                                       _isPulledDown;                                           // 0x02D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingPulledUp;                                        // 0x02D1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingDestroyed;                                       // 0x02D2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X4RZ[0x1];                                   // 0x02D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _isBeingDestroyedPlayRate;                               // 0x02D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimSequenceSelector                               _destroyPalletAnim;                                      // 0x02D8(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		void OnBeingPulledUpStopped();
		void OnBeingPulledUpStarted(class ADBDPlayer* Player);
		void OnBeingDestroyedStopped();
		void OnBeingDestroyedStarted(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.RepairGeneratorSubAnimInstance
	 * Size -> 0x0090 (FullSize[0x0350] - InheritedSize[0x02C0])
	 */
	class URepairGeneratorSubAnimInstance : public UAnimInstance
	{
	public:
		class AGenerator*                                          _owningGenerator;                                        // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingRepaired;                                        // 0x02C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DF6M[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACamperPlayer*                                       _repairingSurvivor;                                      // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _animSequence;                                           // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        _interactionTag;                                         // 0x02E0(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        _currentAnimId;                                          // 0x02EC(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, class UAnimSequence*>            _taggedAnimSequences;                                    // 0x02F8(0x0050) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U1KP[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.RepairGeneratorSurvivorSubAnimInstance
	 * Size -> 0x0078 (FullSize[0x05C0] - InheritedSize[0x0548])
	 */
	class URepairGeneratorSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_XDOT[0x8];                                   // 0x0548(0x0008) Fix Super Size
		unsigned char                                              UnknownData_P448[0x40];                                  // 0x0550(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _snapPosition;                                           // 0x0590(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _side;                                                   // 0x059C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _repairAnimIndex;                                        // 0x05A0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7TE2[0xC];                                   // 0x05A4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isRepairingGenerator;                                   // 0x05B0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _rightFootDown;                                          // 0x05B1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MZGA[0x2];                                   // 0x05B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _animSequenceVariationCount;                             // 0x05B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isVomiting;                                             // 0x05B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasSkillCheckFailed;                                    // 0x05B9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isS34P01Accumulating;                                   // 0x05BA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5PXY[0x5];                                   // 0x05BB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.SabotageSurvivorSubAnimInstance
	 * Size -> 0x0048 (FullSize[0x0590] - InheritedSize[0x0548])
	 */
	class USabotageSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_N42M[0x8];                                   // 0x0548(0x0008) Fix Super Size
		unsigned char                                              UnknownData_9IMA[0x38];                                  // 0x0550(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isSabotaging;                                           // 0x0588(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasSkillCheckFailed;                                    // 0x0589(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GF2N[0x6];                                   // 0x058A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.ScreamSurvivorSubAnimInstance
	 * Size -> 0x0008 (FullSize[0x0550] - InheritedSize[0x0548])
	 */
	class UScreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_42T8[0x8];                                   // 0x0548(0x0008) Fix Super Size

	public:
		void ResetScreamTrigger();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.SkillCheckFailureTracker
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USkillCheckFailureTracker : public UInterface
	{
	public:
		void ResetSkillCheckFailed();
		void OnSkillCheckFailed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.SurvivorAimableArmSensor
	 * Size -> 0x0038 (FullSize[0x0170] - InheritedSize[0x0138])
	 */
	class USurvivorAimableArmSensor : public UArmIKSensorComponent
	{
	public:
		unsigned char                                              UnknownData_YAZ4[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACollectable*                                        _aimableCollectable;                                     // 0x0148(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAimableComponent*                                   _aimable;                                                // 0x0150(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2NJ4[0x18];                                  // 0x0158(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.SurvivorAimableSubAnimInstance
	 * Size -> 0x0038 (FullSize[0x0580] - InheritedSize[0x0548])
	 */
	class USurvivorAimableSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_BJAN[0x8];                                   // 0x0548(0x0008) Fix Super Size
		float                                                      _isAimingAlpha;                                          // 0x0550(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _aimPoint;                                               // 0x0554(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _shoulderToCollisionDistance;                            // 0x0560(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A1BE[0x1C];                                  // 0x0564(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.SurvivorAnimInstance
	 * Size -> 0x0118 (FullSize[0x0660] - InheritedSize[0x0548])
	 */
	class USurvivorAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		class ACamperPlayer*                                       CamperPlayer;                                            // 0x0548(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHooked;                                                // 0x0550(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsSacrificeStruggling;                                   // 0x0551(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JW3U[0x6];                                   // 0x0552(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MontageMadnessTierUp;                                    // 0x0558(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAnimCompositeBase*>                          ArrayCarryAttackMontage;                                 // 0x0560(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EIntroState                                                _introState;                                             // 0x0570(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isFrightScreaming;                                      // 0x0571(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingCarried;                                          // 0x0572(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingPutOnHook;                                        // 0x0573(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       isCrouched;                                              // 0x0574(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECamperGuidedAction                                        GuidedAction;                                            // 0x0575(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsCrawling;                                              // 0x0576(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsDead;                                                  // 0x0577(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSpeed;                                                // 0x0578(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsInsideCloset;                                          // 0x057C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GJTG[0x3];                                   // 0x057D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IsPlayingMadnessTierUpWeight;                            // 0x0580(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingKilled;                                           // 0x0584(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingHealed;                                           // 0x0585(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsCarryAttackSucess;                                     // 0x0586(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsUsingAimItem;                                          // 0x0587(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingAimItem;                                        // 0x0588(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AllowLookAt;                                             // 0x0589(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LS1Z[0x2];                                   // 0x058A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DropStaggerTimeLeft;                                     // 0x058C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RightArmIKAlpha;                                         // 0x0590(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZZ2T[0xC];                                   // 0x0594(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RightHandIKTransform;                                    // 0x05A0(0x0030) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       Strafe;                                                  // 0x05D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsInteracting;                                           // 0x05D1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Injured;                                                 // 0x05D2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EInteractionAnimation                                      interactionType;                                         // 0x05D3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EInteractionAnimation                                      PreviousInteractionType;                                 // 0x05D4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsSlasherInFPV;                                          // 0x05D5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U49W[0x2];                                   // 0x05D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CarriedAlpha;                                            // 0x05D8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingHandleItem;                                     // 0x05DC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingSmallItem;                                      // 0x05DD(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingFirecracker;                                    // 0x05DE(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingFlashbang;                                      // 0x05DF(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingVaccine;                                        // 0x05E0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingAnyItem;                                        // 0x05E1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingLamentConfiguration;                            // 0x05E2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingFragileObject;                                  // 0x05E3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHoldingSprayObject;                                    // 0x05E4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsArmOverrideDisabled;                                   // 0x05E5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       InAir;                                                   // 0x05E6(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CB6N[0x1];                                   // 0x05E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _walkAnimSpeed;                                          // 0x05E8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Direction;                                               // 0x05EC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Pitch;                                                   // 0x05F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Yaw;                                                     // 0x05F4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             RightFootEffectorLocation;                               // 0x05F8(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LeftFootEffectorLocation;                                // 0x0604(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Idle;                                                    // 0x0610(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       HasAnyMontagePlaying;                                    // 0x0611(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MOJ7[0x2];                                   // 0x0612(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurrentlyPlayerMontageId;                                // 0x0614(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingCarriedByTheSpirit;                               // 0x0620(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingCarriedByTheNightmare;                            // 0x0621(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingCarriedByThePig;                                  // 0x0622(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingCarriedByTheHag;                                  // 0x0623(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingCarriedByTheLegion;                               // 0x0624(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsBeingCarriedByTheGhostFace;                            // 0x0625(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsUsingDeadHard;                                         // 0x0626(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsPlayingWakeUpOther;                                    // 0x0627(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsPlayingFreddyMori;                                     // 0x0628(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       HasLinkInput;                                            // 0x0629(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isMale;                                                 // 0x062A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZPSZ[0x35];                                  // 0x062B(0x0035) MISSED OFFSET (PADDING)

	public:
		void SetAudioRummageAkEvent(const class FName& distance);
		void OnInfectiousFrightScream();
		void AddAudioRepairRateRadius(int32_t distance);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnimation.WakerObjectAnimInstance
	 * Size -> 0x0040 (FullSize[0x0300] - InheritedSize[0x02C0])
	 */
	class UWakerObjectAnimInstance : public UAnimInstance
	{
	public:
		float                                                      _reappearTimerCooldown;                                  // 0x02C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _wakeUpCharge;                                           // 0x02C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _chargeStarted;                                          // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _interactionComplete;                                    // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _outEnd;                                                 // 0x02CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _reset;                                                  // 0x02CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _inEnd;                                                  // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _wakerObjectStarted;                                     // 0x02CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _respawnEnd;                                             // 0x02CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _cancelEnd;                                              // 0x02CF(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F53Z[0x30];                                  // 0x02D0(0x0030) MISSED OFFSET (PADDING)

	public:
		void ResetReappearTimer();
		void OnReappear();
		bool GetWakerObjectStarted();
		bool GetWakerObjectChargeComplete();
		float GetWakerObjectCharge();
		class AWakerObject* GetWakerObject();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
