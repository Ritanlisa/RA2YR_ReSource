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
#include "e4/classes/Campaign_WorldDominationTour_24__e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/E4Recv_7741C0_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/E4Recv_752CB0_e4.hpp"
#include "e4/classes/E4Recv_776320_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"

// 0x7636F0
namespace gamemd {
void unknown_libname_36()
{
  this->AbstractClass = 0; /*0x7636f4*/
  this->? = 0; /*0x7636f6*/
  this->? = 0; /*0x7636f9*/
  return &this->AbstractClass; /*0x7636fc*/
}
}
// 0x764B90
namespace gamemd {
HashTable_flat * * E4Recv_764B90::WDT_Campaign_Constructor(const char ** a2, int a3)
{
  unsigned int *v4; // edi
  unsigned int *v5; // ecx
  int OwnerHouse; // eax
  int v7; // ecx
  unsigned int v8; // ebp
  unsigned int *v9; // ebp
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  int v16; // edi
  int Int; // ebp
  unsigned int *v18; // ebp
  char **v19; // eax
  int v20; // eax
  int v22; // [esp-4h] [ebp-D4h]
  char **RegionString; // [esp-4h] [ebp-D4h]
  unsigned int v24; // [esp+10h] [ebp-C0h] BYREF
  void *v25[2]; // [esp+14h] [ebp-BCh] BYREF
  unsigned int v26[2]; // [esp+1Ch] [ebp-B4h] BYREF
  unsigned int v27[2]; // [esp+24h] [ebp-ACh] BYREF
  unsigned int v28[2]; // [esp+2Ch] [ebp-A4h] BYREF
  void *v29[3]; // [esp+34h] [ebp-9Ch] BYREF
  unsigned int v30[10]; // [esp+40h] [ebp-90h] BYREF
  int v31; // [esp+68h] [ebp-68h]
  int v32; // [esp+6Ch] [ebp-64h]
  int v33; // [esp+70h] [ebp-60h]
  unsigned int v34[22]; // [esp+74h] [ebp-5Ch] BYREF
  int v35; // [esp+CCh] [ebp-4h]

  v4 = (unsigned int)(&this->M32);
  v35 = 0; /*0x764ba1*/
  this->M4 = 0; /*0x764baa*/
  *(unsigned int *)this = (void*)&ReferenceCounted_vftable; /*0x764bad*/
  ComPtr::Constructor((unsigned int *)this + 2); /*0x764bb3*/
  *(void **)v4 = (void*)&rc_ptr_WorldDominationTour_CampaignProperties_vftable; /*0x764bbf*/
  ComPtr::Set(v4, *(unsigned int *)(a3 + 4)); /*0x764bcb*/
  Team_Create_767B00(&this->M40, *(unsigned int *)(a3 + 4) + 8); /*0x764bdb*/
  Team_Create_765C90(4, 0); /*0x764be9*/
  this->q018 = (void*)&DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict_vftable; /*0x764bf7*/
  this->M44 = 10; /*0x764bfd*/
  this->q028 = 0; /*0x764c04*/
  this->q044 = 0; /*0x764c0b*/
  String::AssignFromPtr((char **)&this->ptr_48, a2); /*0x764c0e*/
  *(unsigned int *)this = (void*)&WorldDominationTour_Campaign_vftable; /*0x764c18*/
  this->M52 = 0; /*0x764c1e*/
  this->M56 = 0; /*0x764c20*/
  this->M60 = 0; /*0x764c23*/
  this->M40 = 0; /*0x764c26*/
  v5 = *(unsigned int **)(a3 + 4); /*0x764c29*/
  if ( v5[3] ) /*0x764c2c*/
  {
    OwnerHouse = Conflict::GetOwnerHouse(v5); /*0x764c3a*/
    ActivateScreenWDT((int)v28, OwnerHouse); /*0x764c47*/
    v7 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a3 + 4) + 12) + 32); /*0x764c58*/
    v8 = v7 - 1; /*0x764c5a*/
    v24 = v7 - 1; /*0x764c5d*/
    if ( v7 ) /*0x764c61*/
    {
      do /*0x764d8a*/
      {
        if ( WDTClass::GetCellType((unsigned int *)v28[1], v8) == 1 ) /*0x764c74*/
        {
          if ( v8 >= *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a3 + 4) + 12) + 60) ) /*0x764c89*/
          {
            ComPtr::Constructor(v26); /*0x764c97*/
            v35 = v35; /*0x764c9c*/
            v26[0] = (void*)&rc_ptr_WDTTerritory_vftable; /*0x764ca3*/
            IDA_LOBYTE(v35) = v35 | 1; /*0x764cab*/
            v9 = v26; /*0x764cad*/
            v35 = v35; /*0x764cb1*/
          }
          else
          {
            v9 = (unsigned int *)(*(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a3 + 4) + 12) + 48) + 8 * v8); /*0x764c8e*/
          }
          ComPtr::Constructor(v25); /*0x764cbc*/
          v25[0] = (void*)&rc_ptr_WDTTerritory_vftable; /*0x764cc1*/
          ComPtr::Set(v25, v9[1]); /*0x764cd1*/
          if ( (v35 & 1) != 0 ) /*0x764cde*/
          {
            v35 = (unsigned int)(v35);
            IDA_LOBYTE(v35) = v35 & 0xFE; /*0x764ceb*/
            v26[0] = (void*)&rc_ptr_WDTTerritory_vftable; /*0x764ced*/
            v35 = v35; /*0x764cf5*/
            ComPtr::Release(v26); /*0x764cfc*/
          }
          if ( v25[1] ) /*0x764d07*/
          {
            Team_Create_765F60(v27, v25); /*0x764d11*/
            v12 = this->M32; /*0x764d16*/
            if ( this->q028 < v12 /*0x764d3b*/
              || (*(&this->u32_C7) || !v12)
              && (v13 = this->M44, v13 > 0)
              && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(this->q018 + 8))(
                   &this->u32_60,
                   v12 + v13,
                   0) )
            {
              v14 = this->q028; /*0x764d42*/
              v22 = v27[1]; /*0x764d49*/
              this->q028 = v14 + 1; /*0x764d4d*/
              ComPtr::Set((unsigned int *)(this->M28 + 8 * v14), v22); /*0x764d56*/
            }
            v27[0] = (unsigned int)((void*)&rc_ptr_WorldDominationTour_Conflict_vftable);
            ComPtr::Release(v27); /*0x764d67*/
          }
          v25[0] = (void*)&rc_ptr_WDTTerritory_vftable; /*0x764d70*/
          ComPtr::Release(v25); /*0x764d78*/
          v8 = v24; /*0x764d7d*/
        }
        v15 = v8--; /*0x764d81*/
        v24 = v8; /*0x764d86*/
      }
      while ( v15 ); /*0x764d8a*/
    }
    v28[0] = (unsigned int)((void*)&rc_ptr_WorldDominationTour_State_vftable);
    ComPtr::Release(v28); /*0x764d9c*/
  }
  BufferIOFile::Constructor(v34, aWdthistIni_0); /*0x764daa*/
  v16 = 0; /*0x764daf*/
  if ( File::IsReady(v34, 0) )
  {
    v29[1] = (unsigned int)(0);
    v29[2] = 0; /*0x764dcb*/
    GenericList::Constructor(v30); /*0x764dcf*/
    v30[0] = (void*)&List_INIClass_INISection___vftable; /*0x764dde*/
    memset(&v30[7], 0, 12); /*0x764de6*/
    IDA_LOBYTE(v31) = 0; /*0x764df2*/
    v32 = 0; /*0x764df7*/
    v33 = 0; /*0x764dfb*/
    v29[0] = (void*)&INIClass_vftable; /*0x764dff*/
    FileStraw::Open(v29, (int)v34, 0); /*0x764e07*/
    CCFileClass::Close(v34); /*0x764e10*/
    String::Assign((char **)&v24, g_INI_Key_CampaignID); /*0x764e1e*/
    Int = INIClass::ReadInt((char **)&this->ptr_48, (char **)&v24, -1); /*0x764e3b*/
    DeleteAndZero((void **)&v24); /*0x764e3d*/
    this->M48 = Int < 0 ? 0 : Int;
    if ( this->M48 == WDTObject::GetSize(*(unsigned int **)(a3 + 4)) )
    {
      v18 = &this->u32_D0; /*0x764e60*/
      do
      {
        RegionString = GetRegionStringWOL((void *)v16); /*0x764e6a*/
        v19 = String::Assign((char **)v25, g_INI_Key_LastDay); /*0x764e79*/
        String::Concat((const char **)v19, (char **)&v24, RegionString); /*0x764e80*/
        DeleteAndZero(v25); /*0x764e89*/
        v20 = INIClass::ReadInt((char **)&this->ptr_48, (char **)&v24, 0); /*0x764e9d*/
        *v18 = v20 < 0 ? 0 : v20;
        DeleteAndZero((void **)&v24); /*0x764eb3*/
        ++v16; /*0x764eb8*/
        ++v18; /*0x764eb9*/
      }
      while ( v16 < 4 );
      String::Assign((char **)&v24, aPlayerfaction); /*0x764eca*/
      this->q044 = INIClass::ReadInt((char **)&this->ptr_48, (char **)&v24, this->q044); /*0x764ee9*/
      DeleteAndZero((void **)&v24); /*0x764eec*/
    }
    else
    {
      this->M52 = 0; /*0x764ef5*/
      this->M56 = 0; /*0x764ef8*/
      this->M60 = 0; /*0x764efb*/
      this->M40 = 0; /*0x764efe*/
    }
    HashTable::DestroyHashTableINIClass(v29); /*0x764f05*/
  }
  v34[0] = (unsigned int)(&off_7E1668);
  BufferIOFileClass::Dtor(v34); /*0x764f16*/
  return this; /*0x764f1d*/
}
}
// 0x765000
namespace gamemd {
AbstractClass * * E4Recv_765000::sub_765000(ScoreScreen * aP1)
{
  char **v3; // eax
  char **RegionStringWOL; // [esp-4h] [ebp-10Ch]
  void *v6; // [esp+10h] [ebp-F8h] BYREF
  void *v7; // [esp+14h] [ebp-F4h] BYREF
  void *v8[4]; // [esp+18h] [ebp-F0h] BYREF
  unsigned int v9[3]; // [esp+28h] [ebp-E0h] BYREF
  unsigned int v10[6]; // [esp+34h] [ebp-D4h] BYREF
  char v11; // [esp+4Ch] [ebp-BCh]
  int v12; // [esp+50h] [ebp-B8h]
  int v13; // [esp+54h] [ebp-B4h]
  unsigned int v14[22]; // [esp+58h] [ebp-B0h] BYREF
  unsigned int v15[22]; // [esp+B0h] [ebp-58h] BYREF

  *(unsigned int *)((char *)&this->q084 + 60) = WDTObject::GetSize(this->M48); /*0x76501b*/
  *(unsigned int *)(&this->u32_4 * (unsigned int)aP1 + 52) = Conflict::GetOwnerHouse(this->M48); /*0x76502c*/
  v8[1] = 0; /*0x765030*/
  v8[2] = 0; /*0x765034*/
  GenericNode::Constructor(v9); /*0x765038*/
  GenericNode::Constructor(v10); /*0x765041*/
  LinkedList::Prepend(v9, (int)v10); /*0x765057*/
  memset(&v10[3], 0, 12); /*0x765068*/
  v11 = 0; /*0x765074*/
  v12 = 0; /*0x765078*/
  v13 = 0; /*0x76507c*/
  BufferIOFile::Init(v14); /*0x765088*/
  CCFileClass::Reopen(v14, g_Str_File_WDTHist_ini, 1); /*0x765098*/
  if ( !File::IsReady(v14, 0) ) /*0x7650a2*/
  {
    FileClass::Close(v14); /*0x7650af*/
    CCFileClass::Close(v14); /*0x7650b8*/
    CCFileClass::Reopen(v14, g_Str_File_WDTHist_ini, 1); /*0x7650c8*/
  }
  FileStraw::Open(v8, (int)v14, 0); /*0x7650d7*/
  CCFileClass::Close(v14); /*0x7650e0*/
  v14[0] = (unsigned int)&off_7E1668; /*0x7650e9*/
  BufferIOFileClass::Dtor(v14); /*0x7650f1*/
  RegionStringWOL = GetRegionStringWOL(aP1); /*0x765101*/
  v3 = String::Assign((char **)&v6, g_INI_Key_LastDay); /*0x76510c*/
  String::Concat((const char **)v3, (char **)&v7, RegionStringWOL); /*0x765113*/
  DeleteAndZero(&v6); /*0x76511c*/
  String::Assign((char **)&v6, g_INI_Key_CampaignID); /*0x76512a*/
  INIClass::SetIntFormat((char *)v8, (char **)((char *)&this->q114 + 12), (char **)&v6, *(unsigned int *)((char *)&this->q084 + 60), 0); /*0x765141*/
  DeleteAndZero(&v6); /*0x76514a*/
  INIClass::SetIntFormat((char *)v8, (char **)((char *)&this->q114 + 12), (char **)&v7, *(unsigned int *)(&this->u32_4 * (unsigned int)aP1 + 52), 0); /*0x76515f*/
  BufferIOFile::Init(v15); /*0x76516b*/
  CCFileClass::Reopen(v15, g_Str_File_WDTHist_ini, 2); /*0x76517e*/
  INIClass::SaveToPipe(v8, (int)v15); /*0x76518f*/
  v15[0] = (unsigned int)&off_7E1668; /*0x76519b*/
  BufferIOFileClass::Dtor(v15); /*0x7651a6*/
  DeleteAndZero(&v7); /*0x7651af*/
  return HashTable::DestroyHashTableINIClass(v8); /*0x7651bd*/
}
}
// 0x7651D0
namespace gamemd {
AbstractClass * * E4Recv_7651D0::sub_7651D0()
{
  char **v2; // edi
  int i; // esi
  char **v4; // eax
  char **RegionStringWOL; // [esp-4h] [ebp-108h]
  ObjectClass v7; // [esp+Ch] [ebp-F8h] BYREF

  v7.? = 0; /*0x7651e1*/
  v7.? = 0; /*0x7651e5*/
  GenericNode::Constructor((GenericNode *)&v7.?); /*0x7651e9*/
  GenericNode::Constructor((GenericNode *)&v7.occupant); /*0x7651f2*/
  LinkedList::Prepend((LinkedList *)&v7.?, (int)&v7.occupant); /*0x765208*/
  v7.? = (int)&List_INIClass_INISection___vftable; /*0x765211*/
  memset(&v7.nextObject, 0, 13); /*0x765219*/
  v7.ambientSoundController[1] = 0; /*0x765229*/
  v7.ambientSoundController[2] = 0; /*0x76522d*/
  v7.? = (void*)&INIClass_vftable; /*0x765231*/
  BufferIOFile::Init((BufferIOFile *)&v7.ambientSoundController[3]); /*0x765239*/
  CCFileClass::Reopen((CDFileClass *)&v7.ambientSoundController[3], g_Str_File_WDTHist_ini, (CHAR *)1); /*0x765249*/
  if ( !(uint8_t)File::IsReady((BufferIOFileClass *)&v7.ambientSoundController[3], 0) ) /*0x765253*/
  {
    FileClass::Close((RawFileClass *)&v7.ambientSoundController[3]); /*0x765260*/
    CCFileClass::Close((BufferIOFileClass *)&v7.ambientSoundController[3]); /*0x765269*/
    CCFileClass::Reopen((CDFileClass *)&v7.ambientSoundController[3], g_Str_File_WDTHist_ini, (CHAR *)1); /*0x765279*/
  }
  FileStraw::Open((FileStraw *)&v7.?, (int)&v7.ambientSoundController[3], 0); /*0x765288*/
  CCFileClass::Close((BufferIOFileClass *)&v7.ambientSoundController[3]); /*0x765291*/
  v7.ambientSoundController[3] = (int)&off_7E1668; /*0x76529a*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v7.ambientSoundController[3]); /*0x7652a2*/
  String::Assign((String *)&v7, g_INI_Key_CampaignID); /*0x7652b0*/
  v2 = (char **)&this->ambientSoundController[3]; /*0x7652ba*/
  INIClass::SetIntFormat((char *)&v7.?, (char **)&this->ambientSoundController[3], (char **)&v7, 0, 0); /*0x7652c4*/
  DeleteAndZero(&v7); /*0x7652cd*/
  for ( i = 0; i < 4; ++i ) /*0x7652d2*/
  {
    RegionStringWOL = GetRegionStringWOL((ObjectClass *)i); /*0x7652db*/
    v4 = String::Assign((String *)&v7.?, g_INI_Key_LastDay); /*0x7652ea*/
    String::Concat((String *)v4, (char **)&v7, RegionStringWOL); /*0x7652f1*/
    DeleteAndZero((ObjectClass *)&v7.?); /*0x7652fa*/
    INIClass::SetIntFormat((char *)&v7.?, v2, (char **)&v7, 0, 0); /*0x76530b*/
    DeleteAndZero(&v7); /*0x765314*/
  }
  BufferIOFile::Init((BufferIOFile *)&v7.location[1]); /*0x765326*/
  CCFileClass::Reopen((CDFileClass *)&v7.location[1], g_Str_File_WDTHist_ini, (CHAR *)2); /*0x765339*/
  INIClass::SaveToPipe((INIClass *)&v7.?, (int)&v7.location[1]); /*0x76534a*/
  v7.location[1] = (int)&off_7E1668; /*0x765356*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v7.location[1]); /*0x765361*/
  return HashTable::DestroyHashTableINIClass((INIClass *)&v7.?); /*0x76536f*/
}
}
// 0x7660F0
namespace gamemd {
int WDT_InitGameOptions()
{
  char *v0; // ecx
  int v1; // esi
  int v2; // eax
  char *v3; // ecx
  char *v4; // ecx
  unsigned int *v5; // esi
  int v6; // eax
  char *v7; // ecx
  char *v8; // ecx
  unsigned int *v9; // esi
  int v10; // eax
  char *v11; // ecx
  int v12; // esi
  int v13; // eax
  char *v14; // ecx
  char *v15; // ecx
  unsigned int *v16; // esi
  int v17; // eax
  char *v18; // ecx
  char *v19; // ecx
  unsigned int *v20; // esi
  int v21; // eax
  char *v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h]
  char *v25; // [esp+18h] [ebp-20h] BYREF
  int v26; // [esp+1Ch] [ebp-1Ch]
  void **v27; // [esp+28h] [ebp-10h] BYREF
  int v28; // [esp+2Ch] [ebp-Ch]
  unsigned int v29[2]; // [esp+30h] [ebp-8h] BYREF

  dword_B72770 = 0; /*0x7660fa*/
  Conflict_WorldDominationTour_12_::ddtor(&stru_B72760); /*0x766104*/
  v26 = 0; /*0x766109*/
  v25 = v0; /*0x76610b*/
  String::Assign(&v25, aWdtTechlevel); /*0x766113*/
  v1 = System_Init_766880(sub_7667F0, (char)v25, v26); /*0x76612f*/
  ComPtr::Constructor(&v27); /*0x766131*/
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x76613f*/
  ComPtr::Set(&v27, *(unsigned int *)(v1 + 4)); /*0x766147*/
  if ( dword_B72770 < dword_B72768 /*0x766183*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72768 + dword_B72774,
         0) )
  {
    v2 = dword_B72770++; /*0x766196*/
    ComPtr::Set((unsigned int *)(dword_B72764 + 8 * v2), v28); /*0x7661a7*/
  }
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x7661b0*/
  ComPtr::Release(&v27); /*0x7661b4*/
  v29[0] = (void*)&rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char_vftable; /*0x7661bd*/
  ComPtr::Release(v29); /*0x7661c5*/
  v26 = 1; /*0x7661ca*/
  v25 = v3; /*0x7661cc*/
  String::Assign(&v25, aWdtBases); /*0x7661d4*/
  v24 = 0; /*0x7661d9*/
  v23 = v4; /*0x7661db*/
  String::Assign(&v23, aWdtNobases); /*0x7661e3*/
  v5 = ConstructorWDTFlagOption(v29, 16, v23, v24, v25, v26); /*0x7661fa*/
  ComPtr::Constructor(&v27); /*0x7661fc*/
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x766201*/
  ComPtr::Set(&v27, v5[1]); /*0x76620d*/
  if ( dword_B72770 < dword_B72768 /*0x766249*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v6 = dword_B72770++; /*0x76625c*/
    ComPtr::Set((unsigned int *)(dword_B72764 + 8 * v6), v28); /*0x76626d*/
  }
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x766276*/
  ComPtr::Release(&v27); /*0x76627a*/
  v29[0] = (void*)&rc_ptr_WorldDominationTour_FlagGameOption_vftable; /*0x766283*/
  ComPtr::Release(v29); /*0x76628b*/
  v26 = 0; /*0x766290*/
  v25 = v7; /*0x766292*/
  String::Assign(&v25, aWdtShortgame); /*0x76629a*/
  v24 = 1; /*0x76629f*/
  v23 = v8; /*0x7662a1*/
  String::Assign(&v23, aWdtNotshortgam); /*0x7662a9*/
  v9 = ConstructorWDTFlagOption(v29, 1024, v23, v24, v25, v26); /*0x7662c0*/
  ComPtr::Constructor(&v27); /*0x7662c2*/
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x7662c7*/
  ComPtr::Set(&v27, v9[1]); /*0x7662d3*/
  if ( dword_B72770 < dword_B72768 /*0x76630f*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v10 = dword_B72770++; /*0x766322*/
    ComPtr::Set((unsigned int *)(dword_B72764 + 8 * v10), v28); /*0x766333*/
  }
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x76633c*/
  ComPtr::Release(&v27); /*0x766340*/
  v29[0] = (void*)&rc_ptr_WorldDominationTour_FlagGameOption_vftable; /*0x766349*/
  ComPtr::Release(v29); /*0x766351*/
  v26 = 0; /*0x766356*/
  v25 = v11; /*0x766358*/
  String::Assign(&v25, aWdtUnitcount); /*0x766360*/
  v12 = System_Init_766880(sub_7667E0, (char)v25, v26); /*0x76637c*/
  ComPtr::Constructor(&v27); /*0x76637e*/
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x766383*/
  ComPtr::Set(&v27, *(unsigned int *)(v12 + 4)); /*0x76638f*/
  if ( dword_B72770 < dword_B72768 /*0x7663cb*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v13 = dword_B72770++; /*0x7663de*/
    ComPtr::Set((unsigned int *)(dword_B72764 + 8 * v13), v28); /*0x7663ef*/
  }
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x7663f8*/
  ComPtr::Release(&v27); /*0x7663fc*/
  v29[0] = (void*)&rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char_vftable; /*0x766405*/
  ComPtr::Release(v29); /*0x76640d*/
  v26 = 0; /*0x766412*/
  v25 = v14; /*0x766414*/
  String::Assign(&v25, aWdtRedeployabl); /*0x76641c*/
  v24 = 1; /*0x766421*/
  v23 = v15; /*0x766423*/
  String::Assign(&v23, aWdtNoredeploym); /*0x76642b*/
  v16 = ConstructorWDTFlagOption(v29, 32, v23, v24, v25, v26); /*0x766442*/
  ComPtr::Constructor(&v27); /*0x766444*/
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x766449*/
  ComPtr::Set(&v27, v16[1]); /*0x766455*/
  if ( dword_B72770 < dword_B72768 /*0x766491*/
    || (byte_B7276D || !dword_B72768)
    && dword_B72774 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(stru_B72760 + 8))(
         &stru_B72760,
         dword_B72774 + dword_B72768,
         0) )
  {
    v17 = dword_B72770++; /*0x7664a4*/
    ComPtr::Set((unsigned int *)(dword_B72764 + 8 * v17), v28); /*0x7664b5*/
  }
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x7664be*/
  ComPtr::Release(&v27); /*0x7664c2*/
  v29[0] = (void*)&rc_ptr_WorldDominationTour_FlagGameOption_vftable; /*0x7664cb*/
  ComPtr::Release(v29); /*0x7664d3*/
  v26 = 1; /*0x7664d8*/
  v25 = v18; /*0x7664da*/
  String::Assign(&v25, aWdtCrates); /*0x7664e2*/
  v24 = 1; /*0x7664e7*/
  v23 = v19; /*0x7664e9*/
  String::Assign(&v23, aWdtNocrates); /*0x7664f1*/
  v20 = ConstructorWDTFlagOption(v29, 256, v23, v24, v25, v26); /*0x766508*/
  ComPtr::Constructor(&v27); /*0x76650a*/
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x76650f*/
  ComPtr::Set(&v27, v20[1]); /*0x76651b*/
  System_Init_766EE0(&v27); /*0x76652a*/
  v27 = (void*)&rc_ptr_WorldDominationTour_GameOption_vftable; /*0x766533*/
  ComPtr::Release(&v27); /*0x766537*/
  System_Init_766900(v29); /*0x766540*/
  v21 = System_Init_7676F0(&v27, 201326592); /*0x76654e*/
  System_Init_766F70(v21); /*0x766558*/
  System_Init_766EE0(v29); /*0x766567*/
  System_Init_7668F0(v29); /*0x766570*/
  return System_Init_766910(&v27); /*0x76657e*/
}
}
// 0x7667E0
namespace gamemd {
int E4Recv_7667E0::sub_7667E0()
{
  return IDA_BYTE2(this->?); /*0x7667e5*/
}
}
// 0x7667F0
namespace gamemd {
int E4Recv_7667F0::sub_7667F0()
{
  return IDA_HIBYTE(this->?); /*0x7667f5*/
}
}
// 0x767EC0
namespace gamemd {
void E4Recv_767EC0::sub_767EC0()
{
  *(unsigned int *)this->__pad_0 = (void*)&MSFrameAnim_vftable; /*0x767ec0*/
  VtableStub::5CB6C0(); /*0x767ec6*/
}
}
// 0x769480
namespace gamemd {
void unknown_libname_37()
{
  this->AbstractClass = 0; /*0x769484*/
  this->? = 0; /*0x769486*/
  this->? = 0; /*0x769489*/
  return &this->AbstractClass; /*0x76948c*/
}
}
// 0x769550
namespace gamemd {
int WDTMap_LoadAsset(const char ** a1, int a2)
{
  void *vtable0; // ebp
  int *v4; // eax
  int *v5; // esi
  int *v6; // eax
  int *v7; // esi
  unsigned int *v8; // eax
  int v9; // edx
  unsigned int abstractFlags; // ebp
  int v11; // esi
  int *v12; // eax
  int *v13; // edi
  int v14; // ecx
  int v15; // eax
  int *v16; // ebx
  int *v17; // edx
  unsigned int *v18; // eax
  int v19; // edi
  int v20; // edx
  int *v21; // eax
  int *v22; // edi
  int m_8; // ecx
  int v24; // eax
  int *v25; // ebx
  int *v26; // edx
  unsigned int *v27; // eax
  int v28; // ecx
  int v29; // ebp
  int v30; // eax
  int v31; // esi
  int attachedTag; // esi
  int v33; // edi
  int v34; // esi
  bool v35; // cc
  int v36; // edi
  TagClass *v37; // ebx
  BombClass *v38; // ebp
  BombClass *attachedBomb; // ebx
  unsigned int *_769D70; // eax
  int v41; // edi
  int v42; // esi
  char **v43; // eax
  int *_7694C0; // eax
  ObjectClass *v45; // ecx
  char **v46; // eax
  char **v47; // eax
  int v49; // [esp+10h] [ebp-158h] BYREF
  int v50; // [esp+14h] [ebp-154h]
  _VectorClass_V_TRect_H v51; // [esp+18h] [ebp-150h] BYREF
  void *Block; // [esp+2Ch] [ebp-13Ch]
  unsigned int v53; // [esp+30h] [ebp-138h]
  int v54; // [esp+34h] [ebp-134h]
  ObjectClass v55; // [esp+38h] [ebp-130h] BYREF
  BufferIOFileClass v56; // [esp+110h] [ebp-58h] BYREF

  v55.ambientSoundController[0] = (int)a1; /*0x769558*/
  BufferIOFile::Init((BufferIOFile *)&v55.needsRedraw); /*0x769567*/
  CCFileClass::Reopen((CDFileClass *)&v55.needsRedraw, aWdtmapmdIni_0, (CHAR *)1); /*0x76957a*/
  v55.ambientSoundController[2] = 0; /*0x769588*/
  v55.ambientSoundController[3] = 0; /*0x76958c*/
  GenericList::Constructor((GenericList *)&v55.ambientSoundController[4]); /*0x769593*/
  v55.ambientSoundController[4] = (int)&List_INIClass_INISection___vftable; /*0x76959f*/
  Node::Init((Node *)&v55.bombVisible); /*0x7695aa*/
  v55.visibilityFlags = 0; /*0x7695bc*/
  v55.ambientSoundController[1] = (int)&INIClass_vftable; /*0x7695c3*/
  FileStraw::Open((FileStraw *)&v55.ambientSoundController[1], (int)&v55.needsRedraw, 0); /*0x7695ce*/
  CCFileClass::Close((BufferIOFileClass *)&v55.needsRedraw); /*0x7695da*/
  sub_47AA00((CDFileClass *)&v56, a2); /*0x7695e7*/
  vtable0 = DecodeFrameSHP((int)&v56, 0, 0, 0); /*0x7695fc*/
  v55.AbstractClass = vtable0; /*0x769600*/
  v55.? = (*(int (__thiscall **)(void *))(*(unsigned int *)vtable0 + 128))(vtable0); /*0x76960d*/
  v55.? = (*(int (__thiscall **)(void *))(*(unsigned int *)vtable0 + 124))(vtable0); /*0x76961e*/
  *(unsigned int *)&v51.m_1[3] = 0; /*0x769627*/
  v51.m_8 = 30; /*0x76962b*/
  IDA_LOWORD(v51.m_C) = 1; /*0x76962f*/
  *(unsigned int *)v51.__pad_0 = (void*)&VectorClass_TRect_int_vftable; /*0x769638*/
  v4 = (int *)RA2_OPNEW(0x1E0u); /*0x769640*/
  v5 = v4; /*0x769645*/
  if ( v4 ) /*0x76964c*/
    Array::ForEach(v4, 16, 30, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769657*/
  else
    v5 = 0; /*0x76965e*/
  *(unsigned int *)&v51.m_1[3] = v5; /*0x769665*/
  IDA_BYTE1(v51.m_C) = 1; /*0x769669*/
  Block = 0; /*0x76966e*/
  v53 = 30; /*0x769672*/
  IDA_LOWORD(v54) = 1; /*0x769676*/
  *(unsigned int *)v51.__tail_10 = (void*)&VectorClass_WorldDominationTour_Centroid_vftable; /*0x76967f*/
  v6 = (int *)RA2_OPNEW(0x168u); /*0x769687*/
  v7 = v6; /*0x76968c*/
  if ( v6 ) /*0x769693*/
    Array::ForEach(v6, 12, 30, (int (__thiscall *)(int))unknown_libname_37); /*0x76969e*/
  else
    v7 = 0; /*0x7696a5*/
  Block = v7; /*0x7696ab*/
  v55.? = &v51; /*0x7696af*/
  IDA_BYTE1(v54) = 1; /*0x7696b7*/
  v55.? = 0; /*0x7696bc*/
  v55.? = (void*)&VectorCursor_TRect_int_VectorClass_TRect_int_vftable; /*0x7696c0*/
  if ( Map_WorldDominationTour_38::AddRef(&v55.?) ) /*0x7696c8*/
  {
    do /*0x769700*/
    {
      v8 = (unsigned int *)(16 * (int)v55.? + *((unsigned int *)v55.? + 1)); /*0x7696e4*/
      *v8 = 0; /*0x7696e6*/
      v8[1] = 0; /*0x7696e8*/
      v8[2] = 0; /*0x7696eb*/
      v8[3] = 0; /*0x7696ee*/
      (*((void (__thiscall **)(void **))v55.? + 2))(&v55.?); /*0x7696f5*/
    }
    while ( (*((uint8_t (__thiscall **)(void **))v55.? + 1))(&v55.?) ); /*0x769700*/
  }
  v9 = 0; /*0x76970b*/
  v50 = 0; /*0x76970f*/
  if ( v55.? > 0 ) /*0x769713*/
  {
    while ( 1 ) /*0x76971d*/
    {
      v49 = 0; /*0x76971d*/
      if ( v55.? > 0 ) /*0x769723*/
        break; /*0x769723*/
  LABEL_67:
      v50 = ++v9; /*0x769a2a*/
      if ( v9 >= v55.? ) /*0x769a2e*/
        goto LABEL_68; /*0x769a2e*/
    }
    while ( 1 ) /*0x769736*/
    {
      abstractFlags = (*(int (__thiscall **)(void *, int *))(*(unsigned int *)vtable0 + 40))(vtable0, &v49); /*0x769736*/
      v55.? = abstractFlags; /*0x76973b*/
      if ( abstractFlags <= 0x1D ) /*0x76973f*/
      {
        v11 = abstractFlags + 1; /*0x769755*/
        if ( v53 < abstractFlags + 1 ) /*0x76975a*/
        {
          IDA_LOBYTE(v54) = 0; /*0x76976b*/
          v12 = (int *)RA2_OPNEW(12 * v11); /*0x769773*/
          v13 = v12; /*0x769778*/
          if ( v12 ) /*0x76977f*/
            Array::ForEach(v12, 12, abstractFlags + 1, (int (__thiscall *)(int))unknown_libname_37); /*0x76978a*/
          else
            v13 = 0; /*0x769791*/
          IDA_LOBYTE(v54) = 1; /*0x769795*/
          if ( v13 ) /*0x76979a*/
          {
            if ( Block ) /*0x7697a0*/
            {
              v14 = v53; /*0x7697a2*/
              if ( v11 < (int)v53 ) /*0x7697a8*/
                v14 = abstractFlags + 1; /*0x7697aa*/
              if ( v14 > 0 ) /*0x7697ae*/
              {
                v15 = 0; /*0x7697b0*/
                do /*0x7697cf*/
                {
                  v16 = &v13[v15]; /*0x7697b6*/
                  v17 = (int *)((char *)Block + v15 * 4); /*0x7697b9*/
                  v15 += 3; /*0x7697bb*/
                  --v14; /*0x7697be*/
                  *v16 = *v17; /*0x7697c1*/
                  v16[1] = v17[1]; /*0x7697c6*/
                  v16[2] = v17[2]; /*0x7697cc*/
                }
                while ( v14 ); /*0x7697cf*/
                abstractFlags = v55.?; /*0x7697d1*/
              }
              if ( IDA_BYTE1(v54) ) /*0x7697db*/
                RA2_OPDEL(Block); /*0x7697e2*/
            }
            Block = v13; /*0x7697ea*/
            v53 = v11; /*0x7697ee*/
            IDA_BYTE1(v54) = 1; /*0x7697f2*/
          }
        }
        v18 = (char *)Block + 12 * abstractFlags; /*0x769810*/
        v19 = v18[1]; /*0x769815*/
        v20 = v18[2]; /*0x76981a*/
        *v18 += v49; /*0x76981d*/
        v18[1] = v50 + v19; /*0x769826*/
        v18[2] = v20 + 1; /*0x769829*/
        if ( v51.m_8 < (unsigned int)v11 ) /*0x769832*/
        {
          v55.owningHouseIndex = v51.m_8; /*0x76983a*/
          if ( v11 ) /*0x76983e*/
          {
            IDA_LOBYTE(v51.m_C) = 0; /*0x769846*/
            v21 = (int *)RA2_OPNEW(16 * v11); /*0x76984e*/
            v22 = v21; /*0x769853*/
            if ( v21 ) /*0x76985a*/
              Array::ForEach(v21, 16, v11, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_9); /*0x769865*/
            else
              v22 = 0; /*0x76986c*/
            IDA_LOBYTE(v51.m_C) = 1; /*0x769870*/
            if ( v22 ) /*0x769875*/
            {
              if ( *(unsigned int *)&v51.m_1[3] ) /*0x76987b*/
              {
                m_8 = v51.m_8; /*0x76987d*/
                if ( v11 < v51.m_8 ) /*0x769883*/
                  m_8 = v11; /*0x769885*/
                if ( m_8 > 0 ) /*0x769889*/
                {
                  v24 = 0; /*0x76988b*/
                  do /*0x7698b0*/
                  {
                    v25 = &v22[v24]; /*0x769891*/
                    v26 = (int *)(v24 * 4 + *(unsigned int *)&v51.m_1[3]); /*0x769894*/
                    v24 += 4; /*0x769896*/
                    --m_8; /*0x769899*/
                    *v25 = *v26; /*0x76989c*/
                    v25[1] = v26[1]; /*0x7698a1*/
                    v25[2] = v26[2]; /*0x7698a7*/
                    v25[3] = v26[3]; /*0x7698ad*/
                  }
                  while ( m_8 ); /*0x7698b0*/
                  abstractFlags = v55.?; /*0x7698b2*/
                }
                if ( IDA_BYTE1(v51.m_C) ) /*0x7698bc*/
                  RA2_OPDEL(*(void **)&v51.m_1[3]); /*0x7698c3*/
              }
              *(unsigned int *)&v51.m_1[3] = v22; /*0x7698cb*/
              v51.m_8 = v11; /*0x7698cf*/
              IDA_BYTE1(v51.m_C) = 1; /*0x7698d3*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_VectorClass_V_TRect_H *))(*(unsigned int *)v51.__pad_0 + 12))(&v51); /*0x7698e2*/
          }
          v55.occupant = v55.owningHouseIndex; /*0x7698ed*/
          v55.? = &v51; /*0x7698fa*/
          v55.? = (int)&VectorCursor_TRect_int_VectorClass_TRect_int_vftable; /*0x7698fe*/
          if ( Map_WorldDominationTour_38::AddRef(&v55.?) ) /*0x769902*/
          {
            do /*0x76993a*/
            {
              v27 = (unsigned int *)(16 * v55.occupant + *((unsigned int *)v55.? + 1)); /*0x76991e*/
              *v27 = 0; /*0x769920*/
              v27[1] = 0; /*0x769922*/
              v27[2] = 0; /*0x769925*/
              v27[3] = 0; /*0x769928*/
              (*(void (__thiscall **)(int *))(v55.? + 8))(&v55.?); /*0x76992f*/
            }
            while ( (*(uint8_t (__thiscall **)(int *))(v55.? + 4))(&v55.?) ); /*0x76993a*/
          }
          v55.? = (int)&VectorCursor_TRect_int_VectorClass_TRect_int_vftable; /*0x769941*/
        }
        v28 = *(unsigned int *)&v51.m_1[3] + 16 * abstractFlags; /*0x76994e*/
        v29 = v28->q008; /*0x769950*/
        if ( !v29 ) /*0x769955*/
          v28->q00C = 0; /*0x769957*/
        v30 = v49; /*0x76995c*/
        v9 = v50; /*0x769960*/
        if ( v49 >= *(unsigned int *)v28 && v49 < v29 + *(unsigned int *)v28 ) /*0x76996c*/
        {
          v31 = v28->q004; /*0x76996e*/
          if ( v50 >= v31 && v50 < v31 + v28->q00C ) /*0x76997c*/
            goto LABEL_66; /*0x76997c*/
        }
        attachedTag = 1; /*0x769982*/
        v33 = 1; /*0x769989*/
        if ( v29 > 0 && v28->q00C > 0 ) /*0x769990*/
        {
          v34 = *(unsigned int *)v28; /*0x769994*/
          v35 = *(unsigned int *)v28 <= v49; /*0x769997*/
          v36 = v28->q004; /*0x769999*/
          v37 = v28->q008; /*0x76999c*/
          v55.attachedTag = v37; /*0x76999f*/
          v55.attachedBomb = v28->q00C; /*0x7699a6*/
          if ( !v35 ) /*0x7699aa*/
          {
            v37 = (TagClass *)((char *)v37 + v34 - v49); /*0x7699ae*/
            v34 = v49; /*0x7699b0*/
            v55.attachedTag = v37; /*0x7699b2*/
          }
          if ( v36 > v50 ) /*0x7699b8*/
          {
            v38 = (BombClass *)((char *)v55.attachedBomb + v36 - v50); /*0x7699c0*/
            v36 = v50; /*0x7699c2*/
            v55.attachedBomb = v38; /*0x7699c4*/
          }
          if ( (int)v37 + v34 < v49 + 1 ) /*0x7699cf*/
            v55.attachedTag = (TagClass *)(v49 - v34 + 2); /*0x7699d6*/
          attachedBomb = v55.attachedBomb; /*0x7699da*/
          if ( (int)v55.attachedBomb + v36 < v50 + 1 ) /*0x7699e6*/
            attachedBomb = (BombClass *)(v50 - v36 + 2); /*0x7699ed*/
          v9 = v36; /*0x7699ef*/
          v30 = v34; /*0x7699f1*/
          attachedTag = (int)v55.attachedTag; /*0x7699f3*/
          v33 = (int)attachedBomb; /*0x7699f7*/
        }
        *(unsigned int *)v28 = v30; /*0x7699fb*/
        v28->q004 = v9; /*0x7699fd*/
        v28->q008 = attachedTag; /*0x769a00*/
        v28->q00C = v33; /*0x769a03*/
      }
      v9 = v50; /*0x769a06*/
      v30 = v49; /*0x769a0a*/
  LABEL_66:
      vtable0 = v55.AbstractClass; /*0x769a0e*/
      v49 = v30 + 1; /*0x769a19*/
      if ( v30 + 1 >= v55.? ) /*0x769a1d*/
        goto LABEL_67; /*0x769a1d*/
    }
  }
  LABEL_68:
  _769D70 = Map_Load_769D70(&v55.?, (int)&v51); /*0x769a34*/
  Map_Load_769C20((ObjectClass *)&v55.?, (int)_769D70); /*0x769a46*/
  v41 = 0; /*0x769a4f*/
  if ( (*((uint8_t (__thiscall **)(void **))v55.? + 1))(&v55.?) ) /*0x769a55*/
  {
    v42 = 0; /*0x769a60*/
    do /*0x769b22*/
    {
      v43 = FormatStringInt((char **)&v55.owningHouseIndex, v41, 2); /*0x769a6a*/
      ConcatStringAlloc((char **)&v55, (const char **)v55.ambientSoundController[0], v43); /*0x769a78*/
      DeleteAndZero((ObjectClass *)&v55.owningHouseIndex); /*0x769a81*/
      FromStringInt((char **)&v55.?, (int)g_DisplayWidth); /*0x769a90*/
      _7694C0 = Map_Load_7694C0((ObjectClass *)((char *)Block + v42), &v55.?); /*0x769aa0*/
      v45 = (ObjectClass *)_7694C0[1]; /*0x769aa9*/
      v55.fallRate = *_7694C0; /*0x769aac*/
      v55.v45 = v45; /*0x769ab0*/
      v46 = String::Assign((String *)&v55.?, aTarget_0); /*0x769acc*/
      v47 = String::Concat((String *)v46, (char **)&v55.?, (char **)&v55.?); /*0x769ad3*/
      INIClass::GetInt((char *)&v55.ambientSoundController[1], (char **)&v55, v47, &v55.fallRate); /*0x769ae2*/
      DeleteAndZero((ObjectClass *)&v55.?); /*0x769aeb*/
      DeleteAndZero((ObjectClass *)&v55.?); /*0x769af4*/
      (*((void (__thiscall **)(void **))v55.? + 2))(&v55.?); /*0x769b01*/
      ++v41; /*0x769b08*/
      v42 += 12; /*0x769b09*/
      DeleteAndZero((ObjectClass *)&v55.?); /*0x769b0c*/
      DeleteAndZero(&v55); /*0x769b15*/
    }
    while ( (*((uint8_t (__thiscall **)(void **))v55.? + 1))(&v55.?) ); /*0x769b22*/
  }
  CCFileClass::Reopen((CDFileClass *)&v55.needsRedraw, aWdtmapmdIni_0, (CHAR *)2); /*0x769b3b*/
  INIClass::SaveToPipe((INIClass *)&v55.ambientSoundController[1], (int)&v55.needsRedraw); /*0x769b4c*/
  CCFileClass::Reopen((CDFileClass *)&v55.needsRedraw, aCodeWdtmapmdIn, (CHAR *)2); /*0x769b5f*/
  INIClass::SaveToPipe((INIClass *)&v55.ambientSoundController[1], (int)&v55.needsRedraw); /*0x769b70*/
  v55.? = (void*)&VectorCursor_TRect_int_VectorClass_TRect_int_vftable; /*0x769b79*/
  *(unsigned int *)v51.__tail_10 = (void*)&VectorClass_WorldDominationTour_Centroid_vftable; /*0x769b81*/
  Map_WorldDominationTour_43::ddtor((int)v51.__tail_10); /*0x769b89*/
  *(unsigned int *)v51.__pad_0 = (void*)&VectorClass_TRect_int_vftable; /*0x769b92*/
  MSEngine::ddtor(&v51); /*0x769b9a*/
  BufferIOFileClass::Destruct(&v56); /*0x769ba6*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v55.ambientSoundController[1]); /*0x769baf*/
  return BufferIOFileClass::Destruct((BufferIOFileClass *)&v55.needsRedraw); /*0x769bc0*/
}
}
// 0x76B7B0
namespace gamemd {
unsigned int * E4Recv_76B7B0::sub_76B7B0(unsigned int * a2)
{
  unsigned int *v2; // ebx
  int v4; // ebp
  int *v5; // eax
  unsigned int *v6; // ebx
  ComPtr *v7; // edi
  void *v8; // eax
  void *vtable2; // eax
  int v10; // edi

  v2 = a2; /*0x76b7b1*/
  if ( this == (ObjectClass *)a2 ) /*0x76b7bc*/
    return &this->AbstractClass; /*0x76b7bc*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 3))(this); /*0x76b7c4*/
  v4 = a2[2]; /*0x76b7c7*/
  *(void **)&this->M8 = (void *)v4; /*0x76b7cc*/
  if ( !v4 ) /*0x76b7cf*/
  {
    *(unsigned short *)&this->M4 = 0; /*0x76b855*/
    IDA_BYTE1(this->?) = 0; /*0x76b85c*/
    return &this->AbstractClass; /*0x76b860*/
  }
  v5 = (int *)RA2_OPNEW(8 * v4 + 4); /*0x76b7dd*/
  if ( v5 ) /*0x76b7e7*/
  {
    *v5 = v4; /*0x76b7e9*/
    v6 = v5 + 1; /*0x76b7eb*/
    v7 = (ComPtr *)(v5 + 1); /*0x76b7f1*/
    if ( v4 - 1 >= 0 ) /*0x76b7f5*/
    {
      do /*0x76b80b*/
      {
        ComPtr::Constructor(v7); /*0x76b7fc*/
        *(unsigned int *)v7->__pad_0 = (void*)&rc_ptr_WDTTerritory_vftable; /*0x76b801*/
        v7 = (ComPtr *)((char *)v7 + 8); /*0x76b807*/
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
  *(void **)&this->M4 = v8; /*0x76b819*/
  if ( !v8 ) /*0x76b81c*/
    return &this->AbstractClass; /*0x76b81c*/
  vtable2 = this->M8; /*0x76b81e*/
  v10 = 0; /*0x76b821*/
  IDA_BYTE1(this->?) = 1; /*0x76b825*/
  if ( (int)vtable2 <= 0 ) /*0x76b829*/
    return &this->AbstractClass; /*0x76b829*/
  do /*0x76b84a*/
  {
    ComPtr::Set((ComPtr *)((char *)this->? + 8 * v10), *(unsigned int *)(v2[1] + 8 * v10 + 4)); /*0x76b83f*/
    ++v10; /*0x76b847*/
  }
  while ( v10 < (int)this->M8 ); /*0x76b84a*/
  return &this->AbstractClass; /*0x76b84e*/
}
}
// 0x76F970
namespace gamemd {
SessionClass * * WorldDominationTour__Territory::Constructor(int aP1, unsigned int * a2, ReferenceCounted * aP3, const char ** a4, ReferenceCounted * aP5)
{
  unsigned int *v8; // edi
  unsigned int *v9; // ebx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char *v14; // eax
  wchar_t *StringCSF; // eax
  char **v16; // eax
  int *CoordPair; // eax
  int v19; // ecx
  int v20; // eax
  char **v21; // eax
  int *v22; // eax
  int v23; // ecx
  int v24; // eax
  int *v25; // eax
  int v26; // ecx
  int v27; // eax
  int *v28; // eax
  int v29; // ecx
  int v30; // eax
  void *v32; // [esp+10h] [ebp-14h] BYREF
  void *v33; // [esp+14h] [ebp-10h] BYREF
  void *v34; // [esp+18h] [ebp-Ch] BYREF
  int v35[2]; // [esp+1Ch] [ebp-8h] BYREF

  aP1 = aP1; /*0x76f975*/
  this->q004 = 0; /*0x76f982*/
  this->q008 = aP1; /*0x76f98b*/
  unknown_libname_74(&this->q0042); /*0x76f98e*/
  v8 = &this->q040; /*0x76f993*/
  this->q010 = 0; /*0x76f999*/
  this->q014 = 0; /*0x76f99b*/
  v9 = &this->q018; /*0x76f99e*/
  this->q018 = 0; /*0x76f9a1*/
  this->q01C = 0; /*0x76f9a7*/
  unknown_libname_73(&this->q00C2); /*0x76f9ae*/
  this->q024 = 0; /*0x76f9ba*/
  this->q028 = 0; /*0x76f9bd*/
  this->q02C = 0; /*0x76f9c0*/
  v10 = FormatStringInt((char **)v35, aP1, 2); /*0x76f9d6*/
  v11 = ConcatStringAlloc((char **)&v34, a4, v10); /*0x76f9e4*/
  v12 = String::Concat2((const char **)v11, (char **)&v33, aShp_0); /*0x76f9eb*/
  String::Reassign((char **)&this->q020, (const char **)v12); /*0x76f9f4*/
  DeleteAndZero(&v33); /*0x76f9fd*/
  DeleteAndZero(&v34); /*0x76fa06*/
  DeleteAndZero((void **)v35); /*0x76fa0f*/
  v13 = FormatStringInt((char **)&a4, aP1, 2); /*0x76fa1c*/
  ConcatStringAlloc((char **)&v32, aP5, v13); /*0x76fa2a*/
  DeleteAndZero((void **)&a4); /*0x76fa33*/
  v14 = String::GetOrEmpty((char **)&v32); /*0x76fa43*/
  StringCSF = GetStringCSF((wchar_t *)v14, 0, aDRa2mdpostWdtt, 39); /*0x76fa4c*/
  WideString::Assign_Alt((void **)&this->q00C, StringCSF); /*0x76fa55*/
  FromStringInt((char **)&aP1, g_DisplayWidth); /*0x76fa64*/
  v16 = ProcessStringAndCopy((char **)&a4, aTarget_0, (char **)&aP1); /*0x76fa78*/
  aP3 = aP3; /*0x76fa7d*/
  CoordPair = INIClass::GetCoordPair(a2, v35, aP3, v16, (unsigned int *)&this->ptr_10); /*0x76fa8c*/
  v19 = *CoordPair; /*0x76fa91*/
  v20 = CoordPair[1]; /*0x76fa93*/
  this->q010 = v19; /*0x76fa96*/
  this->q014 = v20; /*0x76fa9c*/
  DeleteAndZero((void **)&a4); /*0x76fa9f*/
  v21 = ProcessStringAndCopy((char **)&a4, aOrigin_0, (char **)&aP1); /*0x76fab3*/
  v22 = INIClass::GetCoordPair(a2, v35, aP3, v21, (unsigned int *)&this->ptr_18); /*0x76fac3*/
  v23 = *v22; /*0x76fac8*/
  v24 = v22[1]; /*0x76faca*/
  this->q018 = v23; /*0x76facd*/
  this->q01C = v24; /*0x76fad3*/
  DeleteAndZero((void **)&a4); /*0x76fad6*/
  if ( g_DisplayWidth > 800 ) /*0x76fae5*/
  {
    if ( !*v8 && !this->q014 ) /*0x76faf0*/
    {
      String::Assign((char **)&a4, aTarget800); /*0x76fb00*/
      v25 = INIClass::GetCoordPair(a2, v35, aP3, (char **)&a4, (unsigned int *)&this->ptr_10); /*0x76fb15*/
      v26 = *v25; /*0x76fb1a*/
      v27 = v25[1]; /*0x76fb1c*/
      *v8 = v26; /*0x76fb1f*/
      this->q014 = v27; /*0x76fb25*/
      DeleteAndZero((void **)&a4); /*0x76fb28*/
    }
    if ( !*v9 && !this->q01C ) /*0x76fb32*/
    {
      String::Assign((char **)&a4, aOrigin800); /*0x76fb42*/
      v28 = INIClass::GetCoordPair(a2, v35, aP3, (char **)&a4, (unsigned int *)&this->ptr_18); /*0x76fb57*/
      v29 = *v28; /*0x76fb5c*/
      v30 = v28[1]; /*0x76fb5e*/
      *v9 = v29; /*0x76fb61*/
      this->q01C = v30; /*0x76fb67*/
      DeleteAndZero((void **)&a4); /*0x76fb6a*/
    }
  }
  DeleteAndZero((void **)&aP1); /*0x76fb73*/
  DeleteAndZero(&v32); /*0x76fb7c*/
  return this; /*0x76fb83*/
}
}
// 0x762060
namespace gamemd {
void nullsub_46()
{
  ; /*0x762060*/
}
} // namespace gamemd

// 0x762AE0
namespace gamemd {
void nullsub_47()
{
  ; /*0x762ae0*/
}
} // namespace gamemd

// 0x763380
namespace gamemd {
void sub_763380()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76338c*/
  dbl_B725F0 = Math::Sqrt(v0 + v0); /*0x76339e*/
}
} // namespace gamemd

// 0x7633B0
namespace gamemd {
void sub_7633B0()
{
  dbl_B72660 = dbl_B725F0 / 60.0; /*0x7633bc*/
}
} // namespace gamemd

// 0x7633D0
namespace gamemd {
void sub_7633D0()
{
  dbl_B72640 = 1.0 / dbl_B72660; /*0x7633dc*/
}
} // namespace gamemd

// 0x7633F0
namespace gamemd {
void sub_7633F0()
{
  dbl_B72638 = 0.0174532925199433 * 45.0; /*0x7633fc*/
}
} // namespace gamemd

// 0x763410
namespace gamemd {
void sub_763410()
{
  dbl_B725F8 = 0.0174532925199433 * 60.0; /*0x76341c*/
}
} // namespace gamemd

// 0x763430
namespace gamemd {
void sub_763430()
{
  dbl_B725D0 = 0.0174532925199433 * 90.0; /*0x76343c*/
}
} // namespace gamemd

// 0x763450
namespace gamemd {
long long sub_763450()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B725D0 - dbl_B725F8); /*0x763462*/
  result = Math::RoundToInt(v0 * dbl_B725F0 * 0.5); /*0x763476*/
  dword_B72668 = result; /*0x76347b*/
  return result; /*0x763480*/
}
} // namespace gamemd

// 0x763490
namespace gamemd {
void sub_763490()
{
  dbl_B72600 = Math::ArcTan((double)dword_B72668 * 0.00390625); /*0x7634a7*/
}
} // namespace gamemd

// 0x7634C0
namespace gamemd {
void sub_7634C0()
{
  dbl_B72630 = Math::ArcTan((double)(2 * dword_B72668) / dbl_B725F0); /*0x7634e2*/
}
} // namespace gamemd

// 0x7634F0
namespace gamemd {
long long sub_7634F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72668) + 0.5); /*0x76350b*/
  dword_B72658 = result; /*0x763510*/
  return result; /*0x763516*/
}
} // namespace gamemd

// 0x763520
namespace gamemd {
int sub_763520()
{
  word_B725E8 = 0; /*0x763522*/
  word_B725EA = 0; /*0x763528*/
  return 0; /*0x76352e*/
}
} // namespace gamemd

// 0x763530
namespace gamemd {
int sub_763530()
{
  dword_B72620 = 0; /*0x763532*/
  dword_B72624 = 0; /*0x763537*/
  dword_B72628 = 0; /*0x76353c*/
  return 0; /*0x763541*/
}
} // namespace gamemd

// 0x763550
namespace gamemd {
int sub_763550()
{
  dword_B72650 = 0; /*0x763555*/
  dword_B72648 = 128; /*0x76355f*/
  dword_B7264C = 128; /*0x763564*/
  return 128; /*0x763569*/
}
} // namespace gamemd

// 0x763570
namespace gamemd {
int sub_763570()
{
  dword_B725D8 = 0; /*0x763572*/
  dword_B725DC = 0; /*0x763577*/
  dword_B725E0 = 0; /*0x76357c*/
  dword_B725E4 = 0; /*0x763581*/
  return 0; /*0x763586*/
}
} // namespace gamemd

// 0x763590
namespace gamemd {
int sub_763590()
{
  dword_B7260C = 0; /*0x763597*/
  dword_B72610 = 0; /*0x76359c*/
  byte_B72614 = 1; /*0x7635a1*/
  byte_B72615 = 0; /*0x7635a8*/
  dword_B72608 = (int)&DynamicVectorClass_WaypointPathClass___vftable; /*0x7635ad*/
  dword_B7261C = 10; /*0x7635b7*/
  dword_B72618 = 0; /*0x7635c1*/
  return atexit(sub_7635D0); /*0x7635cc*/
}
} // namespace gamemd

// 0x7635D0
namespace gamemd {
void sub_7635D0()
{
  dword_B72608 = (int)&VectorClass_WaypointPathClass___vftable; /*0x7635d8*/
  if ( dword_B7260C && byte_B72615 ) /*0x7635ec*/
  {
    RA2_OPDEL(dword_B7260C); /*0x7635ef*/
    dword_B7260C = 0; /*0x7635f7*/
  }
  byte_B72615 = 0; /*0x7635fd*/
  dword_B72610 = 0; /*0x763603*/
}
} // namespace gamemd

// 0x763700
namespace gamemd {
unsigned int * E4Recv_763700::sub_763700(unsigned int * a2)
{
  this->AbstractClass = (void *)*a2; /*0x76370b*/
  *(void **)&this->M4 = (void *)a2[1]; /*0x763710*/
  this->? = (void *)a2[2]; /*0x763717*/
  return &this->AbstractClass; /*0x763713*/
}
} // namespace gamemd

// 0x763720
namespace gamemd {
void nullsub_84()
{
  ; /*0x763720*/
}
} // namespace gamemd

// 0x764810
namespace gamemd {
int sub_764810()
{
  dword_B72678 = 0; /*0x764812*/
  dword_B7267C = 0; /*0x764817*/
  dword_B72680 = 0; /*0x76481c*/
  dword_B72684 = 0; /*0x764821*/
  return 0; /*0x764826*/
}
} // namespace gamemd

// 0x764830
namespace gamemd {
void sub_764830()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76483c*/
  dbl_B72690 = Math::Sqrt(v0 + v0); /*0x76484e*/
}
} // namespace gamemd

// 0x764860
namespace gamemd {
void sub_764860()
{
  dbl_B726E0 = dbl_B72690 / 60.0; /*0x76486c*/
}
} // namespace gamemd

// 0x764880
namespace gamemd {
void sub_764880()
{
  dbl_B726C8 = 1.0 / dbl_B726E0; /*0x76488c*/
}
} // namespace gamemd

// 0x7648A0
namespace gamemd {
void sub_7648A0()
{
  dbl_B726C0 = 0.0174532925199433 * 45.0; /*0x7648ac*/
}
} // namespace gamemd

// 0x7648C0
namespace gamemd {
void sub_7648C0()
{
  dbl_B72698 = 0.0174532925199433 * 60.0; /*0x7648cc*/
}
} // namespace gamemd

// 0x7648E0
namespace gamemd {
void sub_7648E0()
{
  dbl_B72670 = 0.0174532925199433 * 90.0; /*0x7648ec*/
}
} // namespace gamemd

// 0x764900
namespace gamemd {
long long sub_764900()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72670 - dbl_B72698); /*0x764912*/
  result = Math::RoundToInt(v0 * dbl_B72690 * 0.5); /*0x764926*/
  dword_B726E8 = result; /*0x76492b*/
  return result; /*0x764930*/
}
} // namespace gamemd

// 0x764940
namespace gamemd {
void sub_764940()
{
  dbl_B726A0 = Math::ArcTan((double)dword_B726E8 * 0.00390625); /*0x764957*/
}
} // namespace gamemd

// 0x764970
namespace gamemd {
void sub_764970()
{
  dbl_B726B8 = Math::ArcTan((double)(2 * dword_B726E8) / dbl_B72690); /*0x764992*/
}
} // namespace gamemd

// 0x7649A0
namespace gamemd {
long long sub_7649A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B726E8) + 0.5); /*0x7649bb*/
  dword_B726DC = result; /*0x7649c0*/
  return result; /*0x7649c6*/
}
} // namespace gamemd

// 0x7649D0
namespace gamemd {
int sub_7649D0()
{
  word_B72688 = 0; /*0x7649d2*/
  word_B7268A = 0; /*0x7649d8*/
  return 0; /*0x7649de*/
}
} // namespace gamemd

// 0x7649E0
namespace gamemd {
int sub_7649E0()
{
  dword_B726A8 = 0; /*0x7649e2*/
  dword_B726AC = 0; /*0x7649e7*/
  dword_B726B0 = 0; /*0x7649ec*/
  return 0; /*0x7649f1*/
}
} // namespace gamemd

// 0x764A00
namespace gamemd {
int sub_764A00()
{
  dword_B726D8 = 0; /*0x764a05*/
  dword_B726D0 = 128; /*0x764a0f*/
  dword_B726D4 = 128; /*0x764a14*/
  return 128; /*0x764a19*/
}
} // namespace gamemd

// 0x764A20
namespace gamemd {
AbstractClass * * ObjectClass::sub_764A20()
{
  int Int; // esi
  String v4; // [esp+8h] [ebp-9Ch] BYREF
  int v5; // [esp+10h] [ebp-94h]
  int v6; // [esp+14h] [ebp-90h]
  void **v7; // [esp+18h] [ebp-8Ch]
  LinkedList v8; // [esp+1Ch] [ebp-88h] BYREF
  GenericNode v9; // [esp+28h] [ebp-7Ch] BYREF
  int v10; // [esp+34h] [ebp-70h]
  int v11; // [esp+38h] [ebp-6Ch]
  int v12; // [esp+3Ch] [ebp-68h]
  char v13; // [esp+40h] [ebp-64h]
  int v14; // [esp+44h] [ebp-60h]
  int v15; // [esp+48h] [ebp-5Ch]
  BufferIOFile v16; // [esp+4Ch] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v16, aWdthistIni_0); /*0x764a33*/
  if ( (uint8_t)File::IsReady((BufferIOFileClass *)&v16, 0) ) /*0x764a3f*/
  {
    v5 = 0; /*0x764a50*/
    v6 = 0; /*0x764a54*/
    GenericNode::Constructor((GenericNode *)&v8); /*0x764a58*/
    GenericNode::Constructor(&v9); /*0x764a61*/
    LinkedList::Prepend(&v8, (int)&v9); /*0x764a77*/
    v7 = (void*)&List_INIClass_INISection___vftable; /*0x764a80*/
    v10 = 0; /*0x764a8e*/
    v11 = 0; /*0x764a92*/
    v12 = 0; /*0x764a96*/
    v13 = 0; /*0x764a9a*/
    v14 = 0; /*0x764a9e*/
    v15 = 0; /*0x764aa2*/
    *(void **)&v4.q4 = (void*)&INIClass_vftable; /*0x764aa6*/
    FileStraw::Open((FileStraw *)&v4.q4, (int)&v16, 0); /*0x764aae*/
    CCFileClass::Close((BufferIOFileClass *)&v16); /*0x764ab7*/
    String::Assign(&v4, g_INI_Key_CampaignID); /*0x764ac5*/
    Int = INIClass::ReadInt((bool *)&v4.q4, (char **)this, (char **)&v4, -1); /*0x764adf*/
    DeleteAndZero((ObjectClass *)&v4); /*0x764ae1*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v4.q4); /*0x764aea*/
    *(unsigned int *)v16.__pad_0 = &off_7E1668; /*0x764af3*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x764afb*/
    return Int; /*0x764b00*/
  }
  else
  {
    *(unsigned int *)v16.__pad_0 = &off_7E1668; /*0x764b0f*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x764b17*/
    return -1; /*0x764b1c*/
  }
}
} // namespace ra2

// 0x764FF0
namespace gamemd {
int E4Recv_764FF0::sub_764FF0(ScoreScreen * aP1)
{
  return *((unsigned int *)&this->attachedTag + aP1); /*0x764ff8*/
}
} // namespace gamemd

// 0x765580
namespace gamemd {
int sub_765580(unsigned int * a1)
{
  unsigned int v2[22]; // [esp+0h] [ebp-58h] BYREF

  BufferIOFile::Init(v2); /*0x765587*/
  CCFileClass::Reopen(v2, g_Str_File_WDTHist_ini, 1); /*0x765597*/
  if ( !File::IsReady(v2, 0) ) /*0x7655a2*/
  {
    FileClass::Close(v2); /*0x7655af*/
    CCFileClass::Close(v2); /*0x7655b8*/
    CCFileClass::Reopen(v2, g_Str_File_WDTHist_ini, 1); /*0x7655c8*/
  }
  FileStraw::Open(a1, (int)v2, 0); /*0x7655d8*/
  CCFileClass::Close(v2); /*0x7655e1*/
  v2[0] = (unsigned int)&off_7E1668; /*0x7655ea*/
  return BufferIOFileClass::Dtor(v2); /*0x7655f7*/
}
} // namespace gamemd

// 0x765D50
namespace gamemd {
int sub_765D50()
{
  dword_B726F8 = 0; /*0x765d52*/
  dword_B726FC = 0; /*0x765d57*/
  dword_B72700 = 0; /*0x765d5c*/
  dword_B72704 = 0; /*0x765d61*/
  return 0; /*0x765d66*/
}
} // namespace gamemd

// 0x765D70
namespace gamemd {
void sub_765D70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x765d7c*/
  dbl_B72710 = Math::Sqrt(v0 + v0); /*0x765d8e*/
}
} // namespace gamemd

// 0x765DA0
namespace gamemd {
void sub_765DA0()
{
  dbl_B72780 = dbl_B72710 / 60.0; /*0x765dac*/
}
} // namespace gamemd

// 0x765DC0
namespace gamemd {
void sub_765DC0()
{
  dbl_B72748 = 1.0 / dbl_B72780; /*0x765dcc*/
}
} // namespace gamemd

// 0x765DE0
namespace gamemd {
void sub_765DE0()
{
  dbl_B72740 = 0.0174532925199433 * 45.0; /*0x765dec*/
}
} // namespace gamemd

// 0x765E00
namespace gamemd {
void sub_765E00()
{
  dbl_B72718 = 0.0174532925199433 * 60.0; /*0x765e0c*/
}
} // namespace gamemd

// 0x765E20
namespace gamemd {
void sub_765E20()
{
  dbl_B726F0 = 0.0174532925199433 * 90.0; /*0x765e2c*/
}
} // namespace gamemd

// 0x765E40
namespace gamemd {
long long sub_765E40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B726F0 - dbl_B72718); /*0x765e52*/
  result = Math::RoundToInt(v0 * dbl_B72710 * 0.5); /*0x765e66*/
  dword_B72788 = result; /*0x765e6b*/
  return result; /*0x765e70*/
}
} // namespace gamemd

// 0x765E80
namespace gamemd {
void sub_765E80()
{
  dbl_B72720 = Math::ArcTan((double)dword_B72788 * 0.00390625); /*0x765e97*/
}
} // namespace gamemd

// 0x765EB0
namespace gamemd {
void sub_765EB0()
{
  dbl_B72738 = Math::ArcTan((double)(2 * dword_B72788) / dbl_B72710); /*0x765ed2*/
}
} // namespace gamemd

// 0x765EE0
namespace gamemd {
long long sub_765EE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72788) + 0.5); /*0x765efb*/
  dword_B72778 = result; /*0x765f00*/
  return result; /*0x765f06*/
}
} // namespace gamemd

// 0x765F10
namespace gamemd {
int sub_765F10()
{
  word_B72708 = 0; /*0x765f12*/
  word_B7270A = 0; /*0x765f18*/
  return 0; /*0x765f1e*/
}
} // namespace gamemd

// 0x765F20
namespace gamemd {
int sub_765F20()
{
  dword_B72728 = 0; /*0x765f22*/
  dword_B7272C = 0; /*0x765f27*/
  dword_B72730 = 0; /*0x765f2c*/
  return 0; /*0x765f31*/
}
} // namespace gamemd

// 0x765F40
namespace gamemd {
int sub_765F40()
{
  dword_B72758 = 0; /*0x765f45*/
  dword_B72750 = 128; /*0x765f4f*/
  dword_B72754 = 128; /*0x765f54*/
  return 128; /*0x765f59*/
}
} // namespace gamemd

// 0x766070
namespace gamemd {
int sub_766070()
{
  dword_B72764 = 0; /*0x766077*/
  dword_B72768 = 0; /*0x76607c*/
  byte_B7276C = 1; /*0x766081*/
  byte_B7276D = 0; /*0x766088*/
  stru_B72760 = (int)&DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption_vftable; /*0x76608d*/
  dword_B72774 = 10; /*0x766097*/
  dword_B72770 = 0; /*0x7660a1*/
  return atexit(sub_7660B0); /*0x7660ac*/
}
} // namespace gamemd

// 0x7660B0
namespace gamemd {
void sub_7660B0()
{
  stru_B72760 = (int)&VectorClass_rc_ptr_WorldDominationTour_GameOption_vftable; /*0x7660b9*/
  if ( dword_B72764 && byte_B7276D ) /*0x7660cd*/
  {
    if ( dword_B72764 ) /*0x7660d1*/
      (**(void (__thiscall ***)(int, int))dword_B72764)(dword_B72764, 3); /*0x7660d7*/
    dword_B72764 = 0; /*0x7660d9*/
  }
  byte_B7276D = 0; /*0x7660df*/
  dword_B72768 = 0; /*0x7660e5*/
}
} // namespace gamemd

// 0x7670F0
namespace gamemd {
int sub_7670F0()
{
  dword_B72798 = 0; /*0x7670f2*/
  dword_B7279C = 0; /*0x7670f7*/
  dword_B727A0 = 0; /*0x7670fc*/
  dword_B727A4 = 0; /*0x767101*/
  return 0; /*0x767106*/
}
} // namespace gamemd

// 0x767110
namespace gamemd {
void sub_767110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76711c*/
  dbl_B727B0 = Math::Sqrt(v0 + v0); /*0x76712e*/
}
} // namespace gamemd

// 0x767140
namespace gamemd {
void sub_767140()
{
  dbl_B72800 = dbl_B727B0 / 60.0; /*0x76714c*/
}
} // namespace gamemd

// 0x767160
namespace gamemd {
void sub_767160()
{
  dbl_B727E8 = 1.0 / dbl_B72800; /*0x76716c*/
}
} // namespace gamemd

// 0x767180
namespace gamemd {
void sub_767180()
{
  dbl_B727E0 = 0.0174532925199433 * 45.0; /*0x76718c*/
}
} // namespace gamemd

// 0x7671A0
namespace gamemd {
void sub_7671A0()
{
  dbl_B727B8 = 0.0174532925199433 * 60.0; /*0x7671ac*/
}
} // namespace gamemd

// 0x7671C0
namespace gamemd {
void sub_7671C0()
{
  dbl_B72790 = 0.0174532925199433 * 90.0; /*0x7671cc*/
}
} // namespace gamemd

// 0x7671E0
namespace gamemd {
long long sub_7671E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72790 - dbl_B727B8); /*0x7671f2*/
  result = Math::RoundToInt(v0 * dbl_B727B0 * 0.5); /*0x767206*/
  dword_B72808 = result; /*0x76720b*/
  return result; /*0x767210*/
}
} // namespace gamemd

// 0x767220
namespace gamemd {
void sub_767220()
{
  dbl_B727C0 = Math::ArcTan((double)dword_B72808 * 0.00390625); /*0x767237*/
}
} // namespace gamemd

// 0x767250
namespace gamemd {
void sub_767250()
{
  dbl_B727D8 = Math::ArcTan((double)(2 * dword_B72808) / dbl_B727B0); /*0x767272*/
}
} // namespace gamemd

// 0x767280
namespace gamemd {
long long sub_767280()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72808) + 0.5); /*0x76729b*/
  dword_B727FC = result; /*0x7672a0*/
  return result; /*0x7672a6*/
}
} // namespace gamemd

// 0x7672B0
namespace gamemd {
int sub_7672B0()
{
  word_B727A8 = 0; /*0x7672b2*/
  word_B727AA = 0; /*0x7672b8*/
  return 0; /*0x7672be*/
}
} // namespace gamemd

// 0x7672C0
namespace gamemd {
int sub_7672C0()
{
  dword_B727C8 = 0; /*0x7672c2*/
  dword_B727CC = 0; /*0x7672c7*/
  dword_B727D0 = 0; /*0x7672cc*/
  return 0; /*0x7672d1*/
}
} // namespace gamemd

// 0x7672E0
namespace gamemd {
int sub_7672E0()
{
  dword_B727F8 = 0; /*0x7672e5*/
  dword_B727F0 = 128; /*0x7672ef*/
  dword_B727F4 = 128; /*0x7672f4*/
  return 128; /*0x7672f9*/
}
} // namespace gamemd

// 0x767320
namespace gamemd {
wchar_t ** E4Recv_767320::sub_767320(wchar_t ** a2, int a3, const wchar_t ** a4)
{
  int v5; // eax
  char **v6; // eax
  const wchar_t **v7; // esi
  char *v8; // eax
  wchar_t **v9; // eax
  char *v11; // eax
  wchar_t *v12; // eax
  wchar_t *StringCSF; // [esp-8h] [ebp-10h]
  void *v14; // [esp+4h] [ebp-4h] BYREF

  v5 = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 5))(this, a3); /*0x76732d*/
  v6 = FromStringInt((char **)&v14, v5); /*0x767336*/
  ConcatStringAlloc((char **)&a3, (const char **)&this->?, v6); /*0x767343*/
  DeleteAndZero((ObjectClass *)&v14); /*0x76734c*/
  v7 = a4; /*0x767351*/
  if ( WideString::Length(a4) ) /*0x767357*/
  {
    WideString::Assign((wchar_t **)&a4, (wchar_t *)L", "); /*0x76736a*/
    v8 = String::GetOrEmpty((String *)&a3); /*0x76737a*/
    StringCSF = GetStringCSF((wchar_t *)v8, 0, g_Str_File_WDTGameOptions_cpp, 22); /*0x76738c*/
    v9 = ConcatWString((wchar_t **)&v14, v7, (const wchar_t **)&a4); /*0x767399*/
    WideString::AssignConcat((const wchar_t **)v9, a2, StringCSF); /*0x7673a0*/
    DeleteAndZero::Alt((DeleteAndZero *)&v14); /*0x7673a9*/
    DeleteAndZero::Alt((DeleteAndZero *)&a4); /*0x7673b2*/
  }
  else
  {
    v11 = String::GetOrEmpty((String *)&a3); /*0x7673d3*/
    v12 = GetStringCSF((wchar_t *)v11, 0, g_Str_File_WDTGameOptions_cpp, 25); /*0x7673dc*/
    WideString::Assign(a2, v12); /*0x7673e8*/
  }
  DeleteAndZero((ObjectClass *)&a3); /*0x7673bb*/
  return a2; /*0x7673c3*/
}
} // namespace gamemd

// 0x767460
namespace gamemd {
rc_ptr * ConstructorWDTFlagOption(rc_ptr_base * a1, int a2, void * a3, int a4, void * a5, ObjectClass * aP5)
{
  int v8; // ecx
  void *v9; // esi
  int v10; // ecx
  void *v11; // esi
  String v13; // [esp-10h] [ebp-1Ch] BYREF
  String v14; // [esp-8h] [ebp-14h] BYREF

  v9 = (void *)RA2_OPNEW(0x1Cu); /*0x76746e*/
  if ( v9 ) /*0x767475*/
  {
    *(unsigned int *)&v14.q4 = aP5; /*0x76747f*/
    *(unsigned int *)v14.__pad_0 = v8; /*0x767480*/
    String::AssignFromPtr(&v14, (const char **)&a5); /*0x767484*/
    *(unsigned int *)&v13.q4 = a4; /*0x767491*/
    *(unsigned int *)v13.__pad_0 = v10; /*0x767492*/
    String::AssignFromPtr(&v13, (const char **)&a3); /*0x767496*/
    v11 = ConstructorWDTFlagOption_Create( /*0x7674a3*/
            v9,
            a2,
            *(void **)v13.__pad_0,
            *(int *)&v13.q4,
            *(void **)v14.__pad_0,
            *(int *)&v14.q4);
  }
  else
  {
    v11 = 0; /*0x7674a7*/
  }
  ComPtr::Constructor((ComPtr *)a1); /*0x7674ab*/
  *(unsigned int *)a1 = (void*)&rc_ptr_WorldDominationTour_FlagGameOption_vftable; /*0x7674b2*/
  ComPtr::Set((ComPtr *)a1, (int)v11); /*0x7674b9*/
  DeleteAndZero((ObjectClass *)&a3); /*0x7674c2*/
  DeleteAndZero((ObjectClass *)&a5); /*0x7674cb*/
  return a1; /*0x7674d2*/
}
} // namespace gamemd

// 0x767600
namespace gamemd {
int sub_767600(int a1)
{
  return 0; /*0x767602*/
}
} // namespace gamemd

// 0x7678F0
namespace gamemd {
int sub_7678F0()
{
  dword_B72818 = 0; /*0x7678f2*/
  dword_B7281C = 0; /*0x7678f7*/
  dword_B72820 = 0; /*0x7678fc*/
  dword_B72824 = 0; /*0x767901*/
  return 0; /*0x767906*/
}
} // namespace gamemd

// 0x767910
namespace gamemd {
void sub_767910()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76791c*/
  dbl_B72830 = Math::Sqrt(v0 + v0); /*0x76792e*/
}
} // namespace gamemd

// 0x767940
namespace gamemd {
void sub_767940()
{
  dbl_B72880 = dbl_B72830 / 60.0; /*0x76794c*/
}
} // namespace gamemd

// 0x767960
namespace gamemd {
void sub_767960()
{
  dbl_B72868 = 1.0 / dbl_B72880; /*0x76796c*/
}
} // namespace gamemd

// 0x767980
namespace gamemd {
void sub_767980()
{
  dbl_B72860 = 0.0174532925199433 * 45.0; /*0x76798c*/
}
} // namespace gamemd

// 0x7679A0
namespace gamemd {
void sub_7679A0()
{
  dbl_B72838 = 0.0174532925199433 * 60.0; /*0x7679ac*/
}
} // namespace gamemd

// 0x7679C0
namespace gamemd {
void sub_7679C0()
{
  dbl_B72810 = 0.0174532925199433 * 90.0; /*0x7679cc*/
}
} // namespace gamemd

// 0x7679E0
namespace gamemd {
long long sub_7679E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72810 - dbl_B72838); /*0x7679f2*/
  result = Math::RoundToInt(v0 * dbl_B72830 * 0.5); /*0x767a06*/
  dword_B72888 = result; /*0x767a0b*/
  return result; /*0x767a10*/
}
} // namespace gamemd

// 0x767A20
namespace gamemd {
void sub_767A20()
{
  dbl_B72840 = Math::ArcTan((double)dword_B72888 * 0.00390625); /*0x767a37*/
}
} // namespace gamemd

// 0x767A50
namespace gamemd {
void sub_767A50()
{
  dbl_B72858 = Math::ArcTan((double)(2 * dword_B72888) / dbl_B72830); /*0x767a72*/
}
} // namespace gamemd

// 0x767A80
namespace gamemd {
long long sub_767A80()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72888) + 0.5); /*0x767a9b*/
  dword_B7287C = result; /*0x767aa0*/
  return result; /*0x767aa6*/
}
} // namespace gamemd

// 0x767AB0
namespace gamemd {
int sub_767AB0()
{
  word_B72828 = 0; /*0x767ab2*/
  word_B7282A = 0; /*0x767ab8*/
  return 0; /*0x767abe*/
}
} // namespace gamemd

// 0x767AC0
namespace gamemd {
int sub_767AC0()
{
  dword_B72848 = 0; /*0x767ac2*/
  dword_B7284C = 0; /*0x767ac7*/
  dword_B72850 = 0; /*0x767acc*/
  return 0; /*0x767ad1*/
}
} // namespace gamemd

// 0x767AE0
namespace gamemd {
int sub_767AE0()
{
  dword_B72878 = 0; /*0x767ae5*/
  dword_B72870 = 128; /*0x767aef*/
  dword_B72874 = 128; /*0x767af4*/
  return 128; /*0x767af9*/
}
} // namespace gamemd

// 0x767BB0
namespace gamemd {
int WDT_ActivateScreen(int a1, int a2)
{
  ActivateScreenWDT_Create(a2); /*0x767bbf*/
  return a1; /*0x767bc6*/
}
} // namespace gamemd

// 0x767C80
namespace gamemd {
int sub_767C80()
{
  dword_B72898 = 0; /*0x767c82*/
  dword_B7289C = 0; /*0x767c87*/
  dword_B728A0 = 0; /*0x767c8c*/
  dword_B728A4 = 0; /*0x767c91*/
  return 0; /*0x767c96*/
}
} // namespace gamemd

// 0x767CA0
namespace gamemd {
void sub_767CA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x767cac*/
  dbl_B728B0 = Math::Sqrt(v0 + v0); /*0x767cbe*/
}
} // namespace gamemd

// 0x767CD0
namespace gamemd {
void sub_767CD0()
{
  dbl_B72900 = dbl_B728B0 / 60.0; /*0x767cdc*/
}
} // namespace gamemd

// 0x767CF0
namespace gamemd {
void sub_767CF0()
{
  dbl_B728E8 = 1.0 / dbl_B72900; /*0x767cfc*/
}
} // namespace gamemd

// 0x767D10
namespace gamemd {
void sub_767D10()
{
  dbl_B728E0 = 0.0174532925199433 * 45.0; /*0x767d1c*/
}
} // namespace gamemd

// 0x767D30
namespace gamemd {
void sub_767D30()
{
  dbl_B728B8 = 0.0174532925199433 * 60.0; /*0x767d3c*/
}
} // namespace gamemd

// 0x767D50
namespace gamemd {
void sub_767D50()
{
  dbl_B72890 = 0.0174532925199433 * 90.0; /*0x767d5c*/
}
} // namespace gamemd

// 0x767D70
namespace gamemd {
long long sub_767D70()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72890 - dbl_B728B8); /*0x767d82*/
  result = Math::RoundToInt(v0 * dbl_B728B0 * 0.5); /*0x767d96*/
  dword_B72908 = result; /*0x767d9b*/
  return result; /*0x767da0*/
}
} // namespace gamemd

// 0x767DB0
namespace gamemd {
void sub_767DB0()
{
  dbl_B728C0 = Math::ArcTan((double)dword_B72908 * 0.00390625); /*0x767dc7*/
}
} // namespace gamemd

// 0x767DE0
namespace gamemd {
void sub_767DE0()
{
  dbl_B728D8 = Math::ArcTan((double)(2 * dword_B72908) / dbl_B728B0); /*0x767e02*/
}
} // namespace gamemd

// 0x767E10
namespace gamemd {
long long sub_767E10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72908) + 0.5); /*0x767e2b*/
  dword_B728FC = result; /*0x767e30*/
  return result; /*0x767e36*/
}
} // namespace gamemd

// 0x767E40
namespace gamemd {
int sub_767E40()
{
  word_B728A8 = 0; /*0x767e42*/
  word_B728AA = 0; /*0x767e48*/
  return 0; /*0x767e4e*/
}
} // namespace gamemd

// 0x767E50
namespace gamemd {
int sub_767E50()
{
  dword_B728C8 = 0; /*0x767e52*/
  dword_B728CC = 0; /*0x767e57*/
  dword_B728D0 = 0; /*0x767e5c*/
  return 0; /*0x767e61*/
}
} // namespace gamemd

// 0x767E70
namespace gamemd {
int sub_767E70()
{
  dword_B728F8 = 0; /*0x767e75*/
  dword_B728F0 = 128; /*0x767e7f*/
  dword_B728F4 = 128; /*0x767e84*/
  return 128; /*0x767e89*/
}
} // namespace gamemd

// 0x767E90
namespace gamemd {
unsigned int * E4Recv_767E90::sub_767E90()
{
  this->MSFrameAnim_field_0x4 = 0; /*0x767e99*/
  this->MSFrameAnim_field_0x8 = 0; /*0x767e9c*/
  IDA_LOBYTE(this->MSFrameAnim_field_0xC) = 0; /*0x767e9f*/
  this->MSFrameAnim_field_0x10 = (void *)Timer::GetTicks(); /*0x767ea7*/
  this->MSFrameAnim_field_0x18 = 0; /*0x767eaa*/
  *(unsigned int *)this->__pad_0 = (void*)&MSFrameAnim_vftable; /*0x767ead*/
  return this; /*0x767eb5*/
}
} // namespace gamemd

// 0x769490
namespace gamemd {
unsigned int * E4Recv_769490::sub_769490(unsigned int * a2)
{
  unsigned int *result; // eax
  char *vtable1; // edx
  char *v4; // ecx

  result = &this->AbstractClass; /*0x769490*/
  vtable1 = (char *)this->M4; /*0x76949d*/
  this->AbstractClass = (char *)this->AbstractClass + *a2; /*0x7694a0*/
  v4 = (char *)this->? + 1; /*0x7694aa*/
  result[1] = &vtable1[a2[1]]; /*0x7694ab*/
  result[2] = v4; /*0x7694ae*/
  return result; /*0x7694b1*/
}
} // namespace gamemd

// 0x769C40
namespace gamemd {
Iostream_init * E4Recv_769C40::__0Iostream_init_QAE_XZ_9()
{
  return this; /*0x769c42*/
}
} // namespace gamemd

// 0x76A8A0
namespace gamemd {
void sub_76A8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76a8ac*/
  dbl_B72930 = Math::Sqrt(v0 + v0); /*0x76a8be*/
}
} // namespace gamemd

// 0x76A8D0
namespace gamemd {
void sub_76A8D0()
{
  dbl_B72980 = dbl_B72930 / 60.0; /*0x76a8dc*/
}
} // namespace gamemd

// 0x76A8F0
namespace gamemd {
void sub_76A8F0()
{
  dbl_B72968 = 1.0 / dbl_B72980; /*0x76a8fc*/
}
} // namespace gamemd

// 0x76A910
namespace gamemd {
void sub_76A910()
{
  dbl_B72960 = 0.0174532925199433 * 45.0; /*0x76a91c*/
}
} // namespace gamemd

// 0x76A930
namespace gamemd {
void sub_76A930()
{
  dbl_B72938 = 0.0174532925199433 * 60.0; /*0x76a93c*/
}
} // namespace gamemd

// 0x76A950
namespace gamemd {
void sub_76A950()
{
  dbl_B72910 = 0.0174532925199433 * 90.0; /*0x76a95c*/
}
} // namespace gamemd

// 0x76A970
namespace gamemd {
long long sub_76A970()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72910 - dbl_B72938); /*0x76a982*/
  result = Math::RoundToInt(v0 * dbl_B72930 * 0.5); /*0x76a996*/
  dword_B72988 = result; /*0x76a99b*/
  return result; /*0x76a9a0*/
}
} // namespace gamemd

// 0x76A9B0
namespace gamemd {
void sub_76A9B0()
{
  dbl_B72940 = Math::ArcTan((double)dword_B72988 * 0.00390625); /*0x76a9c7*/
}
} // namespace gamemd

// 0x76A9E0
namespace gamemd {
void sub_76A9E0()
{
  dbl_B72958 = Math::ArcTan((double)(2 * dword_B72988) / dbl_B72930); /*0x76aa02*/
}
} // namespace gamemd

// 0x76AA10
namespace gamemd {
long long sub_76AA10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72988) + 0.5); /*0x76aa2b*/
  dword_B7297C = result; /*0x76aa30*/
  return result; /*0x76aa36*/
}
} // namespace gamemd

// 0x76AA40
namespace gamemd {
int sub_76AA40()
{
  word_B72928 = 0; /*0x76aa42*/
  word_B7292A = 0; /*0x76aa48*/
  return 0; /*0x76aa4e*/
}
} // namespace gamemd

// 0x76AA50
namespace gamemd {
int sub_76AA50()
{
  dword_B72948 = 0; /*0x76aa52*/
  dword_B7294C = 0; /*0x76aa57*/
  dword_B72950 = 0; /*0x76aa5c*/
  return 0; /*0x76aa61*/
}
} // namespace gamemd

// 0x76AA70
namespace gamemd {
int sub_76AA70()
{
  dword_B72978 = 0; /*0x76aa75*/
  dword_B72970 = 128; /*0x76aa7f*/
  dword_B72974 = 128; /*0x76aa84*/
  return 128; /*0x76aa89*/
}
} // namespace gamemd

// 0x76AA90
namespace gamemd {
int sub_76AA90()
{
  dword_B72918 = 0; /*0x76aa92*/
  dword_B7291C = 0; /*0x76aa97*/
  dword_B72920 = 0; /*0x76aa9c*/
  dword_B72924 = 0; /*0x76aaa1*/
  return 0; /*0x76aaa6*/
}
} // namespace gamemd

// 0x76AB90
namespace gamemd {
void E4Recv_76AB90::sub_76AB90()
{
  this->m_0 = (int)&off_7F7220; /*0x76ab90*/
  ReferenceCounted::Constructor(); /*0x76ab96*/
}
} // namespace gamemd

// 0x76ABE0
namespace gamemd {
unsigned int * E4Recv_76ABE0::sub_76ABE0()
{
  char *v2; // esi
  int v3; // edx
  void (__thiscall ***v8)(unsigned int, int); // ecx
  bool v5; // zf
  void **v7; // [esp+Ch] [ebp-18h] BYREF
  void (__thiscall ***v8)(unsigned int, int); // [esp+10h] [ebp-14h]
  int v9; // [esp+14h] [ebp-10h]
  char v10; // [esp+18h] [ebp-Ch]
  char v11; // [esp+19h] [ebp-Bh]
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = (char *)this + 44; /*0x76abef*/
  this->WDTState_field_0x04 = 0; /*0x76abf2*/
  v13 = 10; /*0x76abf7*/
  this->u32_40 = 10; /*0x76abfb*/
  this->u32_38 = 1; /*0x76ac02*/
  v10 = 1; /*0x76ac05*/
  this->u32_30 = 0; /*0x76ac09*/
  this->u32_34 = 0; /*0x76ac0c*/
  this->u32_39 = 0; /*0x76ac0f*/
  this->u32_2C = (void*)&DynamicVectorClass_rc_ptr_WDTTerritory_vftable; /*0x76ac12*/
  this->u32_3C = 0; /*0x76ac18*/
  *(unsigned int *)this->__pad_0 = (void*)&WDTState_vftable; /*0x76ac1e*/
  this->u32_14 = 0; /*0x76ac24*/
  this->u32_18 = 0; /*0x76ac27*/
  this->u32_20 = 0; /*0x76ac2a*/
  this->u32_24 = 0; /*0x76ac2d*/
  this->u32_28 = 1000000; /*0x76ac30*/
  v8 = 0; /*0x76ac37*/
  v9 = 0; /*0x76ac3b*/
  v11 = 0; /*0x76ac3f*/
  v7 = (void*)&DynamicVectorClass_rc_ptr_WDTTerritory_vftable; /*0x76ac43*/
  v12 = 0; /*0x76ac4b*/
  sub_76B7B0((ObjectClass *)((char *)&this->q0044), &v7); /*0x76ac4f*/
  v13 = v13; /*0x76ac58*/
  *((unsigned int *)v2 + 4) = v12; /*0x76ac5c*/
  v8 = v8; /*0x76ac5f*/
  v5 = v8 == 0; /*0x76ac63*/
  *((unsigned int *)v2 + 5) = v13; /*0x76ac65*/
  v7 = (void*)&VectorClass_rc_ptr_WDTTerritory_vftable; /*0x76ac68*/
  if ( !v5 && v11 ) /*0x76ac76*/
    (**v8)(v8, 3); /*0x76ac7c*/
  this->u32_44 = 0; /*0x76ac7e*/
  return this; /*0x76ac83*/
}
} // namespace gamemd

// 0x76BC80
namespace gamemd {
int sub_76BC80()
{
  dword_B72998 = 0; /*0x76bc82*/
  dword_B7299C = 0; /*0x76bc87*/
  dword_B729A0 = 0; /*0x76bc8c*/
  dword_B729A4 = 0; /*0x76bc91*/
  return 0; /*0x76bc96*/
}
} // namespace gamemd

// 0x76BCA0
namespace gamemd {
void sub_76BCA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76bcac*/
  dbl_B729B0 = Math::Sqrt(v0 + v0); /*0x76bcbe*/
}
} // namespace gamemd

// 0x76BCD0
namespace gamemd {
void sub_76BCD0()
{
  dbl_B72A00 = dbl_B729B0 / 60.0; /*0x76bcdc*/
}
} // namespace gamemd

// 0x76BCF0
namespace gamemd {
void sub_76BCF0()
{
  dbl_B729E8 = 1.0 / dbl_B72A00; /*0x76bcfc*/
}
} // namespace gamemd

// 0x76BD10
namespace gamemd {
void sub_76BD10()
{
  dbl_B729E0 = 0.0174532925199433 * 45.0; /*0x76bd1c*/
}
} // namespace gamemd

// 0x76BD30
namespace gamemd {
void sub_76BD30()
{
  dbl_B729B8 = 0.0174532925199433 * 60.0; /*0x76bd3c*/
}
} // namespace gamemd

// 0x76BD50
namespace gamemd {
void sub_76BD50()
{
  dbl_B72990 = 0.0174532925199433 * 90.0; /*0x76bd5c*/
}
} // namespace gamemd

// 0x76BD70
namespace gamemd {
long long sub_76BD70()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72990 - dbl_B729B8); /*0x76bd82*/
  result = Math::RoundToInt(v0 * dbl_B729B0 * 0.5); /*0x76bd96*/
  dword_B72A08 = result; /*0x76bd9b*/
  return result; /*0x76bda0*/
}
} // namespace gamemd

// 0x76BDB0
namespace gamemd {
void sub_76BDB0()
{
  dbl_B729C0 = Math::ArcTan((double)dword_B72A08 * 0.00390625); /*0x76bdc7*/
}
} // namespace gamemd

// 0x76BDE0
namespace gamemd {
void sub_76BDE0()
{
  dbl_B729D8 = Math::ArcTan((double)(2 * dword_B72A08) / dbl_B729B0); /*0x76be02*/
}
} // namespace gamemd

// 0x76BE10
namespace gamemd {
long long sub_76BE10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72A08) + 0.5); /*0x76be2b*/
  dword_B729FC = result; /*0x76be30*/
  return result; /*0x76be36*/
}
} // namespace gamemd

// 0x76BE40
namespace gamemd {
int sub_76BE40()
{
  word_B729A8 = 0; /*0x76be42*/
  word_B729AA = 0; /*0x76be48*/
  return 0; /*0x76be4e*/
}
} // namespace gamemd

// 0x76BE50
namespace gamemd {
int sub_76BE50()
{
  dword_B729C8 = 0; /*0x76be52*/
  dword_B729CC = 0; /*0x76be57*/
  dword_B729D0 = 0; /*0x76be5c*/
  return 0; /*0x76be61*/
}
} // namespace gamemd

// 0x76BE70
namespace gamemd {
int sub_76BE70()
{
  dword_B729F8 = 0; /*0x76be75*/
  dword_B729F0 = 128; /*0x76be7f*/
  dword_B729F4 = 128; /*0x76be84*/
  return 128; /*0x76be89*/
}
} // namespace gamemd

// 0x76C080
namespace gamemd {
int sub_76C080()
{
  dword_B72A18 = 0; /*0x76c082*/
  dword_B72A1C = 0; /*0x76c087*/
  dword_B72A20 = 0; /*0x76c08c*/
  dword_B72A24 = 0; /*0x76c091*/
  return 0; /*0x76c096*/
}
} // namespace gamemd

// 0x76C0A0
namespace gamemd {
void sub_76C0A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76c0ac*/
  dbl_B72A30 = Math::Sqrt(v0 + v0); /*0x76c0be*/
}
} // namespace gamemd

// 0x76C0D0
namespace gamemd {
void sub_76C0D0()
{
  dbl_B72A80 = dbl_B72A30 / 60.0; /*0x76c0dc*/
}
} // namespace gamemd

// 0x76C0F0
namespace gamemd {
void sub_76C0F0()
{
  dbl_B72A68 = 1.0 / dbl_B72A80; /*0x76c0fc*/
}
} // namespace gamemd

// 0x76C110
namespace gamemd {
void sub_76C110()
{
  dbl_B72A60 = 0.0174532925199433 * 45.0; /*0x76c11c*/
}
} // namespace gamemd

// 0x76C130
namespace gamemd {
void sub_76C130()
{
  dbl_B72A38 = 0.0174532925199433 * 60.0; /*0x76c13c*/
}
} // namespace gamemd

// 0x76C150
namespace gamemd {
void sub_76C150()
{
  dbl_B72A10 = 0.0174532925199433 * 90.0; /*0x76c15c*/
}
} // namespace gamemd

// 0x76C170
namespace gamemd {
long long sub_76C170()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72A10 - dbl_B72A38); /*0x76c182*/
  result = Math::RoundToInt(v0 * dbl_B72A30 * 0.5); /*0x76c196*/
  dword_B72A88 = result; /*0x76c19b*/
  return result; /*0x76c1a0*/
}
} // namespace gamemd

// 0x76C1B0
namespace gamemd {
void sub_76C1B0()
{
  dbl_B72A40 = Math::ArcTan((double)dword_B72A88 * 0.00390625); /*0x76c1c7*/
}
} // namespace gamemd

// 0x76C1E0
namespace gamemd {
void sub_76C1E0()
{
  dbl_B72A58 = Math::ArcTan((double)(2 * dword_B72A88) / dbl_B72A30); /*0x76c202*/
}
} // namespace gamemd

// 0x76C210
namespace gamemd {
long long sub_76C210()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72A88) + 0.5); /*0x76c22b*/
  dword_B72A7C = result; /*0x76c230*/
  return result; /*0x76c236*/
}
} // namespace gamemd

// 0x76C240
namespace gamemd {
int sub_76C240()
{
  word_B72A28 = 0; /*0x76c242*/
  word_B72A2A = 0; /*0x76c248*/
  return 0; /*0x76c24e*/
}
} // namespace gamemd

// 0x76C250
namespace gamemd {
int sub_76C250()
{
  dword_B72A48 = 0; /*0x76c252*/
  dword_B72A4C = 0; /*0x76c257*/
  dword_B72A50 = 0; /*0x76c25c*/
  return 0; /*0x76c261*/
}
} // namespace gamemd

// 0x76C270
namespace gamemd {
int sub_76C270()
{
  dword_B72A78 = 0; /*0x76c275*/
  dword_B72A70 = 128; /*0x76c27f*/
  dword_B72A74 = 128; /*0x76c284*/
  return 128; /*0x76c289*/
}
} // namespace gamemd

// 0x76D3A0
namespace gamemd {
bool E4Recv_76D3A0::sub_76D3A0(unsigned int * a2)
{
  int v3; // eax
  int v4; // eax
  bool v5; // bl
  int v7[2]; // [esp+8h] [ebp-14h] BYREF
  rc_ptr v8[4]; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v10 = 0; /*0x76d3ac*/
  v3 = Surface::PixelToIndex((int *)this->currentTargets[1], a2); /*0x76d3ba*/
  if ( v3 != this->currentTargets[2] ) /*0x76d3c5*/
  {
    this->currentTargets[2] = v3; /*0x76d3cb*/
    v4 = ComPtr::DestroyWrapper((int)v8, v3); /*0x76d3d9*/
    TerritorySelectWDT(v4); /*0x76d3e1*/
    ComPtr::Territory_Dtor((ComPtr *)v8); /*0x76d3ea*/
  }
  FindTerritoryWOL(v8, this->currentTargets[1] + 44, this->currentTargets[2]); /*0x76d403*/
  ComPtr::Constructor((ComPtr *)v7); /*0x76d40c*/
  v7[0] = (int)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76d415*/
  ComPtr::Set((ComPtr *)v7, v9); /*0x76d422*/
  *(unsigned int *)v8 = (void*)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76d42b*/
  ComPtr::Release((ComPtr *)v8); /*0x76d433*/
  v5 = TerritorySelectWDT(this, (int)v7); /*0x76d448*/
  v7[0] = (int)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76d44a*/
  ComPtr::Release((ComPtr *)v7); /*0x76d452*/
  return v5; /*0x76d459*/
}
} // namespace gamemd

// 0x76D470
namespace gamemd {
unsigned int * E4Recv_76D470::sub_76D470(unsigned int * a2)
{
  unsigned int *result; // eax
  rc_ptr v4[4]; // [esp+4h] [ebp-8h] BYREF

  result = (unsigned int *)Surface::PixelToIndex((int *)this->currentTargets[1], a2); /*0x76d481*/
  if ( result != (unsigned int *)this->currentTargets[2] ) /*0x76d48c*/
  {
    this->currentTargets[2] = (int)result; /*0x76d48e*/
    FindTerritoryWOL(v4, this->currentTargets[1] + 44, (int)result); /*0x76d4a2*/
    TerritorySelectWDT((int)v4); /*0x76d4ae*/
    *(unsigned int *)v4 = (void*)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76d4b7*/
    return ComPtr::Release((ComPtr *)v4); /*0x76d4bf*/
  }
  return result; /*0x76d4c4*/
}
} // namespace gamemd

// 0x76DED0
namespace gamemd {
int E4Recv_76DED0::sub_76DED0()
{
  int v2; // eax
  int result; // eax
  int (__thiscall ***v4)(unsigned int, int); // eax
  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0; /*0x76deda*/
  v2 = this->currentTargets[1]; /*0x76dee2*/
  *(unsigned int *)v5.__pad_0 = (void*)&VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory_vftable; /*0x76dee8*/
  *(unsigned int *)&v5.m_1[3] = v2 + 44; /*0x76def3*/
  for ( result = VectorCursor::HasNext(&v5); /*0x76deff*/
        (unsigned char)result;
        result = (*(int (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(unsigned int *)v5.__pad_0 + 4))(&v5) )
  {
    v4 = (int (__thiscall ***)(unsigned int, int))WDTObject::GetAndClearFlag(*(WDTObject **)(*(unsigned int *)(*(unsigned int *)&v5.m_1[3] /*0x76df13*/
                                                                                                 + 4)
                                                                                     + 8 * v6
                                                                                     + 4));
    if ( v4 ) /*0x76df1a*/
      Session::RemoveTeam(v4); /*0x76df1f*/
    (*(void (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(unsigned int *)v5.__pad_0 + 8))(&v5); /*0x76df2c*/
  }
  return result; /*0x76df3e*/
}
} // namespace gamemd

// 0x76DF50
namespace gamemd {
int E4Recv_76DF50::sub_76DF50()
{
  int v2; // eax
  int result; // eax
  int (__thiscall ***v4)(unsigned int, int); // eax
  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0; /*0x76df5a*/
  v2 = this->currentTargets[1]; /*0x76df62*/
  *(unsigned int *)v5.__pad_0 = (void*)&VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory_vftable; /*0x76df68*/
  *(unsigned int *)&v5.m_1[3] = v2 + 44; /*0x76df73*/
  for ( result = VectorCursor::HasNext(&v5); /*0x76df7f*/
        (unsigned char)result;
        result = (*(int (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(unsigned int *)v5.__pad_0 + 4))(&v5) )
  {
    v4 = (int (__thiscall ***)(unsigned int, int))WDTObject::GetAndClearFlag(*(WDTObject **)(*(unsigned int *)(*(unsigned int *)&v5.m_1[3] /*0x76df93*/
                                                                                                 + 4)
                                                                                     + 8 * v6
                                                                                     + 4));
    if ( v4 ) /*0x76df9a*/
      Session::RemoveTeam(v4); /*0x76df9f*/
    (*(void (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(unsigned int *)v5.__pad_0 + 8))(&v5); /*0x76dfac*/
  }
  return result; /*0x76dfbe*/
}
} // namespace gamemd

// 0x76DFD0
namespace gamemd {
void E4Recv_76DFD0::sub_76DFD0()
{
  void *v2; // [esp+4h] [ebp-10h] BYREF
  void **v3; // [esp+8h] [ebp-Ch] BYREF
  char *v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  String::Assign((char **)&v2, aMapenter); /*0x76dfdf*/
  if ( String::NotEquals((const char **)&v2, 0) ) /*0x76dfea*/
  {
    v4 = this->u32_1250; /*0x76e001*/
    v5 = 0; /*0x76e005*/
    if ( Vector::HasCapacity(&v3) ) /*0x76e015*/
    {
      do /*0x76e04e*/
      {
        if ( !String::Compare((const char **)&v2, *(const char ***)(*((unsigned int *)v4 + 1) + 4 * v5)) ) /*0x76e032*/
          break; /*0x76e039*/
        ((void (__thiscall *)(void ***))v3[2])(&v3); /*0x76e043*/
      }
      while ( ((uint8_t (__thiscall *)(void ***))v3[1])(&v3) ); /*0x76e04e*/
    }
    if ( ((uint8_t (__thiscall *)(void ***))v3[1])(&v3) ) /*0x76e05d*/
      nullsub_24(*(unsigned int *)(*((unsigned int *)v4 + 1) + 4 * v5)); /*0x76e072*/
  }
  DeleteAndZero(&v2); /*0x76e07b*/
}
} // namespace gamemd

// 0x76E090
namespace gamemd {
unsigned int * E4Recv_76E090::sub_76E090()
{
  ObjectClass *v3; // [esp+0h] [ebp-1Ch]
  String v4; // [esp+4h] [ebp-18h] BYREF
  _VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry v5; // [esp+10h] [ebp-Ch] BYREF
  int v6; // [esp+18h] [ebp-4h]

  String::Assign(&v4, aMapleave); /*0x76e09f*/
  if ( (uint8_t)String::NotEquals(&v4, 0) ) /*0x76e0aa*/
  {
    *(unsigned int *)&v5.m_1[3] = &this->turretRotateSoundController[3]; /*0x76e0c1*/
    v6 = 0; /*0x76e0c5*/
    *(unsigned int *)v5.__pad_0 = (void*)&VectorCursor_MSSfxEntry___DynamicVectorClass_MSSfxEntry___vftable; /*0x76e0cd*/
    if ( Vector::HasCapacity(&v5) ) /*0x76e0d5*/
    {
      do /*0x76e10e*/
      {
        if ( !(uint8_t)String::Compare(&v4, *(const char ***)(*(unsigned int *)(*(unsigned int *)&v5.m_1[3] + 4) + 4 * v6)) ) /*0x76e0f2*/
          break; /*0x76e0f9*/
        (*(void (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(unsigned int *)v5.__pad_0 /*0x76e103*/
                                                                                                 + 8))(&v5);
      }
      while ( (*(uint8_t (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(unsigned int *)v5.__pad_0 + 4))(&v5) ); /*0x76e10e*/
    }
    if ( (*(uint8_t (__thiscall **)(_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *))(*(unsigned int *)v5.__pad_0 + 4))(&v5) ) /*0x76e11d*/
      nullsub_24(v3); /*0x76e132*/
  }
  DeleteAndZero((ObjectClass *)&v4); /*0x76e13b*/
  this->currentTargets[2] = -1; /*0x76e144*/
  ComPtr::Constructor((ComPtr *)&v4.q4); /*0x76e14e*/
  *(void **)&v4.q4 = (void*)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76e15a*/
  TerritorySelectWDT((int)&v4.q4); /*0x76e162*/
  *(void **)&v4.q4 = (void*)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76e16b*/
  return ComPtr::Release((ComPtr *)&v4.q4); /*0x76e178*/
}
} // namespace gamemd

// 0x76F260
namespace gamemd {
int sub_76F260()
{
  dword_B72A98 = 0; /*0x76f262*/
  dword_B72A9C = 0; /*0x76f267*/
  dword_B72AA0 = 0; /*0x76f26c*/
  dword_B72AA4 = 0; /*0x76f271*/
  return 0; /*0x76f276*/
}
} // namespace gamemd

// 0x76F280
namespace gamemd {
void sub_76F280()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76f28c*/
  dbl_B72AB0 = Math::Sqrt(v0 + v0); /*0x76f29e*/
}
} // namespace gamemd

// 0x76F2B0
namespace gamemd {
void sub_76F2B0()
{
  dbl_B72B00 = dbl_B72AB0 / 60.0; /*0x76f2bc*/
}
} // namespace gamemd

// 0x76F2D0
namespace gamemd {
void sub_76F2D0()
{
  dbl_B72AE8 = 1.0 / dbl_B72B00; /*0x76f2dc*/
}
} // namespace gamemd

// 0x76F2F0
namespace gamemd {
void sub_76F2F0()
{
  dbl_B72AE0 = 0.0174532925199433 * 45.0; /*0x76f2fc*/
}
} // namespace gamemd

// 0x76F310
namespace gamemd {
void sub_76F310()
{
  dbl_B72AB8 = 0.0174532925199433 * 60.0; /*0x76f31c*/
}
} // namespace gamemd

// 0x76F330
namespace gamemd {
void sub_76F330()
{
  dbl_B72A90 = 0.0174532925199433 * 90.0; /*0x76f33c*/
}
} // namespace gamemd

// 0x76F350
namespace gamemd {
long long sub_76F350()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72A90 - dbl_B72AB8); /*0x76f362*/
  result = Math::RoundToInt(v0 * dbl_B72AB0 * 0.5); /*0x76f376*/
  dword_B72B08 = result; /*0x76f37b*/
  return result; /*0x76f380*/
}
} // namespace gamemd

// 0x76F390
namespace gamemd {
void sub_76F390()
{
  dbl_B72AC0 = Math::ArcTan((double)dword_B72B08 * 0.00390625); /*0x76f3a7*/
}
} // namespace gamemd

// 0x76F3C0
namespace gamemd {
void sub_76F3C0()
{
  dbl_B72AD8 = Math::ArcTan((double)(2 * dword_B72B08) / dbl_B72AB0); /*0x76f3e2*/
}
} // namespace gamemd

// 0x76F3F0
namespace gamemd {
long long sub_76F3F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72B08) + 0.5); /*0x76f40b*/
  dword_B72AFC = result; /*0x76f410*/
  return result; /*0x76f416*/
}
} // namespace gamemd

// 0x76F420
namespace gamemd {
int sub_76F420()
{
  word_B72AA8 = 0; /*0x76f422*/
  word_B72AAA = 0; /*0x76f428*/
  return 0; /*0x76f42e*/
}
} // namespace gamemd

// 0x76F430
namespace gamemd {
int sub_76F430()
{
  dword_B72AC8 = 0; /*0x76f432*/
  dword_B72ACC = 0; /*0x76f437*/
  dword_B72AD0 = 0; /*0x76f43c*/
  return 0; /*0x76f441*/
}
} // namespace gamemd

// 0x76F450
namespace gamemd {
int sub_76F450()
{
  dword_B72AF8 = 0; /*0x76f455*/
  dword_B72AF0 = 128; /*0x76f45f*/
  dword_B72AF4 = 128; /*0x76f464*/
  return 128; /*0x76f469*/
}
} // namespace gamemd

// 0x76F700
namespace gamemd {
int sub_76F700()
{
  dword_B72B18 = 0; /*0x76f702*/
  dword_B72B1C = 0; /*0x76f707*/
  dword_B72B20 = 0; /*0x76f70c*/
  dword_B72B24 = 0; /*0x76f711*/
  return 0; /*0x76f716*/
}
} // namespace gamemd

// 0x76F720
namespace gamemd {
void sub_76F720()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x76f72c*/
  dbl_B72B30 = Math::Sqrt(v0 + v0); /*0x76f73e*/
}
} // namespace gamemd

// 0x76F750
namespace gamemd {
void sub_76F750()
{
  dbl_B72B80 = dbl_B72B30 / 60.0; /*0x76f75c*/
}
} // namespace gamemd

// 0x76F770
namespace gamemd {
void sub_76F770()
{
  dbl_B72B68 = 1.0 / dbl_B72B80; /*0x76f77c*/
}
} // namespace gamemd

// 0x76F790
namespace gamemd {
void sub_76F790()
{
  dbl_B72B60 = 0.0174532925199433 * 45.0; /*0x76f79c*/
}
} // namespace gamemd

// 0x76F7B0
namespace gamemd {
void sub_76F7B0()
{
  dbl_B72B38 = 0.0174532925199433 * 60.0; /*0x76f7bc*/
}
} // namespace gamemd

// 0x76F7D0
namespace gamemd {
void sub_76F7D0()
{
  dbl_B72B10 = 0.0174532925199433 * 90.0; /*0x76f7dc*/
}
} // namespace gamemd

// 0x76F7F0
namespace gamemd {
long long sub_76F7F0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72B10 - dbl_B72B38); /*0x76f802*/
  result = Math::RoundToInt(v0 * dbl_B72B30 * 0.5); /*0x76f816*/
  dword_B72B88 = result; /*0x76f81b*/
  return result; /*0x76f820*/
}
} // namespace gamemd

// 0x76F830
namespace gamemd {
void sub_76F830()
{
  dbl_B72B40 = Math::ArcTan((double)dword_B72B88 * 0.00390625); /*0x76f847*/
}
} // namespace gamemd

// 0x76F860
namespace gamemd {
void sub_76F860()
{
  dbl_B72B58 = Math::ArcTan((double)(2 * dword_B72B88) / dbl_B72B30); /*0x76f882*/
}
} // namespace gamemd

// 0x76F890
namespace gamemd {
long long sub_76F890()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72B88) + 0.5); /*0x76f8ab*/
  dword_B72B7C = result; /*0x76f8b0*/
  return result; /*0x76f8b6*/
}
} // namespace gamemd

// 0x76F8C0
namespace gamemd {
int sub_76F8C0()
{
  word_B72B28 = 0; /*0x76f8c2*/
  word_B72B2A = 0; /*0x76f8c8*/
  return 0; /*0x76f8ce*/
}
} // namespace gamemd

// 0x76F8D0
namespace gamemd {
int sub_76F8D0()
{
  dword_B72B48 = 0; /*0x76f8d2*/
  dword_B72B4C = 0; /*0x76f8d7*/
  dword_B72B50 = 0; /*0x76f8dc*/
  return 0; /*0x76f8e1*/
}
} // namespace gamemd

// 0x76F8F0
namespace gamemd {
int sub_76F8F0()
{
  dword_B72B78 = 0; /*0x76f8f5*/
  dword_B72B70 = 128; /*0x76f8ff*/
  dword_B72B74 = 128; /*0x76f904*/
  return 128; /*0x76f909*/
}
} // namespace gamemd

// 0x76FF40
namespace gamemd {
rc_ptr * FindTerritoryWOL(ObjectClass * aP0, int a2, int a3)
{
  char v4; // bl
  unsigned int *v5; // edi
  unsigned int v7[2]; // [esp+Ch] [ebp-18h] BYREF
  _VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour v8; // [esp+14h] [ebp-10h] BYREF
  int v9; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+20h] [ebp-4h]

  v4 = 0; /*0x76ff47*/
  v10 = 0; /*0x76ff4e*/
  *(unsigned int *)&v8.m_1[3] = a2; /*0x76ff52*/
  v9 = 0; /*0x76ff56*/
  *(unsigned int *)v8.__pad_0 = (void*)&VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory_vftable; /*0x76ff5a*/
  if ( VectorCursor::HasNext(&v8) ) /*0x76ff62*/
  {
    do /*0x76ff9a*/
    {
      if ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v8.m_1[3] + 4) + 8 * v9 + 4) + 8) == a3 ) /*0x76ff85*/
        break; /*0x76ff85*/
      (*(void (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(unsigned int *)v8.__pad_0 + 8))(&v8); /*0x76ff8f*/
    }
    while ( (*(uint8_t (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(unsigned int *)v8.__pad_0 + 4))(&v8) ); /*0x76ff9a*/
  }
  if ( (*(uint8_t (__thiscall **)(_VectorCursor_V_rc_ptr_VTerritory_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(unsigned int *)v8.__pad_0 + 4))(&v8) ) /*0x76ffa9*/
  {
    v5 = (unsigned int *)(*(unsigned int *)(*(unsigned int *)&v8.m_1[3] + 4) + 8 * v9); /*0x76ffbb*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)v7); /*0x76ffc4*/
    v7[0] = (void*)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76ffc9*/
    v4 = 1; /*0x76ffd1*/
    v5 = v7; /*0x76ffd6*/
  }
  ComPtr::Constructor((ComPtr *)aP0); /*0x76ffdc*/
  *(unsigned int *)aP0 = (void*)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76ffe1*/
  ComPtr::Set((ComPtr *)aP0, v5[1]); /*0x76ffed*/
  if ( (v4 & 1) != 0 ) /*0x76fff5*/
  {
    v7[0] = (void*)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76fffb*/
    ComPtr::Release((ComPtr *)v7); /*0x770003*/
  }
  return aP0; /*0x77000a*/
}
} // namespace gamemd

// 0x765b50
unsigned int* Campaign_WorldDominationTour_24_::ddtor()
{
  --this->q020; /*0x765b52*/
  return this; /*0x765b55*/
}
// 0x76f190
unsigned int* VectorCursor::ddtor()
{
  --this->q008; /*0x76f192*/
  return this; /*0x76f195*/
}
// 0x76f170
unsigned int* Count::ddtor()
{
  --this->q008; /*0x76f172*/
  return this; /*0x76f175*/
}
// 0x766fb0
unsigned int* Conflict_WorldDominationTour_26::ddtor()
{
  --this->q008; /*0x766fb2*/
  return this; /*0x766fb5*/
}
// 0x76a5b0
unsigned int* Map_WorldDominationTour_38::ddtor()
{
  --this->q008; /*0x76a5b2*/
  return this; /*0x76a5b5*/
}