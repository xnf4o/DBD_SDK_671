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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DBDVideoPlayer.VideoBinkPlayer.OnMediaOpened
	 */
	struct AVideoBinkPlayer_OnMediaOpened_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDVideoPlayer.VideoBinkPlayer.OnMediaClosed
	 */
	struct AVideoBinkPlayer_OnMediaClosed_Params
	{	};

	/**
	 * Function DBDVideoPlayer.VideoBinkPlayer.OnEndReached
	 */
	struct AVideoBinkPlayer_OnEndReached_Params
	{	};

	/**
	 * Function DBDVideoPlayer.VideoThumbnailPlayer.OnVideoAssetLoaded
	 */
	struct AVideoThumbnailPlayer_OnVideoAssetLoaded_Params
	{	};

	/**
	 * Function DBDVideoPlayer.VideoThumbnailPlayer.OnMediaOpened
	 */
	struct AVideoThumbnailPlayer_OnMediaOpened_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDVideoPlayer.VideoThumbnailPlayer.OnMediaClosed
	 */
	struct AVideoThumbnailPlayer_OnMediaClosed_Params
	{	};

	/**
	 * Function DBDVideoPlayer.VideoThumbnailPlayer.OnEndReached
	 */
	struct AVideoThumbnailPlayer_OnEndReached_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
