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

// 0x41D860
namespace gamemd {
int AirstrikeClass::SpawnAircraft(int * a2)
{

  int v3; // eax
  int v4; // ebp
  int v5; // ebx
  unsigned int *v7; // eax
  void *v8; // eax
  unsigned int *v9; // eax
  AirstrikeClass * result;
  unsigned int *v11; // eax
  AirstrikeClass * v12;
  int v13; // eax
  int v14; // [esp-14h] [ebp-38h]
  int v15; // [esp-Ch] [ebp-30h]
  int v16; // [esp+10h] [ebp-14h] BYREF
  int v17; // [esp+14h] [ebp-10h]
  unsigned int v18[3]; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+28h] [ebp+4h]

  v3 = *((unsigned int *)this + 21); /*0x41d869*/
  *((unsigned char *)this + 60) = 1; /*0x41d86c*/
  *((unsigned char *)this + 61) = 1; /*0x41d870*/
  *((unsigned int *)this + 13) = 0; /*0x41d874*/
  v4 = *(unsigned int *)(v3 + 3576); /*0x41d881*/
  v17 = *(unsigned int *)(*(unsigned int *)g_abs_8871E0->? + 3576); /*0x41d895*/
  if ( VeterancyStruct::IsElite((float *)(*((unsigned int *)this + 19) + 336)) ) /*0x41d8a2*/
  {
    v5 = *((unsigned int *)this + 10); /*0x41d8ae*/
    v4 = *(unsigned int *)(*((unsigned int *)this + 22) + 3576); /*0x41d8b1*/
  }
  else
  {
    v5 = *((unsigned int *)this + 9); /*0x41d8b9*/
  }
  v7 = (int)((unsigned int *)(*(int (**)(int *, unsigned int *))(*a2 + 72))(a2, v18));
  IDA_LOWORD(v19) = *v7 / 256; /*0x41d8dc*/
  IDA_HIWORD(v19) = v7[1] / 256; /*0x41d8f5*/
  v16 = v19; /*0x41d902*/
  v8 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v16); /*0x41d907*/
  v15 = v17; /*0x41d916*/
  v14 = (int)v8; /*0x41d919*/
  v9 = (unsigned int *)(*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 76) + 60))(*((unsigned int *)this + 19)); /*0x41d91f*/
  result = PlaceAircraftOnMap(v9, v4, v5, 1, v14, 0, v15, 0, this); /*0x41d926*/
  *((unsigned int *)this + 11) = result; /*0x41d92d*/
  *((unsigned int *)this + 12) = result; /*0x41d930*/
  if ( result ) /*0x41d933*/
  {
    result = (gamemd::AirstrikeClass *)(*((unsigned int *)this + 23));
    if ( result ) /*0x41d93e*/
    {
      v11 = (unsigned int *)(result + 156); /*0x41d940*/
      v18[0] = *v11; /*0x41d949*/
      v18[1] = v11[1]; /*0x41d956*/
      v18[2] = v11[2]; /*0x41d961*/
      result = StartAudioControllerAt(g_abs_8871E0->?, (int)v18, 0); /*0x41d96b*/
    }
    *((unsigned int *)this + 20) = a2; /*0x41d972*/
    if ( a2 ) /*0x41d975*/
    {
      result = (gamemd::AirstrikeClass *)((int)((gamemd::AirstrikeClass *)((*(int (**)(int *))(*a2 + 44))(a2))));
      if ( result == (gamemd::AirstrikeClass *)(6) ) /*0x41d985*/
      {
        v12 = (gamemd::AirstrikeClass *)((int)(*a2));
        a2[165] = (int)(this);
        (*(void (**)(int *, int))(v12 + 348))(a2, 100000); /*0x41d99a*/
        *((unsigned char *)a2 + 1784) = *((unsigned char *)&g_abs_8871E0[1].?[12] /*0x41d9b8*/
                                + 2 * g_abs_8871E0[1].?[10]
                                + g_abs_8871E0[1].?[10]);
        *((unsigned char *)a2 + 1785) = *((unsigned char *)&g_abs_8871E0[1].?[12] /*0x41d9d5*/
                                + 2 * g_abs_8871E0[1].?[10]
                                + g_abs_8871E0[1].?[10]
                                + 1);
        v13 = *a2; /*0x41d9f1*/
        *((unsigned char *)a2 + 1786) = *((unsigned char *)&g_abs_8871E0[1].?[12] /*0x41d9f5*/
                                + 2 * g_abs_8871E0[1].?[10]
                                + g_abs_8871E0[1].?[10]
                                + 2);
        a2[447] = 1; /*0x41d9fb*/
        return (*(int (**)(int *, int))(v13 + 292))(a2, 2); /*0x41da05*/
      }
    }
  }
  return (int)(result);

}
} // namespace ra2

// 0x41DA20
namespace gamemd {
int AirstrikeClass::ReassignTarget(int a2)
{

  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  unsigned int *v7; // edi
  int v8; // eax
  unsigned int *v9; // esi
  int v10; // eax
  AirstrikeClass * v11;
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
    IDA_LOBYTE(v8) = WTFMode::ResetUnitFlags(this); /*0x41da5c*/
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
      v11 = (gamemd::AirstrikeClass *)((unsigned int)(*v9));
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
  IUnknown *v4; // edx

  result = *((unsigned int *)this + 23); /*0x41dc80*/
  v3 = 0; /*0x41dc8c*/
  if ( (AudioController *)result == aP1 ) /*0x41dc90*/
  {
    *((unsigned int *)this + 23) = *(unsigned int *)&aP1[((unsigned int *)(7].__pad_94))[4]; /*0x41dc98*/
    *(unsigned int *)&aP1[((unsigned int *)(7].__pad_94))[4] = 0; /*0x41dc9b*/
    result = *((unsigned int *)this + 12) - 1; /*0x41dca4*/
    *((unsigned int *)this + 12) = result; /*0x41dca5*/
    *(unsigned int *)&aP1[((unsigned int *)(3].__pad_10))[68] = 0; /*0x41dca8*/
  }
  else if ( result ) /*0x41dcb2*/
  {
    do /*0x41dceb*/
    {
      if ( *(AudioController **)(result + 1496) == aP1 ) /*0x41dcbc*/
      {
        *(unsigned int *)(result + 1496) = *(unsigned int *)&aP1[((unsigned int *)(7].__pad_94))[4]; /*0x41dcc4*/
        *(unsigned int *)&aP1[((unsigned int *)(7].__pad_94))[4] = 0; /*0x41dcca*/
        result = 0; /*0x41dcd3*/
        --*((unsigned int *)this + 12); /*0x41dcd6*/
        *(unsigned int *)&aP1[((unsigned int *)(3].__pad_10))[68] = 0; /*0x41dcd9*/
      }
      else
      {
        result = *(unsigned int *)(result + 1496); /*0x41dce1*/
      }
      ++v3; /*0x41dce3*/
    }
    while ( v3 <= 100 && result ); /*0x41dceb*/
  }
  if ( *((int *)this + 12) <= 0 ) /*0x41dcf0*/
  {
    v4 = (IUnknown *)((unsigned int)(*(IUnknown **)&g_abs_A8D63C));
    *((unsigned char *)this + 60) = 0; /*0x41dcf8*/
    *((unsigned int *)this + 16) = v4; /*0x41dcfb*/
    *((unsigned char *)this + 61) = 0; /*0x41dcfe*/
  }
  return result; /*0x41dd01*/

}
} // namespace ra2

// 0x41DD50
namespace gamemd {
void * AirstrikeClass::CopyTo(unsigned int * Block, char a2)
{

  int v3; // eax
  unsigned int *v5; // [esp+4h] [ebp-4h] BYREF
*Block = (unsigned int)(&vt_AirstrikeClass);
  *(Block + 1) = &vt_AirstrikeClass; /*0x41dd63*/
  *(Block + 2) = &vt_AirstrikeClass; /*0x41dd6a*/
  *(Block + 3) = &vt_AirstrikeClass; /*0x41dd71*/
  v5 = Block; /*0x41dd7f*/
  v3 = (*(int (**)(int *, unsigned int **))(g_abs_889FB8 + 16))(&g_abs_889FB8, &v5); /*0x41dd83*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_889FC8) && v3 < --g_abs_889FC8 ) /*0x41dd9e*/
  {
    do /*0x41ddb6*/
    {
      ++v3; /*0x41dda6*/
      *((unsigned int *)g_abs_889FBC + v3 - 1) = *((unsigned int *)g_abs_889FBC + v3); /*0x41ddaa*/
    }
    while ( v3 < (int)((int))((int))(g_abs_889FC8) ); /*0x41ddb6*/
  }
  AbstractClass::DTOR(Block); /*0x41ddba*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x41ddc4*/
    RA2_OPDEL(Block); /*0x41ddc7*/
  return (AirstrikeClass *)Block; /*0x41ddd1*/

}
} // namespace ra2

// 0x420E90
namespace gamemd {
AbstractClass * * AirstrikeClass::UpdateAll()
{

  unsigned int * v0;
  int v1; // esi
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  unsigned char *v5; // edx

  IDA_LOBYTE(v0) = unk_89A134; /*0x420e90*/
  if ( !unk_89A134 ) /*0x420e98*/
  {
    unk_89A134 = (unsigned char *)(1);
    v1 = 0; /*0x420ea1*/
    while ( 1 ) /*0x420ec6*/
    {
      v2 = (unsigned int)(v1 % 256 * (v1 / 256));
      v0 = (unsigned int *)((unsigned int)((uint64_t)(2164392969LL * v2) >> 32) >> 31); /*0x420ed6*/
      v3 = v2 / 127; /*0x420ed9*/
      if ( v2 / 127 > 255 ) /*0x420ee1*/
        break; /*0x420ee1*/
      if ( v3 >= 0 ) /*0x420ee5*/
      {
        if ( v3 > 255 ) /*0x420ef1*/
          break; /*0x420ef1*/
      }
      else
      {
        IDA_LOBYTE(v3) = 0; /*0x420ee7*/
      }
LABEL_8:
      g_abs_88A118[v1++] = v3; /*0x420ef8*/
      if ( v1 >= 0x10000 ) /*0x420f05*/
        goto LABEL_9; /*0x420f05*/
    }
    IDA_LOBYTE(v3) = -1; /*0x420ef3*/
    goto LABEL_8; /*0x420ef3*/
  }
LABEL_9: v4 = (int)(g_abs_88A100 - 1);
  if ( g_abs_88A100 - 1 >= 0 ) /*0x420f12*/
  {
    v0 = (unsigned int *)(g_abs_88A0F4);
    do /*0x420f36*/
    {
      v5 = (unsigned char *)((unsigned int *)(v0))[v4]; /*0x420f19*/
      if ( v5[60] && v5 ) /*0x420f27*/
      {
        (*(void (**)(int))(*(unsigned int *)v5 + 32))(1); /*0x420f2d*/
        v0 = g_abs_88A0F4; /*0x420f30*/
      }
      --v4; /*0x420f35*/
    }
    while ( v4 >= 0 ); /*0x420f36*/
  }
  return (gamemd::AbstractClass **)((char)v0);

}
} // namespace ra2

// 0x41D380
namespace gamemd {
AirstrikeClass::AirstrikeClass(int a2)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  AbstractClass::Constructor((void *)this); /*0x41d384*/
  *(unsigned int *)this = &vt_AirstrikeClass; /*0x41d389*/
  *((unsigned int *)this + 1) = &vt_AirstrikeClass; /*0x41d38f*/
  *((unsigned int *)this + 2) = &vt_AirstrikeClass; /*0x41d396*/
  *((unsigned int *)this + 3) = &vt_AirstrikeClass; /*0x41d39d*/
  if ( g_abs_889FC8 < g_abs_889FC0 /*0x41d3d9*/
    || (g_abs_889FC5 || !g_abs_889FC0)
    && g_abs_889FCC > (unsigned char [1])(0)
    && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_889FB8 + 8))(
         &g_abs_889FB8,
         (unsigned int)(g_abs_889FC0)+ g_abs_889FCC,
         0) )
  {
    v3 = (int)(g_abs_889FC8++);
    *((unsigned int *)g_abs_889FBC + v3) = this; /*0x41d3f5*/
  }
  *((unsigned char *)this + 60) = 0; /*0x41d3fc*/
  *((unsigned int *)this + 19) = a2; /*0x41d3ff*/
  *((unsigned char *)this + 61) = 0; /*0x41d402*/
  v4 = (*(int (**)(int))(*(unsigned int *)a2 + 132))(a2); /*0x41d407*/
  v5 = *((unsigned int *)this + 19); /*0x41d413*/
  *((unsigned int *)this + 9) = *(unsigned int *)(v4 + 1564); /*0x41d416*/
  v6 = (*(int (**)(int))(*(unsigned int *)v5 + 132))(v5); /*0x41d41b*/
  v7 = *((unsigned int *)this + 19); /*0x41d427*/
  *((unsigned int *)this + 10) = *(unsigned int *)(v6 + 1568); /*0x41d42a*/
  v8 = (*(int (**)(int))(*(unsigned int *)v7 + 132))(v7); /*0x41d42f*/
  v9 = *((unsigned int *)this + 19); /*0x41d43b*/
  *((unsigned int *)this + 17) = *(unsigned int *)(v8 + 1580); /*0x41d43e*/
  v10 = (*(int (**)(int))(*(unsigned int *)v9 + 132))(v9); /*0x41d443*/
  v11 = *((unsigned int *)this + 19); /*0x41d44f*/
  *((unsigned int *)this + 18) = *(unsigned int *)(v10 + 1584); /*0x41d452*/
  v12 = (*(int (**)(int))(*(unsigned int *)v11 + 132))(v11); /*0x41d457*/
  v13 = *((unsigned int *)this + 19); /*0x41d463*/
  *((unsigned int *)this + 21) = *(unsigned int *)(v12 + 1572); /*0x41d466*/
  v14 = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v13 + 132))(v13) + 1576); /*0x41d471*/
  *((unsigned int *)this + 23) = 0; /*0x41d477*/
  *((unsigned int *)this + 22) = v14; /*0x41d47a*/
  *((unsigned int *)this + 20) = 0; /*0x41d47d*/
  return this; /*0x41d482*/

}
} // namespace gamemd

// 0x41D6E0
namespace gamemd {
int AirstrikeClass::Stat(AbstractClass * aP1)
{

  return AbstractClass::ProcessPower((void *)this); /*0x41d6ea*/

}
} // namespace gamemd

// 0x41D6F0
namespace gamemd {
int AirstrikeClass::Write(AbstractClass * aP0, int aP1)
{

  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)((AbstractClass *)(aP0))->SaveLoad_Prefix_0((AbstractClass *)aP1); /*0x41d701*/
  if ( (int)Prefix_0 >= 0 ) /*0x41d705*/
  {
    if ( aP0 ) /*0x41d709*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x41d712*/
      *(unsigned int *)aP0->__pad_0 = &vt_AirstrikeClass; /*0x41d717*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = &vt_AirstrikeClass; /*0x41d71d*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[8] = &vt_AirstrikeClass; /*0x41d724*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[12] = &vt_AirstrikeClass; /*0x41d72b*/
    }
    ObjectPtr::RegisterForTracking( /*0x41d73b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[((unsigned int *)(2].__pad_0))[4]);
    ObjectPtr::RegisterForTracking( /*0x41d749*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[((unsigned int *)(2].__pad_0))[8]);
    ObjectPtr::RegisterForTracking( /*0x41d757*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[((unsigned int *)(2].__pad_0))[12]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].uniqueId); /*0x41d765*/
    ObjectPtr::RegisterForTracking( /*0x41d773*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].abstractFlags);
  }
  return (int)Prefix_0->__pad_0; /*0x41d77a*/

}
} // namespace gamemd

// 0x41D780
namespace gamemd {
int AirstrikeClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return ((AbstractClass *)((ObjectTypeClass *)aP0))->SaveLoad_Prefix((ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x41d794*/

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
  a2[3] = -1672772828; /*0x41d7d0*/
  return 0; /*0x41d7ad*/

}
} // namespace gamemd

// 0x41D830
namespace gamemd {
char AirstrikeClass::StartMission(int * a2)
{

  char result; // al

  result = (char)a2; /*0x41d835*/
  if ( !*((unsigned char *)this + 60) ) /*0x41d830*/
    return AirstrikeClass::SpawnAircraft(this, a2); /*0x41d83c*/
  if ( a2 != *(int **)((char *)this + 80) ) /*0x41d847*/
    return AirstrikeClass::ReassignTarget(this, (int)a2); /*0x41d84a*/
  return result; /*0x41d841*/

}
} // namespace gamemd
