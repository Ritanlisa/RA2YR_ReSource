// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_763700_e4.hpp"
#include "e4/classes/E4Recv_764B90_e4.hpp"
#include "e4/classes/E4Recv_764FF0_e4.hpp"
#include "e4/classes/E4Recv_765000_e4.hpp"
#include "e4/classes/E4Recv_7651D0_e4.hpp"
#include "e4/classes/E4Recv_7667E0_e4.hpp"
#include "e4/classes/E4Recv_7667F0_e4.hpp"
#include "e4/classes/E4Recv_767320_e4.hpp"
#include "e4/classes/E4Recv_767E90_e4.hpp"
#include "e4/classes/E4Recv_767EC0_e4.hpp"
#include "e4/classes/E4Recv_769490_e4.hpp"
#include "e4/classes/E4Recv_769C40_e4.hpp"
#include "e4/classes/E4Recv_76AB90_e4.hpp"
#include "e4/classes/E4Recv_76ABE0_e4.hpp"
#include "e4/classes/E4Recv_76B180_e4.hpp"
#include "e4/classes/E4Recv_76B7B0_e4.hpp"
#include "e4/classes/E4Recv_76C290_e4.hpp"
#include "e4/classes/E4Recv_76C6E0_e4.hpp"
#include "e4/classes/E4Recv_76D3A0_e4.hpp"
#include "e4/classes/E4Recv_76D470_e4.hpp"
#include "e4/classes/E4Recv_76DAD0_e4.hpp"
#include "e4/classes/E4Recv_76DED0_e4.hpp"
#include "e4/classes/E4Recv_76DF50_e4.hpp"
#include "e4/classes/E4Recv_76DFD0_e4.hpp"
#include "e4/classes/E4Recv_76E090_e4.hpp"
#include "e4/classes/WorldDominationTour__Territory_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12_e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_26_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/Map_WorldDominationTour_38_e4.hpp"
#include "e4/classes/Map_WorldDominationTour_43_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x7636F0
namespace gamemd {
int unknown_libname_36()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_36(_DWORD *this)
{
  *this = 0; /*0x7636f4*/
  this->vtable2 = 0; /*0x7636f6*/
  this->vtable3 = 0; /*0x7636f9*/
  return this; /*0x7636fc*/
}
}
} // namespace gamemd

// 0x764B90
namespace gamemd {
char * E4Recv_764B90::WDT_Campaign_Constructor(const char ** a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall WDT_Campaign_Constructor(char *this, const char **a2, int a3)
{
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  int OwnerHouse; // eax
  int v7; // ecx
  unsigned int v8; // ebp
  _DWORD *v9; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  int v16; // edi
  int Int; // ebp
  _DWORD *v18; // ebp
  char **v19; // eax
  int v20; // eax
  int v22; // [esp-4h] [ebp-D4h]
  char **RegionString; // [esp-4h] [ebp-D4h]
  unsigned int v24; // [esp+10h] [ebp-C0h] BYREF
  void *v25[2]; // [esp+14h] [ebp-BCh] BYREF
  _DWORD v26[2]; // [esp+1Ch] [ebp-B4h] BYREF
  _DWORD v27[2]; // [esp+24h] [ebp-ACh] BYREF
  _DWORD v28[2]; // [esp+2Ch] [ebp-A4h] BYREF
  void *v29[3]; // [esp+34h] [ebp-9Ch] BYREF
  _DWORD v30[10]; // [esp+40h] [ebp-90h] BYREF
  int v31; // [esp+68h] [ebp-68h]
  int v32; // [esp+6Ch] [ebp-64h]
  int v33; // [esp+70h] [ebp-60h]
  _DWORD v34[22]; // [esp+74h] [ebp-5Ch] BYREF
  int v35; // [esp+CCh] [ebp-4h]

  v4 = this + 8; /*0x764b9e*/
  v35 = 0; /*0x764ba1*/
  this->M4 = 0; /*0x764baa*/
  *(_DWORD *)this = &vt_ReferenceCounted; /*0x764bad*/
  ComPtr::Constructor((_DWORD *)this + 2); /*0x764bb3*/
  *v4 = &vt_rc_ptr_WorldDominationTour_CampaignProperties; /*0x764bbf*/
  ComPtr::Set(v4, *(_DWORD *)(a3 + 4)); /*0x764bcb*/
  Team_Create_767B00(this + 16, *(_DWORD *)(a3 + 4) + 8); /*0x764bdb*/
  Team_Create_765C90(4, 0); /*0x764be9*/
  this->M24 = &vt_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict; /*0x764bf7*/
  this->M44 = 10; /*0x764bfd*/
  this->M40 = 0; /*0x764c04*/
  this->M68 = 0; /*0x764c0b*/
  String::AssignFromPtr((char **)this + 18, a2); /*0x764c0e*/
  *(_DWORD *)this = &vt_WorldDominationTour_Campaign; /*0x764c18*/
  this->M52 = 0; /*0x764c1e*/
  this->M56 = 0; /*0x764c20*/
  this->M60 = 0; /*0x764c23*/
  this->M64 = 0; /*0x764c26*/
  v5 = *(_DWORD **)(a3 + 4); /*0x764c29*/
  if ( v5[3] ) /*0x764c2c*/
  {
    OwnerHouse = Conflict::GetOwnerHouse(v5); /*0x764c3a*/
    ActivateScreenWDT((int)v28, OwnerHouse); /*0x764c47*/
    v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12) + 32); /*0x764c58*/
    v8 = v7 - 1; /*0x764c5a*/
    v24 = v7 - 1; /*0x764c5d*/
    if ( v7 ) /*0x764c61*/
    {
      do /*0x764d8a*/
      {
        if ( WDTClass::GetCellType((_DWORD *)v28[1], v8) == 1 ) /*0x764c74*/
        {
          if ( v8 >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12) + 60) ) /*0x764c89*/
          {
            ComPtr::Constructor(v26); /*0x764c97*/
            v10 = v35; /*0x764c9c*/
            v26[0] = &vt_rc_ptr_WDTTerritory; /*0x764ca3*/
            LOBYTE(v10) = v35 | 1; /*0x764cab*/
            v9 = v26; /*0x764cad*/
            v35 = v10; /*0x764cb1*/
          }
          else
          {
            v9 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12) + 48) + 8 * v8); /*0x764c8e*/
          }
          ComPtr::Constructor(v25); /*0x764cbc*/
          v25[0] = &vt_rc_ptr_WDTTerritory; /*0x764cc1*/
          ComPtr::Set(v25, v9[1]); /*0x764cd1*/
          if ( (v35 & 1) != 0 ) /*0x764cde*/
          {
            v11 = v35; /*0x764ce0*/
            LOBYTE(v11) = v35 & 0xFE; /*0x764ceb*/
            v26[0] = &vt_rc_ptr_WDTTerritory; /*0x764ced*/
            v35 = v11; /*0x764cf5*/
            ComPtr::Release(v26); /*0x764cfc*/
          }
          if ( v25[1] ) /*0x764d07*/
          {
            Team_Create_765F60(v27, v25); /*0x764d11*/
            v12 = this->M32; /*0x764d16*/
            if ( this->M40 < v12 /*0x764d3b*/
              || (*(this + 37) || !v12)
              && (v13 = this->M44, v13 > 0)
              && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->M24 + 8))(
                   this + 24,
                   v12 + v13,
                   0) )
            {
              v14 = this->M40; /*0x764d42*/
              v22 = v27[1]; /*0x764d49*/
              this->M40 = v14 + 1; /*0x764d4d*/
              ComPtr::Set((_DWORD *)(this->M28 + 8 * v14), v22); /*0x764d56*/
            }
            v27[0] = &vt_rc_ptr_WorldDominationTour_Conflict; /*0x764d5f*/
            ComPtr::Release(v27); /*0x764d67*/
          }
          v25[0] = &vt_rc_ptr_WDTTerritory; /*0x764d70*/
          ComPtr::Release(v25); /*0x764d78*/
          v8 = v24; /*0x764d7d*/
        }
        v15 = v8--; /*0x764d81*/
        v24 = v8; /*0x764d86*/
      }
      while ( v15 ); /*0x764d8a*/
    }
    v28[0] = &vt_rc_ptr_WorldDominationTour_State; /*0x764d94*/
    ComPtr::Release(v28); /*0x764d9c*/
  }
  BufferIOFile::Constructor(v34, aWdthistIni_0); /*0x764daa*/
  v16 = 0; /*0x764daf*/
  if ( File::IsReady(v34, 0) )
  {
    v29[1] = 0; /*0x764dc7*/
    v29[2] = 0; /*0x764dcb*/
    GenericList::Constructor(v30); /*0x764dcf*/
    v30[0] = &vt_List_INIClass_INISection; /*0x764dde*/
    memset(&v30[7], 0, 12); /*0x764de6*/
    LOBYTE(v31) = 0; /*0x764df2*/
    v32 = 0; /*0x764df7*/
    v33 = 0; /*0x764dfb*/
    v29[0] = &vt_INIClass; /*0x764dff*/
    FileStraw::Open(v29, (int)v34, 0); /*0x764e07*/
    CCFileClass::Close(v34); /*0x764e10*/
    String::Assign((char **)&v24, g_INI_Key_CampaignID); /*0x764e1e*/
    Int = INIClass::ReadInt((char **)this + 18, (char **)&v24, -1); /*0x764e3b*/
    DeleteAndZero((void **)&v24); /*0x764e3d*/
    this->M48 = Int < 0 ? 0 : Int;
    if ( this->M48 == WDTObject::GetSize(*(_DWORD **)(a3 + 4)) )
    {
      v18 = this + 52; /*0x764e60*/
      do
      {
        RegionString = GetRegionStringWOL((void *)v16); /*0x764e6a*/
        v19 = String::Assign((char **)v25, g_INI_Key_LastDay); /*0x764e79*/
        String::Concat((const char **)v19, (char **)&v24, RegionString); /*0x764e80*/
        DeleteAndZero(v25); /*0x764e89*/
        v20 = INIClass::ReadInt((char **)this + 18, (char **)&v24, 0); /*0x764e9d*/
        *v18 = v20 < 0 ? 0 : v20;
        DeleteAndZero((void **)&v24); /*0x764eb3*/
        ++v16; /*0x764eb8*/
        ++v18; /*0x764eb9*/
      }
      while ( v16 < 4 );
      String::Assign((char **)&v24, aPlayerfaction); /*0x764eca*/
      this->M68 = INIClass::ReadInt((char **)this + 18, (char **)&v24, this->M68); /*0x764ee9*/
      DeleteAndZero((void **)&v24); /*0x764eec*/
    }
    else
    {
      this->M52 = 0; /*0x764ef5*/
      this->M56 = 0; /*0x764ef8*/
      this->M60 = 0; /*0x764efb*/
      this->M64 = 0; /*0x764efe*/
    }
    HashTable::DestroyHashTableINIClass(v29); /*0x764f05*/
  }
  v34[0] = &off_7E1668; /*0x764f0e*/
  BufferIOFileClass::Dtor(v34); /*0x764f16*/
  return this; /*0x764f1d*/
}
}
} // namespace gamemd

// 0x765000
namespace gamemd {
char * E4Recv_765000::sub_765000(ScoreScreen * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_765000(int this, ScoreScreen *aP1)
{
  char **v3; // eax
  char **RegionStringWOL; // [esp-4h] [ebp-10Ch]
  ObjectClass aP2; // [esp+10h] [ebp-F8h] BYREF

  this->M48 = WDTObject::GetSize(*(_DWORD **)(this + 12)); /*0x76501b*/
  *(_DWORD *)(this + 4 * (_DWORD)aP1 + 52) = Conflict::GetOwnerHouse(*(_DWORD **)(this + 12)); /*0x76502c*/
  *(_DWORD *)&aP2[12] = 0; /*0x765030*/
  aP2.uniqueId = 0; /*0x765034*/
  GenericNode::Constructor(&aP2.nextArrayIndex); /*0x765038*/
  GenericNode::Constructor(&aP2.objectTypeFlags); /*0x765041*/
  LinkedList::Prepend(&aP2.nextArrayIndex, (int)&aP2.objectTypeFlags); /*0x765057*/
  aP2.abstractFlags = (int)&vt_List_INIClass_INISection; /*0x765060*/
  memset(&aP2.nextObject, 0, 13); /*0x765068*/
  aP2.ambientSoundController[1] = 0; /*0x765078*/
  aP2.ambientSoundController[2] = 0; /*0x76507c*/
  *(_DWORD *)&aP2[8] = &vt_INIClass; /*0x765080*/
  BufferIOFile::Init(&aP2.ambientSoundController[3]); /*0x765088*/
  CCFileClass::Reopen(&aP2.ambientSoundController[3], g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x765098*/
  if ( !File::IsReady(&aP2.ambientSoundController[3], 0) ) /*0x7650a2*/
  {
    FileClass::Close(&aP2.ambientSoundController[3]); /*0x7650af*/
    CCFileClass::Close(&aP2.ambientSoundController[3]); /*0x7650b8*/
    CCFileClass::Reopen(&aP2.ambientSoundController[3], g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x7650c8*/
  }
  FileStraw::Open(&aP2[8], (int)&aP2.ambientSoundController[3], 0); /*0x7650d7*/
  CCFileClass::Close(&aP2.ambientSoundController[3]); /*0x7650e0*/
  aP2.ambientSoundController[3] = (int)&off_7E1668; /*0x7650e9*/
  BufferIOFileClass::Dtor(&aP2.ambientSoundController[3]); /*0x7650f1*/
  RegionStringWOL = (char **)GetRegionStringWOL(aP1); /*0x765101*/
  v3 = String::Assign((char **)&aP2, g_INI_Key_LastDay); /*0x76510c*/
  String::Concat((const char **)v3, (char **)&aP2[4], RegionStringWOL); /*0x765113*/
  DeleteAndZero((void **)&aP2); /*0x76511c*/
  String::Assign((char **)&aP2, g_INI_Key_CampaignID); /*0x76512a*/
  INIClass::SetIntFormat(&aP2[8], (char **)(this + 72), &aP2, this->M48, 0); /*0x765141*/
  DeleteAndZero((void **)&aP2); /*0x76514a*/
  INIClass::SetIntFormat( /*0x76515f*/
    &aP2[8],
    (char **)(this + 72),
    (ObjectClass *)&aP2[4],
    *(_DWORD *)(this + 4 * (_DWORD)aP1 + 52),
    0);
  BufferIOFile::Init(&aP2.location[1]); /*0x76516b*/
  CCFileClass::Reopen(&aP2.location[1], g_Str_File_WDTHist_ini, (CDFileClass *)2); /*0x76517e*/
  INIClass::SaveToPipe(&aP2[8], (int)&aP2.location[1]); /*0x76518f*/
  aP2.location[1] = (int)&off_7E1668; /*0x76519b*/
  BufferIOFileClass::Dtor(&aP2.location[1]); /*0x7651a6*/
  DeleteAndZero((void **)&aP2[4]); /*0x7651af*/
  return HashTable::DestroyHashTableINIClass((void **)&aP2[8]); /*0x7651bd*/
}
}
} // namespace gamemd

// 0x7651D0
namespace gamemd {
char * E4Recv_7651D0::sub_7651D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_7651D0(char **this)
{
  char **v2; // edi
  int i; // esi
  char **v4; // eax
  ObjectClass *RegionStringWOL; // [esp-4h] [ebp-108h]
  ObjectClass aP2; // [esp+Ch] [ebp-F8h] BYREF

  *(_DWORD *)&aP2[12] = 0; /*0x7651e1*/
  aP2.uniqueId = 0; /*0x7651e5*/
  GenericNode::Constructor(&aP2.nextArrayIndex); /*0x7651e9*/
  GenericNode::Constructor(&aP2.objectTypeFlags); /*0x7651f2*/
  LinkedList::Prepend(&aP2.nextArrayIndex, (int)&aP2.objectTypeFlags); /*0x765208*/
  aP2.abstractFlags = (int)&vt_List_INIClass_INISection; /*0x765211*/
  memset(&aP2.nextObject, 0, 13); /*0x765219*/
  aP2.ambientSoundController[1] = 0; /*0x765229*/
  aP2.ambientSoundController[2] = 0; /*0x76522d*/
  *(_DWORD *)&aP2[8] = &vt_INIClass; /*0x765231*/
  BufferIOFile::Init(&aP2.ambientSoundController[3]); /*0x765239*/
  CCFileClass::Reopen(&aP2.ambientSoundController[3], g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x765249*/
  if ( !File::IsReady(&aP2.ambientSoundController[3], 0) ) /*0x765253*/
  {
    FileClass::Close(&aP2.ambientSoundController[3]); /*0x765260*/
    CCFileClass::Close(&aP2.ambientSoundController[3]); /*0x765269*/
    CCFileClass::Reopen(&aP2.ambientSoundController[3], g_Str_File_WDTHist_ini, (CDFileClass *)1); /*0x765279*/
  }
  FileStraw::Open(&aP2[8], (int)&aP2.ambientSoundController[3], 0); /*0x765288*/
  CCFileClass::Close(&aP2.ambientSoundController[3]); /*0x765291*/
  aP2.ambientSoundController[3] = (int)&off_7E1668; /*0x76529a*/
  BufferIOFileClass::Dtor(&aP2.ambientSoundController[3]); /*0x7652a2*/
  String::Assign((char **)&aP2, g_INI_Key_CampaignID); /*0x7652b0*/
  v2 = this + 18; /*0x7652ba*/
  INIClass::SetIntFormat(&aP2[8], this + 18, &aP2, 0, 0); /*0x7652c4*/
  DeleteAndZero((void **)&aP2); /*0x7652cd*/
  for ( i = 0; i < 4; ++i ) /*0x7652d2*/
  {
    RegionStringWOL = (ObjectClass *)GetRegionStringWOL((void *)i); /*0x7652db*/
    v4 = String::Assign((char **)&aP2[4], g_INI_Key_LastDay); /*0x7652ea*/
    String::Concat((const char **)v4, (char **)&aP2, (char **)RegionStringWOL); /*0x7652f1*/
    DeleteAndZero((void **)&aP2[4]); /*0x7652fa*/
    INIClass::SetIntFormat(&aP2[8], v2, &aP2, 0, 0); /*0x76530b*/
    DeleteAndZero((void **)&aP2); /*0x765314*/
  }
  BufferIOFile::Init(&aP2.location[1]); /*0x765326*/
  CCFileClass::Reopen(&aP2.location[1], g_Str_File_WDTHist_ini, (CDFileClass *)2); /*0x765339*/
  INIClass::SaveToPipe(&aP2[8], (int)&aP2.location[1]); /*0x76534a*/
  aP2.location[1] = (int)&off_7E1668; /*0x765356*/
  BufferIOFileClass::Dtor(&aP2.location[1]); /*0x765361*/
  return HashTable::DestroyHashTableINIClass((void **)&aP2[8]); /*0x76536f*/
}
}
} // namespace gamemd

// 0x7660F0
namespace gamemd {
int WDT_InitGameOptions()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int WDT_InitGameOptions()
{
  char *v0; // ecx
  int v1; // esi
  int v2; // eax
  char *v3; // ecx
  char *v4; // ecx
  _DWORD *v5; // esi
  int v6; // eax
  char *v7; // ecx
  char *v8; // ecx
  _DWORD *v9; // esi
  int v10; // eax
  char *v11; // ecx
  int v12; // esi
  int v13; // eax
  char *v14; // ecx
  char *v15; // ecx
  _DWORD *v16; // esi
  int v17; // eax
  char *v18; // ecx
  char *v19; // ecx
  _DWORD *v20; // esi
  int v21; // eax
  char *v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h]
  char *v25; // [esp+18h] [ebp-20h] BYREF
  int v26; // [esp+1Ch] [ebp-1Ch]
  void **v27; // [esp+28h] [ebp-10h] BYREF
  int v28; // [esp+2Ch] [ebp-Ch]
  _DWORD v29[2]; // [esp+30h] [ebp-8h] BYREF

  dword_B72770 = 0; /*0x7660fa*/
  Conflict_WorldDominationTour_12::ddtor(&dword_B72760); /*0x766104*/
  v26 = 0; /*0x766109*/
  v25 = v0; /*0x76610b*/
  String::Assign(&v25, aWdtTechlevel); /*0x766113*/
  v1 = System_Init_766880(sub_7667F0, (char)v25, v26); /*0x76612f*/
  ComPtr::Constructor(&v27); /*0x766131*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76613f*/
  ComPtr::Set(&v27, *(_DWORD *)(v1 + 4)); /*0x766147*/
  if ( dword_B72770 < dword_B72768 /*0x766183*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72768 + dword_B72774,
         0) )
  {
    v2 = dword_B72770++; /*0x766196*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v2), v28); /*0x7661a7*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7661b0*/
  ComPtr::Release(&v27); /*0x7661b4*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char; /*0x7661bd*/
  ComPtr::Release(v29); /*0x7661c5*/
  v26 = 1; /*0x7661ca*/
  v25 = v3; /*0x7661cc*/
  String::Assign(&v25, aWdtBases); /*0x7661d4*/
  v24 = 0; /*0x7661d9*/
  v23 = v4; /*0x7661db*/
  String::Assign(&v23, aWdtNobases); /*0x7661e3*/
  v5 = ConstructorWDTFlagOption(v29, 16, v23, v24, v25, v26); /*0x7661fa*/
  ComPtr::Constructor(&v27); /*0x7661fc*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766201*/
  ComPtr::Set(&v27, v5[1]); /*0x76620d*/
  if ( dword_B72770 < dword_B72768 /*0x766249*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v6 = dword_B72770++; /*0x76625c*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v6), v28); /*0x76626d*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766276*/
  ComPtr::Release(&v27); /*0x76627a*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x766283*/
  ComPtr::Release(v29); /*0x76628b*/
  v26 = 0; /*0x766290*/
  v25 = v7; /*0x766292*/
  String::Assign(&v25, aWdtShortgame); /*0x76629a*/
  v24 = 1; /*0x76629f*/
  v23 = v8; /*0x7662a1*/
  String::Assign(&v23, aWdtNotshortgam); /*0x7662a9*/
  v9 = ConstructorWDTFlagOption(v29, 1024, v23, v24, v25, v26); /*0x7662c0*/
  ComPtr::Constructor(&v27); /*0x7662c2*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7662c7*/
  ComPtr::Set(&v27, v9[1]); /*0x7662d3*/
  if ( dword_B72770 < dword_B72768 /*0x76630f*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v10 = dword_B72770++; /*0x766322*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v10), v28); /*0x766333*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76633c*/
  ComPtr::Release(&v27); /*0x766340*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x766349*/
  ComPtr::Release(v29); /*0x766351*/
  v26 = 0; /*0x766356*/
  v25 = v11; /*0x766358*/
  String::Assign(&v25, aWdtUnitcount); /*0x766360*/
  v12 = System_Init_766880(sub_7667E0, (char)v25, v26); /*0x76637c*/
  ComPtr::Constructor(&v27); /*0x76637e*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766383*/
  ComPtr::Set(&v27, *(_DWORD *)(v12 + 4)); /*0x76638f*/
  if ( dword_B72770 < dword_B72768 /*0x7663cb*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v13 = dword_B72770++; /*0x7663de*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v13), v28); /*0x7663ef*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7663f8*/
  ComPtr::Release(&v27); /*0x7663fc*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char; /*0x766405*/
  ComPtr::Release(v29); /*0x76640d*/
  v26 = 0; /*0x766412*/
  v25 = v14; /*0x766414*/
  String::Assign(&v25, aWdtRedeployabl); /*0x76641c*/
  v24 = 1; /*0x766421*/
  v23 = v15; /*0x766423*/
  String::Assign(&v23, aWdtNoredeploym); /*0x76642b*/
  v16 = ConstructorWDTFlagOption(v29, 32, v23, v24, v25, v26); /*0x766442*/
  ComPtr::Constructor(&v27); /*0x766444*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766449*/
  ComPtr::Set(&v27, v16[1]); /*0x766455*/
  if ( dword_B72770 < dword_B72768 /*0x766491*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72760 + 8))(
         &dword_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v17 = dword_B72770++; /*0x7664a4*/
    ComPtr::Set((_DWORD *)(dword_B72764 + 8 * v17), v28); /*0x7664b5*/
  }
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7664be*/
  ComPtr::Release(&v27); /*0x7664c2*/
  v29[0] = &vt_rc_ptr_WorldDominationTour_FlagGameOption; /*0x7664cb*/
  ComPtr::Release(v29); /*0x7664d3*/
  v26 = 1; /*0x7664d8*/
  v25 = v18; /*0x7664da*/
  String::Assign(&v25, aWdtCrates); /*0x7664e2*/
  v24 = 1; /*0x7664e7*/
  v23 = v19; /*0x7664e9*/
  String::Assign(&v23, aWdtNocrates); /*0x7664f1*/
  v20 = ConstructorWDTFlagOption(v29, 256, v23, v24, v25, v26); /*0x766508*/
  ComPtr::Constructor(&v27); /*0x76650a*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76650f*/
  ComPtr::Set(&v27, v20[1]); /*0x76651b*/
  System_Init_766EE0(&v27); /*0x76652a*/
  v27 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x766533*/
  ComPtr::Release(&v27); /*0x766537*/
  System_Init_766900(v29); /*0x766540*/
  v21 = System_Init_7676F0(&v27, 201326592); /*0x76654e*/
  System_Init_766F70(v21); /*0x766558*/
  System_Init_766EE0(v29); /*0x766567*/
  System_Init_7668F0(v29); /*0x766570*/
  return System_Init_766910(&v27); /*0x76657e*/
}
}
} // namespace gamemd

// 0x7667E0
namespace gamemd {
int E4Recv_7667E0::sub_7667E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7667E0(unsigned __int8 *this)
{
  return *(this + 14); /*0x7667e5*/
}
}
} // namespace gamemd

// 0x7667F0
namespace gamemd {
int E4Recv_7667F0::sub_7667F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7667F0(unsigned __int8 *this)
{
  return *(this + 15); /*0x7667f5*/
}
}
} // namespace gamemd

// 0x767EC0
namespace gamemd {
void E4Recv_767EC0::sub_767EC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_767EC0(_DWORD *this)
{
  *this = &vt_MSFrameAnim; /*0x767ec0*/
  VtableStub::5CB6C0(this); /*0x767ec6*/
}
}
} // namespace gamemd

// 0x769480
namespace gamemd {
int unknown_libname_37()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
ObjectClass *__thiscall unknown_libname_37(_DWORD *this)
{
  *this = 0; /*0x769484*/
  this->vtable2 = 0; /*0x769486*/
  this->vtable3 = 0; /*0x769489*/
  return (ObjectClass *)this; /*0x76948c*/
}
}
} // namespace gamemd

// 0x769550
namespace gamemd {
int WDTMap_LoadAsset(const char ** a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall WDTMap_LoadAsset(const char **a1, int a2)
{
  _DWORD *v3; // ebp
  void *v4; // eax
  void *v5; // esi
  void *v6; // eax
  void *v7; // esi
  void **v8; // eax
  int v9; // edx
  unsigned int v10; // ebp
  int v11; // esi
  char *v12; // eax
  char *v13; // edi
  int v14; // ecx
  int v15; // eax
  char *v16; // ebx
  _DWORD *v17; // edx
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // edx
  char *v21; // eax
  char *v22; // edi
  int v23; // ecx
  int v24; // eax
  char *v25; // ebx
  _DWORD *v26; // edx
  void **v27; // eax
  int *v28; // ecx
  int v29; // ebp
  int v30; // eax
  int v31; // esi
  int v32; // esi
  int v33; // edi
  int v34; // esi
  bool v35; // cc
  int v36; // edi
  int v37; // ebx
  int v38; // ebp
  int v39; // ebx
  int v40; // eax
  int v41; // edi
  int v42; // esi
  char **v43; // eax
  _DWORD *v44; // eax
  int v45; // ecx
  char **v46; // eax
  char **v47; // eax
  int v49; // [esp+10h] [ebp-158h] BYREF
  int v50; // [esp+14h] [ebp-154h]
  void **v51; // [esp+18h] [ebp-150h] BYREF
  void *v52; // [esp+1Ch] [ebp-14Ch]
  int v53; // [esp+20h] [ebp-148h]
  int v54; // [esp+24h] [ebp-144h]
  void **v55; // [esp+28h] [ebp-140h] BYREF
  void *Block; // [esp+2Ch] [ebp-13Ch]
  unsigned int v57; // [esp+30h] [ebp-138h]
  int v58; // [esp+34h] [ebp-134h]
  _DWORD *v59; // [esp+38h] [ebp-130h] BYREF
  void **v60; // [esp+3Ch] [ebp-12Ch] BYREF
  void ***v61; // [esp+40h] [ebp-128h]
  int v62; // [esp+44h] [ebp-124h]
  int v63; // [esp+48h] [ebp-120h] BYREF
  unsigned int v64; // [esp+4Ch] [ebp-11Ch] BYREF
  int v65; // [esp+50h] [ebp-118h] BYREF
  void **v66; // [esp+54h] [ebp-114h] BYREF
  void ***v67; // [esp+58h] [ebp-110h]
  void *v68; // [esp+5Ch] [ebp-10Ch]
  void *v69; // [esp+60h] [ebp-108h] BYREF
  _DWORD v70[2]; // [esp+64h] [ebp-104h] BYREF
  int v71; // [esp+6Ch] [ebp-FCh]
  int v72; // [esp+70h] [ebp-F8h]
  const char **v73; // [esp+74h] [ebp-F4h]
  void *v74[3]; // [esp+78h] [ebp-F0h] BYREF
  void **v75; // [esp+84h] [ebp-E4h] BYREF
  _DWORD v76[6]; // [esp+A0h] [ebp-C8h] BYREF
  _DWORD v77[22]; // [esp+B8h] [ebp-B0h] BYREF
  _DWORD v78[22]; // [esp+110h] [ebp-58h] BYREF

  v73 = a1; /*0x769558*/
  BufferIOFile::Init(v77); /*0x769567*/
  CCFileClass::Reopen(v77, DataGlobal_848BE4, 1); /*0x76957a*/
  v74[1] = 0; /*0x769588*/
  v74[2] = 0; /*0x76958c*/
  GenericList::Constructor(&v75); /*0x769593*/
  v75 = &vt_List_INIClass_INISection; /*0x76959f*/
  Node::Init(v76); /*0x7695aa*/
  v76[5] = 0; /*0x7695bc*/
  v74[0] = &vt_INIClass; /*0x7695c3*/
  FileStraw::Open(v74, (int)v77, 0); /*0x7695ce*/
  CCFileClass::Close(v77); /*0x7695da*/
  sub_47AA00(a2); /*0x7695e7*/
  v3 = DecodeFrameSHP((int)v78, 0, 0, 0); /*0x7695fc*/
  v59 = v3; /*0x769600*/
  v63 = (*(int (__thiscall **)(_DWORD *))(*v3 + 128))(v3); /*0x76960d*/
  v65 = (*(int (__thiscall **)(_DWORD *))(*v3 + 124))(v3); /*0x76961e*/
  v52 = 0; /*0x769627*/
  v53 = 30; /*0x76962b*/
  LOWORD(v54) = 1; /*0x76962f*/
  v51 = &vt_VectorClass_TRect_int; /*0x769638*/
  v4 = __2_YAPAXI_Z(0x1E0u); /*0x769640*/
  v5 = v4; /*0x769645*/
  if ( v4 ) /*0x76964c*/
    Array::ForEach((int)v4, 16, 30, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769657*/
  else
    v5 = 0; /*0x76965e*/
  v52 = v5; /*0x769665*/
  BYTE1(v54) = 1; /*0x769669*/
  Block = 0; /*0x76966e*/
  v57 = 30; /*0x769672*/
  LOWORD(v58) = 1; /*0x769676*/
  v55 = &vt_VectorClass_WorldDominationTour_Centroid; /*0x76967f*/
  v6 = __2_YAPAXI_Z(0x168u); /*0x769687*/
  v7 = v6; /*0x76968c*/
  if ( v6 ) /*0x769693*/
    Array::ForEach((int)v6, 12, 30, (int (__thiscall *)(int))unknown_libname_37); /*0x76969e*/
  else
    v7 = 0; /*0x7696a5*/
  Block = v7; /*0x7696ab*/
  v61 = &v51; /*0x7696af*/
  BYTE1(v58) = 1; /*0x7696b7*/
  v62 = 0; /*0x7696bc*/
  v60 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x7696c0*/
  if ( (unsigned __int8)Map_WorldDominationTour_38::AddRef(&v60) ) /*0x7696c8*/
  {
    do /*0x769700*/
    {
      v8 = &v61[1][4 * v62]; /*0x7696e4*/
      *v8 = 0; /*0x7696e6*/
      v8[1] = 0; /*0x7696e8*/
      v8[2] = 0; /*0x7696eb*/
      v8[3] = 0; /*0x7696ee*/
      ((void (__thiscall *)(void ***))v60[2])(&v60); /*0x7696f5*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v60[1])(&v60) ); /*0x769700*/
  }
  v9 = 0; /*0x76970b*/
  v50 = 0; /*0x76970f*/
  if ( v63 > 0 ) /*0x769713*/
  {
    while ( 1 ) /*0x76971d*/
    {
      v49 = 0; /*0x76971d*/
      if ( v65 > 0 ) /*0x769723*/
        break; /*0x769723*/
LABEL_67:
      v50 = ++v9; /*0x769a2a*/
      if ( v9 >= v63 ) /*0x769a2e*/
        goto LABEL_68; /*0x769a2e*/
    }
    while ( 1 ) /*0x769736*/
    {
      v10 = (*(int (__thiscall **)(_DWORD *, int *))(*v3 + 40))(v3, &v49); /*0x769736*/
      v64 = v10; /*0x76973b*/
      if ( v10 <= 0x1D ) /*0x76973f*/
      {
        v11 = v10 + 1; /*0x769755*/
        if ( v57 < v10 + 1 ) /*0x76975a*/
        {
          LOBYTE(v58) = 0; /*0x76976b*/
          v12 = (char *)__2_YAPAXI_Z(12 * v11); /*0x769773*/
          v13 = v12; /*0x769778*/
          if ( v12 ) /*0x76977f*/
            Array::ForEach((int)v12, 12, v10 + 1, (int (__thiscall *)(int))unknown_libname_37); /*0x76978a*/
          else
            v13 = 0; /*0x769791*/
          LOBYTE(v58) = 1; /*0x769795*/
          if ( v13 ) /*0x76979a*/
          {
            if ( Block ) /*0x7697a0*/
            {
              v14 = v57; /*0x7697a2*/
              if ( v11 < (int)v57 ) /*0x7697a8*/
                v14 = v10 + 1; /*0x7697aa*/
              if ( v14 > 0 ) /*0x7697ae*/
              {
                v15 = 0; /*0x7697b0*/
                do /*0x7697cf*/
                {
                  v16 = &v13[v15]; /*0x7697b6*/
                  v17 = (char *)Block + v15; /*0x7697b9*/
                  v15 += 12; /*0x7697bb*/
                  --v14; /*0x7697be*/
                  *(_DWORD *)v16 = *v17; /*0x7697c1*/
                  *((_DWORD *)v16 + 1) = v17[1]; /*0x7697c6*/
                  *((_DWORD *)v16 + 2) = v17[2]; /*0x7697cc*/
                }
                while ( v14 ); /*0x7697cf*/
                v10 = v64; /*0x7697d1*/
              }
              if ( BYTE1(v58) ) /*0x7697db*/
                __3_YAXPAX_Z(Block); /*0x7697e2*/
            }
            Block = v13; /*0x7697ea*/
            v57 = v11; /*0x7697ee*/
            BYTE1(v58) = 1; /*0x7697f2*/
          }
        }
        v18 = (char *)Block + 12 * v10; /*0x769810*/
        v19 = v18[1]; /*0x769815*/
        v20 = v18[2]; /*0x76981a*/
        *v18 += v49; /*0x76981d*/
        v18[1] = v50 + v19; /*0x769826*/
        v18[2] = v20 + 1; /*0x769829*/
        if ( v53 < (unsigned int)v11 ) /*0x769832*/
        {
          v69 = (void *)v53; /*0x76983a*/
          if ( v11 ) /*0x76983e*/
          {
            LOBYTE(v54) = 0; /*0x769846*/
            v21 = (char *)__2_YAPAXI_Z(16 * v11); /*0x76984e*/
            v22 = v21; /*0x769853*/
            if ( v21 ) /*0x76985a*/
              Array::ForEach((int)v21, 16, v11, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769865*/
            else
              v22 = 0; /*0x76986c*/
            LOBYTE(v54) = 1; /*0x769870*/
            if ( v22 ) /*0x769875*/
            {
              if ( v52 ) /*0x76987b*/
              {
                v23 = v53; /*0x76987d*/
                if ( v11 < v53 ) /*0x769883*/
                  v23 = v11; /*0x769885*/
                if ( v23 > 0 ) /*0x769889*/
                {
                  v24 = 0; /*0x76988b*/
                  do /*0x7698b0*/
                  {
                    v25 = &v22[v24]; /*0x769891*/
                    v26 = (char *)v52 + v24; /*0x769894*/
                    v24 += 16; /*0x769896*/
                    --v23; /*0x769899*/
                    *(_DWORD *)v25 = *v26; /*0x76989c*/
                    *((_DWORD *)v25 + 1) = v26[1]; /*0x7698a1*/
                    *((_DWORD *)v25 + 2) = v26[2]; /*0x7698a7*/
                    *((_DWORD *)v25 + 3) = v26[3]; /*0x7698ad*/
                  }
                  while ( v23 ); /*0x7698b0*/
                  v10 = v64; /*0x7698b2*/
                }
                if ( BYTE1(v54) ) /*0x7698bc*/
                  __3_YAXPAX_Z(v52); /*0x7698c3*/
              }
              v52 = v22; /*0x7698cb*/
              v53 = v11; /*0x7698cf*/
              BYTE1(v54) = 1; /*0x7698d3*/
            }
          }
          else
          {
            ((void (__thiscall *)(void ***))v51[3])(&v51); /*0x7698e2*/
          }
          v68 = v69; /*0x7698ed*/
          v67 = &v51; /*0x7698fa*/
          v66 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x7698fe*/
          if ( (unsigned __int8)Map_WorldDominationTour_38::AddRef(&v66) ) /*0x769902*/
          {
            do /*0x76993a*/
            {
              v27 = &v67[1][4 * (_DWORD)v68]; /*0x76991e*/
              *v27 = 0; /*0x769920*/
              v27[1] = 0; /*0x769922*/
              v27[2] = 0; /*0x769925*/
              v27[3] = 0; /*0x769928*/
              ((void (__thiscall *)(void ***))v66[2])(&v66); /*0x76992f*/
            }
            while ( ((unsigned __int8 (__thiscall *)(void ***))v66[1])(&v66) ); /*0x76993a*/
          }
          v66 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x769941*/
        }
        v28 = (int *)((char *)v52 + 16 * v10); /*0x76994e*/
        v29 = v28[2]; /*0x769950*/
        if ( !v29 ) /*0x769955*/
          v28[3] = 0; /*0x769957*/
        v30 = v49; /*0x76995c*/
        v9 = v50; /*0x769960*/
        if ( v49 >= *v28 && v49 < v29 + *v28 ) /*0x76996c*/
        {
          v31 = v28[1]; /*0x76996e*/
          if ( v50 >= v31 && v50 < v31 + v28[3] ) /*0x76997c*/
            goto LABEL_66; /*0x76997c*/
        }
        v32 = 1; /*0x769982*/
        v33 = 1; /*0x769989*/
        if ( v29 > 0 && v28[3] > 0 ) /*0x769990*/
        {
          v34 = *v28; /*0x769994*/
          v35 = *v28 <= v49; /*0x769997*/
          v36 = v28[1]; /*0x769999*/
          v37 = v28[2]; /*0x76999c*/
          v71 = v37; /*0x76999f*/
          v72 = v28[3]; /*0x7699a6*/
          if ( !v35 ) /*0x7699aa*/
          {
            v37 += v34 - v49; /*0x7699ae*/
            v34 = v49; /*0x7699b0*/
            v71 = v37; /*0x7699b2*/
          }
          if ( v36 > v50 ) /*0x7699b8*/
          {
            v38 = v36 - v50 + v72; /*0x7699c0*/
            v36 = v50; /*0x7699c2*/
            v72 = v38; /*0x7699c4*/
          }
          if ( v34 + v37 < v49 + 1 ) /*0x7699cf*/
            v71 = v49 - v34 + 2; /*0x7699d6*/
          v39 = v72; /*0x7699da*/
          if ( v72 + v36 < v50 + 1 ) /*0x7699e6*/
            v39 = v50 - v36 + 2; /*0x7699ed*/
          v9 = v36; /*0x7699ef*/
          v30 = v34; /*0x7699f1*/
          v32 = v71; /*0x7699f3*/
          v33 = v39; /*0x7699f7*/
        }
        *v28 = v30; /*0x7699fb*/
        v28[1] = v9; /*0x7699fd*/
        v28[2] = v32; /*0x769a00*/
        v28[3] = v33; /*0x769a03*/
      }
      v9 = v50; /*0x769a06*/
      v30 = v49; /*0x769a0a*/
LABEL_66:
      v3 = v59; /*0x769a0e*/
      v49 = v30 + 1; /*0x769a19*/
      if ( v30 + 1 >= v65 ) /*0x769a1d*/
        goto LABEL_67; /*0x769a1d*/
    }
  }
LABEL_68:
  v40 = Map_Load_769D70(&v66, &v51); /*0x769a34*/
  Map_Load_769C20(v40); /*0x769a46*/
  v41 = 0; /*0x769a4f*/
  if ( ((unsigned __int8 (__thiscall *)(void ***))v60[1])(&v60) ) /*0x769a55*/
  {
    v42 = 0; /*0x769a60*/
    do /*0x769b22*/
    {
      v43 = FormatStringInt((char **)&v69, v41, 2); /*0x769a6a*/
      ConcatStringAlloc((char **)&v59, v73, v43); /*0x769a78*/
      DeleteAndZero(&v69); /*0x769a81*/
      FromStringInt((char **)&v63, g_DDraw_Active); /*0x769a90*/
      v44 = (_DWORD *)Map_Load_7694C0(&v66); /*0x769aa0*/
      v45 = v44[1]; /*0x769aa9*/
      v70[0] = *v44; /*0x769aac*/
      v70[1] = v45; /*0x769ab0*/
      v46 = String::Assign((char **)&v64, stru_848BDC); /*0x769acc*/
      v47 = String::Concat((const char **)v46, (char **)&v65, (char **)&v63); /*0x769ad3*/
      INIClass::GetInt(&v59, v47, v70); /*0x769ae2*/
      DeleteAndZero((void **)&v65); /*0x769aeb*/
      DeleteAndZero((void **)&v64); /*0x769af4*/
      ((void (__thiscall *)(void ***))v60[2])(&v60); /*0x769b01*/
      ++v41; /*0x769b08*/
      v42 += 12; /*0x769b09*/
      DeleteAndZero((void **)&v63); /*0x769b0c*/
      DeleteAndZero((void **)&v59); /*0x769b15*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v60[1])(&v60) ); /*0x769b22*/
  }
  CCFileClass::Reopen(v77, DataGlobal_848BE4, 2); /*0x769b3b*/
  INIClass::SaveToPipe(v74, (int)v77); /*0x769b4c*/
  CCFileClass::Reopen(v77, aCodeWdtmapmdIn, 2); /*0x769b5f*/
  INIClass::SaveToPipe(v74, (int)v77); /*0x769b70*/
  v60 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int; /*0x769b79*/
  v55 = &vt_VectorClass_WorldDominationTour_Centroid; /*0x769b81*/
  Map_WorldDominationTour_43::ddtor(&v55); /*0x769b89*/
  v51 = &vt_VectorClass_TRect_int; /*0x769b92*/
  MSEngine::ddtor(&v51); /*0x769b9a*/
  BufferIOFileClass::Destruct(v78); /*0x769ba6*/
  HashTable::DestroyHashTableINIClass(v74); /*0x769baf*/
  return BufferIOFileClass::Destruct(v77); /*0x769bc0*/
}
}
} // namespace gamemd

// 0x76B7B0
namespace gamemd {
unsigned int * E4Recv_76B7B0::sub_76B7B0(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_76B7B0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v4; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edi

  v2 = a2; /*0x76b7b1*/
  if ( this == a2 ) /*0x76b7bc*/
    return this; /*0x76b7bc*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x76b7c4*/
  v4 = a2[2]; /*0x76b7c7*/
  *(this + 2) = v4; /*0x76b7cc*/
  if ( !v4 ) /*0x76b7cf*/
  {
    *(this + 1) = 0; /*0x76b855*/
    *((_BYTE *)this + 13) = 0; /*0x76b85c*/
    return this; /*0x76b860*/
  }
  v5 = __2_YAPAXI_Z(8 * v4 + 4); /*0x76b7dd*/
  if ( v5 ) /*0x76b7e7*/
  {
    *v5 = v4; /*0x76b7e9*/
    v6 = v5 + 1; /*0x76b7eb*/
    v7 = v5 + 1; /*0x76b7f1*/
    if ( v4 - 1 >= 0 ) /*0x76b7f5*/
    {
      do /*0x76b80b*/
      {
        ComPtr::Constructor(v7); /*0x76b7fc*/
        *v7 = &vt_rc_ptr_WDTTerritory; /*0x76b801*/
        v7 += 2; /*0x76b807*/
        --v4; /*0x76b80a*/
      }
      while ( v4 ); /*0x76b80b*/
    }
    v8 = v6; /*0x76b80d*/
    v2 = a2; /*0x76b80f*/
  }
  else
  {
    v8 = 0; /*0x76b815*/
  }
  *(this + 1) = v8; /*0x76b819*/
  if ( !v8 ) /*0x76b81c*/
    return this; /*0x76b81c*/
  v9 = *(this + 2); /*0x76b81e*/
  v10 = 0; /*0x76b821*/
  *((_BYTE *)this + 13) = 1; /*0x76b825*/
  if ( v9 <= 0 ) /*0x76b829*/
    return this; /*0x76b829*/
  do /*0x76b84a*/
  {
    ComPtr::Set((_DWORD *)(*(this + 1) + 8 * v10), *(_DWORD *)(v2[1] + 8 * v10 + 4)); /*0x76b83f*/
    ++v10; /*0x76b847*/
  }
  while ( v10 < *(this + 2) ); /*0x76b84a*/
  return this; /*0x76b84e*/
}
}
} // namespace gamemd

// 0x76F970
namespace gamemd {
char * WorldDominationTour__Territory::Constructor(int aP1, unsigned int * a2, ReferenceCounted * aP3, const char ** a4, ReferenceCounted * aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall WorldDominationTour::Territory::Constructor(
        char *this,
        int aP1,
        _DWORD *a2,
        ReferenceCounted *aP3,
        const char **a4,
        ReferenceCounted *aP5)
{
  MPCooperative *v6; // ebp
  CCINIClass *v8; // edi
  CCINIClass *v9; // ebx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char *v14; // eax
  wchar_t *StringCSF; // eax
  char **v16; // eax
  ObjectClass *v17; // ebp
  int *CoordPair; // eax
  int v19; // ecx
  SessionClass *v20; // eax
  char **v21; // eax
  int *v22; // eax
  int v23; // ecx
  SessionClass *v24; // eax
  int *v25; // eax
  int v26; // ecx
  SessionClass *v27; // eax
  int *v28; // eax
  int v29; // ecx
  SessionClass *v30; // eax
  int v32; // [esp+10h] [ebp-14h] BYREF
  int v33; // [esp+14h] [ebp-10h] BYREF
  int v34; // [esp+18h] [ebp-Ch] BYREF
  int v35[2]; // [esp+1Ch] [ebp-8h] BYREF

  v6 = (MPCooperative *)aP1; /*0x76f975*/
  *((_DWORD *)this + 1) = 0; /*0x76f982*/
  *(_DWORD *)this = &vt_ReferenceCounted; /*0x76f985*/
  *((_DWORD *)this + 2) = v6; /*0x76f98b*/
  unknown_libname_74((_DWORD *)this + 3); /*0x76f98e*/
  v8 = (CCINIClass *)(this + 16); /*0x76f993*/
  *((_DWORD *)this + 4) = 0; /*0x76f999*/
  *((_DWORD *)this + 5) = 0; /*0x76f99b*/
  v9 = (CCINIClass *)(this + 24); /*0x76f99e*/
  *((_DWORD *)this + 6) = 0; /*0x76f9a1*/
  *((_DWORD *)this + 7) = 0; /*0x76f9a7*/
  unknown_libname_73((_DWORD *)this + 8); /*0x76f9ae*/
  *((_DWORD *)this + 9) = 0; /*0x76f9ba*/
  *((_DWORD *)this + 10) = 0; /*0x76f9bd*/
  *((_DWORD *)this + 11) = 0; /*0x76f9c0*/
  *(_DWORD *)this = &vt_WorldDominationTour_Territory; /*0x76f9d0*/
  v10 = FormatStringInt((INIClass *)v35, v6, (ObjectClass *)2); /*0x76f9d6*/
  v11 = ConcatStringAlloc((ObjectClass *)&v34, a4, v10); /*0x76f9e4*/
  v12 = String::Concat2((const char **)v11, (char **)&v33, &stru_849174[36]); /*0x76f9eb*/
  String::Reassign((char **)this + 8, (AbstractClass *)v12); /*0x76f9f4*/
  DeleteAndZero((int)&v33); /*0x76f9fd*/
  DeleteAndZero((int)&v34); /*0x76fa06*/
  DeleteAndZero((int)v35); /*0x76fa0f*/
  v13 = FormatStringInt((INIClass *)&a4, v6, (ObjectClass *)2); /*0x76fa1c*/
  ConcatStringAlloc((ObjectClass *)&v32, (const char **)aP5, v13); /*0x76fa2a*/
  DeleteAndZero((int)&a4); /*0x76fa33*/
  v14 = String::GetOrEmpty((char **)&v32); /*0x76fa43*/
  StringCSF = GetStringCSF((wchar_t *)v14, 0, (CampaignScore *)&stru_849174.headNode[1], 39); /*0x76fa4c*/
  WideString::Assign_Alt((void **)this + 3, StringCSF); /*0x76fa55*/
  FromStringInt((IUnknown *)&aP1, *(int *)&stru_89E138[8044]); /*0x76fa64*/
  v16 = ProcessStringAndCopy((AbstractClass *)&a4, &stru_848BDC, (char **)&aP1); /*0x76fa78*/
  v17 = (ObjectClass *)aP3; /*0x76fa7d*/
  CoordPair = INIClass::GetCoordPair(a2, (CCINIClass *)v35, (ObjectClass *)aP3, v16, (CCINIClass *)(this + 16)); /*0x76fa8c*/
  v19 = *CoordPair; /*0x76fa91*/
  v20 = (SessionClass *)CoordPair[1]; /*0x76fa93*/
  *((_DWORD *)this + 4) = v19; /*0x76fa96*/
  *((_DWORD *)this + 5) = v20; /*0x76fa9c*/
  DeleteAndZero((int)&a4); /*0x76fa9f*/
  v21 = ProcessStringAndCopy((AbstractClass *)&a4, &stru_849174, (char **)&aP1); /*0x76fab3*/
  v22 = INIClass::GetCoordPair(a2, (CCINIClass *)v35, v17, v21, (CCINIClass *)(this + 24)); /*0x76fac3*/
  v23 = *v22; /*0x76fac8*/
  v24 = (SessionClass *)v22[1]; /*0x76faca*/
  *((_DWORD *)this + 6) = v23; /*0x76facd*/
  *((_DWORD *)this + 7) = v24; /*0x76fad3*/
  DeleteAndZero((int)&a4); /*0x76fad6*/
  if ( *(int *)&stru_89E138[8044] > 800 ) /*0x76fae5*/
  {
    if ( !*(_DWORD *)v8->__pad_0 && !*((_DWORD *)this + 5) ) /*0x76faf0*/
    {
      String::Assign((char **)&a4, aTarget800); /*0x76fb00*/
      v25 = INIClass::GetCoordPair(a2, (CCINIClass *)v35, v17, (char **)&a4, (CCINIClass *)(this + 16)); /*0x76fb15*/
      v26 = *v25; /*0x76fb1a*/
      v27 = (SessionClass *)v25[1]; /*0x76fb1c*/
      *(_DWORD *)v8->__pad_0 = v26; /*0x76fb1f*/
      *((_DWORD *)this + 5) = v27; /*0x76fb25*/
      DeleteAndZero((int)&a4); /*0x76fb28*/
    }
    if ( !*(_DWORD *)v9->__pad_0 && !*((_DWORD *)this + 7) ) /*0x76fb32*/
    {
      String::Assign((char **)&a4, aOrigin800); /*0x76fb42*/
      v28 = INIClass::GetCoordPair(a2, (CCINIClass *)v35, v17, (char **)&a4, (CCINIClass *)(this + 24)); /*0x76fb57*/
      v29 = *v28; /*0x76fb5c*/
      v30 = (SessionClass *)v28[1]; /*0x76fb5e*/
      *(_DWORD *)v9->__pad_0 = v29; /*0x76fb61*/
      *((_DWORD *)this + 7) = v30; /*0x76fb67*/
      DeleteAndZero((int)&a4); /*0x76fb6a*/
    }
  }
  DeleteAndZero((int)&aP1); /*0x76fb73*/
  DeleteAndZero((int)&v32); /*0x76fb7c*/
  return this; /*0x76fb83*/
}
}
} // namespace gamemd

// 0x762060
namespace gamemd {
void nullsub_46()
{
  ;
}
} // namespace gamemd

// 0x762AE0
namespace gamemd {
void nullsub_47()
{
  ;
}
} // namespace gamemd

// 0x763380
namespace gamemd {
void sub_763380()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B725F0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7633B0
namespace gamemd {
void sub_7633B0()
{
{
    DataGlobal_B72660 = DataGlobal_B725F0 / 60.0;
}
}
} // namespace gamemd

// 0x7633D0
namespace gamemd {
void sub_7633D0()
{
{
    DataGlobal_B72640 = 1.0 / DataGlobal_B72660;
}
}
} // namespace gamemd

// 0x7633F0
namespace gamemd {
void sub_7633F0()
{
{
    DataGlobal_B72638 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x763410
namespace gamemd {
void sub_763410()
{
{
    DataGlobal_B725F8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x763430
namespace gamemd {
void sub_763430()
{
{
    DataGlobal_B725D0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x763450
namespace gamemd {
long long sub_763450()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B725D0 - DataGlobal_B725F8);
    result = Math::RoundToInt(v0 * DataGlobal_B725F0 * 0.5);
    DataGlobal_B72668 = result;
    return result;
}
}
} // namespace gamemd

// 0x763490
namespace gamemd {
void sub_763490()
{
{
    DataGlobal_B72600 = Math::ArcTan((double)DataGlobal_B72668 * 0.00390625);
}
}
} // namespace gamemd

// 0x7634C0
namespace gamemd {
void sub_7634C0()
{
{
    DataGlobal_B72630 = Math::ArcTan((double)(2 * DataGlobal_B72668) / DataGlobal_B725F0);
}
}
} // namespace gamemd

// 0x7634F0
namespace gamemd {
long long sub_7634F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72668) + 0.5);
    DataGlobal_B72658 = result;
    return result;
}
}
} // namespace gamemd

// 0x763520
namespace gamemd {
int sub_763520()
{
{
    DataGlobal_B725E8 = 0;
    DataGlobal_B725EA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x763530
namespace gamemd {
int sub_763530()
{
{
    DataGlobal_B72620 = 0;
    DataGlobal_B72624 = 0;
    DataGlobal_B72628 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x763550
namespace gamemd {
int sub_763550()
{
{
    DataGlobal_B72650 = 0;
    DataGlobal_B72648 = 128;
    DataGlobal_B7264C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x763570
namespace gamemd {
int sub_763570()
{
{
    DataGlobal_B725D8 = 0;
    DataGlobal_B725DC = 0;
    DataGlobal_B725E0 = 0;
    DataGlobal_B725E4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x763590
namespace gamemd {
int sub_763590()
{
{
    DataGlobal_B7260C = 0;
    DataGlobal_B72610 = 0;
    DataGlobal_B72614 = 1;
    DataGlobal_B72615 = 0;
    DataGlobal_B72608 = (int)&vt_DynamicVectorClass_WaypointPathClass;
    DataGlobal_B7261C = 10;
    DataGlobal_B72618 = 0;
    return atexit(sub_7635D0);
}
}
} // namespace gamemd

// 0x7635D0
namespace gamemd {
void sub_7635D0()
{
{
    DataGlobal_B72608 = (int)&vt_VectorClass_WaypointPathClass;
    if ( DataGlobal_B7260C && DataGlobal_B72615 )
  {
    __3_YAXPAX_Z(DataGlobal_B7260C);
    DataGlobal_B7260C = 0;
  }
    DataGlobal_B72615 = 0;
    DataGlobal_B72610 = 0;
}
}
} // namespace gamemd

// 0x763700
namespace gamemd {
unsigned int * E4Recv_763700::sub_763700(unsigned int * a2)
{
{
    *(void**)this = *a2;
    this->M4 = *((int*)(a2) + 1);
    this->M8 = *((int*)(a2) + 2);
    return this;
}
}
} // namespace gamemd

// 0x763720
namespace gamemd {
void nullsub_84()
{
  ;
}
} // namespace gamemd

// 0x764810
namespace gamemd {
int sub_764810()
{
{
    DataGlobal_B72678 = 0;
    DataGlobal_B7267C = 0;
    DataGlobal_B72680 = 0;
    DataGlobal_B72684 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x764830
namespace gamemd {
void sub_764830()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72690 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x764860
namespace gamemd {
void sub_764860()
{
{
    DataGlobal_B726E0 = DataGlobal_B72690 / 60.0;
}
}
} // namespace gamemd

// 0x764880
namespace gamemd {
void sub_764880()
{
{
    DataGlobal_B726C8 = 1.0 / DataGlobal_B726E0;
}
}
} // namespace gamemd

// 0x7648A0
namespace gamemd {
void sub_7648A0()
{
{
    DataGlobal_B726C0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7648C0
namespace gamemd {
void sub_7648C0()
{
{
    DataGlobal_B72698 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7648E0
namespace gamemd {
void sub_7648E0()
{
{
    DataGlobal_B72670 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x764900
namespace gamemd {
long long sub_764900()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72670 - DataGlobal_B72698);
    result = Math::RoundToInt(v0 * DataGlobal_B72690 * 0.5);
    DataGlobal_B726E8 = result;
    return result;
}
}
} // namespace gamemd

// 0x764940
namespace gamemd {
void sub_764940()
{
{
    DataGlobal_B726A0 = Math::ArcTan((double)DataGlobal_B726E8 * 0.00390625);
}
}
} // namespace gamemd

// 0x764970
namespace gamemd {
void sub_764970()
{
{
    DataGlobal_B726B8 = Math::ArcTan((double)(2 * DataGlobal_B726E8) / DataGlobal_B72690);
}
}
} // namespace gamemd

// 0x7649A0
namespace gamemd {
long long sub_7649A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B726E8) + 0.5);
    DataGlobal_B726DC = result;
    return result;
}
}
} // namespace gamemd

// 0x7649D0
namespace gamemd {
int sub_7649D0()
{
{
    DataGlobal_B72688 = 0;
    DataGlobal_B7268A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7649E0
namespace gamemd {
int sub_7649E0()
{
{
    DataGlobal_B726A8 = 0;
    DataGlobal_B726AC = 0;
    DataGlobal_B726B0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x764A00
namespace gamemd {
int sub_764A00()
{
{
    DataGlobal_B726D8 = 0;
    DataGlobal_B726D0 = 128;
    DataGlobal_B726D4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x764A20
namespace ra2 {
namespace game {
GenericNode * ObjectClass::sub_764A20()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
GenericNode *__thiscall sub_764A20(ObjectClass *this)
{
  GenericNode *Int; // esi
  ReferenceCounted aP2; // [esp+8h] [ebp-9Ch] BYREF
  void *v5[4]; // [esp+Ch] [ebp-98h] BYREF
  _DWORD v6[3]; // [esp+1Ch] [ebp-88h] BYREF
  _DWORD v7[6]; // [esp+28h] [ebp-7Ch] BYREF
  char v8; // [esp+40h] [ebp-64h]
  int v9; // [esp+44h] [ebp-60h]
  int v10; // [esp+48h] [ebp-5Ch]
  _DWORD v11[22]; // [esp+4Ch] [ebp-58h] BYREF

  BufferIOFile::Constructor(v11, aWdthistIni_0); /*0x764a33*/
  if ( File::IsReady(v11, 0) ) /*0x764a3f*/
  {
    v5[1] = 0; /*0x764a50*/
    v5[2] = 0; /*0x764a54*/
    GenericNode::Constructor(v6); /*0x764a58*/
    GenericNode::Constructor(v7); /*0x764a61*/
    LinkedList::Prepend(v6, (int)v7); /*0x764a77*/
    v5[3] = &vt_List_INIClass_INISection; /*0x764a80*/
    memset(&v7[3], 0, 12); /*0x764a8e*/
    v8 = 0; /*0x764a9a*/
    v9 = 0; /*0x764a9e*/
    v10 = 0; /*0x764aa2*/
    v5[0] = &vt_INIClass; /*0x764aa6*/
    FileStraw::Open(v5, (int)v11, 0); /*0x764aae*/
    CCFileClass::Close(v11); /*0x764ab7*/
    String::Assign((char **)&aP2, g_INI_Key_CampaignID); /*0x764ac5*/
    Int = (GenericNode *)INIClass::ReadInt(v5, this, &aP2, (INIClass *)0xFFFFFFFF); /*0x764adf*/
    DeleteAndZero((int)&aP2); /*0x764ae1*/
    HashTable::DestroyHashTableINIClass(v5); /*0x764aea*/
    v11[0] = &off_7E1668; /*0x764af3*/
    BufferIOFileClass::Dtor(v11); /*0x764afb*/
    return Int; /*0x764b00*/
  }
  else
  {
    v11[0] = &off_7E1668; /*0x764b0f*/
    BufferIOFileClass::Dtor(v11); /*0x764b17*/
    return (GenericNode *)-1; /*0x764b1c*/
  }
}
}
} // namespace game
} // namespace ra2

// 0x764FF0
namespace gamemd {
int E4Recv_764FF0::sub_764FF0(ScoreScreen * aP1)
{
{
    return *(this + (int)aP1 + 13);
}
}
} // namespace gamemd

// 0x765580
namespace gamemd {
int sub_765580(unsigned int * a1)
{
{
    int v2[22];
    BufferIOFile::Init(v2);
    CCFileClass::Reopen(v2, g_Str_File_WDTHist_ini, 1);
    if ( !File::IsReady(v2, 0) )
  {
    FileClass::Close(v2);
    CCFileClass::Close(v2);
    CCFileClass::Reopen(v2, g_Str_File_WDTHist_ini, 1);
  }
    FileStraw::Open(a1, (int)v2, 0);
    CCFileClass::Close(v2);
    v2[0] = &DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v2);
}
}
} // namespace gamemd

// 0x765D50
namespace gamemd {
int sub_765D50()
{
{
    DataGlobal_B726F8 = 0;
    DataGlobal_B726FC = 0;
    DataGlobal_B72700 = 0;
    DataGlobal_B72704 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x765D70
namespace gamemd {
void sub_765D70()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72710 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x765DA0
namespace gamemd {
void sub_765DA0()
{
{
    DataGlobal_B72780 = DataGlobal_B72710 / 60.0;
}
}
} // namespace gamemd

// 0x765DC0
namespace gamemd {
void sub_765DC0()
{
{
    DataGlobal_B72748 = 1.0 / DataGlobal_B72780;
}
}
} // namespace gamemd

// 0x765DE0
namespace gamemd {
void sub_765DE0()
{
{
    DataGlobal_B72740 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x765E00
namespace gamemd {
void sub_765E00()
{
{
    DataGlobal_B72718 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x765E20
namespace gamemd {
void sub_765E20()
{
{
    DataGlobal_B726F0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x765E40
namespace gamemd {
long long sub_765E40()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B726F0 - DataGlobal_B72718);
    result = Math::RoundToInt(v0 * DataGlobal_B72710 * 0.5);
    DataGlobal_B72788 = result;
    return result;
}
}
} // namespace gamemd

// 0x765E80
namespace gamemd {
void sub_765E80()
{
{
    DataGlobal_B72720 = Math::ArcTan((double)DataGlobal_B72788 * 0.00390625);
}
}
} // namespace gamemd

// 0x765EB0
namespace gamemd {
void sub_765EB0()
{
{
    DataGlobal_B72738 = Math::ArcTan((double)(2 * DataGlobal_B72788) / DataGlobal_B72710);
}
}
} // namespace gamemd

// 0x765EE0
namespace gamemd {
long long sub_765EE0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72788) + 0.5);
    DataGlobal_B72778 = result;
    return result;
}
}
} // namespace gamemd

// 0x765F10
namespace gamemd {
int sub_765F10()
{
{
    DataGlobal_B72708 = 0;
    DataGlobal_B7270A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x765F20
namespace gamemd {
int sub_765F20()
{
{
    DataGlobal_B72728 = 0;
    DataGlobal_B7272C = 0;
    DataGlobal_B72730 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x765F40
namespace gamemd {
int sub_765F40()
{
{
    DataGlobal_B72758 = 0;
    DataGlobal_B72750 = 128;
    DataGlobal_B72754 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x766070
namespace gamemd {
int sub_766070()
{
{
    DataGlobal_B72764 = 0;
    DataGlobal_B72768 = 0;
    DataGlobal_B7276C = 1;
    DataGlobal_B7276D = 0;
    DataGlobal_B72760 = (int)&vt_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption;
    DataGlobal_B72774 = 10;
    DataGlobal_B72770 = 0;
    return atexit(sub_7660B0);
}
}
} // namespace gamemd

// 0x7660B0
namespace gamemd {
void sub_7660B0()
{
{
    DataGlobal_B72760 = (int)&vt_VectorClass_rc_ptr_WorldDominationTour_GameOption;
    if ( DataGlobal_B72764 && DataGlobal_B7276D )
  {
    if ( DataGlobal_B72764 )
    (**(void (__thiscall ***)(int, int))DataGlobal_B72764)(DataGlobal_B72764, 3);
    DataGlobal_B72764 = 0;
  }
    DataGlobal_B7276D = 0;
    DataGlobal_B72768 = 0;
}
}
} // namespace gamemd

// 0x7670F0
namespace gamemd {
int sub_7670F0()
{
{
    DataGlobal_B72798 = 0;
    DataGlobal_B7279C = 0;
    DataGlobal_B727A0 = 0;
    DataGlobal_B727A4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x767110
namespace gamemd {
void sub_767110()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B727B0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x767140
namespace gamemd {
void sub_767140()
{
{
    DataGlobal_B72800 = DataGlobal_B727B0 / 60.0;
}
}
} // namespace gamemd

// 0x767160
namespace gamemd {
void sub_767160()
{
{
    DataGlobal_B727E8 = 1.0 / DataGlobal_B72800;
}
}
} // namespace gamemd

// 0x767180
namespace gamemd {
void sub_767180()
{
{
    DataGlobal_B727E0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7671A0
namespace gamemd {
void sub_7671A0()
{
{
    DataGlobal_B727B8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7671C0
namespace gamemd {
void sub_7671C0()
{
{
    DataGlobal_B72790 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7671E0
namespace gamemd {
long long sub_7671E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72790 - DataGlobal_B727B8);
    result = Math::RoundToInt(v0 * DataGlobal_B727B0 * 0.5);
    DataGlobal_B72808 = result;
    return result;
}
}
} // namespace gamemd

// 0x767220
namespace gamemd {
void sub_767220()
{
{
    DataGlobal_B727C0 = Math::ArcTan((double)DataGlobal_B72808 * 0.00390625);
}
}
} // namespace gamemd

// 0x767250
namespace gamemd {
void sub_767250()
{
{
    DataGlobal_B727D8 = Math::ArcTan((double)(2 * DataGlobal_B72808) / DataGlobal_B727B0);
}
}
} // namespace gamemd

// 0x767280
namespace gamemd {
long long sub_767280()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72808) + 0.5);
    DataGlobal_B727FC = result;
    return result;
}
}
} // namespace gamemd

// 0x7672B0
namespace gamemd {
int sub_7672B0()
{
{
    DataGlobal_B727A8 = 0;
    DataGlobal_B727AA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7672C0
namespace gamemd {
int sub_7672C0()
{
{
    DataGlobal_B727C8 = 0;
    DataGlobal_B727CC = 0;
    DataGlobal_B727D0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7672E0
namespace gamemd {
int sub_7672E0()
{
{
    DataGlobal_B727F8 = 0;
    DataGlobal_B727F0 = 128;
    DataGlobal_B727F4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x767320
namespace gamemd {
wchar_t ** E4Recv_767320::sub_767320(wchar_t ** a2, int a3, const wchar_t ** a4)
{
{
    int v5;
    char **v6;
    const wchar_t **v7;
    char *v8;
    wchar_t **v9;
    char *v11;
    wchar_t *v12;
    wchar_t *StringCSF;
    void *v14;
    v5 = this->Vf20(a3);
    v6 = FromStringInt((char **)&v14, v5);
    ConcatStringAlloc((char **)&a3, this + 4, v6);
    DeleteAndZero(&v14);
    v7 = a4;
    if ( WideString::Length(a4) )
  {
    WideString::Assign((wchar_t **)&a4, (wchar_t *)Control);
    v8 = String::GetOrEmpty((char **)&a3);
    StringCSF = GetStringCSF((wchar_t *)v8, 0, g_Str_File_WDTGameOptions_cpp, 22);
    v9 = ConcatWString((wchar_t **)&v14, v7, (const wchar_t **)&a4);
    WideString::AssignConcat((const wchar_t **)v9, a2, StringCSF);
    DeleteAndZero::Alt(&v14);
    DeleteAndZero::Alt((void **)&a4);
  }
    else
  {
    v11 = String::GetOrEmpty((char **)&a3);
    v12 = GetStringCSF((wchar_t *)v11, 0, g_Str_File_WDTGameOptions_cpp, 25);
    WideString::Assign(a2, v12);
  }
    DeleteAndZero((void **)&a3);
    return a2;
}
}
} // namespace gamemd

// 0x767460
namespace gamemd {
rc_ptr * ConstructorWDTFlagOption(rc_ptr_base * a1, int a2, void * a3, int a4, void * a5, ObjectClass * aP5)
{
{
    char *v8;
    GameOption_WorldDominationTour *v9;
    char *v10;
    void *v11;
    char *v13;
    int v14;
    char *v15;
    ObjectClass *v16;
    v9 = (GameOption_WorldDominationTour *)__2_YAPAXI_Z(0x1Cu);
    if ( v9 )
  {
    v16 = aP5;
    v15 = v8;
    String::AssignFromPtr(&v15, (const char **)&a5);
    v14 = a4;
    v13 = v10;
    String::AssignFromPtr(&v13, (const char **)&a3);
    v11 = ConstructorWDTFlagOption_Create(v9, a2, v13, v14, v15, v16);
  }
    else
  {
    v11 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_FlagGameOption;
    ComPtr::Set(a1, (int)v11);
    DeleteAndZero(&a3);
    DeleteAndZero(&a5);
    return (rc_ptr *)a1;
}
}
} // namespace gamemd

// 0x767600
namespace gamemd {
int sub_767600(int a1)
{
return 0;
}
} // namespace gamemd

// 0x7678F0
namespace gamemd {
int sub_7678F0()
{
{
    DataGlobal_B72818 = 0;
    DataGlobal_B7281C = 0;
    DataGlobal_B72820 = 0;
    DataGlobal_B72824 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x767910
namespace gamemd {
void sub_767910()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72830 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x767940
namespace gamemd {
void sub_767940()
{
{
    DataGlobal_B72880 = DataGlobal_B72830 / 60.0;
}
}
} // namespace gamemd

// 0x767960
namespace gamemd {
void sub_767960()
{
{
    DataGlobal_B72868 = 1.0 / DataGlobal_B72880;
}
}
} // namespace gamemd

// 0x767980
namespace gamemd {
void sub_767980()
{
{
    DataGlobal_B72860 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7679A0
namespace gamemd {
void sub_7679A0()
{
{
    DataGlobal_B72838 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7679C0
namespace gamemd {
void sub_7679C0()
{
{
    DataGlobal_B72810 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7679E0
namespace gamemd {
long long sub_7679E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72810 - DataGlobal_B72838);
    result = Math::RoundToInt(v0 * DataGlobal_B72830 * 0.5);
    DataGlobal_B72888 = result;
    return result;
}
}
} // namespace gamemd

// 0x767A20
namespace gamemd {
void sub_767A20()
{
{
    DataGlobal_B72840 = Math::ArcTan((double)DataGlobal_B72888 * 0.00390625);
}
}
} // namespace gamemd

// 0x767A50
namespace gamemd {
void sub_767A50()
{
{
    DataGlobal_B72858 = Math::ArcTan((double)(2 * DataGlobal_B72888) / DataGlobal_B72830);
}
}
} // namespace gamemd

// 0x767A80
namespace gamemd {
long long sub_767A80()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72888) + 0.5);
    DataGlobal_B7287C = result;
    return result;
}
}
} // namespace gamemd

// 0x767AB0
namespace gamemd {
int sub_767AB0()
{
{
    DataGlobal_B72828 = 0;
    DataGlobal_B7282A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x767AC0
namespace gamemd {
int sub_767AC0()
{
{
    DataGlobal_B72848 = 0;
    DataGlobal_B7284C = 0;
    DataGlobal_B72850 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x767AE0
namespace gamemd {
int sub_767AE0()
{
{
    DataGlobal_B72878 = 0;
    DataGlobal_B72870 = 128;
    DataGlobal_B72874 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x767BB0
namespace gamemd {
int WDT_ActivateScreen(int a1, int a2)
{
{
    ActivateScreenWDT_Create(a2);
    return a1;
}
}
} // namespace gamemd

// 0x767C80
namespace gamemd {
int sub_767C80()
{
{
    DataGlobal_B72898 = 0;
    DataGlobal_B7289C = 0;
    DataGlobal_B728A0 = 0;
    DataGlobal_B728A4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x767CA0
namespace gamemd {
void sub_767CA0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B728B0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x767CD0
namespace gamemd {
void sub_767CD0()
{
{
    DataGlobal_B72900 = DataGlobal_B728B0 / 60.0;
}
}
} // namespace gamemd

// 0x767CF0
namespace gamemd {
void sub_767CF0()
{
{
    DataGlobal_B728E8 = 1.0 / DataGlobal_B72900;
}
}
} // namespace gamemd

// 0x767D10
namespace gamemd {
void sub_767D10()
{
{
    DataGlobal_B728E0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x767D30
namespace gamemd {
void sub_767D30()
{
{
    DataGlobal_B728B8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x767D50
namespace gamemd {
void sub_767D50()
{
{
    DataGlobal_B72890 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x767D70
namespace gamemd {
long long sub_767D70()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72890 - DataGlobal_B728B8);
    result = Math::RoundToInt(v0 * DataGlobal_B728B0 * 0.5);
    DataGlobal_B72908 = result;
    return result;
}
}
} // namespace gamemd

// 0x767DB0
namespace gamemd {
void sub_767DB0()
{
{
    DataGlobal_B728C0 = Math::ArcTan((double)DataGlobal_B72908 * 0.00390625);
}
}
} // namespace gamemd

// 0x767DE0
namespace gamemd {
void sub_767DE0()
{
{
    DataGlobal_B728D8 = Math::ArcTan((double)(2 * DataGlobal_B72908) / DataGlobal_B728B0);
}
}
} // namespace gamemd

// 0x767E10
namespace gamemd {
long long sub_767E10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72908) + 0.5);
    DataGlobal_B728FC = result;
    return result;
}
}
} // namespace gamemd

// 0x767E40
namespace gamemd {
int sub_767E40()
{
{
    DataGlobal_B728A8 = 0;
    DataGlobal_B728AA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x767E50
namespace gamemd {
int sub_767E50()
{
{
    DataGlobal_B728C8 = 0;
    DataGlobal_B728CC = 0;
    DataGlobal_B728D0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x767E70
namespace gamemd {
int sub_767E70()
{
{
    DataGlobal_B728F8 = 0;
    DataGlobal_B728F0 = 128;
    DataGlobal_B728F4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x767E90
namespace gamemd {
unsigned int * E4Recv_767E90::sub_767E90()
{
{
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = Timer::GetTicks();
    this->M24 = 0;
    *(void**)this = &vt_MSFrameAnim;
    return this;
}
}
} // namespace gamemd

// 0x769490
namespace gamemd {
unsigned int * E4Recv_769490::sub_769490(unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    result = this;
    v3 = this->M4;
    *(void**)(this) += *a2;
    v4 = this->M8 + 1;
    result[1] = *((int*)(a2) + 1) + v3;
    result[2] = v4;
    return result;
}
}
} // namespace gamemd

// 0x769C40
namespace gamemd {
Iostream_init * E4Recv_769C40::__0Iostream_init_QAE_XZ_9()
{
{
    return this;
}
}
} // namespace gamemd

// 0x76A8A0
namespace gamemd {
void sub_76A8A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72930 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x76A8D0
namespace gamemd {
void sub_76A8D0()
{
{
    DataGlobal_B72980 = DataGlobal_B72930 / 60.0;
}
}
} // namespace gamemd

// 0x76A8F0
namespace gamemd {
void sub_76A8F0()
{
{
    DataGlobal_B72968 = 1.0 / DataGlobal_B72980;
}
}
} // namespace gamemd

// 0x76A910
namespace gamemd {
void sub_76A910()
{
{
    DataGlobal_B72960 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x76A930
namespace gamemd {
void sub_76A930()
{
{
    DataGlobal_B72938 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x76A950
namespace gamemd {
void sub_76A950()
{
{
    DataGlobal_B72910 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x76A970
namespace gamemd {
long long sub_76A970()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72910 - DataGlobal_B72938);
    result = Math::RoundToInt(v0 * DataGlobal_B72930 * 0.5);
    DataGlobal_B72988 = result;
    return result;
}
}
} // namespace gamemd

// 0x76A9B0
namespace gamemd {
void sub_76A9B0()
{
{
    DataGlobal_B72940 = Math::ArcTan((double)DataGlobal_B72988 * 0.00390625);
}
}
} // namespace gamemd

// 0x76A9E0
namespace gamemd {
void sub_76A9E0()
{
{
    DataGlobal_B72958 = Math::ArcTan((double)(2 * DataGlobal_B72988) / DataGlobal_B72930);
}
}
} // namespace gamemd

// 0x76AA10
namespace gamemd {
long long sub_76AA10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72988) + 0.5);
    DataGlobal_B7297C = result;
    return result;
}
}
} // namespace gamemd

// 0x76AA40
namespace gamemd {
int sub_76AA40()
{
{
    DataGlobal_B72928 = 0;
    DataGlobal_B7292A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76AA50
namespace gamemd {
int sub_76AA50()
{
{
    DataGlobal_B72948 = 0;
    DataGlobal_B7294C = 0;
    DataGlobal_B72950 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76AA70
namespace gamemd {
int sub_76AA70()
{
{
    DataGlobal_B72978 = 0;
    DataGlobal_B72970 = 128;
    DataGlobal_B72974 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x76AA90
namespace gamemd {
int sub_76AA90()
{
{
    DataGlobal_B72918 = 0;
    DataGlobal_B7291C = 0;
    DataGlobal_B72920 = 0;
    DataGlobal_B72924 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76AB90
namespace gamemd {
void E4Recv_76AB90::sub_76AB90()
{
{
    this->vfptr = &vt_WDTTerritory;
    ReferenceCounted::Constructor(this);
}
}
} // namespace gamemd

// 0x76ABE0
namespace gamemd {
unsigned int * E4Recv_76ABE0::sub_76ABE0()
{
{
    char *v2;
    int v3;
    void (__thiscall ***v4)(int, int);
    bool v5;
    void **v7;
    void (__thiscall ***v8)(int, int);
    int v9;
    char v10;
    char v11;
    int v12;
    int v13;
    v2 = (char *)(this + 11);
    this->M4 = 0;
    v13 = 10;
    this->M64 = 10;
    this->M56 = 1;
    v10 = 1;
    this->M48 = 0;
    this->M52 = 0;
    this->M57 = 0;
    this->M44 = &vt_DynamicVectorClass_rc_ptr_WDTTerritory;
    this->M60 = 0;
    *(void**)this = &vt_WDTState;
    this->M20 = 0;
    this->M24 = 0;
    this->M32 = 0;
    this->M36 = 0;
    this->M40 = 1000000;
    v8 = 0;
    v9 = 0;
    v11 = 0;
    v7 = &vt_DynamicVectorClass_rc_ptr_WDTTerritory;
    v12 = 0;
    sub_76B7B0(this + 11, &v7);
    v3 = v13;
    *((int *)(v2) + 4) = v12;
    v4 = v8;
    v5 = v8 == 0;
    *((int *)(v2) + 5) = v3;
    v7 = &vt_VectorClass_rc_ptr_WDTTerritory;
    if ( !v5 && v11 )
    (**v4)(v4, 3);
    this->M68 = 0;
    return this;
}
}
} // namespace gamemd

// 0x76BC80
namespace gamemd {
int sub_76BC80()
{
{
    DataGlobal_B72998 = 0;
    DataGlobal_B7299C = 0;
    DataGlobal_B729A0 = 0;
    DataGlobal_B729A4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76BCA0
namespace gamemd {
void sub_76BCA0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B729B0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x76BCD0
namespace gamemd {
void sub_76BCD0()
{
{
    DataGlobal_B72A00 = DataGlobal_B729B0 / 60.0;
}
}
} // namespace gamemd

// 0x76BCF0
namespace gamemd {
void sub_76BCF0()
{
{
    DataGlobal_B729E8 = 1.0 / DataGlobal_B72A00;
}
}
} // namespace gamemd

// 0x76BD10
namespace gamemd {
void sub_76BD10()
{
{
    DataGlobal_B729E0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x76BD30
namespace gamemd {
void sub_76BD30()
{
{
    DataGlobal_B729B8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x76BD50
namespace gamemd {
void sub_76BD50()
{
{
    DataGlobal_B72990 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x76BD70
namespace gamemd {
long long sub_76BD70()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72990 - DataGlobal_B729B8);
    result = Math::RoundToInt(v0 * DataGlobal_B729B0 * 0.5);
    DataGlobal_B72A08 = result;
    return result;
}
}
} // namespace gamemd

// 0x76BDB0
namespace gamemd {
void sub_76BDB0()
{
{
    DataGlobal_B729C0 = Math::ArcTan((double)DataGlobal_B72A08 * 0.00390625);
}
}
} // namespace gamemd

// 0x76BDE0
namespace gamemd {
void sub_76BDE0()
{
{
    DataGlobal_B729D8 = Math::ArcTan((double)(2 * DataGlobal_B72A08) / DataGlobal_B729B0);
}
}
} // namespace gamemd

// 0x76BE10
namespace gamemd {
long long sub_76BE10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72A08) + 0.5);
    DataGlobal_B729FC = result;
    return result;
}
}
} // namespace gamemd

// 0x76BE40
namespace gamemd {
int sub_76BE40()
{
{
    DataGlobal_B729A8 = 0;
    DataGlobal_B729AA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76BE50
namespace gamemd {
int sub_76BE50()
{
{
    DataGlobal_B729C8 = 0;
    DataGlobal_B729CC = 0;
    DataGlobal_B729D0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76BE70
namespace gamemd {
int sub_76BE70()
{
{
    DataGlobal_B729F8 = 0;
    DataGlobal_B729F0 = 128;
    DataGlobal_B729F4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x76C080
namespace gamemd {
int sub_76C080()
{
{
    DataGlobal_B72A18 = 0;
    DataGlobal_B72A1C = 0;
    DataGlobal_B72A20 = 0;
    DataGlobal_B72A24 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76C0A0
namespace gamemd {
void sub_76C0A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72A30 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x76C0D0
namespace gamemd {
void sub_76C0D0()
{
{
    DataGlobal_B72A80 = DataGlobal_B72A30 / 60.0;
}
}
} // namespace gamemd

// 0x76C0F0
namespace gamemd {
void sub_76C0F0()
{
{
    DataGlobal_B72A68 = 1.0 / DataGlobal_B72A80;
}
}
} // namespace gamemd

// 0x76C110
namespace gamemd {
void sub_76C110()
{
{
    DataGlobal_B72A60 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x76C130
namespace gamemd {
void sub_76C130()
{
{
    DataGlobal_B72A38 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x76C150
namespace gamemd {
void sub_76C150()
{
{
    DataGlobal_B72A10 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x76C170
namespace gamemd {
long long sub_76C170()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72A10 - DataGlobal_B72A38);
    result = Math::RoundToInt(v0 * DataGlobal_B72A30 * 0.5);
    DataGlobal_B72A88 = result;
    return result;
}
}
} // namespace gamemd

// 0x76C1B0
namespace gamemd {
void sub_76C1B0()
{
{
    DataGlobal_B72A40 = Math::ArcTan((double)DataGlobal_B72A88 * 0.00390625);
}
}
} // namespace gamemd

// 0x76C1E0
namespace gamemd {
void sub_76C1E0()
{
{
    DataGlobal_B72A58 = Math::ArcTan((double)(2 * DataGlobal_B72A88) / DataGlobal_B72A30);
}
}
} // namespace gamemd

// 0x76C210
namespace gamemd {
long long sub_76C210()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72A88) + 0.5);
    DataGlobal_B72A7C = result;
    return result;
}
}
} // namespace gamemd

// 0x76C240
namespace gamemd {
int sub_76C240()
{
{
    DataGlobal_B72A28 = 0;
    DataGlobal_B72A2A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76C250
namespace gamemd {
int sub_76C250()
{
{
    DataGlobal_B72A48 = 0;
    DataGlobal_B72A4C = 0;
    DataGlobal_B72A50 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76C270
namespace gamemd {
int sub_76C270()
{
{
    DataGlobal_B72A78 = 0;
    DataGlobal_B72A70 = 128;
    DataGlobal_B72A74 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x76D3A0
namespace gamemd {
bool E4Recv_76D3A0::sub_76D3A0(unsigned int * a2)
{
{
    int v3;
    ObjectClass *v4;
    bool v5;
    rc_ptr_base v7;
    rc_ptr_base v8;
    int v9;
    int v10;
    v10 = 0;
    v3 = Surface::PixelToIndex(this->M1116, a2);
    if ( v3 != this->M1120 )
  {
    this->M1120 = v3;
    v4 = (ObjectClass *)ComPtr::DestroyWrapper((int)&v8, v3);
    TerritorySelectWDT(this, v4);
    ComPtr::Territory_Dtor(&v8);
  }
    FindTerritoryWOL(&v8, this->M1116 + 44, this->M1120);
    ComPtr::Constructor(&v7);
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Set(&v7, v9);
    v8.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Release(&v8);
    v5 = TerritorySelectWDT(this, (ObjectClass *)&v7);
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Release(&v7);
    return v5;
}
}
} // namespace gamemd

// 0x76D470
namespace gamemd {
unsigned int * E4Recv_76D470::sub_76D470(unsigned int * a2)
{
{
    int *result;
    rc_ptr_base v4;
    result = (int *)Surface::PixelToIndex(this->M1116, a2);
    if ( result != (int *)this->M1120 )
  {
    this->M1120 = (int)result;
    FindTerritoryWOL(&v4, this->M1116 + 44, (int)result);
    TerritorySelectWDT(this, (ObjectClass *)&v4);
    v4.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    return ComPtr::Release(&v4);
  }
    return result;
}
}
} // namespace gamemd

// 0x76DED0
namespace gamemd {
int E4Recv_76DED0::sub_76DED0()
{
{
    int v2;
    int result;
    MSShapeAnim *v4;
    void **v5;
    int v6;
    int v7;
    v7 = 0;
    v2 = this->M1116;
    v5 = (unsigned int)vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory;
    v6 = v2 + 44;
    for ( result = VectorCursor::HasNext(&v5); (char)result; result = ((int (__thiscall *)(void ***))v5[1])(&v5) )
  {
    v4 = (MSShapeAnim *)WDTObject::GetAndClearFlag(*(int **)(*(int *)(v6 + 4) + 8 * v7 + 4));
    if ( v4 )
    Session::RemoveTeam(this, v4);
    ((void (__thiscall *)(void ***))v5[2])(&v5);
  }
    return result;
}
}
} // namespace gamemd

// 0x76DF50
namespace gamemd {
int E4Recv_76DF50::sub_76DF50()
{
{
    int v2;
    int result;
    MSShapeAnim *v4;
    void **v5;
    int v6;
    int v7;
    v7 = 0;
    v2 = this->M1116;
    v5 = (unsigned int)vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory;
    v6 = v2 + 44;
    for ( result = VectorCursor::HasNext(&v5); (char)result; result = ((int (__thiscall *)(void ***))v5[1])(&v5) )
  {
    v4 = (MSShapeAnim *)WDTObject::GetAndClearFlag(*(int **)(*(int *)(v6 + 4) + 8 * v7 + 4));
    if ( v4 )
    Session::RemoveTeam(this, v4);
    ((void (__thiscall *)(void ***))v5[2])(&v5);
  }
    return result;
}
}
} // namespace gamemd

// 0x76DFD0
namespace gamemd {
void E4Recv_76DFD0::sub_76DFD0()
{
{
    void *v2;
    void **v3;
    char *v4;
    int v5;
    String::Assign((char **)&v2, aMapenter);
    if ( String::NotEquals((const char **)&v2, 0) )
  {
    v4 = this + 1172;
    v5 = 0;
    v3 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry;
    if ( Vector::HasCapacity(&v3) )
    {
    do
      {
    if ( !String::Compare((const char **)&v2, *(const char ***)(*((int *)(v4) + 1) + 4 * v5)) )
    break;
    ((void (__thiscall *)(void ***))v3[2])(&v3);
      }
    while ( ((unsigned char (__thiscall *)(void ***))v3[1])(&v3) );
    }
    if ( ((unsigned char (__thiscall *)(void ***))v3[1])(&v3) )
    nullsub_24(*(int *)(*((int *)(v4) + 1) + 4 * v5));
  }
    DeleteAndZero(&v2);
}
}
} // namespace gamemd

// 0x76E090
namespace gamemd {
unsigned int * E4Recv_76E090::sub_76E090()
{
{
    ObjectClass *v3;
    rc_ptr_base v4;
    void **v5;
    int *v6;
    int v7;
    String::Assign((char **)&v3, aMapleave);
    if ( String::NotEquals((const char **)&v3, 0) )
  {
    v6 = this + 293;
    v7 = 0;
    v5 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry;
    if ( Vector::HasCapacity(&v5) )
    {
    do
      {
    if ( !String::Compare((const char **)&v3, *(const char ***)(v6[1] + 4 * v7)) )
    break;
    ((void (__thiscall *)(void ***))v5[2])(&v5);
      }
    while ( ((unsigned char (__thiscall *)(void ***))v5[1])(&v5) );
    }
    if ( ((unsigned char (__thiscall *)(void ***))v5[1])(&v5) )
    nullsub_24();
  }
    DeleteAndZero((void **)&v3);
    this->M1120 = -1;
    ComPtr::Constructor(&v4);
    v4.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    TerritorySelectWDT(this, (ObjectClass *)&v4);
    v4.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    return ComPtr::Release(&v4);
}
}
} // namespace gamemd

// 0x76F260
namespace gamemd {
int sub_76F260()
{
{
    DataGlobal_B72A98 = 0;
    DataGlobal_B72A9C = 0;
    DataGlobal_B72AA0 = 0;
    DataGlobal_B72AA4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76F280
namespace gamemd {
void sub_76F280()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72AB0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x76F2B0
namespace gamemd {
void sub_76F2B0()
{
{
    DataGlobal_B72B00 = DataGlobal_B72AB0 / 60.0;
}
}
} // namespace gamemd

// 0x76F2D0
namespace gamemd {
void sub_76F2D0()
{
{
    DataGlobal_B72AE8 = 1.0 / DataGlobal_B72B00;
}
}
} // namespace gamemd

// 0x76F2F0
namespace gamemd {
void sub_76F2F0()
{
{
    DataGlobal_B72AE0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x76F310
namespace gamemd {
void sub_76F310()
{
{
    DataGlobal_B72AB8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x76F330
namespace gamemd {
void sub_76F330()
{
{
    DataGlobal_B72A90 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x76F350
namespace gamemd {
long long sub_76F350()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72A90 - DataGlobal_B72AB8);
    result = Math::RoundToInt(v0 * DataGlobal_B72AB0 * 0.5);
    DataGlobal_B72B08 = result;
    return result;
}
}
} // namespace gamemd

// 0x76F390
namespace gamemd {
void sub_76F390()
{
{
    DataGlobal_B72AC0 = Math::ArcTan((double)DataGlobal_B72B08 * 0.00390625);
}
}
} // namespace gamemd

// 0x76F3C0
namespace gamemd {
void sub_76F3C0()
{
{
    DataGlobal_B72AD8 = Math::ArcTan((double)(2 * DataGlobal_B72B08) / DataGlobal_B72AB0);
}
}
} // namespace gamemd

// 0x76F3F0
namespace gamemd {
long long sub_76F3F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72B08) + 0.5);
    DataGlobal_B72AFC = result;
    return result;
}
}
} // namespace gamemd

// 0x76F420
namespace gamemd {
int sub_76F420()
{
{
    DataGlobal_B72AA8 = 0;
    DataGlobal_B72AAA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76F430
namespace gamemd {
int sub_76F430()
{
{
    DataGlobal_B72AC8 = 0;
    DataGlobal_B72ACC = 0;
    DataGlobal_B72AD0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76F450
namespace gamemd {
int sub_76F450()
{
{
    DataGlobal_B72AF8 = 0;
    DataGlobal_B72AF0 = 128;
    DataGlobal_B72AF4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x76F700
namespace gamemd {
int sub_76F700()
{
{
    DataGlobal_B72B18 = 0;
    DataGlobal_B72B1C = 0;
    DataGlobal_B72B20 = 0;
    DataGlobal_B72B24 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76F720
namespace gamemd {
void sub_76F720()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72B30 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x76F750
namespace gamemd {
void sub_76F750()
{
{
    DataGlobal_B72B80 = DataGlobal_B72B30 / 60.0;
}
}
} // namespace gamemd

// 0x76F770
namespace gamemd {
void sub_76F770()
{
{
    DataGlobal_B72B68 = 1.0 / DataGlobal_B72B80;
}
}
} // namespace gamemd

// 0x76F790
namespace gamemd {
void sub_76F790()
{
{
    DataGlobal_B72B60 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x76F7B0
namespace gamemd {
void sub_76F7B0()
{
{
    DataGlobal_B72B38 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x76F7D0
namespace gamemd {
void sub_76F7D0()
{
{
    DataGlobal_B72B10 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x76F7F0
namespace gamemd {
long long sub_76F7F0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72B10 - DataGlobal_B72B38);
    result = Math::RoundToInt(v0 * DataGlobal_B72B30 * 0.5);
    DataGlobal_B72B88 = result;
    return result;
}
}
} // namespace gamemd

// 0x76F830
namespace gamemd {
void sub_76F830()
{
{
    DataGlobal_B72B40 = Math::ArcTan((double)DataGlobal_B72B88 * 0.00390625);
}
}
} // namespace gamemd

// 0x76F860
namespace gamemd {
void sub_76F860()
{
{
    DataGlobal_B72B58 = Math::ArcTan((double)(2 * DataGlobal_B72B88) / DataGlobal_B72B30);
}
}
} // namespace gamemd

// 0x76F890
namespace gamemd {
long long sub_76F890()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72B88) + 0.5);
    DataGlobal_B72B7C = result;
    return result;
}
}
} // namespace gamemd

// 0x76F8C0
namespace gamemd {
int sub_76F8C0()
{
{
    DataGlobal_B72B28 = 0;
    DataGlobal_B72B2A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76F8D0
namespace gamemd {
int sub_76F8D0()
{
{
    DataGlobal_B72B48 = 0;
    DataGlobal_B72B4C = 0;
    DataGlobal_B72B50 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x76F8F0
namespace gamemd {
int sub_76F8F0()
{
{
    DataGlobal_B72B78 = 0;
    DataGlobal_B72B70 = 128;
    DataGlobal_B72B74 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x76FF40
namespace gamemd {
rc_ptr * FindTerritoryWOL(ObjectClass * aP0, int a2, int a3)
{
{
    char v4;
    rc_ptr_base *v5;
    rc_ptr_base v7;
    void **v8;
    int v9;
    int v10;
    int v11;
    v4 = 0;
    v11 = 0;
    v9 = a2;
    v10 = 0;
    v8 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory;
    if ( VectorCursor::HasNext(&v8) )
  {
    do
    {
    if ( *(int *)(*(int *)(*(int *)(v9 + 4) + 8 * v10 + 4) + 8) == a3 )
    break;
    ((void (__thiscall *)(void ***))v8[2])(&v8);
    }
    while ( ((unsigned char (__thiscall *)(void ***))v8[1])(&v8) );
  }
    if ( ((unsigned char (__thiscall *)(void ***))v8[1])(&v8) )
  {
    v5 = (rc_ptr_base *)(*(int *)(v9 + 4) + 8 * v10);
  }
    else
  {
    ComPtr::Constructor(&v7);
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    v4 = 1;
    v5 = &v7;
  }
    ComPtr::Constructor((rc_ptr_base *)aP0);
    *(int *)aP0->__pad_0 = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Set((rc_ptr_base *)aP0, (int)v5[1].vfptr);
    if ( (v4 & 1) != 0 )
  {
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Release(&v7);
  }
    return (rc_ptr *)aP0;
}
}
} // namespace gamemd

// 0x765b50
_DWORD* Campaign_WorldDominationTour_24_::ddtor()
{
    --this->RefCount;
    return this;
}

// 0x76f190
_DWORD* VectorCursor::ddtor()
{
    --this->RefCount;
    return this;
}

// 0x76f170
_DWORD* Count::ddtor()
{
    --this->RefCount;
    return this;
}

// 0x766fb0
_DWORD* Conflict_WorldDominationTour_26::ddtor()
{
    --this->RefCount;
    return this;
}

// 0x76a5b0
_DWORD* Map_WorldDominationTour_38::ddtor()
{
    --this->RefCount;
    return this;
}
