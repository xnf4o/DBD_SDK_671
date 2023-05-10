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
	 * Class DBDVideoPlayer.VideoBinkPlayer
	 * Size -> 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
	 */
	class AVideoBinkPlayer : public AActor
	{
	public:
		unsigned char                                              UnknownData_XLA2[0x48];                                  // 0x0230(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBinkMediaPlayer*                                    _binkMediaPlayer;                                        // 0x0278(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUserWidget*                                         _videoPlayerWidget;                                      // 0x0280(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidget*                                             _imageWidget;                                            // 0x0288(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N8EF[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnMediaOpened(const class FString& OpenedUrl);
		void OnMediaClosed();
		void OnEndReached();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDVideoPlayer.VideoNativePlayer
	 * Size -> 0x0048 (FullSize[0x0278] - InheritedSize[0x0230])
	 */
	class AVideoNativePlayer : public AActor
	{
	public:
		unsigned char                                              UnknownData_1PRA[0x48];                                  // 0x0230(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDVideoPlayer.VideoPlayer
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVideoPlayer : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDVideoPlayer.VideoThumbnailPlayer
	 * Size -> 0x00B0 (FullSize[0x02E0] - InheritedSize[0x0230])
	 */
	class AVideoThumbnailPlayer : public AActor
	{
	public:
		unsigned char                                              UnknownData_TLLF[0x38];                                  // 0x0230(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMediaSoundComponent*                                SoundComponent;                                          // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUserWidget*                                         VideoPlayerWidget;                                       // 0x0278(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     _audioComponent;                                         // 0x0280(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZIXH[0x18];                                  // 0x0288(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _source[0x30];                                           // 0x02A0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_A4XR[0x10];                                  // 0x02D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnVideoAssetLoaded();
		void OnMediaOpened(const class FString& OpenedUrl);
		void OnMediaClosed();
		void OnEndReached();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
