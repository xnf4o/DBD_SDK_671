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
	 * Class BinkMediaPlayer.BinkFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FTimespan STATIC_BinkLoadingMovie_GetTime();
		struct FTimespan STATIC_BinkLoadingMovie_GetDuration();
		void STATIC_Bink_DrawOverlays();
		static UClass* StaticClass();
	};

	/**
	 * Class BinkMediaPlayer.BinkMediaPlayer
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UBinkMediaPlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_0PIL[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMediaClosed;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMediaOpened;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMediaReachedEnd;                                       // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlaybackSuspended;                                     // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       Looping : 1;                                             // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartImmediately : 1;                                    // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DelayedOpen : 1;                                         // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TJA[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BinkDestinationUpperLeft;                                // 0x007C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BinkDestinationLowerRight;                               // 0x0084(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TRK[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              URL;                                                     // 0x0090(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBinkMediaPlayerBinkBufferModes                            BinkBufferMode;                                          // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBinkMediaPlayerBinkSoundTrack                             BinkSoundTrack;                                          // 0x00A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7W6[0x2];                                   // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BinkSoundTrackStart;                                     // 0x00A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBinkMediaPlayerBinkDrawStyle                              BinkDrawStyle;                                           // 0x00A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AN6G[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BinkLayerDepth;                                          // 0x00AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AMWH[0x50];                                  // 0x00B0(0x0050) MISSED OFFSET (PADDING)

	public:
		bool SupportsSeeking();
		bool SupportsScrubbing();
		bool SupportsRate(float Rate, bool Unthinned);
		void Stop();
		void SetVolume(float Rate);
		bool SetRate(float Rate);
		bool SetLooping(bool InLooping);
		bool Seek(const struct FTimespan& InTime);
		bool Rewind();
		bool Play();
		bool Pause();
		bool OpenUrl(const class FString& NewUrl);
		bool IsStopped();
		bool IsSeeking();
		bool IsPlaying();
		bool IsPaused();
		bool IsLooping();
		bool IsInitialized();
		class FString GetUrl();
		struct FTimespan GetTime();
		float GetRate();
		struct FTimespan GetDuration();
		void Draw(class UTexture* Texture, bool tonemap, int32_t out_nits, float alpha, bool srgb_decode, bool hdr);
		void CloseUrl();
		bool CanPlay();
		bool CanPause();
		static UClass* StaticClass();
	};

	/**
	 * Class BinkMediaPlayer.BinkMediaTexture
	 * Size -> 0x0034 (FullSize[0x01B0] - InheritedSize[0x017C])
	 */
	class UBinkMediaTexture : public UTexture
	{
	public:
		unsigned char                                              UnknownData_O0HO[0x4];                                   // 0x017C(0x0004) Fix Super Size
		class UBinkMediaPlayer*                                    MediaPlayer;                                             // 0x0180(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPixelFormat                                               PixelFormat;                                             // 0x0188(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       tonemap;                                                 // 0x0189(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSZB[0x2];                                   // 0x018A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutputNits;                                              // 0x018C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      alpha;                                                   // 0x0190(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DecodeSRGB;                                              // 0x0194(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SL1Q[0x1B];                                  // 0x0195(0x001B) MISSED OFFSET (PADDING)

	public:
		void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class BinkMediaPlayer.BinkMoviePlayerSettings
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UBinkMoviePlayerSettings : public UObject
	{
	public:
		EBinkMoviePlayerBinkBufferModes                            BinkBufferMode;                                          // 0x0030(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBinkMoviePlayerBinkSoundTrack                             BinkSoundTrack;                                          // 0x0031(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR9S[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BinkSoundTrackStart;                                     // 0x0034(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BinkDestinationUpperLeft;                                // 0x0038(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BinkDestinationLowerRight;                               // 0x0040(0x0008) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPixelFormat                                               BinkPixelFormat;                                         // 0x0048(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8DE[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
