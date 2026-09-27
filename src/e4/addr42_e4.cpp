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
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/E4Recv_431BC0_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/SessionClass_e4.hpp"

// 0x420140
namespace gamemd {
unsigned int * CreateFractalNoise(CCINIClass * aP0)
{
  int v1; // eax
  char *v2; // ecx
  unsigned int *v3; // eax
  unsigned int *v4; // ebp
  unsigned short * v5;
  CCINIClass * v6;
  unsigned short *v7; // ebx
  int v8; // edx
  int16_t v9; // cx
  unsigned int * v11;

  v1 = 0; /*0x420149*/
  if ( dword_88A090 <= 0 ) /*0x420152*/
  {
  LABEL_5: v3 = (unsigned int *)(operator new(0x20008u));
    v4 = (unsigned int)(v3);
    if ( v3 ) /*0x42017f*/
    {
      v3[0x8000] = (unsigned short *)(aP0);
      v5 = (int)((unsigned short *)(0));
      v3[32769] = (unsigned short *)(0);
      v6 = (gamemd::CCINIClass *)((unsigned short *)(aP0 - 1));
      v7 = (unsigned short *)(v3);
      do /*0x4201d3*/
      {
        v8 = (unsigned char)(v6 * (v5 >> 8) * (uint8_t)v5 / 32258);
        if ( v8 > v6 ) /*0x4201be*/
          IDA_LOBYTE(v8) = aP0 - 1; /*0x4201c0*/
        IDA_LOBYTE(v9) = 0; /*0x4201c2*/
        ++v5; /*0x4201c4*/
        IDA_HIBYTE(v9) = v8; /*0x4201c5*/
        *v7++ = v9; /*0x4201c7*/
      }
      while ( v5 <= 0xFFFF ); /*0x4201d3*/
    }
    else
    {
      v4 = 0; /*0x4201f7*/
    }
    if ( dword_88A090 < dword_88A088 /*0x420230*/
      || (byte_88A08D || !dword_88A088)
      && dword_88A094 > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_88A080 + 8))(
           &dword_88A080,
           dword_88A088 + dword_88A094,
           0) )
    {
      v11 = (unsigned int *)(dword_88A090++);
      *((unsigned int *)dword_88A084 + v11) = v4; /*0x42024c*/
    }
    ++v4[32769]; /*0x420258*/
    return v4; /*0x42025e*/
  }
  else
  {
    v2 = (char *)dword_88A084; /*0x42015a*/
    while ( *(unsigned int *)(*(unsigned int *)v2 + 0x20000) != aP0 ) /*0x420164*/
    {
      ++v1; /*0x420166*/
      v2 += 4; /*0x420167*/
      if ( v1 >= dword_88A090 ) /*0x42016c*/
        goto LABEL_5; /*0x42016c*/
    }
    ++*(unsigned int *)(*((unsigned int *)dword_88A084 + v1) + 131076); /*0x4201e5*/
    return (unsigned int *)*((unsigned int *)dword_88A084 + v1); /*0x4201f1*/
  }
}
}
// 0x420F40
namespace gamemd {
AbstractClass * * UpdateSpotlightsFoo(int * a1, int * a2)
{
  int result; // eax
  int *v3; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int *v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // ecx
  int v15; // edx
  int * v16;
  int * v17;
  int v18; // edx
  int *FoundationSize; // edx
  int v20; // eax
  int v21; // edi
  int v22; // ebx
  int * v23;
  int SubFile; // esi
  unsigned short *v25; // eax
  unsigned int v26;
  uint8_t *v27; // esi
  char *v28; // ebp
  int * v29;
  int * v30;
  uint8_t v31; // cl
  char v32; // cl
  char *v33; // edx
  int * v34;
  uint8_t v35; // cl
  char v36; // cl
  int * v37;
  int * v38;
  int * v39;
  unsigned int v40;
  int * v41;
  int * v42;
  int v43; // [esp+18h] [ebp-B8h]
  int v44; // [esp+1Ch] [ebp-B4h]
  uint8_t v45; // [esp+20h] [ebp-B0h]
  uint8_t v46; // [esp+20h] [ebp-B0h]
  int * v47;
  int * v48;
  char *v49; // [esp+2Ch] [ebp-A4h]
  int * v50;
  int * v51;
  int * v52;
  int * v53;
  int *v54; // [esp+40h] [ebp-90h]
  int v55; // [esp+44h] [ebp-8Ch]
  int v56; // [esp+4Ch] [ebp-84h]
  int v57; // [esp+50h] [ebp-80h]
  int * v58;
  int *v59; // [esp+5Ch] [ebp-74h]
  int v60; // [esp+60h] [ebp-70h]
  char **v61; // [esp+64h] [ebp-6Ch]
  int v62; // [esp+68h] [ebp-68h] BYREF
  int v63; // [esp+6Ch] [ebp-64h]
  int v64; // [esp+70h] [ebp-60h]
  unsigned int v65;
  int v66; // [esp+7Ch] [ebp-54h]
  int v67; // [esp+84h] [ebp-4Ch]
  int v68[4]; // [esp+88h] [ebp-48h] BYREF
  int * v69;
  int v70[4]; // [esp+A0h] [ebp-30h] BYREF
  int v71[4]; // [esp+B0h] [ebp-20h] BYREF
  int v72[4]; // [esp+C0h] [ebp-10h] BYREF

  result = g_AlphaShapeLimit; /*0x420f46*/
  v3 = a1; /*0x420f4d*/
  v4 = 0; /*0x420f4f*/
  v54 = a2; /*0x420f51*/
  v59 = a1; /*0x420f57*/
  v44 = 0; /*0x420f5b*/
  if ( g_AlphaShapeLimit > 0 ) /*0x420f5f*/
  {
    while ( 1 ) /*0x420f72*/
    {
      v5 = *((unsigned int *)dword_88A0F4 + v4); /*0x420f72*/
      if ( !*(unsigned char *)(v5 + 60) ) /*0x420f75*/
      {
        v50 = (int *)((unsigned int)((int *)(*(unsigned int *)(v5 + 40))));
        v51 = (int *)(*(unsigned int *)(v5 + 44));
        v52 = (int *)(*(unsigned int *)(v5 + 48));
        v53 = (int *)(*(unsigned int *)(v5 + 52));
        v6 = (int *)(v51 - (unsigned int)g_TacticalClass_Instance[45].lpVtbl);
        v50 = (int *)(DSurface_ViewBounds + v50 - (unsigned int)g_TacticalClass_Instance[44].lpVtbl);
        v51 = (int *)(g_Map_VisibleRect + v6);
        v7 = (int *)(ClipRectIntersection(v70, (int *)&v50, v54, 0, 0));
        v68[0] = (int *)(*v7);
        v68[1] = v7[1]; /*0x420ff7*/
        v68[2] = v7[2]; /*0x421001*/
        v8 = v3[1]; /*0x421008*/
        v9 = v7[3]; /*0x42100b*/
        v10 = *v3; /*0x42100e*/
        v68[3] = v9; /*0x421010*/
        v63 = v8; /*0x42101b*/
        v62 = v10; /*0x42102e*/
        v64 = 60; /*0x421032*/
        v65 = 30; /*0x42103d*/
        v11 = ClipRectIntersection(v71, v68, &v62, 0, 0); /*0x42104d*/
        v12 = *v11; /*0x42104f*/
        v55 = *v11; /*0x421051*/
        v13 = v11[1]; /*0x421055*/
        v14 = v11[2]; /*0x421058*/
        v15 = v11[3]; /*0x42105d*/
        v56 = v14; /*0x421060*/
        v57 = v15; /*0x421064*/
        if ( v14 > 0 && v15 > 0 ) /*0x421070*/
        {
          v16 = (int *)(v13 - v63);
          v17 = (int *)((unsigned int)((int *)(v50)));
          v69 = (int *)(v12 - v62);
          v18 = (int)(*((unsigned int *)dword_88A0F4 + v4));
          v58 = (int *)(v51);
          v61 = (char **)((int *)(*(char ***)(v18 + 56)));
          FoundationSize = (int *)(Building::GetFoundationSize(v72, 0));
          v41 = (unsigned int)((int *)(v13));
          v20 = (int *)(*FoundationSize);
          v66 = FoundationSize[1]; /*0x4210c1*/
          v21 = FoundationSize[2]; /*0x4210c8*/
          v67 = FoundationSize[3]; /*0x4210ce*/
          if ( v13 <= v58 + v66 ) /*0x4210dd*/
            v41 = v58 + v66; /*0x4210df*/
          v60 = v41 - v58 - v66; /*0x4210fd*/
          v37 = v57 + v13; /*0x421118*/
          if ( v57 + v13 >= v66 + v67 + v58 ) /*0x42111c*/
            v37 = v66 + v67 + v58; /*0x42111e*/
          v40 = v55; /*0x42112b*/
          if ( v55 <= (int)(v17 + v20) ) /*0x42112f*/
            v40 = v17 + v20; /*0x421131*/
          v22 = v40 - v17 - v20; /*0x421144*/
          v23 = v55 + v56; /*0x42114e*/
          if ( v55 + v56 >= (int)(v20 + v17 + v21) ) /*0x421156*/
          {
            v42 = (int)(v20 + v17 + v21);
            v23 = (int)(v42);
          }
          else
          {
            v42 = (int *)(v55 + v56);
          }
          v47 = (int)(v40 + *((unsigned int *)g_VisibleSurfaceDescriptor + 10) - v23);
          v43 = (int *)(60 - v56);
          v48 = v40 + v21 - v23; /*0x4211a1*/
          v49 = (char *)&unk_7E2B20 + 60 * v16 + v69; /*0x4211b0*/
          SubFile = MixFileClass::GetSubFile(v61, 0); /*0x4211c9*/
          v25 = (unsigned short *)StreamClass::ReadAndSeek((int)g_VisibleSurfaceDescriptor, v40, v41 - g_Map_VisibleRect); /*0x4211d3*/
          v26 = g_VisibleSurfaceDescriptor; /*0x4211d8*/
          v27 = (uint8_t *)(v22 + v60 * v21 + SubFile); /*0x4211ed*/
          if ( (unsigned int)&v25[(v37 - v41) * *((unsigned int *)g_VisibleSurfaceDescriptor + 10) /*0x421211*/
                                + 2
                                + v42
                                + 0x7FFFFFFF * v40] < *((unsigned int *)g_VisibleSurfaceDescriptor + 7) )
          {
            if ( v41 < v37 ) /*0x4212bb*/
            {
              v33 = (int)(v49);
              v39 = v37 - v41; /*0x4212c5*/
              do /*0x421324*/
              {
                if ( v40 < v42 ) /*0x4212cf*/
                {
                  v34 = (int)(v42 - v40);
                  do /*0x421306*/
                  {
                    v35 = *v27++; /*0x4212d5*/
                    v46 = v35; /*0x4212d8*/
                    v36 = *v33++; /*0x4212dc*/
                    if ( v36 != 32 ) /*0x4212e2*/
                      *v25 = (uint8_t)byte_88A118[256 * v46 + (uint16_t)*v25]; /*0x4212ff*/
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
            v28 = (char *)((int)(v49));
            v38 = (int *)(v37 - v41);
            v29 = (unsigned int)((int *)(v40));
            do /*0x4212ad*/
            {
              if ( v29 < v42 ) /*0x421239*/
              {
                v30 = (int)(v42 - v29);
                do /*0x421281*/
                {
                  v31 = *v27++; /*0x42123f*/
                  v45 = v31; /*0x421242*/
                  v32 = *v28++; /*0x421246*/
                  if ( v32 != 32 ) /*0x42124d*/
                  {
                    *v25 = (uint8_t)byte_88A118[256 * v45 + (uint16_t)*v25]; /*0x42126a*/
                    v26 = g_VisibleSurfaceDescriptor; /*0x42126d*/
                  }
                  if ( (unsigned int)++v25 >= v26[7] ) /*0x42127b*/
                    v25 = (unsigned short *)((char *)v25 - v26[8]); /*0x42127d*/
                  --v30; /*0x421280*/
                }
                while ( v30 ); /*0x421281*/
                v29 = v40; /*0x421283*/
              }
              v27 += v48; /*0x42128b*/
              v28 += v43; /*0x421291*/
              v25 += v47; /*0x421297*/
              if ( (unsigned int)v25 >= v26[7] ) /*0x42129f*/
                v25 = (unsigned short *)((char *)v25 - v26[8]); /*0x4212a1*/
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
  return (gamemd::AbstractClass **)(result);
}
}
// 0x421B60
namespace gamemd {
unsigned int * ClipRectIntersection(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, MapClass * aP3, unsigned int * a4)
{
  unsigned int *result; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // ecx
  int v10; // ebp
  int v11; // edx
  int v12; // ebp
  int v13; // ecx
  int v14; // esi
  int v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+20h] [ebp-8h]
  int v17; // [esp+24h] [ebp-4h]

  result = (unsigned int *)((int)(aP0));
  v6 = (int)(*aP2);
  v7 = (int)(aP2[1]);
  v16 = (int)(aP2[2]);
  v17 = (int)(aP2[3]);
  v8 = (int)(aP1[2]);
  if ( v8 <= 0 ) /*0x421b87*/
    goto LABEL_23; /*0x421b87*/
  v15 = aP1[3]; /*0x421b92*/
  if ( v15 <= 0 || aP2[2] <= 0 || aP2[3] <= 0 ) /*0x421bac*/
    goto LABEL_23; /*0x421bac*/
  v9 = *aP1; /*0x421bb2*/
  if ( v6 < *aP1 ) /*0x421bb6*/
  {
    v10 = (int)(v6 - v9 + v16);
    v6 = (int)(*aP1);
    v16 = v10; /*0x421bc2*/
  }
  if ( v16 < 1 ) /*0x421bcb*/
    goto LABEL_23; /*0x421bcb*/
  v11 = aP1[1]; /*0x421bd1*/
  if ( v7 < v11 ) /*0x421bda*/
  {
    v12 = v7 - v11 + v17; /*0x421be2*/
    v7 = v11; /*0x421be4*/
    v17 = v12; /*0x421be6*/
  }
  if ( v17 < 1 ) /*0x421bef*/
    goto LABEL_23; /*0x421bef*/
  v13 = v6 + v16 <= v9 + v8 ? v16 : v8 + v9 - v6;
  if ( v13 < 1 ) /*0x421c0b*/
    goto LABEL_23; /*0x421c0b*/
  v14 = v17; /*0x421c17*/
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
      *aP3 += *aP2 - v6; /*0x421c3c*/
    if ( a4 ) /*0x421c44*/
      *a4 += aP2[1] - v7; /*0x421c4f*/
    *result = v6; /*0x421c53*/
    result[1] = v7; /*0x421c55*/
    result[2] = v13; /*0x421c59*/
    result[3] = v14; /*0x421c5c*/
  }
  return result; /*0x421c58*/
}
}
// 0x424CE0
namespace gamemd {
void* ProductionCompletionCallback()
{
  int v2; // eax
  int v3; // eax
  unsigned int *v4; // eax
  uint8_t *v5; // ebx
  unsigned int *v6; // edi
  void **v7; // ebp
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  void **v13; // eax
  int *p_Location_X; // esi
  int16_t *v15; // ebx
  int v17; // [esp-8h] [ebp-38h]
  int v18; // [esp+Ch] [ebp-24h] BYREF
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  char v21[12]; // [esp+18h] [ebp-18h] BYREF
  char v22[12]; // [esp+24h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(BuildingClass_Full *, int))(*(unsigned int *)this->_pad_base + 292))(this, 2); /*0x424ceb*/
  if ( IDA_BYTE2(this->IronTintTimer_Padding) || *(unsigned int *)(this->MissionTimer_StartTime + 760) == -1 ) /*0x424d08*/
  {
    AudioController::Stop((int *)((char *)&this->IronTintTimer_TimeLeft + 2)); /*0x424d38*/
  }
  else
  {
    v2 = (*(int (__thiscall **)(BuildingClass_Full *, int *))(*(unsigned int *)this->_pad_base + 72))(this, &v18); /*0x424d1a*/
    StartAudioControllerAt(*(unsigned int *)(this->MissionTimer_StartTime + 760), v2, (int)&this->IronTintTimer_TimeLeft + 2); /*0x424d2b*/
  }
  AudioController::Stop(&this->_pad_1A4[18]); /*0x424d43*/
  if ( !*(unsigned int *)(this->MissionTimer_StartTime + 664) ) /*0x424d4e*/
    CreateUnitOnCompletion(); /*0x424d5a*/
  IDA_LOBYTE(v3) = IDA_BYTE2(this->IronTintTimer_Padding); /*0x424d5f*/
  if ( !(unsigned char)v3 ) /*0x424d67*/
  {
    IDA_LOBYTE(v3) = *(unsigned char *)(this->MissionTimer_StartTime + 855); /*0x424d73*/
    if ( (unsigned char)v3 ) /*0x424d7b*/
    {
      v4 = (unsigned int *)(*(int (__thiscall **)(BuildingClass_Full *, char *))(*(unsigned int *)this->_pad_base + 72))(this, v21); /*0x424d8a*/
      v5 = (uint8_t *)Coord::To_Cell(&MapClass_Instance, v4); /*0x424d98*/
      v3 = BuildingClass::FindByCellHash(v5); /*0x424d9c*/
      if ( v3 != -1 ) /*0x424da4*/
      {
        v6 = (unsigned int *)*((unsigned int *)BuildingClass_InstanceArray + v3); /*0x424db3*/
        CellClass::ReduceTiberium((int)v5, v5[286] + 1); /*0x424dc0*/
        if ( (int)v6[53] > 0 && !((int)abs32(Random::State((unsigned int *)g_ScenarioClass_Instance + 134)) % 3) ) /*0x424def*/
        {
          v7 = (void *)operator new(0x1C8u); /*0x424e04*/
          if ( v7 ) /*0x424e0b*/
          {
            v8 = (int *)(*(int (__thiscall **)(BuildingClass_Full *, char *))(*(unsigned int *)this->_pad_base + 72))( /*0x424e16*/
                          this,
                          v22);
            v9 = *v8; /*0x424e19*/
            v10 = v8[1]; /*0x424e1b*/
            v11 = v8[2]; /*0x424e1e*/
            v18 = v9; /*0x424e21*/
            v20 = v11 + 10; /*0x424e2e*/
            v17 = v6[53] - 1; /*0x424e3f*/
            v19 = v10; /*0x424e42*/
            v12 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, v17); /*0x424e46*/
            v13 = AnimClass::ctor(v7, *(void **)(v6[50] + 4 * v12), (int)&v18, 0, 1, (void *)0x600, 0, 0); /*0x424e69*/
          }
          else
          {
            v13 = 0; /*0x424e70*/
          }
          v13[53] = *(void **)(*((unsigned int *)BuildingTypeClass_AnimTable + v6[48]) + 780); /*0x424e88*/
          v13[63] = (void *)*((int16_t *)v5 + 133); /*0x424e95*/
        }
        p_Location_X = &this->Location_X; /*0x424e9b*/
        v18 = *p_Location_X; /*0x424ea7*/
        v19 = p_Location_X[1]; /*0x424eae*/
        v20 = p_Location_X[2]; /*0x424eba*/
        PlaySoundEffectAt( /*0x424ed1*/
          &v18,
          *((unsigned int *)g_RulesClass_Instance + 346),
          0,
          *((unsigned int *)g_RulesClass_Instance + 1002),
          0,
          0);
        House::AnnounceUpgrade((int)v5, -1); /*0x424eda*/
        v15 = (int16_t *)(v5 + 36); /*0x424edf*/
        Cell::SetRadar((int *)&MapClass_Instance, v15); /*0x424ee8*/
        Radar::Update(&MapClass_Instance, v15); /*0x424ef3*/
      }
    }
  }
  return (void *)(v3);
}
}
// 0x424F00
namespace gamemd {
AbstractClass * * CreateUnitOnCompletion()
{
  unsigned int *v2; // eax
  void *v3; // eax
  int v4; // edx
  int v5; // ebp
  int MissionTimer_StartTime; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int i; // edi
  int v11; // eax
  int v12; // eax
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  int v17; // [esp+10h] [ebp-20h]
  int v18; // [esp+10h] [ebp-20h]
  int v19; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h]
  int v21; // [esp+1Ch] [ebp-14h]
  unsigned int v22[4]; // [esp+20h] [ebp-10h] BYREF

  v2 = (unsigned int *)(*(int (__thiscall **)(BuildingClass_Full *, unsigned int *))(*(unsigned int *)this->_pad_base + 72))(this, v22); /*0x424f12*/
  IDA_LOWORD(v17) = *v2 / 256; /*0x424f25*/
  IDA_HIWORD(v17) = v2[1] / 256; /*0x424f3e*/
  v19 = v17; /*0x424f4b*/
  v3 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v19); /*0x424f50*/
  v4 = *(unsigned int *)this->_pad_base; /*0x424f55*/
  v5 = 30; /*0x424f57*/
  v21 = (int)v3; /*0x424f5e*/
  v18 = 30; /*0x424f62*/
  if ( (*(int (__thiscall **)(BuildingClass_Full *))(v4 + 108))(this) ) /*0x424f66*/
  {
    MissionTimer_StartTime = this->MissionTimer_StartTime; /*0x424f72*/
    if ( *(unsigned int *)(MissionTimer_StartTime + 668) == -1 ) /*0x424f7e*/
      *(unsigned int *)(this->MissionTimer_StartTime + 668) = Building::GetFoundationSize( /*0x424f9c*/
                                                          v22,
                                                          *(unsigned int *)(MissionTimer_StartTime + 664))[2];
    v7 = this->MissionTimer_StartTime; /*0x424fa2*/
    if ( *(unsigned int *)(v7 + 672) == -1 ) /*0x424fae*/
      *(unsigned int *)(this->MissionTimer_StartTime + 672) = Building::GetFoundationSize(v22, *(unsigned int *)(v7 + 664))[3]; /*0x424fcc*/
    v8 = this->MissionTimer_StartTime; /*0x424fd2*/
    v5 = *(unsigned int *)(v8 + 668); /*0x424fd8*/
    v18 = *(unsigned int *)(v8 + 672); /*0x424fe4*/
  }
  v9 = this->MissionTimer_StartTime; /*0x424fe8*/
  if ( *(unsigned int *)(v9 + 716) != -1 ) /*0x424ff4*/
  {
    for ( i = 0; i < *(unsigned int *)(v9 + 720); ++i ) /*0x425000*/
    {
      v22[0] = this->Location_X; /*0x42500c*/
      v22[1] = this->Location_Y; /*0x425013*/
      v22[2] = this->Location_Z; /*0x42501f*/
      CreateFireAtSW((unsigned int *)dword_A8ED78, *((unsigned int *)g_BuildingProductionQueue + *(unsigned int *)(v9 + 716)), (int)v22); /*0x425039*/
      v9 = this->MissionTimer_StartTime; /*0x42503e*/
    }
  }
  v11 = (*(int (__thiscall **)(BuildingClass_Full *))(*(unsigned int *)this->_pad_base + 456))(this); /*0x425051*/
  if ( v11 < 30 ) /*0x42505a*/
  {
    v12 = this->MissionTimer_StartTime; /*0x425060*/
    if ( !*(unsigned char *)(v12 + 875) /*0x4250ab*/
      || *(unsigned char *)(v12 + 877)
      && (v20 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2147483646),
          (double)v20 * 4.656612877414201e-10 >= 0.5) )
    {
      IDA_LOBYTE(v11) = *(unsigned char *)(this->MissionTimer_StartTime + 877); /*0x4250d7*/
      if ( (unsigned char)v11 ) /*0x4250df*/
      {
        CellClass::ReduceTiberium(v21, 6); /*0x4250e7*/
        if ( *(unsigned char *)(this->MissionTimer_StartTime + 878) ) /*0x4250f2*/
        {
          v14 = (unsigned int *)(*(int (__thiscall **)(BuildingClass_Full *, unsigned int *))(*(unsigned int *)this->_pad_base + 72))( /*0x42510c*/
                            this,
                            v22);
          IDA_LOBYTE(v11) = TimedCreateUnitAtCoords(v14, 300, 300, 1); /*0x425116*/
        }
        else
        {
          v15 = (unsigned int *)(*(int (__thiscall **)(BuildingClass_Full *, unsigned int *))(*(unsigned int *)this->_pad_base + 72))( /*0x425133*/
                            this,
                            v22);
          IDA_LOBYTE(v11) = TimedCreateUnitAtCoords(v15, v5, v18, 0); /*0x42513a*/
        }
      }
    }
    else
    {
      v13 = (unsigned int *)(*(int (__thiscall **)(BuildingClass_Full *, unsigned int *))(*(unsigned int *)this->_pad_base + 72))( /*0x4250bd*/
                        this,
                        v22);
      IDA_LOBYTE(v11) = StandardCreateUnitAtCoords(v13, v5, v18, 0); /*0x4250c4*/
    }
  }
  return v11; /*0x4250c9*/
}
}
// 0x4251F0
namespace gamemd {
void sub_4251F0(int a1, short * a2)
{
  int v2; // ecx
  int v3; // eax
  int result; // eax
  unsigned int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v2 = a2[1]; /*0x4251f6*/
  v3 = (*a2 << 8) + 128; /*0x4251fd*/
  v5[2] = 0; /*0x425202*/
  v5[0] = v3; /*0x42520d*/
  v5[1] = (v2 << 8) + 128; /*0x42521e*/
  PlaySoundEffectAt(v5, g_RulesClass_Instance[1].DeadBodies[1], 0, g_RulesClass_Instance->SellBack, 0, 0); /*0x425237*/
  result = g_GameMode_Current[0]; /*0x42523c*/
  if ( !g_GameMode_Current[0] ) /*0x425243*/
    return FadePalette(&FileSystem_TEMPERAT_PAL, 30, (void (*)(void))Event::Dispatch); /*0x425254*/
  return result; /*0x425259*/
}
}
// 0x425670
namespace gamemd {
int E4Recv_425670::ConstructionPositionTracker()
{
  int v2; // eax
  char *v3; // edi
  int *p_Location_X; // ebp
  int Location_X; // eax
  int Location_Y; // ecx
  int *v7; // eax
  int *v8; // eax
  int v9; // ebx
  bool v10; // dl
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // ebx
  int *v21; // eax
  int v22; // eax
  double v23; // st7
  double v24; // st7
  int GroundHeight; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // ebx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  int16_t v35; // bp
  int *v36; // ecx
  int v37; // edx
  int v38; // ebx
  int v39; // ecx
  wchar_t *v40; // eax
  unsigned int v41; // ecx
  int *v42; // eax
  int v43; // edx
  double v44; // st7
  int MissionTimer_StartTime; // edi
  int v47; // [esp+Ch] [ebp-44h]
  double v48; // [esp+24h] [ebp-2Ch] BYREF
  double v49; // [esp+2Ch] [ebp-24h] BYREF
  int v50; // [esp+34h] [ebp-1Ch]
  int v51; // [esp+38h] [ebp-18h] BYREF
  int v52; // [esp+3Ch] [ebp-14h]
  int v53; // [esp+40h] [ebp-10h]
  int v54; // [esp+44h] [ebp-Ch] BYREF
  int v55; // [esp+48h] [ebp-8h]
  int Location_Z; // [esp+4Ch] [ebp-4h]

  if ( !this->ProductionBlocked ) /*0x425679*/
  {
    this->QueuedMission = (int)g_CurrentFrame; /*0x425690*/
    v2 = v55; /*0x425692*/
    this->MissionStartTime = 0; /*0x425696*/
    *(unsigned int *)&this->MissionQueued = v2; /*0x42569c*/
    this->MissionStatus = 0; /*0x42569f*/
  }
  v3 = &this->_pad_D8[52]; /*0x4256ad*/
  if ( *(unsigned int *)&this->_pad_D8[52] == Map_InvalidCoord_X /*0x4256d4*/
    && *(unsigned int *)&this->_pad_D8[56] == Map_InvalidCoord_Y
    && *(unsigned int *)&this->_pad_D8[60] == Map_InvalidCoord_Z
    || this->ProductionBlocked )
  {
    if ( !this->_pad_base[141] ) /*0x425b53*/
    {
      if ( this->ProductionBlocked ) /*0x425b61*/
        goto LABEL_47; /*0x425b69*/
      v36 = Building::ComputePosition((int *)this->_pad_base, &v54); /*0x425b7b*/
      v37 = v36[1]; /*0x425b7f*/
      v38 = v36[2]; /*0x425b82*/
      if ( *v36 == Map_InvalidCoord_X && v37 == Map_InvalidCoord_Y && v38 == Map_InvalidCoord_Z ) /*0x425b9d*/
      {
        *(unsigned int *)v3 = Map_InvalidCoord_X; /*0x425bad*/
        *(unsigned int *)&this->_pad_D8[56] = Map_InvalidCoord_Y; /*0x425bb4*/
        v39 = Map_InvalidCoord_Z; /*0x425bb7*/
        this->ProductionBlocked = 1; /*0x425bbd*/
        *(unsigned int *)&this->_pad_D8[60] = v39; /*0x425bc4*/
        v40 = g_CurrentFrame; /*0x425bc7*/
        this->MissionStartTime = 1; /*0x425bd7*/
        this->QueuedMission = (int)v40; /*0x425bdd*/
        *(unsigned int *)&this->MissionQueued = v55; /*0x425be3*/
        this->MissionStatus = 1; /*0x425be6*/
        this->CurrentMission = 8 * *(unsigned int *)(this->MissionTimer_StartTime + 848) + 1; /*0x425bfc*/
      }
      else
      {
        *(unsigned int *)v3 = *v36; /*0x425ba1*/
        *(unsigned int *)&this->_pad_D8[56] = v37; /*0x425ba3*/
        *(unsigned int *)&this->_pad_D8[60] = v38; /*0x425ba6*/
      }
    }
  }
  else
  {
    p_Location_X = &this->Location_X; /*0x4256e2*/
    Location_X = this->Location_X; /*0x4256ee*/
    Location_Y = this->Location_Y; /*0x4256f0*/
    Location_Z = this->Location_Z; /*0x4256f6*/
    v54 = *(unsigned int *)v3; /*0x4256fc*/
    v47 = Location_Y - *(unsigned int *)&this->_pad_D8[56]; /*0x425708*/
    Location_Z = *(unsigned int *)&this->_pad_D8[60]; /*0x425709*/
    v7 = Coord::Subtract(&v51, Location_X - v54, v47, 0); /*0x425718*/
    v54 = *v7; /*0x42571f*/
    v55 = v7[1]; /*0x42572a*/
    Location_Z = v7[2]; /*0x425731*/
    if ( (int)Coord::Length(&v54) > 18 ) /*0x42573d*/
    {
      v54 = *p_Location_X; /*0x4258f3*/
      v19 = *(unsigned int *)this->_pad_base; /*0x4258f7*/
      v55 = this->Location_Y; /*0x4258fc*/
      v20 = this->Location_Z; /*0x425904*/
      v21 = (int *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(v19 + 72))(this, &v54); /*0x42590a*/
      v22 = *(unsigned int *)Cell::GetHeight(&v49, v21, (int *)&this->_pad_D8[52]); /*0x425917*/
      v54 = *p_Location_X; /*0x42591d*/
      v55 = this->Location_Y; /*0x425924*/
      Location_Z = this->Location_Z; /*0x425938*/
      v49 = (double)((int16_t)v22 - 0x3FFF) * -0.00009587672516830327; /*0x425946*/
      v48 = (double)v55; /*0x425958*/
      v23 = Math::SinCos(v49); /*0x42595c*/
      IDA_LODWORD(v48) = Math::RoundToInt(v48 - v23 * 18.0); /*0x425974*/
      v24 = Math::ArcTan2(v49); /*0x42597e*/
      v51 = Math::RoundToInt(v24 * 18.0 + (double)v54); /*0x42599d*/
      v52 = IDA_LODWORD(v48); /*0x4259a5*/
      v53 = Location_Z; /*0x4259af*/
      if ( v20 > Cell::GetGroundHeight(&v51) + 2 * Map_CellHeight ) /*0x4259c3*/
        GroundHeight = Map_MaxHeight + Cell::GetGroundHeight(&v51); /*0x4259e5*/
      else
        GroundHeight = Cell::GetGroundHeight(&v51); /*0x4259cf*/
      v26 = *(unsigned int *)this->_pad_base; /*0x4259eb*/
      v53 = GroundHeight; /*0x4259ed*/
      (*(void (__thiscall **)(BuildingClass_Full *, int *))(v26 + 436))(this, &v51); /*0x4259f8*/
    }
    else
    {
      if ( this->_pad_base[141] ) /*0x425743*/
        goto LABEL_41; /*0x42574b*/
      v8 = Building::ComputePosition((int *)this->_pad_base, &v54); /*0x425758*/
      v9 = *v8; /*0x42575d*/
      v51 = *v8; /*0x425765*/
      v52 = v8[1]; /*0x42576c*/
      v53 = v8[2]; /*0x425773*/
      v10 = (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, &this->_pad_D8[52]) + 59) == 2 /*0x4257ab*/
          || *((unsigned int *)Coord::To_Cell(&MapClass_Instance, &this->_pad_D8[52]) + 59) == 6)
         && (*(int (__thiscall **)(BuildingClass_Full *))(*(unsigned int *)this->_pad_base + 456))(this) <= Map_CellHeight;
      if ( v9 == Map_InvalidCoord_X && v52 == Map_InvalidCoord_Y && v53 == Map_InvalidCoord_Z /*0x4257ec*/
        || (v11 = *(unsigned int *)&this->_pad_D8[64], v11 >= 7)
        || v10 )
      {
        *(unsigned int *)v3 = Map_InvalidCoord_X; /*0x425891*/
        *(unsigned int *)&this->_pad_D8[56] = Map_InvalidCoord_Y; /*0x425898*/
        *(unsigned int *)&this->_pad_D8[60] = Map_InvalidCoord_Z; /*0x4258a1*/
        this->ProductionBlocked = 1; /*0x4258a4*/
        this->QueuedMission = (int)g_CurrentFrame; /*0x4258bc*/
        v17 = v55; /*0x4258be*/
        this->MissionStartTime = 1; /*0x4258c2*/
        *(unsigned int *)&this->MissionQueued = v17; /*0x4258c8*/
        this->MissionStatus = 1; /*0x4258cb*/
        v18 = 8 * *(unsigned int *)(this->MissionTimer_StartTime + 848) + 1; /*0x4258da*/
        this->CurrentMission = v18; /*0x4258e1*/
        return v18; /*0x4258ed*/
      }
      *(unsigned int *)&this->_pad_D8[64] = v11 + 1; /*0x4257f5*/
      v54 = *p_Location_X; /*0x4257fd*/
      v55 = this->Location_Y; /*0x425804*/
      v12 = this->Location_Z; /*0x425808*/
      IDA_LODWORD(v49) = *(unsigned int *)v3; /*0x42580f*/
      IDA_HIDWORD(v49) = *(unsigned int *)&this->_pad_D8[56]; /*0x42581b*/
      v50 = *(unsigned int *)&this->_pad_D8[60]; /*0x425822*/
      if ( v12 > Cell::GetGroundHeight(&v49) + 2 * Map_CellHeight ) /*0x42583b*/
        v13 = Map_MaxHeight + Cell::GetGroundHeight(&v49); /*0x42585d*/
      else
        v13 = Cell::GetGroundHeight(&v49); /*0x425847*/
      v14 = *(unsigned int *)this->_pad_base; /*0x425863*/
      v50 = v13; /*0x425865*/
      (*(void (__thiscall **)(BuildingClass_Full *, double *))(v14 + 436))(this, &v49); /*0x425870*/
      v15 = v52; /*0x42587a*/
      *(unsigned int *)v3 = v51; /*0x425880*/
      v16 = v53; /*0x425882*/
      *(unsigned int *)&this->_pad_D8[56] = v15; /*0x425886*/
      *(unsigned int *)&this->_pad_D8[60] = v16; /*0x425889*/
    }
    if ( !this->_pad_base[141] ) /*0x4259fe*/
    {
      v27 = *p_Location_X; /*0x425a0e*/
      v28 = this->Location_Y; /*0x425a10*/
      Location_Z = this->Location_Z; /*0x425a16*/
      IDA_LOWORD(v48) = v27 / 256; /*0x425a26*/
      v29 = v28 / 256; /*0x425a3a*/
      v30 = *p_Location_X; /*0x425a3d*/
      IDA_WORD1(v48) = v29; /*0x425a3f*/
      v51 = v30; /*0x425a44*/
      v52 = this->Location_Y; /*0x425a4d*/
      v31 = this->Location_Z; /*0x425a53*/
      v54 = *p_Location_X; /*0x425a56*/
      v53 = v31; /*0x425a5a*/
      v55 = this->Location_Y; /*0x425a65*/
      Location_Z = this->Location_Z; /*0x425a6d*/
      v32 = Cell::GetGroundHeight(&v54); /*0x425a76*/
      if ( v53 >= Map_MaxHeight + v32 ) /*0x425a89*/
      {
        v33 = this->Location_Y; /*0x425a92*/
        v34 = this->Location_Z; /*0x425a95*/
        v54 = *p_Location_X; /*0x425a98*/
        v55 = v33; /*0x425aa0*/
        Location_Z = v34; /*0x425aaa*/
        if ( (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, &v54) + 80) & 0x100) == 0 ) /*0x425abc*/
        {
          v35 = IDA_LOWORD(v48); /*0x425ac2*/
          IDA_LOWORD(v48) += Direction_Y_Offsets; /*0x425ad9*/
          IDA_WORD1(v48) = IDA_HIWORD(Direction_Y_Offsets) + v29; /*0x425ae2*/
          if ( (*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48) + 80) & 0x100) == 0 ) /*0x425b03*/
          {
            IDA_LOWORD(v48) = IDA_LOWORD(Direction_X_Offsets[0]) + v35; /*0x425b1b*/
            IDA_WORD1(v48) = IDA_HIWORD(Direction_X_Offsets[0]) + v29; /*0x425b20*/
            if ( (*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48) + 80) & 0x100) == 0 ) /*0x425b41*/
              this->_pad_base[141] = 1; /*0x425b47*/
          }
        }
      }
    }
  }
  LABEL_41:
  if ( !this->ProductionBlocked ) /*0x425c02*/
  {
    v41 = 0; /*0x425c18*/
    if ( *(unsigned int *)v3 != Map_InvalidCoord_X /*0x425c35*/
      || *(unsigned int *)&this->_pad_D8[56] != Map_InvalidCoord_Y
      || *(unsigned int *)&this->_pad_D8[60] != Map_InvalidCoord_Z )
    {
      v42 = (int *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(*(unsigned int *)this->_pad_base + 72))(this, &v54); /*0x425c40*/
      v43 = *v42; /*0x425c45*/
      IDA_LODWORD(v48) = *(unsigned int *)v3; /*0x425c47*/
      IDA_LODWORD(v49) = v43; /*0x425c4b*/
      v44 = Math::CalcAngle((double)v42[1] - (double)*(int *)&this->_pad_D8[56], (double)IDA_SLODWORD(v48) - (double)v43); /*0x425c6a*/
      IDA_LOWORD(v49) = Math::RoundToInt((v44 - 1.570796326794897) * -10430.06004058427); /*0x425c83*/
      v41 = *(unsigned int *)(this->MissionTimer_StartTime + 848) /*0x425ca3*/
          * ((-1 - (((unsigned int)((IDA_LODWORD(v49) >> 12) + 1) >> 1) & 7)) & 7);
    }
    MissionTimer_StartTime = this->MissionTimer_StartTime; /*0x425cb7*/
    v18 = (int)g_CurrentFrame / 3 / *(unsigned int *)(MissionTimer_StartTime + 848); /*0x425cc5*/
    this->CurrentMission = v41 + (int)g_CurrentFrame / 3 % *(unsigned int *)(MissionTimer_StartTime + 848); /*0x425cce*/
    return v18; /*0x425cda*/
  }
  LABEL_47:
  v18 = *(int16_t *)((*(int (__thiscall **)(BuildingClass_Full *))(*(unsigned int *)this->_pad_base + 108))(this) + 6) / 2 - 1; /*0x425cdb*/
  if ( this->CurrentMission >= v18 ) /*0x425cf4*/
    IDA_LOBYTE(); /*0x425cfa*/
  return v18; /*0x4258bb*/
}
}
// 0x4261D0
namespace gamemd {
void sub_4261D0()
{
  int result; // eax
  int i; // edi
  unsigned int *v2; // esi
  unsigned int *v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v6[3]; // [esp+4h] [ebp-Ch] BYREF

  result = g_AnimClassCount; /*0x4261d0*/
  for ( i = 0; i < g_AnimClassCount; ++i ) /*0x4261dd*/
  {
    v2 = (unsigned int *)*((unsigned int *)g_AnimClassPool + i); /*0x4261e9*/
    if ( *(unsigned char *)(v2[50] + 864) ) /*0x4261f2*/
    {
      v6[0] = v2[39]; /*0x426208*/
      v6[1] = v2[40]; /*0x426214*/
      v6[2] = v2[41]; /*0x426220*/
      v3 = Coord::To_Cell(&MapClass_Instance, v6); /*0x426224*/
      v4 = BuildingClass::FindByCellHash(v3); /*0x42622b*/
      if ( v4 != -1 ) /*0x426233*/
      {
        v5 = *(unsigned int *)&BuildingClass_InstanceArray->gap0[4 * v4]; /*0x42623b*/
        if ( v5 ) /*0x426240*/
          v2[53] = *(unsigned int *)(*((unsigned int *)BuildingTypeClass_AnimTable + *(unsigned int *)(v5 + 192)) + 780); /*0x426256*/
      }
    }
    result = g_AnimClassCount; /*0x42625c*/
  }
  return result; /*0x42626b*/
}
}
// 0x4267F0
namespace gamemd {
AbstractClass * * sub_4267F0()
{
  int v3; // edx
  unsigned char *v4; // ecx
  char v5; // bl
  int v6; // eax
  int v7; // eax
  unsigned int *v9; // edi
  uint16_t v10; // ax
  uint16_t v11; // cx
  void *v12; // edi
  void *retaddr; // [esp+24h] [ebp+0h]

  if ( !*(unsigned char *)(a1 + 136) && *(unsigned int *)(a1 + 132) ) /*0x426803*/
  {
    *(unsigned char *)(a1 + 136) = 1; /*0x426820*/
    memset((void *)(a1 + 140), 0, 0x80u); /*0x426828*/
    (*(void (__thiscall **)(unsigned int, int, int, int))(**(unsigned int **)(a1 + 132) + 36))( /*0x426838*/
      *(unsigned int *)(a1 + 132),
      a1 + 140,
      128,
      a2);
    memset((void *)(a1 + 4), 0, 0x80u); /*0x426847*/
    (*(void (__thiscall **)(unsigned int, int, int))(**(unsigned int **)(a1 + 132) + 36))(*(unsigned int *)(a1 + 132), a1 + 4, 128); /*0x426857*/
    (*(void (__thiscall **)(unsigned int, unsigned int, int))(**(unsigned int **)(a1 + 132) + 40))(*(unsigned int *)(a1 + 132), 0, 1); /*0x426866*/
    (*(void (__thiscall **)(unsigned int, int, int))(**(unsigned int **)(a1 + 132) + 36))(*(unsigned int *)(a1 + 132), a1 + 268, 1024); /*0x42687d*/
    v3 = 0; /*0x426880*/
    v4 = (unsigned char *)(a1 + 269); /*0x426882*/
    do /*0x4268c7*/
    {
      v5 = *(v4 - 1); /*0x42688b*/
      IDA_LOBYTE(retaddr) = v4[1]; /*0x42688e*/
      IDA_BYTE1(retaddr) = *v4; /*0x426894*/
      v6 = v3 % 256; /*0x4268a7*/
      ++v3; /*0x4268ab*/
      v4 += 4; /*0x4268ac*/
      v7 = v6 + a1 + 2 * v6 + 1292; /*0x4268b5*/
      *(unsigned short *)v7 = (unsigned short)retaddr; /*0x4268c1*/
      *(unsigned char *)(v7 + 2) = v5; /*0x4268c4*/
    }
    while ( v3 < 256 ); /*0x4268c7*/
    memset((void *)(a1 + 2060), 0, 0x600u); /*0x4268d8*/
    (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)(a1 + 132) + 36))(*(unsigned int *)(a1 + 132), a1 + 2060); /*0x4268e8*/
    if ( !sub_426990(a1) ) /*0x4268ed*/
    {
      (*(void (__thiscall **)(int))(*(unsigned int *)a1 + 8))(a1); /*0x4268fb*/
      return 0; /*0x426903*/
    }
    v9 = operator new(0x20u); /*0x42690b*/
    if ( v9 ) /*0x426912*/
    {
      v10 = *(unsigned short *)(a1 + 160); /*0x426918*/
      v11 = *(unsigned short *)(a1 + 162); /*0x42691f*/
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
    *(unsigned int *)(a1 + 3596) = v9; /*0x42695d*/
    v12 = operator new(0x10000u); /*0x42696b*/
    *(unsigned int *)(a1 + 3600) = v12; /*0x426974*/
    memset(v12, 0, 0x10000u); /*0x42697a*/
  }
  return *(unsigned char *)(a1 + 136); /*0x4268fe*/
}
}
// 0x426ED0
namespace gamemd {
AbstractClass * * E4Recv_426ED0::sub_426ED0(int a2)
{
  int v3; // esi
  int v4; // edx
  uint16_t *i; // ecx
  int v6; // eax
  int v8; // ecx
  int v9; // edx
  uint16_t v10; // si
  uint16_t v11; // cx
  int v12; // edi
  int v13; // ebx
  int v14; // edx
  uint16_t *v15; // ecx
  uint16_t v16; // ax

  if ( a2 >= this->M204 ) /*0x426ee0*/
    return 0; /*0x426ee0*/
  v3 = 0; /*0x426ee4*/
  v4 = *(uint16_t *)(&this->u32_386); /*0x426ee6*/
  if ( !(unsigned short)v4 ) /*0x426eef*/
    return 0; /*0x426eef*/
  for ( i = (uint16_t *)(&this->u32_3380); ; i += 3 ) /*0x426ef1*/
  {
    IDA_HIWORD(v6) = 0; /*0x426ef7*/
    if ( *i <= a2 ) /*0x426efe*/
    {
      IDA_LOWORD(v6) = *i; /*0x426ef9*/
      if ( v6 + i[1] > a2 ) /*0x426f0a*/
        break; /*0x426f0a*/
    }
    if ( ++v3 >= v4 ) /*0x426f12*/
      return 0; /*0x426f12*/
  }
  if ( v3 == -1 ) /*0x426f20*/
    return 0; /*0x426f14*/
  if ( this->M136 && this->M3608 != v3 ) /*0x426f32*/
  {
    v8 = this->q084; /*0x426f34*/
    this->M3608 = v3; /*0x426f3f*/
    (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v8 + 40))(v8, (v3 << 16) + 2816, 0); /*0x426f50*/
    (*(void (__thiscall **)(unsigned int, unsigned int, int))(**(unsigned int **)(&this->u32_342) + 36))( /*0x426f87*/
      this->q084,
      this->M3600,
      *(uint16_t *)(&this->ptr_8 * (3 * v3 + 1032)) + 2 * *(uint16_t *)(&this->u32_18 * v3 + 2062) + 8);
  }
  v9 = 3 * v3; /*0x426f8a*/
  v10 = *(unsigned short *)(&this->u32_18 * v3 + 2060); /*0x426f8f*/
  v11 = *(unsigned short *)(&this->ptr_8 * v9 + 2062); /*0x426f99*/
  v12 = this->M3600; /*0x426fa4*/
  v13 = a2 - v10; /*0x426faa*/
  v14 = 2 * v11 + 8; /*0x426fac*/
  v15 = (uint16_t *)(v12 + 8); /*0x426fb2*/
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
}
// 0x4270D0
namespace gamemd {
void sub_4270D0(int a1, unsigned int a2, AnimFile * aP2, int arg4, char * a4, int a6)
{
  signed int v7; // ecx
  void *v8; // ebx
  int v9; // ebp
  char *v10; // esi
  char *i; // ebp
  char v12; // al
  unsigned int v13; // ecx
  char *v14; // edi
  unsigned int v15; // esi
  int v16; // eax
  char v17; // al
  char *v18; // edi
  int v19; // eax
  char *v20; // edi
  void *v21; // [esp+14h] [ebp+4h]

  if ( !arg4 ) /*0x4270da*/
    return 1; /*0x4270e2*/
  v7 = arg4 - 2; /*0x4270ed*/
  v8 = a4; /*0x4270f0*/
  v9 = *aP2; /*0x4270f2*/
  v10 = (char *)(aP2 + 1); /*0x4270f5*/
  v21 = a4; /*0x4270f8*/
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
            while ( 1 ) /*0x42714e*/
            {
              while ( 1 ) /*0x427148*/
              {
                v12 = *i++; /*0x427148*/
                if ( v12 <= 0 ) /*0x42714e*/
                  break; /*0x42714e*/
                a2 = v12; /*0x427157*/
                v13 = (unsigned int)v12 >> 2; /*0x42715b*/
                qmemcpy(v8, i, 4 * v13); /*0x42715e*/
                v14 = (char *)v8 + 4 * v13; /*0x42715e*/
                v8 = (char *)v8 + v12; /*0x427162*/
                v21 = v8; /*0x427167*/
                qmemcpy(v14, &i[4 * v13], v12 & 3); /*0x42716b*/
                i += v12; /*0x42716d*/
              }
              if ( v12 ) /*0x427171*/
                break; /*0x427171*/
              IDA_LOBYTE(a2) = i[1]; /*0x42717e*/
              IDA_BYTE1(a2) = a2; /*0x427180*/
              v15 = (uint8_t)*i; /*0x427188*/
              v16 = a2 << 16; /*0x42718a*/
              IDA_LOWORD(v16) = a2; /*0x42718f*/
              memset32(v8, v16, v15 >> 2); /*0x427195*/
              i += 2; /*0x427199*/
              memset((char *)v8 + 4 * (v15 >> 2), a2, v15 & 3); /*0x42719d*/
              v8 = (char *)v8 + v15; /*0x4271a1*/
              v21 = v8; /*0x4271a3*/
            }
            v17 = v12 + 0x80; /*0x4271a9*/
            if ( !v17 ) /*0x4271ab*/
              break; /*0x4271ab*/
            v8 = (char *)v8 + v17; /*0x42722e*/
            v21 = v8; /*0x427230*/
          }
          a2 = *(uint16_t *)i; /*0x4271af*/
          i += 2; /*0x4271b3*/
          if ( (int16_t)a2 <= 0 ) /*0x4271b9*/
            break; /*0x4271b9*/
  LABEL_22:
          v8 = (char *)v8 + a2; /*0x4271ff*/
          v21 = v8; /*0x427201*/
        }
        if ( !a2 ) /*0x4271bd*/
          return 1; /*0x4271bd*/
        a2 -= 0x8000; /*0x4271c3*/
        if ( (int)a2 >= 0x4000 ) /*0x4271cf*/
        {
          v18 = (char *)v8; /*0x4271d3*/
          a2 -= 0x4000; /*0x4271d8*/
          IDA_LOBYTE(v8) = *i; /*0x4271de*/
          IDA_BYTE1(v8) = *i++; /*0x4271e2*/
          v19 = (unsigned int)v8 << 16; /*0x4271e9*/
          IDA_LOWORD(v19) = (unsigned short)v8; /*0x4271ec*/
          v8 = v21; /*0x4271ef*/
          memset32(v18, v19, a2 >> 2); /*0x4271f6*/
          memset(&v18[4 * (a2 >> 2)], v19, a2 & 3); /*0x4271fd*/
          goto LABEL_22; /*0x4271fd*/
        }
        qmemcpy(v8, i, 4 * (a2 >> 2)); /*0x427215*/
        v20 = (char *)v8 + 4 * (a2 >> 2); /*0x427215*/
        v8 = (char *)v8 + a2; /*0x427219*/
        v21 = v8; /*0x42721e*/
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
}
// 0x427940
namespace gamemd {
int BuildingTypeClass_LoadTheatreSHP(int a1)
{
  int result; // eax
  int v3; // esi
  char v4; // al
  int v5; // eax
  int i; // [esp+8h] [ebp-204h]
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = 0; /*0x427952*/
  for ( i = 0; i < g_BuildingTypeCount2; ++i ) /*0x42795a*/
  {
    v3 = *((unsigned int *)g_AnimTypeCount + result); /*0x427968*/
    v4 = *(unsigned char *)(v3 + 556); /*0x427973*/
    if ( *(unsigned char *)(v3 + 862) ) /*0x42796b*/
    {
      if ( v4 || *(unsigned char *)(v3 + 567) ) /*0x427a2a*/
      {
        if ( *(unsigned int *)(v3 + 164) && *(unsigned char *)(v3 + 168) ) /*0x427a3c*/
        {
          RA2_OPDEL(*(void **)(v3 + 164)); /*0x427a45*/
          *(unsigned char *)(v3 + 168) = 0; /*0x427a4d*/
        }
        *(unsigned int *)(v3 + 164) = 0; /*0x427a53*/
      }
    }
    else if ( v4 ) /*0x427981*/
    {
      if ( *(unsigned int *)(v3 + 164) && *(unsigned char *)(v3 + 168) ) /*0x427991*/
      {
        RA2_OPDEL(*(void **)(v3 + 164)); /*0x42799a*/
        *(unsigned char *)(v3 + 168) = 0; /*0x4279a2*/
      }
      *(unsigned int *)(v3 + 164) = 0; /*0x4279c1*/
      _makepath(Buffer, 0, 0, (const char *)(v3 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x4279cc*/
      v5 = SearchMIXFile(Buffer, 1); /*0x4279da*/
      *(unsigned int *)(v3 + 164) = v5; /*0x4279e1*/
      if ( !v5 ) /*0x4279e7*/
      {
        _makepath(Buffer, 0, 0, (const char *)(v3 + 36), Ext); /*0x4279f6*/
        *(unsigned int *)(v3 + 164) = SearchMIXFile(Buffer, 1); /*0x427a09*/
      }
    }
    else if ( *(unsigned char *)(v3 + 567) ) /*0x427a11*/
    {
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v3 + 160))(v3, a1); /*0x427a1e*/
    }
    result = i + 1; /*0x427a63*/
  }
  return result; /*0x427a72*/
}
}
// 0x428F70
namespace gamemd {
void * globalHelper_028F70(AbstractClass * Source, int a2)
{
  int v4; // esi
  unsigned int *v5; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x428f8f*/
    return 0; /*0x428fec*/
  v4 = 0; /*0x428f9e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x428fa2*/
  {
  LABEL_6:
    v5 = operator new(0x378u); /*0x428fc3*/
    if ( v5 ) /*0x428fd2*/
      return AnimTypeClass::Construct(v5, Source); /*0x428fdf*/
    return 0; /*0x428fd2*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v4) + 36), Source) ) /*0x428fb9*/
  {
    if ( ++v4 >= *(unsigned int *)(a2 + 16) ) /*0x428fc1*/
      goto LABEL_6; /*0x428fc1*/
  }
  return *(unsigned int **)(*(unsigned int *)(a2 + 4) + 4 * v4); /*0x428fdc*/
}
}
// 0x429780
namespace gamemd {
unsigned int * PathClass_WalkPath(unsigned int * a1, int * a2, int a3, int * a4)
{
  int v4; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF
  int v12; // [esp+14h] [ebp+8h]

  v4 = *a2; /*0x429781*/
  v11 = *a2; /*0x42978f*/
  if ( a3 <= 0 ) /*0x429793*/
  {
    *a1 = v4; /*0x42981d*/
    return a1; /*0x42981f*/
  }
  else
  {
    v7 = a3; /*0x42979f*/
    do /*0x42980f*/
    {
      v8 = *a4; /*0x4297a1*/
      if ( *a4 == 8 ) /*0x4297a6*/
      {
        v9 = *((int16_t *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v11) + 139); /*0x4297b7*/
        if ( v9 == -1 ) /*0x4297c1*/
          v4 = 0; /*0x4297db*/
        else
          v4 = *(unsigned int *)(*((unsigned int *)g_PathClass_State + v9) + 40); /*0x4297cc*/
      }
      else
      {
        IDA_LOWORD(v12) = v4 + IDA_LOWORD(Direction_X_Offsets[v8]); /*0x4297f9*/
        IDA_HIWORD(v12) = IDA_HIWORD(v11) + IDA_HIWORD(Direction_X_Offsets[v8]); /*0x4297fe*/
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
}
// 0x42A900
namespace gamemd {
AbstractClass * * E4Recv_42A900::sub_42A900()
{
  void **v2; // esi
  void **v3; // esi
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void **v7; // esi
  int v8; // ebp
  int v9; // esi
  int v10; // edi
  void *v11; // eax

  v2 = *(void ***)(&this->u32_80); /*0x42a907*/
  if ( v2 ) /*0x42a90c*/
  {
    RA2_OPDEL(v2[2]); /*0x42a912*/
    RA2_OPDEL(v2); /*0x42a918*/
  }
  v3 = *(void ***)(&this->u32_284); /*0x42a920*/
  this->M20 = 0; /*0x42a923*/
  if ( v3 ) /*0x42a928*/
  {
    RA2_OPDEL(v3[2]); /*0x42a92e*/
    RA2_OPDEL(v3); /*0x42a934*/
  }
  v4 = *(void **)(&this->u32_46); /*0x42a93c*/
  this->M104 = 0; /*0x42a93f*/
  if ( v4 ) /*0x42a944*/
    RA2_OPDEL(v4); /*0x42a947*/
  v5 = *(void **)(&this->u32_42); /*0x42a94f*/
  this->M16 = 0; /*0x42a952*/
  if ( v5 ) /*0x42a957*/
    RA2_OPDEL(v5); /*0x42a95a*/
  v6 = *(void **)(&this->u32_84); /*0x42a962*/
  this->M12 = 0; /*0x42a965*/
  if ( v6 ) /*0x42a96a*/
  {
    RA2_OPDEL(v6); /*0x42a96d*/
    this->q018 = 0; /*0x42a975*/
  }
  if ( this->M28 ) /*0x42a978*/
  {
    RA2_OPDEL(*(void **)(&this->u32_88)); /*0x42a980*/
    this->M28 = 0; /*0x42a988*/
  }
  if ( this->M24 ) /*0x42a98b*/
  {
    RA2_OPDEL(*(void **)(&this->M126)); /*0x42a993*/
    this->M24 = 0; /*0x42a99b*/
  }
  if ( this->q020 ) /*0x42a99e*/
  {
    RA2_OPDEL(*(void **)(&this->M122)); /*0x42a9a6*/
    this->q020 = 0; /*0x42a9ae*/
  }
  v7 = (void **)(&this->M286); /*0x42a9b2*/
  v8 = 3; /*0x42a9b5*/
  do /*0x42a9f5*/
  {
    if ( *(v7 - 3) ) /*0x42a9ba*/
    {
      RA2_OPDEL(*(v7 - 3)); /*0x42a9c2*/
      *(v7 - 3) = 0; /*0x42a9ca*/
    }
    if ( *v7 ) /*0x42a9cd*/
    {
      RA2_OPDEL(*v7); /*0x42a9d4*/
      *v7 = 0; /*0x42a9dc*/
    }
    if ( v7[3] ) /*0x42a9de*/
    {
      RA2_OPDEL(v7[3]); /*0x42a9e6*/
      v7[3] = 0; /*0x42a9ee*/
    }
    ++v7; /*0x42a9f1*/
    --v8; /*0x42a9f4*/
  }
  while ( v8 ); /*0x42a9f5*/
  RA2_OPDEL(*(void **)(&this->u32_280)); /*0x42a9fb*/
  v9 = &this->u32_2F0; /*0x42aa03*/
  v10 = 3; /*0x42aa09*/
  do /*0x42aa37*/
  {
    v11 = *(void **)(v9 - 20); /*0x42aa0f*/
    v9 -= 24; /*0x42aa12*/
    if ( v11 ) /*0x42aa1d*/
    {
      if ( this->u32_C9 ) /*0x42aa1f*/
      {
        RA2_OPDEL(v11); /*0x42aa25*/
        this->u32_C0 = 0; /*0x42aa2d*/
      }
    }
    --v10; /*0x42aa30*/
    this->u32_C9 = 0; /*0x42aa31*/
    this->u32_C4 = 0; /*0x42aa34*/
  }
  while ( v10 ); /*0x42aa37*/
}
}
// 0x42AA90
namespace gamemd {
void * globalHelper_02AA90(int a1, DynamicVectorClass_uint * aP1)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  unsigned int *v5; // ebp
  unsigned int *v6; // ebx
  int v7; // eax
  char *v8; // ecx
  int64_t v9; // rax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  bool v13; // zf
  int *v15; // [esp+0h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-8h]

  if ( (byte_89A300 & 1) == 0 ) /*0x42aa9a*/
  {
    byte_89A300 |= 1u; /*0x42aaa6*/
    atexit(nullsub_4); /*0x42aaac*/
  }
  v2 = a1; /*0x42aab7*/
  v3 = Math::RoundToInt(*(float *)(a1 + 8)); /*0x42aabf*/
  v4 = aP1; /*0x42aac4*/
  dword_89A2DC = v3; /*0x42aac8*/
  dword_89A2E0 = *(unsigned int *)(a1 + 12); /*0x42aad7*/
  dword_89A2E8 = 0; /*0x42aadc*/
  word_89A2F0 = 0; /*0x42aae2*/
  word_89A2F2 = 0; /*0x42aae9*/
  dword_89A2E4 = aP1; /*0x42aaf0*/
  dword_89A2EC = (int)&unk_89A324; /*0x42aaf6*/
  v5 = *(unsigned int **)a1; /*0x42aafc*/
  v6 = *(unsigned int **)(*(unsigned int *)a1 + 8); /*0x42ab01*/
  v7 = *(unsigned int *)(a1 + 12) - 2; /*0x42ab04*/
  if ( v7 >= 0 ) /*0x42ab07*/
  {
    v8 = (char *)&unk_89A324 - aP1; /*0x42ab10*/
    v15 = (int *)(aP1 + 4 * v7); /*0x42ab13*/
    v16 = v7 + 1; /*0x42ab1b*/
    do /*0x42aba7*/
    {
      if ( v6 ) /*0x42ab21*/
      {
        *(int *)((char *)v15 + (unsigned int)v8) = v6[1]; /*0x42ab2a*/
        v9 = *(int16_t *)(*(unsigned int *)*v6 + 38) - *(int16_t *)(*(unsigned int *)*v5 + 38); /*0x42ab48*/
        if ( (int)((IDA_HIDWORD(v9) ^ v9) - IDA_HIDWORD(v9)) > 1 /*0x42ab64*/
          || (v10 = *(int16_t *)(*(unsigned int *)*v6 + 36), v11 = *(int16_t *)(*(unsigned int *)*v5 + 36),
                                                       (int)abs32(v10 - v11) > 1) )
        {
          v12 = 8; /*0x42ab76*/
        }
        else
        {
          v12 = dword_818760[v10 + 3 * (*(int16_t *)(*(unsigned int *)*v6 + 38) - *(int16_t *)(*(unsigned int *)*v5 + 38)) - v11]; /*0x42ab6d*/
        }
        v2 = a1; /*0x42ab7f*/
        v4 = aP1; /*0x42ab83*/
        *v15 = v12; /*0x42ab87*/
        v8 = (char *)&unk_89A324 - aP1; /*0x42ab89*/
      }
      v5 = (unsigned int *)v5[2]; /*0x42ab95*/
      v6 = (unsigned int *)v6[2]; /*0x42ab98*/
      v13 = v16 == 1; /*0x42ab9e*/
      --v15; /*0x42ab9f*/
      --v16; /*0x42aba3*/
    }
    while ( !v13 ); /*0x42aba7*/
  }
  *(unsigned int *)(v4 + 4 * *(unsigned int *)(v2 + 12) - 4) = -1; /*0x42abb2*/
  dword_89A2D8 = *(unsigned int *)(*(unsigned int *)*v5 + 36); /*0x42abc2*/
  if ( !dword_89A2DC ) /*0x42abd2*/
    dword_89A2DC = 1; /*0x42abd4*/
  return &dword_89A2D8; /*0x42abe3*/
}
}
// 0x42B080
namespace gamemd {
void sub_42B080(short * a1, int a2)
{
  unsigned short *v2; // ebx
  int v3; // edi
  int v4; // ebp
  unsigned int *v5; // ecx
  int64_t v6; // rax
  int v7; // esi
  bool v8; // zf
  int v10; // [esp+10h] [ebp-18h]
  int16_t *v11; // [esp+14h] [ebp-14h]
  int v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-Ch]
  int v14; // [esp+20h] [ebp-8h]

  v2 = a1; /*0x42b084*/
  v3 = a2 * dword_89C2D8; /*0x42b0ab*/
  v13 = (*a1 << 8) + 128; /*0x42b0b0*/
  v14 = (a1[1] << 8) + 128; /*0x42b0b4*/
  v10 = -2; /*0x42b0bc*/
  while ( 2 ) /*0x42b0c4*/
  {
    v4 = -2; /*0x42b0c4*/
    v12 = -2; /*0x42b0c9*/
    do /*0x42b18f*/
    {
      IDA_LOWORD(v11) = v4 + *v2; /*0x42b0dc*/
      IDA_HIWORD(v11) = v10 + v2[1]; /*0x42b0e5*/
      a1 = v11; /*0x42b0f4*/
      v5 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a1); /*0x42b0fd*/
      if ( (v5[80] & 0x100) != 0 && (v6 = *((char *)v5 + 283) - a2, (int)((IDA_HIDWORD(v6) ^ v6) - IDA_HIDWORD(v6)) > 2) ) /*0x42b11d*/
        v7 = v5[58]; /*0x42b11f*/
      else
        v7 = v5[57]; /*0x42b127*/
      if ( v7 ) /*0x42b12f*/
      {
        while ( 1 ) /*0x42b137*/
        {
          v8 = (*(unsigned char *)(v7 + 20) & 4) == 0; /*0x42b137*/
          IDA_LOBYTE(a1) = (*(unsigned char *)(v7 + 20) & 4) != 0; /*0x42b13a*/
          if ( !v8 ) /*0x42b13e*/
          {
            if ( !*(unsigned int *)(v7 + 1652) ) /*0x42b140*/
              WinAPI::Wrapper(-2147467261); /*0x42b14f*/
            if ( (*(uint8_t (__stdcall **)(unsigned int, int, int, int))(**(unsigned int **)(v7 + 1652) + 160))( /*0x42b172*/
                   *(unsigned int *)(v7 + 1652),
                   v13,
                   v14,
                   v3) )
            {
              return v7; /*0x42b1b3*/
            }
          }
          v7 = *(unsigned int *)(v7 + 48); /*0x42b17c*/
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
}
// 0x42B420
namespace gamemd {
AbstractClass * * GeneratePathWaypoints(unsigned int * a1, int * a2, int a3, int a4, int a5, int ** a6)
{
  int *v6; // ebp
  int v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // edi
  int *v11; // eax
  int *v12; // ebx
  int v13; // ebp
  int v14; // eax
  int *v15; // eax
  double v16; // st7
  int v17; // eax
  int16_t v18; // ax
  int v19; // ecx
  int16_t *v20; // ebp
  int16_t v21; // dx
  int16_t v22; // dx
  int16_t v23; // ax
  int v24; // esi
  unsigned int *v25; // edi
  bool v26; // bl
  int16_t v27; // dx
  int16_t v28; // ax
  int v29; // eax
  int v30; // eax
  int16_t v31; // dx
  int *v32; // eax
  int *v33; // edi
  int v34; // ebx
  int *v36; // edx
  int v37; // esi
  int **v38; // ebp
  int *v39; // eax
  int *v40; // edi
  int v41; // ebx
  int v42; // eax
  int **v43; // eax
  int **v44; // ebp
  int *v45; // eax
  int v46; // ebx
  int *v47; // esi
  int v48; // edi
  int *v49; // [esp+14h] [ebp-34h] BYREF
  int *v50; // [esp+18h] [ebp-30h] BYREF
  int v51; // [esp+1Ch] [ebp-2Ch]
  int v52; // [esp+20h] [ebp-28h]
  int v53; // [esp+24h] [ebp-24h]
  int *v54; // [esp+28h] [ebp-20h]
  int *v55; // [esp+2Ch] [ebp-1Ch]
  int *v56; // [esp+30h] [ebp-18h]
  int v57; // [esp+34h] [ebp-14h] BYREF
  int TileDataCellClass; // [esp+38h] [ebp-10h] BYREF
  int v59; // [esp+3Ch] [ebp-Ch]
  double v60; // [esp+40h] [ebp-8h]

  v6 = a2; /*0x42b425*/
  v7 = a4; /*0x42b42a*/
  v8 = *a2; /*0x42b42f*/
  v9 = a2[a4]; /*0x42b432*/
  v59 = v8; /*0x42b436*/
  v10 = (v8 + v9) >> 1; /*0x42b43d*/
  v51 = v10; /*0x42b43f*/
  if ( v10 + 1 != v9 && v10 + 1 != v8 ) /*0x42b44c*/
  {
    v51 = 0; /*0x42b44e*/
    IDA_LOBYTE(v10) = 0; /*0x42b456*/
  }
  if ( v8 == 8 || v9 == 8 ) /*0x42b466*/
  {
    v44 = a6; /*0x42b7a8*/
    v45 = *a6; /*0x42b7ac*/
    v46 = a4 + a5; /*0x42b7af*/
    a6 = (int **)*a6; /*0x42b7b4*/
    if ( a4 + a5 > 0 ) /*0x42b7b8*/
    {
      v47 = a2; /*0x42b7ba*/
      v48 = a4 + a5; /*0x42b7be*/
      do /*0x42b7da*/
      {
        v45 = (int *)*GetCellNeighborCoord(&a2, (int16_t *)&a6, *v47++); /*0x42b7d0*/
        --v48; /*0x42b7d5*/
        a6 = (int **)v45; /*0x42b7d6*/
      }
      while ( v48 ); /*0x42b7da*/
    }
    *v44 = v45; /*0x42b7dd*/
    return v46; /*0x42b7e1*/
  }
  v11 = *a6; /*0x42b476*/
  v49 = *a6; /*0x42b478*/
  if ( a4 < a5 ) /*0x42b47c*/
  {
    a5 = a4; /*0x42b47e*/
    goto LABEL_20; /*0x42b482*/
  }
  if ( a5 < a4 ) /*0x42b48d*/
  {
    v50 = v11; /*0x42b491*/
    if ( a4 - a5 <= 0 ) /*0x42b499*/
      goto LABEL_19; /*0x42b499*/
    v12 = a2; /*0x42b49b*/
    v13 = a4 - a5; /*0x42b49d*/
    while ( *v12 == 8 ) /*0x42b4a4*/
    {
      v14 = *((int16_t *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v50) + 139); /*0x42b4b5*/
      if ( v14 == -1 ) /*0x42b4bf*/
      {
        v15 = (int *)CellStruct::Set(&TileDataCellClass, 0, 0); /*0x42b4d7*/
  LABEL_16:
        v11 = (int *)*v15; /*0x42b4f4*/
        goto LABEL_17; /*0x42b4f4*/
      }
      v11 = *(int **)(*((unsigned int *)g_PathClass_State + v14) + 40); /*0x42b4ca*/
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
    v15 = CellStruct::Add(&v50, &v57, (unsigned short *)(4 * *v12 + 9041544)); /*0x42b4ef*/
    goto LABEL_16; /*0x42b4ef*/
  }
  LABEL_20:
  v16 = LocomotionClass::GetSpeedMultiplier(a1); /*0x42b508*/
  v17 = a1[135]; /*0x42b513*/
  v60 = v16; /*0x42b519*/
  v57 = v17; /*0x42b51d*/
  if ( a5 <= 0 ) /*0x42b527*/
    goto LABEL_38; /*0x42b527*/
  v18 = (int16_t)v49; /*0x42b52f*/
  v19 = 2 * a5; /*0x42b536*/
  v53 = 2 * a5; /*0x42b538*/
  v20 = (int16_t *)(4 * (v10 & 7) + 9041544); /*0x42b53c*/
  while ( 1 ) /*0x42b549*/
  {
    v21 = *v20; /*0x42b549*/
    v52 = v19; /*0x42b54d*/
    v22 = v18 + v21; /*0x42b551*/
    v23 = IDA_HIWORD(v49) + v20[1]; /*0x42b558*/
    IDA_LOWORD(v54) = v22; /*0x42b55d*/
    IDA_HIWORD(v54) = v23; /*0x42b564*/
    v50 = v54; /*0x42b579*/
    v24 = *(unsigned int *)(a3 + 4 * (v7 + a5 - v19)); /*0x42b581*/
    v25 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v50); /*0x42b58f*/
    do /*0x42b655*/
    {
      if ( v52 <= 0 ) /*0x42b597*/
      {
        v36 = a2; /*0x42b70b*/
        v37 = a4 - a5; /*0x42b70f*/
        if ( 2 * a5 > 0 ) /*0x42b719*/
          memset32(&a2[a4 - a5], v51, 2 * a5); /*0x42b71f*/
        v38 = a6; /*0x42b721*/
        v39 = *a6; /*0x42b727*/
        a6 = (int **)*a6; /*0x42b72a*/
        if ( v37 <= 0 ) /*0x42b72e*/
        {
  LABEL_53:
          *v38 = v39; /*0x42b795*/
          return v37; /*0x42b7a1*/
        }
        v40 = v36; /*0x42b730*/
        v41 = v37; /*0x42b732*/
        while ( *v40 == 8 ) /*0x42b739*/
        {
          v42 = *((int16_t *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a6) + 139); /*0x42b74a*/
          if ( v42 == -1 ) /*0x42b754*/
          {
            v43 = (int **)CellStruct::Set(&a2, 0, 0); /*0x42b76c*/
  LABEL_51:
            v39 = *v43; /*0x42b789*/
            goto LABEL_52; /*0x42b789*/
          }
          v39 = *(int **)(*((unsigned int *)g_PathClass_State + v42) + 40); /*0x42b75f*/
  LABEL_52:
          ++v40; /*0x42b78b*/
          --v41; /*0x42b78e*/
          a6 = (int **)v39; /*0x42b78f*/
          if ( !v41 ) /*0x42b793*/
            goto LABEL_53; /*0x42b793*/
        }
        v43 = (int **)CellStruct::Add(&a6, &a4, (unsigned short *)(4 * *v40 + 9041544)); /*0x42b784*/
        goto LABEL_51; /*0x42b784*/
      }
      v26 = 1; /*0x42b5f5*/
      if ( !(*(int (__thiscall **)(unsigned int *, unsigned int *, int, int, unsigned int, int))(*a1 + 428))(a1, v25, v51, v24, 0, 1) /*0x42b5c2*/
        && (v25[80] & 0x40000) == 0 )
      {
        TileDataCellClass = CellClass::GetTileData((int16_t *)&v49, v57); /*0x42b5d8*/
        if ( (double)TileDataCellClass * v60 < 1.0 ) /*0x42b5ef*/
          v26 = 0; /*0x42b5b6*/
      }
      v27 = (unsigned short)v50 + *v20; /*0x42b5ff*/
      --v52; /*0x42b605*/
      v28 = IDA_HIWORD(v50) + v20[1]; /*0x42b60d*/
      IDA_LOWORD(v55) = v27; /*0x42b612*/
      IDA_HIWORD(v55) = v28; /*0x42b61b*/
      v50 = v55; /*0x42b624*/
      v25 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v50); /*0x42b633*/
      v29 = *((char *)v25 + 283); /*0x42b635*/
      if ( v24 - v29 == 4 ) /*0x42b641*/
      {
        v24 = v29 + 4; /*0x42b649*/
        if ( (v25[80] & 0x100) != 0 ) /*0x42b64f*/
          continue; /*0x42b64f*/
      }
      v24 = *((char *)v25 + 283); /*0x42b651*/
    }
    while ( !v26 ); /*0x42b655*/
    v30 = v59 & 7; /*0x42b66e*/
    v31 = IDA_HIWORD(v49) + IDA_HIWORD(Direction_X_Offsets[v30]); /*0x42b688*/
    IDA_LOWORD(v56) = IDA_LOWORD(Direction_X_Offsets[v30]) + (unsigned short)v49; /*0x42b694*/
    IDA_HIWORD(v56) = v31; /*0x42b69d*/
    v18 = (int16_t)v56; /*0x42b6a2*/
    v53 -= 2; /*0x42b6a7*/
    v7 = a4; /*0x42b6ab*/
    v49 = v56; /*0x42b6af*/
    if ( --a5 <= 0 ) /*0x42b6b9*/
      break; /*0x42b6b9*/
    v19 = v53; /*0x42b545*/
  }
  v6 = a2; /*0x42b6bf*/
  LABEL_38:
  v32 = *a6; /*0x42b6c3*/
  a2 = *a6; /*0x42b6cb*/
  if ( v7 > 0 ) /*0x42b6cf*/
  {
    v33 = v6; /*0x42b6d1*/
    v34 = v7; /*0x42b6d3*/
    do /*0x42b6ef*/
    {
      v32 = (int *)*GetCellNeighborCoord(&a4, (int16_t *)&a2, *v33++); /*0x42b6e5*/
      --v34; /*0x42b6ea*/
      a2 = v32; /*0x42b6eb*/
    }
    while ( v34 ); /*0x42b6ef*/
  }
  *a6 = v32; /*0x42b6f6*/
  return v7; /*0x42b6f5*/
}
}
// 0x42BCA0
namespace gamemd {
void sub_42BCA0(int a1, int a2, int a3, unsigned int * a4, int * a5)
{
  int v6; // edx
  int v7; // esi
  int16_t v8; // cx
  int16_t v9; // bx
  bool v10; // cc
  int v11; // eax
  int16_t v12; // si
  unsigned short *v13; // eax
  int16_t v14; // bx
  int16_t v15; // bp
  int v16; // ecx
  int v17; // eax
  int16_t result; // ax
  int v19; // edi
  int v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]
  int16_t v22; // [esp+18h] [ebp-10h]
  int16_t v23; // [esp+1Ah] [ebp-Eh]
  int v24; // [esp+1Ch] [ebp-Ch]
  int v25; // [esp+20h] [ebp-8h]
  unsigned int *v26; // [esp+2Ch] [ebp+4h]
  char v27; // [esp+30h] [ebp+8h]
  int v28; // [esp+34h] [ebp+Ch]

  v6 = *a5; /*0x42bcad*/
  v7 = a3; /*0x42bcb0*/
  v8 = 0; /*0x42bcb4*/
  v9 = 0; /*0x42bcb6*/
  v10 = a2 < a3; /*0x42bcb9*/
  v25 = 0; /*0x42bcbc*/
  v20 = a2; /*0x42bcc0*/
  v21 = *a5; /*0x42bcc4*/
  v27 = 0; /*0x42bcc8*/
  if ( v10 ) /*0x42bccc*/
  {
  LABEL_13:
    *a4 = v7; /*0x42bdb5*/
    *a5 = v6; /*0x42bdc2*/
    return (int16_t)a4; /*0x42bdc8*/
  }
  v26 = (unsigned int *)(a1 + 4 * a2); /*0x42bcd9*/
  while ( *v26 == -2 ) /*0x42bce6*/
  {
    --v20; /*0x42bcf0*/
    --v26; /*0x42bcf4*/
  LABEL_12:
    if ( v20 < v7 ) /*0x42bdaf*/
      goto LABEL_13; /*0x42bdaf*/
  }
  v11 = ((uint8_t)*v26 - 4) & 7; /*0x42bd05*/
  v12 = Direction_X_Offsets[v11]; /*0x42bd08*/
  v13 = (unsigned short *)(4 * v11 + 9041544); /*0x42bd10*/
  v22 = v8 + v12; /*0x42bd24*/
  v23 = v9 + v13[1]; /*0x42bd29*/
  v14 = IDA_HIWORD(v21) + v13[1]; /*0x42bd3a*/
  v15 = v6 + *v13; /*0x42bd3f*/
  IDA_LOWORD(v24) = v15; /*0x42bd42*/
  IDA_HIWORD(v24) = v14; /*0x42bd47*/
  IDA_HIWORD(v21) = v14; /*0x42bd53*/
  v16 = abs16(v23); /*0x42bd5f*/
  v17 = abs16(v22); /*0x42bd64*/
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
  v19 = ((((uint8_t)*v26 - 4) & 7) - 4) & 7; /*0x42bdd7*/
  *a4 = v20 + 1; /*0x42bdda*/
  IDA_LOWORD(v28) = v15 + IDA_LOWORD(Direction_X_Offsets[v19]); /*0x42bdf3*/
  result = v14 + IDA_HIWORD(Direction_X_Offsets[v19]); /*0x42bdfc*/
  IDA_HIWORD(v28) = result; /*0x42bdff*/
  *a5 = v28; /*0x42be0a*/
  return result; /*0x42bdbd*/
}
}
// 0x42BE20
namespace gamemd {
LocomotionClass * * WalkLineOfSight(char * a1, int a2, unsigned int * a3, short * a4, unsigned int * a5, int a6, char a7)
{
  int16_t v7; // dx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  signed int v13; // ecx
  signed int v14; // eax
  unsigned int *v15; // ebx
  int v16; // ebp
  int v17; // esi
  bool v18; // cl
  unsigned int *v19; // eax
  int v20; // ecx
  unsigned int *v21; // edi
  int v22; // eax
  int v23; // ecx
  unsigned int *v24; // edi
  int v25; // eax
  int v26; // ecx
  bool v27; // cc
  signed int v29; // [esp+28h] [ebp-34h]
  signed int v30; // [esp+2Ch] [ebp-30h]
  int v31; // [esp+30h] [ebp-2Ch]
  int v32; // [esp+34h] [ebp-28h]
  int v33; // [esp+38h] [ebp-24h]
  int v34; // [esp+3Ch] [ebp-20h]
  unsigned int *v35; // [esp+40h] [ebp-1Ch]
  unsigned int *v36; // [esp+44h] [ebp-18h]
  int v37; // [esp+48h] [ebp-14h]
  int v38; // [esp+4Ch] [ebp-10h]
  double v39; // [esp+54h] [ebp-8h]

  v7 = a4[1]; /*0x42be2d*/
  v38 = 0; /*0x42be35*/
  v8 = *a4; /*0x42be3d*/
  v9 = v7; /*0x42be40*/
  if ( *a4 >= 0 )
    v10 = v7 >= 0 ? 3 : 1;
  else
    v10 = v7 >= 0 ? 5 : 7;
  v32 = v10; /*0x42be67*/
  v11 = v7 + v8; /*0x42be6d*/
  if ( v8 - v7 <= 0 )
    v12 = v11 <= 0 ? 6 : 4;
  else
    v12 = v11 <= 0 ? 0 : 2;
  v33 = v12; /*0x42be8f*/
  v13 = abs32(v9); /*0x42be9a*/
  v14 = abs16(*a4); /*0x42be9f*/
  v29 = v14; /*0x42bea3*/
  if ( v14 >= v13 ) /*0x42bea7*/
    v29 = v13; /*0x42bea9*/
  if ( v14 <= v13 ) /*0x42beaf*/
    v14 = v13; /*0x42beb1*/
  v15 = a5; /*0x42beb7*/
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
    v26 = v32; /*0x42c121*/
    v32 = v33; /*0x42c129*/
    v29 = v30; /*0x42c131*/
    v33 = v26; /*0x42c13a*/
    v27 = v38 + 1 < 2; /*0x42c13e*/
    v30 = v16; /*0x42c141*/
    ++v38; /*0x42c145*/
    if ( !v27 ) /*0x42c149*/
      return 0; /*0x42c158*/
  }
  v17 = a6; /*0x42bf05*/
  v18 = 0; /*0x42bf09*/
  v19 = (unsigned int *)*a3; /*0x42bf0b*/
  a5 = (unsigned int *)*a3; /*0x42bf13*/
  v34 = v30; /*0x42bf17*/
  if ( v29 > 0 ) /*0x42bf1b*/
  {
    do /*0x42c00c*/
    {
      if ( v18 ) /*0x42bf23*/
        break; /*0x42bf23*/
      v20 = v32 & 7; /*0x42bf2d*/
      IDA_LOWORD(v35) = (unsigned short)v19 + IDA_LOWORD(Direction_X_Offsets[v20]); /*0x42bf46*/
      IDA_HIWORD(v35) = IDA_HIWORD(a5) + IDA_HIWORD(Direction_X_Offsets[v20]); /*0x42bf55*/
      a5 = v35; /*0x42bf5e*/
      v21 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a5); /*0x42bf6c*/
      if ( v39 > 0.00001 && (double)CellClass::GetTileData((int16_t *)&a5, v37) * v39 >= 0.01 ) /*0x42bfa1*/
        ++v31; /*0x42bfa3*/
      v18 = (*(int (__thiscall **)(unsigned int *, unsigned int *, int, int, unsigned int, int))(*v15 + 428))(v15, v21, v32, v17, 0, 1) /*0x42bfe5*/
         || (v21[80] & 0x40000) != 0
         || v31 > 3
         || !a7 && v31 > 0;
      v22 = *((char *)v21 + 283); /*0x42bfe7*/
      --v16; /*0x42bff0*/
      if ( v17 - v22 == 4 ) /*0x42bff4*/
      {
        v17 = v22 + 4; /*0x42bffc*/
        if ( (v21[80] & 0x100) != 0 ) /*0x42c002*/
          continue; /*0x42c002*/
      }
      v17 = *((char *)v21 + 283); /*0x42c004*/
      IDA_LOWORD(v19) = (unsigned short)a5; /*0x42c006*/
    }
    while ( v16 > 0 ); /*0x42c00c*/
  }
  if ( v30 > 0 ) /*0x42c018*/
  {
    while ( !v18 ) /*0x42c026*/
    {
      v23 = v33 & 7; /*0x42c030*/
      IDA_LOWORD(v36) = IDA_LOWORD(Direction_X_Offsets[v23]) + (unsigned short)v19; /*0x42c053*/
      IDA_HIWORD(v36) = IDA_HIWORD(a5) + IDA_HIWORD(Direction_X_Offsets[v23]); /*0x42c058*/
      a5 = v36; /*0x42c067*/
      v24 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a5); /*0x42c070*/
      if ( v39 > 0.00001 && (double)CellClass::GetTileData((int16_t *)&a5, v37) * v39 >= 0.01 ) /*0x42c0a5*/
        ++v31; /*0x42c0a7*/
      v18 = (*(int (__thiscall **)(unsigned int *, unsigned int *, int, int, unsigned int, int))(*v15 + 428))(v15, v24, v33, v17, 0, 1) /*0x42c0e9*/
         || (v24[80] & 0x40000) != 0
         || v31 > 3
         || !a7 && v31 > 0;
      --v34; /*0x42c0eb*/
      v25 = *((char *)v24 + 283); /*0x42c0ef*/
      if ( v17 - v25 != 4 || (v17 = v25 + 4, (v24[80] & 0x100) == 0) ) /*0x42c109*/
        v17 = *((char *)v24 + 283); /*0x42c10b*/
      if ( v34 <= 0 ) /*0x42c113*/
        goto LABEL_47; /*0x42c113*/
      IDA_LOWORD(v19) = (unsigned short)a5; /*0x42c020*/
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
}
// 0x42C900
namespace gamemd {
void * E4Recv_42C900::FindPathWithRetry(FootClass * aP1, short * a2, int aP4, int a5, int a6, int aP3, int aP6)
{
  int v9; // esi
  int v10; // edi
  unsigned int *v12; // ebx
  int v13; // eax
  unsigned int *v14; // eax
  int v15; // eax
  int v16; // ecx
  int (__stdcall ***v17)(unsigned int, void *, int *); // eax
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  bool v21; // al
  void *result; // eax
  int v23; // eax
  signed int v24; // ecx
  int64_t v25; // rax
  int v26; // eax
  char v27; // dl
  int v28; // [esp+18h] [ebp-20h] BYREF
  int v29; // [esp+1Ch] [ebp-1Ch] BYREF
  void *v30; // [esp+20h] [ebp-18h]
  int TileIndexMapClass; // [esp+24h] [ebp-14h]
  unsigned int v32[4]; // [esp+28h] [ebp-10h] BYREF
  int v34; // [esp+44h] [ebp+Ch]

  this->M56 = 1; /*0x42c909*/
  CellClass::ClearOccupancyGrid(); /*0x42c90d*/
  v9 = &this->u32_1D0; /*0x42c912*/
  v10 = 3; /*0x42c915*/
  do /*0x42c925*/
  {
    (*(void (__thiscall **)(int))(this->q080)(v9); /*0x42c91e*/
    v9 += 24; /*0x42c921*/
    --v10; /*0x42c924*/
  }
  while ( v10 ); /*0x42c925*/
  this->M60 = aP6; /*0x42c92f*/
  v30 = CellCoord::To_CellObj(&MapClass_Instance, aP1); /*0x42c93d*/
  v12 = CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x42c95b*/
  if ( aP3 == -1 ) /*0x42c95d*/
    v13 = *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)aP4 + 132))(aP4) + 1460); /*0x42c96d*/
  else
    v13 = aP3; /*0x42c95f*/
  TileIndexMapClass = MapClass::GetTileIndex(&MapClass_Instance, aP1, v13, *(unsigned char *)(aP4 + 140)); /*0x42c98d*/
  if ( aP3 == -1 ) /*0x42c991*/
    aP6 = *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)aP4 + 132))(aP4) + 1460); /*0x42c9a9*/
  else
    aP6 = aP3; /*0x42c993*/
  v14 = CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x42c9b7*/
  v15 = MapClass::GetTileIndex(&MapClass_Instance, a2, aP6, IDA_BYTE1(v14[80]) & 1); /*0x42c9d7*/
  v15 = v15; /*0x42c9e0*/
  IDA_LOBYTE(v15) = *(unsigned char *)(aP4 + 140); /*0x42c9e4*/
  v29 = *Pathfinding::CrossBridge(&aP6, (int)v30, v15); /*0x42ca01*/
  v16 = v12[80] >> 8; /*0x42ca0b*/
  IDA_LOBYTE(v16) = v16 & 1; /*0x42ca0e*/
  v28 = *Pathfinding::CrossBridge(&aP6, (int)v12, v16); /*0x42ca23*/
  if ( aP3 == -1 ) /*0x42ca27*/
    aP3 = *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)aP4 + 132))(aP4) + 1460); /*0x42ca3f*/
  if ( (*(int (__thiscall **)(int))(*(unsigned int *)aP4 + 44))(aP4) == 15 && *(unsigned char *)(*(unsigned int *)(aP4 + 1728) + 3476) ) /*0x42ca55*/
  {
    v17 = *(int (__stdcall ****)(unsigned int, void *, int *))(aP4 + 1652); /*0x42ca5f*/
    v18 = 0; /*0x42ca65*/
    aP3 = 7; /*0x42ca69*/
    if ( !v17 ) /*0x42ca71*/
      goto LABEL_18; /*0x42ca71*/
    v19 = (**v17)(v17, &unk_818858, &aP6); /*0x42ca80*/
    IDA_LOBYTE(v18) = v19 < 0; /*0x42ca88*/
    v20 = aP6 & (v18 - 1); /*0x42ca8c*/
    if ( v19 < 0 && v19 != -2147467262 ) /*0x42ca97*/
      WinAPI::Wrapper(v19); /*0x42ca9a*/
    if ( !v20 ) /*0x42caa1*/
  LABEL_18:
      WinAPI::Wrapper(-2147467261); /*0x42caa8*/
    (*(void (__stdcall **)(int, unsigned int *))(*(unsigned int *)v20 + 12))(v20, v32); /*0x42cab5*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v20 + 8))(v20); /*0x42cabf*/
  }
  if ( *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)aP4 + 132))(aP4) + 3220) /*0x42cb1b*/
    || !*(unsigned char *)(aP4 + 981)
    || (*(uint8_t (__thiscall **)(int))(*(unsigned int *)aP4 + 800))(aP4)
    || !LayerClass::IsWithinUsableArea(&MapClass_Instance, (int16_t *)&v29, 1)
    || (v21 = LayerClass::IsWithinUsableArea(&MapClass_Instance, (int16_t *)&v28, 1), IDA_LOBYTE(aP6) = 1, !v21) )
  {
    IDA_LOBYTE(aP6) = 0; /*0x42cb1d*/
  }
  if ( TileIndexMapClass == v15 ) /*0x42cb30*/
  {
    if ( (unsigned char)aP6 && !Pathfinding::AStar((unsigned int *)this, (int16_t *)&v29, (int16_t *)&v28, aP3, aP4) ) /*0x42cb58*/
    {
      Debug::Log(); /*0x42cb7e*/
      IDA_LOBYTE(aP6) = 0; /*0x42cb86*/
    }
  }
  else if ( (unsigned char)aP6 ) /*0x42cb34*/
  {
    return 0; /*0x42cb3f*/
  }
  v34 = 0; /*0x42cb8f*/
  v23 = -(a6 != -1); /*0x42cb9a*/
  IDA_LOBYTE(v23) = v23 & 0xFC; /*0x42cb9c*/
  TileIndexMapClass = v23 + 5; /*0x42cba1*/
  while ( 1 ) /*0x42cba5*/
  {
    if ( !(unsigned char)aP6 && v29 != v28 ) /*0x42cbc2*/
      Debug::Log(); /*0x42cbde*/
    result = (void *)BuildingClass::UpdatePowerAnimation(this, (int)aP1, a2, aP4, a5, a6, aP6); /*0x42cc02*/
    v30 = result; /*0x42cc09*/
    if ( result || !(unsigned char)aP6 ) /*0x42cc19*/
      break; /*0x42cc19*/
    v24 = abs32(aP1[1] - a2[1]); /*0x42cc31*/
    v25 = *aP1 - *a2; /*0x42cc38*/
    v26 = (IDA_HIDWORD(v25) ^ v25) - IDA_HIDWORD(v25); /*0x42cc3b*/
    if ( v26 <= v24 ) /*0x42cc3f*/
      v26 = v24; /*0x42cc41*/
    if ( v26 > 1 ) /*0x42cc46*/
      Debug::Log(); /*0x42cc65*/
    ++v34; /*0x42cc75*/
    sub_42CCD0(aP4); /*0x42cc79*/
    CellClass::ClearOccupancyGrid(); /*0x42cc80*/
    v27 = this->M56; /*0x42cc85*/
    IDA_LOBYTE(aP6) = v27 != 0; /*0x42cc93*/
    if ( v34 >= TileIndexMapClass /*0x42ccb3*/
      || v27 && !Pathfinding::AStar((unsigned int *)this, (int16_t *)&v29, (int16_t *)&v28, aP3, aP4) )
    {
      return v30; /*0x42ccc0*/
    }
  }
  return result; /*0x42cb36*/
}
}
// 0x42CCD0
namespace gamemd {
AbstractClass * * E4Recv_42CCD0::sub_42CCD0(int a2)
{
  int v3; // ebp
  int *v4; // esi
  uint16_t v5; // di
  int16_t *v6; // ebx
  void *v7; // eax
  int v8; // eax
  void *v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v19; // [esp+14h] [ebp-24h]
  int v20; // [esp+18h] [ebp-20h]
  void **v22; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v24; // [esp+28h] [ebp-10h]
  char v25; // [esp+2Dh] [ebp-Bh]
  int v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]

  v3 = 0; /*0x42ccf4*/
  v4 = (int *)(&this->q0304); /*0x42ccf6*/
  v20 = dword_87F858 + 10 * CellToTileIndexMap((int *)&MapClass_Instance, (int16_t *)(&this->q02C2)); /*0x42ccfc*/
  while ( 1 ) /*0x42cd12*/
  {
    v5 = *(unsigned short *)(v20 + 2 * v3); /*0x42cd12*/
    WordVector::Constructor(&v22, 0, 0); /*0x42cd16*/
    v27 = 10; /*0x42cd29*/
    v26 = 0; /*0x42cd31*/
    if ( Block && v25 ) /*0x42cd41*/
    {
      RA2_OPDEL(Block); /*0x42cd44*/
      Block = 0; /*0x42cd4c*/
    }
    v6 = (int16_t *)(&this->q02C2); /*0x42cd5e*/
    v25 = 0; /*0x42cd68*/
    v24 = 0; /*0x42cd6d*/
    v7 = CellCoord::To_CellObj(&MapClass_Instance, v6); /*0x42cd75*/
    if ( CheckMapReachability(&MapClass_Instance, (int)v7, v3, (int)&v22, a2) ) /*0x42cd80*/
    {
      v8 = CellToTileIndexMap((int *)&MapClass_Instance, v6); /*0x42cd8f*/
      sub_42CF80(*(uint16_t *)(dword_87F858 + 10 * v8 + 2 * v3), v3); /*0x42cdac*/
      v9 = Block; /*0x42cdb1*/
      if ( Block && v25 ) /*0x42cdcd*/
        goto LABEL_25; /*0x42cdcd*/
    }
    else
    {
      v10 = v26 - 1; /*0x42cddc*/
      v19 = v26 - 1; /*0x42cde1*/
      if ( v26 - 1 >= 0 ) /*0x42cde5*/
      {
        v11 = v5; /*0x42cde9*/
        for ( v5 = v5; ; v11 = v5 ) /*0x42cdee*/
        {
          v12 = *((uint16_t *)Block + v10); /*0x42cdfe*/
          if ( (uint16_t)v12 != v11 ) /*0x42ce04*/
          {
            if ( (uint16_t)v12 < v11 ) /*0x42ce06*/
            {
              v12 = v11; /*0x42ce0a*/
              v11 = *((uint16_t *)Block + v10); /*0x42ce0c*/
            }
            v13 = v12 | (v11 << 16); /*0x42ce16*/
            v14 = *v4; /*0x42ce18*/
            if ( v4[2] < *v4 /*0x42ce3b*/
              || (*((unsigned char *)v4 + 5) || !v14)
              && (v15 = v4[3], v15 > 0)
              && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(*(v4 - 2) + 8))(v4 - 2, v14 + v15, 0) )
            {
              v16 = v4[2]; /*0x42ce42*/
              v17 = *(v4 - 1); /*0x42ce45*/
              v4[2] = v16 + 1; /*0x42ce4b*/
              *(unsigned int *)(v17 + 4 * v16) = v13; /*0x42ce4e*/
            }
          }
          v10 = --v19; /*0x42ce55*/
          if ( v19 < 0 ) /*0x42ce5a*/
            break; /*0x42ce5a*/
        }
      }
      v9 = Block; /*0x42ce5c*/
      if ( Block && v25 ) /*0x42ce74*/
      {
  LABEL_25:
        RA2_OPDEL(v9); /*0x42ce76*/
        Block = 0; /*0x42ce7f*/
      }
    }
    ++v3; /*0x42ce83*/
    v4 += 6; /*0x42ce84*/
    v25 = 0; /*0x42ce8a*/
    v24 = 0; /*0x42ce8f*/
    if ( v3 >= 3 ) /*0x42ce93*/
      break; /*0x42ce93*/
  }
}
}
// 0x42CF80
namespace gamemd {
void E4Recv_42CF80::sub_42CF80(int a2, IUnknown * aP2)
{
  int v3; // esi
  int v5; // edx
  int v6; // eax
  uint16_t *i; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  unsigned int v27; // [esp+10h] [ebp-14h]
  int v28; // [esp+14h] [ebp-10h]
  int j; // [esp+18h] [ebp-Ch]
  unsigned int k; // [esp+1Ch] [ebp-8h]
  int v31; // [esp+20h] [ebp-4h]

  v3 = aP2; /*0x42cf86*/
  v5 = *((unsigned int *)this + aP2 + 797); /*0x42cf8d*/
  if ( v5 > 1 ) /*0x42cf97*/
  {
    v6 = 0; /*0x42cfa7*/
    for ( i = (uint16_t *)(((char *)&this->q308 + 224) * aP2 + 188); *i != a2; ++i ) /*0x42cfba*/
    {
      if ( ++v6 >= v5 ) /*0x42cfd0*/
      {
        *(unsigned int *)&this->u32_E0 = 0; /*0x42cfd3*/
        return; /*0x42cfdd*/
      }
    }
    if ( v6 == -1 ) /*0x42cfe3*/
    {
      *(unsigned int *)&this->u32_E0 = 0; /*0x42cfe6*/
    }
    else
    {
      if ( v6 == v5 - 1 ) /*0x42cffc*/
      {
        v8 = v6 + 500 * aP2; /*0x42d001*/
        IDA_LOWORD(v9) = *((unsigned short *)this + v8 + 94); /*0x42d004*/
        IDA_LOWORD(aP2) = *((unsigned short *)this + v8 + 93); /*0x42d014*/
      }
      else
      {
        v10 = v6 + 500 * aP2; /*0x42d01e*/
        IDA_LOWORD(v9) = *((unsigned short *)this + v10 + 95); /*0x42d029*/
        IDA_LOWORD(aP2) = *((unsigned short *)this + v10 + 94); /*0x42d031*/
      }
      v9 = (uint16_t)v9; /*0x42d03a*/
      v11 = (uint16_t)aP2; /*0x42d040*/
      v12 = v9; /*0x42d046*/
      v27 = (uint16_t)aP2; /*0x42d04a*/
      if ( (uint16_t)aP2 != (uint16_t)v9 ) /*0x42d04e*/
      {
        if ( (uint16_t)aP2 < (unsigned int)(uint16_t)v9 ) /*0x42d050*/
        {
          v11 = (uint16_t)v9; /*0x42d054*/
          v12 = (uint16_t)aP2; /*0x42d056*/
        }
        a2 = v11 | (v12 << 16); /*0x42d060*/
        sub_42D830((unsigned int *)&this->u32_18 * v3 + 29, &a2); /*0x42d06d*/
      }
      v13 = 24 * v3; /*0x42d079*/
      v14 = dword_87F878[6 * v3]; /*0x42d082*/
      v15 = v14 + 36 * (uint16_t)v9; /*0x42d088*/
      v31 = v15; /*0x42d08e*/
      a2 = v14 + 36 * v27; /*0x42d092*/
      v16 = *(unsigned int *)(v15 + 16) - 1; /*0x42d099*/
      for ( j = v16; v16 >= 0; j = v16 ) /*0x42d09e*/
      {
        if ( *(unsigned short *)(*(unsigned int *)(v15 + 4) + 8 * v16) != (unsigned short)aP2 ) /*0x42d0b0*/
        {
          v17 = *(unsigned int *)(a2 + 16) - 1; /*0x42d0bd*/
          v28 = v17; /*0x42d0be*/
          if ( v17 >= 0 ) /*0x42d0c2*/
          {
            v18 = *(uint16_t *)(*(unsigned int *)(v15 + 4) + 8 * v16); /*0x42d0c8*/
            for ( k = v18; ; v18 = k ) /*0x42d0cd*/
            {
              if ( *(unsigned int *)(*(unsigned int *)(a2 + 4) + 8 * v17) == v18 ) /*0x42d0e1*/
              {
                v19 = v18; /*0x42d0e3*/
                v20 = v27; /*0x42d0e5*/
                if ( v19 != v27 ) /*0x42d0eb*/
                {
                  if ( v19 < v27 ) /*0x42d0ed*/
                  {
                    v21 = v19; /*0x42d0ef*/
                    v19 = v27; /*0x42d0f1*/
                    v20 = v21; /*0x42d0f3*/
                  }
                  v22 = v19 | (v20 << 16); /*0x42d105*/
                  v23 = *(unsigned int *)(this + v13 + 124); /*0x42d107*/
                  if ( *(unsigned int *)(this + v13 + 132) < v23 /*0x42d129*/
                    || (*(this + v13 + 129) || !v23)
                    && (v24 = *(unsigned int *)(this + v13 + 136), v24 > 0)
                    && (*(uint8_t (__thiscall **)(unsigned char *, int, unsigned int))(*(unsigned int *)(this + v13 + 116) + 8))(
                         this + v13 + 116,
                         v23 + v24,
                         0) )
                  {
                    v25 = *(unsigned int *)(this + v13 + 132); /*0x42d130*/
                    v26 = *(unsigned int *)(this + v13 + 120); /*0x42d133*/
                    *(unsigned int *)(this + v13 + 132) = v25 + 1; /*0x42d139*/
                    *(unsigned int *)(v26 + 4 * v25) = v22; /*0x42d13c*/
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
    *(unsigned int *)&this->u32_E0 = 0; /*0x42cf9a*/
  }
}
}
// 0x42D490
namespace gamemd {
unsigned int * Cell_GetNeighborCoord(unsigned int * a1, short * a2, int a3)
{
  int v4; // eax
  int16_t v6; // ax
  int v7; // [esp+8h] [ebp+4h]

  if ( a3 == 8 ) /*0x42d49a*/
  {
    v4 = *((int16_t *)CellCoord::To_CellObj(&MapClass_Instance, a2) + 139); /*0x42d4a7*/
    if ( v4 == -1 ) /*0x42d4b1*/
      *a1 = 0; /*0x42d4d7*/
    else
      *a1 = *(unsigned int *)(*((unsigned int *)g_PathClass_State + v4) + 40); /*0x42d4bf*/
    return a1; /*0x42d4c1*/
  }
  else
  {
    v6 = IDA_HIWORD(Direction_X_Offsets[a3]); /*0x42d4ea*/
    IDA_LOWORD(v7) = IDA_LOWORD(Direction_X_Offsets[a3]) + *a2; /*0x42d4f6*/
    IDA_HIWORD(v7) = a2[1] + v6; /*0x42d4fb*/
    *a1 = v7; /*0x42d504*/
    return a1; /*0x42d506*/
  }
}
}
// 0x42E150
namespace gamemd {
void sub_42E150()
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  unsigned int v6[4]; // [esp+0h] [ebp-10h] BYREF

  v2 = a2[6]; /*0x42e150*/
  if ( v2 ) /*0x42e158*/
  {
    if ( *(unsigned int *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x42e164*/
      v3 = *(uint8_t *)(*(unsigned int *)(g_FileSystem_THEATER_PAL + 372) + v2); /*0x42e172*/
    else
      v3 = *(uint16_t *)(*(unsigned int *)(g_FileSystem_THEATER_PAL + 372) + 2 * v2); /*0x42e17f*/
    v6[0] = *a2; /*0x42e186*/
    v6[1] = a2[1]; /*0x42e18d*/
    v4 = a2[2]; /*0x42e191*/
    v5 = a2[3]; /*0x42e194*/
    v6[2] = v4; /*0x42e197*/
    v6[3] = v5; /*0x42e19b*/
    return (*(int (__thiscall **)(int, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 88))( /*0x42e1ac*/
             g_DSurface_Hidden_2,
             v6,
             v3);
  }
  return result; /*0x42e1b0*/
}
}
// 0x42FD30
namespace gamemd {
void EncodeBitmapRGB(Pipe * aP0, int edx0, unsigned char * a2, int a4)
{
  int v4; // eax
  char *v5; // ebp
  unsigned char *v6; // ecx
  char v7; // al
  int v8; // edi
  char v9; // al
  char v10; // al
  unsigned char *v11; // ecx
  char *v12; // ecx
  char v13; // al
  char *v14; // ecx
  char v15; // al
  int v17; // [esp+4h] [ebp-4h]
  unsigned int v18; // [esp+Ch] [ebp+4h]

  if ( !aP0 ) /*0x42fd34*/
    return 0; /*0x42fd34*/
  if ( !edx0 ) /*0x42fd3c*/
    return 0; /*0x42fd3c*/
  if ( !a2 ) /*0x42fd48*/
    return 0; /*0x42fd48*/
  v4 = a4; /*0x42fd4e*/
  if ( !a4 ) /*0x42fd54*/
    return 0; /*0x42fe46*/
  v5 = aP0; /*0x42fd5c*/
  v17 = 0; /*0x42fd61*/
  v6 = a2; /*0x42fd69*/
  if ( edx0 > 0 ) /*0x42fd6b*/
  {
    while ( 1 ) /*0x42fd71*/
    {
      if ( v4 < 4 ) /*0x42fd74*/
        goto LABEL_19; /*0x42fd74*/
      v7 = *v5; /*0x42fd7a*/
      v8 = 0; /*0x42fd7d*/
      ++v5; /*0x42fd7f*/
      v18 = 0; /*0x42fd80*/
      --edx0; /*0x42fd84*/
      IDA_BYTE2(v18) = v7; /*0x42fd85*/
      if ( !edx0 ) /*0x42fd89*/
        break; /*0x42fd89*/
      v9 = *v5++; /*0x42fd8b*/
      --edx0; /*0x42fd8f*/
      IDA_BYTE1(v18) = v9; /*0x42fd90*/
      if ( !edx0 ) /*0x42fd96*/
        goto LABEL_11; /*0x42fd96*/
      v10 = *v5++; /*0x42fd98*/
      IDA_LOBYTE(v18) = v10; /*0x42fd9c*/
      --edx0; /*0x42fda0*/
  LABEL_12:
      v11 = v6 + 1; /*0x42fda9*/
      *(v11 - 1) = aAbcdefghijklmn[(v18 >> 18) & 0x3F]; /*0x42fdbf*/
      v12 = v11 + 1; /*0x42fdd0*/
      *(v12 - 1) = aAbcdefghijklmn[(v18 >> 12) & 0x3F]; /*0x42fdd7*/
      if ( v8 >= 2 ) /*0x42fdda*/
        v13 = asc_818A0C[0]; /*0x42fdf4*/
      else
        v13 = aAbcdefghijklmn[(v18 >> 6) & 0x3F]; /*0x42fdea*/
      *v12 = v13; /*0x42fdf6*/
      v14 = v12 + 1; /*0x42fdf8*/
      if ( v8 >= 1 ) /*0x42fdfc*/
        v15 = asc_818A0C[0]; /*0x42fe10*/
      else
        v15 = aAbcdefghijklmn[v18 & 0x3F]; /*0x42fe06*/
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
}
// 0x42FE50
namespace gamemd {
void DecodeBitmapRGB(Pipe * aP0, BombClass * aP1, unsigned char * a2, int a4)
{
  unsigned char *v4; // esi
  int v5; // eax
  uint8_t *v6; // ebp
  int v7; // ebx
  int v8; // edi
  uint8_t v9; // cl
  char v10; // cl
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // ecx
  int v15; // [esp+Ch] [ebp+4h]
  char v16; // [esp+12h] [ebp+Ah]

  if ( aP0 ) /*0x42fe54*/
  {
    if ( aP1 ) /*0x42fe5c*/
    {
      v4 = a2; /*0x42fe62*/
      if ( a2 ) /*0x42fe68*/
      {
        v5 = a4; /*0x42fe6e*/
        if ( a4 ) /*0x42fe74*/
        {
          v15 = 0; /*0x42fe7f*/
          v6 = aP0; /*0x42fe87*/
          if ( aP1 <= 0 ) /*0x42fe89*/
            return v15; /*0x42fe89*/
          while ( 1 ) /*0x42fe8f*/
          {
            if ( v5 <= 0 ) /*0x42fe91*/
              return v15; /*0x42fe91*/
            v7 = 0; /*0x42fe97*/
            v8 = 0; /*0x42fe99*/
            while ( 1 ) /*0x42fe9f*/
            {
              if ( aP1 <= 0 ) /*0x42fea1*/
              {
  LABEL_19:
                v16 = IDA_BYTE2(v7); /*0x42ff10*/
                goto LABEL_20; /*0x42ff10*/
              }
              v9 = *v6++; /*0x42fea3*/
              --aP1; /*0x42feab*/
              v10 = byte_7E3914[v9]; /*0x42feb6*/
              if ( v10 != -2 ) /*0x42febf*/
                break; /*0x42febf*/
  LABEL_18:
              if ( v8 >= 4 ) /*0x42ff0e*/
                goto LABEL_19; /*0x42ff0e*/
            }
            if ( v10 != -1 ) /*0x42fec4*/
              break; /*0x42fec4*/
            v16 = IDA_BYTE2(v7); /*0x42ff61*/
            aP1 = 0; /*0x42ff65*/
  LABEL_20:
            *v4++ = v16; /*0x42ff14*/
            --v5; /*0x42ff1f*/
            v13 = ++v15; /*0x42ff20*/
            if ( v5 > 0 ) /*0x42ff27*/
            {
              if ( v8 > 2 ) /*0x42ff2c*/
              {
                *v4++ = IDA_BYTE1(v7); /*0x42ff2e*/
                --v5; /*0x42ff31*/
                v15 = v13 + 1; /*0x42ff33*/
              }
              if ( v5 > 0 && v8 > 3 ) /*0x42ff3e*/
              {
                *v4++ = v7; /*0x42ff44*/
                --v5; /*0x42ff47*/
                ++v15; /*0x42ff49*/
              }
            }
            if ( aP1 <= 0 ) /*0x42ff4f*/
              return v15; /*0x42ff5e*/
          }
          switch ( v8 ) /*0x42fecf*/
          {
            case 0: /*0x42fecf*/
              v11 = (v10 & 0x3F) << 18; /*0x42fed9*/
              v12 = v7 & 0xFF03FFFF; /*0x42fedc*/
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
}
// 0x420080
namespace gamemd {
int sub_420080()
{
  dword_88A084 = 0; /*0x420087*/
  dword_88A088 = 0; /*0x42008c*/
  byte_88A08C = 1; /*0x420091*/
  byte_88A08D = 0; /*0x420098*/
  dword_88A080 = (int)&DynamicVectorClass_AlphaLightingRemapClass___vftable; /*0x42009d*/
  dword_88A094 = 10; /*0x4200a7*/
  dword_88A090 = 0; /*0x4200b1*/
  return atexit(sub_4200C0); /*0x4200bc*/
}
} // namespace gamemd

// 0x4200C0
namespace gamemd {
void sub_4200C0()
{
  if ( (byte_88A098 & 1) == 0 ) /*0x4200ca*/
  {
    dword_88A080 = (int)&VectorClass_AlphaLightingRemapClass___vftable; /*0x4200ce*/
    byte_88A098 |= 1u; /*0x4200e1*/
    if ( dword_88A084 ) /*0x4200e7*/
    {
      if ( byte_88A08D ) /*0x4200f1*/
      {
        RA2_OPDEL(dword_88A084); /*0x4200f4*/
        dword_88A084 = 0; /*0x4200fc*/
      }
    }
    byte_88A08D = 0; /*0x420106*/
    dword_88A088 = 0; /*0x42010d*/
  }
}
} // namespace gamemd

// 0x420120
namespace gamemd {
Iostream_init::Iostream_init()
{
  return this; /*0x420122*/
}
} // namespace gamemd

// 0x420130
namespace gamemd {
void nullsub_53()
{
  ; /*0x420130*/
}
} // namespace gamemd

// 0x4202F0
namespace gamemd {
unsigned int * E4Recv_4202F0::sub_4202F0(int a2)
{
  int v2; // edi
  int v3; // ebx
  unsigned short *v4; // ebp
  int v5; // edx
  int16_t v6; // ax

  v2 = 0; /*0x4202f8*/
  *(&this->q8000) = a2; /*0x4202fa*/
  *(&this->qCCC9) = 0; /*0x420300*/
  v3 = a2 - 1; /*0x420306*/
  do /*0x420349*/
  {
    v5 = v3 * (v2 >> 8) * (uint8_t)v2 / 32258; /*0x42032f*/
    if ( v5 > v3 ) /*0x420333*/
      IDA_LOBYTE(v5) = a2 - 1; /*0x420335*/
    IDA_LOBYTE(v6) = 0; /*0x420337*/
    ++v2; /*0x420339*/
    IDA_HIBYTE(v6) = v5; /*0x42033a*/
    *this++ = v6; /*0x42033c*/
  }
  while ( v2 <= 0xFFFF ); /*0x420349*/
  return this; /*0x42034b*/
}
} // namespace gamemd

// 0x420360
namespace gamemd {
void nullsub_88()
{
  ; /*0x420360*/
}
} // namespace gamemd

// 0x4206D0
namespace gamemd {
int sub_4206D0()
{
  dword_88A0A8 = 0; /*0x4206d2*/
  dword_88A0AC = 0; /*0x4206d7*/
  dword_88A0B0 = 0; /*0x4206dc*/
  dword_88A0B4 = 0; /*0x4206e1*/
  return 0; /*0x4206e6*/
}
} // namespace gamemd

// 0x4206F0
namespace gamemd {
void sub_4206F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4206fc*/
  dbl_88A0C0 = Math::Sqrt(v0 + v0); /*0x42070e*/
}
} // namespace gamemd

// 0x420720
namespace gamemd {
void sub_420720()
{
  dbl_89A128 = dbl_88A0C0 / 60.0; /*0x42072c*/
}
} // namespace gamemd

// 0x420740
namespace gamemd {
void sub_420740()
{
  dbl_88A110 = 1.0 / dbl_89A128; /*0x42074c*/
}
} // namespace gamemd

// 0x420760
namespace gamemd {
void sub_420760()
{
  dbl_88A108 = 0.0174532925199433 * 45.0; /*0x42076c*/
}
} // namespace gamemd

// 0x420780
namespace gamemd {
void sub_420780()
{
  dbl_88A0C8 = 0.0174532925199433 * 60.0; /*0x42078c*/
}
} // namespace gamemd

// 0x4207A0
namespace gamemd {
void sub_4207A0()
{
  dbl_88A0A0 = 0.0174532925199433 * 90.0; /*0x4207ac*/
}
} // namespace gamemd

// 0x4207C0
namespace gamemd {
long long sub_4207C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_88A0A0 - dbl_88A0C8); /*0x4207d2*/
  result = Math::RoundToInt(v0 * dbl_88A0C0 * 0.5); /*0x4207e6*/
  dword_89A130 = result; /*0x4207eb*/
  return result; /*0x4207f0*/
}
} // namespace gamemd

// 0x420800
namespace gamemd {
void sub_420800()
{
  dbl_88A0D0 = Math::ArcTan((double)dword_89A130 * 0.00390625); /*0x420817*/
}
} // namespace gamemd

// 0x420830
namespace gamemd {
void sub_420830()
{
  dbl_88A0E8 = Math::ArcTan((double)(2 * dword_89A130) / dbl_88A0C0); /*0x420852*/
}
} // namespace gamemd

// 0x420860
namespace gamemd {
long long sub_420860()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89A130) + 0.5); /*0x42087b*/
  dword_89A124 = result; /*0x420880*/
  return result; /*0x420886*/
}
} // namespace gamemd

// 0x420890
namespace gamemd {
int sub_420890()
{
  word_88A0B8 = 0; /*0x420892*/
  word_88A0BA = 0; /*0x420898*/
  return 0; /*0x42089e*/
}
} // namespace gamemd

// 0x4208A0
namespace gamemd {
int sub_4208A0()
{
  dword_88A0D8 = 0; /*0x4208a2*/
  dword_88A0DC = 0; /*0x4208a7*/
  dword_88A0E0 = 0; /*0x4208ac*/
  return 0; /*0x4208b1*/
}
} // namespace gamemd

// 0x4208C0
namespace gamemd {
int sub_4208C0()
{
  dword_89A120 = 0; /*0x4208c5*/
  dword_89A118 = 128; /*0x4208cf*/
  dword_89A11C = 128; /*0x4208d4*/
  return 128; /*0x4208d9*/
}
} // namespace gamemd

// 0x4208E0
namespace gamemd {
int sub_4208E0()
{
  dword_88A0F4 = 0; /*0x4208e7*/
  dword_88A0F8 = 0; /*0x4208ec*/
  byte_88A0FC = 1; /*0x4208f1*/
  byte_88A0FD = 0; /*0x4208f8*/
  dword_88A0F0 = (int)&off_7E3238; /*0x4208fd*/
  dword_88A104 = 10; /*0x420907*/
  g_AlphaShapeLimit = 0; /*0x420911*/
  return atexit(sub_420920); /*0x42091c*/
}
} // namespace gamemd

// 0x420920
namespace gamemd {
void sub_420920()
{
  dword_88A0F0 = (int)&VectorClass_AlphaShapeClass___vftable; /*0x420928*/
  if ( dword_88A0F4 && byte_88A0FD ) /*0x42093c*/
  {
    RA2_OPDEL(dword_88A0F4); /*0x42093f*/
    dword_88A0F4 = 0; /*0x420947*/
  }
  byte_88A0FD = 0; /*0x42094d*/
  dword_88A0F8 = 0; /*0x420953*/
}
} // namespace gamemd

// 0x421C90
namespace gamemd {
int sub_421C90()
{
  dword_89A140 = 0; /*0x421c92*/
  dword_89A144 = 0; /*0x421c97*/
  dword_89A148 = 0; /*0x421c9c*/
  dword_89A14C = 0; /*0x421ca1*/
  return 0; /*0x421ca6*/
}
} // namespace gamemd

// 0x421CB0
namespace gamemd {
void sub_421CB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x421cbc*/
  dbl_89A158 = Math::Sqrt(v0 + v0); /*0x421cce*/
}
} // namespace gamemd

// 0x421CE0
namespace gamemd {
void sub_421CE0()
{
  dbl_89A1B8 = dbl_89A158 / 60.0; /*0x421cec*/
}
} // namespace gamemd

// 0x421D00
namespace gamemd {
void sub_421D00()
{
  dbl_89A1A0 = 1.0 / dbl_89A1B8; /*0x421d0c*/
}
} // namespace gamemd

// 0x421D20
namespace gamemd {
void sub_421D20()
{
  dbl_89A198 = 0.0174532925199433 * 45.0; /*0x421d2c*/
}
} // namespace gamemd

// 0x421D40
namespace gamemd {
void sub_421D40()
{
  dbl_89A168 = 0.0174532925199433 * 60.0; /*0x421d4c*/
}
} // namespace gamemd

// 0x421D60
namespace gamemd {
void sub_421D60()
{
  dbl_89A138 = 0.0174532925199433 * 90.0; /*0x421d6c*/
}
} // namespace gamemd

// 0x421D80
namespace gamemd {
long long sub_421D80()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89A138 - dbl_89A168); /*0x421d92*/
  result = Math::RoundToInt(v0 * dbl_89A158 * 0.5); /*0x421da6*/
  Map_CellHeight = result; /*0x421dab*/
  return result; /*0x421db0*/
}
} // namespace gamemd

// 0x421DC0
namespace gamemd {
void sub_421DC0()
{
  dbl_89A170 = Math::ArcTan((double)Map_CellHeight * 0.00390625); /*0x421dd7*/
}
} // namespace gamemd

// 0x421DF0
namespace gamemd {
void sub_421DF0()
{
  dbl_89A188 = Math::ArcTan((double)(2 * Map_CellHeight) / dbl_89A158); /*0x421e12*/
}
} // namespace gamemd

// 0x421E20
namespace gamemd {
long long sub_421E20()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * Map_CellHeight) + 0.5); /*0x421e3b*/
  Map_MaxHeight = result; /*0x421e40*/
  return result; /*0x421e46*/
}
} // namespace gamemd

// 0x421E50
namespace gamemd {
int sub_421E50()
{
  dword_89A150 = 0; /*0x421e52*/
  return 0; /*0x421e5e*/
}
} // namespace gamemd

// 0x421E60
namespace gamemd {
int sub_421E60()
{
  Map_InvalidCoord_X = 0; /*0x421e62*/
  Map_InvalidCoord_Y = 0; /*0x421e67*/
  Map_InvalidCoord_Z = 0; /*0x421e6c*/
  return 0; /*0x421e71*/
}
} // namespace gamemd

// 0x421E80
namespace gamemd {
int sub_421E80()
{
  dword_89A1B0 = 0; /*0x421e85*/
  dword_89A1A8 = 128; /*0x421e8f*/
  dword_89A1AC = 128; /*0x421e94*/
  return 128; /*0x421e99*/
}
} // namespace gamemd

// 0x423920
namespace gamemd {
void nullsub_89()
{
  ; /*0x423920*/
}
} // namespace gamemd

// 0x426620
namespace gamemd {
void * E4Recv_426620::__4type_info_AAEAAV0_ABV0__Z(int a2)
{
  return this; /*0x426622*/
}
} // namespace gamemd

// 0x426650
namespace gamemd {
int sub_426650()
{
  dword_89A1C8 = 0; /*0x426652*/
  dword_89A1CC = 0; /*0x426657*/
  dword_89A1D0 = 0; /*0x42665c*/
  dword_89A1D4 = 0; /*0x426661*/
  return 0; /*0x426666*/
}
} // namespace gamemd

// 0x4266D0
namespace gamemd {
void E4Recv_4266D0::sub_4266D0()
{
  char v2; // al
  void (__thiscall ***v3)(unsigned int, int); // ecx

  v2 = *(unsigned char *)&this->M137; /*0x4266d6*/
  if ( v2 ) /*0x4266e4*/
  {
    (*(void (__thiscall **)(unsigned int))(**((unsigned int **)&this->q00C3) + 52))(this->q084); /*0x4266ee*/
    this->u32_89 = 0; /*0x4266f1*/
  }
  v3 = (void (__thiscall ***)(unsigned int, int))this->u32_E0C; /*0x4266f7*/
  this->q084 = 0; /*0x4266fd*/
  if ( v3 ) /*0x426705*/
  {
    (**v3)(v3, 1); /*0x42670b*/
    this->u32_E0C = 0; /*0x42670d*/
  }
  if ( this->qE10 ) /*0x426713*/
  {
    RA2_OPDEL(*(unsigned int *)&this->M3600); /*0x42671e*/
    this->qE10 = 0; /*0x426726*/
  }
  this->u32_88 = 0; /*0x42672c*/
}
} // namespace gamemd

// 0x426740
namespace gamemd {
int sub_426740()
{
  return 2816; /*0x426745*/
}
} // namespace gamemd

// 0x426990
namespace gamemd {
char E4Recv_426990::sub_426990()
{
  char result; // al
  int v2; // esi
  int v3; // edx
  unsigned short *i; // ecx

  if ( this->onBridge == 541478988 /*0x4269f7*/
    && this->location == 1296649793
    && this->isAliveFlag == 256
    && this->lastLayer <= 0xFFFFu
    && this->isInLogic <= 0x100u
    && this->alignmentPadding99 == 1280
    && this->q0A0 == 320
    && this->q288 == 200 )
  {
    result = 1; /*0x4269ff*/
    if ( this->q0A9 <= 1u /*0x426a17*/
      && this->q0AB == 1
      && !this->q0AA
      && !this->lineTrailer )
    {
      v2 = 0; /*0x426a23*/
      v3 = *(uint16_t *)(&this->attachedBomb6); /*0x426a25*/
      if ( !(unsigned short)v3 ) /*0x426a2e*/
        return result; /*0x426a2e*/
      for ( i = (unsigned short *)(&this->q3382); *i <= 0x100u; i += 3 ) /*0x426a30*/
      {
        if ( ++v2 >= v3 ) /*0x426a43*/
          return result; /*0x426a43*/
      }
    }
  }
  return 0; /*0x426a45*/
}
} // namespace gamemd

// 0x426A73
namespace gamemd {
struct Concurrency::details::VirtualProcessor * E4Recv_426A73::_UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ()
{
  return (struct Concurrency::details::VirtualProcessor *)this->q0A0; /*0x426a79*/
}
} // namespace gamemd

// 0x426E80
namespace gamemd {
int E4Recv_426E80::sub_426E80(int a2)
{
  int result; // eax
  int v3; // esi
  uint16_t *i; // edx
  int v5; // ecx

  if ( a2 >= this->q0CC ) /*0x426e8f*/
    return -1; /*0x426e8f*/
  result = 0; /*0x426e93*/
  v3 = *(uint16_t *)(&this->attachedBomb6); /*0x426e95*/
  if ( !(unsigned short)v3 ) /*0x426e9e*/
    return -1; /*0x426ec3*/
  for ( i = (uint16_t *)(&this->q3380); ; i += 3 ) /*0x426ea0*/
  {
    IDA_HIWORD(v5) = 0; /*0x426ea6*/
    if ( *i <= a2 ) /*0x426ead*/
    {
      IDA_LOWORD(v5) = *i; /*0x426ea8*/
      if ( v5 + i[1] > a2 ) /*0x426eb9*/
        break; /*0x426eb9*/
    }
    if ( ++result >= v3 ) /*0x426ec1*/
      return -1; /*0x426ec1*/
  }
  return result; /*0x426ec6*/
}
} // namespace gamemd

// 0x426FD0
namespace gamemd {
unsigned short E4Recv_426FD0::sub_426FD0(int a2)
{
  int v2; // ebx
  uint16_t result; // ax
  int v5; // esi
  int v6; // edx
  uint16_t *i; // ecx
  int v8; // eax
  int v9; // ecx
  uint16_t *v10; // ecx
  int v11; // ebx
  int v12; // edx

  v2 = a2; /*0x426fd1*/
  result = 0; /*0x426fda*/
  if ( a2 < this->q0CC ) /*0x426fe2*/
  {
    v5 = 0; /*0x426fe6*/
    v6 = *(uint16_t *)(&this->attachedBomb6); /*0x426fe8*/
    if ( (unsigned short)v6 ) /*0x426ff1*/
    {
      for ( i = (uint16_t *)(&this->q3380); ; i += 3 ) /*0x426ff3*/
      {
        IDA_HIWORD(v8) = 0; /*0x426ff9*/
        if ( *i <= a2 ) /*0x427000*/
        {
          IDA_LOWORD(v8) = *i; /*0x426ffb*/
          if ( v8 + i[1] > a2 ) /*0x42700c*/
            break; /*0x42700c*/
        }
        if ( ++v5 >= v6 ) /*0x427014*/
          return 0; /*0x427014*/
      }
      if ( v5 == -1 ) /*0x427022*/
        return 0; /*0x427022*/
      if ( this->parachute && this->u32_E18 != v5 ) /*0x427034*/
      {
        v9 = this->hasParachute; /*0x427036*/
        this->u32_E18 = v5; /*0x427041*/
        (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v9 + 40))(v9, (v5 << 16) + 2816, 0); /*0x427052*/
        (*(void (__thiscall **)(unsigned int, unsigned int, int))(**(unsigned int **)(&this->attachedTag2) + 36))( /*0x427083*/
          this->hasParachute,
          this->qE10,
          *(uint16_t *)(&this->vtable3 * (3 * v5 + 1032)) + 2 * *(uint16_t *)(&this->nextArrayIndex * v5 + 2062) + 8);
        v2 = a2; /*0x427086*/
      }
      v10 = (uint16_t *)(this->qE10 + 8); /*0x427095*/
      v11 = v2 - *(uint16_t *)(&this->nextArrayIndex * v5 + 2060); /*0x4270a0*/
      if ( v11 < 0 ) /*0x4270a2*/
        return 0; /*0x427016*/
      v12 = v11 + 1; /*0x4270a8*/
      do /*0x4270bc*/
      {
        result = *v10++; /*0x4270ad*/
        if ( result >= 2u ) /*0x4270b6*/
          result -= 2; /*0x4270b8*/
        --v12; /*0x4270bb*/
      }
      while ( v12 ); /*0x4270bc*/
    }
  }
  return result; /*0x427018*/
}
} // namespace gamemd

// 0x427320
namespace gamemd {
void sub_427320()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42732c*/
  dbl_89A1F8 = Math::Sqrt(v0 + v0); /*0x42733e*/
}
} // namespace gamemd

// 0x427350
namespace gamemd {
void sub_427350()
{
  dbl_89A248 = dbl_89A1F8 / 60.0; /*0x42735c*/
}
} // namespace gamemd

// 0x427370
namespace gamemd {
void sub_427370()
{
  dbl_89A230 = 1.0 / dbl_89A248; /*0x42737c*/
}
} // namespace gamemd

// 0x427390
namespace gamemd {
void sub_427390()
{
  dbl_89A228 = 0.0174532925199433 * 45.0; /*0x42739c*/
}
} // namespace gamemd

// 0x4273B0
namespace gamemd {
void sub_4273B0()
{
  dbl_89A200 = 0.0174532925199433 * 60.0; /*0x4273bc*/
}
} // namespace gamemd

// 0x4273D0
namespace gamemd {
void sub_4273D0()
{
  dbl_89A1D8 = 0.0174532925199433 * 90.0; /*0x4273dc*/
}
} // namespace gamemd

// 0x4273F0
namespace gamemd {
long long sub_4273F0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89A1D8 - dbl_89A200); /*0x427402*/
  result = Math::RoundToInt(v0 * dbl_89A1F8 * 0.5); /*0x427416*/
  dword_89A250 = result; /*0x42741b*/
  return result; /*0x427420*/
}
} // namespace gamemd

// 0x427430
namespace gamemd {
void sub_427430()
{
  dbl_89A208 = Math::ArcTan((double)dword_89A250 * 0.00390625); /*0x427447*/
}
} // namespace gamemd

// 0x427460
namespace gamemd {
void sub_427460()
{
  dbl_89A220 = Math::ArcTan((double)(2 * dword_89A250) / dbl_89A1F8); /*0x427482*/
}
} // namespace gamemd

// 0x427490
namespace gamemd {
long long sub_427490()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89A250) + 0.5); /*0x4274ab*/
  dword_89A244 = result; /*0x4274b0*/
  return result; /*0x4274b6*/
}
} // namespace gamemd

// 0x4274C0
namespace gamemd {
int sub_4274C0()
{
  word_89A1F0 = 0; /*0x4274c2*/
  word_89A1F2 = 0; /*0x4274c8*/
  return 0; /*0x4274ce*/
}
} // namespace gamemd

// 0x4274D0
namespace gamemd {
int sub_4274D0()
{
  dword_89A210 = 0; /*0x4274d2*/
  dword_89A214 = 0; /*0x4274d7*/
  dword_89A218 = 0; /*0x4274dc*/
  return 0; /*0x4274e1*/
}
} // namespace gamemd

// 0x4274F0
namespace gamemd {
int sub_4274F0()
{
  dword_89A240 = 0; /*0x4274f5*/
  dword_89A238 = 128; /*0x4274ff*/
  dword_89A23C = 128; /*0x427504*/
  return 128; /*0x427509*/
}
} // namespace gamemd

// 0x427510
namespace gamemd {
int sub_427510()
{
  dword_89A1E0 = 0; /*0x427512*/
  dword_89A1E4 = 0; /*0x427517*/
  dword_89A1E8 = 0; /*0x42751c*/
  dword_89A1EC = 0; /*0x427521*/
  return 0; /*0x427526*/
}
} // namespace gamemd

// 0x428FF0
namespace gamemd {
int sub_428FF0()
{
  dword_89A260 = 0; /*0x428ff2*/
  dword_89A264 = 0; /*0x428ff7*/
  dword_89A268 = 0; /*0x428ffc*/
  dword_89A26C = 0; /*0x429001*/
  return 0; /*0x429006*/
}
} // namespace gamemd

// 0x429010
namespace gamemd {
void sub_429010()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42901c*/
  dbl_89A278 = Math::Sqrt(v0 + v0); /*0x42902e*/
}
} // namespace gamemd

// 0x429040
namespace gamemd {
void sub_429040()
{
  dbl_89A2C8 = dbl_89A278 / 60.0; /*0x42904c*/
}
} // namespace gamemd

// 0x429060
namespace gamemd {
void sub_429060()
{
  dbl_89A2B0 = 1.0 / dbl_89A2C8; /*0x42906c*/
}
} // namespace gamemd

// 0x429080
namespace gamemd {
void sub_429080()
{
  dbl_89A2A8 = 0.0174532925199433 * 45.0; /*0x42908c*/
}
} // namespace gamemd

// 0x4290A0
namespace gamemd {
void sub_4290A0()
{
  dbl_89A280 = 0.0174532925199433 * 60.0; /*0x4290ac*/
}
} // namespace gamemd

// 0x4290C0
namespace gamemd {
void sub_4290C0()
{
  dbl_89A258 = 0.0174532925199433 * 90.0; /*0x4290cc*/
}
} // namespace gamemd

// 0x4290E0
namespace gamemd {
long long sub_4290E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89A258 - dbl_89A280); /*0x4290f2*/
  result = Math::RoundToInt(v0 * dbl_89A278 * 0.5); /*0x429106*/
  dword_89A2D0 = result; /*0x42910b*/
  return result; /*0x429110*/
}
} // namespace gamemd

// 0x429120
namespace gamemd {
void sub_429120()
{
  dbl_89A288 = Math::ArcTan((double)dword_89A2D0 * 0.00390625); /*0x429137*/
}
} // namespace gamemd

// 0x429150
namespace gamemd {
void sub_429150()
{
  dbl_89A2A0 = Math::ArcTan((double)(2 * dword_89A2D0) / dbl_89A278); /*0x429172*/
}
} // namespace gamemd

// 0x429180
namespace gamemd {
long long sub_429180()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89A2D0) + 0.5); /*0x42919b*/
  dword_89A2C4 = result; /*0x4291a0*/
  return result; /*0x4291a6*/
}
} // namespace gamemd

// 0x4291B0
namespace gamemd {
int sub_4291B0()
{
  word_89A270 = 0; /*0x4291b2*/
  word_89A272 = 0; /*0x4291b8*/
  return 0; /*0x4291be*/
}
} // namespace gamemd

// 0x4291C0
namespace gamemd {
int sub_4291C0()
{
  dword_89A290 = 0; /*0x4291c2*/
  dword_89A294 = 0; /*0x4291c7*/
  dword_89A298 = 0; /*0x4291cc*/
  return 0; /*0x4291d1*/
}
} // namespace gamemd

// 0x4291E0
namespace gamemd {
int sub_4291E0()
{
  dword_89A2C0 = 0; /*0x4291e5*/
  dword_89A2B8 = 128; /*0x4291ef*/
  dword_89A2BC = 128; /*0x4291f4*/
  return 128; /*0x4291f9*/
}
} // namespace gamemd

// 0x429200
namespace gamemd {
void sub_429200()
{
  punk.lpVtbl = (struct IUnknownVtbl *)&off_7E36D4; /*0x429200*/
}
} // namespace gamemd

// 0x429360
namespace gamemd {
int E4Recv_429360::sub_429360()
{
  int result; // eax

  if ( !a3 ) /*0x429369*/
    return -2147467261; /*0x42936d*/
  if ( !memcmp(a2, &unk_7E36C0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x42939a*/
  {
    *a3 = a1; /*0x4293cb*/
    (*(void (__stdcall **)(int))(*(unsigned int *)a1 + 4))(a1); /*0x4293d0*/
    return 0; /*0x4293d5*/
  }
  else
  {
    result = 0; /*0x4293aa*/
    if ( !memcmp(a2, &unk_7EA6E8, 0x10u) ) /*0x4293ac*/
      *a3 = &MapClass_Instance; /*0x4293b2*/
    else
      return -2147467262; /*0x4293be*/
  }
  return result; /*0x42936b*/
}
} // namespace gamemd

// 0x4293E0
namespace gamemd {
int sub_4293E0()
{
  return 1; /*0x4293e5*/
}
} // namespace gamemd

// 0x4293F0
namespace gamemd {
int sub_4293F0()
{
  return 1; /*0x4293f5*/
}
} // namespace gamemd

// 0x429400
namespace gamemd {
int E4Recv_429400::sub_429400()
{
  return (**a1)(a1, &unk_7E36C0, a2); /*0x429413*/
}
} // namespace gamemd

// 0x429420
namespace gamemd {
int E4Recv_429420::sub_429420()
{
  if ( !a2 ) /*0x429427*/
    return -2147467261; /*0x429429*/
  *a2 = SysAllocString(&psz); /*0x42943d*/
  return 0; /*0x42942e*/
}
} // namespace gamemd

// 0x429450
namespace gamemd {
int E4Recv_429450::sub_429450()
{
  if ( !a2 ) /*0x429457*/
    return -2147467261; /*0x429459*/
  *a2 = SysAllocString(aSun); /*0x42946d*/
  return 0; /*0x42945e*/
}
} // namespace gamemd

// 0x429480
namespace gamemd {
int E4Recv_429480::sub_429480()
{
  return (**a1)(a1, &unk_7E36C0, a2); /*0x429493*/
}
} // namespace gamemd

// 0x4294A0
namespace gamemd {
int sub_4294A0()
{
  return 0; /*0x4294a2*/
}
} // namespace gamemd

// 0x4294B0
namespace gamemd {
int E4Recv_4294B0::sub_4294B0()
{
  WCHAR WideCharStr[32]; // [esp+4h] [ebp-40h] BYREF

  if ( !a2 ) /*0x4294ba*/
    return -2147467261; /*0x4294bc*/
  MultiByteToWideChar(0, 1u, (LPCCH)g_ScenarioClass_Instance + 4700, -1, WideCharStr, 32); /*0x4294e2*/
  *a2 = SysAllocString(WideCharStr); /*0x4294f3*/
  return 0; /*0x4294c1*/
}
} // namespace gamemd

// 0x429500
namespace gamemd {
int E4Recv_429500::sub_429500()
{
  int v3; // edi
  unsigned int *v4; // esi

  if ( !a2 ) /*0x429507*/
    return -2147467261; /*0x429509*/
  v3 = *((unsigned int *)g_ScenarioClass_Instance + 391); /*0x429519*/
  if ( *((unsigned int *)g_ScenarioClass_Instance + 389) != -1 ) /*0x42952e*/
  {
    v4 = (char *)g_ScenarioClass_Instance + 1556; /*0x42951f*/
    v3 += Timer::GetTicks() - *v4; /*0x42953a*/
  }
  *a2 = v3; /*0x42953c*/
  return 0; /*0x42950e*/
}
} // namespace gamemd

// 0x429570
namespace gamemd {
int sub_429570()
{
  dword_89C268 = 0; /*0x429572*/
  dword_89C26C = 0; /*0x429577*/
  dword_89C270 = 0; /*0x42957c*/
  dword_89C274 = 0; /*0x429581*/
  return 0; /*0x429586*/
}
} // namespace gamemd

// 0x429590
namespace gamemd {
void sub_429590()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42959c*/
  dbl_89C280 = Math::Sqrt(v0 + v0); /*0x4295ae*/
}
} // namespace gamemd

// 0x4295C0
namespace gamemd {
void sub_4295C0()
{
  dbl_89C2D0 = dbl_89C280 / 60.0; /*0x4295cc*/
}
} // namespace gamemd

// 0x4295E0
namespace gamemd {
void sub_4295E0()
{
  dbl_89C2B8 = 1.0 / dbl_89C2D0; /*0x4295ec*/
}
} // namespace gamemd

// 0x429600
namespace gamemd {
void sub_429600()
{
  dbl_89C2B0 = 0.0174532925199433 * 45.0; /*0x42960c*/
}
} // namespace gamemd

// 0x429620
namespace gamemd {
void sub_429620()
{
  dbl_89C288 = 0.0174532925199433 * 60.0; /*0x42962c*/
}
} // namespace gamemd

// 0x429640
namespace gamemd {
void sub_429640()
{
  dbl_89A2F8 = 0.0174532925199433 * 90.0; /*0x42964c*/
}
} // namespace gamemd

// 0x429660
namespace gamemd {
long long sub_429660()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89A2F8 - dbl_89C288); /*0x429672*/
  result = Math::RoundToInt(v0 * dbl_89C280 * 0.5); /*0x429686*/
  dword_89C2D8 = result; /*0x42968b*/
  return result; /*0x429690*/
}
} // namespace gamemd

// 0x4296A0
namespace gamemd {
void sub_4296A0()
{
  dbl_89C290 = Math::ArcTan((double)dword_89C2D8 * 0.00390625); /*0x4296b7*/
}
} // namespace gamemd

// 0x4296D0
namespace gamemd {
void sub_4296D0()
{
  dbl_89C2A8 = Math::ArcTan((double)(2 * dword_89C2D8) / dbl_89C280); /*0x4296f2*/
}
} // namespace gamemd

// 0x429700
namespace gamemd {
long long sub_429700()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C2D8) + 0.5); /*0x42971b*/
  dword_89C2CC = result; /*0x429720*/
  return result; /*0x429726*/
}
} // namespace gamemd

// 0x429730
namespace gamemd {
int sub_429730()
{
  dword_89C278 = 0; /*0x429732*/
  return 0; /*0x42973e*/
}
} // namespace gamemd

// 0x429740
namespace gamemd {
int sub_429740()
{
  dword_89C298 = 0; /*0x429742*/
  dword_89C29C = 0; /*0x429747*/
  dword_89C2A0 = 0; /*0x42974c*/
  return 0; /*0x429751*/
}
} // namespace gamemd

// 0x429760
namespace gamemd {
int sub_429760()
{
  dword_89C2C8 = 0; /*0x429765*/
  dword_89C2C0 = 128; /*0x42976f*/
  dword_89C2C4 = 128; /*0x429774*/
  return 128; /*0x429779*/
}
} // namespace gamemd

// 0x42ABF0
namespace gamemd {
void nullsub_4()
{
  ; /*0x42abf0*/
}
} // namespace gamemd

// 0x42D830
namespace gamemd {
char E4Recv_42D830::sub_42D830(unsigned int * a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(unsigned int *)&this->M8; /*0x42d833*/
  if ( this->M16 >= v3 ) /*0x42d83b*/
  {
    if ( !*(unsigned char *)&this->M13 && v3 ) /*0x42d846*/
      return 0; /*0x42d846*/
    v4 = *(unsigned int *)&this->M20; /*0x42d848*/
    if ( v4 <= 0 || !(*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*&this->M8))(this, v3 + v4, 0) ) /*0x42d858*/
      return 0; /*0x42d85f*/
  }
  v6 = this->M16; /*0x42d865*/
  v7 = this->M4; /*0x42d868*/
  this->M16 = v6 + 1; /*0x42d86e*/
  *(unsigned int *)(v7 + 4 * v6) = *a2; /*0x42d878*/
  return 1; /*0x42d861*/
}
} // namespace gamemd

// 0x42E090
namespace gamemd {
int sub_42E090()
{
  dword_89C2E8 = 0; /*0x42e092*/
  dword_89C2EC = 0; /*0x42e097*/
  dword_89C2F0 = 0; /*0x42e09c*/
  dword_89C2F4 = 0; /*0x42e0a1*/
  return 0; /*0x42e0a6*/
}
} // namespace gamemd

// 0x42E430
namespace gamemd {
void sub_42E430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42e43c*/
  dbl_89C318 = Math::Sqrt(v0 + v0); /*0x42e44e*/
}
} // namespace gamemd

// 0x42E460
namespace gamemd {
void sub_42E460()
{
  dbl_89C368 = dbl_89C318 / 60.0; /*0x42e46c*/
}
} // namespace gamemd

// 0x42E480
namespace gamemd {
void sub_42E480()
{
  dbl_89C350 = 1.0 / dbl_89C368; /*0x42e48c*/
}
} // namespace gamemd

// 0x42E4A0
namespace gamemd {
void sub_42E4A0()
{
  dbl_89C348 = 0.0174532925199433 * 45.0; /*0x42e4ac*/
}
} // namespace gamemd

// 0x42E4C0
namespace gamemd {
void sub_42E4C0()
{
  dbl_89C320 = 0.0174532925199433 * 60.0; /*0x42e4cc*/
}
} // namespace gamemd

// 0x42E4E0
namespace gamemd {
void sub_42E4E0()
{
  dbl_89C2F8 = 0.0174532925199433 * 90.0; /*0x42e4ec*/
}
} // namespace gamemd

// 0x42E500
namespace gamemd {
long long sub_42E500()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C2F8 - dbl_89C320); /*0x42e512*/
  result = Math::RoundToInt(v0 * dbl_89C318 * 0.5); /*0x42e526*/
  dword_89C370 = result; /*0x42e52b*/
  return result; /*0x42e530*/
}
} // namespace gamemd

// 0x42E540
namespace gamemd {
void sub_42E540()
{
  dbl_89C328 = Math::ArcTan((double)dword_89C370 * 0.00390625); /*0x42e557*/
}
} // namespace gamemd

// 0x42E570
namespace gamemd {
void sub_42E570()
{
  dbl_89C340 = Math::ArcTan((double)(2 * dword_89C370) / dbl_89C318); /*0x42e592*/
}
} // namespace gamemd

// 0x42E5A0
namespace gamemd {
long long sub_42E5A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C370) + 0.5); /*0x42e5bb*/
  dword_89C364 = result; /*0x42e5c0*/
  return result; /*0x42e5c6*/
}
} // namespace gamemd

// 0x42E5D0
namespace gamemd {
int sub_42E5D0()
{
  dword_89C310 = 0; /*0x42e5d2*/
  return 0; /*0x42e5de*/
}
} // namespace gamemd

// 0x42E5E0
namespace gamemd {
int sub_42E5E0()
{
  dword_89C330 = 0; /*0x42e5e2*/
  dword_89C334 = 0; /*0x42e5e7*/
  dword_89C338 = 0; /*0x42e5ec*/
  return 0; /*0x42e5f1*/
}
} // namespace gamemd

// 0x42E600
namespace gamemd {
int sub_42E600()
{
  dword_89C360 = 0; /*0x42e605*/
  dword_89C358 = 128; /*0x42e60f*/
  dword_89C35C = 128; /*0x42e614*/
  return 128; /*0x42e619*/
}
} // namespace gamemd

// 0x42E620
namespace gamemd {
int sub_42E620()
{
  dword_89C300 = 0; /*0x42e622*/
  dword_89C304 = 0; /*0x42e627*/
  dword_89C308 = 0; /*0x42e62c*/
  dword_89C30C = 0; /*0x42e631*/
  return 0; /*0x42e636*/
}
} // namespace gamemd

// 0x42E6C0
namespace gamemd {
char sub_42E6C0(int a1)
{
  return 1; /*0x42e6c2*/
}
} // namespace gamemd

// 0x42E800
namespace gamemd {
char E4Recv_42E800::sub_42E800(int a2)
{
  return *(unsigned char *)(16 * a2 + this->M8 + 8); /*0x42e80e*/
}
} // namespace gamemd

// 0x42E990
namespace gamemd {
bool E4Recv_42E990::sub_42E990(unsigned int * a2)
{
  int v4; // esi
  int v5; // edi
  int v6; // edi
  unsigned short *v7; // eax
  unsigned char v9[4]; // [esp+10h] [ebp-4h] BYREF
  int i; // [esp+18h] [ebp+4h]

  if ( a2[135] != *(&this->vtable39) ) /*0x42e9a6*/
    return 0; /*0x42e9a6*/
  v4 = 0; /*0x42e9ab*/
  if ( (int)this->abstractFlags <= 0 ) /*0x42e9af*/
    return 0; /*0x42e9af*/
  v5 = 0; /*0x42e9b1*/
  for ( i = 0; ; i += 16 ) /*0x42e9b3*/
  {
    v6 = this->vtable3 + v5; /*0x42e9c0*/
    if ( *(unsigned int *)(a2[328] + 3576) == *(unsigned int *)v6 ) /*0x42e9ca*/
    {
      v7 = (unsigned short *)(*(int (__thiscall **)(unsigned int *, unsigned char *))(*a2 + 440))(a2, v9); /*0x42e9d6*/
      if ( *v7 == *(unsigned short *)(v6 + 4) && v7[1] == *(unsigned short *)(v6 + 6) ) /*0x42e9ed*/
        break; /*0x42e9ed*/
    }
    ++v4; /*0x42e9f6*/
    v5 = i + 16; /*0x42e9f7*/
    if ( v4 >= this->abstractFlags ) /*0x42ea00*/
      return 0; /*0x42ea00*/
  }
  return this->vtable3 + 16 * v4 != 0; /*0x42ea13*/
}
} // namespace gamemd

// 0x42EA30
namespace gamemd {
int E4Recv_42EA30::sub_42EA30(unsigned int * a2)
{
  int v4; // ebp
  int v5; // esi
  unsigned short *v6; // eax
  unsigned char v8[4]; // [esp+10h] [ebp-4h] BYREF
  int v9; // [esp+18h] [ebp+4h]

  if ( a2[135] != *(&this->vtable39) ) /*0x42ea44*/
    return 0; /*0x42ea44*/
  v4 = 0; /*0x42ea49*/
  v9 = 0; /*0x42ea4d*/
  if ( (int)this->abstractFlags <= 0 ) /*0x42ea51*/
    return 0; /*0x42eab7*/
  while ( 1 ) /*0x42ea62*/
  {
    v5 = this->vtable3 + v4; /*0x42ea62*/
    if ( *(unsigned int *)(a2[328] + 3576) == *(unsigned int *)v5 ) /*0x42ea6a*/
    {
      v6 = (unsigned short *)(*(int (__thiscall **)(unsigned int *, unsigned char *))(*a2 + 440))(a2, v8); /*0x42ea75*/
      if ( *v6 == *(unsigned short *)(v5 + 4) && v6[1] == *(unsigned short *)(v5 + 6) ) /*0x42ea8c*/
        break; /*0x42ea8c*/
    }
    v4 += 16; /*0x42ea96*/
    if ( ++v9 >= this->abstractFlags ) /*0x42ea9f*/
      return 0; /*0x42ea9f*/
  }
  return this->vtable3 + 16 * v9; /*0x42eaaa*/
}
} // namespace gamemd

// 0x42EAD0
namespace gamemd {
int E4Recv_42EAD0::sub_42EAD0(unsigned short * a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  unsigned short *i; // ecx

  v2 = this->abstractFlags; /*0x42ead0*/
  v3 = 0; /*0x42ead5*/
  if ( v2 <= 0 ) /*0x42eadb*/
    return 0; /*0x42eb0f*/
  v4 = this->vtable3; /*0x42eae1*/
  for ( i = (unsigned short *)(v4 + 4); *a2 != *i || a2[1] != i[1]; i += 8 ) /*0x42eae7*/
  {
    if ( ++v3 >= v2 ) /*0x42eaff*/
      return 0; /*0x42eaff*/
  }
  return v4 + 16 * v3; /*0x42eb08*/
}
} // namespace gamemd

// 0x42FF80
namespace gamemd {
int sub_42FF80()
{
  dword_89C380 = 0; /*0x42ff82*/
  dword_89C384 = 0; /*0x42ff87*/
  dword_89C388 = 0; /*0x42ff8c*/
  dword_89C38C = 0; /*0x42ff91*/
  return 0; /*0x42ff96*/
}
} // namespace gamemd

// 0x42FFA0
namespace gamemd {
void sub_42FFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x42ffac*/
  dbl_89C398 = Math::Sqrt(v0 + v0); /*0x42ffbe*/
}
} // namespace gamemd

// 0x42FFD0
namespace gamemd {
void sub_42FFD0()
{
  dbl_89C468 = dbl_89C398 / 60.0; /*0x42ffdc*/
}
} // namespace gamemd

// 0x42FFF0
namespace gamemd {
void sub_42FFF0()
{
  dbl_89C450 = 1.0 / dbl_89C468; /*0x42fffc*/
}
} // namespace gamemd
