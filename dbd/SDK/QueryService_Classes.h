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
	 * Class QueryService.ActorPairQueryEvaluatorComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UActorPairQueryEvaluatorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1NYA[0x58];                                  // 0x00B8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class QueryService.ActorPairQueryEvaluatorSubscriberTest
	 * Size -> 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
	 */
	class AActorPairQueryEvaluatorSubscriberTest : public AActor
	{
	public:
		unsigned char                                              UnknownData_I4QM[0x28];                                  // 0x0230(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnRangeChanged(bool inRange);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
