// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/IPXConnClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"

// 0x540DC0
namespace gamemd {
int SessionClass::initLAN(int a2, wchar_t * Source, unsigned int * a4)
{
  void *v6; // eax
  void *v7; // eax
  int v8; // ecx

  if ( !this->MPGameMode ) /*0x540dc3*/
    return 0; /*0x540dca*/
  if ( this->ptr_44 == 7 ) /*0x540dd4*/
    return 0; /*0x540dd6*/
  v6 = RA2_OPNEW(0xB8u); /*0x540de1*/
  if ( v6 ) /*0x540deb*/
    v7 = IPXConnClass::constructor( /*0x540e0e*/
           v6,
           this->SessionClass_field_14,
           this->SessionClass_field_14,
           this->SessionClass_field_10,
           this->u32_20,
           a4,
           a2,
           Source,
           0);
  else
    v7 = 0; /*0x540e15*/
  *(unsigned int *)(&this->SessionClass_field_10 * this->ptr_44 + 40) = v7; /*0x540e1a*/
  v8 = *(unsigned int *)(&this->SessionClass_field_10 * this->ptr_44 + 40); /*0x540e21*/
  if ( !v8 ) /*0x540e27*/
    return 0; /*0x540e29*/
  (*(void (__thiscall **)(int))(*(unsigned int *)v8 + 4))(v8); /*0x540e31*/
  *(unsigned int *)(*(unsigned int *)(&this->SessionClass_field_10 * this->ptr_44 + 40) + 40) = this->q058; /*0x540e3e*/
  *(unsigned int *)(*(unsigned int *)(&this->SessionClass_field_10 * this->ptr_44 + 40) + 44) = this->q05C; /*0x540e4b*/
  *(unsigned int *)(*(unsigned int *)(&this->SessionClass_field_10 * (this->ptr_44)++ + 40) + 48) = this->q060; /*0x540e58*/
  return 1; /*0x540dcc*/
}
} // namespace gamemd
// 0x540E70
namespace gamemd {
int SessionClass::initInternet()
{
  int result; // eax
  IPXConnClass *v3; // ebp
  unsigned int *v4; // ebx
  int v5; // edi
  char *v6; // eax

  if ( !IDA_LOBYTE(this->MPGameMode[0]) ) /*0x540e73*/
    return 0; /*0x540e7a*/
  v3 = (IPXConnClass *)RA2_OPNEW(0xB8u); /*0x540e89*/
  if ( v3 ) /*0x540e90*/
  {
    v4 = (unsigned int *)((char *)(dword_A8DA78));
    v5 = (char *)(this->unknown_14[0]);
    v6 = (char *)(CharToWideString(aMulticast));
    result = (int)IPXConnClass::constructor( /*0x540ebf*/
                    v3,
                    v5,
                    v5,
                    this->unknown_10[0],
                    this->Config[2],
                    (unsigned int *)(*v4 + 40),
                    -1,
                    (wchar_t *)v6,
                    0);
  }
  else
  {
    result = 0; /*0x540ec8*/
  }
  *(unsigned int *)this->__pad_50 = result; /*0x540ecc*/
  if ( result ) /*0x540ed0*/
  {
    (*(void (__thiscall **)(int))(*(unsigned int *)result + 4))(result); /*0x540ed8*/
    *(unsigned int *)(*(unsigned int *)this->__pad_50 + 40) = *(unsigned int *)&this->__pad_50[8]; /*0x540ee1*/
    *(unsigned int *)(*(unsigned int *)this->__pad_50 + 44) = *(unsigned int *)&this->__pad_50[12]; /*0x540eea*/
    *(unsigned int *)(*(unsigned int *)this->__pad_50 + 48) = *(unsigned int *)&this->__pad_50[16]; /*0x540ef8*/
    return 1; /*0x540ef3*/
  }
  return result; /*0x540e7c*/
}
} // namespace gamemd
// 0x552CC0
namespace gamemd {
unsigned int * SessionClass::Load()
{
  unsigned int *v2; // eax
  unsigned int *result; // eax
  unsigned int *v4; // eax
  void *PlayerSide; // eax
  int v6; // esi
  char *v7; // ecx

  if ( this->SessionClass_field_08
    || ((Debug::Log_0(aLoadmdMix), (v2 = RA2_OPNEW(0x28u)) == 0)
      ? (result = 0)
      : (result = MixFileClass::FromFile(v2, aLoadmdMix_0, (int)dword_886980)),
        (this->SessionClass_field_08 = result) != 0) )
  {
    if ( this->MPGameMode
      || ((v4 = RA2_OPNEW(0x28u)) == 0
        ? (result = 0)
        : (result = MixFileClass::FromFile(v4, aLoadMix, (int)dword_886980)),
          (this->MPGameMode = result) != 0) )
    {
      if ( g_GameMode_Current[0] ) /*0x552d36*/
      {
        PlayerSide = (void *)SessionClass::GetPlayerSide(*(unsigned int *)Game_PlayerInfoArray); /*0x552d51*/
        return PaletteManager::Load(PlayerSide); /*0x552d58*/
      }
      else
      {
        v6 = *((unsigned int *)g_ScenarioClass_Instance + 3374); /*0x72b3e8*/
        if ( !dword_B0FB80 ) /*0x72b3ea*/
          LoadPaletteSimple(off_844BAC, &dword_B0FB7C, &dword_B0FB80); /*0x72b3fc*/
        if ( !dword_B0FB88 ) /*0x72b408*/
        {
          if ( v6 ) /*0x72b40c*/
          {
            v7 = (char *)(off_844BB4[0]);
            if ( v6 != 1 ) /*0x72b433*/
              v7 = off_844BB8; /*0x72b435*/
            LoadPaletteSimple(v7, &dword_B0FB84, &dword_B0FB88); /*0x72b43b*/
          }
          else
          {
            LoadPaletteSimple(off_844BB0[0], &dword_B0FB84, &dword_B0FB88); /*0x72b41e*/
          }
        }
        result = (unsigned int *)dword_B0FB90; /*0x72b440*/
        if ( !dword_B0FB90 ) /*0x72b448*/
          return (unsigned int *)LoadPaletteSimple(off_844BBC, &dword_B0FB8C, &dword_B0FB90); /*0x72b45a*/
      }
    }
  }
  return result; /*0x552d5d*/
}
} // namespace gamemd
// 0x5ADF20
namespace gamemd {
int SessionClass::LoadGameSession(ObjectClass * aP1, CellStruct * aP2)
{
  int v4; // esi
  unsigned int *v6; // edi
  bool v7; // bl
  int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  int v11; // esi
  char *v12; // eax
  void *v13; // [esp+10h] [ebp-8h] BYREF
  void *v14; // [esp+14h] [ebp-4h] BYREF

  if ( !aP1 || String::Equals_Alt(aP2, 0) ) /*0x5adf37*/
    return 0; /*0x5adf3e*/
  v4 = *((unsigned int *)dword_8B4124 + *(unsigned int *)(*((unsigned int *)g_SuperWeaponTypeCount + *(unsigned int *)(aP1 + 7284)) + 188)); /*0x5adf5b*/
  if ( !v4 ) /*0x5adf60*/
  {
    Debug::Log(); /*0x5adf67*/
    return 0; /*0x5adf78*/
  }
  Debug::Log(); /*0x5adf84*/
  String::Assign((char **)&v14, (const char *)(v4 + 36)); /*0x5adf91*/
  v6 = &this->u32_50; /*0x5adf96*/
  v7 = SessionClass::LoadMapSelection(v6, (char **)&v14) == 0; /*0x5adfab*/
  DeleteAndZero(&v14); /*0x5adfae*/
  if ( v7 || (v8 = CampaignClass::Check(v6, aP1->qD68)) == 0 ) /*0x5adfea*/
  {
    SessionClass::Destruct(v6); /*0x5adfb9*/
    Debug::Log(); /*0x5adfc3*/
    return 0; /*0x5adfd4*/
  }
  ScenarioClass::SetFileName((char *)aP1, &g_INI_DefaultBuffer); /*0x5ae013*/
  v9 = 0; /*0x5ae01b*/
  if ( *(int *)(v8 + 100) <= 0 ) /*0x5ae01f*/
    goto LABEL_17; /*0x5ae01f*/
  while ( 1 ) /*0x5ae025*/
  {
    v10 = *(unsigned int *)(v8 + 88); /*0x5ae025*/
    if ( *(unsigned int *)(v10 + 4 * v9) ) /*0x5ae028*/
      break; /*0x5ae028*/
  LABEL_14:
    if ( ++v9 >= *(unsigned int *)(v8 + 100) ) /*0x5ae094*/
      goto LABEL_17; /*0x5ae094*/
  }
  v11 = StringTable::Find(v6, *(const char ***)(v10 + 4 * v9)); /*0x5ae037*/
  String::AssignFromPtr((char **)&v14, (const char **)(v11 + 4)); /*0x5ae041*/
  String::ToLower((const char **)&v14); /*0x5ae04a*/
  String::AssignFromPtr((char **)&v13, aP2); /*0x5ae058*/
  String::ToLower((const char **)&v13); /*0x5ae061*/
  if ( !v11 || !String::Compare((const char **)&v14, (const char **)&v13) ) /*0x5ae073*/
  {
    DeleteAndZero(&v13); /*0x5ae080*/
    DeleteAndZero(&v14); /*0x5ae089*/
    goto LABEL_14; /*0x5ae089*/
  }
  v12 = String::GetOrEmpty_Alt((char **)(v11 + 4)); /*0x5ae09b*/
  ScenarioClass::SetFileName((char *)aP1, v12); /*0x5ae0a7*/
  aP1->qD68 = Network_Load(v6, v11); /*0x5ae0b8*/
  DeleteAndZero(&v13); /*0x5ae0bf*/
  DeleteAndZero(&v14); /*0x5ae0c8*/
  LABEL_17:
  SessionClass::Destruct(v6); /*0x5ae0cd*/
  return strlen((const char *)(aP1 + 4700)) != 0; /*0x5adf6f*/
}
} // namespace gamemd
// 0x5CEEF0
namespace gamemd {
AbstractClass * * SessionClass::LoadMapSelection(char ** a1)
{
  unsigned int *v2; // ebp
  char *v3; // esi
  int v4; // edi
  char **v5; // eax
  bool v6; // bl
  char **v7; // eax
  char **v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  bool v14; // bl
  bool v15; // bl
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // eax
  bool v23; // bl
  int v24; // ebp
  char **v25; // eax
  bool v26; // bl
  void *v27; // eax
  int v28; // edi
  int v29; // ecx
  unsigned int *v30; // esi
  int v31; // eax
  int v32; // eax
  int v33; // edx
  bool v34; // bl
  char **StringByIndex; // eax
  bool v36; // bl
  void *v37; // eax
  void **v38; // edi
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // edx
  int v43; // [esp+18h] [ebp-C4h] BYREF
  void *v44; // [esp+1Ch] [ebp-C0h] BYREF
  char *v45; // [esp+20h] [ebp-BCh] BYREF
  void *v46; // [esp+24h] [ebp-B8h] BYREF
  void *v48; // [esp+2Ch] [ebp-B0h] BYREF
  void *v49[3]; // [esp+30h] [ebp-ACh] BYREF
  unsigned int v50[10]; // [esp+3Ch] [ebp-A0h] BYREF
  char v51; // [esp+64h] [ebp-78h]
  int v52; // [esp+68h] [ebp-74h]
  int v53; // [esp+6Ch] [ebp-70h]
  unsigned int v54[22]; // [esp+70h] [ebp-6Ch] BYREF
  unsigned char v55[12]; // [esp+C8h] [ebp-14h] BYREF
  int v56; // [esp+D4h] [ebp-8h]

  v2 = (unsigned int *)(this);
  CCFileClass::Construct3((int)v54); /*0x5cef04*/
  v3 = 0; /*0x5cef09*/
  v49[1] = 0; /*0x5cef0f*/
  v49[2] = 0; /*0x5cef13*/
  GenericList::Constructor(v50); /*0x5cef17*/
  memset(&v50[7], 0, 12); /*0x5cef28*/
  v51 = 0; /*0x5cef34*/
  v52 = 0; /*0x5cef39*/
  v53 = 0; /*0x5cef3d*/
  unknown_libname_73(&v46); /*0x5cef49*/
  unknown_libname_73(&v44); /*0x5cef52*/
  SessionClass::Destruct(v2); /*0x5cef59*/
  (*(void (__thiscall **)(unsigned int *, char *))(v54[0] + 8))(v54, aMapselmdIni); /*0x5cef6b*/
  (*(void (__thiscall **)(unsigned int *, int))(v54[0] + 28))(v54, 1); /*0x5cef78*/
  if ( !FileStraw::Open(v49, (int)v54, 0) ) /*0x5cef85*/
    goto LABEL_17; /*0x5cef85*/
  v4 = 1; /*0x5cef98*/
  while ( 1 ) /*0x5cefa2*/
  {
    String::Assign((char **)&v43, 0); /*0x5cefa2*/
    v5 = FromStringInt(&v45, v4); /*0x5cefb7*/
    v6 = INIClass::ReadString(v49, a1, v5, (char **)&v43, (int)&v44) == 0; /*0x5cefd4*/
    DeleteAndZero((void **)&v45); /*0x5cefd7*/
    DeleteAndZero((void **)&v43); /*0x5cefe0*/
    if ( v6 ) /*0x5cefe7*/
      break; /*0x5cefe7*/
    v7 = (char *)operator new(0x6Cu); /*0x5cefef*/
    if ( !v7 ) /*0x5ceff9*/
      goto LABEL_17; /*0x5ceff9*/
    v8 = MSChoiceClass::LoadFromINI(v7, v49, (const char **)&v44); /*0x5cf00c*/
    if ( !v8 ) /*0x5cf010*/
      goto LABEL_17; /*0x5cf010*/
    v9 = v2->SessionClass_field_08; /*0x5cf012*/
    if ( v2->SessionClass_field_10 < v9 /*0x5cf038*/
      || (*((unsigned char *)v2 + 13) || !v9)
      && (v10 = v2->SessionClass_field_14, v10 > 0)
      && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*v2 + 8))(v2, v9 + v10, 0) )
    {
      v11 = (unsigned int)(v2->SessionClass_field_10);
      v12 = (unsigned int)(v2->MPGameMode);
      v2->SessionClass_field_10 = (unsigned int)(v11 + 1);
      *(unsigned int *)(v12 + 4 * v11) = v8; /*0x5cf04b*/
    }
    if ( ++v4 > 100 ) /*0x5cf052*/
    {
      v3 = 0; /*0x5cf071*/
      break; /*0x5cf071*/
    }
    v3 = 0; /*0x5cf054*/
  }
  if ( v2->SessionClass_field_10 ) /*0x5cf073*/
  {
    String::Assign(&v45, 0); /*0x5cf0e0*/
    String::Assign((char **)&v43, aAnims); /*0x5cf0ee*/
    v14 = (int)INIClass::ReadString(v49, a1, (char **)&v43, &v45, (int)&v46) > 0; /*0x5cf119*/
    DeleteAndZero((void **)&v43); /*0x5cf11c*/
    DeleteAndZero((void **)&v45); /*0x5cf125*/
    if ( v14 ) /*0x5cf12c*/
    {
      String::Assign((char **)&v43, 0); /*0x5cf137*/
      String::Assign(&v45, aTextrect); /*0x5cf145*/
      v15 = (int)INIClass::ReadString(v49, (char **)&v46, &v45, (char **)&v43, (int)&v44) > 0; /*0x5cf16d*/
      DeleteAndZero((void **)&v45); /*0x5cf170*/
      DeleteAndZero((void **)&v43); /*0x5cf179*/
      if ( v15 ) /*0x5cf180*/
      {
        unknown_libname_73(&v43); /*0x5cf18a*/
        v16 = String::Tokenize((const char **)&v44, 0, Delimiter, (void **)&v43); /*0x5cf1a7*/
        if ( String::Length((const char **)&v43) ) /*0x5cf1a9*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&v43); /*0x5cf1b6*/
          v2->Config = v17; /*0x5cf1bb*/
        }
        v18 = String::Tokenize((const char **)&v44, v16, Delimiter, (void **)&v43); /*0x5cf1d6*/
        if ( String::Length((const char **)&v43) ) /*0x5cf1d8*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&v43); /*0x5cf1e5*/
          v2->u32_1C = v19; /*0x5cf1ea*/
        }
        v20 = String::Tokenize((const char **)&v44, v18, Delimiter, (void **)&v43); /*0x5cf205*/
        if ( String::Length((const char **)&v43) ) /*0x5cf207*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&v43); /*0x5cf214*/
          v2->u32_20 = v21; /*0x5cf219*/
        }
        String::Tokenize((const char **)&v44, v20, Delimiter, (void **)&v43); /*0x5cf22b*/
        if ( String::Length((const char **)&v43) ) /*0x5cf234*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&v43); /*0x5cf241*/
          v2->q024 = v22; /*0x5cf246*/
        }
        DeleteAndZero((void **)&v43); /*0x5cf24d*/
      }
      String::Assign((char **)&v43, 0); /*0x5cf259*/
      String::Assign(&v45, g_INI_Key_Palette); /*0x5cf267*/
      v23 = (int)INIClass::ReadString(v49, (char **)&v46, &v45, (char **)&v43, (int)&v44) > 0; /*0x5cf28f*/
      DeleteAndZero((void **)&v45); /*0x5cf292*/
      DeleteAndZero((void **)&v43); /*0x5cf29b*/
      if ( v23 ) /*0x5cf2a2*/
        String::Reassign((char **)v2 + 10, (const char **)&v44); /*0x5cf2ac*/
      v24 = 1; /*0x5cf2b1*/
      do /*0x5cf36a*/
      {
        String::Assign(&v45, 0); /*0x5cf2bc*/
        v25 = FromStringInt((char **)&v43, v24); /*0x5cf2d1*/
        v26 = INIClass::ReadString(v49, (char **)&v46, v25, &v45, (int)&v44) == 0; /*0x5cf2eb*/
        DeleteAndZero((void **)&v43); /*0x5cf2ee*/
        DeleteAndZero((void **)&v45); /*0x5cf2f7*/
        if ( v26 ) /*0x5cf2fe*/
          break; /*0x5cf2fe*/
        v27 = operator new(0x10u); /*0x5cf306*/
        if ( !v27 ) /*0x5cf310*/
          goto LABEL_17; /*0x5cf310*/
        v28 = String::SplitComma((int)v27, (const char **)&v44); /*0x5cf31e*/
        if ( !v28 ) /*0x5cf322*/
          goto LABEL_17; /*0x5cf322*/
        v29 = this->UniqueID; /*0x5cf328*/
        v30 = &this->q02C; /*0x5cf32e*/
        if ( this->u32_3C >= v29 ) /*0x5cf333*/
        {
          if ( !this->u8_39 && v29 ) /*0x5cf33e*/
            continue; /*0x5cf33e*/
          v31 = this->q040; /*0x5cf340*/
          if ( v31 <= 0 /*0x5cf350*/
            || !(*(uint8_t (__thiscall **)(char *, int, unsigned int))(*v30 + 8))((char *)&this->q02C, v29 + v31, 0) )
          {
            continue; /*0x5cf350*/
          }
        }
        v32 = v30[4]; /*0x5cf357*/
        v33 = v30[1]; /*0x5cf35a*/
        v30[4] = v32 + 1; /*0x5cf360*/
        *(unsigned int *)(v33 + 4 * v32) = v28; /*0x5cf363*/
        ++v24; /*0x5cf366*/
      }
      while ( v24 <= 100 ); /*0x5cf36a*/
      v2 = this; /*0x5cf3dd*/
      v3 = 0; /*0x5cf3e1*/
    }
    if ( Audio::IsSoundEnabled() ) /*0x5cf3e3*/
    {
      unknown_libname_73(&v43); /*0x5cf3f4*/
      String::Assign(&v45, 0); /*0x5cf3fe*/
      String::Assign((char **)&this, aSounds); /*0x5cf40c*/
      v34 = (int)INIClass::ReadString(v49, a1, (char **)&this, &v45, (int)&v46) > 0; /*0x5cf437*/
      DeleteAndZero((void **)&this); /*0x5cf43a*/
      DeleteAndZero((void **)&v45); /*0x5cf443*/
      if ( v34 ) /*0x5cf44a*/
      {
        v45 = 0; /*0x5cf459*/
        if ( INIClass::FindKey((char *)v49, (char **)&v46) > 0 ) /*0x5cf464*/
        {
          do /*0x5cf585*/
          {
            StringByIndex = INIClass::GetStringByIndexEx(v49, (char **)&v48, (char **)&v46, (int)v3); /*0x5cf479*/
            String::Reassign((char **)&v43, (const char **)StringByIndex); /*0x5cf483*/
            DeleteAndZero(&v48); /*0x5cf48c*/
            if ( String::NotEquals((const char **)&v43, 0) ) /*0x5cf497*/
            {
              String::Assign((char **)&this, 0); /*0x5cf4aa*/
              v36 = (int)INIClass::ReadString(v49, (char **)&v46, (char **)&v43, (char **)&this, (int)&v44) > 0; /*0x5cf4d2*/
              DeleteAndZero((void **)&this); /*0x5cf4d5*/
              if ( v36 ) /*0x5cf4dc*/
              {
                v37 = operator new(0x10u); /*0x5cf4e4*/
                if ( v37 ) /*0x5cf4ee*/
                  v38 = (void **)Audio::ParseVolume((int)v37, (const char **)&v43, (const char **)&v44); /*0x5cf501*/
                else
                  v38 = 0; /*0x5cf505*/
                if ( String::Equals_Alt((const char **)v38, 0) ) /*0x5cf50b*/
                {
                  if ( v38 ) /*0x5cf516*/
                  {
                    DeleteAndZero(v38); /*0x5cf51a*/
                    RA2_OPDEL(v38); /*0x5cf520*/
                  }
                }
                else if ( v38 ) /*0x5cf52c*/
                {
                  v39 = v2->PlayerColor; /*0x5cf52e*/
                  if ( v2->u32_54 < v39 /*0x5cf556*/
                    || (*((unsigned char *)v2 + 81) || !v39)
                    && (v40 = v2->q058, v40 > 0)
                    && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(v2->ptr_44 + 8))(v2 + 17, v39 + v40, 0) )
                  {
                    v41 = v2->u32_54; /*0x5cf55d*/
                    v42 = v2->u32_48; /*0x5cf560*/
                    v2->u32_54 = v41 + 1; /*0x5cf566*/
                    *(unsigned int *)(v42 + 4 * v41) = v38; /*0x5cf569*/
                  }
                }
              }
            }
            v3 = ++v45; /*0x5cf574*/
          }
          while ( (int)v3 < INIClass::FindKey((char *)v49, (char **)&v46) ); /*0x5cf585*/
        }
      }
      DeleteAndZero((void **)&v43); /*0x5cf591*/
    }
    DeleteAndZero(&v44); /*0x5cf59a*/
    DeleteAndZero(&v46); /*0x5cf5a3*/
    HashTable::DestroyHashTableINIClass(v49); /*0x5cf5ac*/
    v56 = 0; /*0x5cf5c0*/
    Vector::Clear((int)v55); /*0x5cf5c7*/
    v54[0] = &off_7E1668; /*0x5cf5d0*/
    BufferIOFileClass::Dtor(v54); /*0x5cf5d8*/
    return 1; /*0x5cf5e0*/
  }
  else
  {
  LABEL_17:
    Debug::Log(); /*0x5cf07d*/
    DeleteAndZero(&v44); /*0x5cf089*/
    DeleteAndZero(&v46); /*0x5cf092*/
    HashTable::DestroyHashTableINIClass(v49); /*0x5cf09b*/
    v56 = 0; /*0x5cf0af*/
    Vector::Clear((int)v55); /*0x5cf0b6*/
    v54[0] = &off_7E1668; /*0x5cf0bf*/
    BufferIOFileClass::Dtor(v54); /*0x5cf0c7*/
    return 0; /*0x5cf0cf*/
  }
}
} // namespace gamemd
// 0x5CF5F0
namespace gamemd {
int SessionClass::Destruct()
{
  int i; // ebx
  int v3; // eax
  void *v4; // edi
  int j; // ebx
  int v6; // eax
  void *v7; // edi
  int k; // ebx
  int v9; // eax
  void *v10; // edi

  for ( i = 0; i < *(unsigned int *)&this->__pad_50[4]; ++i ) /*0x5cf5fc*/
  {
    v3 = this->Handle[4]; /*0x5cf5fe*/
    v4 = *(void **)(v3 + 4 * i); /*0x5cf601*/
    if ( v4 ) /*0x5cf606*/
    {
      DeleteAndZero(*(ObjectClass **)(v3 + 4 * i)); /*0x5cf60a*/
      RA2_OPDEL(v4); /*0x5cf610*/
    }
  }
  (*(void (__thiscall **)(int *))(this->Handle[3] + 12))(&this->Handle[3]); /*0x5cf626*/
  this->Config[0] = 0; /*0x5cf629*/
  this->Config[1] = 0; /*0x5cf630*/
  this->Config[2] = 640; /*0x5cf637*/
  this->Config[3] = 400; /*0x5cf63e*/
  for ( j = 0; j < this->Handle[1]; ++j ) /*0x5cf64c*/
  {
    v6 = this->Config[6]; /*0x5cf64e*/
    v7 = *(void **)(v6 + 4 * j); /*0x5cf651*/
    if ( v7 ) /*0x5cf656*/
    {
      DeleteAndZero(*(ObjectClass **)(v6 + 4 * j)); /*0x5cf65a*/
      RA2_OPDEL(v7); /*0x5cf660*/
    }
  }
  (*(void (__thiscall **)(int *))(this->Config[5] + 12))(&this->Config[5]); /*0x5cf676*/
  for ( k = 0; k < this->unknown_10[0]; ++k ) /*0x5cf680*/
  {
    v9 = this->MPGameMode[0]; /*0x5cf682*/
    v10 = *(void **)(v9 + 4 * k); /*0x5cf685*/
    if ( v10 ) /*0x5cf68a*/
    {
      SessionClass::loadSettings(*(SessionClass **)(v9 + 4 * k)); /*0x5cf68e*/
      RA2_OPDEL(v10); /*0x5cf694*/
    }
  }
  return (*(int (__thiscall **)(SessionClass *))(this->GameMode[0] + 12))(this); /*0x5cf6ab*/
}
} // namespace gamemd
// 0x5D0070
namespace gamemd {
CampaignClass * * SessionClass::loadSettings()
{
  int i; // ebp
  DeleteAndZero *v3; // edi
  int j; // ebp
  int v5; // ecx
  void *v6; // edi
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  int v10; // ebx
  ObjectClass *v11; // edi

  for ( i = 0; i < this->PlayerColor; ++i ) /*0x5d007f*/
  {
    v3 = *(DeleteAndZero **)(this->Handle[2] + 4 * i); /*0x5d0084*/
    if ( v3 ) /*0x5d0089*/
    {
      DeleteAndZero::Alt(v3 + 1); /*0x5d008e*/
      RA2_OPDEL(v3); /*0x5d0094*/
    }
  }
  for ( j = 0; j < *(unsigned int *)&this->__pad_50[20]; ++j ) /*0x5d00ab*/
  {
    v5 = *(unsigned int *)&this->__pad_50[8]; /*0x5d00ad*/
    v6 = *(void **)(v5 + 4 * j); /*0x5d00b0*/
    if ( v6 ) /*0x5d00b5*/
    {
      DeleteAndZero(*(ObjectClass **)(v5 + 4 * j)); /*0x5d00b9*/
      RA2_OPDEL(v6); /*0x5d00bf*/
    }
  }
  v7 = *(void **)&this->__pad_50[8]; /*0x5d00cf*/
  *(unsigned int *)&this->__pad_50[4] = (void*)&VectorClass_MapSelection___vftable; /*0x5d00d2*/
  if ( v7 && this->__pad_50[17] ) /*0x5d00dd*/
  {
    RA2_OPDEL(v7); /*0x5d00e3*/
    *(unsigned int *)&this->__pad_50[8] = 0; /*0x5d00eb*/
  }
  this->__pad_50[17] = 0; /*0x5d00ee*/
  *(unsigned int *)&this->__pad_50[12] = 0; /*0x5d00f1*/
  v8 = (void *)this->Handle[2]; /*0x5d00f4*/
  this->Handle[1] = (int)&VectorClass_MSTextEntry___vftable; /*0x5d00f7*/
  if ( v8 && IDA_BYTE1(this->Handle[4]) ) /*0x5d0102*/
  {
    RA2_OPDEL(v8); /*0x5d0108*/
    this->Handle[2] = 0; /*0x5d0110*/
  }
  IDA_BYTE1(this->Handle[4]) = 0; /*0x5d0113*/
  this->Handle[3] = 0; /*0x5d0116*/
  v9 = (void *)this->Config[4]; /*0x5d0119*/
  this->Config[3] = (int)&VectorClass_Point2D_vftable; /*0x5d011c*/
  if ( v9 && IDA_BYTE1(this->Config[6]) ) /*0x5d0127*/
  {
    RA2_OPDEL(v9); /*0x5d012d*/
    this->Config[4] = 0; /*0x5d0135*/
  }
  IDA_BYTE1(this->Config[6]) = 0; /*0x5d013b*/
  this->Config[5] = 0; /*0x5d013e*/
  DeleteAndZero((ObjectClass *)&this->Config[2]); /*0x5d0141*/
  v10 = 2; /*0x5d0149*/
  v11 = (ObjectClass *)&this->Config[2]; /*0x5d014e*/
  do /*0x5d015c*/
  {
    v11 = (ObjectClass *)((char *)v11 - 4); /*0x5d0151*/
    DeleteAndZero(v11); /*0x5d0156*/
    --v10; /*0x5d015b*/
  }
  while ( v10 ); /*0x5d015c*/
  DeleteAndZero::Alt((DeleteAndZero *)this->unknown_10); /*0x5d0161*/
  DeleteAndZero((ObjectClass *)this->unknown_0C); /*0x5d0169*/
  DeleteAndZero((ObjectClass *)this->unknown_08); /*0x5d0170*/
  DeleteAndZero((ObjectClass *)this->MPGameMode); /*0x5d0178*/
  DeleteAndZero((ObjectClass *)this); /*0x5d017f*/
}
} // namespace gamemd
// 0x5D39D0
namespace gamemd {
unsigned int * SessionClass::saveSettings()
{
  this->GameMode[0] = 0; /*0x5d39da*/
  this->MPGameMode[0] = 0; /*0x5d39dc*/
  this->unknown_08[0] = 0; /*0x5d39df*/
  this->unknown_0C[0] = 0; /*0x5d39e2*/
  this->unknown_10[0] = 0; /*0x5d39e5*/
  this->unknown_14[0] = 0; /*0x5d39e8*/
  IDA_LOBYTE(this->Config[0]) = 0; /*0x5d39eb*/
  IDA_BYTE1(this->Config[0]) = 0; /*0x5d39ee*/
  IDA_BYTE2(this->Config[0]) = 0; /*0x5d39f1*/
  this->Config[1] = 0; /*0x5d39f4*/
  this->Config[2] = 0; /*0x5d39f7*/
  this->Config[3] = 0; /*0x5d39fa*/
  this->WOLPreferences[11] = 0; /*0x5d39fd*/
  this->WOLPreferences[12] = 0; /*0x5d3a03*/
  IDA_LOWORD(this->WOLPreferences[13]) = 0; /*0x5d3a09*/
  this->WOLPreferences[14] = 0; /*0x5d3a10*/
  this->WOLPreferences[15] = 0; /*0x5d3a16*/
  this->WOLPreferences[16] = 0; /*0x5d3a1c*/
  IDA_LOWORD(this->Config[4]) = 0; /*0x5d3a22*/
  IDA_LOWORD(this->unknown_16C[0]) = 0; /*0x5d3a26*/
  memset32(&this->unknown_8AA[3030], 65537, 7u); /*0x5d3a38*/
  return this->GameMode; /*0x5d3a3c*/
}
} // namespace gamemd
// 0x5E64C0
namespace gamemd {
unsigned int SessionClass::initPlayers()
{
  signed int PlayerCountMap; // esi
  int v3; // eax

  if ( this == (SessionClass *)-1 ) /*0x5e64c3*/
    return 8; /*0x5e64ca*/
  PlayerCountMap = ReadPlayerCountMap((int)this); /*0x5e64d7*/
  if ( dword_A8B23C ) /*0x5e64db*/
  {
    v3 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->vtable0 + 38))(dword_A8B23C); /*0x5e64df*/
    if ( v3 != -1 && v3 < PlayerCountMap ) /*0x5e64ec*/
      PlayerCountMap = v3; /*0x5e64ee*/
  }
  if ( *(unsigned int *)&unk_A8B238 == 4 ) /*0x5e64f7*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e64f9*/
      return PlayerCountMap & 0xFFFFFFFE; /*0x5e6508*/
    if ( Network::IsMultiplayerActive() ) /*0x5e6509*/
      return 2; /*0x5e6512*/
  }
  return PlayerCountMap; /*0x5e64ca*/
}
} // namespace gamemd
// 0x663B40
namespace gamemd {
AbstractClass * * SessionClass::BuildLobbyPlayerList()
{
  int v2; // ecx
  int v3; // ecx
  int v4; // eax
  int result; // eax
  int v6; // ebx
  char *v7; // edi
  char *v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int i; // [esp+8h] [ebp-14h]
  int v16; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+14h] [ebp-8h] BYREF

  while ( this->q010 ) /*0x663b46*/
  {
    RA2_OPDEL(*this->MPGameMode); /*0x663b53*/
    v2 = this->q010; /*0x663b58*/
    if ( v2 > 0 ) /*0x663b60*/
    {
      v3 = v2 - 1; /*0x663b62*/
      v4 = 0; /*0x663b63*/
      for ( this->q010 = v3; /*0x663b6a*/
            v4 < this->q010;
            *(unsigned int *)(this->Items + 4 * v4 - 4) = *(unsigned int *)(this->Items + 4 * v4) )
      {
        ++v4; /*0x663b6f*/
      }
    }
  }
  result = HouseClass_Count; /*0x663b85*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x663b94*/
  {
    v6 = *(unsigned int *)&HouseClass_Array->gap0[4 * i]; /*0x663ba6*/
    if ( (uint8_t)House::IsCurrentPlayer((void *)v6) && !v6->u8_1F6 ) /*0x663bbc*/
    {
      v7 = (char *)operator new(0x2Au); /*0x663bd8*/
      *v7 = i; /*0x663be2*/
      v8 = ToWideStringChar((char *)(v6 + 90154)); /*0x663be4*/
      strncpy(v7 + 1, v8, 0x14u); /*0x663bee*/
      v9 = 0; /*0x663bfb*/
      if ( Game_PlayerCount > 0 ) /*0x663bff*/
      {
        v10 = Game_PlayerInfoArray; /*0x663c01*/
        while ( *(unsigned int *)(*(unsigned int *)v10 + 111) != i ) /*0x663c12*/
        {
          ++v9; /*0x663c14*/
          v10 += 4; /*0x663c15*/
          if ( v9 >= Game_PlayerCount ) /*0x663c1a*/
            goto LABEL_15; /*0x663c1a*/
        }
        Network::CopyAddress((unsigned int *)(*(unsigned int *)(Game_PlayerInfoArray + 4 * v9) + 40), &v16, (int)&v17); /*0x663c34*/
        *(unsigned int *)(v7 + 33) = v17; /*0x663c3d*/
        *(unsigned short *)(v7 + 37) = *((unsigned short *)&Network_PlayerPorts + v9); /*0x663c48*/
      }
  LABEL_15:
      v7[41] = 1; /*0x663c50*/
      v7[39] = dword_A8E2AC == v6->nextObject; /*0x663c6a*/
      v7[40] = 1 << i; /*0x663c6d*/
      v11 = this->q008; /*0x663c70*/
      if ( this->q010 < v11 /*0x663c93*/
        || (this->IsAllocated || !v11)
        && (v12 = this->CapacityIncrement, v12 > 0)
        && (*(uint8_t (__thiscall **)(void *, int, unsigned int))(this->q008)(this, v11 + v12, 0) )
      {
        v13 = this->q010; /*0x663c9a*/
        v14 = this->Items; /*0x663c9d*/
        this->q010 = v13 + 1; /*0x663ca3*/
        *(unsigned int *)(v14 + 4 * v13) = v7; /*0x663ca6*/
      }
    }
    result = i + 1; /*0x663cb3*/
  }
  return result; /*0x663cc3*/
}
} // namespace gamemd
// 0x691500
namespace gamemd {
unsigned int * SessionClass::GetEntry(IUnknown * aP1)
{
  int v2; // edx
  int v4; // ecx

  v2 = this->Config[5]; /*0x691500*/
  if ( v2 == -1 ) /*0x691506*/
  {
    *aP1 = -1; /*0x691510*/
    aP1[1] = 0; /*0x691512*/
    return aP1; /*0x691508*/
  }
  else
  {
    v4 = this->Config[3]; /*0x691518*/
    *aP1 = *(unsigned int *)(v4 + 8 * v2 + 164); /*0x691527*/
    aP1[1] = *(unsigned int *)(v4 + 8 * v2 + 168); /*0x691531*/
    return aP1; /*0x69151b*/
  }
}
} // namespace gamemd
// 0x6915D0
namespace gamemd {
int SessionClass::SetField()
{
  return this->Config[5] < *(unsigned int *)(this->Config[3] + 160); /*0x6915e0*/
}
} // namespace gamemd
// 0x696F10
namespace gamemd {
int SessionClass::GetPlayerSide()
{
  int result; // eax

  result = -2; /*0x696f13*/
  if ( *(unsigned int *)((char *)&this->q136 + 6) != -2 ) /*0x696f1a*/
    return *(unsigned int *)((char *)&this->q129 + 3); /*0x696f1c*/
  return result; /*0x696f1f*/
}
} // namespace gamemd
// 0x696F20
namespace gamemd {
int SessionClass::GetPlayerColor()
{
  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(unsigned int *)&this->__pad_50[7] != -2 ) /*0x696f2a*/
    return *(unsigned int *)&this->__pad_50[3]; /*0x696f2c*/
  return result; /*0x696f2f*/
}
} // namespace gamemd
// 0x696F50
namespace gamemd {
int SessionClass::GetOption()
{
  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(int *)((char *)&this->ptr_245) != -2 || *(int *)((char *)&this->ptr_241) != -1 ) /*0x696f60*/
    return *(int *)((char *)&this->ptr_241); /*0x696f62*/
  return result; /*0x696f65*/
}
} // namespace gamemd
// 0x696F70
namespace gamemd {
int SessionClass::GetOption2()
{
  int result; // eax

  result = -2; /*0x696f73*/
  if ( *(unsigned int *)&this->__pad_50[23] != -2 || *(unsigned int *)&this->__pad_50[19] != -1 ) /*0x696f80*/
    return *(unsigned int *)&this->__pad_50[19]; /*0x696f82*/
  return result; /*0x696f85*/
}
} // namespace gamemd
// 0x696F90
namespace gamemd {
int SessionClass::SetPlayerOption(SkirmishDialog * aP1)
{

  aP1 = aP1; /*0x696f90*/
  if ( aP1 == -2 ) /*0x696f97*/
  {
    *(int *)((char *)&this->u32_1C5) = 0; /*0x696f99*/
    *(int *)((char *)&this->u32_1C9) = -2; /*0x696fa0*/
  }
  else
  {
    *(int *)((char *)&this->u32_1C5) = aP1; /*0x696fa6*/
    *(int *)((char *)&this->u32_1C9) = -1; /*0x696fa9*/
  }
}
} // namespace gamemd
// 0x696FC0
namespace gamemd {
int SessionClass::SetPlayerColor(int a2)
{
  int result; // eax

  a2 = a2; /*0x696fc0*/
  if ( a2 == -2 ) /*0x696fc7*/
  {
    *(int *)((char *)&this->q0203) = -1; /*0x696fc9*/
    *(int *)((char *)&this->q0207) = -2; /*0x696fd0*/
  }
  else
  {
    *(int *)((char *)&this->q0203) = a2; /*0x696fd6*/
    *(int *)((char *)&this->q0207) = -1; /*0x696fd9*/
  }
}
} // namespace gamemd
// 0x696FF0
namespace gamemd {
int SessionClass::SetOption(SessionClass * aP1)
{
  int result; // eax

  aP1 = aP1; /*0x696ff0*/
  if ( aP1 == -2 ) /*0x696ff7*/
  {
    *(int *)((char *)&this->ptr_241) = -1; /*0x696ff9*/
    *(int *)((char *)&this->ptr_245) = -2; /*0x697000*/
  }
  else
  {
    *(int *)((char *)&this->ptr_241) = aP1; /*0x697006*/
    *(int *)((char *)&this->ptr_245) = -1; /*0x697009*/
  }
}
} // namespace gamemd
// 0x697020
namespace gamemd {
int SessionClass::SetOption2(SessionClass * aP1)
{
  int result; // eax

  result = aP1; /*0x697020*/
  if ( aP1 == -2 ) /*0x697027*/
  {
    *(int *)((char *)&this->idxCd9) = -1; /*0x697029*/
    *(int *)((char *)&this->scenario3) = -2; /*0x697030*/
  }
  else
  {
    *(int *)((char *)&this->idxCd9) = aP1; /*0x697036*/
    *(int *)((char *)&this->scenario3) = -1; /*0x697039*/
  }
  return result; /*0x697033*/
}
} // namespace gamemd
// 0x6970A0
SessionClass::SessionClass()
{
  unsigned int *v2; // eax
  int v3; // ecx
  unsigned int *v4; // eax
  int v5; // ecx
  unsigned int *v6; // eax
  int v7; // ecx
  unsigned char *v8; // edi
  unsigned char *v9; // esi
  int v10; // edi
  DWORD *v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edx
  unsigned int *v15; // eax
  int v16; // ecx
  int v18; // [esp+10h] [ebp-4h]

  this->MPGameMode = 0; /*0x6970b8*/
  this->SkirmishPreferences = 0; /*0x6970bb*/
  this->u32_190 = 0; /*0x6970c1*/
  this->u32_194 = 1; /*0x6970c7*/
  this->u32_198 = 10000; /*0x6970cd*/
  this->u32_19C = 10; /*0x6970d3*/
  *(unsigned int *)&this->q680 = 1; /*0x6970d9*/
  this->u32_684 = 1; /*0x6970df*/
  *(unsigned int *)&this->q688 = 1; /*0x6970e5*/
  this->u32_68C = 1; /*0x6970eb*/
  this->u32_690 = 1; /*0x6970f1*/
  v2 = ((char *)&this->q1A4 + 8); /*0x6970f7*/
  v3 = 8; /*0x6970fd*/
  do /*0x69710e*/
  {
    *(v2 - 1) = 0; /*0x697102*/
    *v2 = 0; /*0x697105*/
    v2[1] = 0; /*0x697107*/
    v2 += 3; /*0x69710a*/
    --v3; /*0x69710d*/
  }
  while ( v3 ); /*0x69710e*/
  this->LANPreferences = 0; /*0x697110*/
  this->u32_20C = 0; /*0x697116*/
  this->u32_210 = 1; /*0x69711c*/
  this->u32_214 = 10000; /*0x697122*/
  this->u32_218 = 10; /*0x697128*/
  this->u32_870 = 1; /*0x69712e*/
  this->u32_874 = 1; /*0x697135*/
  this->u32_878 = 1; /*0x69713c*/
  this->u32_87C = 1; /*0x697143*/
  this->q880 = 1; /*0x69714a*/
  v4 = &this->q228; /*0x697151*/
  v5 = 8; /*0x697157*/
  do /*0x697168*/
  {
    *(v4 - 1) = 0; /*0x69715c*/
    *v4 = 0; /*0x69715f*/
    v4[1] = 0; /*0x697161*/
    v4 += 3; /*0x697164*/
    --v5; /*0x697167*/
  }
  while ( v5 ); /*0x697168*/
  this->WOLPreferences = 0; /*0x69716a*/
  this->u32_288 = 0; /*0x697170*/
  this->u32_28C = 1; /*0x697176*/
  this->u32_290 = 10000; /*0x69717c*/
  this->u32_294 = 10; /*0x697182*/
  this->u32_A60 = 1; /*0x697188*/
  this->u32_A64 = 1; /*0x69718f*/
  this->u32_A68 = 1; /*0x697196*/
  this->u32_A6C = 1; /*0x69719d*/
  *(unsigned int *)&this->u32_A70 = 1; /*0x6971a4*/
  v6 = &this->u32_2A4; /*0x6971ab*/
  v7 = 8; /*0x6971b1*/
  do /*0x6971c2*/
  {
    *(v6 - 1) = 0; /*0x6971b6*/
    *v6 = 0; /*0x6971b9*/
    v6[1] = 0; /*0x6971bb*/
    v6 += 3; /*0x6971be*/
    --v7; /*0x6971c1*/
  }
  while ( v7 ); /*0x6971c2*/
  v8 = &this->ptr_398; /*0x6971c4*/
  v18 = 8; /*0x6971ca*/
  do /*0x6971e5*/
  {
    Waypoint::InitInvalid(v8); /*0x6971d4*/
    v8 += 104; /*0x6971dd*/
    --v18; /*0x6971e1*/
  }
  while ( v18 ); /*0x6971e5*/
  this->u32_694 = 0; /*0x6971ed*/
  this->u32_698 = 0; /*0x6971f3*/
  this->u32_1A70 = 1; /*0x6971f9*/
  *(unsigned int *)&this->u32_1A74 = 0; /*0x697200*/
  this->u32_6A4 = 10; /*0x697210*/
  this->u32_6A0 = 0; /*0x697216*/
  this->Waypoint_8E4.InitInvalid(); /*0x69721c*/
  this->u32_8F4 = 0; /*0x697227*/
  this->u32_8F8 = 0; /*0x69722d*/
  this->u32_23F0 = 1; /*0x697233*/
  *(unsigned int *)&this->u32_23F4 = 0; /*0x69723a*/
  this->q904 = 10; /*0x69724a*/
  this->q900 = 0; /*0x697250*/
  this->SessionClass_A28.saveSettings(); /*0x697256*/
  this->Waypoint_1EC4.InitInvalid(); /*0x697261*/
  CCFileClass::Construct3((int)&this->u32_8D50); /*0x69726c*/
  this->Waypoint_23C8.InitInvalid(); /*0x697277*/
  this->Waypoint_25CC.InitInvalid(); /*0x697282*/
  this->u32_2810 = 0; /*0x69728c*/
  this->u32_2814 = 0; /*0x697292*/
  *(unsigned int *)((char *)&this->__pad_999C + 1732) = 1; /*0x697298*/
  *(unsigned int *)((char *)&this->__pad_999C + 1736) = 0; /*0x69729f*/
  this->u32_2820 = 10; /*0x6972ab*/
  this->u32_281C = 0; /*0x6972b1*/
  this->StartSpots = 0; /*0x6972b7*/
  this->u32_282C = 0; /*0x6972bd*/
  *(unsigned int *)((char *)&this->__pad_999C + 1828) = 1; /*0x6972c3*/
  *(unsigned int *)((char *)&this->__pad_999C + 1832) = 0; /*0x6972ca*/
  this->u32_2838 = 10; /*0x6972d6*/
  this->u32_2834 = 0; /*0x6972dc*/
  this->u32_2840 = 0; /*0x6972e2*/
  this->u32_2844 = 0; /*0x6972e8*/
  *(unsigned int *)((char *)&this->__pad_999C + 1924) = 1; /*0x6972ee*/
  *(unsigned int *)((char *)&this->__pad_999C + 1928) = 0; /*0x6972f5*/
  this->u32_2850 = 10; /*0x697301*/
  this->u32_284C = 0; /*0x697307*/
  this->u32_2900 = 0; /*0x69730d*/
  this->u32_2904 = 0; /*0x697313*/
  *(unsigned int *)((char *)&this->__pad_A2B4 + 364) = 1; /*0x697319*/
  *(unsigned int *)((char *)&this->__pad_A2B4 + 368) = 0; /*0x697320*/
  this->u32_28FC = &off_7F11B4; /*0x697326*/
  this->u32_2910 = 10; /*0x697330*/
  this->u32_290C = 0; /*0x697336*/
  this->u32_2918 = 0; /*0x69733c*/
  this->u32_291C = 0; /*0x697342*/
  *(unsigned int *)((char *)&this->__pad_A2B4 + 460) = 1; /*0x697348*/
  *(unsigned int *)((char *)&this->__pad_A2B4 + 464) = 0; /*0x69734f*/
  this->u32_2928 = 10; /*0x69735f*/
  this->u32_2924 = 0; /*0x697365*/
  this->u32_2930 = 0; /*0x697371*/
  this->u32_2934 = 0; /*0x697377*/
  *(unsigned int *)((char *)&this->__pad_A2B4 + 556) = 1; /*0x69737d*/
  *(unsigned int *)((char *)&this->__pad_A2B4 + 560) = 0; /*0x697384*/
  *(unsigned int *)&this->u32_2940 = 10; /*0x697394*/
  this->u32_293C = 0; /*0x69739a*/
  this->Waypoint_296C.InitInvalid(); /*0x6973a0*/
  this->Waypoint_2978.InitInvalid(); /*0x6973ab*/
  this->Waypoint_2988.InitInvalid(); /*0x6973b6*/
  v9 = ((char *)&this->u16_2984 + 16); /*0x6973bb*/
  v10 = 8; /*0x6973c1*/
  do /*0x6973d1*/
  {
    Waypoint::InitInvalid(v9); /*0x6973c8*/
    v9 += 12; /*0x6973cd*/
    --v10; /*0x6973d0*/
  }
  while ( v10 ); /*0x6973d1*/
  v11 = (DWORD *)((char *)&this->__pad_A664 + 6092); /*0x6973d3*/
  v12 = 8; /*0x6973d9*/
  do /*0x6973ef*/
  {
    *v11 = Timer::GetTicks(); /*0x6973e6*/
    v11[2] = 0; /*0x6973e8*/
    v11 += 3; /*0x6973eb*/
    --v12; /*0x6973ee*/
  }
  while ( v12 ); /*0x6973ef*/
  *(unsigned int *)((char *)&this->__pad_C094 + 652) = 0; /*0x6973f1*/
  *(unsigned int *)this = 0; /*0x6973fc*/
  *(unsigned int *)&this->SessionClass_field_14 = 2; /*0x6973ff*/
  this->u32_1C = 0; /*0x697402*/
  this->u32_80 = 1; /*0x697405*/
  this->q024 = 0; /*0x697409*/
  this->u32_A0 = 0; /*0x69740c*/
  this->u32_A4 = 0; /*0x69740f*/
  this->u32_D4 = 0; /*0x697412*/
  *(unsigned int *)&this->Handle = 0; /*0x697415*/
  this->u32_A8 = 0; /*0x697418*/
  *(unsigned int *)&this->q0AC = 0; /*0x69741b*/
  this->u32_B0 = 0; /*0x69741e*/
  *(unsigned int *)&this->q030 = 0; /*0x697421*/
  this->u32_D0 = 0; /*0x697424*/
  this->u32_390 = 0; /*0x697427*/
  this->u32_394 = 0; /*0x69742d*/
  this->ptr_398 = 0; /*0x697433*/
  this->u32_39C = 0; /*0x697439*/
  *(unsigned int *)&this->u32_3A0 = 0; /*0x69743f*/
  this->q040 = 1; /*0x697445*/
  this->q144 = 0; /*0x69744c*/
  this->q520 = 0; /*0x697452*/
  this->idxSide = 0; /*0x69745b*/
  *(unsigned int *)&this->idxSide2 = -1; /*0x697461*/
  this->u32_15C = 2; /*0x697467*/
  this->SessionClass_field_160 = -1; /*0x69746d*/
  this->Side = this->idxSide; /*0x697479*/
  this->Side2 = *(unsigned int *)&this->idxSide2; /*0x697485*/
  this->Color = this->u32_15C; /*0x697491*/
  this->Color2 = this->SessionClass_field_160; /*0x69749d*/
  *(unsigned int *)((char *)&this->q78A0 + 708) = 1; /*0x6974a3*/
  *(unsigned int *)((char *)&this->q78A0 + 704) = 1; /*0x6974aa*/
  *(unsigned int *)((char *)&this->q78A0 + 1636) = 1; /*0x6974b1*/
  *(unsigned int *)((char *)&this->q78A0 + 1632) = 1; /*0x6974ba*/
  *(unsigned int *)((char *)&this->__pad_C094 + 340) = 0; /*0x6974c1*/
  *(unsigned int *)((char *)&this->__pad_C094 + 356) = 0; /*0x6974c9*/
  *(unsigned int *)((char *)&this->__pad_C094 + 372) = 0; /*0x6974d4*/
  *(unsigned int *)((char *)&this->__pad_C094 + 388) = 0; /*0x6974da*/
  *(unsigned int *)((char *)&this->__pad_C094 + 332) = 0; /*0x6974e0*/
  *(unsigned int *)((char *)&this->__pad_C094 + 284) = 0; /*0x6974e6*/
  this->u16_306E = 0; /*0x6974ec*/
  *(unsigned short *)&this->u16_3070 = 0; /*0x6974f3*/
  this->u32_2FF0 = 1250; /*0x6974fa*/
  *(unsigned int *)&this->u32_2FF4 = 0; /*0x697504*/
  *(unsigned int *)((char *)&this->__pad_A664 + 6652) = 1; /*0x69750a*/
  *(unsigned int *)((char *)&this->__pad_A664 + 5820) = 0; /*0x697511*/
  *(unsigned int *)&this->q301C = 0; /*0x69751c*/
  memset(byte_B73E44, 0, 0x2000u); /*0x697522*/
  memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x69752e*/
  this->MuteSWLaunches = 0; /*0x697530*/
  this->SessionClass_field_304 = 0; /*0x697536*/
  this->LastNickSlot = -1; /*0x69753c*/
  *(unsigned int *)&this->u32_C20 = 0; /*0x697542*/
  *(unsigned int *)((char *)&this->__pad_A2B4 + 748) = 0; /*0x697548*/
  this->q3074 = -1; /*0x697559*/
  memset(((char *)&this->q301C + 4), 0, 0x28u); /*0x69755f*/
  *(unsigned short *)&this->u16_3048 = 0; /*0x697561*/
  this->u32_308C = 0; /*0x697563*/
  *(unsigned int *)((char *)&this->__pad_C094 + 428) = 1; /*0x697569*/
  this->u32_3094 = -1; /*0x697570*/
  *(unsigned int *)((char *)&this->__pad_C094 + 460) = 0; /*0x697576*/
  this->u32_309C = 20; /*0x69757c*/
  this->u32_30A0 = 0; /*0x697586*/
  this->u32_30A4 = 0; /*0x69758c*/
  this->u32_30A8 = -1; /*0x697592*/
  *(unsigned short *)&this->u16_2984 = 0; /*0x697598*/
  this->u32_1A20 = 0; /*0x69759f*/
  this->u32_1A24 = 0; /*0x6975a5*/
  *(unsigned int *)&this->u32_1A28 = 0; /*0x6975b0*/
  this->SessionClass_field_310 = 8; /*0x6975b6*/
  this->u32_318 = 15; /*0x6975c0*/
  this->u32_330 = 15; /*0x6975c6*/
  this->u32_314 = 0; /*0x6975cc*/
  this->u32_31C = 5; /*0x6975df*/
  memset(((char *)&this->q339 + 3), 0, 0x340u); /*0x6975e9*/
  v13 = this->u32_1FBC; /*0x6975eb*/
  v14 = *(unsigned int *)&this->u32_2354; /*0x6975f1*/
  IDA_LOBYTE(v13) = v13 & 0xFE; /*0x6975fd*/
  this->u32_334 = 0; /*0x697604*/
  *(unsigned int *)&this->u32_338 = 0; /*0x69760a*/
  this->u32_19F0 = 0; /*0x697610*/
  *(unsigned int *)&this->u32_19F4 = 0; /*0x697616*/
  *(unsigned int *)&this->q680 = 0; /*0x69761c*/
  this->u32_684 = 0; /*0x697622*/
  *(unsigned short *)&this->u16_1EDA = 0; /*0x697628*/
  this->u32_1FBC = v13; /*0x69762f*/
  (*(void (__thiscall **)(char *, char *))(v14 + 8))(&this->u32_2354, aRecordBin); /*0x697635*/
  this->u32_23C0 &= 0xFFFFFFF8; /*0x697648*/
  *(unsigned int *)&this->u32_23C4 = 0; /*0x697659*/
  *(unsigned int *)((char *)&this->__pad_8D64 + 492) = 0; /*0x69765f*/
  *(unsigned int *)((char *)&this->__pad_8D64 + 496) = 1; /*0x697665*/
  *(unsigned int *)((char *)&this->__pad_8D64 + 500) = 0; /*0x69766c*/
  *(unsigned short *)&this->u16_23D8 = 0; /*0x697672*/
  *(unsigned short *)&this->u16_25D8 = 0; /*0x697679*/
  this->u32_287C = 0; /*0x697680*/
  this->u32_2964 = 1; /*0x697686*/
  this->u32_2808 = 558; /*0x69768c*/
  memset(&this->q908, 0, 0x20u); /*0x697696*/
  memset(&this->q928, 0xFFu, 0x100u); /*0x6976a5*/
  this->u32_2880 |= 1u; /*0x6976b6*/
  this->u32_2884 = 0; /*0x6976be*/
  this->u32_2888 = 760; /*0x6976c4*/
  this->u32_288C = 3; /*0x6976ce*/
  this->u32_2890 = 9600; /*0x6976d8*/
  this->u32_2894 = 0; /*0x6976e2*/
  this->u32_2898 = -1; /*0x6976e8*/
  *(unsigned int *)&this->u32_289C = 0; /*0x6976ee*/
  strcpy(((char *)&this->u32_289C + 12), &g_INI_DefaultBuffer); /*0x697709*/
  this->u32_28F8 = 0; /*0x697712*/
  this->u32_30AC = 0x7FFFFFFF; /*0x697718*/
  this->u32_30B0 = 0; /*0x697722*/
  this->u32_30B4 = 0; /*0x697728*/
  this->u32_30B8 = dword_B07740; /*0x69773a*/
  this->u32_30BC = dword_B07744; /*0x697745*/
  v15 = &this->u32_84; /*0x69774e*/
  *(unsigned int *)&this->u32_30C0 = dword_B07748; /*0x697754*/
  *(unsigned int *)((char *)&this->__pad_C094 + 652) = 0; /*0x697757*/
  this->u32_30CC = 0; /*0x69775d*/
  this->u32_30D0 = 0; /*0x697763*/
  this->u32_30D4 = 0; /*0x697769*/
  *(unsigned int *)((char *)&this->__pad_999C + 2116) = 0; /*0x69776f*/
  this->u32_3C = 0; /*0x697775*/
  v16 = 8; /*0x697778*/
  do /*0x69778e*/
  {
    *(v15 - 8) = -1; /*0x69777d*/
    *v15++ = -1; /*0x697784*/
    --v16; /*0x69778d*/
  }
  while ( v16 ); /*0x69778e*/
  *(unsigned int *)&this->SessionClass_field_0C = 0; /*0x697790*/
  *(unsigned int *)&this->SessionClass_field_10 = 0; /*0x697793*/
  *(unsigned int *)&this->u32_1AA0 = 0; /*0x697796*/
  this->u32_8CC = 0; /*0x69779c*/
  this->u32_2340 = 0; /*0x6977a2*/
  *(unsigned int *)&this->u32_8D4 = 0; /*0x6977a9*/
  return this; /*0x6977a8*/
}
// 0x697B70
int SessionClass::CreateConnections()
{
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  int i; // eax
  int v7; // eax
  int v8; // eax
  unsigned int *v9; // ebp
  int v10; // esi
  int Ticks; // ecx
  int v12; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+18h] [ebp-10h] BYREF
  char v15; // [esp+1Ch] [ebp-Ch]
  char v16; // [esp+1Dh] [ebp-Bh]
  int v17[2]; // [esp+20h] [ebp-8h] BYREF

  Debug::Log(); /*0x697b7e*/
  if ( *(unsigned int *)&unk_A8B238 != 3 && *(unsigned int *)&unk_A8B238 != 4 ) /*0x697b93*/
    return 0; /*0x697b9e*/
  v3 = 0; /*0x697ba7*/
  if ( this->StartSpots[4] > 0 ) /*0x697bab*/
  {
    do /*0x697bc5*/
    {
      Debug::Log(); /*0x697bc5*/
      if ( _wcsicmp( /*0x697be7*/
             *(const wchar_t **)(this->StartSpots[1] + 4 * v3),
             (const wchar_t *)(*((unsigned int *)stru_A80220.vtable3
                               + *(unsigned int *)(*(unsigned int *)(this->StartSpots[1] + 4 * v3) + 111))
                             + 90154)) )
      {
        return 0; /*0x697bf1*/
      }
      if ( !_wcsicmp(*(const wchar_t **)(this->StartSpots[1] + 4 * v3), (const wchar_t *)&this->unknown_2854[499]) ) /*0x697c04*/
      {
        this->unknown_2854[520] = *(unsigned int *)(*(unsigned int *)(this->StartSpots[1] + 4 * v3) + 111); /*0x697c25*/
        Network::CopyAddress((Network *)(dword_A8DA78[v3] + 40), &v13, (int)v17); /*0x697c38*/
        NetworkID::Assign(&stru_A8DBA4, &v13, (int)v17, 0); /*0x697c4d*/
        Network::SetPlayerCoords((Network *)&unk_A8E9C0, &stru_A8DBA4); /*0x697c5c*/
      }
      v4 = *(unsigned int *)(this->StartSpots[1] + 4 * v3); /*0x697c67*/
      *(unsigned int *)(*((unsigned int *)stru_A80220.vtable3 + *(unsigned int *)(v4 + 111)) + 516) = *(unsigned int *)(v4 + 123); /*0x697c7e*/
      Network::CopyAddress((Network *)(dword_A8DA78[v3] + 40), &v13, (int)v17); /*0x697c94*/
      v5 = 0; /*0x697c99*/
      for ( i = 0; i < 4; ++i ) /*0x697c9b*/
        v5 = *((uint8_t *)v17 + i) | (v5 << 8); /*0x697ca8*/
      Debug::Log(); /*0x697cc7*/
      *(unsigned int *)(*((unsigned int *)stru_A80220.vtable3 + *(unsigned int *)(*(unsigned int *)(this->StartSpots[1] + 4 * v3) + 111)) + 512) = v5; /*0x697ce5*/
      *(unsigned char *)(*((unsigned int *)stru_A80220.vtable3 + *(unsigned int *)(*(unsigned int *)(this->StartSpots[1] + 4 * v3) + 111)) + 520) = 0; /*0x697d00*/
      if ( v3 > 0 ) /*0x697d06*/
      {
        v7 = *(unsigned int *)(this->StartSpots[1] + 4 * v3); /*0x697d0e*/
        SessionClass::initLAN((int)&unk_A8E9C0, *(unsigned int *)(v7 + 111), (wchar_t *)v7, (unsigned int *)(v7 + 40)); /*0x697d1f*/
        *(unsigned int *)(*(unsigned int *)(this->StartSpots[1] + 4 * v3) + 115) = -1; /*0x697d2d*/
      }
    }
    while ( ++v3 < this->StartSpots[4] ); /*0x697bc5*/
  }
  v8 = *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x697d43*/
  v9 = dword_A8E284; /*0x697d48*/
  do /*0x697d79*/
  {
    v10 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x697d4d*/
    if ( v8 != -1 ) /*0x697d56*/
    {
      Ticks = Timer::GetTicks(); /*0x697d62*/
      v8 = *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x697d64*/
      v10 += Ticks - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x697d6b*/
    }
    *v9++ = v10; /*0x697d6d*/
  }
  while ( (int)v9 < (int)&unk_A8E2A4 ); /*0x697d79*/
  if ( this->GameMode[0] != 4 ) /*0x697d7e*/
    goto LABEL_22; /*0x697d7e*/
  if ( !IDA_LOBYTE(this->unknown_2854[527]) ) /*0x697d84*/
    goto LABEL_22; /*0x697d84*/
  v12 = 0; /*0x697da0*/
  v14 = 0; /*0x697db0*/
  v15 = 0; /*0x697dc0*/
  v16 = 0; /*0x697dc4*/
  NetworkID::Assign(&stru_A8DBB0, &v12, (int)&v14, 0); /*0x697dc8*/
  IDA_LOBYTE(this->unknown_2854[69]) = 1; /*0x697dd2*/
  this->unknown_2854[526] = 0; /*0x697dd9*/
  this->unknown_2854[530] = 20; /*0x697ddf*/
  this->unknown_2854[528] = -1; /*0x697de9*/
  SessionClass::initInternet((SessionClass *)&unk_A8E9C0); /*0x697df3*/
  SessionClass::BuildLobbyPlayerList((SessionClass *)&stru_B052C0.__pad_0[16]); /*0x697dfd*/
  if ( SessionClass::IsValidHouse((int)&unk_A8B238, 0) ) /*0x697e08*/
  {
    if ( !LaunchMultiplayerHost((int)&stru_B052C0.__pad_0[16], 0) /*0x697e25*/
      || !Network::SendMasterPlayerList((Network *)&stru_B052C0.__pad_0[16]) )
    {
  LABEL_22:
      unk_A8DBA0 = 0; /*0x697e2e*/
    }
  }
  Debug::Log(); /*0x697e4f*/
  Debug::Log(); /*0x697e59*/
  return 1; /*0x697b95*/
}
// 0x697E70
int SessionClass::IsValidHouse(void * a2)
{
  void *v2; // edi
  int v3; // eax
  int v5; // ecx
  HouseClass *i; // edx
  void *v7; // eax

  v2 = a2; /*0x697e73*/
  if ( !a2 ) /*0x697e79*/
    v2 = HouseClass_Player; /*0x697e7b*/
  if ( g_GameMode_Current[0] != 4 || !v2 ) /*0x697e8c*/
    goto LABEL_9; /*0x697e8c*/
  v3 = *(unsigned int *)((char *)&this->__pad_C094 + 316); /*0x697e8e*/
  if ( v3 != -1 ) /*0x697e97*/
    return *((unsigned int *)v2 + 12) == v3; /*0x697ea8*/
  if ( !_wcsicmp((const wchar_t *)v2 + 45077, (const wchar_t *)&this->u32_C080) ) /*0x697eb9*/
    return 1; /*0x697ec7*/
  LABEL_9:
  v5 = 0; /*0x697ed3*/
  if ( HouseClass_Count <= 0 ) /*0x697ed7*/
    return 0; /*0x697efd*/
  for ( i = HouseClass_Array; ; i = (HouseClass *)((char *)i + 4) ) /*0x697ed9*/
  {
    v7 = *(void **)i->gap0; /*0x697edf*/
    if ( *(unsigned char *)(*(unsigned int *)i->gap0 + 492) ) /*0x697ee1*/
    {
      if ( !*((unsigned char *)v7 + 501) ) /*0x697eeb*/
        break; /*0x697eeb*/
    }
    if ( ++v5 >= HouseClass_Count ) /*0x697efb*/
      return 0; /*0x697efb*/
  }
  return v2 == v7; /*0x697ea0*/
}
// 0x699980
AbstractClass * * SessionClass::LoadMissionList()
{
  wchar_t *Description; // esi
  int v3; // eax
  int *v4; // ebp
  int KeyCount; // ebx
  int v6; // edi
  uint8_t *StringByIndex; // eax
  MapFile *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  HANDLE FirstFileA; // ebx
  char *cAlternateFileName; // esi
  int v15; // ebx
  int i; // edi
  uint8_t *v17; // eax
  MapFile *v18; // eax
  wchar_t *v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  HANDLE v24; // ebx
  char *cFileName; // esi
  MixFileClass *v26; // eax
  unsigned int *v27; // edi
  int v28; // eax
  unsigned int v29; // kr0C_4
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // ecx
  uint8_t *v33; // eax
  MapFile *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // esi
  int v37; // ecx
  int v38; // eax
  int v39; // edi
  wchar_t *StringCSF; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  char *v45; // esi
  SessionClass *v46; // eax
  wchar_t *v47; // esi
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  HANDLE hFindFile; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFilea; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFileb; // [esp+20h] [ebp-5C4h]
  char v56[4]; // [esp+24h] [ebp-5C0h] BYREF
  int j; // [esp+28h] [ebp-5BCh]
  int v58; // [esp+2Ch] [ebp-5B8h] BYREF
  int v59; // [esp+30h] [ebp-5B4h] BYREF
  INIClass v60; // [esp+34h] [ebp-5B0h] BYREF
  int v61; // [esp+74h] [ebp-570h]
  int v62; // [esp+78h] [ebp-56Ch]
  CCFileClass v63; // [esp+7Ch] [ebp-568h] BYREF
  char v64[12]; // [esp+D4h] [ebp-510h] BYREF
  int v65; // [esp+E0h] [ebp-504h]
  char v66[64]; // [esp+E8h] [ebp-4FCh] BYREF
  char v67[32]; // [esp+128h] [ebp-4BCh] BYREF
  wchar_t Source[44]; // [esp+148h] [ebp-49Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1A0h] [ebp-444h] BYREF
  wchar_t Buffer[64]; // [esp+2E0h] [ebp-304h] BYREF
  wchar_t v71[64]; // [esp+360h] [ebp-284h] BYREF
  char Destination[260]; // [esp+3E0h] [ebp-204h] BYREF
  char v73[256]; // [esp+4E4h] [ebp-100h] BYREF

  Description = 0; /*0x69998b*/
  v60.headNode[0] = 0; /*0x699992*/
  v60.headNode[1] = 0; /*0x699996*/
  GenericList::Constructor((GenericList *)&v60.headNode[2]); /*0x69999a*/
  v3 = this->unknown_310[224]; /*0x69999f*/
  v4 = &this->unknown_310[224]; /*0x6999a5*/
  v60.headNode[2] = (int)&List_INIClass_INISection___vftable; /*0x6999ad*/
  memset(&v60.__pad_20[8], 0, 13); /*0x6999b5*/
  v60.unknown38 = 0; /*0x6999c6*/
  v60.INIClass_field_3C = 0; /*0x6999ca*/
  *(unsigned int *)v60.__pad_0 = (void*)&INIClass_vftable; /*0x6999ce*/
  (*(void (__thiscall **)(int *))(v3 + 12))(v4); /*0x6999d6*/
  CCFileClass::Construct(&v63, aMissionsmdPkt); /*0x6999e2*/
  if ( (uint8_t)CCFileClass::Open(&v63, 0) ) /*0x6999ec*/
  {
    FileStraw::Open((FileStraw *)&v60, (int)&v63, 0); /*0x699a03*/
    KeyCount = INIClass::GetKeyCount(v60.__pad_0, g_INI_Key_MultiMaps); /*0x699a16*/
    v6 = 0; /*0x699a18*/
    if ( KeyCount > 0 ) /*0x699a1c*/
    {
      while ( 1 ) /*0x699a3f*/
      {
        StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v60.__pad_0, g_INI_Key_MultiMaps, v6); /*0x699a3f*/
        if ( INIClass::GetString(&v60, g_INI_Key_MultiMaps, StringByIndex, &g_INI_DefaultBuffer, v66, 64) ) /*0x699a4e*/
        {
          v8 = (MapFile *)RA2_OPNEW(0x1BCu); /*0x699a5c*/
          if ( v8 ) /*0x699a66*/
            Description = MapFile::LoadDescription(v8, (uint8_t ***)&v60, v66); /*0x699a7c*/
          v9 = v4[2]; /*0x699a7e*/
          if ( v4[4] < v9 /*0x699aa4*/
            || (*((unsigned char *)v4 + 13) || !v9)
            && (v10 = v4[5], v10 > 0)
            && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(*v4 + 8))(v4, v9 + v10, 0) )
          {
            v11 = v4[4]; /*0x699aab*/
            v12 = v4[1]; /*0x699aae*/
            v4[4] = v11 + 1; /*0x699ab4*/
            *(unsigned int *)(v12 + 4 * v11) = Description; /*0x699ab7*/
          }
        }
        if ( ++v6 >= KeyCount ) /*0x699abd*/
          break; /*0x699abd*/
        Description = 0; /*0x699a24*/
      }
    }
  }
  INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699acb*/
  CCFileClass::Reset(&v63); /*0x699ad4*/
  FirstFileA = FindFirstFileA(aPkt, &FindFileData); /*0x699aec*/
  hFindFile = FirstFileA; /*0x699af1*/
  if ( FirstFileA != (HANDLE)-1 )
  {
    do
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 )
      {
        cAlternateFileName = FindFileData.cAlternateFileName; /*0x699b18*/
        if ( !strlen(FindFileData.cAlternateFileName) ) /*0x699b1f*/
          cAlternateFileName = FindFileData.cFileName; /*0x699b26*/
        if ( _strcmpi(cAlternateFileName, aMissionsmdPkt) )
        {
          FileClass::SetFileName(&v63, cAlternateFileName); /*0x699b48*/
          FileStraw::Open((FileStraw *)&v60, (int)&v63, 0); /*0x699b58*/
          v15 = INIClass::GetKeyCount(v60.__pad_0, g_INI_Key_MultiMaps); /*0x699b6b*/
          for ( i = 0; i < v15; ++i )
          {
            v17 = (uint8_t *)INIClass::GetStringByIndex(v60.__pad_0, g_INI_Key_MultiMaps, i); /*0x699b90*/
            if ( INIClass::GetString(&v60, g_INI_Key_MultiMaps, v17, &g_INI_DefaultBuffer, v66, 64) )
            {
              v18 = (MapFile *)RA2_OPNEW(0x1BCu); /*0x699bad*/
              v19 = v18 ? MapFile::LoadDescription(v18, (uint8_t ***)&v60, v66) : 0;
              v20 = v4[2]; /*0x699bd3*/
              if ( v4[4] < v20 /*0x699bf9*/
                || (*((unsigned char *)v4 + 13) || !v20)
                && (v21 = v4[5], v21 > 0)
                && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(*v4 + 8))(v4, v20 + v21, 0) )
              {
                v22 = v4[4]; /*0x699c00*/
                v23 = v4[1]; /*0x699c03*/
                v4[4] = v22 + 1; /*0x699c09*/
                *(unsigned int *)(v23 + 4 * v22) = v19; /*0x699c0c*/
              }
            }
          }
          FirstFileA = hFindFile; /*0x699c18*/
        }
      }
    }
    while ( FindNextFileA(FirstFileA, &FindFileData) );
    FindClose(FirstFileA); /*0x699c34*/
  }
  INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699c42*/
  CCFileClass::Reset(&v63); /*0x699c4b*/
  v24 = FindFirstFileA(aYro, &FindFileData); /*0x699c69*/
  hFindFilea = v24; /*0x699c70*/
  v61 = dword_81C1D0; /*0x699c74*/
  SetSoundWarning(-2); /*0x699c78*/
  if ( v24 != (HANDLE)-1 ) /*0x699c80*/
  {
    do /*0x699fbc*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x699c91*/
      {
        cFileName = FindFileData.cAlternateFileName; /*0x699ca3*/
        if ( !strlen(FindFileData.cAlternateFileName) ) /*0x699caa*/
          cFileName = FindFileData.cFileName; /*0x699cb1*/
        if ( _strcmpi(cFileName, aMissionsYro) ) /*0x699cbe*/
        {
          v26 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x699cd0*/
          if ( v26 ) /*0x699cda*/
          {
            v27 = MixFileClass::FromFile(v26, cFileName, (int)dword_886980); /*0x699ced*/
            if ( v27 ) /*0x699cf1*/
            {
              if ( dword_884DD0 < dword_884DC8 /*0x699d2d*/
                || (byte_884DCD || !dword_884DC8)
                && dword_884DD4 > 0
                && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(MixFileClass_Array_Alt + 8))(
                     &MixFileClass_Array_Alt,
                     dword_884DC8 + dword_884DD4,
                     0) )
              {
                v28 = dword_884DD0++; /*0x699d3a*/
                *((unsigned int *)dword_884DC4 + v28) = v27; /*0x699d49*/
              }
              v29 = strlen(cFileName) + 1; /*0x699d53*/
              v30 = v29 - 1; /*0x699d5f*/
              strncpy(Destination, cFileName, v29 - 4); /*0x699d67*/
              *((unsigned char *)&v71[62] + v30 + 1) = 0; /*0x699d8f*/
              strcat(Destination, (const char *)&off_83F4F0); /*0x699d9f*/
              Destination[v30] = 0; /*0x699da8*/
              FileClass::SetFileName(&v63, Destination); /*0x699dbb*/
              if ( (uint8_t)CCFileClass::Open(&v63, 0) ) /*0x699dc7*/
              {
                FileStraw::Open((FileStraw *)&v60, (int)&v63, 0); /*0x699dde*/
                v31 = INIClass::GetKeyCount(v60.__pad_0, g_INI_Key_MultiMaps); /*0x699dec*/
                v32 = 0; /*0x699df1*/
                v62 = v31; /*0x699df5*/
                for ( j = 0; j < v62; ++j ) /*0x699dfd*/
                {
                  v33 = (uint8_t *)INIClass::GetStringByIndex(v60.__pad_0, g_INI_Key_MultiMaps, v32); /*0x699e1c*/
                  if ( INIClass::GetString(&v60, g_INI_Key_MultiMaps, v33, &g_INI_DefaultBuffer, v66, 64) ) /*0x699e2b*/
                  {
                    v34 = (MapFile *)RA2_OPNEW(0x1BCu); /*0x699e3d*/
                    if ( v34 ) /*0x699e47*/
                    {
                      v35 = MapFile::LoadDescription(v34, (uint8_t ***)&v60, v66); /*0x699e5c*/
                      v36 = v35; /*0x699e61*/
                      if ( v35 ) /*0x699e65*/
                      {
                        v37 = *((unsigned int *)v35 + 97); /*0x699e6b*/
                        v38 = *((unsigned int *)v35 + 96); /*0x699e71*/
                        if ( v38 == v37 ) /*0x699e7b*/
                          swprintf(Buffer, (const size_t)&off_83F4CC, (const wchar_t *const)0x28, v38, 41); /*0x699ea8*/
                        else
                          swprintf(Buffer, (const size_t)&off_83F4DC, (const wchar_t *const)0x28, v38, v37, 41); /*0x699e8e*/
                        v39 = wcslen(v36); /*0x699ebf*/
                        wcscpy(Source, v36); /*0x699ec1*/
                        wcsncat(Source, asc_82083C, 44 - v39); /*0x699edb*/
                        wcsncat(Source, Buffer, 44 - (v39 + 1)); /*0x699ef9*/
                        if ( Source ) /*0x699f0a*/
                        {
                          wcsncpy(v36, Source, 0x2Cu); /*0x699f17*/
                          v36[43] = 0; /*0x699f1f*/
                        }
                        else
                        {
                          StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x699f36*/
                          wcscpy(v36, StringCSF); /*0x699f3d*/
                        }
                        v41 = v4[2]; /*0x699f45*/
                        if ( v4[4] < v41 /*0x699f6a*/
                          || (*((unsigned char *)v4 + 13) || !v41)
                          && (v42 = v4[5], v42 > 0)
                          && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(*v4 + 8))(v4, v41 + v42, 0) )
                        {
                          v43 = v4[4]; /*0x699f71*/
                          v44 = v4[1]; /*0x699f74*/
                          v4[4] = v43 + 1; /*0x699f7a*/
                          *(unsigned int *)(v44 + 4 * v43) = v36; /*0x699f7d*/
                        }
                      }
                    }
                  }
                  v32 = j + 1; /*0x699f88*/
                }
                INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699f9b*/
              }
              else
              {
                Debug::Log(); /*0x699fa7*/
              }
              v24 = hFindFilea; /*0x699faf*/
            }
          }
        }
      }
    }
    while ( FindNextFileA(v24, &FindFileData) ); /*0x699fbc*/
  }
  SetSoundWarning(v61); /*0x699fd0*/
  if ( v24 != (HANDLE)-1 ) /*0x699fd8*/
    FindClose(v24); /*0x699fdb*/
  INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699fe7*/
  CCFileClass::Reset(&v63); /*0x699ff0*/
  hFindFileb = FindFirstFileA(aYrm_0, &FindFileData); /*0x69a010*/
  v56[0] = 0; /*0x69a014*/
  if ( hFindFileb != (HANDLE)-1 ) /*0x69a019*/
  {
    do /*0x69a190*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x69a02f*/
      {
        v45 = FindFileData.cAlternateFileName; /*0x69a041*/
        if ( !strlen(FindFileData.cAlternateFileName) ) /*0x69a048*/
          v45 = FindFileData.cFileName; /*0x69a04f*/
        INIClass::GetString( /*0x69a073*/
          &v60,
          (uint8_t *)&stru_82BA00.LeaveGrinderSound,
          (uint8_t *)g_INI_Key_Name,
          g_Str_No_Name,
          v66,
          64);
        INIClass::GetString(&v60, (uint8_t *)g_INI_Key_Digest, a1, g_Str_No_Digest, v67, 32); /*0x69a095*/
        BulkCharToWide(v71, (uint8_t *)v66, -1); /*0x69a0aa*/
        v56[0] = INIClass::ReadBool_Overwrite( /*0x69a0c8*/
                   (int *)v60.__pad_0,
                   (uint8_t *)&stru_82BA00.LeaveGrinderSound,
                   (uint8_t *)g_INI_Key_Official,
                   0);
        v59 = 2; /*0x69a0f0*/
        v58 = 4; /*0x69a0f8*/
        ParseMapFileHeader(v45, v71, v67, v73, v56, &v59, &v58); /*0x69a0fc*/
        v46 = (SessionClass *)RA2_OPNEW(0x1BCu); /*0x69a106*/
        if ( v46 ) /*0x69a110*/
          v47 = SessionClass::ParseGameInfo(v46, v45, v71, v67, v56[0], v73, v59, v58); /*0x69a141*/
        else
          v47 = 0; /*0x69a145*/
        v48 = v4[2]; /*0x69a147*/
        if ( v4[4] < v48 /*0x69a16d*/
          || (*((unsigned char *)v4 + 13) || !v48)
          && (v49 = v4[5], v49 > 0)
          && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(*v4 + 8))(v4, v48 + v49, 0) )
        {
          v50 = v4[4]; /*0x69a174*/
          v51 = v4[1]; /*0x69a177*/
          v4[4] = v50 + 1; /*0x69a17d*/
          *(unsigned int *)(v51 + 4 * v50) = v47; /*0x69a180*/
        }
      }
    }
    while ( FindNextFileA(hFindFileb, &FindFileData) ); /*0x69a190*/
    FindClose(hFindFileb); /*0x69a1a3*/
  }
  *(unsigned int *)v63.__pad_0 = (void*)&CCFileClass_vftable; /*0x69a1b2*/
  v65 = 0; /*0x69a1ba*/
  Vector::Clear((int)v64); /*0x69a1c1*/
  *(unsigned int *)v63.__pad_0 = &off_7E1668; /*0x69a1ca*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v63); /*0x69a1d2*/
  return HashTable::DestroyHashTableINIClass(&v60); /*0x69a1e0*/
}
// 0x69A980
ObjectClass * * SessionClass::ParseGameInfo(char * Source, CampaignScore * aP2, CCINIClass * aP3, CampaignScore * aP4, const char * a5, CampaignScore * aP6, int a8)
{
  SessionClass *v8; // esi
  int *p_Side2; // ebx
  int *v10; // ebp
  char *v11; // eax
  wchar_t *StringCSF; // eax
  char v13; // cl
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int i; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // eax

  v8 = this; /*0x69a984*/
  p_Side2 = &this->Side2; /*0x69a989*/
  MapFile::Constructor((MapFile *)&this->Side2, 0, 0); /*0x69a997*/
  v10 = &v8->SkirmishPreferences[6]; /*0x69a99c*/
  p_Side2[5] = 10; /*0x69a9ad*/
  p_Side2[4] = 0; /*0x69a9b0*/
  *p_Side2 = (int)&TypeList_enum_DiskID_vftable; /*0x69a9b7*/
  VectorClass::WstringConstructor((VectorClass *)&v8->SkirmishPreferences[6], 0, 0); /*0x69a9bd*/
  v11 = Source; /*0x69a9c2*/
  v8->SkirmishPreferences[6] = (int)&DynamicVectorClass_Wstring_vftable; /*0x69a9c6*/
  v8->SkirmishPreferences[11] = 10; /*0x69a9cf*/
  v8->SkirmishPreferences[10] = 0; /*0x69a9d2*/
  if ( v11 ) /*0x69a9d9*/
  {
    strncpy(&v8->__pad_50[8], v11, 0x104u); /*0x69a9e5*/
    v8->__pad_50[267] = 0; /*0x69a9ed*/
  }
  else
  {
    strcpy(&v8->__pad_50[8], aNoFileName); /*0x69aa12*/
    v8 = this; /*0x69aa1b*/
  }
  if ( aP2 ) /*0x69aa25*/
  {
    wcsncpy((wchar_t *)v8, aP2, 0x2Cu); /*0x69aa2b*/
    *(unsigned short *)&v8->__pad_50[6] = 0; /*0x69aa33*/
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x69aa4c*/
    wcscpy((wchar_t *)v8, StringCSF); /*0x69aa53*/
  }
  if ( aP3 ) /*0x69aa61*/
  {
    strncpy(&v8->__pad_50[268], aP3, 0x20u); /*0x69aa6d*/
    IDA_HIBYTE(v8->idxSide2) = 0; /*0x69aa75*/
  }
  else
  {
    strcpy(&v8->__pad_50[268], g_Str_No_Digest); /*0x69aa9d*/
    v8 = this; /*0x69aaa6*/
  }
  v13 = aP4; /*0x69aaae*/
  v14 = a8; /*0x69aab2*/
  v8->Color2 = aP6; /*0x69aab6*/
  v15 = *p_Side2; /*0x69aabc*/
  IDA_LOBYTE(v8->Color) = v13; /*0x69aabe*/
  v8->Side = v14; /*0x69aac6*/
  (*(void (__thiscall **)(int *))(v15 + 12))(p_Side2); /*0x69aacc*/
  v16 = p_Side2[2]; /*0x69aacf*/
  if ( p_Side2[4] < v16 /*0x69aaf4*/
    || (*((unsigned char *)p_Side2 + 13) || !v16)
    && (v17 = p_Side2[5], v17 > 0)
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(*p_Side2 + 8))(p_Side2, v16 + v17, 0) )
  {
    v18 = p_Side2[4]; /*0x69aafb*/
    v19 = p_Side2[1]; /*0x69aafe*/
    p_Side2[4] = v18 + 1; /*0x69ab04*/
    *(unsigned int *)(v19 + 4 * v18) = -2; /*0x69ab07*/
  }
  if ( a5 ) /*0x69ab14*/
  {
    String::Assign((String *)&Source, a5); /*0x69ab1f*/
    if ( String::Length((String *)&Source) ) /*0x69ab28*/
    {
      unknown_libname_73(&aP4); /*0x69ab39*/
      for ( i = String::Tokenize((String *)&Source, 0, Str, (void **)&aP4); /*0x69ab58*/
            i != -1;
            i = String::Tokenize((String *)&Source, i, Str, (void **)&aP4) )
      {
        String::Assign((String *)&aP2, asc_830A14); /*0x69ab67*/
        String::TrimLeft((String *)&aP4, (const char **)&aP2); /*0x69ab75*/
        DeleteAndZero((ObjectClass *)&aP2); /*0x69ab7e*/
        String::Assign((String *)&aP3, asc_830A14); /*0x69ab8c*/
        String::TrimRight((String *)&aP4, (const char **)&aP3); /*0x69ab9a*/
        DeleteAndZero((ObjectClass *)&aP3); /*0x69aba3*/
        v21 = v10[2]; /*0x69aba8*/
        if ( v10[4] >= v21 ) /*0x69abb0*/
        {
          if ( !*((unsigned char *)v10 + 13) && v21 ) /*0x69abbb*/
            continue; /*0x69abbb*/
          v22 = v10[5]; /*0x69abbd*/
          if ( v22 <= 0 || !(*(uint8_t (__thiscall **)(int *, int, unsigned int))(*v10 + 8))(v10, v21 + v22, 0) ) /*0x69abce*/
            continue; /*0x69abce*/
        }
        v23 = v10[4]; /*0x69abd5*/
        v10[4] = v23 + 1; /*0x69abe0*/
        String::Reassign((String *)(v10[1] + 4 * v23), (const char **)&aP4); /*0x69abe9*/
      }
      DeleteAndZero((ObjectClass *)&aP4); /*0x69ac11*/
    }
    DeleteAndZero((ObjectClass *)&Source); /*0x69ac1a*/
  }
  return (wchar_t *)v8; /*0x69ac21*/
}
// 0x69B7E0
int SessionClass::AssignColor(int a2, MPCooperative * aP2)
{
  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char *v11; // edx
  int Color2; // edx

  result = a2; /*0x69b7e0*/
  if ( a2 == -2 ) /*0x69b7ef*/
  {
    IDA_LOBYTE(result) = aP2; /*0x69b7f5*/
    if ( aP2 ) /*0x69b7fb*/
    {
      while ( 1 ) /*0x69b80e*/
      {
        result = Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69b80e*/
        if ( result == -2 ) /*0x69b815*/
          break; /*0x69b815*/
        v5 = this->StartSpots[4]; /*0x69b817*/
        v6 = 0; /*0x69b81d*/
        if ( v5 <= 0 ) /*0x69b821*/
        {
  LABEL_12:
          v10 = 0; /*0x69b849*/
          v11 = &this->__pad_50[52]; /*0x69b84b*/
          while ( *(unsigned int *)v11 != result ) /*0x69b853*/
          {
            ++v10; /*0x69b855*/
            v11 += 4; /*0x69b856*/
            if ( v10 >= 8 ) /*0x69b85c*/
              goto LABEL_15; /*0x69b85c*/
          }
        }
        else
        {
          v7 = this->StartSpots[1]; /*0x69b823*/
          while ( 1 ) /*0x69b829*/
          {
            v8 = *(unsigned int *)v7; /*0x69b829*/
            if ( *(unsigned int *)(*(unsigned int *)v7 + 87) == -2 && *(unsigned int *)(v8 + 83) == -1 ) /*0x69b834*/
              v9 = -2; /*0x69b836*/
            else
              v9 = *(unsigned int *)(v8 + 83); /*0x69b83a*/
            if ( v9 == result ) /*0x69b83f*/
              break; /*0x69b83f*/
            ++v6; /*0x69b841*/
            v7 += 4; /*0x69b842*/
            if ( v6 >= v5 ) /*0x69b847*/
              goto LABEL_12; /*0x69b847*/
          }
        }
      }
  LABEL_15:
      this->Color = result; /*0x69b85e*/
      this->Color2 = -2; /*0x69b866*/
    }
    else
    {
      this->Color = 0; /*0x69b86e*/
      this->Color2 = -2; /*0x69b878*/
    }
  }
  else
  {
    this->Color = a2; /*0x69b880*/
    this->Color2 = -1; /*0x69b886*/
  }
  Color2 = this->Color2; /*0x69b896*/
  *(unsigned int *)&this->__pad_50[268] = this->Color; /*0x69b89c*/
  this->unknown_160[0] = Color2; /*0x69b8a2*/
  return result; /*0x69b8a8*/
}
// 0x69BD60
void SessionClass::SetupNetwork()
{
  int v1; // esi
  char **v3; // edi
  char *v4; // ebx
  char *v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  unsigned int *v13; // esi
  int v14; // eax
  int v15; // esi
  int i; // eax
  int v17; // ebx
  unsigned int *v18; // edx
  char *v19; // edi
  char **v20; // esi
  char *v21; // eax
  int v22; // edi
  char **v23; // esi
  char *v24; // eax
  char **v25; // ecx
  char *v26; // esi
  char *v27; // eax
  char *v28; // ecx
  char *v29; // esi
  char *v30; // eax
  char *v31; // ecx
  char **v32; // esi
  char *v33; // edi
  char *v34; // ebx
  char *v35; // eax
  void *v36; // eax
  int v37; // ecx
  unsigned short *v38; // edx
  int16_t v39; // ax
  unsigned int *v40; // edx
  int v41; // esi
  char *v42; // ebx
  char *v43; // edi
  char *v44; // eax
  NetworkID *v45; // ecx
  bool v46; // zf
  int v47; // eax
  int16_t v48; // [esp-Ch] [ebp-70h]
  int v49; // [esp+8h] [ebp-5Ch]
  int v50; // [esp+8h] [ebp-5Ch]
  int v51; // [esp+8h] [ebp-5Ch]
  int v52; // [esp+Ch] [ebp-58h]
  int v53[2]; // [esp+10h] [ebp-54h] BYREF
  void *v54; // [esp+18h] [ebp-4Ch]
  int v55; // [esp+1Ch] [ebp-48h]
  void *v56; // [esp+20h] [ebp-44h]
  int v57; // [esp+24h] [ebp-40h] BYREF
  int v58; // [esp+2Ch] [ebp-38h]
  int v59; // [esp+30h] [ebp-34h]
  bool v60[4]; // [esp+34h] [ebp-30h] BYREF
  int v61; // [esp+38h] [ebp-2Ch]
  int v62; // [esp+3Ch] [ebp-28h]
  bool v63[4]; // [esp+40h] [ebp-24h] BYREF
  int v64; // [esp+44h] [ebp-20h]
  int v65; // [esp+48h] [ebp-1Ch]
  void **v66; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v68; // [esp+54h] [ebp-10h]
  char v69; // [esp+59h] [ebp-Bh]
  int v70; // [esp+5Ch] [ebp-8h]
  int v71; // [esp+60h] [ebp-4h]

  v1 = 0; /*0x69bd65*/
  v55 = 1; /*0x69bd6f*/
  AbstractClass::updateAnimationState((AbstractClass *)&v66, 0, 0); /*0x69bd77*/
  v66 = (void*)&DynamicVectorClass_NodeNameType___vftable; /*0x69bd81*/
  v71 = 10; /*0x69bd89*/
  v70 = 0; /*0x69bd91*/
  Debug::Log(); /*0x69bd95*/
  if ( this->StartSpots[4] < 2 ) /*0x69bda6*/
  {
    v66 = (void*)&VectorClass_NodeNameType___vftable; /*0x69bdac*/
    MPCooperative::updateScoreBoard((int)&v66); /*0x69bdb4*/
    return; /*0x69bdbe*/
  }
  v52 = 0; /*0x69bdce*/
  memset(&this->unknown_2854[373], 0, 0x120u); /*0x69bdd2*/
  IDA_LOBYTE(this->unknown_2854[497]) = 1; /*0x69bdd4*/
  if ( this->StartSpots[4] > 0 ) /*0x69bde3*/
  {
    do /*0x69be9c*/
    {
      v53[0] = 0; /*0x69bde9*/
      v3 = (char **)dword_A8DA90; /*0x69bdf1*/
      while ( 1 ) /*0x69bdfb*/
      {
        v4 = *v3; /*0x69bdfb*/
        v54 = ToWideStringChar((char *)dword_A8DA78[v1]); /*0x69be07*/
        v5 = ToWideStringChar(v4); /*0x69be0b*/
        if ( !_strcmpi((char *)v54, v5) ) /*0x69be16*/
          break; /*0x69be16*/
        ++v3; /*0x69be26*/
        ++v53[0]; /*0x69be30*/
        if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x69be34*/
        {
          v6 = 0; /*0x69be36*/
          goto LABEL_9; /*0x69be38*/
        }
      }
      v6 = v53[0]; /*0x69be3a*/
      if ( v53[0] >= 8u ) /*0x69be40*/
        goto LABEL_10; /*0x69be40*/
  LABEL_9:
      Network::SetPort((Network *)(*(unsigned int *)(this->StartSpots[1] + 4 * v1) + 40), this->unknown_2854[v6 + 489]); /*0x69be47*/
      ToWideStringChar(*(char **)(this->StartSpots[1] + 4 * v1)); /*0x69be6a*/
      Network::FormatAddress((Network *)(*(unsigned int *)(this->StartSpots[1] + 4 * v1) + 40), 0); /*0x69be7f*/
      Debug::Log(); /*0x69be8b*/
  LABEL_10:
      ++v1; /*0x69be93*/
    }
    while ( v1 < this->StartSpots[4] ); /*0x69be9c*/
  }
  v7 = this->StartSpots[4]; /*0x69bea2*/
  v58 = 0; /*0x69beaa*/
  v59 = 0; /*0x69beb0*/
  v49 = 0; /*0x69beb4*/
  if ( v7 > 0 ) /*0x69beb8*/
  {
    v8 = v68; /*0x69bebe*/
    while ( 1 ) /*0x69bec2*/
    {
      v9 = 0x7FFFFFFF; /*0x69bec2*/
      v10 = 0; /*0x69bec7*/
      v11 = 0x7FFFFFFF; /*0x69becb*/
      if ( v7 <= 0 ) /*0x69becd*/
        break; /*0x69becd*/
      do /*0x69bef2*/
      {
        if ( !*((unsigned char *)&v58 + v10) && *(unsigned int *)(*(unsigned int *)(this->StartSpots[1] + 4 * v10) + 83) < v11 ) /*0x69bee9*/
        {
          v11 = *(unsigned int *)(*(unsigned int *)(this->StartSpots[1] + 4 * v10) + 83); /*0x69beeb*/
          v9 = v10; /*0x69beed*/
        }
        ++v10; /*0x69beef*/
      }
      while ( v10 < v7 ); /*0x69bef2*/
      if ( v9 == 0x7FFFFFFF ) /*0x69befa*/
        break; /*0x69befa*/
      v12 = this->StartSpots[1]; /*0x69befc*/
      *((unsigned char *)&v58 + v9) = 1; /*0x69bf02*/
      v13 = (unsigned int *)(v12 + 4 * v9); /*0x69bf07*/
      if ( v70 < v8 ) /*0x69bf10*/
        goto LABEL_24; /*0x69bf10*/
      if ( !v69 && v8 || v71 <= 0 ) /*0x69bf24*/
        goto LABEL_26; /*0x69bf24*/
      if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v66[2])(&v66, v71 + v8, 0) ) /*0x69bf35*/
      {
  LABEL_24:
        v14 = v70++; /*0x69bf44*/
        *((unsigned int *)Block + v14) = *v13; /*0x69bf4d*/
      }
      v8 = v68; /*0x69bf50*/
  LABEL_26:
      v7 = this->StartSpots[4]; /*0x69bf54*/
      if ( v70 != v7 && ++v49 < v7 ) /*0x69bf6d*/
        continue; /*0x69bf6d*/
      break; /*0x69bf6d*/
    }
  }
  v15 = 0; /*0x69bf73*/
  v58 = 0; /*0x69bf77*/
  v50 = 0; /*0x69bf7b*/
  v59 = 0; /*0x69bf7f*/
  for ( i = v70; v15 < i; v50 = v15 ) /*0x69bf89*/
  {
    if ( !*((unsigned char *)&v58 + v15) ) /*0x69bf8f*/
    {
      v17 = 0; /*0x69bf9f*/
      v18 = (unsigned int *)(*((unsigned int *)Block + v15) + 40); /*0x69bfa4*/
      *(unsigned int *)v63 = *v18; /*0x69bfab*/
      v64 = v18[1]; /*0x69bfb2*/
      v65 = v18[2]; /*0x69bfb9*/
      if ( i > 0 ) /*0x69bfbd*/
      {
        v53[0] = (int)&this->unknown_2854[9 * v52 + 373]; /*0x69bfd1*/
        do /*0x69c1f5*/
        {
          if ( v17 != v15 /*0x69bff8*/
            && !*((unsigned char *)&v58 + v17)
            && (uint8_t)NetworkID::Compare(v63, *((unsigned int *)Block + v17) + 40) )
          {
            v54 = ToWideStringChar(*((char **)Block + v17)); /*0x69c011*/
            v19 = 0; /*0x69c015*/
            v20 = (char **)dword_A8DA90; /*0x69c017*/
            while ( 1 ) /*0x69c01e*/
            {
              v21 = ToWideStringChar(*v20); /*0x69c01e*/
              if ( !_strcmpi((char *)v54, v21) ) /*0x69c029*/
                break; /*0x69c029*/
              ++v20; /*0x69c039*/
              ++v19; /*0x69c03c*/
              if ( (int)v20 >= (int)&dword_A8DAB0 ) /*0x69c043*/
              {
                v54 = 0; /*0x69c045*/
                goto LABEL_39; /*0x69c045*/
              }
            }
            v54 = v19; /*0x69c0f6*/
  LABEL_39:
            v56 = ToWideStringChar(*((char **)Block + v50)); /*0x69c04d*/
            v22 = 0; /*0x69c061*/
            v23 = (char **)dword_A8DA90; /*0x69c063*/
            while ( 1 ) /*0x69c06a*/
            {
              v24 = ToWideStringChar(*v23); /*0x69c06a*/
              if ( !_strcmpi((char *)v56, v24) ) /*0x69c075*/
                break; /*0x69c075*/
              ++v23; /*0x69c081*/
              ++v22; /*0x69c084*/
              if ( (int)v23 >= (int)&dword_A8DAB0 ) /*0x69c08b*/
              {
                v22 = 0; /*0x69c08d*/
                break; /*0x69c08d*/
              }
            }
            if ( this->unknown_2854[(unsigned int)v54 + 489] == this->unknown_2854[v22 + 489] ) /*0x69c0a3*/
            {
              v48 = v55++ + IDA_LOWORD(this->unknown_2854[(unsigned int)v54 + 489]); /*0x69c0b9*/
              Network::SetPort((Network *)(*((unsigned int *)Block + v17) + 40), v48); /*0x69c0c8*/
              v25 = (char **)Block; /*0x69c0cd*/
              *((unsigned char *)&v58 + v17) = 1; /*0x69c0d1*/
              ToWideStringChar(v25[v17]); /*0x69c0d9*/
            }
            Debug::Log(); /*0x69c0ec*/
            v26 = ToWideStringChar(*((char **)Block + v50)); /*0x69c121*/
            v27 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x69c123*/
            if ( !_strcmpi(v26, v27) ) /*0x69c12a*/
            {
              v56 = (void *)v53[0]; /*0x69c142*/
              v28 = (char *)*((unsigned int *)Block + v17); /*0x69c146*/
              ++v52; /*0x69c14d*/
              v53[0] += 36; /*0x69c151*/
              strcpy((char *)v56, ToWideStringChar(v28)); /*0x69c172*/
            }
            v29 = ToWideStringChar(*((char **)Block + v17)); /*0x69c18c*/
            v30 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x69c18e*/
            if ( !_strcmpi(v29, v30) ) /*0x69c195*/
            {
              v56 = (void *)v53[0]; /*0x69c1b1*/
              v31 = (char *)*((unsigned int *)Block + v50); /*0x69c1b6*/
              ++v52; /*0x69c1bc*/
              v53[0] += 36; /*0x69c1c0*/
              strcpy((char *)v56, ToWideStringChar(v31)); /*0x69c1e1*/
            }
            v15 = v50; /*0x69c1ea*/
          }
          i = v70; /*0x69c1ee*/
          ++v17; /*0x69c1f2*/
        }
        while ( v17 < v70 ); /*0x69c1f5*/
      }
    }
    ++v15; /*0x69c1fb*/
  }
  if ( this->unknown_2854[498] ) /*0x69c208*/
  {
    Debug::Log(); /*0x69c21c*/
    Network::SetPort((Network *)(*(unsigned int *)this->StartSpots[1] + 40), this->unknown_2854[498]); /*0x69c237*/
    v54 = 0; /*0x69c23c*/
    v32 = (char **)dword_A8DA90; /*0x69c244*/
    while ( 1 ) /*0x69c24e*/
    {
      v33 = *v32; /*0x69c24e*/
      v34 = ToWideStringChar((char *)*dword_A8DA78); /*0x69c259*/
      v35 = ToWideStringChar(v33); /*0x69c25b*/
      if ( !_strcmpi(v34, v35) ) /*0x69c262*/
        break; /*0x69c262*/
      ++v32; /*0x69c276*/
      v54 = (char *)v54 + 1; /*0x69c280*/
      if ( (int)v32 >= (int)&dword_A8DAB0 ) /*0x69c284*/
      {
        v36 = 0; /*0x69c286*/
        goto LABEL_58; /*0x69c286*/
      }
    }
    v36 = v54; /*0x69c48c*/
  LABEL_58:
    Network::SetPort((Network *)(this->unknown_2854[(unsigned int)v36 + 1] + 40), this->unknown_2854[498]); /*0x69c288*/
  }
  v37 = 0; /*0x69c2a5*/
  if ( this->StartSpots[4] > 0 ) /*0x69c2a9*/
  {
    v38 = (unsigned short *)&this->unknown_2854[521] + 1; /*0x69c2ab*/
    do /*0x69c2d7*/
    {
      v39 = *(unsigned short *)(*(unsigned int *)(this->StartSpots[1] + 4 * v37) + 40); /*0x69c2ba*/
      *v38 = v39; /*0x69c2c1*/
      if ( !v39 ) /*0x69c2c4*/
        *v38 = 1234; /*0x69c2c6*/
      ++v37; /*0x69c2d1*/
      ++v38; /*0x69c2d2*/
    }
    while ( v37 < this->StartSpots[4] ); /*0x69c2d7*/
  }
  v40 = (unsigned int *)(*(unsigned int *)this->StartSpots[1] + 40); /*0x69c2e1*/
  *(unsigned int *)v60 = *v40; /*0x69c2e6*/
  v61 = v40[1]; /*0x69c2f2*/
  v62 = v40[2]; /*0x69c2fd*/
  Network::CopyAddress_Small((char *)v60, (int)&v57); /*0x69c301*/
  v51 = 1; /*0x69c313*/
  if ( this->StartSpots[4] > 1 ) /*0x69c317*/
  {
    v41 = 4; /*0x69c31d*/
    do /*0x69c430*/
    {
      if ( (uint8_t)NetworkID::Compare(v60, *(unsigned int *)(v41 + this->StartSpots[1]) + 40) ) /*0x69c333*/
      {
        ToWideStringChar(*(char **)(v41 + this->StartSpots[1])); /*0x69c349*/
        Debug::Log(); /*0x69c354*/
        v42 = (char *)&this->unknown_2854[80]; /*0x69c362*/
        v54 = &this->unknown_2854[1]; /*0x69c368*/
        v55 = 8; /*0x69c36c*/
        do /*0x69c416*/
        {
          v43 = *(char **)v54; /*0x69c381*/
          v56 = ToWideStringChar(*(char **)(v41 + this->StartSpots[1])); /*0x69c38a*/
          v44 = ToWideStringChar(v43); /*0x69c38e*/
          if ( !_strcmpi((char *)v56, v44) ) /*0x69c399*/
          {
            Network::CopyAddress_Small(v42, (int)v53); /*0x69c3ac*/
            v45 = (NetworkID *)(*(unsigned int *)(v41 + this->StartSpots[1]) + 40); /*0x69c3be*/
            NetworkID::Assign(v45, 0, (int)v53, *(unsigned short *)v45->__pad_0); /*0x69c3c8*/
            ToWideStringChar(*(char **)(v41 + this->StartSpots[1])); /*0x69c3d6*/
            Network::FormatAddress((Network *)(*(unsigned int *)(v41 + this->StartSpots[1]) + 40), 0); /*0x69c3eb*/
            Debug::Log(); /*0x69c3f7*/
          }
          v42 += 12; /*0x69c40a*/
          v46 = v55 == 1; /*0x69c40d*/
          v54 = (char *)v54 + 4; /*0x69c40e*/
          --v55; /*0x69c412*/
        }
        while ( !v46 ); /*0x69c416*/
      }
      v41 += 4; /*0x69c427*/
      ++v51; /*0x69c42c*/
    }
    while ( v51 < this->StartSpots[4] ); /*0x69c430*/
  }
  if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x69c440*/
  {
    v47 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 112))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x69c444*/
    IDA_LOWORD(v47) = IDA_HIWORD(this->unknown_2854[521]); /*0x69c44d*/
    (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)&stru_887598.isAliveFlag + 92))( /*0x69c457*/
      *(unsigned int *)&stru_887598.isAliveFlag,
      v47);
    (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 28))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x69c462*/
  }
  v66 = (void*)&VectorClass_NodeNameType___vftable; /*0x69c469*/
  if ( Block ) /*0x69c473*/
  {
    if ( v69 ) /*0x69c47b*/
      RA2_OPDEL(Block); /*0x69c47e*/
  }
}
// 0x78F000
Coord * * SessionClass::BuildLaunchString()
{
  signed int inited; // eax
  int v2; // ecx
  int v3; // ebp
  int v4; // ebx
  ObjectClass **v5; // edi
  ObjectClass *v6; // esi
  ObjectClass **v7; // esi
  char *v8; // esi
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // edi
  char *v14; // eax
  char **v15; // [esp-14h] [ebp-A0h]
  char **v16; // [esp-Ch] [ebp-98h]
  char **v17; // [esp-4h] [ebp-90h]
  char **v18; // [esp+4h] [ebp-88h]
  char *v19; // [esp+14h] [ebp-78h] BYREF
  int v20; // [esp+18h] [ebp-74h]
  String v21; // [esp+1Ch] [ebp-70h] BYREF
  char *v22; // [esp+24h] [ebp-68h] BYREF
  String v23; // [esp+28h] [ebp-64h] BYREF
  String v24; // [esp+30h] [ebp-5Ch] BYREF
  String v25; // [esp+38h] [ebp-54h] BYREF
  char v26[80]; // [esp+3Ch] [ebp-50h] BYREF

  inited = SessionClass::initPlayers(*(SessionClass **)&stru_A8B250.__pad_0[4]); /*0x78f009*/
  v2 = 1; /*0x78f014*/
  if ( g_MenuStateFlags == 1 ) /*0x78f01b*/
    ++inited; /*0x78f01d*/
  v3 = 0; /*0x78f01f*/
  v19 = 0; /*0x78f025*/
  v20 = 0; /*0x78f029*/
  if ( inited <= 1 ) /*0x78f02d*/
    goto LABEL_15; /*0x78f02d*/
  v4 = inited - 1; /*0x78f030*/
  v5 = (ObjectClass **)&unk_A8DA94; /*0x78f033*/
  *(unsigned int *)v21.__pad_0 = inited; /*0x78f03b*/
  do /*0x78f079*/
  {
    v6 = *v5; /*0x78f03f*/
    if ( *v5 == (ObjectClass *)g_HouseClass_ObserverFlags || v6 == (ObjectClass *)g_Lobby_MaxPlayers ) /*0x78f050*/
    {
      ++v19; /*0x78f071*/
    }
    else if ( (uint8_t)IsKnownPointer(*v5) ) /*0x78f054*/
    {
      ++v3; /*0x78f05d*/
    }
    else if ( (uint8_t)Player::IsObserver((Player *)v6) ) /*0x78f062*/
    {
      ++v20; /*0x78f06b*/
    }
    ++v5; /*0x78f075*/
    --v4; /*0x78f078*/
  }
  while ( v4 ); /*0x78f079*/
  if ( *(int *)v21.__pad_0 < 8 ) /*0x78f083*/
  {
    v2 = *(unsigned int *)v21.__pad_0; /*0x78f085*/
  LABEL_15:
    v7 = (ObjectClass **)(4 * v2 + 11066000); /*0x78f087*/
    do /*0x78f0b2*/
    {
      if ( *v7 == (ObjectClass *)g_Lobby_MaxPlayers ) /*0x78f097*/
      {
        ++v19; /*0x78f099*/
      }
      else if ( (uint8_t)IsKnownPointer(*v7) ) /*0x78f09f*/
      {
        ++v3; /*0x78f0a8*/
      }
      ++v7; /*0x78f0a9*/
    }
    while ( (int)v7 < (int)&dword_A8DAB0 ); /*0x78f0b2*/
  }
  if ( ppv ) /*0x78f0bb*/
  {
    v8 = &v19[v3 + 1]; /*0x78f0ca*/
    v18 = String::Assign(&v25, String2); /*0x78f0df*/
    v17 = FromStringInt((char **)&v24.m_3[1], (int)v8); /*0x78f0ec*/
    v16 = String::Assign(&v24, asc_84BA48); /*0x78f100*/
    v15 = String::Assign((String *)&v23.m_3[1], &stru_B76AC4.needsRedraw); /*0x78f118*/
    v9 = String::Assign(&v23, aMode_0); /*0x78f11f*/
    v10 = String::Concat((String *)v9, &v22, v15); /*0x78f126*/
    v11 = String::Concat((String *)v10, (char **)&v21.m_3[1], v16); /*0x78f12d*/
    v12 = String::Concat((String *)v11, &v19, v17); /*0x78f134*/
    String::Concat((String *)v12, (char **)&v21, v18); /*0x78f13b*/
    DeleteAndZero((ObjectClass *)&v19); /*0x78f144*/
    DeleteAndZero((ObjectClass *)&v21.m_3[1]); /*0x78f14d*/
    DeleteAndZero((ObjectClass *)&v22); /*0x78f156*/
    DeleteAndZero((ObjectClass *)&v23); /*0x78f15f*/
    DeleteAndZero((ObjectClass *)&v23.m_3[1]); /*0x78f168*/
    DeleteAndZero((ObjectClass *)&v24); /*0x78f171*/
    DeleteAndZero((ObjectClass *)&v24.m_3[1]); /*0x78f17a*/
    DeleteAndZero((ObjectClass *)&v25); /*0x78f183*/
    v13 = *(unsigned int *)ppv; /*0x78f191*/
    v14 = String::GetOrEmpty(&v21); /*0x78f193*/
    (*(void (__stdcall **)(LPVOID, char *))(v13 + 156))(ppv, v14); /*0x78f1a0*/
    memset(v26, 0, sizeof(v26)); /*0x78f1b1*/
    GameConfig::BuildChecksum(v26); /*0x78f1b7*/
    v26[40] = 0; /*0x78f1c5*/
    (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 168))(ppv, v26); /*0x78f1ce*/
    (*(void (__stdcall **)(LPVOID, int, char *))(*(unsigned int *)ppv + 252))(ppv, 1, &v8[v20]); /*0x78f1e5*/
    DeleteAndZero((ObjectClass *)&v21); /*0x78f1ef*/
  }
}
// 0x69A310
unsigned int SessionClass::GetPlayerColorScheme(ObjectClass * aP0)
{
  int result; // eax

  result = aP0; /*0x69a310*/
  if ( aP0 == -2 ) /*0x69a317*/
    return unk_83ED1C; /*0x69a31e*/
  if ( aP0 < 9 ) /*0x69a32b*/
    return byte_83ED14[aP0]; /*0x69a32d*/
  return result; /*0x69a325*/
}
// 0x69B760
int SessionClass::AssignSide(int a2, MPCooperative * aP2)
{
  int result; // eax
  int Side2; // edx

  result = a2; /*0x69b760*/
  if ( a2 == -2 ) /*0x69b76a*/
  {
    IDA_LOBYTE(result) = aP2; /*0x69b76c*/
    if ( aP2 ) /*0x69b772*/
    {
      result = Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69b783*/
      this->Side = result; /*0x69b788*/
      this->Side2 = -2; /*0x69b78e*/
    }
    else
    {
      this->Side = 0; /*0x69b79a*/
      this->Side2 = -2; /*0x69b7a4*/
    }
  }
  else
  {
    this->Side = a2; /*0x69b7b0*/
    this->Side2 = -1; /*0x69b7b6*/
  }
  Side2 = this->Side2; /*0x69b7c6*/
  this->idxSide = this->Side; /*0x69b7cc*/
  this->idxSide2 = Side2; /*0x69b7d2*/
  return result; /*0x69b7d8*/
}
// 0x69BBE0
char SessionClass::GetGameSpeed()
{
  int result; // eax

  IDA_LOBYTE(result) = this->CurrentlyInGame; /*0x69bbe0*/
  return result; /*0x69bbe6*/
}
// 0x69C4A0
void SessionClass::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x69c4a6*/
  this->m_10 = 0; /*0x69c4a9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x69c4b0*/
  {
    RA2_OPDEL(v2); /*0x69c4b6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x69c4be*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x69c4c1*/
  this->m_8 = 0; /*0x69c4c4*/
}
// 0x69C4D0
unsigned int SessionClass::Write(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x69c4d0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x69c4e5*/
  else
    return 0; /*0x69c4d7*/
}
// 0x69C4F0
int SessionClass::Seek(int a2)
{
  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x69c4fa*/
}
// 0x69C6C0
TypeList_flat * SessionClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69c6c3*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_enum_DiskID_vftable; /*0x69c6c6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x69c6d0*/
  {
    RA2_OPDEL(v3); /*0x69c6d8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x69c6e0*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x69c6eb*/
  this->m_8 = 0; /*0x69c6f1*/
  if ( (a2 & 1) != 0 ) /*0x69c6f8*/
    RA2_OPDEL(this); /*0x69c6fb*/
  return this->__pad_0; /*0x69c705*/
}
// 0x69C710
char SessionClass::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69c712*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x69c71d*/
  {
    v3 = 0; /*0x69c71f*/
    if ( m_8 <= 0 ) /*0x69c723*/
      return 1; /*0x69c743*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x69c725*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x69c72b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x69c734*/
    {
      ++v3; /*0x69c736*/
      ++v4; /*0x69c737*/
      if ( v3 >= m_8 ) /*0x69c73c*/
        return 1; /*0x69c73c*/
    }
  }
  return 0; /*0x69c73e*/
}
// 0x69C750
char SessionClass::addPlayer(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69c75c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x69c766*/
    if ( a3 ) /*0x69c76c*/
      v4 = a3; /*0x69c782*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x69c77e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x69c786*/
    if ( v4 ) /*0x69c78a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x69c795*/
      {
        m_8 = this->m_8; /*0x69c79c*/
        if ( a2 < m_8 ) /*0x69c7a1*/
          m_8 = a2; /*0x69c7a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x69c7a9*/
          ++i; /*0x69c7ae*/
        if ( IDA_BYTE1(this->m_C) ) /*0x69c7bb*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x69c7c6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x69c7ce*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x69c7d7*/
      this->m_8 = a2; /*0x69c7df*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x69c7e2*/
      return 1; /*0x69c7e8*/
    }
    else
    {
      return 0; /*0x69c78f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_W4DiskID *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x69c7f2*/
    return 1; /*0x69c7f8*/
  }
}
// 0x69C800
void SessionClass::removePlayer()
{
  if ( *(unsigned int *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x69c80d*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x69c813*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x69c81b*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x69c81e*/
  this->m_8 = 0; /*0x69c821*/
}
// 0x69C830
int SessionClass::findPlayer(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x69c830*/
    return 0; /*0x69c838*/
  m_8 = this->m_8; /*0x69c83e*/
  result = 0; /*0x69c841*/
  if ( m_8 <= 0 ) /*0x69c845*/
    return -1; /*0x69c85c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x69c84b*/
  {
    if ( ++result >= m_8 ) /*0x69c85a*/
      return -1; /*0x69c85a*/
  }
  return result; /*0x69c83a*/
}
// 0x69C870
unsigned int SessionClass::updatePlayer(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x69c870*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x69c885*/
  else
    return 0; /*0x69c877*/
}
// 0x69C890
char SessionClass::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69c89c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x69c8a2*/
    if ( a3 ) /*0x69c8a8*/
      v4 = a3; /*0x69c8be*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x69c8ba*/
    IDA_LOBYTE(this->m_C) = 1; /*0x69c8c2*/
    if ( !v4 ) /*0x69c8c6*/
      return 0; /*0x69c93a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x69c8c8*/
    {
      m_8 = this->m_8; /*0x69c8cf*/
      if ( a2 < m_8 ) /*0x69c8d4*/
        m_8 = a2; /*0x69c8d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x69c8dc*/
        ++i; /*0x69c8e1*/
      if ( IDA_BYTE1(this->m_C) ) /*0x69c8ee*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x69c8f9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x69c901*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x69c90a*/
    this->m_8 = a2; /*0x69c912*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x69c915*/
  }
  else
  {
    (*(void (__thiscall **)(_TypeList_W4DiskID *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x69c91e*/
  }
  v7 = this->m_8; /*0x69c921*/
  if ( v7 < this->m_10 ) /*0x69c929*/
    this->m_10 = v7; /*0x69c92b*/
  return 1; /*0x69c92e*/
}
// 0x69C940
int SessionClass::Read(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x69c940*/
  result = 0; /*0x69c943*/
  if ( m_10 <= 0 ) /*0x69c948*/
    return -1; /*0x69c95f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x69c94e*/
  {
    if ( ++result >= m_10 ) /*0x69c95d*/
      return -1; /*0x69c95d*/
  }
  return result; /*0x69c962*/
}
// 0x69D460
VectorClass_flat * SessionClass::validateGame(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d463*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_enum_DiskID_vftable; /*0x69d466*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x69d470*/
  {
    RA2_OPDEL(v3); /*0x69d478*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x69d480*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x69d48b*/
  this->m_8 = 0; /*0x69d491*/
  if ( (a2 & 1) != 0 ) /*0x69d498*/
    RA2_OPDEL(this); /*0x69d49b*/
  return this->__pad_0; /*0x69d4a5*/
}
// 0x7B2720
void SessionClass::SetInstance()
{
  dword_B780A0 = (int)this; /*0x7b2720*/
}