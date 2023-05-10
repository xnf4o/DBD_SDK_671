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
	 * Class LocationServicesBPLibrary.LocationServices
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULocationServices : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_StopLocationServices();
		bool STATIC_StartLocationServices();
		bool STATIC_IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
		bool STATIC_InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
		class ULocationServicesImpl* STATIC_GetLocationServicesImpl();
		struct FLocationServicesData STATIC_GetLastKnownLocation();
		bool STATIC_AreLocationServicesEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class LocationServicesBPLibrary.LocationServicesImpl
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULocationServicesImpl : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnLocationChanged;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
