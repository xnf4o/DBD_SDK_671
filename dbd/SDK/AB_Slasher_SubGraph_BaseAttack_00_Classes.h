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
	 * AnimBlueprintGeneratedClass AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C
	 * Size -> 0x136A (FullSize[0x198A] - InheritedSize[0x0620])
	 */
	class UAB_Slasher_SubGraph_BaseAttack_00_C : public UKillerAttackSubAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0628(0x0038)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x0660(0x0120)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x0780(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x08D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x0900(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0928(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0950(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0978(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x09A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x09C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x09F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0A18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0A40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0A68(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0A90(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x0B10(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0B48(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x0BC8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0C00(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0C80(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0CB8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0D38(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0D70(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0DF0(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x0E28(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0E58(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x0E90(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0F40(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x1098(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x10C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x10E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x1110(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x1138(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x1160(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x1188(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x11B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x11D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1200(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x1228(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x1258(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x1318(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x1348(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x1408(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1438(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x14F8(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1528(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1560(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1590(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x15C0(0x00C0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1680(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x16B8(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x16E8(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1720(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1750(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1788(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1838(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1870(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x18A0(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x18D8(0x00B0)
		bool                                                       _isIdle;                                                 // 0x1988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _isAttack;                                               // 0x1989(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_64A870D94C5BBB4145B273A43D530989();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_B50A67404182E787316715BE18637400();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_0E0E289545D87547ADD7629603810F1A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_45287DF740DD3332676783AC3B85138E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_342A66F848F32A23C26F1E905C58406D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_7A7167C2435FA741869C96BE3B8AB485();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_E641D7DC48F31981B233F3AC03771762();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_EA11CD8745C33480B79FFF97AB1F33C4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_EA7C5D464C165E9C940C15A81932636A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_0A357C3A41BE982F3FBF4298AABDDC8F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_DF31B43E4347AF97EF880CB0C46FDDDB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_36E899A04054E48D0E447BAD9F85D6D8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_685EC00942748326C6A2F0B95223E4A2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_536BEE4049AB5907F033B3ABD67EEC4F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_D3A76D6047C3FF393368398A9E02B6F6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_6F6204FB454B3950C32C518A52645928();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_71A6612B43EE8076A3E736847A5D18F0();
		void AnimNotify_FX_MakeTag_MaskFPV_Hidden();
		void AnimNotify_FX_MakeTag_MaskFPV_Visible();
		void AnimNotify_FX_MakeSlasherInvisible();
		void AnimNotify_FX_MakeSlasherVisible();
		void SetAttackAnimationFromMainAB(const struct FAset_Slasher_BaseAttack& AttackAnimset);
		void ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
