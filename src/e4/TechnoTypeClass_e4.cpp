// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Palette_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/DynamicVectorClass_flat_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AnimTypeVector_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)

// 0x48DCD0
namespace gamemd {
AbstractClass * * TechnoTypeClass::GetByTypeAndIndex(int a1, int a2)
{

  int result; // eax

  switch ( a1 ) /*0x48dce0*/
  {
    case 1: /*0x48dce0*/
    case 40: /*0x48dce0*/
      result = *((unsigned int *)dword_A83CE4 + a2); /*0x48dcec*/
      break; /*0x48dcef*/
    case 2: /*0x48dce0*/
    case 3: /*0x48dce0*/
      result = *((unsigned int *)dword_A8B21C + a2); /*0x48dd09*/
      break; /*0x48dd0c*/
    case 6: /*0x48dce0*/
    case 7: /*0x48dce0*/
      result = *((unsigned int *)dword_A83C6C + a2); /*0x48dcf6*/
      break; /*0x48dcf9*/
    case 15: /*0x48dce0*/
    case 16: /*0x48dce0*/
      result = *((unsigned int *)dword_A8E34C + a2); /*0x48dcff*/
      break; /*0x48dd02*/
    default:
      result = 0; /*0x48dd0d*/
      break; /*0x48dd0d*/
  }
  return (gamemd::AbstractClass **)(result); /*0x48dcef*/

}
} // namespace gamemd
// 0x50BDF0
namespace gamemd {
double TechnoTypeClass::Dispatch(unsigned int * aP1)
{

  double result; // st7

  switch ( (*(int (**)(unsigned int *))(*aP1 + 44))( (unsigned int *)(aP1)) ) /*0x50be0f*/
  {
    case 3: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 284); /*0x50be37*/
      break; /*0x50be3d*/
    case 7: /*0x50be0f*/
      if ( aP1[898] == 5 ) /*0x50be47*/
        result = *(float *)(this->ObjectTypeClass[13] + 292); /*0x50be4e*/
      else
        result = *(float *)(this->ObjectTypeClass[13] + 288); /*0x50be5c*/
      break; /*0x50be54*/
    case 16: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 276); /*0x50be1b*/
      break; /*0x50be21*/
    case 40: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 280); /*0x50be29*/
      break; /*0x50be2f*/
    default:
      result = 1.0; /*0x50be65*/
      break; /*0x50be65*/
  }
  return result; /*0x50be6b*/

}

// G42.35 static-form sync (G57e1): qualified-call sites pass explicit this
double TechnoTypeClass::Dispatch(TechnoTypeClass * aP1, unsigned int *a2)
{
  return aP1->Dispatch(a2);
}
} // namespace gamemd
// 0x50BEB0
namespace gamemd {
int TechnoTypeClass::GetThreatMultiplier(TechnoTypeClass * aP1)
{

  double result; // st7

  switch ( (*(int (**)(unsigned int *))(*aP1 + 44))( (unsigned int *)(aP1)) ) /*0x50becf*/
  {
    case 3: /*0x50becf*/
      result = *((unsigned int *)this + 5350); /*0x50beec*/
      break; /*0x50bef4*/
    case 7: /*0x50becf*/
      if ( aP1[898] == 5 ) /*0x50befe*/
        result = *((unsigned int *)this + 5352); /*0x50bf00*/
      else
        result = *((unsigned int *)this + 5351); /*0x50bf0b*/
      break; /*0x50bf08*/
    case 16: /*0x50becf*/
      result = *((unsigned int *)this + 5348); /*0x50bed6*/
      break; /*0x50bede*/
    case 40: /*0x50becf*/
      result = *((unsigned int *)this + 5349); /*0x50bee1*/
      break; /*0x50bee9*/
    default:
      result = 1.0; /*0x50bf16*/
      break; /*0x50bf16*/
  }
  return result; /*0x50bedc*/

}
} // namespace gamemd
// 0x6F06E0
namespace gamemd {
unsigned int * TechnoTypeClass::LoadBase(char *aP1)
{

  int v3; // ecx
  char v4; // al
  int v5; // eax
  TeamTypeClass **v6; // edx
  int v7; // eax

  ((AbstractTypeClass *)((int *)this))->Constructor( (char *)(aP1)); /*0x6f06ea*/
  *((unsigned int *)this + 38) = -1; /*0x6f06f7*/
  *((unsigned int *)this + 39) = -1; /*0x6f06ff*/
  *((unsigned int *)this + 40) = 1; /*0x6f0705*/
  *((unsigned int *)this + 41) = 0; /*0x6f070b*/
  *((unsigned int *)this + 42) = 0; /*0x6f0723*/
  *((unsigned int *)this + 43) = 0; /*0x6f073b*/
  *((unsigned int *)this + 44) = 0; /*0x6f0753*/
  *((unsigned int *)this + 45) = 7; /*0x6f076b*/
  *((unsigned int *)this + 46) = -1; /*0x6f0775*/
  *((unsigned int *)this + 47) = 0; /*0x6f077b*/
  *((unsigned int *)this + 48) = 0; /*0x6f0781*/
  *((unsigned int *)this + 49) = 0; /*0x6f0787*/
  *((unsigned int *)this + 50) = -1; /*0x6f078d*/
  *((unsigned int *)this + 51) = 0; /*0x6f0793*/
  *((unsigned int *)this + 52) = 0; /*0x6f0799*/
  *((unsigned int *)this + 53) = -1; /*0x6f079f*/
  *((unsigned int *)this + 54) = -1; /*0x6f07a5*/
  *((unsigned int *)this + 55) = 0; /*0x6f07ab*/
  *((unsigned int *)this + 56) = 0; /*0x6f07b1*/
  *((unsigned int *)this + 57) = 0; /*0x6f07b7*/
  *((unsigned int *)this + 58) = 0; /*0x6f07bd*/
  *((unsigned int *)this + 59) = 9; /*0x6f07c3*/
  *((unsigned char *)this + 240) = 1; /*0x6f07cd*/
  *((unsigned char *)this + 241) = 0; /*0x6f07d3*/
  *((unsigned char *)this + 242) = 0; /*0x6f07d9*/
  *((unsigned char *)this + 243) = 0; /*0x6f07df*/
  *((unsigned char *)this + 244) = 0; /*0x6f07e5*/
  *((unsigned char *)this + 245) = 1; /*0x6f07eb*/
  *((unsigned char *)this + 246) = 0; /*0x6f07f1*/
  *((unsigned char *)this + 247) = 0; /*0x6f07f7*/
  this->vtable1 = &vt_TeamTypeClass; /*0x6f07fd*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_TeamTypeClass); /*0x6f0803*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_TeamTypeClass); /*0x6f080a*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_TeamTypeClass); /*0x6f0811*/
  v3 = *(unsigned int *)((char *)&stru_A8EB00 + 204); /*0x6f0818*/
  if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 204) < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 196) /*0x6f0857*/
    || (*((unsigned int *)((char *)&stru_A8EB00 + 201)) || !*(unsigned int *)((char *)&stru_A8EB00 + 196))
    && *(int *)(unsigned int *)((char *)&stru_A8EB00 + 208) > 0
&& (v4 = (*(int (**)(unsigned char *, int, unsigned int))(*(unsigned int *)((char *)&stru_A8EB00 + 188) + 8))( (unsigned char *)((unsigned int *)((char *)&stru_A8EB00 + 188)), *(unsigned int *)((char *)&stru_A8EB00 + 196) + *(unsigned int *)((char *)&stru_A8EB00 + 208), 0), v3 = *(unsigned int *)((char *)&stru_A8EB00 + 204), v4) )





  {
    *(unsigned int *)((char *)&stru_A8EB00 + 204) = v3 + 1; /*0x6f085c*/
    *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 192) + 4 * v3) = (unsigned int)(this); /*0x6f0868*/
    v3 = *(unsigned int *)((char *)&stru_A8EB00 + 204); /*0x6f086b*/
  }
  v5 = 0; /*0x6f0871*/
  if ( v3 <= 0 ) /*0x6f0875*/
  {
LABEL_11:
    v5 = -1; /*0x6f0889*/
  }
  else
  {
    v6 = *(TeamTypeClass ***)(unsigned int *)((char *)&stru_A8EB00 + 192); /*0x6f0877*/
    while ( *v6 != this ) /*0x6f087f*/
    {
      ++v5; /*0x6f0881*/
      ++v6; /*0x6f0882*/
      if ( v5 >= v3 ) /*0x6f0887*/
        goto LABEL_11; /*0x6f0887*/
    }
  }
  *((unsigned int *)this + 38) = v5; /*0x6f088b*/
  if ( dword_B0F680< dword_B0F678/*0x6f08c5*/
    || (BYTE1(byte_B0F67C) || !dword_B0F678)
    && &dword_B0F684 > 0
&& (*(uint8_t (**)(int *, int, unsigned int))(dword_B0F670+ 8))( (int *)(&dword_B0F670), dword_B0F678+ &dword_B0F684, 0) )



  {
    v7 = dword_B0F680++; /*0x6f08d2*/
    *(unsigned int *)(dword_B0F674+ 4 * v7) = (unsigned int)this;
  }
  return (unsigned int *)(this); /*0x6f08e6*/

}
} // namespace gamemd
// 0x710AF0
namespace gamemd {
void * TechnoTypeClass::ReadINI(char * Source, int a3)  // G57w11: def 同步 hpp（raw 0x00710AF0 this+2 参）
{

  unsigned int *v4; // eax
  int v5; // ecx
  unsigned int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  unsigned int *v9; // edi
  unsigned int *v10; // eax
  int v11; // ecx
  unsigned int *v12; // edi
  unsigned int *v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax

  ((ObjectTypeClass *)((int)this))->ConstructFull( (char *)(Source)); /*0x710afb*/
  *((unsigned int *)this + 165) = 1; /*0x710b02*/
  *((unsigned int *)this + 166) = 0; /*0x710b0e*/
  *((unsigned int *)this + 167) = 0; /*0x710b14*/
  *((unsigned int *)this + 168) = 0; /*0x710b1c*/
  *((unsigned int *)this + 169) = 0; /*0x710b28*/
  *((unsigned int *)this + 170) = 0; /*0x710b2f*/
  *((unsigned short *)this + 342) = 0; /*0x710b36*/
  *(unsigned int *)&this->EliteAbilities = 0; /*0x710b3d*/
  *(unsigned int *)&this->u32_2B2 = 0; /*0x710b43*/
  *(unsigned int *)&this->u32_2B6 = 0; /*0x710b4b*/
  *(unsigned int *)&this->u32_2BA = 0; /*0x710b51*/
  *((unsigned short *)this + 351) = 0; /*0x710b57*/
  *((unsigned int *)this + 176) = 0; /*0x710b5e*/
  *((unsigned int *)this + 177) = 0; /*0x710b64*/
  *((unsigned int *)this + 178) = 0; /*0x710b6a*/
  *((unsigned int *)this + 179) = 0; /*0x710b70*/
  *((unsigned int *)this + 180) = 0; /*0x710b76*/
  *((unsigned int *)this + 181) = 0; /*0x710b7c*/
  *((unsigned int *)this + 182) = 0; /*0x710b82*/
  *((unsigned int *)this + 183) = 0; /*0x710b88*/
  *((unsigned int *)this + 184) = 0; /*0x710b8e*/
  *((unsigned int *)this + 185) = 0; /*0x710b94*/
  *((unsigned int *)this + 186) = 0; /*0x710b9a*/
  *((unsigned int *)this + 187) = 0; /*0x710ba0*/
  *((unsigned int *)this + 188) = 0; /*0x710ba6*/
  *((unsigned int *)this + 189) = 0; /*0x710bac*/
  *((unsigned int *)this + 190) = 500; /*0x710bb2*/
  *((unsigned int *)this + 192) = -755914244; /*0x710bbc*/
  *((unsigned int *)this + 193) = 1063281229; /*0x710bc6*/
  *((unsigned int *)this + 194) = -343597384; /*0x710bd0*/
  *((unsigned int *)this + 195) = 1067366481; /*0x710bda*/
  *((unsigned int *)this + 196) = 7; /*0x710be4*/
  VoxelAnimTypeVector::Constructor(0, 0); /*0x710bee*/
  *((unsigned int *)this + 201) = 0; /*0x710bf8*/
  *((unsigned int *)this + 202) = 10; /*0x710bfb*/
  *((unsigned int *)this + 197) = (unsigned int)(&vt_TypeList); /*0x710bfe*/
  ((VectorClass *)((unsigned int *)this + 204))->Construct(0, 0); /*0x710c0f*/
  *((unsigned int *)this + 209) = 10; /*0x710c14*/
  *((unsigned int *)this + 208) = 0; /*0x710c17*/
  *((unsigned int *)this + 204) = (unsigned int)(&vt_TypeList); /*0x710c1a*/
  *((unsigned int *)this + 211) = 1247291207; /*0x710c2d*/
  *((unsigned int *)this + 212) = 298948665; /*0x710c39*/
  *((unsigned int *)this + 213) = -1610610249; /*0x710c42*/
  *((unsigned int *)this + 214) = -777003740; /*0x710c4b*/
  *((unsigned int *)this + 216) = 0; /*0x710c4e*/
  *((unsigned int *)this + 217) = 0; /*0x710c54*/
  *((unsigned int *)this + 218) = 0; /*0x710c5a*/
  *((unsigned int *)this + 219) = 0; /*0x710c60*/
  *((unsigned int *)this + 220) = 0; /*0x710c6b*/
  *((unsigned int *)this + 221) = 1072693248; /*0x710c71*/
  *((unsigned int *)this + 222) = 0; /*0x710c77*/
  *((unsigned int *)this + 223) = 0x40000000; /*0x710c7d*/
  *((unsigned int *)this + 224) = 0; /*0x710c87*/
  *((unsigned int *)this + 225) = 1072693248; /*0x710c8d*/
  *((unsigned int *)this + 226) = 0; /*0x710c93*/
  *((unsigned int *)this + 227) = 0; /*0x710c99*/
  *((unsigned char *)this + 912) = 0; /*0x710c9f*/
  *((unsigned int *)this + 229) = 0; /*0x710ca5*/
  *((unsigned int *)this + 230) = 15; /*0x710cab*/
  *((unsigned int *)this + 232) = 942502757; /*0x710cb5*/
  *((unsigned int *)this + 233) = 1071694162; /*0x710cbf*/
  *((unsigned int *)this + 234) = 0; /*0x710cc9*/
  *((unsigned int *)this + 235) = 1070596096; /*0x710ccf*/
  *((unsigned int *)this + 236) = 1256670343; /*0x710cd9*/
  *((unsigned int *)this + 237) = 1071011608; /*0x710ce3*/
  *((unsigned int *)this + 238) = 0x7FFFFFFF; /*0x710cf0*/
  *((unsigned int *)this + 239) = -1; /*0x710cfa*/
  *((unsigned int *)this + 240) = 0; /*0x710d00*/
  *((unsigned int *)this + 242) = 0; /*0x710d06*/
  *((unsigned int *)this + 243) = 0; /*0x710d0c*/
  *((unsigned int *)this + 244) = 8; /*0x710d12*/
  *((unsigned int *)this + 245) = 0; /*0x710d1c*/
  *((unsigned char *)this + 984) = 0; /*0x710d22*/
  *((unsigned int *)this + 247) = 70; /*0x710d28*/
  *((unsigned int *)this + 248) = 0; /*0x710d33*/
  *((unsigned int *)this + 249) = 0; /*0x710d40*/
  ((VectorClass *)((unsigned int *)this + 250))->BuildingTypeConstructor(0, 0); /*0x710d46*/
  *((unsigned int *)this + 255) = 10; /*0x710d4b*/
  *((unsigned int *)this + 254) = 0; /*0x710d51*/
  *((unsigned int *)this + 250) = (unsigned int)(&vt_TypeList); /*0x710d57*/
  *((unsigned int *)this + 257) = 0; /*0x710d61*/
  *((unsigned int *)this + 258) = 0; /*0x710d67*/
  *((unsigned int *)this + 259) = 0; /*0x710d6e*/
  *((unsigned char *)this + 1040) = 0; /*0x710d7b*/
  ((VectorClass *)((unsigned int *)this + 261))->Construct(0, 0); /*0x710d81*/
  *((unsigned int *)this + 266) = 10; /*0x710d8e*/
  *((unsigned int *)this + 265) = 0; /*0x710d94*/
  *((unsigned int *)this + 261) = (unsigned int)(&vt_TypeList); /*0x710d9a*/
  ((VectorClass *)((unsigned int *)this + 268))->Construct(0, 0); /*0x710da4*/
  *((unsigned int *)this + 273) = 10; /*0x710db1*/
  *((unsigned int *)this + 272) = 0; /*0x710db7*/
  *((unsigned int *)this + 268) = (unsigned int)(&vt_TypeList); /*0x710dbd*/
  ((VectorClass *)((unsigned int *)this + 275))->Construct(0, 0); /*0x710dc7*/
  *((unsigned int *)this + 280) = 10; /*0x710dd4*/
  *((unsigned int *)this + 279) = 0; /*0x710dda*/
  *((unsigned int *)this + 275) = (unsigned int)(&vt_TypeList); /*0x710de0*/
  ((VectorClass *)((unsigned int *)this + 282))->Construct(0, 0); /*0x710dea*/
  *((unsigned int *)this + 287) = 10; /*0x710df7*/
  *((unsigned int *)this + 286) = 0; /*0x710dfd*/
  *((unsigned int *)this + 282) = (unsigned int)(&vt_TypeList); /*0x710e03*/
  ((VectorClass *)((unsigned int *)this + 289))->Construct(0, 0); /*0x710e0d*/
  *((unsigned int *)this + 294) = 10; /*0x710e1a*/
  *((unsigned int *)this + 293) = 0; /*0x710e20*/
  *((unsigned int *)this + 289) = (unsigned int)(&vt_TypeList); /*0x710e26*/
  ((VectorClass *)((unsigned int *)this + 296))->Construct(0, 0); /*0x710e30*/
  *((unsigned int *)this + 301) = 10; /*0x710e3d*/
  *((unsigned int *)this + 300) = 0; /*0x710e43*/
  *((unsigned int *)this + 296) = (unsigned int)(&vt_TypeList); /*0x710e49*/
  ((VectorClass *)((unsigned int *)this + 303))->Construct(0, 0); /*0x710e53*/
  *((unsigned int *)this + 308) = 10; /*0x710e58*/
  *((unsigned int *)this + 307) = 0; /*0x710e5e*/
  *((unsigned int *)this + 303) = (unsigned int)(&vt_TypeList); /*0x710e6c*/
  ((VectorClass *)((unsigned int *)this + 310))->Construct(0, 0); /*0x710e76*/
  *((unsigned int *)this + 315) = 10; /*0x710e83*/
  *((unsigned int *)this + 314) = 0; /*0x710e89*/
  *((unsigned int *)this + 310) = (unsigned int)(&vt_TypeList); /*0x710e8f*/
  ((VectorClass *)((unsigned int *)this + 317))->Construct(0, 0); /*0x710e99*/
  *((unsigned int *)this + 322) = 10; /*0x710ea6*/
  *((unsigned int *)this + 321) = 0; /*0x710eac*/
  *((unsigned int *)this + 317) = (unsigned int)(&vt_TypeList); /*0x710eb2*/
  ((VectorClass *)((unsigned int *)this + 324))->Construct(0, 0); /*0x710ebc*/
  *((unsigned int *)this + 329) = 10; /*0x710ec1*/
  *((unsigned int *)this + 328) = 0; /*0x710ec7*/
  *((unsigned int *)this + 324) = (unsigned int)(&vt_TypeList); /*0x710ecd*/
  *((unsigned int *)this + 331) = -1; /*0x710ed7*/
  *((unsigned int *)this + 332) = -1; /*0x710edd*/
  *((unsigned int *)this + 333) = -1; /*0x710ee3*/
  *((unsigned int *)this + 334) = -1; /*0x710ee9*/
  *((unsigned int *)this + 335) = -1; /*0x710eef*/
  *((unsigned int *)this + 336) = -1; /*0x710ef5*/
  *((unsigned int *)this + 337) = -1; /*0x710efb*/
  *((unsigned int *)this + 338) = -1; /*0x710f01*/
  *((unsigned int *)this + 339) = -1; /*0x710f07*/
  *((unsigned int *)this + 340) = -1; /*0x710f0d*/
  *((unsigned int *)this + 341) = -1; /*0x710f13*/
  *((unsigned int *)this + 342) = -1; /*0x710f19*/
  *((unsigned int *)this + 343) = -1; /*0x710f1f*/
  *((unsigned int *)this + 344) = -1; /*0x710f25*/
  *((unsigned int *)this + 345) = -1; /*0x710f2b*/
  *((unsigned int *)this + 346) = -1; /*0x710f31*/
  *((unsigned int *)this + 347) = -1; /*0x710f37*/
  *((unsigned int *)this + 348) = -1; /*0x710f3d*/
  *((unsigned int *)this + 349) = -1; /*0x710f43*/
  *((unsigned int *)this + 350) = -1; /*0x710f49*/
  *((unsigned int *)this + 351) = -1; /*0x710f4f*/
  *((unsigned int *)this + 352) = -1; /*0x710f55*/
  *((unsigned int *)this + 353) = -1; /*0x710f5b*/
  *((unsigned int *)this + 354) = -1; /*0x710f61*/
  *((unsigned int *)this + 355) = -1; /*0x710f68*/
  *((unsigned int *)this + 356) = -1; /*0x710f75*/
  *((unsigned int *)this + 357) = -1; /*0x710f7b*/
  *((unsigned int *)this + 358) = -1; /*0x710f81*/
  *((unsigned int *)this + 359) = -1; /*0x710f87*/
  *((unsigned int *)this + 360) = -1; /*0x710f8d*/
  *((unsigned int *)this + 361) = -1; /*0x710f93*/
  *((unsigned int *)this + 362) = -1; /*0x710f99*/
  *((unsigned int *)this + 363) = -1; /*0x710f9f*/
  *((unsigned int *)this + 364) = -1; /*0x710fa5*/
  *((unsigned int *)this + 365) = 0; /*0x710fab*/
  *((unsigned int *)this + 366) = 0; /*0x710fb1*/
  *((unsigned int *)this + 367) = 0; /*0x710fb7*/
  *((unsigned int *)this + 368) = 0; /*0x710fbd*/
  ((AnimTypeVector *)((int)((unsigned int *)this + 369)))->Constructor((int)((AnimTypeVector *)((int)((unsigned int *)this + 369))), 0, 0); /*0x710fc3*/
  *((unsigned int *)this + 374) = 10; /*0x710fc8*/
  *((unsigned int *)this + 373) = 0; /*0x710fce*/
  *((unsigned int *)this + 369) = (unsigned int)(&vt_TypeList); /*0x710fd4*/
  *((unsigned int *)this + 376) = 0; /*0x710fde*/
  *((unsigned char *)this + 1508) = 0; /*0x710fe4*/
  *((unsigned int *)this + 378) = 0; /*0x710fea*/
  *((unsigned char *)this + 1516) = 0; /*0x710ff0*/
  *((unsigned char *)this + 1517) = 0; /*0x710ff6*/
  *((unsigned char *)this + 1518) = 0; /*0x710ffc*/
  *((unsigned char *)this + 1519) = 0; /*0x711002*/
  *((unsigned int *)this + 380) = 0; /*0x711008*/
  *((unsigned int *)this + 381) = 0; /*0x71100e*/
  *((unsigned int *)this + 382) = 0; /*0x711014*/
  *((unsigned int *)this + 383) = 5; /*0x71101a*/
  *((unsigned int *)this + 384) = 0; /*0x711024*/
  *((unsigned int *)this + 385) = 0; /*0x71102a*/
  *((unsigned int *)this + 386) = 1065353216; /*0x711030*/
  *((unsigned int *)this + 387) = 140; /*0x71103a*/
  *((unsigned int *)this + 388) = 0; /*0x711044*/
  *((unsigned int *)this + 389) = 0; /*0x71104a*/
  *((unsigned int *)this + 390) = -1; /*0x711050*/
  *((unsigned int *)this + 391) = 0; /*0x711056*/
  *((unsigned int *)this + 392) = 0; /*0x71105c*/
  *((unsigned int *)this + 393) = 0; /*0x711062*/
  *((unsigned int *)this + 394) = 0; /*0x711068*/
  *((unsigned int *)this + 395) = 0; /*0x71106e*/
  *((unsigned int *)this + 396) = 0; /*0x711075*/
  *((unsigned int *)this + 397) = 255; /*0x711082*/
  ((VectorClass *)((unsigned int *)this + 398))->Construct(0, 0); /*0x71108c*/
  *((unsigned int *)this + 403) = 10; /*0x711099*/
  *((unsigned int *)this + 402) = 0; /*0x71109f*/
  *((unsigned int *)this + 398) = (unsigned int)(&vt_TypeList); /*0x7110a5*/
  ((VectorClass *)((unsigned int *)this + 405))->Construct(0, 0); /*0x7110af*/
  *((unsigned int *)this + 410) = 10; /*0x7110b8*/
  *((unsigned int *)this + 409) = 0; /*0x7110be*/
  *((unsigned int *)this + 405) = (unsigned int)(&vt_TypeList); /*0x7110c4*/
  *((unsigned int *)this + 412) = 0; /*0x7110ce*/
  *((unsigned int *)this + 413) = 0; /*0x7110d4*/
  *((unsigned int *)this + 414) = 0; /*0x7110da*/
  *((unsigned int *)this + 415) = a3; /*0x7110e0*/
  *((unsigned int *)this + 416) = -1; /*0x7110e6*/
  *((unsigned int *)this + 417) = -1; /*0x7110ec*/
  *((unsigned int *)this + 418) = 0; /*0x7110f2*/
  *((unsigned int *)this + 419) = 0; /*0x7110f8*/
  *((unsigned char *)this + 1680) = 0; /*0x7110fe*/
  *((unsigned char *)this + 1681) = 0; /*0x711104*/
  *((unsigned char *)this + 1682) = 0; /*0x71110a*/
  *((unsigned char *)this + 1683) = 0; /*0x711110*/
  *((unsigned char *)this + 1684) = 0; /*0x711116*/
  *((unsigned char *)this + 1685) = 0; /*0x71111c*/
  *((unsigned int *)this + 422) = 0; /*0x711122*/
  *((unsigned int *)this + 423) = -1; /*0x711128*/
  *((unsigned int *)this + 424) = 0; /*0x71112e*/
  *((unsigned int *)this + 425) = 0; /*0x711134*/
  *((unsigned int *)this + 426) = 1; /*0x71113a*/
  *((unsigned char *)this + 1708) = 0; /*0x711144*/
  *((unsigned char *)this + 1709) = 0; /*0x71114a*/
  *((unsigned char *)this + 1710) = 1; /*0x711150*/
  *((unsigned char *)this + 1711) = 0; /*0x711157*/
  *((unsigned char *)this + 1712) = 0; /*0x71115d*/
  *((unsigned char *)this + 1713) = 0; /*0x711163*/
  *((unsigned int *)this + 429) = 0; /*0x711169*/
  *((unsigned int *)this + 430) = 0; /*0x71116f*/
  *((unsigned int *)this + 431) = 0; /*0x711175*/
  *((unsigned char *)this + 1728) = 0; /*0x71117b*/
  *((unsigned char *)this + 1729) = 0; /*0x711181*/
  *((unsigned int *)this + 433) = -1; /*0x711187*/
  *((unsigned char *)this + 1736) = 0; /*0x71118d*/
  *((unsigned int *)this + 435) = 0; /*0x711193*/
  *((unsigned int *)this + 436) = -1; /*0x71119e*/
  *((unsigned char *)this + 1748) = 0; /*0x7111a4*/
  *((unsigned char *)this + 1749) = 1; /*0x7111ac*/
  if ( &g_INI_DefaultBuffer ) /*0x7111b9*/
  {
    strncpy( (char *)((unsigned char *)this + 1750), (const char *)(&g_INI_DefaultBuffer), 0x18u); /*0x7111c7*/
    *((unsigned char *)this + 1774) = 0; /*0x7111cf*/
  }
  else
  {
    *((unsigned char *)this + 1750) = 0; /*0x7111bb*/
  }
  *((unsigned int *)this + 444) = 0; /*0x7111da*/
  *((unsigned char *)this + 1780) = 0; /*0x7111e2*/
  if ( &g_INI_DefaultBuffer ) /*0x7111ee*/
  {
    strncpy( (char *)((unsigned char *)this + 1781), (const char *)(&g_INI_DefaultBuffer), 0x18u); /*0x7111fc*/
    *((unsigned char *)this + 1805) = 0; /*0x711204*/
  }
  else
  {
    *((unsigned char *)this + 1781) = 0; /*0x7111f0*/
  }
  *((unsigned int *)this + 452) = 0; /*0x71120a*/
  *((unsigned char *)this + 1812) = 0; /*0x711210*/
  *((unsigned int *)this + 454) = 0; /*0x711216*/
  *((unsigned int *)this + 455) = 0; /*0x71121c*/
  *((unsigned int *)this + 456) = 0; /*0x711222*/
  *((unsigned char *)this + 1828) = 1; /*0x711229*/
  *((unsigned int *)this + 458) = 0; /*0x711237*/
  ((AnimTypeVector *)((int)((unsigned int *)this + 459)))->Constructor((int)((AnimTypeVector *)((int)((unsigned int *)this + 459))), 0, 0); /*0x71123d*/
  *((unsigned int *)this + 464) = 10; /*0x71124a*/
  *((unsigned int *)this + 463) = 0; /*0x711250*/
  *((unsigned int *)this + 459) = (unsigned int)(&vt_TypeList); /*0x711256*/
  ((AnimTypeVector *)((int)((unsigned int *)this + 466)))->Constructor((int)((AnimTypeVector *)((int)((unsigned int *)this + 466))), 0, 0); /*0x711260*/
  *((unsigned int *)this + 471) = 10; /*0x711265*/
  *((unsigned int *)this + 470) = 0; /*0x71126b*/
  *((unsigned int *)this + 466) = (unsigned int)(&vt_TypeList); /*0x711271*/
  *((unsigned int *)this + 473) = 0; /*0x71127b*/
  *((unsigned int *)this + 474) = 0; /*0x711282*/
  *((unsigned int *)this + 475) = 0; /*0x711288*/
  *((unsigned int *)this + 476) = 0; /*0x71128e*/
  *((unsigned int *)this + 477) = 0; /*0x71129b*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112a1*/
  *((unsigned int *)this + 483) = 10; /*0x7112ae*/
  *((unsigned int *)this + 482) = 0; /*0x7112b4*/
  *((unsigned int *)this + 478) = (unsigned int)(&vt_TypeList); /*0x7112ba*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112c4*/
  *((unsigned int *)this + 490) = 10; /*0x7112c9*/
  *((unsigned int *)this + 489) = 0; /*0x7112cf*/
  *((unsigned int *)this + 485) = (unsigned int)(&vt_TypeList); /*0x7112d5*/
  *((unsigned int *)this + 492) = 0; /*0x7112df*/
  *((unsigned int *)this + 493) = 0; /*0x7112e5*/
  *((unsigned int *)this + 494) = 0; /*0x7112eb*/
  *((unsigned char *)this + 1980) = 0; /*0x7112f1*/
  *((unsigned int *)this + 496) = 0; /*0x7112f7*/
  *((unsigned int *)this + 497) = 0; /*0x7112fd*/
  *((unsigned int *)this + 498) = 0; /*0x711303*/
  *((unsigned int *)this + 499) = 0; /*0x711309*/
  *((unsigned int *)this + 500) = 0; /*0x71130f*/
  *((unsigned int *)this + 501) = 0; /*0x711315*/
  *((unsigned int *)this + 502) = 0; /*0x71131b*/
  *((unsigned int *)this + 503) = 0; /*0x711321*/
  *((unsigned int *)this + 504) = 0; /*0x711327*/
  *((unsigned int *)this + 505) = 0; /*0x71132d*/
  *((unsigned int *)this + 506) = 0; /*0x711333*/
  *((unsigned int *)this + 507) = 0; /*0x711339*/
  *((unsigned int *)this + 508) = 0; /*0x71133f*/
  *((unsigned int *)this + 509) = 0; /*0x711345*/
  *((unsigned int *)this + 510) = 0; /*0x71134b*/
  *((unsigned int *)this + 511) = 0; /*0x711351*/
  *((unsigned int *)this + 512) = 0; /*0x711357*/
  *((unsigned char *)this + 2052) = 0; /*0x71135d*/
  *((unsigned char *)this + 2053) = 0; /*0x711363*/
  *((unsigned char *)this + 2054) = 0; /*0x711369*/
  *((unsigned int *)this + 514) = 0; /*0x71136f*/
  *((unsigned char *)this + 2064) = 0; /*0x711375*/
  *((unsigned char *)this + 2704) = 0; /*0x71137b*/
  *((unsigned char *)this + 3212) = 0; /*0x711381*/
  *((unsigned char *)this + 3213) = 1; /*0x711387*/
  *((unsigned char *)this + 3214) = 1; /*0x71138e*/
  *((unsigned char *)this + 3215) = 0; /*0x711395*/
  *((unsigned char *)this + 3216) = 0; /*0x71139b*/
  *((unsigned char *)this + 3217) = 0; /*0x7113a1*/
  *((unsigned char *)this + 3218) = 0; /*0x7113a7*/
  *((unsigned char *)this + 3219) = 0; /*0x7113ad*/
  *((unsigned char *)this + 3220) = 0; /*0x7113b3*/
  *((unsigned char *)this + 3221) = 0; /*0x7113b9*/
  *((unsigned char *)this + 3222) = 0; /*0x7113bf*/
  *((unsigned char *)this + 3223) = 1; /*0x7113c5*/
  *((unsigned char *)this + 3224) = 0; /*0x7113cc*/
  *((unsigned char *)this + 3225) = 0; /*0x7113d2*/
  *((unsigned char *)this + 3226) = 0; /*0x7113d8*/
  *((unsigned char *)this + 3227) = 0; /*0x7113de*/
  *((unsigned char *)this + 3228) = 0; /*0x7113e4*/
  *((unsigned char *)this + 3229) = 0; /*0x7113ea*/
  *((unsigned char *)this + 3230) = 0; /*0x7113f0*/
  *((unsigned char *)this + 3231) = 0; /*0x7113f6*/
  *((unsigned char *)this + 3232) = 0; /*0x7113fc*/
  *((unsigned char *)this + 3233) = 0; /*0x711402*/
  *((unsigned char *)this + 3234) = 0; /*0x711412*/
  *((unsigned int *)this + 809) = 2; /*0x711418*/
  *((unsigned int *)this + 810) = 1; /*0x71141e*/
  *((unsigned int *)this + 811) = 1; /*0x711424*/
  *((unsigned int *)this + 812) = 1; /*0x71142a*/
  *((unsigned char *)this + 3252) = 0; /*0x711430*/
  *((unsigned int *)this + 814) = 2; /*0x711436*/
  *((unsigned int *)this + 815) = 1; /*0x71143c*/
  *((unsigned int *)this + 816) = 1; /*0x711442*/
  *((unsigned int *)this + 817) = 1; /*0x711448*/
  *((unsigned char *)this + 3272) = 0; /*0x71144e*/
  *((unsigned char *)this + 3276) = 1; /*0x711454*/
  *((unsigned char *)this + 3277) = 0; /*0x71145a*/
  *((unsigned char *)this + 3278) = 0; /*0x711460*/
  *((unsigned char *)this + 3279) = 0; /*0x711466*/
  *((unsigned char *)this + 3280) = 0; /*0x71146c*/
  *((unsigned char *)this + 3281) = 0; /*0x711472*/
  *((unsigned char *)this + 3282) = 0; /*0x711478*/
  *((unsigned char *)this + 3283) = 0; /*0x71147e*/
  *((unsigned char *)this + 3284) = 0; /*0x711484*/
  *((unsigned char *)this + 3285) = 0; /*0x71148a*/
  *((unsigned int *)this + 822) = 0; /*0x711490*/
  *((unsigned int *)this + 835) = 0; /*0x711496*/
  *((unsigned int *)this + 836) = 0; /*0x71149c*/
  *((unsigned char *)this + 3348) = 0; /*0x7114a2*/
  *((unsigned char *)this + 3349) = 0; /*0x7114a8*/
  *((unsigned int *)this + 838) = 0; /*0x7114ae*/
  *((unsigned int *)this + 839) = 1065353216; /*0x7114b4*/
  *((unsigned char *)this + 3360) = 0; /*0x7114be*/
  *((unsigned char *)this + 3361) = 0; /*0x7114c4*/
  *((unsigned char *)this + 3362) = 0; /*0x7114ca*/
  *((unsigned char *)this + 3363) = 0; /*0x7114d0*/
  *((unsigned char *)this + 3364) = 0; /*0x7114d6*/
  *((unsigned char *)this + 3365) = 0; /*0x7114dc*/
  *((unsigned char *)this + 3366) = 0; /*0x7114e2*/
  *((unsigned char *)this + 3367) = 0; /*0x7114e8*/
  *((unsigned char *)this + 3368) = 0; /*0x7114ee*/
  *((unsigned char *)this + 3369) = 0; /*0x7114f4*/
  *((unsigned char *)this + 3370) = 0; /*0x7114fa*/
  *((unsigned char *)this + 3371) = 1; /*0x711500*/
  *((unsigned char *)this + 3372) = 0; /*0x711506*/
  *((unsigned char *)this + 3373) = 0; /*0x71150c*/
  *((unsigned char *)this + 3375) = 0; /*0x711512*/
  *((unsigned char *)this + 3376) = 0; /*0x711518*/
  *((unsigned char *)this + 3377) = 0; /*0x71151e*/
  *((unsigned char *)this + 3378) = 0; /*0x711524*/
  *((unsigned char *)this + 3379) = 1; /*0x71152a*/
  *((unsigned char *)this + 3380) = 1; /*0x711530*/
  *((unsigned char *)this + 3383) = 0; /*0x711536*/
  *((unsigned char *)this + 3385) = 0; /*0x71153c*/
  *((unsigned char *)this + 3386) = 1; /*0x711542*/
  *((unsigned char *)this + 3388) = 0; /*0x711548*/
  *((unsigned char *)this + 3389) = 0; /*0x71154e*/
  *((unsigned char *)this + 3390) = 0; /*0x711554*/
  *((unsigned int *)this + 848) = 0; /*0x71155a*/
  *((unsigned int *)this + 849) = 0; /*0x711560*/
  *((unsigned int *)this + 850) = 0; /*0x711566*/
  *((unsigned int *)this + 851) = 0; /*0x71156c*/
  *((unsigned int *)this + 852) = -1; /*0x711572*/
  *((unsigned char *)this + 3412) = 0; /*0x711578*/
  *((unsigned int *)this + 854) = 0; /*0x71157e*/
  *((unsigned int *)this + 855) = 0; /*0x711584*/
  *((unsigned int *)this + 856) = 0; /*0x71158a*/
  *((unsigned int *)this + 857) = 0; /*0x711590*/
  *((unsigned char *)this + 3432) = 0; /*0x711596*/
  *((unsigned char *)this + 3433) = 0; /*0x71159c*/
  *((unsigned char *)this + 3434) = 0; /*0x7115a2*/
  *((unsigned int *)this + 859) = 0; /*0x7115a8*/
  *((unsigned int *)this + 860) = 4; /*0x7115ae*/
  *((unsigned int *)this + 861) = 14; /*0x7115b8*/
  *((unsigned int *)this + 862) = 1084227584; /*0x7115c7*/
  *((unsigned int *)this + 863) = 1084227584; /*0x7115cd*/
  *((unsigned int *)this + 864) = 500; /*0x7115d3*/
  *((unsigned int *)this + 865) = 0x40000000; /*0x7115dd*/
  *((unsigned int *)this + 866) = 1041865114; /*0x7115e7*/
  *((unsigned char *)this + 3468) = 0; /*0x7115f1*/
  *((unsigned int *)this + 868) = 40; /*0x7115f7*/
  *((unsigned char *)this + 3476) = 0; /*0x711601*/
  *((unsigned char *)this + 3477) = 0; /*0x711607*/
  *((unsigned char *)this + 3480) = 0; /*0x71160d*/
  *((unsigned char *)this + 3481) = 1; /*0x711613*/
  *((unsigned char *)this + 3482) = 1; /*0x71161a*/
  *((unsigned char *)this + 3483) = 0; /*0x711621*/
  *((unsigned char *)this + 3484) = 0; /*0x711627*/
  *((unsigned char *)this + 3485) = 0; /*0x71162d*/
  *((unsigned int *)this + 872) = -1; /*0x711633*/
  *((unsigned int *)this + 873) = -1; /*0x711639*/
  *((unsigned int *)this + 874) = -1; /*0x71163f*/
  *((unsigned char *)this + 3500) = 0; /*0x711645*/
  *((unsigned char *)this + 3516) = 0; /*0x71164b*/
  *((unsigned char *)this + 3517) = 1; /*0x711651*/
  *((unsigned char *)this + 3518) = 0; /*0x711658*/
  *((unsigned char *)this + 3519) = 0; /*0x71165e*/
  *((unsigned int *)this + 880) = 10; /*0x711664*/
  *((unsigned int *)this + 881) = 5; /*0x71166a*/
  *((unsigned int *)this + 882) = 10; /*0x711674*/
  *((unsigned int *)this + 883) = 0; /*0x71167a*/
  *((unsigned int *)this + 892) = 0; /*0x711680*/
  *(unsigned int *)this = (unsigned int)(&vt_TechnoTypeClass); /*0x711686*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_TechnoTypeClass); /*0x71168c*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_TechnoTypeClass); /*0x711693*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_TechnoTypeClass); /*0x71169a*/
  *((unsigned char *)this + 3536) = 0; /*0x7116a7*/
  *((unsigned char *)this + 564) = 1; /*0x7116ad*/
  (*(void (**)(char *))(*((unsigned int *)this + 197) + 12))( (char *)((unsigned char *)this + 788)); /*0x7116b6*/
  (*(void (**)(char *))(*((unsigned int *)this + 369) + 12))( (char *)((unsigned char *)this + 1476)); /*0x7116c5*/
  (*(void (**)(char *))(*((unsigned int *)this + 204) + 12))( (char *)((unsigned char *)this + 816)); /*0x7116d4*/
  (*(void (**)(char *))(*((unsigned int *)this + 250) + 12))( (char *)((unsigned char *)this + 1000)); /*0x7116e3*/
  v4 = (unsigned int *)((unsigned char *)this + 2216); /*0x7116e6*/
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
    *((unsigned char *)v4 - 20) = 0; /*0x71170c*/
  }
  while ( v5 ); /*0x71170f*/
  v7 = (unsigned int *)((unsigned char *)this + 2724); /*0x711711*/
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
    *((unsigned char *)v7 - 20) = 0; /*0x711737*/
  }
  while ( v8 ); /*0x71173a*/
  v10 = (unsigned int *)((unsigned char *)this + 2140); /*0x71173c*/
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
  *((unsigned int *)this + 876) = 0; /*0x711763*/
  v13 = (unsigned int *)((unsigned char *)this + 3316); /*0x711765*/
  *((unsigned int *)this + 877) = 0; /*0x71176b*/
  v14 = 6; /*0x71176e*/
  *((unsigned int *)this + 878) = 0; /*0x711773*/
  do /*0x71177f*/
  {
    *(v13 - 6) = 0; /*0x711776*/
    *v13++ = 0; /*0x711779*/
    --v14; /*0x71177e*/
  }
  while ( v14 ); /*0x71177f*/
  memset((unsigned char *)this + 2068, 0xFFu, 0x48u); /*0x71178e*/
  if ( dword_B0F680 < dword_B0F678 /*0x7117c3*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0F670 + 8))(
         (int *)&dword_B0F670,
         dword_B0F684 + dword_B0F678,
         0) )
  {
    v15 = dword_B0F680++; /*0x7117d0*/
    *((unsigned int *)dword_B0F674 + v15) = (unsigned int)(this); /*0x7117df*/
  }
  if ( dword_A8EB10 < dword_A8EB08 /*0x711816*/
    || (byte_A8EB0D || !dword_A8EB08)
    && dword_A8EB14 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(stru_A8EB00 + 8))(
         (int *)&stru_A8EB00,
         dword_A8EB14 + dword_A8EB08,
         0) )
  {
    v16 = dword_A8EB10++; /*0x711823*/
    *((unsigned int *)dword_A8EB04 + v16) = (unsigned int)(this); /*0x711832*/
  }
  return (void *)this; /*0x711837*/

}
} // namespace gamemd
// 0x711840
namespace gamemd {
void TechnoTypeClass::Construct(int aP1)
{

  int v3; // eax
  int v4; // ecx
  unsigned int *v5; // edx

  ((ObjectTypeClass*)(unsigned int *)this)->Construct(aP1); /*0x71184b*/
  TechnoTypeClass::Constructor_0(aP1); /*0x711859*/
  *((unsigned int *)this + 197) = (unsigned int)(&vt_TypeList); /*0x71185e*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 816), aP1); /*0x71186d*/
  *((unsigned int *)this + 204) = (unsigned int)(&vt_TypeList); /*0x711872*/
  *((unsigned int *)this + 240) = 0; /*0x711883*/
  TechnoTypeClass::Constructor_1( (ObjectTypeClass *)(aP1)); /*0x711889*/
  *((unsigned int *)this + 250) = (unsigned int)(&vt_TypeList); /*0x71188e*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1044), aP1); /*0x71189e*/
  *((unsigned int *)this + 261) = (unsigned int)(&vt_TypeList); /*0x7118a3*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1072), aP1); /*0x7118b3*/
  *((unsigned int *)this + 268) = (unsigned int)(&vt_TypeList); /*0x7118b8*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1100), aP1); /*0x7118c8*/
  *((unsigned int *)this + 275) = (unsigned int)(&vt_TypeList); /*0x7118cd*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1128), aP1); /*0x7118dd*/
  *((unsigned int *)this + 282) = (unsigned int)(&vt_TypeList); /*0x7118e2*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1156), aP1); /*0x7118f2*/
  *((unsigned int *)this + 289) = (unsigned int)(&vt_TypeList); /*0x7118f7*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1184), aP1); /*0x711907*/
  *((unsigned int *)this + 296) = (unsigned int)(&vt_TypeList); /*0x71190c*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1212), aP1); /*0x71191c*/
  *((unsigned int *)this + 303) = (unsigned int)(&vt_TypeList); /*0x711921*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1240), aP1); /*0x711931*/
  *((unsigned int *)this + 310) = (unsigned int)(&vt_TypeList); /*0x711936*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1268), aP1); /*0x711946*/
  *((unsigned int *)this + 317) = (unsigned int)(&vt_TypeList); /*0x71194b*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1296), aP1); /*0x71195b*/
  *((unsigned int *)this + 324) = (unsigned int)(&vt_TypeList); /*0x711960*/
  ((ObjectTypeClass *)((char *)this + 1476))->CheckFlag(aP1); /*0x711970 G57e1: raw lea ebp,[esi+5C4h]; push edi; call*/
  *((unsigned int *)this + 369) = (unsigned int)(&vt_TypeList); /*0x711975*/
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1592), aP1); /*0x711985*/
  *((unsigned int *)this + 398) = (unsigned int)&vt_TypeList;
  IntDynamicVector::Construct((unsigned int *)((char *)this + 1620), aP1); /*0x71199a*/
  *((unsigned int *)this + 405) = (unsigned int)&vt_TypeList;
  *((unsigned char *)this + 1750) = 0; /*0x7119ac*/
  *((unsigned char *)this + 1781) = 0; /*0x7119b5*/
  ((ObjectTypeClass *)((char *)this + 1836))->CheckFlag(aP1); /*0x7119bb G57e1 truth receiver*/
  *((unsigned int *)this + 459) = (unsigned int)&vt_TypeList;
  ((ObjectTypeClass *)((char *)this + 1864))->CheckFlag(aP1); /*0x7119d0 G57e1 truth receiver*/
  *((unsigned int *)this + 466) = (unsigned int)&vt_TypeList;
  TypeList::ParticleConstructor((TypeList *)((unsigned int *)this + 466), 0, 0); /*0x7119e6 G57w10 receiver=this+1864 (vt store 0x7119df)*/
  *((unsigned int *)this + 478) = (unsigned int)&vt_TypeList;
  TypeList::ParticleConstructor((TypeList *)((unsigned int *)this + 478), 0, 0); /*0x7119fb G57w10 receiver=this+1912 (vt store 0x7119eb)*/
  *((unsigned int *)this + 485) = (unsigned int)&vt_TypeList;
  *((unsigned int *)this + 809) = 2; /*0x711a10*/
  *((unsigned int *)this + 810) = 1; /*0x711a16*/
  *((unsigned int *)this + 811) = 1; /*0x711a1c*/
  *((unsigned int *)this + 812) = 1; /*0x711a22*/
  *((unsigned char *)this + 3252) = 0; /*0x711a28*/
  *((unsigned int *)this + 814) = 2; /*0x711a2e*/
  *((unsigned int *)this + 815) = 1; /*0x711a34*/
  *((unsigned int *)this + 816) = 1; /*0x711a3a*/
  *((unsigned int *)this + 817) = 1; /*0x711a40*/
  *((unsigned char *)this + 3272) = 0; /*0x711a46*/
  *(unsigned int *)this = (unsigned int)&vt_TechnoTypeClass;
  *((unsigned int *)this + 1) = (unsigned int)&vt_TechnoTypeClass;
  *((unsigned int *)this + 2) = (unsigned int)&vt_TechnoTypeClass;
  *((unsigned int *)this + 3) = (unsigned int)&vt_TechnoTypeClass;
  v3 = dword_A8EB10; /*0x711a67*/
  v4 = 0; /*0x711a6c*/
  if ( dword_A8EB10 <= 0 ) /*0x711a70*/
  {
LABEL_5:
    if ( dword_A8EB10 >= dword_A8EB08 ) /*0x711a8c*/
    {
      if ( !byte_A8EB0D && dword_A8EB08 /*0x711ab1*/
        || dword_A8EB14 <= 0
|| !(*(uint8_t (**)(int *, int, unsigned int))(stru_A8EB00 + 8))( (int *)(&stru_A8EB00), dword_A8EB14 + dword_A8EB08, 0) )



      {
        return this; /*0x711ab6*/
      }
      v3 = dword_A8EB10; /*0x711ab8*/
    }
    dword_A8EB10 = v3 + 1; /*0x711ac6*/
    *((unsigned int *)dword_A8EB04 + v3) = (unsigned int)this;
    return this; /*0x711acb*/
  }
  v5 = (unsigned int *)(dword_A8EB04); /*0x711a72*/
  while ( *v5   !=   (unsigned int)((unsigned int)(this ))) /*0x711a7a*/
  {
    ++v4; /*0x711a7c*/
    ++v5; /*0x711a7d*/
    if ( v4 >= dword_A8EB10 ) /*0x711a82*/
      goto LABEL_5; /*0x711a82*/
  }
  return this; /*0x711ad0*/

}
} // namespace gamemd
// 0x711AE0
namespace gamemd {
int TechnoTypeClass::DTOR(void *a1)
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

  v2 = *((unsigned char *)this + 1780); /*0x711ae7*/
  *(unsigned int *)this = (unsigned int)&vt_TechnoTypeClass;
  *((unsigned int *)this + 1) = (unsigned int)&vt_TechnoTypeClass;
  *((unsigned int *)this + 2) = (unsigned int)&vt_TechnoTypeClass;
  *((unsigned int *)this + 3) = (unsigned int)&vt_TechnoTypeClass;
  if ( v2 && *((unsigned int *)this + 444) ) /*0x711b0c*/
  {
    __3_YAXPAX_Z(*(void **)&this->Cameo); /*0x711b17*/
    *((unsigned int *)this + 444) = 0; /*0x711b1f*/
    *((unsigned char *)this + 1780) = 0; /*0x711b25*/
  }
  if ( *((unsigned char *)this + 1812) && *((unsigned int *)this + 452) ) /*0x711b33*/
  {
    __3_YAXPAX_Z(*(void **)&this->AltCameo); /*0x711b3e*/
    *((unsigned int *)this + 452) = 0; /*0x711b46*/
    *((unsigned char *)this + 1812) = 0; /*0x711b4c*/
  }
  v17 = (unsigned int)this;
  v3 = (*(int (**)(int *, int *))(dword_B0F670 + 16))( (int *)(&dword_B0F670), (int *)(&v17)); /*0x711b66*/
  if ( v3 != -1 ) /*0x711b6c*/
    ((DynamicVector *)(&dword_B0F670))->RemoveItem(v3); /*0x711b74*/
  v17 = (unsigned int)this;
  v4 = (*(int (**)(int *, int *))(stru_A8EB00 + 16))( (int *)(&stru_A8EB00), (int *)(&v17)); /*0x711b8d*/
  if ( v4 != -1 ) /*0x711b93*/
    TechnoTypeClass::RemoveItem( (int)(&stru_A8EB00), (void *)(v4)); /*0x711b9b*/
  *((unsigned int *)this + 485) = (unsigned int)&vt_VectorClass;
  VectorClass::Cleanup((char *)this + 1940); /*0x711bad*/
  *((unsigned int *)this + 478) = (unsigned int)&vt_VectorClass;
  VectorClass::Cleanup((char *)this + 1912); /*0x711bbe*/
  *((unsigned int *)this + 466) = (unsigned int)&vt_VectorClass;
  DynamicVectorClass::Destroy_Alt(  (char *)this + 1864); /*0x711bcf*/
  *((unsigned int *)this + 459) = (unsigned int)&vt_VectorClass;
  DynamicVectorClass::Destroy_Alt(  (char *)this + 1836); /*0x711be0*/
  *((unsigned int *)this + 405) = (unsigned int)&vt_VectorClass;
  ((VectorClass *)((char *)this + 1620))->Destroy(); /*0x711bf2*/
  *((unsigned int *)this + 398) = (unsigned int)&vt_VectorClass;
  ((VectorClass *)((char *)this + 1592))->Destroy(); /*0x711bff*/
  *((unsigned int *)this + 369) = (unsigned int)&vt_VectorClass;
  DynamicVectorClass::Destroy_Alt(  (char *)this + 1476); /*0x711c10*/
  *((unsigned int *)this + 324) = (unsigned int)&vt_VectorClass;
  ((VectorClass *)((char *)this + 1296))->Destroy(); /*0x711c1d*/
  *((unsigned int *)this + 317) = (unsigned int)&vt_VectorClass;
  ((VectorClass *)((char *)this + 1268))->Destroy(); /*0x711c2a*/
  v5 = *(void **)&this->VoiceFeedback_Items; /*0x711c2f*/
  *((unsigned int *)this + 310) = (unsigned int)&vt_VectorClass;
  if ( v5 && *((unsigned char *)this + 1253) ) /*0x711c3f*/
  {
    __3_YAXPAX_Z(v5); /*0x711c48*/
    *((unsigned int *)this + 311) = 0; /*0x711c50*/
  }
  *((unsigned char *)this + 1253) = 0; /*0x711c56*/
  *((unsigned int *)this + 312) = 0; /*0x711c5c*/
  v6 = *(void **)&this->IntList_H_Items; /*0x711c62*/
  *((unsigned int *)this + 303) = (unsigned int)&vt_VectorClass;
  if ( v6 && *((unsigned char *)this + 1225) ) /*0x711c72*/
  {
    __3_YAXPAX_Z(v6); /*0x711c7b*/
    *((unsigned int *)this + 304) = 0; /*0x711c83*/
  }
  *((unsigned char *)this + 1225) = 0; /*0x711c89*/
  *((unsigned int *)this + 305) = 0; /*0x711c8f*/
  v7 = *(void **)&this->IntList_G_Items; /*0x711c95*/
  *((unsigned int *)this + 296) = (unsigned int)&vt_VectorClass;
  if ( v7 && *((unsigned char *)this + 1197) ) /*0x711ca5*/
  {
    __3_YAXPAX_Z(v7); /*0x711cae*/
    *((unsigned int *)this + 297) = 0; /*0x711cb6*/
  }
  *((unsigned char *)this + 1197) = 0; /*0x711cbc*/
  *((unsigned int *)this + 298) = 0; /*0x711cc2*/
  v8 = *(void **)&this->IntList_F_Items; /*0x711cc8*/
  *((unsigned int *)this + 289) = (unsigned int)&vt_VectorClass;
  if ( v8 && *((unsigned char *)this + 1169) ) /*0x711cd8*/
  {
    __3_YAXPAX_Z(v8); /*0x711ce1*/
    *((unsigned int *)this + 290) = 0; /*0x711ce9*/
  }
  *((unsigned char *)this + 1169) = 0; /*0x711cef*/
  *((unsigned int *)this + 291) = 0; /*0x711cf5*/
  v9 = *(void **)&this->IntList_E_Items; /*0x711cfb*/
  *((unsigned int *)this + 282) = (unsigned int)&vt_VectorClass;
  if ( v9 && *((unsigned char *)this + 1141) ) /*0x711d0b*/
  {
    __3_YAXPAX_Z(v9); /*0x711d14*/
    *((unsigned int *)this + 283) = 0; /*0x711d1c*/
  }
  *((unsigned char *)this + 1141) = 0; /*0x711d22*/
  *((unsigned int *)this + 284) = 0; /*0x711d28*/
  v10 = *(void **)&this->IntList_D_Items; /*0x711d2e*/
  *((unsigned int *)this + 275) = (unsigned int)&vt_VectorClass;
  if ( v10 && *((unsigned char *)this + 1113) ) /*0x711d3e*/
  {
    __3_YAXPAX_Z(v10); /*0x711d47*/
    *((unsigned int *)this + 276) = 0; /*0x711d4f*/
  }
  *((unsigned char *)this + 1113) = 0; /*0x711d55*/
  *((unsigned int *)this + 277) = 0; /*0x711d5b*/
  v11 = *(void **)&this->IntList_C_Items; /*0x711d61*/
  *((unsigned int *)this + 268) = (unsigned int)&vt_VectorClass;
  if ( v11 && *((unsigned char *)this + 1085) ) /*0x711d71*/
  {
    __3_YAXPAX_Z(v11); /*0x711d7a*/
    *((unsigned int *)this + 269) = 0; /*0x711d82*/
  }
  *((unsigned char *)this + 1085) = 0; /*0x711d88*/
  *((unsigned int *)this + 270) = 0; /*0x711d8e*/
  v12 = *(void **)&this->IntList_B_Items; /*0x711d94*/
  *((unsigned int *)this + 261) = (unsigned int)&vt_VectorClass;
  if ( v12 && *((unsigned char *)this + 1057) ) /*0x711da4*/
  {
    __3_YAXPAX_Z(v12); /*0x711dad*/
    *((unsigned int *)this + 262) = 0; /*0x711db5*/
  }
  *((unsigned char *)this + 1057) = 0; /*0x711dbb*/
  *((unsigned int *)this + 263) = 0; /*0x711dc1*/
  v13 = *(void **)&this->BuildingTypeList_Items; /*0x711dc7*/
  *((unsigned int *)this + 250) = (unsigned int)&vt_VectorClass;
  if ( v13 && *((unsigned char *)this + 1013) ) /*0x711ddb*/
  {
    __3_YAXPAX_Z(v13); /*0x711de4*/
    *((unsigned int *)this + 251) = 0; /*0x711dec*/
  }
  *((unsigned char *)this + 1013) = 0; /*0x711df2*/
  *((unsigned int *)this + 252) = 0; /*0x711df8*/
  v14 = *(void **)&this->IntList_A_Items; /*0x711dfe*/
  *((unsigned int *)this + 204) = (unsigned int)&vt_VectorClass;
  if ( v14 && *((unsigned char *)this + 829) ) /*0x711e0f*/
  {
    __3_YAXPAX_Z(v14); /*0x711e18*/
    *((unsigned int *)this + 205) = 0; /*0x711e20*/
  }
  *((unsigned char *)this + 829) = 0; /*0x711e26*/
  *((unsigned int *)this + 206) = 0; /*0x711e2c*/
  v15 = *(void **)&this->VoxelAnimList_Items; /*0x711e32*/
  *((unsigned int *)this + 197) = (unsigned int)&vt_VectorClass;
  if ( v15 && *((unsigned char *)this + 801) ) /*0x711e46*/
  {
    __3_YAXPAX_Z(v15); /*0x711e4f*/
    *((unsigned int *)this + 198) = 0; /*0x711e57*/
  }
  *((unsigned char *)this + 801) = 0; /*0x711e5f*/
  *((unsigned int *)this + 199) = 0; /*0x711e65*/
  return (unsigned int)(( ObjectTypeClass *)this)->Destruct() ; /*0x711e70*/

}
} // namespace gamemd
// 0x711F00
namespace gamemd {
int TechnoTypeClass::ComputeValueSimple(float * a2)
{

  int result; // eax
  float ThreatMultiplier; // [esp+8h] [ebp-8h]
  float v5; // [esp+Ch] [ebp-4h]
  TechnoTypeClass *v6; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x711f0d*/
    return (*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711f52*/
  v5 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, (unsigned int *)this); /*0x711f17*/
  ThreatMultiplier = ((TechnoTypeClass *)(float *)a2)->GetThreatMultiplier( this); /*0x711f27*/
  v6 = (TechnoTypeClass *)(*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711f31*/
  LOWORD(result) = Math::RoundToInt((double)(int)v6 * ThreatMultiplier * v5); /*0x711f41*/
  return result; /*0x711f46*/

}
} // namespace gamemd
// 0x711F60
namespace gamemd {
int TechnoTypeClass::ComputeValue(void * a2, float a3)
{

  int result; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  float v9; // [esp+8h] [ebp-8h]
  float ThreatMultiplier; // [esp+Ch] [ebp-4h]
  TechnoTypeClass *v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+18h] [ebp+8h]
  int v13; // [esp+18h] [ebp+8h]
  int v14; // [esp+18h] [ebp+8h]

  v9 = *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5944); /*0x711f76*/
  if ( LOBYTE(a3) ) /*0x711f7c*/
    v9 = 1.0; /*0x711f7e*/
  if ( a2 ) /*0x711f8c*/
  {
    v12 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, (unsigned int *)this); /*0x711f9a*/
    ThreatMultiplier = ((TechnoTypeClass *)(float *)a2)->GetThreatMultiplier( this); /*0x711fac*/
    if ( *(unsigned int *)&((unsigned int *)this)[1328] ) /*0x711fa6*/
    {
      LOWORD(result) = Math::RoundToInt((double)*(int *)&((unsigned int *)this)[1328] * v12); /*0x711fc0*/
    }
    else
    {
      v11 = (TechnoTypeClass *)(*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711fd7*/
      LOWORD(v6) = Math::RoundToInt((double)(int)v11 * ThreatMultiplier * v12); /*0x711fe7*/
      v7 = v6; /*0x711fec*/
      v13 = v6; /*0x711ff0*/
      if ( (uint8_t)((House *)((House *)a2))->IsCurrentPlayer() ) /*0x711ff4*/
      {
        LOWORD(v8) = Math::RoundToInt((double)v13 * v9); /*0x712005*/
        return v8; /*0x71200a*/
      }
      return v7; /*0x71200c*/
    }
  }
  else
  {
    v14 = (*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x712020*/
    LOWORD(result) = Math::RoundToInt((double)v14 * v9); /*0x71202c*/
  }
  return result; /*0x711fc5*/

}
} // namespace gamemd
// 0x7162F0
namespace gamemd {
DynamicVectorClass_flat * * TechnoTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{

  TypeList *v3; // ebp
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
  void *v35; // eax
  int v36; // [esp+280h] [ebp-210h] BYREF
  int v37; // [esp+284h] [ebp-20Ch] BYREF
  int i; // [esp+288h] [ebp-208h]
  char Filename[256]; // [esp+28Ch] [ebp-204h] BYREF
  char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF

  v3 = (TypeList *)&((unsigned int *)aP0)[772]; /*0x716307*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[772] + 12))( (unsigned char *)(&((unsigned int *)aP0)[772])); /*0x71630f*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[560] + 12))( (unsigned char *)(&((unsigned int *)aP0)[560])); /*0x716320*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[1248] + 12))( (unsigned char *)(&((unsigned int *)aP0)[1248])); /*0x71632f*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[816] + 12))( (unsigned char *)(&((unsigned int *)aP0)[816])); /*0x71633e*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[844] + 12))( (unsigned char *)(&((unsigned int *)aP0)[844])); /*0x71634d*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[872] + 12))( (unsigned char *)(&((unsigned int *)aP0)[872])); /*0x71635c*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[900] + 12))( (unsigned char *)(&((unsigned int *)aP0)[900])); /*0x71636b*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[928] + 12))( (unsigned char *)(&((unsigned int *)aP0)[928])); /*0x71637a*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[956] + 12))( (unsigned char *)(&((unsigned int *)aP0)[956])); /*0x716389*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[984] + 12))( (unsigned char *)(&((unsigned int *)aP0)[984])); /*0x716398*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[1012] + 12))( (unsigned char *)(&((unsigned int *)aP0)[1012])); /*0x7163a7*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[1040] + 12))( (unsigned char *)(&((unsigned int *)aP0)[1040])); /*0x7163b6*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[1068] + 12))( (unsigned char *)(&((unsigned int *)aP0)[1068])); /*0x7163c5*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[1608] + 12))( (unsigned char *)(&((unsigned int *)aP0)[1608])); /*0x7163d4*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[1636] + 12))( (unsigned char *)(&((unsigned int *)aP0)[1636])); /*0x7163e3*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[1364] + 12))( (unsigned char *)(&((unsigned int *)aP0)[1364])); /*0x7163f2*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[1392] + 12))( (unsigned char *)(&((unsigned int *)aP0)[1392])); /*0x716401*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&((unsigned int *)aP0)[588] + 12))( (unsigned char *)(&((unsigned int *)aP0)[588])); /*0x716410*/
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)((IUnknown *)((ObjectTypeClass *)aP0)), (int)((ObjectTypeClass *)(aP1))); /*0x71641c*/
  if ( result >= 0 ) /*0x716423*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)aP0)[800]); /*0x716435*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)aP0)[804]); /*0x716446*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)aP0)[808]); /*0x716457*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)aP0)[1664]); /*0x716468*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)aP0)[1680]); /*0x716479*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0->JumpjetAccel); /*0x71648a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0->SuppressionThreshold); /*0x71649b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &((unsigned int *)aP0)[1]); /*0x7164ac*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)aP0)[1344]); /*0x7164bd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)aP0)[1348]); /*0x7164ce*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)aP0)[1492]); /*0x7164df*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)aP0)[1496]); /*0x7164f0*/
    if ( aP0 != (gamemd::ObjectTypeClass *)-1000 ) /*0x7164f7*/
      TypeList::BuildingTypeConstructor(v3); /*0x7164fb*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x71650c*/
    for ( i = 0; i < v36; ++i ) /*0x71651d*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x71652b*/
      ((DynamicVector *)v3)->Add_Alt3( (VectorClass_flat *)(&v37)); /*0x716535*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-788 ) /*0x71654d*/
      TypeList::VoxelAnimConstructor((TypeList *)&((unsigned int *)aP0)[560]); /*0x716551*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x716562*/
    for ( j = 0; j < v36; ++j ) /*0x71656d*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x71657b*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[560]))->Add2( (unsigned int *)(&v37)); /*0x716585*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1476 ) /*0x716599*/
      AnimTypeList::Constructor((AnimTypeList *)&((unsigned int *)aP0)[1248]); /*0x71659d*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x7165ae*/
    for ( k = 0; k < v36; ++k ) /*0x7165b9*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x7165c7*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[1248]))->Add_Alt4( (unsigned int *)(&v37)); /*0x7165d1*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1044 ) /*0x7165e5*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[816]); /*0x7165e9*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x7165fa*/
    for ( m = 0; m < v36; ++m ) /*0x716605*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x716613*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[816]))->Add_Alt( (unsigned int *)(&v37)); /*0x71661d*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1072 ) /*0x716631*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[844]); /*0x716635*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x716646*/
    for ( n = 0; n < v36; ++n ) /*0x716651*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x71665f*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[844]))->Add_Alt( (unsigned int *)(&v37)); /*0x716669*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1100 ) /*0x71667d*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[872]); /*0x716681*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x716692*/
    for ( ii = 0; ii < v36; ++ii ) /*0x71669d*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x7166ab*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[872]))->Add_Alt( (unsigned int *)(&v37)); /*0x7166b5*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1128 ) /*0x7166c9*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[900]); /*0x7166cd*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x7166de*/
    for ( jj = 0; jj < v36; ++jj ) /*0x7166e9*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x7166f7*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[900]))->Add_Alt( (unsigned int *)(&v37)); /*0x716701*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1156 ) /*0x716715*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[928]); /*0x716719*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x71672a*/
    for ( kk = 0; kk < v36; ++kk ) /*0x716735*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x716743*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[928]))->Add_Alt( (unsigned int *)(&v37)); /*0x71674d*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1184 ) /*0x716761*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[956]); /*0x716765*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x716776*/
    for ( mm = 0; mm < v36; ++mm ) /*0x716781*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x71678f*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[956]))->Add_Alt( (unsigned int *)(&v37)); /*0x716799*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1212 ) /*0x7167ad*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[984]); /*0x7167b1*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x7167c2*/
    for ( nn = 0; nn < v36; ++nn ) /*0x7167cd*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x7167db*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[984]))->Add_Alt( (unsigned int *)(&v37)); /*0x7167e5*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1240 ) /*0x7167f9*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[1012]); /*0x7167fd*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x71680e*/
    for ( i1 = 0; i1 < v36; ++i1 ) /*0x716819*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x716827*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[1012]))->Add_Alt( (unsigned int *)(&v37)); /*0x716831*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1268 ) /*0x716845*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[1040]); /*0x716849*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x71685a*/
    for ( i2 = 0; i2 < v36; ++i2 ) /*0x716865*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x716873*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[1040]))->Add_Alt( (unsigned int *)(&v37)); /*0x71687d*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1296 ) /*0x716891*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[1068]); /*0x716895*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x7168a6*/
    for ( i3 = 0; i3 < v36; ++i3 ) /*0x7168b1*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x7168bf*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[1068]))->Add_Alt( (unsigned int *)(&v37)); /*0x7168c9*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1836 ) /*0x7168dd*/
      AnimTypeList::Constructor((AnimTypeList *)&((unsigned int *)aP0)[1608]); /*0x7168e1*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x7168f2*/
    for ( i4 = 0; i4 < v36; ++i4 ) /*0x7168fd*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x71690b*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[1608]))->Add_Alt4( (unsigned int *)(&v37)); /*0x716915*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1864 ) /*0x716929*/
      AnimTypeList::Constructor((AnimTypeList *)&((unsigned int *)aP0)[1636]); /*0x71692d*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x71693e*/
    for ( i5 = 0; i5 < v36; ++i5 ) /*0x716949*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x716957*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[1636]))->Add_Alt4( (unsigned int *)(&v37)); /*0x716961*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-816 ) /*0x716975*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[588]); /*0x716979*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x71698a*/
    for ( i6 = 0; i6 < v36; ++i6 ) /*0x716995*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x7169a3*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[588]))->Add_Alt( (unsigned int *)(&v37)); /*0x7169ad*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1592 ) /*0x7169c1*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[1364]); /*0x7169c5*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x7169d6*/
    for ( i7 = 0; i7 < v36; ++i7 ) /*0x7169e1*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x7169ef*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[1364]))->Add_Alt( (unsigned int *)(&v37)); /*0x7169f9*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1620 ) /*0x716a0d*/
      TypeList::Construct((TypeList *)&((unsigned int *)aP0)[1392]); /*0x716a11*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x716a22*/
    for ( i8 = 0; i8 < v36; ++i8 ) /*0x716a2d*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x716a3b*/
      ((DynamicVector *)((DynamicVector *)&((unsigned int *)aP0)[1392]))->Add_Alt( (unsigned int *)(&v37)); /*0x716a45*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1912 ) /*0x716a59*/
      TechnoTypeClass::Constructor((TechnoTypeClass *)&((unsigned int *)aP0)[1684]); /*0x716a5d*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x716a6e*/
    for ( i9 = 0; i9 < v36; ++i9 ) /*0x716a79*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x716a87*/
      TypeList::PushBack((TypeList *)&((unsigned int *)aP0)[1684], &v37); /*0x716a91*/
    }
    if ( aP0 != (gamemd::ObjectTypeClass *)-1940 ) /*0x716aa5*/
      TechnoTypeClass::Constructor((TechnoTypeClass *)&((unsigned int *)aP0)[1712]); /*0x716aa9*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v36), 4, 0); /*0x716aba*/
    for ( i10 = 0; i10 < v36; ++i10 ) /*0x716ac5*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))( aP1, (int *)(&v37), 4, 0); /*0x716ad3*/
      TypeList::PushBack((TypeList *)&((unsigned int *)aP0)[1712], &v37); /*0x716add*/
    }
    for ( i11 = 0; i11 < *(unsigned int *)&((unsigned int *)aP0)[788]; ++i11 ) /*0x716af3*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&((unsigned int *)aP0)[776] + 4 * i11)); /*0x716b04*/
    for ( i12 = 0; i12 < *(unsigned int *)&((unsigned int *)aP0)[1624]; ++i12 ) /*0x716b1e*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&((unsigned int *)aP0)[1612] + 4 * i12)); /*0x716b2f*/
    for ( i13 = 0; i13 < *(unsigned int *)&((unsigned int *)aP0)[1652]; ++i13 ) /*0x716b49*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&((unsigned int *)aP0)[1640] + 4 * i13)); /*0x716b5a*/
    for ( i14 = 0; i14 < *(unsigned int *)&((unsigned int *)aP0)[576]; ++i14 ) /*0x716b74*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&((unsigned int *)aP0)[564] + 4 * i14)); /*0x716b85*/
    for ( i15 = 0; i15 < *(unsigned int *)&((unsigned int *)aP0)[1264]; ++i15 ) /*0x716b9f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&((unsigned int *)aP0)[1252] + 4 * i15)); /*0x716bb0*/
    v29 = (int *)&((unsigned int *)aP0)[1972]; /*0x716bc0*/
    v30 = 18; /*0x716bc6*/
    do /*0x716bda*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v29); /*0x716bd1*/
      v29 += 7; /*0x716bd6*/
      --v30; /*0x716bd9*/
    }
    while ( v30 ); /*0x716bda*/
    v31 = (int *)&((unsigned int *)aP0)[2480]; /*0x716bdc*/
    v32 = 18; /*0x716be2*/
    do /*0x716bf6*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v31); /*0x716bed*/
      v31 += 7; /*0x716bf2*/
      --v32; /*0x716bf5*/
    }
    while ( v32 ); /*0x716bf6*/
    for ( i16 = 0; i16 < *(unsigned int *)&((unsigned int *)aP0)[1700]; ++i16 ) /*0x716c04*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&((unsigned int *)aP0)[1688] + 4 * i16)); /*0x716c15*/
    for ( i17 = 0; i17 < *(unsigned int *)&((unsigned int *)aP0)[1728]; ++i17 ) /*0x716c2f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&((unsigned int *)aP0)[1716] + 4 * i17)); /*0x716c40*/
    _makepath(Buffer, 0, 0, (const char *)( &((unsigned int *)aP0)[276]), (const char *)&Ext); /*0x716c66*/
    aP0->ObjectTypeClass[41] = (int)SearchMIXFile( (char *)(Buffer), 0); /*0x716c96*/
    /*0x716c9c*/
      ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x716c9c*/ &((unsigned int *)aP0)[276], (uint8_t *)&((char *)&g_INI_Key_TRUCKA), &g_INI_Key_TRUCKA.__pad_1714[80], Filename, 256);
    if ( !_strcmpi(Filename, &g_INI_Key_TRUCKA.__pad_1714[80]) ) /*0x716cab*/
      /*0x716cd4*/
        ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x716cd4*/ (uint8_t *)aP0[9], (uint8_t *)&((char *)&g_INI_Key_TRUCKA), &g_INI_Key_TRUCKA.__pad_1714[80], Filename, 256);
    _makepath( Buffer, 0, 0, Filename, (const char *)(Ext) ); /*0x716ced*/
    *(unsigned int *)&((unsigned int *)aP0)[1548] = 0; /*0x716cfe*/
    v35 = (void *)SearchMIXFile( (char *)(Buffer), 0); /*0x716d04*/
    *(unsigned int *)&((unsigned int *)aP0)[1548] = (unsigned int)v35; /*0x716d0b*/
    if ( !v35 ) /*0x716d11*/
      *(unsigned int *)&((unsigned int *)aP0)[1548] = SearchMIXFile( (char *)(&(unsigned int *)((char *)&stru_820320 + 143)), 0); /*0x716d1f*/
    /*0x716d3f*/
      ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x716d3f*/ &((unsigned int *)aP0)[276], (uint8_t *)&((char *)&g_INI_Key_TRUCKA), &g_INI_DefaultBuffer, Filename, 256);
    _makepath( Buffer, 0, 0, Filename, (const char *)(Ext) ); /*0x716d58*/
    *(unsigned int *)&((unsigned int *)aP0)[1580] = 0; /*0x716d69*/
    *(unsigned int *)&((unsigned int *)aP0)[1580] = SearchMIXFile( (char *)(Buffer), 0); /*0x716d8d*/
    /*0x716d93*/
      ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x716d93*/ &((unsigned int *)aP0)[276], (uint8_t *)g_INI_Key_Palette, &g_INI_DefaultBuffer, (char *)&((unsigned int *)aP0)[0] + 1, 32);
    if ( BYTE1(((unsigned int *)aP0)[0]) ) /*0x716d98*/
      *(int *)((char *)&((unsigned int *)aP0)[0] + 1) = ((FileExtension*)((const char *)&((unsigned int *)aP0)[0] + 1))->MapHandler(); /*0x716da4*/
    return 0; /*0x716daa*/
  }
  return (DynamicVectorClass_flat * *)result; /*0x716dac*/

}
} // namespace gamemd
// 0x716DC0
namespace gamemd {
int TechnoTypeClass::SaveLoad_Prefix_0(void * a1, TechnoTypeClass * aP2, TechnoTypeClass * aP3)
{

  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx
  int v13; // edx
  int m; // ebx
  int v15; // edx
  int n; // ebx
  int v17; // edx
  int ii; // ebx
  int v19; // edx
  int jj; // ebx
  int v21; // edx
  int kk; // ebx
  int v23; // edx
  int mm; // ebx

  result = AbstractClass::SaveLoad_PrefixWrapper( (TechnoTypeClass *)((AbstractClass *)a1), (ObjectTypeClass *)((int)aP2), (TechnoTypeClass *)((int)aP3)); /*0x716dd1*/
  if ( result >= 0 ) /*0x716dd8*/
  {
    v7 = *(unsigned int *)aP2;
    aP3 = (TechnoTypeClass *)(*(int **)&((unsigned int *)a1)[788]); /*0x716df1*/
    (*(void (**)(unsigned int *, int **, int, unsigned int, int))(v7 + 16))( (unsigned int *)(aP2), (int **)(&aP3), 4, 0, v5); /*0x716df5*/
    for ( i = 0; i < a4; ++i ) /*0x716e00*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*aP2 + 16))( (unsigned int *)(aP2), *(unsigned int *)&((unsigned int *)a1)[776] + 4 * i, 4, 0); /*0x716e13*/
    v9 = *(unsigned int *)aP2;
    a4 = *(unsigned int *)&((unsigned int *)a1)[576]; /*0x716e2f*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v9 + 16))( (unsigned int *)(aP2), (int *)(&a4), 4, 0); /*0x716e33*/
    for ( j = 0; j < a4; ++j ) /*0x716e3e*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*aP2 + 16))( (unsigned int *)(aP2), *(unsigned int *)&((unsigned int *)a1)[564] + 4 * j, 4, 0); /*0x716e51*/
    v11 = *(unsigned int *)aP2;
    a4 = *(unsigned int *)&((unsigned int *)a1)[1264]; /*0x716e6d*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v11 + 16))( (unsigned int *)(aP2), (int *)(&a4), 4, 0); /*0x716e71*/
    for ( k = 0; k < a4; ++k ) /*0x716e7c*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*aP2 + 16))( (unsigned int *)(aP2), *(unsigned int *)&((unsigned int *)a1)[1252] + 4 * k, 4, 0); /*0x716e8f*/
    v13 = *(unsigned int *)aP2;
    a4 = *(unsigned int *)&((unsigned int *)a1)[832]; /*0x716eab*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v13 + 16))( (unsigned int *)(aP2), (int *)(&a4), 4, 0); /*0x716eaf*/
    for ( m = 0; m < a4; ++m ) /*0x716eba*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*aP2 + 16))( (unsigned int *)(aP2), *(unsigned int *)&((unsigned int *)a1)[820] + 4 * m, 4, 0); /*0x716ecd*/
    v15 = *(unsigned int *)aP2;
    a4 = *(unsigned int *)&((unsigned int *)a1)[860]; /*0x716ee9*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v15 + 16))( (unsigned int *)(aP2), (int *)(&a4), 4, 0); /*0x716eed*/
    for ( n = 0; n < a4; ++n ) /*0x716ef8*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*aP2 + 16))( (unsigned int *)(aP2), *(unsigned int *)&((unsigned int *)a1)[848] + 4 * n, 4, 0); /*0x716f0b*/
    v17 = *(unsigned int *)aP2;
    a4 = *(unsigned int *)&((unsigned int *)a1)[888]; /*0x716f27*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v17 + 16))( (unsigned int *)(aP2), (int *)(&a4), 4, 0); /*0x716f2b*/
    for ( ii = 0; ii < a4; ++ii ) /*0x716f36*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*aP2 + 16))( (unsigned int *)(aP2), *(unsigned int *)&((unsigned int *)a1)[876] + 4 * ii, 4, 0); /*0x716f49*/
    v19 = *(unsigned int *)aP2;
    a4 = *(unsigned int *)&((unsigned int *)a1)[916]; /*0x716f65*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v19 + 16))( (unsigned int *)(aP2), (int *)(&a4), 4, 0); /*0x716f69*/
    for ( jj = 0; jj < a4; ++jj ) /*0x716f74*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*aP2 + 16))( (unsigned int *)(aP2), *(unsigned int *)&((unsigned int *)a1)[904] + 4 * jj, 4, 0); /*0x716f87*/
    v21 = *(unsigned int *)aP2;
    a4 = *(unsigned int *)&((unsigned int *)a1)[944]; /*0x716fa3*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v21 + 16))( (unsigned int *)(aP2), (int *)(&a4), 4, 0); /*0x716fa7*/
    for ( kk = 0; kk < a4; ++kk ) /*0x716fb2*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*aP2 + 16))( (unsigned int *)(aP2), *(unsigned int *)&((unsigned int *)a1)[932] + 4 * kk, 4, 0); /*0x716fc5*/
    v23 = *(unsigned int *)aP2;
    a4 = *(unsigned int *)&((unsigned int *)a1)[972]; /*0x716fe1*/
    (*(void (**)(unsigned int *, int *, int))(v23 + 16))( (unsigned int *)(aP2), (int *)(&a4), 4); /*0x716fe5*/
    for ( mm = 0; mm < (int)aP3; ++mm ) /*0x716ff0*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*aP2 + 16))( (unsigned int *)(aP2), *(unsigned int *)&((unsigned int *)a1)[960] + 4 * mm, 4, 0); /*0x717003*/
    DynamicVector::Read( (unsigned int *)((DynamicVector *)&((unsigned int *)a1)[984]), (void *)(aP2)); /*0x717014*/
    DynamicVector::Read( (unsigned int *)((DynamicVector *)&((unsigned int *)a1)[1012]), (void *)(aP2)); /*0x717020*/
    DynamicVector::Read( (unsigned int *)((DynamicVector *)&((unsigned int *)a1)[1040]), (void *)(aP2)); /*0x71702c*/
    DynamicVector::Read( (unsigned int *)((DynamicVector *)&((unsigned int *)a1)[1068]), (void *)(aP2)); /*0x717038*/
    ((Stream *)&((unsigned int *)a1)[1608])->WriteIntArray( (TechnoTypeClass *)(aP2)); /*0x717044*/
    ((Stream *)&((unsigned int *)a1)[1636])->WriteIntArray( (TechnoTypeClass *)(aP2)); /*0x717050*/
    DynamicVector::Read( (unsigned int *)((DynamicVector *)&((unsigned int *)a1)[588]), (void *)(aP2)); /*0x71705c*/
    DynamicVector::Read( (unsigned int *)((DynamicVector *)&((unsigned int *)a1)[1364]), (void *)(aP2)); /*0x717068*/
    DynamicVector::Read( (unsigned int *)((DynamicVector *)&((unsigned int *)a1)[1392]), (void *)(aP2)); /*0x717074*/
    ((TechnoTypeClass *)&((unsigned int *)a1)[1684])->SaveLoadDataArray( (TechnoTypeClass *)(aP2)); /*0x717080*/
    ((TechnoTypeClass *)&((unsigned int *)a1)[1712])->SaveLoadDataArray( (TechnoTypeClass *)(aP2)); /*0x71708c*/
    return 0; /*0x717091*/
  }
  return result; /*0x717094*/

}
} // namespace gamemd
// 0x41CB50
namespace gamemd {
char TechnoTypeClass::vt_entry_A0()
{

  return 0; /*0x41cb52*/

}
} // namespace gamemd
// 0x5247C0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0()
{

  return (void*)((TechnoTypeClass *)this)->CanAttackMove_IgnoreWeapon() ;

}
}
// 0x711E90
namespace gamemd {  // G42.18c ns repair
bool TechnoTypeClass::CanAttackMove_IgnoreWeapon()
{

  return *(unsigned int *)&((unsigned int *)this)[1972] && !((unsigned int *)this)[1508]; /*0x711ea6*/

}
}  // G42.18c ns repair
// 0x711EE0
namespace gamemd {  // G42.18c ns repair
double TechnoTypeClass::ComputeBuildTime()
{

  double result; // st7

  result = (double)*(int *)&((unsigned int *)this)[1324] * *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5960) * 0.9; /*0x711ef1*/
  Math::RoundToInt(result); /*0x711ef7*/
  return result;

}
}  // G42.18c ns repair
// 0x7179A0
namespace gamemd {  // G42.18c ns repair
TechnoTypeClass * TechnoTypeClass::ddtor(void * Block, char a2)
{

  TechnoTypeClass::DTOR( (void *)((int)this)); /*0x7179a3*/
  if ( (a2 & 1) != 0 ) /*0x7179ad*/
    __3_YAXPAX_Z(this); /*0x7179b0*/
  return (TechnoTypeClass *)this; /*0x7179ba*/

}
}  // G42.18c ns repair
// 0x717AF0
namespace gamemd {  // G42.18c ns repair
unsigned int * TechnoTypeClass::Constructor(void *a1, void *a2, void *a3, void *a4, void *a5)
{

  this->ObjectTypeClass[1] = 0; /*0x717af4*/
  this->ObjectTypeClass[2] = 0; /*0x717af7*/
  LOBYTE(this->ObjectTypeClass[3]) = 1; /*0x717afa*/
  BYTE1(this->ObjectTypeClass[3]) = 0; /*0x717afe*/
  this->ObjectTypeClass[5] = 10; /*0x717b01*/
  this->ObjectTypeClass[4] = 0; /*0x717b08*/
  this->ObjectTypeClass[0] = (int)&vt_TypeList; /*0x717b0b*/
  return this->ObjectTypeClass; /*0x717b11*/

}
}  // G42.18c ns repair
// 0x717B20
namespace gamemd {  // G42.18c ns repair
int  TechnoTypeClass::SaveLoadDataArray(TechnoTypeClass * aP1)
{

  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(unsigned int *)aP1;
  v6 = this->ObjectTypeClass[4]; /*0x717b39*/
  (*(void (**)(int *, int *, int, unsigned int))(v3 + 16))( (int *)(aP1), (int *)(&v6), 4, 0); /*0x717b3d*/
  result = v6; /*0x717b40*/
  for ( i = 0; i < v6; ++i ) /*0x717b48*/
  {
    (*(void (**)(int *, int, int, unsigned int))(*aP1 + 16))( (int *)(aP1), this->ObjectTypeClass[1] + 4 * i, 4, 0); /*0x717b58*/
    result = v6; /*0x717b5b*/
  }
  return result; /*0x717b64*/

}
}  // G42.18c ns repair
// 0x717BC0
namespace gamemd {  // G42.18c ns repair
unsigned int * TechnoTypeClass::Constructor_0(ObjectTypeClass * aP1, void *a2, void *a3)
{

  this->ObjectTypeClass[0] = (int)&vt_DynamicVectorClass; /*0x717bc2*/
  return this->ObjectTypeClass; /*0x717bc8*/

}
}  // G42.18c ns repair
// 0x717BE0
namespace gamemd {  // G42.18c ns repair
VectorClass_flat * TechnoTypeClass::Constructor_1(ObjectTypeClass * aP1)
{

  this->ObjectTypeClass[0] = (int)&vt_DynamicVectorClass; /*0x717be2*/
  return this->ObjectTypeClass; /*0x717be8*/

}
}  // G42.18c ns repair
// 0x717DB0
namespace gamemd {  // G42.18c ns repair
char TechnoTypeClass::RemoveItem(int a2, void *a2_2)
{

  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->ObjectTypeClass[4]; /*0x717db0*/
  v3 = a2; /*0x717db3*/
  if ( a2 >= v2 ) /*0x717db9*/
    return 0; /*0x717ddc*/
  v4 = v2 - 1; /*0x717dbb*/
  this->ObjectTypeClass[4] = v4; /*0x717dbe*/
  if ( a2 < v4 ) /*0x717dc1*/
  {
    do /*0x717dd4*/
    {
      ++v3; /*0x717dc7*/
      *(unsigned int *)(this->ObjectTypeClass[1] + 4 * v3 - 4) = *(unsigned int *)(this->ObjectTypeClass[1] + 4 * v3); /*0x717dcb*/
    }
    while ( v3 < this->ObjectTypeClass[4] ); /*0x717dd4*/
  }
  return 1; /*0x717dd9*/

}
}  // G42.18c ns repair
// 0x7473D0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0_0()
{

  return (void*)((TechnoTypeClass *)this)->CanAttackMove_IgnoreWeapon() ;

}
}
