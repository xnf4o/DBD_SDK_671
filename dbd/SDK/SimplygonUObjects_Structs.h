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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SimplygonUObjects.EGeometryDataFieldType
	 */
	enum class EGeometryDataFieldType : uint8_t
	{
		Coords      = 0,
		TexCoords   = 1,
		Normals     = 2,
		Tangents    = 3,
		Bitangents  = 4,
		Colors      = 5,
		TriangleIds = 6,
		MaterialIds = 7,
		MAX         = 8
	};

	/**
	 * Enum SimplygonUObjects.EOutputPixelFormat
	 */
	enum class EOutputPixelFormat : uint8_t
	{
		R8G8B8A8      = 0,
		R8G8B8        = 1,
		R8            = 2,
		R16G16B16A16  = 3,
		R16G16B16     = 4,
		R16           = 5,
		R32G32B32A32F = 6,
		MAX           = 7
	};

	/**
	 * Enum SimplygonUObjects.EOutputOpacityType
	 */
	enum class EOutputOpacityType : uint8_t
	{
		Opacity      = 0,
		Transparency = 1,
		MAX          = 2
	};

	/**
	 * Enum SimplygonUObjects.EOutputDDSCompressionType
	 */
	enum class EOutputDDSCompressionType : uint8_t
	{
		NoCompression = 0,
		BC1           = 1,
		BC2           = 2,
		BC3           = 3,
		BC4           = 4,
		BC5           = 5,
		MAX           = 6
	};

	/**
	 * Enum SimplygonUObjects.EOutputImageFileFormat
	 */
	enum class EOutputImageFileFormat : uint8_t
	{
		BMP  = 0,
		DDS  = 1,
		JPEG = 2,
		PNG  = 3,
		TGA  = 4,
		TIFF = 5,
		EXR  = 6,
		MAX  = 7
	};

	/**
	 * Enum SimplygonUObjects.EFillMode
	 */
	enum class EFillMode : uint8_t
	{
		Interpolate     = 0,
		NearestNeighbor = 1,
		NoFill          = 2,
		MAX             = 3
	};

	/**
	 * Enum SimplygonUObjects.EDitherType
	 */
	enum class EDitherType : uint8_t
	{
		NoDither          = 0,
		FloydSteinberg    = 1,
		JarvisJudiceNinke = 2,
		Sierra            = 3,
		MAX               = 4
	};

	/**
	 * Enum SimplygonUObjects.EOpacityChannelComponent
	 */
	enum class EOpacityChannelComponent : uint8_t
	{
		Red   = 0,
		Green = 1,
		Blue  = 2,
		Alpha = 3,
		MAX   = 4
	};

	/**
	 * Enum SimplygonUObjects.EBillboardMode
	 */
	enum class EBillboardMode : uint8_t
	{
		OuterShell = 0,
		Foliage    = 1,
		MAX        = 2
	};

	/**
	 * Enum SimplygonUObjects.ESurfaceTransferMode
	 */
	enum class ESurfaceTransferMode : uint8_t
	{
		Fast     = 0,
		Accurate = 1,
		MAX      = 2
	};

	/**
	 * Enum SimplygonUObjects.ERemeshingMode
	 */
	enum class ERemeshingMode : uint8_t
	{
		Outside = 0,
		Inside  = 1,
		Manual  = 2,
		MAX     = 3
	};

	/**
	 * Enum SimplygonUObjects.EHoleFilling
	 */
	enum class EHoleFilling : uint8_t
	{
		Disabled = 0,
		Low      = 1,
		Medium   = 2,
		High     = 3,
		MAX      = 4
	};

	/**
	 * Enum SimplygonUObjects.ESurfaceAreaScale
	 */
	enum class ESurfaceAreaScale : uint8_t
	{
		LargestInstance  = 0,
		SmallestInstance = 1,
		Average          = 2,
		MAX              = 3
	};

	/**
	 * Enum SimplygonUObjects.EChartAggregatorMode
	 */
	enum class EChartAggregatorMode : uint8_t
	{
		TextureSizeProportions = 0,
		SurfaceArea            = 1,
		OriginalPixelDensity   = 2,
		UVSizeProportions      = 3,
		MAX                    = 4
	};

	/**
	 * Enum SimplygonUObjects.ETexCoordGeneratorType
	 */
	enum class ETexCoordGeneratorType : uint8_t
	{
		Parameterizer   = 0,
		ChartAggregator = 1,
		MAX             = 2
	};

	/**
	 * Enum SimplygonUObjects.EWeightsFromColorMode
	 */
	enum class EWeightsFromColorMode : uint8_t
	{
		Standard = 0,
		High     = 1,
		Low      = 2,
		MAX      = 3
	};

	/**
	 * Enum SimplygonUObjects.EWeightsFromColorComponent
	 */
	enum class EWeightsFromColorComponent : uint8_t
	{
		Red   = 0,
		Green = 1,
		Blue  = 2,
		Alpha = 3,
		MAX   = 4
	};

	/**
	 * Enum SimplygonUObjects.EBoneReductionTargetStopCondition
	 */
	enum class EBoneReductionTargetStopCondition : uint8_t
	{
		Any = 0,
		All = 1,
		MAX = 2
	};

	/**
	 * Enum SimplygonUObjects.EComputeVisibilityMode
	 */
	enum class EComputeVisibilityMode : uint8_t
	{
		DirectX  = 0,
		Software = 1,
		MAX      = 2
	};

	/**
	 * Enum SimplygonUObjects.EDataCreationPreferences
	 */
	enum class EDataCreationPreferences : uint8_t
	{
		OnlyUseOriginalData   = 0,
		PreferOriginalData    = 1,
		PreferOptimizedResult = 2,
		MAX                   = 3
	};

	/**
	 * Enum SimplygonUObjects.ESymmetryAxis
	 */
	enum class ESymmetryAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum SimplygonUObjects.EReductionHeuristics
	 */
	enum class EReductionHeuristics : uint8_t
	{
		Fast       = 0,
		Consistent = 1,
		MAX        = 2
	};

	/**
	 * Enum SimplygonUObjects.EReductionTargetStopCondition
	 */
	enum class EReductionTargetStopCondition : uint8_t
	{
		Any = 0,
		All = 1,
		MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SimplygonUObjects.ChartAggregatorSettings
	 * Size -> 0x0038
	 */
	struct FChartAggregatorSettings
	{
	public:
		EChartAggregatorMode                                       ChartAggregatorMode;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESurfaceAreaScale                                          SurfaceAreaScale;                                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98C2[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OriginalTexCoordLevel;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OriginalTexCoordName;                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SeparateOverlappingCharts : 1;                           // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56SM[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OriginalChartProportionsChannel;                         // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LockUVRotation : 1;                                      // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_005B[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.SimplygonPipelineSettings
	 * Size -> 0x0008
	 */
	struct FSimplygonPipelineSettings
	{
	public:
		unsigned char                                              UnknownData_G8RH[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.AggregationSettings
	 * Size -> 0x0028
	 */
	struct FAggregationSettings
	{
	public:
		bool                                                       MergeGeometries : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDWP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ProcessSelectionSetID;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProcessSelectionSetName;                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       KeepUnprocessedSceneMeshes : 1;                          // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableGeometryCulling : 1;                               // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPQQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GeometryCullingPrecision;                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SubdivideGeometryBasedOnUVTiles : 1;                     // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRJD[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubdivisionTileSize;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.VisibilitySettings
	 * Size -> 0x0040
	 */
	struct FVisibilitySettings
	{
	public:
		bool                                                       UseVisibilityWeightsInReducer : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseVisibilityWeightsInTexcoordGenerator : 1;             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADGT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VisibilityWeightsPower;                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CullOccludedGeometry : 1;                                // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceVisibilityCalculation : 1;                          // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseBackfaceCulling : 1;                                  // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7EU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CameraSelectionSetID;                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CameraSelectionSetName;                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OccluderSelectionSetID;                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1L2S[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OccluderSelectionSetName;                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FillNonVisibleAreaThreshold;                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveTrianglesNotOccludingOtherTriangles : 1;           // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ConservativeMode : 1;                                    // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComputeVisibilityMode                                     ComputeVisibilityMode;                                   // 0x003D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JX4B[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.GeometryCullingSettings
	 * Size -> 0x0030
	 */
	struct FGeometryCullingSettings
	{
	public:
		bool                                                       UseClippingPlanes : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HDP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ClippingPlaneSelectionSetID;                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClippingPlaneSelectionSetName;                           // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseClippingGeometry : 1;                                 // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4200[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ClippingGeometrySelectionSetID;                          // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClippingGeometrySelectionSetName;                        // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.VertexWeightSettings
	 * Size -> 0x0028
	 */
	struct FVertexWeightSettings
	{
	public:
		bool                                                       UseVertexWeightsInReducer : 1;                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseVertexWeightsInTexcoordGenerator : 1;                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R185[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WeightsFromColorName;                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeightsFromColorLevel;                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeightsFromColorComponent                                 WeightsFromColorComponent;                               // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79K4[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeightsFromColorMultiplier;                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeightsFromColorMode                                      WeightsFromColorMode;                                    // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KDJ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.InputMaterialSettings
	 * Size -> 0x0004
	 */
	struct FInputMaterialSettings
	{
	public:
		int32_t                                                    MaterialMapping;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.OutputMaterialSettings
	 * Size -> 0x0010
	 */
	struct FOutputMaterialSettings
	{
	public:
		int32_t                                                    TextureWidth;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TextureHeight;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultisamplingLevel;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GutterSpace;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.ParameterizerSettings
	 * Size -> 0x0008
	 */
	struct FParameterizerSettings
	{
	public:
		float                                                      MaxStretch;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LargeChartsImportance;                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.MappingImageSettings
	 * Size -> 0x00A0
	 */
	struct FMappingImageSettings
	{
	public:
		bool                                                       GenerateMappingImage : 1;                                // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateTexCoords : 1;                                   // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateTangents : 1;                                    // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1R7M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputMaterialCount;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseFullRetexturing : 1;                                  // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ApplyNewMaterialIds : 1;                                 // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LIT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OutputMaterialCount;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReplaceMappingImages : 1;                                // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVI5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaximumLayers;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowTransparencyMapping : 1;                            // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseAutomaticTextureSize : 1;                             // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0M67[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutomaticTextureSizeMultiplier;                          // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForcePower2Texture : 1;                                  // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnlyParameterizeInvalidUVs : 1;                          // 0x0020(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWKI[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TexCoordLevel;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TexCoordName;                                            // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETexCoordGeneratorType                                     TexCoordGeneratorType;                                   // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1HM[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInputMaterialSettings>                      InputMaterialSettings;                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOutputMaterialSettings>                     OutputMaterialSettings;                                  // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FChartAggregatorSettings                            ChartAggregatorSettings;                                 // 0x0060(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FParameterizerSettings                              ParameterizerSettings;                                   // 0x0098(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.GenerateLightmapTexCoordSettings
	 * Size -> 0x0028
	 */
	struct FGenerateLightmapTexCoordSettings
	{
	public:
		bool                                                       GenerateLightmapTexCoord : 1;                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IV6F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LightmapTexCoordLevel;                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LightmapTexCoordName;                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChartAggregatorMode                                       ChartAggregatorMode;                                     // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5C2[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextureWidth;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TextureHeight;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GutterSpace;                                             // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.AggregationPipelineSettings
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FAggregationPipelineSettings : public FSimplygonPipelineSettings
	{
	public:
		struct FAggregationSettings                                AggregationSettings;                                     // 0x0008(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVisibilitySettings                                 VisibilitySettings;                                      // 0x0030(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGeometryCullingSettings                            GeometryCullingSettings;                                 // 0x0070(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVertexWeightSettings                               VertexWeightSettings;                                    // 0x00A0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMappingImageSettings                               MappingImageSettings;                                    // 0x00C8(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGenerateLightmapTexCoordSettings                   GenerateLightmapTexCoordSettings;                        // 0x0168(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class USimplygonMaterialCaster*>                    MaterialPropertyCasters;                                 // 0x0190(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.RemeshingSettings
	 * Size -> 0x0038
	 */
	struct FRemeshingSettings
	{
	public:
		float                                                      RemeshingModeManualPositionZ;                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemeshingModeManualPositionY;                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemeshingModeManualPositionX;                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnScreenSize;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoleFilling                                               HoleFilling;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERemeshingMode                                             RemeshingMode;                                           // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESurfaceTransferMode                                       SurfaceTransferMode;                                     // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3S44[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HardEdgeAngle;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceSoftEdgesWithinTextureCharts : 1;                   // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TransferNormals : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TransferColors : 1;                                      // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXTW[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ProcessSelectionSetID;                                   // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProcessSelectionSetName;                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       KeepUnprocessedSceneMeshes : 1;                          // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHQA[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.BoneSettings
	 * Size -> 0x0048
	 */
	struct FBoneSettings
	{
	public:
		bool                                                       UseBoneReducer : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoneReductionTargetBoneRatioEnabled : 1;                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveUnusedBones : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LimitBonesPerVertex : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoneReductionTargetBoneCountEnabled : 1;                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoneReductionTargetMaxDeviationEnabled : 1;              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4L3U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxBonePerVertex;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoneReductionTargetOnScreenSizeEnabled : 1;              // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneReductionTargetStopCondition                          BoneReductionTargetStopCondition;                        // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORNQ[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoneReductionTargetBoneRatio;                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoneReductionTargetBoneCount;                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneReductionTargetMaxDeviation;                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoneReductionTargetOnScreenSize;                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LockBoneSelectionSetID;                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LockBoneSelectionSetName;                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemoveBoneSelectionSetID;                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JHH[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RemoveBoneSelectionSetName;                              // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.RemeshingPipelineSettings
	 * Size -> 0x01A0 (FullSize[0x01A8] - InheritedSize[0x0008])
	 */
	struct FRemeshingPipelineSettings : public FSimplygonPipelineSettings
	{
	public:
		struct FRemeshingSettings                                  RemeshingSettings;                                       // 0x0008(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneSettings                                       BoneSettings;                                            // 0x0040(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGeometryCullingSettings                            GeometryCullingSettings;                                 // 0x0088(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVisibilitySettings                                 VisibilitySettings;                                      // 0x00B8(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMappingImageSettings                               MappingImageSettings;                                    // 0x00F8(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class USimplygonMaterialCaster*>                    MaterialPropertyCasters;                                 // 0x0198(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.FoliageSettings
	 * Size -> 0x0018
	 */
	struct FFoliageSettings
	{
	public:
		bool                                                       SeparateTrunkAndFoliage : 1;                             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZI5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SeparateFoliageTriangleRatio;                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SeparateFoliageTriangleThreshold;                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparateFoliageAreaThreshold;                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparateFoliageSizeThreshold;                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrunkReductionRatio;                                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.BillboardCloudSettings
	 * Size -> 0x0034
	 */
	struct FBillboardCloudSettings
	{
	public:
		EBillboardMode                                             BillboardMode;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FavorVerticalPlanes : 1;                                 // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TwoSided : 1;                                            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseVisibilityWeights : 1;                                // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKE8[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BillboardDensity;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlaneCount;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GeometricComplexity;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UpVector;                                                // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFoliageSettings                                    FoliageSettings;                                         // 0x001C(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.BillboardCloudPipelineSettings
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FBillboardCloudPipelineSettings : public FSimplygonPipelineSettings
	{
	public:
		struct FBillboardCloudSettings                             BillboardCloudSettings;                                  // 0x0008(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQC4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMappingImageSettings                               MappingImageSettings;                                    // 0x0040(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class USimplygonMaterialCaster*>                    MaterialPropertyCasters;                                 // 0x00E0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.FlipbookSettings
	 * Size -> 0x0020
	 */
	struct FFlipbookSettings
	{
	public:
		int32_t                                                    NumberOfViews;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ViewDirection;                                           // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UpVector;                                                // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalAngle;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.FlipbookPipelineSettings
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FFlipbookPipelineSettings : public FSimplygonPipelineSettings
	{
	public:
		struct FFlipbookSettings                                   FlipbookSettings;                                        // 0x0008(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FMappingImageSettings                               MappingImageSettings;                                    // 0x0028(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class USimplygonMaterialCaster*>                    MaterialPropertyCasters;                                 // 0x00C8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.BillboardCloudVegetationPipelineSettings
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FBillboardCloudVegetationPipelineSettings : public FSimplygonPipelineSettings
	{
	public:
		struct FBillboardCloudSettings                             BillboardCloudSettings;                                  // 0x0008(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHM4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMappingImageSettings                               MappingImageSettings;                                    // 0x0040(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class USimplygonMaterialCaster*>                    MaterialPropertyCasters;                                 // 0x00E0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.ColorCasterSettings
	 * Size -> 0x0038
	 */
	struct FColorCasterSettings
	{
	public:
		class FString                                              MaterialChannel;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOpacityChannelComponent                                   OpacityChannelComponent;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDitherType                                                DitherType;                                              // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFillMode                                                  FillMode;                                                // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K81X[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OpacityChannel;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMultisampling : 1;                                    // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BakeOpacityInAlpha : 1;                                  // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputImageFileFormat                                     OutputImageFileFormat;                                   // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputDDSCompressionType                                  OutputDDSCompressionType;                                // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLWW[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Dilation;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputOpacityType                                         OutputOpacityType;                                       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputPixelFormat                                         OutputPixelFormat;                                       // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SkipCastingIfNoInputChannel : 1;                         // 0x0032(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OutputSRGB : 1;                                          // 0x0032(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T156[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.NormalCasterSettings
	 * Size -> 0x0038
	 */
	struct FNormalCasterSettings
	{
	public:
		class FString                                              MaterialChannel;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOpacityChannelComponent                                   OpacityChannelComponent;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDitherType                                                DitherType;                                              // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFillMode                                                  FillMode;                                                // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3A8E[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OpacityChannel;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMultisampling : 1;                                    // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipBackfacingNormals : 1;                               // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputImageFileFormat                                     OutputImageFileFormat;                                   // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputDDSCompressionType                                  OutputDDSCompressionType;                                // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P75V[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Dilation;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateTangentSpaceNormals : 1;                         // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputPixelFormat                                         OutputPixelFormat;                                       // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipGreen : 1;                                           // 0x0032(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CalculateBitangentPerFragment : 1;                       // 0x0032(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NormalizeInterpolatedTangentSpace : 1;                   // 0x0032(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9U3[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.OpacityCasterSettings
	 * Size -> 0x0038
	 */
	struct FOpacityCasterSettings
	{
	public:
		class FString                                              MaterialChannel;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOpacityChannelComponent                                   OpacityChannelComponent;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDitherType                                                DitherType;                                              // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFillMode                                                  FillMode;                                                // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97E7[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OpacityChannel;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMultisampling : 1;                                    // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OutputSRGB : 1;                                          // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputImageFileFormat                                     OutputImageFileFormat;                                   // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputDDSCompressionType                                  OutputDDSCompressionType;                                // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSAL[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Dilation;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputOpacityType                                         OutputOpacityType;                                       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputPixelFormat                                         OutputPixelFormat;                                       // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJC1[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.ReductionSettings
	 * Size -> 0x0088
	 */
	struct FReductionSettings
	{
	public:
		bool                                                       ReductionTargetTriangleRatioEnabled : 1;                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H95Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReductionTargetTriangleRatio;                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReductionTargetTriangleCountEnabled : 1;                 // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IK3W[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ReductionTargetTriangleCount;                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReductionTargetMaxDeviationEnabled : 1;                  // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6CO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReductionTargetMaxDeviation;                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReductionTargetOnScreenSizeEnabled : 1;                  // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZ17[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ReductionTargetOnScreenSize;                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EReductionTargetStopCondition                              ReductionTargetStopCondition;                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EReductionHeuristics                                       ReductionHeuristics;                                     // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUT9[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GeometryImportance;                                      // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaterialImportance;                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TextureImportance;                                       // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadingImportance;                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroupImportance;                                         // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VertexColorImportance;                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeSetImportance;                                       // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkinningImportance;                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurvatureImportance;                                     // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CreateGeomorphGeometry : 1;                              // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowDegenerateTexCoords : 1;                            // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       KeepSymmetry : 1;                                        // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseAutomaticSymmetryDetection : 1;                       // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSymmetryQuadRetriangulator : 1;                       // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESymmetryAxis                                              SymmetryAxis;                                            // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCDK[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SymmetryOffset;                                          // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SymmetryDetectionTolerance;                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDataCreationPreferences                                   DataCreationPreferences;                                 // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateGeomorphData : 1;                                // 0x0055(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEBV[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutwardMoveMultiplier;                                   // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InwardMoveMultiplier;                                    // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxEdgeLength;                                           // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHighQualityNormalCalculation : 1;                     // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25WN[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ProcessSelectionSetID;                                   // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SH7F[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProcessSelectionSetName;                                 // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MergeGeometries : 1;                                     // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       KeepUnprocessedSceneMeshes : 1;                          // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LockGeometricBorder : 1;                                 // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5YC[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.RepairSettings
	 * Size -> 0x0014
	 */
	struct FRepairSettings
	{
	public:
		bool                                                       UseTJunctionRemover : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VU9J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TJuncDist;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeldDist;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WeldOnlyBorderVertices : 1;                              // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WeldOnlyWithinMaterial : 1;                              // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WeldOnlyWithinSceneNode : 1;                             // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WeldOnlyBetweenSceneNodes : 1;                           // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseWelding : 1;                                          // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSX6[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ProgressivePasses;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.NormalCalculationSettings
	 * Size -> 0x000C
	 */
	struct FNormalCalculationSettings
	{
	public:
		bool                                                       ReplaceNormals : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReplaceTangents : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F82S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HardEdgeAngle;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RepairInvalidNormals : 1;                                // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReorthogonalizeTangentSpace : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScaleByArea : 1;                                         // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScaleByAngle : 1;                                        // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SnapNormalsToFlatSurfaces : 1;                           // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4O6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.ReductionPipelineSettings
	 * Size -> 0x0208 (FullSize[0x0210] - InheritedSize[0x0008])
	 */
	struct FReductionPipelineSettings : public FSimplygonPipelineSettings
	{
	public:
		struct FReductionSettings                                  ReductionSettings;                                       // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRepairSettings                                     RepairSettings;                                          // 0x0090(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FNormalCalculationSettings                          NormalCalculationSettings;                               // 0x00A4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVisibilitySettings                                 VisibilitySettings;                                      // 0x00B0(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneSettings                                       BoneSettings;                                            // 0x00F0(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVertexWeightSettings                               VertexWeightSettings;                                    // 0x0138(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMappingImageSettings                               MappingImageSettings;                                    // 0x0160(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class USimplygonMaterialCaster*>                    MaterialPropertyCasters;                                 // 0x0200(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.DisplacementCasterSettings
	 * Size -> 0x0040
	 */
	struct FDisplacementCasterSettings
	{
	public:
		class FString                                              MaterialChannel;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOpacityChannelComponent                                   OpacityChannelComponent;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDitherType                                                DitherType;                                              // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFillMode                                                  FillMode;                                                // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CD8E[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OpacityChannel;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMultisampling : 1;                                    // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4MWL[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceScaling;                                         // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputImageFileFormat                                     OutputImageFileFormat;                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputDDSCompressionType                                  OutputDDSCompressionType;                                // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2P37[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Dilation;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateScalarDisplacement : 1;                          // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputPixelFormat                                         OutputPixelFormat;                                       // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateTangentSpaceDisplacement : 1;                    // 0x003A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7TF[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NormalMapTexCoordLevel;                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.AmbientOcclusionCasterSettings
	 * Size -> 0x0048
	 */
	struct FAmbientOcclusionCasterSettings
	{
	public:
		class FString                                              MaterialChannel;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOpacityChannelComponent                                   OpacityChannelComponent;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDitherType                                                DitherType;                                              // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFillMode                                                  FillMode;                                                // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIFD[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OpacityChannel;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMultisampling : 1;                                    // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEGA[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RaysPerPixel;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputImageFileFormat                                     OutputImageFileFormat;                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputDDSCompressionType                                  OutputDDSCompressionType;                                // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y84O[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Dilation;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionFalloff;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputPixelFormat                                         OutputPixelFormat;                                       // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QYH[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OcclusionMultiplier;                                     // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSimpleOcclusionMode : 1;                              // 0x0044(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFFP[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SimplygonUObjects.GeometryDataCasterSettings
	 * Size -> 0x0060
	 */
	struct FGeometryDataCasterSettings
	{
	public:
		class FString                                              MaterialChannel;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOpacityChannelComponent                                   OpacityChannelComponent;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDitherType                                                DitherType;                                              // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFillMode                                                  FillMode;                                                // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y3SU[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OpacityChannel;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMultisampling : 1;                                    // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryDataFieldType                                     GeometryDataFieldType;                                   // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputImageFileFormat                                     OutputImageFileFormat;                                   // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputDDSCompressionType                                  OutputDDSCompressionType;                                // 0x002B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Dilation;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GeometryDataFieldIndex;                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputPixelFormat                                         OutputPixelFormat;                                       // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_54S3[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MappingLayerIndex;                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWJO[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            MappingInf;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            MappingSup;                                              // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.VertexColorCasterSettings
	 * Size -> 0x0050
	 */
	struct FVertexColorCasterSettings
	{
	public:
		class FString                                              MaterialChannel;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOpacityChannelComponent                                   OpacityChannelComponent;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDitherType                                                DitherType;                                              // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFillMode                                                  FillMode;                                                // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XTLU[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OpacityChannel;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMultisampling : 1;                                    // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3NO[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OutputColorLevel;                                        // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputImageFileFormat                                     OutputImageFileFormat;                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputDDSCompressionType                                  OutputDDSCompressionType;                                // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_501M[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Dilation;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputColorName;                                         // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOutputPixelFormat                                         OutputPixelFormat;                                       // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WIP[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ColorSpaceEdgeThreshold;                                 // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.ImpostorFromSingleViewSettings
	 * Size -> 0x001C
	 */
	struct FImpostorFromSingleViewSettings
	{
	public:
		bool                                                       UseTightFitting : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5073[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TightFittingDepthOffset;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TwoSided : 1;                                            // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5Q4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ViewDirection;                                           // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TexCoordPadding;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimplygonUObjects.ImpostorFromSingleViewPipelineSettings
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FImpostorFromSingleViewPipelineSettings : public FSimplygonPipelineSettings
	{
	public:
		struct FImpostorFromSingleViewSettings                     ImpostorFromSingleViewSettings;                          // 0x0008(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4I9M[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMappingImageSettings                               MappingImageSettings;                                    // 0x0028(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class USimplygonMaterialCaster*>                    MaterialPropertyCasters;                                 // 0x00C8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
