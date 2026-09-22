// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x62CEC0
namespace gamemd {
void ParticleClass::DrawParticle(int * a2, int * a3)
{
{
  __int16 v20; // dx
  if ( (unsigned int)dword_ABCD44 >= PingPongBuffer::GetWriteOffset() || *(_DWORD *)(this->ParticleClass_field_0xAC + 744) ) /*0x62cedc*/
  {
  int v4; // eax
    if ( g_lParam || (v4 = *(_DWORD *)(this->ParticleClass_field_0xAC + 788), v4 != 1) && v4 != 3 ) /*0x62cf0b*/
    {
      if ( ArmageddonMode /*0x62cf58*/
        || !g_hWnd
        || (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) == 0
  int v27; // [esp+28h] [ebp-Ch] BYREF
        || (v27 = this->q027,
  int v28; // [esp+2Ch] [ebp-8h]
            v28 = this->q028,
  int v29; // [esp+30h] [ebp-4h]
            v29 = this->q029,
            !Game::Stub3((int)&v27)) )
      {
        int v5 = *(_DWORD *)(this->ParticleClass_field_0xAC + 788); /*0x62cf6b*/
        if ( v5 == 3 || v5 == 4 ) /*0x62cf7d*/
        {
  int v26[3]; // [esp+1Ch] [ebp-18h] BYREF
          v26[0] = this->q027; /*0x62d036*/
          v26[1] = this->q028; /*0x62d048*/
          v26[2] = this->q029; /*0x62d054*/
          Coord::To_Screen(g_TacticalClass_Instance, v26, &v27); /*0x62d058*/
          int v12 = g_Map_VisibleRect + v28; /*0x62d06b*/
          v28 += g_Map_VisibleRect; /*0x62d071*/
          if ( v27 >= *a3 && v27 < *a3 + a3[2] ) /*0x62d086*/
          {
            int v13 = a3[1]; /*0x62d08c*/
            if ( v12 >= v13 && v12 < v13 + a3[3] ) /*0x62d09e*/
            {
  int v14; // ebx
              v14 = *(unsigned __int16 *)StreamClass::ReadAndSeek( /*0x62d0b6*/
                                           (int)g_VisibleSurfaceDescriptor,
                                           v27,
                                           v12 - *((_DWORD *)g_VisibleSurfaceDescriptor + 1));
              if ( (_WORD)v14 ) /*0x62d0bb*/
              {
                int v15 = v28 - *((_DWORD *)g_ZBufferDescriptor + 1); /*0x62d0d4*/
                v26[0] = v27; /*0x62d0d9*/
                int v16 = ZCoordToScreenY(this->q029); /*0x62d0e8*/
  int v17; // esi
                v17 = (unsigned __int16)(*((_WORD *)g_ZBufferDescriptor + 2) + *((_WORD *)g_ZBufferDescriptor + 18) - v28) /*0x62d10f*/
                    - v16
                    - 50;
                if ( v17 < *(unsigned __int16 *)Audio::GetSamplePosition((int)g_ZBufferDescriptor, v26[0], v15) ) /*0x62d11e*/
                {
                  IUnknown *v18 = this->ParticleClass_field_0xB4; /*0x62d124*/
                  if ( v18 ) /*0x62d12c*/
                    int v19 = *(_DWORD *)(this->ParticleClass_field_0xAC + 700) + 3 * v18; /*0x62d13f*/
                  else
                    v19 = (int)this + 176; /*0x62d12e*/
                  v20 = *(_WORD *)v19; /*0x62d145*/
                  char v21 = *(_BYTE *)(v19 + 2); /*0x62d148*/
                  LOWORD(v26[0]) = v20; /*0x62d14b*/
                  BYTE2(v26[0]) = v21; /*0x62d15a*/
                  double v22 = 1.0 - this->q017; /*0x62d16d*/
                  int v23 = Math::RoundToInt(v22); /*0x62d1c9*/
                  int v24 = Math::RoundToInt(v22); /*0x62d1ea*/
                  int v25 = Math::RoundToInt(v22); /*0x62d215*/
                  if ( v14 < 127 ) /*0x62d21f*/
                  {
                    v23 = (v14 * v23) >> 7; /*0x62d22a*/
                    v24 = (v14 * v24) >> 7; /*0x62d22d*/
                    v25 = (v14 * v25) >> 7; /*0x62d230*/
                  }
                  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 36))( /*0x62d288*/
                    g_DSurface_Hidden_2,
                    &v27,
                    (unsigned __int16)(v23 >> g_BitShift_Green_0 << g_DDraw_BlueMask)
                  | (unsigned __int16)(v24 >> g_BitMask_Blue << g_BitMask_Green)
                  | (unsigned __int16)(v25 >> g_BitShift_Blue << g_BitShift_Blue));
                }
              }
            }
          }
        }
        else
        {
          int v6 = (*(int (__thiscall **)(void *))(this->isOnMap)(this); /*0x62cf87*/
          int v7 = -15 - ZCoordToScreenY(v6); /*0x62cf9d*/
          int v8 = (*(int (__thiscall **)(void *))(this->health)(this); /*0x62cfa2*/
          if ( v8 ) /*0x62cfa6*/
          {
            int v9 = 10240; /*0x62cfb0*/
            unsigned int v10 = (*(int (__thiscall **)(void *))(this->q7A0)(this); /*0x62cfb5*/
            if ( g_lParam == 2 ) /*0x62cfc2*/
            {
              char v11 = this->Translucency; /*0x62cfc4*/
              if ( v11 == 25 ) /*0x62cfcd*/
              {
                v9 = 10242; /*0x62cfcf*/
              }
              else if ( v11 == 50 ) /*0x62cfd9*/
              {
                v9 = 10244; /*0x62cfdb*/
              }
              else if ( v11 >= 75 ) /*0x62cfe5*/
              {
                v9 = 10246; /*0x62cfe7*/
              }
            }
            DrawToSurfaceSHP( /*0x62d01d*/
              g_DSurface_Hidden_2,
              DataGlobal_87F6C0,
              v8,
              v10,
              a2,
              a3,
              v9 | 0xE00,
              0,
              v7,
              2,
              1000,
              0,
              0,
              0,
              0,
              0);
          }
        }
      }
    }
  }
}
} // namespace gamemd

// 0x62D5E0
namespace gamemd {
void ParticleClass::AdjustHeight()
{
{
  int GroundHeight; // edi
  MouseClass *v10; // [esp+4h] [ebp-18h] BYREF
  int var14; // [esp+8h] [ebp-14h]

  int v2 = *((_DWORD *)this->field_AC + 197); /*0x62d5ec*/
  if ( v2 ) /*0x62d5f5*/
  {
    int v3 = v2 - 1; /*0x62d5fb*/
    if ( v3 ) /*0x62d5fc*/
    {
      if ( v3 == 1 ) /*0x62d603*/
      {
        double v4 = *(float *)this->__pad_E4; /*0x62d609*/
  _DWORD v12[3]; // [esp+10h] [ebp-Ch] BYREF
        v12[0] = *(_DWORD *)&this->__pad_28[116]; /*0x62d623*/
        int v5 = *(_DWORD *)&this->__pad_28[120]; /*0x62d627*/
        v12[2] = *(_DWORD *)&this->__pad_28[124]; /*0x62d630*/
        int v6 = *(_DWORD *)&this->__pad_28[124]; /*0x62d636*/
        v10 = (MouseClass *)v12[0]; /*0x62d639*/
        var14 = v5; /*0x62d640*/
        int v11 = v6; /*0x62d644*/
        v12[1] = v5; /*0x62d648*/
        if ( v4 > 0.0 ) /*0x62d64c*/
        {
          int v7 = *(_DWORD *)&this->__pad_E4[36]; /*0x62d654*/
          v10 = (MouseClass *)(*(_DWORD *)&this->__pad_E4[28] + v12[0]); /*0x62d65c*/
          var14 = *(_DWORD *)&this->__pad_E4[32] + v5; /*0x62d66a*/
          v11 = v7 + v6; /*0x62d66e*/
        }
        if ( *(float *)this->__pad_E4 > 0.0 ) /*0x62d683*/
        {
          GroundHeight = Cell::GetGroundHeight((IUnknown *)v12); /*0x62d69e*/
          if ( Cell::GetGroundHeight((IUnknown *)&v10) > GroundHeight ) /*0x62d6a7*/
          {
            this->__pad_128[5] = 1; /*0x62d6ab*/
            this->__pad_128[9] = 1; /*0x62d6b1*/
          }
        }
        (*(void (__thiscall **)(ParticleClass *, MouseClass **))(*(_DWORD *)this->__pad_0 + 436))(this, &v10); /*0x62d6c0*/
      }
    }
    else
    {
      ParticleClass::CheckWaterImpact(this); /*0x62d6cf*/
    }
  }
  else
  {
    BuildingClass::UpdateFloatPosition(this); /*0x62d6db*/
  }
}
} // namespace gamemd

// 0x62D710
namespace gamemd {
int * ParticleClass::CheckDrawFlags(int a1)
{
{
    if ( (DataGlobal_AC4998 & 1) == 0 )
  {
    DataGlobal_AC4998 |= 1u;
    DataGlobal_AC49D0 = 2147450879;
    atexit(nullsub_214);
  }
    return &DataGlobal_AC49D0;
}
}
} // namespace gamemd

// 0x62D770
namespace gamemd {
int ParticleClass::CheckStateFlag()
{
return 3;
}
} // namespace gamemd

// 0x62D7A0
namespace gamemd {
int ParticleClass::LoadParticleData(ObjectClass * aP1, int aP1a)
{
{
    int result;
    result = BuildingClass::SaveLoad_Register((AnimClass *)this);
    if ( result >= 0 )
  {
    if ( aP1 )
    {
    ObjectClass::Init(aP1, (AbstractClass *)&aP1a);
    *(int *)aP1->__pad_0 = (unsigned int)vt_ParticleClass;
    *(int *)&aP1->__pad_0[4] = (unsigned int)vt_ParticleClass;
    *(int *)&aP1->__pad_0[8] = (unsigned int)vt_ParticleClass;
    *(int *)&aP1->__pad_0[12] = &vt_ParticleClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP1[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP1[1].spawnStatus);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x62D810
namespace gamemd {
int ParticleClass::CheckCollisionFlags(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    LOBYTE(aP0->ChargerBarrels[11]) = 1;
    return result;
}
}
} // namespace gamemd

// 0x62D930
namespace gamemd {
int ParticleClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448652;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}
} // namespace gamemd

// 0x62D970
namespace gamemd {
int ParticleClass::GetObjectSize()
{
return 312;
}
} // namespace gamemd

// 0x62D980
namespace gamemd {
int ParticleClass::GetTypeIdentifier()
{
return 22;
}
} // namespace gamemd
