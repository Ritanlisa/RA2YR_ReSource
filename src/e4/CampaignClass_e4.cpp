// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/INISectionList_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Campaign_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Node_flat_e4.hpp"
#include "e4/classes/CampaignProperties_WorldDominationTour_22_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Carryall_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_16_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"

// 0x46CB60
namespace gamemd {
CampaignClass::CampaignClass(ObjectClass * aP1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46CB60)
}
}
// 0x46CE10
namespace gamemd {
int CampaignClass::LoadFromINIList()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46CE10)
}
}
// 0x49C5A0
namespace gamemd {
AbstractClass * * CampaignClass::SaveProgress()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x49C5A0)
}
}
// 0x46CF80
namespace gamemd {
int CampaignClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x46cf86*/
    return -2147467261; /*0x46cf88*/
  *a2 = -2439096; /*0x46cf96*/
  a2[1] = 298980631; /*0x46cf9e*/
  a2[2] = 1610642817; /*0x46cfa7*/
  a2[3] = unk_7E990C; /*0x46cfb0*/
  return 0; /*0x46cf8d*/

}
} // namespace gamemd

// 0x46D000
namespace gamemd {
int CampaignClass::Write(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(aP0),(gamemd::AbstractClass *)(aP1)); /*0x46d00b*/
  if ( result >= 0 ) /*0x46d012*/
  {
    if ( aP0 ) /*0x46d016*/
    {
      ((AbstractTypeClass*)(int)aP0)->Init((int)&aP1); /*0x46d01f*/
      aP0->vtable1 = (void *)((unsigned int)(&vt_CampaignClass)); /*0x46d024*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d02a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d031*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d038*/
    }
    return 0; /*0x46d03f*/
  }
  return result; /*0x46d041*/

}
} // namespace gamemd

// 0x46D050
namespace gamemd {
int CampaignClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1), (gamemd::ObjectTypeClass *)aP2); /*0x46d05f*/
  if ( result >= 0 ) /*0x46d066*/
    return 0; /*0x46d068*/
  return result; /*0x46d06a*/

}
} // namespace gamemd

// 0x46D070
namespace gamemd {
int CampaignClass::StubReturn928()
{

  return 928; /*0x46d075*/

}
} // namespace gamemd

// 0x46D080
namespace gamemd {
int CampaignClass::StubReturn10()
{

  return 10; /*0x46d085*/

}
} // namespace gamemd

// 0x46D090
namespace gamemd {
void ** CampaignClass::DTOR(char a2)
{

  int v3; // eax
  CampaignClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable1 = &vt_CampaignClass; /*0x46d096*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d09c*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d0a3*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d0aa*/
  AbstractClass::AnnounceExpiredPointer((gamemd::AbstractClass *)(this), 1); /*0x46d0b1*/
  v5 = (gamemd::CampaignClass *)(this); /*0x46d0c6*/
  v3 = (*(int (**)(unsigned int *, CampaignClass **))(dword_A83CF8 + 16))(&dword_A83CF8, &v5); /*0x46d0ca*/
  if ( v3 != -1 && v3 < dword_A83D08 && v3 < --dword_A83D08 ) /*0x46d0e5*/
  {
    do /*0x46d0fd*/
    {
      ++v3; /*0x46d0ed*/
      *((unsigned int *)dword_A83CFC + v3 - 1) = *((unsigned int *)dword_A83CFC + v3); /*0x46d0f1*/
    }
    while ( v3 < dword_A83D08 ); /*0x46d0fd*/
  }
  ((AbstractTypeClass *)((AbstractTypeClass *)this))->Dtor(); /*0x46d101*/
  if ( (a2 & 1) != 0 ) /*0x46d10b*/
    __3_YAXPAX_Z(this); /*0x46d10e*/
return (void **)this; /*0x46d118*/

}
} // namespace gamemd
