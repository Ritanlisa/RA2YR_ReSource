// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"

// 0x44F820
namespace gamemd {
int Scenario::ReadTeams()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Scenario::ReadTeams()
{
  Scenario *v1; // esi
  int result; // eax
  CCINIClass *v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  CCINIClass *v7; // eax
  CCINIClass *v12; // edx
  CCINIClass *v22; // esi
  TechnoClass *v29; // esi
  int health; // edx
  AbstractClass *v38; // eax
  AbstractClass *v39; // edx
  int *ambientSoundController; // ebp
  IUnknown *v44; // ecx
  CCINIClass *v47; // ebx
  AbstractClass *v48; // edi
  BuildingClass *v50; // eax
  _DWORD *Value; // eax
  CCINIClass *v59; // [esp+Ch] [ebp-D8h]
  CCINIClass *v60; // [esp+Ch] [ebp-D8h]
  CCINIClass *v61; // [esp+10h] [ebp-D4h]
  CCINIClass *v62; // [esp+14h] [ebp-D0h]
  CCINIClass *IndexByName; // [esp+18h] [ebp-CCh]
  CCINIClass *v64; // [esp+18h] [ebp-CCh]
  CCINIClass *v65; // [esp+1Ch] [ebp-C8h]
  CCINIClass *v66; // [esp+20h] [ebp-C4h]
  CCINIClass *v69; // [esp+2Ch] [ebp-B8h]
  INIClass String[2]; // [esp+64h] [ebp-80h] BYREF

  v1 = this; /*0x44f827*/
  INIClass::ResetSection(this); /*0x44f82d*/
  _DWORD v73[3]; // [esp+3Ch] [ebp-A8h] BYREF
  memset(v73, 255, sizeof(v73)); /*0x44f83b*/
  result = INIClass::GetKeyCount(v1->__pad_0, (INIClass *)aStructures); /*0x44f84a*/
  v3 = 0; /*0x44f84f*/
  int v71 = result; /*0x44f853*/
  int v68 = 0; /*0x44f857*/
  if ( result > 0 ) /*0x44f85b*/
  {
    while ( 1 ) /*0x44f874*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (CCINIClass *)aStructures, v3); /*0x44f874*/
      INIClass::GetString((unsigned __int8 ***)v1, (INIClass *)aStructures, StringByIndex, 0, String, 128); /*0x44f88f*/
      char * v5 = strtok(String[0].__pad_0, Delimiter[0]); /*0x44f89e*/
      int v6 = HouseClass::FindByName(v5); /*0x44f8a8*/
      if ( v6 != -1 ) /*0x44f8b0*/
      {
        v7 = *(CCINIClass **)&HouseClass_Array->__pad_0[4 * v6]; /*0x44f8bc*/
        v65 = v7; /*0x44f8c1*/
        if ( v7 ) /*0x44f8c5*/
        {
          if ( !g_GameMode_Current || v7 != (CCINIClass *)HouseClass_Player ) /*0x44f8db*/
          {
            char * v8 = strtok(0, Delimiter[0]); /*0x44f8e8*/
            IndexByName = (CCINIClass *)BuildingTypeClass::FindIndexByName(v8); /*0x44f8fa*/
            if ( IndexByName != (CCINIClass *)-1 ) /*0x44f8fe*/
            {
              char * v9 = strtok(0, Delimiter[0]); /*0x44f90b*/
              v61 = (CCINIClass *)atoi(v9); /*0x44f919*/
              if ( *(int *)&g_NetworkPlayerBuffer[5952] < 4 ) /*0x44f92c*/
              {
                char * v13 = strtok(0, Delimiter[0]); /*0x44f95e*/
                int v14 = atoi(v13); /*0x44f964*/
                LOWORD(v66) = v14 % 128; /*0x44f97f*/
                HIWORD(v66) = v14 / 128; /*0x44f989*/
                v12 = v66; /*0x44f98e*/
              }
              else
              {
                char * v10 = strtok(0, Delimiter[0]); /*0x44f92e*/
                LOWORD(v69) = atoi(v10); /*0x44f940*/
                char * v11 = strtok(0, Delimiter[0]); /*0x44f945*/
                HIWORD(v69) = atoi(v11); /*0x44f950*/
                v12 = v69; /*0x44f955*/
              }
              v59 = v12; /*0x44f999*/
              char * v15 = strtok(0, Delimiter[0]); /*0x44f99d*/
              int v67 = atoi(v15); /*0x44f9af*/
              char * v16 = strtok(0, Delimiter[0]); /*0x44f9bf*/
              bool v58 = 0; /*0x44f9c1*/
              char * v17 = strtok(0, Delimiter[0]); /*0x44f9c6*/
              if ( v17 ) /*0x44f9d0*/
                v58 = atoi(v17) != 0; /*0x44f9dd*/
              bool v57 = 0; /*0x44f9e9*/
              char * v18 = strtok(0, Delimiter[0]); /*0x44f9ee*/
              if ( v18 ) /*0x44f9f8*/
                v57 = atoi(v18) != 0; /*0x44fa05*/
              bool v55 = 1; /*0x44fa11*/
              char * v19 = strtok(0, Delimiter[0]); /*0x44fa16*/
              if ( v19 ) /*0x44fa20*/
                v55 = atoi(v19) != 0; /*0x44fa2d*/
              v62 = 0; /*0x44fa39*/
              char * v20 = strtok(0, Delimiter[0]); /*0x44fa41*/
              if ( v20 ) /*0x44fa4b*/
                v62 = (CCINIClass *)atoi(v20); /*0x44fa56*/
              int aP1 = 1; /*0x44fa61*/
              char * v21 = strtok(0, Delimiter[0]); /*0x44fa69*/
              if ( v21 ) /*0x44fa73*/
                aP1 = atoi(v21); /*0x44fa7e*/
              v22 = (CCINIClass *)v73; /*0x44fa82*/
              int v23 = 3; /*0x44fa86*/
              do /*0x44faab*/
              {
                char * v24 = strtok(0, Delimiter[0]); /*0x44fa92*/
                if ( v24 ) /*0x44fa9c*/
                  *(_DWORD *)v22->__pad_0 = BuildingTypeClass::FindIndexByName(v24); /*0x44faa5*/
                v22 = (CCINIClass *)((char *)v22 + 4); /*0x44faa7*/
                --v23; /*0x44faaa*/
              }
              while ( v23 ); /*0x44faab*/
              bool v56 = 0; /*0x44fab4*/
              char * v25 = strtok(0, Delimiter[0]); /*0x44fab9*/
              if ( v25 ) /*0x44fac3*/
                v56 = atoi(v25) != 0; /*0x44fad0*/
              bool v26 = 0; /*0x44fadc*/
              char * v27 = strtok(0, Delimiter[0]); /*0x44fade*/
              if ( v27 ) /*0x44fae8*/
                v26 = atoi(v27) != 0; /*0x44faf5*/
              int v28 = __2_YAPAXI_Z(0x720u); /*0x44fafd*/
              if ( v28 ) /*0x44fb07*/
              {
                v29 = (TechnoClass *)BuildingClass::Construct( /*0x44fb27*/
                                       v28,
                                       *((AbstractClass **)g_TriggerTypeCount + (_DWORD)IndexByName),
                                       (AbstractClass *)v65);
                if ( v29 ) /*0x44fb2b*/
                {
                  void * v30 = (void *)ObjectTypeClass::FindByName(v16); /*0x44fb33*/
                  if ( v30 ) /*0x44fb3a*/
                  {
                    int v31 = TeamClass::FindOrCreate(v30); /*0x44fb3e*/
                    if ( v31 ) /*0x44fb45*/
                      ObjectClass::SetReference(v29, v31); /*0x44fb4a*/
                  }
                  LOBYTE(v29[1].airstrikeTintTimer[1]) = v58; /*0x44fb5b*/
                  BYTE2(v29[1].ironTintStage) = v57; /*0x44fb61*/
                  HIBYTE(v29[1].ironTintStage) = v56; /*0x44fb70*/
                  BYTE1(v29[1].ironTintStage) = v26; /*0x44fb78*/
                  if ( (int)v61 >= 256 ) /*0x44fb7e*/
                    v61 = (CCINIClass *)256; /*0x44fb80*/
                  int v32 = *(_DWORD *)v29[1].__pad_0; /*0x44fb88*/
                  int v33 = Math::RoundToInt((double)(int)v61 * 0.00390625 * (double)*(int *)(v32 + 160)); /*0x44fb9a*/
                  v29->health = v33; /*0x44fb9f*/
                  int v34 = *(_DWORD *)(v32 + 160); /*0x44fba2*/
                  if ( v33 > v34 - 3 ) /*0x44fbad*/
                    v29->health = v34; /*0x44fbaf*/
                  health = v29->health; /*0x44fbbc*/
  _DWORD v74[3]; // [esp+48h] [ebp-9Ch] BYREF
                  v74[2] = 0; /*0x44fbbf*/
                  v29->estimatedHealth = health; /*0x44fbcf*/
                  int v36 = *(_DWORD *)v29->__pad_0; /*0x44fbd5*/
                  v64 = (CCINIClass *)(((__int16)v59 << 8) + 128); /*0x44fbd7*/
                  v74[0] = v64; /*0x44fbdb*/
                  v60 = (CCINIClass *)((SHIWORD(v59) << 8) + 128); /*0x44fbe5*/
                  v74[1] = v60; /*0x44fbe9*/
                  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD *, int))(v36 + 216))(v29, v74, v67) ) /*0x44fbf9*/
                  {
                    _DWORD * v37 = (_DWORD *)v29[1].radioLinks[0]; /*0x44fc07*/
                    if ( v37 ) /*0x44fc0f*/
                      BuildingLightClass::FindTarget(v37, (CCINIClass *)aP1); /*0x44fc16*/
                    if ( v55 ) /*0x44fc21*/
                    {
                      if ( !LOBYTE(v29[1].currentRank) && !v29->empLockRemaining ) /*0x44fc35*/
                      {
                        v38 = (AbstractClass *)v29->focus; /*0x44fc43*/
                        LOBYTE(v29[1].currentRank) = 1; /*0x44fc49*/
                        v29->needsRedraw = 1; /*0x44fc50*/
                        v38[622].__pad_0[0] = 1; /*0x44fc57*/
                        *((_BYTE *)v29->focus + 22393) = 1; /*0x44fc64*/
                        v39 = (AbstractClass *)v29->focus; /*0x44fc6b*/
                        v39[14].__pad_0[4] = 1; /*0x44fc71*/
                        _BYTE * v40 = (_BYTE *)v29[1].passengers[0]; /*0x44fc78*/
                        BYTE2(v29[1].isDeactivated) = 1; /*0x44fc80*/
                        if ( v40 ) /*0x44fc87*/
                          Trigger::EnableOnce(v40, 0); /*0x44fc8b*/
                        if ( *(_BYTE *)(*(_DWORD *)v29[1].__pad_0 + 5822) ) /*0x44fc96*/
                          BuildingClass::RepairPlacement(v29, 0); /*0x44fca4*/
                        int v41 = 0; /*0x44fca9*/
                        ambientSoundController = v29[1].ambientSoundController; /*0x44fcab*/
                        do /*0x44fcda*/
                        {
                          if ( *(_BYTE *)(v41 + *(_DWORD *)v29[1].__pad_0 + 3980) && *ambientSoundController ) /*0x44fcc2*/
                            VtableStub::Method_425270((_BYTE *)*ambientSoundController); /*0x44fcc9*/
                          v41 += 68; /*0x44fcce*/
                          ++ambientSoundController; /*0x44fcd1*/
                        }
                        while ( v41 < 1428 ); /*0x44fcda*/
                        int v43 = *(_DWORD *)v29[1].__pad_0; /*0x44fcdc*/
                        v44 = *(IUnknown **)(v43 + 3768); /*0x44fce2*/
                        if ( v44 ) /*0x44fcea*/
                        {
                          LOBYTE(v39) = *(_BYTE *)(v43 + 3278); /*0x44fcec*/
                          HouseClass::UpdateProduction((int)v29->focus, v44, v39, 0); /*0x44fcfc*/
                        }
                        if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v29->focus) ) /*0x44fd07*/
                          VoxClass::FindAndPlay(aEvaBuildingonl, -1, -1); /*0x44fd1a*/
                      }
                    }
                    else
                    {
                      BuildingClass::PowerOff((int)v29); /*0x44fd23*/
                    }
                    int v45 = *(_DWORD *)v29[1].__pad_0; /*0x44fd28*/
                    v29->__pad_3F7[38] = 0; /*0x44fd2e*/
                    if ( *(_BYTE *)(v45 + 5458) && !LOBYTE(v29[1].airstrikeTimer[0]) ) /*0x44fd3f*/
                      BuildingClass::Deactivate((int)v29); /*0x44fd4b*/
                    if ( (int)v62 > 0 ) /*0x44fd56*/
                    {
                      _DWORD * v46 = v73; /*0x44fd5a*/
                      v47 = v62; /*0x44fd5e*/
                      do /*0x44fdc3*/
                      {
                        if ( *v46 != -1 ) /*0x44fd66*/
                        {
                          v48 = (AbstractClass *)*((_DWORD *)g_TriggerTypeCount + *v46); /*0x44fd73*/
                          int v49 = __2_YAPAXI_Z(0x720u); /*0x44fd76*/
                          if ( v49 ) /*0x44fd80*/
                            v50 = BuildingClass::Construct(v49, v48, (AbstractClass *)v65); /*0x44fd8a*/
                          else
                            v50 = 0; /*0x44fd91*/
  _DWORD v75[3]; // [esp+54h] [ebp-90h] BYREF
                          v75[0] = v64; /*0x44fd9b*/
                          v75[1] = v60; /*0x44fda8*/
                          int v51 = *(_DWORD *)v50->__pad_0; /*0x44fdac*/
                          v75[2] = 0; /*0x44fdb1*/
                          (*(void (__thiscall **)(BuildingClass *, _DWORD *, int))(v51 + 216))(v50, v75, v67); /*0x44fdb9*/
                        }
                        ++v46; /*0x44fdbf*/
                        v47 = (CCINIClass *)((char *)v47 - 1); /*0x44fdc2*/
                      }
                      while ( v47 ); /*0x44fdc3*/
                    }
                    if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v29->__pad_0 + 1020))(v29) /*0x44fde1*/
                      && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v29->__pad_0 + 1020))(v29)
                      && v29[1].customSound_controller[4] )
                    {
  int v76; // [esp+60h] [ebp-84h] BYREF
                      Value = ProgressTimer::GetValue(&v29->target_laser_timer[2], (IUnknown *)&v76); /*0x44fdf6*/
                      int v53 = v29[1].customSound_controller[4]; /*0x44fdfd*/
                      unsigned int v54 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F; /*0x44fe09*/
                      if ( v53 ) /*0x44fe0e*/
                      {
                        *(_DWORD *)(v53 + 172) = dword_7F4890[v54]; /*0x44fe17*/
                        *(_DWORD *)(v53 + 196) = 0; /*0x44fe1d*/
                      }
                    }
                  }
                  else
                  {
                    (*(void (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v29->__pad_0 + 32))(v29, 1); /*0x44fe2f*/
                  }
                }
              }
            }
          }
        }
      }
      result = v71; /*0x44fe36*/
      v3 = (CCINIClass *)++v68; /*0x44fe3a*/
      if ( v68 >= v71 ) /*0x44fe41*/
        break; /*0x44fe41*/
      v1 = this; /*0x44f866*/
    }
  }
  return result; /*0x44fe4a*/
}
}
} // namespace gamemd

// 0x4C6180
namespace gamemd {
int Scenario::CopyLocalScenarioData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C6180(int this)
{
  int i; // eax
  int result; // eax

  int v2 = 0; /*0x4c6183*/
  for ( i = 0; i < 2050; *(_BYTE *)(v2 + this - 1) = *((_BYTE *)g_ScenarioClass_Instance + i + 7303) ) /*0x4c6185*/
  {
    i += 41; /*0x4c618d*/
    ++v2; /*0x4c6190*/
  }
  this->Scenario_field_0x34 = (*(int (__stdcall **)(char *))(*((_DWORD *)HouseClass_Player + 9) + 24))((char *)HouseClass_Player + 36); /*0x4c61b1*/
  int v4 = *((_DWORD *)g_ScenarioClass_Instance + 1146); /*0x4c61ba*/
  int v5 = *((_DWORD *)g_ScenarioClass_Instance + 1148); /*0x4c61c0*/
  if ( v4 != -1 ) /*0x4c61c9*/
  {
    if ( (int)g_CurrentFrame - v4 >= v5 ) /*0x4c61d5*/
      v5 = 0; /*0x4c61db*/
    else
      v5 -= (int)g_CurrentFrame - v4; /*0x4c61d7*/
  }
  this->Scenario_field_0x38 = v5; /*0x4c61dd*/
  result = *((_DWORD *)HouseClass_Player + 97); /*0x4c61e6*/
  this->q03C = result; /*0x4c61ec*/
  this->q010 = *((_WORD *)g_ScenarioClass_Instance + 6864); /*0x4c61fc*/
  return result; /*0x4c6200*/
}
}
} // namespace gamemd

// 0x50D610
namespace gamemd {
int Scenario::ProcessSidebarUnits()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_50D610(int this)
{
  int result; // eax
  int i; // [esp+Ch] [ebp-8h]

  result = g_SidebarState - 1; /*0x50d619*/
  for ( i = g_SidebarState - 1; i >= 0; --i ) /*0x50d622*/
  {
    _DWORD * v3 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + result); /*0x50d631*/
    if ( v3[135] == this ) /*0x50d63a*/
    {
  char v12[4]; // [esp+10h] [ebp-4h] BYREF
      int v4 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v3 + 440))(v3, v12); /*0x50d64d*/
      int v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 132))(v3); /*0x50d659*/
      int * v6 = (int *)__2_YAPAXI_Z(8u); /*0x50d660*/
      *v6 = v5; /*0x50d665*/
      v6[1] = v4; /*0x50d66d*/
      int v7 = *(_DWORD *)(this + 372); /*0x50d670*/
      if ( *(_DWORD *)(this + 380) < v7 /*0x50d695*/
        || (*(_BYTE *)(this + 377) || !v7)
  int v8; // ecx
        && (v8 = this->q060, v8 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 364) + 8))(this + 364, v7 + v8, 0) )
      {
        int v9 = *(_DWORD *)(this + 380); /*0x50d69c*/
        int v10 = *(_DWORD *)(this + 368); /*0x50d69f*/
        *(_DWORD *)(this + 380) = v9 + 1; /*0x50d6a5*/
        *(_DWORD *)(v10 + 4 * v9) = v6; /*0x50d6a8*/
      }
    }
    result = i - 1; /*0x50d6af*/
  }
  return result; /*0x50d6bd*/
}
}
} // namespace gamemd

// 0x552B10
namespace gamemd {
int Scenario::ComputeDisplayPosition()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_552B10(_DWORD *this)
{
  int result; // eax

  int v1 = g_DDraw_Active; /*0x552b12*/
  int v2 = 640; /*0x552b20*/
  if ( g_DDraw_Active != 640 ) /*0x552b2b*/
    v2 = 800; /*0x552b2d*/
  if ( g_GameMode_Current[0] ) /*0x552b3b*/
  {
    int v9 = 480; /*0x552b9a*/
    if ( g_DDraw_Active != 640 ) /*0x552ba2*/
      v9 = 600; /*0x552ba4*/
    int v10 = DataGlobal_8A00A8; /*0x552baa*/
    this->q024 = v2; /*0x552baf*/
    this->q028 = v9; /*0x552bb4*/
    this->q020 = (v10 - v9) / 2; /*0x552bc6*/
    result = (v1 - v2) / 2; /*0x552bc9*/
    this->q01C = result; /*0x552bcd*/
  }
  else
  {
    int v3 = 480; /*0x552b3f*/
    if ( g_DDraw_Active != 640 ) /*0x552b44*/
      v3 = 600; /*0x552b46*/
    int v4 = v3 - 80; /*0x552b4b*/
    int v5 = DataGlobal_8A00A8 - (v3 - 80); /*0x552b5c*/
    this->q014 = v2; /*0x552b5e*/
    this->q024 = v2; /*0x552b64*/
    int v6 = (v5 - 80) / 2; /*0x552b6f*/
    this->q010 = v6; /*0x552b71*/
    v6 += 40; /*0x552b74*/
    int v7 = (v1 - v2) / 2; /*0x552b76*/
    this->q034 = v2; /*0x552b78*/
    this->q00C = v7; /*0x552b7b*/
    this->q01C = v7; /*0x552b7e*/
    this->q020 = v6; /*0x552b81*/
    this->q02C = v7; /*0x552b84*/
    result = v4 + v6; /*0x552b88*/
    this->q028 = v4; /*0x552b8b*/
    this->q018 = 40; /*0x552b8f*/
    this->q030 = result; /*0x552b92*/
    this->q038 = 40; /*0x552b95*/
  }
  return result; /*0x552b87*/
}
}
} // namespace gamemd

// 0x552BE0
namespace gamemd {
unsigned int * Scenario::ComputeDialogPos(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_552BE0(int *this, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( g_GameMode_Current[0] ) /*0x552beb*/
  {
  int v10; // ecx
  int v9; // edx
  int v11; // [esp+4h] [ebp-8h] BYREF
    int * v6 = Copy8Bytes(&v11, this + 7); /*0x552c3b*/
    int v7 = *v6; /*0x552c40*/
    int v8 = v6[1]; /*0x552c48*/
    result = a2; /*0x552c54*/
    if ( g_DDraw_Active == 640 ) /*0x552c52*/
    {
      v9 = v7 + 12; /*0x552c58*/
      v10 = v8 + 256; /*0x552c5b*/
    }
    else
    {
      v9 = v7 + 16; /*0x552c71*/
      v10 = v8 + 321; /*0x552c74*/
    }
    *a2 = v9; /*0x552c62*/
    a2[1] = v10; /*0x552c64*/
  }
  else
  {
    int v2 = this->q02C; /*0x552bf8*/
    int v3 = this->q00C; /*0x552bff*/
    result = a2; /*0x552c02*/
    if ( g_DDraw_Active == 640 ) /*0x552bfd*/
      int v5 = v2 + 84; /*0x552c06*/
    else
      v5 = v2 + 164; /*0x552c1f*/
    *a2 = v5; /*0x552c0c*/
    a2[1] = v3 + 7; /*0x552c0e*/
  }
  return result; /*0x552c11*/
}
}
} // namespace gamemd

// 0x55AFB0
namespace gamemd {
void Scenario::Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Scenario_Update(_DWORD *this)
{
  void **v3; // esi
  _DWORD *v14; // ebp
  int v15; // edi
  int v16; // edx
  int v17; // eax
  int *v18; // esi
  __int64 v19; // rax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // edi
  int v28; // edx
  char *v29; // ecx
  int v30; // eax
  wchar_t *v31; // esi
  int v32; // eax
  int v33; // ecx
  char *v34; // edx
  int v35; // eax
  int v36; // ecx
  _DWORD *v37; // edx
  int v38; // eax
  int v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // eax
  _DWORD *v43; // esi
  int v44; // eax
  int i; // esi
  int j; // esi
  int v47; // edx
  int k; // esi
  int m; // esi
  int v50; // ecx
  int n; // esi
  int ii; // esi
  int jj; // esi
  int v54; // ecx
  int *v55; // eax
  int v57; // [esp+14h] [ebp-24h] BYREF
  int v58; // [esp+18h] [ebp-20h]
  int v59; // [esp+1Ch] [ebp-1Ch]
  void **v60; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v62; // [esp+28h] [ebp-10h]
  char v63; // [esp+2Dh] [ebp-Bh]
  int v64; // [esp+30h] [ebp-8h]
  int v65; // [esp+34h] [ebp-4h]
  int v1 = 0; /*0x55afc7*/
  char * v2 = (char *)g_ScenarioClass_Instance; /*0x55afcd*/
  ++dword_ABCD40; /*0x55afd3*/
  dword_A83CDC = 0; /*0x55afdb*/
  if ( g_ScenarioUpdateState > 0 ) /*0x55afe0*/
  {
    while ( 1 ) /*0x55afec*/
    {
      v3 = (void **)*((_DWORD *)DataGlobal_8B40CC + v1); /*0x55afec*/
      if ( v2[13502] ) /*0x55afef*/
      {
        if ( TeamClass::Update_0(v3, 50, 0, dword_ABCCD8, 0, 0) ) /*0x55b00a*/
          goto LABEL_22; /*0x55b011*/
        v2 = (char *)g_ScenarioClass_Instance; /*0x55b017*/
      }
      if ( v2[13482] ) /*0x55b01d*/
      {
        if ( TeamClass::Update_0(v3, 27, 0, dword_ABCCD8, 0, 0) /*0x55b090*/
          || TeamClass::Update_0(v3, 28, 0, dword_ABCCD8, 0, 0)
          || TeamClass::Update_0(v3, 36, 0, dword_ABCCD8, 0, 0)
          || TeamClass::Update_0(v3, 37, 0, dword_ABCCD8, 0, 0) )
        {
          goto LABEL_22; /*0x55b097*/
        }
        v2 = (char *)g_ScenarioClass_Instance; /*0x55b09d*/
      }
      if ( v2[13483] /*0x55b10f*/
        && (TeamClass::Update_0(v3, 45, 0, dword_ABCCD8, 0, 0) || TeamClass::Update_0(v3, 46, 0, dword_ABCCD8, 0, 0))
        || TeamClass::Update_0(v3, 13, 0, dword_ABCCD8, 0, 0)
        || TeamClass::Update_0(v3, 51, 0, dword_ABCCD8, 0, 0) )
      {
        goto LABEL_22; /*0x55b116*/
      }
      v2 = (char *)g_ScenarioClass_Instance; /*0x55b118*/
      if ( *((_DWORD *)g_ScenarioClass_Instance + 1146) != -1 ) /*0x55b124*/
      {
        int v4 = *((_DWORD *)g_ScenarioClass_Instance + 1146); /*0x55b126*/
        int v5 = *((_DWORD *)g_ScenarioClass_Instance + 1148); /*0x55b12c*/
        if ( v4 != -1 ) /*0x55b134*/
        {
          if ( (int)g_CurrentFrame - v4 >= v5 ) /*0x55b140*/
            break; /*0x55b140*/
          v5 -= (int)g_CurrentFrame - v4; /*0x55b142*/
        }
        if ( !v5 ) /*0x55b146*/
          break; /*0x55b146*/
      }
LABEL_23:
      v1 = ++dword_A83CDC; /*0x55b164*/
      if ( dword_A83CDC >= g_ScenarioUpdateState ) /*0x55b177*/
        goto LABEL_24; /*0x55b177*/
    }
    TeamClass::Update_0(v3, 14, 0, dword_ABCCD8, 0, 0); /*0x55b148*/
LABEL_22:
    v2 = (char *)g_ScenarioClass_Instance; /*0x55b15e*/
    goto LABEL_23; /*0x55b15e*/
  }
LABEL_24:
  int v6 = *((_DWORD *)v2 + 1146); /*0x55b17d*/
  _DWORD * v7 = v2 + 4584; /*0x55b183*/
  if ( v6 != -1 ) /*0x55b18b*/
  {
    char * v8 = (char *)*((_DWORD *)v2 + 1148); /*0x55b18d*/
    char * v9 = (char *)g_CurrentFrame - v6; /*0x55b19e*/
    if ( (int)g_CurrentFrame - *((_DWORD *)v2 + 1146) >= (int)v8 || v8 == v9 ) /*0x55b1a4*/
    {
      if ( *v7 != -1 ) /*0x55b1ae*/
      {
        int v10 = *((_DWORD *)v2 + 1148); /*0x55b1b0*/
        char * v11 = (char *)g_CurrentFrame - *v7; /*0x55b1b3*/
        if ( (int)v11 >= v10 ) /*0x55b1b9*/
          int v12 = 0; /*0x55b1bf*/
        else
          v12 = v10 - (_DWORD)v11; /*0x55b1bb*/
        *((_DWORD *)v2 + 1148) = v12; /*0x55b1c1*/
        *v7 = -1; /*0x55b1c4*/
      }
      MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2); /*0x55b1cd*/
      v2 = (char *)g_ScenarioClass_Instance; /*0x55b1d2*/
    }
  }
  v2[13482] = 0; /*0x55b1d8*/
  *((_BYTE *)g_ScenarioClass_Instance + 13481) = 0; /*0x55b1e4*/
  *((_BYTE *)g_ScenarioClass_Instance + 13483) = 0; /*0x55b1f1*/
  *((_BYTE *)g_ScenarioClass_Instance + 13502) = 0; /*0x55b1fe*/
  double * v13 = (double *)g_RulesClass_Instance; /*0x55b205*/
  if ( !*((_BYTE *)g_RulesClass_Instance + 6128) || *((double *)g_RulesClass_Instance + 712) == 0.0 ) /*0x55b226*/
  {
    v14 = g_ScenarioClass_Instance; /*0x55b28e*/
    goto LABEL_41; /*0x55b28e*/
  }
  v14 = g_ScenarioClass_Instance; /*0x55b228*/
  v15 = (int)g_CurrentFrame; /*0x55b22e*/
  v16 = *((_DWORD *)g_ScenarioClass_Instance + 1158); /*0x55b234*/
  v17 = *((_DWORD *)g_ScenarioClass_Instance + 1160); /*0x55b23a*/
  v18 = (int *)((char *)g_ScenarioClass_Instance + 4632); /*0x55b240*/
  if ( v16 == -1 ) /*0x55b249*/
    goto LABEL_38; /*0x55b249*/
  if ( (int)g_CurrentFrame - v16 < v17 ) /*0x55b251*/
  {
    v17 -= (int)g_CurrentFrame - v16; /*0x55b253*/
LABEL_38:
    if ( v17 ) /*0x55b257*/
      goto LABEL_42; /*0x55b257*/
  }
  v19 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 712) * 900.0); /*0x55b259*/
  v20 = v58; /*0x55b26a*/
  *v18 = v15; /*0x55b26e*/
  v18[1] = v20; /*0x55b270*/
  v18[2] = v19; /*0x55b278*/
  MapClass::ProcessVisibilityFlags(&DataGlobal_87F7E8, HIDWORD(v19)); /*0x55b27b*/
  v14 = g_ScenarioClass_Instance; /*0x55b280*/
  v13 = (double *)g_RulesClass_Instance; /*0x55b286*/
LABEL_41:
  v15 = (int)g_CurrentFrame; /*0x55b294*/
LABEL_42:
  if ( !(v15 % 120) ) /*0x55b2a2*/
  {
    CellSystem::UpdateVisibility(&DataGlobal_87F7E8); /*0x55b2ad*/
    v14 = g_ScenarioClass_Instance; /*0x55b2b2*/
    v13 = (double *)g_RulesClass_Instance; /*0x55b2b8*/
    v15 = (int)g_CurrentFrame; /*0x55b2be*/
  }
  if ( (*v14 & 0x1000) != 0 && v13[713] != 0.0 ) /*0x55b2dd*/
  {
    v21 = v14[1161]; /*0x55b2df*/
    v22 = v14[1163]; /*0x55b2e5*/
    if ( v21 != -1 ) /*0x55b2f4*/
    {
      if ( v15 - v21 >= v22 ) /*0x55b2fc*/
      {
LABEL_50:
        v23 = Math::RoundToInt(v13[713] * 900.0); /*0x55b304*/
        v24 = v58; /*0x55b315*/
        v14[1161] = v15; /*0x55b319*/
        v14[1162] = v24; /*0x55b31b*/
        v14[1163] = v23; /*0x55b323*/
        MapClass::ProcessFogTransition(&DataGlobal_87F7E8); /*0x55b326*/
        v14 = g_ScenarioClass_Instance; /*0x55b32b*/
        v13 = (double *)g_RulesClass_Instance; /*0x55b331*/
        v15 = (int)g_CurrentFrame; /*0x55b337*/
        goto LABEL_51; /*0x55b337*/
      }
      v22 -= v15 - v21; /*0x55b2fe*/
    }
    if ( !v22 ) /*0x55b302*/
      goto LABEL_50; /*0x55b302*/
  }
LABEL_51:
  if ( v14[3404] != v14[3403] && v13[717] != 0.0 ) /*0x55b362*/
  {
    v25 = v14[1170]; /*0x55b368*/
    v26 = v14[1172]; /*0x55b36e*/
    if ( v25 != -1 ) /*0x55b377*/
    {
      v27 = v15 - v25; /*0x55b379*/
      if ( v27 >= v26 ) /*0x55b37d*/
        goto LABEL_57; /*0x55b37d*/
      v26 -= v27; /*0x55b37f*/
    }
    if ( v26 ) /*0x55b383*/
      goto LABEL_71; /*0x55b383*/
LABEL_57:
    if ( (unsigned __int8)NukeFlash::IsActive() /*0x55b39b*/
      || (unsigned __int8)NukeFlash::ProcessEffect()
      || (unsigned __int8)ChronoScreen::IsActive() )
    {
      v28 = *((_DWORD *)g_ScenarioClass_Instance + 3422); /*0x55b40e*/
      v29 = (char *)g_ScenarioClass_Instance + 4680; /*0x55b414*/
      *((_DWORD *)g_ScenarioClass_Instance + 1170) = g_CurrentFrame; /*0x55b41a*/
      v30 = v58; /*0x55b41c*/
    }
    else
    {
      if ( !PsyDom::IsActive() ) /*0x55b3ab*/
      {
        v31 = g_CurrentFrame; /*0x55b3d2*/
        v32 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 717) * 900.0); /*0x55b3e4*/
        v33 = v58; /*0x55b3ef*/
        v34 = (char *)g_ScenarioClass_Instance + 4680; /*0x55b3f3*/
        *((_DWORD *)g_ScenarioClass_Instance + 1170) = v31; /*0x55b3f9*/
        *((_DWORD *)v34 + 1) = v33; /*0x55b3fb*/
        *((_DWORD *)v34 + 2) = v32; /*0x55b3fe*/
        goto LABEL_65; /*0x55b401*/
      }
      v28 = *((_DWORD *)g_ScenarioClass_Instance + 3429); /*0x55b3b8*/
      v29 = (char *)g_ScenarioClass_Instance + 4680; /*0x55b3be*/
      *((_DWORD *)g_ScenarioClass_Instance + 1170) = g_CurrentFrame; /*0x55b3c4*/
      v30 = v58; /*0x55b3c6*/
    }
    *((_DWORD *)v29 + 1) = v30; /*0x55b420*/
    *((_DWORD *)v29 + 2) = v28; /*0x55b423*/
LABEL_65:
    *((_DWORD *)g_ScenarioClass_Instance + 3404) &= (*((_DWORD *)g_ScenarioClass_Instance + 3404) <= 0) - 1; /*0x55b426*/
    v35 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 718) * 100.0); /*0x55b453*/
    v36 = *((_DWORD *)g_ScenarioClass_Instance + 3403); /*0x55b45e*/
    if ( *((_DWORD *)g_ScenarioClass_Instance + 3404) >= v36 ) /*0x55b46c*/
    {
      *((_DWORD *)g_ScenarioClass_Instance + 3403) = v35 + v36; /*0x55b490*/
      v37 = g_ScenarioClass_Instance; /*0x55b496*/
      v38 = *((_DWORD *)g_ScenarioClass_Instance + 3403); /*0x55b49c*/
      v39 = *((_DWORD *)g_ScenarioClass_Instance + 3404); /*0x55b4a2*/
      if ( v38 >= v39 ) /*0x55b4aa*/
LABEL_69:
        v38 = v39; /*0x55b4ac*/
    }
    else
    {
      *((_DWORD *)g_ScenarioClass_Instance + 3403) = v36 - v35; /*0x55b470*/
      v37 = g_ScenarioClass_Instance; /*0x55b476*/
      v38 = *((_DWORD *)g_ScenarioClass_Instance + 3403); /*0x55b47c*/
      v39 = *((_DWORD *)g_ScenarioClass_Instance + 3404); /*0x55b482*/
      if ( v38 <= v39 ) /*0x55b48a*/
        goto LABEL_69; /*0x55b48a*/
    }
    v37[3403] = v38; /*0x55b4ae*/
    *((_BYTE *)g_ScenarioClass_Instance + 13483) = 1; /*0x55b4ba*/
    MapClass::UpdateLightingPostProcess(&DataGlobal_87F7E8); /*0x55b4c6*/
    MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1); /*0x55b4d2*/
  }
LABEL_71:
  UpdateAudioTriggers(); /*0x55b4d7*/
  ProcessSpeechEvents(); /*0x55b4dc*/
  DispatchBuildingAudioEvents(&DataGlobal_87F5D8); /*0x55b4e6*/
  ScenarioClass::UpdateScriptActions(&g_MissionQueueFrame); /*0x55b4f0*/
  v40 = 0; /*0x55b4f5*/
  ScenarioClass::ProcessAmbientEffects(0, 0); /*0x55b4fd*/
  v41 = 10; /*0x55b507*/
  v60 = &vt_DynamicVectorClass_TeamClass; /*0x55b50e*/
  v65 = 10; /*0x55b516*/
  v64 = 0; /*0x55b51a*/
  if ( g_HouseClass_AIProductionState > 0 ) /*0x55b51e*/
  {
    v42 = v62; /*0x55b520*/
    while ( 1 ) /*0x55b530*/
    {
      v43 = (char *)g_TeamClassPool + 4 * v40; /*0x55b530*/
      if ( v64 < v42 ) /*0x55b539*/
        goto LABEL_79; /*0x55b539*/
      if ( (v63 || !v42) && v41 > 0 ) /*0x55b549*/
        break; /*0x55b549*/
LABEL_81:
      if ( ++v40 >= g_HouseClass_AIProductionState ) /*0x55b580*/
        goto LABEL_82; /*0x55b580*/
      v41 = v65; /*0x55b526*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v60[2])(&v60, v41 + v42, 0) ) /*0x55b558*/
    {
LABEL_79:
      v44 = v64++; /*0x55b55f*/
      *((_DWORD *)Block + v44) = *v43; /*0x55b570*/
    }
    v42 = v62; /*0x55b573*/
    goto LABEL_81; /*0x55b573*/
  }
LABEL_82:
  for ( i = 0; i < v64; ++i ) /*0x55b58a*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)Block + i) + 92))(*((_DWORD *)Block + i)); /*0x55b595*/
  for ( j = DataGlobal_8A0218 - 1; j >= 0; --j ) /*0x55b5ab*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)DataGlobal_8A020C + j) + 92))(*((_DWORD *)DataGlobal_8A020C + j)); /*0x55b5b8*/
  ProcessHarvesterLogic(); /*0x55b5be*/
  UpdateCameoProduction(); /*0x55b5c3*/
  UpdateSuperWeapons(); /*0x55b5c8*/
  for ( k = dword_B04BE0 - 1; k >= 0; --k ) /*0x55b5d7*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)dword_B04BD4 + k) + 92))(*((_DWORD *)dword_B04BD4 + k)); /*0x55b5e4*/
  LOBYTE(v47) = 0; /*0x55b5ea*/
  UpdateDeferredLightSurfaces(6, v47); /*0x55b5f1*/
  LocomotionClass::UpdateAll(); /*0x55b5f6*/
  for ( m = 0; m < this->q010; ++m ) /*0x55b606*/
  {
    v50 = *(_DWORD *)(this->q004 + 4 * m); /*0x55b60b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v50 + 92))(v50); /*0x55b610*/
  }
  if ( g_GameMode_Current ) /*0x55b622*/
  {
    if ( g_GameMode_Current != 5 ) /*0x55b627*/
    {
      for ( n = 0; n < DataGlobal_A83E10; ++n ) /*0x55b632*/
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)DataGlobal_A83E04 + n) + 92))(*((_DWORD *)DataGlobal_A83E04 + n)); /*0x55b63e*/
    }
  }
  ProcessIonCannonEffect(); /*0x55b64b*/
  AirstrikeClass::UpdateAll(); /*0x55b650*/
  CrateClass::Update(&DataGlobal_87F7E8); /*0x55b65a*/
  ((void (__thiscall *)(LPPERSISTSTREAM))g_TacticalClass_Instance->__tail_0[2].GetSizeMax)(g_TacticalClass_Instance); /*0x55b667*/
  for ( ii = 0; ii < g_TeamTypeCapacity; ++ii ) /*0x55b673*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)g_TeamTypeCount + ii) + 92))(*((_DWORD *)g_TeamTypeCount + ii)); /*0x55b680*/
  for ( jj = 0; jj < HouseClass_Count; ++jj ) /*0x55b696*/
  {
    v54 = *((_DWORD *)HouseClass_Array + jj); /*0x55b69d*/
    if ( v54 ) /*0x55b6a2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v54 + 92))(v54); /*0x55b6a6*/
  }
  if ( MapClass::GetScrollMode(&DataGlobal_87F7E8) ) /*0x55b6b8*/
  {
    v55 = (int *)(MapClass::GetScrollMode(&DataGlobal_87F7E8) + 156); /*0x55b6cf*/
    v57 = *v55; /*0x55b6d6*/
    v58 = v55[1]; /*0x55b6e8*/
    v59 = v55[2]; /*0x55b6ef*/
    Tactical::SetTacticalPosition(&v57); /*0x55b6f3*/
  }
  v60 = &vt_VectorClass_TeamClass; /*0x55b6fc*/
  if ( Block ) /*0x55b706*/
  {
    if ( v63 ) /*0x55b70e*/
      __3_YAXPAX_Z(Block); /*0x55b711*/
  }
}
}
} // namespace gamemd

// 0x597A10
namespace gamemd {
char Scenario::LoadOrReloadOptions(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Scenario::LoadOrReloadOptions(IUnknown *aP1)
{
  if ( aP1 ) /*0x597a16*/
    return (*(char (__thiscall **)(_DWORD *, IUnknown *))(*this + 4))(this, aP1); /*0x597a1b*/
  else
    return (unsigned __int8)LoadOptions::Run(this) != 0; /*0x597a28*/
}
}
} // namespace gamemd

// 0x5E7460
namespace gamemd {
int Scenario::PreGameInit()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Scenario::PreGameInit()
{
  ObjectClass *v0; // edx
  int result; // eax

  *((_DWORD *)g_ScenarioClass_Instance + 1173) = g_GameRulesOptions; /*0x5e746b*/
  *(_DWORD *)&g_EventManager[788] = 0; /*0x5e747c*/
  g_ScenarioLoadFlags = Game_PlayerCount; /*0x5e7486*/
  Debug::Log(); /*0x5e748b*/
  *(_DWORD *)&g_EventManager.field_D0[32] = g_Rules_EngineerCount; /*0x5e74aa*/
  v0 = (ObjectClass *)g_IntroMovieObject; /*0x5e74b0*/
  BYTE1(v0) = BYTE1(g_IntroMovieObject) & 0x77; /*0x5e74bb*/
  unsigned int v2 = (unsigned int)v0 | ((HarvesterTruce & 1 | (16 * (BridgeDestruction & 1))) << 11); /*0x5e74c1*/
  g_GameTypeFlags = 2; /*0x5e74c3*/
  LOBYTE(v2) = g_IntroMovieObject | 0xC0; /*0x5e74cd*/
  g_IntroMovieObject = v2; /*0x5e74d4*/
  nullsub_37(); /*0x5e74d9*/
  return result;
}
}
} // namespace gamemd

// 0x642AD0
namespace gamemd {
void Scenario::SetByte96()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Scenario::SetByte96()
{
  this->q060 = 0; /*0x642ad0*/
}
}
} // namespace gamemd

// 0x684240
namespace gamemd {
HWND Scenario::ClearScreen()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND Scenario_ClearScreen()
{
  HWND result; // eax

  Mouse::ReleaseCapture(&DataGlobal_87F7E8); /*0x684245*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x684252*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x684261*/
  *((_BYTE *)g_ScenarioClass_Instance + 13730) = 1; /*0x68426c*/
  g_GameActive = 1; /*0x684278*/
  result = Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x68427d*/
  DataGlobal_B07784 = 0; /*0x684282*/
  return result; /*0x68428c*/
}
}
} // namespace gamemd

// 0x684620
namespace gamemd {
char Scenario::LoadWithProgress()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Scenario::LoadWithProgress()
{
  ProgressScreenClass *v2; // edi
  wchar_t *StringCSF; // eax
  int *Instance; // esi
  ProgressScreenClass *v11; // eax
  char v16; // bl
  void *v17; // ecx
  int v18; // edx
  unsigned int v19; // kr0C_4
  char *v20; // edi
  unsigned int v21; // ecx
  wchar_t *v22; // eax
  char Sync; // bl
  ProgressScreenClass *i; // esi
  int j; // esi
  wchar_t *v27; // [esp-10h] [ebp-258h]
  ProgressScreenClass *v28; // [esp-8h] [ebp-250h]
  const wchar_t *v29; // [esp-4h] [ebp-24Ch]
  ProgressScreenClass *_72B380; // [esp-4h] [ebp-24Ch]
  char v31; // [esp-4h] [ebp-24Ch]
  CampaignScore *v32; // [esp+0h] [ebp-248h]
  int v33; // [esp+10h] [ebp-238h]
  _DWORD v34[2]; // [esp+14h] [ebp-234h] BYREF
  CampaignScore *v35; // [esp+1Ch] [ebp-22Ch] BYREF
  char Buffer[16]; // [esp+20h] [ebp-228h] BYREF
  int v37; // [esp+30h] [ebp-218h]
  int v38; // [esp+34h] [ebp-214h]
  int v39; // [esp+38h] [ebp-210h]
  int v40; // [esp+3Ch] [ebp-20Ch] BYREF
  char Source[260]; // [esp+40h] [ebp-208h] BYREF
  wchar_t v42[130]; // [esp+144h] [ebp-104h] BYREF

  strcpy(Source, (const char *)this); /*0x684653*/
  *(_DWORD *)&HouseClass_Player[45112] = 0; /*0x68466b*/
  *(_BYTE *)(*(_DWORD *)&HouseClass_Player[29924] + 13720) = 1; /*0x684675*/
  ++*(_DWORD *)&HouseClass_Player[43616]; /*0x684685*/
  unsigned int v3 = strlen(Source) + 1; /*0x68468c*/
  v2 = (ProgressScreenClass *)&Source[v3]; /*0x68468c*/
  if ( _strcmpi((char *)&v40 + v3 - 1, &stru_830620[54376]) ) /*0x684694*/
    *(_BYTE *)(*(_DWORD *)&HouseClass_Player[29924] + 13501) = 0; /*0x6846be*/
  else
    *(_BYTE *)(*(_DWORD *)&HouseClass_Player[29924] + 13501) = 1; /*0x6846aa*/
  Debug::Log(); /*0x6846c5*/
  v33 = 0; /*0x6846d4*/
  if ( !HouseClass_Player[45087] ) /*0x6846d8*/
  {
    char v4 = 1; /*0x6846eb*/
    if ( *(_DWORD *)&HouseClass_Player[29932] && *(_DWORD *)&HouseClass_Player[29932] != 5 ) /*0x6846f2*/
      v4 = HouseClass_Player[40248]; /*0x6846f4*/
    ProgressAnim::Init((ProgressScreenClass *)&g_MatrixTransformState + 283, 0, 1079574528, v4, 0); /*0x684706*/
    v2 = 0; /*0x684710*/
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 && dword_B779C4 ) /*0x68471c*/
    {
      v29 = (const wchar_t *)dword_B779D4; /*0x684729*/
      StringCSF = GetStringCSF((wchar_t *)&stru_830620[54316], 0, &stru_830620[53784], 1199); /*0x684736*/
      swprintf(v42, (const size_t)StringCSF, v29, v32); /*0x684744*/
      v2 = (ProgressScreenClass *)v42; /*0x68474c*/
    }
    Instance = LoadProgressMgr::GetInstance(); /*0x684758*/
    v33 = (int)Instance; /*0x68475c*/
    Scenario::ComputeDisplayPosition(Instance); /*0x684760*/
    Function::643E80(&g_MatrixTransformState + 6226, (int)Instance); /*0x68476b*/
    int v7 = 0; /*0x68477c*/
    if ( *(_DWORD *)&HouseClass_Player[29932] ) /*0x684780*/
    {
      int v9 = *(_DWORD *)(**(_DWORD **)&HouseClass_Player[40236] + 75); /*0x6847a4*/
      if ( v9 == -3 ) /*0x6847aa*/
        v9 = 0; /*0x6847ac*/
      v7 = *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + v9) + 188); /*0x6847b7*/
    }
    else
    {
      int v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 13516); /*0x684782*/
      if ( v8 != -1 ) /*0x68478b*/
        v7 = *(_DWORD *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v8] + 152); /*0x684795*/
    }
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 13496) = v7; /*0x6847c3*/
    Scenario::SetDword32((ProgressScreenClass *)&g_MatrixTransformState + 283, v7); /*0x6847c9*/
    _DWORD * v10 = LoadProgressMgr::GetInstance(); /*0x6847ce*/
    SessionClass::Load(v10); /*0x6847d5*/
    if ( *(_DWORD *)&HouseClass_Player[29932] ) /*0x6847e1*/
    {
      SHPClass::Load((ProgressScreenClass *)&g_MatrixTransformState + 283, &stru_830620[54288], 0, 0); /*0x684800*/
    }
    else
    {
      _72B380 = (ProgressScreenClass *)Map_Load_72B380(); /*0x6847e8*/
      SHPClass::Load((ProgressScreenClass *)&g_MatrixTransformState + 283, &stru_830620[54304], 0, _72B380); /*0x6847f0*/
    }
    v11 = *(ProgressScreenClass **)&HouseClass_Player[29932]; /*0x684805*/
    LOBYTE(v11) = *(_DWORD *)&HouseClass_Player[29932] != 0; /*0x684815*/
    v31 = *(_DWORD *)&HouseClass_Player[29932] != 0; /*0x684818*/
    v28 = v11; /*0x684819*/
    int * v12 = Scenario::ComputeDialogPos(Instance, v34); /*0x68481e*/
    TextRenderer::MeasureBuilding( /*0x68482f*/
      (ProgressScreenClass *)&g_MatrixTransformState + 283,
      *v12,
      (ProgressScreenClass *)v12[1],
      v2,
      v28,
      v31);
    int v13 = Map_Load(); /*0x684836*/
    Scenario::SetDword30((ProgressScreenClass *)&g_MatrixTransformState + 283, v13); /*0x684841*/
    if ( *(_DWORD *)&stru_87C374[45748] ) /*0x68484d*/
    {
      if ( *(_DWORD *)&HouseClass_Player[29932] == 4 && *(int *)&HouseClass_Player[40248] > 1 ) /*0x684865*/
      {
        Debug::Log(); /*0x684870*/
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45748] + 48))(*(_DWORD *)&stru_87C374[45748]); /*0x684880*/
        strcpy(Buffer, "xxx.xxx.xxx.xxx"); /*0x68489a*/
        v37 = 0; /*0x6848a3*/
        v38 = 0; /*0x6848b0*/
        v39 = 0; /*0x6848b6*/
        v40 = 0; /*0x6848be*/
        int v14 = 1; /*0x6848c2*/
        if ( *(int *)&HouseClass_Player[40248] > 1 ) /*0x6848c4*/
        {
          v2 = (ProgressScreenClass *)(&HouseClass_Player + 42344); /*0x6848ca*/
          do /*0x684955*/
          {
            Network::CopyAddress( /*0x6848e5*/
              (_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v14) + 40),
              &v35,
              (int)v34);
            sprintf(Buffer, (ObjectClass *)&stru_830620[54236], (INIClass *)LOBYTE(v34[0])); /*0x68491f*/
            Debug::Log(); /*0x68492e*/
  int v15; // eax
            LOWORD(v15) = *(_WORD *)v2->__pad_0; /*0x684933*/
            (*(void (__thiscall **)(_DWORD, char *, int))(**(_DWORD **)&stru_87C374[45748] + 44))( /*0x684947*/
              *(_DWORD *)&stru_87C374[45748],
              Buffer,
              v15);
            ++v14; /*0x68494f*/
            v2 = (ProgressScreenClass *)((char *)v2 + 2); /*0x684950*/
          }
          while ( v14 < *(int *)&HouseClass_Player[40248] ); /*0x684955*/
        }
      }
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)&HouseClass_Player[29924] + 13501) ) /*0x684961*/
  {
    v16 = Scenario::LoadOrReloadOptions(dword_ABDFD8, (IUnknown *)Source); /*0x68497a*/
    if ( v16 ) /*0x68497e*/
    {
      RandomMap::Generate((int *)dword_ABDFD8, 0, 0); /*0x684989*/
      LOBYTE(v17) = 1; /*0x68498e*/
      ScenarioClass::SetupAlliances(v17); /*0x684990*/
    }
    v18 = *(_DWORD *)&HouseClass_Player[29924] + 4700; /*0x6849a1*/
    v19 = strlen(Source) + 1; /*0x6849a9*/
    qmemcpy((void *)(*(_DWORD *)&HouseClass_Player[29924] + 4700), Source, 4 * (v19 >> 2)); /*0x6849b8*/
    v20 = (char *)(v18 + 4 * (v19 >> 2)); /*0x6849b8*/
    v21 = v19 & 3; /*0x6849bc*/
    qmemcpy(v20, &Source[4 * (v19 >> 2)], v21); /*0x6849bf*/
    v2 = (ProgressScreenClass *)&v20[v21]; /*0x6849bf*/
  }
  else
  {
    double v1 = ScenarioClass::Construct(Source, v1); /*0x6849ce*/
  }
  if ( !*(_BYTE *)(*(_DWORD *)&stru_87C374[44652] + 5294) ) /*0x6849d6*/
    MapClass::ClearShroud(&stru_87C374[13428], 0); /*0x6849e7*/
  if ( v16 )
  {
    MessageListClass::Init( /*0x684ac9*/
      &HouseClass_Player[32532],
      *(_DWORD *)&stru_87C374[44076] + 3,
      *(int *)&stru_87C374[44080],
      6,
      98,
      14,
      -1,
      -1,
      0,
      20,
      98,
      (CellStruct *)(*(_DWORD *)&stru_87C374[44084] - 6));
    PostLoadInitScenario((int)v2); /*0x684ace*/
    if ( *(_DWORD *)&HouseClass_Player[29932] == 3 || *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x684adf*/
    {
      Multiplayer::ShowProgress(&HouseClass_Player[29932], 99); /*0x684ae8*/
      if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x684af3*/
      {
        if ( HouseClass_Player[40532] ) /*0x684afc*/
          Process::WaitForExit(&g_NetworkEventQueue, 0x3A98u, (CellStruct *)1); /*0x684b0a*/
      }
    }
    Multiplayer::ShowProgress(
      &HouseClass_Player[29932],
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player[29924] + 13501) != 0 ? 200 : 100);
    HouseClass_Player[31605] = 0; /*0x684b30*/
    HouseClass_Player[31606] = 0; /*0x684b37*/
    Sync = WaitForMultiplayerLoadSync(); /*0x684b43*/
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x684b4c*/
      ParseAndApplyAlliances(&HouseClass_Player[29932]); /*0x684b53*/
    --*(_DWORD *)&HouseClass_Player[43616]; /*0x684b66*/
    if ( !HouseClass_Player[45087] ) /*0x684b6c*/
    {
      if ( Sync ) /*0x684b70*/
      {
        Event::Dispatch(); /*0x684b72*/
        while ( Progress::GetAverage((int)(&g_MatrixTransformState + 6226)) < 1.0 ) /*0x684b8c*/
        {
          for ( i = 0; (int)i < *(int *)&HouseClass_Player[40248]; i = (ProgressScreenClass *)((char *)i + 1) ) /*0x684b97*/
            Network::UpdateLatencyDisplay( /*0x684bae*/
              (ProgressScreenClass *)&g_MatrixTransformState + 283,
              i,
              0,
              (ProgressScreenClass *)0x40590000);
        }
      }
    }
    *(_BYTE *)(*(_DWORD *)&HouseClass_Player[29924] + 13720) = 0; /*0x684bde*/
    Scenario::SetByte96((ProgressScreenClass *)&g_MatrixTransformState + 283); /*0x684be5*/
    if ( v33 ) /*0x684bf0*/
    {
      Function::643E80(&g_MatrixTransformState + 6226, 0); /*0x684bf9*/
      LoadProgressMgr::ReleaseBuffer(v33); /*0x684c00*/
    }
    for ( j = (int)&HouseClass_Count[-1].__tail_1602E[1]; j >= 0; --j ) /*0x684c10*/
      Scenario::ProcessSidebarUnits(*(_DWORD *)&HouseClass_Array->__pad_0[4 * j]); /*0x684c1b*/
    return 1; /*0x684c24*/
  }
  else
  {
    Debug::Log(); /*0x6849fe*/
    FadePalette(&stru_87C374[37900], 7, (void (*)(void))Event::Dispatch); /*0x684a15*/
    v35 = &stru_82083C; /*0x684a31*/
    v27 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620[53784], 1293); /*0x684a45*/
    v22 = GetStringCSF((wchar_t *)&stru_830620[5328], 0, &stru_830620[53784], 1293); /*0x684a50*/
    Dialog::ShowMessageBox((int)v22, v27, 0, 0, 0, (int)v32); /*0x684a5a*/
    --*(_DWORD *)&HouseClass_Player[43616]; /*0x684a6b*/
    *(_BYTE *)(*(_DWORD *)&HouseClass_Player[29924] + 13720) = 0; /*0x684a71*/
    if ( v33 ) /*0x684a7d*/
    {
      Function::643E80(&g_MatrixTransformState + 6226, 0); /*0x684a86*/
      LoadProgressMgr::Destroy(); /*0x684a8b*/
    }
    return 0; /*0x684a90*/
  }
}
}
} // namespace gamemd

// 0x685670
namespace gamemd {
int Scenario_EndGameFlow()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __usercall Scenario_EndGameFlow@<ax>(char a1@<bl>)
{
  DWORD Ticks; // eax
  DWORD v4; // eax
  wchar_t *String; // eax
  int v10; // ecx
  char v11; // al
  __int16 result; // ax
  Iostream_init *v13; // eax
  int v14; // ecx
  int v15; // ecx
  _BYTE *v16; // ecx
  int v17; // ecx
  void *v18; // eax
  LPARAM v19; // ebp
  int i; // eax
  int v21; // edx
  int v22; // ecx
  LPARAM v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char v27; // [esp+Bh] [ebp-81h] BYREF
  _DWORD v28[8]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v29[8]; // [esp+2Ch] [ebp-60h] BYREF
  _DWORD v30[8]; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD v31[8]; // [esp+6Ch] [ebp-20h] BYREF

  if ( g_GameMode_Current && g_GameMode_Current != 5 && (g_NetworkEventPending & 2) == 0 ) /*0x68568b*/
  {
    RunNetworkGameLoop(); /*0x68568d*/
    Map_Get_55CF10(); /*0x685692*/
  }
  _DWORD * v1 = (char *)g_ScenarioClass_Instance + 1556; /*0x68569f*/
  g_BounceClassInit = 0; /*0x6856a5*/
  DataGlobal_A8E378 = 0; /*0x6856ac*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x6856bb*/
  {
    Ticks = Timer::GetTicks(); /*0x6856c0*/
    int v3 = v1[2]; /*0x6856c7*/
    v4 = Ticks - *v1; /*0x6856ca*/
    *v1 = -1; /*0x6856cc*/
    v1[2] = v4 + v3; /*0x6856d0*/
  }
  AsyncIO::Shutdown(); /*0x6856d3*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))(g_WWMouseClass_Instance, g_DSurface_Hidden, 0); /*0x6856e8*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x6856f3*/
  Mission::SetAndCall((int *)&DataGlobal_87F7E8, 0, 0); /*0x6856ff*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x68570c*/
  Audio::GetFlag(g_MixerState); /*0x685715*/
  Audio::WaitForCallback(g_MixerState); /*0x685720*/
  int v5 = g_PerformanceTickOffset; /*0x68572a*/
  if ( g_LastPerformanceTick != -1 ) /*0x685732*/
    v5 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685744*/
  int v6 = v5 + 300; /*0x685746*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68574c*/
  {
    v5 = g_PerformanceTickOffset; /*0x68575a*/
    if ( g_LastPerformanceTick != -1 ) /*0x685762*/
      v5 += Timer::GetTicks() - g_LastPerformanceTick; /*0x685774*/
    if ( v6 <= v5 ) /*0x685778*/
      break; /*0x685778*/
    Event::Dispatch(); /*0x68577a*/
  }
  StopThemeClass(1); /*0x68578a*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x68578f*/
  AudioMixer::Shutdown(); /*0x685794*/
  AudioQueue::DrainAll(); /*0x685799*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6857a9*/
  if ( g_CreditsScreenBounds != xRight && g_CreditsScreenConfig != yBottom ) /*0x6857ca*/
  {
    Debug::Log(g_Str_Toggle_display_mode_back_to_sh); /*0x6857d1*/
    ChangeVideoMode(xRight, yBottom); /*0x6857e5*/
  }
  int v7 = g_GameMode_Current; /*0x6857ea*/
  if ( !g_GameMode_Current ) /*0x6857f6*/
    goto LABEL_40; /*0x6857f6*/
  a1 = 0; /*0x685802*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x685807*/
  {
    v10 = g_GameStateFlags; /*0x6858c6*/
LABEL_36:
    g_CurrentPlayerName = 0; /*0x6858ce*/
    if ( v10 ) /*0x6858d7*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 164))(v10, 1); /*0x6858dd*/
    g_WTFMode = 0; /*0x6858ea*/
    return ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685900*/
  }
  DataGlobal_A8D57C = (wchar_t *)((char *)DataGlobal_A8D57C + 1); /*0x685817*/
  if ( g_GameMode_Current == 4 ) /*0x68581d*/
  {
    String = GetStringCSF(DataGlobal_83DB0C, 0, g_Str_File_Scenario_CPP, 2024); /*0x685830*/
    ChatMessageWOL(1, String); /*0x685839*/
    v7 = g_GameMode_Current; /*0x68583e*/
  }
  v5 = 0; /*0x685849*/
  if ( !g_GameStateFlags ) /*0x68584d*/
  {
    g_CurrentPlayerName = 0; /*0x685879*/
    goto LABEL_28; /*0x685879*/
  }
  if ( v7 != 3 && v7 != 4 || !(*(unsigned __int8 (**)(void))(*(_DWORD *)g_GameStateFlags + 8))() ) /*0x68585a*/
  {
    g_CurrentPlayerName = 0; /*0x68586c*/
LABEL_28:
    int v9 = Scenario::ResetDisplayArrays(&v27); /*0x685884*/
    Map_Load_5C9720(v9); /*0x68588b*/
    goto LABEL_29; /*0x68588b*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685865*/
LABEL_29:
  v10 = g_GameStateFlags; /*0x685890*/
  if ( g_GameStateFlags ) /*0x685898*/
  {
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 168))(g_GameStateFlags); /*0x68589c*/
    v10 = g_GameStateFlags; /*0x6858a2*/
    a1 = v11; /*0x6858a8*/
  }
  if ( ++DataGlobal_A8D588 >= 4 ) /*0x6858b8*/
    DataGlobal_A8D588 = 3; /*0x6858ba*/
  if ( !a1 ) /*0x6858c2*/
    goto LABEL_36; /*0x6858c2*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 172))(v10); /*0x685903*/
  ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x685910*/
LABEL_40:
  Movie::PlayWrapper(*((_DWORD *)g_ScenarioClass_Instance + 1295), -1, 3, 1, 1, 1); /*0x685915*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x685934*/
    goto LABEL_64; /*0x685934*/
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x685940*/
  if ( !*((_BYTE *)g_ScenarioClass_Instance + 13486) ) /*0x68594b*/
  {
    v13 = __0Iostream_init_QAE_XZ_5((Iostream_init *)&v27); /*0x685959*/
    Map_Load_6C8E80(v13); /*0x685960*/
  }
  v14 = *((_DWORD *)g_ScenarioClass_Instance + 1298); /*0x68596b*/
  if ( v14 != -1 ) /*0x685973*/
    Movie::PlayWrapper(v14, -1, 3, 1, 1, 1); /*0x68597d*/
  v15 = *((_DWORD *)g_ScenarioClass_Instance + 1299); /*0x685987*/
  if ( v15 != -1 ) /*0x68598f*/
    Movie::PlayWrapper(v15, -1, 3, 1, 1, 1); /*0x685999*/
  if ( !(unsigned __int8)CopyProtection::CheckProtectedData() /*0x6859b1*/
    || (v16 = g_ScenarioClass_Instance, *((_BYTE *)g_ScenarioClass_Instance + 13487)) )
  {
    g_WTFMode = 0; /*0x685b33*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685b49*/
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13484) ) /*0x6859bf*/
  {
    v17 = *((_DWORD *)g_ScenarioClass_Instance + 3379); /*0x6859c9*/
    if ( v17 != -1 ) /*0x6859d1*/
      Movie::PlayWrapper(*(_DWORD *)(*((_DWORD *)g_CampaignTypeArray + v17) + 668), -1, 3, 1, 1, 1); /*0x6859e9*/
    CreditsPower::Display(a1, 3, v5); /*0x6859ee*/
    g_WTFMode = 0; /*0x6859f9*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685a0f*/
  }
  if ( g_GameMode_Current != 3 && g_GameMode_Current != 4 || !g_GameStateFlags ) /*0x685a25*/
    goto LABEL_58; /*0x685a25*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags) ) /*0x685a2b*/
  {
    v16 = g_ScenarioClass_Instance; /*0x685a32*/
LABEL_58:
    if ( v16[13488] ) /*0x685a38*/
    {
      if ( v16[7385] ) /*0x685a42*/
        Map_Delete_5ADE20(v16, v16 + 264); /*0x685a52*/
      else
        Map_Delete_5ADE20(v16, v16 + 4); /*0x685a5c*/
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685a6b*/
      Map_Delete(g_ScenarioClass_Instance); /*0x685a74*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x685a81*/
    }
  }
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x685a84*/
LABEL_64:
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685a8f*/
  Scenario::CopyLocalScenarioData(&DataGlobal_8A38E0); /*0x685a9f*/
  ++*((_DWORD *)g_ScenarioClass_Instance + 1173); /*0x685ab0*/
  if ( (g_GameMode_Current == 3 || g_GameMode_Current == 4) /*0x685ada*/
    && g_GameStateFlags
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags) )
  {
    if ( g_GameMode_Current == 3 ) /*0x685aeb*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 4))(g_NetworkInterface); /*0x685af5*/
      if ( g_NetworkInterface ) /*0x685b00*/
        (**(void (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x685b06*/
      g_NetworkInterface = 0; /*0x685b0d*/
      v18 = __2_YAPAXI_Z(0x3F310u); /*0x685b13*/
      if ( v18 ) /*0x685b1d*/
        g_NetworkInterface = IPXInterfaceClass::Construct(v18); /*0x685b26*/
      else
        g_NetworkInterface = 0; /*0x685b4a*/
    }
    WinsockInterface::Init((_DWORD *)g_NetworkInterface); /*0x685b56*/
    v19 = g_Rules_AlliesAllowed; /*0x685b69*/
    qmemcpy(v31, &g_NetworkPlayerName, sizeof(v31)); /*0x685b6f*/
    qmemcpy(v29, g_CampaignConfig, sizeof(v29)); /*0x685b7f*/
    qmemcpy(v28, g_CampaignPlayerArray, sizeof(v28)); /*0x685b8f*/
    qmemcpy(v30, DataGlobal_A8B27C, sizeof(v30)); /*0x685b9f*/
    result = InitNetworkGameState(); /*0x685ba1*/
    if ( !(_BYTE)result ) /*0x685ba8*/
    {
      if ( g_NetworkInterface ) /*0x685bb2*/
      {
        result = (**(int (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1); /*0x685bb8*/
        g_NetworkInterface = 0; /*0x685bba*/
      }
      g_WTFMode = 0; /*0x685bc7*/
      return result; /*0x685bd5*/
    }
    g_Rules_AlliesAllowed = v19; /*0x685bd6*/
    for ( i = 0; i < 8; ++i ) /*0x685bdc*/
    {
      v21 = v28[i]; /*0x685be2*/
      DataGlobal_A8B27C[i] = v30[i]; /*0x685be6*/
      v22 = v29[i]; /*0x685bec*/
      g_CampaignPlayerArray[i] = v21; /*0x685bf0*/
      v23 = v31[i]; /*0x685bf6*/
      g_CampaignConfig[i] = v22; /*0x685bfa*/
      *(LPARAM *)((char *)&g_NetworkPlayerName + i * 4) = v23; /*0x685c00*/
    }
    Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x685c14*/
  }
  g_WTFMode = CopyProtection::CheckProtectedData(); /*0x685c23*/
  if ( !g_WTFMode ) /*0x685c28*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x685c32*/
  while ( !(unsigned __int8)ScenarioClass::LoadScenarioAndStart( /*0x685c54*/
                              (char *)g_ScenarioClass_Instance + 4700,
                              *((_DWORD *)g_ScenarioClass_Instance + 3379)) )
    ; /*0x685c5d*/
  if ( (g_GameMode_Current == 3 || g_GameMode_Current == 4) /*0x685c9d*/
    && g_GameStateFlags
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags) )
  {
    SessionClass::CreateConnections(&g_GameMode_Current); /*0x685cad*/
    if ( g_GameMode_Current == 3 ) /*0x685cba*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0xF ) /*0x685ccc*/
        v24 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x685cdf*/
      else
        v24 = 15; /*0x685cce*/
      Network::SetConnectionParams(g_NetworkManager, v24, -1, 600, 1); /*0x685cf0*/
      if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x685d05*/
        v25 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x685d18*/
      else
        v25 = 60; /*0x685d07*/
      TacticalClass::SetCameraPosition(v25, -1, 600); /*0x685d27*/
    }
    else if ( g_GameMode_Current == 4 && !g_GameSessionFlags ) /*0x685d3a*/
    {
      if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) >= 0x3C ) /*0x685d4c*/
        v26 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x685d5f*/
      else
        v26 = 60; /*0x685d4e*/
      Network::SetConnectionParams(g_NetworkManager, v26, -1, 600, 1); /*0x685d70*/
    }
  }
  GameResult::CalcScore(&DataGlobal_8A38E0); /*0x685d7a*/
  if ( g_TacticalRender ) /*0x685d87*/
    Tooltip::Enable((void *)g_TacticalRender, DataGlobal_A8EB80); /*0x685d90*/
  TacticalMap::Redraw(&DataGlobal_87F7E8); /*0x685d9a*/
  return FadePalette(&FileSystem_TEMPERAT_PAL, 7, (void (*)(void))Event::Dispatch); /*0x6858fa*/
}
}
} // namespace gamemd

// 0x685DC0
namespace gamemd {
int Scenario_EndGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall Scenario::EndGame@<al>(int a1@<edi>)
{
  DWORD Ticks; // eax
  DWORD v4; // eax
  int esi13; // esi
  CellStruct *v7; // eax
  wchar_t *StringCSF; // eax
  SkirmishDialog *v11; // ecx
  LONG v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  int i; // eax
  wchar_t *v26; // [esp-1Ah] [ebp-A8h]
  wchar_t *v27; // [esp-16h] [ebp-A4h]
  CampaignScore *v30; // [esp+Ah] [ebp-84h]

  if ( *(_DWORD *)&HouseClass_Player[29932] /*0x685ddb*/
    && *(_DWORD *)&HouseClass_Player[29932] != 5
    && (HouseClass_Player[39084] & 2) == 0 )
  {
    RunNetworkGameLoop(); /*0x685ddd*/
    Map_Get_55CF10(); /*0x685de2*/
  }
  _DWORD * v1 = (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 1556); /*0x685def*/
  HouseClass_Player[45072] = 0; /*0x685df5*/
  HouseClass_Player[42540] = 0; /*0x685dfc*/
  if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 1556) != -1 ) /*0x685e0b*/
  {
    Ticks = Timer::GetTicks(); /*0x685e10*/
    int v3 = v1[2]; /*0x685e17*/
    v4 = Ticks - *v1; /*0x685e1a*/
    *v1 = -1; /*0x685e1c*/
    v1[2] = v4 + v3; /*0x685e20*/
  }
  AsyncIO::Shutdown(); /*0x685e23*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)&stru_87C374[45772] + 64))( /*0x685e38*/
    *(_DWORD *)&stru_87C374[45772],
    *(_DWORD *)&stru_87C374[44952],
    0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 20))(*(_DWORD *)&stru_87C374[45772]); /*0x685e43*/
  Mission::SetAndCall((int *)&stru_87C374[13428], 0, 0); /*0x685e4f*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 12))(*(_DWORD *)&stru_87C374[45772]); /*0x685e5c*/
  if ( *(_DWORD *)&stru_87C374[44100] != *(_DWORD *)&HouseClass_Player[44608] /*0x685e7b*/
    && *(_DWORD *)&stru_87C374[44104] != *(_DWORD *)&HouseClass_Player[44612] )
  {
    Debug::Log(); /*0x685e82*/
    ChangeVideoMode(*(ObjectClass **)&HouseClass_Player[44608], *(int *)&HouseClass_Player[44612]); /*0x685e96*/
  }
  Audio::GetFlag(*(unsigned int **)&stru_87C374[9188]); /*0x685ea1*/
  Audio::WaitForCallback(*(int *)&stru_87C374[9188]); /*0x685eac*/
  int v5 = *(_DWORD *)&stru_87C374[45004]; /*0x685eb6*/
  if ( *(_DWORD *)&stru_87C374[44996] != -1 ) /*0x685ebe*/
    v5 += Timer::GetTicks() - *(_DWORD *)&stru_87C374[44996]; /*0x685ed0*/
  int v6 = v5 + 300; /*0x685ed2*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x685ed8*/
  {
    esi13 = *(_DWORD *)&stru_87C374[45004]; /*0x685ee6*/
    if ( *(_DWORD *)&stru_87C374[44996] != -1 ) /*0x685eee*/
      esi13 += Timer::GetTicks() - *(_DWORD *)&stru_87C374[44996]; /*0x685f00*/
    if ( v6 <= esi13 ) /*0x685f04*/
      break; /*0x685f04*/
    Event::Dispatch(); /*0x685f06*/
  }
  StopThemeClass(1); /*0x685f16*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x685f1b*/
  AudioMixer::Shutdown(); /*0x685f20*/
  AudioQueue::DrainAll(); /*0x685f25*/
  EndBufferMixer(*(int **)&stru_87C374[9188], 0x4000); /*0x685f35*/
  v7 = *(CellStruct **)&HouseClass_Player[29932]; /*0x685f3a*/
  char v9 = 0; /*0x685f41*/
  if ( !*(_DWORD *)&HouseClass_Player[29932] ) /*0x685f45*/
    goto LABEL_40; /*0x685f45*/
  if ( (HouseClass_Player[39084] & 2) != 0 ) /*0x685f52*/
  {
    v11 = *(SkirmishDialog **)&HouseClass_Player[29936]; /*0x686014*/
LABEL_36:
    *(_WORD *)&HouseClass_Player[39108] = 0; /*0x68601a*/
    if ( v11 ) /*0x686023*/
      (*(void (__thiscall **)(SkirmishDialog *, _DWORD))(*(_DWORD *)v11->__pad_0 + 164))(v11, 0); /*0x686028*/
    HouseClass_Player[44116] = 0; /*0x686035*/
    LOBYTE(v13) = ChatMessageWOL(0, (wchar_t *)&stru_87C374[46016]); /*0x68603c*/
    return v13; /*0x68604b*/
  }
  ++*(_DWORD *)&HouseClass_Player[38960]; /*0x685f62*/
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x685f68*/
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_830620[54508], 0, &stru_830620[53784], 2492); /*0x685f7b*/
    ChatMessageWOL(1, StringCSF); /*0x685f84*/
    v7 = *(CellStruct **)&HouseClass_Player[29932]; /*0x685f89*/
  }
  if ( !*(_DWORD *)&HouseClass_Player[29936] ) /*0x685f96*/
  {
    *(_WORD *)&HouseClass_Player[39108] = 0; /*0x685fc3*/
    goto LABEL_28; /*0x685fc3*/
  }
  if ( v7 != (CellStruct *)3 && v7 != (CellStruct *)4 /*0x685fa4*/
    || !(*(unsigned __int8 (**)(void))(**(_DWORD **)&HouseClass_Player[29936] + 8))() )
  {
    *(_WORD *)&HouseClass_Player[39108] = 0; /*0x685fb6*/
LABEL_28:
  char v29; // [esp+9h] [ebp-85h] BYREF
    Scenario::ResetDisplayArrays(&v29); /*0x685fce*/
    Map_Load_5C9720(0, -1, v6); /*0x685fd5*/
    goto LABEL_29; /*0x685fd5*/
  }
  Screen::Capture(1, 0, 0, -1); /*0x685faf*/
LABEL_29:
  v11 = *(SkirmishDialog **)&HouseClass_Player[29936]; /*0x685fda*/
  if ( *(_DWORD *)&HouseClass_Player[29936] ) /*0x685fe2*/
  {
    char v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 168))(*(_DWORD *)&HouseClass_Player[29936]); /*0x685fe6*/
    v11 = *(SkirmishDialog **)&HouseClass_Player[29936]; /*0x685fec*/
    v9 = v12; /*0x685ff2*/
  }
  ++*(_DWORD *)&HouseClass_Player[38972]; /*0x685ffd*/
  if ( *(int *)&HouseClass_Player[38972] >= 4 ) /*0x686002*/
    *(_DWORD *)&HouseClass_Player[38972] = 3; /*0x686004*/
  if ( !v9 ) /*0x686010*/
    goto LABEL_36; /*0x686010*/
  (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v11->__pad_0 + 172))(v11); /*0x68604e*/
  ChatMessageWOL(0, (wchar_t *)&stru_87C374[46016]); /*0x68605b*/
LABEL_40:
  Movie::PlayWrapper(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 5184), -1, v6, 1, 1, 1); /*0x686060*/
  LOBYTE(v13) = Screen::Capture(1, 0, v9, -1); /*0x68607c*/
  if ( *(_DWORD *)&HouseClass_Player[29932] /*0x6860ec*/
    || (HouseClass_Player[39084] & 2) != 0
    || (v30 = &stru_82083C,
        v27 = GetStringCSF((wchar_t *)&stru_829EE8.attachedTag, 0, &stru_830620[53784], 2559),
        v26 = GetStringCSF((wchar_t *)&stru_829EE8.fallRate, 0, &stru_830620[53784], 2559),
        v14 = GetStringCSF((wchar_t *)&stru_830620[54532], 0, &stru_830620[53784], 2559),
        (v13 = Dialog::ShowMessageBox((int)v14, v26, (Movie *)v27, 0, 0, a1)) != 0) )
  {
    if ( !v9 ) /*0x6860f0*/
    {
      HouseClass_Player[44116] = 0; /*0x6863c3*/
      return v13; /*0x6863c3*/
    }
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x6860fd*/
  {
    v15 = GetStringCSF(aTxtAwayLoading, 0, &stru_830620[53784], 2566); /*0x686110*/
    ChatMessageWOL(1, v15); /*0x686119*/
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] != 3 && *(_DWORD *)&HouseClass_Player[29932] != 4 /*0x686141*/
    || !*(_DWORD *)&HouseClass_Player[29936]
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 8))(*(_DWORD *)&HouseClass_Player[29936]) )
  {
    goto LABEL_65; /*0x686146*/
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] == 3 ) /*0x686153*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45748] + 4))(*(_DWORD *)&stru_87C374[45748]); /*0x68615d*/
    if ( *(_DWORD *)&stru_87C374[45748] ) /*0x686168*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[45748])( /*0x68616e*/
        *(_DWORD *)&stru_87C374[45748],
        1);
    *(_DWORD *)&stru_87C374[45748] = 0; /*0x686175*/
    _DWORD * v16 = (_DWORD *)__2_YAPAXI_Z(0x3F310u); /*0x68617b*/
    if ( v16 ) /*0x686185*/
      *(_DWORD *)&stru_87C374[45748] = IPXInterfaceClass::Construct(v16); /*0x68618e*/
    else
      *(_DWORD *)&stru_87C374[45748] = 0; /*0x686195*/
  }
  WinsockInterface::Init(*(_DWORD **)&stru_87C374[45748]); /*0x6861a1*/
  int v17 = *(_DWORD *)&HouseClass_Player[29992]; /*0x6861b4*/
  _DWORD v34[8]; // [esp+6Eh] [ebp-20h] BYREF
  qmemcpy(v34, &HouseClass_Player[40260], sizeof(v34)); /*0x6861ba*/
  _DWORD v32[8]; // [esp+2Eh] [ebp-60h] BYREF
  qmemcpy(v32, &HouseClass_Player[30064], sizeof(v32)); /*0x6861ca*/
  _DWORD v33[8]; // [esp+4Eh] [ebp-40h] BYREF
  qmemcpy(v33, &HouseClass_Player[30032], sizeof(v33)); /*0x6861da*/
  _DWORD v31[8]; // [esp+Eh] [ebp-80h] BYREF
  qmemcpy(v31, &HouseClass_Player[30000], sizeof(v31)); /*0x6861ea*/
  LOBYTE(v13) = InitNetworkGameState(); /*0x6861ec*/
  if ( (_BYTE)v13 ) /*0x6861f3*/
  {
    *(_DWORD *)&HouseClass_Player[29992] = v17; /*0x68623a*/
    for ( i = 0; i < 8; ++i ) /*0x686240*/
    {
      int v19 = v33[i]; /*0x686246*/
      *(_DWORD *)&HouseClass_Player[21864][i * 4 + 8136] = v31[i]; /*0x68624a*/
      int v20 = v32[i]; /*0x686250*/
      *(_DWORD *)&HouseClass_Player[21864][i * 4 + 8168] = v19; /*0x686254*/
      int v21 = v34[i]; /*0x68625a*/
      *(_DWORD *)&HouseClass_Player[21864][i * 4 + 8200] = v20; /*0x68625e*/
      *(_DWORD *)&HouseClass_Player[21864][i * 4 + 18396] = v21; /*0x686264*/
    }
    Timer::PumpMessages(*(HWND **)&stru_87C374[13308]); /*0x686278*/
LABEL_65:
    ScenarioClass::LoadScenarioAndStart( /*0x686282*/
      (AnimClass *)(*(_DWORD *)&HouseClass_Player[29924] + 4700),
      0,
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 13516));
    if ( (*(_DWORD *)&HouseClass_Player[29932] == 3 || *(_DWORD *)&HouseClass_Player[29932] == 4) /*0x6862be*/
      && *(_DWORD *)&HouseClass_Player[29936]
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 8))(*(_DWORD *)&HouseClass_Player[29936]) )
    {
      SessionClass::CreateConnections(&HouseClass_Player[29932]); /*0x6862ce*/
      if ( *(_DWORD *)&HouseClass_Player[29932] == 3 ) /*0x6862db*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2) >= 0xF ) /*0x6862ed*/
          int v22 = Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2; /*0x686300*/
        else
          v22 = 15; /*0x6862ef*/
        Network::SetConnectionParams( /*0x686311*/
          (int *)&HouseClass_Player[44148],
          (IUnknown *)v22,
          -1,
          600,
          (CellStruct *)1);
        if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2) >= 0x3C ) /*0x686326*/
          int v23 = Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2; /*0x686339*/
        else
          v23 = 60; /*0x686328*/
        TacticalClass::SetCameraPosition(&HouseClass_Player[44148], v23, -1, 600); /*0x686348*/
      }
      else if ( *(_DWORD *)&HouseClass_Player[29932] == 4 && !*(_DWORD *)&HouseClass_Player[30756] ) /*0x68635a*/
      {
        if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2) >= 0x3C ) /*0x68636c*/
          int v24 = Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2; /*0x68637f*/
        else
          v24 = 60; /*0x68636e*/
        Network::SetConnectionParams( /*0x686390*/
          (int *)&HouseClass_Player[44148],
          (IUnknown *)v24,
          -1,
          600,
          (CellStruct *)1);
      }
    }
    GameResult::CalcScore((int)&stru_89E138[22440]); /*0x68639a*/
    if ( *(_DWORD *)&stru_87C374[45044] ) /*0x6863a7*/
      Tooltip::Enable(*(void **)&stru_87C374[45044], HouseClass_Player[44596]); /*0x6863af*/
    LOBYTE(v13) = TacticalMap::Redraw(&stru_87C374[13428]); /*0x6863b9*/
    goto LABEL_60; /*0x6863be*/
  }
  if ( *(_DWORD *)&stru_87C374[45748] ) /*0x6861fd*/
  {
    LOBYTE(v13) = (***(int (__thiscall ****)(_DWORD, int))&stru_87C374[45748])( /*0x686203*/
                    *(_DWORD *)&stru_87C374[45748],
                    1);
    *(_DWORD *)&stru_87C374[45748] = 0; /*0x686205*/
  }
  HouseClass_Player[44116] = 0; /*0x68620f*/
LABEL_60:
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x68621d*/
    LOBYTE(v13) = ChatMessageWOL(0, (wchar_t *)&stru_87C374[46016]); /*0x68622a*/
  return v13; /*0x686045*/
}
}
} // namespace gamemd

// 0x4758F0
namespace gamemd {
int Scenario::FindBuildingTypeByName(unsigned char * a1, unsigned char * a2, CCINIClass * aP3)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(this, (INIClass *)a1, a2, (INIClass *)&DataGlobal_87F8E4[42624], Destination, 128) )
    return StringList::Find(&g_BuildingTypeClass_Count, Destination[0].__pad_0);
    else
    return (int)aP3->__pad_0;
}
}
} // namespace gamemd

// 0x5C9700
namespace gamemd {
void * Scenario::ResetDisplayArrays()
{
{
    DataGlobal_ABF9F4 = 0;
    memset(DataGlobal_ABF958, 0, sizeof(DataGlobal_ABF958));
    DataGlobal_ABF9F8 = 0;
    return this;
}
}
} // namespace gamemd

// 0x642B10
namespace gamemd {
int Scenario::SetDword32(int a2)
{
{
    this->Scenario_field_0x80 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x642DF0
namespace gamemd {
int Scenario::SetDword30(int a2)
{
{
    this->Scenario_field_0x78 = a2;
    return a2;
}
}
} // namespace gamemd
