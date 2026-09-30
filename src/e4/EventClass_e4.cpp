// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/File_e4.hpp"

// 0x48B390
namespace gamemd {
int EventClass::serializeEvent()
{
  int result; // eax
  int v2; // esi
  unsigned int *v3; // edx

  result = (int)this->EventClass_field_0x4; /*0x48b390*/
  v2 = 0; /*0x48b397*/
  this->EventClass_field_0x28 = 0; /*0x48b39b*/
  if ( result > 0 ) /*0x48b39e*/
  {
    result = 0; /*0x48b3a1*/
    do /*0x48b402*/
    {
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result) &= ~1u; /*0x48b3ad*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result) &= ~2u; /*0x48b3b9*/
      v3 = (char *)this->EventClass_field_0x24 + result; /*0x48b3be*/
      result += 36; /*0x48b3c0*/
      ++v2; /*0x48b3c8*/
      *v3 &= ~4u; /*0x48b3c9*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 32) = 0; /*0x48b3ce*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 28) = 0; /*0x48b3d5*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 24) = 0; /*0x48b3dc*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 20) = 0; /*0x48b3e3*/
      *(unsigned int *)((char *)this->EventClass_field_0x24 + result - 12) = 0; /*0x48b3ea*/
      *(unsigned short *)((char *)this->EventClass_field_0x24 + result - 4) = 0; /*0x48b3f1*/
      *((unsigned int *)this->EventClass_field_0x30 + v2 - 1) = 0; /*0x48b3f9*/
    }
    while ( v2 < (int)this->EventClass_field_0x4 ); /*0x48b402*/
  }
  return result; /*0x48b405*/
}
}
// 0x48BAD0
namespace gamemd {
int EventClass::SetData(int a2, int a3, int a4, int a5, int a6)
{
  this->EventClass_field_0x44 = (unsigned int)((void *)a2);
  this->EventClass_field_0x48 = (unsigned int)((void *)a3);
  this-((unsigned int *)(>EventClass_field_0x4C))[0] = (unsigned int)(a4);
  this->EventClass_field_0x50 = (unsigned int)((void *)a5);
  this->EventClass_field_0x54 = (unsigned int)((void *)a6);
  return a6; /*0x48baf3*/
}
}
// 0x4C65E0
namespace gamemd {
void * EventClass::Add(AbstractClass * aP1, unsigned char a3, int a4, char a5)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c65fc*/
  if ( aP1 < 0 ) /*0x4c660a*/
  {
    this->q008 = (void *)(-1);
    *(unsigned int *)this = 0; /*0x4c6635*/
    this->u32_3 = dword_A8ED84; /*0x4c663d*/
    return this; /*0x4c6640*/
  }
  else
  {
    *(unsigned int *)&this->q008 = aP1; /*0x4c6610*/
    *(unsigned int *)this = a3; /*0x4c661a*/
    this->q01C = a4; /*0x4c661c*/
    *(&this->q0041) = a5; /*0x4c6620*/
    this->u32_3 = dword_A8ED84; /*0x4c6629*/
    return this; /*0x4c661e*/
  }
}
}
// 0x4C66C0
namespace gamemd {
int EventClass::AddEvent(char* a1)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c66dc*/
  if ( a2 < 0 ) /*0x4c66ea*/
  {
    this->q008 = (void *)(-1);
    *(unsigned int *)this = 0; /*0x4c6705*/
    this->u32_3 = dword_A8ED84; /*0x4c670d*/
    return this; /*0x4c6710*/
  }
  else
  {
    this->q008 = (void *)(a2);
    *(unsigned int *)this = a3; /*0x4c66ef*/
    this->u32_3 = dword_A8ED84; /*0x4c66f9*/
    return this; /*0x4c66f7*/
  }
}
}
// 0x4C6720
namespace gamemd {
int EventClass::Add2(char* a1)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c673c*/
  if ( aP1 < 0 ) /*0x4c674a*/
  {
    *(unsigned int *)&this->q008 = -1; /*0x4c6767*/
    *this = 0; /*0x4c676b*/
    this->u32_3 = dword_A8ED84; /*0x4c6776*/
    return this; /*0x4c6774*/
  }
  else
  {
    *(unsigned int *)&this->q008 = aP1; /*0x4c6750*/
    *this = a3; /*0x4c6753*/
    this->q01C = aP3; /*0x4c6755*/
    this->u32_3 = dword_A8ED84; /*0x4c675d*/
    return this; /*0x4c6760*/
  }
}
}
// 0x4C6970
namespace gamemd {
int EventClass::AddEventEx(char* a1)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c698c*/
  if ( aP1 < 0 ) /*0x4c699a*/
  {
    *(unsigned int *)&this->q008 = -1; /*0x4c69c6*/
    *this = 0; /*0x4c69ca*/
    this->u32_3 = dword_A8ED84; /*0x4c69d2*/
    return this; /*0x4c69d5*/
  }
  else
  {
    *(unsigned int *)&this->q008 = aP1; /*0x4c69a4*/
    *this = a3; /*0x4c69ab*/
    this->q01C = aP3; /*0x4c69ad*/
    *(unsigned int *)&this->q00B = aP4; /*0x4c69b0*/
    this->u32_F = aP5; /*0x4c69b3*/
    this->u32_3 = dword_A8ED84; /*0x4c69be*/
    return this; /*0x4c69bc*/
  }
}
}
// 0x4C6AE0
namespace gamemd {
int EventClass::Init(char* a1)
{
  this->Debug::Log(); /*0x4c6afc*/
  if ( aP1 < 0 ) /*0x4c6b0a*/
  {
    *(unsigned int *)&this->q008 = -1; /*0x4c6b49*/
    *this = 0; /*0x4c6b4d*/
    this->u32_3 = dword_A8ED84; /*0x4c6b58*/
    return this; /*0x4c6b56*/
  }
  else
  {
    *(unsigned int *)&this->q008 = aP1; /*0x4c6b14*/
    *(unsigned int *)&this->q00B = a5; /*0x4c6b1b*/
    *this = a3; /*0x4c6b22*/
    this->q01C = a4; /*0x4c6b24*/
    this->u32_F = arg10; /*0x4c6b27*/
    this->u32_4C = *a6; /*0x4c6b2d*/
    *(unsigned int *)&this->q054 = a6[1]; /*0x4c6b35*/
    this->u32_3 = dword_A8ED84; /*0x4c6b3f*/
    return this; /*0x4c6b42*/
  }
}
}
// 0x4C6CB0
namespace gamemd {
AbstractClass * * EventClass::ProcessEvent()
{
    unsigned int v5 = 0;  /* G37 hoist */
  unsigned int v3;
  BuildingClass *Building; // esi
  BuildingClass *v7; // esi
  ObjectClass *v8; // edi
  IUnknown *v9; // eax
  wchar_t *v10; // eax
  CellStruct *v12; // edi
  IUnknown *v13; // eax
  AbstractClass *v15; // ax
  HouseClass *v16; // eax
  void **v17; // eax
  AnimClass *v18; // eax
  void **v19; // eax
  AnimClass *v20; // edi
  BuildingTypeClass *v21; // esi
  int16_t v22; // dx
  AbstractClass *v24; // eax
  int Object; // eax
  unsigned char *Member; // eax
  int ecx86; // ecx
  IUnknown *v34; // ebx
  void *Next; // eax
  IUnknown *eax99a; // eax
  IUnknown *v41; // ebx
  void *eax107; // eax
  TechnoClass *v46; // esi
  int currentMission; // eax
  unsigned int *captureManager; // ecx
  unsigned int *esi130; // esi
  CellStruct *v51; // esi
  unsigned int *eax144; // eax
  CellStruct *v55; // esi
  int ecx148; // ecx
  CellStruct *v57; // esi
  AnimClass *v58; // edx
  int16_t cx156; // cx
  AbstractClass *v60; // eax
  IUnknown *StringCSF; // eax
  IUnknown *v63; // edi
  wchar_t *v66; // eax
  wchar_t *eax167a; // eax
  IUnknown *v67; // esi
  wchar_t *eax174; // eax
  AbstractClass *v70; // esi
  int v73; // eax
  AbstractClass *v74; // esi
  int v75; // ecx
  HouseClass **v76; // ecx
  IUnknown *v85; // eax
  int i; // ecx
  wchar_t *v90; // [esp-Eh] [ebp-390h]
  CampaignScore *_2; // [esp+2h] [ebp-380h]
  HouseClass *v91; // [esp+1Ah] [ebp-368h] BYREF
  HouseClass *aP2_4; // [esp+1Eh] [ebp-364h]
  AnimClass *GroundHeight; // [esp+22h] [ebp-360h]
  int16_t v97; // [esp+2Ah] [ebp-358h]
  AbstractClass v98; // [esp+2Eh] [ebp-354h] BYREF
  int16_t v104; // [esp+DEh] [ebp-2A4h]
  wchar_t Buffer[80]; // [esp+E2h] [ebp-2A0h] BYREF
  wchar_t v107[256]; // [esp+182h] [ebp-200h] BYREF

  v3 = HouseClass_Array;
  void * v4 =
  int v5 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * v4];
  switch ()
  {
  int a1; // [esp+16h] [ebp-36Ch] BYREF
  int v86; // eax
    case 1:
      Building = (BuildingClass *)BuildingLoadQueue::FindBuilding(&this->q007);
      ClearFactoryClassProduction(Building, 0);
      if ( Building && Building->isAliveFlag && !Building->inLimbo && !*((unsigned char *)Building->Type + 5824) )
        BuildingClass::AnnounceReady((int)Building);
      return;
    case 2:
      v7 = (BuildingClass *)BuildingLoadQueue::FindBuilding(&this->q007);
      ClearFactoryClassProduction(v7, 0);
      if ( v7 && v7->isAliveFlag && !v7->inLimbo && !*((unsigned char *)v7->Type + 5824) )
        BuildingClass::PowerOff((int)v7);
      return;
    case 3:
      if ( (uint8_t)HouseClass::IsAlliedWith(
                              (void *)v5,
                              *(IUnknown **)&HouseClass_Array->__pad_0[4 * this->q007]) )
        COMStub_4F9F70((void *)v5, this->q007, 1);
      else
        HouseClass::MakeAlly((void *)v5, this->q007, 1);
      return;
    case 4:
    case 5:
      unsigned int * v26 = BuildingLoadQueue::Find(&this->q007);
      if ( this->u8_1D == 1 )
        goto LABEL_2;
      ClearFactoryClassProduction(v26, this);
      if ( v26 )
      {
        if ( *((unsigned char *)v26 + 144) )
        {
          if ( (int)v26[27] > 0 && !*((unsigned char *)v26 + 129) )
          {
    unsigned int v28 = 0;  /* G37 hoist */
            int v27 = 0;
            if ( !this->q048
  int v28; // eax
              || (v28 = BuildingLoadQueue::FindObject((unsigned char *)(&this->q0044)), (v27 = v28) == 0)
              || *(unsigned char *)(v28 + 144) && *(unsigned int *)(v28 + 108) && !*(unsigned char *)(v28 + 129) )
            {
              if ( !this->u8_17
                || (Object = BuildingLoadQueue::FindObject((unsigned char *)(&this->q0049)), (v27 = Object) == 0)
                || *(unsigned char *)(Object + 144) && *(unsigned int *)(Object + 108) && !*(unsigned char *)(Object + 129) )
              {
    unsigned int v30 = 0;  /* G37 hoist */
                if ( (unsigned char)this->EventClass_field_0xC != 7
                  || v26[43] != 7
                  || (v26[5] & 4) == 0
  void *(unsigned int *)(v30); // eax
  void *v31; // ebp
                  || (v30 = BuildingLoadQueue::GetNext((unsigned char *)(&this->q0049)), (v31 = v30) == 0)
                  || (*(int (**)(void *))(*(unsigned int *)v30 + 44))(v30) != 6
                  || (void *)Team::GetMember(v26, 0) != v31 )
                {
  unsigned int *v36; // ebp
                  if ( *((unsigned char *)v26 + 1048) )
                  {
                    Member = (unsigned char *)Team::GetMember(v26, 0);
                    unsigned char * v33 = Member;
                    if ( Member
                      && Member[144]
                      && (*(int (**)(unsigned char *))(*(unsigned int *)Member + 44))(Member) == 6
                      && *(unsigned char *)(*((unsigned int *)v33 + 328) + 5811) )
                    {
                      (*(void (**)(unsigned int *, int))(*v26 + 628))(v26, 3);
                      *((unsigned char *)v26 + 1048) = 0;
                    }
                  }
                  else
                  {
                    (*(void (**)(unsigned int *, int))(*v26 + 628))(v26, 3);
                  }
                  if ( v26[320] )
                    v26[320] = 0;
                  if ( (v26[5] & 4) != 0 )
                  {
                    ecx86 = v26[373];
                    if ( ecx86 )
                    {
                      if ( (unsigned char)this->EventClass_field_0xC != 16 )
                        TeamClass::LiberateMember_Start(ecx86, (IUnknown *)v26, 0xFFFFFFFF, (AbstractClass *)1);
                    }
                  }
                  if ( v27 && Object::IsAlliedWithObjectHouse(HouseClass_Player.field_0, (IUnknown *)v26) )
                    (*(void (**)(int, int))(*(unsigned int *)v27 + 328))(v27, 7);
                  v34 = (IUnknown *)(*(int (**)(unsigned int *, int))(*v26 + 1188))(v26, this);
                  (*(void (**)(unsigned int *, IUnknown *, unsigned int))(*v26 + 488))(v26, v34, 0);
                  if ( (v26[5] & 4) != 0 )
                  {
                    v36 = v26;
                    v26[362] = 0;
                  }
                  else
                  {
                    v36 = 0;
                  }
                  unsigned int * v37 = (unsigned int *)v26[182];
                  v26[174] = 0;
                  if ( v37 && v34 != (IUnknown *)1 )
                    FactoryClass::ResetProductionTimers(v37);
                  if ( (unsigned char)this->EventClass_field_0xC == 11 && (v26[5] & 4) != 0 )
                  {
                    (*(void (**)(unsigned int *, unsigned int))(*v26 + 968))(v26, 0);
                    int v38 = *v26;
                    unsigned char * v39 = (unsigned char *)(&this->q0044);
                    Next = BuildingLoadQueue::GetNext(v39);
                    (*(void (**)(unsigned int *, void *, int))(v38 + 1152))(v26, Next, 1);
                    eax99a = (IUnknown *)BuildingLoadQueue::GetNext(v39);
                    TechnoClass::SetFocus(v26, eax99a);
                  }
                  else
                  {
                    if ( v36 )
                    {
                      TechnoClass::SetFocus(v36, 0);
                      FootClass::ClearSomeVector(v36);
                    }
                    v41 = (IUnknown *)BuildingLoadQueue::GetNext((unsigned char *)(&this->q0044));
                    (*(void (**)(unsigned int *, IUnknown *))(*v26 + 968))(v26, v41);
                    int v43 = *v26;
                    void * v44 = BuildingLoadQueue::GetNext((unsigned char *)(&this->q0049));
                    (*(void (**)(unsigned int *, void *, int))(v43 + 1152))(v26, v44, 1);
                    if ( *(unsigned char *)((*(int (**)(unsigned int *))(*v26 + 132))(v26) + 1508) && v41 )
                      CCINIClass::IterateNodes(v26, v41);
                    if ( this->q007 )
                    {
                      int v45 = *v26;
                      eax107 = BuildingLoadQueue::GetNext((unsigned char *)(&this->q0084));
                      (*(void (**)(unsigned int *, void *))(v45 + 1148))(v26, eax107);
                    }
                  }
                }
              }
            }
          }
        }
      }
      return;
    case 6:
      v46 = (TechnoClass *)BuildingLoadQueue::Find(&this->q007);
      ClearFactoryClassProduction(v46, 0);
      if ( v46 )
      {
        if ( v46->isAliveFlag )
        {
          if ( !v46->inLimbo && !v46->__pad_3F7[33] )
          {
            currentMission = v46->currentMission;
            if ( currentMission != 18 && currentMission != 19 )
            {
              if ( v46->onBridge
                || (v98.uniqueId = v46->location[0],
                    v98.abstractFlags = v46->location[1],
                    v98.nextArrayIndex = v46->location[2],
                    *((unsigned char *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&v98.uniqueId) + 284))
                || !(*(uint8_t (**)(TechnoClass *))(*(unsigned int *)v46->__pad_0 + 688))(v46) )
              {
                if ( (v46->abstractFlags & 4) != 0 )
                {
                  (*(void (**)(char *))(*(unsigned int *)&v46[1].onBridge + 12))(&v46[1].onBridge);
                  FootClass::ClearSomeVector(v46);
                  a1 = 0;
                  *(unsigned int *)v46[1].__pad_0 = -1;
                  IDA_BYTE2(v46[1].firepowerMultiplier[0]) = 0;
                  *(unsigned int *)&v46[1].__pad_0[4] = 0;
                  *(unsigned int *)&v46[1].__pad_0[8] = 0;
                }
                (*(void (**)(TechnoClass *, int))(*(unsigned int *)v46->__pad_0 + 640))(v46, 3);
                (*(void (**)(TechnoClass *, unsigned int, int))(*(unsigned int *)v46->__pad_0 + 1152))(v46, 0, 1);
                (*(void (**)(TechnoClass *, unsigned int))(*(unsigned int *)v46->__pad_0 + 968))(v46, 0);
                if ( *(unsigned char *)((*(int (**)(TechnoClass *))(*(unsigned int *)v46->__pad_0 + 132))(v46) + 3434) )
                {
                  (*(void (**)(TechnoClass *, unsigned int, int))(*(unsigned int *)v46->__pad_0 + 1152))(v46, 0, 1);
                  (*(void (**)(TechnoClass *, unsigned int))(*(unsigned int *)v46->__pad_0 + 968))(v46, 0);
                }
                captureManager = v46->captureManager;
                if ( captureManager )
                  UnitClass::ProcessIdleOrders(captureManager);
                if ( *(unsigned char *)((*(int (**)(TechnoClass *))(*(unsigned int *)v46->__pad_0 + 132))(v46) + 1508) )
                  CCINIClass::IterateNodes(v46, 0);
                if ( (*(int (**)(TechnoClass *))(*(unsigned int *)v46->__pad_0 + 44))(v46) == 1 )
                {
                  if ( *(unsigned char *)(v46[1].ironTintTimer[2] + 3598) )
                  {
                    int v50 = v46->currentMission;
                    if ( v50 == 10 || v50 == 12 )
                    {
                      (*(void (**)(TechnoClass *, int, unsigned int))(*(unsigned int *)v46->__pad_0 + 488))(v46, 5, 0);
                      (*(void (**)(TechnoClass *))(*(unsigned int *)v46->__pad_0 + 492))(v46);
                    }
                  }
                  esi130 = *(unsigned int **)&v46->mindControlledBy_a_unit;
                  if ( esi130 )
                    FactoryClass::ResetProductionTimers(esi130);
                }
              }
            }
          }
        }
      }
      return;
    case 7:
      v57 = (CellStruct *)BuildingLoadQueue::Find(&this->q007);
      ClearFactoryClassProduction(v57, 0);
      if ( v57 && (v57->__pad_8[12] & 4) != 0 && v57->__pad_34[92] && !v57->__pad_34[77] && !v57[1].__pad_FC[84] )
      {
        v58 = (AnimClass *)v57->field_0;
        v57[2].__pad_FC[38] = 1;
        ((void (__thiscall *)(CellStruct *, char *, int, unsigned int))v58->field_174)(
          v57,
          &stru_89E138[22656],
          1,
          0);
      }
      return;
    case 8:
      goto LABEL_184;
    case 9:
      v51 = (CellStruct *)BuildingLoadQueue::Find(&this->q007);
      ClearFactoryClassProduction(v51, 0);
      if ( v51 )
      {
        if ( v51->__pad_34[92] )
        {
          if ( !v51->__pad_34[77] && !v51[1].__pad_FC[84] && !*(unsigned int *)&v51[1].__pad_170[204] )
          {
            if ( v51->__pad_34[88]
  unsigned int v100[3]; // [esp+56h] [ebp-32Ch] BYREF
              || (v100[0] = *(unsigned int *)&v51->__pad_34[104],
                  v100[1] = *(unsigned int *)&v51->__pad_34[108],
                  v100[2] = *(unsigned int *)&v51->__pad_34[112],
                  *((unsigned char *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v100) + 284))
              || !(*(uint8_t (**)(CellStruct *))(v51->field_0 + 688))(v51) )
            {
              int v53 = *(unsigned int *)&v51->__pad_34[120];
              if ( v53 != 18 && v53 != 19 && (*(int (**)(CellStruct *))(v51->field_0 + 44))(v51) != 2 )
              {
  char v101[4]; // [esp+62h] [ebp-320h] BYREF
                a1 = *(unsigned int *)(*(int (**)(CellStruct *, char *))(v51->field_0 + 440))(v51, v101);
                if ( a1 == *(unsigned int *)&stru_89E138[22624]
  unsigned int *v54; // eax
                  || (v54 = CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&a1),
                      (eax144 = Cell::IsBridge(v54)) == 0)
                  || !*(unsigned char *)(eax144[328] + 5821) )
                {
                  (*(void (**)(CellStruct *, int))(v51->field_0 + 628))(v51, 3);
                  (*(void (**)(CellStruct *, unsigned int, int))(v51->field_0 + 1152))(v51, 0, 1);
                  (*(void (**)(CellStruct *, unsigned int))(v51->field_0 + 968))(v51, 0);
                  (*(void (**)(CellStruct *, int, unsigned int))(v51->field_0 + 488))(v51, 16, 0);
                }
              }
            }
          }
        }
      }
      return;
    case 0xA:
      v55 = (CellStruct *)BuildingLoadQueue::Find(&this->q007);
      ClearFactoryClassProduction(v55, 0);
      if ( v55 )
      {
        ecx148 = *(unsigned int *)&v55->__pad_34[4];
        if ( ecx148 )
          TechnoClass::ApplyDamageEffects(ecx148);
      }
      return;
    case 0xB:
      v22 = (unsigned short)this->EventClass_field_0x15;
      *(unsigned short *)&v98[4] = this->q04C;
      bool v23 = this->q03C == 0;
      v24 = this->q007;
      *(unsigned short *)&v98[6] = v22;
      HouseClass::CompleteProduction(v5, v24, this->q00B, !v23, (int)&v98[4]);
      return;
    case 0xC:
      if ( (HouseClass_Player[39084] & 2) == 0 )
        *(unsigned int *)&HouseClass_Player[45140] = 1;
      return;
    case 0xD:
      *(unsigned int *)&HouseClass_Player[44564] = this->q007;
      int v62 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * this->q008];
      if ( v62 != HouseClass_Player.field_0 )
      {
        if ( v62 )
        {
          StringCSF = (IUnknown *)GetStringCSF(aTxtPlayerChang, 0, g_Str_File_Event_CPP, 1427);
          v63 = StringCSF;
          if ( StringCSF )
          {
            if ( wcslen((const wchar_t *)StringCSF) )
              goto LABEL_164;
          }
        }
      }
      return;
    case 0xE:
      IDA_LOBYTE(v3) = this->q03C != 0;
      Sidebar::StartSidebarProduction(v5, this->q007, this->q00B, v3, 0);
      return;
    case 0xF:
      HouseClass::StartFactoryProduction(
        v5,
        this->q007,
        this->q00B,
        this->q03C != 0);
      return;
    case 0x10:
      HouseClass::CancelProduction(
        (void *)v5,
        this->q007,
        this->q00B,
        this->q03C != 0,
        0);
      return;
    case 0x11:
      int v25 = BuildingLoadQueue::FindBuilding(&this->q007);
      ClearFactoryClassProduction((unsigned int *)v25, 0);
      if ( v25 && *(unsigned char *)(v25 + 144) )
        (*(void (**)(int))(*(unsigned int *)v25 + 1264))(v25);
      return;
    case 0x12:
      cx156 = this->IsAllocated;
      *(unsigned short *)v98[0] = this->q00B;
      v60 = this->q007;
      *(unsigned short *)&v98[2] = cx156;
      SuperWeapon::FireSuperWeaponHouseClass((void *)v5, (AbstractClass *)v60, &v98);
      return;
    case 0x13:
      Debug::Log();
      byte_A83D48 = 1;
      return;
    case 0x14:
      v16 = this->q03C;
      aP2_4 = this->q04C;
      v91 = v16;
      GroundHeight = 0;
      GroundHeight = (AnimClass *)Cell::GetGroundHeight((IUnknown *)&v91);
      if ( (*((unsigned int *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&v91) + 80) & 0x100) != 0 )
        GroundHeight = (AnimClass *)((char *)GroundHeight + *(unsigned int *)&stru_89E138[22708]);
      if ( this->q007 == -1 )
      {
        v17 = (void *)operator new(0x1C8u);
        if ( !v17 )
          return;
        v18 = AnimClass::ctor(
                v17,
                *(CoordStruct **)(*(unsigned int *)&stru_87C374[44652] + 2996),
                (CoordStruct *)&v91,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
      }
      else
      {
        v19 = (void *)operator new(0x1C8u);
        if ( !v19 )
          return;
        v18 = AnimClass::ctor(
                v19,
                *(CoordStruct **)(*(unsigned int *)&stru_89E138[90140] + 4 * this->q007),
                (CoordStruct *)&v91,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
      }
      v20 = v18;
      if ( v18 )
      {
        v21 = *(unsigned int *)&this->q00B;
        if ( v21 != (BuildingTypeClass *)-1
          && !(uint8_t)House::IsHumanPlayer(*(void **)&HouseClass_Array->__pad_0[4 * (unsigned int)v21]) )
        {
          v20->__pad_194[9] = 1;
        }
      }
      return;
    case 0x15:
      unsigned char * v11 = BuildingLoadQueue::Find(&this->q007);
      ClearFactoryClassProduction(v11, 0);
      if ( v11 && v11[144] )
        (*(void (**)(unsigned char *, int))(*(unsigned int *)v11 + 412))(v11, -1);
      return;
    case 0x16:
      v12 = (CellStruct *)BuildingLoadQueue::Find(&this->q007);
      ClearFactoryClassProduction(v12, 0);
      if ( v12 && v12->__pad_34[92] && *(unsigned int *)(*(unsigned int *)&v12->__pad_170[172] + 48) == this->q008 )
      {
        if ( (*(int (**)(CellStruct *))(v12->field_0 + 44))(v12) == 6
          || ((*(int (**)(CellStruct *))(v12->field_0 + 44))(v12) == 1
           || (*(int (**)(CellStruct *))(v12->field_0 + 44))(v12) == 2)
  char v102[12]; // [esp+66h] [ebp-31Ch] BYREF
          && (v13 = (IUnknown *)(*(int (**)(CellStruct *, char *))(v12->field_0 + 72))(v12, v102),
  unsigned int *v14; // eax
              v14 = Coord::To_Cell(&stru_87C374[13428], v13),
              Cell::IsBridge(v14)) )
        {
          (*(void (**)(CellStruct *, int))(v12->field_0 + 416))(v12, -1);
        }
      }
      return;
    case 0x17:
      v15 = this->q007;
      *(unsigned short *)&v98[10] = this->q024;
      *(unsigned short *)&v98[8] = v15;
      BuildingClass::Capture((void *)v5, (HouseClass *)&v98[8], 0);
      return;
    case 0x18:
      if ( v5 )
      {
        *(unsigned int *)&HouseClass_Player[44052] = this->q007;
        **(unsigned int **)&HouseClass_Player[29924] = this->q007;
        v10 = GetStringCSF(aTxtSpecialWarn, 0, g_Str_File_Event_CPP, 953);
        swprintf(Buffer, (const size_t)v10, (const wchar_t *const)(v5 + 90154), _2);
        MessageListClass::AddMessage(
          &HouseClass_Player[32532],
          0,
          0,
          (CellStruct *)Buffer,
          *(unsigned int *)(v5 + 90196),
          (IUnknown *)0x4046,
          1200,
          0);
        MapClass::MarkForRedraw(&stru_87C374[13428], 0);
      }
      return;
    case 0x1B:
      *(unsigned int *)&HouseClass_Player[30724] = this->IsAllocated;
      return;
    case 0x1D:
      if ( !*(unsigned int *)&HouseClass_Player[45140] )
      {
        Timer::GetTicks();
        int v99 = 60;
        aP2_4 = (HouseClass *)v98.NeedsSaveOrLink;
        GroundHeight = (AnimClass *)60;
        v98.referenceCount = Timer::GetTicks();
        v91 = (HouseClass *)v98.referenceCount;
        *(unsigned int *)&v98[12] = &stru_82083C;
        v90 = GetStringCSF(aTxtNone, 0, g_Str_File_Event_CPP, 1460);
        v66 = GetStringCSF(aTxtSavingGame, 0, g_Str_File_Event_CPP, 1460);
        Dialog::ShowMessageBox((int)v66, v90, 0, 0, 0, (int)_2);
        eax167a = GetStringCSF(aTxtMultiplayer, 0, g_Str_File_Event_CPP, 1462);
        SaveScenarioClassGame_AdjustMPSaveFileName(MultiByteStr, eax167a, 0);
        while ( 1 )
        {
          v67 = (IUnknown *)GroundHeight;
          if ( v91 != (HouseClass *)-1 )
          {
            signed int v69 = Timer::GetTicks() - (unsigned int)v91;
            if ( v69 >= (int)GroundHeight )
              goto LABEL_173;
            v67 = (IUnknown *)((char *)GroundHeight - v69);
          }
          if ( (int)v67 <= 0 )
          {
LABEL_173:
            (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&stru_87C374[44952] + 24))(
              *(unsigned int *)&stru_87C374[44952],
              0);
            MapClass::MarkForRedraw(&stru_87C374[13428], 2);
            TacticalMap::Redraw(&stru_87C374[13428]);
            return;
          }
          Event::Dispatch();
        }
      }
      eax174 = GetStringCSF(aTxtMultiplayer, 0, g_Str_File_Event_CPP, 1473);
      SaveScenarioClassGame_AdjustMPSaveFileName(MultiByteStr, eax174, 0);
      return;
    case 0x1E:
      v8 = (ObjectClass *)BuildingLoadQueue::Find(&this->q007);
      ClearFactoryClassProduction(v8, 0);
      if ( v8 && v8->isAliveFlag )
      {
        v9 = (IUnknown *)BuildingLoadQueue::GetNext((unsigned char *)(&this->q0042));
        TechnoClass::SetFocus(v8, v9);
      }
      return;
    case 0x1F:
      if ( v4 != *(unsigned int *)(HouseClass_Player.field_0 + 48) )
        RA2_OPDEL(this->q007);
      return;
    case 0x20:
      this->q024 -= (**(unsigned int **)&HouseClass_Player[29924] & 0x1000) != 0 ? 0xA : 0;
      if ( (unsigned int)this->q024 > *(unsigned int *)&HouseClass_Player[30724]
        || (unsigned int)this->q00B > *(unsigned int *)&HouseClass_Player[30728] )
      {
        *(unsigned int *)&HouseClass_Player[29868] = this->q00C;
        v86 = this->q00B
            * ((this->q00B + this->q024 + this->q00C - 1)
             / this->q00B);
      }
      else
      {
        v86 = 0;
        *(unsigned int *)&HouseClass_Player[29868] = 0;
      }
      *(unsigned int *)&HouseClass_Player[29840] = v86;
  int v87; // eax
      IDA_HIWORD(v87) = 0;
      *(unsigned int *)&HouseClass_Player[30732] = this->q007;
      IDA_LOWORD(v87) = this->q024;
      *(unsigned int *)&HouseClass_Player[30724] = (uint16_t)v87;
      if ( *(unsigned int *)&HouseClass_Player[30748] <= (unsigned int)(uint16_t)v87 )
        *(unsigned int *)&HouseClass_Player[30748] = v87;
      *(unsigned int *)&HouseClass_Player[30728] = this->q00B;
      return;
    case 0x21:
      int v88 = 0;
      if ( *(int *)&HouseClass_Player[40248] <= 0 )
        return;
      for ( i = *(unsigned int *)&HouseClass_Player[40236]; v4 != *(unsigned int *)(*(unsigned int *)i + 111); i += 4 )
      {
        if ( ++v88 >= *(int *)&HouseClass_Player[40248] )
          return;
      }
      *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v88) + 115) = this->q007;
      return;
    case 0x22:
      if ( (HouseClass_Player[39084] & 2) == 0 )
        *(unsigned int *)&HouseClass_Player[45140] = 7;
      return;
    case 0x23:
      Debug::Log();
      v70 = this->q007;
      v5 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)v70];
      if ( *(unsigned int *)&HouseClass_Player[29932] == 4 )
      {
        if ( !HouseClass_Player[40532] )
          goto LABEL_182;
        if ( (uint8_t)House::IsCurrentPlayer(*(void **)&HouseClass_Array->__pad_0[4 * (unsigned int)v70]) )
          NetworkManager::RemovePlayer((int)&g_NetworkEventQueue, v70);
        if ( *(unsigned int *)&HouseClass_Player[29932] == 4 )
        {
LABEL_182:
          if ( dword_B779C4 )
            goto LABEL_184;
        }
      }
      if ( (uint8_t)House::IsCurrentPlayer((void *)v5) )
LABEL_184:
        Network::SendOffer(v5);
      return;
    case 0x24:
      Debug::Log();
      *(unsigned int *)&HouseClass_Player[40528] = this->q007;
      Debug::Log();
      v62 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * this->q008];
      if ( v62 != HouseClass_Player.field_0 )
      {
        if ( v62 )
        {
          v85 = (IUnknown *)GetStringCSF(aTxtPlayerChang_0, 0, g_Str_File_Event_CPP, 1744);
          v63 = v85;
          if ( v85 )
          {
            if ( wcslen((const wchar_t *)v85) )
            {
LABEL_164:
              swprintf(v107, (const size_t)v63, (const wchar_t *const)(v62 + 90154), _2);
              int v65 = Math::RoundToInt(*(double *)(*(unsigned int *)&stru_87C374[44652] + 5312) * 900.0);
              MessageListClass::AddMessage(
                &HouseClass_Player[32532],
                0,
                0,
                (CellStruct *)v107,
                *(unsigned int *)(v62 + 90196),
                (IUnknown *)0x4046,
                v65,
                0);
            }
          }
        }
      }
      return;
    case 0x27:
      Debug::Log();
      if ( SessionClass::IsValidHouse((int)&HouseClass_Player[29932], 0) )
      {
  unsigned char v103[108]; // [esp+72h] [ebp-310h] BYREF
        int v77 = *(unsigned int *)(HouseClass_Player.field_0 + 48);
        Debug::Log();
        if ( v77 < 0 )
        {
          v103[2] = -1;
          v103[0] = 0;
        }
        else
        {
          v103[2] = v77;
          v103[0] = 19;
        }
        *(unsigned int *)&v103[3] = *(unsigned int *)&HouseClass_Player[45112];
        if ( Networking_LastEventIndex < 128 )
        {
          char * v78 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex];
          qmemcpy(v78, v103, 0x6Cu);
          v78 += 108;
          *(unsigned short *)v78 = v104;
          char v105 = v105;
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
          Networking_NextPacketIndex = ((unsigned char)Networking_NextPacketIndex + 1) & 0x7F;
          ++Networking_LastEventIndex;
        }
        HouseClass_Player[42340] = 1;
      }
      HouseClass_Player[42372] = 1;
      int v79 = EventClass::validateEventType((int *)&g_NetworkEventQueue);
      int v80 = v79;
      if ( v79 == -1 )
        goto LABEL_214;
      int v81 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * v79];
      int v96 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * v80];
      if ( !v81 )
        goto LABEL_213;
      if ( *(int *)&HouseClass_Player[40248] <= 2 )
        goto LABEL_211;
      unsigned int * v82 = 0;
      int v83 = 0;
      if ( *(int *)&HouseClass_Player[40248] <= 0 )
        goto LABEL_209;
      int v84 = *(unsigned int *)&HouseClass_Player[40236];
      while ( *(unsigned int *)(*(unsigned int *)v84 + 111) != v80 )
      {
        ++v83;
        v84 += 4;
        if ( v83 >= *(int *)&HouseClass_Player[40248] )
          goto LABEL_209;
      }
      v82 = (unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v83) + 40);
      *(unsigned short *)&HouseClass_Player[40560] = *(unsigned short *)&HouseClass_Player[21864][2 * v83 + 20478];
LABEL_209:
      Network::CopyAddress(v82, &a1, (int)&v91);
      NetworkID::Assign(&HouseClass_Player[40536], (IPXManagerClass *)&a1, (int)&v91, 0);
      Network::FormatAddress((uint16_t *)&HouseClass_Player[40536], 0);
      Debug::Log();
      Debug::Log();
      if ( !SessionClass::IsValidHouse((int)&HouseClass_Player[29932], 0) )
        Network::SetPlayerCoords(
          &HouseClass_Player[44148],
          (IPXManagerClass *)&HouseClass_Player[40536]);
LABEL_211:
      wcscpy((wchar_t *)&HouseClass_Player[42252], (const wchar_t *)(v96 + 90154));
      Debug::Log();
      *(unsigned int *)&HouseClass_Player[42336] = v80;
      if ( SessionClass::IsValidHouse((int)&HouseClass_Player[29932], 0) )
        Network::SendMasterPlayerList((int)&g_NetworkEventQueue);
LABEL_213:
      *(unsigned int *)&HouseClass_Player[42380] = *(unsigned int *)&HouseClass_Player[45112];
      *(unsigned int *)&HouseClass_Player[42388] = v80;
      *(unsigned int *)&HouseClass_Player[42368] = -1;
      *(unsigned int *)&HouseClass_Player[42384] = 10
                                                      * ((*(unsigned int *)&HouseClass_Player[30724]
                                                        + *(unsigned int *)&HouseClass_Player[45112]
                                                        + 10)
                                                       / 0xAu);
LABEL_214:
      HouseClass_Player[42372] = 0;
      return;
    case 0x28:
      Debug::Log();
      *(unsigned int *)&HouseClass_Player[42368] = this->q007;
      return;
    case 0x29:
      Debug::Log();
      int v72 = this->EventClass_field_0x8;
      v97 = 0;
      a1 = 0;
      v96 = v72;
      NetworkAddress::Assign(&v91, &a1, (IUnknown *)&v96, 0);
      Network::FormatAddress((uint16_t *)&v91, (IUnknown *)&v91);
      Debug::Log();
      EventClass::deserializeEvent(&HouseClass_Player[44148], this->q007, (IUnknown *)&v91);
      NetworkManager::SetPlayerAddress(
        (int *)&g_NetworkEventQueue,
        (DynamicVector *)this->q007,
        (DynamicVector *)&v91);
      v73 = 0;
      if ( *(int *)&HouseClass_Player[40248] <= 0 )
        return;
      v74 = this->q007;
      v75 = *(unsigned int *)&HouseClass_Player[40236];
      break;
    case 0x2A:
    case 0x2B:
    case 0x2C:
LABEL_2:
      ScriptAction::DispatchBuilding();
      return;
    case 0x2D:
      if ( v5 )
        HouseClass::NotifyImpactWater(*(AnimClass **)&HouseClass_Array->__pad_0[4 * v4]);
      return;
    case 0x2E:
      HouseClass::CancelProduction(
        (void *)v5,
        this->q007,
        this->q00B,
        this->q03C != 0,
        (IUnknown *)1);
      return;
    default:
      return;
  }
  while ( *(unsigned int *)(*(unsigned int *)v75 + 111) != v74 )
  {
    ++v73;
    v75 += 4;
    if ( v73 >= *(int *)&HouseClass_Player[40248] )
      return;
  }
  if ( v73 < *(int *)&HouseClass_Player[40248] )
  {
    v76 = (HouseClass **)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v73) + 40);
    *v76 = v91;
    v76[1] = aP2_4;
    v76[2] = (HouseClass *)GroundHeight;
  }
}
} // namespace gamemd

// 0x542280
namespace gamemd {
int EventClass::deserializeEvent(int a2, IUnknown * aP2)
{
  int result; // eax
  unsigned int *v5; // edx

  result = (*(int (**)(EventClass *, int))(this->EventClass_field_0x0 + 24))(this, a2); /*0x54228c*/
  if ( result != -1 && result < (int)this->EventClass_field_0x44 ) /*0x542297*/
  {
    v5 = (unsigned int *)(*((unsigned int *)&this->EventClass_field_0x28 + result) + 76); /*0x5422a1*/
    *v5 = *aP2; /*0x5422a6*/
    v5[1] = aP2[1]; /*0x5422ab*/
    result = aP2[2]; /*0x5422ae*/
    v5[2] = result; /*0x5422b1*/
  }
  return result; /*0x5422b4*/
}
}
// 0x54F200
namespace gamemd {
int EventClass::Enqueue(unsigned short a2, char a3)
{
  int result; // eax
  int16_t v5; // si
  int v6; // ecx

  result = ChronoScreen::IsActive(); /*0x54f205*/
  if ( (unsigned char)result ) /*0x54f20c*/
    goto LABEL_19; /*0x54f20c*/
  v5 = a2; /*0x54f217*/
  if ( *((unsigned int *)((char *)&stru_A8EB00 + 440)) ) /*0x54f21d*/
  {
    if ( a2 != 27 ) /*0x54f223*/
      goto LABEL_19; /*0x54f223*/
  }
  Memory_Helper(a2, a3); /*0x54f237*/
  if ( (uint8_t)a2 != 1 && (uint8_t)a2 != 4 && (uint8_t)a2 != 2 && (uint8_t)a2 != 10 ) /*0x54f259*/
  {
    if ( (((uint16_t)EventClass::GetKeyStateSafe((EventClass *)0x10) >> 8) & 0x80u) != 0 ) /*0x54f268*/
      v5 = a2 | 0x100; /*0x54f26a*/
    if ( (((uint16_t)EventClass::GetKeyStateSafe((EventClass *)0x11) >> 8) & 0x80u) != 0 ) /*0x54f27d*/
      v5 |= 0x200u; /*0x54f27f*/
    result = EventClass::GetKeyStateSafe((EventClass *)0x12); /*0x54f28a*/
    if ( (result & 0x8000) != 0 ) /*0x54f292*/
    {
      if ( v5 == 9 ) /*0x54f298*/
      {
  LABEL_19:
        IDA_LOBYTE(result) = 1; /*0x54f2d7*/
        return result; /*0x54f2dc*/
      }
      v5 |= 0x400u; /*0x54f29a*/
    }
  }
  if ( a3 ) /*0x54f2a2*/
    v5 |= 0x800u; /*0x54f2a4*/
  v6 = *(unsigned int *)&this->__pad_58[704]; /*0x54f2aa*/
  result = (v6 + 1) % 256; /*0x54f2c0*/
  if ( result != *(unsigned int *)&this->__pad_58[700] ) /*0x54f2c7*/
  {
    *(unsigned short *)&this->__pad_58[2 * v6 + 188] = v5; /*0x54f2c9*/
    *(unsigned int *)&this->__pad_58[704] = result; /*0x54f2d1*/
    goto LABEL_19; /*0x54f2d1*/
  }
  IDA_LOBYTE(result) = 0; /*0x54f2e1*/
  return result; /*0x54f2d7*/
}
}
// 0x5F19C0
namespace gamemd {
int EventClass::CheckFlag()
{
  EventClass **EventClass_field_0x38; // eax

  EventClass_field_0x38 = (EventClass **)this->EventClass_field_0x38; /*0x5f19c0*/
  if ( EventClass_field_0x38 ) /*0x5f19c5*/
    EventClass::serializeEvent(EventClass_field_0x38[1]); /*0x5f19ca*/
  return 1; /*0x5f19d4*/
}
}
// 0x664440
namespace gamemd {
AbstractClass * * EventClass::validateEventType()
{
  int v1; // ebx
  int v3; // eax
  int v4; // ecx
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  char *v8; // eax
  Network *v9; // ecx
  int v10; // eax
  unsigned int *v11; // edx
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  uint8_t v14[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = dword_A8E2CC; /*0x664444*/
  if ( dword_A8E2CC == -1 ) /*0x664451*/
  {
    v3 = *(unsigned int *)this->__pad_10; /*0x664453*/
    v4 = 0; /*0x664456*/
    if ( v3 > 0 ) /*0x66445a*/
    {
      do /*0x66447c*/
      {
        v5 = *(char **)(this->EventClass_field_0x4 + 4 * v4); /*0x664461*/
        if ( v5[41] && !v5[39] ) /*0x66446a*/
        {
          v1 = *v5; /*0x664470*/
          v5[39] = 1; /*0x664473*/
        }
        ++v4; /*0x664479*/
      }
      while ( v4 < *(unsigned int *)this->__pad_10 ); /*0x66447c*/
    }
  }
  else
  {
    v6 = *(unsigned int *)this->__pad_10; /*0x664480*/
    v7 = 0; /*0x664483*/
    if ( v6 > 0 ) /*0x664487*/
    {
      do /*0x6644a7*/
      {
        v8 = *(char **)(this->EventClass_field_0x4 + 4 * v7); /*0x66448e*/
        v8[39] = *v8 == v1; /*0x664498*/
        ++v7; /*0x6644a4*/
      }
      while ( v7 < *(unsigned int *)this->__pad_10 ); /*0x6644a7*/
    }
  }
  if ( SessionClass::IsValidHouse((int)&dword_A8B238, 0) /*0x6644d2*/
    || v1 == -1
    || v1 != dword_A83D4C->Object_field_0x30
    || dword_A8DA84 <= 2 )
  {
    return v1; /*0x664526*/
  }
  v9 = 0; /*0x6644d4*/
  v10 = 0; /*0x6644d6*/
  if ( dword_A8DA84 > 0 ) /*0x6644db*/
  {
    v11 = dword_A8DA78; /*0x6644dd*/
    while ( *(unsigned int *)(*v11 + 111) != v1 ) /*0x6644e8*/
    {
      ++v10; /*0x6644ea*/
      ++v11; /*0x6644eb*/
      if ( v10 >= dword_A8DA84 ) /*0x6644f0*/
        goto LABEL_23; /*0x6644f0*/
    }
    v9 = (Network *)(dword_A8DA78[v10] + 40); /*0x6644fd*/
  }
  LABEL_23:
  Network::CopyAddress(v9, &v13, (int)v14); /*0x664500*/
  LaunchMultiplayerHost(v14); /*0x664516*/
  return v1; /*0x66451c*/
}
}
// 0x40B6A0
namespace gamemd {
void EventClass::initEvent()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x40b6a6*/
  this->Count = 0; /*0x40b6a9*/
  if ( v2 && this->IsAllocated ) /*0x40b6b0*/
  {
    RA2_OPDEL(v2); /*0x40b6b6*/
    *(unsigned int *)&this->q004 = 0; /*0x40b6be*/
  }
  this->IsAllocated = 0; /*0x40b6c1*/
  *(unsigned int *)&this->q008 = 0; /*0x40b6c4*/
}
} // namespace gamemd

// 0x40B740
namespace gamemd {
char EventClass::processEvent(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40b74c*/
  {
    IDA_LOBYTE(this->q00C) = 0; /*0x40b756*/
    if ( a3 ) /*0x40b75c*/
      v4 = a3; /*0x40b772*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40b76e*/
    IDA_LOBYTE(this->q00C) = 1; /*0x40b776*/
    if ( v4 ) /*0x40b77a*/
    {
      if ( *(unsigned int *)&this->q004 ) /*0x40b785*/
      {
        m_8 = *(unsigned int *)&this->q008; /*0x40b78c*/
        if ( a2 < m_8 ) /*0x40b791*/
          m_8 = a2; /*0x40b793*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x40b799*/
          ++i; /*0x40b79e*/
        if ( this->IsAllocated ) /*0x40b7ab*/
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x40b7b6*/
          *(unsigned int *)&this->q004 = 0; /*0x40b7be*/
        }
      }
      *(void **)&this->q004 = v4; /*0x40b7c7*/
      *(unsigned int *)&this->q008 = a2; /*0x40b7cf*/
      this->IsAllocated = a3 == 0; /*0x40b7d2*/
      return 1; /*0x40b7d8*/
    }
    else
    {
      return 0; /*0x40b77f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVBombClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40b7e2*/
    return 1; /*0x40b7e8*/
  }
}
} // namespace gamemd

// 0x40B880
namespace gamemd {
char EventClass::validateEvent(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40b88c*/
  {
    IDA_LOBYTE(this->q00C) = 0; /*0x40b892*/
    if ( a3 ) /*0x40b898*/
      v4 = a3; /*0x40b8ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40b8aa*/
    IDA_LOBYTE(this->q00C) = 1; /*0x40b8b2*/
    if ( !v4 ) /*0x40b8b6*/
      return 0; /*0x40b92a*/
    if ( *(unsigned int *)&this->q004 ) /*0x40b8b8*/
    {
      m_8 = *(unsigned int *)&this->q008; /*0x40b8bf*/
      if ( a2 < m_8 ) /*0x40b8c4*/
        m_8 = a2; /*0x40b8c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x40b8cc*/
        ++i; /*0x40b8d1*/
      if ( this->IsAllocated ) /*0x40b8de*/
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x40b8e9*/
        *(unsigned int *)&this->q004 = 0; /*0x40b8f1*/
      }
    }
    *(void **)&this->q004 = v4; /*0x40b8fa*/
    *(unsigned int *)&this->q008 = a2; /*0x40b902*/
    this->IsAllocated = a3 == 0; /*0x40b905*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVBombClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40b90e*/
  }
  v7 = *(unsigned int *)&this->q008; /*0x40b911*/
  if ( v7 < this->Count ) /*0x40b919*/
    this->Count = v7; /*0x40b91b*/
  return 1; /*0x40b91e*/
}
} // namespace gamemd

// 0x40B9A0
namespace gamemd {
char EventClass::dispatchEvent(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x40b9ac*/
  {
    IDA_LOBYTE(this->q00C) = 0; /*0x40b9b6*/
    if ( a3 ) /*0x40b9bc*/
      v4 = a3; /*0x40b9d2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40b9ce*/
    IDA_LOBYTE(this->q00C) = 1; /*0x40b9d6*/
    if ( v4 ) /*0x40b9da*/
    {
      if ( *(unsigned int *)&this->q004 ) /*0x40b9e5*/
      {
        m_8 = *(unsigned int *)&this->q008; /*0x40b9ec*/
        if ( a2 < m_8 ) /*0x40b9f1*/
          m_8 = a2; /*0x40b9f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x40b9f9*/
          ++i; /*0x40b9fe*/
        if ( this->IsAllocated ) /*0x40ba0b*/
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x40ba16*/
          *(unsigned int *)&this->q004 = 0; /*0x40ba1e*/
        }
      }
      *(void **)&this->q004 = v4; /*0x40ba27*/
      *(unsigned int *)&this->q008 = a2; /*0x40ba2f*/
      this->IsAllocated = a3 == 0; /*0x40ba32*/
      return 1; /*0x40ba38*/
    }
    else
    {
      return 0; /*0x40b9df*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVTechnoClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40ba42*/
    return 1; /*0x40ba48*/
  }
}
} // namespace gamemd

// 0x40BAE0
namespace gamemd {
char EventClass::checkCondition(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40baec*/
  {
    IDA_LOBYTE(this->q00C) = 0; /*0x40baf2*/
    if ( a3 ) /*0x40baf8*/
      v4 = a3; /*0x40bb0e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40bb0a*/
    IDA_LOBYTE(this->q00C) = 1; /*0x40bb12*/
    if ( !v4 ) /*0x40bb16*/
      return 0; /*0x40bb8a*/
    if ( *(unsigned int *)&this->q004 ) /*0x40bb18*/
    {
      m_8 = *(unsigned int *)&this->q008; /*0x40bb1f*/
      if ( a2 < m_8 ) /*0x40bb24*/
        m_8 = a2; /*0x40bb26*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x40bb2c*/
        ++i; /*0x40bb31*/
      if ( this->IsAllocated ) /*0x40bb3e*/
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x40bb49*/
        *(unsigned int *)&this->q004 = 0; /*0x40bb51*/
      }
    }
    *(void **)&this->q004 = v4; /*0x40bb5a*/
    *(unsigned int *)&this->q008 = a2; /*0x40bb62*/
    this->IsAllocated = a3 == 0; /*0x40bb65*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVTechnoClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40bb6e*/
  }
  v7 = *(unsigned int *)&this->q008; /*0x40bb71*/
  if ( v7 < this->Count ) /*0x40bb79*/
    this->Count = v7; /*0x40bb7b*/
  return 1; /*0x40bb7e*/
}
} // namespace gamemd

// 0x40BC10
namespace gamemd {
DynamicVector * EventClass::executeAction(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->q004; /*0x40bc13*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_BombClass___vftable; /*0x40bc16*/
  if ( v3 && this->IsAllocated ) /*0x40bc20*/
  {
    RA2_OPDEL(v3); /*0x40bc28*/
    *(unsigned int *)&this->q004 = 0; /*0x40bc30*/
  }
  this->IsAllocated = 0; /*0x40bc3b*/
  *(unsigned int *)&this->q008 = 0; /*0x40bc41*/
  if ( (a2 & 1) != 0 ) /*0x40bc48*/
    RA2_OPDEL(); /*0x40bc4b*/
  return this; /*0x40bc55*/
}
} // namespace gamemd

// 0x40BD00
namespace gamemd {
unsigned int * EventClass::resetEvent(BuildingClass * aP1, BuildingClass * aP2)
{
  this->EventClass_field_0x4 = 0; /*0x40bd0b*/
  this->EventClass_field_0x8 = (void *)aP1; /*0x40bd0e*/
  IDA_LOBYTE(this->EventClass_field_0xC) = 1; /*0x40bd11*/
  IDA_BYTE1(this->EventClass_field_0xC) = 0; /*0x40bd15*/
  this->EventClass_field_0x0 = (int)&VectorClass_TechnoClass___vftable; /*0x40bd18*/
  if ( aP1 ) /*0x40bd1e*/
  {
    if ( aP2 ) /*0x40bd26*/
    {
      this->EventClass_field_0x4 = (void *)aP2; /*0x40bd28*/
      return &this->EventClass_field_0x0; /*0x40bd2e*/
    }
    this->EventClass_field_0x4 = (void *)RA2_OPNEW(4 * aP1); /*0x40bd3d*/
    IDA_BYTE1(this->EventClass_field_0xC) = 1; /*0x40bd40*/
  }
  return &this->EventClass_field_0x0; /*0x40bd2d*/
}
} // namespace gamemd

// 0x40BE10
namespace gamemd {
void EventClass::finalizeEvent()
{
  dword_87F658 = (int)&VectorClass_CommandClass_const___vftable; /*0x40be18*/
  if ( dword_87F65C && byte_87F665 ) /*0x40be2c*/
  {
    RA2_OPDEL(dword_87F65C); /*0x40be2f*/
    dword_87F65C = 0; /*0x40be37*/
  }
  byte_87F665 = 0; /*0x40be3d*/
  dword_87F660 = 0; /*0x40be43*/
}
} // namespace gamemd

// 0x40C110
namespace gamemd {
VectorClass_flat * EventClass::queueEvent(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->q004; /*0x40c113*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_CommandClass_const___vftable; /*0x40c116*/
  if ( v3 && this->IsAllocated ) /*0x40c120*/
  {
    RA2_OPDEL(v3); /*0x40c128*/
    *(unsigned int *)&this->q004 = 0; /*0x40c130*/
  }
  this->IsAllocated = 0; /*0x40c13b*/
  *(unsigned int *)&this->q008 = 0; /*0x40c141*/
  if ( (a2 & 1) != 0 ) /*0x40c148*/
    RA2_OPDEL(); /*0x40c14b*/
  return this; /*0x40c155*/
}
} // namespace gamemd

// 0x40C260
namespace gamemd {
unsigned int EventClass::dequeueEvent(int a2)
{
  if ( IDA_LOBYTE(this->q00C) ) /*0x40c260*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q004) >> 2; /*0x40c275*/
  else
    return 0; /*0x40c267*/
}
} // namespace gamemd

// 0x40C410
namespace gamemd {
char EventClass::clearEvents(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40c41c*/
  {
    IDA_LOBYTE(this->q00C) = 0; /*0x40c422*/
    if ( a3 ) /*0x40c428*/
      v4 = a3; /*0x40c43e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40c43a*/
    IDA_LOBYTE(this->q00C) = 1; /*0x40c442*/
    if ( !v4 ) /*0x40c446*/
      return 0; /*0x40c4ba*/
    if ( *(unsigned int *)&this->q004 ) /*0x40c448*/
    {
      m_8 = *(unsigned int *)&this->q008; /*0x40c44f*/
      if ( a2 < m_8 ) /*0x40c454*/
        m_8 = a2; /*0x40c456*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x40c45c*/
        ++i; /*0x40c461*/
      if ( this->IsAllocated ) /*0x40c46e*/
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x40c479*/
        *(unsigned int *)&this->q004 = 0; /*0x40c481*/
      }
    }
    *(void **)&this->q004 = v4; /*0x40c48a*/
    *(unsigned int *)&this->q008 = a2; /*0x40c492*/
    this->IsAllocated = a3 == 0; /*0x40c495*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVLightConvertClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40c49e*/
  }
  v7 = *(unsigned int *)&this->q008; /*0x40c4a1*/
  if ( v7 < this->Count ) /*0x40c4a9*/
    this->Count = v7; /*0x40c4ab*/
  return 1; /*0x40c4ae*/
}
} // namespace gamemd

// 0x40C590
namespace gamemd {
void EventClass::getEventCount()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40c59c*/
  dbl_87F6F8 = Math::Sqrt(v0 + v0); /*0x40c5ae*/
}
} // namespace gamemd

// 0x53EC70
namespace gamemd {
SHORT EventClass::GetKeyStateSafe(unsigned char nVirtKey)
{
  int result; // eax

  IDA_HIWORD(result) = IDA_HIWORD(stru_AA0398.AudioStream_field_0xAC); /*0x53ec70*/
  if ( stru_AA0398.AudioStream_field_0xAC ) /*0x53ec77*/
    IDA_LOWORD(result) = word_AA0168[(uint8_t)nVirtKey]; /*0x53ec87*/
  else
    IDA_LOWORD(result) = GetKeyState((uint8_t)nVirtKey); /*0x53ec7a*/
  return result; /*0x53ec80*/
}
} // namespace gamemd

// 0x5F3440
namespace gamemd {
int EventClass::GetState(int a1)
{
  return 0; /*0x5f3442*/
}
} // namespace gamemd
