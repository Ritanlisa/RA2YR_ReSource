// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Random_e4.hpp"
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
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/RadSiteClass_e4.hpp"
#include "e4/classes/FrameSnapshot_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"

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
  Register = ((BuildingClass *)((ObjectClass *)this))->SaveLoad_Register(); /*0x75f664*/
  if ( Register >= 0 )
  {
    if ( v4 ) /*0x75f672*/
    {
      ((ObjectClass *)((ObjectClass *)v4))->Init((int)&a3); /*0x75f67b*/
      *(unsigned int *)(v4 + 332) = 0; /*0x75f680*/
      *(unsigned int *)(v4 + 424) = (gamemd::Init)(0); /*0x75f68c*/
      FrameSnapshot::Init((FrameSnapshot *)(v4 + 472)); /*0x75f692*/
      WaveClass::Constructor_7632D0((WaveClass *)(v4 + 496), 0, 0); /*0x75f69f*/
      *(unsigned int *)v4 = (unsigned int)(&vt_WaveClass); /*0x75f6a4*/
      *(unsigned int *)(v4 + 4) = (unsigned int)(&vt_WaveClass); /*0x75f6aa*/
      *(unsigned int *)(v4 + 8) = (unsigned int)(&vt_WaveClass); /*0x75f6b1*/
      *(unsigned int *)(v4 + 12) = (unsigned int)(&off_7F6BC8); /*0x75f6b8*/
    }
    *(unsigned int *)(v4 + 332) = *(unsigned int *)(v4 + 176) == 3 ? v4 + 384 : v4 + 336;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 172)); /*0x75f6ee*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 468)); /*0x75f6ff*/
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
            ObjectPtr::RegisterForTracking( /*0x75f7ae*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(unsigned int *)(v4 + 500) + 4 * v11++));
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
  WaveClass *v6; // [esp+4h] [ebp-4h] BYREF

  Block->ObjectClass = (gamemd::WaveClass *)(&vt_WaveClass);
  ((unsigned int *)Block)[0] = (unsigned int)(&vt_WaveClass); /*0x76320c*/
  ((unsigned int *)Block)[0] = (unsigned int)(&vt_WaveClass); /*0x763213*/
  ((unsigned int *)Block)[0] = (unsigned int)(&off_7F6BC8); /*0x76321a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)Block,(gamemd::AbstractClass *)(1)); /*0x763221*/
  v6 = (gamemd::WaveClass *)(Block); /*0x763236*/
  v3 = (*(int ((unsigned char *)(**))(unsigned char *, WaveClass **))(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 84) + 16))(&(unsigned int *)((char *)&stru_A8EB00 + 84), &v6); /*0x76323a*/
  if ( v3 != -1 && v3 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 100) ) /*0x76324a*/
  {
    --*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 100); /*0x76324f*/
    for ( ; /*0x763255*/
          v3 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 100);
          *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 88) + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 88) + 4 * v3) )
    {
      ++v3; /*0x76325d*/
    }
  }
  (*(void (**)(char *))(*((unsigned int *)Block + 124) + 12))((char *)Block + 496); /*0x76327e*/
  v4 = (void *)*((unsigned int *)Block + 125); /*0x763281*/
  *((unsigned int *)Block + 124) = (unsigned int)(&vt_VectorClass); /*0x763284*/
  if ( v4 && *((unsigned char *)Block + 509) ) /*0x76328e*/
  {
    __3_YAXPAX_Z(v4); /*0x763296*/
    *((unsigned int *)Block + 125) = 0; /*0x76329e*/
  }
  *((unsigned char *)Block + 509) = 0; /*0x7632a7*/
  *((unsigned int *)Block + 126) = 0; /*0x7632ab*/
  ((ObjectClass *)((ObjectClass *)Block))->Dtor(); /*0x7632b2*/
  if ( (a2 & 1) != 0 ) /*0x7632be*/
    __3_YAXPAX_Z(Block); /*0x7632c1*/
  return &Block->ObjectClass; /*0x7632cb*/

}
} // namespace gamemd

// 0x75F330
namespace gamemd {
char WaveClass::DamageArea(ObjectClass * aP1)
{

  ObjectClass *v2; // ebx
  void *Owner; // eax
  unsigned int *v5; // ecx
  char *v6; // edi
  int v7; // eax
  int v8; // ebx
  unsigned int *v9; // esi
  unsigned int *v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // esi
  int v14; // edx
  ObjectClass *v16; // [esp+4h] [ebp-18h]
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h] BYREF

  Owner = (void *)(this->Owner);
  if ( Owner ) /*0x75f340*/
  {
    v5 = (unsigned int *)(aP1);
    v16 = v2; /*0x75f34a*/
    LOWORD(aP1) = *aP1 / 256; /*0x75f359*/
    HIWORD(aP1) = v5[1] / 256; /*0x75f372*/
    v6 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1); /*0x75f391*/
    v7 = (*(int ((void *)(**))(void *, unsigned int))(*(unsigned int *)this->Owner + 1016))(this->Owner, 0); /*0x75f395*/
    v8 = *(unsigned int *)v7; /*0x75f39b*/
    v17 = *(unsigned int *)(*(unsigned int *)v7 + 172); /*0x75f3a9*/
    v18 = *(unsigned int *)(*(unsigned int *)v7 + 152); /*0x75f3ad*/
    if ( (*((unsigned int *)v6 + 80) & 0x100) != 0 && this->WaveClass_field_BC >= dword_B725C8 * (v6[283] + 4) ) /*0x75f3d5*/
      v9 = (unsigned int *)*((unsigned int *)v6 + 58); /*0x75f3d7*/
    else
      v9 = (unsigned int *)*((unsigned int *)v6 + 57); /*0x75f3df*/
    for ( ; v9; v9 = (unsigned int *)v9[12] ) /*0x75f3e7*/
    {
      v10 = (unsigned int *)(this->Owner); /*0x75f3e9*/
      if ( v9 != v10 && *((unsigned char *)v9 + 144) && *((unsigned char *)v9 + 116) && !*((unsigned char *)v9 + 129) && (int)v9[27] > 0 ) /*0x75f413*/
        (*(void (**)(unsigned int *, int *, unsigned int, int, unsigned int *, unsigned int, unsigned int, unsigned int))(*v9 + 364))( /*0x75f42c*/
          v9,
          &v18,
          0,
          v17,
          v10,
          0,
          0,
          0);
    }
    v11 = *((unsigned int *)v6 + 17); /*0x75f439*/
    if ( v11 != -1 ) /*0x75f43f*/
    {
      v12 = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v11); /*0x75f447*/
      if ( *(unsigned char *)(v12 + 689) ) /*0x75f44a*/
      {
        aP1 = (gamemd::ObjectClass *)((unsigned int *)*((unsigned int *)v6 + 9)); /*0x75f45b*/
        CellChainReact(v16); /*0x75f45f*/
      }
      if ( *(unsigned char *)(v12 + 680) ) /*0x75f464*/
        BuildingClass::SellEffects((int)v6, *(unsigned int *)(v8 + 152)); /*0x75f477*/
    }
    LOBYTE(Owner) = ((CellClass *)((CellClass *)v6))->IsActiveOrNext(); /*0x75f47e*/
    if ( (unsigned char)Owner ) /*0x75f486*/
    {
      v13 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6092); /*0x75f497*/
      Owner = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99); /*0x75f4a3*/
      if ( (int)Owner < v13 ) /*0x75f4aa*/
        LOBYTE(Owner) = LayerClass::DestroyCliff((int *)&stru_87F5F0.__pad_58[416], v14, (int)v6); /*0x75f4b2*/
    }
  }
  return (char)Owner; /*0x75f4b7*/

}
} // namespace gamemd

// 0x75F7D0
namespace gamemd {
int WaveClass::ProcessWaveTick(int * a1, int * a2, int a3)
{

  int v3; // edx
  int result; // eax
  int i; // ebx

  AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)a1),(gamemd::ObjectTypeClass *)(a2), a3); /*0x75f7e2*/
  v3 = *a2; /*0x75f7ed*/
  a3 = *((unsigned int *)a1 + 128); /*0x75f7f9*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))(a2, &a3, 4, 0); /*0x75f7fd*/
  if ( result >= 0 ) /*0x75f802*/
  {
    for ( i = 0; i < a3; ++i ) /*0x75f80c*/
    {
      result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))(a2, *((unsigned int *)a1 + 125) + 4 * i, 4, 0); /*0x75f81f*/
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
  a2[3] = unk_7E972C; /*0x75f870*/
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
