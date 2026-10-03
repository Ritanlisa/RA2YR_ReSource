// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/RadarHashVector_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"

// 0x652C00
namespace gamemd {
CampaignClass * RadarClass::Destruct()
{

  MapClass **p_RadarClass_field_0x1488; // esi
  int v3; // ebp
  void *v4; // eax
  CampaignClass *RadarClass_field_0x1260; // eax
  CampaignClass *RadarClass_field_0x1228; // eax
  int result; // eax

  this->RadarClass_field_0x0 = (unsigned int)((gamemd::MapClass **)(&vt_RadarClass));
  AudioFileClass::Release((AudioFileClass *)&this->RadarClass_field_0x14C0); /*0x652c12*/
  TacticalClass::FreeResources((TacticalClass *)this); /*0x652c19*/
  p_RadarClass_field_0x1488 = (gamemd::MapClass **)(&this->RadarClass_field_0x1488); /*0x652c1e*/
  v3 = 22; /*0x652c24*/
  do /*0x652c53*/
  {
    v4 = *(p_RadarClass_field_0x1488 - 5); /*0x652c2b*/
    p_RadarClass_field_0x1488 -= 6; /*0x652c2e*/
    *p_RadarClass_field_0x1488 = (MapClass *)&vt_VectorClass; /*0x652c33*/
    if ( v4 && *((unsigned char *)p_RadarClass_field_0x1488 + 13) ) /*0x652c3b*/
    {
      __3_YAXPAX_Z(v4); /*0x652c41*/
      p_RadarClass_field_0x1488[1] = 0; /*0x652c49*/
    }
    --v3; /*0x652c4c*/
    *((unsigned char *)p_RadarClass_field_0x1488 + 13) = 0; /*0x652c4d*/
    p_RadarClass_field_0x1488[2] = 0; /*0x652c50*/
  }
  while ( v3 ); /*0x652c53*/
  RadarClass_field_0x1260 = (gamemd::CampaignClass *)(this->RadarClass_field_0x1260); /*0x652c55*/
  this->RadarClass_field_0x125C = (unsigned int)((VectorClass *)&vt_VectorClass); /*0x652c5b*/
  if ( RadarClass_field_0x1260 && this->__pad_1264[5] ) /*0x652c69*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1260); /*0x652c72*/
    this->RadarClass_field_0x1260 = 0; /*0x652c7a*/
  }
  this->__pad_1264[5] = (unsigned int)((gamemd::CampaignClass *)(0));
  *(unsigned int *)this->__pad_1264 = 0; /*0x652c86*/
  RadarClass_field_0x1228 = (gamemd::CampaignClass *)(this->RadarClass_field_0x1228); /*0x652c8c*/
  this->RadarClass_field_0x1224 = (unsigned int)((VectorClass *)&vt_VectorClass); /*0x652c92*/
  if ( RadarClass_field_0x1228 && this->__pad_122C[5] ) /*0x652ca0*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1228); /*0x652ca9*/
    this->RadarClass_field_0x1228 = 0; /*0x652cb1*/
  }
  this->__pad_122C[5] = (unsigned int)((gamemd::CampaignClass *)(0));
  *(unsigned int *)this->__pad_122C = 0; /*0x652cbf*/
  ((MapClass *)((char *)this))->Destruct(); /*0x652cc5*/
  return (gamemd::CampaignClass *)(result); /*0x652cca*/

}
}
// 0x654650
namespace gamemd {
int RadarClass_RecreateSurface(void * a1, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x654650)
}
}
// 0x6A8420
namespace gamemd {
int RadarClass::GetBlip(int a1, int a2, int a3, ObjectClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A8420)
}
}
// 0x4F4220
namespace gamemd {
unsigned int * RadarClass::initRadarSurface()
{

  this->RadarClass_field_0x4 = (unsigned int)(0);
  this->RadarClass_field_0x8 = (unsigned int)(0);
  *(unsigned int *)this->__pad_C = 2; /*0x4f422a*/
  this->RadarClass_field_0x0 = (unsigned int)(&off_7EA6FC); /*0x4f4231*/
  return &this->RadarClass_field_0x0; /*0x4f4237*/

}
} // namespace gamemd

// 0x652D90
namespace gamemd {
void RadarClass::Destru_vt50()
{

  if ( byte_B048F9 ) /*0x652d9a*/
  {
    __3_YAXPAX_Z((void *)(dword_B048E0)); /*0x652da2*/
    byte_B048F9 = 0; /*0x652daa*/
  }
  dword_B048E0 = 0; /*0x652db5*/
  if ( byte_B048F8 ) /*0x652dbd*/
  {
    __3_YAXPAX_Z((void *)(dword_B048AC)); /*0x652dc6*/
    byte_B048F8 = 0; /*0x652dce*/
  }
  dword_B048AC = 0; /*0x652dd4*/

}
} // namespace gamemd
