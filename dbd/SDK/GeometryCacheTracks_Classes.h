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
	 * Class GeometryCacheTracks.MovieSceneGeometryCacheSection
	 * Size -> 0x0048 (FullSize[0x0138] - InheritedSize[0x00F0])
	 */
	class UMovieSceneGeometryCacheSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneGeometryCacheParams                      Params;                                                  // 0x00F0(0x0048) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_7VH1[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
