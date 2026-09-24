// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x48DCD0
AbstractClass * * TechnoTypeClass::GetByTypeAndIndex(int a1, int a2)
{
  int result; // eax

  switch ( a1 ) /*0x48dce0*/
  {
    case 1: /*0x48dce0*/
    case 40: /*0x48dce0*/
      result = *((_DWORD *)g_UnitTypeCount2 + a2); /*0x48dcec*/
      break; /*0x48dcef*/
    case 2: /*0x48dce0*/
    case 3: /*0x48dce0*/
      result = *((_DWORD *)g_AircraftTypeCount + a2); /*0x48dd09*/
      break; /*0x48dd0c*/
    case 6: /*0x48dce0*/
    case 7: /*0x48dce0*/
      result = *((_DWORD *)g_TriggerTypeCount + a2); /*0x48dcf6*/
      break; /*0x48dcf9*/
    case 15: /*0x48dce0*/
    case 16: /*0x48dce0*/
      result = *((_DWORD *)Factory_ExitCellTable + a2); /*0x48dcff*/
      break; /*0x48dd02*/
    default:
      result = 0; /*0x48dd0d*/
      break; /*0x48dd0d*/
  }
  return result; /*0x48dcef*/
}
// 0x50BDF0
int TechnoTypeClass::Dispatch(TechnoTypeClass * aP1)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*aP1 + 44))(aP1) ) /*0x50be0f*/
  {
    case 3: /*0x50be0f*/
      result = *(float *)(*(this + 13) + 284); /*0x50be37*/
      break; /*0x50be3d*/
    case 7: /*0x50be0f*/
      if ( aP1[898] == 5 ) /*0x50be47*/
        result = *(float *)(*(this + 13) + 292); /*0x50be4e*/
      else
        result = *(float *)(*(this + 13) + 288); /*0x50be5c*/
      break; /*0x50be54*/
    case 16: /*0x50be0f*/
      result = *(float *)(*(this + 13) + 276); /*0x50be1b*/
      break; /*0x50be21*/
    case 40: /*0x50be0f*/
      result = *(float *)(*(this + 13) + 280); /*0x50be29*/
      break; /*0x50be2f*/
    default:
      result = 1.0; /*0x50be65*/
      break; /*0x50be65*/
  }
  return result; /*0x50be6b*/
}
// 0x50BEB0
int TechnoTypeClass::GetThreatMultiplier(TechnoTypeClass * aP1)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*aP1 + 44))(aP1) ) /*0x50becf*/
  {
    case 3: /*0x50becf*/
      result = *(this + 5350); /*0x50beec*/
      break; /*0x50bef4*/
    case 7: /*0x50becf*/
      if ( aP1[898] == 5 ) /*0x50befe*/
        result = *(this + 5352); /*0x50bf00*/
      else
        result = *(this + 5351); /*0x50bf0b*/
      break; /*0x50bf08*/
    case 16: /*0x50becf*/
      result = *(this + 5348); /*0x50bed6*/
      break; /*0x50bede*/
    case 40: /*0x50becf*/
      result = *(this + 5349); /*0x50bee1*/
      break; /*0x50bee9*/
    default:
      result = 1.0; /*0x50bf16*/
      break; /*0x50bf16*/
  }
  return result; /*0x50bedc*/
}
// 0x6F06E0
unsigned int * TechnoTypeClass::LoadBase(ObjectClass * aP1)
{
  int v3; // ecx
  char v4; // al
  int v5; // eax
  void **v6; // edx
  int v7; // eax

  AbstractTypeClass::Constructor((int)this, aP1); /*0x6f06ea*/
  *(this + 38) = -1; /*0x6f06f7*/
  *(this + 39) = -1; /*0x6f06ff*/
  *(this + 40) = 1; /*0x6f0705*/
  *((_BYTE *)this + 164) = 0; /*0x6f070b*/
  *((_BYTE *)this + 165) = 0; /*0x6f0711*/
  *((_BYTE *)this + 166) = 0; /*0x6f0717*/
  *((_BYTE *)this + 167) = 0; /*0x6f071d*/
  *((_BYTE *)this + 168) = 0; /*0x6f0723*/
  *((_BYTE *)this + 169) = 0; /*0x6f0729*/
  *((_BYTE *)this + 170) = 0; /*0x6f072f*/
  *((_BYTE *)this + 171) = 0; /*0x6f0735*/
  *((_BYTE *)this + 172) = 0; /*0x6f073b*/
  *((_BYTE *)this + 173) = 0; /*0x6f0741*/
  *((_BYTE *)this + 174) = 0; /*0x6f0747*/
  *((_BYTE *)this + 175) = 0; /*0x6f074d*/
  *((_BYTE *)this + 176) = 0; /*0x6f0753*/
  *((_BYTE *)this + 177) = 0; /*0x6f0759*/
  *((_BYTE *)this + 178) = 0; /*0x6f075f*/
  *((_BYTE *)this + 179) = 0; /*0x6f0765*/
  *(this + 45) = 7; /*0x6f076b*/
  *(this + 46) = -1; /*0x6f0775*/
  *(this + 47) = 0; /*0x6f077b*/
  *(this + 48) = 0; /*0x6f0781*/
  *(this + 49) = 0; /*0x6f0787*/
  *(this + 50) = -1; /*0x6f078d*/
  *(this + 51) = 0; /*0x6f0793*/
  *(this + 52) = 0; /*0x6f0799*/
  *(this + 53) = -1; /*0x6f079f*/
  *(this + 54) = -1; /*0x6f07a5*/
  *(this + 55) = 0; /*0x6f07ab*/
  *(this + 56) = 0; /*0x6f07b1*/
  *(this + 57) = 0; /*0x6f07b7*/
  *(this + 58) = 0; /*0x6f07bd*/
  *(this + 59) = 9; /*0x6f07c3*/
  *((_BYTE *)this + 240) = 1; /*0x6f07cd*/
  *((_BYTE *)this + 241) = 0; /*0x6f07d3*/
  *((_BYTE *)this + 242) = 0; /*0x6f07d9*/
  *((_BYTE *)this + 243) = 0; /*0x6f07df*/
  *((_BYTE *)this + 244) = 0; /*0x6f07e5*/
  *((_BYTE *)this + 245) = 1; /*0x6f07eb*/
  *((_BYTE *)this + 246) = 0; /*0x6f07f1*/
  *((_BYTE *)this + 247) = 0; /*0x6f07f7*/
  *this = &TeamTypeClass::`vftable'; /*0x6f07fd*/
  *(this + 1) = &TeamTypeClass::`vftable'; /*0x6f0803*/
  *(this + 2) = &TeamTypeClass::`vftable'; /*0x6f080a*/
  *(this + 3) = &TeamTypeClass::`vftable'; /*0x6f0811*/
  v3 = g_MultiplayerLogState; /*0x6f0818*/
  if ( g_MultiplayerLogState < dword_A8ECA8 /*0x6f0857*/
    || (byte_A8ECAD || !dword_A8ECA8)
    && dword_A8ECB4 > 0
    && (v4 = (*(int (__thiscall **)(int *, int, _DWORD))(TeamTypeClass_Array + 8))(
               &TeamTypeClass_Array,
               dword_A8ECA8 + dword_A8ECB4,
               0),
        v3 = g_MultiplayerLogState,
        v4) )
  {
    g_MultiplayerLogState = v3 + 1; /*0x6f085c*/
    *((_DWORD *)g_TeamTypePool + v3) = this; /*0x6f0868*/
    v3 = g_MultiplayerLogState; /*0x6f086b*/
  }
  v5 = 0; /*0x6f0871*/
  if ( v3 <= 0 ) /*0x6f0875*/
  {
  LABEL_11:
    v5 = -1; /*0x6f0889*/
  }
  else
  {
    v6 = (void **)g_TeamTypePool; /*0x6f0877*/
    while ( *v6 != this ) /*0x6f087f*/
    {
      ++v5; /*0x6f0881*/
      ++v6; /*0x6f0882*/
      if ( v5 >= v3 ) /*0x6f0887*/
        goto LABEL_11; /*0x6f0887*/
    }
  }
  *(this + 38) = v5; /*0x6f088b*/
  if ( g_AnimManager < g_AnimTypePool /*0x6f08c5*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v7 = g_AnimManager++; /*0x6f08d2*/
    *((_DWORD *)g_AnimPoolCount + v7) = this; /*0x6f08e1*/
  }
  return this; /*0x6f08e6*/
}
// 0x710AF0
void * TechnoTypeClass::ReadINI(char * Source, int a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax

  ObjectTypeClass::ConstructFull((int)this, Source); /*0x710afb*/
  *((_DWORD *)this + 165) = 1; /*0x710b02*/
  *((_DWORD *)this + 166) = 0; /*0x710b0e*/
  *((_DWORD *)this + 167) = 0; /*0x710b14*/
  *((_DWORD *)this + 168) = 0; /*0x710b1c*/
  *((_DWORD *)this + 169) = 0; /*0x710b28*/
  *((_DWORD *)this + 170) = 0; /*0x710b2f*/
  *((_WORD *)this + 342) = 0; /*0x710b36*/
  *(_DWORD *)(this + 686) = 0; /*0x710b3d*/
  *(_DWORD *)(this + 690) = 0; /*0x710b43*/
  *(_DWORD *)(this + 694) = 0; /*0x710b4b*/
  *(_DWORD *)(this + 698) = 0; /*0x710b51*/
  *((_WORD *)this + 351) = 0; /*0x710b57*/
  *((_DWORD *)this + 176) = 0; /*0x710b5e*/
  *((_DWORD *)this + 177) = 0; /*0x710b64*/
  *((_DWORD *)this + 178) = 0; /*0x710b6a*/
  *((_DWORD *)this + 179) = 0; /*0x710b70*/
  *((_DWORD *)this + 180) = 0; /*0x710b76*/
  *((_DWORD *)this + 181) = 0; /*0x710b7c*/
  *((_DWORD *)this + 182) = 0; /*0x710b82*/
  *((_DWORD *)this + 183) = 0; /*0x710b88*/
  *((_DWORD *)this + 184) = 0; /*0x710b8e*/
  *((_DWORD *)this + 185) = 0; /*0x710b94*/
  *((_DWORD *)this + 186) = 0; /*0x710b9a*/
  *((_DWORD *)this + 187) = 0; /*0x710ba0*/
  *((_DWORD *)this + 188) = 0; /*0x710ba6*/
  *((_DWORD *)this + 189) = 0; /*0x710bac*/
  *((_DWORD *)this + 190) = 500; /*0x710bb2*/
  *((_DWORD *)this + 192) = -755914244; /*0x710bbc*/
  *((_DWORD *)this + 193) = 1063281229; /*0x710bc6*/
  *((_DWORD *)this + 194) = -343597384; /*0x710bd0*/
  *((_DWORD *)this + 195) = 1067366481; /*0x710bda*/
  *((_DWORD *)this + 196) = 7; /*0x710be4*/
  VoxelAnimTypeVector::Constructor(0, 0); /*0x710bee*/
  *((_DWORD *)this + 201) = 0; /*0x710bf8*/
  *((_DWORD *)this + 202) = 10; /*0x710bfb*/
  *((_DWORD *)this + 197) = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x710bfe*/
  VectorClass::Construct((_DWORD *)this + 204, 0, 0); /*0x710c0f*/
  *((_DWORD *)this + 209) = 10; /*0x710c14*/
  *((_DWORD *)this + 208) = 0; /*0x710c17*/
  *((_DWORD *)this + 204) = &TypeList<int>::`vftable'; /*0x710c1a*/
  *((_DWORD *)this + 211) = 1247291207; /*0x710c2d*/
  *((_DWORD *)this + 212) = 298948665; /*0x710c39*/
  *((_DWORD *)this + 213) = -1610610249; /*0x710c42*/
  *((_DWORD *)this + 214) = -777003740; /*0x710c4b*/
  *((_DWORD *)this + 216) = 0; /*0x710c4e*/
  *((_DWORD *)this + 217) = 0; /*0x710c54*/
  *((_DWORD *)this + 218) = 0; /*0x710c5a*/
  *((_DWORD *)this + 219) = 0; /*0x710c60*/
  *((_DWORD *)this + 220) = 0; /*0x710c6b*/
  *((_DWORD *)this + 221) = 1072693248; /*0x710c71*/
  *((_DWORD *)this + 222) = 0; /*0x710c77*/
  *((_DWORD *)this + 223) = 0x40000000; /*0x710c7d*/
  *((_DWORD *)this + 224) = 0; /*0x710c87*/
  *((_DWORD *)this + 225) = 1072693248; /*0x710c8d*/
  *((_DWORD *)this + 226) = 0; /*0x710c93*/
  *((_DWORD *)this + 227) = 0; /*0x710c99*/
  *(this + 912) = 0; /*0x710c9f*/
  *((_DWORD *)this + 229) = 0; /*0x710ca5*/
  *((_DWORD *)this + 230) = 15; /*0x710cab*/
  *((_DWORD *)this + 232) = 942502757; /*0x710cb5*/
  *((_DWORD *)this + 233) = 1071694162; /*0x710cbf*/
  *((_DWORD *)this + 234) = 0; /*0x710cc9*/
  *((_DWORD *)this + 235) = 1070596096; /*0x710ccf*/
  *((_DWORD *)this + 236) = 1256670343; /*0x710cd9*/
  *((_DWORD *)this + 237) = 1071011608; /*0x710ce3*/
  *((_DWORD *)this + 238) = 0x7FFFFFFF; /*0x710cf0*/
  *((_DWORD *)this + 239) = -1; /*0x710cfa*/
  *((_DWORD *)this + 240) = 0; /*0x710d00*/
  *((_DWORD *)this + 242) = 0; /*0x710d06*/
  *((_DWORD *)this + 243) = 0; /*0x710d0c*/
  *((_DWORD *)this + 244) = 8; /*0x710d12*/
  *((_DWORD *)this + 245) = 0; /*0x710d1c*/
  *(this + 984) = 0; /*0x710d22*/
  *((_DWORD *)this + 247) = 70; /*0x710d28*/
  *((_DWORD *)this + 248) = 0; /*0x710d33*/
  *((_DWORD *)this + 249) = 0; /*0x710d40*/
  VectorClass::BuildingTypeConstructor((_DWORD *)this + 250, 0, 0); /*0x710d46*/
  *((_DWORD *)this + 255) = 10; /*0x710d4b*/
  *((_DWORD *)this + 254) = 0; /*0x710d51*/
  *((_DWORD *)this + 250) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x710d57*/
  *((_DWORD *)this + 257) = 0; /*0x710d61*/
  *((_DWORD *)this + 258) = 0; /*0x710d67*/
  *((_DWORD *)this + 259) = 0; /*0x710d6e*/
  *(this + 1040) = 0; /*0x710d7b*/
  VectorClass::Construct((_DWORD *)this + 261, 0, 0); /*0x710d81*/
  *((_DWORD *)this + 266) = 10; /*0x710d8e*/
  *((_DWORD *)this + 265) = 0; /*0x710d94*/
  *((_DWORD *)this + 261) = &TypeList<int>::`vftable'; /*0x710d9a*/
  VectorClass::Construct((_DWORD *)this + 268, 0, 0); /*0x710da4*/
  *((_DWORD *)this + 273) = 10; /*0x710db1*/
  *((_DWORD *)this + 272) = 0; /*0x710db7*/
  *((_DWORD *)this + 268) = &TypeList<int>::`vftable'; /*0x710dbd*/
  VectorClass::Construct((_DWORD *)this + 275, 0, 0); /*0x710dc7*/
  *((_DWORD *)this + 280) = 10; /*0x710dd4*/
  *((_DWORD *)this + 279) = 0; /*0x710dda*/
  *((_DWORD *)this + 275) = &TypeList<int>::`vftable'; /*0x710de0*/
  VectorClass::Construct((_DWORD *)this + 282, 0, 0); /*0x710dea*/
  *((_DWORD *)this + 287) = 10; /*0x710df7*/
  *((_DWORD *)this + 286) = 0; /*0x710dfd*/
  *((_DWORD *)this + 282) = &TypeList<int>::`vftable'; /*0x710e03*/
  VectorClass::Construct((_DWORD *)this + 289, 0, 0); /*0x710e0d*/
  *((_DWORD *)this + 294) = 10; /*0x710e1a*/
  *((_DWORD *)this + 293) = 0; /*0x710e20*/
  *((_DWORD *)this + 289) = &TypeList<int>::`vftable'; /*0x710e26*/
  VectorClass::Construct((_DWORD *)this + 296, 0, 0); /*0x710e30*/
  *((_DWORD *)this + 301) = 10; /*0x710e3d*/
  *((_DWORD *)this + 300) = 0; /*0x710e43*/
  *((_DWORD *)this + 296) = &TypeList<int>::`vftable'; /*0x710e49*/
  VectorClass::Construct((_DWORD *)this + 303, 0, 0); /*0x710e53*/
  *((_DWORD *)this + 308) = 10; /*0x710e58*/
  *((_DWORD *)this + 307) = 0; /*0x710e5e*/
  *((_DWORD *)this + 303) = &TypeList<int>::`vftable'; /*0x710e6c*/
  VectorClass::Construct((_DWORD *)this + 310, 0, 0); /*0x710e76*/
  *((_DWORD *)this + 315) = 10; /*0x710e83*/
  *((_DWORD *)this + 314) = 0; /*0x710e89*/
  *((_DWORD *)this + 310) = &TypeList<int>::`vftable'; /*0x710e8f*/
  VectorClass::Construct((_DWORD *)this + 317, 0, 0); /*0x710e99*/
  *((_DWORD *)this + 322) = 10; /*0x710ea6*/
  *((_DWORD *)this + 321) = 0; /*0x710eac*/
  *((_DWORD *)this + 317) = &TypeList<int>::`vftable'; /*0x710eb2*/
  VectorClass::Construct((_DWORD *)this + 324, 0, 0); /*0x710ebc*/
  *((_DWORD *)this + 329) = 10; /*0x710ec1*/
  *((_DWORD *)this + 328) = 0; /*0x710ec7*/
  *((_DWORD *)this + 324) = &TypeList<int>::`vftable'; /*0x710ecd*/
  *((_DWORD *)this + 331) = -1; /*0x710ed7*/
  *((_DWORD *)this + 332) = -1; /*0x710edd*/
  *((_DWORD *)this + 333) = -1; /*0x710ee3*/
  *((_DWORD *)this + 334) = -1; /*0x710ee9*/
  *((_DWORD *)this + 335) = -1; /*0x710eef*/
  *((_DWORD *)this + 336) = -1; /*0x710ef5*/
  *((_DWORD *)this + 337) = -1; /*0x710efb*/
  *((_DWORD *)this + 338) = -1; /*0x710f01*/
  *((_DWORD *)this + 339) = -1; /*0x710f07*/
  *((_DWORD *)this + 340) = -1; /*0x710f0d*/
  *((_DWORD *)this + 341) = -1; /*0x710f13*/
  *((_DWORD *)this + 342) = -1; /*0x710f19*/
  *((_DWORD *)this + 343) = -1; /*0x710f1f*/
  *((_DWORD *)this + 344) = -1; /*0x710f25*/
  *((_DWORD *)this + 345) = -1; /*0x710f2b*/
  *((_DWORD *)this + 346) = -1; /*0x710f31*/
  *((_DWORD *)this + 347) = -1; /*0x710f37*/
  *((_DWORD *)this + 348) = -1; /*0x710f3d*/
  *((_DWORD *)this + 349) = -1; /*0x710f43*/
  *((_DWORD *)this + 350) = -1; /*0x710f49*/
  *((_DWORD *)this + 351) = -1; /*0x710f4f*/
  *((_DWORD *)this + 352) = -1; /*0x710f55*/
  *((_DWORD *)this + 353) = -1; /*0x710f5b*/
  *((_DWORD *)this + 354) = -1; /*0x710f61*/
  *((_DWORD *)this + 355) = -1; /*0x710f68*/
  *((_DWORD *)this + 356) = -1; /*0x710f75*/
  *((_DWORD *)this + 357) = -1; /*0x710f7b*/
  *((_DWORD *)this + 358) = -1; /*0x710f81*/
  *((_DWORD *)this + 359) = -1; /*0x710f87*/
  *((_DWORD *)this + 360) = -1; /*0x710f8d*/
  *((_DWORD *)this + 361) = -1; /*0x710f93*/
  *((_DWORD *)this + 362) = -1; /*0x710f99*/
  *((_DWORD *)this + 363) = -1; /*0x710f9f*/
  *((_DWORD *)this + 364) = -1; /*0x710fa5*/
  *((_DWORD *)this + 365) = 0; /*0x710fab*/
  *((_DWORD *)this + 366) = 0; /*0x710fb1*/
  *((_DWORD *)this + 367) = 0; /*0x710fb7*/
  *((_DWORD *)this + 368) = 0; /*0x710fbd*/
  AnimTypeVector::Constructor((_DWORD *)this + 369, 0, 0); /*0x710fc3*/
  *((_DWORD *)this + 374) = 10; /*0x710fc8*/
  *((_DWORD *)this + 373) = 0; /*0x710fce*/
  *((_DWORD *)this + 369) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x710fd4*/
  *((_DWORD *)this + 376) = 0; /*0x710fde*/
  *(this + 1508) = 0; /*0x710fe4*/
  *((_DWORD *)this + 378) = 0; /*0x710fea*/
  *(this + 1516) = 0; /*0x710ff0*/
  *(this + 1517) = 0; /*0x710ff6*/
  *(this + 1518) = 0; /*0x710ffc*/
  *(this + 1519) = 0; /*0x711002*/
  *((_DWORD *)this + 380) = 0; /*0x711008*/
  *((_DWORD *)this + 381) = 0; /*0x71100e*/
  *((_DWORD *)this + 382) = 0; /*0x711014*/
  *((_DWORD *)this + 383) = 5; /*0x71101a*/
  *((_DWORD *)this + 384) = 0; /*0x711024*/
  *((_DWORD *)this + 385) = 0; /*0x71102a*/
  *((_DWORD *)this + 386) = 1065353216; /*0x711030*/
  *((_DWORD *)this + 387) = 140; /*0x71103a*/
  *((_DWORD *)this + 388) = 0; /*0x711044*/
  *((_DWORD *)this + 389) = 0; /*0x71104a*/
  *((_DWORD *)this + 390) = -1; /*0x711050*/
  *((_DWORD *)this + 391) = 0; /*0x711056*/
  *((_DWORD *)this + 392) = 0; /*0x71105c*/
  *((_DWORD *)this + 393) = 0; /*0x711062*/
  *((_DWORD *)this + 394) = 0; /*0x711068*/
  *((_DWORD *)this + 395) = 0; /*0x71106e*/
  *((_DWORD *)this + 396) = 0; /*0x711075*/
  *((_DWORD *)this + 397) = 255; /*0x711082*/
  VectorClass::Construct((_DWORD *)this + 398, 0, 0); /*0x71108c*/
  *((_DWORD *)this + 403) = 10; /*0x711099*/
  *((_DWORD *)this + 402) = 0; /*0x71109f*/
  *((_DWORD *)this + 398) = &TypeList<int>::`vftable'; /*0x7110a5*/
  VectorClass::Construct((_DWORD *)this + 405, 0, 0); /*0x7110af*/
  *((_DWORD *)this + 410) = 10; /*0x7110b8*/
  *((_DWORD *)this + 409) = 0; /*0x7110be*/
  *((_DWORD *)this + 405) = &TypeList<int>::`vftable'; /*0x7110c4*/
  *((_DWORD *)this + 412) = 0; /*0x7110ce*/
  *((_DWORD *)this + 413) = 0; /*0x7110d4*/
  *((_DWORD *)this + 414) = 0; /*0x7110da*/
  *((_DWORD *)this + 415) = a3; /*0x7110e0*/
  *((_DWORD *)this + 416) = -1; /*0x7110e6*/
  *((_DWORD *)this + 417) = -1; /*0x7110ec*/
  *((_DWORD *)this + 418) = 0; /*0x7110f2*/
  *((_DWORD *)this + 419) = 0; /*0x7110f8*/
  *(this + 1680) = 0; /*0x7110fe*/
  *(this + 1681) = 0; /*0x711104*/
  *(this + 1682) = 0; /*0x71110a*/
  *(this + 1683) = 0; /*0x711110*/
  *(this + 1684) = 0; /*0x711116*/
  *(this + 1685) = 0; /*0x71111c*/
  *((_DWORD *)this + 422) = 0; /*0x711122*/
  *((_DWORD *)this + 423) = -1; /*0x711128*/
  *((_DWORD *)this + 424) = 0; /*0x71112e*/
  *((_DWORD *)this + 425) = 0; /*0x711134*/
  *((_DWORD *)this + 426) = 1; /*0x71113a*/
  *(this + 1708) = 0; /*0x711144*/
  *(this + 1709) = 0; /*0x71114a*/
  *(this + 1710) = 1; /*0x711150*/
  *(this + 1711) = 0; /*0x711157*/
  *(this + 1712) = 0; /*0x71115d*/
  *(this + 1713) = 0; /*0x711163*/
  *((_DWORD *)this + 429) = 0; /*0x711169*/
  *((_DWORD *)this + 430) = 0; /*0x71116f*/
  *((_DWORD *)this + 431) = 0; /*0x711175*/
  *(this + 1728) = 0; /*0x71117b*/
  *(this + 1729) = 0; /*0x711181*/
  *((_DWORD *)this + 433) = -1; /*0x711187*/
  *(this + 1736) = 0; /*0x71118d*/
  *((_DWORD *)this + 435) = 0; /*0x711193*/
  *((_DWORD *)this + 436) = -1; /*0x71119e*/
  *(this + 1748) = 0; /*0x7111a4*/
  *(this + 1749) = 1; /*0x7111ac*/
  if ( &g_INI_DefaultBuffer ) /*0x7111b9*/
  {
    strncpy(this + 1750, &g_INI_DefaultBuffer, 0x18u); /*0x7111c7*/
    *(this + 1774) = 0; /*0x7111cf*/
  }
  else
  {
    *(this + 1750) = 0; /*0x7111bb*/
  }
  *((_DWORD *)this + 444) = 0; /*0x7111da*/
  *(this + 1780) = 0; /*0x7111e2*/
  if ( &g_INI_DefaultBuffer ) /*0x7111ee*/
  {
    strncpy(this + 1781, &g_INI_DefaultBuffer, 0x18u); /*0x7111fc*/
    *(this + 1805) = 0; /*0x711204*/
  }
  else
  {
    *(this + 1781) = 0; /*0x7111f0*/
  }
  *((_DWORD *)this + 452) = 0; /*0x71120a*/
  *(this + 1812) = 0; /*0x711210*/
  *((_DWORD *)this + 454) = 0; /*0x711216*/
  *((_DWORD *)this + 455) = 0; /*0x71121c*/
  *((_DWORD *)this + 456) = 0; /*0x711222*/
  *(this + 1828) = 1; /*0x711229*/
  *((_DWORD *)this + 458) = 0; /*0x711237*/
  AnimTypeVector::Constructor((_DWORD *)this + 459, 0, 0); /*0x71123d*/
  *((_DWORD *)this + 464) = 10; /*0x71124a*/
  *((_DWORD *)this + 463) = 0; /*0x711250*/
  *((_DWORD *)this + 459) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x711256*/
  AnimTypeVector::Constructor((_DWORD *)this + 466, 0, 0); /*0x711260*/
  *((_DWORD *)this + 471) = 10; /*0x711265*/
  *((_DWORD *)this + 470) = 0; /*0x71126b*/
  *((_DWORD *)this + 466) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x711271*/
  *((_DWORD *)this + 473) = 0; /*0x71127b*/
  *((_DWORD *)this + 474) = 0; /*0x711282*/
  *((_DWORD *)this + 475) = 0; /*0x711288*/
  *((_DWORD *)this + 476) = 0; /*0x71128e*/
  *((_DWORD *)this + 477) = 0; /*0x71129b*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112a1*/
  *((_DWORD *)this + 483) = 10; /*0x7112ae*/
  *((_DWORD *)this + 482) = 0; /*0x7112b4*/
  *((_DWORD *)this + 478) = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x7112ba*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112c4*/
  *((_DWORD *)this + 490) = 10; /*0x7112c9*/
  *((_DWORD *)this + 489) = 0; /*0x7112cf*/
  *((_DWORD *)this + 485) = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x7112d5*/
  *((_DWORD *)this + 492) = 0; /*0x7112df*/
  *((_DWORD *)this + 493) = 0; /*0x7112e5*/
  *((_DWORD *)this + 494) = 0; /*0x7112eb*/
  *(this + 1980) = 0; /*0x7112f1*/
  *((_DWORD *)this + 496) = 0; /*0x7112f7*/
  *((_DWORD *)this + 497) = 0; /*0x7112fd*/
  *((_DWORD *)this + 498) = 0; /*0x711303*/
  *((_DWORD *)this + 499) = 0; /*0x711309*/
  *((_DWORD *)this + 500) = 0; /*0x71130f*/
  *((_DWORD *)this + 501) = 0; /*0x711315*/
  *((_DWORD *)this + 502) = 0; /*0x71131b*/
  *((_DWORD *)this + 503) = 0; /*0x711321*/
  *((_DWORD *)this + 504) = 0; /*0x711327*/
  *((_DWORD *)this + 505) = 0; /*0x71132d*/
  *((_DWORD *)this + 506) = 0; /*0x711333*/
  *((_DWORD *)this + 507) = 0; /*0x711339*/
  *((_DWORD *)this + 508) = 0; /*0x71133f*/
  *((_DWORD *)this + 509) = 0; /*0x711345*/
  *((_DWORD *)this + 510) = 0; /*0x71134b*/
  *((_DWORD *)this + 511) = 0; /*0x711351*/
  *((_DWORD *)this + 512) = 0; /*0x711357*/
  *(this + 2052) = 0; /*0x71135d*/
  *(this + 2053) = 0; /*0x711363*/
  *(this + 2054) = 0; /*0x711369*/
  *((_DWORD *)this + 514) = 0; /*0x71136f*/
  *(this + 2064) = 0; /*0x711375*/
  *(this + 2704) = 0; /*0x71137b*/
  *(this + 3212) = 0; /*0x711381*/
  *(this + 3213) = 1; /*0x711387*/
  *(this + 3214) = 1; /*0x71138e*/
  *(this + 3215) = 0; /*0x711395*/
  *(this + 3216) = 0; /*0x71139b*/
  *(this + 3217) = 0; /*0x7113a1*/
  *(this + 3218) = 0; /*0x7113a7*/
  *(this + 3219) = 0; /*0x7113ad*/
  *(this + 3220) = 0; /*0x7113b3*/
  *(this + 3221) = 0; /*0x7113b9*/
  *(this + 3222) = 0; /*0x7113bf*/
  *(this + 3223) = 1; /*0x7113c5*/
  *(this + 3224) = 0; /*0x7113cc*/
  *(this + 3225) = 0; /*0x7113d2*/
  *(this + 3226) = 0; /*0x7113d8*/
  *(this + 3227) = 0; /*0x7113de*/
  *(this + 3228) = 0; /*0x7113e4*/
  *(this + 3229) = 0; /*0x7113ea*/
  *(this + 3230) = 0; /*0x7113f0*/
  *(this + 3231) = 0; /*0x7113f6*/
  *(this + 3232) = 0; /*0x7113fc*/
  *(this + 3233) = 0; /*0x711402*/
  *(this + 3234) = 0; /*0x711412*/
  *((_DWORD *)this + 809) = 2; /*0x711418*/
  *((_DWORD *)this + 810) = 1; /*0x71141e*/
  *((_DWORD *)this + 811) = 1; /*0x711424*/
  *((_DWORD *)this + 812) = 1; /*0x71142a*/
  *(this + 3252) = 0; /*0x711430*/
  *((_DWORD *)this + 814) = 2; /*0x711436*/
  *((_DWORD *)this + 815) = 1; /*0x71143c*/
  *((_DWORD *)this + 816) = 1; /*0x711442*/
  *((_DWORD *)this + 817) = 1; /*0x711448*/
  *(this + 3272) = 0; /*0x71144e*/
  *(this + 3276) = 1; /*0x711454*/
  *(this + 3277) = 0; /*0x71145a*/
  *(this + 3278) = 0; /*0x711460*/
  *(this + 3279) = 0; /*0x711466*/
  *(this + 3280) = 0; /*0x71146c*/
  *(this + 3281) = 0; /*0x711472*/
  *(this + 3282) = 0; /*0x711478*/
  *(this + 3283) = 0; /*0x71147e*/
  *(this + 3284) = 0; /*0x711484*/
  *(this + 3285) = 0; /*0x71148a*/
  *((_DWORD *)this + 822) = 0; /*0x711490*/
  *((_DWORD *)this + 835) = 0; /*0x711496*/
  *((_DWORD *)this + 836) = 0; /*0x71149c*/
  *(this + 3348) = 0; /*0x7114a2*/
  *(this + 3349) = 0; /*0x7114a8*/
  *((_DWORD *)this + 838) = 0; /*0x7114ae*/
  *((_DWORD *)this + 839) = 1065353216; /*0x7114b4*/
  *(this + 3360) = 0; /*0x7114be*/
  *(this + 3361) = 0; /*0x7114c4*/
  *(this + 3362) = 0; /*0x7114ca*/
  *(this + 3363) = 0; /*0x7114d0*/
  *(this + 3364) = 0; /*0x7114d6*/
  *(this + 3365) = 0; /*0x7114dc*/
  *(this + 3366) = 0; /*0x7114e2*/
  *(this + 3367) = 0; /*0x7114e8*/
  *(this + 3368) = 0; /*0x7114ee*/
  *(this + 3369) = 0; /*0x7114f4*/
  *(this + 3370) = 0; /*0x7114fa*/
  *(this + 3371) = 1; /*0x711500*/
  *(this + 3372) = 0; /*0x711506*/
  *(this + 3373) = 0; /*0x71150c*/
  *(this + 3375) = 0; /*0x711512*/
  *(this + 3376) = 0; /*0x711518*/
  *(this + 3377) = 0; /*0x71151e*/
  *(this + 3378) = 0; /*0x711524*/
  *(this + 3379) = 1; /*0x71152a*/
  *(this + 3380) = 1; /*0x711530*/
  *(this + 3383) = 0; /*0x711536*/
  *(this + 3385) = 0; /*0x71153c*/
  *(this + 3386) = 1; /*0x711542*/
  *(this + 3388) = 0; /*0x711548*/
  *(this + 3389) = 0; /*0x71154e*/
  *(this + 3390) = 0; /*0x711554*/
  *((_DWORD *)this + 848) = 0; /*0x71155a*/
  *((_DWORD *)this + 849) = 0; /*0x711560*/
  *((_DWORD *)this + 850) = 0; /*0x711566*/
  *((_DWORD *)this + 851) = 0; /*0x71156c*/
  *((_DWORD *)this + 852) = -1; /*0x711572*/
  *(this + 3412) = 0; /*0x711578*/
  *((_DWORD *)this + 854) = 0; /*0x71157e*/
  *((_DWORD *)this + 855) = 0; /*0x711584*/
  *((_DWORD *)this + 856) = 0; /*0x71158a*/
  *((_DWORD *)this + 857) = 0; /*0x711590*/
  *(this + 3432) = 0; /*0x711596*/
  *(this + 3433) = 0; /*0x71159c*/
  *(this + 3434) = 0; /*0x7115a2*/
  *((_DWORD *)this + 859) = 0; /*0x7115a8*/
  *((_DWORD *)this + 860) = 4; /*0x7115ae*/
  *((_DWORD *)this + 861) = 14; /*0x7115b8*/
  *((_DWORD *)this + 862) = 1084227584; /*0x7115c7*/
  *((_DWORD *)this + 863) = 1084227584; /*0x7115cd*/
  *((_DWORD *)this + 864) = 500; /*0x7115d3*/
  *((_DWORD *)this + 865) = 0x40000000; /*0x7115dd*/
  *((_DWORD *)this + 866) = 1041865114; /*0x7115e7*/
  *(this + 3468) = 0; /*0x7115f1*/
  *((_DWORD *)this + 868) = 40; /*0x7115f7*/
  *(this + 3476) = 0; /*0x711601*/
  *(this + 3477) = 0; /*0x711607*/
  *(this + 3480) = 0; /*0x71160d*/
  *(this + 3481) = 1; /*0x711613*/
  *(this + 3482) = 1; /*0x71161a*/
  *(this + 3483) = 0; /*0x711621*/
  *(this + 3484) = 0; /*0x711627*/
  *(this + 3485) = 0; /*0x71162d*/
  *((_DWORD *)this + 872) = -1; /*0x711633*/
  *((_DWORD *)this + 873) = -1; /*0x711639*/
  *((_DWORD *)this + 874) = -1; /*0x71163f*/
  *(this + 3500) = 0; /*0x711645*/
  *(this + 3516) = 0; /*0x71164b*/
  *(this + 3517) = 1; /*0x711651*/
  *(this + 3518) = 0; /*0x711658*/
  *(this + 3519) = 0; /*0x71165e*/
  *((_DWORD *)this + 880) = 10; /*0x711664*/
  *((_DWORD *)this + 881) = 5; /*0x71166a*/
  *((_DWORD *)this + 882) = 10; /*0x711674*/
  *((_DWORD *)this + 883) = 0; /*0x71167a*/
  *((_DWORD *)this + 892) = 0; /*0x711680*/
  *(_DWORD *)this = &TechnoTypeClass::`vftable'; /*0x711686*/
  *((_DWORD *)this + 1) = &TechnoTypeClass::`vftable'; /*0x71168c*/
  *((_DWORD *)this + 2) = &TechnoTypeClass::`vftable'; /*0x711693*/
  *((_DWORD *)this + 3) = &TechnoTypeClass::`vftable'; /*0x71169a*/
  *(this + 3536) = 0; /*0x7116a7*/
  *(this + 564) = 1; /*0x7116ad*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 197) + 12))(this + 788); /*0x7116b6*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 369) + 12))(this + 1476); /*0x7116c5*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 204) + 12))(this + 816); /*0x7116d4*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 250) + 12))(this + 1000); /*0x7116e3*/
  v4 = this + 2216; /*0x7116e6*/
  v5 = 18; /*0x7116ec*/
  do /*0x71170f*/
  {
    *(v4 - 4) = 0; /*0x7116f4*/
    v6 = v4 - 3; /*0x7116f7*/
    *v4 = 0; /*0x7116f9*/
    v4[1] = 0; /*0x7116fd*/
    *v6 = 0; /*0x711700*/
    v4 += 7; /*0x711702*/
    --v5; /*0x711705*/
    v6[1] = 0; /*0x711706*/
    v6[2] = 0; /*0x711709*/
    *((_BYTE *)v4 - 20) = 0; /*0x71170c*/
  }
  while ( v5 ); /*0x71170f*/
  v7 = this + 2724; /*0x711711*/
  v8 = 18; /*0x711717*/
  do /*0x71173a*/
  {
    *(v7 - 4) = 0; /*0x71171f*/
    v9 = v7 - 3; /*0x711722*/
    *v7 = 0; /*0x711724*/
    v7[1] = 0; /*0x711728*/
    *v9 = 0; /*0x71172b*/
    v7 += 7; /*0x71172d*/
    --v8; /*0x711730*/
    v9[1] = 0; /*0x711731*/
    v9[2] = 0; /*0x711734*/
    *((_BYTE *)v7 - 20) = 0; /*0x711737*/
  }
  while ( v8 ); /*0x71173a*/
  v10 = this + 2140; /*0x71173c*/
  v11 = 5; /*0x711742*/
  do /*0x711757*/
  {
    v12 = v10; /*0x711747*/
    v10 += 3; /*0x71174b*/
    --v11; /*0x71174e*/
    *v12 = 0; /*0x71174f*/
    v12[1] = 0; /*0x711751*/
    v12[2] = 0; /*0x711754*/
  }
  while ( v11 ); /*0x711757*/
  *((_DWORD *)this + 876) = 0; /*0x711763*/
  v13 = this + 3316; /*0x711765*/
  *((_DWORD *)this + 877) = 0; /*0x71176b*/
  v14 = 6; /*0x71176e*/
  *((_DWORD *)this + 878) = 0; /*0x711773*/
  do /*0x71177f*/
  {
    *(v13 - 6) = 0; /*0x711776*/
    *v13++ = 0; /*0x711779*/
    --v14; /*0x71177e*/
  }
  while ( v14 ); /*0x71177f*/
  memset(this + 2068, 0xFFu, 0x48u); /*0x71178e*/
  if ( g_AnimManager < g_AnimTypePool /*0x7117c3*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimManagerConfig + g_AnimTypePool,
         0) )
  {
    v15 = g_AnimManager++; /*0x7117d0*/
    *((_DWORD *)g_AnimPoolCount + v15) = this; /*0x7117df*/
  }
  if ( dword_A8EB10 < dword_A8EB08 /*0x711816*/
    || (byte_A8EB0D || !dword_A8EB08)
    && dword_A8EB14 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EB00 + 8))(
         &dword_A8EB00,
         dword_A8EB14 + dword_A8EB08,
         0) )
  {
    v16 = dword_A8EB10++; /*0x711823*/
    *((_DWORD *)dword_A8EB04 + v16) = this; /*0x711832*/
  }
  return this; /*0x711837*/
}
// 0x711840
AbstractClass * * TechnoTypeClass::Construct(ObjectTypeClass * aP1)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx

  ObjectTypeClass::Construct((_DWORD *)this, aP1); /*0x71184b*/
  TechnoTypeClass::Constructor_0(aP1); /*0x711859*/
  *(_DWORD *)(this + 788) = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x71185e*/
  IntDynamicVector::Construct((_DWORD *)(this + 816), aP1); /*0x71186d*/
  *(_DWORD *)(this + 816) = &TypeList<int>::`vftable'; /*0x711872*/
  *(_DWORD *)(this + 960) = 0; /*0x711883*/
  TechnoTypeClass::Constructor_1(aP1); /*0x711889*/
  *(_DWORD *)(this + 1000) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x71188e*/
  IntDynamicVector::Construct((_DWORD *)(this + 1044), aP1); /*0x71189e*/
  *(_DWORD *)(this + 1044) = &TypeList<int>::`vftable'; /*0x7118a3*/
  IntDynamicVector::Construct((_DWORD *)(this + 1072), aP1); /*0x7118b3*/
  *(_DWORD *)(this + 1072) = &TypeList<int>::`vftable'; /*0x7118b8*/
  IntDynamicVector::Construct((_DWORD *)(this + 1100), aP1); /*0x7118c8*/
  *(_DWORD *)(this + 1100) = &TypeList<int>::`vftable'; /*0x7118cd*/
  IntDynamicVector::Construct((_DWORD *)(this + 1128), aP1); /*0x7118dd*/
  *(_DWORD *)(this + 1128) = &TypeList<int>::`vftable'; /*0x7118e2*/
  IntDynamicVector::Construct((_DWORD *)(this + 1156), aP1); /*0x7118f2*/
  *(_DWORD *)(this + 1156) = &TypeList<int>::`vftable'; /*0x7118f7*/
  IntDynamicVector::Construct((_DWORD *)(this + 1184), aP1); /*0x711907*/
  *(_DWORD *)(this + 1184) = &TypeList<int>::`vftable'; /*0x71190c*/
  IntDynamicVector::Construct((_DWORD *)(this + 1212), aP1); /*0x71191c*/
  *(_DWORD *)(this + 1212) = &TypeList<int>::`vftable'; /*0x711921*/
  IntDynamicVector::Construct((_DWORD *)(this + 1240), aP1); /*0x711931*/
  *(_DWORD *)(this + 1240) = &TypeList<int>::`vftable'; /*0x711936*/
  IntDynamicVector::Construct((_DWORD *)(this + 1268), aP1); /*0x711946*/
  *(_DWORD *)(this + 1268) = &TypeList<int>::`vftable'; /*0x71194b*/
  IntDynamicVector::Construct((_DWORD *)(this + 1296), aP1); /*0x71195b*/
  *(_DWORD *)(this + 1296) = &TypeList<int>::`vftable'; /*0x711960*/
  ObjectTypeClass::CheckFlag(aP1); /*0x711970*/
  *(_DWORD *)(this + 1476) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x711975*/
  IntDynamicVector::Construct((_DWORD *)(this + 1592), aP1); /*0x711985*/
  *(_DWORD *)(this + 1592) = &TypeList<int>::`vftable'; /*0x71198a*/
  IntDynamicVector::Construct((_DWORD *)(this + 1620), aP1); /*0x71199a*/
  *(_DWORD *)(this + 1620) = &TypeList<int>::`vftable'; /*0x71199f*/
  *(_BYTE *)(this + 1750) = 0; /*0x7119ac*/
  *(_BYTE *)(this + 1781) = 0; /*0x7119b5*/
  ObjectTypeClass::CheckFlag(aP1); /*0x7119bb*/
  *(_DWORD *)(this + 1836) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x7119c0*/
  ObjectTypeClass::CheckFlag(aP1); /*0x7119d0*/
  *(_DWORD *)(this + 1864) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x7119df*/
  TypeList::ParticleConstructor(0, 0); /*0x7119e6*/
  *(_DWORD *)(this + 1912) = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x7119eb*/
  TypeList::ParticleConstructor(0, 0); /*0x7119fb*/
  *(_DWORD *)(this + 1940) = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x711a0a*/
  *(_DWORD *)(this + 3236) = 2; /*0x711a10*/
  *(_DWORD *)(this + 3240) = 1; /*0x711a16*/
  *(_DWORD *)(this + 3244) = 1; /*0x711a1c*/
  *(_DWORD *)(this + 3248) = 1; /*0x711a22*/
  *(_BYTE *)(this + 3252) = 0; /*0x711a28*/
  *(_DWORD *)(this + 3256) = 2; /*0x711a2e*/
  *(_DWORD *)(this + 3260) = 1; /*0x711a34*/
  *(_DWORD *)(this + 3264) = 1; /*0x711a3a*/
  *(_DWORD *)(this + 3268) = 1; /*0x711a40*/
  *(_BYTE *)(this + 3272) = 0; /*0x711a46*/
  *(_DWORD *)this = &TechnoTypeClass::`vftable'; /*0x711a4c*/
  *(_DWORD *)(this + 4) = &TechnoTypeClass::`vftable'; /*0x711a52*/
  *(_DWORD *)(this + 8) = &TechnoTypeClass::`vftable'; /*0x711a59*/
  *(_DWORD *)(this + 12) = &TechnoTypeClass::`vftable'; /*0x711a60*/
  v3 = dword_A8EB10; /*0x711a67*/
  v4 = 0; /*0x711a6c*/
  if ( dword_A8EB10 <= 0 ) /*0x711a70*/
  {
  LABEL_5:
    if ( dword_A8EB10 >= dword_A8EB08 ) /*0x711a8c*/
    {
      if ( !byte_A8EB0D && dword_A8EB08 /*0x711ab1*/
        || dword_A8EB14 <= 0
        || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EB00 + 8))(
              &dword_A8EB00,
              dword_A8EB14 + dword_A8EB08,
              0) )
      {
        return this; /*0x711ab6*/
      }
      v3 = dword_A8EB10; /*0x711ab8*/
    }
    dword_A8EB10 = v3 + 1; /*0x711ac6*/
    *((_DWORD *)dword_A8EB04 + v3) = this; /*0x711acb*/
    return this; /*0x711acb*/
  }
  v5 = dword_A8EB04; /*0x711a72*/
  while ( *v5 != this ) /*0x711a7a*/
  {
    ++v4; /*0x711a7c*/
    ++v5; /*0x711a7d*/
    if ( v4 >= dword_A8EB10 ) /*0x711a82*/
      goto LABEL_5; /*0x711a82*/
  }
  return this; /*0x711ad0*/
}
// 0x711AE0
int TechnoTypeClass::DTOR()
{
  char v2; // al
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  int v17; // [esp+8h] [ebp-4h] BYREF

  v2 = *(_BYTE *)(this + 1780); /*0x711ae7*/
  *(_DWORD *)this = &TechnoTypeClass::`vftable'; /*0x711aed*/
  *(_DWORD *)(this + 4) = &TechnoTypeClass::`vftable'; /*0x711af5*/
  *(_DWORD *)(this + 8) = &TechnoTypeClass::`vftable'; /*0x711afc*/
  *(_DWORD *)(this + 12) = &TechnoTypeClass::`vftable'; /*0x711b03*/
  if ( v2 && *(_DWORD *)(this + 1776) ) /*0x711b0c*/
  {
    __3_YAXPAX_Z(*(void **)(this + 1776)); /*0x711b17*/
    *(_DWORD *)(this + 1776) = 0; /*0x711b1f*/
    *(_BYTE *)(this + 1780) = 0; /*0x711b25*/
  }
  if ( *(_BYTE *)(this + 1812) && *(_DWORD *)(this + 1808) ) /*0x711b33*/
  {
    __3_YAXPAX_Z(*(void **)(this + 1808)); /*0x711b3e*/
    *(_DWORD *)(this + 1808) = 0; /*0x711b46*/
    *(_BYTE *)(this + 1812) = 0; /*0x711b4c*/
  }
  v17 = this; /*0x711b62*/
  v3 = (*(int (__thiscall **)(int *, int *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v17); /*0x711b66*/
  if ( v3 != -1 ) /*0x711b6c*/
    DynamicVector::RemoveItem(&g_AnimPoolManager, v3); /*0x711b74*/
  v17 = this; /*0x711b89*/
  v4 = (*(int (__thiscall **)(int *, int *))(dword_A8EB00 + 16))(&dword_A8EB00, &v17); /*0x711b8d*/
  if ( v4 != -1 ) /*0x711b93*/
    TechnoTypeClass::RemoveItem(&dword_A8EB00, v4); /*0x711b9b*/
  *(_DWORD *)(this + 1940) = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x711ba7*/
  VectorClass::Cleanup(this + 1940); /*0x711bad*/
  *(_DWORD *)(this + 1912) = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x711bb8*/
  VectorClass::Cleanup(this + 1912); /*0x711bbe*/
  *(_DWORD *)(this + 1864) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x711bc9*/
  DynamicVectorClass::Destroy_Alt(this + 1864); /*0x711bcf*/
  *(_DWORD *)(this + 1836) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x711bda*/
  DynamicVectorClass::Destroy_Alt(this + 1836); /*0x711be0*/
  *(_DWORD *)(this + 1620) = &VectorClass<int>::`vftable'; /*0x711bf0*/
  VectorClass::Destroy(this + 1620); /*0x711bf2*/
  *(_DWORD *)(this + 1592) = &VectorClass<int>::`vftable'; /*0x711bfd*/
  VectorClass::Destroy(this + 1592); /*0x711bff*/
  *(_DWORD *)(this + 1476) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x711c0a*/
  DynamicVectorClass::Destroy_Alt(this + 1476); /*0x711c10*/
  *(_DWORD *)(this + 1296) = &VectorClass<int>::`vftable'; /*0x711c1b*/
  VectorClass::Destroy(this + 1296); /*0x711c1d*/
  *(_DWORD *)(this + 1268) = &VectorClass<int>::`vftable'; /*0x711c28*/
  VectorClass::Destroy(this + 1268); /*0x711c2a*/
  v5 = *(void **)(this + 1244); /*0x711c2f*/
  *(_DWORD *)(this + 1240) = &VectorClass<int>::`vftable'; /*0x711c35*/
  if ( v5 && *(_BYTE *)(this + 1253) ) /*0x711c3f*/
  {
    __3_YAXPAX_Z(v5); /*0x711c48*/
    *(_DWORD *)(this + 1244) = 0; /*0x711c50*/
  }
  *(_BYTE *)(this + 1253) = 0; /*0x711c56*/
  *(_DWORD *)(this + 1248) = 0; /*0x711c5c*/
  v6 = *(void **)(this + 1216); /*0x711c62*/
  *(_DWORD *)(this + 1212) = &VectorClass<int>::`vftable'; /*0x711c68*/
  if ( v6 && *(_BYTE *)(this + 1225) ) /*0x711c72*/
  {
    __3_YAXPAX_Z(v6); /*0x711c7b*/
    *(_DWORD *)(this + 1216) = 0; /*0x711c83*/
  }
  *(_BYTE *)(this + 1225) = 0; /*0x711c89*/
  *(_DWORD *)(this + 1220) = 0; /*0x711c8f*/
  v7 = *(void **)(this + 1188); /*0x711c95*/
  *(_DWORD *)(this + 1184) = &VectorClass<int>::`vftable'; /*0x711c9b*/
  if ( v7 && *(_BYTE *)(this + 1197) ) /*0x711ca5*/
  {
    __3_YAXPAX_Z(v7); /*0x711cae*/
    *(_DWORD *)(this + 1188) = 0; /*0x711cb6*/
  }
  *(_BYTE *)(this + 1197) = 0; /*0x711cbc*/
  *(_DWORD *)(this + 1192) = 0; /*0x711cc2*/
  v8 = *(void **)(this + 1160); /*0x711cc8*/
  *(_DWORD *)(this + 1156) = &VectorClass<int>::`vftable'; /*0x711cce*/
  if ( v8 && *(_BYTE *)(this + 1169) ) /*0x711cd8*/
  {
    __3_YAXPAX_Z(v8); /*0x711ce1*/
    *(_DWORD *)(this + 1160) = 0; /*0x711ce9*/
  }
  *(_BYTE *)(this + 1169) = 0; /*0x711cef*/
  *(_DWORD *)(this + 1164) = 0; /*0x711cf5*/
  v9 = *(void **)(this + 1132); /*0x711cfb*/
  *(_DWORD *)(this + 1128) = &VectorClass<int>::`vftable'; /*0x711d01*/
  if ( v9 && *(_BYTE *)(this + 1141) ) /*0x711d0b*/
  {
    __3_YAXPAX_Z(v9); /*0x711d14*/
    *(_DWORD *)(this + 1132) = 0; /*0x711d1c*/
  }
  *(_BYTE *)(this + 1141) = 0; /*0x711d22*/
  *(_DWORD *)(this + 1136) = 0; /*0x711d28*/
  v10 = *(void **)(this + 1104); /*0x711d2e*/
  *(_DWORD *)(this + 1100) = &VectorClass<int>::`vftable'; /*0x711d34*/
  if ( v10 && *(_BYTE *)(this + 1113) ) /*0x711d3e*/
  {
    __3_YAXPAX_Z(v10); /*0x711d47*/
    *(_DWORD *)(this + 1104) = 0; /*0x711d4f*/
  }
  *(_BYTE *)(this + 1113) = 0; /*0x711d55*/
  *(_DWORD *)(this + 1108) = 0; /*0x711d5b*/
  v11 = *(void **)(this + 1076); /*0x711d61*/
  *(_DWORD *)(this + 1072) = &VectorClass<int>::`vftable'; /*0x711d67*/
  if ( v11 && *(_BYTE *)(this + 1085) ) /*0x711d71*/
  {
    __3_YAXPAX_Z(v11); /*0x711d7a*/
    *(_DWORD *)(this + 1076) = 0; /*0x711d82*/
  }
  *(_BYTE *)(this + 1085) = 0; /*0x711d88*/
  *(_DWORD *)(this + 1080) = 0; /*0x711d8e*/
  v12 = *(void **)(this + 1048); /*0x711d94*/
  *(_DWORD *)(this + 1044) = &VectorClass<int>::`vftable'; /*0x711d9a*/
  if ( v12 && *(_BYTE *)(this + 1057) ) /*0x711da4*/
  {
    __3_YAXPAX_Z(v12); /*0x711dad*/
    *(_DWORD *)(this + 1048) = 0; /*0x711db5*/
  }
  *(_BYTE *)(this + 1057) = 0; /*0x711dbb*/
  *(_DWORD *)(this + 1052) = 0; /*0x711dc1*/
  v13 = *(void **)(this + 1004); /*0x711dc7*/
  *(_DWORD *)(this + 1000) = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x711dcd*/
  if ( v13 && *(_BYTE *)(this + 1013) ) /*0x711ddb*/
  {
    __3_YAXPAX_Z(v13); /*0x711de4*/
    *(_DWORD *)(this + 1004) = 0; /*0x711dec*/
  }
  *(_BYTE *)(this + 1013) = 0; /*0x711df2*/
  *(_DWORD *)(this + 1008) = 0; /*0x711df8*/
  v14 = *(void **)(this + 820); /*0x711dfe*/
  *(_DWORD *)(this + 816) = &VectorClass<int>::`vftable'; /*0x711e04*/
  if ( v14 && *(_BYTE *)(this + 829) ) /*0x711e0f*/
  {
    __3_YAXPAX_Z(v14); /*0x711e18*/
    *(_DWORD *)(this + 820) = 0; /*0x711e20*/
  }
  *(_BYTE *)(this + 829) = 0; /*0x711e26*/
  *(_DWORD *)(this + 824) = 0; /*0x711e2c*/
  v15 = *(void **)(this + 792); /*0x711e32*/
  *(_DWORD *)(this + 788) = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x711e38*/
  if ( v15 && *(_BYTE *)(this + 801) ) /*0x711e46*/
  {
    __3_YAXPAX_Z(v15); /*0x711e4f*/
    *(_DWORD *)(this + 792) = 0; /*0x711e57*/
  }
  *(_BYTE *)(this + 801) = 0; /*0x711e5f*/
  *(_DWORD *)(this + 796) = 0; /*0x711e65*/
  return ObjectTypeClass::Destruct(this); /*0x711e70*/
}
// 0x711F00
int TechnoTypeClass::ComputeValueSimple(float * a2)
{
  float v4; // [esp+8h] [ebp-8h]
  float v5; // [esp+Ch] [ebp-4h]
  int v6; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x711f0d*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 172))(this); /*0x711f52*/
  v5 = TechnoTypeClass::Dispatch(this); /*0x711f17*/
  v4 = TechnoTypeClass::GetThreatMultiplier(this); /*0x711f27*/
  v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 172))(this); /*0x711f31*/
  return Math::RoundToInt((double)v6 * v4 * v5); /*0x711f46*/
}
// 0x711F60
int TechnoTypeClass::ComputeValue(void * a2, float a3)
{
  int v6; // esi
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]
  #375 *v9; // [esp+14h] [ebp+4h]
  float v10; // [esp+18h] [ebp+8h]
  int v11; // [esp+18h] [ebp+8h]

  v7 = *((double *)g_RulesClass_Instance + 743); /*0x711f76*/
  if ( LOBYTE(a3) ) /*0x711f7c*/
    v7 = 1.0; /*0x711f7e*/
  if ( a2 ) /*0x711f8c*/
  {
    v10 = TechnoTypeClass::Dispatch(this); /*0x711f9a*/
    v8 = TechnoTypeClass::GetThreatMultiplier(this); /*0x711fac*/
    if ( *(this + 389) ) /*0x711fa6*/
    {
      return Math::RoundToInt((double)*(this + 389) * v10); /*0x711fc0*/
    }
    else
    {
      v9 = (#375 *)(*(int (__thiscall **)(int *))(*this + 172))(this); /*0x711fd7*/
      v6 = Math::RoundToInt((double)(int)v9 * v8 * v10); /*0x711fec*/
      if ( (unsigned __int8)House::IsCurrentPlayer(a2) ) /*0x711ff4*/
        return Math::RoundToInt((double)v6 * v7); /*0x71200a*/
      return v6; /*0x71200c*/
    }
  }
  else
  {
    v11 = (*(int (__thiscall **)(int *))(*this + 172))(this); /*0x712020*/
    return Math::RoundToInt((double)v11 * v7); /*0x71202c*/
  }
}
// 0x7162F0
DynamicVectorClass * * TechnoTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  _DWORD *v3; // ebp
  int result; // eax
  int j; // ebp
  int k; // ebx
  int m; // ebx
  int n; // ebx
  int ii; // ebx
  int jj; // ebx
  int kk; // ebx
  int mm; // ebx
  int nn; // ebx
  int i1; // ebx
  int i2; // ebx
  int i3; // ebx
  int i4; // ebx
  int i5; // ebx
  int i6; // ebx
  int i7; // ebx
  int i8; // ebx
  int i9; // ebx
  int i10; // ebx
  int i11; // esi
  int i12; // esi
  int i13; // esi
  int i14; // esi
  int i15; // esi
  int *v29; // esi
  int v30; // ebx
  int *v31; // esi
  int v32; // ebx
  int i16; // esi
  int i17; // esi
  int v35; // eax
  int v36; // [esp+280h] [ebp-210h] BYREF
  int v37; // [esp+284h] [ebp-20Ch] BYREF
  int i; // [esp+288h] [ebp-208h]
  char Filename[256]; // [esp+28Ch] [ebp-204h] BYREF
  char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF

  v3 = (_DWORD *)(aP0 + 1000); /*0x716307*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1000) + 12))(aP0 + 1000); /*0x71630f*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 788) + 12))(aP0 + 788); /*0x716320*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1476) + 12))(aP0 + 1476); /*0x71632f*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1044) + 12))(aP0 + 1044); /*0x71633e*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1072) + 12))(aP0 + 1072); /*0x71634d*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1100) + 12))(aP0 + 1100); /*0x71635c*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1128) + 12))(aP0 + 1128); /*0x71636b*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1156) + 12))(aP0 + 1156); /*0x71637a*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1184) + 12))(aP0 + 1184); /*0x716389*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1212) + 12))(aP0 + 1212); /*0x716398*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1240) + 12))(aP0 + 1240); /*0x7163a7*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1268) + 12))(aP0 + 1268); /*0x7163b6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1296) + 12))(aP0 + 1296); /*0x7163c5*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1836) + 12))(aP0 + 1836); /*0x7163d4*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1864) + 12))(aP0 + 1864); /*0x7163e3*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1592) + 12))(aP0 + 1592); /*0x7163f2*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1620) + 12))(aP0 + 1620); /*0x716401*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 816) + 12))(aP0 + 816); /*0x716410*/
  result = ObjectTypeClass::LoadCleanup(aP0, aP1); /*0x71641c*/
  if ( result >= 0 ) /*0x716423*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1028)); /*0x716435*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1032)); /*0x716446*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1036)); /*0x716457*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1892)); /*0x716468*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1908)); /*0x716479*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 3416)); /*0x71648a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 3392)); /*0x71649b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 3352)); /*0x7164ac*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1572)); /*0x7164bd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1576)); /*0x7164ce*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1720)); /*0x7164df*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1724)); /*0x7164f0*/
    if ( aP0 != -1000 ) /*0x7164f7*/
      TypeList::BuildingTypeConstructor(v3); /*0x7164fb*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71650c*/
    for ( i = 0; i < v36; ++i ) /*0x71651d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71652b*/
      DynamicVector::Add_Alt3(v3, &v37); /*0x716535*/
    }
    if ( aP0 != -788 ) /*0x71654d*/
      TypeList::VoxelAnimConstructor((_DWORD *)(aP0 + 788)); /*0x716551*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716562*/
    for ( j = 0; j < v36; ++j ) /*0x71656d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71657b*/
      DynamicVector::Add2((_DWORD *)(aP0 + 788), &v37); /*0x716585*/
    }
    if ( aP0 != -1476 ) /*0x716599*/
      AnimTypeList::Constructor((_DWORD *)(aP0 + 1476)); /*0x71659d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7165ae*/
    for ( k = 0; k < v36; ++k ) /*0x7165b9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7165c7*/
      DynamicVector::Add_Alt4((_DWORD *)(aP0 + 1476), &v37); /*0x7165d1*/
    }
    if ( aP0 != -1044 ) /*0x7165e5*/
      TypeList::Construct((_DWORD *)(aP0 + 1044)); /*0x7165e9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7165fa*/
    for ( m = 0; m < v36; ++m ) /*0x716605*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716613*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1044), &v37); /*0x71661d*/
    }
    if ( aP0 != -1072 ) /*0x716631*/
      TypeList::Construct((_DWORD *)(aP0 + 1072)); /*0x716635*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716646*/
    for ( n = 0; n < v36; ++n ) /*0x716651*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71665f*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1072), &v37); /*0x716669*/
    }
    if ( aP0 != -1100 ) /*0x71667d*/
      TypeList::Construct((_DWORD *)(aP0 + 1100)); /*0x716681*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716692*/
    for ( ii = 0; ii < v36; ++ii ) /*0x71669d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7166ab*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1100), &v37); /*0x7166b5*/
    }
    if ( aP0 != -1128 ) /*0x7166c9*/
      TypeList::Construct((_DWORD *)(aP0 + 1128)); /*0x7166cd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7166de*/
    for ( jj = 0; jj < v36; ++jj ) /*0x7166e9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7166f7*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1128), &v37); /*0x716701*/
    }
    if ( aP0 != -1156 ) /*0x716715*/
      TypeList::Construct((_DWORD *)(aP0 + 1156)); /*0x716719*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71672a*/
    for ( kk = 0; kk < v36; ++kk ) /*0x716735*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716743*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1156), &v37); /*0x71674d*/
    }
    if ( aP0 != -1184 ) /*0x716761*/
      TypeList::Construct((_DWORD *)(aP0 + 1184)); /*0x716765*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716776*/
    for ( mm = 0; mm < v36; ++mm ) /*0x716781*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71678f*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1184), &v37); /*0x716799*/
    }
    if ( aP0 != -1212 ) /*0x7167ad*/
      TypeList::Construct((_DWORD *)(aP0 + 1212)); /*0x7167b1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7167c2*/
    for ( nn = 0; nn < v36; ++nn ) /*0x7167cd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7167db*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1212), &v37); /*0x7167e5*/
    }
    if ( aP0 != -1240 ) /*0x7167f9*/
      TypeList::Construct((_DWORD *)(aP0 + 1240)); /*0x7167fd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71680e*/
    for ( i1 = 0; i1 < v36; ++i1 ) /*0x716819*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716827*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1240), &v37); /*0x716831*/
    }
    if ( aP0 != -1268 ) /*0x716845*/
      TypeList::Construct((_DWORD *)(aP0 + 1268)); /*0x716849*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71685a*/
    for ( i2 = 0; i2 < v36; ++i2 ) /*0x716865*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716873*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1268), &v37); /*0x71687d*/
    }
    if ( aP0 != -1296 ) /*0x716891*/
      TypeList::Construct((_DWORD *)(aP0 + 1296)); /*0x716895*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7168a6*/
    for ( i3 = 0; i3 < v36; ++i3 ) /*0x7168b1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7168bf*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1296), &v37); /*0x7168c9*/
    }
    if ( aP0 != -1836 ) /*0x7168dd*/
      AnimTypeList::Constructor((_DWORD *)(aP0 + 1836)); /*0x7168e1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7168f2*/
    for ( i4 = 0; i4 < v36; ++i4 ) /*0x7168fd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71690b*/
      DynamicVector::Add_Alt4((_DWORD *)(aP0 + 1836), &v37); /*0x716915*/
    }
    if ( aP0 != -1864 ) /*0x716929*/
      AnimTypeList::Constructor((_DWORD *)(aP0 + 1864)); /*0x71692d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71693e*/
    for ( i5 = 0; i5 < v36; ++i5 ) /*0x716949*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716957*/
      DynamicVector::Add_Alt4((_DWORD *)(aP0 + 1864), &v37); /*0x716961*/
    }
    if ( aP0 != -816 ) /*0x716975*/
      TypeList::Construct((_DWORD *)(aP0 + 816)); /*0x716979*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71698a*/
    for ( i6 = 0; i6 < v36; ++i6 ) /*0x716995*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7169a3*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 816), &v37); /*0x7169ad*/
    }
    if ( aP0 != -1592 ) /*0x7169c1*/
      TypeList::Construct((_DWORD *)(aP0 + 1592)); /*0x7169c5*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7169d6*/
    for ( i7 = 0; i7 < v36; ++i7 ) /*0x7169e1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7169ef*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1592), &v37); /*0x7169f9*/
    }
    if ( aP0 != -1620 ) /*0x716a0d*/
      TypeList::Construct((_DWORD *)(aP0 + 1620)); /*0x716a11*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716a22*/
    for ( i8 = 0; i8 < v36; ++i8 ) /*0x716a2d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716a3b*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1620), &v37); /*0x716a45*/
    }
    if ( aP0 != -1912 ) /*0x716a59*/
      TechnoTypeClass::Constructor((_DWORD *)(aP0 + 1912)); /*0x716a5d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716a6e*/
    for ( i9 = 0; i9 < v36; ++i9 ) /*0x716a79*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716a87*/
      TypeList::PushBack((_DWORD *)(aP0 + 1912), &v37); /*0x716a91*/
    }
    if ( aP0 != -1940 ) /*0x716aa5*/
      TechnoTypeClass::Constructor((_DWORD *)(aP0 + 1940)); /*0x716aa9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716aba*/
    for ( i10 = 0; i10 < v36; ++i10 ) /*0x716ac5*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716ad3*/
      TypeList::PushBack((_DWORD *)(aP0 + 1940), &v37); /*0x716add*/
    }
    for ( i11 = 0; i11 < *(_DWORD *)(aP0 + 1016); ++i11 ) /*0x716af3*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1004) + 4 * i11)); /*0x716b04*/
    for ( i12 = 0; i12 < *(_DWORD *)(aP0 + 1852); ++i12 ) /*0x716b1e*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1840) + 4 * i12)); /*0x716b2f*/
    for ( i13 = 0; i13 < *(_DWORD *)(aP0 + 1880); ++i13 ) /*0x716b49*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1868) + 4 * i13)); /*0x716b5a*/
    for ( i14 = 0; i14 < *(_DWORD *)(aP0 + 804); ++i14 ) /*0x716b74*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 792) + 4 * i14)); /*0x716b85*/
    for ( i15 = 0; i15 < *(_DWORD *)(aP0 + 1492); ++i15 ) /*0x716b9f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1480) + 4 * i15)); /*0x716bb0*/
    v29 = (int *)(aP0 + 2200); /*0x716bc0*/
    v30 = 18; /*0x716bc6*/
    do /*0x716bda*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v29); /*0x716bd1*/
      v29 += 7; /*0x716bd6*/
      --v30; /*0x716bd9*/
    }
    while ( v30 ); /*0x716bda*/
    v31 = (int *)(aP0 + 2708); /*0x716bdc*/
    v32 = 18; /*0x716be2*/
    do /*0x716bf6*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v31); /*0x716bed*/
      v31 += 7; /*0x716bf2*/
      --v32; /*0x716bf5*/
    }
    while ( v32 ); /*0x716bf6*/
    for ( i16 = 0; i16 < *(_DWORD *)(aP0 + 1928); ++i16 ) /*0x716c04*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1916) + 4 * i16)); /*0x716c15*/
    for ( i17 = 0; i17 < *(_DWORD *)(aP0 + 1956); ++i17 ) /*0x716c2f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1944) + 4 * i17)); /*0x716c40*/
    _makepath(Buffer, 0, 0, (const char *)(aP0 + 504), Ext); /*0x716c66*/
    *(_DWORD *)(aP0 + 164) = SearchMIXFile(Buffer, 0); /*0x716c96*/
    INIClass::GetString( /*0x716c9c*/
      (unsigned __int8 ***)&CCINIClass_INI_Art,
      (unsigned __int8 *)(aP0 + 504),
      (unsigned __int8 *)g_INI_Key_Cameo,
      g_INI_Key_XXICON,
      Filename,
      256);
    if ( !_strcmpi(Filename, g_INI_Key_XXICON) ) /*0x716cab*/
      INIClass::GetString( /*0x716cd4*/
        (unsigned __int8 ***)&CCINIClass_INI_Art,
        (unsigned __int8 *)(aP0 + 36),
        (unsigned __int8 *)g_INI_Key_Cameo,
        g_INI_Key_XXICON,
        Filename,
        256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716ced*/
    *(_DWORD *)(aP0 + 1776) = 0; /*0x716cfe*/
    v35 = SearchMIXFile(Buffer, 0); /*0x716d04*/
    *(_DWORD *)(aP0 + 1776) = v35; /*0x716d0b*/
    if ( !v35 ) /*0x716d11*/
      *(_DWORD *)(aP0 + 1776) = SearchMIXFile(g_Str_File_XXICON_SHP, 0); /*0x716d1f*/
    INIClass::GetString( /*0x716d3f*/
      (unsigned __int8 ***)&CCINIClass_INI_Art,
      (unsigned __int8 *)(aP0 + 504),
      (unsigned __int8 *)aAltcameo,
      &g_INI_DefaultBuffer,
      Filename,
      256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716d58*/
    *(_DWORD *)(aP0 + 1808) = 0; /*0x716d69*/
    *(_DWORD *)(aP0 + 1808) = SearchMIXFile(Buffer, 0); /*0x716d8d*/
    INIClass::GetString( /*0x716d93*/
      (unsigned __int8 ***)&CCINIClass_INI_Art,
      (unsigned __int8 *)(aP0 + 504),
      (unsigned __int8 *)g_INI_Key_Palette,
      &g_INI_DefaultBuffer,
      (char *)(aP0 + 3536),
      32);
    if ( *(_BYTE *)(aP0 + 3536) ) /*0x716d98*/
      *(_DWORD *)(aP0 + 3568) = FileExtension::MapHandler((const char *)(aP0 + 3536)); /*0x716da4*/
    return 0; /*0x716daa*/
  }
  return result; /*0x716dac*/
}
// 0x716DC0
int TechnoTypeClass::SaveLoad_Prefix_0(void * a1, TechnoTypeClass * aP2, TechnoTypeClass * aP3)
{
  int result; // eax
  int v6; // edx
  int i; // ebx
  int v8; // edx
  int j; // ebx
  int v10; // edx
  int k; // ebx
  int v12; // edx
  int m; // ebx
  int v14; // edx
  int n; // ebx
  int v16; // edx
  int ii; // ebx
  int v18; // edx
  int jj; // ebx
  int v20; // edx
  int kk; // ebx
  int v22; // edx
  int mm; // ebx

  result = AbstractClass::SaveLoad_PrefixWrapper((int)this, (int)a1, aP2); /*0x716dd1*/
  if ( result >= 0 ) /*0x716dd8*/
  {
    v6 = *a1; /*0x716de4*/
    aP2 = this[254]; /*0x716df1*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v6 + 16))(a1, &aP2, 4, 0, a1); /*0x716df5*/
    for ( i = 0; i < aP3; ++i ) /*0x716e00*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this[251] + 4 * i, 4, 0); /*0x716e13*/
    v8 = *a1; /*0x716e23*/
    aP3 = this[201]; /*0x716e2f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))(a1, &aP3, 4, 0); /*0x716e33*/
    for ( j = 0; j < aP3; ++j ) /*0x716e3e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this[198] + 4 * j, 4, 0); /*0x716e51*/
    v10 = *a1; /*0x716e61*/
    aP3 = this[373]; /*0x716e6d*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v10 + 16))(a1, &aP3, 4, 0); /*0x716e71*/
    for ( k = 0; k < aP3; ++k ) /*0x716e7c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this[370] + 4 * k, 4, 0); /*0x716e8f*/
    v12 = *a1; /*0x716e9f*/
    aP3 = this[265]; /*0x716eab*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v12 + 16))(a1, &aP3, 4, 0); /*0x716eaf*/
    for ( m = 0; m < aP3; ++m ) /*0x716eba*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this[262] + 4 * m, 4, 0); /*0x716ecd*/
    v14 = *a1; /*0x716edd*/
    aP3 = this[272]; /*0x716ee9*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v14 + 16))(a1, &aP3, 4, 0); /*0x716eed*/
    for ( n = 0; n < aP3; ++n ) /*0x716ef8*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this[269] + 4 * n, 4, 0); /*0x716f0b*/
    v16 = *a1; /*0x716f1b*/
    aP3 = this[279]; /*0x716f27*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v16 + 16))(a1, &aP3, 4, 0); /*0x716f2b*/
    for ( ii = 0; ii < aP3; ++ii ) /*0x716f36*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this[276] + 4 * ii, 4, 0); /*0x716f49*/
    v18 = *a1; /*0x716f59*/
    aP3 = this[286]; /*0x716f65*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v18 + 16))(a1, &aP3, 4, 0); /*0x716f69*/
    for ( jj = 0; jj < aP3; ++jj ) /*0x716f74*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this[283] + 4 * jj, 4, 0); /*0x716f87*/
    v20 = *a1; /*0x716f97*/
    aP3 = this[293]; /*0x716fa3*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v20 + 16))(a1, &aP3, 4, 0); /*0x716fa7*/
    for ( kk = 0; kk < aP3; ++kk ) /*0x716fb2*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this[290] + 4 * kk, 4, 0); /*0x716fc5*/
    v22 = *a1; /*0x716fd5*/
    aP3 = this[300]; /*0x716fe1*/
    (*(void (__stdcall **)(int *, int *, int))(v22 + 16))(a1, &aP3, 4); /*0x716fe5*/
    for ( mm = 0; mm < aP2; ++mm ) /*0x716ff0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this[297] + 4 * mm, 4, 0); /*0x717003*/
    DynamicVector::Read(this + 303, a1); /*0x717014*/
    DynamicVector::Read(this + 310, a1); /*0x717020*/
    DynamicVector::Read(this + 317, a1); /*0x71702c*/
    DynamicVector::Read(this + 324, a1); /*0x717038*/
    Stream::WriteIntArray(this + 459, a1); /*0x717044*/
    Stream::WriteIntArray(this + 466, a1); /*0x717050*/
    DynamicVector::Read(this + 204, a1); /*0x71705c*/
    DynamicVector::Read(this + 398, a1); /*0x717068*/
    DynamicVector::Read(this + 405, a1); /*0x717074*/
    TechnoTypeClass::SaveLoadDataArray(this + 478, a1); /*0x717080*/
    TechnoTypeClass::SaveLoadDataArray(this + 485, a1); /*0x71708c*/
    return 0; /*0x717091*/
  }
  return result; /*0x717094*/
}
// 0x41CB50
char TechnoTypeClass::vt_entry_A0()
{
  return 0; /*0x41cb52*/
}
// 0x5247C0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0()
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon(this);
}
}
// 0x711E90
bool TechnoTypeClass::CanAttackMove_IgnoreWeapon()
{
  return *(_DWORD *)(this + 2200) && !*(_BYTE *)(this + 1736); /*0x711ea6*/
}
// 0x711EE0
double TechnoTypeClass::ComputeBuildTime()
{
  double result; // st7

  result = (double)*(this + 388) * *((double *)g_RulesClass_Instance + 745) * 0.9; /*0x711ef1*/
  Math::RoundToInt(result); /*0x711ef7*/
  return result;
}
// 0x7179A0
TechnoTypeClass * TechnoTypeClass::ddtor(char a2)
{
  TechnoTypeClass::DTOR((int)this); /*0x7179a3*/
  if ( (a2 & 1) != 0 ) /*0x7179ad*/
    __3_YAXPAX_Z(this); /*0x7179b0*/
  return this; /*0x7179ba*/
}
// 0x717AF0
unsigned int * TechnoTypeClass::Constructor()
{
  *(this + 1) = 0; /*0x717af4*/
  *(this + 2) = 0; /*0x717af7*/
  *((_BYTE *)this + 12) = 1; /*0x717afa*/
  *((_BYTE *)this + 13) = 0; /*0x717afe*/
  *(this + 5) = 10; /*0x717b01*/
  *(this + 4) = 0; /*0x717b08*/
  *this = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x717b0b*/
  return this; /*0x717b11*/
}
// 0x717B20
int TechnoTypeClass::SaveLoadDataArray(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x717b2c*/
  v6 = *(this + 4); /*0x717b39*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x717b3d*/
  result = v6; /*0x717b40*/
  for ( i = 0; i < v6; ++i ) /*0x717b48*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*aP1 + 16))(aP1, *(this + 1) + 4 * i, 4, 0); /*0x717b58*/
    result = v6; /*0x717b5b*/
  }
  return result; /*0x717b64*/
}
// 0x717BC0
unsigned int * TechnoTypeClass::Constructor_0(ObjectTypeClass * aP1)
{
  *this = &DynamicVectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x717bc2*/
  return this; /*0x717bc8*/
}
// 0x717BE0
VectorClass * TechnoTypeClass::Constructor_1(ObjectTypeClass * aP1)
{
  *this = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x717be2*/
  return this; /*0x717be8*/
}
// 0x717DB0
char TechnoTypeClass::RemoveItem(int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x717db0*/
  v3 = a2; /*0x717db3*/
  if ( a2 >= v2 ) /*0x717db9*/
    return 0; /*0x717ddc*/
  v4 = v2 - 1; /*0x717dbb*/
  *(this + 4) = v4; /*0x717dbe*/
  if ( a2 < v4 ) /*0x717dc1*/
  {
    do /*0x717dd4*/
    {
      ++v3; /*0x717dc7*/
      *(_DWORD *)(*(this + 1) + 4 * v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * v3); /*0x717dcb*/
    }
    while ( v3 < *(this + 4) ); /*0x717dd4*/
  }
  return 1; /*0x717dd9*/
}
// 0x7473D0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0_0()
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon(this);
}
}