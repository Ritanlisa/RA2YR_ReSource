// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Random_e4.hpp"
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
namespace gamemd {  // G42.18 ns repair
int WaveClass::LoadWaveData(int a2, int a3)
{

  int v3; // ebx
  int v4; // edi
  int Register; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  unsigned int *v10; // edx
  int v11; // esi
  unsigned int v13; // [esp+28h] [ebp-4h] BYREF

  v3 = a3; /*0x75f652*/
  v4 = a2; /*0x75f659*/
  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x75f664*/
  if ( Register >= 0 )
  {
    if ( v4 ) /*0x75f672*/
    {
      ObjectClass::Init((ObjectClass *)v4, (int)&a3); /*0x75f67b*/
      v4->u32_14C = 0; /*0x75f680*/
      v4->AbstractClass_1A8 = 0; /*0x75f68c*/
      FrameSnapshot::Init(&v4->u32_1D8); /*0x75f692*/
      WaveClass::Constructor_7632D0(&v4->q_1F0, 0, 0); /*0x75f69f*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_39797d) */  /*0x75f6a4*/
      /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_39797d) */  /*0x75f6aa*/
      /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_39797d) */  /*0x75f6b1*/
      v4->ptr_4 = &off_7F6BC8; /*0x75f6b8*/
    }
    v4->u32_14C = v4->q_B0 == 3 ? v4 + 384 : v4 + 336;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v4->u32_AC); /*0x75f6ee*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v4->q1D4); /*0x75f6ff*/
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
              (int *)(v4->u32_1F4 + 4 * v11++));
          while ( v11 < a2 ); /*0x75f7b8*/
        }
      }
      else
      {
        while ( 1 ) /*0x75f737*/
        {
          Register = (*(int (**)(int, unsigned int *, int, unsigned int))(*(unsigned int *)v3 + 12))(v3, &v13, 4, 0); /*0x75f737*/
          if ( Register < 0 ) /*0x75f73b*/
            break; /*0x75f73b*/
          v7 = v4->u8_1F8; /*0x75f73d*/
          if ( v4->q_200 < v7 /*0x75f76e*/
            || (*(unsigned char *)(v4 + 509) || !v7)
            && (v8 = v4->q204, v8 > 0)
            && (*(unsigned __int8 (**)(int, int, unsigned int))(v4->q_1F0 + 8))(v4 + 496, v7 + v8, 0) )
          {
            v9 = *(unsigned int *)(v4 + 512); /*0x75f775*/
            v10 = *(unsigned int **)(v4 + 500); /*0x75f778*/
            *(unsigned int *)(v4 + 512) = v9 + 1; /*0x75f77e*/
            v10[v9] = v13; /*0x75f785*/
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
}  // G42.18 ns repair
// 0x763200
namespace gamemd {
WaveClass * WaveClass::ddtor(char a2, int aP1, int a1, int a3)
{

  int v3; // eax
  void *v4; // eax
  WaveClass *v6; // [esp+4h] [ebp-4h] BYREF

  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F6BD0) */  /*0x763206*/
  /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7F6BD0) */  /*0x76320c*/
  /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7F6BD0) */  /*0x763213*/
  aP1->ptr_C = &off_7F6BC8; /*0x76321a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)aP1, 1); /*0x763221*/
  v6 = (gamemd::WaveClass *)(aP1); /*0x763236*/
  v3 = (*(int (**)(unsigned char *, WaveClass **))(*(unsigned int *)&DataGlobal_A8EB00[312] + 16))(&DataGlobal_A8EB00[312], &v6); /*0x76323a*/
  if ( v3 != -1 && v3 < *(int *)&DataGlobal_A8EB00[328] ) /*0x76324a*/
  {
    --*(unsigned int *)&DataGlobal_A8EB00[328]; /*0x76324f*/
    for ( ; /*0x763255*/
    v3 < *(int *)&DataGlobal_A8EB64;
    *(unsigned int *)(*(unsigned int *)&DataGlobal_A8EB58 + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&DataGlobal_A8EB58 + 4 * v3) )
    {
      ++v3; /*0x76325d*/
    }
  }
  (*(void (**)(char *))(*((unsigned int *)aP1 + 124) + 12))((char *)aP1 + 496); /*0x76327e*/
  v4 = (void *)*((unsigned int *)aP1 + 125); /*0x763281*/
  *((unsigned int *)aP1 + 124) = (unsigned int)(&g_ptr_7E8500); /*0x763284*/
  if ( v4 && *((unsigned char *)aP1 + 509) ) /*0x76328e*/
  {
    __3_YAXPAX_Z(v4); /*0x763296*/
    *((unsigned int *)aP1 + 125) = 0; /*0x76329e*/
  }
  *((unsigned char *)aP1 + 509) = 0; /*0x7632a7*/
  *((unsigned int *)aP1 + 126) = 0; /*0x7632ab*/
  ((ObjectClass *)aP1)->Dtor(); /*0x7632b2*/
  if ( (aP1 & 1) != 0 ) /*0x7632be*/
    __3_YAXPAX_Z(aP1); /*0x7632c1*/
  return &aP1->ObjectClass; /*0x7632cb*/

}
} // namespace gamemd

// 0x75F330
namespace gamemd {
char WaveClass::DamageArea(ObjectClass * aP1)
{

  ObjectClass *v2; // ebx
  int Owner; // eax
  unsigned int *v5; // ecx
  char *v6; // edi
  unsigned int *v7; // eax
  unsigned int *v8; // ebx
  int v9; // esi
  int v10; // eax
  int v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // esi
  int v14; // edx
  ObjectClass *v16; // [esp+4h] [ebp-18h]
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h] BYREF

  Owner = this->Owner; /*0x75f338*/
  if ( Owner ) /*0x75f340*/
  {
    v5 = aP1; /*0x75f346*/
    v16 = v2; /*0x75f34a*/
    LOWORD(aP1) = *aP1 / 256; /*0x75f359*/
    HIWORD(aP1) = v5->ptr_4 / 256; /*0x75f372*/
    v6 = (char *)((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&aP1); /*0x75f391*/
    v7 = (unsigned int *)(*(int (**)(int, unsigned int))(*(unsigned int *)this->Owner + 1016))(this->Owner, 0); /*0x75f395*/
    v8 = (unsigned int *)*v7; /*0x75f39b*/
    v17 = *(unsigned int *)(*v7 + 172); /*0x75f3a9*/
    v18 = *(unsigned int *)(*v7 + 152); /*0x75f3ad*/
    if ( (*(&v6->u32_140) & 0x100) != 0 && this->WaveClass_field_BC >= dword_B725C8 * (v6[283] + 4) ) /*0x75f3d5*/
      v9 = v6->q0E8; /*0x75f3d7*/
    else
      v9 = v6->u32_E4; /*0x75f3df*/
    for ( ; v9; v9 = *(unsigned int *)(v9 + 48) ) /*0x75f3e7*/
    {
      v10 = this->Owner; /*0x75f3e9*/
      if ( v9 != v10 && *(unsigned char *)(v9 + 144) && *(unsigned char *)(v9 + 116) && !*(unsigned char *)(v9 + 129) && *(int *)(v9 + 108) > 0 ) /*0x75f413*/
        (*(void (**)(int, int *, unsigned int, int, int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v9 + 364))( /*0x75f42c*/
          v9,
          &v18,
          0,
          v17,
          v10,
          0,
          0,
          0);
    }
    v11 = v6->u32_44; /*0x75f439*/
    if ( v11 != -1 ) /*0x75f43f*/
    {
      v12 = *(unsigned __int8 **)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v11); /*0x75f447*/
      if ( v12[689] ) /*0x75f44a*/
      {
        aP1 = (unsigned int *)v6->ptr_24; /*0x75f45b*/
        CellChainReact(v16); /*0x75f45f*/
      }
      if ( v12[680] ) /*0x75f464*/
        BuildingClass::SellEffects((int)v6, v8[38]); /*0x75f477*/
    }
    (Owner) = ((Owner) & ~0xFF) | ((((CellClass *)v6)->IsActiveOrNext()) & 0xFF); /*0x75f47e*/
    if ( (unsigned char)Owner ) /*0x75f486*/
    {
      v13 = dword_8871E0->RadLightFactor[1]; /*0x75f497*/
      Owner = ((Random *)&dword_A8B230[14].NeedsSaveOrLink)->Range(0, 99); /*0x75f4a3*/
      if ( Owner < v13 ) /*0x75f4aa*/
        LOBYTE(Owner) = LayerClass::DestroyCliff(&dword_87F7E8.field_0, v14, (int)v6); /*0x75f4b2*/
    }
  }
  return Owner; /*0x75f4b7*/

}
} // namespace gamemd

// 0x75F7D0
namespace gamemd {
int WaveClass::ProcessWaveTick(int * a1, int * a2, int a3)
{
  int v3; // edx
  int result; // eax
  int i; // ebx

  AbstractClass::SaveLoad_Prefix((int *)a1, a2, a3); /*0x75f7e2*/
  v3 = *a2; /*0x75f7ed*/
  a3 = *((unsigned int *)a1 + 128); /*0x75f7f9*/
  result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v3 + 16))(a2, &a3, 4, 0); /*0x75f7fd*/
  if ( result >= 0 ) /*0x75f802*/
  {
    for ( i = 0; i < a3; ++i ) /*0x75f80c*/
    {
      result = (*(int (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, *((unsigned int *)a1 + 125) + 4 * i, 4, 0); /*0x75f81f*/
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
