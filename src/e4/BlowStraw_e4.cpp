// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlowStraw_29_e4.hpp"

// 0x5BE9E0
namespace gamemd {
TabClass * BlowStraw_29::Read(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TabClass *__thiscall BlowStraw_29_::Read(char *this, char a2)
{
  char *v3; // esi
  int v4; // edi

  v3 = this + 21484; /*0x5be9e5*/
  v4 = 4; /*0x5be9eb*/
  do /*0x5bea06*/
  {
    v3 -= 3988; /*0x5be9f5*/
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x5bea00*/
    --v4; /*0x5bea05*/
  }
  while ( v4 ); /*0x5bea06*/
  RadarClass::Destruct(this); /*0x5bea0a*/
  if ( (a2 & 1) != 0 ) /*0x5bea14*/
    __3_YAXPAX_Z(this); /*0x5bea17*/
  return (TabClass *)this; /*0x5bea1f*/
}
}
} // namespace gamemd

// 0x6D0260
namespace gamemd {
int BlowStraw_29_Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall BlowStraw_29_::Stub(int *this)
{
  return ObjectClass::processDamage(this);
}
}
} // namespace gamemd

// 0x6D0680
namespace gamemd {
int BlowStraw_29::Seek(TabClass * aP1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BlowStraw_29_::Seek(int *this, TabClass *aP1, _DWORD *a2)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  ScrollClass *v8; // eax
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

  v4 = *(this + 5454); /*0x6d068b*/
  v5 = *(this + 5456); /*0x6d0691*/
  if ( v4 != -1 ) /*0x6d069a*/
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v4 >= v5 ) /*0x6d06a6*/
      goto LABEL_6; /*0x6d06a6*/
    v5 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v4; /*0x6d06a8*/
  }
  if ( v5 == 1 ) /*0x6d06ac*/
  {
    v6 = *this; /*0x6d06ae*/
    *((_BYTE *)this + 21829) = 1; /*0x6d06b4*/
    (*(void (__thiscall **)(int *, _DWORD))(v6 + 56))(this, 0); /*0x6d06ba*/
  }
LABEL_6:
  v7 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[11460] + 4); /*0x6d06bd*/
  if ( *a2 >= **(_DWORD **)&MEMORY[0xB077F8].__pad_579C[11460] /*0x6d06dd*/
    && *a2 < **(_DWORD **)&MEMORY[0xB077F8].__pad_579C[11460] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540] )
  {
    v8 = (ScrollClass *)a2[1]; /*0x6d06df*/
    if ( (int)v8 >= v7 && (int)v8 < v7 + 30 ) /*0x6d06f2*/
      Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0); /*0x6d06fd*/
  }
  v9 = aP1->field_0; /*0x6d0706*/
  if ( aP1->field_0 < 32982 || v9 >= 33007 ) /*0x6d0718*/
  {
    if ( v9 == 33008 ) /*0x6d0842*/
    {
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 408), 0x2000, 1.0, 0); /*0x6d0860*/
      if ( *((_BYTE *)this + 21828) ) /*0x6d0865*/
      {
        SidebarUpdateAll(this); /*0x6d0875*/
        (*(void (__thiscall **)(int *, char *))(*this + 52))(this, &MEMORY[0xB077F8].__pad_5498[32]); /*0x6d0883*/
        for ( i = 0; i < 25; ++i ) /*0x6d0886*/
        {
          FontClassEntry = GetFontClassEntry(i); /*0x6d088a*/
          if ( FontClassEntry ) /*0x6d0891*/
            HashTable::Remove(*(int **)&MEMORY[0x87F8E4].__pad_5568[9500], *((_DWORD *)FontClassEntry + 9)); /*0x6d089d*/
        }
        HashTable::Remove(*(int **)&MEMORY[0x87F8E4].__pad_5568[9500], 240); /*0x6d08b3*/
        v16 = *this; /*0x6d08b8*/
        *((_BYTE *)this + 21828) = 0; /*0x6d08c1*/
        (*(void (__thiscall **)(int *, char *))(v16 + 48))(this, &MEMORY[0xB077F8].__pad_53E0[104]); /*0x6d08c8*/
        PushCommandClass::Execute(&MEMORY[0xB077F8].__pad_53E0[104], (int)&stru_830620.__pad_579C[51836]); /*0x6d08d5*/
        v17 = *this; /*0x6d08da*/
        *((_BYTE *)this + 21829) = 1; /*0x6d08e0*/
        (*(void (__thiscall **)(int *, _DWORD))(v17 + 56))(this, 0); /*0x6d08e6*/
      }
    }
    else if ( v9 == 33009 ) /*0x6d08f3*/
    {
      if ( !MEMORY[0xA8B538] ) /*0x6d08fc*/
      {
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 404), 0x2000, 1.0, 0); /*0x6d091a*/
        if ( !*((_BYTE *)this + 21828) ) /*0x6d091f*/
        {
          (*(void (__thiscall **)(int *, char *))(*this + 52))(this, &MEMORY[0xB077F8].__pad_53E0[104]); /*0x6d0932*/
          HashTable::Remove(*(int **)&MEMORY[0x87F8E4].__pad_5568[9500], 241); /*0x6d0940*/
          *((_BYTE *)this + 21828) = 1; /*0x6d0947*/
          CommandClass::BuildBar(this); /*0x6d094d*/
          v18 = *this; /*0x6d0952*/
          *((_BYTE *)this + 21829) = 1; /*0x6d0958*/
          (*(void (__thiscall **)(int *, _DWORD))(v18 + 56))(this, 0); /*0x6d095e*/
        }
      }
    }
    else if ( v9 >= 49366 && v9 < 49391 ) /*0x6d096f*/
    {
      BYTE1(v9) &= 0x3Fu; /*0x6d0977*/
      v19 = v9 - 214; /*0x6d097a*/
      if ( v19 >= *(int *)&MEMORY[0xB077F8].__pad_53E0[72] && v19 <= *(int *)&MEMORY[0xB077F8].__pad_5498[152] ) /*0x6d0989*/
        SidebarClearReferences((char *)(v19 - *(_DWORD *)&MEMORY[0xB077F8].__pad_53E0[72] + 1)); /*0x6d0990*/
    }
  }
  else
  {
    BYTE1(v9) &= ~0x80u; /*0x6d0724*/
    v10 = v9 - 214; /*0x6d0727*/
    if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_5498[148] ) /*0x6d072e*/
    {
      BlowStraw_29_Get(); /*0x6d0730*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[16020] ) /*0x6d0740*/
    {
      UI_Create_731A30(); /*0x6d0742*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[13584] ) /*0x6d0752*/
    {
      UI_Create_730F30(); /*0x6d0754*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[15992] ) /*0x6d0764*/
    {
      ProcessSelectionExperience(); /*0x6d0766*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[16064] ) /*0x6d0776*/
    {
      GetFactoryData(); /*0x6d0778*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_53E0[68] ) /*0x6d078a*/
    {
      v11 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[4 * *(_DWORD *)&MEMORY[0xB077F8].__pad_53E0[68] + 16080]; /*0x6d078c*/
      if ( v11 > 0x18 ) /*0x6d0795*/
        v12 = 0; /*0x6d07a9*/
      else
        v12 = &MEMORY[0xB077F8].__pad_14B0[96 * v11 + 13592]; /*0x6d07a2*/
      if ( v12[45] ) /*0x6d07ab*/
        UI_Create_731A50(1); /*0x6d07b4*/
      else
        UI_Create_731A70(1); /*0x6d07be*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[16068] ) /*0x6d07ce*/
    {
      UI_Create_730EA0(); /*0x6d07d0*/
    }
    else if ( v10 < *(int *)&MEMORY[0xB077F8].__pad_53E0[72] || v10 > *(int *)&MEMORY[0xB077F8].__pad_5498[152] ) /*0x6d07ea*/
    {
      if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[16016] ) /*0x6d082d*/
        SelectAllOfType(); /*0x6d0833*/
    }
    else
    {
      v13 = (char *)(v10 - *(_DWORD *)&MEMORY[0xB077F8].__pad_53E0[72] + 1); /*0x6d07ef*/
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
  CountdownTimer::UpdateDisplay(this + 5447, 0); /*0x6d099d*/
  return SidebarClass::UpdateStrips((char *)this, aP1, a2); /*0x6d09af*/
}
}
} // namespace gamemd

// 0x731AF0
namespace gamemd {
wchar_t * sub_731AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *sub_731AF0()
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax
  int v2; // ecx
  wchar_t *v3; // edi
  int v4; // esi
  _BYTE *v5; // ecx
  wchar_t *v6; // eax
  int v7; // ecx

  result = MEMORY[0xA8ECC8]; /*0x731af1*/
  if ( !MEMORY[0xA8ECC8] ) /*0x731afa*/
  {
    StringCSF = GetStringCSF(MEMORY[0x845584], 0, MEMORY[0x845598], 856); /*0x731b0d*/
    v2 = 3; /*0x731b18*/
    if ( HouseClass_Player ) /*0x731b1f*/
      v2 = *((_DWORD *)HouseClass_Player + 22549); /*0x731b21*/
    result = (wchar_t *)MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, StringCSF, v2, 16454, 240, 1); /*0x731b3e*/
    goto LABEL_5; /*0x731b3e*/
  }
  v3 = MEMORY[0xA8ECC8]; /*0x731b4e*/
  v4 = 0; /*0x731b50*/
  if ( (int)MEMORY[0xA8ECC8] <= 0 ) /*0x731b54*/
  {
LABEL_5:
    MEMORY[0xB0FE58] = 1; /*0x731b43*/
    return result; /*0x731b4d*/
  }
  while ( 1 ) /*0x731b56*/
  {
    result = (wchar_t *)MEMORY[0xA8ECBC]; /*0x731b56*/
    v5 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v4); /*0x731b5b*/
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
      MEMORY[0xB0FE58] = 1; /*0x731b80*/
      return result; /*0x731b89*/
    }
  }
  v6 = GetStringCSF(MEMORY[0x845568], 0, MEMORY[0x845598], 862); /*0x731b9b*/
  v7 = 3; /*0x731ba6*/
  if ( HouseClass_Player ) /*0x731bad*/
    v7 = *((_DWORD *)HouseClass_Player + 22549); /*0x731baf*/
  return (wchar_t *)MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, v6, v7, 16454, 240, 1); /*0x731b43*/
}
}
} // namespace gamemd
