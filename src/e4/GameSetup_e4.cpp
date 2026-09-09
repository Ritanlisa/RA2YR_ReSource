// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x60D320
int GameSetup::LookupDialogHash()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_60D320(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x60d326*/
  if ( !MEMORY[0xAC1B04] ) /*0x60d32c*/
    return 0; /*0x60d32c*/
  v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60d34d*/
  if ( !v1 ) /*0x60d352*/
    return 0; /*0x60d352*/
  while ( (void *)*v1 != v4 ) /*0x60d35a*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60d35c*/
    if ( !v1 ) /*0x60d364*/
      return 0; /*0x60d364*/
  }
  v3 = v1 + 1; /*0x60d36e*/
  if ( v3 ) /*0x60d373*/
    return v3[27]; /*0x60d375*/
  else
    return 0; /*0x60d366*/
}
}

// 0x698F90
int GameSetup::WriteINI(CCINIClass * aP1, unsigned signed char * Block)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall GameSetup::WriteINI(int this, CCINIClass *aP1, unsigned __int8 *Block)
{
  INIClass *v4; // edx
  INIClass *v5; // eax
  INIClass *v6; // ecx
  INIClass *v7; // edx
  INIClass *v8; // eax
  int v9; // ebp
  int v10; // ebx
  int result; // eax
  char Buffer[16]; // [esp+10h] [ebp-10h] BYREF

  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)&stru_830620.__pad_579C[37396], *(_DWORD *)this, 0); /*0x698fae*/
  INIClass::SetInt( /*0x698fc1*/
    aP1->__pad_0,
    (INIClass *)Block,
    (INIClass *)&stru_830620.__pad_579C[37384],
    this->GameSetup_field_0x04,
    0);
  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)&stru_830620.__pad_14B0[6168], this->GameSetup_field_0x08, 0); /*0x698fd4*/
  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)aCredits, this->GameSetup_field_0x0C, 0); /*0x698fe7*/
  INIClass::SetInt( /*0x698ffa*/
    aP1->__pad_0,
    (INIClass *)Block,
    (INIClass *)&stru_830620.__pad_579C[29360],
    this->GameSetup_field_0x10,
    0);
  LOBYTE(v4) = *(_BYTE *)(this + 20); /*0x698fff*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29164], v4); /*0x69900b*/
  LOBYTE(v5) = *(_BYTE *)(this + 21); /*0x699010*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29144], v5); /*0x69901c*/
  LOBYTE(v6) = *(_BYTE *)(this + 22); /*0x699021*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29128], v6); /*0x69902d*/
  LOBYTE(v7) = *(_BYTE *)(this + 23); /*0x699032*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[37372], v7); /*0x69903e*/
  LOBYTE(v8) = *(_BYTE *)(this + 24); /*0x699043*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[37356], v8); /*0x69904f*/
  v9 = 1; /*0x699054*/
  v10 = this + 44; /*0x699059*/
  do /*0x69908e*/
  {
    sprintf(Buffer, &stru_830620.__pad_579C[37344], v9); /*0x699067*/
    LOBYTE(result) = GameSetup::FormatToString( /*0x699082*/
                       aP1->__pad_0,
                       Block,
                       Buffer,
                       *(CCINIClass **)(v10 - 4),
                       *(CCINIClass **)v10,
                       *(_DWORD *)(v10 + 4));
    ++v9; /*0x699087*/
    v10 += 12; /*0x699088*/
  }
  while ( v9 < 8 ); /*0x69908e*/
  return result; /*0x699090*/
}
}
