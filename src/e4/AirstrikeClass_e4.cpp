// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/AlphaShapeClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/AircraftClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AudioClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WTFMode_e4.hpp"

// 0x41D860
namespace gamemd {
int AirstrikeClass::SpawnAircraft(int * a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41D860)
}
} // namespace ra2

// 0x41DA20
namespace gamemd {
int AirstrikeClass::ReassignTarget(int a2, void *a2_2)
{

  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  unsigned int *v7; // edi
  int v8; // eax
  unsigned int *v9; // esi
  int v10; // eax
  int v11; // eax
  int *v12; // esi
  int v13; // edi

  v3 = *((unsigned int *)this + 23); /*0x41da26*/
  if ( v3 && (v4 = *(unsigned int *)(v3 + 1496)) != 0 )
  {
    v5 = *(unsigned int *)(v3 + 764); /*0x41da37*/
    while ( *(unsigned int *)(v4 + 764) == v5 ) /*0x41da43*/
    {
      v4 = *(unsigned int *)(v4 + 1496); /*0x41da45*/
      if ( !v4 ) /*0x41da4d*/
        goto LABEL_6; /*0x41da4d*/
    }
    LOBYTE(v8) = ((WTFMode *)((WTFMode *)this))->ResetUnitFlags(); /*0x41da5c*/
  }
  else
  {
LABEL_6:
    v6 = *((unsigned int *)this + 20); /*0x41da4f*/
    if ( v6 )
      v7 = (*(int (**)(unsigned int))(*(unsigned int *)v6 + 44))(*((unsigned int *)this + 20)) == 6 ? (unsigned int *)v6 : 0;
    else
      v7 = 0; /*0x41da56*/
    if ( a2 )
      v9 = (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2) == 6 ? (unsigned int *)a2 : 0;
    else
      v9 = 0; /*0x41da84*/
    if ( v7 ) /*0x41da9e*/
    {
      v10 = *v7; /*0x41daa0*/
      v7[165] = 0; /*0x41daa4*/
      (*(void (**)(unsigned int *))(v10 + 344))(v7); /*0x41daae*/
      (*(void (**)(unsigned int *, int))(*v7 + 292))(v7, 2); /*0x41daba*/
    }
    *((unsigned int *)this + 20) = 0; /*0x41dac2*/
    if ( v9 ) /*0x41dac9*/
    {
      v11 = (unsigned int)(*v9);
      v9[165] = (unsigned int)(this);
      (*(void (**)(unsigned int *, int))(v11 + 348))(v9, 100000); /*0x41dada*/
      (*(void (**)(unsigned int *, int))(*v9 + 292))(v9, 2); /*0x41dae6*/
    }
    v8 = *((unsigned int *)this + 12); /*0x41daec*/
    v12 = *(int **)((char *)this + 92); /*0x41daef*/
    v13 = 0; /*0x41daf2*/
    for ( *((unsigned int *)this + 20) = a2; v13 < v8; ++v13 ) /*0x41daf9*/
    {
      if ( v12 ) /*0x41dafd*/
      {
        if ( v12[191] > 0 ) /*0x41db07*/
        {
          (*(void (**)(int *, int))(*v12 + 968))(v12, a2); /*0x41db0e*/
          (*(void (**)(int *, int, unsigned int))(*v12 + 488))(v12, 1, 0); /*0x41db1c*/
          *((unsigned char *)this + 61) = 1; /*0x41db22*/
        }
        v12 = (int *)v12[374]; /*0x41db26*/
      }
      v8 = *((unsigned int *)this + 12); /*0x41db2c*/
    }
  }
  return v8; /*0x41da61*/

}
} // namespace ra2

// 0x41DC80
namespace gamemd {
int AirstrikeClass::RemoveAircraft(AudioController * aP1)
{

  int result; // eax
  int v3; // edi
  wchar_t *v4; // edx

  result = *((char *)this + 23); /*0x41dc80*/
  v3 = 0; /*0x41dc8c*/
  if ( result == (int)(aP1) ) /*0x41dc90*/
  {
    *((char *)this + 23) = *(unsigned int *)(aP1 + 1496); /*0x41dc98*/
    *(unsigned int *)(aP1 + 1496) = 0; /*0x41dc9b*/
    result = *((char *)this + 12) - 1; /*0x41dca4*/
    *((char *)this + 12) = result; /*0x41dca5*/
    *(unsigned int *)(aP1 + 660) = 0; /*0x41dca8*/
  }
  else if ( result ) /*0x41dcb2*/
  {
    do /*0x41dceb*/
    {
      if ( *(unsigned int *)(result + 1496) == (unsigned int)(aP1) ) /*0x41dcbc*/
      {
        *(unsigned int *)(result + 1496) = *(unsigned int *)(aP1 + 1496); /*0x41dcc4*/
        *(unsigned int *)(aP1 + 1496) = 0; /*0x41dcca*/
        result = 0; /*0x41dcd3*/
        --*((char *)this + 12); /*0x41dcd6*/
        *(unsigned int *)(aP1 + 660) = 0; /*0x41dcd9*/
      }
      else
      {
        result = *(unsigned int *)(result + 1496); /*0x41dce1*/
      }
      ++v3; /*0x41dce3*/
    }
    while ( v3 <= 100 && result ); /*0x41dceb*/
  }
  if ( *((char *)this + 12) <= 0 ) /*0x41dcf0*/
  {
    v4 = (wchar_t *)(dword_A8ED84);
    *((unsigned char *)this + 60) = 0; /*0x41dcf8*/
    *((char *)this + 16) = (int)v4; /*0x41dcfb*/
    *((unsigned char *)this + 61) = 0; /*0x41dcfe*/
  }
  return result; /*0x41dd01*/

}
} // namespace ra2

// 0x41DD50
namespace gamemd {
void * AirstrikeClass::CopyTo(char a2, int aP1, int aP0, int a1, int aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41DD50)
}
} // namespace ra2

// 0x420E90
namespace gamemd {
AbstractClass * * AirstrikeClass::UpdateAll()
{

  unsigned int v1;
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  unsigned char *v6; // edx

  LOBYTE(v1) = byte_89A134; /*0x420e90*/
  if ( !byte_89A134 ) /*0x420e98*/
  {
    byte_89A134 = 1; /*0x420e9a*/
    v2 = 0; /*0x420ea1*/
    while ( 1 ) /*0x420ec6*/
    {
      v3 = (unsigned int)(v2 % 256 * (v2 / 256));
      v1 = (unsigned int)((unsigned int *)((unsigned int)((uint64_t)(2164392969LL * v3) >> 32) >> 31)); /*0x420ed6*/
      v4 = v3 / 127; /*0x420ed9*/
      if ( v3 / 127 > 255 ) /*0x420ee1*/
        break; /*0x420ee1*/
      if ( v4 >= 0 ) /*0x420ee5*/
      {
        if ( v4 > 255 ) /*0x420ef1*/
          break; /*0x420ef1*/
      }
      else
      {
        LOBYTE(v4) = 0; /*0x420ee7*/
      }
LABEL_8:
      ((unsigned int *)(byte_88A118))[v2++] = v4; /*0x420ef8*/
      if ( v2 >= 0x10000 ) /*0x420f05*/
        goto LABEL_9; /*0x420f05*/
    }
    LOBYTE(v4) = -1; /*0x420ef3*/
    goto LABEL_8; /*0x420ef3*/
  }
LABEL_9:
  v5 = g_AlphaShapeLimit - 1; /*0x420f07*/
  if ( g_AlphaShapeLimit - 1 >= 0 ) /*0x420f12*/
  {
    v1 = (unsigned int)((unsigned int *)(dword_88A0F4));
    do /*0x420f36*/
    {
      v6 = (unsigned char *)((unsigned int *)(v1))[v5]; /*0x420f19*/
      if ( v6[60] && v6 ) /*0x420f27*/
      {
        (*(void (**)(int))(*(unsigned int *)v6 + 32))(1); /*0x420f2d*/
        v1 = dword_88A0F4; /*0x420f30*/
      }
      --v5; /*0x420f35*/
    }
    while ( v5 >= 0 ); /*0x420f36*/
  }
  return (gamemd::AbstractClass **)((char)v1);

}
} // namespace ra2

// 0x41D380
namespace gamemd {
AirstrikeClass::AirstrikeClass(int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41D380)
}
} // namespace gamemd

// 0x41D6E0
namespace gamemd {
int AirstrikeClass::Stat(AbstractClass * aP1)
{

  return ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x41d6ea*/

}
} // namespace gamemd

// 0x41D6F0
namespace gamemd {
int AirstrikeClass::Write(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); 
  if ( Prefix_0 >= 0 ) /*0x41d705*/
  {
    if ( aP0 ) /*0x41d709*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x41d712*/
      aP0->vtable1 = &vt_AirstrikeClass; /*0x41d717*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_AirstrikeClass); /*0x41d71d*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_AirstrikeClass); /*0x41d724*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_AirstrikeClass); /*0x41d72b*/
    }
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->owner); /*0x41d73b*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance,(int *)(&aP0->AirstrikeClass_field_50)); /*0x41d749*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance,(int *)(&aP0->AirstrikeClass_field_54)); /*0x41d757*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance,(int *)(&aP0->AirstrikeClass_field_58)); /*0x41d765*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance,(int *)(&aP0->AirstrikeClass_field_5C)); /*0x41d773*/
  }
  return Prefix_0; /*0x41d77a*/

}
} // namespace gamemd

// 0x41D780
namespace gamemd {
int AirstrikeClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41D780)
}
} // namespace gamemd

// 0x41D7A0
namespace gamemd {
int AirstrikeClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x41d7a6*/
    return -2147467261; /*0x41d7a8*/
  *a2 = 1893611809; /*0x41d7b6*/
  a2[1] = 299179558; /*0x41d7be*/
  a2[2] = -1610574449; /*0x41d7c7*/
  a2[3] = unk_7E98EC; /*0x41d7d0*/
  return 0; /*0x41d7ad*/

}
} // namespace gamemd

// 0x41D830
namespace gamemd {
char AirstrikeClass::StartMission(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41D830)
}
} // namespace gamemd
