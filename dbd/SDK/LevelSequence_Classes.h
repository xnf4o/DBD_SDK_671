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
	 * Class LevelSequence.AnimSequenceLevelSequenceLink
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAnimSequenceLevelSequenceLink : public UAssetUserData
	{
	public:
		struct FGuid                                               SkelTrackGuid;                                           // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     PathToLevelSequence;                                     // 0x0040(0x0020) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.DefaultLevelSequenceInstanceData
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UDefaultLevelSequenceInstanceData : public UObject
	{
	public:
		unsigned char                                              UnknownData_CVMA[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TransformOriginActor;                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          TransformOrigin;                                         // 0x0040(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceMetaData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULevelSequenceMetaData : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequence
	 * Size -> 0x0168 (FullSize[0x01D0] - InheritedSize[0x0068])
	 */
	class ULevelSequence : public UMovieSceneSequence
	{
	public:
		unsigned char                                              UnknownData_Q19Z[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieScene*                                         MovieScene;                                              // 0x0070(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLevelSequenceObjectReferenceMap                    ObjectReferences;                                        // 0x0078(0x0050) Protected, NativeAccessSpecifierProtected
		struct FLevelSequenceBindingReferences                     BindingReferences;                                       // 0x00C8(0x00A0) Protected, NativeAccessSpecifierProtected
		TMap<class FString, struct FLevelSequenceObject>           PossessedObjects;                                        // 0x0168(0x0050) Deprecated, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DirectorClass;                                           // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAssetUserData*>                              AssetUserData;                                           // 0x01C0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected

	public:
		void RemoveMetaDataByClass(class UClass* InClass);
		class UObject* FindOrAddMetaDataByClass(class UClass* InClass);
		class UObject* FindMetaDataByClass(class UClass* InClass);
		class UObject* CopyMetaData(class UObject* InMetaData);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnInInitSettings
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULevelSequenceBurnInInitSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnInOptions
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class ULevelSequenceBurnInOptions : public UObject
	{
	public:
		bool                                                       bUseBurnIn;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ID8B[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      BurnInClass;                                             // 0x0038(0x0020) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequenceBurnInInitSettings*                    Settings;                                                // 0x0058(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceActor
	 * Size -> 0x0090 (FullSize[0x02C0] - InheritedSize[0x0230])
	 */
	class ALevelSequenceActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_F56Z[0x18];                                  // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x0248(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9IH[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LevelSequence;                                           // 0x0268(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLevelSequenceCameraSettings                        CameraSettings;                                          // 0x0288(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJ6J[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequenceBurnInOptions*                         BurnInOptions;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovieSceneBindingOverrides*                         BindingOverrides;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoPlay : 1;                                           // 0x02A0(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideInstanceData : 1;                               // 0x02A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicatePlayback : 1;                                  // 0x02A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Z4J[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             DefaultInstanceData;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequenceBurnIn*                                BurnInInstance;                                          // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowBurnin;                                             // 0x02B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NSPZ[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (PADDING)

	public:
		void ShowBurnin();
		void SetSequence(class ULevelSequence* InSequence);
		void SetReplicatePlayback(bool ReplicatePlayback);
		void SetBindingByTag(const class FName& BindingTag, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
		void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
		void ResetBindings();
		void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
		void RemoveBindingByTag(const class FName& Tag, class AActor* Actor);
		void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
		void OnLevelSequenceLoaded__DelegateSignature();
		class ULevelSequence* LoadSequence();
		void HideBurnin();
		class ULevelSequencePlayer* GetSequencePlayer();
		class ULevelSequence* GetSequence();
		TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(const class FName& Tag);
		struct FMovieSceneObjectBindingID FindNamedBinding(const class FName& Tag);
		void AddBindingByTag(const class FName& BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
		void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceAnimSequenceLink
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULevelSequenceAnimSequenceLink : public UAssetUserData
	{
	public:
		TArray<struct FLevelSequenceAnimSequenceLinkItem>          AnimSequenceLinks;                                       // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnIn
	 * Size -> 0x00C8 (FullSize[0x0360] - InheritedSize[0x0298])
	 */
	class ULevelSequenceBurnIn : public UUserWidget
	{
	public:
		struct FLevelSequencePlayerSnapshot                        FrameInformation;                                        // 0x0298(0x00C0) BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class ALevelSequenceActor*                                 LevelSequenceActor;                                      // 0x0358(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSettings(class UObject* InSettings);
		class UClass* GetSettingsClass();
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceDirector
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULevelSequenceDirector : public UObject
	{
	public:
		class ULevelSequencePlayer*                                Player;                                                  // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubSequenceID;                                           // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MovieScenePlayerIndex;                                   // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnCreated();
		class UMovieSceneSequence* GetSequence();
		TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
		class UObject* GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding);
		TArray<class AActor*> GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding);
		class AActor* GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequencePlayer
	 * Size -> 0x0128 (FullSize[0x0618] - InheritedSize[0x04F0])
	 */
	class ULevelSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		class FScriptMulticastDelegate                             OnCameraCut;                                             // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0WH[0x118];                                 // 0x0500(0x0118) MISSED OFFSET (PADDING)

	public:
		class UCameraComponent* GetActiveCameraComponent();
		class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceProjectSettings
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	class ULevelSequenceProjectSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bDefaultLockEngineToDisplayRate;                         // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPDC[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultDisplayRate;                                      // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultTickResolution;                                   // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUpdateClockSource                                         DefaultClockSource;                                      // 0x0070(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHZH[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceMediaController
	 * Size -> 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
	 */
	class ALevelSequenceMediaController : public AActor
	{
	public:
		unsigned char                                              UnknownData_3P3D[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ALevelSequenceActor*                                 Sequence;                                                // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMediaComponent*                                     MediaComponent;                                          // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ServerStartTimeSeconds;                                  // 0x0248(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZMNX[0xC];                                   // 0x024C(0x000C) MISSED OFFSET (PADDING)

	public:
		void SynchronizeToServer(float DesyncThresholdSeconds);
		void Play();
		void OnRep_ServerStartTimeSeconds();
		class ALevelSequenceActor* GetSequence();
		class UMediaComponent* GetMediaComponent();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
