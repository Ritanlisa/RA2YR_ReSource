// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlowStraw_29_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/BlowStraw_29__e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Bounds_e4.hpp"

// 0x6D0680
namespace gamemd {
int BlowStraw_29::Seek(TabClass * aP1, unsigned int * a2)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  char *v12; // eax
  char *v13; // edi
  int i; // edi
  char *FontClassEntry; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax

  v4 = *(&this->u32_8844); /*0x6d068b*/
  v5 = *(&this->u32_8846); /*0x6d0691*/
  if ( v4 != -1 ) /*0x6d069a*/
  {
    if ( (int)g_CurrentFrame - v4 >= v5 ) /*0x6d06a6*/
      goto LABEL_6; /*0x6d06a6*/
    v5 -= (int)g_CurrentFrame - v4; /*0x6d06a8*/
  }
  if ( v5 == 1 ) /*0x6d06ac*/
  {
    v6 = (int)(*this);
    this->u8_5545 = 1; /*0x6d06b4*/
    this->vt_slot_56(0); /*0x6d06ba*/
  }
  LABEL_6:
  v7 = *((unsigned int *)dword_B0FC58 + 1); /*0x6d06bd*/
  if ( *a2 >= *(unsigned int *)dword_B0FC58 && *a2 < *(unsigned int *)dword_B0FC58 + g_Map_VisibleRectOffset ) /*0x6d06dd*/
  {
    v8 = a2[1]; /*0x6d06df*/
    if ( v8 >= v7 && v8 < v7 + 30 ) /*0x6d06f2*/
      Mouse::SetCursor((int)&MapClass_Instance, 0, 0); /*0x6d06fd*/
  }
  v9 = (int)(*aP1);
  if ( *aP1 < 32982 || v9 >= 33007 ) /*0x6d0718*/
  {
    if ( v9 == 33008 ) /*0x6d0842*/
    {
      PlayVocClass(g_RulesClass_Instance->DefaultChronoSound, 0x2000, 1.0, 0); /*0x6d0860*/
      if ( this->u8_5544 ) /*0x6d0865*/
      {
        SidebarUpdateAll(); /*0x6d0875*/
        this->vt_slot_52(dword_B0CCB0); /*0x6d0883*/
        for ( i = 0; i < 25; ++i ) /*0x6d0886*/
        {
          FontClassEntry = GetFontClassEntry(i); /*0x6d088a*/
          if ( FontClassEntry ) /*0x6d0891*/
            HashTable::Remove((int *)g_TacticalRender, *((unsigned int *)FontClassEntry + 9)); /*0x6d089d*/
        }
        HashTable::Remove((int *)g_TacticalRender, 240); /*0x6d08b3*/
        v16 = *this; /*0x6d08b8*/
        this->u8_5544 = 0; /*0x6d08c1*/
        this->vt_slot_48(dword_B0CC40); /*0x6d08c8*/
        PushCommandClass::Execute(dword_B0CC40, (int)g_Str_Tip_ThumbClosed); /*0x6d08d5*/
        v17 = *this; /*0x6d08da*/
        this->u8_5545 = 1; /*0x6d08e0*/
        this->vt_slot_56(0); /*0x6d08e6*/
      }
    }
    else if ( v9 == 33009 ) /*0x6d08f3*/
    {
      if ( !MuteSWLaunches ) /*0x6d08fc*/
      {
        PlayVocClass(g_RulesClass_Instance->PlaceBeaconSound, 0x2000, 1.0, 0); /*0x6d091a*/
        if ( !this->u8_5544 ) /*0x6d091f*/
        {
          this->vt_slot_52(dword_B0CC40); /*0x6d0932*/
          HashTable::Remove((int *)g_TacticalRender, 241); /*0x6d0940*/
          this->u8_5544 = 1; /*0x6d0947*/
          CommandClass::BuildBar(); /*0x6d094d*/
          v18 = *this; /*0x6d0952*/
          this->u8_5545 = 1; /*0x6d0958*/
          this->vt_slot_56(0); /*0x6d095e*/
        }
      }
    }
    else if ( v9 >= 49366 && v9 < 49391 ) /*0x6d096f*/
    {
      IDA_BYTE1(v9) &= 0x3Fu; /*0x6d0977*/
      v19 = v9 - 214; /*0x6d097a*/
      if ( v19 >= dword_B0CC20 && v19 <= dword_B0CD28 ) /*0x6d0989*/
        SidebarClearReferences((char *)(v19 - dword_B0CC20 + 1)); /*0x6d0990*/
    }
  }
  else
  {
    IDA_BYTE1(v9) &= ~0x80u; /*0x6d0724*/
    v10 = v9 - 214; /*0x6d0727*/
    if ( v10 == dword_B0CD24 ) /*0x6d072e*/
    {
      BlowStraw_29_Get(); /*0x6d0730*/
    }
    else if ( v10 == dword_B0CB3C ) /*0x6d0740*/
    {
      UI_Create_731A30(); /*0x6d0742*/
    }
    else if ( v10 == dword_B0C1B8 ) /*0x6d0752*/
    {
      UI_Create_730F30(); /*0x6d0754*/
    }
    else if ( v10 == dword_B0CB20 ) /*0x6d0764*/
    {
      ProcessSelectionExperience(); /*0x6d0766*/
    }
    else if ( v10 == dword_B0CB68 ) /*0x6d0776*/
    {
      GetFactoryData(); /*0x6d0778*/
    }
    else if ( v10 == dword_B0CC1C ) /*0x6d078a*/
    {
      v11 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d078c*/
      if ( v11 > 0x18 ) /*0x6d0795*/
        v12 = 0; /*0x6d07a9*/
      else
        v12 = (char *)&unk_B0C1C0 + 96 * v11; /*0x6d07a2*/
      if ( v12[45] ) /*0x6d07ab*/
        UI_Create_731A50(1); /*0x6d07b4*/
      else
        UI_Create_731A70(1); /*0x6d07be*/
    }
    else if ( v10 == dword_B0CB6C ) /*0x6d07ce*/
    {
      UI_Create_730EA0(); /*0x6d07d0*/
    }
    else if ( v10 < dword_B0CC20 || v10 > dword_B0CD28 ) /*0x6d07ea*/
    {
      if ( v10 == dword_B0CB38 ) /*0x6d082d*/
        SelectAllOfType(); /*0x6d0833*/
    }
    else
    {
      v13 = (char *)(v10 - dword_B0CC20 + 1); /*0x6d07ef*/
      if ( SidebarCountAvailableUnits(v13) ) /*0x6d07f3*/
      {
        if ( SidebarHasAvailableUnit(v13) ) /*0x6d0808*/
          TacticalClass::ResetView(v13); /*0x6d0813*/
        else
          TacticalClass::SetObserverView(v13); /*0x6d081d*/
      }
      else
      {
        CreateTeamCommand::performAction_246(v13); /*0x6d07fe*/
      }
    }
  }
  this->CountdownTimer_1547.UpdateDisplay(0); /*0x6d099d*/
  return SidebarClass::UpdateStrips(aP1, a2); /*0x6d09af*/
}
}
// 0x731AF0
namespace gamemd {
CellStruct * * sub_731AF0()
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // esi
  unsigned char *v6; // ecx
  wchar_t *v7; // eax
  int v8; // ecx

  result = *(wchar_t **)&stru_A8EB00.gapE4[228]; /*0x731af1*/
  if ( !*(unsigned int *)&stru_A8EB00.gapE4[228] ) /*0x731afa*/
  {
    StringCSF = (wchar_t *)(GetStringCSF(g_Str_MSG_NothingSelected, 0, g_Str_File_UICmnds_cpp, 856));
    v3 = 3; /*0x731b18*/
    if ( dword_A83D4C ) /*0x731b1f*/
      v3 = *(unsigned int *)&dword_A83D4C[134].__pad_90[4]; /*0x731b21*/
    result = (wchar_t *)MessageListClass::AddMessage( /*0x731b3e*/
                          (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                          0,
                          0,
                          StringCSF,
                          v3,
                          16454,
                          240,
                          1);
    goto LABEL_5; /*0x731b3e*/
  }
  v4 = *(unsigned int *)&stru_A8EB00.gapE4[228]; /*0x731b4e*/
  v5 = 0; /*0x731b50*/
  if ( *(int *)&stru_A8EB00.gapE4[228] <= 0 ) /*0x731b54*/
  {
  LABEL_5:
    IDA_LOBYTE(g_BuildingLoadQueue_Array.QueueingCell[0]) = 1; /*0x731b43*/
    return result; /*0x731b4d*/
  }
  while ( 1 ) /*0x731b56*/
  {
    result = *(wchar_t **)&stru_A8EB00.gapE4[216]; /*0x731b56*/
    v6 = *(unsigned char **)(*(unsigned int *)&stru_A8EB00.gapE4[216] + 4 * v5); /*0x731b5b*/
    if ( v6 ) /*0x731b60*/
    {
      if ( (v6[20] & 1) != 0 ) /*0x731b6c*/
      {
        result = (wchar_t *)(*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 1216))(v6); /*0x731b70*/
        if ( !(unsigned char)result ) /*0x731b78*/
          break; /*0x731b78*/
      }
    }
    if ( ++v5 >= v4 ) /*0x731b7d*/
    {
      IDA_LOBYTE(g_BuildingLoadQueue_Array.QueueingCell[0]) = 1; /*0x731b80*/
      return result; /*0x731b89*/
    }
  }
  v7 = GetStringCSF(aMsgAttackmoveu, 0, g_Str_File_UICmnds_cpp, 862); /*0x731b9b*/
  v8 = 3; /*0x731ba6*/
  if ( dword_A83D4C ) /*0x731bad*/
    v8 = *(unsigned int *)&dword_A83D4C[134].__pad_90[4]; /*0x731baf*/
  return (wchar_t *)MessageListClass::AddMessage( /*0x731b43*/
                      (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                      0,
                      0,
                      v7,
                      v8,
                      16454,
                      240,
                      1);
}
// 0x5BE9E0
namespace gamemd {
TabClass * BlowStraw_29::Read(char a2)
{
  char *v3; // esi
  int v4; // edi

  v3 = (char *)(&this->u32_14FB0);
  v4 = 4; /*0x5be9eb*/
  do /*0x5bea06*/
  {
    v3 -= 3988; /*0x5be9f5*/
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x5bea00*/
    --v4; /*0x5bea05*/
  }
  while ( v4 ); /*0x5bea06*/
  RadarClass::Destruct(); /*0x5bea0a*/
  if ( (a2 & 1) != 0 ) /*0x5bea14*/
    RA2_OPDEL(); /*0x5bea17*/
  return this; /*0x5bea1f*/
}
} // namespace gamemd

// 0x6D0260
namespace gamemd {
int BlowStraw_29_::Stub()
{
  return ObjectClass::processDamage(this);
}
} // namespace gamemd
