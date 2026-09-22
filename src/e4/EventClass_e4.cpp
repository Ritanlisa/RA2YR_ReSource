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

// 0x48B390
namespace gamemd {
int EventClass::serializeEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = this->q004; /*0x48b390*/
  int v2 = 0; /*0x48b397*/
  this->q028 = 0; /*0x48b39b*/
  if ( result > 0 ) /*0x48b39e*/
  {
    result = 0; /*0x48b3a1*/
    do /*0x48b402*/
    {
      *(_DWORD *)(result + this->q024) &= ~1u; /*0x48b3ad*/
      *(_DWORD *)(result + this->q024) &= ~2u; /*0x48b3b9*/
      _DWORD * v3 = (_DWORD *)(result + this->q024); /*0x48b3be*/
      result += 36; /*0x48b3c0*/
      ++v2; /*0x48b3c8*/
      *v3 &= ~4u; /*0x48b3c9*/
      *(_DWORD *)(this->q024 + result - 32) = 0; /*0x48b3ce*/
      *(_DWORD *)(this->q024 + result - 28) = 0; /*0x48b3d5*/
      *(_DWORD *)(this->q024 + result - 24) = 0; /*0x48b3dc*/
      *(_DWORD *)(this->q024 + result - 20) = 0; /*0x48b3e3*/
      *(_DWORD *)(this->q024 + result - 12) = 0; /*0x48b3ea*/
      *(_WORD *)(this->q024 + result - 4) = 0; /*0x48b3f1*/
      *(_DWORD *)(this->q00C + 4 * v2 - 4) = 0; /*0x48b3f9*/
    }
    while ( v2 < this->q004 ); /*0x48b402*/
  }
  return result; /*0x48b405*/
}
}
} // namespace gamemd

// 0x48BAD0
namespace gamemd {
int EventClass::SetData(int a2, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q044 = a2; /*0x48bad8*/
  this->q048 = a3; /*0x48badf*/
  this->q04C = a4; /*0x48bae6*/
  this->q050 = a5; /*0x48baed*/
  this->q054 = a6; /*0x48baf0*/
  return a6; /*0x48baf3*/
}
}
} // namespace gamemd

// 0x4C65E0
namespace gamemd {
void * EventClass::Add(AbstractClass * aP1, unsigned char a3, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  Debug::Log(); /*0x4c65fc*/
  if ( (int)aP1 < 0 ) /*0x4c660a*/
  {
    this->q008 = -1; /*0x4c6631*/
    *this = 0; /*0x4c6635*/
    this->q00C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x4c663d*/
    return this; /*0x4c6640*/
  }
  else
  {
    this->q008 = (char)aP1; /*0x4c6610*/
    *this = a3; /*0x4c661a*/
    this->q007 = a4; /*0x4c661c*/
    this->q00B = a5; /*0x4c6620*/
    this->q00C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x4c6629*/
    return this; /*0x4c661e*/
  }
}
}
} // namespace gamemd

// 0x4C66C0
namespace gamemd {
void * EventClass::AddEvent(int a2, unsigned char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  Debug::Log("Adding event %s\n", off_82091C[a3]); /*0x4c66dc*/
  if ( a2 < 0 ) /*0x4c66ea*/
  {
    this->q008 = -1; /*0x4c6701*/
    *this = 0; /*0x4c6705*/
    this->q00C = g_CurrentFrame; /*0x4c670d*/
    return this; /*0x4c6710*/
  }
  else
  {
    this->q008 = a2; /*0x4c66ec*/
    *this = a3; /*0x4c66ef*/
    this->q00C = g_CurrentFrame; /*0x4c66f9*/
    return this; /*0x4c66f7*/
  }
}
}
} // namespace gamemd

// 0x4C6720
namespace gamemd {
void * EventClass::Add2(AnimClass * aP1, unsigned char a3, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  Debug::Log(); /*0x4c673c*/
  if ( (int)aP1 < 0 ) /*0x4c674a*/
  {
    this->q008 = -1; /*0x4c6767*/
    *this = 0; /*0x4c676b*/
    this->q00C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x4c6776*/
    return this; /*0x4c6774*/
  }
  else
  {
    this->q008 = (char)aP1; /*0x4c6750*/
    *this = a3; /*0x4c6753*/
    this->q007 = aP3; /*0x4c6755*/
    this->q00C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x4c675d*/
    return this; /*0x4c6760*/
  }
}
}
} // namespace gamemd

// 0x4C6970
namespace gamemd {
void * EventClass::AddEventEx(SelectClass_StripClass_SidebarClass * aP1, unsigned char a3, IUnknown * aP3, SelectClass_StripClass_SidebarClass * aP4, SelectClass_StripClass_SidebarClass * aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  Debug::Log(); /*0x4c698c*/
  if ( (int)aP1 < 0 ) /*0x4c699a*/
  {
    this->q008 = -1; /*0x4c69c6*/
    *this = 0; /*0x4c69ca*/
    this->q00C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x4c69d2*/
    return this; /*0x4c69d5*/
  }
  else
  {
    this->q008 = (char)aP1; /*0x4c69a4*/
    *this = a3; /*0x4c69ab*/
    this->q007 = aP3; /*0x4c69ad*/
    this->q00B = aP4; /*0x4c69b0*/
    this->q03C = aP5; /*0x4c69b3*/
    this->q00C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x4c69be*/
    return this; /*0x4c69bc*/
  }
}
}
} // namespace gamemd

// 0x4C6AE0
namespace gamemd {
void * EventClass::Init(IUnknown * aP1, char a3, int a4, int a5, int arg10, unsigned short * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  Debug::Log(); /*0x4c6afc*/
  if ( (int)aP1 < 0 ) /*0x4c6b0a*/
  {
    this->q008 = -1; /*0x4c6b49*/
    *this = 0; /*0x4c6b4d*/
    this->q00C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x4c6b58*/
    return this; /*0x4c6b56*/
  }
  else
  {
    this->q008 = (char)aP1; /*0x4c6b14*/
    this->q00B = a5; /*0x4c6b1b*/
    *this = a3; /*0x4c6b22*/
    this->q007 = a4; /*0x4c6b24*/
    this->q03C = arg10; /*0x4c6b27*/
    this->q04C = *a6; /*0x4c6b2d*/
    this->q015 = a6[1]; /*0x4c6b35*/
    this->q00C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x4c6b3f*/
    return this; /*0x4c6b42*/
  }
}
}
} // namespace gamemd

// 0x4C6CB0
namespace gamemd {
AbstractClass * * EventClass::ProcessEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HouseClass *v3; // ecx
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
  __int16 v22; // dx
  AbstractClass *v24; // eax
  int Object; // eax
  _BYTE *Member; // eax
  int ecx86; // ecx
  IUnknown *v34; // ebx
  void *Next; // eax
  IUnknown *eax99a; // eax
  IUnknown *v41; // ebx
  void *eax107; // eax
  TechnoClass *v46; // esi
  int currentMission; // eax
  _DWORD *captureManager; // ecx
  _DWORD *esi130; // esi
  CellStruct *v51; // esi
  _DWORD *eax144; // eax
  CellStruct *v55; // esi
  int ecx148; // ecx
  CellStruct *v57; // esi
  AnimClass *v58; // edx
  __int16 cx156; // cx
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
  __int16 v97; // [esp+2Ah] [ebp-358h]
  AbstractClass v98; // [esp+2Eh] [ebp-354h] BYREF
  __int16 v104; // [esp+DEh] [ebp-2A4h]
  wchar_t Buffer[80]; // [esp+E2h] [ebp-2A0h] BYREF
  wchar_t v107[256]; // [esp+182h] [ebp-200h] BYREF

  v3 = HouseClass_Array;
  int v4 = this->q008;
  int v5 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v4];
  switch ( *(_BYTE *)this )
  {
  int a1; // [esp+16h] [ebp-36Ch] BYREF
  int v86; // eax
    case 1:
      Building = (BuildingClass *)BuildingLoadQueue::FindBuilding((_BYTE *)(this + 7));
      ClearFactoryClassProduction(Building, 0);
      if ( Building && Building->isAliveFlag && !Building->inLimbo && !*((_BYTE *)Building->Type + 5824) )
        BuildingClass::AnnounceReady((int)Building);
      return;
    case 2:
      v7 = (BuildingClass *)BuildingLoadQueue::FindBuilding((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v7, 0);
      if ( v7 && v7->isAliveFlag && !v7->inLimbo && !*((_BYTE *)v7->Type + 5824) )
        BuildingClass::PowerOff((int)v7);
      return;
    case 3:
      if ( (unsigned __int8)HouseClass::IsAlliedWith(
                              (void *)v5,
                              *(IUnknown **)&HouseClass_Array->__pad_0[4 * this->q007]) )
        COMStub_4F9F70((void *)v5, this->q007, 1);
      else
        HouseClass::MakeAlly((void *)v5, this->q007, 1);
      return;
    case 4:
    case 5:
      _DWORD * v26 = BuildingLoadQueue::Find((_BYTE *)(this + 7));
      if ( *(_BYTE *)(this + 29) == 1 )
        goto LABEL_2;
      ClearFactoryClassProduction(v26, this);
      if ( v26 )
      {
        if ( *((_BYTE *)v26 + 144) )
        {
          if ( (int)v26[27] > 0 && !*((_BYTE *)v26 + 129) )
          {
            int v27 = 0;
            if ( !this->q048
  int v28; // eax
              || (v28 = BuildingLoadQueue::FindObject((_BYTE *)(this + 14)), (v27 = v28) == 0)
              || *(_BYTE *)(v28 + 144) && *(_DWORD *)(v28 + 108) && !*(_BYTE *)(v28 + 129) )
            {
              if ( !*(_BYTE *)(this + 23)
                || (Object = BuildingLoadQueue::FindObject((_BYTE *)(this + 19)), (v27 = Object) == 0)
                || *(_BYTE *)(Object + 144) && *(_DWORD *)(Object + 108) && !*(_BYTE *)(Object + 129) )
              {
                if ( (unsigned char)this->EventClass_field_0xC != 7
                  || v26[43] != 7
                  || (v26[5] & 4) == 0
  void *v30; // eax
  void *v31; // ebp
                  || (v30 = BuildingLoadQueue::GetNext((_BYTE *)(this + 19)), (v31 = v30) == 0)
                  || (*(int (__thiscall **)(void *))(*(_DWORD *)v30 + 44))(v30) != 6
                  || (void *)Team::GetMember(v26, 0) != v31 )
                {
  _DWORD *v36; // ebp
                  if ( *((_BYTE *)v26 + 1048) )
                  {
                    Member = (_BYTE *)Team::GetMember(v26, 0);
                    _BYTE * v33 = Member;
                    if ( Member
                      && Member[144]
                      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Member + 44))(Member) == 6
                      && *(_BYTE *)(*((_DWORD *)v33 + 328) + 5811) )
                    {
                      (*(void (__thiscall **)(_DWORD *, int))(*v26 + 628))(v26, 3);
                      *((_BYTE *)v26 + 1048) = 0;
                    }
                  }
                  else
                  {
                    (*(void (__thiscall **)(_DWORD *, int))(*v26 + 628))(v26, 3);
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
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v27 + 328))(v27, 7);
                  v34 = (IUnknown *)(*(int (__thiscall **)(_DWORD *, int))(*v26 + 1188))(v26, this);
                  (*(void (__thiscall **)(_DWORD *, IUnknown *, _DWORD))(*v26 + 488))(v26, v34, 0);
                  if ( (v26[5] & 4) != 0 )
                  {
                    v36 = v26;
                    v26[362] = 0;
                  }
                  else
                  {
                    v36 = 0;
                  }
                  _DWORD * v37 = (_DWORD *)v26[182];
                  v26[174] = 0;
                  if ( v37 && v34 != (IUnknown *)1 )
                    FactoryClass::ResetProductionTimers(v37);
                  if ( (unsigned char)this->EventClass_field_0xC == 11 && (v26[5] & 4) != 0 )
                  {
                    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v26 + 968))(v26, 0);
                    int v38 = *v26;
                    _BYTE * v39 = (_BYTE *)(this + 14);
                    Next = BuildingLoadQueue::GetNext(v39);
                    (*(void (__thiscall **)(_DWORD *, void *, int))(v38 + 1152))(v26, Next, 1);
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
                    v41 = (IUnknown *)BuildingLoadQueue::GetNext((_BYTE *)(this + 14));
                    (*(void (__thiscall **)(_DWORD *, IUnknown *))(*v26 + 968))(v26, v41);
                    int v43 = *v26;
                    void * v44 = BuildingLoadQueue::GetNext((_BYTE *)(this + 19));
                    (*(void (__thiscall **)(_DWORD *, void *, int))(v43 + 1152))(v26, v44, 1);
                    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v26 + 132))(v26) + 1508) && v41 )
                      CCINIClass::IterateNodes(v26, v41);
                    if ( this->q007 )
                    {
                      int v45 = *v26;
                      eax107 = BuildingLoadQueue::GetNext((_BYTE *)(this + 24));
                      (*(void (__thiscall **)(_DWORD *, void *))(v45 + 1148))(v26, eax107);
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
      v46 = (TechnoClass *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
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
                    *((_BYTE *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&v98.uniqueId) + 284))
                || !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 688))(v46) )
              {
                if ( (v46->abstractFlags & 4) != 0 )
                {
                  (*(void (__thiscall **)(char *))(*(_DWORD *)&v46[1].onBridge + 12))(&v46[1].onBridge);
                  FootClass::ClearSomeVector(v46);
                  a1 = 0;
                  *(_DWORD *)v46[1].__pad_0 = -1;
                  BYTE2(v46[1].firepowerMultiplier[0]) = 0;
                  *(_DWORD *)&v46[1].__pad_0[4] = 0;
                  *(_DWORD *)&v46[1].__pad_0[8] = 0;
                }
                (*(void (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v46->__pad_0 + 640))(v46, 3);
                (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(*(_DWORD *)v46->__pad_0 + 1152))(v46, 0, 1);
                (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v46->__pad_0 + 968))(v46, 0);
                if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 132))(v46) + 3434) )
                {
                  (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(*(_DWORD *)v46->__pad_0 + 1152))(v46, 0, 1);
                  (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v46->__pad_0 + 968))(v46, 0);
                }
                captureManager = v46->captureManager;
                if ( captureManager )
                  UnitClass::ProcessIdleOrders(captureManager);
                if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 132))(v46) + 1508) )
                  CCINIClass::IterateNodes(v46, 0);
                if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 44))(v46) == 1 )
                {
                  if ( *(_BYTE *)(v46[1].ironTintTimer[2] + 3598) )
                  {
                    int v50 = v46->currentMission;
                    if ( v50 == 10 || v50 == 12 )
                    {
                      (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(*(_DWORD *)v46->__pad_0 + 488))(v46, 5, 0);
                      (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)v46->__pad_0 + 492))(v46);
                    }
                  }
                  esi130 = *(_DWORD **)&v46->mindControlledBy_a_unit;
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
      v57 = (CellStruct *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v57, 0);
      if ( v57 && (v57->__pad_8[12] & 4) != 0 && v57->__pad_34[92] && !v57->__pad_34[77] && !v57[1].__pad_FC[84] )
      {
        v58 = (AnimClass *)v57->field_0;
        v57[2].__pad_FC[38] = 1;
        ((void (__thiscall *)(CellStruct *, char *, int, _DWORD))v58->field_174)(
          v57,
          &stru_89E138[22656],
          1,
          0);
      }
      return;
    case 8:
      goto LABEL_184;
    case 9:
      v51 = (CellStruct *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v51, 0);
      if ( v51 )
      {
        if ( v51->__pad_34[92] )
        {
          if ( !v51->__pad_34[77] && !v51[1].__pad_FC[84] && !*(_DWORD *)&v51[1].__pad_170[204] )
          {
            if ( v51->__pad_34[88]
  _DWORD v100[3]; // [esp+56h] [ebp-32Ch] BYREF
              || (v100[0] = *(_DWORD *)&v51->__pad_34[104],
                  v100[1] = *(_DWORD *)&v51->__pad_34[108],
                  v100[2] = *(_DWORD *)&v51->__pad_34[112],
                  *((_BYTE *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v100) + 284))
              || !(*(unsigned __int8 (__thiscall **)(CellStruct *))(v51->field_0 + 688))(v51) )
            {
              int v53 = *(_DWORD *)&v51->__pad_34[120];
              if ( v53 != 18 && v53 != 19 && (*(int (__thiscall **)(CellStruct *))(v51->field_0 + 44))(v51) != 2 )
              {
  char v101[4]; // [esp+62h] [ebp-320h] BYREF
                a1 = *(_DWORD *)(*(int (__thiscall **)(CellStruct *, char *))(v51->field_0 + 440))(v51, v101);
                if ( a1 == *(_DWORD *)&stru_89E138[22624]
  _DWORD *v54; // eax
                  || (v54 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&a1),
                      (eax144 = Cell::IsBridge(v54)) == 0)
                  || !*(_BYTE *)(eax144[328] + 5821) )
                {
                  (*(void (__thiscall **)(CellStruct *, int))(v51->field_0 + 628))(v51, 3);
                  (*(void (__thiscall **)(CellStruct *, _DWORD, int))(v51->field_0 + 1152))(v51, 0, 1);
                  (*(void (__thiscall **)(CellStruct *, _DWORD))(v51->field_0 + 968))(v51, 0);
                  (*(void (__thiscall **)(CellStruct *, int, _DWORD))(v51->field_0 + 488))(v51, 16, 0);
                }
              }
            }
          }
        }
      }
      return;
    case 0xA:
      v55 = (CellStruct *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v55, 0);
      if ( v55 )
      {
        ecx148 = *(_DWORD *)&v55->__pad_34[4];
        if ( ecx148 )
          TechnoClass::ApplyDamageEffects(ecx148);
      }
      return;
    case 0xB:
      v22 = (unsigned short)this->EventClass_field_0x15;
      *(_WORD *)&v98[4] = this->q04C;
      bool v23 = this->q03C == 0;
      v24 = this->q007;
      *(_WORD *)&v98[6] = v22;
      HouseClass::CompleteProduction(v5, v24, this->q00B, !v23, (int)&v98[4]);
      return;
    case 0xC:
      if ( (HouseClass_Player[39084] & 2) == 0 )
        *(_DWORD *)&HouseClass_Player[45140] = 1;
      return;
    case 0xD:
      *(_DWORD *)&HouseClass_Player[44564] = this->q007;
      int v62 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * this->q008];
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
      LOBYTE(v3) = this->q03C != 0;
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
      int v25 = BuildingLoadQueue::FindBuilding((_BYTE *)(this + 7));
      ClearFactoryClassProduction((_DWORD *)v25, 0);
      if ( v25 && *(_BYTE *)(v25 + 144) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v25 + 1264))(v25);
      return;
    case 0x12:
      cx156 = this->IsAllocated;
      *(_WORD *)v98[0] = this->q00B;
      v60 = this->q007;
      *(_WORD *)&v98[2] = cx156;
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
      if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&v91) + 80) & 0x100) != 0 )
        GroundHeight = (AnimClass *)((char *)GroundHeight + *(_DWORD *)&stru_89E138[22708]);
      if ( this->q007 == -1 )
      {
        v17 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( !v17 )
          return;
        v18 = AnimClass::ctor(
                v17,
                *(CoordStruct **)(*(_DWORD *)&stru_87C374[44652] + 2996),
                (CoordStruct *)&v91,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
      }
      else
      {
        v19 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( !v19 )
          return;
        v18 = AnimClass::ctor(
                v19,
                *(CoordStruct **)(*(_DWORD *)&stru_89E138[90140] + 4 * this->q007),
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
        v21 = this->q00B;
        if ( v21 != (BuildingTypeClass *)-1
          && !(unsigned __int8)House::IsHumanPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * (_DWORD)v21]) )
        {
          v20->__pad_194[9] = 1;
        }
      }
      return;
    case 0x15:
      _BYTE * v11 = BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v11, 0);
      if ( v11 && v11[144] )
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v11 + 412))(v11, -1);
      return;
    case 0x16:
      v12 = (CellStruct *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v12, 0);
      if ( v12 && v12->__pad_34[92] && *(_DWORD *)(*(_DWORD *)&v12->__pad_170[172] + 48) == this->q008 )
      {
        if ( (*(int (__thiscall **)(CellStruct *))(v12->field_0 + 44))(v12) == 6
          || ((*(int (__thiscall **)(CellStruct *))(v12->field_0 + 44))(v12) == 1
           || (*(int (__thiscall **)(CellStruct *))(v12->field_0 + 44))(v12) == 2)
  char v102[12]; // [esp+66h] [ebp-31Ch] BYREF
          && (v13 = (IUnknown *)(*(int (__thiscall **)(CellStruct *, char *))(v12->field_0 + 72))(v12, v102),
  _DWORD *v14; // eax
              v14 = Coord::To_Cell(&stru_87C374[13428], v13),
              Cell::IsBridge(v14)) )
        {
          (*(void (__thiscall **)(CellStruct *, int))(v12->field_0 + 416))(v12, -1);
        }
      }
      return;
    case 0x17:
      v15 = this->q007;
      *(_WORD *)&v98[10] = this->q024;
      *(_WORD *)&v98[8] = v15;
      BuildingClass::Capture((void *)v5, (HouseClass *)&v98[8], 0);
      return;
    case 0x18:
      if ( v5 )
      {
        *(_DWORD *)&HouseClass_Player[44052] = this->q007;
        **(_DWORD **)&HouseClass_Player[29924] = this->q007;
        v10 = GetStringCSF(aTxtSpecialWarn, 0, g_Str_File_Event_CPP, 953);
        swprintf(Buffer, (const size_t)v10, (const wchar_t *const)(v5 + 90154), _2);
        MessageListClass::AddMessage(
          &HouseClass_Player[32532],
          0,
          0,
          (CellStruct *)Buffer,
          *(_DWORD *)(v5 + 90196),
          (IUnknown *)0x4046,
          1200,
          0);
        MapClass::MarkForRedraw(&stru_87C374[13428], 0);
      }
      return;
    case 0x1B:
      *(_DWORD *)&HouseClass_Player[30724] = this->IsAllocated;
      return;
    case 0x1D:
      if ( !*(_DWORD *)&HouseClass_Player[45140] )
      {
        Timer::GetTicks();
        int v99 = 60;
        aP2_4 = (HouseClass *)v98.NeedsSaveOrLink;
        GroundHeight = (AnimClass *)60;
        v98.referenceCount = Timer::GetTicks();
        v91 = (HouseClass *)v98.referenceCount;
        *(_DWORD *)&v98[12] = &stru_82083C;
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
            signed int v69 = Timer::GetTicks() - (_DWORD)v91;
            if ( v69 >= (int)GroundHeight )
              goto LABEL_173;
            v67 = (IUnknown *)((char *)GroundHeight - v69);
          }
          if ( (int)v67 <= 0 )
          {
LABEL_173:
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374[44952] + 24))(
              *(_DWORD *)&stru_87C374[44952],
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
      v8 = (ObjectClass *)BuildingLoadQueue::Find((_BYTE *)(this + 7));
      ClearFactoryClassProduction(v8, 0);
      if ( v8 && v8->isAliveFlag )
      {
        v9 = (IUnknown *)BuildingLoadQueue::GetNext((_BYTE *)(this + 12));
        TechnoClass::SetFocus(v8, v9);
      }
      return;
    case 0x1F:
      if ( v4 != *(_DWORD *)(HouseClass_Player.field_0 + 48) )
        __3_YAXPAX_Z(this->q007);
      return;
    case 0x20:
      this->q024 -= (**(_DWORD **)&HouseClass_Player[29924] & 0x1000) != 0 ? 0xA : 0;
      if ( (unsigned int)this->q024 > *(_DWORD *)&HouseClass_Player[30724]
        || (unsigned int)this->q00B > *(_DWORD *)&HouseClass_Player[30728] )
      {
        *(_DWORD *)&HouseClass_Player[29868] = this->q00C;
        v86 = this->q00B
            * ((this->q00B + this->q024 + this->q00C - 1)
             / this->q00B);
      }
      else
      {
        v86 = 0;
        *(_DWORD *)&HouseClass_Player[29868] = 0;
      }
      *(_DWORD *)&HouseClass_Player[29840] = v86;
  int v87; // eax
      HIWORD(v87) = 0;
      *(_DWORD *)&HouseClass_Player[30732] = this->q007;
      LOWORD(v87) = this->q024;
      *(_DWORD *)&HouseClass_Player[30724] = (unsigned __int16)v87;
      if ( *(_DWORD *)&HouseClass_Player[30748] <= (unsigned int)(unsigned __int16)v87 )
        *(_DWORD *)&HouseClass_Player[30748] = v87;
      *(_DWORD *)&HouseClass_Player[30728] = this->q00B;
      return;
    case 0x21:
      int v88 = 0;
      if ( *(int *)&HouseClass_Player[40248] <= 0 )
        return;
      for ( i = *(_DWORD *)&HouseClass_Player[40236]; v4 != *(_DWORD *)(*(_DWORD *)i + 111); i += 4 )
      {
        if ( ++v88 >= *(int *)&HouseClass_Player[40248] )
          return;
      }
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v88) + 115) = this->q007;
      return;
    case 0x22:
      if ( (HouseClass_Player[39084] & 2) == 0 )
        *(_DWORD *)&HouseClass_Player[45140] = 7;
      return;
    case 0x23:
      Debug::Log();
      v70 = this->q007;
      v5 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)v70];
      if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
      {
        if ( !HouseClass_Player[40532] )
          goto LABEL_182;
        if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * (_DWORD)v70]) )
          NetworkManager::RemovePlayer((int)&g_NetworkEventQueue, v70);
        if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
        {
LABEL_182:
          if ( dword_B779C4 )
            goto LABEL_184;
        }
      }
      if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)v5) )
LABEL_184:
        Network::SendOffer(v5);
      return;
    case 0x24:
      Debug::Log();
      *(_DWORD *)&HouseClass_Player[40528] = this->q007;
      Debug::Log();
      v62 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * this->q008];
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
              int v65 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374[44652] + 5312) * 900.0);
              MessageListClass::AddMessage(
                &HouseClass_Player[32532],
                0,
                0,
                (CellStruct *)v107,
                *(_DWORD *)(v62 + 90196),
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
  _BYTE v103[108]; // [esp+72h] [ebp-310h] BYREF
        int v77 = *(_DWORD *)(HouseClass_Player.field_0 + 48);
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
        *(_DWORD *)&v103[3] = *(_DWORD *)&HouseClass_Player[45112];
        if ( Networking_LastEventIndex < 128 )
        {
          char * v78 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex];
          qmemcpy(v78, v103, 0x6Cu);
          v78 += 108;
          *(_WORD *)v78 = v104;
          char v105 = v105;
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
          Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
          ++Networking_LastEventIndex;
        }
        HouseClass_Player[42340] = 1;
      }
      HouseClass_Player[42372] = 1;
      int v79 = EventClass::validateEventType((int *)&g_NetworkEventQueue);
      int v80 = v79;
      if ( v79 == -1 )
        goto LABEL_214;
      int v81 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v79];
      int v96 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v80];
      if ( !v81 )
        goto LABEL_213;
      if ( *(int *)&HouseClass_Player[40248] <= 2 )
        goto LABEL_211;
      _DWORD * v82 = 0;
      int v83 = 0;
      if ( *(int *)&HouseClass_Player[40248] <= 0 )
        goto LABEL_209;
      int v84 = *(_DWORD *)&HouseClass_Player[40236];
      while ( *(_DWORD *)(*(_DWORD *)v84 + 111) != v80 )
      {
        ++v83;
        v84 += 4;
        if ( v83 >= *(int *)&HouseClass_Player[40248] )
          goto LABEL_209;
      }
      v82 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v83) + 40);
      *(_WORD *)&HouseClass_Player[40560] = *(_WORD *)&HouseClass_Player[21864][2 * v83 + 20478];
LABEL_209:
      Network::CopyAddress(v82, &a1, (int)&v91);
      NetworkID::Assign(&HouseClass_Player[40536], (IPXManagerClass *)&a1, (int)&v91, 0);
      Network::FormatAddress((unsigned __int16 *)&HouseClass_Player[40536], 0);
      Debug::Log();
      Debug::Log();
      if ( !SessionClass::IsValidHouse((int)&HouseClass_Player[29932], 0) )
        Network::SetPlayerCoords(
          &HouseClass_Player[44148],
          (IPXManagerClass *)&HouseClass_Player[40536]);
LABEL_211:
      wcscpy((wchar_t *)&HouseClass_Player[42252], (const wchar_t *)(v96 + 90154));
      Debug::Log();
      *(_DWORD *)&HouseClass_Player[42336] = v80;
      if ( SessionClass::IsValidHouse((int)&HouseClass_Player[29932], 0) )
        Network::SendMasterPlayerList((int)&g_NetworkEventQueue);
LABEL_213:
      *(_DWORD *)&HouseClass_Player[42380] = *(_DWORD *)&HouseClass_Player[45112];
      *(_DWORD *)&HouseClass_Player[42388] = v80;
      *(_DWORD *)&HouseClass_Player[42368] = -1;
      *(_DWORD *)&HouseClass_Player[42384] = 10
                                                      * ((*(_DWORD *)&HouseClass_Player[30724]
                                                        + *(_DWORD *)&HouseClass_Player[45112]
                                                        + 10)
                                                       / 0xAu);
LABEL_214:
      HouseClass_Player[42372] = 0;
      return;
    case 0x28:
      Debug::Log();
      *(_DWORD *)&HouseClass_Player[42368] = this->q007;
      return;
    case 0x29:
      Debug::Log();
      int v72 = this->EventClass_field_0x8;
      v97 = 0;
      a1 = 0;
      v96 = v72;
      NetworkAddress::Assign(&v91, &a1, (IUnknown *)&v96, 0);
      Network::FormatAddress((unsigned __int16 *)&v91, (IUnknown *)&v91);
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
      v75 = *(_DWORD *)&HouseClass_Player[40236];
      break;
    case 0x2A:
    case 0x2B:
    case 0x2C:
LABEL_2:
      ScriptAction::DispatchBuilding((char *)this);
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
  while ( *(_DWORD *)(*(_DWORD *)v75 + 111) != v74 )
  {
    ++v73;
    v75 += 4;
    if ( v73 >= *(int *)&HouseClass_Player[40248] )
      return;
  }
  if ( v73 < *(int *)&HouseClass_Player[40248] )
  {
    v76 = (HouseClass **)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v73) + 40);
    *v76 = v91;
    v76[1] = aP2_4;
    v76[2] = (HouseClass *)GroundHeight;
  }
}
}
} // namespace gamemd

// 0x542280
namespace gamemd {
int EventClass::deserializeEvent(int a2, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = this->vt_slot_24(a2); /*0x54228c*/
  if ( result != -1 && result < this->q044 ) /*0x542297*/
  {
    int * v5 = (int *)(*(this + result + 10) + 76); /*0x5422a1*/
    *v5 = aP2->field_0; /*0x5422a6*/
    v5[1] = aP2->field_4; /*0x5422ab*/
    result = aP2->field_8; /*0x5422ae*/
    v5[2] = result; /*0x5422b1*/
  }
  return result; /*0x5422b4*/
}
}
} // namespace gamemd

// 0x54F200
namespace gamemd {
int EventClass::Enqueue(unsigned short a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v5; // si
  if ( (unsigned __int8)ChronoScreen::IsActive() ) /*0x54f205*/
    return 1; /*0x54f205*/
  v5 = a2; /*0x54f217*/
  if ( g_GameActive ) /*0x54f21d*/
  {
    if ( a2 != 27 ) /*0x54f223*/
      return 1; /*0x54f223*/
  }
  int v4; // edx
  LOBYTE(v4) = a3; /*0x54f22f*/
  Memory_Helper(a2, v4); /*0x54f237*/
  if ( (unsigned __int8)a2 != 1 && (unsigned __int8)a2 != 4 && (unsigned __int8)a2 != 2 && (unsigned __int8)a2 != 10 ) /*0x54f259*/
  {
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe(16) >> 8) & 0x80u) != 0 ) /*0x54f268*/
      v5 = a2 | 0x100; /*0x54f26a*/
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe(17) >> 8) & 0x80u) != 0 ) /*0x54f27d*/
      v5 |= 0x200u; /*0x54f27f*/
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe(18) >> 8) & 0x80u) != 0 ) /*0x54f292*/
    {
      if ( v5 == 9 ) /*0x54f298*/
        return 1; /*0x54f2dc*/
      v5 |= 0x400u; /*0x54f29a*/
    }
  }
  if ( a3 ) /*0x54f2a2*/
    v5 |= 0x800u; /*0x54f2a4*/
  int v6 = *(this + 198); /*0x54f2aa*/
  int v7 = (v6 + 1) % 256; /*0x54f2c0*/
  if ( v7 != *(this + 197) ) /*0x54f2c7*/
  {
    *((_WORD *)this + v6 + 138) = v5; /*0x54f2c9*/
    *(this + 198) = v7; /*0x54f2d1*/
    return 1; /*0x54f2d1*/
  }
  return 0; /*0x54f2d7*/
}
}
} // namespace gamemd

// 0x5F19C0
namespace gamemd {
int EventClass::CheckFlag()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = this->q038; /*0x5f19c0*/
  if ( v1 ) /*0x5f19c5*/
    EventClass::serializeEvent(*(int **)(v1 + 4)); /*0x5f19ca*/
  return 1; /*0x5f19d4*/
}
}
} // namespace gamemd

// 0x664440
namespace gamemd {
AbstractClass * * EventClass::validateEventType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 v14[8]; // [esp+10h] [ebp-8h] BYREF

  AbstractClass *v1 = DataGlobal_A8E2CC; /*0x664444*/
  if ( DataGlobal_A8E2CC == -1 ) /*0x664451*/
  {
    AbstractClass *v3 = this->q004; /*0x664453*/
    int v4 = 0; /*0x664456*/
    if ( v3 > 0 ) /*0x66445a*/
    {
      do /*0x66447c*/
      {
        char * v5 = *(char **)(this->q004 + 4 * v4); /*0x664461*/
        if ( v5[41] && !v5[39] ) /*0x66446a*/
        {
          v1 = *v5; /*0x664470*/
          v5[39] = 1; /*0x664473*/
        }
        ++v4; /*0x664479*/
      }
      while ( v4 < this->q004 ); /*0x66447c*/
    }
  }
  else
  {
    AbstractClass *v6 = this->q004; /*0x664480*/
    int v7 = 0; /*0x664483*/
    if ( v6 > 0 ) /*0x664487*/
    {
      do /*0x6644a7*/
      {
        char * v8 = *(char **)(this->q004 + 4 * v7); /*0x66448e*/
        v8[39] = *v8 == v1; /*0x664498*/
        ++v7; /*0x6644a4*/
      }
      while ( v7 < this->q004 ); /*0x6644a7*/
    }
  }
  if ( SessionClass::IsValidHouse((int)g_GameMode_Current, 0) /*0x6644d2*/
    || v1 == -1
    || v1 != *((_DWORD *)HouseClass_Player + 12)
    || Game_PlayerCount <= 2 )
  {
    return v1; /*0x664526*/
  }
  _DWORD * v9 = 0; /*0x6644d4*/
  int v10 = 0; /*0x6644d6*/
  if ( Game_PlayerCount > 0 ) /*0x6644db*/
  {
    int v11 = Game_PlayerInfoArray; /*0x6644dd*/
    while ( *(_DWORD *)(*(_DWORD *)v11 + 111) != v1 ) /*0x6644e8*/
    {
      ++v10; /*0x6644ea*/
      v11 += 4; /*0x6644eb*/
      if ( v10 >= Game_PlayerCount ) /*0x6644f0*/
        goto LABEL_23; /*0x6644f0*/
    }
    v9 = (_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v10) + 40); /*0x6644fd*/
  }
LABEL_23:
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  Network::CopyAddress(v9, &v13, (int)v14); /*0x664500*/
  LaunchMultiplayerHost((int)this, v14); /*0x664516*/
  return v1; /*0x66451c*/
}
}
} // namespace gamemd

// 0x40B6A0
namespace gamemd {
void EventClass::initEvent()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->EventClass_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->EventClass_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x40B740
namespace gamemd {
char EventClass::processEvent(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->EventClass_field_0x4 )
      {
    v6 = this->EventClass_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
        }
      }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->initEvent();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40B880
namespace gamemd {
char EventClass::validateEvent(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->EventClass_field_0x4 )
    {
    v5 = this->EventClass_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
      }
    }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->initEvent();
  }
    v7 = this->EventClass_field_0x8;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40B9A0
namespace gamemd {
char EventClass::dispatchEvent(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->EventClass_field_0x4 )
      {
    v6 = this->EventClass_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
        }
      }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->initEvent();
    return 1;
  }
}
}
} // namespace gamemd

// 0x40BAE0
namespace gamemd {
char EventClass::checkCondition(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->EventClass_field_0x4 )
    {
    v5 = this->EventClass_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
      }
    }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->initEvent();
  }
    v7 = this->EventClass_field_0x8;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40BC10
namespace gamemd {
DynamicVector * EventClass::executeAction(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_BombClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x40BD00
namespace gamemd {
unsigned int * EventClass::resetEvent(BuildingClass * aP1, BuildingClass * aP2)
{
{
    this->Items = 0;
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TechnoClass;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = aP2;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
  }
    return this;
}
}
} // namespace gamemd

// 0x40BE10
namespace gamemd {
void EventClass::finalizeEvent()
{
{
    g_CommandClassVector = (int)&vt_VectorClass_CommandClass_const;
    if ( g_CommandClass_Capacity && g_CommandClass_HasInit )
  {
    __3_YAXPAX_Z(g_CommandClass_Capacity);
    g_CommandClass_Capacity = 0;
  }
    g_CommandClass_HasInit = 0;
    g_CommandClass_Size = 0;
}
}
} // namespace gamemd

// 0x40C110
namespace gamemd {
VectorClass * EventClass::queueEvent(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CommandClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x40C260
namespace gamemd {
unsigned int EventClass::dequeueEvent(int a2)
{
{
    if ( (unsigned char)this->EventClass_field_0xC )
    return (unsigned int)(a2 - this->EventClass_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x40C410
namespace gamemd {
char EventClass::clearEvents(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->EventClass_field_0x4 )
    {
    v5 = this->EventClass_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->EventClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->EventClass_field_0x4 = 0;
      }
    }
    this->EventClass_field_0x4 = v4;
    this->EventClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->initEvent();
  }
    v7 = this->EventClass_field_0x8;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x40C590
namespace gamemd {
void EventClass::getEventCount()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_87F6F8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x53EC70
namespace gamemd {
SHORT EventClass::GetKeyStateSafe(unsigned char nVirtKey)
{
    if ( g_StreamBufferState )
        return *(DataGlobal_AA0168 + nVirtKey);
    else
        return GetKeyState(nVirtKey);
}
} // namespace gamemd

// 0x5F3440
namespace gamemd {
int EventClass::GetState(int a1)
{
return 0;
}
} // namespace gamemd
