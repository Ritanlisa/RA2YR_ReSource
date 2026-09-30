// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/Warhead_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"

// 0x75F650
namespace gamemd {
int WaveClass::LoadWaveData(int a2, int a3)
{

  int v3; // ebx
  int v4; // edi
  int Register; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int v13; // [esp+28h] [ebp-4h] BYREF

  v3 = a3; /*0x75f652*/
  v4 = a2; /*0x75f659*/
  Register = ((BuildingClass *)(this))->SaveLoad_Register(); /*0x75f664*/
  if ( Register >= 0 )
  {
    if ( v4 ) /*0x75f672*/
    {
      ObjectClass::Init((unsigned int *)v4, (int)&a3); /*0x75f67b*/
      *(unsigned int *)(v4 + 332) = 0; /*0x75f680*/
      *(unsigned int *)(v4 + 424) = 0; /*0x75f68c*/
      FrameSnapshot::Init((unsigned short *)(v4 + 472)); /*0x75f692*/
      WaveClass::Constructor_7632D0((unsigned int *)(v4 + 496), 0, 0); /*0x75f69f*/
      *(unsigned int *)v4 = &vt_WaveClass; /*0x75f6a4*/
      *(unsigned int *)(v4 + 4) = &vt_WaveClass; /*0x75f6aa*/
      *(unsigned int *)(v4 + 8) = &vt_WaveClass; /*0x75f6b1*/
      *(unsigned int *)(v4 + 12) = &off_7F6BC8; /*0x75f6b8*/
    }
    *(unsigned int *)(v4 + 332) = *(unsigned int *)(v4 + 176) == 3 ? v4 + 384 : v4 + 336;
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v4 + 172)); /*0x75f6ee*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v4 + 468)); /*0x75f6ff*/
    Register = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v3 + 12))(v3, &a2, 4, 0); /*0x75f712*/
    if ( Register >= 0 ) /*0x75f716*/
    {
      v6 = a2; /*0x75f71c*/
      a3 = 0; /*0x75f720*/
      if ( a2 <= 0 ) /*0x75f726*/
      {
LABEL_17:
        v11 = 0; /*0x75f799*/
        if ( v6 > 0 ) /*0x75f79d*/
        {
          do /*0x75f7b8*/
            ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(*(unsigned int *)(v4 + 500) + 4 * v11++)); /*0x75f7ae*/
          while ( v11 < a2 ); /*0x75f7b8*/
        }
      }
      else
      {
        while ( 1 ) /*0x75f737*/
        {
          Register = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v3 + 12))(v3, &v13, 4, 0); /*0x75f737*/
          if ( Register < 0 ) /*0x75f73b*/
            break; /*0x75f73b*/
          v7 = *(unsigned int *)(v4 + 504); /*0x75f73d*/
          if ( *(unsigned int *)(v4 + 512) < v7 /*0x75f76e*/
            || (*(unsigned char *)(v4 + 509) || !v7)
            && (v8 = *(unsigned int *)(v4 + 516), v8 > 0)
            && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v4 + 496) + 8))(v4 + 496, v7 + v8, 0) )
          {
            v9 = *(unsigned int *)(v4 + 512); /*0x75f775*/
            v10 = *(unsigned int *)(v4 + 500); /*0x75f778*/
            *(unsigned int *)(v4 + 512) = v9 + 1; /*0x75f77e*/
            *(unsigned int *)(v10 + 4 * v9) = v13; /*0x75f785*/
          }
          v6 = a2; /*0x75f78c*/
          if ( ++a3 >= a2 ) /*0x75f797*/
            goto LABEL_17; /*0x75f797*/
        }
      }
    }
  }
  return Register; /*0x75f7ba*/

}
}
// 0x763200
namespace gamemd {
WaveClass * WaveClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  void *v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = (void *)(&vt_WaveClass);
  *(Block + 1) = &vt_WaveClass; /*0x76320c*/
  *(Block + 2) = &vt_WaveClass; /*0x763213*/
  *(Block + 3) = &off_7F6BC8; /*0x76321a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x763221*/
  v6 = Block; /*0x763236*/
  v3 = (*(int (**)(int *, void ***))(g_abs_A8EC38 + 16))(&g_abs_A8EC38, &v6); /*0x76323a*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_A8EC48) && v3 < --g_abs_A8EC48 ) /*0x763255*/
  {
    do /*0x76326d*/
    {
      ++v3; /*0x76325d*/
      *((unsigned int *)g_abs_A8EC3C + v3 - 1) = *((unsigned int *)g_abs_A8EC3C + v3); /*0x763261*/
    }
    while ( v3 < (int)((int))((int))(g_abs_A8EC48) ); /*0x76326d*/
  }
  (*((void (**)(void **))*(Block + 124) + 3))(Block + 124); /*0x76327e*/
  v4 = *(Block + 125); /*0x763281*/
  *(Block + 124) = &vt_VectorClass_CellClass; /*0x763284*/
  if ( v4 && *((unsigned char *)Block + 509) ) /*0x76328e*/
  {
    OperatorDelete(v4); /*0x763296*/
    *(Block + 125) = 0; /*0x76329e*/
  }
  *((unsigned char *)Block + 509) = 0; /*0x7632a7*/
  *(Block + 126) = 0; /*0x7632ab*/
  ObjectClass::Dtor(Block); /*0x7632b2*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x7632be*/
    OperatorDelete(Block); /*0x7632c1*/
  return (WaveClass *)Block; /*0x7632cb*/

}
} // namespace gamemd

// 0x75F330
namespace gamemd {
char WaveClass::DamageArea(ObjectClass * aP1)
{

  int v3; // eax
  ObjectClass *v4; // ecx
  char *v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // edx
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h] BYREF

  v3 = *((char *)this + 117); /*0x75f338*/
  if ( v3 ) /*0x75f340*/
  {
    v4 = aP1; /*0x75f346*/
    IDA_LOWORD(aP1) = *(unsigned int *)aP1->__pad_0 / 256; /*0x75f359*/
    IDA_HIWORD(aP1) = *(unsigned int *)&v4->__pad_0[4] / 256; /*0x75f372*/
    v5 = (char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1); /*0x75f391*/
    v6 = (*(int (**)(unsigned int, unsigned int))(*(unsigned int *)*((char *)this + 117) + 1016))(*((char *)this + 117), 0); /*0x75f395*/
    v7 = *(unsigned int *)v6; /*0x75f39b*/
    v15 = *(unsigned int *)(*(unsigned int *)v6 + 172); /*0x75f3a9*/
    v16 = *(unsigned int *)(*(unsigned int *)v6 + 152); /*0x75f3ad*/
    if ( (*((unsigned int *)v5 + 80) & 0x100) != 0 && *((char *)this + 47) >= dword_B725C8 * (v5[283] + 4) ) /*0x75f3d5*/
      v8 = *((unsigned int *)v5 + 58); /*0x75f3d7*/
    else
      v8 = *((unsigned int *)v5 + 57); /*0x75f3df*/
    for ( ; v8; v8 = *(unsigned int *)(v8 + 48) ) /*0x75f3e7*/
    {
      v9 = *((char *)this + 117); /*0x75f3e9*/
      if ( v8 != v9 && *(unsigned char *)(v8 + 144) && *(unsigned char *)(v8 + 116) && !*(unsigned char *)(v8 + 129) && *(int *)(v8 + 108) > 0 ) /*0x75f413*/
        (*(void (**)(int, int *, unsigned int, int, int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v8 + 364))( /*0x75f42c*/
          v8,
          &v16,
          0,
          v15,
          v9,
          0,
          0,
          0);
    }
    v10 = *((unsigned int *)v5 + 17); /*0x75f439*/
    if ( v10 != -1 ) /*0x75f43f*/
    {
      v11 = *(unsigned int *)&g_abs_A83D84->__pad_0[4 * v10]; /*0x75f447*/
      if ( *(unsigned char *)(v11 + 689) ) /*0x75f44a*/
      {
        aP1 = (ObjectClass *)*((unsigned int *)v5 + 9); /*0x75f45b*/
        CellChainReact(); /*0x75f45f*/
      }
      if ( *(unsigned char *)(v11 + 680) ) /*0x75f464*/
        BuildingClass::SellEffects((int)v5, *(TechnoClass **)(v7 + 152)); /*0x75f477*/
    }
    IDA_LOBYTE(v3) = CellClass::IsActiveOrNext(v5); /*0x75f47e*/
    if ( (unsigned char)v3 ) /*0x75f486*/
    {
      v12 = *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 6092); /*0x75f497*/
      v3 = Random::Range(&g_abs_A8B230->random[1], 0, (IUnknown *)0x63); /*0x75f4a3*/
      if ( v3 < v12 ) /*0x75f4aa*/
        IDA_LOBYTE(v3) = LayerClass::DestroyCliff((int *)&g_abs_87F7E8, v13, (int)v5); /*0x75f4b2*/
    }
  }
  return v3; /*0x75f4b7*/

}
} // namespace gamemd

// 0x75F7D0
namespace gamemd {
int WaveClass::ProcessWaveTick(int * a1, int * a2, int a3)
{

  int v3; // edx
  int result; // eax
  int i; // ebx

  AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x75f7e2*/
  v3 = *a2; /*0x75f7ed*/
  a3 = a1[128]; /*0x75f7f9*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))(a2, &a3, 4, 0); /*0x75f7fd*/
  if ( result >= 0 ) /*0x75f802*/
  {
    for ( i = 0; i < a3; ++i ) /*0x75f80c*/
    {
      result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1[125] + 4 * i, 4, 0); /*0x75f81f*/
      if ( result < 0 ) /*0x75f824*/
        break; /*0x75f824*/
    }
  }
  return result; /*0x75f82f*/

}
} // namespace gamemd

// 0x75F840
namespace gamemd {
int WaveClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x75f846*/
    return -2147467261; /*0x75f848*/
  *a2 = 237448653; /*0x75f856*/
  a2[1] = 298949647; /*0x75f85e*/
  a2[2] = -1610610249; /*0x75f867*/
  a2[3] = -777003740; /*0x75f870*/
  return 0; /*0x75f84d*/

}
} // namespace gamemd

// 0x75F880
namespace gamemd {
int WaveClass::GetObjectSize()
{

  return 576; /*0x75f885*/

}
} // namespace gamemd

// 0x75F890
namespace gamemd {
int WaveClass::CheckStateFlag()
{

  return 3; /*0x75f895*/

}
} // namespace gamemd

// 0x75F8A0
namespace gamemd {
int WaveClass::StubReturnFalse()
{

  return 0; /*0x75f8a2*/

}
} // namespace gamemd

// 0x7631F0
namespace gamemd {
int WaveClass::GetTypeIdentifier()
{

  return 43; /*0x7631f5*/

}
} // namespace gamemd
