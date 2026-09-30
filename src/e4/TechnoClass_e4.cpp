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
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/E4Recv_634B20_e4.hpp"

// 0x41A9E0
namespace gamemd {
void TechnoClass_CanFireAtTarget(void * a1, void * a2, void * a3, void * a4, void * a5)
{
  int result; // eax
  int v7; // edi

  result = (int)(TriggerTypeClass::ReadINI(a1, a2, a3, a4, a5));
  if ( !result ) /*0x41a9fd*/
  {
        if ( !*(unsigned char *)(a1 + 1737) || *(unsigned int *)(a1 + 280) )
    {
      v7 = *ProgressTimer::GetValue((ProgressTimer *)a1->secondaryFacing, &a5); /*0x41aa2e*/
      if ( (*(int (__stdcall **)(char *))(*((unsigned int *)a1 + 432) + 28))((char *)a1 + 1728) /*0x41aa6a*/
        || abs16(v7 - *(unsigned short *)ObjectClass::CalcTargetFacing((ObjectClass *)a1, (int *)&a5, (int)a3)) <= 0x800u )
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
namespace gamemd {
TechnoClass::TechnoClass(AbstractClass * aP1)
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
  *((unsigned int *)this + 60) = 0; /*0x6f2b52*/
  *((unsigned char *)this + 244) = 0; /*0x6f2b58*/
  *((unsigned int *)this + 62) = 0; /*0x6f2b5e*/
  *((unsigned char *)this + 252) = 0; /*0x6f2b64*/
  v3 = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2b6a*/
  *((unsigned int *)this + 66) = 0; /*0x6f2b6f*/
  *((unsigned int *)this + 64) = v3; /*0x6f2b75*/
  *((unsigned int *)this + 67) = 0; /*0x6f2b7b*/
  *((unsigned int *)this + 68) = 1; /*0x6f2b81*/
  *((unsigned int *)this + 69) = 0; /*0x6f2b87*/
  *((unsigned int *)this + 70) = 0; /*0x6f2b8d*/
  *((unsigned int *)this + 71) = 0; /*0x6f2b93*/
  *((unsigned int *)this + 72) = -100; /*0x6f2b9c*/
  *((unsigned int *)this + 73) = -1; /*0x6f2ba6*/
  *((unsigned int *)this + 74) = -1; /*0x6f2bac*/
  *((unsigned int *)this + 75) = 0; /*0x6f2bb2*/
  *((unsigned int *)this + 76) = 0; /*0x6f2bb8*/
  *((unsigned char *)this + 308) = 0; /*0x6f2bbe*/
  *((unsigned int *)this + 78) = 0; /*0x6f2bc4*/
  *((unsigned int *)this + 79) = -1; /*0x6f2bca*/
  *((unsigned int *)this + 80) = 0; /*0x6f2bd0*/
  *((unsigned int *)this + 81) = 0; /*0x6f2bd6*/
  *((unsigned int *)this + 82) = 0; /*0x6f2be2*/
  unknown_libname_35((unsigned int *)this + 84); /*0x6f2be8*/
  *((unsigned int *)this + 86) = 0; /*0x6f2bf2*/
  *((unsigned int *)this + 87) = 1072693248; /*0x6f2bf8*/
  *((unsigned int *)this + 88) = 0; /*0x6f2bfe*/
  *((unsigned int *)this + 89) = 1072693248; /*0x6f2c04*/
  *((unsigned int *)this + 90) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c10*/
  *((unsigned int *)this + 92) = 0; /*0x6f2c16*/
  v4 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c1c*/
  *((unsigned int *)this + 95) = 0; /*0x6f2c22*/
  *((unsigned int *)this + 93) = v4; /*0x6f2c28*/
  *((unsigned int *)this + 96) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c33*/
  *((unsigned int *)this + 98) = 45; /*0x6f2c39*/
  v5 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c43*/
  *((unsigned int *)this + 101) = 0; /*0x6f2c49*/
  *((unsigned int *)this + 99) = v5; /*0x6f2c4f*/
  *((unsigned int *)this + 102) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c5b*/
  *((unsigned int *)this + 104) = 0; /*0x6f2c61*/
  *((unsigned int *)this + 105) = 10; /*0x6f2c67*/
  *((unsigned int *)this + 106) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c76*/
  *((unsigned int *)this + 108) = 0; /*0x6f2c7c*/
  v6 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c82*/
  *((unsigned int *)this + 111) = 0; /*0x6f2c88*/
  *((unsigned int *)this + 109) = v6; /*0x6f2c8e*/
  *((unsigned int *)this + 113) = 0; /*0x6f2c94*/
  *((unsigned char *)this + 456) = 0; /*0x6f2c9a*/
  *((unsigned int *)this + 115) = 0; /*0x6f2ca0*/
  *((unsigned int *)this + 116) = 0; /*0x6f2ca6*/
  *((unsigned int *)this + 117) = 0; /*0x6f2cac*/
  *((unsigned char *)this + 472) = 0; /*0x6f2cb2*/
  *((unsigned int *)this + 119) = 0; /*0x6f2cb8*/
  v7 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2cbe*/
  *((unsigned int *)this + 122) = 0; /*0x6f2cc4*/
  *((unsigned int *)this + 120) = v7; /*0x6f2cca*/
  *((unsigned int *)this + 123) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2cd5*/
  *((unsigned int *)this + 125) = 0; /*0x6f2cdb*/
  *((unsigned char *)this + 504) = 0; /*0x6f2ce1*/
  *((unsigned int *)this + 127) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2ced*/
  *((unsigned int *)this + 129) = 0; /*0x6f2cf3*/
  *((unsigned int *)this + 130) = 0; /*0x6f2cf9*/
  *((unsigned int *)this + 131) = 0; /*0x6f2cff*/
  *((unsigned int *)this + 132) = 0; /*0x6f2d05*/
  *((unsigned int *)this + 133) = -1; /*0x6f2d0f*/
  *((unsigned int *)this + 134) = 0; /*0x6f2d15*/
  *((unsigned int *)this + 135) = aP1; /*0x6f2d1b*/
  *((unsigned int *)this + 136) = 0; /*0x6f2d21*/
  *((unsigned int *)this + 137) = 0; /*0x6f2d27*/
  *((unsigned char *)this + 552) = 0; /*0x6f2d2d*/
  *((unsigned int *)this + 139) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2d38*/
  *((unsigned int *)this + 141) = 0; /*0x6f2d3e*/
  *((unsigned int *)this + 142) = 0; /*0x6f2d44*/
  *((unsigned int *)this + 143) = 1; /*0x6f2d4a*/
  v8 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2d50*/
  *((unsigned int *)this + 146) = 0; /*0x6f2d56*/
  *((unsigned int *)this + 144) = v8; /*0x6f2d5c*/
  *((unsigned int *)this + 147) = 0; /*0x6f2d62*/
  *((unsigned char *)this + 592) = 0; /*0x6f2d68*/
  *((unsigned int *)this + 149) = *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[6908]; /*0x6f2d79*/
  *((unsigned int *)this + 150) = *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[6912]; /*0x6f2d85*/
  *((unsigned int *)this + 151) = *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[6916]; /*0x6f2d93*/
  *((unsigned int *)this + 152) = 0; /*0x6f2d96*/
  *((unsigned int *)this + 153) = 0; /*0x6f2d9c*/
  *((unsigned char *)this + 616) = 0; /*0x6f2da2*/
  *((unsigned char *)this + 617) = 0; /*0x6f2da8*/
  *((unsigned int *)this + 155) = 0; /*0x6f2dae*/
  *((unsigned char *)this + 624) = 0; /*0x6f2db4*/
  *((unsigned char *)this + 625) = 0; /*0x6f2dba*/
  *((unsigned char *)this + 626) = 0; /*0x6f2dc0*/
  *((unsigned int *)this + 157) = 0; /*0x6f2dc6*/
  *((unsigned int *)this + 158) = 0; /*0x6f2dcc*/
  *((unsigned char *)this + 636) = 0; /*0x6f2dd2*/
  *((unsigned int *)this + 160) = 0; /*0x6f2dd8*/
  *((unsigned int *)this + 161) = 0; /*0x6f2dde*/
  *((unsigned int *)this + 162) = *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[6908]; /*0x6f2dea*/
  *((unsigned int *)this + 163) = *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[6912]; /*0x6f2df1*/
  v9 = *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[6916]; /*0x6f2df4*/
  *((unsigned int *)this + 185) = 0; /*0x6f2dfa*/
  *((unsigned int *)this + 186) = 0; /*0x6f2e00*/
  *((unsigned int *)this + 164) = v9; /*0x6f2e06*/
  *((unsigned int *)this + 165) = 0; /*0x6f2e09*/
  *((unsigned char *)this + 664) = 0; /*0x6f2e0f*/
  *((unsigned int *)this + 167) = 0; /*0x6f2e15*/
  *((unsigned int *)this + 168) = 0; /*0x6f2e1b*/
  *((unsigned char *)this + 676) = 0; /*0x6f2e21*/
  *((unsigned int *)this + 170) = 0; /*0x6f2e27*/
  *((unsigned int *)this + 171) = 0; /*0x6f2e2d*/
  *((unsigned int *)this + 172) = 0; /*0x6f2e33*/
  *((unsigned int *)this + 173) = 0; /*0x6f2e39*/
  *((unsigned int *)this + 174) = 0; /*0x6f2e3f*/
  *((unsigned int *)this + 175) = 0; /*0x6f2e45*/
  *((unsigned int *)this + 176) = 0; /*0x6f2e4b*/
  *((unsigned char *)this + 708) = 0; /*0x6f2e51*/
  *((unsigned int *)this + 178) = 0; /*0x6f2e57*/
  *((unsigned int *)this + 179) = 0; /*0x6f2e5d*/
  *((unsigned int *)this + 180) = 0; /*0x6f2e63*/
  *((unsigned int *)this + 181) = 0; /*0x6f2e69*/
  *((unsigned int *)this + 182) = 0; /*0x6f2e6f*/
  *((unsigned int *)this + 183) = 0; /*0x6f2e75*/
  *((unsigned int *)this + 184) = 0; /*0x6f2e7b*/
  *((unsigned int *)this + 187) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2e86*/
  *((unsigned int *)this + 189) = 0; /*0x6f2e8c*/
  *((unsigned int *)this + 190) = 0; /*0x6f2e98*/
  *((unsigned int *)this + 191) = -1; /*0x6f2e9e*/
  *((unsigned int *)this + 192) = 0; /*0x6f2ea4*/
  *((unsigned int *)this + 201) = 0; /*0x6f2eaa*/
  *((unsigned int *)this + 202) = 0; /*0x6f2eb0*/
  *((unsigned int *)this + 203) = 0; /*0x6f2eb6*/
  *((unsigned int *)this + 204) = 0; /*0x6f2ebc*/
  *((unsigned int *)this + 205) = 0; /*0x6f2ec2*/
  *((unsigned int *)this + 206) = -1; /*0x6f2ec8*/
  Delegate::GetField((unsigned int *)this + 207); /*0x6f2ece*/
  TechnoClass::checkCloakState((int)((unsigned int *)this + 212)); /*0x6f2ed9*/
  FrameSnapshot::InitMax((unsigned short *)this + 440, 3); /*0x6f2ee6*/
  FrameSnapshot::Init((unsigned short *)this + 452); /*0x6f2ef1*/
  FrameSnapshot::Init((unsigned short *)this + 464); /*0x6f2efc*/
  *((unsigned int *)this + 238) = 0; /*0x6f2f01*/
  *((unsigned int *)this + 239) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2f0d*/
  *((unsigned int *)this + 241) = 0; /*0x6f2f13*/
  *((unsigned short *)this + 485) = 0; /*0x6f2f1e*/
  *((unsigned int *)this + 243) = 0; /*0x6f2f25*/
  *((unsigned int *)this + 244) = 0; /*0x6f2f3d*/
  *((unsigned char *)this + 980) = 0; /*0x6f2f55*/
  *((unsigned char *)this + 981) = 0; /*0x6f2f5b*/
  *((unsigned int *)this + 246) = 2; /*0x6f2f61*/
  *((unsigned int *)this + 247) = 1; /*0x6f2f67*/
  *((unsigned int *)this + 248) = 1; /*0x6f2f6d*/
  *((unsigned int *)this + 249) = 1; /*0x6f2f73*/
  *((unsigned int *)this + 251) = 0; /*0x6f2f79*/
  *((unsigned int *)this + 252) = 0; /*0x6f2f7f*/
  *((unsigned int *)this + 254) = 2; /*0x6f2f85*/
  *((unsigned int *)this + 255) = 1; /*0x6f2f8b*/
  *((unsigned int *)this + 256) = 1; /*0x6f2f91*/
  *((unsigned int *)this + 257) = 1; /*0x6f2f97*/
  *((unsigned int *)this + 259) = 0; /*0x6f2f9d*/
  *((unsigned int *)this + 260) = 0; /*0x6f2fa3*/
  *((unsigned char *)this + 1048) = 0; /*0x6f2fa9*/
  *((unsigned char *)this + 1049) = 0; /*0x6f2faf*/
  *((unsigned char *)this + 1050) = 0; /*0x6f2fb5*/
  *((unsigned char *)this + 1051) = 0; /*0x6f2fbb*/
  *((unsigned char *)this + 1052) = 0; /*0x6f2fc1*/
  *((unsigned char *)this + 1053) = 0; /*0x6f2fc7*/
  *((unsigned char *)this + 1054) = 0; /*0x6f2fcd*/
  *((unsigned char *)this + 1055) = 0; /*0x6f2fd3*/
  *((unsigned char *)this + 1056) = 0; /*0x6f2fd9*/
  *((unsigned char *)this + 1057) = 1; /*0x6f2fdf*/
  *((unsigned char *)this + 1058) = 1; /*0x6f2fe6*/
  *((unsigned char *)this + 1059) = 0; /*0x6f2fed*/
  *((unsigned char *)this + 1060) = 0; /*0x6f2ff3*/
  *((unsigned char *)this + 1061) = 0; /*0x6f2ff9*/
  *((unsigned char *)this + 1062) = 0; /*0x6f2fff*/
  *((unsigned char *)this + 1063) = 0; /*0x6f3005*/
  *((unsigned int *)this + 266) = 0; /*0x6f300b*/
  *((unsigned int *)this + 267) = 0; /*0x6f3011*/
  *((unsigned char *)this + 1072) = 0; /*0x6f3017*/
  *((unsigned char *)this + 1073) = 0; /*0x6f301d*/
  *((unsigned char *)this + 1074) = 0; /*0x6f3023*/
  *((unsigned int *)this + 269) = 0; /*0x6f3029*/
  *((unsigned char *)this + 1080) = 0; /*0x6f302f*/
  *((unsigned char *)this + 1081) = 0; /*0x6f3035*/
  *((unsigned char *)this + 1082) = 0; /*0x6f303b*/
  *((unsigned int *)this + 271) = 0; /*0x6f3046*/
  *((unsigned int *)this + 273) = 0; /*0x6f3051*/
  *((unsigned int *)this + 274) = 0; /*0x6f3057*/
  *((unsigned char *)this + 1100) = 1; /*0x6f305d*/
  *((unsigned char *)this + 1101) = 0; /*0x6f3064*/
  *((unsigned int *)this + 272) = &vt_DynamicVectorClass_int; /*0x6f306a*/
  *((unsigned int *)this + 277) = 10; /*0x6f3074*/
  *((unsigned int *)this + 276) = 0; /*0x6f307a*/
  *((unsigned int *)this + 279) = 0; /*0x6f3080*/
  *((unsigned int *)this + 280) = 0; /*0x6f3086*/
  *((unsigned char *)this + 1124) = 1; /*0x6f308c*/
  *((unsigned char *)this + 1125) = 0; /*0x6f3093*/
  *((unsigned int *)this + 278) = &vt_DynamicVectorClass_AbstractClass; /*0x6f3099*/
  *((unsigned int *)this + 283) = 10; /*0x6f309f*/
  *((unsigned int *)this + 282) = 0; /*0x6f30a5*/
  *((unsigned int *)this + 285) = 0; /*0x6f30ab*/
  *((unsigned int *)this + 286) = 0; /*0x6f30b1*/
  *((unsigned char *)this + 1148) = 1; /*0x6f30b7*/
  *((unsigned char *)this + 1149) = 0; /*0x6f30be*/
  *((unsigned int *)this + 284) = &vt_DynamicVectorClass_AbstractClass; /*0x6f30c4*/
  *((unsigned int *)this + 289) = 10; /*0x6f30ca*/
  *((unsigned int *)this + 288) = 0; /*0x6f30d0*/
  *((unsigned int *)this + 295) = 1; /*0x6f30d6*/
  *((unsigned int *)this + 296) = 0; /*0x6f30dc*/
  *((unsigned char *)this + 1208) = 0; /*0x6f30e2*/
  *((unsigned int *)this + 303) = 0; /*0x6f30e8*/
  *((unsigned char *)this + 1236) = 0; /*0x6f30ee*/
  *((unsigned int *)this + 310) = 0; /*0x6f30f4*/
  *((unsigned char *)this + 1272) = 0; /*0x6f30fa*/
  *((unsigned int *)this + 319) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f3106*/
  *((unsigned int *)this + 320) = 0; /*0x6f310c*/
  *((unsigned int *)this + 321) = 0; /*0x6f3112*/
  *((unsigned int *)this + 324) = 0; /*0x6f3118*/
  *((unsigned int *)this + 325) = 0; /*0x6f311e*/
  *((unsigned int *)this + 326) = 0; /*0x6f3124*/
  *((unsigned int *)this + 327) = 0; /*0x6f312a*/
  *this = &TechnoClass::`vftable'; /*0x6f3130*/
  *((unsigned int *)this + 1) = &TechnoClass::`vftable'; /*0x6f3136*/
  *((unsigned int *)this + 2) = &vt_TechnoClass; /*0x6f313d*/
  *((unsigned int *)this + 3) = &off_7F4934; /*0x6f314a*/
  AudioController::Init((unsigned int *)this + 290); /*0x6f3151*/
  AudioController::Init((unsigned int *)this + 297); /*0x6f315c*/
  AudioController::Init((unsigned int *)this + 304); /*0x6f3167*/
  AudioController::Init((unsigned int *)this + 311); /*0x6f3172*/
  *((unsigned int *)this + 316) = -1; /*0x6f3177*/
  *((unsigned int *)this + 317) = -1; /*0x6f317d*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[412] < *(int *)&MEMORY[0xA8D63C].__pad_14B0[404] /*0x6f31b6*/
    || (MEMORY[0xA8D63C].__pad_14B0[409] || !*(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[404])
    && *(int *)&MEMORY[0xA8D63C].__pad_14B0[416] > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[396] + 8))(
         &MEMORY[0xA8D63C].__pad_14B0[396],
         *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[416] + *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[404],
         0) )
  {
    v10 = (*(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[412])++; /*0x6f31c3*/
    *(unsigned int *)(*(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * v10) = this; /*0x6f31d2*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10052] < *(int *)&MEMORY[0xB077F8].__pad_579C[10044] /*0x6f3209*/
    || (MEMORY[0xB077F8].__pad_579C[10049] || !*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[10044])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[10056] > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[10036] + 8))(
         &MEMORY[0xB077F8].__pad_579C[10036],
         *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[10056] + *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[10044],
         0) )
  {
    v11 = (*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[10052])++; /*0x6f3216*/
    *(unsigned int *)(*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[10040] + 4 * v11) = this; /*0x6f3225*/
  }
  *((unsigned char *)this + 20) |= 1u; /*0x6f3237*/
  *((unsigned int *)this + 83) = aP1; /*0x6f3241*/
  memset((unsigned int *)this + 193, 0, 0x20u); /*0x6f3247*/
  *((unsigned short *)this + 484) = Random::State(&MEMORY[0xA8B230]->random[1]); /*0x6f3259*/
  return this; /*0x6f3262*/

}
} // namespace ra2

// 0x6F3F40
namespace gamemd {
unsigned int * TechnoClass::Update(BuildingClass * aP0, FootClass * aP1, void * a1, void * a2)
{

  int v3; // eax
  unsigned int *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int *v17; // eax
  unsigned int *v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int *v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // [esp-Ch] [ebp-10h]
  int v29; // [esp-Ch] [ebp-10h]
  int v30; // [esp-8h] [ebp-Ch]
  int v31; // [esp-8h] [ebp-Ch]
  int v32; // [esp-4h] [ebp-8h]
  int v33; // [esp-4h] [ebp-8h]

  v3 = a1[135]; /*0x6f3f43*/
  if ( v3 ) /*0x6f3f4b*/
    *((unsigned char *)a1 + 1050) = MEMORY[0x87F7E8][528729] == v3; /*0x6f3f55*/
  result = (unsigned int *)(*(int (**)(int *))(*a1 + 132))(a1); /*0x6f3f69*/
  if ( result ) /*0x6f3f71*/
  {
    if ( !a1[325] ) /*0x6f3f77*/
      TechnoClass::CreatePlanningNode(a1); /*0x6f3f83*/
    if ( *(unsigned int *)((*(int (**)(int *, int))(*a1 + 132))(a1, a2) + 3416) ) /*0x6f3f93*/
    {
      v5 = __2_YAPAXI_Z(116); /*0x6f3fa4*/
      if ( v5 ) /*0x6f3fab*/
      {
        v32 = *(unsigned int *)((*(int (**)(int *))(*a1 + 132))(a1) + 3428); /*0x6f3fbf*/
        v30 = *(unsigned int *)((*(int (**)(int *))(*a1 + 132))(a1) + 3424); /*0x6f3fd0*/
        v28 = *(unsigned int *)((*(int (**)(int *))(*a1 + 132))(a1) + 3420); /*0x6f3fe1*/
        v6 = (*(int (**)(int *))(*a1 + 132))(a1); /*0x6f3fe4*/
        v7 = SpawnManagerClass::SpawnManagerClass(v5, (int)a1, *(unsigned int *)(v6 + 3416), v28, v30, v32); /*0x6f3ff4*/
      }
      else
      {
        v7 = 0; /*0x6f3ffb*/
      }
      a1[180] = v7; /*0x6f3ffd*/
    }
    if ( *(unsigned int *)((*(int (**)(int *))(*a1 + 132))(a1) + 3392) ) /*0x6f400d*/
    {
      v8 = __2_YAPAXI_Z(100); /*0x6f401e*/
      if ( v8 ) /*0x6f4025*/
      {
        v33 = *(unsigned int *)((*(int (**)(int *))(*a1 + 132))(a1) + 3404); /*0x6f4039*/
        v31 = *(unsigned int *)((*(int (**)(int *))(*a1 + 132))(a1) + 3400); /*0x6f404a*/
        v29 = *(unsigned int *)((*(int (**)(int *))(*a1 + 132))(a1) + 3396); /*0x6f405b*/
        v9 = (*(int (**)(int *))(*a1 + 132))(a1); /*0x6f405e*/
        v10 = SlaveManagerClass::ctor(v8, (int)a1, *(unsigned int *)(v9 + 3392), v29, v31, v33); /*0x6f406e*/
      }
      else
      {
        v10 = 0; /*0x6f4075*/
      }
      a1[182] = v10; /*0x6f4077*/
    }
    if ( *(unsigned int *)(*(int (**)(int *, unsigned int))(*a1 + 1016))(a1, 0) /*0x6f40a2*/
      && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (**)(int *, unsigned int))(*a1 + 1016))(a1, 0) + 172) + 341) )
    {
      v11 = __2_YAPAXI_Z(80); /*0x6f40b3*/
      if ( v11 ) /*0x6f40ba*/
      {
        LOBYTE(v12) = *(unsigned char *)(*(unsigned int *)(*(int (**)(int *))(*a1 + 1016))(a1) + 320); /*0x6f40cc*/
        v13 = (*(int (**)(int *, unsigned int, int))(*a1 + 1016))(a1, 0, v12); /*0x6f40d7*/
        v14 = CaptureManagerClass::CaptureManagerClass(v11, (int)a1, *(unsigned int *)(*(unsigned int *)v13 + 164), 0); /*0x6f40e9*/
      }
      else
      {
        v14 = 0; /*0x6f40f0*/
      }
      a1[175] = v14; /*0x6f40f2*/
    }
    if ( (*(int (**)(int *))(*a1 + 44))(a1) != 6 /*0x6f412a*/
      && *(unsigned int *)(*(int (**)(int *, unsigned int))(*a1 + 1016))(a1, 0)
      && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (**)(int *, unsigned int))(*a1 + 1016))(a1, 0) + 172) + 345) )
    {
      v15 = __2_YAPAXI_Z(88); /*0x6f4136*/
      if ( v15 ) /*0x6f4140*/
        v16 = ParasiteClass::ParasiteClass(v15, (int)a1); /*0x6f4145*/
      else
        v16 = 0; /*0x6f414c*/
      a1[423] = v16; /*0x6f414e*/
    }
    if ( *(unsigned int *)(*(int (**)(int *, unsigned int))(*a1 + 1016))(a1, 0) /*0x6f4179*/
      && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (**)(int *, unsigned int))(*a1 + 1016))(a1, 0) + 172) + 346) )
    {
      v17 = (unsigned int *)__2_YAPAXI_Z(80); /*0x6f4185*/
      if ( v17 ) /*0x6f418f*/
        v18 = TemporalClass::TemporalClass(v17, (int)a1); /*0x6f4194*/
      else
        v18 = 0; /*0x6f419b*/
      v19 = *a1; /*0x6f419d*/
      a1[157] = (int)v18; /*0x6f41a3*/
      *(unsigned int *)(a1[157] + 76) = *(unsigned int *)(*(unsigned int *)(*(int (**)(int *, unsigned int))(v19 + 1016))(a1, 0) + 164); /*0x6f41bd*/
    }
    if ( *(int *)((*(int (**)(int *))(*a1 + 132))(a1) + 1564) > 0 ) /*0x6f41d2*/
    {
      v20 = __2_YAPAXI_Z(96); /*0x6f41d6*/
      if ( v20 ) /*0x6f41e0*/
        v21 = AirstrikeClass::AirstrikeClass(v20, (int)a1); /*0x6f41e5*/
      else
        v21 = 0; /*0x6f41ec*/
      a1[165] = v21; /*0x6f41ee*/
    }
    if ( *(unsigned char *)((*(int (**)(int *))(*a1 + 132))(a1) + 3375) /*0x6f4212*/
      && *(unsigned char *)((*(int (**)(int *))(*a1 + 132))(a1) + 3376) )
    {
      v22 = a1[135]; /*0x6f421c*/
      *((unsigned char *)a1 + 472) = 1; /*0x6f4222*/
      a1[327] = v22; /*0x6f4229*/
      v23 = *(unsigned int *)(v22 + 488); /*0x6f422f*/
      if ( v23 ) /*0x6f4237*/
      {
        if ( v23 == 1 ) /*0x6f4250*/
          a1[326] = *(unsigned int *)(MEMORY[0x87F7E8][7806] + 3420); /*0x6f425d*/
        else
          a1[326] = *(unsigned int *)(MEMORY[0x87F7E8][7806] + 3424); /*0x6f4271*/
      }
      else
      {
        a1[326] = *(unsigned int *)(MEMORY[0x87F7E8][7806] + 3416); /*0x6f4245*/
      }
    }
    v24 = (unsigned int *)(*(int (**)(int *))(*a1 + 132))(a1); /*0x6f427b*/
    v25 = v24[809]; /*0x6f4281*/
    v24 += 809; /*0x6f4287*/
    a1[246] = v25; /*0x6f428c*/
    a1[247] = v24[1]; /*0x6f4295*/
    a1[248] = v24[2]; /*0x6f429e*/
    a1[249] = v24[3]; /*0x6f42a7*/
    v26 = (*(int (**)(int *))(*a1 + 132))(a1); /*0x6f42b1*/
    v27 = *(unsigned int *)(v26 + 3256); /*0x6f42b7*/
    result = (unsigned int *)(v26 + 3256); /*0x6f42bd*/
    a1[254] = v27; /*0x6f42c2*/
    a1[255] = result[1]; /*0x6f42cb*/
    a1[256] = result[2]; /*0x6f42d4*/
    a1[257] = result[3]; /*0x6f42dd*/
    a1[295] = 1; /*0x6f42e3*/
    a1[296] = 0; /*0x6f42ed*/
  }
  return result; /*0x6f42f7*/

}
} // namespace ra2

// 0x6F4500
namespace gamemd {
int TechnoClass::DTOR()
{

  unsigned int *v2; // ecx
  int v3; // ecx
  int v4; // ecx
  unsigned int *v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned int *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  int v17; // [esp+18h] [ebp-4h] BYREF

  v2 = *((unsigned int *)this + 325); /*0x6f4507*/
  *(unsigned int *)this = &TechnoClass::`vftable'; /*0x6f450d*/
  *((unsigned int *)this + 1) = &TechnoClass::`vftable'; /*0x6f4515*/
  *((unsigned int *)this + 2) = &vt_TechnoClass; /*0x6f451c*/
  *((unsigned int *)this + 3) = &off_7F4934; /*0x6f4523*/
  if ( v2 ) /*0x6f452a*/
  {
    Sidebar::CancelSidebarProductionQueue(v2); /*0x6f452c*/
    *((unsigned int *)this + 325) = 0; /*0x6f4531*/
  }
  v3 = *((unsigned int *)this + 175); /*0x6f4537*/
  if ( v3 ) /*0x6f453f*/
  {
    (*(void (**)(int, int))(*(unsigned int *)v3 + 32))(v3, 1); /*0x6f4545*/
    *((unsigned int *)this + 175) = 0; /*0x6f4548*/
  }
  v4 = *((unsigned int *)this + 180); /*0x6f454e*/
  if ( v4 ) /*0x6f4556*/
  {
    (*(void (**)(int, int))(*(unsigned int *)v4 + 32))(v4, 1); /*0x6f455c*/
    *((unsigned int *)this + 180) = 0; /*0x6f455f*/
  }
  v5 = *((unsigned int *)this + 182); /*0x6f4565*/
  if ( v5 ) /*0x6f456d*/
  {
    TechnoClass::MutateAll(v5, 0, 0); /*0x6f4571*/
    v6 = *((unsigned int *)this + 182); /*0x6f4576*/
    if ( v6 ) /*0x6f457e*/
      (*(void (**)(int, int))(*(unsigned int *)v6 + 32))(v6, 1); /*0x6f4584*/
    *((unsigned int *)this + 182) = 0; /*0x6f4587*/
  }
  v7 = *((unsigned int *)this + 157); /*0x6f458d*/
  if ( v7 ) /*0x6f4595*/
  {
    (*(void (**)(int, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x6f459b*/
    *((unsigned int *)this + 157) = 0; /*0x6f459e*/
  }
  v8 = *(unsigned int **)((char *)this + 660); /*0x6f45a4*/
  if ( v8 && v8[19] == this ) /*0x6f45b1*/
  {
    (*(void (**)(unsigned int *, int))(*v8 + 32))(v8, 1); /*0x6f45bb*/
    *((unsigned int *)this + 165) = 0; /*0x6f45be*/
  }
  AudioFile::Stop(&this->turretRotateSoundController); /*0x6f45cd*/
  AudioFileClass::Release(&this->turretRotateSoundController); /*0x6f45d4*/
  AudioFile::Stop(&this->gattlingSoundController); /*0x6f45e1*/
  AudioFileClass::Release(&this->gattlingSoundController); /*0x6f45e8*/
  AudioFile::Stop(&this->unusedGattlingSoundController); /*0x6f45f5*/
  AudioFileClass::Release(&this->unusedGattlingSoundController); /*0x6f45fc*/
  AudioFileClass::Release(&this->queuedVoiceSoundController); /*0x6f4607*/
  *((unsigned int *)this + 135) = 0; /*0x6f4610*/
  *((unsigned char *)this + 1050) = 0; /*0x6f4616*/
  v17 = this; /*0x6f4628*/
  v9 = ((int (*)(TechnoClass **, int *))MEMORY[0xA8EC78]->__pad_0[4])(&MEMORY[0xA8EC78], &v17); /*0x6f462c*/
  if ( v9 != -1 ) /*0x6f4633*/
    FactoryClass::RemoveItem(&MEMORY[0xA8EC78], v9); /*0x6f463b*/
  v17 = this; /*0x6f4650*/
  v10 = (*(int (**)(int *, int *))(MEMORY[0xB0F6C8] + 16))(&MEMORY[0xB0F6C8], &v17); /*0x6f4654*/
  if ( v10 != -1 ) /*0x6f465a*/
    DynamicVector::RemoveItem(&MEMORY[0xB0F6C8], v10); /*0x6f4662*/
  v11 = *((unsigned int *)this + 75); /*0x6f4667*/
  if ( v11 ) /*0x6f466f*/
  {
    (*(void (**)(int))(*(unsigned int *)v11 + 248))(v11); /*0x6f4673*/
    *((unsigned int *)this + 75) = 0; /*0x6f4679*/
  }
  v12 = *((unsigned int *)this + 76); /*0x6f467f*/
  if ( v12 ) /*0x6f4687*/
  {
    (*(void (**)(int))(*(unsigned int *)v12 + 248))(v12); /*0x6f468b*/
    *((unsigned int *)this + 76) = 0; /*0x6f4691*/
  }
  *((unsigned int *)this + 284) = &vt_VectorClass_AbstractClass; /*0x6f469d*/
  AbstractClassVector::ddtor(&this->attackedTargets); /*0x6f46a3*/
  v13 = *((unsigned int *)this + 279); /*0x6f46a8*/
  *((unsigned int *)this + 278) = &vt_VectorClass_AbstractClass; /*0x6f46ae*/
  if ( v13 && *((unsigned char *)this + 1125) ) /*0x6f46bc*/
  {
    OperatorDelete(v13); /*0x6f46c5*/
    *((unsigned int *)this + 279) = 0; /*0x6f46cd*/
  }
  *((unsigned char *)this + 1125) = 0; /*0x6f46d3*/
  *((unsigned int *)this + 280) = 0; /*0x6f46d9*/
  v14 = *((unsigned int *)this + 273); /*0x6f46df*/
  *((unsigned int *)this + 272) = &vt_VectorClass_int; /*0x6f46e5*/
  if ( v14 && *((unsigned char *)this + 1101) ) /*0x6f46f3*/
  {
    OperatorDelete(v14); /*0x6f46fc*/
    *((unsigned int *)this + 273) = 0; /*0x6f4704*/
  }
  *((unsigned char *)this + 1101) = 0; /*0x6f4710*/
  *((unsigned int *)this + 274) = 0; /*0x6f4716*/
  nullsub_69((char *)this + 336); /*0x6f471c*/
  *(unsigned int *)this = &RadioClass::`vftable'; /*0x6f4721*/
  *((unsigned int *)this + 1) = &RadioClass::`vftable'; /*0x6f4727*/
  *((unsigned int *)this + 2) = &RadioClass::`vftable'; /*0x6f472e*/
  *((unsigned int *)this + 3) = &vt_RadioClass; /*0x6f4735*/
  v15 = *((unsigned int *)this + 57); /*0x6f473c*/
  *((unsigned int *)this + 56) = &vt_VectorClass_TechnoClass; /*0x6f4742*/
  if ( v15 && *((unsigned char *)this + 237) ) /*0x6f4750*/
  {
    OperatorDelete(v15); /*0x6f4759*/
    *((unsigned int *)this + 57) = 0; /*0x6f4761*/
  }
  *((unsigned char *)this + 237) = 0; /*0x6f4767*/
  *((unsigned int *)this + 58) = 0; /*0x6f476d*/
  *(unsigned int *)this = &MissionClass::`vftable'; /*0x6f4775*/
  *((unsigned int *)this + 1) = &MissionClass::`vftable'; /*0x6f477b*/
  *((unsigned int *)this + 2) = &MissionClass::`vftable'; /*0x6f4782*/
  *((unsigned int *)this + 3) = &vt_MissionClass; /*0x6f4789*/
  return ObjectClass::Dtor((unsigned int *)this); /*0x6f4795*/

}
} // namespace gamemd

// 0x702D40
namespace gamemd {
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
  unsigned int *v17; // eax
  unsigned int *v18; // eax
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
  v2 = (*(int (**)(#377 *))(*(unsigned int *)this + 132))(this); /*0x702d50*/
  v3 = (*(int (**)(int, unsigned int))(*(unsigned int *)v2 + 132))(v2, *((unsigned int *)this + 135)); /*0x702d6b*/
  if ( *((unsigned char *)this + 144) ) /*0x702d6d*/
  {
    v4 = (void **)*((unsigned int *)this + 13); /*0x702d77*/
    if ( v4 ) /*0x702d7c*/
    {
      if ( v28 ) /*0x702d80*/
        TeamClass::Update_0(v4, 6, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702d90*/
    }
  }
  if ( *((unsigned char *)this + 144) ) /*0x702d95*/
  {
    v5 = (void **)*((unsigned int *)this + 13); /*0x702da3*/
    if ( v5 && v28 ) /*0x702dac*/
      TeamClass::Update_0(v5, 4, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702dbb*/
    if ( *((unsigned char *)this + 144) /*0x702dd6*/
      && (*(int (**)(#377 *))(*(unsigned int *)this + 44))(this) != 1
      && *((unsigned char *)this + 144) )
    {
      v6 = (void **)*((unsigned int *)this + 13); /*0x702de0*/
      if ( v6 && v28 ) /*0x702de9*/
        TeamClass::Update_0(v6, 7, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702df8*/
      if ( *((unsigned char *)this + 144) ) /*0x702dfd*/
      {
        v7 = (void **)*((unsigned int *)this + 13); /*0x702e07*/
        if ( v7 ) /*0x702e0c*/
          TeamClass::Update_0(v7, 48, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702e1c*/
        if ( *((unsigned char *)this + 144) ) /*0x702e21*/
        {
          v8 = (void **)*((unsigned int *)this + 13); /*0x702e2b*/
          if ( v8 ) /*0x702e30*/
            TeamClass::Update_0(v8, 29, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702e3f*/
        }
      }
    }
  }
  result = (*(int (**)(#377 *))(*(unsigned int *)this + 132))(this); /*0x702e48*/
  if ( !*(unsigned char *)(result + 3231) )
  {
    if ( v28 )
    {
      if ( Object::IsAlliedWithObjectHouse(*(unsigned int **)(v28 + 540), (IUnknown *)this) ) /*0x702e6c*/
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
      if ( *(unsigned char *)(v28 + 130)
        && (v10 = *(unsigned int *)(v28 + 284)) != 0
        && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v10 + 132))(v10) + 3214) )
      {
        v11 = (*(int (**)(unsigned int))(**(unsigned int **)(v28 + 284) + 132))(*(unsigned int *)(v28 + 284)); /*0x702ecb*/
        v23 = *((unsigned int *)this + 135); /*0x702eda*/
        v19 = (*(int (**)(int))(*(unsigned int *)v11 + 132))(v11); /*0x702ee9*/
        VeterancyStruct::Accumulate((float *)(*(unsigned int *)(v28 + 284) + 336), v19, v23); /*0x702ef0*/
      }
      else if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v28 + 132))(v28) + 3214) )
      {
        v12 = (*(int (**)(int))(*(unsigned int *)v28 + 132))(v28); /*0x702f0d*/
        v24 = *((unsigned int *)this + 135); /*0x702f1c*/
        v20 = (*(int (**)(int))(*(unsigned int *)v12 + 132))(v12); /*0x702f25*/
        VeterancyStruct::Accumulate((float *)(v28 + 336), v20, v24); /*0x702f2c*/
      }
      else if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v28 + 132))(v28) + 3432) )
      {
        v13 = *(unsigned int *)(v28 + 724); /*0x702f45*/
        if ( v13 && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v13 + 132))(v13) + 3214) ) /*0x702f5b*/
        {
          v14 = (*(int (**)(unsigned int))(**(unsigned int **)(v28 + 724) + 132))(*(unsigned int *)(v28 + 724)); /*0x702f71*/
          v25 = *((unsigned int *)this + 135); /*0x702f80*/
          v21 = (*(int (**)(int))(*(unsigned int *)v14 + 132))(v14); /*0x702f8f*/
          VeterancyStruct::Accumulate((float *)(*(unsigned int *)(v28 + 724) + 336), v21, v25); /*0x702f96*/
        }
      }
      else if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)v28 + 1024))(v28)
             && (*(int (**)(int))(*(unsigned int *)v28 + 44))(v28) == 6 )
      {
        v15 = (*(int (**)(int))(*(unsigned int *)v28 + 44))(v28); /*0x702fb6*/
        v16 = *(unsigned int *)(*(unsigned int *)(v15 == 6 ? v28 + 0x688 : 1672) + 4 * *(unsigned int *)(v15 == 6 ? v28 + 0x69C : 1692));
        v26 = *((unsigned int *)this + 135); /*0x702fda*/
        v22 = (*(int (**)(unsigned int))(**(unsigned int **)(v16 + 1728) + 132))(*(unsigned int *)(v16 + 1728)); /*0x702fe9*/
        VeterancyStruct::Accumulate((float *)(v16 + 336), v22, v26); /*0x702ff0*/
      }
      *(unsigned int *)(*((unsigned int *)this + 135) + 21644) = (*(int (**)(int))(*(unsigned int *)v28 + 56))(v28); /*0x703003*/
      *(unsigned int *)(*(unsigned int *)(v28 + 540) + 21736) += v3; /*0x70300f*/
    }
    result = (*(int (**)(#377 *))(*(unsigned int *)this + 44))(this) - 1; /*0x70301c*/
    switch ( result ) /*0x70302e*/
    {
      case 0: /*0x70302e*/
        goto LABEL_59;
      case 1: /*0x70302e*/
        if ( !v28 ) /*0x7030d5*/
          goto LABEL_63; /*0x7030d5*/
        if ( !*(unsigned char *)((*(int (**)(#377 *))(*(unsigned int *)this + 132))(this) + 3231) ) /*0x7030e5*/
        {
          HouseClass::IncrementStat( /*0x703108*/
            (unsigned int *)(*(unsigned int *)(v28 + 540) + 9032),
            *(unsigned int *)(*((unsigned int *)this + 433) + 3576));
          v27 = 1; /*0x70310d*/
        }
LABEL_55:
        if ( v28 ) /*0x703117*/
        {
          if ( !v27 && !*(unsigned char *)((*(int (**)(#377 *))(*(unsigned int *)this + 132))(this) + 3231) ) /*0x70312f*/
          {
            HouseClass::IncrementStat( /*0x703152*/
              (unsigned int *)(*(unsigned int *)(v28 + 540) + 11088),
              *(unsigned int *)(*((unsigned int *)this + 432) + 3576));
            v27 = 1; /*0x703157*/
          }
LABEL_59:
          if ( v28 && !v27 && !*(unsigned char *)((*(int (**)(#377 *))(*(unsigned int *)this + 132))(this) + 3231) ) /*0x703175*/
            HouseClass::IncrementStat( /*0x703198*/
              (unsigned int *)(*(unsigned int *)(v28 + 540) + 13144),
              *(unsigned int *)(*((unsigned int *)this + 433) + 3576));
        }
LABEL_63:
        ++*(unsigned int *)(*((unsigned int *)this + 135) + 21556); /*0x70319d*/
        if ( v28 ) /*0x7031b2*/
        {
          if ( !*(unsigned char *)((*(int (**)(#377 *))(*(unsigned int *)this + 132))(this) + 3231) ) /*0x7031be*/
          {
            v18 = (unsigned int *)(*(unsigned int *)(v28 + 540) /*0x7031d5*/
                           + 4 * (*(int (**)(#377 *))(*(unsigned int *)this + 56))(this)
                           + 21476);
            ++*v18; /*0x7031dc*/
          }
        }
        result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x7031e3*/
        if ( (unsigned char)result ) /*0x7031ea*/
LABEL_67:
          result = RadarClass::SetFlag(&MEMORY[0x87F7E8], 0); /*0x7031ec*/
        break; /*0x7031f3*/
      case 5: /*0x70302e*/
        result = (*(int (**)(#377 *))(*(unsigned int *)this + 132))(this); /*0x703039*/
        if ( !*(unsigned char *)(result + 562) ) /*0x70303f*/
        {
          if ( *((unsigned int *)this + 335) != -1 ) /*0x703054*/
            ++*(unsigned int *)(*((unsigned int *)this + 135) + 21640); /*0x70305c*/
          if ( v28 && !*(unsigned char *)((*(int (**)(#377 *))(*(unsigned int *)this + 132))(this) + 3231) ) /*0x703070*/
          {
            HouseClass::IncrementStat( /*0x703093*/
              (unsigned int *)(*(unsigned int *)(v28 + 540) + 15200),
              *(unsigned int *)(*((unsigned int *)this + 328) + 3576));
            v17 = (unsigned int *)(*(unsigned int *)(v28 + 540) /*0x7030a5*/
                           + 4 * (*(int (**)(#377 *))(*(unsigned int *)this + 56))(this)
                           + 21560);
            ++*v17; /*0x7030ac*/
          }
          result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x7030b3*/
          if ( (unsigned char)result ) /*0x7030ba*/
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

// 0x705860
namespace gamemd {
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

  Coord::To_Screen(MEMORY[0x887324], &a1, &v41); /*0x705875*/
  Coord::To_Screen(MEMORY[0x887324], &a4, &v31); /*0x70588a*/
  v6 = -32 - ZCoordToScreenY(a3); /*0x7058a4*/
  v7 = -32 - ZCoordToScreenY(a6); /*0x7058b4*/
  v28 = abs32(v31 - v41); /*0x7058c5*/
  v8 = *(unsigned int *)MEMORY[0x887314]; /*0x7058da*/
  v27 = abs32(v32 - v42); /*0x7058dc*/
  result = (*(int (**)(int))(v8 + 132))(MEMORY[0x887314]); /*0x7058e0*/
  if ( (unsigned char)result ) /*0x7058e8*/
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
      (*(void (**)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x7059eb*/
      v15 = *v10; /*0x7059f2*/
      v25 = v31 - 2; /*0x7059f9*/
      v29 = v31 + 1; /*0x705a01*/
      v26 = v32; /*0x705a05*/
      v30 = v32; /*0x705a09*/
      (*(void (**)(int *, int *, int *, int))(v15 + 48))(v10, &v25, &v29, v14); /*0x705a19*/
      v26 = v32 - 1; /*0x705a2e*/
      v30 = v32 + 2; /*0x705a32*/
      v25 = v31 - 1; /*0x705a3a*/
      v29 = v31 - 1; /*0x705a3e*/
      (*(void (**)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a4c*/
      v25 = v31; /*0x705a58*/
      v30 = v32 + 2; /*0x705a62*/
      v26 = v32 - 1; /*0x705a66*/
      v29 = v31; /*0x705a72*/
      (*(void (**)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a7c*/
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
} // namespace ra2

// 0x70D0D0
namespace gamemd {
int TechnoClass::HasVoiceResponse(int weaponIndex)
{

  HouseClass *v3; // edi
  int v4; // esi

  v3 = (HouseClass *)&this->initialOwner; /*0x70d0d5*/
  if ( !VeterancyStruct::IsVeteran((float *)&this->initialOwner) && !VeterancyStruct::IsElite((float *)v3->__pad_0) ) /*0x70d0e8*/
    return 0; /*0x70d0e8*/
  v4 = (*(int (**)(TechnoClass *))(*(unsigned int *)this->__pad_0 + 132))(this); /*0x70d0fd*/
  if ( VeterancyStruct::IsVeteran((float *)v3->__pad_0) && *(unsigned char *)(v4 + weaponIndex + 668) ) /*0x70d10c*/
    return 1; /*0x70d11c*/
  return VeterancyStruct::IsElite((float *)v3->__pad_0) /*0x70d142*/
      && (*(unsigned char *)(v4 + weaponIndex + 668) || *(unsigned char *)(v4 + weaponIndex + 686));

}
} // namespace ra2

// 0x73B140
namespace gamemd {
HouseClass * * TechnoClass::RenderTechnoSHP(int * a0, int * a1, int * a2, HouseClass * aP3, HouseClass * aP4, int a6, int a7, TechnoClass * aP7, TechnoClass * aP8, int a10, int a11)
{

  TechnoClass *v11; // ecx
  TechnoClass *v12; // esi
  unsigned int *v13; // eax
  unsigned int *v14; // eax
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
  unsigned char v42[12]; // [esp+40h] [ebp-Ch] BYREF

  v12 = v11; /*0x73b146*/
  v13 = (unsigned int *)(*(int (**)(TechnoClass *, int *))(*(unsigned int *)v11->__pad_0 + 72))(v11, &v39); /*0x73b152*/
  LOWORD(v36) = *v13 / 256; /*0x73b165*/
  HIWORD(v36) = v13[1] / 256; /*0x73b17e*/
  v38 = v36; /*0x73b18b*/
  v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38); /*0x73b190*/
  if ( CellClass::QuickPassable(v14) ) /*0x73b197*/
    aP8 = 0; /*0x73b1a0*/
  v15 = 0; /*0x73b1ae*/
  if ( *(unsigned char *)(v12[1].ironTintTimer[2] + 3606) ) /*0x73b1b0*/
  {
    if ( TechnoClass::CheckTargetCell(v12) && !TechnoClass::ScanNeighborCells(v12) /*0x73b1fb*/
      || (Array = (HouseClass *)Array::Get(v12, 0), *(unsigned int *)&v12[1].hasParachute)
      && Array
      && (*(int (**)(HouseClass *))(*(unsigned int *)Array->__pad_0 + 44))(Array) == 6
      && *(unsigned char *)(Array->builtInfantryTypes[126] + 5821) )
    {
      v15 = 1; /*0x73b205*/
    }
  }
  v37 = 0; /*0x73b20f*/
  v17 = 10240; /*0x73b217*/
  switch ( (*(int (**)(TechnoClass *, unsigned int, unsigned int))(*(unsigned int *)v12->__pad_0 + 104))(v12, 0, 0) ) /*0x73b225*/
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
  if ( (*(unsigned __int8 (**)(TechnoClass *))(*(unsigned int *)v12->__pad_0 + 468))(v12) /*0x73b26b*/
    || (*(unsigned __int8 (**)(TechnoClass *))(*(unsigned int *)v12->__pad_0 + 472))(v12) )
  {
    v17 |= 4u; /*0x73b275*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v12->focus) /*0x73b28b*/
    && (*(unsigned __int8 (**)(TechnoClass *))(*(unsigned int *)v12->__pad_0 + 196))(v12) )
  {
    v17 = (*(int (**)(TechnoClass *, int))(*(unsigned int *)v12->__pad_0 + 1084))(v12, v17); /*0x73b2a0*/
  }
  SHPFrame = (XSurface *)BuildingClass::GetSHPFrame( /*0x73b2d3*/
                           *(unsigned int **)(*(unsigned int *)(stru_B05488.field_4C + 4 * *((unsigned int *)v12->focus + 22549)) + 780),
                           (ConvertClass *)v17);
  aP6.LockCount = (int)a1 + *(unsigned int *)::aP6.__pad_0 - 128; /*0x73b2dd*/
  *(unsigned int *)v41.__pad_0 = (char *)a2 + ::aP6.Width - 128; /*0x73b2eb*/
  v41.Width = ::aP6.Height; /*0x73b2f6*/
  v41.Height = ::aP6.LockCount; /*0x73b2fa*/
  if ( v15 && ::aP6.LockCount > 16 ) /*0x73b307*/
  {
    v18 = (XSurface *)aP7; /*0x73b30d*/
    v39 = *(unsigned int *)::aP6.__pad_0; /*0x73b311*/
    aP6.Width = ::aP6.Height; /*0x73b319*/
    v41.Height = ::aP6.LockCount - 16; /*0x73b329*/
    aP6.Height = ::aP6.LockCount - 16; /*0x73b32d*/
    v20 = *(unsigned int *)v12->__pad_0; /*0x73b331*/
    _FFFFFFFC = (AbstractClass *)aP8; /*0x73b333*/
    *(unsigned int *)aP6.__pad_0 = ::aP6.Width; /*0x73b339*/
    v30 = (XSurface *)((*(int (**)(TechnoClass *, unsigned int, TechnoClass *))(v20 + 748))(v12, 0, aP7) - 5); /*0x73b34a*/
    v21 = (*(int (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[22532] + 120))(*(unsigned int *)&stru_87C374.__pad_579C[22532]); /*0x73b35a*/
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
    v27 = (TechnoClass *)(*(int (**)(TechnoClass *))(*(unsigned int *)v12->__pad_0 + 748))(v12); /*0x73b3be*/
    v24 = (*(int (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[22532] + 120))(*(unsigned int *)&stru_87C374.__pad_579C[22532]); /*0x73b3cc*/
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
    v26 = (*(int (**)(TechnoClass *))(*(unsigned int *)v12->__pad_0 + 752))(v12); /*0x73b407*/
    v28 = (TechnoClass *)(*(int (**)(TechnoClass *, int))(*(unsigned int *)v12->__pad_0 + 748))(v12, v26); /*0x73b41e*/
    eax26a = (*(int (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[22532] + 120))(*(unsigned int *)&stru_87C374.__pad_579C[22532]); /*0x73b42c*/
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
} // namespace ra2

// 0x73B470
namespace gamemd {
void TechnoClass_DrawVoxel()
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
  int16_t v40; // ax
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
  VectorClass_flat *v72; // esi
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
  uint8_t v108; // [esp+109h] [ebp-1B3h]
  uint8_t v109; // [esp+109h] [ebp-1B3h]
  char v110; // [esp+10Ah] [ebp-1B2h]
  uint8_t v111; // [esp+10Ah] [ebp-1B2h]
  uint8_t v112; // [esp+10Ah] [ebp-1B2h]
  uint8_t v113; // [esp+10Bh] [ebp-1B1h]
  uint8_t v114; // [esp+10Bh] [ebp-1B1h]
  TechnoClass *aP3; // [esp+10Ch] [ebp-1B0h] BYREF
  ObjectClass *v116; // [esp+110h] [ebp-1ACh] BYREF
  int v117; // [esp+114h] [ebp-1A8h] BYREF
  double v118; // [esp+118h] [ebp-1A4h] BYREF
  TechnoClass *v120; // [esp+124h] [ebp-198h]
  int64_t v121; // [esp+128h] [ebp-194h] BYREF
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
  unsigned int a1[2]; // [esp+168h] [ebp-154h] BYREF
  int GroundHeight; // [esp+170h] [ebp-14Ch]
  float v136; // [esp+174h] [ebp-148h] BYREF
  float v137; // [esp+178h] [ebp-144h]
  float v138; // [esp+17Ch] [ebp-140h]
  int v140; // [esp+184h] [ebp-138h]
  AbstractClass *v141; // [esp+188h] [ebp-134h]
  float v142[12]; // [esp+18Ch] [ebp-130h] BYREF
  unsigned int v143[4]; // [esp+1BCh] [ebp-100h] BYREF
  unsigned char v144[48]; // [esp+1CCh] [ebp-F0h] BYREF
  float v145[12]; // [esp+1FCh] [ebp-C0h] BYREF
  unsigned char v146[48]; // [esp+22Ch] [ebp-90h] BYREF
  float v147[12]; // [esp+25Ch] [ebp-60h] BYREF
  float v148[12]; // [esp+28Ch] [ebp-30h] BYREF

  v121 = a2;
  int v10 = ecx0[433];
  if ( !(*(uint8_t (**)(unsigned int *, int))(*ecx0 + 1088))(ecx0, HouseClass_Player.field_0) )
    v10 = (*(int (**)(unsigned int *, int))(*ecx0 + 204))(ecx0, 1);
  if ( *((unsigned char *)ecx0 + 1760) && *(unsigned int *)(ecx0[433] + 1720) )
    v10 = *(unsigned int *)(ecx0[433] + 1720);
  int v11 = ecx0[334] % *(unsigned int *)(*(unsigned int *)(v10 + 180) + 8);
  v122 = 0;
  v125 = v11;
  if ( !v11 )
  {
    int v12 = *(unsigned int *)(v10 + 188);
    if ( !v12 )
      goto LABEL_10;
    v11 = ecx0[82] % *(unsigned int *)(v12 + 8);
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
  *(unsigned int *)&stru_87C374[44960] = dword_B1D13C;
  int * v13 = (int *)(*(int (**)(unsigned int *, float *))(*dword_B1D13C + 120))(dword_B1D13C, &v136);
  v130 = *v13;
  v131 = v13[1];
  v132 = v13[2];
  int v14 = v13[3];
  *((unsigned char *)ecx0 + 1747) = 1;
  v133 = v14;
  aP3 = (TechnoClass *)((stru_87C374[45220] != 0) - 1);
  if ( !ecx0[413] )
    WinAPI::Wrapper(-2147467261);
  const void *v15; // eax
  v15 = (const void *)(*(int (__stdcall **)(unsigned int, float *, TechnoClass **))(*(unsigned int *)ecx0[413] + 36))(
                        ecx0[413],
                        v145,
                        &aP3);
  Transform::Copy(v144, v15);
  v16 = (ObjectClass *)aP3;
  qmemcpy(v142, v144, sizeof(v142));
  int v17 = v125;
  if ( aP3 != (TechnoClass *)-1 )
  {
    v16 = (ObjectClass *)(v125 & 0x1F | (32 * (unsigned int)aP3));
    aP3 = (TechnoClass *)v16;
  }
  v126 = v130;
  v140 = ((int)v16 >> 5) & 0x3FF;
  v128 = v132;
  v127 = v131;
  v129 = v133;
  *(unsigned int *)aP6[0] = xmmword_B1CFA8;
  aP6.Width = DWORD1(xmmword_B1CFA8);
  aP6.Height = DWORD2(xmmword_B1CFA8);
  aP6.LockCount = IDA_HIDWORD(xmmword_B1CFA8);
  if ( !*(unsigned char *)(ecx0[433] + 488) || SpawnManagerClass::CountDockedSpawns((int *)ecx0[180]) )
  {
    int v20 = *ecx0;
    v90 = started;
    inited = (float *)AudioConfig::InitDefault(v144);
    float * v88 = MultiplyMatrix3x4((ObjectClass *)v145, inited, v142);
    (*(void (**)(unsigned int *, int, int, TechnoClass *, int, int *, int64_t *, float *, BuildingTypeClass *, int, unsigned int))(v20 + 1296))(
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
    (*(void (**)(unsigned int *, int, int, TechnoClass *, int, int *, int64_t *, float *, BuildingTypeClass *, int, unsigned int))(v18 + 1296))(
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
    v23 = ((unsigned int)((*ProgressTimer::GetValue((unsigned short *)ecx0 + 464, (IUnknown *)&v116) >> 10) + 1) >> 1) & 0x1F
        | (unsigned int)v22 & 0xFFFFFFE0;
    if ( !*(unsigned int *)((*(int (**)(unsigned int *))(*ecx0 + 132))(ecx0) + 1824) )
      v23 &= 0xFFFFFC1F;
    v22 = (TechnoClass *)(((uint8_t)v122 << 16) | v23);
    v120 = v22;
  }
  if ( !*(unsigned char *)(v10 + 3233) && (!TechnoClass::OwnerHasPower(ecx0) || !TechnoClass::checkEMPState(ecx0)) )
  {
    if ( *(unsigned int *)(v10 + 192) && *(unsigned int *)(v10 + 196) )
    {
      v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((unsigned short *)ecx0 + 440, (IUnknown *)&v117) >> 10)
                                            + 1) >> 1)
                            & 0x1F)
                           - 8);
      double v24 = (double)(int)v116 * -0.1963495408493621;
      v118 = v24;
      TechnoClass::CalcFacingFromMatrix((IUnknown *)v142);
      float aP1 = -(v118 - v24);
      ((void (__thiscall *)(float *, float))Matrix3D::RotateZ)(v142, aP1);
      aP1a = (double)*(int *)((*(int (**)(unsigned int *, unsigned int))(*ecx0 + 1016))(ecx0, 0) + 12) * unk_B1D008;
      aP1b = (double)*(int *)((*(int (**)(unsigned int *, unsigned int, unsigned int, unsigned int))(*ecx0 + 1016))(
                                ecx0,
                                0,
                                0,
                                IDA_LODWORD(aP1a))
                            + 4)
           * unk_B1D008;
      Vector::MatrixMulVectorMath(&v142[2], aP1b, aP1_4, v104);
      int v25 = *ecx0;
      v104 = 0.0;
      aP1_4 = 0.0;
      aP1c = a9;
      float * v26 = (float *)AudioConfig::InitDefault(&v144[8]);
      float * v27 = MultiplyMatrix3x4((ObjectClass *)&v145[2], v26, &v142[2]);
      (*(void (**)(unsigned int *, int, int, unsigned int, int, int *, int *, float *, int))(v25 + 1296))(
        ecx0,
        v10 + 192,
        v127,
        IDA_HIDWORD(v121),
        v10 + 640,
        &v132,
        &v122,
        v27,
        aP1c);
    }
    goto LABEL_81;
  }
  v117 = 0;
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(unsigned char *)(ecx0[433] + 3285) )
  {
    if ( *(unsigned int *)(v10 + 192) && *(unsigned int *)(v10 + 196) )
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
  int v29 = *(unsigned int *)(v10 + 8 * v28 + 344);
  v120 = v22;
  if ( !v29 || !*(unsigned int *)(v10 + 8 * v28 + 348) )
    goto LABEL_36;
  v110 = 1;
LABEL_37:
  v116 = (ObjectClass *)v22;
  if ( v22 == (TechnoClass *)-1 || v10 == -600 )
  {
    v105 = 0;
    goto LABEL_46;
  }
  if ( !*(unsigned int *)(v10 + 604) )
    goto LABEL_44;
  if ( !TechnoClass::processIronCurtainExpiry((unsigned int *)(v10 + 600), (IUnknown *)&v116) )
  {
    v30 = SortedStateVector::BinarySearch((char **)(v10 + 600), (IUnknown *)&v116);
    if ( v30 )
    {
      *(unsigned int *)(v10 + 616) = v30;
      goto LABEL_43;
    }
LABEL_44:
    v105 = unk_B78824 != 0;
    goto LABEL_46;
  }
LABEL_43:
  v105 = *(unsigned int *)(*(unsigned int *)(v10 + 616) + 4) != 0;
LABEL_46:
  if ( !v110 || (v116 = (ObjectClass *)v22, v22 == (TechnoClass *)-1) || v10 == -640 )
  {
    v32 = 0;
    goto LABEL_56;
  }
  if ( !*(unsigned int *)(v10 + 644) )
    goto LABEL_54;
  if ( !TechnoClass::processIronCurtainExpiry((unsigned int *)(v10 + 640), (IUnknown *)&v116) )
  {
    v31 = SortedStateVector::BinarySearch((char **)(v10 + 640), (IUnknown *)&v116);
    if ( v31 )
    {
      *(unsigned int *)(v10 + 656) = v31;
      goto LABEL_53;
    }
LABEL_54:
    v32 = unk_B78824 != 0;
    goto LABEL_56;
  }
LABEL_53:
  v32 = *(unsigned int *)(*(unsigned int *)(v10 + 656) + 4) != 0;
LABEL_56:
  if ( v105 && (!v110 || v32) )
  {
    qmemcpy(v144, v142, sizeof(v144));
    v33 = (ParticleSystemClass *)v142;
  }
  else
  {
    aP1d = (double)*(int *)(v10 + 1824) * unk_B1D008;
    Matrix3x4::Translate(v142, (ParticleSystemClass *)IDA_LODWORD(aP1d));
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((unsigned short *)ecx0 + 464, (IUnknown *)a1) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    v123 = (double)(int)v116 * -0.1963495408493621;
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((unsigned short *)ecx0 + 452, (IUnknown *)&v118) >> 10) + 1) >> 1)
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
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((unsigned short *)ecx0 + 440, (IUnknown *)&v118) >> 10) + 1) >> 1)
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
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(unsigned char *)(ecx0[433] + 3285) )
  {
  char v107; // [esp+109h] [ebp-1B3h]
    if ( (((unsigned int)((*ProgressTimer::GetValue((unsigned short *)ecx0 + 464, (IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*ProgressTimer::GetValue((unsigned short *)ecx0 + 464, (IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v107 = 0;
      if ( *(unsigned int *)(v10 + 192) && *(unsigned int *)(v10 + 196) )
        (*(void (**)(unsigned int *, int, unsigned int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
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
    (*(void (**)(unsigned int *, int, int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
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
    if ( v107 && *(unsigned int *)(v10 + 192) && *(unsigned int *)(v10 + 196) )
      (*(void (**)(unsigned int *, int, unsigned int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
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
    if ( (((unsigned int)((*ProgressTimer::GetValue((unsigned short *)ecx0 + 464, (IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*ProgressTimer::GetValue((unsigned short *)ecx0 + 464, (IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v106 = 0;
      if ( v110 )
        (*(void (**)(unsigned int *, int, unsigned int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
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
    (*(void (**)(unsigned int *, int, int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
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
      (*(void (**)(unsigned int *, int, unsigned int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
        ecx0,
        v10 + 8 * (unsigned int)v36 + 344,
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
  v40 = *((unsigned short *)ecx0 + 485);
  v128 = a5;
  v126 = a3;
  v129 = a6;
  if ( v40 <= 0 )
  {
    if ( *((unsigned char *)ecx0 + 973) )
      *((unsigned short *)ecx0 + 485) = IDA_LOWORD(aP6.LockCount)
                             + IDA_WORD2(a2)
                             + *(unsigned short *)(*(unsigned int *)&stru_87C374[44976] + 180)
                             + IDA_LOWORD(aP6.Width)
                             - 128;
  }
  else
  {
    int v41 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44976] + 180);
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
  v43 = (BuildingTypeClass *)(*(int (**)(unsigned int *, BuildingTypeClass *))(*ecx0 + 1124))(ecx0, started);
  v44 = *ecx0;
  v45 = v43;
  started = v43;
  if ( (*(uint8_t (**)(unsigned int *, unsigned int, unsigned int))(v44 + 352))(ecx0, IDA_LODWORD(aP1_4), IDA_LODWORD(v104)) )
  {
  int v52; // esi
  int v51; // esi
  int v50; // ecx
  int v49; // edx
    started = Techno::StartInvulnerability(ecx0, v45);
    int v46 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6312);
    int v47 = *(unsigned int *)&stru_87C374[44652] + 2 * v46;
    v113 = *(unsigned char *)(v46 + v47 + 6260);
    v111 = *(unsigned char *)(v46 + v47 + 4174 + 2087);
    v108 = *(unsigned char *)(v46 + v47 + 6262);
    int v48 = DDraw::GetStatus() - 1;
    if ( v48 )
    {
      if ( --v48 )
      {
        v52 = a8;
        goto LABEL_92;
      }
      IDA_LOWORD(v50) = v113;
      IDA_LOWORD(v49) = v111;
      v50 = v108 | (32 * (v49 | (v50 << 6)));
      v51 = v50 | a8;
    }
    else
    {
      v51 = a8;
    }
    IDA_LOWORD(v48) = v113;
    IDA_LOWORD(v49) = v111 >> 1;
    IDA_LOWORD(v50) = v108;
    v48 *= 32;
    v49 = v50 | ((v48 | v49) << 6);
    v52 = v49 | v51;
LABEL_92:
    IDA_LOWORD(v50) = v108;
    IDA_LOWORD(v49) = v111 >> 1;
    IDA_LOWORD(v48) = v113;
    v53 = v50 | (32 * ((32 * v48) | v49)) | v52;
    goto LABEL_94;
  }
  v53 = a8;
LABEL_94:
  if ( !*((unsigned char *)ecx0 + 664) )
    goto LABEL_102;
  v54 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6316);
  v55 = v54 + *(unsigned int *)&stru_87C374[44652] + 2 * v54;
  v114 = *(unsigned char *)(v55 + 6260);
  v112 = *(unsigned char *)(v55 + 6262);
  v109 = *(unsigned char *)(v54 + *(unsigned int *)&stru_87C374[44652] + 2 * v54 + 4174 + 2087);
  v56 = DDraw::GetStatus() - 1;
  if ( v56 )
  {
    v59 = v56 - 1;
    if ( v59 )
    {
      IDA_LOBYTE(v59) = v109;
      goto LABEL_101;
    }
    IDA_LOWORD(v57) = v114;
    v59 = v109;
    IDA_LOWORD(v58) = v109;
    int v60 = v58 | (v57 << 6);
    IDA_LOWORD(v58) = v112;
    v57 = v58 | (32 * v60);
    v53 |= v57;
  }
  else
  {
    v59 = v109;
  }
  IDA_LOWORD(v58) = (uint8_t)v59 >> 1;
  IDA_LOWORD(v57) = v114;
  v57 *= 32;
  v61 = v57 | v58;
  IDA_LOWORD(v57) = v112;
  v58 = v57 | (v61 << 6);
  v53 |= v58;
LABEL_101:
  IDA_LOWORD(v58) = v114;
  IDA_LOWORD(v57) = v112;
  IDA_LOWORD(v59) = (uint8_t)v59 >> 1;
  v53 |= v57 | (32 * ((32 * v58) | v59));
LABEL_102:
  if ( UnitClass::IsDeactivated(ecx0) )
    started = (BuildingTypeClass *)((int)started / 2);
  aP1g = v53;
  v62 = v141;
  (*(void (**)(unsigned int *, AbstractClass *, unsigned int, unsigned int, int, int, int, int, BuildingTypeClass *, int))(*ecx0 + 1372))(
    ecx0,
    v141,
    a2,
    IDA_HIDWORD(a2),
    v126,
    v127,
    v128,
    v129,
    started,
    aP1g);
  v143[1] = aP6.Width;
  v63 = *(ObjectClass **)&stru_87C374[44960];
  *(unsigned int *)&stru_87C374[44960] = v62;
  v116 = v63;
  IDA_LOBYTE(v63) = *((unsigned char *)ecx0 + 973);
  v143[0] = *(unsigned int *)aP6[0];
  v143[2] = aP6.Height;
  v143[3] = aP6.LockCount;
  *((unsigned char *)ecx0 + 1747) = 0;
  if ( !(unsigned char)v63 )
  {
    int v64 = ecx0[433];
    v118 = *(double *)&a2;
  int v65; // eax
    if ( *(unsigned char *)(v64 + 3434) || (v65 = *(unsigned int *)(v64 + 1660), v65 == 1) || v65 == 2 )
    {
      aP3 = (TechnoClass *)v140;
    }
    else
    {
      aP3 = (TechnoClass *)(32 * v140);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int v66 = (*(int (__stdcall **)(unsigned int, double *))(*(unsigned int *)ecx0[413] + 48))(ecx0[413], &v123);
      aP3 = (TechnoClass *)(((uint8_t)*(unsigned int *)(v66 + 4) - 16) & 0x1F | (unsigned int)aP3);
    }
    if ( !ecx0[413] )
      WinAPI::Wrapper(-2147467261);
  const void *v67; // eax
    v67 = (const void *)(*(int (__stdcall **)(unsigned int, float *, TechnoClass **))(*(unsigned int *)ecx0[413] + 40))(
                          ecx0[413],
                          v147,
                          &aP3);
    Transform::Copy(v144, v67);
    qmemcpy(v142, v144, sizeof(v142));
    if ( *(unsigned char *)(v10 + 3367) )
    {
      a1[0] = ecx0[39];
      a1[1] = ecx0[40];
      GroundHeight = ecx0[41];
      GroundHeight = Cell::GetGroundHeight((IUnknown *)a1);
      Coord::To_Screen(*(unsigned int **)&stru_87C374[44976], a1, (IUnknown *)&v118);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int * v68 = (int *)(*(int (__stdcall **)(unsigned int, double *))(*(unsigned int *)ecx0[413] + 48))(ecx0[413], &v123);
      int v69 = *v68;
      int v70 = v68[1];
      IDA_LODWORD(v118) += v69;
      IDA_HIDWORD(v118) += v70;
    }
    if ( *((unsigned char *)ecx0 + 1060) )
      IDA_HIDWORD(v118) -= 14;
    int v71 = (*(int (**)(unsigned int *))(*ecx0 + 456))(ecx0);
    v136 = *((float *)ecx0 + 39);
    v137 = *((float *)ecx0 + 40);
    v138 = *((float *)ecx0 + 41);
    v72 = (VectorClass_flat *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&v136);
    if ( *((unsigned char *)ecx0 + 1060) )
    {
      if ( !*((unsigned char *)ecx0 + 140) && v71 >= unk_B1D0AC )
      {
        void * v73 = v72[20].vtable0;
        if ( ((uint16_t)v73 & 0x100) != 0
          && ((IDA_BYTE1(v73) & 8) != 0 && (*((unsigned int *)Cell::GetNeighbourContent(v72, 0) + 80) & 0x100) != 0
           || ((int)v72[20].vtable0 & 0x800) == 0 && (*((unsigned int *)Cell::GetNeighbourContent(v72, 6u) + 80) & 0x100) != 0) )
        {
          IDA_HIDWORD(v118) -= 60;
        }
      }
    }
    if ( (*(uint8_t (**)(unsigned int *))(*ecx0 + 84))(ecx0) )
    {
      v117 = 0;
    }
    else
    {
      int v74 = ecx0[433];
      v117 = (int)v116;
  int v75; // eax
      if ( *(unsigned char *)(v74 + 3434) || (v75 = *(unsigned int *)(v74 + 1660), v75 == 1) || v75 == 2 )
      {
        if ( (*(int (**)(unsigned int *))(*ecx0 + 456))(ecx0) > 0 )
          aP3 = (TechnoClass *)-1;
        else
          aP3 = (TechnoClass *)((unsigned int)aP3 | 0x80000000);
      }
    }
    bool v76 = (*(int (**)(unsigned int *))(*ecx0 + 456))(ecx0) <= 0;
    int v77 = ecx0[413];
    if ( v76 )
    {
      if ( !v77 )
        WinAPI::Wrapper(-2147467261);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int v81 = ecx0[413];
      int v82 = (*(int (__stdcall **)(int))(*(unsigned int *)v81 + 48))(v81);
  int v94; // [esp+F0h] [ebp-1CCh]
      v94 = *(unsigned int *)(*(int (__stdcall **)(int, int *, unsigned int))(*(unsigned int *)v81 + 48))(
                         v81,
                         &v133,
                         *(unsigned int *)(v82 + 4));
      int v92 = v117;
      float * v83 = (float *)AudioConfig::InitDefault(v147);
      float * v86 = MultiplyMatrix3x4((ObjectClass *)v148, v83, v142);
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (unsigned char **)(v10 + 176),
        *(unsigned int *)(v10 + 2044),
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
      int v79 = (*(int (__stdcall **)(int))(*(unsigned int *)v78 + 48))(v78);
  int v93; // [esp+F0h] [ebp-1CCh]
      v93 = *(unsigned int *)(*(int (__stdcall **)(int, int *, int))(*(unsigned int *)v78 + 48))(
                         v78,
                         &v133,
                         *(unsigned int *)(v79 + 4) + 1);
      int v91 = v117;
      float * v80 = (float *)AudioConfig::InitDefault(v147);
      float * v85 = MultiplyMatrix3x4((ObjectClass *)v148, v80, v142);
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (unsigned char **)(v10 + 176),
        *(unsigned int *)(v10 + 2044),
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
  return (*(int (**)(ObjectClass *, unsigned int *, unsigned int))(*(unsigned int *)v116->__pad_0 + 20))(v116, v143, 0);
}
} // namespace gamemd

// 0x41B7D0
namespace gamemd {
BOOL TechnoClass::processDamageAnimation(int a1)
{

  return *(unsigned int *)(a1 - 1448) != 0; /*0x41b7e4*/

}
} // namespace gamemd

// 0x41B840
namespace gamemd {
BOOL TechnoClass::updateWeaponCooldown(int a1)
{

  return *(unsigned char *)(*(unsigned int *)(a1 + 4) + 3598) != 0; /*0x41b854*/

}
} // namespace gamemd

// 0x41B860
namespace gamemd {
int TechnoClass::checkAmmo(AircraftClass * aP0)
{

  return BYTE2(aP0->uniqueId); /*0x41b869*/

}
} // namespace gamemd

// 0x4722D0
namespace gamemd {
int TechnoClass::processPowerDrain()
{

  return *((unsigned int *)this + 13); /*0x4722d3*/

}
} // namespace gamemd

// 0x4C2BD0
namespace gamemd {
void TechnoClass::updateSightRange(IUnknown * aP1, int a3)
{

  if ( aP1 /*0x4c2bf2*/
    && (*(int (**)(IUnknown *))(aP1->field_0 + 44))(aP1) == 1
    && aP1->__pad_8C[4]
    && !aP1->__pad_68[25] )
  {
    *((unsigned int *)this + 8) = aP1; /*0x4c2c00*/
    *((unsigned int *)this + 9) = a3; /*0x4c2c03*/
  }

}
} // namespace gamemd

// 0x703CC0
namespace gamemd {
char TechnoClass::ScanAdjacentCells()
{

  unsigned int *v2; // esi
  unsigned int *v3; // edi
  unsigned int *v4; // ebp
  unsigned int *v5; // ebx
  unsigned int *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h] BYREF
  int v16; // [esp+20h] [ebp-4h] BYREF

  v12 = *(unsigned int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)this + 440))(this, &v16); /*0x703ce4*/
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x703ced*/
  if ( !v2 || *((unsigned char *)this + 140) ) /*0x703cf7*/
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
} // namespace gamemd

// 0x709A20
namespace gamemd {
int TechnoClass::COMStub_Return0_287()
{

  int result; // eax

  return result; /*0x709a20*/

}
} // namespace gamemd

// 0x70F020
namespace gamemd {
int TechnoClass::StubReturnFalse5()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f020*/
  return result; /*0x70f022*/

}
} // namespace gamemd

// 0x70F030
namespace gamemd {
int TechnoClass::StubReturnFalse6()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f030*/
  return result; /*0x70f032*/

}
} // namespace gamemd

// 0x70F040
namespace gamemd {
int TechnoClass::checkMovementRestrictions()
{

  return -1; /*0x70f043*/

}
} // namespace gamemd

// 0x70F0E0
namespace gamemd {
int TechnoClass::StubReturnFalse7()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f0e0*/
  return result; /*0x70f0e2*/

}
} // namespace gamemd

// 0x70F0F0
namespace gamemd {
int TechnoClass::StubReturnFalse8()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f0f0*/
  return result; /*0x70f0f2*/

}
} // namespace gamemd

// 0x70F110
namespace gamemd {
int TechnoClass::StubReturnFalse9()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f110*/
  return result; /*0x70f112*/

}
} // namespace gamemd

// 0x731CF0
namespace gamemd {
void TechnoClass::GetField()
{

  MEMORY[0xB0FE58] = 0; /*0x731cf0*/

}
} // namespace gamemd
