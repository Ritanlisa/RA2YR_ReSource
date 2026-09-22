// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x60D320
int GameSetup::LookupDialogHash()
{
{

  GameSetup *v4 = this; /*0x60d326*/
  if ( !g_DialogHashMap_Count ) /*0x60d32c*/
    return 0; /*0x60d32c*/
  _DWORD * v1 = (_DWORD *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v4) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x60d34d*/
  if ( !v1 ) /*0x60d352*/
    return 0; /*0x60d352*/
  while ( (void *)*v1 != v4 ) /*0x60d35a*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60d35c*/
    if ( !v1 ) /*0x60d364*/
      return 0; /*0x60d364*/
  }
  _DWORD * v3 = v1 + 1; /*0x60d36e*/
  if ( v3 ) /*0x60d373*/
    return v3[27]; /*0x60d375*/
  else
    return 0; /*0x60d366*/
}

// 0x698F90
AbstractClass * * GameSetup::WriteINI(CCINIClass * aP1, unsigned char * Block)
{
{
  INIClass *v4; // edx
  INIClass *v5; // eax
  INIClass *v6; // ecx
  INIClass *v7; // edx
  INIClass *v8; // eax
  int result; // eax
  char Buffer[16]; // [esp+10h] [ebp-10h] BYREF

  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)&stru_830620[59824], *(_DWORD *)this, 0); /*0x698fae*/
  INIClass::SetInt( /*0x698fc1*/
    aP1->__pad_0,
    (INIClass *)Block,
    (INIClass *)&stru_830620[59812],
    this->GameSetup_field_0x04,
    0);
  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)&stru_830620[11464], this->GameSetup_field_0x08, 0); /*0x698fd4*/
  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)aCredits, this->GameSetup_field_0x0C, 0); /*0x698fe7*/
  INIClass::SetInt( /*0x698ffa*/
    aP1->__pad_0,
    (INIClass *)Block,
    (INIClass *)&stru_830620[51788],
    this->GameSetup_field_0x10,
    0);
  LOBYTE(v4) = (unsigned char)this->GameSetup_field_0x14; /*0x698fff*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620[51592], v4); /*0x69900b*/
  LOBYTE(v5) = *(_BYTE *)(this + 21); /*0x699010*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620[51572], v5); /*0x69901c*/
  LOBYTE(v6) = *(_BYTE *)(this + 22); /*0x699021*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620[51556], v6); /*0x69902d*/
  LOBYTE(v7) = *(_BYTE *)(this + 23); /*0x699032*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620[59800], v7); /*0x69903e*/
  LOBYTE(v8) = (unsigned char)this->GameSetup_field_0x18; /*0x699043*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620[59784], v8); /*0x69904f*/
  int v9 = 1; /*0x699054*/
  int v10 = this + 44; /*0x699059*/
  do /*0x69908e*/
  {
    sprintf(Buffer, &stru_830620[59772], v9); /*0x699067*/
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
