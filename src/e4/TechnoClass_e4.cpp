// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41A9E0
namespace gamemd {
int TechnoClass_CanFireAtTarget()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge TechnoClass::CanFireAtTarget@<eax>(
        int a1@<ecx>,
        TechnoClass *a2@<edx>,
        ObjectClass *aP2,
        int a4,
        IUnknown aP1)
{
  int result; // eax
  int v7; // edi

  result = TriggerTypeClass::ReadINI((_DWORD *)a1, a2, (TechnoClass *)aP2, a4, (TechnoClass *)aP1.field_0); /*0x41a9f6*/
  if ( !result ) /*0x41a9fd*/
  {
    if ( !*(_BYTE *)(a1 + 1737) || *(_DWORD *)(a1 + 280) ) /*0x41aa09*/
    {
      v7 = *ProgressTimer::GetValue((_WORD *)(a1 + 928), &aP1); /*0x41aa2e*/
      if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a1 + 1728) + 28))(a1 + 1728) /*0x41aa6a*/
        || abs16(v7 - *(_WORD *)ObjectClass::CalcTargetFacing((void *)a1, &aP1, aP2)) <= 0x800u )
      {
        return 0; /*0x41aa77*/
      }
      else
      {
        return 2; /*0x41aa6e*/
      }
    }
    else
    {
      return 1; /*0x41aa15*/
    }
  }
  return result; /*0x41aa13*/
}
}
} // namespace gamemd

// 0x41B7D0
namespace ra2 {
namespace game {
BOOL TechnoClass::processDamageAnimation(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall TechnoClass::sub_41B7D0(int a1)
{
  return *(_DWORD *)(a1 - 1448) != 0; /*0x41b7e4*/
}
}
} // namespace game
} // namespace ra2

// 0x41B840
namespace ra2 {
namespace game {
BOOL TechnoClass::updateWeaponCooldown(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall TechnoClass::sub_41B840(int a1)
{
  return *(_BYTE *)(*(_DWORD *)(a1 + 4) + 3598) != 0; /*0x41b854*/
}
}
} // namespace game
} // namespace ra2

// 0x41B860
namespace ra2 {
namespace game {
int TechnoClass::checkAmmo(AircraftClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TechnoClass::checkAmmo(AircraftClass *aP0)
{
  return BYTE2(aP0->uniqueId); /*0x41b869*/
}
}
} // namespace game
} // namespace ra2

// 0x4722D0
namespace ra2 {
namespace game {
int TechnoClass::processPowerDrain()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4722D0(_DWORD *this)
{
  return *(this + 13); /*0x4722d3*/
}
}
} // namespace game
} // namespace ra2

// 0x4C2BD0
namespace ra2 {
namespace game {
void TechnoClass::updateSightRange(IUnknown * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TechnoClass::updateSightRange(_DWORD *this, IUnknown *aP1, int a3)
{
  if ( aP1 /*0x4c2bf2*/
    && (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) == 1
    && aP1->__pad_8C[4]
    && !aP1->__pad_68[25] )
  {
    *(this + 8) = aP1; /*0x4c2c00*/
    *(this + 9) = a3; /*0x4c2c03*/
  }
}
}
} // namespace game
} // namespace ra2

// 0x6F2B40
namespace ra2 {
namespace game {
unsigned int * TechnoClass::TechnoClass(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TechnoClass::TechnoClass(_DWORD *this, AbstractClass *aP1)
{
  int v3; // eax
  IUnknown *v4; // edx
  IUnknown *v5; // ecx
  IUnknown *v6; // ecx
  IUnknown *v7; // edx
  IUnknown *v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax

  RadioClass::Release(this); /*0x6f2b46*/
  *(this + 60) = 0; /*0x6f2b52*/
  *((_BYTE *)this + 244) = 0; /*0x6f2b58*/
  *(this + 62) = 0; /*0x6f2b5e*/
  *((_BYTE *)this + 252) = 0; /*0x6f2b64*/
  v3 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2b6a*/
  *(this + 66) = 0; /*0x6f2b6f*/
  *(this + 64) = v3; /*0x6f2b75*/
  *(this + 67) = 0; /*0x6f2b7b*/
  *(this + 68) = 1; /*0x6f2b81*/
  *(this + 69) = 0; /*0x6f2b87*/
  *(this + 70) = 0; /*0x6f2b8d*/
  *(this + 71) = 0; /*0x6f2b93*/
  *(this + 72) = -100; /*0x6f2b9c*/
  *(this + 73) = -1; /*0x6f2ba6*/
  *(this + 74) = -1; /*0x6f2bac*/
  *(this + 75) = 0; /*0x6f2bb2*/
  *(this + 76) = 0; /*0x6f2bb8*/
  *((_BYTE *)this + 308) = 0; /*0x6f2bbe*/
  *(this + 78) = 0; /*0x6f2bc4*/
  *(this + 79) = -1; /*0x6f2bca*/
  *(this + 80) = 0; /*0x6f2bd0*/
  *(this + 81) = 0; /*0x6f2bd6*/
  *(this + 82) = 0; /*0x6f2be2*/
  unknown_libname_35(this + 84); /*0x6f2be8*/
  *(this + 86) = 0; /*0x6f2bf2*/
  *(this + 87) = 1072693248; /*0x6f2bf8*/
  *(this + 88) = 0; /*0x6f2bfe*/
  *(this + 89) = 1072693248; /*0x6f2c04*/
  *(this + 90) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c10*/
  *(this + 92) = 0; /*0x6f2c16*/
  v4 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c1c*/
  *(this + 95) = 0; /*0x6f2c22*/
  *(this + 93) = v4; /*0x6f2c28*/
  *(this + 96) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c33*/
  *(this + 98) = 45; /*0x6f2c39*/
  v5 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c43*/
  *(this + 101) = 0; /*0x6f2c49*/
  *(this + 99) = v5; /*0x6f2c4f*/
  *(this + 102) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c5b*/
  *(this + 104) = 0; /*0x6f2c61*/
  *(this + 105) = 10; /*0x6f2c67*/
  *(this + 106) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c76*/
  *(this + 108) = 0; /*0x6f2c7c*/
  v6 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c82*/
  *(this + 111) = 0; /*0x6f2c88*/
  *(this + 109) = v6; /*0x6f2c8e*/
  *(this + 113) = 0; /*0x6f2c94*/
  this->isDeactivated = 0; /*0x6f2c9a*/
  *(this + 115) = 0; /*0x6f2ca0*/
  *(this + 116) = 0; /*0x6f2ca6*/
  *(this + 117) = 0; /*0x6f2cac*/
  *((_BYTE *)this + 472) = 0; /*0x6f2cb2*/
  *(this + 119) = 0; /*0x6f2cb8*/
  v7 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2cbe*/
  *(this + 122) = 0; /*0x6f2cc4*/
  *(this + 120) = v7; /*0x6f2cca*/
  *(this + 123) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2cd5*/
  *(this + 125) = 0; /*0x6f2cdb*/
  *((_BYTE *)this + 504) = 0; /*0x6f2ce1*/
  *(this + 127) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2ced*/
  *(this + 129) = 0; /*0x6f2cf3*/
  *(this + 130) = 0; /*0x6f2cf9*/
  *(this + 131) = 0; /*0x6f2cff*/
  *(this + 132) = 0; /*0x6f2d05*/
  *(this + 133) = -1; /*0x6f2d0f*/
  *(this + 134) = 0; /*0x6f2d15*/
  *(this + 135) = aP1; /*0x6f2d1b*/
  *(this + 136) = 0; /*0x6f2d21*/
  *(this + 137) = 0; /*0x6f2d27*/
  *((_BYTE *)this + 552) = 0; /*0x6f2d2d*/
  *(this + 139) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2d38*/
  *(this + 141) = 0; /*0x6f2d3e*/
  *(this + 142) = 0; /*0x6f2d44*/
  *(this + 143) = 1; /*0x6f2d4a*/
  v8 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2d50*/
  *(this + 146) = 0; /*0x6f2d56*/
  *(this + 144) = v8; /*0x6f2d5c*/
  *(this + 147) = 0; /*0x6f2d62*/
  *((_BYTE *)this + 592) = 0; /*0x6f2d68*/
  *(this + 149) = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6908]; /*0x6f2d79*/
  *(this + 150) = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6912]; /*0x6f2d85*/
  *(this + 151) = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6916]; /*0x6f2d93*/
  *(this + 152) = 0; /*0x6f2d96*/
  *(this + 153) = 0; /*0x6f2d9c*/
  this->gapSuperCharged = 0; /*0x6f2da2*/
  this->isGeneratingGap = 0; /*0x6f2da8*/
  *(this + 155) = 0; /*0x6f2dae*/
  *((_BYTE *)this + 624) = 0; /*0x6f2db4*/
  *((_BYTE *)this + 625) = 0; /*0x6f2dba*/
  *((_BYTE *)this + 626) = 0; /*0x6f2dc0*/
  *(this + 157) = 0; /*0x6f2dc6*/
  *(this + 158) = 0; /*0x6f2dcc*/
  *((_BYTE *)this + 636) = 0; /*0x6f2dd2*/
  *(this + 160) = 0; /*0x6f2dd8*/
  *(this + 161) = 0; /*0x6f2dde*/
  *(this + 162) = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6908]; /*0x6f2dea*/
  *(this + 163) = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6912]; /*0x6f2df1*/
  v9 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6916]; /*0x6f2df4*/
  *(this + 185) = 0; /*0x6f2dfa*/
  *(this + 186) = 0; /*0x6f2e00*/
  *(this + 164) = v9; /*0x6f2e06*/
  *(this + 165) = 0; /*0x6f2e09*/
  *((_BYTE *)this + 664) = 0; /*0x6f2e0f*/
  *(this + 167) = 0; /*0x6f2e15*/
  *(this + 168) = 0; /*0x6f2e1b*/
  *((_BYTE *)this + 676) = 0; /*0x6f2e21*/
  *(this + 170) = 0; /*0x6f2e27*/
  *(this + 171) = 0; /*0x6f2e2d*/
  *(this + 172) = 0; /*0x6f2e33*/
  *(this + 173) = 0; /*0x6f2e39*/
  *(this + 174) = 0; /*0x6f2e3f*/
  *(this + 175) = 0; /*0x6f2e45*/
  *(this + 176) = 0; /*0x6f2e4b*/
  *((_BYTE *)this + 708) = 0; /*0x6f2e51*/
  *(this + 178) = 0; /*0x6f2e57*/
  *(this + 179) = 0; /*0x6f2e5d*/
  *(this + 180) = 0; /*0x6f2e63*/
  *(this + 181) = 0; /*0x6f2e69*/
  *(this + 182) = 0; /*0x6f2e6f*/
  *(this + 183) = 0; /*0x6f2e75*/
  *(this + 184) = 0; /*0x6f2e7b*/
  *(this + 187) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2e86*/
  *(this + 189) = 0; /*0x6f2e8c*/
  *(this + 190) = 0; /*0x6f2e98*/
  *(this + 191) = -1; /*0x6f2e9e*/
  *(this + 192) = 0; /*0x6f2ea4*/
  *(this + 201) = 0; /*0x6f2eaa*/
  *(this + 202) = 0; /*0x6f2eb0*/
  *(this + 203) = 0; /*0x6f2eb6*/
  *(this + 204) = 0; /*0x6f2ebc*/
  *(this + 205) = 0; /*0x6f2ec2*/
  *(this + 206) = -1; /*0x6f2ec8*/
  Delegate::GetField(this + 207); /*0x6f2ece*/
  TechnoClass::checkCloakState((int)(this + 212)); /*0x6f2ed9*/
  FrameSnapshot::InitMax((_WORD *)this + 440, 3); /*0x6f2ee6*/
  FrameSnapshot::Init((_WORD *)this + 452); /*0x6f2ef1*/
  FrameSnapshot::Init((_WORD *)this + 464); /*0x6f2efc*/
  *(this + 238) = 0; /*0x6f2f01*/
  *(this + 239) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2f0d*/
  *(this + 241) = 0; /*0x6f2f13*/
  *((_WORD *)this + 485) = 0; /*0x6f2f1e*/
  *(this + 243) = 0; /*0x6f2f25*/
  *(this + 244) = 0; /*0x6f2f3d*/
  *((_BYTE *)this + 980) = 0; /*0x6f2f55*/
  *((_BYTE *)this + 981) = 0; /*0x6f2f5b*/
  *(this + 246) = 2; /*0x6f2f61*/
  *(this + 247) = 1; /*0x6f2f67*/
  *(this + 248) = 1; /*0x6f2f6d*/
  *(this + 249) = 1; /*0x6f2f73*/
  *(this + 251) = 0; /*0x6f2f79*/
  *(this + 252) = 0; /*0x6f2f7f*/
  *(this + 254) = 2; /*0x6f2f85*/
  *(this + 255) = 1; /*0x6f2f8b*/
  *(this + 256) = 1; /*0x6f2f91*/
  *(this + 257) = 1; /*0x6f2f97*/
  *(this + 259) = 0; /*0x6f2f9d*/
  *(this + 260) = 0; /*0x6f2fa3*/
  *((_BYTE *)this + 1048) = 0; /*0x6f2fa9*/
  *((_BYTE *)this + 1049) = 0; /*0x6f2faf*/
  *((_BYTE *)this + 1050) = 0; /*0x6f2fb5*/
  *((_BYTE *)this + 1051) = 0; /*0x6f2fbb*/
  *((_BYTE *)this + 1052) = 0; /*0x6f2fc1*/
  *((_BYTE *)this + 1053) = 0; /*0x6f2fc7*/
  *((_BYTE *)this + 1054) = 0; /*0x6f2fcd*/
  *((_BYTE *)this + 1055) = 0; /*0x6f2fd3*/
  *((_BYTE *)this + 1056) = 0; /*0x6f2fd9*/
  *((_BYTE *)this + 1057) = 1; /*0x6f2fdf*/
  *((_BYTE *)this + 1058) = 1; /*0x6f2fe6*/
  *((_BYTE *)this + 1059) = 0; /*0x6f2fed*/
  *((_BYTE *)this + 1060) = 0; /*0x6f2ff3*/
  *((_BYTE *)this + 1061) = 0; /*0x6f2ff9*/
  *((_BYTE *)this + 1062) = 0; /*0x6f2fff*/
  *((_BYTE *)this + 1063) = 0; /*0x6f3005*/
  *(this + 266) = 0; /*0x6f300b*/
  *(this + 267) = 0; /*0x6f3011*/
  *((_BYTE *)this + 1072) = 0; /*0x6f3017*/
  *((_BYTE *)this + 1073) = 0; /*0x6f301d*/
  *((_BYTE *)this + 1074) = 0; /*0x6f3023*/
  *(this + 269) = 0; /*0x6f3029*/
  this->isCountedAsOwned_special = 0; /*0x6f302f*/
  this->isAbsorbed = 0; /*0x6f3035*/
  this->isGrindingInProgress = 0; /*0x6f303b*/
  *(this + 271) = 0; /*0x6f3046*/
  *(this + 273) = 0; /*0x6f3051*/
  *(this + 274) = 0; /*0x6f3057*/
  *((_BYTE *)this + 1100) = 1; /*0x6f305d*/
  *((_BYTE *)this + 1101) = 0; /*0x6f3064*/
  *(this + 272) = &DynamicVectorClass<int>::`vftable'; /*0x6f306a*/
  *(this + 277) = 10; /*0x6f3074*/
  *(this + 276) = 0; /*0x6f307a*/
  *(this + 279) = 0; /*0x6f3080*/
  *(this + 280) = 0; /*0x6f3086*/
  *((_BYTE *)this + 1124) = 1; /*0x6f308c*/
  *((_BYTE *)this + 1125) = 0; /*0x6f3093*/
  *(this + 278) = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f3099*/
  *(this + 283) = 10; /*0x6f309f*/
  *(this + 282) = 0; /*0x6f30a5*/
  *(this + 285) = 0; /*0x6f30ab*/
  *(this + 286) = 0; /*0x6f30b1*/
  *((_BYTE *)this + 1148) = 1; /*0x6f30b7*/
  *((_BYTE *)this + 1149) = 0; /*0x6f30be*/
  *(this + 284) = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f30c4*/
  *(this + 289) = 10; /*0x6f30ca*/
  *(this + 288) = 0; /*0x6f30d0*/
  *(this + 295) = 1; /*0x6f30d6*/
  *(this + 296) = 0; /*0x6f30dc*/
  *((_BYTE *)this + 1208) = 0; /*0x6f30e2*/
  *(this + 303) = 0; /*0x6f30e8*/
  this->isAudio5Active = 0; /*0x6f30ee*/
  *(this + 310) = 0; /*0x6f30f4*/
  this->isVoiceOverride = 0; /*0x6f30fa*/
  *(this + 319) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f3106*/
  *(this + 320) = 0; /*0x6f310c*/
  *(this + 321) = 0; /*0x6f3112*/
  *(this + 324) = 0; /*0x6f3118*/
  *(this + 325) = 0; /*0x6f311e*/
  *(this + 326) = 0; /*0x6f3124*/
  *(this + 327) = 0; /*0x6f312a*/
  *this = &TechnoClass::`vftable'; /*0x6f3130*/
  *(this + 1) = &TechnoClass::`vftable'; /*0x6f3136*/
  *(this + 2) = &TechnoClass::`vftable'; /*0x6f313d*/
  *(this + 3) = &off_7F4934; /*0x6f314a*/
  AudioController::Init(this + 290); /*0x6f3151*/
  AudioController::Init(this + 297); /*0x6f315c*/
  AudioController::Init(this + 304); /*0x6f3167*/
  AudioController::Init(this + 311); /*0x6f3172*/
  *(this + 316) = -1; /*0x6f3177*/
  *(this + 317) = -1; /*0x6f317d*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[412] < *(int *)&MEMORY[0xA8D63C].__pad_14B0[404] /*0x6f31b6*/
    || (MEMORY[0xA8D63C].__pad_14B0[409] || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[404])
    && *(int *)&MEMORY[0xA8D63C].__pad_14B0[416] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[396] + 8))(
         &MEMORY[0xA8D63C].__pad_14B0[396],
         *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[416] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[404],
         0) )
  {
    v10 = (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[412])++; /*0x6f31c3*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * v10) = this; /*0x6f31d2*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10052] < *(int *)&MEMORY[0xB077F8].__pad_579C[10044] /*0x6f3209*/
    || (MEMORY[0xB077F8].__pad_579C[10049] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10044])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[10056] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10036] + 8))(
         &MEMORY[0xB077F8].__pad_579C[10036],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10056] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10044],
         0) )
  {
    v11 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10052])++; /*0x6f3216*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10040] + 4 * v11) = this; /*0x6f3225*/
  }
  *((_BYTE *)this + 20) |= 1u; /*0x6f3237*/
  *(this + 83) = aP1; /*0x6f3241*/
  memset(this + 193, 0, 0x20u); /*0x6f3247*/
  *((_WORD *)this + 484) = Random::State(&MEMORY[0xA8B230]->random[1]); /*0x6f3259*/
  return this; /*0x6f3262*/
}
}
} // namespace game
} // namespace ra2

// 0x6F3F40
namespace ra2 {
namespace game {
unsigned int * TechnoClass::Update(BuildingClass * aP0, FootClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *TechnoClass::Update(BuildingClass *aP0, FootClass *aP1)
{
  int v2; // ecx
  TechnoClass *esi1; // esi
  HouseClass *v3; // eax
  _DWORD *result; // eax
  int v6; // edi
  int v7; // eax
  void *v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int edi20; // edi
  int v13; // edx
  int eax21a; // eax
  void *eax21; // eax
  int eax27; // eax
  ParasiteClass *v12; // eax
  _DWORD *v18; // eax
  TemporalClass *v14; // eax
  AbstractClass *v15; // edx
  int v21; // eax
  AirstrikeClass *v16; // eax
  HouseClass *v17; // eax
  int sideIndex; // eax
  _DWORD *eax49; // eax
  int ecx49; // ecx
  int v27; // eax
  int v28; // ecx
  FootClass *v23; // [esp-Ch] [ebp-10h]
  FootClass *v24; // [esp-Ch] [ebp-10h]
  AircraftClass *v25; // [esp-8h] [ebp-Ch]
  AircraftClass *v26; // [esp-8h] [ebp-Ch]
  int v33; // [esp-4h] [ebp-8h]
  int v34; // [esp-4h] [ebp-8h]

  esi1 = (TechnoClass *)v2; /*0x6f3f41*/
  v3 = *(HouseClass **)(v2 + 540); /*0x6f3f43*/
  if ( v3 ) /*0x6f3f4b*/
    *(_BYTE *)(v2 + 1050) = (HouseClass *)HouseClass_Player.field_0 == v3; /*0x6f3f55*/
  result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)v2 + 132))(); /*0x6f3f69*/
  if ( result ) /*0x6f3f71*/
  {
    if ( !esi1->planningToken ) /*0x6f3f77*/
      TechnoClass::CreatePlanningNode(esi1); /*0x6f3f83*/
    if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3416) ) /*0x6f3f93*/
    {
      v6 = __2_YAPAXI_Z(0x74u); /*0x6f3fa4*/
      if ( v6 ) /*0x6f3fab*/
      {
        v33 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3428); /*0x6f3fbf*/
        v25 = *(AircraftClass **)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3424); /*0x6f3fd0*/
        v23 = *(FootClass **)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3420); /*0x6f3fe1*/
        v7 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x6f3fe4*/
        v8 = (void *)SpawnManagerClass::SpawnManagerClass(v6, esi1, *(_DWORD *)(v7 + 3416), (int)v23, (int)v25, v33); /*0x6f3ff4*/
      }
      else
      {
        v8 = 0; /*0x6f3ffb*/
      }
      esi1->captureManager = v8; /*0x6f3ffd*/
    }
    if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3392) ) /*0x6f400d*/
    {
      v9 = __2_YAPAXI_Z(0x64u); /*0x6f401e*/
      if ( v9 ) /*0x6f4025*/
      {
        v34 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3404); /*0x6f4039*/
        v26 = *(AircraftClass **)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3400); /*0x6f404a*/
        v24 = *(FootClass **)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3396); /*0x6f405b*/
        v10 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x6f405e*/
        v11 = SlaveManagerClass::ctor(v9, esi1, *(_DWORD *)(v10 + 3392), (int)v24, (int)v26, v34); /*0x6f406e*/
      }
      else
      {
        v11 = 0; /*0x6f4075*/
      }
      *(_DWORD *)&esi1->mindControlledBy_a_unit = v11; /*0x6f4077*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1, 0) /*0x6f40a2*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(
                                             esi1,
                                             0)
                              + 172)
                  + 341) )
    {
      edi20 = __2_YAPAXI_Z(0x50u); /*0x6f40b3*/
      if ( edi20 ) /*0x6f40ba*/
      {
        LOBYTE(v13) = *(_BYTE *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1) /*0x6f40cc*/
                               + 320);
        eax21a = (*(int (__thiscall **)(TechnoClass *, _DWORD, int))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1, 0, v13); /*0x6f40d7*/
        eax21 = (void *)CaptureManagerClass::CaptureManagerClass(edi20, esi1, *(_DWORD *)(*(_DWORD *)eax21a + 164), 0); /*0x6f40e9*/
      }
      else
      {
        eax21 = 0; /*0x6f40f0*/
      }
      esi1->rockerLinkedUnit = eax21; /*0x6f40f2*/
    }
    if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 44))(esi1) != 6 /*0x6f412a*/
      && *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1, 0)
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(
                                             esi1,
                                             0)
                              + 172)
                  + 345) )
    {
      eax27 = __2_YAPAXI_Z(0x58u); /*0x6f4136*/
      if ( eax27 ) /*0x6f4140*/
        v12 = (ParasiteClass *)ParasiteClass::ParasiteClass(eax27, esi1); /*0x6f4145*/
      else
        v12 = 0; /*0x6f414c*/
      esi1[1].radarFlashTimer[1] = (int)v12; /*0x6f414e*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1, 0) /*0x6f4179*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(
                                             esi1,
                                             0)
                              + 172)
                  + 346) )
    {
      v18 = (_DWORD *)__2_YAPAXI_Z(0x50u); /*0x6f4185*/
      if ( v18 ) /*0x6f418f*/
        v14 = (TemporalClass *)TemporalClass::TemporalClass(v18, esi1); /*0x6f4194*/
      else
        v14 = 0; /*0x6f419b*/
      v15 = *(AbstractClass **)esi1->__pad_0; /*0x6f419d*/
      *(_DWORD *)&esi1->__pad_26A[10] = v14; /*0x6f41a3*/
      *(_DWORD *)(*(_DWORD *)&esi1->__pad_26A[10] + 76) = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))&v15[28].__pad_0[8])( /*0x6f41bd*/
                                                                                   esi1,
                                                                                   0)
                                                                    + 164);
    }
    if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 1564) > 0 ) /*0x6f41d2*/
    {
      v21 = __2_YAPAXI_Z(0x60u); /*0x6f41d6*/
      if ( v21 ) /*0x6f41e0*/
        v16 = (AirstrikeClass *)AirstrikeClass::AirstrikeClass(v21, esi1); /*0x6f41e5*/
      else
        v16 = 0; /*0x6f41ec*/
      esi1->owningHouseIndex0 = (int)v16; /*0x6f41ee*/
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3375) /*0x6f4212*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3376) )
    {
      v17 = (HouseClass *)esi1->focus; /*0x6f421c*/
      LOBYTE(esi1->drainAnim) = 1; /*0x6f4222*/
      esi1->isDisguisedFlag_as_house = v17; /*0x6f4229*/
      sideIndex = v17->sideIndex; /*0x6f422f*/
      if ( sideIndex ) /*0x6f4237*/
      {
        if ( sideIndex == 1 ) /*0x6f4250*/
          esi1->disguiseAsType = *(void **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3420); /*0x6f425d*/
        else
          esi1->disguiseAsType = *(void **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3424); /*0x6f4271*/
      }
      else
      {
        esi1->disguiseAsType = *(void **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3416); /*0x6f4245*/
      }
    }
    eax49 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x6f427b*/
    ecx49 = eax49[809]; /*0x6f4281*/
    eax49 += 809; /*0x6f4287*/
    esi1->barrelRecoil[7] = ecx49; /*0x6f428c*/
    *(_DWORD *)&esi1->isTurretLocked = eax49[1]; /*0x6f4295*/
    *(_DWORD *)&esi1->isDiscoveredByComputer = eax49[2]; /*0x6f429e*/
    *(_DWORD *)&esi1->sightRangeBonus = eax49[3]; /*0x6f42a7*/
    v27 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x6f42b1*/
    v28 = *(_DWORD *)(v27 + 3256); /*0x6f42b7*/
    result = (_DWORD *)(v27 + 3256); /*0x6f42bd*/
    *(_DWORD *)&esi1->__pad_3F7[1] = v28; /*0x6f42c2*/
    *(_DWORD *)&esi1->__pad_3F7[5] = result[1]; /*0x6f42cb*/
    *(_DWORD *)&esi1->__pad_3F7[9] = result[2]; /*0x6f42d4*/
    *(_DWORD *)&esi1->__pad_3F7[13] = result[3]; /*0x6f42dd*/
    *(_DWORD *)&esi1->__pad_491[11] = 1; /*0x6f42e3*/
    *(_DWORD *)&esi1->__pad_491[15] = 0; /*0x6f42ed*/
  }
  return result; /*0x6f42f7*/
}
}
} // namespace game
} // namespace ra2

// 0x6F4500
namespace ra2 {
namespace game {
int TechnoClass::DTOR()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TechnoClass::DTOR(int this)
{
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // ecx
  _DWORD *v5; // ecx
  int v6; // ecx
  int v7; // ecx
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  int v17; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD **)(this + 1300); /*0x6f4507*/
  *(_DWORD *)this = &TechnoClass::`vftable'; /*0x6f450d*/
  *(_DWORD *)(this + 4) = &TechnoClass::`vftable'; /*0x6f4515*/
  *(_DWORD *)(this + 8) = &TechnoClass::`vftable'; /*0x6f451c*/
  *(_DWORD *)(this + 12) = &off_7F4934; /*0x6f4523*/
  if ( v2 ) /*0x6f452a*/
  {
    Sidebar::CancelSidebarProductionQueue(v2); /*0x6f452c*/
    this->planningToken = 0; /*0x6f4531*/
  }
  v3 = this->rockerLinkedUnit; /*0x6f4537*/
  if ( v3 ) /*0x6f453f*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 32))(v3, 1); /*0x6f4545*/
    this->rockerLinkedUnit = 0; /*0x6f4548*/
  }
  v4 = this->captureManager; /*0x6f454e*/
  if ( v4 ) /*0x6f4556*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x6f455c*/
    this->captureManager = 0; /*0x6f455f*/
  }
  v5 = *(_DWORD **)(this + 728); /*0x6f4565*/
  if ( v5 ) /*0x6f456d*/
  {
    TechnoClass::MutateAll(v5, 0, 0); /*0x6f4571*/
    v6 = *(_DWORD *)(this + 728); /*0x6f4576*/
    if ( v6 ) /*0x6f457e*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x6f4584*/
    *(_DWORD *)(this + 728) = 0; /*0x6f4587*/
  }
  v7 = *(_DWORD *)(this + 628); /*0x6f458d*/
  if ( v7 ) /*0x6f4595*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6f459b*/
    *(_DWORD *)(this + 628) = 0; /*0x6f459e*/
  }
  v8 = *(_DWORD **)(this + 660); /*0x6f45a4*/
  if ( v8 && v8[19] == this ) /*0x6f45b1*/
  {
    (*(void (__thiscall **)(_DWORD *, int))(*v8 + 32))(v8, 1); /*0x6f45bb*/
    this->owningHouseIndex0 = 0; /*0x6f45be*/
  }
  AudioFile::Stop((_DWORD *)(this + 1160)); /*0x6f45cd*/
  AudioFileClass::Release((_DWORD *)(this + 1160)); /*0x6f45d4*/
  AudioFile::Stop((_DWORD *)(this + 1188)); /*0x6f45e1*/
  AudioFileClass::Release((_DWORD *)(this + 1188)); /*0x6f45e8*/
  AudioFile::Stop((_DWORD *)(this + 1216)); /*0x6f45f5*/
  AudioFileClass::Release((_DWORD *)(this + 1216)); /*0x6f45fc*/
  AudioFileClass::Release((_DWORD *)(this + 1244)); /*0x6f4607*/
  this->focus = 0; /*0x6f4610*/
  *(_BYTE *)(this + 1050) = 0; /*0x6f4616*/
  v17 = this; /*0x6f4628*/
  v9 = ((int (__thiscall *)(TechnoClass **, int *))MEMORY[0xA8EC78]->__pad_0[4])(&MEMORY[0xA8EC78], &v17); /*0x6f462c*/
  if ( v9 != -1 ) /*0x6f4633*/
    FactoryClass::RemoveItem(&MEMORY[0xA8EC78], v9); /*0x6f463b*/
  v17 = this; /*0x6f4650*/
  v10 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F6C8] + 16))(&MEMORY[0xB0F6C8], &v17); /*0x6f4654*/
  if ( v10 != -1 ) /*0x6f465a*/
    DynamicVector::RemoveItem(&MEMORY[0xB0F6C8], v10); /*0x6f4662*/
  v11 = *(_DWORD *)(this + 300); /*0x6f4667*/
  if ( v11 ) /*0x6f466f*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 248))(v11); /*0x6f4673*/
    *(_DWORD *)(this + 300) = 0; /*0x6f4679*/
  }
  v12 = *(_DWORD *)(this + 304); /*0x6f467f*/
  if ( v12 ) /*0x6f4687*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 248))(v12); /*0x6f468b*/
    *(_DWORD *)(this + 304) = 0; /*0x6f4691*/
  }
  *(_DWORD *)(this + 1136) = &VectorClass<AbstractClass *>::`vftable'; /*0x6f469d*/
  AbstractClassVector::ddtor(this + 1136); /*0x6f46a3*/
  v13 = *(void **)(this + 1116); /*0x6f46a8*/
  this->currentTargets = &VectorClass<AbstractClass *>::`vftable'; /*0x6f46ae*/
  if ( v13 && *(_BYTE *)(this + 1125) ) /*0x6f46bc*/
  {
    __3_YAXPAX_Z(v13); /*0x6f46c5*/
    this->attackedTargets = 0; /*0x6f46cd*/
  }
  *(_BYTE *)(this + 1125) = 0; /*0x6f46d3*/
  *(_DWORD *)(this + 1120) = 0; /*0x6f46d9*/
  v14 = *(void **)(this + 1092); /*0x6f46df*/
  *(_DWORD *)(this + 1088) = &VectorClass<int>::`vftable'; /*0x6f46e5*/
  if ( v14 && *(_BYTE *)(this + 1101) ) /*0x6f46f3*/
  {
    __3_YAXPAX_Z(v14); /*0x6f46fc*/
    *(_DWORD *)(this + 1092) = 0; /*0x6f4704*/
  }
  *(_BYTE *)(this + 1101) = 0; /*0x6f4710*/
  *(_DWORD *)(this + 1096) = 0; /*0x6f4716*/
  nullsub_69(this + 336); /*0x6f471c*/
  *(_DWORD *)this = &RadioClass::`vftable'; /*0x6f4721*/
  *(_DWORD *)(this + 4) = &RadioClass::`vftable'; /*0x6f4727*/
  *(_DWORD *)(this + 8) = &RadioClass::`vftable'; /*0x6f472e*/
  *(_DWORD *)(this + 12) = &RadioClass::`vftable'; /*0x6f4735*/
  v15 = *(void **)(this + 228); /*0x6f473c*/
  *(_DWORD *)(this + 224) = &VectorClass<TechnoClass *>::`vftable'; /*0x6f4742*/
  if ( v15 && *(_BYTE *)(this + 237) ) /*0x6f4750*/
  {
    __3_YAXPAX_Z(v15); /*0x6f4759*/
    *(_DWORD *)(this + 228) = 0; /*0x6f4761*/
  }
  *(_BYTE *)(this + 237) = 0; /*0x6f4767*/
  *(_DWORD *)(this + 232) = 0; /*0x6f476d*/
  *(_DWORD *)this = &MissionClass::`vftable'; /*0x6f4775*/
  *(_DWORD *)(this + 4) = &MissionClass::`vftable'; /*0x6f477b*/
  *(_DWORD *)(this + 8) = &MissionClass::`vftable'; /*0x6f4782*/
  *(_DWORD *)(this + 12) = &MissionClass::`vftable'; /*0x6f4789*/
  return ObjectClass::Dtor((_DWORD *)this); /*0x6f4795*/
}
}
} // namespace game
} // namespace ra2

// 0x702D40
namespace ra2 {
namespace game {
int TechnoClass::RegisterKill()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TechnoClass::RegisterKill(#377 *this)
{
  int v2; // eax
  int v3; // ebp
  void **v4; // ecx
  void **v5; // ecx
  void **v6; // ecx
  void **v7; // ecx
  void **v8; // ecx
  int result; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // [esp-Ch] [ebp-1Ch]
  int v20; // [esp-Ch] [ebp-1Ch]
  int v21; // [esp-Ch] [ebp-1Ch]
  int v22; // [esp-Ch] [ebp-1Ch]
  int v23; // [esp-8h] [ebp-18h]
  int v24; // [esp-8h] [ebp-18h]
  int v25; // [esp-8h] [ebp-18h]
  int v26; // [esp-8h] [ebp-18h]
  int v27; // [esp+Ch] [ebp-4h]
  int v28; // [esp+14h] [ebp+4h]

  v27 = 0; /*0x702d46*/
  v2 = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this); /*0x702d50*/
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 132))(v2, this->focus); /*0x702d6b*/
  if ( *((_BYTE *)this + 144) ) /*0x702d6d*/
  {
    v4 = (void **)*((_DWORD *)this + 13); /*0x702d77*/
    if ( v4 ) /*0x702d7c*/
    {
      if ( v28 ) /*0x702d80*/
        TeamClass::Update_0(v4, 6, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702d90*/
    }
  }
  if ( *((_BYTE *)this + 144) ) /*0x702d95*/
  {
    v5 = (void **)*((_DWORD *)this + 13); /*0x702da3*/
    if ( v5 && v28 ) /*0x702dac*/
      TeamClass::Update_0(v5, 4, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702dbb*/
    if ( *((_BYTE *)this + 144) /*0x702dd6*/
      && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 44))(this) != 1
      && *((_BYTE *)this + 144) )
    {
      v6 = (void **)*((_DWORD *)this + 13); /*0x702de0*/
      if ( v6 && v28 ) /*0x702de9*/
        TeamClass::Update_0(v6, 7, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702df8*/
      if ( *((_BYTE *)this + 144) ) /*0x702dfd*/
      {
        v7 = (void **)*((_DWORD *)this + 13); /*0x702e07*/
        if ( v7 ) /*0x702e0c*/
          TeamClass::Update_0(v7, 48, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702e1c*/
        if ( *((_BYTE *)this + 144) ) /*0x702e21*/
        {
          v8 = (void **)*((_DWORD *)this + 13); /*0x702e2b*/
          if ( v8 ) /*0x702e30*/
            TeamClass::Update_0(v8, 29, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702e3f*/
        }
      }
    }
  }
  result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this); /*0x702e48*/
  if ( !*(_BYTE *)(result + 3231) )
  {
    if ( v28 )
    {
      if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(v28 + 540), (IUnknown *)this) ) /*0x702e6c*/
      {
        v3 = 0; /*0x702e75*/
      }
      else if ( VeterancyStruct::IsVeteran((float *)this + 84) ) /*0x702e81*/
      {
        v3 *= 2; /*0x702e8a*/
      }
      else if ( VeterancyStruct::IsElite((float *)this + 84) ) /*0x702e90*/
      {
        v3 *= 3; /*0x702e99*/
      }
      if ( *(_BYTE *)(v28 + 130)
        && (v10 = *(_DWORD *)(v28 + 284)) != 0
        && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 132))(v10) + 3214) )
      {
        v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 284) + 132))(*(_DWORD *)(v28 + 284)); /*0x702ecb*/
        v23 = this->focus; /*0x702eda*/
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x702ee9*/
        VeterancyStruct::Accumulate((float *)(*(_DWORD *)(v28 + 284) + 336), v19, v23); /*0x702ef0*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3214) )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28); /*0x702f0d*/
        v24 = this->focus; /*0x702f1c*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 132))(v12); /*0x702f25*/
        VeterancyStruct::Accumulate((float *)(v28 + 336), v20, v24); /*0x702f2c*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3432) )
      {
        v13 = *(_DWORD *)(v28 + 724); /*0x702f45*/
        if ( v13 && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 3214) ) /*0x702f5b*/
        {
          v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 724) + 132))(*(_DWORD *)(v28 + 724)); /*0x702f71*/
          v25 = this->focus; /*0x702f80*/
          v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 132))(v14); /*0x702f8f*/
          VeterancyStruct::Accumulate((float *)(*(_DWORD *)(v28 + 724) + 336), v21, v25); /*0x702f96*/
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 1024))(v28)
             && (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28) == 6 )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28); /*0x702fb6*/
        v16 = *(_DWORD *)(*(_DWORD *)(v15 == 6 ? v28 + 0x688 : 1672) + 4 * *(_DWORD *)(v15 == 6 ? v28 + 0x69C : 1692));
        v26 = this->focus; /*0x702fda*/
        v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 1728) + 132))(*(_DWORD *)(v16 + 1728)); /*0x702fe9*/
        VeterancyStruct::Accumulate((float *)(v16 + 336), v22, v26); /*0x702ff0*/
      }
      *(_DWORD *)(this->focus + 21644) = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 56))(v28); /*0x703003*/
      *(_DWORD *)(*(_DWORD *)(v28 + 540) + 21736) += v3; /*0x70300f*/
    }
    result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 44))(this) - 1; /*0x70301c*/
    switch ( result ) /*0x70302e*/
    {
      case 0: /*0x70302e*/
        goto LABEL_59;
      case 1: /*0x70302e*/
        if ( !v28 ) /*0x7030d5*/
          goto LABEL_63; /*0x7030d5*/
        if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3231) ) /*0x7030e5*/
        {
          HouseClass::IncrementStat( /*0x703108*/
            (_DWORD *)(*(_DWORD *)(v28 + 540) + 9032),
            *(_DWORD *)(*((_DWORD *)this + 433) + 3576));
          v27 = 1; /*0x70310d*/
        }
LABEL_55:
        if ( v28 ) /*0x703117*/
        {
          if ( !v27 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3231) ) /*0x70312f*/
          {
            HouseClass::IncrementStat( /*0x703152*/
              (_DWORD *)(*(_DWORD *)(v28 + 540) + 11088),
              *(_DWORD *)(*((_DWORD *)this + 432) + 3576));
            v27 = 1; /*0x703157*/
          }
LABEL_59:
          if ( v28 && !v27 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3231) ) /*0x703175*/
            HouseClass::IncrementStat( /*0x703198*/
              (_DWORD *)(*(_DWORD *)(v28 + 540) + 13144),
              *(_DWORD *)(*((_DWORD *)this + 433) + 3576));
        }
LABEL_63:
        ++*(_DWORD *)(this->focus + 21556); /*0x70319d*/
        if ( v28 ) /*0x7031b2*/
        {
          if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3231) ) /*0x7031be*/
          {
            v18 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7031d5*/
                           + 4 * (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 56))(this)
                           + 21476);
            ++*v18; /*0x7031dc*/
          }
        }
        result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x7031e3*/
        if ( (_BYTE)result ) /*0x7031ea*/
LABEL_67:
          result = RadarClass::SetFlag(&MEMORY[0x87F7E8], 0); /*0x7031ec*/
        break; /*0x7031f3*/
      case 5: /*0x70302e*/
        result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this); /*0x703039*/
        if ( !*(_BYTE *)(result + 562) ) /*0x70303f*/
        {
          if ( *((_DWORD *)this + 335) != -1 ) /*0x703054*/
            ++*(_DWORD *)(this->focus + 21640); /*0x70305c*/
          if ( v28 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3231) ) /*0x703070*/
          {
            HouseClass::IncrementStat( /*0x703093*/
              (_DWORD *)(*(_DWORD *)(v28 + 540) + 15200),
              *(_DWORD *)(*((_DWORD *)this + 328) + 3576));
            v17 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7030a5*/
                           + 4 * (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 56))(this)
                           + 21560);
            ++*v17; /*0x7030ac*/
          }
          result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x7030b3*/
          if ( (_BYTE)result ) /*0x7030ba*/
            goto LABEL_67; /*0x7030ba*/
        }
        return result; /*0x7030ba*/
      case 14: /*0x70302e*/
        goto LABEL_55;
      default:
        return result;
    }
  }
  return result; /*0x7030cc*/
}
}
} // namespace game
} // namespace ra2

// 0x703CC0
namespace ra2 {
namespace game {
char TechnoClass::ScanAdjacentCells()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_703CC0(_BYTE *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebp
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h] BYREF
  int v16; // [esp+20h] [ebp-4h] BYREF

  v12 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)this + 440))(this, &v16); /*0x703ce4*/
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x703ced*/
  if ( !v2 || *(this + 140) ) /*0x703cf7*/
    return 0; /*0x703cf7*/
  LOWORD(v13) = v12 + MEMORY[0x89F698]; /*0x703d1c*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F698]); /*0x703d21*/
  v14 = v13; /*0x703d2e*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x703d4f*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F688][0]); /*0x703d57*/
  LOWORD(v13) = v12 + LOWORD(MEMORY[0x89F688][0]); /*0x703d5c*/
  v15 = v13; /*0x703d69*/
  v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x703d88*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F690]); /*0x703d91*/
  LOWORD(v13) = v12 + MEMORY[0x89F690]; /*0x703d96*/
  v16 = v13; /*0x703da9*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x703dbc*/
  LOWORD(v13) = v12 + MEMORY[0x89F6A0]; /*0x703dcb*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F6A0]); /*0x703dd4*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x703de7*/
  if ( (v2[80] & 0x400) != 0 ) /*0x703df5*/
    return 1; /*0x703df5*/
  if ( v3 ) /*0x703df9*/
  {
    v7 = v3[80]; /*0x703dfb*/
    if ( (v7 & 0x400) != 0 && (v7 & 0x800) != 0 ) /*0x703e0f*/
      return 1; /*0x703e0f*/
  }
  if ( v6 ) /*0x703e13*/
  {
    v8 = v6[80]; /*0x703e15*/
    if ( (v8 & 0x400) != 0 && (v8 & 0x800) == 0 ) /*0x703e23*/
      return 1; /*0x703e23*/
  }
  if ( v5 ) /*0x703e27*/
  {
    v9 = v5[80]; /*0x703e29*/
    if ( (v9 & 0x400) != 0 && (v9 & 0x800) == 0 ) /*0x703e37*/
      return 1; /*0x703e37*/
  }
  if ( v4 && (v10 = v4[80], (v10 & 0x400) != 0) && (v10 & 0x800) != 0 ) /*0x703e51*/
    return 1; /*0x703e56*/
  else
    return 0; /*0x703e60*/
}
}
} // namespace game
} // namespace ra2

// 0x705860
namespace ra2 {
namespace game {
int TechnoClass::DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TechnoClass::DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int result; // eax
  int *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edx
  int v16; // esi
  int v17; // ebx
  int v18; // esi
  bool v19; // cc
  unsigned __int8 v20; // [esp+30h] [ebp-60h] BYREF
  __int16 v21; // [esp+31h] [ebp-5Fh]
  int v22; // [esp+34h] [ebp-5Ch]
  int v23; // [esp+38h] [ebp-58h]
  int v24; // [esp+3Ch] [ebp-54h]
  int v25; // [esp+40h] [ebp-50h] BYREF
  int v26; // [esp+44h] [ebp-4Ch]
  signed int v27; // [esp+48h] [ebp-48h]
  signed int v28; // [esp+4Ch] [ebp-44h]
  int v29; // [esp+50h] [ebp-40h] BYREF
  int v30; // [esp+54h] [ebp-3Ch]
  int v31; // [esp+58h] [ebp-38h] BYREF
  int v32; // [esp+5Ch] [ebp-34h]
  int v33; // [esp+60h] [ebp-30h] BYREF
  int v34; // [esp+64h] [ebp-2Ch]
  int v35; // [esp+68h] [ebp-28h] BYREF
  int v36; // [esp+6Ch] [ebp-24h]
  int v37; // [esp+70h] [ebp-20h] BYREF
  int v38; // [esp+74h] [ebp-1Ch]
  int v39; // [esp+78h] [ebp-18h] BYREF
  int v40; // [esp+7Ch] [ebp-14h]
  int v41; // [esp+80h] [ebp-10h] BYREF
  int v42; // [esp+84h] [ebp-Ch]
  int v43; // [esp+88h] [ebp-8h]
  int v44; // [esp+8Ch] [ebp-4h]

  Coord::To_Screen(MEMORY[0x887324], &a1, &v41); /*0x705875*/
  Coord::To_Screen(MEMORY[0x887324], &a4, &v31); /*0x70588a*/
  v6 = -32 - ZCoordToScreenY(a3); /*0x7058a4*/
  v7 = -32 - ZCoordToScreenY(a6); /*0x7058b4*/
  v28 = abs32(v31 - v41); /*0x7058c5*/
  v8 = *(_DWORD *)MEMORY[0x887314]; /*0x7058da*/
  v27 = abs32(v32 - v42); /*0x7058dc*/
  result = (*(int (__thiscall **)(int))(v8 + 132))(MEMORY[0x887314]); /*0x7058e0*/
  if ( (_BYTE)result ) /*0x7058e8*/
  {
    v10 = (int *)MEMORY[0x887314]; /*0x7058f0*/
    v11 = Random::Range(MEMORY[0x886B88], 190, 270); /*0x705905*/
    v21 = 0; /*0x70590c*/
    if ( v11 <= 255 ) /*0x70591c*/
    {
      v20 = v11; /*0x705972*/
    }
    else
    {
      v20 = -1; /*0x705925*/
      LOBYTE(v21) = (char)(110 * v11) / 14; /*0x705950*/
      HIBYTE(v21) = (char)(30 * v11) / 14; /*0x70596c*/
    }
    v12 = v32; /*0x705976*/
    v13 = v42; /*0x70597a*/
    if ( v32 < v42 ) /*0x705980*/
    {
      v14 = 255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]; /*0x7059c5*/
      v29 = v31 + 1; /*0x7059cc*/
      v25 = v31 - 2; /*0x7059d0*/
      v26 = v32 + 1; /*0x7059d8*/
      v30 = v32 + 1; /*0x7059dc*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x7059eb*/
      v15 = *v10; /*0x7059f2*/
      v25 = v31 - 2; /*0x7059f9*/
      v29 = v31 + 1; /*0x705a01*/
      v26 = v32; /*0x705a05*/
      v30 = v32; /*0x705a09*/
      (*(void (__thiscall **)(int *, int *, int *, int))(v15 + 48))(v10, &v25, &v29, v14); /*0x705a19*/
      v26 = v32 - 1; /*0x705a2e*/
      v30 = v32 + 2; /*0x705a32*/
      v25 = v31 - 1; /*0x705a3a*/
      v29 = v31 - 1; /*0x705a3e*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a4c*/
      v25 = v31; /*0x705a58*/
      v30 = v32 + 2; /*0x705a62*/
      v26 = v32 - 1; /*0x705a66*/
      v29 = v31; /*0x705a72*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a7c*/
      v13 = v42; /*0x705a7f*/
      v12 = v32; /*0x705a83*/
    }
    v16 = v41; /*0x705a8b*/
    v44 = v12 - v13; /*0x705a95*/
    v43 = v31 - v41; /*0x705a9b*/
    v29 = v7 - v6; /*0x705a9f*/
    v24 = v7 - v6; /*0x705aa3*/
    v17 = 100; /*0x705aab*/
    v35 = v41; /*0x705ab0*/
    v36 = v13; /*0x705ab4*/
    v23 = v12 - v13; /*0x705ab8*/
    v22 = v31 - v41; /*0x705abc*/
    v25 = 0; /*0x705ac0*/
    while ( 1 ) /*0x705ae1*/
    {
      v33 = v16 + v22 / 4; /*0x705ae1*/
      v34 = v13 + v23 / 4; /*0x705af8*/
      v18 = v6 + v24 / 4; /*0x705b15*/
      AudioStream::DrawWaveform(v10, &MEMORY[0x886FA0], &v35, &v33, &v20, v25 / 4 + 255, v6, v18); /*0x705b34*/
      if ( v28 <= v27 ) /*0x705b43*/
      {
        v39 = v35 + 1; /*0x705bc8*/
        v40 = v36; /*0x705bd1*/
        v37 = v33 + 1; /*0x705bd6*/
        v38 = v34; /*0x705bdf*/
        AudioStream::DrawWaveform(v10, &MEMORY[0x886FA0], &v39, &v37, &v20, v17, v6, v18); /*0x705bf6*/
        v39 = v35 - 1; /*0x705c08*/
        v40 = v36; /*0x705c11*/
        v37 = v33 - 1; /*0x705c16*/
        v38 = v34; /*0x705c1f*/
      }
      else
      {
        v39 = v35; /*0x705b51*/
        v40 = v36 + 1; /*0x705b5a*/
        v37 = v33; /*0x705b60*/
        v38 = v34 + 1; /*0x705b69*/
        AudioStream::DrawWaveform(v10, &MEMORY[0x886FA0], &v39, &v37, &v20, v17, v6, v18); /*0x705b80*/
        v39 = v35; /*0x705b91*/
        v40 = v36 - 1; /*0x705b9a*/
        v37 = v33; /*0x705ba0*/
        v38 = v34 - 1; /*0x705ba9*/
      }
      AudioStream::DrawWaveform(v10, &MEMORY[0x886FA0], &v39, &v37, &v20, v17, v6, v18); /*0x705bb9*/
      v35 = v33; /*0x705c47*/
      v36 = v34; /*0x705c4f*/
      v6 = v18; /*0x705c57*/
      v22 += v43; /*0x705c65*/
      v23 += v44; /*0x705c6d*/
      result = v25 - 255; /*0x705c75*/
      v17 -= 25; /*0x705c7a*/
      v19 = v25 - 255 < -765; /*0x705c7f*/
      v24 += v29; /*0x705c84*/
      v25 -= 255; /*0x705c88*/
      if ( v19 ) /*0x705c8c*/
        break; /*0x705c8c*/
      v13 = v42; /*0x705aca*/
      v16 = v41; /*0x705ace*/
    }
  }
  return result; /*0x705c94*/
}
}
} // namespace game
} // namespace ra2

// 0x709A20
namespace ra2 {
namespace game {
int TechnoClass::COMStub_Return0_287()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TechnoClass::COMStub_Return0_287(#377 *this)
{
  int result; // eax

  return result; /*0x709a20*/
}
}
} // namespace game
} // namespace ra2

// 0x70D0D0
namespace ra2 {
namespace game {
bool TechnoClass::HasVoiceResponse(int weaponIndex)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall TechnoTypeClass::HasVoiceResponse(TechnoClass *this, int weaponIndex)
{
  HouseClass *v3; // edi
  int v4; // esi

  v3 = (HouseClass *)&this->initialOwner; /*0x70d0d5*/
  if ( !VeterancyStruct::IsVeteran((float *)&this->initialOwner) && !VeterancyStruct::IsElite((float *)v3->__pad_0) ) /*0x70d0e8*/
    return 0; /*0x70d0e8*/
  v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 132))(this); /*0x70d0fd*/
  if ( VeterancyStruct::IsVeteran((float *)v3->__pad_0) && *(_BYTE *)(v4 + weaponIndex + 668) ) /*0x70d10c*/
    return 1; /*0x70d11c*/
  return VeterancyStruct::IsElite((float *)v3->__pad_0) /*0x70d142*/
      && (*(_BYTE *)(v4 + weaponIndex + 668) || *(_BYTE *)(v4 + weaponIndex + 686));
}
}
} // namespace game
} // namespace ra2

// 0x70F020
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse5()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingClass::_vt299(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f020*/
  return result; /*0x70f022*/
}
}
} // namespace game
} // namespace ra2

// 0x70F030
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse6()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingClass::_vt300(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f030*/
  return result; /*0x70f032*/
}
}
} // namespace game
} // namespace ra2

// 0x70F040
namespace ra2 {
namespace game {
int TechnoClass::checkMovementRestrictions()
{
return -1;
}
} // namespace game
} // namespace ra2

// 0x70F0E0
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse7()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingClass::_vt305(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0e0*/
  return result; /*0x70f0e2*/
}
}
} // namespace game
} // namespace ra2

// 0x70F0F0
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse8()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingClass::_vt306(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0f0*/
  return result; /*0x70f0f2*/
}
}
} // namespace game
} // namespace ra2

// 0x70F110
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse9()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingClass::_vt308(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f110*/
  return result; /*0x70f112*/
}
}
} // namespace game
} // namespace ra2

// 0x731CF0
namespace ra2 {
namespace game {
void TechnoClass::GetField()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void TechnoClass::GetField()
{
  MEMORY[0xB0FE58] = 0; /*0x731cf0*/
}
}
} // namespace game
} // namespace ra2

// 0x73B140
namespace gamemd {
int TechnoClass_RenderTechnoSHP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char TechnoClass::RenderTechnoSHP(
        int *a0,
        int *a1,
        int *a2,
        HouseClass *aP3,
        HouseClass *aP4,
        int a6,
        int a7,
        TechnoClass *aP7,
        TechnoClass *aP8,
        int a10,
        int a11)
{
  TechnoClass *v11; // ecx
  TechnoClass *v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  char v15; // bl
  HouseClass *Array; // edi
  int v17; // edi
  XSurface *SHPFrame; // edi
  XSurface *v18; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v26; // eax
  int eax26a; // eax
  TechnoClass *v27; // [esp-Ch] [ebp-58h]
  TechnoClass *v28; // [esp-Ch] [ebp-58h]
  XSurface *v30; // [esp-8h] [ebp-54h]
  TechnoClass *v31; // [esp-8h] [ebp-54h]
  AbstractClass *_FFFFFFFC; // [esp-4h] [ebp-50h]
  AbstractClass *v32; // [esp-4h] [ebp-50h]
  AbstractClass *v34; // [esp+0h] [ebp-4Ch]
  int v35; // [esp+4h] [ebp-48h]
  int v36; // [esp+14h] [ebp-38h]
  int v37; // [esp+14h] [ebp-38h]
  int v38; // [esp+18h] [ebp-34h] BYREF
  int v39; // [esp+1Ch] [ebp-30h] BYREF
  XSurface aP6; // [esp+20h] [ebp-2Ch] BYREF
  XSurface v41; // [esp+30h] [ebp-1Ch] BYREF
  _BYTE v42[12]; // [esp+40h] [ebp-Ch] BYREF

  v12 = v11; /*0x73b146*/
  v13 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(*(_DWORD *)v11->__pad_0 + 72))(v11, &v39); /*0x73b152*/
  LOWORD(v36) = *v13 / 256; /*0x73b165*/
  HIWORD(v36) = v13[1] / 256; /*0x73b17e*/
  v38 = v36; /*0x73b18b*/
  v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38); /*0x73b190*/
  if ( CellClass::QuickPassable(v14) ) /*0x73b197*/
    aP8 = 0; /*0x73b1a0*/
  v15 = 0; /*0x73b1ae*/
  if ( *(_BYTE *)(v12[1].ironTintTimer[2] + 3606) ) /*0x73b1b0*/
  {
    if ( TechnoClass::CheckTargetCell(v12) && !TechnoClass::ScanNeighborCells(v12) /*0x73b1fb*/
      || (Array = (HouseClass *)Array::Get(v12, 0), *(_DWORD *)&v12[1].hasParachute)
      && Array
      && (*(int (__thiscall **)(HouseClass *))(*(_DWORD *)Array->__pad_0 + 44))(Array) == 6
      && *(_BYTE *)(Array->builtInfantryTypes[126] + 5821) )
    {
      v15 = 1; /*0x73b205*/
    }
  }
  v37 = 0; /*0x73b20f*/
  v17 = 10240; /*0x73b217*/
  switch ( (*(int (__thiscall **)(TechnoClass *, _DWORD, _DWORD))(*(_DWORD *)v12->__pad_0 + 104))(v12, 0, 0) ) /*0x73b225*/
  {
    case 1: /*0x73b225*/
      v17 = 10242; /*0x73b22c*/
      break; /*0x73b231*/
    case 2: /*0x73b225*/
    case 3: /*0x73b225*/
      v17 = 10244; /*0x73b233*/
      break; /*0x73b238*/
    case 4: /*0x73b225*/
      v17 = 10250; /*0x73b240*/
      if ( v12->cloakState ) /*0x73b23a*/
        v17 = 10252; /*0x73b249*/
      v37 = TechnoClass::CalcOffsetFacing((int)v12); /*0x73b255*/
      break; /*0x73b255*/
    default:
      break;
  }
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 468))(v12) /*0x73b26b*/
    || (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 472))(v12) )
  {
    v17 |= 4u; /*0x73b275*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v12->focus) /*0x73b28b*/
    && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 196))(v12) )
  {
    v17 = (*(int (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v12->__pad_0 + 1084))(v12, v17); /*0x73b2a0*/
  }
  SHPFrame = (XSurface *)BuildingClass::GetSHPFrame( /*0x73b2d3*/
                           *(_DWORD **)(*(_DWORD *)(stru_B05488.field_4C + 4 * *((_DWORD *)v12->focus + 22549)) + 780),
                           (ConvertClass *)v17);
  aP6.LockCount = (int)a1 + *(_DWORD *)::aP6.__pad_0 - 128; /*0x73b2dd*/
  *(_DWORD *)v41.__pad_0 = (char *)a2 + ::aP6.Width - 128; /*0x73b2eb*/
  v41.Width = ::aP6.Height; /*0x73b2f6*/
  v41.Height = ::aP6.LockCount; /*0x73b2fa*/
  if ( v15 && ::aP6.LockCount > 16 ) /*0x73b307*/
  {
    v18 = (XSurface *)aP7; /*0x73b30d*/
    v39 = *(_DWORD *)::aP6.__pad_0; /*0x73b311*/
    aP6.Width = ::aP6.Height; /*0x73b319*/
    v41.Height = ::aP6.LockCount - 16; /*0x73b329*/
    aP6.Height = ::aP6.LockCount - 16; /*0x73b32d*/
    v20 = *(_DWORD *)v12->__pad_0; /*0x73b331*/
    _FFFFFFFC = (AbstractClass *)aP8; /*0x73b333*/
    *(_DWORD *)aP6.__pad_0 = ::aP6.Width; /*0x73b339*/
    v30 = (XSurface *)((*(int (__thiscall **)(TechnoClass *, _DWORD, TechnoClass *))(v20 + 748))(v12, 0, aP7) - 5); /*0x73b34a*/
    v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x73b35a*/
    BlitterCopySHP( /*0x73b377*/
      (XSurface *)a1,
      (XSurface *)&aP4,
      &v41,
      *(XSurface **)&stru_87C374.__pad_579C[22532],
      v21,
      (XSurface *)&v42[4],
      (XSurface *)&aP6.Width,
      SHPFrame,
      v30,
      (int)_FFFFFFFC,
      v37,
      v35);
    v22 = v41.LockCount + v41.Width; /*0x73b388*/
    v23 = v41.LockCount + aP6.Width; /*0x73b38a*/
    v41.LockCount = 16; /*0x73b391*/
    aP6.LockCount = 16; /*0x73b395*/
    v41.Width = v22; /*0x73b39d*/
    aP6.Width = v23; /*0x73b3a6*/
    v34 = (AbstractClass *)a10; /*0x73b3ac*/
    v27 = (TechnoClass *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 748))(v12); /*0x73b3be*/
    v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x73b3cc*/
    return BlitterCopySHP( /*0x73b3e5*/
             (XSurface *)a1,
             (XSurface *)&aP3,
             (XSurface *)&aP6.LockCount,
             *(XSurface **)&stru_87C374.__pad_579C[22532],
             v24,
             (XSurface *)v42,
             &aP6,
             SHPFrame,
             (XSurface *)v27,
             2,
             (int)v18,
             (int)v34);
  }
  else
  {
    v32 = (AbstractClass *)aP8; /*0x73b403*/
    v31 = aP7; /*0x73b404*/
    v26 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 752))(v12); /*0x73b407*/
    v28 = (TechnoClass *)(*(int (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v12->__pad_0 + 748))(v12, v26); /*0x73b41e*/
    eax26a = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x73b42c*/
    return BlitterCopySHP( /*0x73b446*/
             (XSurface *)a0,
             (XSurface *)&aP3,
             (XSurface *)&aP6.LockCount,
             *(XSurface **)&stru_87C374.__pad_579C[22532],
             eax26a,
             (XSurface *)v42,
             &::aP6,
             SHPFrame,
             (XSurface *)v28,
             (int)v31,
             (int)v32,
             v37);
  }
}
}
} // namespace gamemd

// 0x73B470
namespace gamemd {
int TechnoClass_DrawVoxel()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __userpurge TechnoClass::DrawVoxel@<eax>(
//         _DWORD *ecx0@<ecx>,
//         __int64 a2,
//         int a3,
//         int a4,
//         int a5,
//         int a6,
//         BuildingTypeClass *started,
//         int a8,
//         int a9)
// {
//   int v10; // ebx
//   int v11; // edx
//   int v12; // ecx
//   int *v13; // eax
//   int v14; // edx
//   const void *v15; // eax
//   ObjectClass *v16; // eax
//   int v17; // esi
//   int v18; // edi
//   float *v19; // eax
//   int v20; // edi
//   float *inited; // eax
//   TechnoClass *v22; // esi
//   unsigned int v23; // esi
//   double v24; // st7
//   int v25; // edi
//   float *v26; // eax
//   float *v27; // eax
//   int v28; // eax
//   int v29; // ecx
//   size_t v30; // eax
//   size_t v31; // eax
//   bool v32; // al
//   ParticleSystemClass *v33; // esi
//   float *v34; // eax
//   float *v35; // eax
//   ObjectClass *v36; // esi
//   TechnoClass *v37; // edi
//   BuildingTypeClass *v38; // edi
//   TechnoClass *v39; // esi
//   __int16 v40; // ax
//   int v41; // edi
//   int *v42; // eax
//   BuildingTypeClass *v43; // eax
//   int v44; // ed... [29060 chars total]
// end truncated pseudocode
}
} // namespace gamemd
