// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlowStraw_29_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"

// 0x6D0680
namespace gamemd {
int BlowStraw_29::Seek(TabClass * aP1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ScrollClass *v8; // eax
  int i; // edi
  char *FontClassEntry; // eax

  IUnknown *v4 = *(this + 5454); /*0x6d068b*/
  int v5 = *(this + 5456); /*0x6d0691*/
  if ( v4 != -1 ) /*0x6d069a*/
  {
    if ( *(_DWORD *)&g_NetworkPlayerBuffer[5960] - v4 >= v5 ) /*0x6d06a6*/
      goto LABEL_6; /*0x6d06a6*/
    v5 -= *(_DWORD *)&g_NetworkPlayerBuffer[5960] - v4; /*0x6d06a8*/
  }
  if ( v5 == 1 ) /*0x6d06ac*/
  {
    int v6 = *this; /*0x6d06ae*/
    *((_BYTE *)this + 21829) = 1; /*0x6d06b4*/
    this->vt_slot_56(0); /*0x6d06ba*/
  }
LABEL_6:
  AbstractClass *v7 = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[33888] + 4); /*0x6d06bd*/
  if ( *a2 >= **(_DWORD **)&g_OverlayTypeConfig[33888] /*0x6d06dd*/
    && *a2 < **(_DWORD **)&g_OverlayTypeConfig[33888] + *(_DWORD *)&DataGlobal_87F8E4[30404] )
  {
    v8 = (ScrollClass *)a2[1]; /*0x6d06df*/
    if ( (int)v8 >= v7 && (int)v8 < v7 + 30 ) /*0x6d06f2*/
      Mouse::SetCursor((int)&DataGlobal_87F7E8, 0, 0); /*0x6d06fd*/
  }
  int v9 = aP1->field_0; /*0x6d0706*/
  if ( aP1->field_0 < 32982 || v9 >= 33007 ) /*0x6d0718*/
  {
    if ( v9 == 33008 ) /*0x6d0842*/
    {
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 408), 0x2000, 1.0, 0); /*0x6d0860*/
      if ( *((_BYTE *)this + 21828) ) /*0x6d0865*/
      {
        SidebarUpdateAll(this); /*0x6d0875*/
        this->vt_slot_52(&g_OverlayTypeConfig[21688]); /*0x6d0883*/
        for ( i = 0; i < 25; ++i ) /*0x6d0886*/
        {
          FontClassEntry = GetFontClassEntry(i); /*0x6d088a*/
          if ( FontClassEntry ) /*0x6d0891*/
            HashTable::Remove(*(int **)&DataGlobal_87F8E4[31364], *((_DWORD *)FontClassEntry + 9)); /*0x6d089d*/
        }
        HashTable::Remove(*(int **)&DataGlobal_87F8E4[31364], 240); /*0x6d08b3*/
        int v16 = *this; /*0x6d08b8*/
        *((_BYTE *)this + 21828) = 0; /*0x6d08c1*/
        this->vt_slot_48(&g_OverlayTypeConfig[21576]); /*0x6d08c8*/
        PushCommandClass::Execute(&g_OverlayTypeConfig[21576], (int)&stru_830620[74264]); /*0x6d08d5*/
        int v17 = *this; /*0x6d08da*/
        *((_BYTE *)this + 21829) = 1; /*0x6d08e0*/
        this->vt_slot_56(0); /*0x6d08e6*/
      }
    }
    else if ( v9 == 33009 ) /*0x6d08f3*/
    {
      if ( !MuteSWLaunches ) /*0x6d08fc*/
      {
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 404), 0x2000, 1.0, 0); /*0x6d091a*/
        if ( !*((_BYTE *)this + 21828) ) /*0x6d091f*/
        {
          this->vt_slot_52(&g_OverlayTypeConfig[21576]); /*0x6d0932*/
          HashTable::Remove(*(int **)&DataGlobal_87F8E4[31364], 241); /*0x6d0940*/
          *((_BYTE *)this + 21828) = 1; /*0x6d0947*/
          CommandClass::BuildBar(this); /*0x6d094d*/
          int v18 = *this; /*0x6d0952*/
          *((_BYTE *)this + 21829) = 1; /*0x6d0958*/
          this->vt_slot_56(0); /*0x6d095e*/
        }
      }
    }
    else if ( v9 >= 49366 && v9 < 49391 ) /*0x6d096f*/
    {
      BYTE1(v9) &= 0x3Fu; /*0x6d0977*/
      int v19 = v9 - 214; /*0x6d097a*/
      if ( v19 >= *(int *)&g_OverlayTypeConfig[21544] && v19 <= *(int *)&g_OverlayTypeConfig[21808] ) /*0x6d0989*/
        SidebarClearReferences((char *)(v19 - *(_DWORD *)&g_OverlayTypeConfig[21544] + 1)); /*0x6d0990*/
    }
  }
  else
  {
    BYTE1(v9) &= ~0x80u; /*0x6d0724*/
    int v10 = v9 - 214; /*0x6d0727*/
    if ( v10 == *(_DWORD *)&g_OverlayTypeConfig[21804] ) /*0x6d072e*/
    {
      BlowStraw_29_Get(); /*0x6d0730*/
    }
    else if ( v10 == *(_DWORD *)&g_OverlayTypeConfig[21316] ) /*0x6d0740*/
    {
      UI_Create_731A30(); /*0x6d0742*/
    }
    else if ( v10 == *(_DWORD *)&g_OverlayTypeConfig[18880] ) /*0x6d0752*/
    {
      UI_Create_730F30(); /*0x6d0754*/
    }
    else if ( v10 == *(_DWORD *)&g_OverlayTypeConfig[21288] ) /*0x6d0764*/
    {
      ProcessSelectionExperience(); /*0x6d0766*/
    }
    else if ( v10 == *(_DWORD *)&g_OverlayTypeConfig[21360] ) /*0x6d0776*/
    {
      GetFactoryData(); /*0x6d0778*/
    }
    else if ( v10 == *(_DWORD *)&g_OverlayTypeConfig[21540] ) /*0x6d078a*/
    {
      unsigned int v11 = *(_DWORD *)&g_OverlayTypeConfig[5296][4 * *(_DWORD *)&g_OverlayTypeConfig[21540] + 16080]; /*0x6d078c*/
      if ( v11 > 0x18 ) /*0x6d0795*/
        char * v12 = 0; /*0x6d07a9*/
      else
        v12 = &g_OverlayTypeConfig[5296][96 * v11 + 13592]; /*0x6d07a2*/
      if ( v12[45] ) /*0x6d07ab*/
        UI_Create_731A50(1); /*0x6d07b4*/
      else
        UI_Create_731A70(1); /*0x6d07be*/
    }
    else if ( v10 == *(_DWORD *)&g_OverlayTypeConfig[21364] ) /*0x6d07ce*/
    {
      UI_Create_730EA0(); /*0x6d07d0*/
    }
    else if ( v10 < *(int *)&g_OverlayTypeConfig[21544] || v10 > *(int *)&g_OverlayTypeConfig[21808] ) /*0x6d07ea*/
    {
      if ( v10 == *(_DWORD *)&g_OverlayTypeConfig[21312] ) /*0x6d082d*/
        SelectAllOfType(); /*0x6d0833*/
    }
    else
    {
      char * v13 = (char *)(v10 - *(_DWORD *)&g_OverlayTypeConfig[21544] + 1); /*0x6d07ef*/
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
  ((CountdownTimer *)((char *)this + 5447)).UpdateDisplay(0); /*0x6d099d*/
  return SidebarClass::UpdateStrips((char *)this, aP1, a2); /*0x6d09af*/
}
}
} // namespace gamemd

// 0x731AF0
namespace gamemd {
CellStruct * * sub_731AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax
  CellStruct *v3; // edi
  wchar_t *v6; // eax
  result = g_SelectionManager; /*0x731af1*/
  if ( !g_SelectionManager ) /*0x731afa*/
  {
    StringCSF = GetStringCSF(g_Str_MSG_NothingSelected, 0, g_Str_File_UICmnds_cpp, 856); /*0x731b0d*/
    int v2 = 3; /*0x731b18*/
    if ( HouseClass_Player ) /*0x731b1f*/
      v2 = *((_DWORD *)HouseClass_Player + 22549); /*0x731b21*/
    result = (wchar_t *)MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, v2, 16454, 240, 1); /*0x731b3e*/
    goto LABEL_5; /*0x731b3e*/
  }
  v3 = g_SelectionManager; /*0x731b4e*/
  int v4 = 0; /*0x731b50*/
  if ( (int)g_SelectionManager <= 0 ) /*0x731b54*/
  {
LABEL_5:
    DataGlobal_B0FE58 = 1; /*0x731b43*/
    return result; /*0x731b4d*/
  }
  while ( 1 ) /*0x731b56*/
  {
    result = (wchar_t *)g_ObjectClass_CurrentCount; /*0x731b56*/
    _BYTE * v5 = (_BYTE *)*((_DWORD *)g_ObjectClass_CurrentCount + v4); /*0x731b5b*/
    if ( v5 ) /*0x731b60*/
    {
      if ( (v5[20] & 1) != 0 ) /*0x731b6c*/
      {
        result = (wchar_t *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 1216))(v5); /*0x731b70*/
        if ( !(_BYTE)result ) /*0x731b78*/
          break; /*0x731b78*/
      }
    }
    if ( ++v4 >= (int)v3 ) /*0x731b7d*/
    {
      DataGlobal_B0FE58 = 1; /*0x731b80*/
      return result; /*0x731b89*/
    }
  }
  v6 = GetStringCSF(DataGlobal_845568, 0, g_Str_File_UICmnds_cpp, 862); /*0x731b9b*/
  int v7 = 3; /*0x731ba6*/
  if ( HouseClass_Player ) /*0x731bad*/
    v7 = *((_DWORD *)HouseClass_Player + 22549); /*0x731baf*/
  return (wchar_t *)MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, v6, v7, 16454, 240, 1); /*0x731b43*/
}
}
} // namespace gamemd

// 0x5BE9E0
namespace gamemd {
TabClass * BlowStraw_29::Read(char a2)
{
{
    char *v3;
    int v4;
    v3 = this + 21484;
    v4 = 4;
    do
  {
    v3 -= 3988;
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56);
    --v4;
  }
    while ( v4 );
    RadarClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TabClass *)this;
}
}
} // namespace gamemd

// 0x6D0260
namespace gamemd {
int BlowStraw_29_::Stub()
{
    int __thiscall BlowStraw_29_::Stub(int *(void**)this)
{
    return ObjectClass::processDamage(this);
}
}
} // namespace gamemd
