# W3 singleton verification (sample of 16 / 176)

| VA | name | type | sizeof | static16B | install site | installed vtable | vtable class | match | capstone | gap |
|---|---|---|---|---|---|---|---|---|---|---|
| 0087f5d8 | dword_87F5D8 | ?$DynamicVectorClass@PAVBombClass@@ | ? | all-zero | 0x40b563 | 0x7e17cc | ?$DynamicVectorClass@PAVBombClass@@ | YES(self) | YES | 24 |
| 00887058 | dword_887058 | CCINIClass | 88 | all-zero | 0x40e241 | 0x7e1af4 | CCINIClass | YES(self) | YES | 12 |
| 00887190 | dword_887190 | GenericNode | 8 | all-zero | 0x40dfd0 | 0x7e1b0c | GenericNode | YES(self) | YES | 120 |
| 0088a0f0 | dword_88A0F0 | ?$DynamicVectorClass@PAVAlphaShapeClass@@ | ? | all-zero | 0x4208fd | 0x7e3238 | ?$DynamicVectorClass@PAVAlphaShapeClass@@ | YES(self) | YES | 65964 |
| 008a3770 | dword_8A3770 | ?$DynamicVectorClass@PAVEgoClass@@ | ? | all-zero | 0x4c3c2d | 0x7e86dc | ?$DynamicVectorClass@PAVEgoClass@@ | YES(self) | YES | 256 |
| 008b4190 | dword_8B4190 | ?$DynamicVectorClass@PAVBuildingLightClass@@ | ? | all-zero | 0x4e667d | 0x7e9c24 | ?$DynamicVectorClass@PAVBuildingLightClass@@ | YES(self) | YES | 24 |
| 00a83cf8 | dword_A83CF8 | ?$DynamicVectorClass@PAVCampaignClass@@ | ? | all-zero | 0x4e6efd | 0x7e9fe4 | ?$DynamicVectorClass@PAVCampaignClass@@ | YES(self) | YES | 44 |
| 00a8b200 | AITriggerTypeClass_Array | ?$DynamicVectorClass@PAVAITriggerTypeClass@@ | ? | all-zero | 0x4e64fd | 0x7e9b64 | ?$DynamicVectorClass@PAVAITriggerTypeClass@@ | YES(self) | YES | 24 |
| 00a8e9a8 | AnimClass_Array | ?$DynamicVectorClass@PAVAnimClass@@ | ? | all-zero | 0x4e6d7d | 0x7e9f24 | ?$DynamicVectorClass@PAVAnimClass@@ | YES(self) | YES | 320 |
| 00a8ece0 | g_CoordScatterManager | VersionClass | ? | all-zero | 0x4e7de0 | 0x7ea57c | VersionClass | YES(self) | YES | 72 |
| 00abca10 | dword_ABCA10 | ?$DynamicVectorClass@PAVLightSourceClass@@ | ? | all-zero | 0x55465d | 0x7ecf7c | ?$DynamicVectorClass@PAVLightSourceClass@@ | YES(self) | YES | 48 |
| 00ac4910 | dword_AC4910 | ?$DynamicVectorClass@PAVParasiteClass@@ | ? | all-zero | 0x6291ad | 0x7ef824 | ?$DynamicVectorClass@PAVParasiteClass@@ | YES(self) | YES | 544 |
| 00b04da8 | dword_B04DA8 | ?$DynamicVectorClass@PAVRadarEventClass@@ | ? | all-zero | 0x65f9cd | 0x7f0aac | ?$DynamicVectorClass@PAVRadarEventClass@@ | YES(self) | YES | 1320 |
| 00b0cde8 | dword_B0CDE8 | ?$DynamicVectorClass@PAVShadowControlClass@@ | ? | all-zero | 0x6d1b2d | 0x7f42dc | ?$DynamicVectorClass@PAVShadowControlClass@@ | YES(self) | YES | 144 |
| 00b0f618 | dword_B0F618 | ?$DynamicVectorClass@PAVAbstractClass@@ | ? | all-zero | 0x7253ed | 0x7e91ec | ?$DynamicVectorClass@PAVAbstractClass@@ | YES(self) | YES | 40 |
| 00b1d4a0 | dword_B1D4A0 | ?$DynamicVectorClass@PAVVoxClass@@ | ? | all-zero | 0x75222d | 0x7f6904 | ?$DynamicVectorClass@PAVVoxClass@@ | YES(self) | YES | 66384 |

- Installs found for sample: 29; capstone-verified `mov [global], vtable`: 29; class identity (self/base via RTTI base arrays): 16 self + 13 base = 29/29.
- All sampled slots are in the zero tail (>=0x87E000); file-level bytes are all zero — the vptr is installed at runtime.
