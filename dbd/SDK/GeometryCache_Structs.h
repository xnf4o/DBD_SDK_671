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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GeometryCache.TrackRenderData
	 * Size -> 0x0070
	 */
	struct FTrackRenderData
	{
	public:
		unsigned char                                              UnknownData_I4G3[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCache.GeometryCacheMeshData
	 * Size -> 0x00B0
	 */
	struct FGeometryCacheMeshData
	{
	public:
		unsigned char                                              UnknownData_3HFG[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCache.GeometryCacheVertexInfo
	 * Size -> 0x0008
	 */
	struct FGeometryCacheVertexInfo
	{
	public:
		unsigned char                                              UnknownData_MUUD[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
	 * Size -> 0x000C
	 */
	struct FGeometryCacheMeshBatchInfo
	{
	public:
		unsigned char                                              UnknownData_MTT4[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
