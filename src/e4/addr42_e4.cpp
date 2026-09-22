// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4202F0_e4.hpp"
#include "e4/classes/E4Recv_425670_e4.hpp"
#include "e4/classes/E4Recv_426620_e4.hpp"
#include "e4/classes/E4Recv_4266D0_e4.hpp"
#include "e4/classes/E4Recv_426990_e4.hpp"
#include "e4/classes/E4Recv_426A73_e4.hpp"
#include "e4/classes/E4Recv_426E80_e4.hpp"
#include "e4/classes/E4Recv_426ED0_e4.hpp"
#include "e4/classes/E4Recv_426FD0_e4.hpp"
#include "e4/classes/E4Recv_429360_e4.hpp"
#include "e4/classes/E4Recv_429400_e4.hpp"
#include "e4/classes/E4Recv_429420_e4.hpp"
#include "e4/classes/E4Recv_429450_e4.hpp"
#include "e4/classes/E4Recv_429480_e4.hpp"
#include "e4/classes/E4Recv_4294B0_e4.hpp"
#include "e4/classes/E4Recv_429500_e4.hpp"
#include "e4/classes/E4Recv_42A900_e4.hpp"
#include "e4/classes/E4Recv_42C900_e4.hpp"
#include "e4/classes/E4Recv_42CCD0_e4.hpp"
#include "e4/classes/E4Recv_42CF80_e4.hpp"
#include "e4/classes/E4Recv_42D830_e4.hpp"
#include "e4/classes/E4Recv_42E800_e4.hpp"
#include "e4/classes/E4Recv_42E990_e4.hpp"
#include "e4/classes/E4Recv_42EA30_e4.hpp"
#include "e4/classes/E4Recv_42EAD0_e4.hpp"
#include "e4/classes/Iostream_init_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x420140
namespace gamemd {
unsigned int * CreateFractalNoise(CCINIClass * aP0)
{
{
  CCINIClass *v2; // ecx
  __int16 v9; // cx
  int v1 = 0; /*0x420149*/
  if ( *(int *)&stru_87C374[56604] <= 0 ) /*0x420152*/
  {
LABEL_5:
    int v3 = __2_YAPAXI_Z(0x20008u); /*0x42016e*/
    _DWORD * v4 = (_DWORD *)v3; /*0x420178*/
    if ( v3 ) /*0x42017f*/
    {
      *(_DWORD *)(v3 + 0x20000) = aP0; /*0x420181*/
      int v5 = 0; /*0x420187*/
      *(_DWORD *)(v3 + 131076) = 0; /*0x420189*/
      int v6 = (int)&aP0[-1].unknown54 + 3; /*0x420193*/
      _WORD * v7 = (_WORD *)v3; /*0x420194*/
      do /*0x4201d3*/
      {
        int v8 = v6 * (v5 >> 8) * (unsigned __int8)v5 / 32258; /*0x4201ba*/
        if ( v8 > v6 ) /*0x4201be*/
          LOBYTE(v8) = (_BYTE)aP0 - 1; /*0x4201c0*/
        LOBYTE(v9) = 0; /*0x4201c2*/
        ++v5; /*0x4201c4*/
        HIBYTE(v9) = v8; /*0x4201c5*/
        *v7++ = v9; /*0x4201c7*/
      }
      while ( v5 <= 0xFFFF ); /*0x4201d3*/
    }
    else
    {
      v4 = 0; /*0x4201f7*/
    }
    if ( *(int *)&stru_87C374[56604] < *(int *)&stru_87C374[56596] /*0x420230*/
      || (stru_87C374[56601] || !*(_DWORD *)&stru_87C374[56596])
      && *(int *)&stru_87C374[56608] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87C374[56588] + 8))(
           &stru_87C374[56588],
           *(_DWORD *)&stru_87C374[56596] + *(_DWORD *)&stru_87C374[56608],
           0) )
    {
      int v11 = (*(_DWORD *)&stru_87C374[56604])++; /*0x42023d*/
      *(_DWORD *)(*(_DWORD *)&stru_87C374[56592] + 4 * v11) = v4; /*0x42024c*/
    }
    ++v4[32769]; /*0x420258*/
    return v4; /*0x42025e*/
  }
  else
  {
    v2 = *(CCINIClass **)&stru_87C374[56592]; /*0x42015a*/
    while ( *(CCINIClass **)(*(_DWORD *)v2->__pad_0 + 0x20000) != aP0 ) /*0x420164*/
    {
      ++v1; /*0x420166*/
      v2 = (CCINIClass *)((char *)v2 + 4); /*0x420167*/
      if ( v1 >= *(int *)&stru_87C374[56604] ) /*0x42016c*/
        goto LABEL_5; /*0x42016c*/
    }
    ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374[56592] + 4 * v1) + 131076); /*0x4201e5*/
    return *(_DWORD **)(*(_DWORD *)&stru_87C374[56592] + 4 * v1); /*0x4201f1*/
  }
}
} // namespace gamemd

// 0x420F40
namespace gamemd {
AbstractClass * * UpdateSpotlightsFoo(int * a1, int * a2)
{
{
  int result; // eax
  int *FoundationSize; // edx
  int SubFile; // esi
  unsigned __int8 *v27; // esi
  unsigned __int8 v31; // cl
  unsigned __int8 v35; // cl
  unsigned __int8 v45; // [esp+20h] [ebp-B0h]
  unsigned __int8 v46; // [esp+20h] [ebp-B0h]
  char **v61; // [esp+64h] [ebp-6Ch]

  result = g_AlphaShapeLimit; /*0x420f46*/
  int * v3 = a1; /*0x420f4d*/
  int v4 = 0; /*0x420f4f*/
  int * v54 = a2; /*0x420f51*/
  int * v59 = a1; /*0x420f57*/
  int v44 = 0; /*0x420f5b*/
  if ( g_AlphaShapeLimit > 0 ) /*0x420f5f*/
  {
    while ( 1 ) /*0x420f72*/
    {
      int v5 = *((_DWORD *)DataGlobal_88A0F4 + v4); /*0x420f72*/
      if ( !*(_BYTE *)(v5 + 60) ) /*0x420f75*/
      {
        unsigned int v50 = *(_DWORD *)(v5 + 40); /*0x420f8b*/
        int v51 = *(_DWORD *)(v5 + 44); /*0x420f92*/
        int v52 = *(_DWORD *)(v5 + 48); /*0x420f99*/
        int v53 = *(_DWORD *)(v5 + 52); /*0x420fa0*/
        int v6 = v51 - (unsigned int)g_TacticalClass_Instance[45].__tail_0; /*0x420fb6*/
        v50 = DSurface_ViewBounds + v50 - (unsigned int)g_TacticalClass_Instance[44].__tail_0; /*0x420fca*/
        v51 = g_Map_VisibleRect + v6; /*0x420fd2*/
  int v70[4]; // [esp+A0h] [ebp-30h] BYREF
        int * v7 = ClipRectIntersection(v70, (int *)&v50, v54, 0, 0); /*0x420fe2*/
  int v68[4]; // [esp+88h] [ebp-48h] BYREF
        v68[0] = *v7; /*0x420fe9*/
        v68[1] = v7[1]; /*0x420ff7*/
        v68[2] = v7[2]; /*0x421001*/
        int v8 = v3[1]; /*0x421008*/
        int v9 = v7[3]; /*0x42100b*/
        int v10 = *v3; /*0x42100e*/
        v68[3] = v9; /*0x421010*/
        int v63 = v8; /*0x42101b*/
        int v62 = v10; /*0x42102e*/
        int v64 = 60; /*0x421032*/
        int v65 = 30; /*0x42103d*/
  int v71[4]; // [esp+B0h] [ebp-20h] BYREF
        int * v11 = ClipRectIntersection(v71, v68, &v62, 0, 0); /*0x42104d*/
        int v12 = *v11; /*0x42104f*/
        int v55 = *v11; /*0x421051*/
        int v13 = v11[1]; /*0x421055*/
        int v14 = v11[2]; /*0x421058*/
        int v15 = v11[3]; /*0x42105d*/
        int v56 = v14; /*0x421060*/
        int v57 = v15; /*0x421064*/
        if ( v14 > 0 && v15 > 0 ) /*0x421070*/
        {
  int v42; // [esp+14h] [ebp-BCh]
          int v16 = v13 - v63; /*0x421082*/
          unsigned int v17 = v50; /*0x42108a*/
          int v69 = v12 - v62; /*0x42108e*/
          int v18 = *((_DWORD *)DataGlobal_88A0F4 + v4); /*0x421099*/
          int v58 = v51; /*0x42109c*/
          v61 = *(char ***)(v18 + 56); /*0x4210ad*/
  int v72[4]; // [esp+C0h] [ebp-10h] BYREF
          FoundationSize = Building::GetFoundationSize(v72, 0); /*0x4210b6*/
          int v41 = v13; /*0x4210b8*/
          int v20 = *FoundationSize; /*0x4210bc*/
          int v66 = FoundationSize[1]; /*0x4210c1*/
          int v21 = FoundationSize[2]; /*0x4210c8*/
          int v67 = FoundationSize[3]; /*0x4210ce*/
          if ( v13 <= v58 + v66 ) /*0x4210dd*/
            v41 = v58 + v66; /*0x4210df*/
          int v60 = v41 - v58 - v66; /*0x4210fd*/
          int v37 = v57 + v13; /*0x421118*/
          if ( v57 + v13 >= v66 + v67 + v58 ) /*0x42111c*/
            v37 = v66 + v67 + v58; /*0x42111e*/
          int v40 = v55; /*0x42112b*/
          if ( v55 <= (int)(v17 + v20) ) /*0x42112f*/
            v40 = v17 + v20; /*0x421131*/
          int v22 = v40 - v17 - v20; /*0x421144*/
          int v23 = v55 + v56; /*0x42114e*/
          if ( v55 + v56 >= (int)(v20 + v17 + v21) ) /*0x421156*/
          {
            v42 = v20 + v17 + v21; /*0x42115e*/
            v23 = v42; /*0x421162*/
          }
          else
          {
            v42 = v55 + v56; /*0x421158*/
          }
          int v47 = v40 + *((_DWORD *)g_VisibleSurfaceDescriptor + 10) - v23; /*0x421187*/
          int v43 = 60 - v56; /*0x421199*/
          int v48 = v40 + v21 - v23; /*0x4211a1*/
          char * v49 = (char *)&unk_7E2B20 + 60 * v16 + v69; /*0x4211b0*/
          SubFile = MixFileClass::GetSubFile(v61, 0); /*0x4211c9*/
          _WORD * v25 = (_WORD *)StreamClass::ReadAndSeek((int)g_VisibleSurfaceDescriptor, v40, v41 - g_Map_VisibleRect); /*0x4211d3*/
          MouseClass *v26 = g_VisibleSurfaceDescriptor; /*0x4211d8*/
          v27 = (unsigned __int8 *)(v22 + v60 * v21 + SubFile); /*0x4211ed*/
          if ( (unsigned int)&v25[(v37 - v41) * *((_DWORD *)g_VisibleSurfaceDescriptor + 10) + 2 + v42 + 0x7FFFFFFF * v40] < *((_DWORD *)g_VisibleSurfaceDescriptor + 7) ) /*0x421211*/
          {
            if ( v41 < v37 ) /*0x4212bb*/
            {
              char * v33 = v49; /*0x4212c1*/
              int v39 = v37 - v41; /*0x4212c5*/
              do /*0x421324*/
              {
                if ( v40 < v42 ) /*0x4212cf*/
                {
                  int v34 = v42 - v40; /*0x4212d3*/
                  do /*0x421306*/
                  {
                    v35 = *v27++; /*0x4212d5*/
                    v46 = v35; /*0x4212d8*/
                    char v36 = *v33++; /*0x4212dc*/
                    if ( v36 != 32 ) /*0x4212e2*/
                      *v25 = (unsigned __int8)DataGlobal_88A118[256 * v46 + (unsigned __int16)*v25]; /*0x4212ff*/
                    ++v25; /*0x421302*/
                    --v34; /*0x421305*/
                  }
                  while ( v34 ); /*0x421306*/
                }
                v27 += v48; /*0x421314*/
                v25 += v47; /*0x421316*/
                v33 += v43; /*0x42131d*/
                --v39; /*0x421320*/
              }
              while ( v39 ); /*0x421324*/
            }
          }
          else if ( v41 < v37 ) /*0x421221*/
          {
            char * v28 = v49; /*0x42122b*/
            int v38 = v37 - v41; /*0x42122f*/
            Coord *v29 = v40; /*0x421233*/
            do /*0x4212ad*/
            {
              if ( v29 < v42 ) /*0x421239*/
              {
                int v30 = v42 - v29; /*0x42123d*/
                do /*0x421281*/
                {
                  v31 = *v27++; /*0x42123f*/
                  v45 = v31; /*0x421242*/
                  char v32 = *v28++; /*0x421246*/
                  if ( v32 != 32 ) /*0x42124d*/
                  {
                    *v25 = (unsigned __int8)DataGlobal_88A118[256 * v45 + (unsigned __int16)*v25]; /*0x42126a*/
                    v26 = g_VisibleSurfaceDescriptor; /*0x42126d*/
                  }
                  if ( (unsigned int)++v25 >= v26[7] ) /*0x42127b*/
                    v25 = (_WORD *)((char *)v25 - v26[8]); /*0x42127d*/
                  --v30; /*0x421280*/
                }
                while ( v30 ); /*0x421281*/
                v29 = v40; /*0x421283*/
              }
              v27 += v48; /*0x42128b*/
              v28 += v43; /*0x421291*/
              v25 += v47; /*0x421297*/
              if ( (unsigned int)v25 >= v26[7] ) /*0x42129f*/
                v25 = (_WORD *)((char *)v25 - v26[8]); /*0x4212a1*/
              --v38; /*0x4212a9*/
            }
            while ( v38 ); /*0x4212ad*/
          }
          v4 = v44; /*0x421326*/
        }
      }
      result = g_AlphaShapeLimit; /*0x42132a*/
      v44 = ++v4; /*0x421332*/
      if ( v4 >= g_AlphaShapeLimit ) /*0x421336*/
        break; /*0x421336*/
      v3 = v59; /*0x420f69*/
    }
  }
  return result; /*0x42133e*/
}
} // namespace gamemd

// 0x421B60
namespace gamemd {
unsigned int * ClipRectIntersection(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, MapClass * aP3, unsigned int * a4)
{
{
  _DWORD *result; // eax
  AbstractClass *v6; // ebx
  result = &aP0->field_0; /*0x421b63*/
  v6 = (AbstractClass *)aP2->field_0; /*0x421b6f*/
  int v7 = aP2->field_4; /*0x421b71*/
  int v16 = aP2->field_8; /*0x421b77*/
  int v17 = aP2->field_C; /*0x421b7e*/
  int v8 = aP1->field_8; /*0x421b82*/
  if ( v8 <= 0 ) /*0x421b87*/
    goto LABEL_23; /*0x421b87*/
  int v15 = aP1->field_C; /*0x421b92*/
  if ( v15 <= 0 || aP2->field_8 <= 0 || aP2->field_C <= 0 ) /*0x421bac*/
    goto LABEL_23; /*0x421bac*/
  int v9 = aP1->field_0; /*0x421bb2*/
  if ( (int)v6 < aP1->field_0 ) /*0x421bb6*/
  {
    char * v10 = &v6->__pad_0[v16 - v9]; /*0x421bbe*/
    v6 = (AbstractClass *)aP1->field_0; /*0x421bc0*/
    v16 = (int)v10; /*0x421bc2*/
  }
  if ( v16 < 1 ) /*0x421bcb*/
    goto LABEL_23; /*0x421bcb*/
  int v11 = aP1->field_4; /*0x421bd1*/
  if ( v7 < v11 ) /*0x421bda*/
  {
    int v12 = v7 - v11 + v17; /*0x421be2*/
    v7 = v11; /*0x421be4*/
    v17 = v12; /*0x421be6*/
  }
  if ( v17 < 1 ) /*0x421bef*/
    goto LABEL_23; /*0x421bef*/
  int v13 = (int)&v6->__pad_0[v16] <= v9 + v8 ? v16 : v8 + v9 - (_DWORD)v6;
  if ( v13 < 1 ) /*0x421c0b*/
    goto LABEL_23; /*0x421c0b*/
  int v14 = v17; /*0x421c17*/
  if ( v17 + v7 > v15 + v11 ) /*0x421c20*/
    v14 = v15 + v11 - v7; /*0x421c24*/
  if ( v14 < 1 ) /*0x421c29*/
  {
LABEL_23:
    *result = 0; /*0x421c6e*/
    result[1] = 0; /*0x421c72*/
    result[2] = 0; /*0x421c75*/
    result[3] = 0; /*0x421c78*/
  }
  else
  {
    if ( aP3 ) /*0x421c31*/
      aP3->field_0 += aP2->field_0 - (_DWORD)v6; /*0x421c3c*/
    if ( a4 ) /*0x421c44*/
      *a4 += aP2->field_4 - v7; /*0x421c4f*/
    *result = v6; /*0x421c53*/
    result[1] = v7; /*0x421c55*/
    result[2] = v13; /*0x421c59*/
    result[3] = v14; /*0x421c5c*/
  }
  return result; /*0x421c58*/
}
} // namespace gamemd

// 0x424CE0
namespace gamemd {
void* ProductionCompletionCallback()
{
// Production completion callback (543B). Handles audio, special building anims, unit creation.
{
  IUnknown *v5; // ebx
  void **v7; // ebp
  AnimClass *v13; // eax
  int *p_Location_X; // esi
  __int16 *v15; // ebx
  int v18; // [esp+Ch] [ebp-24h] BYREF
  (*(void (__thiscall **)(BuildingClass_Full *, int))(*(_DWORD *)this->_pad_base + 292))(this, 2); /*0x424ceb*/
  if ( BYTE2(this->IronTintTimer_Padding) || *(_DWORD *)(this->MissionTimer_StartTime + 760) == -1 ) /*0x424d08*/
  {
    AudioController::Stop((int *)((char *)&this->IronTintTimer_TimeLeft + 2)); /*0x424d38*/
  }
  else
  {
    int v2 = (*(int (__thiscall **)(BuildingClass_Full *, int *))(*(_DWORD *)this->_pad_base + 72))(this, &v18); /*0x424d1a*/
    StartAudioControllerAt(*(_DWORD *)(this->MissionTimer_StartTime + 760), v2, (int)&this->IronTintTimer_TimeLeft + 2); /*0x424d2b*/
  }
  AudioController::Stop(&this->_pad_1A4[18]); /*0x424d43*/
  if ( !*(_DWORD *)(this->MissionTimer_StartTime + 664) ) /*0x424d4e*/
    CreateUnitOnCompletion(this); /*0x424d5a*/
  int v3; // eax
  LOBYTE(v3) = BYTE2(this->IronTintTimer_Padding); /*0x424d5f*/
  if ( !(_BYTE)v3 ) /*0x424d67*/
  {
    LOBYTE(v3) = *(_BYTE *)(this->MissionTimer_StartTime + 855); /*0x424d73*/
    if ( (_BYTE)v3 ) /*0x424d7b*/
    {
  char v21[12]; // [esp+18h] [ebp-18h] BYREF
      _DWORD * v4 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, char *))(*(_DWORD *)this->_pad_base + 72))(this, v21); /*0x424d8a*/
      v5 = (IUnknown *)Coord::To_Cell(&DataGlobal_87F7E8, v4); /*0x424d98*/
      v3 = BuildingClass::FindByCellHash(v5); /*0x424d9c*/
      if ( v3 != -1 ) /*0x424da4*/
      {
  int v20; // [esp+14h] [ebp-1Ch]
  int v19; // [esp+10h] [ebp-20h]
        _DWORD * v6 = *(_DWORD **)&BuildingClass_InstanceArray->__pad_0[4 * v3]; /*0x424db3*/
        CellClass::ReduceTiberium((int)v5, (unsigned __int8)v5->__pad_8C[146] + 1); /*0x424dc0*/
        if ( (int)v6[53] > 0 && !((int)abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) % 3) ) /*0x424def*/
        {
          v7 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x424e04*/
          if ( v7 ) /*0x424e0b*/
          {
  int *v8; // eax
            v8 = (int *)(*(int (__thiscall **)(BuildingClass_Full *, char *))(*(_DWORD *)this->_pad_base + 72))( /*0x424e16*/
                          this,
  char v22[12]; // [esp+24h] [ebp-Ch] BYREF
                          v22);
            int v9 = *v8; /*0x424e19*/
            int v10 = v8[1]; /*0x424e1b*/
            int v11 = v8[2]; /*0x424e1e*/
            v18 = v9; /*0x424e21*/
            v20 = v11 + 10; /*0x424e2e*/
            int v17 = v6[53] - 1; /*0x424e3f*/
            v19 = v10; /*0x424e42*/
            int v12 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v17); /*0x424e46*/
            v13 = AnimClass::ctor(v7, *(void **)(v6[50] + 4 * v12), &v18, 0, 1, (void *)0x600, 0, 0); /*0x424e69*/
          }
          else
          {
            v13 = 0; /*0x424e70*/
          }
          *(_DWORD *)&v13->field_D0[4] = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v6[48]) + 780); /*0x424e88*/
          *(_DWORD *)&v13->field_D0[44] = *(__int16 *)&v5->__pad_8C[126]; /*0x424e95*/
        }
        p_Location_X = &this->Location_X; /*0x424e9b*/
        v18 = *p_Location_X; /*0x424ea7*/
        v19 = p_Location_X[1]; /*0x424eae*/
        v20 = p_Location_X[2]; /*0x424eba*/
        PlaySoundEffectAt( /*0x424ed1*/
          &v18,
          *(_DWORD *)&g_RulesClass_Instance->__pad_240[808],
          0,
          *(_DWORD *)&g_RulesClass_Instance->__pad_C3C[876],
          0,
          0);
        House::AnnounceUpgrade((int)v5, -1); /*0x424eda*/
        v15 = (__int16 *)&v5->field_24; /*0x424edf*/
        Cell::SetRadar(&DataGlobal_87F7E8.field_0, v15); /*0x424ee8*/
        Radar::Update(&DataGlobal_87F7E8, v15); /*0x424ef3*/
      }
    }
  }
  return v3; /*0x424ef9*/
}
} // namespace gamemd

// 0x424F00
namespace gamemd {
AbstractClass * * CreateUnitOnCompletion()
{
// Create unit at completion (583B). Calculates exit cell, foundation offsets, spawns unit.
{
  int MissionTimer_StartTime; // eax
  int i; // edi

  _DWORD v22[4]; // [esp+20h] [ebp-10h] BYREF
  _DWORD * v2 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, _DWORD *))(*(_DWORD *)this->_pad_base + 72))(this, v22); /*0x424f12*/
  int v17; // [esp+10h] [ebp-20h]
  LOWORD(v17) = *v2 / 256; /*0x424f25*/
  HIWORD(v17) = v2[1] / 256; /*0x424f3e*/
  int v19 = v17; /*0x424f4b*/
  void * v3 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v19); /*0x424f50*/
  int v4 = *(_DWORD *)this->_pad_base; /*0x424f55*/
  int v5 = 30; /*0x424f57*/
  int v21 = (int)v3; /*0x424f5e*/
  int v18 = 30; /*0x424f62*/
  if ( (*(int (__thiscall **)(BuildingClass_Full *))(v4 + 108))(this) ) /*0x424f66*/
  {
    MissionTimer_StartTime = this->MissionTimer_StartTime; /*0x424f72*/
    if ( *(_DWORD *)(MissionTimer_StartTime + 668) == -1 ) /*0x424f7e*/
      *(_DWORD *)(this->MissionTimer_StartTime + 668) = Building::GetFoundationSize( /*0x424f9c*/
                                                          v22,
                                                          *(_DWORD *)(MissionTimer_StartTime + 664))[2];
    int v7 = this->MissionTimer_StartTime; /*0x424fa2*/
    if ( *(_DWORD *)(v7 + 672) == -1 ) /*0x424fae*/
      *(_DWORD *)(this->MissionTimer_StartTime + 672) = Building::GetFoundationSize(v22, *(_DWORD *)(v7 + 664))[3]; /*0x424fcc*/
    int v8 = this->MissionTimer_StartTime; /*0x424fd2*/
    v5 = *(_DWORD *)(v8 + 668); /*0x424fd8*/
    v18 = *(_DWORD *)(v8 + 672); /*0x424fe4*/
  }
  int v9 = this->MissionTimer_StartTime; /*0x424fe8*/
  if ( *(_DWORD *)(v9 + 716) != -1 ) /*0x424ff4*/
  {
    for ( i = 0; i < *(_DWORD *)(v9 + 720); ++i ) /*0x425000*/
    {
      v22[0] = this->Location_X; /*0x42500c*/
      v22[1] = this->Location_Y; /*0x425013*/
      v22[2] = this->Location_Z; /*0x42501f*/
      CreateFireAtSW((_DWORD *)DataGlobal_A8ED78, *((_DWORD *)g_BuildingProductionQueue + *(_DWORD *)(v9 + 716)), (int)v22); /*0x425039*/
      v9 = this->MissionTimer_StartTime; /*0x42503e*/
    }
  }
  int v11 = (*(int (__thiscall **)(BuildingClass_Full *))(*(_DWORD *)this->_pad_base + 456))(this); /*0x425051*/
  if ( v11 < 30 ) /*0x42505a*/
  {
    int v12 = this->MissionTimer_StartTime; /*0x425060*/
    if ( !*(_BYTE *)(v12 + 875) /*0x4250ab*/
      || *(_BYTE *)(v12 + 877)
  int v20; // [esp+18h] [ebp-18h]
      && (v20 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646),
          (double)v20 * 4.656612877414201e-10 >= 0.5) )
    {
      LOBYTE(v11) = *(_BYTE *)(this->MissionTimer_StartTime + 877); /*0x4250d7*/
      if ( (_BYTE)v11 ) /*0x4250df*/
      {
        CellClass::ReduceTiberium(v21, 6); /*0x4250e7*/
        if ( *(_BYTE *)(this->MissionTimer_StartTime + 878) ) /*0x4250f2*/
        {
  _DWORD *v14; // eax
          v14 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, _DWORD *))(*(_DWORD *)this->_pad_base + 72))( /*0x42510c*/
                            this,
                            v22);
          LOBYTE(v11) = TimedCreateUnitAtCoords(v14, 300, 300, 1); /*0x425116*/
        }
        else
        {
  _DWORD *v15; // eax
          v15 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, _DWORD *))(*(_DWORD *)this->_pad_base + 72))( /*0x425133*/
                            this,
                            v22);
          LOBYTE(v11) = TimedCreateUnitAtCoords(v15, v5, v18, 0); /*0x42513a*/
        }
      }
    }
    else
    {
  _DWORD *v13; // eax
      v13 = (_DWORD *)(*(int (__thiscall **)(BuildingClass_Full *, _DWORD *))(*(_DWORD *)this->_pad_base + 72))( /*0x4250bd*/
                        this,
                        v22);
      LOBYTE(v11) = StandardCreateUnitAtCoords(v13, v5, v18, 0); /*0x4250c4*/
    }
  }
  return v11; /*0x4250c9*/
}
} // namespace gamemd

// 0x4251F0
namespace gamemd {
void sub_4251F0(int a1, short * a2)
{
{
  int result; // eax

  int v2 = a2[1]; /*0x4251f6*/
  int v3 = (*a2 << 8) + 128; /*0x4251fd*/
  _DWORD v5[3]; // [esp+0h] [ebp-Ch] BYREF
  v5[2] = 0; /*0x425202*/
  v5[0] = v3; /*0x42520d*/
  v5[1] = (v2 << 8) + 128; /*0x42521e*/
  PlaySoundEffectAt(v5, g_RulesClass_Instance[1].GUIMoveInSound[1], 0, g_RulesClass_Instance->?, 0, 0); /*0x425237*/
  result = g_GameMode_Current[0]; /*0x42523c*/
  if ( !g_GameMode_Current[0] ) /*0x425243*/
    return FadePalette(&FileSystem_TEMPERAT_PAL, 30, (void (*)(void))Event::Dispatch); /*0x425254*/
  return result; /*0x425259*/
}
} // namespace gamemd

// 0x425670
namespace gamemd {
int E4Recv_425670::ConstructionPositionTracker()
{
{
  IUnknown *v3; // edi
  int *p_Location_X; // ebp
  int Location_X; // eax
  int Location_Y; // ecx
  IUnknown *v7; // eax
  int v18; // eax
  BuildingTypeClass *v21; // eax
  int GroundHeight; // eax
  __int16 v35; // bp
  AnimClass *v36; // ecx
  IUnknown *v40; // eax
  CoordStruct *MissionTimer_StartTime; // edi
  IUnknown *v47; // [esp+Ch] [ebp-44h]
  double v48; // [esp+24h] [ebp-2Ch] BYREF
  _BYTE v49[12]; // [esp+2Ch] [ebp-24h] BYREF
  int v53; // [esp+44h] [ebp-Ch] BYREF
  int v54; // [esp+48h] [ebp-8h]
  int Location_Z; // [esp+4Ch] [ebp-4h]

  if ( !this->ProductionBlocked ) /*0x425679*/
  {
    this->QueuedMission = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x425690*/
    int v2 = v54; /*0x425692*/
    this->MissionStartTime = 0; /*0x425696*/
    *(_DWORD *)&this->MissionQueued = v2; /*0x42569c*/
    this->MissionStatus = 0; /*0x42569f*/
  }
  v3 = (IUnknown *)&this->_pad_D8[52]; /*0x4256ad*/
  if ( *(_DWORD *)&this->_pad_D8[52] == unk_89A178 /*0x4256d4*/
    && *(_DWORD *)&this->_pad_D8[56] == (_DWORD)qword_89A17C
    && *(_DWORD *)&this->_pad_D8[60] == HIDWORD(qword_89A17C)
    || this->ProductionBlocked )
  {
    if ( !this->_pad_base[141] ) /*0x425b53*/
    {
      if ( this->ProductionBlocked ) /*0x425b61*/
        goto LABEL_47; /*0x425b69*/
      v36 = (AnimClass *)Building::ComputePosition((int *)this->_pad_base, (AnimClass *)&v53); /*0x425b7b*/
      void * v37 = v36->field_4; /*0x425b7f*/
      void * v38 = v36->field_8; /*0x425b82*/
      if ( v36->field_0 == unk_89A178 && v37 == (void *)qword_89A17C && v38 == (void *)HIDWORD(qword_89A17C) ) /*0x425b9d*/
      {
        v3->field_0 = unk_89A178; /*0x425bad*/
        *(_DWORD *)&this->_pad_D8[56] = qword_89A17C; /*0x425bb4*/
        int v39 = HIDWORD(qword_89A17C); /*0x425bb7*/
        this->ProductionBlocked = 1; /*0x425bbd*/
        *(_DWORD *)&this->_pad_D8[60] = v39; /*0x425bc4*/
        v40 = *(IUnknown **)&g_NetworkPlayerBuffer[5960]; /*0x425bc7*/
        this->MissionStartTime = 1; /*0x425bd7*/
        this->QueuedMission = (int)v40; /*0x425bdd*/
        *(_DWORD *)&this->MissionQueued = v54; /*0x425be3*/
        this->MissionStatus = 1; /*0x425be6*/
        this->CurrentMission = 8 * *(_DWORD *)(this->MissionTimer_StartTime + 848) + 1; /*0x425bfc*/
      }
      else
      {
        v3->field_0 = v36->field_0; /*0x425ba1*/
        *(_DWORD *)&this->_pad_D8[56] = v37; /*0x425ba3*/
        *(_DWORD *)&this->_pad_D8[60] = v38; /*0x425ba6*/
      }
    }
  }
  else
  {
  int v52; // [esp+40h] [ebp-10h]
  int v51; // [esp+3Ch] [ebp-14h]
    p_Location_X = &this->Location_X; /*0x4256e2*/
    Location_X = this->Location_X; /*0x4256ee*/
    Location_Y = this->Location_Y; /*0x4256f0*/
    Location_Z = this->Location_Z; /*0x4256f6*/
    v53 = v3->field_0; /*0x4256fc*/
    v47 = (IUnknown *)(Location_Y - *(_DWORD *)&this->_pad_D8[56]); /*0x425708*/
    Location_Z = *(_DWORD *)&this->_pad_D8[60]; /*0x425709*/
    IUnknown *v50 = Coord::Subtract(&v50, (IUnknown *)(Location_X - v53), v47, 0); /*0x425718*/
    v53 = v7->field_0; /*0x42571f*/
    v54 = v7->field_4; /*0x42572a*/
    Location_Z = v7->field_8; /*0x425731*/
    if ( (int)Coord::Length(&v53) > 18 ) /*0x42573d*/
    {
      v53 = *p_Location_X; /*0x4258f3*/
      int v19 = *(_DWORD *)this->_pad_base; /*0x4258f7*/
      v54 = this->Location_Y; /*0x4258fc*/
      int v20 = this->Location_Z; /*0x425904*/
      v21 = (BuildingTypeClass *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(v19 + 72))(this, &v53); /*0x42590a*/
      int v22 = *(_DWORD *)Cell::GetHeight(v49, v21, (int *)&this->_pad_D8[52]); /*0x425917*/
      v53 = *p_Location_X; /*0x42591d*/
      v54 = this->Location_Y; /*0x425924*/
      Location_Z = this->Location_Z; /*0x425938*/
      *(double *)v49 = (double)((__int16)v22 - 0x3FFF) * -0.00009587672516830327; /*0x425946*/
      v48 = (double)v54; /*0x425958*/
      double v23 = Math::SinCos(*(double *)v49); /*0x42595c*/
      LODWORD(v48) = Math::RoundToInt(v48 - v23 * 18.0); /*0x425974*/
      double v24 = Math::ArcTan2(*(double *)v49); /*0x42597e*/
      v50 = Math::RoundToInt(v24 * 18.0 + (double)v53); /*0x42599d*/
      v51 = LODWORD(v48); /*0x4259a5*/
      v52 = Location_Z; /*0x4259af*/
      if ( v20 > Cell::GetGroundHeight(&v50) + 2 * unk_89A1C0 ) /*0x4259c3*/
        GroundHeight = unk_89A1B4 + Cell::GetGroundHeight(&v50); /*0x4259e5*/
      else
        GroundHeight = Cell::GetGroundHeight(&v50); /*0x4259cf*/
      int v26 = *(_DWORD *)this->_pad_base; /*0x4259eb*/
      v52 = GroundHeight; /*0x4259ed*/
      (*(void (__thiscall **)(BuildingClass_Full *, int *))(v26 + 436))(this, &v50); /*0x4259f8*/
    }
    else
    {
      if ( this->_pad_base[141] ) /*0x425743*/
        goto LABEL_41; /*0x42574b*/
      int * v8 = Building::ComputePosition((int *)this->_pad_base, (AnimClass *)&v53); /*0x425758*/
      int v9 = *v8; /*0x42575d*/
      v50 = *v8; /*0x425765*/
      v51 = v8[1]; /*0x42576c*/
      v52 = v8[2]; /*0x425773*/
  bool v10; // dl
      v10 = (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&this->_pad_D8[52]) + 59) == 2 /*0x4257ab*/
          || *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&this->_pad_D8[52]) + 59) == 6)
         && (*(int (__thiscall **)(BuildingClass_Full *))(*(_DWORD *)this->_pad_base + 456))(this) <= unk_89A1C0;
      if ( v9 == unk_89A178 && v51 == (_DWORD)qword_89A17C && v52 == HIDWORD(qword_89A17C) /*0x4257ec*/
  int v11; // eax
        || (v11 = *(_DWORD *)&this->_pad_D8[64], v11 >= 7)
        || v10 )
      {
        v3->field_0 = unk_89A178; /*0x425891*/
        *(_QWORD *)&this->_pad_D8[56] = qword_89A17C; /*0x425898*/
        this->ProductionBlocked = 1; /*0x4258a4*/
        this->QueuedMission = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x4258bc*/
        int v17 = v54; /*0x4258be*/
        this->MissionStartTime = 1; /*0x4258c2*/
        *(_DWORD *)&this->MissionQueued = v17; /*0x4258c8*/
        this->MissionStatus = 1; /*0x4258cb*/
        v18 = 8 * *(_DWORD *)(this->MissionTimer_StartTime + 848) + 1; /*0x4258da*/
        this->CurrentMission = v18; /*0x4258e1*/
        return v18; /*0x4258ed*/
      }
      *(_DWORD *)&this->_pad_D8[64] = v11 + 1; /*0x4257f5*/
      v53 = *p_Location_X; /*0x4257fd*/
      v54 = this->Location_Y; /*0x425804*/
      int v12 = this->Location_Z; /*0x425808*/
      *(_DWORD *)v49 = v3->field_0; /*0x42580f*/
      *(_QWORD *)&v49[4] = *(_QWORD *)&this->_pad_D8[56]; /*0x42581b*/
      if ( v12 > Cell::GetGroundHeight(v49) + 2 * unk_89A1C0 ) /*0x42583b*/
        int v13 = unk_89A1B4 + Cell::GetGroundHeight(v49); /*0x42585d*/
      else
        v13 = Cell::GetGroundHeight(v49); /*0x425847*/
      int v14 = *(_DWORD *)this->_pad_base; /*0x425863*/
      *(_DWORD *)&v49[8] = v13; /*0x425865*/
      (*(void (__thiscall **)(BuildingClass_Full *, _BYTE *))(v14 + 436))(this, v49); /*0x425870*/
      int v15 = v51; /*0x42587a*/
      v3->field_0 = v50; /*0x425880*/
      int v16 = v52; /*0x425882*/
      *(_DWORD *)&this->_pad_D8[56] = v15; /*0x425886*/
      *(_DWORD *)&this->_pad_D8[60] = v16; /*0x425889*/
    }
    if ( !this->_pad_base[141] ) /*0x4259fe*/
    {
      int v27 = *p_Location_X; /*0x425a0e*/
      int v28 = this->Location_Y; /*0x425a10*/
      Location_Z = this->Location_Z; /*0x425a16*/
      LOWORD(v48) = v27 / 256; /*0x425a26*/
      int v29 = v28 / 256; /*0x425a3a*/
      int v30 = *p_Location_X; /*0x425a3d*/
      WORD1(v48) = v29; /*0x425a3f*/
      v50 = v30; /*0x425a44*/
      v51 = this->Location_Y; /*0x425a4d*/
      int v31 = this->Location_Z; /*0x425a53*/
      v53 = *p_Location_X; /*0x425a56*/
      v52 = v31; /*0x425a5a*/
      v54 = this->Location_Y; /*0x425a65*/
      Location_Z = this->Location_Z; /*0x425a6d*/
      int v32 = Cell::GetGroundHeight(&v53); /*0x425a76*/
      if ( v52 >= unk_89A1B4 + v32 ) /*0x425a89*/
      {
        int v33 = this->Location_Y; /*0x425a92*/
        int v34 = this->Location_Z; /*0x425a95*/
        v53 = *p_Location_X; /*0x425a98*/
        v54 = v33; /*0x425aa0*/
        Location_Z = v34; /*0x425aaa*/
        if ( (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&v53) + 80) & 0x100) == 0 ) /*0x425abc*/
        {
          v35 = LOWORD(v48); /*0x425ac2*/
          LOWORD(v48) += *(_WORD *)g_CellDirectionOffsets[16]; /*0x425ad9*/
          WORD1(v48) = *(_WORD *)&g_CellDirectionOffsets[18] + v29; /*0x425ae2*/
          if ( (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v48) + 80) & 0x100) == 0 ) /*0x425b03*/
          {
            LOWORD(v48) = LOWORD(Direction_X_Offsets.field_0) + v35; /*0x425b1b*/
            WORD1(v48) = DataGlobal_89F68A + v29; /*0x425b20*/
            if ( (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v48) + 80) & 0x100) == 0 ) /*0x425b41*/
              this->_pad_base[141] = 1; /*0x425b47*/
          }
        }
      }
    }
  }
LABEL_41:
  if ( !this->ProductionBlocked ) /*0x425c02*/
  {
    unsigned int v41 = 0; /*0x425c18*/
    if ( v3->field_0 != unk_89A178 /*0x425c35*/
      || *(_DWORD *)&this->_pad_D8[56] != (_DWORD)qword_89A17C
      || *(_DWORD *)&this->_pad_D8[60] != HIDWORD(qword_89A17C) )
    {
      int * v42 = (int *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(*(_DWORD *)this->_pad_base + 72))(this, &v53); /*0x425c40*/
      int v43 = *v42; /*0x425c45*/
      LODWORD(v48) = v3->field_0; /*0x425c47*/
      *(_DWORD *)v49 = v43; /*0x425c4b*/
      double v44 = Math::CalcAngle((double)v42[1] - (double)*(int *)&this->_pad_D8[56], (double)SLODWORD(v48) - (double)v43); /*0x425c6a*/
      *(_WORD *)v49 = Math::RoundToInt((v44 - 1.570796326794897) * -10430.06004058427); /*0x425c83*/
      v41 = *(_DWORD *)(this->MissionTimer_StartTime + 848) /*0x425ca3*/
          * ((-1 - (((unsigned int)((*(_DWORD *)v49 >> 12) + 1) >> 1) & 7)) & 7);
    }
    MissionTimer_StartTime = (CoordStruct *)this->MissionTimer_StartTime; /*0x425cb7*/
    v18 = *(_DWORD *)&g_NetworkPlayerBuffer[5960] / 3 / MissionTimer_StartTime[70].Z; /*0x425cc5*/
    this->CurrentMission = v41 + *(_DWORD *)&g_NetworkPlayerBuffer[5960] / 3 % MissionTimer_StartTime[70].Z; /*0x425cce*/
    return v18; /*0x425cda*/
  }
LABEL_47:
  v18 = *(__int16 *)((*(int (__thiscall **)(BuildingClass_Full *))(*(_DWORD *)this->_pad_base + 108))(this) + 6) / 2 - 1; /*0x425cdb*/
  if ( this->CurrentMission >= v18 ) /*0x425cf4*/
    LOBYTE(v18) = (*(bool (__thiscall **)(BuildingClass_Full *))(*(_DWORD *)this->_pad_base + 248))(this); /*0x425cfa*/
  return v18; /*0x4258bb*/
}
} // namespace gamemd

// 0x4261D0
namespace gamemd {
void sub_4261D0()
{
{
  int result; // eax
  int i; // edi

  result = g_AnimClassCount; /*0x4261d0*/
  for ( i = 0; i < g_AnimClassCount; ++i ) /*0x4261dd*/
  {
    _DWORD * v2 = (_DWORD *)*((_DWORD *)g_AnimClassPool + i); /*0x4261e9*/
    if ( *(_BYTE *)(v2[50] + 864) ) /*0x4261f2*/
    {
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF
      v6[0] = v2[39]; /*0x426208*/
      v6[1] = v2[40]; /*0x426214*/
      v6[2] = v2[41]; /*0x426220*/
      _DWORD * v3 = Coord::To_Cell(&DataGlobal_87F7E8, v6); /*0x426224*/
      int v4 = BuildingClass::FindByCellHash(v3); /*0x42622b*/
      if ( v4 != -1 ) /*0x426233*/
      {
        int v5 = *(_DWORD *)&BuildingClass_InstanceArray->__pad_0[4 * v4]; /*0x42623b*/
        if ( v5 ) /*0x426240*/
          v2[53] = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(v5 + 192)) + 780); /*0x426256*/
      }
    }
    result = g_AnimClassCount; /*0x42625c*/
  }
  return result; /*0x42626b*/
}
} // namespace gamemd

// 0x4267F0
namespace gamemd {
AbstractClass * * sub_4267F0()
{
{
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  _UNKNOWN *retaddr; // [esp+24h] [ebp+0h]

  if ( !*(_BYTE *)(a1 + 136) && *(_DWORD *)(a1 + 132) ) /*0x426803*/
  {
    *(_BYTE *)(a1 + 136) = 1; /*0x426820*/
    memset((void *)(a1 + 140), 0, 0x80u); /*0x426828*/
    (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 132) + 36))( /*0x426838*/
      *(_DWORD *)(a1 + 132),
      a1 + 140,
      128,
      a2);
    memset((void *)(a1 + 4), 0, 0x80u); /*0x426847*/
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 132) + 36))(*(_DWORD *)(a1 + 132), a1 + 4, 128); /*0x426857*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 132) + 40))(*(_DWORD *)(a1 + 132), 0, 1); /*0x426866*/
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 132) + 36))(*(_DWORD *)(a1 + 132), a1 + 268, 1024); /*0x42687d*/
    int v3 = 0; /*0x426880*/
    _BYTE * v4 = (_BYTE *)(a1 + 269); /*0x426882*/
    do /*0x4268c7*/
    {
      char v5 = *(v4 - 1); /*0x42688b*/
      LOBYTE(retaddr) = v4[1]; /*0x42688e*/
      BYTE1(retaddr) = *v4; /*0x426894*/
      int v6 = v3 % 256; /*0x4268a7*/
      ++v3; /*0x4268ab*/
      v4 += 4; /*0x4268ac*/
      int v7 = v6 + a1 + 2 * v6 + 1292; /*0x4268b5*/
      *(_WORD *)v7 = (_WORD)retaddr; /*0x4268c1*/
      *(_BYTE *)(v7 + 2) = v5; /*0x4268c4*/
    }
    while ( v3 < 256 ); /*0x4268c7*/
    memset((void *)(a1 + 2060), 0, 0x600u); /*0x4268d8*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 132) + 36))(*(_DWORD *)(a1 + 132), a1 + 2060); /*0x4268e8*/
    if ( !sub_426990(a1) ) /*0x4268ed*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x4268fb*/
      return 0; /*0x426903*/
    }
    AbstractClass *v9 = __2_YAPAXI_Z(0x20u); /*0x42690b*/
    if ( v9 ) /*0x426912*/
    {
      v10 = *(_WORD *)(a1 + 160); /*0x426918*/
      v11 = *(_WORD *)(a1 + 162); /*0x42691f*/
      v9[1] = v10; /*0x426926*/
      v9[2] = v11; /*0x42692c*/
      v9[3] = 0; /*0x426935*/
      *v9 = &XSurface_Vtable; /*0x42693c*/
      v9[4] = 1; /*0x426942*/
      Buffer::Init(v9 + 5, 0, v11 * v10); /*0x426949*/
      *v9 = &BSurface_Vtable; /*0x42694e*/
    }
    else
    {
      v9 = 0; /*0x426956*/
    }
    *(_DWORD *)(a1 + 3596) = v9; /*0x42695d*/
    void * v12 = __2_YAPAXI_Z(0x10000u); /*0x42696b*/
    *(_DWORD *)(a1 + 3600) = v12; /*0x426974*/
    memset(v12, 0, 0x10000u); /*0x42697a*/
  }
  return *(_BYTE *)(a1 + 136); /*0x4268fe*/
}
} // namespace gamemd

// 0x426ED0
namespace gamemd {
AbstractClass * * E4Recv_426ED0::sub_426ED0(int a2)
{
{
  unsigned __int16 *i; // ecx
  unsigned __int16 v10; // si
  unsigned __int16 v11; // cx
  AbstractClass *v15; // ecx
  unsigned __int16 v16; // ax
  if ( a2 >= this->M204 ) /*0x426ee0*/
    return 0; /*0x426ee0*/
  int v3 = 0; /*0x426ee4*/
  int v4 = *(unsigned __int16 *)(this + 146); /*0x426ee6*/
  if ( !(_WORD)v4 ) /*0x426eef*/
    return 0; /*0x426eef*/
  for ( i = (unsigned __int16 *)(this + 2060); ; i += 3 ) /*0x426ef1*/
  {
  int v6; // eax
    HIWORD(v6) = 0; /*0x426ef7*/
    if ( *i <= a2 ) /*0x426efe*/
    {
      LOWORD(v6) = *i; /*0x426ef9*/
      if ( v6 + i[1] > a2 ) /*0x426f0a*/
        break; /*0x426f0a*/
    }
    if ( ++v3 >= v4 ) /*0x426f12*/
      return 0; /*0x426f12*/
  }
  if ( v3 == -1 ) /*0x426f20*/
    return 0; /*0x426f14*/
  if ( (unsigned char)this->M136 && this->M3608 != v3 ) /*0x426f32*/
  {
    int v8 = this->M132; /*0x426f34*/
    this->M3608 = v3; /*0x426f3f*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 40))(v8, (v3 << 16) + 2816, 0); /*0x426f50*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 132) + 36))( /*0x426f87*/
      this->M132,
      this->M3600,
      *(unsigned __int16 *)(this + 2 * (3 * v3 + 1032)) + 2 * *(unsigned __int16 *)(this + 6 * v3 + 2062) + 8);
  }
  int v9 = 3 * v3; /*0x426f8a*/
  v10 = *(_WORD *)(this + 6 * v3 + 2060); /*0x426f8f*/
  v11 = *(_WORD *)(this + 2 * v9 + 2062); /*0x426f99*/
  int v12 = this->M3600; /*0x426fa4*/
  int v13 = a2 - v10; /*0x426faa*/
  int v14 = 2 * v11 + 8; /*0x426fac*/
  v15 = (unsigned __int16 *)(v12 + 8); /*0x426fb2*/
  if ( v13 > 0 ) /*0x426fb5*/
  {
    do /*0x426fc2*/
    {
      v16 = *v15++; /*0x426fb9*/
      v14 += v16; /*0x426fbf*/
      --v13; /*0x426fc1*/
    }
    while ( v13 ); /*0x426fc2*/
  }
  return v12 + v14 + 2; /*0x426f14*/
}
} // namespace gamemd

// 0x4270D0
namespace gamemd {
void sub_4270D0(int a1, unsigned int a2, AnimFile * aP2, int arg4, char * a4, int a6)
{
{
  AnimFile *v8; // ebx
  char *i; // ebp
  AnimFile *aP2a; // [esp+14h] [ebp+4h]

  if ( !arg4 ) /*0x4270da*/
    return 1; /*0x4270e2*/
  signed int v7 = arg4 - 2; /*0x4270ed*/
  v8 = (AnimFile *)a4; /*0x4270f0*/
  int v9 = *(__int16 *)aP2->__pad_0; /*0x4270f2*/
  char * v10 = &aP2->__pad_0[2]; /*0x4270f5*/
  aP2a = (AnimFile *)a4; /*0x4270f8*/
  if ( arg4 == 2 ) /*0x4270fe*/
    return 1; /*0x427106*/
  if ( v9 ) /*0x427111*/
  {
    if ( v9 == 1 && v7 >= 3 && v10[v7 - 3] == (char)0x80 && !v10[v7 - 2] && !v10[v7 - 1] ) /*0x42713e*/
    {
      for ( i = v10; ; i += a2 ) /*0x427146*/
      {
        while ( 1 ) /*0x4271ab*/
        {
          while ( 1 ) /*0x427171*/
          {
  char v12; // al
            while ( 1 ) /*0x42714e*/
            {
              while ( 1 ) /*0x427148*/
              {
                v12 = *i++; /*0x427148*/
                if ( v12 <= 0 ) /*0x42714e*/
                  break; /*0x42714e*/
                a2 = v12; /*0x427157*/
                unsigned int v13 = (unsigned int)v12 >> 2; /*0x42715b*/
                qmemcpy(v8, i, 4 * v13); /*0x42715e*/
                char * v14 = &v8->__pad_0[4 * v13]; /*0x42715e*/
                v8 = (AnimFile *)((char *)v8 + v12); /*0x427162*/
                aP2a = v8; /*0x427167*/
                qmemcpy(v14, &i[4 * v13], v12 & 3); /*0x42716b*/
                i += v12; /*0x42716d*/
              }
              if ( v12 ) /*0x427171*/
                break; /*0x427171*/
              LOBYTE(a2) = i[1]; /*0x42717e*/
              BYTE1(a2) = a2; /*0x427180*/
              unsigned int v15 = (unsigned __int8)*i; /*0x427188*/
              int v16 = a2 << 16; /*0x42718a*/
              LOWORD(v16) = a2; /*0x42718f*/
              memset32(v8, v16, v15 >> 2); /*0x427195*/
              i += 2; /*0x427199*/
              memset((char *)v8 + 4 * (v15 >> 2), a2, v15 & 3); /*0x42719d*/
              v8 = (AnimFile *)((char *)v8 + v15); /*0x4271a1*/
              aP2a = v8; /*0x4271a3*/
            }
            char v17 = v12 + 0x80; /*0x4271a9*/
            if ( !v17 ) /*0x4271ab*/
              break; /*0x4271ab*/
            v8 = (AnimFile *)((char *)v8 + v17); /*0x42722e*/
            aP2a = v8; /*0x427230*/
          }
          a2 = *(unsigned __int16 *)i; /*0x4271af*/
          i += 2; /*0x4271b3*/
          if ( (__int16)a2 <= 0 ) /*0x4271b9*/
            break; /*0x4271b9*/
LABEL_22:
          v8 = (AnimFile *)((char *)v8 + a2); /*0x4271ff*/
          aP2a = v8; /*0x427201*/
        }
        if ( !a2 ) /*0x4271bd*/
          return 1; /*0x4271bd*/
        a2 -= 0x8000; /*0x4271c3*/
        if ( (int)a2 >= 0x4000 ) /*0x4271cf*/
        {
          AnimFile *v18 = (char *)v8; /*0x4271d3*/
          a2 -= 0x4000; /*0x4271d8*/
          LOBYTE(v8) = *i; /*0x4271de*/
          BYTE1(v8) = *i++; /*0x4271e2*/
          int v19 = (_DWORD)v8 << 16; /*0x4271e9*/
          LOWORD(v19) = (_WORD)v8; /*0x4271ec*/
          v8 = aP2a; /*0x4271ef*/
          memset32(v18, v19, a2 >> 2); /*0x4271f6*/
          memset(&v18[4 * (a2 >> 2)], v19, a2 & 3); /*0x4271fd*/
          goto LABEL_22; /*0x4271fd*/
        }
        qmemcpy(v8, i, 4 * (a2 >> 2)); /*0x427215*/
        char * v20 = &v8->__pad_0[4 * (a2 >> 2)]; /*0x427215*/
        v8 = (AnimFile *)((char *)v8 + a2); /*0x427219*/
        aP2a = v8; /*0x42721e*/
        qmemcpy(v20, &i[4 * (a2 >> 2)], a2 & 3); /*0x427222*/
      }
    }
    return 0; /*0x427120*/
  }
  else if ( v7 == a6 ) /*0x42723d*/
  {
    qmemcpy(a4, v10, v7); /*0x427254*/
    return 1; /*0x42725d*/
  }
  else
  {
    return 0; /*0x427245*/
  }
}
} // namespace gamemd

// 0x427940
namespace gamemd {
int BuildingTypeClass_LoadTheatreSHP(int a1)
{
{
  int result; // eax
  int i; // [esp+8h] [ebp-204h]
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = 0; /*0x427952*/
  for ( i = 0; i < DataGlobal_8B4160; ++i ) /*0x42795a*/
  {
    int v3 = *((_DWORD *)g_AnimTypeCount + result); /*0x427968*/
    char v4 = *(_BYTE *)(v3 + 556); /*0x427973*/
    if ( *(_BYTE *)(v3 + 862) ) /*0x42796b*/
    {
      if ( v4 || *(_BYTE *)(v3 + 567) ) /*0x427a2a*/
      {
        if ( *(_DWORD *)(v3 + 164) && *(_BYTE *)(v3 + 168) ) /*0x427a3c*/
        {
          __3_YAXPAX_Z(*(void **)(v3 + 164)); /*0x427a45*/
          *(_BYTE *)(v3 + 168) = 0; /*0x427a4d*/
        }
        *(_DWORD *)(v3 + 164) = 0; /*0x427a53*/
      }
    }
    else if ( v4 ) /*0x427981*/
    {
      if ( *(_DWORD *)(v3 + 164) && *(_BYTE *)(v3 + 168) ) /*0x427991*/
      {
        __3_YAXPAX_Z(*(void **)(v3 + 164)); /*0x42799a*/
        *(_BYTE *)(v3 + 168) = 0; /*0x4279a2*/
      }
      *(_DWORD *)(v3 + 164) = 0; /*0x4279c1*/
      _makepath(Buffer, 0, 0, (const char *)(v3 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x4279cc*/
      int v5 = SearchMIXFile(Buffer, 1); /*0x4279da*/
      *(_DWORD *)(v3 + 164) = v5; /*0x4279e1*/
      if ( !v5 ) /*0x4279e7*/
      {
        _makepath(Buffer, 0, 0, (const char *)(v3 + 36), Ext); /*0x4279f6*/
        *(_DWORD *)(v3 + 164) = SearchMIXFile(Buffer, 1); /*0x427a09*/
      }
    }
    else if ( *(_BYTE *)(v3 + 567) ) /*0x427a11*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 160))(v3, a1); /*0x427a1e*/
    }
    result = i + 1; /*0x427a63*/
  }
  return result; /*0x427a72*/
}
} // namespace gamemd

// 0x428F70
namespace gamemd {
void * globalHelper_028F70(AbstractClass * Source, int a2)
{
{

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x428f8f*/
    return 0; /*0x428fec*/
  int v4 = 0; /*0x428f9e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x428fa2*/
  {
LABEL_6:
    _DWORD * v5 = (_DWORD *)__2_YAPAXI_Z(0x378u); /*0x428fc3*/
    if ( v5 ) /*0x428fd2*/
      return (AnimTypeClass *)AnimTypeClass::Construct(v5, Source); /*0x428fdf*/
    return 0; /*0x428fd2*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4) + 36), Source) ) /*0x428fb9*/
  {
    if ( ++v4 >= *(_DWORD *)(a2 + 16) ) /*0x428fc1*/
      goto LABEL_6; /*0x428fc1*/
  }
  return *(AnimTypeClass **)(*(_DWORD *)(a2 + 4) + 4 * v4); /*0x428fdc*/
}
} // namespace gamemd

// 0x429780
namespace gamemd {
unsigned int * PathClass_WalkPath(unsigned int * a1, int * a2, int a3, int * a4)
{
{

  int v4 = *a2; /*0x429781*/
  int v11 = *a2; /*0x42978f*/
  if ( a3 <= 0 ) /*0x429793*/
  {
    *a1 = v4; /*0x42981d*/
    return a1; /*0x42981f*/
  }
  else
  {
    int v7 = a3; /*0x42979f*/
    do /*0x42980f*/
    {
      int v8 = *a4; /*0x4297a1*/
      if ( *a4 == 8 ) /*0x4297a6*/
      {
        int v9 = *((__int16 *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v11) + 139); /*0x4297b7*/
        if ( v9 == -1 ) /*0x4297c1*/
          v4 = 0; /*0x4297db*/
        else
          v4 = *(_DWORD *)(*((_DWORD *)g_PathClass_State + v9) + 40); /*0x4297cc*/
      }
      else
      {
  int v12; // [esp+14h] [ebp+8h]
        LOWORD(v12) = v4 + LOWORD(Direction_X_Offsets[v8]); /*0x4297f9*/
        HIWORD(v12) = HIWORD(v11) + HIWORD(Direction_X_Offsets[v8]); /*0x4297fe*/
        v4 = v12; /*0x429803*/
      }
      ++a4; /*0x429807*/
      --v7; /*0x42980a*/
      v11 = v4; /*0x42980b*/
    }
    while ( v7 ); /*0x42980f*/
    *a1 = v4; /*0x429812*/
    return a1; /*0x429815*/
  }
}
} // namespace gamemd

// 0x42A900
namespace gamemd {
AbstractClass * * E4Recv_42A900::sub_42A900()
{
{
  void **v2; // esi
  void **v3; // esi
  void **v7; // esi

  v2 = *(void ***)(this + 20); /*0x42a907*/
  if ( v2 ) /*0x42a90c*/
  {
    __3_YAXPAX_Z(v2[2]); /*0x42a912*/
    __3_YAXPAX_Z(v2); /*0x42a918*/
  }
  v3 = *(void ***)(this + 104); /*0x42a920*/
  this->M20 = 0; /*0x42a923*/
  if ( v3 ) /*0x42a928*/
  {
    __3_YAXPAX_Z(v3[2]); /*0x42a92e*/
    __3_YAXPAX_Z(v3); /*0x42a934*/
  }
  AbstractClass *v4 = *(void **)(this + 16); /*0x42a93c*/
  this->M104 = 0; /*0x42a93f*/
  if ( v4 ) /*0x42a944*/
    __3_YAXPAX_Z(v4); /*0x42a947*/
  AbstractClass *v5 = *(void **)(this + 12); /*0x42a94f*/
  this->M16 = 0; /*0x42a952*/
  if ( v5 ) /*0x42a957*/
    __3_YAXPAX_Z(v5); /*0x42a95a*/
  AbstractClass *v6 = *(void **)(this + 24); /*0x42a962*/
  this->M12 = 0; /*0x42a965*/
  if ( v6 ) /*0x42a96a*/
  {
    __3_YAXPAX_Z(v6); /*0x42a96d*/
    this->M24 = 0; /*0x42a975*/
  }
  if ( this->M28 ) /*0x42a978*/
  {
    __3_YAXPAX_Z(*(void **)(this + 28)); /*0x42a980*/
    this->M28 = 0; /*0x42a988*/
  }
  if ( this->M36 ) /*0x42a98b*/
  {
    __3_YAXPAX_Z(*(void **)(this + 36)); /*0x42a993*/
    this->M36 = 0; /*0x42a99b*/
  }
  if ( this->M32 ) /*0x42a99e*/
  {
    __3_YAXPAX_Z(*(void **)(this + 32)); /*0x42a9a6*/
    this->M32 = 0; /*0x42a9ae*/
  }
  v7 = (void **)(this + 76); /*0x42a9b2*/
  int v8 = 3; /*0x42a9b5*/
  do /*0x42a9f5*/
  {
    if ( *(v7 - 3) ) /*0x42a9ba*/
    {
      __3_YAXPAX_Z(*(v7 - 3)); /*0x42a9c2*/
      *(v7 - 3) = 0; /*0x42a9ca*/
    }
    if ( *v7 ) /*0x42a9cd*/
    {
      __3_YAXPAX_Z(*v7); /*0x42a9d4*/
      *v7 = 0; /*0x42a9dc*/
    }
    if ( v7[3] ) /*0x42a9de*/
    {
      __3_YAXPAX_Z(v7[3]); /*0x42a9e6*/
      v7[3] = 0; /*0x42a9ee*/
    }
    ++v7; /*0x42a9f1*/
    --v8; /*0x42a9f4*/
  }
  while ( v8 ); /*0x42a9f5*/
  __3_YAXPAX_Z(*(void **)(this + 100)); /*0x42a9fb*/
  Coord *v9 = this + 188; /*0x42aa03*/
  int v10 = 3; /*0x42aa09*/
  do /*0x42aa37*/
  {
    void * v11 = *(void **)(v9 - 20); /*0x42aa0f*/
    v9 -= 24; /*0x42aa12*/
    *(_DWORD *)v9 = &vt_VectorClass_unsigned_int; /*0x42aa17*/
    if ( v11 ) /*0x42aa1d*/
    {
      if ( *(_BYTE *)(v9 + 13) ) /*0x42aa1f*/
      {
        __3_YAXPAX_Z(v11); /*0x42aa25*/
        v9->q004 = 0; /*0x42aa2d*/
      }
    }
    --v10; /*0x42aa30*/
    *(_BYTE *)(v9 + 13) = 0; /*0x42aa31*/
    v9->q008 = 0; /*0x42aa34*/
  }
  while ( v10 ); /*0x42aa37*/
}
} // namespace gamemd

// 0x42AA90
namespace gamemd {
void * globalHelper_02AA90(int a1, DynamicVectorClass_uint * aP1)
{
{
  DynamicVectorClass_uint *v4; // edx
  DynamicVectorClass_uint *v6; // ebx
  if ( (unk_89A300 & 1) == 0 ) /*0x42aa9a*/
  {
    unk_89A300 |= 1u; /*0x42aaa6*/
    atexit(nullsub_4); /*0x42aaac*/
  }
  int v2 = a1; /*0x42aab7*/
  int v3 = Math::RoundToInt(*(float *)(a1 + 8)); /*0x42aabf*/
  v4 = aP1; /*0x42aac4*/
  unk_89A2DC = v3; /*0x42aac8*/
  unk_89A2E0 = *(_DWORD *)(a1 + 12); /*0x42aad7*/
  unk_89A2E8 = 0; /*0x42aadc*/
  unk_89A2F0 = 0; /*0x42aae2*/
  unk_89A2F2 = 0; /*0x42aae9*/
  unk_89A2E4 = aP1; /*0x42aaf0*/
  unk_89A2EC = &unk_89A324; /*0x42aaf6*/
  _DWORD * v5 = *(_DWORD **)a1; /*0x42aafc*/
  v6 = *(DynamicVectorClass_uint **)(*(_DWORD *)a1 + 8); /*0x42ab01*/
  int v7 = *(_DWORD *)(a1 + 12) - 2; /*0x42ab04*/
  if ( v7 >= 0 ) /*0x42ab07*/
  {
  bool v13; // zf
    int v8 = &unk_89A324 - (_UNKNOWN *)aP1; /*0x42ab10*/
    int * v15 = (int *)&aP1->__pad_0[4 * v7]; /*0x42ab13*/
    int v16 = v7 + 1; /*0x42ab1b*/
    do /*0x42aba7*/
    {
      if ( v6 ) /*0x42ab21*/
      {
  int v12; // eax
        *(int *)((char *)v15 + v8) = (int)v6->field_4; /*0x42ab2a*/
        __int64 v9 = *(__int16 *)(**(_DWORD **)v6->__pad_0 + 38) - *(__int16 *)(*(_DWORD *)*v5 + 38); /*0x42ab48*/
        if ( (int)((HIDWORD(v9) ^ v9) - HIDWORD(v9)) > 1 /*0x42ab64*/
  int v10; // ecx
          || (v10 = *(__int16 *)(**(_DWORD **)v6->__pad_0 + 36),
  int v11; // esi
              v11 = *(__int16 *)(*(_DWORD *)*v5 + 36),
              (int)abs32(v10 - v11) > 1) )
        {
          v12 = 8; /*0x42ab76*/
        }
        else
        {
          v12 = dword_818760[v10 /*0x42ab6d*/
                           + 3 * (*(__int16 *)(**(_DWORD **)v6->__pad_0 + 38) - *(__int16 *)(*(_DWORD *)*v5 + 38))
                           - v11];
        }
        v2 = a1; /*0x42ab7f*/
        v4 = aP1; /*0x42ab83*/
        *v15 = v12; /*0x42ab87*/
        v8 = &unk_89A324 - (_UNKNOWN *)aP1; /*0x42ab89*/
      }
      v5 = (_DWORD *)v5[2]; /*0x42ab95*/
      v6 = (DynamicVectorClass_uint *)v6->field_8; /*0x42ab98*/
      v13 = v16 == 1; /*0x42ab9e*/
      --v15; /*0x42ab9f*/
      --v16; /*0x42aba3*/
    }
    while ( !v13 ); /*0x42aba7*/
  }
  *(_DWORD *)&v4->__pad_0[4 * *(_DWORD *)(v2 + 12) - 4] = -1; /*0x42abb2*/
  dword_89A2D8 = *(_DWORD *)(*(_DWORD *)*v5 + 36); /*0x42abc2*/
  if ( !unk_89A2DC ) /*0x42abd2*/
    unk_89A2DC = 1; /*0x42abd4*/
  return &dword_89A2D8; /*0x42abe3*/
}
} // namespace gamemd

// 0x42B080
namespace gamemd {
void sub_42B080(short * a1, int a2)
{
{
  __int16 *v11; // [esp+14h] [ebp-14h]
  IUnknown *v2 = a1; /*0x42b084*/
  SpeedType *v3 = a2 * unk_89C2D8; /*0x42b0ab*/
  int v13 = (*a1 << 8) + 128; /*0x42b0b0*/
  int v14 = (a1[1] << 8) + 128; /*0x42b0b4*/
  int v10 = -2; /*0x42b0bc*/
  while ( 2 ) /*0x42b0c4*/
  {
    int v4 = -2; /*0x42b0c4*/
    int v12 = -2; /*0x42b0c9*/
    do /*0x42b18f*/
    {
      LOWORD(v11) = v4 + *v2; /*0x42b0dc*/
      HIWORD(v11) = v10 + v2[1]; /*0x42b0e5*/
      a1 = v11; /*0x42b0f4*/
      _DWORD * v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a1); /*0x42b0fd*/
  __int64 v6; // rax
      if ( (v5[80] & 0x100) != 0 && (v6 = *((char *)v5 + 283) - a2, (int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) > 2) ) /*0x42b11d*/
        int v7 = v5[58]; /*0x42b11f*/
      else
        v7 = v5[57]; /*0x42b127*/
      if ( v7 ) /*0x42b12f*/
      {
        while ( 1 ) /*0x42b137*/
        {
          bool v8 = (*(_BYTE *)(v7 + 20) & 4) == 0; /*0x42b137*/
          LOBYTE(a1) = (*(_BYTE *)(v7 + 20) & 4) != 0; /*0x42b13a*/
          if ( !v8 ) /*0x42b13e*/
          {
            if ( !*(_DWORD *)(v7 + 1652) ) /*0x42b140*/
              WinAPI::Wrapper(-2147467261); /*0x42b14f*/
            if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(v7 + 1652) + 160))( /*0x42b172*/
                   *(_DWORD *)(v7 + 1652),
                   v13,
                   v14,
                   v3) )
            {
              return v7; /*0x42b1b3*/
            }
          }
          v7 = *(_DWORD *)(v7 + 48); /*0x42b17c*/
          if ( !v7 ) /*0x42b181*/
          {
            v4 = v12; /*0x42b183*/
            break; /*0x42b183*/
          }
        }
      }
      v12 = ++v4; /*0x42b18b*/
    }
    while ( v4 < 3 ); /*0x42b18f*/
    if ( ++v10 < 3 ) /*0x42b1a1*/
      continue; /*0x42b1a1*/
    break;
  }
  return 0; /*0x42b1a9*/
}
} // namespace gamemd

// 0x42B420
namespace gamemd {
AbstractClass * * GeneratePathWaypoints(unsigned int * a1, int * a2, int a3, int a4, int a5, int ** a6)
{
{
  __int16 v18; // ax
  __int16 *v20; // ebp
  __int16 v21; // dx
  __int16 v22; // dx
  __int16 v23; // ax
  __int16 v27; // dx
  __int16 v28; // ax
  __int16 v31; // dx
  int **v38; // ebp
  int **v43; // eax
  int **v44; // ebp
  int *v50; // [esp+18h] [ebp-30h] BYREF
  int v51; // [esp+1Ch] [ebp-2Ch]
  int v53; // [esp+24h] [ebp-24h]
  int v57; // [esp+34h] [ebp-14h] BYREF
  int TileDataCellClass; // [esp+38h] [ebp-10h] BYREF
  int v59; // [esp+3Ch] [ebp-Ch]
  LocomotionClass *v60; // [esp+40h] [ebp-8h]
  int * v6 = a2; /*0x42b425*/
  int v7 = a4; /*0x42b42a*/
  int v8 = *a2; /*0x42b42f*/
  int v9 = a2[a4]; /*0x42b432*/
  v59 = v8; /*0x42b436*/
  int v10 = (v8 + v9) >> 1; /*0x42b43d*/
  v51 = v10; /*0x42b43f*/
  if ( v10 + 1 != v9 && v10 + 1 != v8 ) /*0x42b44c*/
  {
    v51 = 0; /*0x42b44e*/
    LOBYTE(v10) = 0; /*0x42b456*/
  }
  if ( v8 == 8 || v9 == 8 ) /*0x42b466*/
  {
    v44 = a6; /*0x42b7a8*/
    int * v45 = *a6; /*0x42b7ac*/
    int v46 = a4 + a5; /*0x42b7af*/
    a6 = (int **)*a6; /*0x42b7b4*/
    if ( a4 + a5 > 0 ) /*0x42b7b8*/
    {
      int * v47 = a2; /*0x42b7ba*/
      int v48 = a4 + a5; /*0x42b7be*/
      do /*0x42b7da*/
      {
        v45 = (int *)*GetCellNeighborCoord(&a2, (__int16 *)&a6, *v47++); /*0x42b7d0*/
        --v48; /*0x42b7d5*/
        a6 = (int **)v45; /*0x42b7d6*/
      }
      while ( v48 ); /*0x42b7da*/
    }
    *v44 = v45; /*0x42b7dd*/
    return v46; /*0x42b7e1*/
  }
  int * v11 = *a6; /*0x42b476*/
  int * v49 = *a6; /*0x42b478*/
  if ( a4 < a5 ) /*0x42b47c*/
  {
    a5 = a4; /*0x42b47e*/
    goto LABEL_20; /*0x42b482*/
  }
  if ( a5 < a4 ) /*0x42b48d*/
  {
  AbstractClass *v15; // eax
    v50 = v11; /*0x42b491*/
    if ( a4 - a5 <= 0 ) /*0x42b499*/
      goto LABEL_19; /*0x42b499*/
    int * v12 = a2; /*0x42b49b*/
    int v13 = a4 - a5; /*0x42b49d*/
    while ( *v12 == 8 ) /*0x42b4a4*/
    {
      int v14 = *((__int16 *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v50) + 139); /*0x42b4b5*/
      if ( v14 == -1 ) /*0x42b4bf*/
      {
        v15 = (int *)CellStruct::Set(&TileDataCellClass, 0, 0); /*0x42b4d7*/
LABEL_16:
        v11 = (int *)*v15; /*0x42b4f4*/
        goto LABEL_17; /*0x42b4f4*/
      }
      v11 = *(int **)(*((_DWORD *)g_PathClass_State + v14) + 40); /*0x42b4ca*/
LABEL_17:
      ++v12; /*0x42b4f6*/
      --v13; /*0x42b4f9*/
      v50 = v11; /*0x42b4fa*/
      if ( !v13 ) /*0x42b4fe*/
      {
        v6 = a2; /*0x42b500*/
LABEL_19:
        v49 = v11; /*0x42b504*/
        goto LABEL_20; /*0x42b504*/
      }
    }
    v15 = CellStruct::Add(&v50, &v57, (_WORD *)(4 * *v12 + 9041544)); /*0x42b4ef*/
    goto LABEL_16; /*0x42b4ef*/
  }
LABEL_20:
  LocomotionClass *v16 = LocomotionClass::GetSpeedMultiplier(a1); /*0x42b508*/
  int v17 = a1[135]; /*0x42b513*/
  v60 = v16; /*0x42b519*/
  v57 = v17; /*0x42b51d*/
  if ( a5 <= 0 ) /*0x42b527*/
    goto LABEL_38; /*0x42b527*/
  v18 = (__int16)v49; /*0x42b52f*/
  int v19 = 2 * a5; /*0x42b536*/
  v53 = 2 * a5; /*0x42b538*/
  v20 = (__int16 *)(4 * (v10 & 7) + 9041544); /*0x42b53c*/
  while ( 1 ) /*0x42b549*/
  {
  bool v26; // bl
    v21 = *v20; /*0x42b549*/
    int v52 = v19; /*0x42b54d*/
    v22 = v18 + v21; /*0x42b551*/
    v23 = HIWORD(v49) + v20[1]; /*0x42b558*/
  int *v54; // [esp+28h] [ebp-20h]
    LOWORD(v54) = v22; /*0x42b55d*/
    HIWORD(v54) = v23; /*0x42b564*/
    v50 = v54; /*0x42b579*/
    int v24 = *(_DWORD *)(a3 + 4 * (v7 + a5 - v19)); /*0x42b581*/
    _DWORD * v25 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v50); /*0x42b58f*/
    do /*0x42b655*/
    {
      if ( v52 <= 0 ) /*0x42b597*/
      {
        int * v36 = a2; /*0x42b70b*/
        int v37 = a4 - a5; /*0x42b70f*/
        if ( 2 * a5 > 0 ) /*0x42b719*/
          memset32(&a2[a4 - a5], v51, 2 * a5); /*0x42b71f*/
        v38 = a6; /*0x42b721*/
        int * v39 = *a6; /*0x42b727*/
        a6 = (int **)*a6; /*0x42b72a*/
        if ( v37 <= 0 ) /*0x42b72e*/
        {
LABEL_53:
          *v38 = v39; /*0x42b795*/
          return v37; /*0x42b7a1*/
        }
        int * v40 = v36; /*0x42b730*/
        int v41 = v37; /*0x42b732*/
        while ( *v40 == 8 ) /*0x42b739*/
        {
          int v42 = *((__int16 *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a6) + 139); /*0x42b74a*/
          if ( v42 == -1 ) /*0x42b754*/
          {
            v43 = (int **)CellStruct::Set(&a2, 0, 0); /*0x42b76c*/
LABEL_51:
            v39 = *v43; /*0x42b789*/
            goto LABEL_52; /*0x42b789*/
          }
          v39 = *(int **)(*((_DWORD *)g_PathClass_State + v42) + 40); /*0x42b75f*/
LABEL_52:
          ++v40; /*0x42b78b*/
          --v41; /*0x42b78e*/
          a6 = (int **)v39; /*0x42b78f*/
          if ( !v41 ) /*0x42b793*/
            goto LABEL_53; /*0x42b793*/
        }
        v43 = (int **)CellStruct::Add(&a6, &a4, (_WORD *)(4 * *v40 + 9041544)); /*0x42b784*/
        goto LABEL_51; /*0x42b784*/
      }
      v26 = 1; /*0x42b5f5*/
      if ( !(*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*a1 + 428))(a1, v25, v51, v24, 0, 1) /*0x42b5c2*/
        && (v25[80] & 0x40000) == 0 )
      {
        TileDataCellClass = CellClass::GetTileData((__int16 *)&v49, v57); /*0x42b5d8*/
        if ( (double)TileDataCellClass * v60 < 1.0 ) /*0x42b5ef*/
          v26 = 0; /*0x42b5b6*/
      }
      v27 = (_WORD)v50 + *v20; /*0x42b5ff*/
      --v52; /*0x42b605*/
      v28 = HIWORD(v50) + v20[1]; /*0x42b60d*/
  int *v55; // [esp+2Ch] [ebp-1Ch]
      LOWORD(v55) = v27; /*0x42b612*/
      HIWORD(v55) = v28; /*0x42b61b*/
      v50 = v55; /*0x42b624*/
      v25 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v50); /*0x42b633*/
      int v29 = *((char *)v25 + 283); /*0x42b635*/
      if ( v24 - v29 == 4 ) /*0x42b641*/
      {
        v24 = v29 + 4; /*0x42b649*/
        if ( (v25[80] & 0x100) != 0 ) /*0x42b64f*/
          continue; /*0x42b64f*/
      }
      v24 = *((char *)v25 + 283); /*0x42b651*/
    }
    while ( !v26 ); /*0x42b655*/
    int v30 = v59 & 7; /*0x42b66e*/
    v31 = HIWORD(v49) + HIWORD(Direction_X_Offsets[v30]); /*0x42b688*/
  int *v56; // [esp+30h] [ebp-18h]
    LOWORD(v56) = LOWORD(Direction_X_Offsets[v30]) + (_WORD)v49; /*0x42b694*/
    HIWORD(v56) = v31; /*0x42b69d*/
    v18 = (__int16)v56; /*0x42b6a2*/
    v53 -= 2; /*0x42b6a7*/
    v7 = a4; /*0x42b6ab*/
    v49 = v56; /*0x42b6af*/
    if ( --a5 <= 0 ) /*0x42b6b9*/
      break; /*0x42b6b9*/
    v19 = v53; /*0x42b545*/
  }
  v6 = a2; /*0x42b6bf*/
LABEL_38:
  int * v32 = *a6; /*0x42b6c3*/
  a2 = *a6; /*0x42b6cb*/
  if ( v7 > 0 ) /*0x42b6cf*/
  {
    int * v33 = v6; /*0x42b6d1*/
    int v34 = v7; /*0x42b6d3*/
    do /*0x42b6ef*/
    {
      v32 = (int *)*GetCellNeighborCoord(&a4, (__int16 *)&a2, *v33++); /*0x42b6e5*/
      --v34; /*0x42b6ea*/
      a2 = v32; /*0x42b6eb*/
    }
    while ( v34 ); /*0x42b6ef*/
  }
  *a6 = v32; /*0x42b6f6*/
  return v7; /*0x42b6f5*/
}
} // namespace gamemd

// 0x42BCA0
namespace gamemd {
void sub_42BCA0(int a1, int a2, int a3, unsigned int * a4, int * a5)
{
{
  __int16 v8; // cx
  __int16 v9; // bx
  __int16 v12; // si
  __int16 v14; // bx
  __int16 v15; // bp
  __int16 result; // ax
  __int16 v22; // [esp+18h] [ebp-10h]
  __int16 v23; // [esp+1Ah] [ebp-Eh]
  int v6 = *a5; /*0x42bcad*/
  int v7 = a3; /*0x42bcb0*/
  v8 = 0; /*0x42bcb4*/
  v9 = 0; /*0x42bcb6*/
  bool v10 = a2 < a3; /*0x42bcb9*/
  int v25 = 0; /*0x42bcbc*/
  int v20 = a2; /*0x42bcc0*/
  int v21 = *a5; /*0x42bcc4*/
  char v27 = 0; /*0x42bcc8*/
  if ( v10 ) /*0x42bccc*/
  {
LABEL_13:
    *a4 = v7; /*0x42bdb5*/
    *a5 = v6; /*0x42bdc2*/
    return (__int16)a4; /*0x42bdc8*/
  }
  _DWORD * v26 = (_DWORD *)(a1 + 4 * a2); /*0x42bcd9*/
  while ( *v26 == -2 ) /*0x42bce6*/
  {
    --v20; /*0x42bcf0*/
    --v26; /*0x42bcf4*/
LABEL_12:
    if ( v20 < v7 ) /*0x42bdaf*/
      goto LABEL_13; /*0x42bdaf*/
  }
  int v11 = ((unsigned __int8)*v26 - 4) & 7; /*0x42bd05*/
  v12 = Direction_X_Offsets[v11]; /*0x42bd08*/
  _WORD * v13 = (_WORD *)(4 * v11 + 9041544); /*0x42bd10*/
  v22 = v8 + v12; /*0x42bd24*/
  v23 = v9 + v13[1]; /*0x42bd29*/
  v14 = HIWORD(v21) + v13[1]; /*0x42bd3a*/
  v15 = v6 + *v13; /*0x42bd3f*/
  int v24; // [esp+1Ch] [ebp-Ch]
  LOWORD(v24) = v15; /*0x42bd42*/
  HIWORD(v24) = v14; /*0x42bd47*/
  HIWORD(v21) = v14; /*0x42bd53*/
  int v16 = abs16(v23); /*0x42bd5f*/
  int v17 = abs16(v22); /*0x42bd64*/
  if ( v17 <= v16 ) /*0x42bd68*/
    v17 = v16; /*0x42bd6a*/
  if ( v17 <= v25 ) /*0x42bd70*/
  {
    v27 = 1; /*0x42bd80*/
    goto LABEL_11; /*0x42bd80*/
  }
  if ( !v27 ) /*0x42bd78*/
  {
    v25 = v17; /*0x42bd7a*/
LABEL_11:
    v9 = v23; /*0x42bd85*/
    v7 = a3; /*0x42bd92*/
    v6 = v24; /*0x42bd96*/
    --v20; /*0x42bd9e*/
    v8 = v22; /*0x42bda2*/
    --v26; /*0x42bda7*/
    goto LABEL_12; /*0x42bda7*/
  }
  int v19 = ((((unsigned __int8)*v26 - 4) & 7) - 4) & 7; /*0x42bdd7*/
  *a4 = v20 + 1; /*0x42bdda*/
  int v28; // [esp+34h] [ebp+Ch]
  LOWORD(v28) = v15 + LOWORD(Direction_X_Offsets[v19]); /*0x42bdf3*/
  result = v14 + HIWORD(Direction_X_Offsets[v19]); /*0x42bdfc*/
  HIWORD(v28) = result; /*0x42bdff*/
  *a5 = v28; /*0x42be0a*/
  return result; /*0x42bdbd*/
}
} // namespace gamemd

// 0x42BE20
namespace gamemd {
LocomotionClass * * WalkLineOfSight(char * a1, int a2, unsigned int * a3, short * a4, unsigned int * a5, int a6, char a7)
{
{
  __int16 v7; // dx
  int v16; // ebp
  int v17; // esi
  bool v18; // cl
  _DWORD *v19; // eax
  signed int v29; // [esp+28h] [ebp-34h]
  signed int v30; // [esp+2Ch] [ebp-30h]
  int v31; // [esp+30h] [ebp-2Ch]
  int v32; // [esp+34h] [ebp-28h]
  int v33; // [esp+38h] [ebp-24h]
  int v34; // [esp+3Ch] [ebp-20h]
  int v37; // [esp+48h] [ebp-14h]
  int v38; // [esp+4Ch] [ebp-10h]
  double v39; // [esp+54h] [ebp-8h]
  v7 = a4[1]; /*0x42be2d*/
  v38 = 0; /*0x42be35*/
  int v8 = *a4; /*0x42be3d*/
  int v9 = v7; /*0x42be40*/
  if ( *a4 >= 0 )
    int v10 = v7 >= 0 ? 3 : 1;
  else
    v10 = v7 >= 0 ? 5 : 7;
  v32 = v10; /*0x42be67*/
  int v11 = v7 + v8; /*0x42be6d*/
  if ( v8 - v7 <= 0 )
    int v12 = v11 <= 0 ? 6 : 4;
  else
    v12 = v11 <= 0 ? 0 : 2;
  v33 = v12; /*0x42be8f*/
  signed int v13 = abs32(v9); /*0x42be9a*/
  signed int v14 = abs16(*a4); /*0x42be9f*/
  v29 = v14; /*0x42bea3*/
  if ( v14 >= v13 ) /*0x42bea7*/
    v29 = v13; /*0x42bea9*/
  if ( v14 <= v13 ) /*0x42beaf*/
    v14 = v13; /*0x42beb1*/
  LocomotionClass *v15 = a5; /*0x42beb7*/
  v30 = v14 - v29; /*0x42bebf*/
  v39 = LocomotionClass::GetSpeedMultiplier(a5); /*0x42bec8*/
  v37 = v15[135]; /*0x42bedd*/
  while ( 1 ) /*0x42beed*/
  {
    v16 = v29; /*0x42beed*/
    v31 = 0; /*0x42bef1*/
    if ( v29 ) /*0x42befb*/
      break; /*0x42befb*/
LABEL_49:
    int v26 = v32; /*0x42c121*/
    v32 = v33; /*0x42c129*/
    v29 = v30; /*0x42c131*/
    v33 = v26; /*0x42c13a*/
    bool v27 = v38 + 1 < 2; /*0x42c13e*/
    v30 = v16; /*0x42c141*/
    ++v38; /*0x42c145*/
    if ( !v27 ) /*0x42c149*/
      return 0; /*0x42c158*/
  }
  v17 = a6; /*0x42bf05*/
  v18 = 0; /*0x42bf09*/
  v19 = (_DWORD *)*a3; /*0x42bf0b*/
  a5 = (_DWORD *)*a3; /*0x42bf13*/
  v34 = v30; /*0x42bf17*/
  if ( v29 > 0 ) /*0x42bf1b*/
  {
    do /*0x42c00c*/
    {
      if ( v18 ) /*0x42bf23*/
        break; /*0x42bf23*/
      int v20 = v32 & 7; /*0x42bf2d*/
  _DWORD *v35; // [esp+40h] [ebp-1Ch]
      LOWORD(v35) = (_WORD)v19 + LOWORD(Direction_X_Offsets[v20]); /*0x42bf46*/
      HIWORD(v35) = HIWORD(a5) + HIWORD(Direction_X_Offsets[v20]); /*0x42bf55*/
      a5 = v35; /*0x42bf5e*/
      _DWORD * v21 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a5); /*0x42bf6c*/
      if ( v39 > 0.00001 && (double)CellClass::GetTileData((__int16 *)&a5, v37) * v39 >= 0.01 ) /*0x42bfa1*/
        ++v31; /*0x42bfa3*/
      v18 = v15->vt_slot_428(v21, v32, v17, 0, 1) /*0x42bfe5*/
         || (v21[80] & 0x40000) != 0
         || v31 > 3
         || !a7 && v31 > 0;
      int v22 = *((char *)v21 + 283); /*0x42bfe7*/
      --v16; /*0x42bff0*/
      if ( v17 - v22 == 4 ) /*0x42bff4*/
      {
        v17 = v22 + 4; /*0x42bffc*/
        if ( (v21[80] & 0x100) != 0 ) /*0x42c002*/
          continue; /*0x42c002*/
      }
      v17 = *((char *)v21 + 283); /*0x42c004*/
      LOWORD(v19) = (_WORD)a5; /*0x42c006*/
    }
    while ( v16 > 0 ); /*0x42c00c*/
  }
  if ( v30 > 0 ) /*0x42c018*/
  {
    while ( !v18 ) /*0x42c026*/
    {
      int v23 = v33 & 7; /*0x42c030*/
  _DWORD *v36; // [esp+44h] [ebp-18h]
      LOWORD(v36) = LOWORD(Direction_X_Offsets[v23]) + (_WORD)v19; /*0x42c053*/
      HIWORD(v36) = HIWORD(a5) + HIWORD(Direction_X_Offsets[v23]); /*0x42c058*/
      a5 = v36; /*0x42c067*/
      _DWORD * v24 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a5); /*0x42c070*/
      if ( v39 > 0.00001 && (double)CellClass::GetTileData((__int16 *)&a5, v37) * v39 >= 0.01 ) /*0x42c0a5*/
        ++v31; /*0x42c0a7*/
      v18 = v15->vt_slot_428(v24, v33, v17, 0, 1) /*0x42c0e9*/
         || (v24[80] & 0x40000) != 0
         || v31 > 3
         || !a7 && v31 > 0;
      --v34; /*0x42c0eb*/
      int v25 = *((char *)v24 + 283); /*0x42c0ef*/
      if ( v17 - v25 != 4 || (v17 = v25 + 4, (v24[80] & 0x100) == 0) ) /*0x42c109*/
        v17 = *((char *)v24 + 283); /*0x42c10b*/
      if ( v34 <= 0 ) /*0x42c113*/
        goto LABEL_47; /*0x42c113*/
      LOWORD(v19) = (_WORD)a5; /*0x42c020*/
    }
    goto LABEL_48; /*0x42c026*/
  }
LABEL_47:
  if ( v18 ) /*0x42c11b*/
  {
LABEL_48:
    v16 = v29; /*0x42c11d*/
    goto LABEL_49; /*0x42c11d*/
  }
  if ( v29 > 0 ) /*0x42c165*/
    memset32(a1, v32, v29); /*0x42c16d*/
  if ( v30 > 0 ) /*0x42c175*/
    memset32(&a1[4 * v29], v33, v30); /*0x42c186*/
  if ( a2 - v30 - v29 > 0 ) /*0x42c19a*/
    memset32(&a1[4 * v29 + 4 * v30], -2, a2 - v30 - v29); /*0x42c1a6*/
  return 1; /*0x42c14f*/
}
} // namespace gamemd

// 0x42C900
namespace gamemd {
void * E4Recv_42C900::FindPathWithRetry(FootClass * aP1, short * a2, int aP4, int a5, int a6, int aP3, int aP6)
{
{
  IUnknown *ecx3; // ecx
  IUnknown *v12; // ebx
  IUnknown *v14; // eax
  IUnknown *v15; // eax
  int TileIndex; // eax
  int (__stdcall ***v18)(_DWORD, void *, int *); // eax
  bool IsWithinUsableArea; // al
  void *result; // eax
  IUnknown *TileIndexMapClass; // [esp+24h] [ebp-14h]
  IUnknown *aP4a; // [esp+44h] [ebp+Ch]
  IUnknown *aP4b; // [esp+44h] [ebp+Ch]

  *(_BYTE *)(this + 56) = 1; /*0x42c909*/
  CellClass::ClearOccupancyGrid((_DWORD *)this); /*0x42c90d*/
  int v9 = this + 116; /*0x42c912*/
  int v10 = 3; /*0x42c915*/
  do /*0x42c925*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9); /*0x42c91e*/
    v9 += 24; /*0x42c921*/
    --v10; /*0x42c924*/
  }
  while ( v10 ); /*0x42c925*/
  this->M60 = aP6; /*0x42c92f*/
  void * v31 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)aP1->__pad_0); /*0x42c93d*/
  v12 = (IUnknown *)CellCoord::To_CellObj(&DataGlobal_87F7E8, a2); /*0x42c95b*/
  if ( aP3 == -1 ) /*0x42c95d*/
    v14 = *(IUnknown **)((*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 132))(aP4) + 1460); /*0x42c96d*/
  IUnknown *v14 = (IUnknown *)aP3; /*0x42c95f*/
  LOBYTE(ecx3) = *(_BYTE *)(aP4 + 140); /*0x42c973*/
  TileIndexMapClass = (IUnknown *)MapClass::GetTileIndex(&DataGlobal_87F7E8, (IUnknown *)aP1, v14, ecx3); /*0x42c98d*/
  if ( aP3 == -1 ) /*0x42c991*/
    aP6 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 132))(aP4) + 1460); /*0x42c9a9*/
  else
    aP6 = aP3; /*0x42c993*/
  v15 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, a2) + 80) >> 8); /*0x42c9ca*/
  LOBYTE(v15) = (unsigned __int8)v15 & 1; /*0x42c9cd*/
  TileIndex = MapClass::GetTileIndex(&DataGlobal_87F7E8, (IUnknown *)a2, (IUnknown *)aP6, v15); /*0x42c9d7*/
  aP4a = (IUnknown *)TileIndex; /*0x42c9e0*/
  LOBYTE(TileIndex) = *(_BYTE *)(aP4 + 140); /*0x42c9e4*/
  int v30 = *Pathfinding::CrossBridge(&aP6, (int)v31, TileIndex); /*0x42ca01*/
  unsigned int v17 = (unsigned int)v12->field_140 >> 8; /*0x42ca0b*/
  LOBYTE(v17) = v17 & 1; /*0x42ca0e*/
  int v29 = *Pathfinding::CrossBridge(&aP6, (int)v12, v17); /*0x42ca23*/
  if ( aP3 == -1 ) /*0x42ca27*/
    aP3 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 132))(aP4) + 1460); /*0x42ca3f*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 44))(aP4) == 15 && *(_BYTE *)(*(_DWORD *)(aP4 + 1728) + 3476) ) /*0x42ca55*/
  {
    v18 = *(int (__stdcall ****)(_DWORD, void *, int *))(aP4 + 1652); /*0x42ca5f*/
    int v19 = 0; /*0x42ca65*/
    aP3 = 7; /*0x42ca69*/
    if ( !v18 ) /*0x42ca71*/
      goto LABEL_18; /*0x42ca71*/
    int v20 = (**v18)(v18, &unk_818858, &aP6); /*0x42ca80*/
    LOBYTE(v19) = v20 < 0; /*0x42ca88*/
    int v21 = aP6 & (v19 - 1); /*0x42ca8c*/
    if ( v20 < 0 && v20 != -2147467262 ) /*0x42ca97*/
      WinAPI::Wrapper(v20); /*0x42ca9a*/
    if ( !v21 ) /*0x42caa1*/
LABEL_18:
      WinAPI::Wrapper(-2147467261); /*0x42caa8*/
  _DWORD v33[4]; // [esp+28h] [ebp-10h] BYREF
    (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v21 + 12))(v21, v33); /*0x42cab5*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21); /*0x42cabf*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)aP4 + 132))(aP4) + 3220) /*0x42cb1b*/
    || !*(_BYTE *)(aP4 + 981)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)aP4 + 800))(aP4)
    || !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (IUnknown *)&v30, (TechnoClass *)1)
    || (IsWithinUsableArea = LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (IUnknown *)&v29, (TechnoClass *)1),
        LOBYTE(aP6) = 1,
        !IsWithinUsableArea) )
  {
    LOBYTE(aP6) = 0; /*0x42cb1d*/
  }
  if ( TileIndexMapClass == aP4a ) /*0x42cb30*/
  {
    if ( (_BYTE)aP6 /*0x42cb58*/
      && !Pathfinding::AStar(
            (_DWORD *)this,
            (IUnknown *)&v30,
            (DynamicVectorClass_uint *)&v29,
            (DynamicVectorClass_uint *)aP3,
            (IUnknown *)aP4) )
    {
      Debug::Log(); /*0x42cb7e*/
      LOBYTE(aP6) = 0; /*0x42cb86*/
    }
  }
  else if ( (_BYTE)aP6 ) /*0x42cb34*/
  {
    return 0; /*0x42cb3f*/
  }
  aP4b = 0; /*0x42cb8f*/
  int v24 = -(a6 != -1); /*0x42cb9a*/
  LOBYTE(v24) = v24 & 0xFC; /*0x42cb9c*/
  TileIndexMapClass = (IUnknown *)(v24 + 5); /*0x42cba1*/
  while ( 1 ) /*0x42cba5*/
  {
    if ( !(_BYTE)aP6 && v30 != v29 ) /*0x42cbc2*/
      Debug::Log(); /*0x42cbde*/
    result = (void *)BuildingClass::UpdatePowerAnimation( /*0x42cc02*/
                       this,
                       (IUnknown *)aP1,
                       (IUnknown *)a2,
                       aP4,
                       a5,
                       a6,
                       (DynamicVectorClass_uint *)aP6);
    v31 = result; /*0x42cc09*/
    if ( result || !(_BYTE)aP6 ) /*0x42cc19*/
      break; /*0x42cc19*/
    signed int v25 = abs32(*(__int16 *)&aP1->__pad_0[2] - a2[1]); /*0x42cc31*/
    __int64 v26 = *(__int16 *)aP1->__pad_0 - *a2; /*0x42cc38*/
    int v27 = (HIDWORD(v26) ^ v26) - HIDWORD(v26); /*0x42cc3b*/
    if ( v27 <= v25 ) /*0x42cc3f*/
      v27 = v25; /*0x42cc41*/
    if ( v27 > 1 ) /*0x42cc46*/
      Debug::Log(); /*0x42cc65*/
    aP4b = (IUnknown *)((char *)aP4b + 1); /*0x42cc75*/
    sub_42CCD0(this, aP4); /*0x42cc79*/
    CellClass::ClearOccupancyGrid((_DWORD *)this); /*0x42cc80*/
    char v28 = (unsigned char)this->M56; /*0x42cc85*/
    LOBYTE(aP6) = v28 != 0; /*0x42cc93*/
    if ( (int)aP4b >= (int)TileIndexMapClass /*0x42ccb3*/
      || v28
      && !Pathfinding::AStar(
            (_DWORD *)this,
            (IUnknown *)&v30,
            (DynamicVectorClass_uint *)&v29,
            (DynamicVectorClass_uint *)aP3,
            (IUnknown *)aP4) )
    {
      return v31; /*0x42ccc0*/
    }
  }
  return result; /*0x42cb36*/
}
} // namespace gamemd

// 0x42CCD0
namespace gamemd {
AbstractClass * * E4Recv_42CCD0::sub_42CCD0(int a2)
{
{
  E4Recv_42CCD0 *v2; // ebx
  unsigned __int16 v5; // di
  __int16 *v6; // ebx
  unsigned int i; // [esp+1Ch] [ebp-1Ch]
  void **v22; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]

  v2 = this; /*0x42ccd4*/
  int v3 = 0; /*0x42ccf4*/
  int * v4 = (int *)(this + 124); /*0x42ccf6*/
  int v20 = DataGlobal_87F858 + 10 * CellToTileIndexMap((int *)&DataGlobal_87F7E8, (__int16 *)(this + 112)); /*0x42ccfc*/
  while ( 1 ) /*0x42cd12*/
  {
  AbstractClass *v9; // eax
    v5 = *(_WORD *)(v20 + 2 * v3); /*0x42cd12*/
    WordVector::Constructor(&v22, 0, 0); /*0x42cd16*/
    v22 = &vt_DynamicVectorClass_unsigned_short_7E3844; /*0x42cd1f*/
    int v27 = 10; /*0x42cd29*/
    int v26 = 0; /*0x42cd31*/
  char v25; // [esp+2Dh] [ebp-Bh]
    if ( Block && v25 ) /*0x42cd41*/
    {
      __3_YAXPAX_Z(Block); /*0x42cd44*/
      Block = 0; /*0x42cd4c*/
    }
    v6 = (__int16 *)(v2 + 112); /*0x42cd5e*/
    v25 = 0; /*0x42cd68*/
    int v24 = 0; /*0x42cd6d*/
    void * v7 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v6); /*0x42cd75*/
    if ( CheckMapReachability(&DataGlobal_87F7E8, (int)v7, v3, (int)&v22, a2) ) /*0x42cd80*/
    {
      int v8 = CellToTileIndexMap((int *)&DataGlobal_87F7E8, v6); /*0x42cd8f*/
      sub_42CF80((_BYTE *)this, *(unsigned __int16 *)(DataGlobal_87F858 + 10 * v8 + 2 * v3), v3); /*0x42cdac*/
      v9 = Block; /*0x42cdb1*/
      v22 = &vt_VectorClass_unsigned_short_7E3824; /*0x42cdb9*/
      if ( Block && v25 ) /*0x42cdcd*/
        goto LABEL_25; /*0x42cdcd*/
    }
    else
    {
      int v10 = v26 - 1; /*0x42cddc*/
      int v19 = v26 - 1; /*0x42cde1*/
      if ( v26 - 1 >= 0 ) /*0x42cde5*/
      {
        unsigned int v11 = v5; /*0x42cde9*/
        for ( i = v5; ; v11 = i ) /*0x42cdee*/
        {
          unsigned int v12 = *((unsigned __int16 *)Block + v10); /*0x42cdfe*/
          if ( (unsigned __int16)v12 != v11 ) /*0x42ce04*/
          {
            if ( (unsigned __int16)v12 < v11 ) /*0x42ce06*/
            {
              v12 = v11; /*0x42ce0a*/
              v11 = *((unsigned __int16 *)Block + v10); /*0x42ce0c*/
            }
            int v13 = v12 | (v11 << 16); /*0x42ce16*/
            int v14 = *v4; /*0x42ce18*/
            if ( v4[2] < *v4 /*0x42ce3b*/
              || (*((_BYTE *)v4 + 5) || !v14)
  int v15; // edx
              && (v15 = v4[3], v15 > 0)
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(v4 - 2) + 8))(v4 - 2, v14 + v15, 0) )
            {
              int v16 = v4[2]; /*0x42ce42*/
              int v17 = *(v4 - 1); /*0x42ce45*/
              v4[2] = v16 + 1; /*0x42ce4b*/
              *(_DWORD *)(v17 + 4 * v16) = v13; /*0x42ce4e*/
            }
          }
          v10 = --v19; /*0x42ce55*/
          if ( v19 < 0 ) /*0x42ce5a*/
            break; /*0x42ce5a*/
        }
      }
      v9 = Block; /*0x42ce5c*/
      v22 = &vt_VectorClass_unsigned_short_7E3824; /*0x42ce64*/
      if ( Block && v25 ) /*0x42ce74*/
      {
LABEL_25:
        __3_YAXPAX_Z(v9); /*0x42ce76*/
        Block = 0; /*0x42ce7f*/
      }
    }
    ++v3; /*0x42ce83*/
    v4 += 6; /*0x42ce84*/
    v25 = 0; /*0x42ce8a*/
    v24 = 0; /*0x42ce8f*/
    if ( v3 >= 3 ) /*0x42ce93*/
      break; /*0x42ce93*/
    v2 = this; /*0x42cd02*/
  }
}
} // namespace gamemd

// 0x42CF80
namespace gamemd {
void E4Recv_42CF80::sub_42CF80(int a2, IUnknown * aP2)
{
{
  IUnknown *v3; // esi
  unsigned __int16 *i; // ecx
  int j; // [esp+18h] [ebp-Ch]
  unsigned int k; // [esp+1Ch] [ebp-8h]

  v3 = aP2; /*0x42cf86*/
  int v5 = *((_DWORD *)this + (_DWORD)aP2 + 797); /*0x42cf8d*/
  if ( v5 > 1 ) /*0x42cf97*/
  {
    int v6 = 0; /*0x42cfa7*/
    for ( i = (unsigned __int16 *)(this + 1000 * (_DWORD)aP2 + 188); *i != a2; ++i ) /*0x42cfba*/
    {
      if ( ++v6 >= v5 ) /*0x42cfd0*/
      {
        *(this + 56) = 0; /*0x42cfd3*/
        return; /*0x42cfdd*/
      }
    }
    if ( v6 == -1 ) /*0x42cfe3*/
    {
      *(this + 56) = 0; /*0x42cfe6*/
    }
    else
    {
  int v9; // edi
      if ( v6 == v5 - 1 ) /*0x42cffc*/
      {
        int v8 = v6 + 500 * (_DWORD)aP2; /*0x42d001*/
        LOWORD(v9) = *((_WORD *)this + v8 + 94); /*0x42d004*/
        LOWORD(aP2) = *((_WORD *)this + v8 + 93); /*0x42d014*/
      }
      else
      {
        int v10 = v6 + 500 * (_DWORD)aP2; /*0x42d01e*/
        LOWORD(v9) = *((_WORD *)this + v10 + 95); /*0x42d029*/
        LOWORD(aP2) = *((_WORD *)this + v10 + 94); /*0x42d031*/
      }
      v9 = (unsigned __int16)v9; /*0x42d03a*/
      int v11 = (unsigned __int16)aP2; /*0x42d040*/
      int v12 = v9; /*0x42d046*/
      unsigned int v27 = (unsigned __int16)aP2; /*0x42d04a*/
      if ( (unsigned __int16)aP2 != (unsigned __int16)v9 ) /*0x42d04e*/
      {
        if ( (unsigned __int16)aP2 < (unsigned int)(unsigned __int16)v9 ) /*0x42d050*/
        {
          v11 = (unsigned __int16)v9; /*0x42d054*/
          v12 = (unsigned __int16)aP2; /*0x42d056*/
        }
        a2 = v11 | (v12 << 16); /*0x42d060*/
        sub_42D830((_DWORD *)this + 6 * (_DWORD)v3 + 29, &a2); /*0x42d06d*/
      }
      int v13 = 24 * (_DWORD)v3; /*0x42d079*/
      int v14 = DataGlobal_87F878[6 * (_DWORD)v3]; /*0x42d082*/
      int v15 = v14 + 36 * (unsigned __int16)v9; /*0x42d088*/
      int v31 = v15; /*0x42d08e*/
      a2 = v14 + 36 * v27; /*0x42d092*/
      int v16 = *(_DWORD *)(v15 + 16) - 1; /*0x42d099*/
      for ( j = v16; v16 >= 0; j = v16 ) /*0x42d09e*/
      {
        if ( *(_WORD *)(*(_DWORD *)(v15 + 4) + 8 * v16) != (_WORD)aP2 ) /*0x42d0b0*/
        {
          int v17 = *(_DWORD *)(a2 + 16) - 1; /*0x42d0bd*/
          int v28 = v17; /*0x42d0be*/
          if ( v17 >= 0 ) /*0x42d0c2*/
          {
            unsigned int v18 = *(unsigned __int16 *)(*(_DWORD *)(v15 + 4) + 8 * v16); /*0x42d0c8*/
            for ( k = v18; ; v18 = k ) /*0x42d0cd*/
            {
              if ( *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8 * v17) == v18 ) /*0x42d0e1*/
              {
                unsigned int v19 = v18; /*0x42d0e3*/
                unsigned int v20 = v27; /*0x42d0e5*/
                if ( v19 != v27 ) /*0x42d0eb*/
                {
                  if ( v19 < v27 ) /*0x42d0ed*/
                  {
                    unsigned int v21 = v19; /*0x42d0ef*/
                    v19 = v27; /*0x42d0f1*/
                    v20 = v21; /*0x42d0f3*/
                  }
                  int v22 = v19 | (v20 << 16); /*0x42d105*/
                  int v23 = *(_DWORD *)(this + v13 + 124); /*0x42d107*/
                  if ( *(_DWORD *)(this + v13 + 132) < v23 /*0x42d129*/
                    || (*(this + v13 + 129) || !v23)
  int v24; // ecx
                    && (v24 = *(_DWORD *)(this + v13 + 136), v24 > 0)
                    && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)(this + v13 + 116) + 8))(
                         this + v13 + 116,
                         v23 + v24,
                         0) )
                  {
                    int v25 = *(_DWORD *)(this + v13 + 132); /*0x42d130*/
                    int v26 = *(_DWORD *)(this + v13 + 120); /*0x42d133*/
                    *(_DWORD *)(this + v13 + 132) = v25 + 1; /*0x42d139*/
                    *(_DWORD *)(v26 + 4 * v25) = v22; /*0x42d13c*/
                  }
                }
              }
              v17 = --v28; /*0x42d143*/
              if ( v28 < 0 ) /*0x42d148*/
                break; /*0x42d148*/
            }
            v16 = j; /*0x42d14a*/
            v15 = v31; /*0x42d14e*/
          }
        }
        --v16; /*0x42d152*/
      }
    }
  }
  else
  {
    *(this + 56) = 0; /*0x42cf9a*/
  }
}
} // namespace gamemd

// 0x42D490
namespace gamemd {
unsigned int * Cell_GetNeighborCoord(unsigned int * a1, short * a2, int a3)
{
{
  __int16 v6; // ax
  if ( a3 == 8 ) /*0x42d49a*/
  {
    int v4 = *((__int16 *)CellCoord::To_CellObj(&DataGlobal_87F7E8, a2) + 139); /*0x42d4a7*/
    if ( v4 == -1 ) /*0x42d4b1*/
      *a1 = 0; /*0x42d4d7*/
    else
      *a1 = *(_DWORD *)(*((_DWORD *)g_PathClass_State + v4) + 40); /*0x42d4bf*/
    return a1; /*0x42d4c1*/
  }
  else
  {
    v6 = HIWORD(Direction_X_Offsets[a3]); /*0x42d4ea*/
  int v7; // [esp+8h] [ebp+4h]
    LOWORD(v7) = LOWORD(Direction_X_Offsets[a3]) + *a2; /*0x42d4f6*/
    HIWORD(v7) = a2[1] + v6; /*0x42d4fb*/
    *a1 = v7; /*0x42d504*/
    return a1; /*0x42d506*/
  }
}
} // namespace gamemd

// 0x42E150
namespace gamemd {
void sub_42E150()
{
{

  ObjectClass *v2 = a2[6]; /*0x42e150*/
  if ( v2 ) /*0x42e158*/
  {
    if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x42e164*/
      int v3 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + v2); /*0x42e172*/
    else
      v3 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 2 * v2); /*0x42e17f*/
  _DWORD v6[4]; // [esp+0h] [ebp-10h] BYREF
    v6[0] = *a2; /*0x42e186*/
    v6[1] = a2[1]; /*0x42e18d*/
    AbstractClass *v4 = a2[2]; /*0x42e191*/
    int v5 = a2[3]; /*0x42e194*/
    v6[2] = v4; /*0x42e197*/
    v6[3] = v5; /*0x42e19b*/
    return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 88))(g_DSurface_Hidden_2, v6, v3); /*0x42e1ac*/
  }
  return result; /*0x42e1b0*/
}
} // namespace gamemd

// 0x42FD30
namespace gamemd {
void EncodeBitmapRGB(Pipe * aP0, int edx0, unsigned char * a2, int a4)
{
{
  Pipe *v5; // ebp
  char needsRedraw; // al
  unsigned int a2a; // [esp+Ch] [ebp+4h]

  if ( !aP0 ) /*0x42fd34*/
    return 0; /*0x42fd34*/
  if ( !edx0 ) /*0x42fd3c*/
    return 0; /*0x42fd3c*/
  if ( !a2 ) /*0x42fd48*/
    return 0; /*0x42fd48*/
  int v4 = a4; /*0x42fd4e*/
  if ( !a4 ) /*0x42fd54*/
    return 0; /*0x42fe46*/
  v5 = aP0; /*0x42fd5c*/
  int v17 = 0; /*0x42fd61*/
  _BYTE * v6 = a2; /*0x42fd69*/
  if ( edx0 > 0 ) /*0x42fd6b*/
  {
  int v8; // edi
    while ( 1 ) /*0x42fd71*/
    {
      if ( v4 < 4 ) /*0x42fd74*/
        goto LABEL_19; /*0x42fd74*/
      AbstractClass *v7 = v5->__pad_0[0]; /*0x42fd7a*/
      v8 = 0; /*0x42fd7d*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x42fd7f*/
      a2a = 0; /*0x42fd80*/
      --edx0; /*0x42fd84*/
      BYTE2(a2a) = v7; /*0x42fd85*/
      if ( !edx0 ) /*0x42fd89*/
        break; /*0x42fd89*/
      AbstractClass *v9 = v5->__pad_0[0]; /*0x42fd8b*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x42fd8e*/
      --edx0; /*0x42fd8f*/
      BYTE1(a2a) = v9; /*0x42fd90*/
      if ( !edx0 ) /*0x42fd96*/
        goto LABEL_11; /*0x42fd96*/
      AbstractClass *v10 = v5->__pad_0[0]; /*0x42fd98*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x42fd9b*/
      LOBYTE(a2a) = v10; /*0x42fd9c*/
      --edx0; /*0x42fda0*/
LABEL_12:
      _BYTE * v11 = v6 + 1; /*0x42fda9*/
      *(v11 - 1) = *((_BYTE *)stru_81898C.ambientSoundController + ((a2a >> 18) & 0x3F)); /*0x42fdbf*/
      char * v12 = v11 + 1; /*0x42fdd0*/
      *(v12 - 1) = *((_BYTE *)stru_81898C.ambientSoundController + ((a2a >> 12) & 0x3F)); /*0x42fdd7*/
      if ( v8 >= 2 ) /*0x42fdda*/
        needsRedraw = stru_81898C.needsRedraw; /*0x42fdf4*/
      else
        needsRedraw = *((_BYTE *)stru_81898C.ambientSoundController + ((a2a >> 6) & 0x3F)); /*0x42fdea*/
      *v12 = needsRedraw; /*0x42fdf6*/
      char * v14 = v12 + 1; /*0x42fdf8*/
      if ( v8 >= 1 ) /*0x42fdfc*/
        char v15 = stru_81898C.needsRedraw; /*0x42fe10*/
      else
        v15 = *((_BYTE *)stru_81898C.ambientSoundController + (a2a & 0x3F)); /*0x42fe06*/
      *v14 = v15; /*0x42fe16*/
      v6 = v14 + 1; /*0x42fe1c*/
      v4 = a4 - 4; /*0x42fe1d*/
      a4 -= 4; /*0x42fe25*/
      v17 += 4; /*0x42fe29*/
      if ( edx0 <= 0 ) /*0x42fe2d*/
        goto LABEL_19; /*0x42fe2d*/
    }
    v8 = 1; /*0x42fda3*/
LABEL_11:
    ++v8; /*0x42fda8*/
    goto LABEL_12; /*0x42fda8*/
  }
LABEL_19:
  if ( v4 > 0 ) /*0x42fe38*/
    *v6 = 0; /*0x42fe3a*/
  return v17; /*0x42fe41*/
}
} // namespace gamemd

// 0x42FE50
namespace gamemd {
void DecodeBitmapRGB(Pipe * aP0, BombClass * aP1, unsigned char * a2, int a4)
{
{
  Pipe *v6; // ebp
  AbstractClass *v9; // cl
  _BYTE *a2a; // [esp+Ch] [ebp+4h]

  if ( aP0 ) /*0x42fe54*/
  {
    if ( aP1 ) /*0x42fe5c*/
    {
      _BYTE * v4 = a2; /*0x42fe62*/
      if ( a2 ) /*0x42fe68*/
      {
        int v5 = a4; /*0x42fe6e*/
        if ( a4 ) /*0x42fe74*/
        {
  char v10; // cl
  int v8; // edi
  int v7; // ebx
          a2a = 0; /*0x42fe7f*/
          v6 = aP0; /*0x42fe87*/
          if ( (int)aP1 <= 0 ) /*0x42fe89*/
            return (int)a2a; /*0x42fe89*/
          while ( 1 ) /*0x42fe8f*/
          {
  char v16; // [esp+12h] [ebp+Ah]
            if ( v5 <= 0 ) /*0x42fe91*/
              return (int)a2a; /*0x42fe91*/
            v7 = 0; /*0x42fe97*/
            v8 = 0; /*0x42fe99*/
            while ( 1 ) /*0x42fe9f*/
            {
              if ( (int)aP1 <= 0 ) /*0x42fea1*/
              {
LABEL_19:
                v16 = BYTE2(v7); /*0x42ff10*/
                goto LABEL_20; /*0x42ff10*/
              }
              v9 = v6->__pad_0[0]; /*0x42fea3*/
              v6 = (Pipe *)((char *)v6 + 1); /*0x42fea6*/
              aP1 = (BombClass *)((char *)aP1 - 1); /*0x42feab*/
              v10 = byte_7E3914[v9]; /*0x42feb6*/
              if ( v10 != -2 ) /*0x42febf*/
                break; /*0x42febf*/
LABEL_18:
              if ( v8 >= 4 ) /*0x42ff0e*/
                goto LABEL_19; /*0x42ff0e*/
            }
            if ( v10 != -1 ) /*0x42fec4*/
              break; /*0x42fec4*/
            v16 = BYTE2(v7); /*0x42ff61*/
            aP1 = 0; /*0x42ff65*/
LABEL_20:
            *v4++ = v16; /*0x42ff14*/
            --v5; /*0x42ff1f*/
            _BYTE * v13 = ++a2a; /*0x42ff20*/
            if ( v5 > 0 ) /*0x42ff27*/
            {
              if ( v8 > 2 ) /*0x42ff2c*/
              {
                *v4++ = BYTE1(v7); /*0x42ff2e*/
                --v5; /*0x42ff31*/
                a2a = v13 + 1; /*0x42ff33*/
              }
              if ( v5 > 0 && v8 > 3 ) /*0x42ff3e*/
              {
                *v4++ = v7; /*0x42ff44*/
                --v5; /*0x42ff47*/
                ++a2a; /*0x42ff49*/
              }
            }
            if ( (int)aP1 <= 0 ) /*0x42ff4f*/
              return (int)a2a; /*0x42ff5e*/
          }
          switch ( v8 ) /*0x42fecf*/
          {
            case 0: /*0x42fecf*/
              int v11 = (v10 & 0x3F) << 18; /*0x42fed9*/
              unsigned int v12 = v7 & 0xFF03FFFF; /*0x42fedc*/
              goto LABEL_16; /*0x42fee2*/
            case 1: /*0x42fecf*/
              v11 = (v10 & 0x3F) << 12; /*0x42fee7*/
              v12 = v7 & 0xFFFC0FFF; /*0x42feea*/
              goto LABEL_16; /*0x42fef0*/
            case 2: /*0x42fecf*/
              v11 = (v10 & 0x3F) << 6; /*0x42fef5*/
              v12 = v7 & 0xFFFFF03F; /*0x42fef8*/
              goto LABEL_16; /*0x42fefe*/
            case 3: /*0x42fecf*/
              v11 = v10 & 0x3F; /*0x42ff00*/
              v12 = v7 & 0xFFFFFFC0; /*0x42ff03*/
LABEL_16:
              v7 = v12 | v11; /*0x42ff06*/
              break; /*0x42ff08*/
            default:
              break;
          }
          ++v8; /*0x42ff0a*/
          goto LABEL_18; /*0x42ff0a*/
        }
      }
    }
  }
  return 0; /*0x42ff5c*/
}
} // namespace gamemd

// 0x420080
namespace gamemd {
int sub_420080()
{
{
    DataGlobal_88A084 = 0;
    DataGlobal_88A088 = 0;
    DataGlobal_88A08C = 1;
    DataGlobal_88A08D = 0;
    DataGlobal_88A080 = (int)&vt_DynamicVectorClass_AlphaLightingRemapClass;
    DataGlobal_88A094 = 10;
    DataGlobal_88A090 = 0;
    return atexit(sub_4200C0);
}
}
} // namespace gamemd

// 0x4200C0
namespace gamemd {
void sub_4200C0()
{
{
    if ( (DataGlobal_88A098 & 1) == 0 )
  {
    DataGlobal_88A080 = (int)&vt_VectorClass_AlphaLightingRemapClass;
    DataGlobal_88A098 |= 1u;
    if ( DataGlobal_88A084 )
    {
    if ( DataGlobal_88A08D )
      {
    __3_YAXPAX_Z(DataGlobal_88A084);
    DataGlobal_88A084 = 0;
      }
    }
    DataGlobal_88A08D = 0;
    DataGlobal_88A088 = 0;
  }
}
}
} // namespace gamemd

// 0x420120
namespace gamemd {
Iostream_init * Iostream_init::Iostream_init()
{
return this;
}
} // namespace gamemd

// 0x420130
namespace gamemd {
void nullsub_53()
{
  ;
}
} // namespace gamemd

// 0x4202F0
namespace gamemd {
unsigned int * E4Recv_4202F0::sub_4202F0(int a2)
{
{
    int v2;
    int v3;
    short *v4;
    int v5;
    short v6;
    v2 = 0;
    *(this + 0x8000) = a2;
    this->M131076 = 0;
    v3 = a2 - 1;
    v4 = this;
    do
  {
    v5 = v3 * (v2 >> 8) * (unsigned char)v2 / 32258;
    if ( v5 > v3 )
    LOBYTE(v5) = a2 - 1;
    LOBYTE(v6) = 0;
    ++v2;
    HIBYTE(v6) = v5;
    *v4++ = v6;
  }
    while ( v2 <= 0xFFFF );
    return this;
}
}
} // namespace gamemd

// 0x420360
namespace gamemd {
void nullsub_88()
{
  ;
}
} // namespace gamemd

// 0x4206D0
namespace gamemd {
int sub_4206D0()
{
{
    DataGlobal_88A0A8 = 0;
    DataGlobal_88A0AC = 0;
    DataGlobal_88A0B0 = 0;
    DataGlobal_88A0B4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4206F0
namespace gamemd {
void sub_4206F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_88A0C0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x420720
namespace gamemd {
void sub_420720()
{
{
    DataGlobal_89A128 = DataGlobal_88A0C0 / 60.0;
}
}
} // namespace gamemd

// 0x420740
namespace gamemd {
void sub_420740()
{
{
    DataGlobal_88A110 = 1.0 / DataGlobal_89A128;
}
}
} // namespace gamemd

// 0x420760
namespace gamemd {
void sub_420760()
{
{
    DataGlobal_88A108 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x420780
namespace gamemd {
void sub_420780()
{
{
    DataGlobal_88A0C8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4207A0
namespace gamemd {
void sub_4207A0()
{
{
    DataGlobal_88A0A0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4207C0
namespace gamemd {
long long sub_4207C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_88A0A0 - DataGlobal_88A0C8);
    result = Math::RoundToInt(v0 * DataGlobal_88A0C0 * 0.5);
    DataGlobal_89A130 = result;
    return result;
}
}
} // namespace gamemd

// 0x420800
namespace gamemd {
void sub_420800()
{
{
    DataGlobal_88A0D0 = Math::ArcTan((double)DataGlobal_89A130 * 0.00390625);
}
}
} // namespace gamemd

// 0x420830
namespace gamemd {
void sub_420830()
{
{
    DataGlobal_88A0E8 = Math::ArcTan((double)(2 * DataGlobal_89A130) / DataGlobal_88A0C0);
}
}
} // namespace gamemd

// 0x420860
namespace gamemd {
long long sub_420860()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89A130) + 0.5);
    DataGlobal_89A124 = result;
    return result;
}
}
} // namespace gamemd

// 0x420890
namespace gamemd {
int sub_420890()
{
{
    DataGlobal_88A0B8 = 0;
    DataGlobal_88A0BA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4208A0
namespace gamemd {
int sub_4208A0()
{
{
    DataGlobal_88A0D8 = 0;
    DataGlobal_88A0DC = 0;
    DataGlobal_88A0E0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4208C0
namespace gamemd {
int sub_4208C0()
{
{
    DataGlobal_89A120 = 0;
    DataGlobal_89A118 = 128;
    DataGlobal_89A11C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4208E0
namespace gamemd {
int sub_4208E0()
{
{
    DataGlobal_88A0F4 = 0;
    DataGlobal_88A0F8 = 0;
    DataGlobal_88A0FC = 1;
    DataGlobal_88A0FD = 0;
    DataGlobal_88A0F0 = (int)&DataGlobal_7E3238;
    DataGlobal_88A104 = 10;
    g_AlphaShapeLimit = 0;
    return atexit(sub_420920);
}
}
} // namespace gamemd

// 0x420920
namespace gamemd {
void sub_420920()
{
{
    DataGlobal_88A0F0 = (int)&vt_VectorClass_AlphaShapeClass;
    if ( DataGlobal_88A0F4 && DataGlobal_88A0FD )
  {
    __3_YAXPAX_Z(DataGlobal_88A0F4);
    DataGlobal_88A0F4 = 0;
  }
    DataGlobal_88A0FD = 0;
    DataGlobal_88A0F8 = 0;
}
}
} // namespace gamemd

// 0x421C90
namespace gamemd {
int sub_421C90()
{
{
    DataGlobal_89A140 = 0;
    DataGlobal_89A144 = 0;
    DataGlobal_89A148 = 0;
    DataGlobal_89A14C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x421CB0
namespace gamemd {
void sub_421CB0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89A158 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x421CE0
namespace gamemd {
void sub_421CE0()
{
{
    DataGlobal_89A1B8 = DataGlobal_89A158 / 60.0;
}
}
} // namespace gamemd

// 0x421D00
namespace gamemd {
void sub_421D00()
{
{
    DataGlobal_89A1A0 = 1.0 / DataGlobal_89A1B8;
}
}
} // namespace gamemd

// 0x421D20
namespace gamemd {
void sub_421D20()
{
{
    DataGlobal_89A198 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x421D40
namespace gamemd {
void sub_421D40()
{
{
    DataGlobal_89A168 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x421D60
namespace gamemd {
void sub_421D60()
{
{
    DataGlobal_89A138 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x421D80
namespace gamemd {
long long sub_421D80()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89A138 - DataGlobal_89A168);
    result = Math::RoundToInt(v0 * DataGlobal_89A158 * 0.5);
    Map_CellHeight = result;
    return result;
}
}
} // namespace gamemd

// 0x421DC0
namespace gamemd {
void sub_421DC0()
{
{
    DataGlobal_89A170 = Math::ArcTan((double)Map_CellHeight * 0.00390625);
}
}
} // namespace gamemd

// 0x421DF0
namespace gamemd {
void sub_421DF0()
{
{
    DataGlobal_89A188 = Math::ArcTan((double)(2 * Map_CellHeight) / DataGlobal_89A158);
}
}
} // namespace gamemd

// 0x421E20
namespace gamemd {
long long sub_421E20()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * Map_CellHeight) + 0.5);
    Map_MaxHeight = result;
    return result;
}
}
} // namespace gamemd

// 0x421E50
namespace gamemd {
int sub_421E50()
{
{
    DataGlobal_89A150 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x421E60
namespace gamemd {
int sub_421E60()
{
{
    Map_InvalidCoord_X = 0;
    Map_InvalidCoord_Y = 0;
    Map_InvalidCoord_Z = 0;
    return 0;
}
}
} // namespace gamemd

// 0x421E80
namespace gamemd {
int sub_421E80()
{
{
    DataGlobal_89A1B0 = 0;
    DataGlobal_89A1A8 = 128;
    DataGlobal_89A1AC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x423920
namespace gamemd {
void nullsub_89()
{
  ;
}
} // namespace gamemd

// 0x426620
namespace gamemd {
void * E4Recv_426620::__4type_info_AAEAAV0_ABV0__Z(int a2)
{
{
    return this;
}
}
} // namespace gamemd

// 0x426650
namespace gamemd {
int sub_426650()
{
{
    DataGlobal_89A1C8 = 0;
    DataGlobal_89A1CC = 0;
    DataGlobal_89A1D0 = 0;
    DataGlobal_89A1D4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4266D0
namespace gamemd {
void E4Recv_4266D0::sub_4266D0()
{
{
    char v2;
    void (__thiscall ***v3)(int, int);
    v2 = (unsigned char)this->M137;
    *(int *)this = &vt_AnimFile;
    if ( v2 )
  {
    (*(void (__thiscall **)(int))(**((int **)(this) + 33) + 52))(this->M132);
    this->M137 = 0;
  }
    v3 = (void (__thiscall ***)(int, int))this->M3596;
    this->M132 = 0;
    if ( v3 )
  {
    (**v3)(v3, 1);
    this->M3596 = 0;
  }
    if ( this->M3600 )
  {
    __3_YAXPAX_Z(*((void **)(this) + 900));
    this->M3600 = 0;
  }
    this->M136 = 0;
    *(int *)this = &vt_Animate;
}
}
} // namespace gamemd

// 0x426740
namespace gamemd {
int sub_426740()
{
return 2816;
}
} // namespace gamemd

// 0x426990
namespace gamemd {
char E4Recv_426990::sub_426990()
{
{
    char result;
    int v2;
    int v3;
    short *i;
    if ( this->M140 == 541478988 && this->M156 == 1296649793 && (unsigned short)this->M144 == 256 && this->M148 <= 0xFFFFu && (unsigned short)this->M152 <= 0x100u && (unsigned short)this->M154 == 1280 && (unsigned short)this->M160 == 320 && (unsigned short)this->M162 == 200 )
  {
    result = 1;
    if ( (unsigned char)this->M169 <= 1u && (unsigned char)this->M171 == 1 && !(unsigned char)this->M170 && !(unsigned char)this->M168 )
    {
    v2 = 0;
    v3 = *(unsigned short *)(this + 146);
    if ( !(short)v3 )
    return result;
    for ( i = (short *)(this + 2062); *i <= 0x100u; i += 3 )
      {
    if ( ++v2 >= v3 )
    return result;
      }
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x426A73
namespace gamemd {
struct Concurrency::details::VirtualProcessor * E4Recv_426A73::_UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ()
{
{
    return (struct Concurrency::details::VirtualProcessor *)this->M160;
}
}
} // namespace gamemd

// 0x426E80
namespace gamemd {
int E4Recv_426E80::sub_426E80(int a2)
{
{
    int result;
    int v3;
    unsigned short *i;
    int v5;
    if ( a2 >= this->M204 )
    return -1;
    result = 0;
    v3 = *(unsigned short *)(this + 146);
    if ( !(short)v3 )
    return -1;
    for ( i = (unsigned short *)(this + 2060); ; i += 3 )
  {
    HIWORD(v5) = 0;
    if ( *i <= a2 )
    {
    LOWORD(v5) = *i;
    if ( v5 + i[1] > a2 )
    break;
    }
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x426FD0
namespace gamemd {
unsigned short E4Recv_426FD0::sub_426FD0(int a2)
{
{
    int v2;
    unsigned short result;
    int v5;
    int v6;
    unsigned short *i;
    int v8;
    int v9;
    unsigned short *v10;
    int v11;
    int v12;
    v2 = a2;
    result = 0;
    if ( a2 < this->M204 )
  {
    v5 = 0;
    v6 = *(unsigned short *)(this + 146);
    if ( (short)v6 )
    {
    for ( i = (unsigned short *)(this + 2060); ; i += 3 )
      {
    HIWORD(v8) = 0;
    if ( *i <= a2 )
        {
    LOWORD(v8) = *i;
    if ( v8 + i[1] > a2 )
    break;
        }
    if ( ++v5 >= v6 )
    return 0;
      }
    if ( v5 == -1 )
    return 0;
    if ( (unsigned char)this->M136 && this->M3608 != v5 )
      {
    v9 = this->M132;
    this->M3608 = v5;
    (*(void (__thiscall **)(int, int, int))(*(int *)(v9) + 40))(v9, (v5 << 16) + 2816, 0);
    (*(void (__thiscall **)(int, int, int))(**(int **)(this + 132) + 36))( this->M132, this->M3600, *(unsigned short *)(this + 2 * (3 * v5 + 1032)) + 2 * *(unsigned short *)(this + 6 * v5 + 2062) + 8);
    v2 = a2;
      }
    v10 = (unsigned short *)(this->M3600 + 8);
    v11 = v2 - *(unsigned short *)(this + 6 * v5 + 2060);
    if ( v11 < 0 )
    return 0;
    v12 = v11 + 1;
    do
      {
    result = *v10++;
    if ( result >= 2u )
    result -= 2;
    --v12;
      }
    while ( v12 );
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x427320
namespace gamemd {
void sub_427320()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89A1F8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x427350
namespace gamemd {
void sub_427350()
{
{
    DataGlobal_89A248 = DataGlobal_89A1F8 / 60.0;
}
}
} // namespace gamemd

// 0x427370
namespace gamemd {
void sub_427370()
{
{
    DataGlobal_89A230 = 1.0 / DataGlobal_89A248;
}
}
} // namespace gamemd

// 0x427390
namespace gamemd {
void sub_427390()
{
{
    DataGlobal_89A228 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4273B0
namespace gamemd {
void sub_4273B0()
{
{
    DataGlobal_89A200 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4273D0
namespace gamemd {
void sub_4273D0()
{
{
    DataGlobal_89A1D8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4273F0
namespace gamemd {
long long sub_4273F0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89A1D8 - DataGlobal_89A200);
    result = Math::RoundToInt(v0 * DataGlobal_89A1F8 * 0.5);
    DataGlobal_89A250 = result;
    return result;
}
}
} // namespace gamemd

// 0x427430
namespace gamemd {
void sub_427430()
{
{
    DataGlobal_89A208 = Math::ArcTan((double)DataGlobal_89A250 * 0.00390625);
}
}
} // namespace gamemd

// 0x427460
namespace gamemd {
void sub_427460()
{
{
    DataGlobal_89A220 = Math::ArcTan((double)(2 * DataGlobal_89A250) / DataGlobal_89A1F8);
}
}
} // namespace gamemd

// 0x427490
namespace gamemd {
long long sub_427490()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89A250) + 0.5);
    DataGlobal_89A244 = result;
    return result;
}
}
} // namespace gamemd

// 0x4274C0
namespace gamemd {
int sub_4274C0()
{
{
    DataGlobal_89A1F0 = 0;
    DataGlobal_89A1F2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4274D0
namespace gamemd {
int sub_4274D0()
{
{
    DataGlobal_89A210 = 0;
    DataGlobal_89A214 = 0;
    DataGlobal_89A218 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4274F0
namespace gamemd {
int sub_4274F0()
{
{
    DataGlobal_89A240 = 0;
    DataGlobal_89A238 = 128;
    DataGlobal_89A23C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x427510
namespace gamemd {
int sub_427510()
{
{
    DataGlobal_89A1E0 = 0;
    DataGlobal_89A1E4 = 0;
    DataGlobal_89A1E8 = 0;
    DataGlobal_89A1EC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x428FF0
namespace gamemd {
int sub_428FF0()
{
{
    DataGlobal_89A260 = 0;
    DataGlobal_89A264 = 0;
    DataGlobal_89A268 = 0;
    DataGlobal_89A26C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x429010
namespace gamemd {
void sub_429010()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89A278 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x429040
namespace gamemd {
void sub_429040()
{
{
    DataGlobal_89A2C8 = DataGlobal_89A278 / 60.0;
}
}
} // namespace gamemd

// 0x429060
namespace gamemd {
void sub_429060()
{
{
    DataGlobal_89A2B0 = 1.0 / DataGlobal_89A2C8;
}
}
} // namespace gamemd

// 0x429080
namespace gamemd {
void sub_429080()
{
{
    DataGlobal_89A2A8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4290A0
namespace gamemd {
void sub_4290A0()
{
{
    DataGlobal_89A280 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4290C0
namespace gamemd {
void sub_4290C0()
{
{
    DataGlobal_89A258 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4290E0
namespace gamemd {
long long sub_4290E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89A258 - DataGlobal_89A280);
    result = Math::RoundToInt(v0 * DataGlobal_89A278 * 0.5);
    DataGlobal_89A2D0 = result;
    return result;
}
}
} // namespace gamemd

// 0x429120
namespace gamemd {
void sub_429120()
{
{
    DataGlobal_89A288 = Math::ArcTan((double)DataGlobal_89A2D0 * 0.00390625);
}
}
} // namespace gamemd

// 0x429150
namespace gamemd {
void sub_429150()
{
{
    DataGlobal_89A2A0 = Math::ArcTan((double)(2 * DataGlobal_89A2D0) / DataGlobal_89A278);
}
}
} // namespace gamemd

// 0x429180
namespace gamemd {
long long sub_429180()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89A2D0) + 0.5);
    DataGlobal_89A2C4 = result;
    return result;
}
}
} // namespace gamemd

// 0x4291B0
namespace gamemd {
int sub_4291B0()
{
{
    DataGlobal_89A270 = 0;
    DataGlobal_89A272 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4291C0
namespace gamemd {
int sub_4291C0()
{
{
    DataGlobal_89A290 = 0;
    DataGlobal_89A294 = 0;
    DataGlobal_89A298 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4291E0
namespace gamemd {
int sub_4291E0()
{
{
    DataGlobal_89A2C0 = 0;
    DataGlobal_89A2B8 = 128;
    DataGlobal_89A2BC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x429200
namespace gamemd {
void sub_429200()
{
{
    punk.field_0 = (struct IUnknownVtbl *)&DataGlobal_7E36D4;
}
}
} // namespace gamemd

// 0x429360
namespace gamemd {
int E4Recv_429360::sub_429360()
{
{
    int result;
    int v2;
    const void *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    if ( !memcmp(v3, &DataGlobal_7E36C0, 0x10u) || !memcmp(v3, &IID_IUnknown, 0x10u) )
  {
    *v4 = v2;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
  }
    else
  {
    result = 0;
    if ( !memcmp(v3, &DataGlobal_7EA6E8, 0x10u) )
    *v4 = &DataGlobal_87F7E8;
    else
    return -2147467262;
  }
    return result;
}
}
} // namespace gamemd

// 0x4293E0
namespace gamemd {
int sub_4293E0()
{
return 1;
}
} // namespace gamemd

// 0x4293F0
namespace gamemd {
int sub_4293F0()
{
return 1;
}
} // namespace gamemd

// 0x429400
namespace gamemd {
int E4Recv_429400::sub_429400()
{
{
    int (__stdcall ***v2)(int, void *, int);
    int v3;
    return (**v2)(v2, &DataGlobal_7E36C0, v3);
}
}
} // namespace gamemd

// 0x429420
namespace gamemd {
int E4Recv_429420::sub_429420()
{
{
    BSTR *v2;
    if ( !v2 )
    return -2147467261;
    *v2 = SysAllocString(&psz);
    return 0;
}
}
} // namespace gamemd

// 0x429450
namespace gamemd {
int E4Recv_429450::sub_429450()
{
{
    BSTR *v2;
    if ( !v2 )
    return -2147467261;
    *v2 = SysAllocString(aSun);
    return 0;
}
}
} // namespace gamemd

// 0x429480
namespace gamemd {
int E4Recv_429480::sub_429480()
{
{
    int (__stdcall ***v2)(int, void *, int);
    int v3;
    return (**v2)(v2, &DataGlobal_7E36C0, v3);
}
}
} // namespace gamemd

// 0x4294A0
namespace gamemd {
int sub_4294A0()
{
return 0;
}
} // namespace gamemd

// 0x4294B0
namespace gamemd {
int E4Recv_4294B0::sub_4294B0()
{
{
    WCHAR WideCharStr[32];
    BSTR *v3;
    if ( !v3 )
    return -2147467261;
    MultiByteToWideChar(0, 1u, (LPCCH)g_ScenarioClass_Instance->fileName, -1, WideCharStr, 32);
    *v3 = SysAllocString(WideCharStr);
    return 0;
}
}
} // namespace gamemd

// 0x429500
namespace gamemd {
int E4Recv_429500::sub_429500()
{
{
    int v2;
    int *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    v2 = g_ScenarioClass_Instance->pauseTimer[0];
    if ( g_ScenarioClass_Instance->elapsedTimer[1] != -1 )
  {
    v3 = &g_ScenarioClass_Instance->elapsedTimer[1];
    v2 += Timer::GetTicks() - *v3;
  }
    *v4 = v2;
    return 0;
}
}
} // namespace gamemd

// 0x429570
namespace gamemd {
int sub_429570()
{
{
    DataGlobal_89C268 = 0;
    DataGlobal_89C26C = 0;
    DataGlobal_89C270 = 0;
    DataGlobal_89C274 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x429590
namespace gamemd {
void sub_429590()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89C280 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4295C0
namespace gamemd {
void sub_4295C0()
{
{
    DataGlobal_89C2D0 = DataGlobal_89C280 / 60.0;
}
}
} // namespace gamemd

// 0x4295E0
namespace gamemd {
void sub_4295E0()
{
{
    DataGlobal_89C2B8 = 1.0 / DataGlobal_89C2D0;
}
}
} // namespace gamemd

// 0x429600
namespace gamemd {
void sub_429600()
{
{
    DataGlobal_89C2B0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x429620
namespace gamemd {
void sub_429620()
{
{
    DataGlobal_89C288 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x429640
namespace gamemd {
void sub_429640()
{
{
    DataGlobal_89A2F8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x429660
namespace gamemd {
long long sub_429660()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89A2F8 - DataGlobal_89C288);
    result = Math::RoundToInt(v0 * DataGlobal_89C280 * 0.5);
    DataGlobal_89C2D8 = result;
    return result;
}
}
} // namespace gamemd

// 0x4296A0
namespace gamemd {
void sub_4296A0()
{
{
    DataGlobal_89C290 = Math::ArcTan((double)DataGlobal_89C2D8 * 0.00390625);
}
}
} // namespace gamemd

// 0x4296D0
namespace gamemd {
void sub_4296D0()
{
{
    DataGlobal_89C2A8 = Math::ArcTan((double)(2 * DataGlobal_89C2D8) / DataGlobal_89C280);
}
}
} // namespace gamemd

// 0x429700
namespace gamemd {
long long sub_429700()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89C2D8) + 0.5);
    DataGlobal_89C2CC = result;
    return result;
}
}
} // namespace gamemd

// 0x429730
namespace gamemd {
int sub_429730()
{
{
    DataGlobal_89C278 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x429740
namespace gamemd {
int sub_429740()
{
{
    DataGlobal_89C298 = 0;
    DataGlobal_89C29C = 0;
    DataGlobal_89C2A0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x429760
namespace gamemd {
int sub_429760()
{
{
    DataGlobal_89C2C8 = 0;
    DataGlobal_89C2C0 = 128;
    DataGlobal_89C2C4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x42ABF0
namespace gamemd {
void nullsub_4()
{
  ;
}
} // namespace gamemd

// 0x42D830
namespace gamemd {
char E4Recv_42D830::sub_42D830(unsigned int * a2)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->M8;
    if ( this->M16 >= v3 )
  {
    if ( !(unsigned char)this->M13 && v3 )
    return 0;
    v4 = this->M20;
    if ( v4 <= 0 || !this->Vf8(v3 + v4, 0) )
    return 0;
  }
    v6 = this->M16;
    v7 = this->M4;
    this->M16 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *a2;
    return 1;
}
}
} // namespace gamemd

// 0x42E090
namespace gamemd {
int sub_42E090()
{
{
    DataGlobal_89C2E8 = 0;
    DataGlobal_89C2EC = 0;
    DataGlobal_89C2F0 = 0;
    DataGlobal_89C2F4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x42E430
namespace gamemd {
void sub_42E430()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89C318 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x42E460
namespace gamemd {
void sub_42E460()
{
{
    DataGlobal_89C368 = DataGlobal_89C318 / 60.0;
}
}
} // namespace gamemd

// 0x42E480
namespace gamemd {
void sub_42E480()
{
{
    DataGlobal_89C350 = 1.0 / DataGlobal_89C368;
}
}
} // namespace gamemd

// 0x42E4A0
namespace gamemd {
void sub_42E4A0()
{
{
    DataGlobal_89C348 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x42E4C0
namespace gamemd {
void sub_42E4C0()
{
{
    DataGlobal_89C320 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x42E4E0
namespace gamemd {
void sub_42E4E0()
{
{
    DataGlobal_89C2F8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x42E500
namespace gamemd {
long long sub_42E500()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89C2F8 - DataGlobal_89C320);
    result = Math::RoundToInt(v0 * DataGlobal_89C318 * 0.5);
    DataGlobal_89C370 = result;
    return result;
}
}
} // namespace gamemd

// 0x42E540
namespace gamemd {
void sub_42E540()
{
{
    DataGlobal_89C328 = Math::ArcTan((double)DataGlobal_89C370 * 0.00390625);
}
}
} // namespace gamemd

// 0x42E570
namespace gamemd {
void sub_42E570()
{
{
    DataGlobal_89C340 = Math::ArcTan((double)(2 * DataGlobal_89C370) / DataGlobal_89C318);
}
}
} // namespace gamemd

// 0x42E5A0
namespace gamemd {
long long sub_42E5A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89C370) + 0.5);
    DataGlobal_89C364 = result;
    return result;
}
}
} // namespace gamemd

// 0x42E5D0
namespace gamemd {
int sub_42E5D0()
{
{
    DataGlobal_89C310 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x42E5E0
namespace gamemd {
int sub_42E5E0()
{
{
    DataGlobal_89C330 = 0;
    DataGlobal_89C334 = 0;
    DataGlobal_89C338 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x42E600
namespace gamemd {
int sub_42E600()
{
{
    DataGlobal_89C360 = 0;
    DataGlobal_89C358 = 128;
    DataGlobal_89C35C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x42E620
namespace gamemd {
int sub_42E620()
{
{
    DataGlobal_89C300 = 0;
    DataGlobal_89C304 = 0;
    DataGlobal_89C308 = 0;
    DataGlobal_89C30C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x42E6C0
namespace gamemd {
char sub_42E6C0(int a1)
{
return 1;
}
} // namespace gamemd

// 0x42E800
namespace gamemd {
char E4Recv_42E800::sub_42E800(int a2)
{
{
    return *(char *)(16 * a2 + this->M8 + 8);
}
}
} // namespace gamemd

// 0x42E990
namespace gamemd {
bool E4Recv_42E990::sub_42E990(unsigned int * a2)
{
{
    int v4;
    int v5;
    int v6;
    short *v7;
    char v9[4];
    int i;
    if ( *((int*)(a2) + 135) != this->M116 )
    return 0;
    v4 = 0;
    if ( (int)this->M20 <= 0 )
    return 0;
    v5 = 0;
    for ( i = 0; ; i += 16 )
  {
    v6 = this->M8 + v5;
    if ( *(int *)(*((int*)(a2) + 328) + 3576) == *(int *)v6 )
    {
    v7 = (short *)(*(int (__thiscall **)(int *, char *))(*a2 + 440))(a2, v9);
    if ( *v7 == *(short *)(v6 + 4) && v7[1] == *(short *)(v6 + 6) )
    break;
    }
    ++v4;
    v5 = i + 16;
    if ( v4 >= this->M20 )
    return 0;
  }
    return this->M8 + 16 * v4 != 0;
}
}
} // namespace gamemd

// 0x42EA30
namespace gamemd {
int E4Recv_42EA30::sub_42EA30(unsigned int * a2)
{
{
    int v4;
    int v5;
    short *v6;
    char v8[4];
    int v9;
    if ( *((int*)(a2) + 135) != this->M116 )
    return 0;
    v4 = 0;
    v9 = 0;
    if ( (int)this->M20 <= 0 )
    return 0;
    while ( 1 )
  {
    v5 = this->M8 + v4;
    if ( *(int *)(*((int*)(a2) + 328) + 3576) == *(int *)v5 )
    {
    v6 = (short *)(*(int (__thiscall **)(int *, char *))(*a2 + 440))(a2, v8);
    if ( *v6 == *(short *)(v5 + 4) && v6[1] == *(short *)(v5 + 6) )
    break;
    }
    v4 += 16;
    if ( ++v9 >= this->M20 )
    return 0;
  }
    return this->M8 + 16 * v9;
}
}
} // namespace gamemd

// 0x42EAD0
namespace gamemd {
int E4Recv_42EAD0::sub_42EAD0(unsigned short * a2)
{
{
    int v2;
    int v3;
    int v4;
    short *i;
    v2 = this->M20;
    v3 = 0;
    if ( v2 <= 0 )
    return 0;
    v4 = this->M8;
    for ( i = (short *)(v4 + 4); *a2 != *i || *((int*)(a2) + 1) != i[1]; i += 8 )
  {
    if ( ++v3 >= v2 )
    return 0;
  }
    return v4 + 16 * v3;
}
}
} // namespace gamemd

// 0x42FF80
namespace gamemd {
int sub_42FF80()
{
{
    DataGlobal_89C380 = 0;
    DataGlobal_89C384 = 0;
    DataGlobal_89C388 = 0;
    DataGlobal_89C38C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x42FFA0
namespace gamemd {
void sub_42FFA0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89C398 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x42FFD0
namespace gamemd {
void sub_42FFD0()
{
{
    DataGlobal_89C468 = DataGlobal_89C398 / 60.0;
}
}
} // namespace gamemd

// 0x42FFF0
namespace gamemd {
void sub_42FFF0()
{
{
    DataGlobal_89C450 = 1.0 / DataGlobal_89C468;
}
}
} // namespace gamemd
