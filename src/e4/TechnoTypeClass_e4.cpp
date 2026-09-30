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
  return (gamemd::AbstractClass **)(result);
}
} // namespace gamemd
// 0x50BDF0
namespace gamemd {
void TechnoTypeClass::Dispatch(void* a1)
{
  double result; // st7

  switch ( (*(int (**)(unsigned int *))(*aP1 + 44))(aP1) ) /*0x50be0f*/
  {
    case 3: /*0x50be0f*/
            result = *(float *)(*((unsigned int *)this + 52) + 284);
      break; /*0x50be3d*/
    case 7: /*0x50be0f*/
      if ( aP1[898] == 5 ) /*0x50be47*/
                result = *(float *)(*((unsigned int *)this + 52) + 292);
      else
                result = *(float *)(*((unsigned int *)this + 52) + 288);
      break; /*0x50be54*/
    case 16: /*0x50be0f*/
            result = *(float *)(*((unsigned int *)this + 52) + 276);
      break; /*0x50be21*/
    case 40: /*0x50be0f*/
            result = *(float *)(*((unsigned int *)this + 52) + 280);
      break; /*0x50be2f*/
    default:
      result = 1.0; /*0x50be65*/
      break; /*0x50be65*/
  }
  return result; /*0x50be6b*/
}
} // namespace gamemd
// 0x50BEB0
namespace gamemd {
int TechnoTypeClass::GetThreatMultiplier(TechnoTypeClass * aP1)
{
  double result; // st7

  switch ( (*(int (**)(unsigned int *))(*aP1 + 44))(aP1) ) /*0x50becf*/
  {
    case 3: /*0x50becf*/
            result = *((unsigned int *)this + 21400);
      break; /*0x50bef4*/
    case 7: /*0x50becf*/
      if ( aP1[898] == 5 ) /*0x50befe*/
                result = *((unsigned int *)this + 21408);
      else
                result = *((unsigned int *)this + 21404);
      break; /*0x50bf08*/
    case 16: /*0x50becf*/
            result = *((unsigned int *)this + 21392);
      break; /*0x50bede*/
    case 40: /*0x50becf*/
            result = *((unsigned int *)this + 21396);
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
unsigned int * TechnoTypeClass::LoadBase(ObjectClass * aP1)
{
  unsigned int v3;
  char v4; // al
  int v5; // eax
  void **v6; // edx
  TechnoTypeClass * v7;

  AbstractTypeClass::Constructor(aP1); /*0x6f06ea*/
    *((unsigned int *)this + 152) = -1;
    *((unsigned int *)this + 156) = -1;
    *((unsigned int *)this + 160) = 1;
    *((unsigned int *)this + 164) = 0;
  this->u8_A5 = 0; /*0x6f0711*/
  this->u8_A6 = 0; /*0x6f0717*/
  this->u8_A7 = 0; /*0x6f071d*/
    *((unsigned int *)this + 168) = 0;
  this->q0A9 = 0; /*0x6f0729*/
  this->q0AA = 0; /*0x6f072f*/
  this->q0AB = 0; /*0x6f0735*/
    *((unsigned int *)this + 172) = 0;
  this->u8_AD = 0; /*0x6f0741*/
  *(void **)&this->u8_AE = (void *)(0);
  this->u8_AF = (unsigned char)((void *)(0));
  this->MainVoxel = (void *)(0);
  this->u8_B1 = (unsigned char)((void *)(0));
  this->u8_B2 = (unsigned char)((void *)(0));
  this->u8_B3 = 0; /*0x6f0765*/
    *((unsigned int *)this + 180) = 7;
    *((unsigned int *)this + 184) = -1;
    *((unsigned int *)this + 188) = 0;
    *((unsigned int *)this + 192) = 0;
    *((unsigned int *)this + 196) = 0;
    *((unsigned int *)this + 200) = -1;
    *((unsigned int *)this + 204) = 0;
    *((unsigned int *)this + 208) = 0;
    *((unsigned int *)this + 212) = -1;
    *((unsigned int *)this + 216) = -1;
    *((unsigned int *)this + 220) = 0;
    *((unsigned int *)this + 224) = 0;
    *((unsigned int *)this + 228) = 0;
    *((unsigned int *)this + 232) = 0;
    *((unsigned int *)this + 236) = 9;
    *((unsigned char *)this + 240) = 1;
    *((unsigned char *)this + 241) = 0;
    *((unsigned char *)this + 242) = 0;
    *((unsigned char *)this + 243) = 0;
    *((unsigned char *)this + 244) = 0;
    *((unsigned char *)this + 245) = 1;
    *((unsigned char *)this + 246) = 0;
    *((unsigned char *)this + 247) = 0;
  v3 = g_MultiplayerLogState; /*0x6f0818*/
  if ( g_MultiplayerLogState < dword_A8ECA8 /*0x6f0857*/
    || (byte_A8ECAD || !dword_A8ECA8)
    && dword_A8ECB4 > 0
    && (v4 = (*(int (**)(int *, int, unsigned int))(TeamTypeClass_Array + 8))(
               &TeamTypeClass_Array,
               dword_A8ECA8 + dword_A8ECB4,
               0),
        v3 = g_MultiplayerLogState,
        v4) )
  {
    g_MultiplayerLogState = (unsigned int)(v3 + 1);
    *((unsigned int *)(unsigned int)(g_TeamTypePool)+ v3) = this; /*0x6f0868*/
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
      if ( v5 >= (int)(v3) ) /*0x6f0887*/
        goto LABEL_11; /*0x6f0887*/
    }
  }
    *((unsigned int *)this + 152) = v5;
  if ( g_AnimManager < g_AnimTypePool /*0x6f08c5*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v7 = (gamemd::TechnoTypeClass *)(g_AnimManager++);
    *((unsigned int *)(unsigned int)(g_AnimPoolCount)+ v7) = this; /*0x6f08e1*/
  }
  return (unsigned int *)(this);
}
} // namespace gamemd
// 0x710AF0
namespace gamemd {
void * TechnoTypeClass::ReadINI(char * Source, int a3)
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
  TechnoTypeClass * v15;
  TechnoTypeClass * v16;

  ObjectTypeClass::ConstructFull(Source); /*0x710afb*/
    *((unsigned int *)this + 165) = 1;
    *((unsigned int *)this + 166) = 0;
    *((unsigned int *)this + 167) = 0;
    *((unsigned int *)this + 168) = 0;
    *((unsigned int *)this + 169) = 0;
    *((unsigned int *)this + 170) = 0;
    *((unsigned short *)this + 342) = 0;
    *((unsigned int *)this + 2744) = 0;
    *((unsigned int *)this + 2760) = 0;
    *((unsigned int *)this + 2776) = 0;
    *((unsigned int *)this + 2792) = 0;
    *((unsigned short *)this + 351) = 0;
    *((unsigned int *)this + 176) = 0;
    *((unsigned int *)this + 177) = 0;
    *((unsigned int *)this + 178) = 0;
  this->speed = (unsigned char)(0);
    *((unsigned int *)this + 180) = 0;
    *((unsigned int *)this + 181) = 0;
    *((unsigned int *)this + 182) = 0;
  this->u32_2DC = (unsigned char)(0);
    *((unsigned int *)this + 184) = 0;
    *((unsigned int *)this + 185) = 0;
    *((unsigned int *)this + 186) = 0;
    *((unsigned int *)this + 187) = 0;
    *((unsigned int *)this + 188) = 0;
    *((unsigned int *)this + 189) = 0;
    *((unsigned int *)this + 190) = 500;
    *((unsigned int *)this + 192) = -755914244;
    *((unsigned int *)this + 193) = 1063281229;
    *((unsigned int *)this + 194) = -343597384;
    *((unsigned int *)this + 195) = 1067366481;
    *((unsigned int *)this + 196) = 7;
  VoxelAnimTypeVector::Constructor(0, 0); /*0x710bee*/
    *((unsigned int *)this + 201) = 0;
    *((unsigned int *)this + 202) = 10;
    *((unsigned int *)this + 197) = &vt_TypeList_VoxelAnimTypeClass_const;
  VectorClass::Construct((unsigned int *)&this->DebrisMaximums, 0, 0); /*0x710c0f*/
    *((unsigned int *)this + 209) = 10;
    *((unsigned int *)this + 208) = 0;
    *((unsigned int *)this + 204) = &vt_TypeList_int;
    *((unsigned int *)this + 211) = 1247291207;
    *((unsigned int *)this + 212) = 298948665;
    *((unsigned int *)this + 213) = -1610610249;
    *((unsigned int *)this + 214) = -777003740;
    *((unsigned int *)this + 216) = 0;
    *((unsigned int *)this + 217) = 0;
    *((unsigned int *)this + 218) = 0;
    *((unsigned int *)this + 219) = 0;
    *((unsigned int *)this + 220) = 0;
    *((unsigned int *)this + 221) = 1072693248;
    *((unsigned int *)this + 222) = 0;
    *((unsigned int *)this + 223) = 0x40000000;
    *((unsigned int *)this + 224) = 0;
    *((unsigned int *)this + 225) = 1072693248;
    *((unsigned int *)this + 226) = 0;
    *((unsigned int *)this + 227) = 0;
    *((unsigned int *)this + 3648) = 0;
    *((unsigned int *)this + 229) = 0;
    *((unsigned int *)this + 230) = 15;
  this->RollAngle = (unsigned char)(942502757);
    *((unsigned int *)this + 233) = 1071694162;
    *((unsigned int *)this + 234) = 0;
    *((unsigned int *)this + 235) = 1070596096;
    *((unsigned int *)this + 236) = 1256670343;
    *((unsigned int *)this + 237) = 1071011608;
    *((unsigned int *)this + 238) = 0x7FFFFFFF;
    *((unsigned int *)this + 239) = -1;
    *((unsigned int *)this + 240) = 0;
    *((unsigned int *)this + 242) = 0;
    *((unsigned int *)this + 243) = 0;
    *((unsigned int *)this + 244) = 8;
    *((unsigned int *)this + 245) = 0;
    *((unsigned int *)this + 3936) = 0;
    *((unsigned int *)this + 247) = 70;
    *((unsigned int *)this + 248) = 0;
    *((unsigned int *)this + 249) = 0;
  VectorClass::BuildingTypeConstructor((unsigned int *)&this->Dock, 0, 0); /*0x710d46*/
    *((unsigned int *)this + 255) = 10;
    *((unsigned int *)this + 254) = 0;
    *((unsigned int *)this + 250) = &vt_TypeList_BuildingTypeClass_const;
    *((unsigned int *)this + 257) = 0;
    *((unsigned int *)this + 258) = 0;
    *((unsigned int *)this + 259) = 0;
    *((unsigned int *)this + 4160) = 0;
  VectorClass::Construct((unsigned int *)&this->VoiceSelect, 0, 0); /*0x710d81*/
    *((unsigned int *)this + 266) = 10;
    *((unsigned int *)this + 265) = 0;
  this->VoiceSelect = (unsigned char)((void*)&TypeList_int_vftable);
  VectorClass::Construct((unsigned int *)&this->VoiceSelectEnslaved, 0, 0); /*0x710da4*/
    *((unsigned int *)this + 273) = 10;
    *((unsigned int *)this + 272) = 0;
  this->VoiceSelectEnslaved = (unsigned char)((void*)&TypeList_int_vftable);
  VectorClass::Construct((unsigned int *)&this->VoiceSelectDeactivated, 0, 0); /*0x710dc7*/
    *((unsigned int *)this + 280) = 10;
    *((unsigned int *)this + 279) = 0;
  this->VoiceSelectDeactivated = (unsigned char)((void*)&TypeList_int_vftable);
  VectorClass::Construct((unsigned int *)&this->VoiceMove, 0, 0); /*0x710dea*/
    *((unsigned int *)this + 287) = 10;
    *((unsigned int *)this + 286) = 0;
  this->VoiceMove = (unsigned char)((void*)&TypeList_int_vftable);
  VectorClass::Construct((unsigned int *)&this->VoiceAttack, 0, 0); /*0x710e0d*/
    *((unsigned int *)this + 294) = 10;
    *((unsigned int *)this + 293) = 0;
  this->VoiceAttack = (unsigned char)((void*)&TypeList_int_vftable);
  VectorClass::Construct((unsigned int *)&this->VoiceSpecialAttack, 0, 0); /*0x710e30*/
    *((unsigned int *)this + 301) = 10;
    *((unsigned int *)this + 300) = 0;
    *((unsigned int *)this + 296) = &vt_TypeList_int;
  VectorClass::Construct((unsigned int *)&this->VoiceDie, 0, 0); /*0x710e53*/
    *((unsigned int *)this + 308) = 10;
    *((unsigned int *)this + 307) = 0;
    *((unsigned int *)this + 303) = &vt_TypeList_int;
  VectorClass::Construct((unsigned int *)&this->VoiceFeedback, 0, 0); /*0x710e76*/
    *((unsigned int *)this + 315) = 10;
    *((unsigned int *)this + 314) = 0;
    *((unsigned int *)this + 310) = &vt_TypeList_int;
  VectorClass::Construct((unsigned int *)&this->MoveSound, 0, 0); /*0x710e99*/
    *((unsigned int *)this + 322) = 10;
    *((unsigned int *)this + 321) = 0;
    *((unsigned int *)this + 317) = &vt_TypeList_int;
  VectorClass::Construct((unsigned int *)&this->DieSound, 0, 0); /*0x710ebc*/
    *((unsigned int *)this + 329) = 10;
    *((unsigned int *)this + 328) = 0;
    *((unsigned int *)this + 324) = &vt_TypeList_int;
    *((unsigned int *)this + 331) = -1;
    *((unsigned int *)this + 332) = -1;
    *((unsigned int *)this + 333) = -1;
    *((unsigned int *)this + 334) = -1;
    *((unsigned int *)this + 335) = -1;
    *((unsigned int *)this + 336) = -1;
    *((unsigned int *)this + 337) = -1;
    *((unsigned int *)this + 338) = -1;
    *((unsigned int *)this + 339) = -1;
    *((unsigned int *)this + 340) = -1;
    *((unsigned int *)this + 341) = -1;
    *((unsigned int *)this + 342) = -1;
    *((unsigned int *)this + 343) = -1;
    *((unsigned int *)this + 344) = -1;
    *((unsigned int *)this + 345) = -1;
    *((unsigned int *)this + 346) = -1;
    *((unsigned int *)this + 347) = -1;
    *((unsigned int *)this + 348) = -1;
    *((unsigned int *)this + 349) = -1;
    *((unsigned int *)this + 350) = -1;
    *((unsigned int *)this + 351) = -1;
  this->VoicePrimaryWeaponAttack = (unsigned char)(-1);
    *((unsigned int *)this + 353) = -1;
    *((unsigned int *)this + 354) = -1;
    *((unsigned int *)this + 355) = -1;
    *((unsigned int *)this + 356) = -1;
    *((unsigned int *)this + 357) = -1;
    *((unsigned int *)this + 358) = -1;
    *((unsigned int *)this + 359) = -1;
    *((unsigned int *)this + 360) = -1;
    *((unsigned int *)this + 361) = -1;
    *((unsigned int *)this + 362) = -1;
    *((unsigned int *)this + 363) = -1;
    *((unsigned int *)this + 364) = -1;
    *((unsigned int *)this + 365) = 0;
    *((unsigned int *)this + 366) = 0;
    *((unsigned int *)this + 367) = 0;
    *((unsigned int *)this + 368) = 0;
  AnimTypeVector::Constructor((unsigned int *)&this->DebrisAnims, 0, 0); /*0x710fc3*/
    *((unsigned int *)this + 374) = 10;
    *((unsigned int *)this + 373) = 0;
    *((unsigned int *)this + 369) = &vt_TypeList_AnimTypeClass_const;
    *((unsigned int *)this + 376) = 0;
    *((unsigned int *)this + 6032) = 0;
    *((unsigned int *)this + 378) = 0;
    *((unsigned int *)this + 6064) = 0;
    *((unsigned int *)this + 6068) = 0;
    *((unsigned int *)this + 6072) = 0;
    *((unsigned int *)this + 6076) = 0;
    *((unsigned int *)this + 380) = 0;
  this->DetectDisguiseRange = (unsigned char)(0);
    *((unsigned int *)this + 382) = 0;
    *((unsigned int *)this + 383) = 5;
    *((unsigned int *)this + 384) = 0;
  this->LandTargeting = (unsigned char)(0);
    *((unsigned int *)this + 386) = 1065353216;
    *((unsigned int *)this + 387) = 140;
    *((unsigned int *)this + 388) = 0;
    *((unsigned int *)this + 389) = 0;
    *((unsigned int *)this + 390) = -1;
    *((unsigned int *)this + 391) = 0;
    *((unsigned int *)this + 392) = 0;
    *((unsigned int *)this + 393) = 0;
    *((unsigned int *)this + 394) = 0;
    *((unsigned int *)this + 395) = 0;
    *((unsigned int *)this + 396) = 0;
    *((unsigned int *)this + 397) = 255;
  VectorClass::Construct((unsigned int *)&this->Prerequisite, 0, 0); /*0x71108c*/
    *((unsigned int *)this + 403) = 10;
    *((unsigned int *)this + 402) = 0;
    *((unsigned int *)this + 398) = &vt_TypeList_int;
  VectorClass::Construct((unsigned int *)&this->PrerequisiteOverride, 0, 0); /*0x7110af*/
    *((unsigned int *)this + 410) = 10;
    *((unsigned int *)this + 409) = 0;
    *((unsigned int *)this + 405) = &vt_TypeList_int;
    *((unsigned int *)this + 412) = 0;
    *((unsigned int *)this + 413) = 0;
    *((unsigned int *)this + 414) = 0;
    *((unsigned int *)this + 415) = a3;
    *((unsigned int *)this + 416) = -1;
    *((unsigned int *)this + 417) = -1;
    *((unsigned int *)this + 418) = 0;
    *((unsigned int *)this + 419) = 0;
    *((unsigned int *)this + 6720) = 0;
    *((unsigned int *)this + 6724) = 0;
    *((unsigned int *)this + 6728) = 0;
    *((unsigned int *)this + 6732) = 0;
    *((unsigned int *)this + 6736) = 0;
    *((unsigned int *)this + 6740) = 0;
    *((unsigned int *)this + 422) = 0;
    *((unsigned int *)this + 423) = -1;
    *((unsigned int *)this + 424) = 0;
    *((unsigned int *)this + 425) = 0;
    *((unsigned int *)this + 426) = 1;
    *((unsigned int *)this + 6832) = 0;
    *((unsigned int *)this + 6836) = 0;
    *((unsigned int *)this + 6840) = 1;
    *((unsigned int *)this + 6844) = 0;
    *((unsigned int *)this + 6848) = 0;
    *((unsigned int *)this + 6852) = 0;
    *((unsigned int *)this + 429) = 0;
    *((unsigned int *)this + 430) = 0;
    *((unsigned int *)this + 431) = 0;
    *((unsigned int *)this + 6912) = 0;
    *((unsigned int *)this + 6916) = 0;
    *((unsigned int *)this + 433) = -1;
    *((unsigned int *)this + 6944) = 0;
    *((unsigned int *)this + 435) = 0;
    *((unsigned int *)this + 436) = -1;
    *((unsigned int *)this + 6992) = 0;
    *((unsigned int *)this + 6996) = 1;
  if ( &g_INI_DefaultBuffer ) /*0x7111b9*/
  {
    strncpy(&this->CameoFile, &g_INI_DefaultBuffer, 0x18u); /*0x7111c7*/
        *((unsigned int *)this + 7096) = 0;
  }
  else
  {
        *((unsigned int *)this + 7000) = 0;
  }
    *((unsigned int *)this + 444) = 0;
    *((unsigned int *)this + 7120) = 0;
  if ( &g_INI_DefaultBuffer ) /*0x7111ee*/
  {
    strncpy(&this->AltCameoFile, &g_INI_DefaultBuffer, 0x18u); /*0x7111fc*/
        *((unsigned int *)this + 7220) = 0;
  }
  else
  {
        *((unsigned int *)this + 7124) = 0;
  }
    *((unsigned int *)this + 452) = 0;
    *((unsigned int *)this + 7248) = 0;
    *((unsigned int *)this + 454) = 0;
    *((unsigned int *)this + 455) = 0;
    *((unsigned int *)this + 456) = 0;
    *((unsigned int *)this + 7312) = 1;
    *((unsigned int *)this + 458) = 0;
  AnimTypeVector::Constructor((unsigned int *)&this->Explosion, 0, 0); /*0x71123d*/
    *((unsigned int *)this + 464) = 10;
    *((unsigned int *)this + 463) = 0;
    *((unsigned int *)this + 459) = &vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor((unsigned int *)&this->DestroyAnim, 0, 0); /*0x711260*/
    *((unsigned int *)this + 471) = 10;
    *((unsigned int *)this + 470) = 0;
    *((unsigned int *)this + 466) = &vt_TypeList_AnimTypeClass_const;
    *((unsigned int *)this + 473) = 0;
    *((unsigned int *)this + 474) = 0;
    *((unsigned int *)this + 475) = 0;
    *((unsigned int *)this + 476) = 0;
    *((unsigned int *)this + 477) = 0;
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112a1*/
    *((unsigned int *)this + 483) = 10;
    *((unsigned int *)this + 482) = 0;
    *((unsigned int *)this + 478) = &vt_TypeList_ParticleSystemTypeClass_const;
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112c4*/
    *((unsigned int *)this + 490) = 10;
    *((unsigned int *)this + 489) = 0;
    *((unsigned int *)this + 485) = &vt_TypeList_ParticleSystemTypeClass_const;
    *((unsigned int *)this + 492) = 0;
    *((unsigned int *)this + 493) = 0;
    *((unsigned int *)this + 494) = 0;
    *((unsigned int *)this + 7920) = 0;
    *((unsigned int *)this + 496) = 0;
    *((unsigned int *)this + 497) = 0;
    *((unsigned int *)this + 498) = 0;
    *((unsigned int *)this + 499) = 0;
    *((unsigned int *)this + 500) = 0;
    *((unsigned int *)this + 501) = 0;
    *((unsigned int *)this + 502) = 0;
    *((unsigned int *)this + 503) = 0;
    *((unsigned int *)this + 504) = 0;
    *((unsigned int *)this + 505) = 0;
    *((unsigned int *)this + 506) = 0;
    *((unsigned int *)this + 507) = 0;
    *((unsigned int *)this + 508) = 0;
    *((unsigned int *)this + 509) = 0;
    *((unsigned int *)this + 510) = 0;
    *((unsigned int *)this + 511) = 0;
    *((unsigned int *)this + 512) = 0;
    *((unsigned int *)this + 8208) = 0;
    *((unsigned int *)this + 8212) = 0;
    *((unsigned int *)this + 8216) = 0;
    *((unsigned int *)this + 514) = 0;
    *((unsigned int *)this + 8256) = 0;
    *((unsigned int *)this + 10816) = 0;
    *((unsigned int *)this + 12848) = 0;
    *((unsigned int *)this + 12852) = 1;
    *((unsigned int *)this + 12856) = 1;
    *((unsigned int *)this + 12860) = 0;
    *((unsigned int *)this + 12864) = 0;
    *((unsigned int *)this + 12868) = 0;
    *((unsigned int *)this + 12872) = 0;
    *((unsigned int *)this + 12876) = 0;
    *((unsigned int *)this + 12880) = 0;
    *((unsigned int *)this + 12884) = 0;
    *((unsigned int *)this + 12888) = 0;
    *((unsigned int *)this + 12892) = 1;
    *((unsigned int *)this + 12896) = 0;
    *((unsigned int *)this + 12900) = 0;
    *((unsigned int *)this + 12904) = 0;
    *((unsigned int *)this + 12908) = 0;
    *((unsigned int *)this + 12912) = 0;
    *((unsigned int *)this + 12916) = 0;
    *((unsigned int *)this + 12920) = 0;
    *((unsigned int *)this + 12924) = 0;
    *((unsigned int *)this + 12928) = 0;
    *((unsigned int *)this + 12932) = 0;
    *((unsigned int *)this + 12936) = 0;
    *((unsigned int *)this + 809) = 2;
    *((unsigned int *)this + 810) = 1;
    *((unsigned int *)this + 811) = 1;
    *((unsigned int *)this + 812) = 1;
    *((unsigned int *)this + 13008) = 0;
    *((unsigned int *)this + 814) = 2;
    *((unsigned int *)this + 815) = 1;
    *((unsigned int *)this + 816) = 1;
    *((unsigned int *)this + 817) = 1;
    *((unsigned int *)this + 13088) = 0;
    *((unsigned int *)this + 13104) = 1;
    *((unsigned int *)this + 13108) = 0;
    *((unsigned int *)this + 13112) = 0;
    *((unsigned int *)this + 13116) = 0;
    *((unsigned int *)this + 13120) = 0;
    *((unsigned int *)this + 13124) = 0;
    *((unsigned int *)this + 13128) = 0;
    *((unsigned int *)this + 13132) = 0;
    *((unsigned int *)this + 13136) = 0;
    *((unsigned int *)this + 13140) = 0;
    *((unsigned int *)this + 822) = 0;
    *((unsigned int *)this + 835) = 0;
    *((unsigned int *)this + 836) = 0;
    *((unsigned int *)this + 13392) = 0;
    *((unsigned int *)this + 13396) = 0;
    *((unsigned int *)this + 838) = 0;
    *((unsigned int *)this + 839) = 1065353216;
    *((unsigned int *)this + 13440) = 0;
    *((unsigned int *)this + 13444) = 0;
    *((unsigned int *)this + 13448) = 0;
    *((unsigned int *)this + 13452) = 0;
    *((unsigned int *)this + 13456) = 0;
    *((unsigned int *)this + 13460) = 0;
    *((unsigned int *)this + 13464) = 0;
    *((unsigned int *)this + 13468) = 0;
    *((unsigned int *)this + 13472) = 0;
    *((unsigned int *)this + 13476) = 0;
    *((unsigned int *)this + 13480) = 0;
    *((unsigned int *)this + 13484) = 1;
    *((unsigned int *)this + 13488) = 0;
    *((unsigned int *)this + 13492) = 0;
    *((unsigned int *)this + 13500) = 0;
    *((unsigned int *)this + 13504) = 0;
    *((unsigned int *)this + 13508) = 0;
    *((unsigned int *)this + 13512) = 0;
    *((unsigned int *)this + 13516) = 1;
    *((unsigned int *)this + 13520) = 1;
    *((unsigned int *)this + 13532) = 0;
    *((unsigned int *)this + 13540) = 0;
    *((unsigned int *)this + 13544) = 1;
    *((unsigned int *)this + 13552) = 0;
    *((unsigned int *)this + 13556) = 0;
    *((unsigned int *)this + 13560) = 0;
    *((unsigned int *)this + 848) = 0;
    *((unsigned int *)this + 849) = 0;
    *((unsigned int *)this + 850) = 0;
    *((unsigned int *)this + 851) = 0;
    *((unsigned int *)this + 852) = -1;
    *((unsigned int *)this + 13648) = 0;
    *((unsigned int *)this + 854) = 0;
    *((unsigned int *)this + 855) = 0;
    *((unsigned int *)this + 856) = 0;
    *((unsigned int *)this + 857) = 0;
    *((unsigned int *)this + 13728) = 0;
    *((unsigned int *)this + 13732) = 0;
    *((unsigned int *)this + 13736) = 0;
    *((unsigned int *)this + 859) = 0;
    *((unsigned int *)this + 860) = 4;
    *((unsigned int *)this + 861) = 14;
    *((unsigned int *)this + 862) = 1084227584;
    *((unsigned int *)this + 863) = 1084227584;
    *((unsigned int *)this + 864) = 500;
    *((unsigned int *)this + 865) = 0x40000000;
    *((unsigned int *)this + 866) = 1041865114;
    *((unsigned int *)this + 13872) = 0;
    *((unsigned int *)this + 868) = 40;
    *((unsigned int *)this + 13904) = 0;
    *((unsigned int *)this + 13908) = 0;
    *((unsigned int *)this + 13920) = 0;
    *((unsigned int *)this + 13924) = 1;
    *((unsigned int *)this + 13928) = 1;
    *((unsigned int *)this + 13932) = 0;
    *((unsigned int *)this + 13936) = 0;
    *((unsigned int *)this + 13940) = 0;
    *((unsigned int *)this + 872) = -1;
    *((unsigned int *)this + 873) = -1;
  this->u32_DA8 = (unsigned int *)(-1);
    *((unsigned int *)this + 14000) = 0;
    *((unsigned int *)this + 14064) = 0;
    *((unsigned int *)this + 14068) = 1;
    *((unsigned int *)this + 14072) = 0;
    *((unsigned int *)this + 14076) = 0;
    *((unsigned int *)this + 880) = 10;
    *((unsigned int *)this + 881) = 5;
    *((unsigned int *)this + 882) = 10;
    *((unsigned int *)this + 883) = 0;
    *((unsigned int *)this + 892) = 0;
  *(unsigned int *)this = (void*)&TechnoTypeClass_vftable; /*0x711686*/
    *((unsigned int *)this + 1) = &TechnoTypeClass::`vftable';
    *((unsigned int *)this + 2) = &TechnoTypeClass::`vftable';
    *((unsigned int *)this + 3) = &vt_TechnoTypeClass;
    *((unsigned int *)this + 14144) = 0;
    *((unsigned int *)this + 2256) = 1;
    (*(void (**)(char *))(*((unsigned int *)this + 197) + 12))((char *)this + 3152);
    (*(void (**)(char *))(*((unsigned int *)this + 369) + 12))((char *)this + 5904);
    (*(void (**)(char *))(*((unsigned int *)this + 204) + 12))((char *)this + 3264);
    (*(void (**)(char *))(*((unsigned int *)this + 250) + 12))((char *)this + 4000);
  v4 = &this->q8A8; /*0x7116e6*/
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
  v7 = &this->qAA4; /*0x711711*/
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
  v10 = &this->u32_85C; /*0x71173c*/
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
    *((unsigned int *)this + 876) = 0;
  v13 = this + 3316; /*0x711765*/
    *((unsigned int *)this + 877) = 0;
  v14 = 6; /*0x71176e*/
    *((unsigned int *)this + 878) = 0;
  do /*0x71177f*/
  {
    *(v13 - 6) = 0; /*0x711776*/
    *v13++ = 0; /*0x711779*/
    --v14; /*0x71177e*/
  }
  while ( v14 ); /*0x71177f*/
  memset(&this->TurretWeapon, 0xFFu, 0x48u); /*0x71178e*/
  if ( dword_B0F680 < dword_B0F678 /*0x7117c3*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F684 + dword_B0F678,
         0) )
  {
    v15 = (gamemd::TechnoTypeClass *)((unsigned int)(dword_B0F680++));
    *((unsigned int *)(unsigned int)(dword_B0F674)+ v15) = this; /*0x7117df*/
  }
  if ( dword_A8EB10 < dword_A8EB08 /*0x711816*/
    || (byte_A8EB0D || !dword_A8EB08)
    && dword_A8EB14 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(stru_A8EB00 + 8))(
         &stru_A8EB00,
         dword_A8EB14 + dword_A8EB08,
         0) )
  {
    v16 = (gamemd::TechnoTypeClass *)((unsigned int)(dword_A8EB10++));
    *((unsigned int *)(unsigned int)(dword_A8EB04)+ v16) = this; /*0x711832*/
  }
  return this; /*0x711837*/
}
} // namespace gamemd
// 0x711840
namespace gamemd {
void TechnoTypeClass::Construct(void* a1)
{
  int v3; // eax
  int v4; // ecx

  ((ObjectTypeClass *)(aP1))->Construct(); /*0x71184b*/
  TechnoTypeClass::Constructor_0(aP1); /*0x711859*/
    *((unsigned int *)this + 3152) = &vt_TypeList_VoxelAnimTypeClass_const;
  IntDynamicVector::Construct((unsigned int *)(&this->q1446), aP1); /*0x71186d*/
    *((unsigned int *)this + 3264) = &vt_TypeList_int;
    *((unsigned int *)this + 3840) = 0;
  TechnoTypeClass::Constructor_1(aP1); /*0x711889*/
    *((unsigned int *)this + 4000) = &vt_TypeList_BuildingTypeClass_const;
  IntDynamicVector::Construct((unsigned int *)(&this->u32_1A04), aP1); /*0x71189e*/
    *((unsigned int *)this + 4176) = &vt_TypeList_int;
  IntDynamicVector::Construct((unsigned int *)(&this->u32_1AC2), aP1); /*0x7118b3*/
    *((unsigned int *)this + 4288) = &vt_TypeList_int;
  IntDynamicVector::Construct((unsigned int *)(&this->u32_1B80), aP1); /*0x7118c8*/
    *((unsigned int *)this + 4400) = &vt_TypeList_int;
  IntDynamicVector::Construct((unsigned int *)(&this->u32_1C08), aP1); /*0x7118dd*/
    *((unsigned int *)this + 4512) = &vt_TypeList_int;
  IntDynamicVector::Construct((unsigned int *)(&this->u32_1CC6), aP1); /*0x7118f2*/
    *((unsigned int *)this + 4624) = &vt_TypeList_int;
  IntDynamicVector::Construct((unsigned int *)(&this->u32_1D84), aP1); /*0x711907*/
    *((unsigned int *)this + 4736) = &vt_TypeList_int;
  IntDynamicVector::Construct((unsigned int *)(&this->u32_1E42), aP1); /*0x71191c*/
    *((unsigned int *)this + 4848) = &vt_TypeList_int;
    IntDynamicVector::Construct((unsigned int *)((char *)this + 4960), aP1);
    *((unsigned int *)this + 4960) = &vt_TypeList_int;
    IntDynamicVector::Construct((unsigned int *)((char *)this + 5072), aP1);
    *((unsigned int *)this + 5072) = &vt_TypeList_int;
    IntDynamicVector::Construct((unsigned int *)((char *)this + 5184), aP1);
    *((unsigned int *)this + 5184) = &vt_TypeList_int;
  ObjectTypeClass::CheckFlag(aP1); /*0x711970*/
    *((unsigned int *)this + 5904) = &vt_TypeList_AnimTypeClass_const;
    IntDynamicVector::Construct((unsigned int *)((char *)this + 6368), aP1);
    *((unsigned int *)this + 6368) = &vt_TypeList_int;
  IntDynamicVector::Construct((unsigned int *)(&this->q2880), aP1); /*0x71199a*/
    *((unsigned int *)this + 6480) = &vt_TypeList_int;
    *((unsigned char *)this + 7000) = 0;
    *((unsigned char *)this + 7124) = 0;
  ObjectTypeClass::CheckFlag(aP1); /*0x7119bb*/
    *((unsigned int *)this + 7344) = &vt_TypeList_AnimTypeClass_const;
  ObjectTypeClass::CheckFlag(aP1); /*0x7119d0*/
    *((unsigned int *)this + 7456) = &vt_TypeList_AnimTypeClass_const;
  TypeList::ParticleConstructor(0, 0); /*0x7119e6*/
    *((unsigned int *)this + 7648) = &vt_TypeList_ParticleSystemTypeClass_const;
  TypeList::ParticleConstructor(0, 0); /*0x7119fb*/
    *((unsigned int *)this + 7760) = &vt_TypeList_ParticleSystemTypeClass_const;
    *((unsigned int *)this + 12944) = 2;
    *((unsigned int *)this + 12960) = 1;
    *((unsigned int *)this + 12976) = 1;
    *((unsigned int *)this + 12992) = 1;
    *((unsigned char *)this + 13008) = 0;
    *((unsigned int *)this + 13024) = 2;
    *((unsigned int *)this + 13040) = 1;
    *((unsigned int *)this + 13056) = 1;
    *((unsigned int *)this + 13072) = 1;
    *((unsigned char *)this + 13088) = 0;
  *(unsigned int *)this = (void*)&TechnoTypeClass_vftable; /*0x711a4c*/
    *((unsigned int *)this + 16) = &TechnoTypeClass::`vftable';
    *((unsigned int *)this + 32) = &TechnoTypeClass::`vftable';
    *((unsigned int *)this + 48) = &vt_TechnoTypeClass;
  v3 = dword_A8EB10; /*0x711a67*/
  v4 = 0; /*0x711a6c*/
  if ( dword_A8EB10 <= 0 ) /*0x711a70*/
  {
  LABEL_5:
    if ( dword_A8EB10 >= dword_A8EB08 ) /*0x711a8c*/
    {
      if ( !byte_A8EB0D && dword_A8EB08 /*0x711ab1*/
        || dword_A8EB14 <= 0
        || !(*(uint8_t (**)(int *, int, unsigned int))(stru_A8EB00 + 8))(
              &stru_A8EB00,
              dword_A8EB14 + dword_A8EB08,
              0) )
      {
        return this; /*0x711ab6*/
      }
      v3 = dword_A8EB10; /*0x711ab8*/
    }
    dword_A8EB10 = v3 + 1; /*0x711ac6*/
    *((unsigned int *)dword_A8EB04 + v3) = this; /*0x711acb*/
    return this; /*0x711acb*/
  }
  dword_A8EB04 = dword_A8EB04; /*0x711a72*/
  while ( *dword_A8EB04 != this ) /*0x711a7a*/
  {
    ++v4; /*0x711a7c*/
    ++dword_A8EB04; /*0x711a7d*/
    if ( v4 >= dword_A8EB10 ) /*0x711a82*/
      goto LABEL_5; /*0x711a82*/
  }
  return this; /*0x711ad0*/
}
} // namespace gamemd
// 0x711AE0
namespace gamemd {
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

    v2 = *((unsigned char *)this + 7120);
  *(unsigned int *)this = (void*)&TechnoTypeClass_vftable; /*0x711aed*/
    *((unsigned int *)this + 16) = &TechnoTypeClass::`vftable';
    *((unsigned int *)this + 32) = &TechnoTypeClass::`vftable';
    *((unsigned int *)this + 48) = &vt_TechnoTypeClass;
    if ( v2 && *((unsigned int *)this + 7104) )
  {
        OperatorDelete(*((unsigned int *)this + 7104));
        *((unsigned int *)this + 7104) = 0;
        *((unsigned char *)this + 7120) = 0;
  }
    if ( *((unsigned char *)this + 7248) && *((unsigned int *)this + 7232) )
  {
        OperatorDelete(*((unsigned int *)this + 7232));
        *((unsigned int *)this + 7232) = 0;
        *((unsigned char *)this + 7248) = 0;
  }
  v3 = (*(int (**)(int *, int *))(dword_B0F670 + 16))(&dword_B0F670, &this); /*0x711b66*/
  if ( v3 != -1 ) /*0x711b6c*/
    DynamicVector::RemoveItem(&dword_B0F670, v3); /*0x711b74*/
  v4 = (*(int (**)(int *, int *))(stru_A8EB00 + 16))(&stru_A8EB00, &this); /*0x711b8d*/
  if ( v4 != -1 ) /*0x711b93*/
    TechnoTypeClass::RemoveItem(&stru_A8EB00, v4); /*0x711b9b*/
    *((unsigned int *)this + 7760) = &vt_VectorClass_ParticleSystemTypeClass_const;
    VectorClass::Cleanup((char *)this + 7760);
    *((unsigned int *)this + 7648) = &vt_VectorClass_ParticleSystemTypeClass_const;
    VectorClass::Cleanup((char *)this + 7648);
    *((unsigned int *)this + 7456) = &vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((char *)this + 7456);
    *((unsigned int *)this + 7344) = &vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((char *)this + 7344);
    *((unsigned int *)this + 6480) = &vt_VectorClass_int;
  VectorClass::Destroy(&this->q2880); /*0x711bf2*/
    *((unsigned int *)this + 6368) = &vt_VectorClass_int;
    VectorClass::Destroy((char *)this + 6368);
    *((unsigned int *)this + 5904) = &vt_VectorClass_AnimTypeClass_const;
  DynamicVectorClass::Destroy_Alt(&this->u32_24C6); /*0x711c10*/
    *((unsigned int *)this + 5184) = &vt_VectorClass_int;
    VectorClass::Destroy((char *)this + 5184);
    *((unsigned int *)this + 5072) = &vt_VectorClass_int;
    VectorClass::Destroy((char *)this + 5072);
    v5 = *((unsigned int *)this + 4976);
    *((unsigned int *)this + 4960) = &vt_VectorClass_int;
    if ( v5 && *((unsigned char *)this + 5012) )
  {
    RA2_OPDEL(v5); /*0x711c48*/
        *((unsigned int *)this + 4976) = 0;
  }
    *((unsigned char *)this + 5012) = 0;
    *((unsigned int *)this + 4992) = 0;
    v6 = *((unsigned int *)this + 4864);
    *((unsigned int *)this + 4848) = &vt_VectorClass_int;
    if ( v6 && *((unsigned char *)this + 4900) )
  {
    RA2_OPDEL(v6); /*0x711c7b*/
        *((unsigned int *)this + 4864) = 0;
  }
    *((unsigned char *)this + 4900) = 0;
    *((unsigned int *)this + 4880) = 0;
    v7 = *((unsigned int *)this + 4752);
    *((unsigned int *)this + 4736) = &vt_VectorClass_int;
    if ( v7 && *((unsigned char *)this + 4788) )
  {
    RA2_OPDEL(v7); /*0x711cae*/
        *((unsigned int *)this + 4752) = 0;
  }
    *((unsigned char *)this + 4788) = 0;
    *((unsigned int *)this + 4768) = 0;
    v8 = *((unsigned int *)this + 4640);
    *((unsigned int *)this + 4624) = &vt_VectorClass_int;
    if ( v8 && *((unsigned char *)this + 4676) )
  {
    RA2_OPDEL(v8); /*0x711ce1*/
        *((unsigned int *)this + 4640) = 0;
  }
    *((unsigned char *)this + 4676) = 0;
    *((unsigned int *)this + 4656) = 0;
    v9 = *((unsigned int *)this + 4528);
    *((unsigned int *)this + 4512) = &vt_VectorClass_int;
    if ( v9 && *((unsigned char *)this + 4564) )
  {
    RA2_OPDEL(v9); /*0x711d14*/
        *((unsigned int *)this + 4528) = 0;
  }
    *((unsigned char *)this + 4564) = 0;
    *((unsigned int *)this + 4544) = 0;
    v10 = *((unsigned int *)this + 4416);
    *((unsigned int *)this + 4400) = &vt_VectorClass_int;
    if ( v10 && *((unsigned char *)this + 4452) )
  {
    RA2_OPDEL(v10); /*0x711d47*/
        *((unsigned int *)this + 4416) = 0;
  }
    *((unsigned char *)this + 4452) = 0;
    *((unsigned int *)this + 4432) = 0;
    v11 = *((unsigned int *)this + 4304);
    *((unsigned int *)this + 4288) = &vt_VectorClass_int;
    if ( v11 && *((unsigned char *)this + 4340) )
  {
    RA2_OPDEL(v11); /*0x711d7a*/
        *((unsigned int *)this + 4304) = 0;
  }
    *((unsigned char *)this + 4340) = 0;
    *((unsigned int *)this + 4320) = 0;
    v12 = *((unsigned int *)this + 4192);
    *((unsigned int *)this + 4176) = &vt_VectorClass_int;
    if ( v12 && *((unsigned char *)this + 4228) )
  {
    RA2_OPDEL(v12); /*0x711dad*/
        *((unsigned int *)this + 4192) = 0;
  }
    *((unsigned char *)this + 4228) = 0;
    *((unsigned int *)this + 4208) = 0;
    v13 = *((unsigned int *)this + 4016);
    *((unsigned int *)this + 4000) = &vt_VectorClass_BuildingTypeClass_const;
    if ( v13 && *((unsigned char *)this + 4052) )
  {
    RA2_OPDEL(v13); /*0x711de4*/
        *((unsigned int *)this + 4016) = 0;
  }
    *((unsigned char *)this + 4052) = 0;
    *((unsigned int *)this + 4032) = 0;
    v14 = *((unsigned int *)this + 3280);
    *((unsigned int *)this + 3264) = &vt_VectorClass_int;
    if ( v14 && *((unsigned char *)this + 3316) )
  {
    RA2_OPDEL(v14); /*0x711e18*/
        *((unsigned int *)this + 3280) = 0;
  }
    *((unsigned char *)this + 3316) = 0;
    *((unsigned int *)this + 3296) = 0;
    v15 = *((unsigned int *)this + 3168);
    *((unsigned int *)this + 3152) = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( v15 && *((unsigned char *)this + 3204) )
  {
    RA2_OPDEL(v15); /*0x711e4f*/
        *((unsigned int *)this + 3168) = 0;
  }
    *((unsigned char *)this + 3204) = 0;
    *((unsigned int *)this + 3184) = 0;
// 0x5f7400
  return ObjectTypeClass::Destruct(); /*0x711e70*/
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
        return (*(int (**)(TechnoTypeClass *))(*(unsigned int *)this->vtable0 + 172))(this);
  v5 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, this); /*0x711f17*/
  ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711f27*/
    v6 = (float *)(*(int (**)(TechnoTypeClass *))(*(unsigned int *)this->vtable0 + 172))(this);
  IDA_LOWORD(result) = Math::RoundToInt((double)(int)v6 * ThreatMultiplier * v5); /*0x711f41*/
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
  if ( IDA_LOBYTE(a3) ) /*0x711f7c*/
    v9 = 1.0; /*0x711f7e*/
  if ( a2 ) /*0x711f8c*/
  {
    v12 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, this); /*0x711f9a*/
    ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711fac*/
        if ( *((unsigned int *)this + 389) )
    {
            return Math::RoundToInt((double)*((int *)this + 389) * v10);
    }
    else
    {
            v9 = (#375 *)(*(int (**)(TechnoTypeClass *))(*(unsigned int *)this->vtable0 + 172))(this);
      IDA_LOWORD(v6) = Math::RoundToInt((double)(int)v11 * ThreatMultiplier * v12); /*0x711fe7*/
      v7 = v6; /*0x711fec*/
      v13 = v6; /*0x711ff0*/
      if ( (uint8_t)House::IsCurrentPlayer((House *)a2) ) /*0x711ff4*/
      {
        IDA_LOWORD(v8) = Math::RoundToInt((double)v13 * v9); /*0x712005*/
        return v8; /*0x71200a*/
      }
      return v7; /*0x71200c*/
    }
  }
  else
  {
        v11 = (*(int (**)(TechnoTypeClass *))(*(unsigned int *)this->vtable0 + 172))(this);
    IDA_LOWORD(result) = Math::RoundToInt((double)v14 * v9); /*0x71202c*/
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

  v3 = (TypeList *)&aP0->?[772]; /*0x716307*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x71630f*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x716320*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x71632f*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x71633e*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x71634d*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x71635c*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x71636b*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x71637a*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x716389*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x716398*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x7163a7*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x7163b6*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x7163c5*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x7163d4*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x7163e3*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x7163f2*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x716401*/
  (*(void (**)(unsigned char *))(*(unsigned int *)&aP0->vtable4 + 12))(&aP0->vtable4); /*0x716410*/
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)aP0, aP1); /*0x71641c*/
  if ( result >= 0 ) /*0x716423*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->?[800]); /*0x716435*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->?[804]); /*0x716446*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->?[808]); /*0x716457*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->?[1664]); /*0x716468*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->?[1680]); /*0x716479*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0->JumpjetAccel); /*0x71648a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0->SuppressionThreshold); /*0x71649b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->?[1]); /*0x7164ac*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->?[1344]); /*0x7164bd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->?[1348]); /*0x7164ce*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->?[1492]); /*0x7164df*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->?[1496]); /*0x7164f0*/
    if ( aP0 != (TechnoTypeClass *)-1000 ) /*0x7164f7*/
      TypeList::BuildingTypeConstructor(v3); /*0x7164fb*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71650c*/
    for ( i = 0; i < v36; ++i ) /*0x71651d*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71652b*/
      DynamicVector::Add_Alt3((DynamicVector *)v3, &v37); /*0x716535*/
    }
    if ( aP0 != (TechnoTypeClass *)-788 ) /*0x71654d*/
      TypeList::VoxelAnimConstructor((TypeList *)&aP0->q224); /*0x716551*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716562*/
    for ( j = 0; j < v36; ++j ) /*0x71656d*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71657b*/
      DynamicVector::Add2((DynamicVector *)&aP0->?[560], &v37); /*0x716585*/
    }
    if ( aP0 != (TechnoTypeClass *)-1476 ) /*0x716599*/
      AnimTypeList::Constructor((AnimTypeList *)&aP0->q224); /*0x71659d*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7165ae*/
    for ( k = 0; k < v36; ++k ) /*0x7165b9*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7165c7*/
      DynamicVector::Add_Alt4((DynamicVector *)&aP0->?[1248], &v37); /*0x7165d1*/
    }
    if ( aP0 != (TechnoTypeClass *)-1044 ) /*0x7165e5*/
      TypeList::Construct((TypeList *)&aP0->q224); /*0x7165e9*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7165fa*/
    for ( m = 0; m < v36; ++m ) /*0x716605*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716613*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[816], &v37); /*0x71661d*/
    }
    if ( aP0 != (TechnoTypeClass *)-1072 ) /*0x716631*/
      TypeList::Construct((TypeList *)&aP0->q224); /*0x716635*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716646*/
    for ( n = 0; n < v36; ++n ) /*0x716651*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71665f*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[844], &v37); /*0x716669*/
    }
    if ( aP0 != (TechnoTypeClass *)-1100 ) /*0x71667d*/
      TypeList::Construct((TypeList *)&aP0->q224); /*0x716681*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716692*/
    for ( ii = 0; ii < v36; ++ii ) /*0x71669d*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7166ab*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[872], &v37); /*0x7166b5*/
    }
    if ( aP0 != (TechnoTypeClass *)-1128 ) /*0x7166c9*/
      TypeList::Construct((TypeList *)&aP0->q224); /*0x7166cd*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7166de*/
    for ( jj = 0; jj < v36; ++jj ) /*0x7166e9*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7166f7*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[900], &v37); /*0x716701*/
    }
    if ( aP0 != (TechnoTypeClass *)-1156 ) /*0x716715*/
      TypeList::Construct((TypeList *)&aP0->q224); /*0x716719*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71672a*/
    for ( kk = 0; kk < v36; ++kk ) /*0x716735*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716743*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[928], &v37); /*0x71674d*/
    }
    if ( aP0 != (TechnoTypeClass *)-1184 ) /*0x716761*/
      TypeList::Construct((TypeList *)&aP0->q224); /*0x716765*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716776*/
    for ( mm = 0; mm < v36; ++mm ) /*0x716781*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71678f*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[956], &v37); /*0x716799*/
    }
    if ( aP0 != (TechnoTypeClass *)-1212 ) /*0x7167ad*/
      TypeList::Construct((TypeList *)&aP0->q224); /*0x7167b1*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7167c2*/
    for ( nn = 0; nn < v36; ++nn ) /*0x7167cd*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7167db*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[984], &v37); /*0x7167e5*/
    }
    if ( aP0 != (TechnoTypeClass *)-1240 ) /*0x7167f9*/
      TypeList::Construct((TypeList *)&aP0->?[1012]); /*0x7167fd*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71680e*/
    for ( i1 = 0; i1 < v36; ++i1 ) /*0x716819*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716827*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[1012], &v37); /*0x716831*/
    }
    if ( aP0 != (TechnoTypeClass *)-1268 ) /*0x716845*/
      TypeList::Construct((TypeList *)&aP0->?[1040]); /*0x716849*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71685a*/
    for ( i2 = 0; i2 < v36; ++i2 ) /*0x716865*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716873*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[1040], &v37); /*0x71687d*/
    }
    if ( aP0 != (TechnoTypeClass *)-1296 ) /*0x716891*/
      TypeList::Construct((TypeList *)&aP0->?[1068]); /*0x716895*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7168a6*/
    for ( i3 = 0; i3 < v36; ++i3 ) /*0x7168b1*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7168bf*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[1068], &v37); /*0x7168c9*/
    }
    if ( aP0 != (TechnoTypeClass *)-1836 ) /*0x7168dd*/
      AnimTypeList::Constructor((AnimTypeList *)&aP0->?[1608]); /*0x7168e1*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7168f2*/
    for ( i4 = 0; i4 < v36; ++i4 ) /*0x7168fd*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71690b*/
      DynamicVector::Add_Alt4((DynamicVector *)&aP0->?[1608], &v37); /*0x716915*/
    }
    if ( aP0 != (TechnoTypeClass *)-1864 ) /*0x716929*/
      AnimTypeList::Constructor((AnimTypeList *)&aP0->?[1636]); /*0x71692d*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71693e*/
    for ( i5 = 0; i5 < v36; ++i5 ) /*0x716949*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716957*/
      DynamicVector::Add_Alt4((DynamicVector *)&aP0->?[1636], &v37); /*0x716961*/
    }
    if ( aP0 != (TechnoTypeClass *)-816 ) /*0x716975*/
      TypeList::Construct((TypeList *)&aP0->?[588]); /*0x716979*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71698a*/
    for ( i6 = 0; i6 < v36; ++i6 ) /*0x716995*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7169a3*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[588], &v37); /*0x7169ad*/
    }
    if ( aP0 != (TechnoTypeClass *)-1592 ) /*0x7169c1*/
      TypeList::Construct((TypeList *)&aP0->?[1364]); /*0x7169c5*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7169d6*/
    for ( i7 = 0; i7 < v36; ++i7 ) /*0x7169e1*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7169ef*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[1364], &v37); /*0x7169f9*/
    }
    if ( aP0 != (TechnoTypeClass *)-1620 ) /*0x716a0d*/
      TypeList::Construct((TypeList *)&aP0->?[1392]); /*0x716a11*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716a22*/
    for ( i8 = 0; i8 < v36; ++i8 ) /*0x716a2d*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716a3b*/
      DynamicVector::Add_Alt((DynamicVector *)&aP0->?[1392], &v37); /*0x716a45*/
    }
    if ( aP0 != (TechnoTypeClass *)-1912 ) /*0x716a59*/
      TechnoTypeClass::Constructor((TechnoTypeClass *)&aP0->?[1684]); /*0x716a5d*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716a6e*/
    for ( i9 = 0; i9 < v36; ++i9 ) /*0x716a79*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716a87*/
      TypeList::PushBack((TypeList *)&aP0->?[1684], &v37); /*0x716a91*/
    }
    if ( aP0 != (TechnoTypeClass *)-1940 ) /*0x716aa5*/
      TechnoTypeClass::Constructor((TechnoTypeClass *)&aP0->?[1712]); /*0x716aa9*/
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716aba*/
    for ( i10 = 0; i10 < v36; ++i10 ) /*0x716ac5*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716ad3*/
      TypeList::PushBack((TypeList *)&aP0->?[1712], &v37); /*0x716add*/
    }
    for ( i11 = 0; i11 < *(unsigned int *)&aP0->?[788]; ++i11 ) /*0x716af3*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&aP0->?[776] + 4 * i11)); /*0x716b04*/
    for ( i12 = 0; i12 < *(unsigned int *)&aP0->?[1624]; ++i12 ) /*0x716b1e*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&aP0->?[1612] + 4 * i12)); /*0x716b2f*/
    for ( i13 = 0; i13 < *(unsigned int *)&aP0->?[1652]; ++i13 ) /*0x716b49*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&aP0->?[1640] + 4 * i13)); /*0x716b5a*/
    for ( i14 = 0; i14 < *(unsigned int *)&aP0->?[576]; ++i14 ) /*0x716b74*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&aP0->?[564] + 4 * i14)); /*0x716b85*/
    for ( i15 = 0; i15 < *(unsigned int *)&aP0->?[1264]; ++i15 ) /*0x716b9f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&aP0->?[1252] + 4 * i15)); /*0x716bb0*/
    v29 = (int *)&aP0->?[1972]; /*0x716bc0*/
    v30 = 18; /*0x716bc6*/
    do /*0x716bda*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v29); /*0x716bd1*/
      v29 += 7; /*0x716bd6*/
      --v30; /*0x716bd9*/
    }
    while ( v30 ); /*0x716bda*/
    v31 = (int *)&aP0->?[2480]; /*0x716bdc*/
    v32 = 18; /*0x716be2*/
    do /*0x716bf6*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v31); /*0x716bed*/
      v31 += 7; /*0x716bf2*/
      --v32; /*0x716bf5*/
    }
    while ( v32 ); /*0x716bf6*/
    for ( i16 = 0; i16 < *(unsigned int *)&aP0->?[1700]; ++i16 ) /*0x716c04*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&aP0->?[1688] + 4 * i16)); /*0x716c15*/
    for ( i17 = 0; i17 < *(unsigned int *)&aP0->?[1728]; ++i17 ) /*0x716c2f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&aP0->?[1716] + 4 * i17)); /*0x716c40*/
    _makepath(Buffer, 0, 0, &aP0->?[276], Ext); /*0x716c66*/
    aP0->ObjectTypeClass[41] = (int)SearchMIXFile(Buffer, 0); /*0x716c96*/
    INIClass::GetString( /*0x716c9c*/
      (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
      &aP0->?[276],
      (uint8_t *)&g_INI_Key_TRUCKA.?,
      &g_INI_Key_TRUCKA.__pad_1714[80],
      Filename,
      256);
    if ( !_strcmpi(Filename, &g_INI_Key_TRUCKA.__pad_1714[80]) ) /*0x716cab*/
      INIClass::GetString( /*0x716cd4*/
        (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
        (uint8_t *)&aP0->ObjectTypeClass[9],
        (uint8_t *)&g_INI_Key_TRUCKA.?,
        &g_INI_Key_TRUCKA.__pad_1714[80],
        Filename,
        256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716ced*/
    *(unsigned int *)&aP0->?[1548] = 0; /*0x716cfe*/
    v35 = SearchMIXFile(Buffer, 0); /*0x716d04*/
    *(unsigned int *)&aP0->?[1548] = v35; /*0x716d0b*/
    if ( !v35 ) /*0x716d11*/
      *(unsigned int *)&aP0->?[1548] = SearchMIXFile(&(unsigned int *)((char *)&stru_820320 + 143), 0); /*0x716d1f*/
    INIClass::GetString( /*0x716d3f*/
      (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
      &aP0->?[276],
      (uint8_t *)&g_INI_Key_TRUCKA.?,
      &g_INI_DefaultBuffer,
      Filename,
      256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716d58*/
    *(unsigned int *)&aP0->?[1580] = 0; /*0x716d69*/
    *(unsigned int *)&aP0->?[1580] = SearchMIXFile(Buffer, 0); /*0x716d8d*/
    INIClass::GetString( /*0x716d93*/
      (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
      &aP0->?[276],
      (uint8_t *)g_INI_Key_Palette,
      &g_INI_DefaultBuffer,
      (char *)&aP0->? + 1,
      32);
    if ( IDA_BYTE1(aP0->?) ) /*0x716d98*/
      *(int *)((char *)&aP0->? + 1) = FileExtension::MapHandler((const char *)&aP0->? + 1); /*0x716da4*/
    return 0; /*0x716daa*/
  }
  return result; /*0x716dac*/
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

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, (int)a2, (int)a3); /*0x716dd1*/
  if ( result >= 0 ) /*0x716dd8*/
  {
    v7 = *a2; /*0x716de4*/
    a3 = *(int **)&this->?[788]; /*0x716df1*/
    (*(void (__stdcall **)(unsigned int *, int **, int, unsigned int, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x716df5*/
    for ( i = 0; i < a4; ++i ) /*0x716e00*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&this->uniqueId + 4 * i, 4, 0); /*0x716e13*/
    v9 = *a2; /*0x716e23*/
    a4 = *(unsigned int *)&this->nextArrayIndex; /*0x716e2f*/
    (*(void (__stdcall **)(unsigned int *, int *, int, unsigned int))(v9 + 16))(a2, &a4, 4, 0); /*0x716e33*/
    for ( j = 0; j < a4; ++j ) /*0x716e3e*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&this->uniqueId + 4 * j, 4, 0); /*0x716e51*/
    v11 = *a2; /*0x716e61*/
    a4 = *(unsigned int *)&this->nextArrayIndex; /*0x716e6d*/
    (*(void (__stdcall **)(unsigned int *, int *, int, unsigned int))(v11 + 16))(a2, &a4, 4, 0); /*0x716e71*/
    for ( k = 0; k < a4; ++k ) /*0x716e7c*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&this->uniqueId + 4 * k, 4, 0); /*0x716e8f*/
    v13 = *a2; /*0x716e9f*/
    a4 = *(unsigned int *)&this->nextArrayIndex; /*0x716eab*/
    (*(void (__stdcall **)(unsigned int *, int *, int, unsigned int))(v13 + 16))(a2, &a4, 4, 0); /*0x716eaf*/
    for ( m = 0; m < a4; ++m ) /*0x716eba*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&this->uniqueId + 4 * m, 4, 0); /*0x716ecd*/
    v15 = *a2; /*0x716edd*/
    a4 = *(unsigned int *)&this->nextArrayIndex; /*0x716ee9*/
    (*(void (__stdcall **)(unsigned int *, int *, int, unsigned int))(v15 + 16))(a2, &a4, 4, 0); /*0x716eed*/
    for ( n = 0; n < a4; ++n ) /*0x716ef8*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&this->uniqueId + 4 * n, 4, 0); /*0x716f0b*/
    v17 = *a2; /*0x716f1b*/
    a4 = *(unsigned int *)&this->nextArrayIndex; /*0x716f27*/
    (*(void (__stdcall **)(unsigned int *, int *, int, unsigned int))(v17 + 16))(a2, &a4, 4, 0); /*0x716f2b*/
    for ( ii = 0; ii < a4; ++ii ) /*0x716f36*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&this->uniqueId + 4 * ii, 4, 0); /*0x716f49*/
    v19 = *a2; /*0x716f59*/
    a4 = *(unsigned int *)&this->nextArrayIndex; /*0x716f65*/
    (*(void (__stdcall **)(unsigned int *, int *, int, unsigned int))(v19 + 16))(a2, &a4, 4, 0); /*0x716f69*/
    for ( jj = 0; jj < a4; ++jj ) /*0x716f74*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&this->uniqueId + 4 * jj, 4, 0); /*0x716f87*/
    v21 = *a2; /*0x716f97*/
    a4 = *(unsigned int *)&this->nextArrayIndex; /*0x716fa3*/
    (*(void (__stdcall **)(unsigned int *, int *, int, unsigned int))(v21 + 16))(a2, &a4, 4, 0); /*0x716fa7*/
    for ( kk = 0; kk < a4; ++kk ) /*0x716fb2*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&this->uniqueId + 4 * kk, 4, 0); /*0x716fc5*/
    v23 = *a2; /*0x716fd5*/
    a4 = *(unsigned int *)&this->nextArrayIndex; /*0x716fe1*/
    (*(void (__stdcall **)(unsigned int *, int *, int))(v23 + 16))(a2, &a4, 4); /*0x716fe5*/
    for ( mm = 0; mm < (int)a3; ++mm ) /*0x716ff0*/
      (*(void (__stdcall **)(unsigned int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&this->uniqueId + 4 * mm, 4, 0); /*0x717003*/
    DynamicVector::Read((DynamicVector *)&this->?[984], a2); /*0x717014*/
    DynamicVector::Read((DynamicVector *)&this->?[1012], a2); /*0x717020*/
    DynamicVector::Read((DynamicVector *)&this->?[1040], a2); /*0x71702c*/
    DynamicVector::Read((DynamicVector *)&this->?[1068], a2); /*0x717038*/
    Stream::WriteIntArray((Stream *)&this->?[1608], a2); /*0x717044*/
    Stream::WriteIntArray((Stream *)&this->?[1636], a2); /*0x717050*/
    DynamicVector::Read((DynamicVector *)&this->?[588], a2); /*0x71705c*/
    DynamicVector::Read((DynamicVector *)&this->?[1364], a2); /*0x717068*/
    DynamicVector::Read((DynamicVector *)&this->?[1392], a2); /*0x717074*/
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)&this->?[1684], a2); /*0x717080*/
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)&this->DestroyParticleSystems, a2); /*0x71708c*/
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
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon();
}
}
// 0x711E90
bool TechnoTypeClass::CanAttackMove_IgnoreWeapon()
{
  return *(unsigned int *)&this->?[1972] && !this->?[1508]; /*0x711ea6*/
}
// 0x711EE0
double TechnoTypeClass::ComputeBuildTime()
{
  double result; // st7

    result = (double)*((unsigned int *)this + 1552) * *((double *)MEMORY[0x8871E0] + 745) * 0.9;
  Math::RoundToInt(result); /*0x711ef7*/
  return result;
}
// 0x7179A0
TechnoTypeClass * TechnoTypeClass::ddtor(char a2)
{
  TechnoTypeClass::DTOR(); /*0x7179a3*/
  if ( (a2 & 1) != 0 ) /*0x7179ad*/
    RA2_OPDEL(); /*0x7179b0*/
  return this; /*0x7179ba*/
}
// 0x717AF0
unsigned int * TechnoTypeClass::Constructor()
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    *this = &vt_TypeList_ParticleSystemTypeClass_const;
    return this;
}
// 0x717B20
int  TechnoTypeClass::SaveLoadDataArray()
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *this; /*0x717b2c*/
    v6 = *((unsigned int *)this + 16);
  (*(void (__stdcall **)(int *, int *, int, unsigned int))(v3 + 16))(this, &v6, 4, 0); /*0x717b3d*/
  result = v6; /*0x717b40*/
  for ( i = 0; i < v6; ++i ) /*0x717b48*/
  {
        (*(void (__stdcall **)(TechnoTypeClass *, int, int, unsigned int))(*(unsigned int *)aP1->vtable0 + 16))(
    result = v6; /*0x717b5b*/
  }
  return result; /*0x717b64*/
}
// 0x717BC0
unsigned int * TechnoTypeClass::Constructor_0(ObjectTypeClass * aP1)
{
    *this = &vt_DynamicVectorClass_VoxelAnimTypeClass_const;
    return this;
}
// 0x717BE0
VectorClass_flat * TechnoTypeClass::Constructor_1(ObjectTypeClass * aP1)
{
    *this = &vt_DynamicVectorClass_BuildingTypeClass_const;
    return (VectorClass *)this;
}
// 0x717DB0
char TechnoTypeClass::RemoveItem(int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

    v2 = *((unsigned int *)this + 16);
  v3 = a2; /*0x717db3*/
  if ( a2 >= v2 ) /*0x717db9*/
    return 0; /*0x717ddc*/
  v4 = v2 - 1; /*0x717dbb*/
    *((unsigned int *)this + 16) = v4;
  if ( a2 < v4 ) /*0x717dc1*/
  {
    do /*0x717dd4*/
    {
      ++v3; /*0x717dc7*/
            *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v3 - 4) = *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v3);
    }
        do
  }
  return 1; /*0x717dd9*/
}
// 0x7473D0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0_0()
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon();
}
}