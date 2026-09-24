// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x41A9E0
namespace gamemd {
void TechnoClass_CanFireAtTarget()
{
  int result; // eax
  int v7; // edi

  result = TriggerTypeClass::ReadINI((_DWORD *)a1, a2, a3, a4, a5); /*0x41a9f6*/
  if ( !result ) /*0x41a9fd*/
  {
    if ( !*(_BYTE *)(a1 + 1737) || *(_DWORD *)(a1 + 280) ) /*0x41aa09*/
    {
      v7 = *ProgressTimer::GetValue((_WORD *)(a1 + 928), &a5); /*0x41aa2e*/
      if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a1 + 1728) + 28))(a1 + 1728) /*0x41aa6a*/
        || abs16(v7 - *(_WORD *)ObjectClass::CalcTargetFacing((void *)a1, (int *)&a5, (int)a3)) <= 0x800u )
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
// 0x6F2B40
namespace ra2 {
namespace game {
unsigned int * TechnoClass::TechnoClass(AbstractClass * aP1)
{
  wchar_t *v3; // eax
  wchar_t *v4; // edx
  wchar_t *v5; // ecx
  wchar_t *v6; // ecx
  wchar_t *v7; // edx
  wchar_t *v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax

  RadioClass::Release(); /*0x6f2b46*/
  *(this + 60) = 0; /*0x6f2b52*/
  *((_BYTE *)this + 244) = 0; /*0x6f2b58*/
  *(this + 62) = 0; /*0x6f2b5e*/
  *((_BYTE *)this + 252) = 0; /*0x6f2b64*/
  v3 = g_CurrentFrame; /*0x6f2b6a*/
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
  *(this + 90) = g_CurrentFrame; /*0x6f2c10*/
  *(this + 92) = 0; /*0x6f2c16*/
  v4 = g_CurrentFrame; /*0x6f2c1c*/
  *(this + 95) = 0; /*0x6f2c22*/
  *(this + 93) = v4; /*0x6f2c28*/
  *(this + 96) = g_CurrentFrame; /*0x6f2c33*/
  *(this + 98) = 45; /*0x6f2c39*/
  v5 = g_CurrentFrame; /*0x6f2c43*/
  *(this + 101) = 0; /*0x6f2c49*/
  *(this + 99) = v5; /*0x6f2c4f*/
  *(this + 102) = g_CurrentFrame; /*0x6f2c5b*/
  *(this + 104) = 0; /*0x6f2c61*/
  *(this + 105) = 10; /*0x6f2c67*/
  *(this + 106) = g_CurrentFrame; /*0x6f2c76*/
  *(this + 108) = 0; /*0x6f2c7c*/
  v6 = g_CurrentFrame; /*0x6f2c82*/
  *(this + 111) = 0; /*0x6f2c88*/
  *(this + 109) = v6; /*0x6f2c8e*/
  *(this + 113) = 0; /*0x6f2c94*/
  *((_BYTE *)this + 456) = 0; /*0x6f2c9a*/
  *(this + 115) = 0; /*0x6f2ca0*/
  *(this + 116) = 0; /*0x6f2ca6*/
  *(this + 117) = 0; /*0x6f2cac*/
  *((_BYTE *)this + 472) = 0; /*0x6f2cb2*/
  *(this + 119) = 0; /*0x6f2cb8*/
  v7 = g_CurrentFrame; /*0x6f2cbe*/
  *(this + 122) = 0; /*0x6f2cc4*/
  *(this + 120) = v7; /*0x6f2cca*/
  *(this + 123) = g_CurrentFrame; /*0x6f2cd5*/
  *(this + 125) = 0; /*0x6f2cdb*/
  *((_BYTE *)this + 504) = 0; /*0x6f2ce1*/
  *(this + 127) = g_CurrentFrame; /*0x6f2ced*/
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
  *(this + 139) = g_CurrentFrame; /*0x6f2d38*/
  *(this + 141) = 0; /*0x6f2d3e*/
  *(this + 142) = 0; /*0x6f2d44*/
  *(this + 143) = 1; /*0x6f2d4a*/
  v8 = g_CurrentFrame; /*0x6f2d50*/
  *(this + 146) = 0; /*0x6f2d56*/
  *(this + 144) = v8; /*0x6f2d5c*/
  *(this + 147) = 0; /*0x6f2d62*/
  *((_BYTE *)this + 592) = 0; /*0x6f2d68*/
  *(this + 149) = g_TechnoClassPool; /*0x6f2d79*/
  *(this + 150) = dword_B0EA94; /*0x6f2d85*/
  *(this + 151) = dword_B0EA98; /*0x6f2d93*/
  *(this + 152) = 0; /*0x6f2d96*/
  *(this + 153) = 0; /*0x6f2d9c*/
  *((_BYTE *)this + 616) = 0; /*0x6f2da2*/
  *((_BYTE *)this + 617) = 0; /*0x6f2da8*/
  *(this + 155) = 0; /*0x6f2dae*/
  *((_BYTE *)this + 624) = 0; /*0x6f2db4*/
  *((_BYTE *)this + 625) = 0; /*0x6f2dba*/
  *((_BYTE *)this + 626) = 0; /*0x6f2dc0*/
  *(this + 157) = 0; /*0x6f2dc6*/
  *(this + 158) = 0; /*0x6f2dcc*/
  *((_BYTE *)this + 636) = 0; /*0x6f2dd2*/
  *(this + 160) = 0; /*0x6f2dd8*/
  *(this + 161) = 0; /*0x6f2dde*/
  *(this + 162) = g_TechnoClassPool; /*0x6f2dea*/
  *(this + 163) = dword_B0EA94; /*0x6f2df1*/
  v9 = dword_B0EA98; /*0x6f2df4*/
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
  *(this + 187) = g_CurrentFrame; /*0x6f2e86*/
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
  TechnoClass::checkCloakState(this + 212); /*0x6f2ed9*/
  FrameSnapshot::InitMax(3); /*0x6f2ee6*/
  FrameSnapshot::Init(this + 226); /*0x6f2ef1*/
  FrameSnapshot::Init(this + 232); /*0x6f2efc*/
  *(this + 238) = 0; /*0x6f2f01*/
  *(this + 239) = g_CurrentFrame; /*0x6f2f0d*/
  *(this + 241) = 0; /*0x6f2f13*/
  *((_WORD *)this + 485) = 0; /*0x6f2f1e*/
  *((_BYTE *)this + 972) = 0; /*0x6f2f25*/
  *((_BYTE *)this + 973) = 0; /*0x6f2f2b*/
  *((_BYTE *)this + 974) = 0; /*0x6f2f31*/
  *((_BYTE *)this + 975) = 0; /*0x6f2f37*/
  *((_BYTE *)this + 976) = 0; /*0x6f2f3d*/
  *((_BYTE *)this + 977) = 0; /*0x6f2f43*/
  *((_BYTE *)this + 978) = 0; /*0x6f2f49*/
  *((_BYTE *)this + 979) = 0; /*0x6f2f4f*/
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
  *((_BYTE *)this + 1080) = 0; /*0x6f302f*/
  *((_BYTE *)this + 1081) = 0; /*0x6f3035*/
  *((_BYTE *)this + 1082) = 0; /*0x6f303b*/
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
  *((_BYTE *)this + 1236) = 0; /*0x6f30ee*/
  *(this + 310) = 0; /*0x6f30f4*/
  *((_BYTE *)this + 1272) = 0; /*0x6f30fa*/
  *(this + 319) = g_CurrentFrame; /*0x6f3106*/
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
  if ( g_SidebarState < dword_A8EC80 /*0x6f31b6*/
    || (byte_A8EC85 || !dword_A8EC80)
    && dword_A8EC8C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(TechnoClass_Array + 8))(
         &TechnoClass_Array,
         dword_A8EC8C + dword_A8EC80,
         0) )
  {
    v10 = g_SidebarState++; /*0x6f31c3*/
    *((_DWORD *)g_TechnoClass_Count + v10) = this; /*0x6f31d2*/
  }
  if ( dword_B0F6D8 < dword_B0F6D0 /*0x6f3209*/
    || (byte_B0F6D5 || !dword_B0F6D0)
    && dword_B0F6DC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F6C8 + 8))(
         &dword_B0F6C8,
         dword_B0F6DC + dword_B0F6D0,
         0) )
  {
    v11 = dword_B0F6D8++; /*0x6f3216*/
    *((_DWORD *)dword_B0F6CC + v11) = this; /*0x6f3225*/
  }
  *((_BYTE *)this + 20) |= 1u; /*0x6f3237*/
  *(this + 83) = aP1; /*0x6f3241*/
  memset(this + 193, 0, 0x20u); /*0x6f3247*/
  *((_WORD *)this + 484) = Random::State((char *)g_ScenarioClass_Instance + 536); /*0x6f3259*/
  return this; /*0x6f3262*/
}
} // namespace ra2
}

// 0x6F3F40
namespace ra2 {
namespace game {
unsigned int * TechnoClass::Update(BuildingClass * aP0, FootClass * aP1)
{
  int v3; // eax
  _DWORD *result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // [esp-Ch] [ebp-10h]
  int v24; // [esp-Ch] [ebp-10h]
  int v25; // [esp-8h] [ebp-Ch]
  int v26; // [esp-8h] [ebp-Ch]
  int v27; // [esp-4h] [ebp-8h]
  int v28; // [esp-4h] [ebp-8h]

  v3 = *(_DWORD *)(a1 + 540); /*0x6f3f43*/
  if ( v3 ) /*0x6f3f4b*/
    *(_BYTE *)(a1 + 1050) = HouseClass_Player == v3; /*0x6f3f55*/
  result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x6f3f69*/
  if ( result ) /*0x6f3f71*/
  {
    if ( !*(_DWORD *)(a1 + 1300) ) /*0x6f3f77*/
      TechnoClass::CreatePlanningNode(a1); /*0x6f3f83*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 132))(a1, a2) + 3416) ) /*0x6f3f93*/
    {
      if ( __2_YAPAXI_Z(0x74u) ) /*0x6f3f9f*/
      {
        v27 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3428); /*0x6f3fbf*/
        v25 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3424); /*0x6f3fd0*/
        v23 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3420); /*0x6f3fe1*/
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x6f3fe4*/
        v6 = SpawnManagerClass::SpawnManagerClass(a1, *(_DWORD *)(v5 + 3416), v23, v25, v27); /*0x6f3ff4*/
      }
      else
      {
        v6 = 0; /*0x6f3ffb*/
      }
      *(_DWORD *)(a1 + 720) = v6; /*0x6f3ffd*/
    }
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3392) ) /*0x6f400d*/
    {
      if ( __2_YAPAXI_Z(0x64u) ) /*0x6f4019*/
      {
        v28 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3404); /*0x6f4039*/
        v26 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3400); /*0x6f404a*/
        v24 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3396); /*0x6f405b*/
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x6f405e*/
        v8 = SlaveManagerClass::ctor(a1, *(_DWORD *)(v7 + 3392), v24, v26, v28); /*0x6f406e*/
      }
      else
      {
        v8 = 0; /*0x6f4075*/
      }
      *(_DWORD *)(a1 + 728) = v8; /*0x6f4077*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) /*0x6f40a2*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) + 172)
                  + 341) )
    {
      if ( __2_YAPAXI_Z(0x50u) ) /*0x6f40ae*/
      {
        LOBYTE(v9) = *(_BYTE *)(*(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1016))(a1) + 320); /*0x6f40cc*/
        v10 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1016))(a1, 0, v9); /*0x6f40d7*/
        v11 = CaptureManagerClass::CaptureManagerClass(a1, *(_DWORD *)(*(_DWORD *)v10 + 164), 0); /*0x6f40e9*/
      }
      else
      {
        v11 = 0; /*0x6f40f0*/
      }
      *(_DWORD *)(a1 + 700) = v11; /*0x6f40f2*/
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) != 6 /*0x6f412a*/
      && *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0)
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) + 172)
                  + 345) )
    {
      if ( __2_YAPAXI_Z(0x58u) ) /*0x6f4136*/
        v12 = ParasiteClass::ParasiteClass(a1); /*0x6f4145*/
      else
        v12 = 0; /*0x6f414c*/
      *(_DWORD *)(a1 + 1692) = v12; /*0x6f414e*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) /*0x6f4179*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) + 172)
                  + 346) )
    {
      v13 = __2_YAPAXI_Z(0x50u); /*0x6f4185*/
      if ( v13 ) /*0x6f418f*/
        v14 = TemporalClass::TemporalClass(v13, a1); /*0x6f4194*/
      else
        v14 = 0; /*0x6f419b*/
      v15 = *(_DWORD *)a1; /*0x6f419d*/
      *(_DWORD *)(a1 + 628) = v14; /*0x6f41a3*/
      *(_DWORD *)(*(_DWORD *)(a1 + 628) + 76) = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(v15 + 1016))( /*0x6f41bd*/
                                                                         a1,
                                                                         0)
                                                          + 164);
    }
    if ( *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1564) > 0 ) /*0x6f41d2*/
    {
      if ( __2_YAPAXI_Z(0x60u) ) /*0x6f41d6*/
        v16 = AirstrikeClass::AirstrikeClass(a1); /*0x6f41e5*/
      else
        v16 = 0; /*0x6f41ec*/
      *(_DWORD *)(a1 + 660) = v16; /*0x6f41ee*/
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3375) /*0x6f4212*/
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3376) )
    {
      v17 = *(_DWORD *)(a1 + 540); /*0x6f421c*/
      *(_BYTE *)(a1 + 472) = 1; /*0x6f4222*/
      *(_DWORD *)(a1 + 1308) = v17; /*0x6f4229*/
      v18 = *(_DWORD *)(v17 + 488); /*0x6f422f*/
      if ( v18 ) /*0x6f4237*/
      {
        if ( v18 == 1 ) /*0x6f4250*/
          *(_DWORD *)(a1 + 1304) = *((_DWORD *)g_RulesClass_Instance + 855); /*0x6f425d*/
        else
          *(_DWORD *)(a1 + 1304) = *((_DWORD *)g_RulesClass_Instance + 856); /*0x6f4271*/
      }
      else
      {
        *(_DWORD *)(a1 + 1304) = *((_DWORD *)g_RulesClass_Instance + 854); /*0x6f4245*/
      }
    }
    v19 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x6f427b*/
    v20 = v19[809]; /*0x6f4281*/
    v19 += 809; /*0x6f4287*/
    *(_DWORD *)(a1 + 984) = v20; /*0x6f428c*/
    *(_DWORD *)(a1 + 988) = v19[1]; /*0x6f4295*/
    *(_DWORD *)(a1 + 992) = v19[2]; /*0x6f429e*/
    *(_DWORD *)(a1 + 996) = v19[3]; /*0x6f42a7*/
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x6f42b1*/
    v22 = *(_DWORD *)(v21 + 3256); /*0x6f42b7*/
    result = (_DWORD *)(v21 + 3256); /*0x6f42bd*/
    *(_DWORD *)(a1 + 1016) = v22; /*0x6f42c2*/
    *(_DWORD *)(a1 + 1020) = result[1]; /*0x6f42cb*/
    *(_DWORD *)(a1 + 1024) = result[2]; /*0x6f42d4*/
    *(_DWORD *)(a1 + 1028) = result[3]; /*0x6f42dd*/
    *(_DWORD *)(a1 + 1180) = 1; /*0x6f42e3*/
    *(_DWORD *)(a1 + 1184) = 0; /*0x6f42ed*/
  }
  return result; /*0x6f42f7*/
}
} // namespace ra2
}

// 0x6F4500
namespace ra2 {
namespace game {
int TechnoClass::DTOR()
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
    *(_DWORD *)(this + 1300) = 0; /*0x6f4531*/
  }
  v3 = *(_DWORD *)(this + 700); /*0x6f4537*/
  if ( v3 ) /*0x6f453f*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 32))(v3, 1); /*0x6f4545*/
    *(_DWORD *)(this + 700) = 0; /*0x6f4548*/
  }
  v4 = *(_DWORD *)(this + 720); /*0x6f454e*/
  if ( v4 ) /*0x6f4556*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x6f455c*/
    *(_DWORD *)(this + 720) = 0; /*0x6f455f*/
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
    *(_DWORD *)(this + 660) = 0; /*0x6f45be*/
  }
  AudioFile::Stop((_DWORD *)(this + 1160)); /*0x6f45cd*/
  AudioFileClass::Release((_DWORD *)(this + 1160)); /*0x6f45d4*/
  AudioFile::Stop((_DWORD *)(this + 1188)); /*0x6f45e1*/
  AudioFileClass::Release((_DWORD *)(this + 1188)); /*0x6f45e8*/
  AudioFile::Stop((_DWORD *)(this + 1216)); /*0x6f45f5*/
  AudioFileClass::Release((_DWORD *)(this + 1216)); /*0x6f45fc*/
  AudioFileClass::Release((_DWORD *)(this + 1244)); /*0x6f4607*/
  *(_DWORD *)(this + 540) = 0; /*0x6f4610*/
  *(_BYTE *)(this + 1050) = 0; /*0x6f4616*/
  v17 = this; /*0x6f4628*/
  v9 = ((int (__thiscall *)(TechnoClass **, int *))TechnoClass_Array->parent_gap[4])(&TechnoClass_Array, &v17); /*0x6f462c*/
  if ( v9 != -1 ) /*0x6f4633*/
    FactoryClass::RemoveItem(&TechnoClass_Array, v9); /*0x6f463b*/
  v17 = this; /*0x6f4650*/
  v10 = (*(int (__thiscall **)(int *, int *))(dword_B0F6C8 + 16))(&dword_B0F6C8, &v17); /*0x6f4654*/
  if ( v10 != -1 ) /*0x6f465a*/
    DynamicVector::RemoveItem(&dword_B0F6C8, v10); /*0x6f4662*/
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
  *(_DWORD *)(this + 1112) = &VectorClass<AbstractClass *>::`vftable'; /*0x6f46ae*/
  if ( v13 && *(_BYTE *)(this + 1125) ) /*0x6f46bc*/
  {
    __3_YAXPAX_Z(v13); /*0x6f46c5*/
    *(_DWORD *)(this + 1116) = 0; /*0x6f46cd*/
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
} // namespace game
} // namespace ra2

// 0x702D40
namespace ra2 {
namespace game {
Coord * * TechnoClass::RegisterKill()
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
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 132))(v2, *((_DWORD *)this + 135)); /*0x702d6b*/
  if ( *((_BYTE *)this + 144) ) /*0x702d6d*/
  {
    v4 = (void **)*((_DWORD *)this + 13); /*0x702d77*/
    if ( v4 ) /*0x702d7c*/
    {
      if ( v28 ) /*0x702d80*/
        TeamClass::Update_0(v4, 6, (int)this, g_TechnoHouseState, 0, 0); /*0x702d90*/
    }
  }
  if ( *((_BYTE *)this + 144) ) /*0x702d95*/
  {
    v5 = (void **)*((_DWORD *)this + 13); /*0x702da3*/
    if ( v5 && v28 ) /*0x702dac*/
      TeamClass::Update_0(v5, 4, (int)this, g_TechnoHouseState, 0, 0); /*0x702dbb*/
    if ( *((_BYTE *)this + 144) /*0x702dd6*/
      && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 44))(this) != 1
      && *((_BYTE *)this + 144) )
    {
      v6 = (void **)*((_DWORD *)this + 13); /*0x702de0*/
      if ( v6 && v28 ) /*0x702de9*/
        TeamClass::Update_0(v6, 7, (int)this, g_TechnoHouseState, 0, 0); /*0x702df8*/
      if ( *((_BYTE *)this + 144) ) /*0x702dfd*/
      {
        v7 = (void **)*((_DWORD *)this + 13); /*0x702e07*/
        if ( v7 ) /*0x702e0c*/
          TeamClass::Update_0(v7, 48, (int)this, g_TechnoHouseState, 0, 0); /*0x702e1c*/
        if ( *((_BYTE *)this + 144) ) /*0x702e21*/
        {
          v8 = (void **)*((_DWORD *)this + 13); /*0x702e2b*/
          if ( v8 ) /*0x702e30*/
            TeamClass::Update_0(v8, 29, (int)this, g_TechnoHouseState, 0, 0); /*0x702e3f*/
        }
      }
    }
  }
  result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this); /*0x702e48*/
  if ( !*(_BYTE *)(result + 3231) )
  {
    if ( v28 )
    {
      if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(v28 + 540), (int)this) ) /*0x702e6c*/
      {
        v3 = 0; /*0x702e75*/
      }
      else if ( Audio::IsMediumVolume((float *)this + 84) ) /*0x702e81*/
      {
        v3 *= 2; /*0x702e8a*/
      }
      else if ( Audio::IsLoud((float *)this + 84) ) /*0x702e90*/
      {
        v3 *= 3; /*0x702e99*/
      }
      if ( *(_BYTE *)(v28 + 130)
        && (v10 = *(_DWORD *)(v28 + 284)) != 0
        && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 132))(v10) + 3214) )
      {
        v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 284) + 132))(*(_DWORD *)(v28 + 284)); /*0x702ecb*/
        v23 = *((_DWORD *)this + 135); /*0x702eda*/
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x702ee9*/
        HouseClass::AccumulateScore((float *)(*(_DWORD *)(v28 + 284) + 336), v19, v23); /*0x702ef0*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3214) )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28); /*0x702f0d*/
        v24 = *((_DWORD *)this + 135); /*0x702f1c*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 132))(v12); /*0x702f25*/
        HouseClass::AccumulateScore((float *)(v28 + 336), v20, v24); /*0x702f2c*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3432) )
      {
        v13 = *(_DWORD *)(v28 + 724); /*0x702f45*/
        if ( v13 && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 3214) ) /*0x702f5b*/
        {
          v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 724) + 132))(*(_DWORD *)(v28 + 724)); /*0x702f71*/
          v25 = *((_DWORD *)this + 135); /*0x702f80*/
          v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 132))(v14); /*0x702f8f*/
          HouseClass::AccumulateScore((float *)(*(_DWORD *)(v28 + 724) + 336), v21, v25); /*0x702f96*/
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 1024))(v28)
             && (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28) == 6 )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28); /*0x702fb6*/
        v16 = *(_DWORD *)(*(_DWORD *)(v15 == 6 ? v28 + 0x688 : 1672) + 4 * *(_DWORD *)(v15 == 6 ? v28 + 0x69C : 1692));
        v26 = *((_DWORD *)this + 135); /*0x702fda*/
        v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 1728) + 132))(*(_DWORD *)(v16 + 1728)); /*0x702fe9*/
        HouseClass::AccumulateScore((float *)(v16 + 336), v22, v26); /*0x702ff0*/
      }
      *(_DWORD *)(*((_DWORD *)this + 135) + 21644) = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 56))(v28); /*0x703003*/
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
        ++*(_DWORD *)(*((_DWORD *)this + 135) + 21556); /*0x70319d*/
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
        result = RadarClass::IsActiveMode(&MapClass_Instance); /*0x7031e3*/
        if ( (_BYTE)result ) /*0x7031ea*/
  LABEL_67:
          result = RadarClass::SetFlag(&MapClass_Instance, 0); /*0x7031ec*/
        break; /*0x7031f3*/
      case 5: /*0x70302e*/
        result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this); /*0x703039*/
        if ( !*(_BYTE *)(result + 562) ) /*0x70303f*/
        {
          if ( *((_DWORD *)this + 335) != -1 ) /*0x703054*/
            ++*(_DWORD *)(*((_DWORD *)this + 135) + 21640); /*0x70305c*/
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
          result = RadarClass::IsActiveMode(&MapClass_Instance); /*0x7030b3*/
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
} // namespace ra2
}

// 0x705860
namespace ra2 {
namespace game {
int TechnoClass::DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
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

  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v41); /*0x705875*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v31); /*0x70588a*/
  v6 = -32 - ZCoordToScreenY(a3); /*0x7058a4*/
  v7 = -32 - ZCoordToScreenY(a6); /*0x7058b4*/
  v28 = abs32(v31 - v41); /*0x7058c5*/
  v8 = *(_DWORD *)g_DSurface_Hidden_2; /*0x7058da*/
  v27 = abs32(v32 - v42); /*0x7058dc*/
  result = (*(int (__thiscall **)(int))(v8 + 132))(g_DSurface_Hidden_2); /*0x7058e0*/
  if ( (_BYTE)result ) /*0x7058e8*/
  {
    v10 = (int *)g_DSurface_Hidden_2; /*0x7058f0*/
    v11 = Random::Range(Randomizer_Global, 190, 270); /*0x705905*/
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
      v14 = 255 >> g_BitShift_Green_0 << g_BitShift_Red; /*0x7059c5*/
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
      AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v35, &v33, &v20, v25 / 4 + 255, v6, v18); /*0x705b34*/
      if ( v28 <= v27 ) /*0x705b43*/
      {
        v39 = v35 + 1; /*0x705bc8*/
        v40 = v36; /*0x705bd1*/
        v37 = v33 + 1; /*0x705bd6*/
        v38 = v34; /*0x705bdf*/
        AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705bf6*/
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
        AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705b80*/
        v39 = v35; /*0x705b91*/
        v40 = v36 - 1; /*0x705b9a*/
        v37 = v33; /*0x705ba0*/
        v38 = v34 - 1; /*0x705ba9*/
      }
      AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705bb9*/
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
} // namespace ra2
}

// 0x70D0D0
namespace ra2 {
namespace game {
int TechnoClass::HasVoiceResponse(int weaponIndex)
{
  float *v3; // edi
  int v4; // esi

  v3 = this + 84; /*0x70d0d5*/
  if ( !Audio::IsMediumVolume(this + 84) && !Audio::IsLoud(v3) ) /*0x70d0e8*/
    return 0; /*0x70d0e8*/
  v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 132))(this); /*0x70d0fd*/
  if ( Audio::IsMediumVolume(v3) && *(_BYTE *)(v4 + weaponIndex + 668) ) /*0x70d10c*/
    return 1; /*0x70d11c*/
  return Audio::IsLoud(v3) && (*(_BYTE *)(v4 + weaponIndex + 668) || *(_BYTE *)(v4 + weaponIndex + 686)); /*0x70d142*/
}
} // namespace ra2
}

// 0x73B140
namespace ra2 {
namespace game {
HouseClass * * TechnoClass::RenderTechnoSHP(int * a0, int * a1, int * a2, HouseClass * aP3, HouseClass * aP4, int a6, int a7, TechnoClass * aP7, TechnoClass * aP8, int a10, int a11)
{
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  char v14; // bl
  _DWORD *Array; // edi
  int v16; // edi
  int SHPFrameBuildingClass; // edi
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v25; // eax
  int v26; // eax
  int v27; // [esp-Ch] [ebp-58h]
  int v28; // [esp-Ch] [ebp-58h]
  int v29; // [esp-8h] [ebp-54h]
  int v30; // [esp-8h] [ebp-54h]
  int v31; // [esp-4h] [ebp-50h]
  int v32; // [esp-4h] [ebp-50h]
  int v33; // [esp+0h] [ebp-4Ch]
  int v34; // [esp+4h] [ebp-48h]
  int v35; // [esp+14h] [ebp-38h]
  int v36; // [esp+14h] [ebp-38h]
  int v37; // [esp+18h] [ebp-34h] BYREF
  int v38; // [esp+1Ch] [ebp-30h] BYREF
  int v39; // [esp+20h] [ebp-2Ch] BYREF
  int v40[2]; // [esp+24h] [ebp-28h] BYREF
  int v41; // [esp+2Ch] [ebp-20h] BYREF
  int v42; // [esp+30h] [ebp-1Ch] BYREF
  int v43; // [esp+34h] [ebp-18h]
  int v44; // [esp+38h] [ebp-14h]
  int v45; // [esp+3Ch] [ebp-10h]
  int v46; // [esp+40h] [ebp-Ch] BYREF
  int v47; // [esp+44h] [ebp-8h] BYREF

  v12 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*a1 + 72))(a1, &v38); /*0x73b152*/
  LOWORD(v35) = *v12 / 256; /*0x73b165*/
  HIWORD(v35) = v12[1] / 256; /*0x73b17e*/
  v37 = v35; /*0x73b18b*/
  v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v37); /*0x73b190*/
  if ( CellClass::QuickPassable(v13) ) /*0x73b197*/
    a10 = 0; /*0x73b1a0*/
  v14 = 0; /*0x73b1ae*/
  if ( *(_BYTE *)(a1[433] + 3606) ) /*0x73b1b0*/
  {
    if ( TechnoClass::CheckTargetCell(a1) && !TechnoClass::ScanNeighborCells(a1) /*0x73b1fb*/
      || (Array = (_DWORD *)Array::Get(a1, 0), a1[361])
      && Array
      && (*(int (__thiscall **)(_DWORD *))(*Array + 44))(Array) == 6
      && *(_BYTE *)(Array[328] + 5821) )
    {
      v14 = 1; /*0x73b205*/
    }
  }
  v36 = 0; /*0x73b20f*/
  v16 = 10240; /*0x73b217*/
  switch ( (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a1 + 104))(a1, 0, 0) ) /*0x73b225*/
  {
    case 1: /*0x73b225*/
      v16 = 10242; /*0x73b22c*/
      break; /*0x73b231*/
    case 2: /*0x73b225*/
    case 3: /*0x73b225*/
      v16 = 10244; /*0x73b233*/
      break; /*0x73b238*/
    case 4: /*0x73b225*/
      v16 = 10250; /*0x73b240*/
      if ( a1[137] ) /*0x73b23a*/
        v16 = 10252; /*0x73b249*/
      v36 = TechnoClass::CalcOffsetFacing(a1); /*0x73b255*/
      break; /*0x73b255*/
    default:
      break;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 468))(a1) /*0x73b26b*/
    || (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 472))(a1) )
  {
    v16 |= 4u; /*0x73b275*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)a1[135]) /*0x73b28b*/
    && (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 196))(a1) )
  {
    v16 = (*(int (__thiscall **)(int *, int))(*a1 + 1084))(a1, v16); /*0x73b2a0*/
  }
  SHPFrameBuildingClass = BuildingClass::GetSHPFrame( /*0x73b2d3*/
                            *(_DWORD **)(*((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(a1[135] + 90196)) + 780),
                            v16);
  v41 = (int)a3 + dword_B1CFC0 - 128; /*0x73b2dd*/
  v42 = a4 + dword_B1CFC4 - 128; /*0x73b2eb*/
  v43 = dword_B1CFC8; /*0x73b2f6*/
  v44 = dword_B1CFCC; /*0x73b2fa*/
  if ( v14 && dword_B1CFCC > 16 ) /*0x73b307*/
  {
    v18 = a9; /*0x73b30d*/
    v38 = dword_B1CFC0; /*0x73b311*/
    v40[0] = dword_B1CFC8; /*0x73b319*/
    v44 = dword_B1CFCC - 16; /*0x73b329*/
    v40[1] = dword_B1CFCC - 16; /*0x73b32d*/
    v19 = *a1; /*0x73b331*/
    v31 = a10; /*0x73b333*/
    v39 = dword_B1CFC4; /*0x73b339*/
    v29 = (*(int (__thiscall **)(int *, _DWORD, int))(v19 + 748))(a1, 0, a9) - 5; /*0x73b34a*/
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2); /*0x73b35a*/
    BlitterCopySHP(a3, &a6, &v42, (int *)g_DSurface_Hidden_2, v20, &v47, v40, SHPFrameBuildingClass, v29, v31, v36, v34); /*0x73b377*/
    v21 = v45 + v43; /*0x73b388*/
    v22 = v45 + v40[0]; /*0x73b38a*/
    v45 = 16; /*0x73b391*/
    v41 = 16; /*0x73b395*/
    v43 = v21; /*0x73b39d*/
    v40[0] = v22; /*0x73b3a6*/
    v33 = a11; /*0x73b3ac*/
    v27 = (*(int (__thiscall **)(int *))(*a1 + 748))(a1); /*0x73b3be*/
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2); /*0x73b3cc*/
    return BlitterCopySHP( /*0x73b3e5*/
             a3,
             &a5,
             &v41,
             (int *)g_DSurface_Hidden_2,
             v23,
             &v46,
             &v39,
             SHPFrameBuildingClass,
             v27,
             2,
             v18,
             v33);
  }
  else
  {
    v32 = a10; /*0x73b403*/
    v30 = a9; /*0x73b404*/
    v25 = (*(int (__thiscall **)(int *))(*a1 + 752))(a1); /*0x73b407*/
    v28 = (*(int (__thiscall **)(int *, int))(*a1 + 748))(a1, v25); /*0x73b41e*/
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2); /*0x73b42c*/
    return BlitterCopySHP( /*0x73b446*/
             a2,
             &a5,
             &v41,
             (int *)g_DSurface_Hidden_2,
             v26,
             &v46,
             &dword_B1CFC0,
             SHPFrameBuildingClass,
             v28,
             v30,
             v32,
             v36);
  }
}
} // namespace ra2
}

// 0x73B470
namespace gamemd {
void TechnoClass_DrawVoxel()
{
{
  ObjectClass *v16; // eax
  float *inited; // eax
  TechnoClass *v22; // esi
  size_t v30; // eax
  size_t v31; // eax
  bool v32; // al
  ParticleSystemClass *v33; // esi
  ObjectClass *v36; // esi
  TechnoClass *v37; // edi
  BuildingTypeClass *v38; // edi
  TechnoClass *v39; // esi
  __int16 v40; // ax
  BuildingTypeClass *v43; // eax
  int v44; // edx
  BuildingTypeClass *v45; // esi
  int v53; // esi
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // ecx
  int v59; // eax
  int v61; // ecx
  AbstractClass *v62; // esi
  ObjectClass *v63; // eax
  VectorClass *v72; // esi
  BuildingTypeClass *v89; // [esp+ECh] [ebp-1D0h]
  BuildingTypeClass *v90; // [esp+ECh] [ebp-1D0h]
  float aP1a; // [esp+F4h] [ebp-1C8h]
  float aP1b; // [esp+F4h] [ebp-1C8h]
  int aP1c; // [esp+F4h] [ebp-1C8h]
  float aP1d; // [esp+F4h] [ebp-1C8h]
  float aP1e; // [esp+F4h] [ebp-1C8h]
  float aP1f; // [esp+F4h] [ebp-1C8h]
  int aP1g; // [esp+F4h] [ebp-1C8h]
  float aP1_4; // [esp+F8h] [ebp-1C4h]
  float v104; // [esp+FCh] [ebp-1C0h]
  bool v105; // [esp+109h] [ebp-1B3h]
  unsigned __int8 v108; // [esp+109h] [ebp-1B3h]
  unsigned __int8 v109; // [esp+109h] [ebp-1B3h]
  char v110; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v111; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v112; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v113; // [esp+10Bh] [ebp-1B1h]
  unsigned __int8 v114; // [esp+10Bh] [ebp-1B1h]
  TechnoClass *aP3; // [esp+10Ch] [ebp-1B0h] BYREF
  ObjectClass *v116; // [esp+110h] [ebp-1ACh] BYREF
  int v117; // [esp+114h] [ebp-1A8h] BYREF
  double v118; // [esp+118h] [ebp-1A4h] BYREF
  TechnoClass *v120; // [esp+124h] [ebp-198h]
  __int64 v121; // [esp+128h] [ebp-194h] BYREF
  int v122; // [esp+130h] [ebp-18Ch] BYREF
  double v123; // [esp+134h] [ebp-188h] BYREF
  int v125; // [esp+144h] [ebp-178h]
  int v126; // [esp+148h] [ebp-174h] BYREF
  int v127; // [esp+14Ch] [ebp-170h]
  int v128; // [esp+150h] [ebp-16Ch]
  int v129; // [esp+154h] [ebp-168h]
  int v130; // [esp+158h] [ebp-164h] BYREF
  int v131; // [esp+15Ch] [ebp-160h]
  int v132; // [esp+160h] [ebp-15Ch] BYREF
  int v133; // [esp+164h] [ebp-158h] BYREF
  _DWORD a1[2]; // [esp+168h] [ebp-154h] BYREF
  int GroundHeight; // [esp+170h] [ebp-14Ch]
  float v136; // [esp+174h] [ebp-148h] BYREF
  float v137; // [esp+178h] [ebp-144h]
  float v138; // [esp+17Ch] [ebp-140h]
  int v140; // [esp+184h] [ebp-138h]
  AbstractClass *v141; // [esp+188h] [ebp-134h]
  float v142[12]; // [esp+18Ch] [ebp-130h] BYREF
  _DWORD v143[4]; // [esp+1BCh] [ebp-100h] BYREF
  _BYTE v144[48]; // [esp+1CCh] [ebp-F0h] BYREF
  float v145[12]; // [esp+1FCh] [ebp-C0h] BYREF
  _BYTE v146[48]; // [esp+22Ch] [ebp-90h] BYREF
  float v147[12]; // [esp+25Ch] [ebp-60h] BYREF
  float v148[12]; // [esp+28Ch] [ebp-30h] BYREF

  v121 = a2;
  int v10 = ecx0[433];
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*ecx0 + 1088))(ecx0, HouseClass_Player.field_0) )
    v10 = (*(int (__thiscall **)(_DWORD *, int))(*ecx0 + 204))(ecx0, 1);
  if ( *((_BYTE *)ecx0 + 1760) && *(_DWORD *)(ecx0[433] + 1720) )
    v10 = *(_DWORD *)(ecx0[433] + 1720);
  int v11 = ecx0[334] % *(_DWORD *)(*(_DWORD *)(v10 + 180) + 8);
  v122 = 0;
  v125 = v11;
  if ( !v11 )
  {
    int v12 = *(_DWORD *)(v10 + 188);
    if ( !v12 )
      goto LABEL_10;
    v11 = ecx0[82] % *(_DWORD *)(v12 + 8);
  }
  v122 = v11;
LABEL_10:
  v131 = a4;
  v130 = a3;
  v141 = *(AbstractClass **)&stru_87C374[44960];
  v132 = a5;
  v133 = a6;
  v121 = 0x8000000080LL;
  aP3 = 0;
  *(_DWORD *)&stru_87C374[44960] = dword_B1D13C;
  int * v13 = (int *)(*(int (__thiscall **)(_DWORD *, float *))(*dword_B1D13C + 120))(dword_B1D13C, &v136);
  v130 = *v13;
  v131 = v13[1];
  v132 = v13[2];
  int v14 = v13[3];
  *((_BYTE *)ecx0 + 1747) = 1;
  v133 = v14;
  aP3 = (TechnoClass *)((stru_87C374[45220] != 0) - 1);
  if ( !ecx0[413] )
    WinAPI::Wrapper(-2147467261);
  const void *v15; // eax
  v15 = (const void *)(*(int (__stdcall **)(_DWORD, float *, TechnoClass **))(*(_DWORD *)ecx0[413] + 36))(
                        ecx0[413],
                        v145,
                        &aP3);
  Transform::Copy(v144, v15);
  v16 = (ObjectClass *)aP3;
  qmemcpy(v142, v144, sizeof(v142));
  int v17 = v125;
  if ( aP3 != (TechnoClass *)-1 )
  {
    v16 = (ObjectClass *)(v125 & 0x1F | (32 * (_DWORD)aP3));
    aP3 = (TechnoClass *)v16;
  }
  v126 = v130;
  v140 = ((int)v16 >> 5) & 0x3FF;
  v128 = v132;
  v127 = v131;
  v129 = v133;
  *(_DWORD *)aP6[0] = xmmword_B1CFA8;
  aP6.Width = DWORD1(xmmword_B1CFA8);
  aP6.Height = DWORD2(xmmword_B1CFA8);
  aP6.LockCount = HIDWORD(xmmword_B1CFA8);
  if ( !*(_BYTE *)(ecx0[433] + 488) || SpawnManagerClass::CountDockedSpawns((int *)ecx0[180]) )
  {
    int v20 = *ecx0;
    v90 = started;
    inited = (float *)AudioConfig::InitDefault(v144);
    float * v88 = MultiplyMatrix3x4((ObjectClass *)v145, inited, v142);
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, float *, BuildingTypeClass *, int, _DWORD))(v20 + 1296))(
      ecx0,
      v10 + 176,
      v17,
      aP3,
      v10 + 580,
      &v126,
      &v121,
      v88,
      v90,
      10240,
      0);
  }
  else
  {
    v89 = started;
    aP3 = (TechnoClass *)((unsigned int)aP3 | 0x10000);
    int v18 = *ecx0;
    float * v19 = (float *)AudioConfig::InitDefault(v144);
    float * v87 = MultiplyMatrix3x4((ObjectClass *)v145, v19, v142);
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, float *, BuildingTypeClass *, int, _DWORD))(v18 + 1296))(
      ecx0,
      v10 + 184,
      v17,
      aP3,
      v10 + 580,
      &v126,
      &v121,
      v87,
      v89,
      10240,
      0);
  }
  v22 = aP3;
  v120 = aP3;
  if ( aP3 != (TechnoClass *)-1 )
  {
  unsigned int v23; // esi
    v23 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)&v116) >> 10) + 1) >> 1) & 0x1F
        | (unsigned int)v22 & 0xFFFFFFE0;
    if ( !*(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*ecx0 + 132))(ecx0) + 1824) )
      v23 &= 0xFFFFFC1F;
    v22 = (TechnoClass *)(((unsigned __int8)v122 << 16) | v23);
    v120 = v22;
  }
  if ( !*(_BYTE *)(v10 + 3233) && (!TechnoClass::OwnerHasPower(ecx0) || !TechnoClass::checkEMPState(ecx0)) )
  {
    if ( *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
    {
      v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 440, (IUnknown *)&v117) >> 10)
                                            + 1) >> 1)
                            & 0x1F)
                           - 8);
      double v24 = (double)(int)v116 * -0.1963495408493621;
      v118 = v24;
      TechnoClass::CalcFacingFromMatrix((IUnknown *)v142);
      float aP1 = -(v118 - v24);
      ((void (__thiscall *)(float *, float))Matrix3D::RotateZ)(v142, aP1);
      aP1a = (double)*(int *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*ecx0 + 1016))(ecx0, 0) + 12) * unk_B1D008;
      aP1b = (double)*(int *)((*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*ecx0 + 1016))(
                                ecx0,
                                0,
                                0,
                                LODWORD(aP1a))
                            + 4)
           * unk_B1D008;
      Vector::MatrixMulVectorMath(&v142[2], aP1b, aP1_4, v104);
      int v25 = *ecx0;
      v104 = 0.0;
      aP1_4 = 0.0;
      aP1c = a9;
      float * v26 = (float *)AudioConfig::InitDefault(&v144[8]);
      float * v27 = MultiplyMatrix3x4((ObjectClass *)&v145[2], v26, &v142[2]);
      (*(void (__thiscall **)(_DWORD *, int, int, _DWORD, int, int *, int *, float *, int))(v25 + 1296))(
        ecx0,
        v10 + 192,
        v127,
        HIDWORD(v121),
        v10 + 640,
        &v132,
        &v122,
        v27,
        aP1c);
    }
    goto LABEL_81;
  }
  v117 = 0;
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(_BYTE *)(ecx0[433] + 3285) )
  {
    if ( *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
    {
      v110 = 1;
      goto LABEL_37;
    }
LABEL_36:
    v110 = 0;
    goto LABEL_37;
  }
  int v28 = TechnoClass::applyEMPulseDamage(ecx0);
  v117 = v28;
  v22 = (TechnoClass *)((v28 << 24) | (unsigned int)v22);
  int v29 = *(_DWORD *)(v10 + 8 * v28 + 344);
  v120 = v22;
  if ( !v29 || !*(_DWORD *)(v10 + 8 * v28 + 348) )
    goto LABEL_36;
  v110 = 1;
LABEL_37:
  v116 = (ObjectClass *)v22;
  if ( v22 == (TechnoClass *)-1 || v10 == -600 )
  {
    v105 = 0;
    goto LABEL_46;
  }
  if ( !*(_DWORD *)(v10 + 604) )
    goto LABEL_44;
  if ( !TechnoClass::processIronCurtainExpiry((_DWORD *)(v10 + 600), (IUnknown *)&v116) )
  {
    v30 = SortedStateVector::BinarySearch((char **)(v10 + 600), (IUnknown *)&v116);
    if ( v30 )
    {
      *(_DWORD *)(v10 + 616) = v30;
      goto LABEL_43;
    }
LABEL_44:
    v105 = unk_B78824 != 0;
    goto LABEL_46;
  }
LABEL_43:
  v105 = *(_DWORD *)(*(_DWORD *)(v10 + 616) + 4) != 0;
LABEL_46:
  if ( !v110 || (v116 = (ObjectClass *)v22, v22 == (TechnoClass *)-1) || v10 == -640 )
  {
    v32 = 0;
    goto LABEL_56;
  }
  if ( !*(_DWORD *)(v10 + 644) )
    goto LABEL_54;
  if ( !TechnoClass::processIronCurtainExpiry((_DWORD *)(v10 + 640), (IUnknown *)&v116) )
  {
    v31 = SortedStateVector::BinarySearch((char **)(v10 + 640), (IUnknown *)&v116);
    if ( v31 )
    {
      *(_DWORD *)(v10 + 656) = v31;
      goto LABEL_53;
    }
LABEL_54:
    v32 = unk_B78824 != 0;
    goto LABEL_56;
  }
LABEL_53:
  v32 = *(_DWORD *)(*(_DWORD *)(v10 + 656) + 4) != 0;
LABEL_56:
  if ( v105 && (!v110 || v32) )
  {
    qmemcpy(v144, v142, sizeof(v144));
    v33 = (ParticleSystemClass *)v142;
  }
  else
  {
    aP1d = (double)*(int *)(v10 + 1824) * unk_B1D008;
    Matrix3x4::Translate(v142, (ParticleSystemClass *)LODWORD(aP1d));
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)a1) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    v123 = (double)(int)v116 * -0.1963495408493621;
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 452, (IUnknown *)&v118) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    aP1e = v123 - (double)(int)v116 * -0.1963495408493621;
    ((void (__thiscall *)(float *, float))Matrix2D::Rotate)(v142, aP1e);
    *(float *)&v118 = -v142[3];
    v137 = v142[7];
    qmemcpy(v145, v142, sizeof(v145));
    v138 = v142[11];
    *((float *)&v118 + 1) = -v142[7];
    v136 = v142[3];
    v123 = v118;
    float v119 = -v142[11];
    float v124 = v119;
    Matrix3x3::Multiply(v145, (float *)&v123);
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 440, (IUnknown *)&v118) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    aP1f = -((double)(int)v116 * -0.1963495408493621);
    ((void (__thiscall *)(float *, float))Matrix3D::RotateZ)(v145, aP1f);
    Matrix3x3::Multiply(v145, &v136);
    float * v34 = (float *)AudioConfig::InitDefault(v148);
    qmemcpy(v144, MultiplyMatrix3x4((ObjectClass *)v147, v34, v142), sizeof(v144));
    float * v35 = (float *)AudioConfig::InitDefault(v147);
    v33 = (ParticleSystemClass *)MultiplyMatrix3x4((ObjectClass *)v148, v35, v145);
  }
  qmemcpy(v146, v33, sizeof(v146));
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(_BYTE *)(ecx0[433] + 3285) )
  {
  char v107; // [esp+109h] [ebp-1B3h]
    if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v107 = 0;
      if ( *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
          ecx0,
          v10 + 192,
          0,
          v120,
          v10 + 640,
          &v130,
          &v121,
          v146,
          started,
          10240,
          0);
    }
    else
    {
      v107 = 1;
    }
    v38 = started;
    v39 = v120;
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
      ecx0,
      v10 + 184,
      v122,
      v120,
      v10 + 600,
      &v130,
      &v121,
      v144,
      started,
      10240,
      0);
    if ( v107 && *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
        ecx0,
        v10 + 192,
        0,
        v39,
        v10 + 640,
        &v130,
        &v121,
        v146,
        v38,
        10240,
        0);
  }
  else
  {
  char v106; // [esp+109h] [ebp-1B3h]
    if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v106 = 0;
      if ( v110 )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
          ecx0,
          v10 + 8 * v117 + 344,
          0,
          v120,
          v10 + 640,
          &v130,
          &v121,
          v146,
          started,
          10240,
          0);
    }
    else
    {
      v106 = 1;
    }
    v36 = (ObjectClass *)v117;
    v37 = v120;
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
      ecx0,
      v10 + 8 * v117 + 200,
      v125,
      v120,
      v10 + 600,
      &v130,
      &v121,
      v144,
      started,
      10240,
      0);
    if ( v106 && v110 )
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
        ecx0,
        v10 + 8 * (_DWORD)v36 + 344,
        0,
        v37,
        v10 + 640,
        &v130,
        &v121,
        v146,
        started,
        10240,
        0);
  }
LABEL_81:
  v127 = a4;
  v40 = *((_WORD *)ecx0 + 485);
  v128 = a5;
  v126 = a3;
  v129 = a6;
  if ( v40 <= 0 )
  {
    if ( *((_BYTE *)ecx0 + 973) )
      *((_WORD *)ecx0 + 485) = LOWORD(aP6.LockCount)
                             + WORD2(a2)
                             + *(_WORD *)(*(_DWORD *)&stru_87C374[44976] + 180)
                             + LOWORD(aP6.Width)
                             - 128;
  }
  else
  {
    int v41 = *(_DWORD *)(*(_DWORD *)&stru_87C374[44976] + 180);
    v136 = 0.0;
    int v139 = v40 - v41;
    v137 = 0.0;
    v138 = *(float *)&stru_87C374[44084];
    int * v42 = ClipRectIntersection((IUnknown *)&v123, (IUnknown *)&v126, (IUnknown *)&v136, 0, 0);
    v126 = *v42;
    v127 = v42[1];
    v128 = v42[2];
    v129 = v42[3];
  }
  v43 = (BuildingTypeClass *)(*(int (__thiscall **)(_DWORD *, BuildingTypeClass *))(*ecx0 + 1124))(ecx0, started);
  v44 = *ecx0;
  v45 = v43;
  started = v43;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v44 + 352))(ecx0, LODWORD(aP1_4), LODWORD(v104)) )
  {
  int v52; // esi
  int v51; // esi
  int v50; // ecx
  int v49; // edx
    started = Techno::StartInvulnerability(ecx0, v45);
    int v46 = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 6312);
    int v47 = *(_DWORD *)&stru_87C374[44652] + 2 * v46;
    v113 = *(_BYTE *)(v46 + v47 + 6260);
    v111 = *(_BYTE *)(v46 + v47 + 4174 + 2087);
    v108 = *(_BYTE *)(v46 + v47 + 6262);
    int v48 = DDraw::GetStatus() - 1;
    if ( v48 )
    {
      if ( --v48 )
      {
        v52 = a8;
        goto LABEL_92;
      }
      LOWORD(v50) = v113;
      LOWORD(v49) = v111;
      v50 = v108 | (32 * (v49 | (v50 << 6)));
      v51 = v50 | a8;
    }
    else
    {
      v51 = a8;
    }
    LOWORD(v48) = v113;
    LOWORD(v49) = v111 >> 1;
    LOWORD(v50) = v108;
    v48 *= 32;
    v49 = v50 | ((v48 | v49) << 6);
    v52 = v49 | v51;
LABEL_92:
    LOWORD(v50) = v108;
    LOWORD(v49) = v111 >> 1;
    LOWORD(v48) = v113;
    v53 = v50 | (32 * ((32 * v48) | v49)) | v52;
    goto LABEL_94;
  }
  v53 = a8;
LABEL_94:
  if ( !*((_BYTE *)ecx0 + 664) )
    goto LABEL_102;
  v54 = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 6316);
  v55 = v54 + *(_DWORD *)&stru_87C374[44652] + 2 * v54;
  v114 = *(_BYTE *)(v55 + 6260);
  v112 = *(_BYTE *)(v55 + 6262);
  v109 = *(_BYTE *)(v54 + *(_DWORD *)&stru_87C374[44652] + 2 * v54 + 4174 + 2087);
  v56 = DDraw::GetStatus() - 1;
  if ( v56 )
  {
    v59 = v56 - 1;
    if ( v59 )
    {
      LOBYTE(v59) = v109;
      goto LABEL_101;
    }
    LOWORD(v57) = v114;
    v59 = v109;
    LOWORD(v58) = v109;
    int v60 = v58 | (v57 << 6);
    LOWORD(v58) = v112;
    v57 = v58 | (32 * v60);
    v53 |= v57;
  }
  else
  {
    v59 = v109;
  }
  LOWORD(v58) = (unsigned __int8)v59 >> 1;
  LOWORD(v57) = v114;
  v57 *= 32;
  v61 = v57 | v58;
  LOWORD(v57) = v112;
  v58 = v57 | (v61 << 6);
  v53 |= v58;
LABEL_101:
  LOWORD(v58) = v114;
  LOWORD(v57) = v112;
  LOWORD(v59) = (unsigned __int8)v59 >> 1;
  v53 |= v57 | (32 * ((32 * v58) | v59));
LABEL_102:
  if ( UnitClass::IsDeactivated(ecx0) )
    started = (BuildingTypeClass *)((int)started / 2);
  aP1g = v53;
  v62 = v141;
  (*(void (__thiscall **)(_DWORD *, AbstractClass *, _DWORD, _DWORD, int, int, int, int, BuildingTypeClass *, int))(*ecx0 + 1372))(
    ecx0,
    v141,
    a2,
    HIDWORD(a2),
    v126,
    v127,
    v128,
    v129,
    started,
    aP1g);
  v143[1] = aP6.Width;
  v63 = *(ObjectClass **)&stru_87C374[44960];
  *(_DWORD *)&stru_87C374[44960] = v62;
  v116 = v63;
  LOBYTE(v63) = *((_BYTE *)ecx0 + 973);
  v143[0] = *(_DWORD *)aP6[0];
  v143[2] = aP6.Height;
  v143[3] = aP6.LockCount;
  *((_BYTE *)ecx0 + 1747) = 0;
  if ( !(_BYTE)v63 )
  {
    int v64 = ecx0[433];
    v118 = *(double *)&a2;
  int v65; // eax
    if ( *(_BYTE *)(v64 + 3434) || (v65 = *(_DWORD *)(v64 + 1660), v65 == 1) || v65 == 2 )
    {
      aP3 = (TechnoClass *)v140;
    }
    else
    {
      aP3 = (TechnoClass *)(32 * v140);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int v66 = (*(int (__stdcall **)(_DWORD, double *))(*(_DWORD *)ecx0[413] + 48))(ecx0[413], &v123);
      aP3 = (TechnoClass *)(((unsigned __int8)*(_DWORD *)(v66 + 4) - 16) & 0x1F | (unsigned int)aP3);
    }
    if ( !ecx0[413] )
      WinAPI::Wrapper(-2147467261);
  const void *v67; // eax
    v67 = (const void *)(*(int (__stdcall **)(_DWORD, float *, TechnoClass **))(*(_DWORD *)ecx0[413] + 40))(
                          ecx0[413],
                          v147,
                          &aP3);
    Transform::Copy(v144, v67);
    qmemcpy(v142, v144, sizeof(v142));
    if ( *(_BYTE *)(v10 + 3367) )
    {
      a1[0] = ecx0[39];
      a1[1] = ecx0[40];
      GroundHeight = ecx0[41];
      GroundHeight = Cell::GetGroundHeight((IUnknown *)a1);
      Coord::To_Screen(*(_DWORD **)&stru_87C374[44976], a1, (IUnknown *)&v118);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int * v68 = (int *)(*(int (__stdcall **)(_DWORD, double *))(*(_DWORD *)ecx0[413] + 48))(ecx0[413], &v123);
      int v69 = *v68;
      int v70 = v68[1];
      LODWORD(v118) += v69;
      HIDWORD(v118) += v70;
    }
    if ( *((_BYTE *)ecx0 + 1060) )
      HIDWORD(v118) -= 14;
    int v71 = (*(int (__thiscall **)(_DWORD *))(*ecx0 + 456))(ecx0);
    v136 = *((float *)ecx0 + 39);
    v137 = *((float *)ecx0 + 40);
    v138 = *((float *)ecx0 + 41);
    v72 = (VectorClass *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&v136);
    if ( *((_BYTE *)ecx0 + 1060) )
    {
      if ( !*((_BYTE *)ecx0 + 140) && v71 >= unk_B1D0AC )
      {
        void * v73 = v72[20].vtable0;
        if ( ((unsigned __int16)v73 & 0x100) != 0
          && ((BYTE1(v73) & 8) != 0 && (*((_DWORD *)Cell::GetNeighbourContent(v72, 0) + 80) & 0x100) != 0
           || ((int)v72[20].vtable0 & 0x800) == 0 && (*((_DWORD *)Cell::GetNeighbourContent(v72, 6u) + 80) & 0x100) != 0) )
        {
          HIDWORD(v118) -= 60;
        }
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*ecx0 + 84))(ecx0) )
    {
      v117 = 0;
    }
    else
    {
      int v74 = ecx0[433];
      v117 = (int)v116;
  int v75; // eax
      if ( *(_BYTE *)(v74 + 3434) || (v75 = *(_DWORD *)(v74 + 1660), v75 == 1) || v75 == 2 )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*ecx0 + 456))(ecx0) > 0 )
          aP3 = (TechnoClass *)-1;
        else
          aP3 = (TechnoClass *)((unsigned int)aP3 | 0x80000000);
      }
    }
    bool v76 = (*(int (__thiscall **)(_DWORD *))(*ecx0 + 456))(ecx0) <= 0;
    int v77 = ecx0[413];
    if ( v76 )
    {
      if ( !v77 )
        WinAPI::Wrapper(-2147467261);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int v81 = ecx0[413];
      int v82 = (*(int (__stdcall **)(int))(*(_DWORD *)v81 + 48))(v81);
  int v94; // [esp+F0h] [ebp-1CCh]
      v94 = *(_DWORD *)(*(int (__stdcall **)(int, int *, _DWORD))(*(_DWORD *)v81 + 48))(
                         v81,
                         &v133,
                         *(_DWORD *)(v82 + 4));
      int v92 = v117;
      float * v83 = (float *)AudioConfig::InitDefault(v147);
      float * v86 = MultiplyMatrix3x4((ObjectClass *)v148, v83, v142);
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (_BYTE **)(v10 + 176),
        *(_DWORD *)(v10 + 2044),
        aP3,
        v10 + 620,
        (int)&a3,
        (TechnoClass *)&v118,
        (int)v86,
        1u,
        v92,
        v94,
        (int)&v123);
    }
    else
    {
      if ( !v77 )
        WinAPI::Wrapper(-2147467261);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int v78 = ecx0[413];
      int v79 = (*(int (__stdcall **)(int))(*(_DWORD *)v78 + 48))(v78);
  int v93; // [esp+F0h] [ebp-1CCh]
      v93 = *(_DWORD *)(*(int (__stdcall **)(int, int *, int))(*(_DWORD *)v78 + 48))(
                         v78,
                         &v133,
                         *(_DWORD *)(v79 + 4) + 1);
      int v91 = v117;
      float * v80 = (float *)AudioConfig::InitDefault(v147);
      float * v85 = MultiplyMatrix3x4((ObjectClass *)v148, v80, v142);
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (_BYTE **)(v10 + 176),
        *(_DWORD *)(v10 + 2044),
        aP3,
        v10 + 620,
        (int)&a3,
        (TechnoClass *)&v118,
        (int)v85,
        1u,
        v91,
        v93,
        (int)&v123);
    }
  }
  return (*(int (__thiscall **)(ObjectClass *, _DWORD *, _DWORD))(*(_DWORD *)v116->__pad_0 + 20))(v116, v143, 0);
}
} // namespace gamemd
}

// 0x41B7D0
namespace ra2 {
namespace game {
BOOL TechnoClass::processDamageAnimation(int a1)
{
  return *(_DWORD *)(a1 - 1448) != 0; /*0x41b7e4*/
}
} // namespace game
} // namespace ra2

// 0x41B840
namespace ra2 {
namespace game {
BOOL TechnoClass::updateWeaponCooldown(int a1)
{
  return *(_BYTE *)(*(_DWORD *)(a1 + 4) + 3598) != 0; /*0x41b854*/
}
} // namespace game
} // namespace ra2

// 0x41B860
namespace ra2 {
namespace game {
int TechnoClass::checkAmmo(AircraftClass * aP0)
{
  return *(unsigned __int8 *)(aP0 + 18); /*0x41b869*/
}
} // namespace game
} // namespace ra2

// 0x4722D0
namespace ra2 {
namespace game {
int TechnoClass::processPowerDrain()
{
  return *(this + 13); /*0x4722d3*/
}
} // namespace game
} // namespace ra2

// 0x4C2BD0
namespace ra2 {
namespace game {
void TechnoClass::updateSightRange(IUnknown * aP1, int a3)
{
  if ( aP1 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)aP1 + 44))(aP1) == 1 && aP1[144] && !aP1[129] ) /*0x4c2bf2*/
  {
    *(this + 8) = aP1; /*0x4c2c00*/
    *(this + 9) = a3; /*0x4c2c03*/
  }
}
} // namespace game
} // namespace ra2

// 0x703CC0
namespace ra2 {
namespace game {
char TechnoClass::ScanAdjacentCells()
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
  v2 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v12); /*0x703ced*/
  if ( !v2 || *(this + 140) ) /*0x703cf7*/
    return 0; /*0x703cf7*/
  LOWORD(v13) = v12 + g_DirectionOffsetPool; /*0x703d1c*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(g_DirectionOffsetPool); /*0x703d21*/
  v14 = v13; /*0x703d2e*/
  v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14); /*0x703d4f*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(Direction_X_Offsets[0]); /*0x703d57*/
  LOWORD(v13) = v12 + LOWORD(Direction_X_Offsets[0]); /*0x703d5c*/
  v15 = v13; /*0x703d69*/
  v4 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15); /*0x703d88*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(g_CellDirectionOffsets); /*0x703d91*/
  LOWORD(v13) = v12 + g_CellDirectionOffsets; /*0x703d96*/
  v16 = v13; /*0x703da9*/
  v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v16); /*0x703dbc*/
  LOWORD(v13) = v12 + Direction_Y_Offsets; /*0x703dcb*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(Direction_Y_Offsets); /*0x703dd4*/
  v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v13); /*0x703de7*/
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
} // namespace game
} // namespace ra2

// 0x709A20
namespace ra2 {
namespace game {
int TechnoClass::COMStub_Return0_287()
{
  int result; // eax

  return result; /*0x709a20*/
}
} // namespace game
} // namespace ra2

// 0x70F020
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse5()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f020*/
  return result; /*0x70f022*/
}
} // namespace game
} // namespace ra2

// 0x70F030
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse6()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f030*/
  return result; /*0x70f032*/
}
} // namespace game
} // namespace ra2

// 0x70F040
namespace ra2 {
namespace game {
int TechnoClass::checkMovementRestrictions()
{
  return -1; /*0x70f043*/
}
} // namespace game
} // namespace ra2

// 0x70F0E0
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse7()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0e0*/
  return result; /*0x70f0e2*/
}
} // namespace game
} // namespace ra2

// 0x70F0F0
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse8()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0f0*/
  return result; /*0x70f0f2*/
}
} // namespace game
} // namespace ra2

// 0x70F110
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse9()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f110*/
  return result; /*0x70f112*/
}
} // namespace game
} // namespace ra2

// 0x731CF0
namespace ra2 {
namespace game {
void TechnoClass::GetField()
{
  byte_B0FE58 = 0; /*0x731cf0*/
}
} // namespace game
} // namespace ra2
