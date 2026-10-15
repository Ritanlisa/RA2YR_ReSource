// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CrateClass_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/E4Recv_4B0DF0_e4.hpp"
#include "e4/classes/E4Recv_4B4E10_e4.hpp"
#include "e4/classes/E4Recv_4B53E0_e4.hpp"
#include "e4/classes/E4Recv_4B56E0_e4.hpp"
#include "e4/classes/E4Recv_4B5780_e4.hpp"
#include "e4/classes/E4Recv_4B5830_e4.hpp"
#include "e4/classes/E4Recv_4B69E0_e4.hpp"
#include "e4/classes/E4Recv_4B6AB0_e4.hpp"
#include "e4/classes/E4Recv_4B6B80_e4.hpp"
#include "e4/classes/E4Recv_4B6BE0_e4.hpp"
#include "e4/classes/E4Recv_4B6BF0_e4.hpp"
#include "e4/classes/E4Recv_4BAFE0_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/E4Recv_4A0380_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/E4Recv_492100_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/E4Recv_4AF2A0_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/Coord2D_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ListClass_e4.hpp"
#include "e4/classes/ControlClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/DriveLocomotionClass_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int sub_4B6AB0(int p0, int p1); }  // x4:signals@0x4b6ab0
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_4C2FC0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9); }  // x4:signals@0x4c2fc0
namespace gamemd { int sub_557380(int p0, int p1); }  // x4:signals@0x557380
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned int g_DDraw_Gray127;  // data: 0x8a0de8 truth(IDA G42.57w9)


// 0x4B0500
namespace gamemd {  // G42.18 ns repair
char JumpjetLocomotionClass_Process(int a1)
{
  DriveLocomotionClass *v1; // esi
  char *v2; // edi
  int v3; // eax
  int v4; // ecx
  FootClass *v5; // ecx
  AbstractClass *v6; // ecx
  int *v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  AbstractClass *movementDestination; // ecx
  FootClass *v12; // ecx
  AbstractClass *v13; // ebp
  unsigned short *v14; // eax
  FootClass *v15; // ecx
  FootClass *Owner; // ecx
  FootClass *v18; // ecx
  AnimClass *v19; // eax
  int *location; // ecx
  FootClass *v21; // ecx
  FootClass *v22; // eax
  FootClass *v23; // eax
  AbstractClass *v24; // ecx
  unsigned int *v25; // eax
  FootClass *v26; // ecx
  int v27; // ecx
  FootClass *v28; // eax
  char v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+10h] [ebp-10h] BYREF
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+18h] [ebp-8h]

  v1 = (gamemd::DriveLocomotionClass *)(a1);
  v2 = (char *)a1 - 4; /*0x4b0518*/
  v3 = *(uint8_t *)((*((int (**)(FootClass *))a1->Owner->vfptr + 111))(a1->Owner) + 284); /*0x4b0521*/
  v4 = v2->u32_1C; /*0x4b0523*/
  if ( v3 != v4 ) /*0x4b0528*/
  {
    v2->COMObject_20 = v4; /*0x4b052a*/
    v2->u32_1C = v3; /*0x4b0533*/
    Timer::Start((int)((Timer *)&v30), 3); /*0x4b0536*/
    v2->u32_24 = v30; /*0x4b0547*/
    *((unsigned int *)v2 + 10) = v31; /*0x4b054d*/
    *((unsigned int *)v2 + 11) = v32; /*0x4b0554*/
    *((unsigned int *)v2 + 12) = 3; /*0x4b0557*/
  }
  if ( v1->MovementSpeed[1] == -1 || !(*(((unsigned char *)&(v1->TrackIndex)) + (sizeof(v1->TrackIndex) - 1))) ) /*0x4b056a*/
  {
    movementDestination = (gamemd::AbstractClass *)(v1->Owner->movementDestination);
    if ( movementDestination /*0x4b06ad*/
      && (*((int (**)(AbstractClass *))movementDestination->vfptr + 11))(movementDestination) == 11
      && (v12 = v1->Owner,
          v13 = (unsigned int)(v12->movementDestination)+ 1,
          v14 = (unsigned short *)(*((int (**)(FootClass *, DriveLocomotionClass **))v12->vfptr + 110))(v12, &a1),
          *v14 == (*((unsigned short *)&(v13->vfptr))))
      && v14[1] == (*(((unsigned short *)&(v13->vfptr)) + 1)) )
    {
      v15 = (FootClass *)v2->u32_C; /*0x4b06af*/
      if ( !*&v15->q598 ) /*0x4b06b2*/
        goto LABEL_27; /*0x4b06b8*/
    }
    else
    {
      Owner = v1->Owner; /*0x4b06d5*/
      if ( Owner->currentMission != (void *)(5) /*0x4b0732*/
        || (*(((unsigned char *)&(v1->TrackIndex)) + (sizeof(v1->TrackIndex) - 1)))
        || v1->SlopeTimer[3] == g_DDraw_ClipRect && *(unsigned long long *)v1->Dest == qword_8A0794
        || Owner->location[0] != v1->SlopeTimer[3]
        || Owner->location[1] != v1->Dest[0]
        || Owner->location[2] != v1->Dest[1] )
      {
        if ( (uint8_t)((void *)((int)Owner->primaryFacing))->Active() ) /*0x4b077b*/
        {
          (((unsigned char *)&(v1->TrackIndex))[2]) = 1; /*0x4b0788*/
          goto LABEL_39; /*0x4b0788*/
        }
        if ( (((unsigned char *)&(v1->TrackIndex))[2]) ) /*0x4b0896*/
        {
          (((unsigned char *)&(v1->TrackIndex))[2]) = 0; /*0x4b089b*/
          (*((void (**)(FootClass *, unsigned int))v1->Owner->vfptr + 99))(v1->Owner, 0); /*0x4b08a4*/
          v22 = v1->Owner; /*0x4b08aa*/
          if ( !v22->isAliveFlag || v22->inLimbo || v22->isFallingDown ) /*0x4b08bd*/
            return 0; /*0x4b08ce*/
        }
        if ( (*((int (**)(FootClass *))v1->Owner->vfptr + 97))(v1->Owner) == 5 /*0x4b08fd*/
          && !(*(uint8_t (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1)
          || (*((int (**)(FootClass *))v1->Owner->vfptr + 97))(v1->Owner) == 16 )
        {
          goto LABEL_39; /*0x4b08fd*/
        }
        if ( !(*(uint8_t (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1) ) /*0x4b0906*/
        {
          v23 = v1->Owner; /*0x4b0911*/
          if ( v23->pathDirections[0] == -1 ) /*0x4b091b*/
          {
            if ( v23->isSinking ) /*0x4b0921*/
            {
              if ( *((unsigned int *)v2 + 16) != g_DDraw_ClipRect || *(unsigned long long *)(v2 + 68) != qword_8A0794 ) /*0x4b0940*/
              {
                v2->u32_40 = g_DDraw_ClipRect; /*0x4b094f*/
                *(unsigned long long *)(v2 + 68) = qword_8A0794; /*0x4b0957*/
                v2[99] = 0; /*0x4b0963*/
              }
              v1->SpeedAccum = 0; /*0x4b0966*/
              v1->MovementSpeed[0] = 0; /*0x4b0969*/
            }
            else
            {
              v24 = (gamemd::AbstractClass *)(v23->movementDestination);
              if ( v24 ) /*0x4b0979*/
              {
                v25 = (unsigned int *)(*((int (**)(AbstractClass *, int *, FootClass *))v24->vfptr + 19))( /*0x4b0987*/
                                  v24,
                                  &v30,
                                  v1->Owner);
                (*(void (__stdcall **)(DriveLocomotionClass *, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v1->0 + 68))( /*0x4b09a3*/
                  v1,
                  *v25,
                  v25[1],
                  v25[2]);
              }
            }
            goto LABEL_39; /*0x4b096c*/
          }
        }
        v26 = v1->Owner; /*0x4b09ab*/
        if ( v26->isInPlayfield /*0x4b09e2*/
          && (*((int (**)(FootClass *))v26->vfptr + 97))(v26) != 7
          && (*(uint8_t (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1)
          && !(*((uint8_t (**)(FootClass *, int *))v1->Owner->vfptr + 179))(
                v1->Owner,
                &v1->SlopeTimer[3]) )
        {
          if ( *(&v2->u32_40) != g_DDraw_ClipRect || *(unsigned long long *)(v2 + 68) != qword_8A0794 ) /*0x4b0a03*/
          {
            *((unsigned int *)v2 + 16) = g_DDraw_ClipRect; /*0x4b0a12*/
            *(unsigned long long *)(v2 + 68) = qword_8A0794; /*0x4b0a1a*/
            v2[99] = 0; /*0x4b0a26*/
          }
          v27 = *((unsigned int *)v2 + 3); /*0x4b0a29*/
          if ( *(unsigned int *)(v27 + 1432) ) /*0x4b0a2c*/
          {
            ((FootClass *)v27)->ClearPathIndex(); /*0x4b0a44*/
            if ( (*(uint8_t (**)(unsigned int, unsigned int, int))(**((unsigned int **)v2 + 3) + 1156))( /*0x4b0a51*/
                   v2->u32_C,
                   0,
                   1) )
            {
              return 0; /*0x4b0a68*/
            }
          }
          else
          {
            (*(void (**)(int, unsigned int, int))(*(unsigned int *)v27 + 1152))(v27, 0, 1); /*0x4b0a39*/
          }
          goto LABEL_39; /*0x4b0a3f*/
        }
        (*((unsigned char *)&(a1))) = 0; /*0x4b0a75*/
        JumpjetLocomotion::Update((int)&v1[-1].Piggybackee, &a1, 1, 0); /*0x4b0a79*/
        if ( (unsigned char)a1 ) /*0x4b0a82*/
          return 0; /*0x4b0a8d*/
        if ( !v1->Owner->isAliveFlag ) /*0x4b0a93*/
          return 0; /*0x4b0aa4*/
        v29 = 0; /*0x4b0aa7*/
        goto LABEL_87; /*0x4b0aa7*/
      }
      v15 = (FootClass *)v2->u32_C; /*0x4b0734*/
      if ( !*&v15->q598 ) /*0x4b073d*/
      {
  LABEL_27:
        (*((void (**)(FootClass *, unsigned int, int))v15->vfptr + 288))(v15, 0, 1); /*0x4b06be*/
        return 0; /*0x4b06d2*/
      }
    }
    (v15)->ClearPathIndex(); /*0x4b0756*/
    (*(void (**)(unsigned int, unsigned int, int))(**((unsigned int **)v2 + 3) + 1156))(*(&v2->u32_C), 0, 1); /*0x4b0763*/
    return 0; /*0x4b0772*/
  }
  if ( JumpjetLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, 0) || !v1->Owner->isAliveFlag ) /*0x4b0586*/
    return 0; /*0x4b058c*/
  if ( v1->MovementSpeed[1] == -1 /*0x4b05c4*/
    && ((*(uint8_t (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1)
     || v1->Owner->pathDirections[0] != -1)
    && ((*((int (**)(FootClass *))v1->Owner->vfptr + 11))(v1->Owner) != 1 || !(((unsigned char *)&(v1->Owner[1].uniqueId))[1])) )
  {
    v5 = v1->Owner; /*0x4b05d0*/
    (*((unsigned char *)&(a1))) = 0; /*0x4b05d3*/
    if ( (*((int (**)(FootClass *))v5->vfptr + 11))(v5) == 1 ) /*0x4b05df*/
    {
      v6 = v1->Owner->movementDestination; /*0x4b05e4*/
      if ( v6 ) /*0x4b05ec*/
      {
        if ( (*((int (**)(AbstractClass *))v6->vfptr + 11))(v6) == 15 ) /*0x4b05f6*/
        {
          v7 = (int *)(*((int (**)(AbstractClass *, int *, FootClass *))v1->Owner->movementDestination->vfptr /*0x4b060f*/
                       + 19))(
                        v1->Owner->movementDestination,
                        &v30,
                        v1->Owner);
          v8 = *v7; /*0x4b0611*/
          v9 = v7[1]; /*0x4b0615*/
          v10 = v7[2]; /*0x4b0618*/
          if ( v8 != v1->SlopeTimer[3] || v9 != v1->Dest[0] || v10 != v1->Dest[1] ) /*0x4b0625*/
            (*(void (__stdcall **)(DriveLocomotionClass *, int, int, int))(*(unsigned int *)v1->0 + 68))(v1, v8, v9, v10); /*0x4b0638*/
        }
      }
    }
    JumpjetLocomotion::Update((int)&v1[-1].Piggybackee, &a1, 1, 0); /*0x4b0647*/
    if ( (unsigned char)a1 || !v1->Owner->isAliveFlag ) /*0x4b0659*/
      return 0; /*0x4b065f*/
    v29 = 1; /*0x4b0665*/
  LABEL_87:
    JumpjetLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, v29); /*0x4b0aa8*/
    v28 = v1->Owner; /*0x4b0aaf*/
    if ( !v28 || !v28->isAliveFlag ) /*0x4b0ab6*/
      return 0; /*0x4b0ac5*/
  }
  LABEL_39:
  if ( (*(uint8_t (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)v1->0 + 128))(v1) ) /*0x4b078f*/
  {
    if ( !(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] % 10) ) /*0x4b07a8*/
    {
      v18 = v1->Owner; /*0x4b07ae*/
      if ( !v18->onBridge && *(unsigned int *)((*((int (**)(FootClass *))v18->vfptr + 111))(v18) + 236) == 2 ) /*0x4b07c8*/
      {
        if ( *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 148) ) /*0x4b07cf*/
        {
          v19 = (AnimClass *)operator new(0x1C8u); /*0x4b07dc*/
          if ( v19 ) /*0x4b07e6*/
          {
            location = v1->Owner->location; /*0x4b07ec*/
            v30 = *location; /*0x4b07fd*/
            v31 = location[1]; /*0x4b0804*/
            v32 = location[2]; /*0x4b0810*/
                        AnimClass::ctor( /*0x4b0823*/               v19,(int *)(*(void **)(*(unsigned int *)&g_RulesClass_Instance + 148)),               &v30,               0,               1,               (void *)0x600,               0,               0);
          }
        }
      }
    }
  }
  if ( v1->SlopeTimer[3] == g_DDraw_ClipRect /*0x4b0856*/
    && v1->Dest[0] == (unsigned int)qword_8A0794
    && *(unsigned long long *)&v1->Dest[1] == (((unsigned long)(unsigned int)((*(((unsigned int *)&(qword_8A0794)) + 1)))) | ((unsigned long)(unsigned int)(g_DDraw_ClipRect) << 32))
    && *(unsigned long long *)v1->HeadToCoord == qword_8A0794 )
  {
    v21 = v1->Owner; /*0x4b085d*/
    if ( v21->pathDirections[0] == -1 && *(double *)v21->currentSpeed_percentage > 0.0 ) /*0x4b087a*/
      (*((void (**)(FootClass *, unsigned int, unsigned int))v21->vfptr + 337))(v21, 0, 0); /*0x4b0880*/
  }
  return (*(char (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1); /*0x4b06cb*/
}
}  // G42.18 ns repair
// 0x4B69E0
namespace gamemd {
int E4Recv_4B69E0::sub_4B69E0(int a2)
{

  void *vtable1; // edx
  int v3; // esi
  int v4; // eax

  if ( this->M16 >= 5 ) /*0x4b69f1*/
    return 0; /*0x4b69f1*/
  vtable1 = dword_A8B230[376].vtable1; /*0x4b6a01*/
  if ( vtable1 ) /*0x4b6a09*/
  {
    v4 = 0; /*0x4b6a10*/
    if ( (int)vtable1 > 0 ) /*0x4b6a14*/
    {
      while ( *(unsigned int *)(dword_A8B230[375].referenceCount + 4 * v4) != a2 /*0x4b6a2c*/
           || *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v4) == -1 )
      {
        if ( ++v4 >= (int)vtable1 ) /*0x4b6a31*/
        {
          v3 = -1; /*0x4b6a33*/
          goto LABEL_11; /*0x4b6a36*/
        }
      }
      v3 = v4; /*0x4b6a3b*/
      if ( v4 == -1 /*0x4b6a53*/
        || *(dword_A8B230->u32_5E4.vtable3 + v4) < *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v4) )
      {
        goto LABEL_11; /*0x4b6a53*/
      }
      return 0; /*0x4b6a9a*/
    }
  }
  v3 = -1; /*0x4b6a0b*/
LABEL_11:
  *(&this->? + this->?++) = a2; /*0x4b6a55*/
  this->owningHouseIndex += (*(int (**)(int))(*(unsigned int *)a2 + 172))(a2); /*0x4b6a74*/
  if ( v3 != -1 ) /*0x4b6a77*/
    ++*(dword_A8B230->u32_5E4.vtable3 + v3); /*0x4b6a8b*/
  return 1; /*0x4b6a8d*/

}
}
// 0x4B6AB0
namespace gamemd {
int E4Recv_4B6AB0::sub_4B6AB0(int a2)
{

  int uniqueId; // eax
  void *vtable1; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // eax

  uniqueId = this->M16; /*0x4b6ab4*/
  if ( uniqueId <= 0 || a2 < 0 || a2 >= uniqueId ) /*0x4b6acd*/
    return 0; /*0x4b6b72*/
  vtable1 = dword_A8B230[376].vtable1; /*0x4b6adb*/
  if ( vtable1 ) /*0x4b6ae3*/
  {
    v5 = 0; /*0x4b6ae5*/
    if ( (int)vtable1 > 0 ) /*0x4b6ae9*/
    {
      while ( *(unsigned int *)(dword_A8B230[375].referenceCount + 4 * v5) != *(&this->? + a2) /*0x4b6b05*/
           || *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v5) == -1 )
      {
        if ( ++v5 >= (int)dword_A8B230[376].vtable1 ) /*0x4b6b10*/
          goto LABEL_12; /*0x4b6b10*/
      }
      if ( v5 != -1 ) /*0x4b6b17*/
        --*(dword_A8B230->u32_5E4.vtable3 + v5); /*0x4b6b22*/
    }
  }
LABEL_12:
  v6 = this->owningHouseIndex - (*(int (**)(unsigned int))(**((unsigned int **)&this->? + a2) + 172))(*(&this->? + a2)); /*0x4b6b24*/
  v7 = this->M16 - 1; /*0x4b6b3c*/
  this->owningHouseIndex = v6; /*0x4b6b3d*/
  v8 = a2; /*0x4b6b42*/
  if ( a2 < v7 ) /*0x4b6b44*/
  {
    v9 = &this->M40 + a2; /*0x4b6b46*/
    do /*0x4b6b57*/
    {
      ++v8; /*0x4b6b4b*/
      *v9 = v9[1]; /*0x4b6b4c*/
      ++v9; /*0x4b6b51*/
    }
    while ( v8 < this->M16 - 1 ); /*0x4b6b57*/
  }
  v10 = this->M16 - 1; /*0x4b6b5d*/
  this->M16 = v10; /*0x4b6b5f*/
  *(&this->M16 + v10) = 0; /*0x4b6b62*/
  return 1; /*0x4b6b6a*/

}
}
// 0x4B6BF0
namespace gamemd {
int E4Recv_4B6BF0::sub_4B6BF0()
{
  void *vtable1; // edx
  int result; // eax

  vtable1 = dword_A8B230[376].vfptr1; /*0x4b6bf9*/
  if ( !vtable1 ) /*0x4b6c01*/
    return -1; /*0x4b6c01*/
  result = 0; /*0x4b6c03*/
  if ( (int)vtable1 <= 0 ) /*0x4b6c07*/
    return -1; /*0x4b6c25*/
  while ( *(ObjectClass **)(dword_A8B230[375].referenceCount + 4 * result) != this /*0x4b6c1e*/
       || *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * result) == -1 )
  {
    if ( ++result >= (int)vtable1 ) /*0x4b6c23*/
      return -1; /*0x4b6c23*/
  }
  return result; /*0x4b6c28*/
}
}
// 0x4B9890
namespace gamemd {
CampaignScore * * DisplayBuildingInfoPanel(CampaignScore ** a1, unsigned int * a2, wchar_t * a3, char a4)
{
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  int *SHPFrame; // eax
  int *result; // eax
  const wchar_t *v15; // eax
  int AudioEntry; // eax
  char *v17; // ecx
  int BuildingAnimByName; // esi
  unsigned int *v19; // eax
  unsigned int *v20; // eax
  unsigned int *v21; // eax
  unsigned int *v22; // eax
  int v23; // [esp-10h] [ebp-174h]
  int v24; // [esp-Ch] [ebp-170h]
  int v25; // [esp-Ch] [ebp-170h]
  int v26; // [esp-8h] [ebp-16Ch]
  int v27; // [esp-8h] [ebp-16Ch]
  int v28; // [esp-8h] [ebp-16Ch]
  int v29; // [esp-4h] [ebp-168h]
  int v30; // [esp-4h] [ebp-168h]
  int v31; // [esp-4h] [ebp-168h]
  const wchar_t *v32; // [esp+0h] [ebp-164h]
  int v33; // [esp+0h] [ebp-164h]
  int v34; // [esp+0h] [ebp-164h]
  int v35; // [esp+4h] [ebp-160h]
  int v36; // [esp+4h] [ebp-160h]
  int v37; // [esp+8h] [ebp-15Ch]
  int v38; // [esp+10h] [ebp-154h] BYREF
  int v39; // [esp+14h] [ebp-150h] BYREF
  int v40; // [esp+18h] [ebp-14Ch] BYREF
  int v41; // [esp+1Ch] [ebp-148h] BYREF
  int v42; // [esp+20h] [ebp-144h] BYREF
  int v43; // [esp+24h] [ebp-140h] BYREF
  Coord2D v44; // [esp+28h] [ebp-13Ch] BYREF
  unsigned int v45[4]; // [esp+30h] [ebp-134h] BYREF
  unsigned int v46[4]; // [esp+40h] [ebp-124h] BYREF
  Rect v47; // [esp+50h] [ebp-114h] BYREF
  wchar_t v48[20]; // [esp+60h] [ebp-104h] BYREF
  wchar_t v49[4]; // [esp+88h] [ebp-DCh] BYREF
  char v50[72]; // [esp+90h] [ebp-D4h] BYREF
  wchar_t v51; // [esp+D8h] [ebp-8Ch] BYREF
  char v52[56]; // [esp+DCh] [ebp-88h] BYREF
  wchar_t Buffer[6]; // [esp+114h] [ebp-50h] BYREF
  char v54[68]; // [esp+120h] [ebp-44h] BYREF

  v45[0] = 450; /*0x4b98a8*/
  v6 = *a1; /*0x4b98ac*/
  v45[1] = 300; /*0x4b98b8*/
  v45[2] = 190; /*0x4b98be*/
  v45[3] = 80; /*0x4b98c2*/
  v7 = (*(int (**)(int *))(v6 + 128))(a1); /*0x4b98d2*/
  v8 = ((*((int (**)(ObjectClass *))g_DSurface_Hidden->vfptr + 32))(g_DSurface_Hidden) - v7) / 2; /*0x4b98e7*/
  v9 = (*(int (**)(int *))(*a1 + 124))(a1); /*0x4b98f2*/
  v10 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->vfptr + 31))(g_DSurface_Hidden); /*0x4b98f6*/
  v44.q004 = 300; /*0x4b9903*/
  v40 = (v10 - v9) / 2; /*0x4b9909*/
  *(unsigned int *)v44.__pad_000 = 450; /*0x4b9912*/
  v41 = v8; /*0x4b992b*/
  v11 = Coord2D::Add(&v44, &v42, &v40); /*0x4b992f*/
  v12 = Rect::Construct(&v47, v11, 190, 80); /*0x4b9939*/
  v46[0] = *v12; /*0x4b9942*/
  v46[1] = v12->Y; /*0x4b994b*/
  v46[2] = v12->Width; /*0x4b9958*/
  v46[3] = v12->Height; /*0x4b9963*/
  v38 = 0; /*0x4b9967*/
  v39 = 0; /*0x4b996b*/
  SHPFrame = (int *)BuildingClass::GetSHPFrame(a2, 0); /*0x4b996f*/
  result = (int *)BlitterDrawSHP((int *)g_DSurface_Hidden, (int)a2, a1, v45, &v38, v46, 0, SHPFrame, 0, 0, 1000, 0, 0); /*0x4b998e*/
  if ( a3 ) /*0x4b999c*/
  {
    swprintf(Buffer, (const size_t)&stru_820320.MiddleFrameHeight, (const wchar_t *const)&a3->customSound); /*0x4b99b3*/
    if ( a4 ) /*0x4b99c4*/
    {
      v15 = (const wchar_t *)(*((int (**)(TechnoClass *))a3->vfptr + 43))(a3); /*0x4b99ca*/
      swprintf(v48, (const size_t)&stru_820320.VoxelCaches[17], v15); /*0x4b99db*/
    }
    else
    {
      swprintf(v48, (const size_t)&stru_820320.VoxelCaches[12], v32); /*0x4b99ef*/
    }
    if ( *(unsigned int *)TechnoClass::GetAudioEntry(a3, 0) ) /*0x4b99ff*/
    {
      AudioEntry = TechnoClass::GetAudioEntry(a3, 0); /*0x4b9a06*/
      swprintf(v49, (const size_t)&stru_820320.VoxelCaches[5], (const wchar_t *const)(*(unsigned int *)AudioEntry + 100)); /*0x4b9a1e*/
    }
    else
    {
      swprintf(v49, (const size_t)&stru_820320.HasRadialIndicator, v32); /*0x4b9a35*/
    }
    swprintf(&v51, (const size_t)&stru_820320.AlphaImageFile[17], (&off_7E5210)[a3->location[0]]); /*0x4b9a58*/
    v17 = &stru_820320.AlphaImageFile[9]; /*0x4b9a6e*/
    if ( !a4 ) /*0x4b9a73*/
      v17 = &stru_820320.AlphaImageFile[5]; /*0x4b9a75*/
    BuildingAnimByName = FindBuildingAnimByName(v17, 1); /*0x4b9a87*/
    v39 = v41 + 300; /*0x4b9a97*/
    v38 = v40 + 450; /*0x4b9aa8*/
    v19 = (unsigned int *)(*((int (**)(ObjectClass *, Rect *, int *, int, unsigned int))g_DSurface_Hidden->vfptr + 30))( /*0x4b9ab3*/
                      g_DSurface_Hidden,
                      &v47,
                      &v38,
                      BuildingAnimByName,
                      0);
    TextRenderer::DrawText(&v44.q004, (size_t)v54, (int)g_DSurface_Hidden, v19, 70, (int)v32, v35, v37); /*0x4b9aca*/
    v42 = *(unsigned int *)v44.__pad_000 + 315; /*0x4b9ae0*/
    v41 = v43 + 450; /*0x4b9af8*/
    v20 = (unsigned int *)(*((int (**)(ObjectClass *, int *, int *, int, unsigned int, int))g_DSurface_Hidden->vfptr + 30))( /*0x4b9b03*/
                      g_DSurface_Hidden,
                      &v47.Height,
                      &v41,
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText((int *)v44.__pad_000, (size_t)v50, (int)g_DSurface_Hidden, v20, v26, v29, v33, v36); /*0x4b9b1a*/
    v41 = v43 + 330; /*0x4b9b30*/
    v40 = v42 + 450; /*0x4b9b48*/
    v21 = (unsigned int *)(*((int (**)(ObjectClass *, int *, int *, int, unsigned int, int))g_DSurface_Hidden->vfptr + 30))( /*0x4b9b53*/
                      g_DSurface_Hidden,
                      &v47.Width,
                      &v40,
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText(&v43, (size_t)v52, (int)g_DSurface_Hidden, v21, v24, v27, v30, v34); /*0x4b9b6a*/
    v40 = v42 + 345; /*0x4b9b87*/
    v39 = v41 + 450; /*0x4b9b98*/
    v22 = (unsigned int *)(*((int (**)(ObjectClass *, int *, int *, int, unsigned int, int))g_DSurface_Hidden->vfptr + 30))( /*0x4b9ba3*/
                      g_DSurface_Hidden,
                      &v47.Y,
                      &v39,
                      BuildingAnimByName,
                      0,
                      70);
    return TextRenderer::DrawText(&v42, (size_t)v48, (int)g_DSurface_Hidden, v22, v23, v25, v28, v31); /*0x4b9bb7*/
  }
  return result; /*0x4b9bbf*/
}
}
// 0x4BE9D0
namespace gamemd {
int Color_BlendPack(unsigned char * a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  bool v9; // cc

  v4 = a2 + *a1; /*0x4be9dc*/
  v5 = a3 + a1[1]; /*0x4be9ec*/
  v6 = a4 + a1[2]; /*0x4be9ee*/
  v7 = 0; /*0x4be9f0*/
  v8 = 0; /*0x4be9f2*/
  if ( v4 >= 255 ) /*0x4be9fa*/
  {
    v8 = 1; /*0x4be9fc*/
    v7 = v4 - 255; /*0x4bea01*/
  }
  if ( v5 >= 255 ) /*0x4bea0d*/
  {
    ++v8; /*0x4bea0f*/
    v7 = v7 + v5 - 255; /*0x4bea10*/
  }
  if ( v6 >= 255 ) /*0x4bea1c*/
  {
    ++v8; /*0x4bea1e*/
    v7 = v7 + v6 - 255; /*0x4bea1f*/
  }
  if ( !v8 || v8 >= 3 ) /*0x4bea2d*/
    goto LABEL_17; /*0x4bea2d*/
  if ( v8 == 1 ) /*0x4bea32*/
    v7 >>= 1; /*0x4bea34*/
  if ( v4 < 255 ) /*0x4bea3c*/
    v4 += v7; /*0x4bea3e*/
  if ( v5 < 255 ) /*0x4bea46*/
    v5 += v7; /*0x4bea48*/
  v9 = v6 <= 255; /*0x4bea4a*/
  if ( v6 < 255 ) /*0x4bea4f*/
  {
    v6 += v7; /*0x4bea51*/
  LABEL_17:
    v9 = v6 <= 255; /*0x4bea53*/
  }
  if ( !v9 ) /*0x4bea58*/
    v6 = 255; /*0x4bea5a*/
  if ( v5 > 255 ) /*0x4bea65*/
    v5 = 255; /*0x4bea67*/
  if ( v4 > 255 ) /*0x4bea72*/
    v4 = 255; /*0x4bea74*/
  return (v4 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bea7f*/
       | (v5 >> g_BitMask_Blue << g_BitMask_Green)
       | (v6 >> g_BitMask_Red << g_BitShift_Blue);
}
}
// 0x4B0DF0
namespace gamemd {
char E4Recv_4B0DF0::sub_4B0DF0(unsigned int *a2, unsigned int *aP1, int a4, int aP4, int aP5, int aP6, int aP7, int a9, int a10, int a11)
{

  int v2; // eax
  int *v4; // edi
  int v5; // eax
  int v6; // eax
  CellClass *v7; // eax
  void *vtable3; // [esp-4h] [ebp-10h]

  v2 = g_DDraw_ClipRect; /*0x4b0df1*/
  v4 = &aP1->ambientSoundController[1]; /*0x4b0dfd*/
  if ( aP1->ambientSoundController[1] != g_DDraw_ClipRect /*0x4b0e0f*/
    || *(unsigned long long *)&aP1->ambientSoundController[2] != qword_8A0794 )
  {
    *v4 = g_DDraw_ClipRect; /*0x4b0e20*/
    aP1->ambientSoundController[2] = qword_8A0794; /*0x4b0e28*/
    v5 = HIDWORD(qword_8A0794); /*0x4b0e2b*/
    HIBYTE(aP1->customSound_controller[4]) = 0; /*0x4b0e30*/
    aP1->ambientSoundController[3] = v5; /*0x4b0e34*/
    v2 = g_DDraw_ClipRect; /*0x4b0e37*/
  }
  if ( *aP1 != v2 || *(unsigned long long *)(aP1 + 1) != qword_8A0794 ) /*0x4b0e50*/
  {
    *v4 = *aP1; /*0x4b0e65*/
    aP1->ambientSoundController[2] = aP1[1]; /*0x4b0e6a*/
    v6 = aP1[2]; /*0x4b0e6d*/
    HIBYTE(aP1->customSound_controller[4]) = 1; /*0x4b0e70*/
    aP1->ambientSoundController[3] = v6; /*0x4b0e74*/
    vtable3 = aP1->?; /*0x4b0e7a*/
    v7 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, aP1); /*0x4b0e81*/
    if ( (unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v7, (int)vtable3) && !*((unsigned char *)aP1->? + 129) ) /*0x4b0e94*/
    {
      JumpjetLocomotion::MoveTo((int)aP1, aP1, 1); /*0x4b0ea3*/
      return 1; /*0x4b0ead*/
    }
    if ( *((unsigned char *)aP1->? + 144) ) /*0x4b0eb3*/
    {
      *v4 = g_DDraw_ClipRect; /*0x4b0ec3*/
      *(unsigned long long *)&aP1->ambientSoundController[2] = qword_8A0794; /*0x4b0ecb*/
      HIBYTE(aP1->customSound_controller[4]) = 0; /*0x4b0ed6*/
    }
  }
  return 0; /*0x4b0ea8*/

}
} // namespace gamemd

// 0x4B4770
namespace gamemd {
void nullsub_118()
{
  ; /*0x4b4770*/
}
} // namespace gamemd

// 0x4B4DF0
namespace gamemd {
int sub_4B4DF0()
{
  dword_8A07D8 = 0; /*0x4b4df2*/
  dword_8A07DC = 0; /*0x4b4df7*/
  dword_8A07E0 = 0; /*0x4b4dfc*/
  dword_8A07E4 = 0; /*0x4b4e01*/
  return 0; /*0x4b4e06*/
}
} // namespace gamemd

// 0x4B4E10
namespace gamemd {
DropListClass * E4Recv_4B4E10::sub_4B4E10(DropListClass * aP1, wchar_t * String, int a4, DropListClass * aP4, ControlClass * aP5, ControlClass * aP6, ControlClass * aP7, int a9, ListClass * a10, int a11)
{

  int Instance; // eax
  int v13; // edx

  sub_4C2FC0((EditClass *)this, aP1, String, a4, aP4, aP5, aP6, aP7, 18, 7); /*0x4b4e3f*/
  LOBYTE(this->M72) = 0; /*0x4b4e62*/
  this->M76 = a9; /*0x4b4e66*/
  ShapeButtonClass::Constructor(&this->q050, 0, a11, aP7 + aP5, aP6, 0, 0, 0); /*0x4b4e69*/
  ListClass::Construct((int)&this->u32_2C0, 0, aP5, aP6 + *(__int16 *)(a11 + 4), aP7 + *(__int16 *)(a11 + 2), a9, aP4, a10, a11); /*0x4b4ea3*/
  /* X11: vtable install elided (implicit via DropListClass virtuals 0x4b4eac) */
  Instance = TextRenderer::GetInstance(); /*0x4b4eb2*/
  v13 = this->M176; /*0x4b4eba*/
  this->M24 = *(unsigned int *)(Instance + 28) + 1; /*0x4b4ebf*/
  (*(void (**)(char *, DropListClass *))(v13 + 132))(&this->M176, this); /*0x4b4ec4*/
  (*(void (**)(int *, DropListClass *))(this->DropListClass_field_0x50 + 132))( /*0x4b4ecf*/
    &this->DropListClass_field_0x50,
    this);
  return (int)this->__pad_0; /*0x4b4ed7*/

}
} // namespace gamemd

// 0x4B53E0
namespace gamemd {
int E4Recv_4B53E0::sub_4B53E0(int a2)
{
  int v3; // eax

  ControlClass::CtorFromData(a2); /*0x4b53eb*/
  this->M44 = *(EditClass *)(a2 + 44); /*0x4b53f6*/
  this->M48 = *(EditClass *)(a2 + 48); /*0x4b53fc*/
  this->u32_34 = *(EditClass *)(a2 + 52); /*0x4b5402*/
  this->M56 = *(EditClass *)(a2 + 56); /*0x4b5408*/
  this->M60 = *(EditClass *)(a2 + 60); /*0x4b540e*/
  this->u32_40 = *(EditClass *)(a2 + 64); /*0x4b5414*/
  this->u32_44 = *(EditClass *)(a2 + 68); /*0x4b541a*/
  *this = (EditClass)&vt_EditClass; /*0x4b541d*/
  this->u32_48 = *(unsigned char *)(a2 + 72); /*0x4b5429*/
  this->M76 = *(EditClass *)(a2 + 76); /*0x4b5432*/
  ControlClass::CtorFromData(&this->u32_14, a2 + 80); /*0x4b5435*/
  this->M124 = *(unsigned char *)(a2 + 124); /*0x4b5443*/
  this->M125 = *(unsigned char *)(a2 + 125); /*0x4b5449*/
  this->M80 = *(EditClass *)(a2 + 128); /*0x4b544f*/
  this->u32_50 = &vt_ToggleClass; /*0x4b5452*/
  this->u32_84 = *(unsigned char *)(a2 + 132); /*0x4b545c*/
  this->M136 = *(EditClass *)(a2 + 136); /*0x4b5462*/
  this->M140 = *(EditClass *)(a2 + 140); /*0x4b5468*/
  this->M144 = *(unsigned char *)(a2 + 144); /*0x4b546e*/
  this->M148 = *(EditClass *)(a2 + 148); /*0x4b5474*/
  this->M152 = *(EditClass *)(a2 + 152); /*0x4b547a*/
  this->M156 = *(unsigned char *)(a2 + 156); /*0x4b5480*/
  this->M160 = *(EditClass *)(a2 + 160); /*0x4b5486*/
  this->M164 = *(unsigned char *)(a2 + 164); /*0x4b548c*/
  this->M165 = *(unsigned char *)(a2 + 165); /*0x4b5492*/
  this->M168 = *(EditClass *)(a2 + 168); /*0x4b5498*/
  this->M172 = *(unsigned char *)(a2 + 172); /*0x4b54a4*/
  this->u32_50 = &vt_ShapeButtonClass; /*0x4b54a9*/
  sub_557380((int)&this->M176, a2 + 176); /*0x4b54af*/
  v3 = this->M176; /*0x4b54b4*/
  *this = (EditClass)&vt_DropListClass; /*0x4b54b9*/
  (*(void (**)(EditClass *, EditClass *))(v3 + 132))(&this->M176, this); /*0x4b54bf*/
  (*(void (**)(EditClass *, EditClass *))(this->u32_50 + 132))(&this->u32_14, this); /*0x4b54ca*/
  return (int)this; /*0x4b54d3*/
}
} // namespace gamemd

// 0x4B56E0
namespace gamemd {
int E4Recv_4B56E0::sub_4B56E0(int a2)
{
  LinkedList::MoveNode((void *)a2); /*0x4b56e9*/
  this->M12 = *(unsigned int *)(a2 + 12); /*0x4b56f1*/
  this->M16 = *(unsigned int *)(a2 + 16); /*0x4b56f7*/
  this->M20 = *(unsigned int *)(a2 + 20); /*0x4b56fd*/
  this->u32_18 = *(unsigned int *)(a2 + 24); /*0x4b5703*/
  this->M28 = *(unsigned char *)(a2 + 28); /*0x4b5709*/
  this->M29 = *(unsigned char *)(a2 + 29); /*0x4b570f*/
  this->M30 = *(unsigned char *)(a2 + 30); /*0x4b5715*/
  this->M80 = *(unsigned int *)(a2 + 32); /*0x4b571b*/
  this->M24 = *(unsigned int *)(a2 + 36); /*0x4b5721*/
  this->u32_28 = *(unsigned int *)(a2 + 40); /*0x4b5727*/
  this->M44 = *(unsigned char *)(a2 + 44); /*0x4b572d*/
  this->M45 = *(unsigned char *)(a2 + 45); /*0x4b5733*/
  this->M46 = *(unsigned char *)(a2 + 46); /*0x4b5739*/
  this->M12 = *(unsigned int *)(a2 + 48); /*0x4b573f*/
  this->u32_34 = *(unsigned int *)(a2 + 52); /*0x4b5745*/
  this->M56 = *(unsigned int *)(a2 + 56); /*0x4b574b*/
  this->M60 = *(unsigned int *)(a2 + 60); /*0x4b5751*/
  this->M40 = *(unsigned int *)(a2 + 64); /*0x4b5757*/
  this->u32_44 = *(unsigned char *)(a2 + 68); /*0x4b575d*/
  this->M48 = *(unsigned int *)(a2 + 72); /*0x4b5763*/
  this->M76 = *(unsigned int *)(a2 + 76); /*0x4b5769*/
  this->M20 = *(unsigned int *)(a2 + 80); /*0x4b576f*/
  return this; /*0x4b5774*/
}
} // namespace gamemd

// 0x4B5780
namespace gamemd {
int E4Recv_4B5780::sub_4B5780(int a2)
{
  LinkedList::MoveNode((void *)a2); /*0x4b5789*/
  this->M12 = *(unsigned int *)(a2 + 12); /*0x4b5791*/
  this->M16 = *(unsigned int *)(a2 + 16); /*0x4b5797*/
  this->M20 = *(unsigned int *)(a2 + 20); /*0x4b579d*/
  this->u32_18 = *(unsigned int *)(a2 + 24); /*0x4b57a3*/
  this->M28 = *(unsigned char *)(a2 + 28); /*0x4b57a9*/
  this->M29 = *(unsigned char *)(a2 + 29); /*0x4b57af*/
  this->M30 = *(unsigned char *)(a2 + 30); /*0x4b57b5*/
  this->u32_20 = *(unsigned int *)(a2 + 32); /*0x4b57bb*/
  return this; /*0x4b57c0*/
}
} // namespace gamemd

// 0x4B5830
namespace gamemd {
unsigned int * E4Recv_4B5830::sub_4B5830(unsigned int * a2)
{

  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectClass *)a2 ) /*0x4b583a*/
    return &this->AbstractClass; /*0x4b583a*/
  (*((void (**)(ObjectClass *))this->AbstractClass + 3))(this); /*0x4b583e*/
  v3 = (void *)a2[2]; /*0x4b5841*/
  this->M8 = v3; /*0x4b5846*/
  if ( !v3 ) /*0x4b5849*/
  {
    this->M4 = 0; /*0x4b588a*/
    BYTE1(this->M13) = 0; /*0x4b5891*/
    return &this->AbstractClass; /*0x4b5895*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (unsigned int)v3); /*0x4b5853*/
  this->M4 = v4; /*0x4b585b*/
  if ( !v4 ) /*0x4b5860*/
    return &this->AbstractClass; /*0x4b5860*/
  vtable2 = this->M8; /*0x4b5862*/
  v6 = 0; /*0x4b5865*/
  BYTE1(this->M13) = 1; /*0x4b5869*/
  if ( (int)vtable2 <= 0 ) /*0x4b586d*/
    return &this->AbstractClass; /*0x4b586d*/
  do /*0x4b5881*/
  {
    *((unsigned int *)this->M4 + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x4b5878*/
    ++v6; /*0x4b587e*/
  }
  while ( v6 < (int)this->M8 ); /*0x4b5881*/
  return &this->AbstractClass; /*0x4b5885*/

}
} // namespace gamemd

// 0x4B58A0
namespace gamemd {
void sub_4B58A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4b58ac*/
  dbl_8A0808 = Math::Sqrt(v0 + v0); /*0x4b58be*/
}
} // namespace gamemd

// 0x4B58D0
namespace gamemd {
void sub_4B58D0()
{
  dbl_8A0858 = dbl_8A0808 / 60.0; /*0x4b58dc*/
}
} // namespace gamemd

// 0x4B58F0
namespace gamemd {
void sub_4B58F0()
{
  dbl_8A0840 = 1.0 / dbl_8A0858; /*0x4b58fc*/
}
} // namespace gamemd

// 0x4B5910
namespace gamemd {
void sub_4B5910()
{
  dbl_8A0838 = 0.0174532925199433 * 45.0; /*0x4b591c*/
}
} // namespace gamemd

// 0x4B5930
namespace gamemd {
void sub_4B5930()
{
  dbl_8A0810 = 0.0174532925199433 * 60.0; /*0x4b593c*/
}
} // namespace gamemd

// 0x4B5950
namespace gamemd {
void sub_4B5950()
{
  dbl_8A07E8 = 0.0174532925199433 * 90.0; /*0x4b595c*/
}
} // namespace gamemd

// 0x4B5970
namespace gamemd {
long long sub_4B5970()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A07E8 - dbl_8A0810); /*0x4b5982*/
  result = Math::RoundToInt(v0 * dbl_8A0808 * 0.5); /*0x4b5996*/
  dword_8A0860 = result; /*0x4b599b*/
  return result; /*0x4b59a0*/
}
} // namespace gamemd

// 0x4B59B0
namespace gamemd {
void sub_4B59B0()
{
  dbl_8A0818 = Math::ArcTan((double)dword_8A0860 * 0.00390625); /*0x4b59c7*/
}
} // namespace gamemd

// 0x4B59E0
namespace gamemd {
void sub_4B59E0()
{
  dbl_8A0830 = Math::ArcTan((double)(2 * dword_8A0860) / dbl_8A0808); /*0x4b5a02*/
}
} // namespace gamemd

// 0x4B5A10
namespace gamemd {
long long sub_4B5A10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0860) + 0.5); /*0x4b5a2b*/
  dword_8A0854 = result; /*0x4b5a30*/
  return result; /*0x4b5a36*/
}
} // namespace gamemd

// 0x4B5A40
namespace gamemd {
int sub_4B5A40()
{
  word_8A0800 = 0; /*0x4b5a42*/
  word_8A0802 = 0; /*0x4b5a48*/
  return 0; /*0x4b5a4e*/
}
} // namespace gamemd

// 0x4B5A50
namespace gamemd {
int sub_4B5A50()
{
  dword_8A0820 = 0; /*0x4b5a52*/
  dword_8A0824 = 0; /*0x4b5a57*/
  dword_8A0828 = 0; /*0x4b5a5c*/
  return 0; /*0x4b5a61*/
}
} // namespace gamemd

// 0x4B5A70
namespace gamemd {
int sub_4B5A70()
{
  dword_8A0850 = 0; /*0x4b5a75*/
  dword_8A0848 = 128; /*0x4b5a7f*/
  dword_8A084C = 128; /*0x4b5a84*/
  return 128; /*0x4b5a89*/
}
} // namespace gamemd

// 0x4B5A90
namespace gamemd {
int sub_4B5A90()
{
  dword_8A07F0 = 0; /*0x4b5a92*/
  dword_8A07F4 = 0; /*0x4b5a97*/
  dword_8A07F8 = 0; /*0x4b5a9c*/
  dword_8A07FC = 0; /*0x4b5aa1*/
  return 0; /*0x4b5aa6*/
}
} // namespace gamemd

// 0x4B67A0
namespace gamemd {
void sub_4B67A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4b67ac*/
  dbl_8A08A8 = Math::Sqrt(v0 + v0); /*0x4b67be*/
}
} // namespace gamemd

// 0x4B67D0
namespace gamemd {
void sub_4B67D0()
{
  dbl_8A0918 = dbl_8A08A8 / 60.0; /*0x4b67dc*/
}
} // namespace gamemd

// 0x4B67F0
namespace gamemd {
void sub_4B67F0()
{
  dbl_8A0900 = 1.0 / dbl_8A0918; /*0x4b67fc*/
}
} // namespace gamemd

// 0x4B6810
namespace gamemd {
void sub_4B6810()
{
  dbl_8A08F8 = 0.0174532925199433 * 45.0; /*0x4b681c*/
}
} // namespace gamemd

// 0x4B6830
namespace gamemd {
void sub_4B6830()
{
  dbl_8A08B0 = 0.0174532925199433 * 60.0; /*0x4b683c*/
}
} // namespace gamemd

// 0x4B6850
namespace gamemd {
void sub_4B6850()
{
  dbl_8A0868 = 0.0174532925199433 * 90.0; /*0x4b685c*/
}
} // namespace gamemd

// 0x4B6870
namespace gamemd {
long long sub_4B6870()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A0868 - dbl_8A08B0); /*0x4b6882*/
  result = Math::RoundToInt(v0 * dbl_8A08A8 * 0.5); /*0x4b6896*/
  dword_8A0920 = result; /*0x4b689b*/
  return result; /*0x4b68a0*/
}
} // namespace gamemd

// 0x4B68B0
namespace gamemd {
void sub_4B68B0()
{
  dbl_8A08B8 = Math::ArcTan((double)dword_8A0920 * 0.00390625); /*0x4b68c7*/
}
} // namespace gamemd

// 0x4B68E0
namespace gamemd {
void sub_4B68E0()
{
  dbl_8A08F0 = Math::ArcTan((double)(2 * dword_8A0920) / dbl_8A08A8); /*0x4b6902*/
}
} // namespace gamemd

// 0x4B6910
namespace gamemd {
long long sub_4B6910()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0920) + 0.5); /*0x4b692b*/
  dword_8A0914 = result; /*0x4b6930*/
  return result; /*0x4b6936*/
}
} // namespace gamemd

// 0x4B6940
namespace gamemd {
int sub_4B6940()
{
  word_8A08A0 = 0; /*0x4b6942*/
  word_8A08A2 = 0; /*0x4b6948*/
  return 0; /*0x4b694e*/
}
} // namespace gamemd

// 0x4B6950
namespace gamemd {
int sub_4B6950()
{
  dword_8A08E0 = 0; /*0x4b6952*/
  dword_8A08E4 = 0; /*0x4b6957*/
  dword_8A08E8 = 0; /*0x4b695c*/
  return 0; /*0x4b6961*/
}
} // namespace gamemd

// 0x4B6970
namespace gamemd {
int sub_4B6970()
{
  dword_8A0910 = 0; /*0x4b6975*/
  dword_8A0908 = 128; /*0x4b697f*/
  dword_8A090C = 128; /*0x4b6984*/
  return 128; /*0x4b6989*/
}
} // namespace gamemd

// 0x4B6990
namespace gamemd {
int sub_4B6990()
{
  dword_8A0890 = 0; /*0x4b6992*/
  dword_8A0894 = 0; /*0x4b6997*/
  dword_8A0898 = 0; /*0x4b699c*/
  dword_8A089C = 0; /*0x4b69a1*/
  return 0; /*0x4b69a6*/
}
} // namespace gamemd

// 0x4B69D0
namespace gamemd {
void ObjectClass::nullsub_126()
{
  ; /*0x4b69d0*/
}
} // namespace gamemd

// 0x4B6B80
namespace gamemd {
char E4Recv_4B6B80::sub_4B6B80()
{

  int uniqueId; // edi
  char result; // al

  uniqueId = this->M16; /*0x4b6b87*/
  LOBYTE(this->M12) = 0; /*0x4b6b8a*/
  if ( uniqueId > 0 ) /*0x4b6b8f*/
  {
    do /*0x4b6b9a*/
    {
      result = sub_4B6AB0(this, 0); /*0x4b6b94*/
      --uniqueId; /*0x4b6b99*/
    }
    while ( uniqueId ); /*0x4b6b9a*/
  }
  this->M16 = 0; /*0x4b6b9c*/
  this->owningHouseIndex = 0; /*0x4b6b9f*/
  return result; /*0x4b6ba2*/

}
} // namespace gamemd

// 0x4B6BE0
namespace gamemd {
int E4Recv_4B6BE0::sub_4B6BE0(int a2)
{

  return *(&this->? + a2); /*0x4b6be8*/

}
} // namespace gamemd

// 0x4BA390
namespace gamemd {
int sub_4BA390()
{
  dword_8A0930 = 0; /*0x4ba392*/
  dword_8A0934 = 0; /*0x4ba397*/
  dword_8A0938 = 0; /*0x4ba39c*/
  dword_8A093C = 0; /*0x4ba3a1*/
  return 0; /*0x4ba3a6*/
}
} // namespace gamemd

// 0x4BA3B0
namespace gamemd {
void sub_4BA3B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4ba3bc*/
  dbl_8A0968 = Math::Sqrt(v0 + v0); /*0x4ba3ce*/
}
} // namespace gamemd

// 0x4BA3E0
namespace gamemd {
void sub_4BA3E0()
{
  dbl_8A0DC0 = dbl_8A0968 / 60.0; /*0x4ba3ec*/
}
} // namespace gamemd

// 0x4BA400
namespace gamemd {
void sub_4BA400()
{
  dbl_8A0DA8 = 1.0 / dbl_8A0DC0; /*0x4ba40c*/
}
} // namespace gamemd

// 0x4BA420
namespace gamemd {
void sub_4BA420()
{
  dbl_8A0DA0 = 0.0174532925199433 * 45.0; /*0x4ba42c*/
}
} // namespace gamemd

// 0x4BA440
namespace gamemd {
void sub_4BA440()
{
  dbl_8A0970 = 0.0174532925199433 * 60.0; /*0x4ba44c*/
}
} // namespace gamemd

// 0x4BA460
namespace gamemd {
void sub_4BA460()
{
  dbl_8A0928 = 0.0174532925199433 * 90.0; /*0x4ba46c*/
}
} // namespace gamemd

// 0x4BA4C0
namespace gamemd {
void sub_4BA4C0()
{
  dbl_8A0978 = Math::ArcTan((double)dword_8A0DC8 * 0.00390625); /*0x4ba4d7*/
}
} // namespace gamemd

// 0x4BA4F0
namespace gamemd {
void sub_4BA4F0()
{
  dbl_8A0D98 = Math::ArcTan((double)(2 * dword_8A0DC8) / dbl_8A0968); /*0x4ba512*/
}
} // namespace gamemd

// 0x4BA520
namespace gamemd {
long long sub_4BA520()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0DC8) + 0.5); /*0x4ba53b*/
  dword_8A0DBC = result; /*0x4ba540*/
  return result; /*0x4ba546*/
}
} // namespace gamemd

// 0x4BA550
namespace gamemd {
int sub_4BA550()
{
  word_8A0940 = 0; /*0x4ba552*/
  word_8A0942 = 0; /*0x4ba558*/
  return 0; /*0x4ba55e*/
}
} // namespace gamemd

// 0x4BA560
namespace gamemd {
int sub_4BA560()
{
  dword_8A0D88 = 0; /*0x4ba562*/
  dword_8A0D8C = 0; /*0x4ba567*/
  dword_8A0D90 = 0; /*0x4ba56c*/
  return 0; /*0x4ba571*/
}
} // namespace gamemd

// 0x4BA580
namespace gamemd {
int sub_4BA580()
{
  dword_8A0DB8 = 0; /*0x4ba585*/
  dword_8A0DB0 = 128; /*0x4ba58f*/
  dword_8A0DB4 = 128; /*0x4ba594*/
  return 128; /*0x4ba599*/
}
} // namespace gamemd

// 0x4BAFE0
namespace gamemd {
BOOL E4Recv_4BAFE0::sub_4BAFE0()
{

  int referenceCount; // eax

  referenceCount = this->M28; /*0x4bafe0*/
  return referenceCount && (*(int (**)(int))(*(unsigned int *)referenceCount + 96))(referenceCount) == -2005532222; /*0x4baff9*/

}
} // namespace gamemd

// 0x4BF650
namespace gamemd {
short BlendMinimapPixel(unsigned short a1, unsigned short a2, int a3)
{
  int v3; // eax

  (*((unsigned short *)&(v3))) = a1; /*0x4bf658*/
  switch ( a3 ) /*0x4bf664*/
  {
    case 0: /*0x4bf664*/
      (*((unsigned short *)&(v3))) = a2; /*0x4bf6c0*/
      break; /*0x4bf6c0*/
    case 25: /*0x4bf664*/
      v3 = 4 * ((*(((unsigned short *)&(g_DDraw_Gray127)) + 1)) & (a1 >> 2)); /*0x4bf6ba*/
      break; /*0x4bf6bd*/
    case 50: /*0x4bf664*/
      v3 = ((uint16_t)g_DDraw_Gray127 & (a2 >> 1)) + ((uint16_t)g_DDraw_Gray127 & (a1 >> 1)); /*0x4bf6a2*/
      break; /*0x4bf6a5*/
    case 75: /*0x4bf664*/
      v3 = 4 * ((*(((unsigned short *)&(g_DDraw_Gray127)) + 1)) & (a1 >> 2)); /*0x4bf67d*/
      break; /*0x4bf680*/
    default:
      return v3;
  }
  return v3; /*0x4bf67c*/
}
} // namespace gamemd
