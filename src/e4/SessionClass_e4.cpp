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
#include "e4/e4_protos.h"

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
  *(_DWORD *)(&this->SessionClass_field_10 * this->ptr_44 + 40) = v7; /*0x540e1a*/
  v8 = *(_DWORD *)(&this->SessionClass_field_10 * this->ptr_44 + 40); /*0x540e21*/
  if ( !v8 ) /*0x540e27*/
    return 0; /*0x540e29*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x540e31*/
  *(_DWORD *)(*(_DWORD *)(&this->SessionClass_field_10 * this->ptr_44 + 40) + 40) = this->q058; /*0x540e3e*/
  *(_DWORD *)(*(_DWORD *)(&this->SessionClass_field_10 * this->ptr_44 + 40) + 44) = this->q05C; /*0x540e4b*/
  *(_DWORD *)(*(_DWORD *)(&this->SessionClass_field_10 * (this->ptr_44)++ + 40) + 48) = this->q060; /*0x540e58*/
  return 1; /*0x540dcc*/
}
} // namespace gamemd
// 0x540E70
namespace gamemd {
int SessionClass::initInternet()
{
  int result; // eax
  void *v3; // ebp
  int v4; // ebx
  int v5; // edi
  char *v6; // eax

  if ( !this->MPGameMode ) /*0x540e73*/
    return 0; /*0x540e7a*/
  v3 = RA2_OPNEW(0xB8u); /*0x540e89*/
  if ( v3 ) /*0x540e90*/
  {
    v4 = Game_PlayerInfoArray; /*0x540e93*/
    v5 = this->SessionClass_field_14; /*0x540e9a*/
    v6 = CharToWideString(aMulticast); /*0x540ea4*/
    result = (int)IPXConnClass::constructor( /*0x540ebf*/
                    v3,
                    v5,
                    v5,
                    this->SessionClass_field_10,
                    this->u32_20,
                    (_DWORD *)(*(_DWORD *)v4 + 40),
                    -1,
                    (wchar_t *)v6,
                    0);
  }
  else
  {
    result = 0; /*0x540ec8*/
  }
  this->u32_50 = result; /*0x540ecc*/
  if ( result ) /*0x540ed0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)result + 4))(result); /*0x540ed8*/
    *(_DWORD *)(this->u32_50 + 40) = this->q058; /*0x540ee1*/
    *(_DWORD *)(this->u32_50 + 44) = this->q05C; /*0x540eea*/
    *(_DWORD *)(this->u32_50 + 48) = this->q060; /*0x540ef8*/
    return 1; /*0x540ef3*/
  }
  return result; /*0x540e7c*/
}
} // namespace gamemd
// 0x552CC0
namespace gamemd {
unsigned int * SessionClass::Load()
{
  _DWORD *v2; // eax
  _DWORD *result; // eax
  _DWORD *v4; // eax
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
        PlayerSide = (void *)SessionClass::GetPlayerSide(*(_DWORD *)Game_PlayerInfoArray); /*0x552d51*/
        return PaletteManager::Load(PlayerSide); /*0x552d58*/
      }
      else
      {
        v6 = *((_DWORD *)g_ScenarioClass_Instance + 3374); /*0x72b3e8*/
        if ( !dword_B0FB80 ) /*0x72b3ea*/
          LoadPaletteSimple(off_844BAC, &dword_B0FB7C, &dword_B0FB80); /*0x72b3fc*/
        if ( !dword_B0FB88 ) /*0x72b408*/
        {
          if ( v6 ) /*0x72b40c*/
          {
            v7 = off_844BB4[0]; /*0x72b420*/
            if ( v6 != 1 ) /*0x72b433*/
              v7 = off_844BB8; /*0x72b435*/
            LoadPaletteSimple(v7, &dword_B0FB84, &dword_B0FB88); /*0x72b43b*/
          }
          else
          {
            LoadPaletteSimple(off_844BB0[0], &dword_B0FB84, &dword_B0FB88); /*0x72b41e*/
          }
        }
        result = (_DWORD *)dword_B0FB90; /*0x72b440*/
        if ( !dword_B0FB90 ) /*0x72b448*/
          return (_DWORD *)LoadPaletteSimple(off_844BBC, &dword_B0FB8C, &dword_B0FB90); /*0x72b45a*/
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
  _DWORD *v6; // edi
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
  v4 = *((_DWORD *)dword_8B4124 + *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + *(_DWORD *)(aP1 + 7284)) + 188)); /*0x5adf5b*/
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
    v10 = *(_DWORD *)(v8 + 88); /*0x5ae025*/
    if ( *(_DWORD *)(v10 + 4 * v9) ) /*0x5ae028*/
      break; /*0x5ae028*/
  LABEL_14:
    if ( ++v9 >= *(_DWORD *)(v8 + 100) ) /*0x5ae094*/
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
  _DWORD *v2; // ebp
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
  _DWORD *v30; // esi
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
  _DWORD v50[10]; // [esp+3Ch] [ebp-A0h] BYREF
  char v51; // [esp+64h] [ebp-78h]
  int v52; // [esp+68h] [ebp-74h]
  int v53; // [esp+6Ch] [ebp-70h]
  _DWORD v54[22]; // [esp+70h] [ebp-6Ch] BYREF
  _BYTE v55[12]; // [esp+C8h] [ebp-14h] BYREF
  int v56; // [esp+D4h] [ebp-8h]

  v2 = this; /*0x5ceef8*/
  CCFileClass::Construct3((int)v54); /*0x5cef04*/
  v3 = 0; /*0x5cef09*/
  v49[1] = 0; /*0x5cef0f*/
  v49[2] = 0; /*0x5cef13*/
  GenericList::Constructor(v50); /*0x5cef17*/
  v50[0] = &(void*)(void*)&List_INIClass_INISection___vftable; /*0x5cef20*/
  memset(&v50[7], 0, 12); /*0x5cef28*/
  v51 = 0; /*0x5cef34*/
  v52 = 0; /*0x5cef39*/
  v53 = 0; /*0x5cef3d*/
  v49[0] = &(void*)(void*)&INIClass_vftable; /*0x5cef41*/
  unknown_libname_73(&v46); /*0x5cef49*/
  unknown_libname_73(&v44); /*0x5cef52*/
  SessionClass::Destruct(v2); /*0x5cef59*/
  (*(void (__thiscall **)(_DWORD *, char *))(v54[0] + 8))(v54, aMapselmdIni); /*0x5cef6b*/
  (*(void (__thiscall **)(_DWORD *, int))(v54[0] + 28))(v54, 1); /*0x5cef78*/
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
    v7 = (char **)RA2_OPNEW(0x6Cu); /*0x5cefef*/
    if ( !v7 ) /*0x5ceff9*/
      goto LABEL_17; /*0x5ceff9*/
    v8 = MSChoiceClass::LoadFromINI(v7, v49, (const char **)&v44); /*0x5cf00c*/
    if ( !v8 ) /*0x5cf010*/
      goto LABEL_17; /*0x5cf010*/
    v9 = v2[2]; /*0x5cf012*/
    if ( v2[4] < v9 /*0x5cf038*/
      || (*((_BYTE *)v2 + 13) || !v9)
      && (v10 = v2[5], v10 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v9 + v10, 0) )
    {
      v11 = v2[4]; /*0x5cf03f*/
      v12 = v2[1]; /*0x5cf042*/
      v2[4] = v11 + 1; /*0x5cf048*/
      *(_DWORD *)(v12 + 4 * v11) = v8; /*0x5cf04b*/
    }
    if ( ++v4 > 100 ) /*0x5cf052*/
    {
      v3 = 0; /*0x5cf071*/
      break; /*0x5cf071*/
    }
    v3 = 0; /*0x5cf054*/
  }
  if ( v2[4] ) /*0x5cf073*/
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
          v2[6] = v17; /*0x5cf1bb*/
        }
        v18 = String::Tokenize((const char **)&v44, v16, Delimiter, (void **)&v43); /*0x5cf1d6*/
        if ( String::Length((const char **)&v43) ) /*0x5cf1d8*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&v43); /*0x5cf1e5*/
          v2[7] = v19; /*0x5cf1ea*/
        }
        v20 = String::Tokenize((const char **)&v44, v18, Delimiter, (void **)&v43); /*0x5cf205*/
        if ( String::Length((const char **)&v43) ) /*0x5cf207*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&v43); /*0x5cf214*/
          v2[8] = v21; /*0x5cf219*/
        }
        String::Tokenize((const char **)&v44, v20, Delimiter, (void **)&v43); /*0x5cf22b*/
        if ( String::Length((const char **)&v43) ) /*0x5cf234*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&v43); /*0x5cf241*/
          v2[9] = v22; /*0x5cf246*/
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
        v27 = RA2_OPNEW(0x10u); /*0x5cf306*/
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
            || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*v30 + 8))((char *)&this->q02C, v29 + v31, 0) )
          {
            continue; /*0x5cf350*/
          }
        }
        v32 = v30[4]; /*0x5cf357*/
        v33 = v30[1]; /*0x5cf35a*/
        v30[4] = v32 + 1; /*0x5cf360*/
        *(_DWORD *)(v33 + 4 * v32) = v28; /*0x5cf363*/
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
                v37 = RA2_OPNEW(0x10u); /*0x5cf4e4*/
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
                  v39 = v2[19]; /*0x5cf52e*/
                  if ( v2[21] < v39 /*0x5cf556*/
                    || (*((_BYTE *)v2 + 81) || !v39)
                    && (v40 = v2[22], v40 > 0)
                    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(v2[17] + 8))(v2 + 17, v39 + v40, 0) )
                  {
                    v41 = v2[21]; /*0x5cf55d*/
                    v42 = v2[18]; /*0x5cf560*/
                    v2[21] = v41 + 1; /*0x5cf566*/
                    *(_DWORD *)(v42 + 4 * v41) = v38; /*0x5cf569*/
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
    v54[0] = &(void*)(void*)&CCFileClass_vftable; /*0x5cf5b8*/
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
    v54[0] = &(void*)(void*)&CCFileClass_vftable; /*0x5cf0a7*/
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

  for ( i = 0; i < *(&this->q0081); ++i ) /*0x5cf5fc*/
  {
    v3 = *(&this->q0048); /*0x5cf5fe*/
    v4 = *(void **)(v3 + 4 * i); /*0x5cf601*/
    if ( v4 ) /*0x5cf606*/
    {
      DeleteAndZero(*(void ***)(v3 + 4 * i)); /*0x5cf60a*/
      RA2_OPDEL(v4); /*0x5cf610*/
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*(&this->q0047) + 12))(&this->q0047); /*0x5cf626*/
  this->q018 = 0; /*0x5cf629*/
  this->q01C = 0; /*0x5cf630*/
  this->q020 = 640; /*0x5cf637*/
  this->q024 = 400; /*0x5cf63e*/
  for ( j = 0; j < *(&this->q0045); ++j ) /*0x5cf64c*/
  {
    v6 = *(&this->q0042); /*0x5cf64e*/
    v7 = *(void **)(v6 + 4 * j); /*0x5cf651*/
    if ( v7 ) /*0x5cf656*/
    {
      DeleteAndZero(*(void ***)(v6 + 4 * j)); /*0x5cf65a*/
      RA2_OPDEL(v7); /*0x5cf660*/
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*(&this->q0041) + 12))(&this->q0041); /*0x5cf676*/
  for ( k = 0; k < this->q010; ++k ) /*0x5cf680*/
  {
    v9 = this->q004; /*0x5cf682*/
    v10 = *(void **)(v9 + 4 * k); /*0x5cf685*/
    if ( v10 ) /*0x5cf68a*/
    {
      SessionClass::loadSettings(*(_DWORD *)(v9 + 4 * k)); /*0x5cf68e*/
      RA2_OPDEL(v10); /*0x5cf694*/
    }
  }
  return 0; /*0x5cf6ab*/
}
} // namespace gamemd
// 0x5D0070
namespace gamemd {
CampaignClass * * SessionClass::loadSettings()
{
  int i; // ebp
  void **v3; // edi
  int j; // ebp
  int v5; // ecx
  void *v6; // edi
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  int v10; // ebx
  void **v11; // edi

  for ( i = 0; i < this->PlayerColor; ++i ) /*0x5d007f*/
  {
    v3 = *(void ***)(this->q040 + 4 * i); /*0x5d0084*/
    if ( v3 ) /*0x5d0089*/
    {
      DeleteAndZero::Alt(v3 + 3); /*0x5d008e*/
      RA2_OPDEL(v3); /*0x5d0094*/
    }
  }
  for ( j = 0; j < this->u32_64; ++j ) /*0x5d00ab*/
  {
    v5 = this->q058; /*0x5d00ad*/
    v6 = *(void **)(v5 + 4 * j); /*0x5d00b0*/
    if ( v6 ) /*0x5d00b5*/
    {
      DeleteAndZero(*(void ***)(v5 + 4 * j)); /*0x5d00b9*/
      RA2_OPDEL(v6); /*0x5d00bf*/
    }
  }
  v7 = *(void **)(&this->u32_208); /*0x5d00cf*/
  this->u32_54 = &(void*)(void*)&VectorClass_MapSelection___vftable; /*0x5d00d2*/
  if ( v7 && this->Side ) /*0x5d00dd*/
  {
    RA2_OPDEL(v7); /*0x5d00e3*/
    this->q058 = 0; /*0x5d00eb*/
  }
  this->Side = 0; /*0x5d00ee*/
  this->q05C = 0; /*0x5d00f1*/
  v8 = *(void **)(&this->Config4); /*0x5d00f4*/
  this->u32_3C = &(void*)(void*)&VectorClass_MSTextEntry___vftable; /*0x5d00f7*/
  if ( v8 && this->u32_49 ) /*0x5d0102*/
  {
    RA2_OPDEL(v8); /*0x5d0108*/
    this->q040 = 0; /*0x5d0110*/
  }
  this->u32_49 = 0; /*0x5d0113*/
  this->ptr_44 = 0; /*0x5d0116*/
  v9 = *(void **)(&this->SessionClass_field_100); /*0x5d0119*/
  this->q024 = &(void*)(void*)&VectorClass_Point2D_vftable; /*0x5d011c*/
  if ( v9 && this->u8_31 ) /*0x5d0127*/
  {
    RA2_OPDEL(v9); /*0x5d012d*/
    this->ptr_28 = 0; /*0x5d0135*/
  }
  this->u8_31 = 0; /*0x5d013b*/
  this->q02C = 0; /*0x5d013e*/
  DeleteAndZero((void **)(&this->SessionClass_field_0C2)); /*0x5d0141*/
  v10 = 2; /*0x5d0149*/
  v11 = (void **)(&this->SessionClass_field_0C2); /*0x5d014e*/
  do /*0x5d015c*/
  {
    DeleteAndZero(--v11); /*0x5d0156*/
    --v10; /*0x5d015b*/
  }
  while ( v10 ); /*0x5d015c*/
  DeleteAndZero::Alt((void **)(&this->MPGameMode6)); /*0x5d0161*/
  DeleteAndZero((void **)(&this->MPGameMode2)); /*0x5d0169*/
  DeleteAndZero((void **)(this + 8)); /*0x5d0170*/
  DeleteAndZero((void **)(this + 4)); /*0x5d0178*/
  DeleteAndZero(); /*0x5d017f*/
}
} // namespace gamemd
// 0x5D39D0
namespace gamemd {
unsigned int * SessionClass::saveSettings()
{
  *this = 0; /*0x5d39da*/
  *(this + 1) = 0; /*0x5d39dc*/
  *(this + 2) = 0; /*0x5d39df*/
  *(this + 3) = 0; /*0x5d39e2*/
  *(this + 4) = 0; /*0x5d39e5*/
  *(this + 5) = 0; /*0x5d39e8*/
  *((_BYTE *)this + 24) = 0; /*0x5d39eb*/
  *((_BYTE *)this + 25) = 0; /*0x5d39ee*/
  *((_BYTE *)this + 26) = 0; /*0x5d39f1*/
  *(this + 7) = 0; /*0x5d39f4*/
  *(this + 8) = 0; /*0x5d39f7*/
  *(this + 9) = 0; /*0x5d39fa*/
  *(this + 172) = 0; /*0x5d39fd*/
  *(this + 173) = 0; /*0x5d3a03*/
  *((_WORD *)this + 348) = 0; /*0x5d3a09*/
  *(this + 175) = 0; /*0x5d3a10*/
  *(this + 176) = 0; /*0x5d3a16*/
  *(this + 177) = 0; /*0x5d3a1c*/
  *((_WORD *)this + 20) = 0; /*0x5d3a22*/
  *((_WORD *)this + 182) = 0; /*0x5d3a26*/
  memset32(this + 1312, 65537, 7u); /*0x5d3a38*/
  return this; /*0x5d3a3c*/
}
} // namespace gamemd
// 0x5E64C0
namespace gamemd {
unsigned int SessionClass::initPlayers()
{
  int PlayerCountMap; // esi
  int v3; // eax

  if ( this == (void *)-1 ) /*0x5e64c3*/
    return 8; /*0x5e64ca*/
  PlayerCountMap = ReadPlayerCountMap((int)this); /*0x5e64d7*/
  if ( g_GameStateFlags ) /*0x5e64db*/
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 152))(g_GameStateFlags); /*0x5e64df*/
    if ( v3 != -1 && v3 < PlayerCountMap ) /*0x5e64ec*/
      PlayerCountMap = v3; /*0x5e64ee*/
  }
  if ( g_GameMode_Current[0] == 4 ) /*0x5e64f7*/
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
    RA2_OPDEL(**((void ***)this + 1)); /*0x663b53*/
    v2 = this->q010; /*0x663b58*/
    if ( v2 > 0 ) /*0x663b60*/
    {
      v3 = v2 - 1; /*0x663b62*/
      v4 = 0; /*0x663b63*/
      for ( this->q010 = v3; /*0x663b6a*/
            v4 < this->q010;
            *(_DWORD *)(this->Items + 4 * v4 - 4) = *(_DWORD *)(this->Items + 4 * v4) )
      {
        ++v4; /*0x663b6f*/
      }
    }
  }
  result = HouseClass_Count; /*0x663b85*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x663b94*/
  {
    v6 = *(_DWORD *)&HouseClass_Array->gap0[4 * i]; /*0x663ba6*/
    if ( (unsigned __int8)House::IsCurrentPlayer((void *)v6) && !v6->u8_1F6 ) /*0x663bbc*/
    {
      v7 = (char *)RA2_OPNEW(0x2Au); /*0x663bd8*/
      *v7 = i; /*0x663be2*/
      v8 = ToWideStringChar((char *)(v6 + 90154)); /*0x663be4*/
      strncpy(v7 + 1, v8, 0x14u); /*0x663bee*/
      v9 = 0; /*0x663bfb*/
      if ( Game_PlayerCount > 0 ) /*0x663bff*/
      {
        v10 = Game_PlayerInfoArray; /*0x663c01*/
        while ( *(_DWORD *)(*(_DWORD *)v10 + 111) != i ) /*0x663c12*/
        {
          ++v9; /*0x663c14*/
          v10 += 4; /*0x663c15*/
          if ( v9 >= Game_PlayerCount ) /*0x663c1a*/
            goto LABEL_15; /*0x663c1a*/
        }
        Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v9) + 40), &v16, (int)&v17); /*0x663c34*/
        *(_DWORD *)(v7 + 33) = v17; /*0x663c3d*/
        *(_WORD *)(v7 + 37) = *((_WORD *)&Network_PlayerPorts + v9); /*0x663c48*/
      }
  LABEL_15:
      v7[41] = 1; /*0x663c50*/
      v7[39] = dword_A8E2AC == v6->nextObject; /*0x663c6a*/
      v7[40] = 1 << i; /*0x663c6d*/
      v11 = this->q008; /*0x663c70*/
      if ( this->q010 < v11 /*0x663c93*/
        || (this->IsAllocated || !v11)
        && (v12 = this->CapacityIncrement, v12 > 0)
        && (*(unsigned __int8 (__thiscall **)(void *, int, _DWORD))(this->q008)(this, v11 + v12, 0) )
      {
        v13 = this->q010; /*0x663c9a*/
        v14 = this->Items; /*0x663c9d*/
        this->q010 = v13 + 1; /*0x663ca3*/
        *(_DWORD *)(v14 + 4 * v13) = v7; /*0x663ca6*/
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

  v2 = *(&this->vtable21); /*0x691500*/
  if ( v2 == -1 ) /*0x691506*/
  {
    *aP1 = -1; /*0x691510*/
    aP1[1] = 0; /*0x691512*/
    return aP1; /*0x691508*/
  }
  else
  {
    v4 = this->q024; /*0x691518*/
    *aP1 = *(_DWORD *)(v4 + 8 * v2 + 164); /*0x691527*/
    aP1[1] = *(_DWORD *)(v4 + 8 * v2 + 168); /*0x691531*/
    return aP1; /*0x69151b*/
  }
}
} // namespace gamemd
// 0x6915D0
namespace gamemd {
int SessionClass::SetField()
{
  return *(&this->vtable21) < *(_DWORD *)(this->buildingType + 160); /*0x6915e0*/
}
} // namespace gamemd
// 0x696F10
namespace gamemd {
int SessionClass::GetPlayerSide()
{
  int result; // eax

  result = -2; /*0x696f13*/
  if ( *(_DWORD *)(this + 79) != -2 ) /*0x696f1a*/
    return *(_DWORD *)(this + 75); /*0x696f1c*/
  return result; /*0x696f1f*/
}
} // namespace gamemd
// 0x696F20
namespace gamemd {
int SessionClass::GetPlayerColor()
{
  int result; // eax

  result = -2; /*0x696f23*/
  if ( this->u32_15C != -2 ) /*0x696f2a*/
    return this->ptr_53; /*0x696f2c*/
  return result; /*0x696f2f*/
}
} // namespace gamemd
// 0x696F50
namespace gamemd {
int SessionClass::GetOption()
{
  int result; // eax

  result = -2; /*0x696f53*/
  if ( this->u32_5F != -2 || this->u32_5B != -1 ) /*0x696f60*/
    return this->u32_5B; /*0x696f62*/
  return result; /*0x696f65*/
}
} // namespace gamemd
// 0x696F70
namespace gamemd {
int SessionClass::GetOption2()
{
  int result; // eax

  result = -2; /*0x696f73*/
  if ( this->ptr_67 != -2 || this->ptr_63 != -1 ) /*0x696f80*/
    return this->ptr_63; /*0x696f82*/
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
    this->q12C = 0; /*0x696f99*/
    this->q04F = -2; /*0x696fa0*/
  }
  else
  {
    this->q12C = aP1; /*0x696fa6*/
    this->q04F = -1; /*0x696fa9*/
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
    this->q14C = -1; /*0x696fc9*/
    this->q15C = -2; /*0x696fd0*/
  }
  else
  {
    this->q14C = a2; /*0x696fd6*/
    this->q15C = -1; /*0x696fd9*/
  }
}
} // namespace gamemd
// 0x696FF0
namespace gamemd {
int SessionClass::SetOption(SessionClass * aP1)
{
  int result; // eax

  result = aP1; /*0x696ff0*/
  if ( aP1 == -2 ) /*0x696ff7*/
  {
    this->q16C = -1; /*0x696ff9*/
    this->u32_5F = -2; /*0x697000*/
  }
  else
  {
    this->q16C = aP1; /*0x697006*/
    this->u32_5F = -1; /*0x697009*/
  }
  return result; /*0x697003*/
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
    this->u32_63 = -1; /*0x697029*/
    this->u32_67 = -2; /*0x697030*/
  }
  else
  {
    this->u32_63 = aP1; /*0x697036*/
    this->u32_67 = -1; /*0x697039*/
  }
  return result; /*0x697033*/
}
} // namespace gamemd
// 0x6970A0
SessionClass::SessionClass()
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  _BYTE *v8; // edi
  _BYTE *v9; // esi
  int v10; // edi
  DWORD *v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // ecx
  int v18; // [esp+10h] [ebp-4h]

  *((_DWORD *)this + 1) = 0; /*0x6970b8*/
  *((_DWORD *)this + 99) = 0; /*0x6970bb*/
  *((_DWORD *)this + 100) = 0; /*0x6970c1*/
  *((_DWORD *)this + 101) = 1; /*0x6970c7*/
  *((_DWORD *)this + 102) = 10000; /*0x6970cd*/
  *((_DWORD *)this + 103) = 10; /*0x6970d3*/
  *(this + 416) = 1; /*0x6970d9*/
  *(this + 417) = 1; /*0x6970df*/
  *(this + 418) = 1; /*0x6970e5*/
  *(this + 419) = 1; /*0x6970eb*/
  *(this + 420) = 1; /*0x6970f1*/
  v2 = this + 428; /*0x6970f7*/
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
  *((_DWORD *)this + 130) = 0; /*0x697110*/
  *((_DWORD *)this + 131) = 0; /*0x697116*/
  *((_DWORD *)this + 132) = 1; /*0x69711c*/
  *((_DWORD *)this + 133) = 10000; /*0x697122*/
  *((_DWORD *)this + 134) = 10; /*0x697128*/
  *(this + 540) = 1; /*0x69712e*/
  *(this + 541) = 1; /*0x697135*/
  *(this + 542) = 1; /*0x69713c*/
  *(this + 543) = 1; /*0x697143*/
  *(this + 544) = 1; /*0x69714a*/
  v4 = this + 552; /*0x697151*/
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
  *((_DWORD *)this + 161) = 0; /*0x69716a*/
  *((_DWORD *)this + 162) = 0; /*0x697170*/
  *((_DWORD *)this + 163) = 1; /*0x697176*/
  *((_DWORD *)this + 164) = 10000; /*0x69717c*/
  *((_DWORD *)this + 165) = 10; /*0x697182*/
  *(this + 664) = 1; /*0x697188*/
  *(this + 665) = 1; /*0x69718f*/
  *(this + 666) = 1; /*0x697196*/
  *(this + 667) = 1; /*0x69719d*/
  *(this + 668) = 1; /*0x6971a4*/
  v6 = this + 676; /*0x6971ab*/
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
  v8 = this + 920; /*0x6971c4*/
  v18 = 8; /*0x6971ca*/
  do /*0x6971e5*/
  {
    Waypoint::InitInvalid(v8); /*0x6971d4*/
    v8 += 104; /*0x6971dd*/
    --v18; /*0x6971e1*/
  }
  while ( v18 ); /*0x6971e5*/
  *((_DWORD *)this + 421) = 0; /*0x6971ed*/
  *((_DWORD *)this + 422) = 0; /*0x6971f3*/
  *(this + 1692) = 1; /*0x6971f9*/
  *(this + 1693) = 0; /*0x697200*/
  *((_DWORD *)this + 420) = &(void*)(void*)&DynamicVectorClass_MultiMission___vftable; /*0x697206*/
  *((_DWORD *)this + 425) = 10; /*0x697210*/
  *((_DWORD *)this + 424) = 0; /*0x697216*/
  this->Waypoint_8E4.InitInvalid(); /*0x69721c*/
  *((_DWORD *)this + 573) = 0; /*0x697227*/
  *((_DWORD *)this + 574) = 0; /*0x69722d*/
  *(this + 2300) = 1; /*0x697233*/
  *(this + 2301) = 0; /*0x69723a*/
  *((_DWORD *)this + 572) = &(void*)(void*)&DynamicVectorClass_GlobalPacketType___vftable; /*0x697240*/
  *((_DWORD *)this + 577) = 10; /*0x69724a*/
  *((_DWORD *)this + 576) = 0; /*0x697250*/
  this->SessionClass_A28.saveSettings(); /*0x697256*/
  this->Waypoint_1EC4.InitInvalid(); /*0x697261*/
  CCFileClass::Construct3((int)(this + 9044)); /*0x69726c*/
  this->Waypoint_23C8.InitInvalid(); /*0x697277*/
  this->Waypoint_25CC.InitInvalid(); /*0x697282*/
  *((_DWORD *)this + 2564) = 0; /*0x69728c*/
  *((_DWORD *)this + 2565) = 0; /*0x697292*/
  *(this + 10264) = 1; /*0x697298*/
  *(this + 10265) = 0; /*0x69729f*/
  *((_DWORD *)this + 2563) = &(void*)(void*)&DynamicVectorClass_NodeNameType___vftable; /*0x6972a5*/
  *((_DWORD *)this + 2568) = 10; /*0x6972ab*/
  *((_DWORD *)this + 2567) = 0; /*0x6972b1*/
  *((_DWORD *)this + 2570) = 0; /*0x6972b7*/
  *((_DWORD *)this + 2571) = 0; /*0x6972bd*/
  *(this + 10288) = 1; /*0x6972c3*/
  *(this + 10289) = 0; /*0x6972ca*/
  *((_DWORD *)this + 2569) = &(void*)(void*)&DynamicVectorClass_NodeNameType___vftable; /*0x6972d0*/
  *((_DWORD *)this + 2574) = 10; /*0x6972d6*/
  *((_DWORD *)this + 2573) = 0; /*0x6972dc*/
  *((_DWORD *)this + 2576) = 0; /*0x6972e2*/
  *((_DWORD *)this + 2577) = 0; /*0x6972e8*/
  *(this + 10312) = 1; /*0x6972ee*/
  *(this + 10313) = 0; /*0x6972f5*/
  *((_DWORD *)this + 2575) = &(void*)(void*)&DynamicVectorClass_NodeNameType___vftable; /*0x6972fb*/
  *((_DWORD *)this + 2580) = 10; /*0x697301*/
  *((_DWORD *)this + 2579) = 0; /*0x697307*/
  *((_DWORD *)this + 2624) = 0; /*0x69730d*/
  *((_DWORD *)this + 2625) = 0; /*0x697313*/
  *(this + 10504) = 1; /*0x697319*/
  *(this + 10505) = 0; /*0x697320*/
  *((_DWORD *)this + 2623) = &off_7F11B4; /*0x697326*/
  *((_DWORD *)this + 2628) = 10; /*0x697330*/
  *((_DWORD *)this + 2627) = 0; /*0x697336*/
  *((_DWORD *)this + 2630) = 0; /*0x69733c*/
  *((_DWORD *)this + 2631) = 0; /*0x697342*/
  *(this + 10528) = 1; /*0x697348*/
  *(this + 10529) = 0; /*0x69734f*/
  *((_DWORD *)this + 2629) = &(void*)(void*)&DynamicVectorClass_char___vftable; /*0x697355*/
  *((_DWORD *)this + 2634) = 10; /*0x69735f*/
  *((_DWORD *)this + 2633) = 0; /*0x697365*/
  *((_DWORD *)this + 2636) = 0; /*0x697371*/
  *((_DWORD *)this + 2637) = 0; /*0x697377*/
  *(this + 10552) = 1; /*0x69737d*/
  *(this + 10553) = 0; /*0x697384*/
  *((_DWORD *)this + 2635) = &(void*)(void*)&DynamicVectorClass_unsigned_short_const___vftable; /*0x69738a*/
  *((_DWORD *)this + 2640) = 10; /*0x697394*/
  *((_DWORD *)this + 2639) = 0; /*0x69739a*/
  this->Waypoint_296C.InitInvalid(); /*0x6973a0*/
  this->Waypoint_2978.InitInvalid(); /*0x6973ab*/
  this->Waypoint_2988.InitInvalid(); /*0x6973b6*/
  v9 = this + 10644; /*0x6973bb*/
  v10 = 8; /*0x6973c1*/
  do /*0x6973d1*/
  {
    Waypoint::InitInvalid(v9); /*0x6973c8*/
    v9 += 12; /*0x6973cd*/
    --v10; /*0x6973d0*/
  }
  while ( v10 ); /*0x6973d1*/
  v11 = (DWORD *)(this + 12172); /*0x6973d3*/
  v12 = 8; /*0x6973d9*/
  do /*0x6973ef*/
  {
    *v11 = Timer::GetTicks(); /*0x6973e6*/
    v11[2] = 0; /*0x6973e8*/
    v11 += 3; /*0x6973eb*/
    --v12; /*0x6973ee*/
  }
  while ( v12 ); /*0x6973ef*/
  *(this + 12488) = 0; /*0x6973f1*/
  *(_DWORD *)this = 0; /*0x6973fc*/
  *((_DWORD *)this + 5) = 2; /*0x6973ff*/
  *((_DWORD *)this + 7) = 0; /*0x697402*/
  *(this + 32) = 1; /*0x697405*/
  *((_DWORD *)this + 9) = 0; /*0x697409*/
  *(this + 40) = 0; /*0x69740c*/
  *(this + 41) = 0; /*0x69740f*/
  *(this + 53) = 0; /*0x697412*/
  *((_DWORD *)this + 14) = 0; /*0x697415*/
  *(this + 42) = 0; /*0x697418*/
  *(this + 43) = 0; /*0x69741b*/
  *(this + 44) = 0; /*0x69741e*/
  *((_DWORD *)this + 12) = 0; /*0x697421*/
  *(this + 52) = 0; /*0x697424*/
  *(this + 228) = 0; /*0x697427*/
  *(this + 229) = 0; /*0x69742d*/
  *(this + 230) = 0; /*0x697433*/
  *(this + 231) = 0; /*0x697439*/
  *(this + 232) = 0; /*0x69743f*/
  *((_DWORD *)this + 16) = 1; /*0x697445*/
  *((_DWORD *)this + 81) = 0; /*0x69744c*/
  *(this + 328) = 0; /*0x697452*/
  *((_DWORD *)this + 93) = 0; /*0x69745b*/
  *((_DWORD *)this + 94) = -1; /*0x697461*/
  *((_DWORD *)this + 87) = 2; /*0x697467*/
  *((_DWORD *)this + 88) = -1; /*0x69746d*/
  *((_DWORD *)this + 97) = *((_DWORD *)this + 93); /*0x697479*/
  *((_DWORD *)this + 98) = *((_DWORD *)this + 94); /*0x697485*/
  *((_DWORD *)this + 95) = *((_DWORD *)this + 87); /*0x697491*/
  *((_DWORD *)this + 96) = *((_DWORD *)this + 88); /*0x69749d*/
  *(this + 7897) = 1; /*0x6974a3*/
  *(this + 7896) = 1; /*0x6974aa*/
  *(this + 8129) = 1; /*0x6974b1*/
  *(this + 8128) = 1; /*0x6974ba*/
  *(_DWORD *)(this + 12410) = 0; /*0x6974c1*/
  *(_DWORD *)(this + 12414) = 0; /*0x6974c9*/
  *(_DWORD *)(this + 12418) = 0; /*0x6974d4*/
  *(_DWORD *)(this + 12422) = 0; /*0x6974da*/
  *(this + 12408) = 0; /*0x6974e0*/
  *(this + 12396) = 0; /*0x6974e6*/
  *((_WORD *)this + 6199) = 0; /*0x6974ec*/
  *((_WORD *)this + 6200) = 0; /*0x6974f3*/
  *((_DWORD *)this + 3068) = 1250; /*0x6974fa*/
  *((_DWORD *)this + 3069) = 0; /*0x697504*/
  *(this + 12312) = 1; /*0x69750a*/
  *(this + 12104) = 0; /*0x697511*/
  *((_DWORD *)this + 3079) = 0; /*0x69751c*/
  memset(byte_B73E44, 0, 0x2000u); /*0x697522*/
  memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x69752e*/
  *((_DWORD *)this + 192) = 0; /*0x697530*/
  *((_DWORD *)this + 193) = 0; /*0x697536*/
  *((_DWORD *)this + 195) = -1; /*0x69753c*/
  *(this + 776) = 0; /*0x697542*/
  *(this + 10600) = 0; /*0x697548*/
  *((_DWORD *)this + 3101) = -1; /*0x697559*/
  memset(this + 12320, 0, 0x28u); /*0x69755f*/
  *((_WORD *)this + 6180) = 0; /*0x697561*/
  *((_DWORD *)this + 3107) = 0; /*0x697563*/
  *(this + 12432) = 1; /*0x697569*/
  *((_DWORD *)this + 3109) = -1; /*0x697570*/
  *(this + 12440) = 0; /*0x697576*/
  *((_DWORD *)this + 3111) = 20; /*0x69757c*/
  *((_DWORD *)this + 3112) = 0; /*0x697586*/
  *((_DWORD *)this + 3113) = 0; /*0x69758c*/
  *((_DWORD *)this + 3114) = -1; /*0x697592*/
  *((_WORD *)this + 5314) = 0; /*0x697598*/
  *(this + 1672) = 0; /*0x69759f*/
  *(this + 1673) = 0; /*0x6975a5*/
  *(this + 1674) = 0; /*0x6975b0*/
  *((_DWORD *)this + 196) = 8; /*0x6975b6*/
  *((_DWORD *)this + 198) = 15; /*0x6975c0*/
  *((_DWORD *)this + 204) = 15; /*0x6975c6*/
  *((_DWORD *)this + 197) = 0; /*0x6975cc*/
  *((_DWORD *)this + 199) = 5; /*0x6975df*/
  memset(this + 828, 0, 0x340u); /*0x6975e9*/
  v13 = *((_DWORD *)this + 2031); /*0x6975eb*/
  v14 = *((_DWORD *)this + 2261); /*0x6975f1*/
  IDA_LOBYTE(v13) = v13 & 0xFE; /*0x6975fd*/
  *((_DWORD *)this + 205) = 0; /*0x697604*/
  *((_DWORD *)this + 206) = 0; /*0x69760a*/
  *(this + 1660) = 0; /*0x697610*/
  *(this + 1661) = 0; /*0x697616*/
  *((_DWORD *)this + 416) = 0; /*0x69761c*/
  *((_DWORD *)this + 417) = 0; /*0x697622*/
  *((_WORD *)this + 3949) = 0; /*0x697628*/
  *((_DWORD *)this + 2031) = v13; /*0x69762f*/
  (*(void (__thiscall **)(char *, char *))(v14 + 8))(this + 9044, aRecordBin); /*0x697635*/
  *((_DWORD *)this + 2288) &= 0xFFFFFFF8; /*0x697648*/
  *((_DWORD *)this + 2289) = 0; /*0x697659*/
  *(this + 9172) = 0; /*0x69765f*/
  *(this + 9173) = 1; /*0x697665*/
  *(this + 9174) = 0; /*0x69766c*/
  *((_WORD *)this + 4588) = 0; /*0x697672*/
  *((_WORD *)this + 4844) = 0; /*0x697679*/
  *((_DWORD *)this + 2591) = 0; /*0x697680*/
  *((_DWORD *)this + 2649) = 1; /*0x697686*/
  *((_DWORD *)this + 2562) = 558; /*0x69768c*/
  memset(this + 2312, 0, 0x20u); /*0x697696*/
  memset(this + 2344, 0xFFu, 0x100u); /*0x6976a5*/
  *((_DWORD *)this + 2592) |= 1u; /*0x6976b6*/
  *((_DWORD *)this + 2593) = 0; /*0x6976be*/
  *((_DWORD *)this + 2594) = 760; /*0x6976c4*/
  *((_DWORD *)this + 2595) = 3; /*0x6976ce*/
  *((_DWORD *)this + 2596) = 9600; /*0x6976d8*/
  *((_DWORD *)this + 2597) = 0; /*0x6976e2*/
  *((_DWORD *)this + 2598) = -1; /*0x6976e8*/
  *((_DWORD *)this + 2599) = 0; /*0x6976ee*/
  strcpy(this + 10408, &g_INI_DefaultBuffer); /*0x697709*/
  *((_DWORD *)this + 2622) = 0; /*0x697712*/
  *((_DWORD *)this + 3115) = 0x7FFFFFFF; /*0x697718*/
  *((_DWORD *)this + 3116) = 0; /*0x697722*/
  *((_DWORD *)this + 3117) = 0; /*0x697728*/
  *((_DWORD *)this + 3118) = dword_B07740; /*0x69773a*/
  *((_DWORD *)this + 3119) = dword_B07744; /*0x697745*/
  v15 = this + 132; /*0x69774e*/
  *((_DWORD *)this + 3120) = dword_B07748; /*0x697754*/
  *(this + 12488) = 0; /*0x697757*/
  *((_DWORD *)this + 3123) = 0; /*0x69775d*/
  *((_DWORD *)this + 3124) = 0; /*0x697763*/
  *((_DWORD *)this + 3125) = 0; /*0x697769*/
  *(this + 10360) = 0; /*0x69776f*/
  *((_DWORD *)this + 15) = 0; /*0x697775*/
  v16 = 8; /*0x697778*/
  do /*0x69778e*/
  {
    *(v15 - 8) = -1; /*0x69777d*/
    *v15++ = -1; /*0x697784*/
    --v16; /*0x69778d*/
  }
  while ( v16 ); /*0x69778e*/
  *((_DWORD *)this + 3) = 0; /*0x697790*/
  *((_DWORD *)this + 4) = 0; /*0x697793*/
  *(this + 1704) = 0; /*0x697796*/
  *((_DWORD *)this + 563) = 0; /*0x69779c*/
  *(this + 2256) = 0; /*0x6977a2*/
  *((_DWORD *)this + 565) = 0; /*0x6977a9*/
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
  int *v9; // ebp
  int v10; // esi
  DWORD Ticks; // ecx
  int v12; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h] BYREF
  _BYTE v14[8]; // [esp+18h] [ebp-10h] BYREF
  _BYTE v15[8]; // [esp+20h] [ebp-8h] BYREF

  Debug::Log(); /*0x697b7e*/
  if ( g_GameMode_Current[0] != 3 && g_GameMode_Current[0] != 4 ) /*0x697b93*/
    return 0; /*0x697b9e*/
  v3 = 0; /*0x697ba7*/
  if ( *((int *)this + 2579) > 0 ) /*0x697bab*/
  {
    do /*0x697bc5*/
    {
      Debug::Log(); /*0x697bc5*/
      if ( _wcsicmp( /*0x697be7*/
             *(const wchar_t **)(*((_DWORD *)this + 2576) + 4 * v3),
             (const wchar_t *)(*((_DWORD *)HouseClass_Array
                               + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2576) + 4 * v3) + 111))
                             + 90154)) )
      {
        return 0; /*0x697bf1*/
      }
      if ( !_wcsicmp(*(const wchar_t **)(*((_DWORD *)this + 2576) + 4 * v3), (const wchar_t *)this + 6160) ) /*0x697c04*/
      {
        *((_DWORD *)this + 3101) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2576) + 4 * v3) + 111); /*0x697c25*/
        Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v3) + 40), &v13, (int)v15); /*0x697c38*/
        NetworkID::Assign(&dword_A8DBA4, &v13, (int)v15, 0); /*0x697c4d*/
        Network::SetPlayerCoords(&dword_A8DBA4); /*0x697c5c*/
      }
      v4 = *(_DWORD *)(*((_DWORD *)this + 2576) + 4 * v3); /*0x697c67*/
      *(_DWORD *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(v4 + 111)) + 516) = *(_DWORD *)(v4 + 123); /*0x697c7e*/
      Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v3) + 40), &v13, (int)v15); /*0x697c94*/
      v5 = 0; /*0x697c99*/
      for ( i = 0; i < 4; ++i ) /*0x697c9b*/
        v5 = (unsigned __int8)v15[i] | (v5 << 8); /*0x697ca8*/
      Debug::Log(); /*0x697cc7*/
      *(_DWORD *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2576) + 4 * v3) + 111)) + 512) = v5; /*0x697ce5*/
      *(_BYTE *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2576) + 4 * v3) + 111)) + 520) = 0; /*0x697d00*/
      if ( v3 > 0 ) /*0x697d06*/
      {
        v7 = *(_DWORD *)(*((_DWORD *)this + 2576) + 4 * v3); /*0x697d0e*/
        SessionClass::initLAN(*(_DWORD *)(v7 + 111), (wchar_t *)v7, v7 + 40); /*0x697d1f*/
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2576) + 4 * v3) + 115) = -1; /*0x697d2d*/
      }
    }
    while ( ++v3 < *((_DWORD *)this + 2579) ); /*0x697bc5*/
  }
  v8 = g_LastPerformanceTick; /*0x697d43*/
  v9 = Network_LastPacketTime; /*0x697d48*/
  do /*0x697d79*/
  {
    v10 = g_PerformanceTickOffset; /*0x697d4d*/
    if ( v8 != -1 ) /*0x697d56*/
    {
      Ticks = Timer::GetTicks(); /*0x697d62*/
      v8 = g_LastPerformanceTick; /*0x697d64*/
      v10 += Ticks - g_LastPerformanceTick; /*0x697d6b*/
    }
    *v9++ = v10; /*0x697d6d*/
  }
  while ( (int)v9 < (int)&byte_A8E2A4 ); /*0x697d79*/
  if ( *(_DWORD *)this != 4 ) /*0x697d7e*/
    goto LABEL_22; /*0x697d7e*/
  if ( !*((_BYTE *)this + 12432) ) /*0x697d84*/
    goto LABEL_22; /*0x697d84*/
  v12 = 0; /*0x697da0*/
  v14[0] = 0; /*0x697db0*/
  v14[1] = 0; /*0x697db4*/
  v14[2] = 0; /*0x697db8*/
  v14[3] = 0; /*0x697dbc*/
  v14[4] = 0; /*0x697dc0*/
  v14[5] = 0; /*0x697dc4*/
  NetworkID::Assign(&dword_A8DBB0, &v12, (int)v14, 0); /*0x697dc8*/
  *((_BYTE *)this + 10600) = 1; /*0x697dd2*/
  *((_DWORD *)this + 3107) = 0; /*0x697dd9*/
  *((_DWORD *)this + 3111) = 20; /*0x697ddf*/
  *((_DWORD *)this + 3109) = -1; /*0x697de9*/
  SessionClass::initInternet(g_NetworkManager); /*0x697df3*/
  SessionClass::BuildLobbyPlayerList(&g_NetworkEventQueue); /*0x697dfd*/
  if ( SessionClass::IsValidHouse((int)g_GameMode_Current, 0) ) /*0x697e08*/
  {
    if ( !(unsigned __int8)LaunchMultiplayerHost(0) /*0x697e25*/
      || !(unsigned __int8)Network::SendMasterPlayerList(&g_NetworkEventQueue) )
    {
  LABEL_22:
      g_Network_IsHosting = 0; /*0x697e2e*/
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
  v3 = *(_DWORD *)(this + 12404); /*0x697e8e*/
  if ( v3 != -1 ) /*0x697e97*/
    return *((_DWORD *)v2 + 12) == v3; /*0x697ea8*/
  if ( !_wcsicmp((const wchar_t *)v2 + 45077, (const wchar_t *)(this + 12320)) ) /*0x697eb9*/
    return 1; /*0x697ec7*/
  LABEL_9:
  v5 = 0; /*0x697ed3*/
  if ( HouseClass_Count <= 0 ) /*0x697ed7*/
    return 0; /*0x697efd*/
  for ( i = HouseClass_Array; ; i = (HouseClass *)((char *)i + 4) ) /*0x697ed9*/
  {
    v7 = *(void **)i->gap0; /*0x697edf*/
    if ( *(_BYTE *)(*(_DWORD *)i->gap0 + 492) ) /*0x697ee1*/
    {
      if ( !*((_BYTE *)v7 + 501) ) /*0x697eeb*/
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
  _DWORD *v4; // ebp
  int KeyCount; // ebx
  int v6; // edi
  unsigned __int8 *StringByIndex; // eax
  wchar_t *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  HANDLE FirstFileA; // ebx
  char *cAlternateFileName; // esi
  int v15; // ebx
  int i; // edi
  unsigned __int8 *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  HANDLE v24; // ebx
  char *cFileName; // esi
  _DWORD *v26; // eax
  _DWORD *v27; // edi
  int v28; // eax
  unsigned int v29; // kr0C_4
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // ecx
  unsigned __int8 *v33; // eax
  wchar_t *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // esi
  int v37; // ecx
  int v38; // eax
  size_t v39; // edi
  wchar_t *String; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  char *v45; // esi
  wchar_t *v46; // eax
  wchar_t *v47; // esi
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  HANDLE hFindFile; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFilea; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFileb; // [esp+20h] [ebp-5C4h]
  int v56; // [esp+24h] [ebp-5C0h] BYREF
  int j; // [esp+28h] [ebp-5BCh]
  int v58; // [esp+2Ch] [ebp-5B8h] BYREF
  int v59; // [esp+30h] [ebp-5B4h] BYREF
  int v60[3]; // [esp+34h] [ebp-5B0h] BYREF
  _DWORD v61[10]; // [esp+40h] [ebp-5A4h] BYREF
  char v62; // [esp+68h] [ebp-57Ch]
  int v63; // [esp+6Ch] [ebp-578h]
  int v64; // [esp+70h] [ebp-574h]
  int v65; // [esp+74h] [ebp-570h]
  int v66; // [esp+78h] [ebp-56Ch]
  _DWORD v67[22]; // [esp+7Ch] [ebp-568h] BYREF
  char v68[12]; // [esp+D4h] [ebp-510h] BYREF
  int v69; // [esp+E0h] [ebp-504h]
  char v70[64]; // [esp+E8h] [ebp-4FCh] BYREF
  char v71[32]; // [esp+128h] [ebp-4BCh] BYREF
  wchar_t Source[44]; // [esp+148h] [ebp-49Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1A0h] [ebp-444h] BYREF
  wchar_t Buffer[64]; // [esp+2E0h] [ebp-304h] BYREF
  wchar_t v75[64]; // [esp+360h] [ebp-284h] BYREF
  char Destination[260]; // [esp+3E0h] [ebp-204h] BYREF
  char v77[256]; // [esp+4E4h] [ebp-100h] BYREF

  Description = 0; /*0x69998b*/
  v60[1] = 0; /*0x699992*/
  v60[2] = 0; /*0x699996*/
  GenericList::Constructor(v61); /*0x69999a*/
  v3 = *(this + 420); /*0x69999f*/
  v4 = this + 420; /*0x6999a5*/
  v61[0] = &(void*)(void*)&List_INIClass_INISection___vftable; /*0x6999ad*/
  memset(&v61[7], 0, 12); /*0x6999b5*/
  v62 = 0; /*0x6999c1*/
  v63 = 0; /*0x6999c6*/
  v64 = 0; /*0x6999ca*/
  v60[0] = (int)&(void*)(void*)&INIClass_vftable; /*0x6999ce*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x6999d6*/
  CCFileClass::Construct(v67, aMissionsmdPkt); /*0x6999e2*/
  if ( CCFileClass::Open(v67, 0) ) /*0x6999ec*/
  {
    FileStraw::Open(v60, (int)v67, 0); /*0x699a03*/
    KeyCount = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)g_INI_Key_MultiMaps); /*0x699a16*/
    v6 = 0; /*0x699a18*/
    if ( KeyCount > 0 ) /*0x699a1c*/
    {
      while ( 1 ) /*0x699a3f*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x699a3f*/
                                             (char *)v60,
                                             (unsigned __int8 *)g_INI_Key_MultiMaps,
                                             v6);
        if ( INIClass::GetString( /*0x699a4e*/
               (unsigned __int8 ***)v60,
               (unsigned __int8 *)g_INI_Key_MultiMaps,
               StringByIndex,
               &g_INI_DefaultBuffer,
               v70,
               64) )
        {
          v8 = (wchar_t *)RA2_OPNEW(0x1BCu); /*0x699a5c*/
          if ( v8 ) /*0x699a66*/
            Description = MapFile::LoadDescription(v8, (unsigned __int8 ***)v60, v70); /*0x699a7c*/
          v9 = v4[2]; /*0x699a7e*/
          if ( v4[4] < v9 /*0x699aa4*/
            || (*((_BYTE *)v4 + 13) || !v9)
            && (v10 = v4[5], v10 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v9 + v10, 0) )
          {
            v11 = v4[4]; /*0x699aab*/
            v12 = v4[1]; /*0x699aae*/
            v4[4] = v11 + 1; /*0x699ab4*/
            *(_DWORD *)(v12 + 4 * v11) = Description; /*0x699ab7*/
          }
        }
        if ( ++v6 >= KeyCount ) /*0x699abd*/
          break; /*0x699abd*/
        Description = 0; /*0x699a24*/
      }
    }
  }
  INIClass::ClearSection((int)v60, 0, 0); /*0x699acb*/
  CCFileClass::Reset(v67); /*0x699ad4*/
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
          FileClass::SetFileName(v67, cAlternateFileName); /*0x699b48*/
          FileStraw::Open(v60, (int)v67, 0); /*0x699b58*/
          v15 = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)g_INI_Key_MultiMaps); /*0x699b6b*/
          for ( i = 0; i < v15; ++i )
          {
            v17 = (unsigned __int8 *)INIClass::GetStringByIndex((char *)v60, (unsigned __int8 *)g_INI_Key_MultiMaps, i); /*0x699b90*/
            if ( INIClass::GetString(
                   (unsigned __int8 ***)v60,
                   (unsigned __int8 *)g_INI_Key_MultiMaps,
                   v17,
                   &g_INI_DefaultBuffer,
                   v70,
                   64) )
            {
              v18 = (wchar_t *)RA2_OPNEW(0x1BCu); /*0x699bad*/
              v19 = v18 ? MapFile::LoadDescription(v18, (unsigned __int8 ***)v60, v70) : 0;
              v20 = v4[2]; /*0x699bd3*/
              if ( v4[4] < v20 /*0x699bf9*/
                || (*((_BYTE *)v4 + 13) || !v20)
                && (v21 = v4[5], v21 > 0)
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v20 + v21, 0) )
              {
                v22 = v4[4]; /*0x699c00*/
                v23 = v4[1]; /*0x699c03*/
                v4[4] = v22 + 1; /*0x699c09*/
                *(_DWORD *)(v23 + 4 * v22) = v19; /*0x699c0c*/
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
  INIClass::ClearSection((int)v60, 0, 0); /*0x699c42*/
  CCFileClass::Reset(v67); /*0x699c4b*/
  v24 = FindFirstFileA(aYro, &FindFileData); /*0x699c69*/
  hFindFilea = v24; /*0x699c70*/
  v65 = dword_81C1D0; /*0x699c74*/
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
          v26 = RA2_OPNEW(0x28u); /*0x699cd0*/
          if ( v26 ) /*0x699cda*/
          {
            v27 = MixFileClass::FromFile(v26, cFileName, (int)&dword_886980); /*0x699ced*/
            if ( v27 ) /*0x699cf1*/
            {
              if ( dword_884DD0 < dword_884DC8 /*0x699d2d*/
                || (byte_884DCD || !dword_884DC8)
                && dword_884DD4 > 0
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MixFileClass_Array_Alt + 8))(
                     &MixFileClass_Array_Alt,
                     dword_884DC8 + dword_884DD4,
                     0) )
              {
                v28 = dword_884DD0++; /*0x699d3a*/
                *((_DWORD *)dword_884DC4 + v28) = v27; /*0x699d49*/
              }
              v29 = strlen(cFileName) + 1; /*0x699d53*/
              v30 = v29 - 1; /*0x699d5f*/
              strncpy(Destination, cFileName, v29 - 4); /*0x699d67*/
              *((_BYTE *)&v75[62] + v30 + 1) = 0; /*0x699d8f*/
              strcat(Destination, (const char *)&off_83F4F0); /*0x699d9f*/
              Destination[v30] = 0; /*0x699da8*/
              FileClass::SetFileName(v67, Destination); /*0x699dbb*/
              if ( CCFileClass::Open(v67, 0) ) /*0x699dc7*/
              {
                FileStraw::Open(v60, (int)v67, 0); /*0x699dde*/
                v31 = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)g_INI_Key_MultiMaps); /*0x699dec*/
                v32 = 0; /*0x699df1*/
                v66 = v31; /*0x699df5*/
                for ( j = 0; j < v66; ++j ) /*0x699dfd*/
                {
                  v33 = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x699e1c*/
                                             (char *)v60,
                                             (unsigned __int8 *)g_INI_Key_MultiMaps,
                                             v32);
                  if ( INIClass::GetString( /*0x699e2b*/
                         (unsigned __int8 ***)v60,
                         (unsigned __int8 *)g_INI_Key_MultiMaps,
                         v33,
                         &g_INI_DefaultBuffer,
                         v70,
                         64) )
                  {
                    v34 = (wchar_t *)RA2_OPNEW(0x1BCu); /*0x699e3d*/
                    if ( v34 ) /*0x699e47*/
                    {
                      v35 = MapFile::LoadDescription(v34, (unsigned __int8 ***)v60, v70); /*0x699e5c*/
                      v36 = v35; /*0x699e61*/
                      if ( v35 ) /*0x699e65*/
                      {
                        v37 = *((_DWORD *)v35 + 97); /*0x699e6b*/
                        v38 = *((_DWORD *)v35 + 96); /*0x699e71*/
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
                          String = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x699f36*/
                          wcscpy(v36, String); /*0x699f3d*/
                        }
                        v41 = v4[2]; /*0x699f45*/
                        if ( v4[4] < v41 /*0x699f6a*/
                          || (*((_BYTE *)v4 + 13) || !v41)
                          && (v42 = v4[5], v42 > 0)
                          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v41 + v42, 0) )
                        {
                          v43 = v4[4]; /*0x699f71*/
                          v44 = v4[1]; /*0x699f74*/
                          v4[4] = v43 + 1; /*0x699f7a*/
                          *(_DWORD *)(v44 + 4 * v43) = v36; /*0x699f7d*/
                        }
                      }
                    }
                  }
                  v32 = j + 1; /*0x699f88*/
                }
                INIClass::ClearSection((int)v60, 0, 0); /*0x699f9b*/
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
  SetSoundWarning(v65); /*0x699fd0*/
  if ( v24 != (HANDLE)-1 ) /*0x699fd8*/
    FindClose(v24); /*0x699fdb*/
  INIClass::ClearSection((int)v60, 0, 0); /*0x699fe7*/
  CCFileClass::Reset(v67); /*0x699ff0*/
  hFindFileb = FindFirstFileA(aYrm_0, &FindFileData); /*0x69a010*/
  IDA_LOBYTE(v56) = 0; /*0x69a014*/
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
          (unsigned __int8 ***)v60,
          (unsigned __int8 *)g_INI_Key_Basic,
          (unsigned __int8 *)g_INI_Key_Name,
          g_Str_No_Name,
          v70,
          64);
        INIClass::GetString( /*0x69a095*/
          (unsigned __int8 ***)v60,
          (unsigned __int8 *)g_INI_Key_Digest,
          (unsigned __int8 *)a1,
          g_Str_No_Digest,
          v71,
          32);
        BulkCharToWide(v75, (unsigned __int8 *)v70, -1); /*0x69a0aa*/
        IDA_LOBYTE(v56) = INIClass::ReadBool_Overwrite(g_INI_Key_Basic, g_INI_Key_Official, 0); /*0x69a0c8*/
        v59 = 2; /*0x69a0f0*/
        v58 = 4; /*0x69a0f8*/
        ParseMapFileHeader(v45, v71, v77, (int)&v56, (int)&v59, (int)&v58); /*0x69a0fc*/
        v46 = (wchar_t *)RA2_OPNEW(0x1BCu); /*0x69a106*/
        if ( v46 ) /*0x69a110*/
          v47 = SessionClass::ParseGameInfo(v46, v45, v75, v71, v56, v77, v59, v58); /*0x69a141*/
        else
          v47 = 0; /*0x69a145*/
        v48 = v4[2]; /*0x69a147*/
        if ( v4[4] < v48 /*0x69a16d*/
          || (*((_BYTE *)v4 + 13) || !v48)
          && (v49 = v4[5], v49 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v48 + v49, 0) )
        {
          v50 = v4[4]; /*0x69a174*/
          v51 = v4[1]; /*0x69a177*/
          v4[4] = v50 + 1; /*0x69a17d*/
          *(_DWORD *)(v51 + 4 * v50) = v47; /*0x69a180*/
        }
      }
    }
    while ( FindNextFileA(hFindFileb, &FindFileData) ); /*0x69a190*/
    FindClose(hFindFileb); /*0x69a1a3*/
  }
  v67[0] = &(void*)(void*)&CCFileClass_vftable; /*0x69a1b2*/
  v69 = 0; /*0x69a1ba*/
  Vector::Clear((int)v68); /*0x69a1c1*/
  v67[0] = &off_7E1668; /*0x69a1ca*/
  BufferIOFileClass::Dtor(v67); /*0x69a1d2*/
  return HashTable::DestroyHashTableINIClass((void **)v60); /*0x69a1e0*/
}
// 0x69A980
ObjectClass * * SessionClass::ParseGameInfo(char * Source, CampaignScore * aP2, CCINIClass * aP3, CampaignScore * aP4, const char * a5, CampaignScore * aP6, int a8)
{
  wchar_t *v8; // esi
  wchar_t *v9; // ebx
  wchar_t *v10; // ebp
  const char *v11; // eax
  wchar_t *String; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int i; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // eax

  v9 = this + 196; /*0x69a989*/
  MapFile::Constructor(0, 0); /*0x69a997*/
  v10 = this + 210; /*0x69a99c*/
  *((_DWORD *)v9 + 5) = 10; /*0x69a9ad*/
  *((_DWORD *)v9 + 4) = 0; /*0x69a9b0*/
  *(_DWORD *)v9 = &(void*)(void*)&TypeList_enum_DiskID_vftable; /*0x69a9b7*/
  VectorClass::WstringConstructor(0, 0); /*0x69a9bd*/
  v11 = Source; /*0x69a9c2*/
  *((_DWORD *)this + 105) = &(void*)(void*)&DynamicVectorClass_Wstring_vftable; /*0x69a9c6*/
  *((_DWORD *)this + 110) = 10; /*0x69a9cf*/
  *((_DWORD *)this + 109) = 0; /*0x69a9d2*/
  if ( v11 ) /*0x69a9d9*/
  {
    strncpy((char *)this + 88, v11, 0x104u); /*0x69a9e5*/
    *((_BYTE *)this + 347) = 0; /*0x69a9ed*/
  }
  else
  {
    strcpy((char *)this + 88, aNoFileName); /*0x69aa12*/
  }
  if ( aP2 ) /*0x69aa25*/
  {
    wcsncpy(this, aP2, 0x2Cu); /*0x69aa2b*/
    this[43] = 0; /*0x69aa33*/
  }
  else
  {
    String = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x69aa4c*/
    wcscpy(this, String); /*0x69aa53*/
  }
  if ( aP3 ) /*0x69aa61*/
  {
    strncpy((char *)this + 348, aP3, 0x20u); /*0x69aa6d*/
    *((_BYTE *)this + 379) = 0; /*0x69aa75*/
  }
  else
  {
    strcpy((char *)this + 348, g_Str_No_Digest); /*0x69aa9d*/
  }
  aP4 = aP4; /*0x69aaae*/
  a8 = a8; /*0x69aab2*/
  *((_DWORD *)this + 96) = aP6; /*0x69aab6*/
  v15 = *(_DWORD *)v9; /*0x69aabc*/
  *((_BYTE *)this + 380) = aP4; /*0x69aabe*/
  *((_DWORD *)this + 97) = a8; /*0x69aac6*/
  (*(void (__thiscall **)(wchar_t *))(v15 + 12))(v9); /*0x69aacc*/
  v16 = *((_DWORD *)v9 + 2); /*0x69aacf*/
  if ( *((_DWORD *)v9 + 4) < v16 /*0x69aaf4*/
    || (*((_BYTE *)v9 + 13) || !v16)
    && (v17 = *((_DWORD *)v9 + 5), v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(wchar_t *, int, _DWORD))(v9->Capacity)(v9, v16 + v17, 0) )
  {
    v18 = *((_DWORD *)v9 + 4); /*0x69aafb*/
    v19 = *((_DWORD *)v9 + 1); /*0x69aafe*/
    *((_DWORD *)v9 + 4) = v18 + 1; /*0x69ab04*/
    *(_DWORD *)(v19 + 4 * v18) = -2; /*0x69ab07*/
  }
  if ( a5 ) /*0x69ab14*/
  {
    String::Assign(&Source, a5); /*0x69ab1f*/
    if ( String::Length((const char **)&Source) ) /*0x69ab28*/
    {
      unknown_libname_73(&aP4); /*0x69ab39*/
      for ( i = String::Tokenize((const char **)&Source, 0, Delimiter, (void **)&aP4); /*0x69ab58*/
            i != -1;
            i = String::Tokenize((const char **)&Source, i, Delimiter, (void **)&aP4) )
      {
        String::Assign((char **)&aP2, asc_830A14); /*0x69ab67*/
        String::TrimLeft((const char **)&aP4, (const char **)&aP2); /*0x69ab75*/
        DeleteAndZero((void **)&aP2); /*0x69ab7e*/
        String::Assign(&aP3, asc_830A14); /*0x69ab8c*/
        String::TrimRight((const char **)&aP4, (const char **)&aP3); /*0x69ab9a*/
        DeleteAndZero((void **)&aP3); /*0x69aba3*/
        v21 = *((_DWORD *)v10 + 2); /*0x69aba8*/
        if ( *((_DWORD *)v10 + 4) >= v21 ) /*0x69abb0*/
        {
          if ( !*((_BYTE *)v10 + 13) && v21 ) /*0x69abbb*/
            continue; /*0x69abbb*/
          v22 = *((_DWORD *)v10 + 5); /*0x69abbd*/
          if ( v22 <= 0 /*0x69abce*/
            || !(*(unsigned __int8 (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v10 + 8))(v10, v21 + v22, 0) )
          {
            continue; /*0x69abce*/
          }
        }
        v23 = *((_DWORD *)v10 + 4); /*0x69abd5*/
        *((_DWORD *)v10 + 4) = v23 + 1; /*0x69abe0*/
        String::Reassign((char **)(*((_DWORD *)v10 + 1) + 4 * v23), (const char **)&aP4); /*0x69abe9*/
      }
      DeleteAndZero((void **)&aP4); /*0x69ac11*/
    }
    DeleteAndZero((void **)&Source); /*0x69ac1a*/
  }
}
// 0x69B7E0
int SessionClass::AssignColor(int a2, MPCooperative * aP2)
{
  int result; // eax
  int v5; // edi
  int v6; // edx
  int *v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // edx
  int v12; // edx

  result = a2; /*0x69b7e0*/
  if ( a2 == -2 ) /*0x69b7ef*/
  {
    IDA_LOBYTE(result) = aP2; /*0x69b7f5*/
    if ( aP2 ) /*0x69b7fb*/
    {
      while ( 1 ) /*0x69b80e*/
      {
        result = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x69b80e*/
        if ( result == -2 ) /*0x69b815*/
          break; /*0x69b815*/
        v5 = *(this + 2579); /*0x69b817*/
        v6 = 0; /*0x69b81d*/
        if ( v5 <= 0 ) /*0x69b821*/
        {
  LABEL_12:
          v10 = 0; /*0x69b849*/
          v11 = this + 33; /*0x69b84b*/
          while ( *v11 != result ) /*0x69b853*/
          {
            ++v10; /*0x69b855*/
            ++v11; /*0x69b856*/
            if ( v10 >= 8 ) /*0x69b85c*/
              goto LABEL_15; /*0x69b85c*/
          }
        }
        else
        {
          v7 = (int *)*(this + 2576); /*0x69b823*/
          while ( 1 ) /*0x69b829*/
          {
            v8 = *v7; /*0x69b829*/
            if ( *(_DWORD *)(*v7 + 87) == -2 && *(_DWORD *)(v8 + 83) == -1 ) /*0x69b834*/
              v9 = -2; /*0x69b836*/
            else
              v9 = *(_DWORD *)(v8 + 83); /*0x69b83a*/
            if ( v9 == result ) /*0x69b83f*/
              break; /*0x69b83f*/
            ++v6; /*0x69b841*/
            ++v7; /*0x69b842*/
            if ( v6 >= v5 ) /*0x69b847*/
              goto LABEL_12; /*0x69b847*/
          }
        }
      }
  LABEL_15:
      *(this + 95) = result; /*0x69b85e*/
      *(this + 96) = -2; /*0x69b866*/
    }
    else
    {
      *(this + 95) = 0; /*0x69b86e*/
      *(this + 96) = -2; /*0x69b878*/
    }
  }
  else
  {
    *(this + 95) = a2; /*0x69b880*/
    *(this + 96) = -1; /*0x69b886*/
  }
  v12 = *(this + 96); /*0x69b896*/
  *(this + 87) = *(this + 95); /*0x69b89c*/
  *(this + 88) = v12; /*0x69b8a2*/
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
  _DWORD *v13; // esi
  int v14; // eax
  int v15; // esi
  int i; // eax
  int v17; // ebx
  _DWORD *v18; // edx
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
  _WORD *v38; // edx
  __int16 v39; // ax
  _DWORD *v40; // edx
  int v41; // esi
  int v42; // ebx
  char *v43; // edi
  char *v44; // eax
  _DWORD *v45; // ecx
  bool v46; // zf
  int v47; // eax
  __int16 v48; // [esp-Ch] [ebp-70h]
  int v49; // [esp+8h] [ebp-5Ch]
  int v50; // [esp+8h] [ebp-5Ch]
  int v51; // [esp+8h] [ebp-5Ch]
  int v52; // [esp+Ch] [ebp-58h]
  _DWORD v53[2]; // [esp+10h] [ebp-54h] BYREF
  void *v54; // [esp+18h] [ebp-4Ch]
  int v55; // [esp+1Ch] [ebp-48h]
  void *v56; // [esp+20h] [ebp-44h]
  int v57; // [esp+24h] [ebp-40h] BYREF
  int v58; // [esp+2Ch] [ebp-38h]
  int v59; // [esp+30h] [ebp-34h]
  _DWORD v60[3]; // [esp+34h] [ebp-30h] BYREF
  _DWORD v61[3]; // [esp+40h] [ebp-24h] BYREF
  void **v62; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v64; // [esp+54h] [ebp-10h]
  char v65; // [esp+59h] [ebp-Bh]
  int v66; // [esp+5Ch] [ebp-8h]
  int v67; // [esp+60h] [ebp-4h]

  v1 = 0; /*0x69bd65*/
  v55 = 1; /*0x69bd6f*/
  AbstractClass::updateAnimationState(0, 0); /*0x69bd77*/
  v62 = &(void*)(void*)&DynamicVectorClass_NodeNameType___vftable; /*0x69bd81*/
  v67 = 10; /*0x69bd89*/
  v66 = 0; /*0x69bd91*/
  Debug::Log(); /*0x69bd95*/
  if ( this->u32_284C < 2 ) /*0x69bda6*/
  {
    v62 = &(void*)(void*)&VectorClass_NodeNameType___vftable; /*0x69bdac*/
    MPCooperative::updateScoreBoard(&v62); /*0x69bdb4*/
    return; /*0x69bdbe*/
  }
  v52 = 0; /*0x69bdce*/
  memset((void *)(&this->u32_12746), 0, 0x120u); /*0x69bdd2*/
  this->q3018 = 1; /*0x69bdd4*/
  if ( this->u32_284C > 0 ) /*0x69bde3*/
  {
    do /*0x69be9c*/
    {
      v53[0] = 0; /*0x69bde9*/
      v3 = (char **)&g_NetworkPlayerName; /*0x69bdf1*/
      while ( 1 ) /*0x69bdfb*/
      {
        v4 = *v3; /*0x69bdfb*/
        v54 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v1)); /*0x69be07*/
        v5 = ToWideStringChar(v4); /*0x69be0b*/
        if ( !_strcmpi(v54, v5) ) /*0x69be16*/
          break; /*0x69be16*/
        ++v3; /*0x69be26*/
        ++v53[0]; /*0x69be30*/
        if ( (int)v3 >= (int)&g_PlayerNameListEnd ) /*0x69be34*/
        {
          v6 = 0; /*0x69be36*/
          goto LABEL_9; /*0x69be38*/
        }
      }
      v6 = v53[0]; /*0x69be3a*/
      if ( v53[0] >= 8u ) /*0x69be40*/
        goto LABEL_10; /*0x69be40*/
  LABEL_9:
      Network::SetPort( /*0x69be47*/
        (_WORD *)(*(_DWORD *)(this->u32_2840 + 4 * v1) + 40),
        *(_WORD *)(&this->SessionClass_field_10 * v6 + 12280));
      ToWideStringChar(*(char **)(this->u32_2840 + 4 * v1)); /*0x69be6a*/
      Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(this->u32_2840 + 4 * v1) + 40), 0); /*0x69be7f*/
      Debug::Log(); /*0x69be8b*/
  LABEL_10:
      ++v1; /*0x69be93*/
    }
    while ( v1 < this->u32_284C ); /*0x69be9c*/
  }
  v7 = this->u32_284C; /*0x69bea2*/
  v58 = 0; /*0x69beaa*/
  v59 = 0; /*0x69beb0*/
  v49 = 0; /*0x69beb4*/
  if ( v7 > 0 ) /*0x69beb8*/
  {
    v8 = v64; /*0x69bebe*/
    while ( 1 ) /*0x69bec2*/
    {
      v9 = 0x7FFFFFFF; /*0x69bec2*/
      v10 = 0; /*0x69bec7*/
      v11 = 0x7FFFFFFF; /*0x69becb*/
      if ( v7 <= 0 ) /*0x69becd*/
        break; /*0x69becd*/
      do /*0x69bef2*/
      {
        if ( !*((_BYTE *)&v58 + v10) && *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v10) + 83) < v11 ) /*0x69bee9*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v10) + 83); /*0x69beeb*/
          v9 = v10; /*0x69beed*/
        }
        ++v10; /*0x69beef*/
      }
      while ( v10 < v7 ); /*0x69bef2*/
      if ( v9 == 0x7FFFFFFF ) /*0x69befa*/
        break; /*0x69befa*/
      v12 = this->u32_2840; /*0x69befc*/
      *((_BYTE *)&v58 + v9) = 1; /*0x69bf02*/
      v13 = (_DWORD *)(v12 + 4 * v9); /*0x69bf07*/
      if ( v66 < v8 ) /*0x69bf10*/
        goto LABEL_24; /*0x69bf10*/
      if ( !v65 && v8 || v67 <= 0 ) /*0x69bf24*/
        goto LABEL_26; /*0x69bf24*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v62[2])(&v62, v67 + v8, 0) ) /*0x69bf35*/
      {
  LABEL_24:
        v14 = v66++; /*0x69bf44*/
        *((_DWORD *)Block + v14) = *v13; /*0x69bf4d*/
      }
      v8 = v64; /*0x69bf50*/
  LABEL_26:
      v7 = this->u32_284C; /*0x69bf54*/
      if ( v66 != v7 && ++v49 < v7 ) /*0x69bf6d*/
        continue; /*0x69bf6d*/
      break; /*0x69bf6d*/
    }
  }
  v15 = 0; /*0x69bf73*/
  v58 = 0; /*0x69bf77*/
  v50 = 0; /*0x69bf7b*/
  v59 = 0; /*0x69bf7f*/
  for ( i = v66; v15 < i; v50 = v15 ) /*0x69bf89*/
  {
    if ( !*((_BYTE *)&v58 + v15) ) /*0x69bf8f*/
    {
      v17 = 0; /*0x69bf9f*/
      v18 = (_DWORD *)(*((_DWORD *)Block + v15) + 40); /*0x69bfa4*/
      v61[0] = *v18; /*0x69bfab*/
      v61[1] = v18[1]; /*0x69bfb2*/
      v61[2] = v18[2]; /*0x69bfb9*/
      if ( i > 0 ) /*0x69bfbd*/
      {
        v53[0] = &this->u32_90 * v52 + 11816; /*0x69bfd1*/
        do /*0x69c1f5*/
        {
          if ( v17 != v15 && !*((_BYTE *)&v58 + v17) && NetworkID::Compare((int)v61, *((_DWORD *)Block + v17) + 40) ) /*0x69bff8*/
          {
            v54 = ToWideStringChar(*((char **)Block + v17)); /*0x69c011*/
            v19 = 0; /*0x69c015*/
            v20 = (char **)&g_NetworkPlayerName; /*0x69c017*/
            while ( 1 ) /*0x69c01e*/
            {
              v21 = ToWideStringChar(*v20); /*0x69c01e*/
              if ( !_strcmpi(v54, v21) ) /*0x69c029*/
                break; /*0x69c029*/
              ++v20; /*0x69c039*/
              ++v19; /*0x69c03c*/
              if ( (int)v20 >= (int)&g_PlayerNameListEnd ) /*0x69c043*/
              {
                v54 = 0; /*0x69c045*/
                goto LABEL_39; /*0x69c045*/
              }
            }
            v54 = v19; /*0x69c0f6*/
  LABEL_39:
            v56 = ToWideStringChar(*((char **)Block + v50)); /*0x69c04d*/
            v22 = 0; /*0x69c061*/
            v23 = (char **)&g_NetworkPlayerName; /*0x69c063*/
            while ( 1 ) /*0x69c06a*/
            {
              v24 = ToWideStringChar(*v23); /*0x69c06a*/
              if ( !_strcmpi(v56, v24) ) /*0x69c075*/
                break; /*0x69c075*/
              ++v23; /*0x69c081*/
              ++v22; /*0x69c084*/
              if ( (int)v23 >= (int)&g_PlayerNameListEnd ) /*0x69c08b*/
              {
                v22 = 0; /*0x69c08d*/
                break; /*0x69c08d*/
              }
            }
            if ( *(_DWORD *)(&this->SessionClass_field_10 * (_DWORD)v54 + 12280) == *(_DWORD *)(&this->SessionClass_field_10 * v22 + 12280) ) /*0x69c0a3*/
            {
              v48 = v55++ + *(_WORD *)(&this->SessionClass_field_10 * (_DWORD)v54 + 12280); /*0x69c0b9*/
              Network::SetPort((_WORD *)(*((_DWORD *)Block + v17) + 40), v48); /*0x69c0c8*/
              v25 = (char **)Block; /*0x69c0cd*/
              *((_BYTE *)&v58 + v17) = 1; /*0x69c0d1*/
              ToWideStringChar(v25[v17]); /*0x69c0d9*/
            }
            Debug::Log(); /*0x69c0ec*/
            v26 = ToWideStringChar(*((char **)Block + v50)); /*0x69c121*/
            v27 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x69c123*/
            if ( !_strcmpi(v26, v27) ) /*0x69c12a*/
            {
              v56 = (void *)v53[0]; /*0x69c142*/
              v28 = (char *)*((_DWORD *)Block + v17); /*0x69c146*/
              ++v52; /*0x69c14d*/
              v53[0] += 36; /*0x69c151*/
              strcpy((char *)v56, ToWideStringChar(v28)); /*0x69c172*/
            }
            v29 = ToWideStringChar(*((char **)Block + v17)); /*0x69c18c*/
            v30 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x69c18e*/
            if ( !_strcmpi(v29, v30) ) /*0x69c195*/
            {
              v56 = (void *)v53[0]; /*0x69c1b1*/
              v31 = (char *)*((_DWORD *)Block + v50); /*0x69c1b6*/
              ++v52; /*0x69c1bc*/
              v53[0] += 36; /*0x69c1c0*/
              strcpy((char *)v56, ToWideStringChar(v31)); /*0x69c1e1*/
            }
            v15 = v50; /*0x69c1ea*/
          }
          i = v66; /*0x69c1ee*/
          ++v17; /*0x69c1f2*/
        }
        while ( v17 < v66 ); /*0x69c1f5*/
      }
    }
    ++v15; /*0x69c1fb*/
  }
  if ( this->q301C ) /*0x69c208*/
  {
    Debug::Log(); /*0x69c21c*/
    Network::SetPort((_WORD *)(**(_DWORD **)(&this->u32_10184) + 40), this->q301C); /*0x69c237*/
    v54 = 0; /*0x69c23c*/
    v32 = (char **)&g_NetworkPlayerName; /*0x69c244*/
    while ( 1 ) /*0x69c24e*/
    {
      v33 = *v32; /*0x69c24e*/
      v34 = ToWideStringChar(*(char **)Game_PlayerInfoArray); /*0x69c259*/
      v35 = ToWideStringChar(v33); /*0x69c25b*/
      if ( !_strcmpi(v34, v35) ) /*0x69c262*/
        break; /*0x69c262*/
      ++v32; /*0x69c276*/
      v54 = (char *)v54 + 1; /*0x69c280*/
      if ( (int)v32 >= (int)&g_PlayerNameListEnd ) /*0x69c284*/
      {
        v36 = 0; /*0x69c286*/
        goto LABEL_58; /*0x69c286*/
      }
    }
    v36 = v54; /*0x69c48c*/
  LABEL_58:
    Network::SetPort((_WORD *)(*(_DWORD *)(&this->SessionClass_field_10 * (_DWORD)v36 + 10328) + 40), this->q301C); /*0x69c288*/
  }
  v37 = 0; /*0x69c2a5*/
  if ( this->u32_284C > 0 ) /*0x69c2a9*/
  {
    v38 = (_WORD *)(&this->u32_13640); /*0x69c2ab*/
    do /*0x69c2d7*/
    {
      v39 = *(_WORD *)(*(_DWORD *)(this->u32_2840 + 4 * v37) + 40); /*0x69c2ba*/
      *v38 = v39; /*0x69c2c1*/
      if ( !v39 ) /*0x69c2c4*/
        *v38 = 1234; /*0x69c2c6*/
      ++v37; /*0x69c2d1*/
      ++v38; /*0x69c2d2*/
    }
    while ( v37 < this->u32_284C ); /*0x69c2d7*/
  }
  v40 = (_DWORD *)(**(_DWORD **)(&this->u32_10184) + 40); /*0x69c2e1*/
  v60[0] = *v40; /*0x69c2e6*/
  v60[1] = v40[1]; /*0x69c2f2*/
  v60[2] = v40[2]; /*0x69c2fd*/
  Network::CopyAddress_Small(&v57); /*0x69c301*/
  v51 = 1; /*0x69c313*/
  if ( this->u32_284C > 1 ) /*0x69c317*/
  {
    v41 = 4; /*0x69c31d*/
    do /*0x69c430*/
    {
      if ( NetworkID::Compare((int)v60, *(_DWORD *)(v41 + this->u32_2840) + 40) ) /*0x69c333*/
      {
        ToWideStringChar(*(char **)(v41 + this->u32_2840)); /*0x69c349*/
        Debug::Log(); /*0x69c354*/
        v42 = &this->u32_A650; /*0x69c362*/
        v54 = (void *)(&this->u32_10208); /*0x69c368*/
        v55 = 8; /*0x69c36c*/
        do /*0x69c416*/
        {
          v43 = *(char **)v54; /*0x69c381*/
          v56 = ToWideStringChar(*(char **)(v41 + this->u32_2840)); /*0x69c38a*/
          v44 = ToWideStringChar(v43); /*0x69c38e*/
          if ( !_strcmpi(v56, v44) ) /*0x69c399*/
          {
            Network::CopyAddress_Small(v53); /*0x69c3ac*/
            v45 = (_DWORD *)(*(_DWORD *)(v41 + this->u32_2840) + 40); /*0x69c3be*/
            NetworkID::Assign(v45, 0, (int)v53, *(_WORD *)v45); /*0x69c3c8*/
            ToWideStringChar(*(char **)(v41 + this->u32_2840)); /*0x69c3d6*/
            Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(v41 + this->u32_2840) + 40), 0); /*0x69c3eb*/
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
    while ( v51 < this->u32_284C ); /*0x69c430*/
  }
  if ( g_NetworkInterface ) /*0x69c440*/
  {
    v47 = (*(int (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 112))(g_NetworkInterface); /*0x69c444*/
    IDA_LOWORD(v47) = this->u32_307A; /*0x69c44d*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)g_NetworkInterface + 92))(g_NetworkInterface, v47); /*0x69c457*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 28))(g_NetworkInterface); /*0x69c462*/
  }
  v62 = &(void*)(void*)&VectorClass_NodeNameType___vftable; /*0x69c469*/
  if ( Block ) /*0x69c473*/
  {
    if ( v65 ) /*0x69c47b*/
      RA2_OPDEL(Block); /*0x69c47e*/
  }
}
// 0x78F000
Coord * * SessionClass::BuildLaunchString()
{
  int v0; // eax
  int v1; // ecx
  int v2; // ebp
  int v3; // ebx
  wchar_t **v4; // edi
  wchar_t *v5; // esi
  wchar_t **v6; // esi
  char *v7; // esi
  char **v8; // eax
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  int v12; // edi
  char *v13; // eax
  char **v14; // [esp-14h] [ebp-A0h]
  char **v15; // [esp-Ch] [ebp-98h]
  char **v16; // [esp-4h] [ebp-90h]
  char **v17; // [esp+4h] [ebp-88h]
  char *v18; // [esp+14h] [ebp-78h] BYREF
  int v19; // [esp+18h] [ebp-74h]
  int v20; // [esp+1Ch] [ebp-70h] BYREF
  void *v21; // [esp+20h] [ebp-6Ch] BYREF
  void *v22; // [esp+24h] [ebp-68h] BYREF
  void *v23; // [esp+28h] [ebp-64h] BYREF
  void *v24; // [esp+2Ch] [ebp-60h] BYREF
  void *v25; // [esp+30h] [ebp-5Ch] BYREF
  void *v26; // [esp+34h] [ebp-58h] BYREF
  void *v27; // [esp+38h] [ebp-54h] BYREF
  char Buffer[80]; // [esp+3Ch] [ebp-50h] BYREF

  v0 = SessionClass::initPlayers(g_GameRulesOptions); /*0x78f009*/
  v1 = 1; /*0x78f014*/
  if ( g_MenuStateFlags == 1 ) /*0x78f01b*/
    ++v0; /*0x78f01d*/
  v2 = 0; /*0x78f01f*/
  v18 = 0; /*0x78f025*/
  v19 = 0; /*0x78f029*/
  if ( v0 <= 1 ) /*0x78f02d*/
    goto LABEL_15; /*0x78f02d*/
  v3 = v0 - 1; /*0x78f030*/
  v4 = (wchar_t **)&unk_A8DA94; /*0x78f033*/
  v20 = v0; /*0x78f03b*/
  do /*0x78f079*/
  {
    v5 = *v4; /*0x78f03f*/
    if ( *v4 == (wchar_t *)g_HouseClass_ObserverFlags || v5 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x78f050*/
    {
      ++v18; /*0x78f071*/
    }
    else if ( IsKnownPointer(*v4) ) /*0x78f054*/
    {
      ++v2; /*0x78f05d*/
    }
    else if ( Player::IsObserver(v5) ) /*0x78f062*/
    {
      ++v19; /*0x78f06b*/
    }
    ++v4; /*0x78f075*/
    --v3; /*0x78f078*/
  }
  while ( v3 ); /*0x78f079*/
  if ( v20 < 8 ) /*0x78f083*/
  {
    v1 = v20; /*0x78f085*/
  LABEL_15:
    v6 = (wchar_t **)(4 * v1 + 11066000); /*0x78f087*/
    do /*0x78f0b2*/
    {
      if ( *v6 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x78f097*/
      {
        ++v18; /*0x78f099*/
      }
      else if ( IsKnownPointer(*v6) ) /*0x78f09f*/
      {
        ++v2; /*0x78f0a8*/
      }
      ++v6; /*0x78f0a9*/
    }
    while ( (int)v6 < (int)&g_PlayerNameListEnd ); /*0x78f0b2*/
  }
  if ( ppv ) /*0x78f0bb*/
  {
    v7 = &v18[v2 + 1]; /*0x78f0ca*/
    v17 = String::Assign((char **)&v27, String2); /*0x78f0df*/
    v16 = FromStringInt((char **)&v26, (int)v7); /*0x78f0ec*/
    v15 = String::Assign((char **)&v25, asc_84BA48); /*0x78f100*/
    v14 = String::Assign((char **)&v24, g_WOL_IdleFlag); /*0x78f118*/
    v8 = String::Assign((char **)&v23, aMode_0); /*0x78f11f*/
    v9 = String::Concat((const char **)v8, (char **)&v22, v14); /*0x78f126*/
    v10 = String::Concat((const char **)v9, (char **)&v21, v15); /*0x78f12d*/
    v11 = String::Concat((const char **)v10, &v18, v16); /*0x78f134*/
    String::Concat((const char **)v11, (char **)&v20, v17); /*0x78f13b*/
    DeleteAndZero((void **)&v18); /*0x78f144*/
    DeleteAndZero(&v21); /*0x78f14d*/
    DeleteAndZero(&v22); /*0x78f156*/
    DeleteAndZero(&v23); /*0x78f15f*/
    DeleteAndZero(&v24); /*0x78f168*/
    DeleteAndZero(&v25); /*0x78f171*/
    DeleteAndZero(&v26); /*0x78f17a*/
    DeleteAndZero(&v27); /*0x78f183*/
    v12 = *(_DWORD *)ppv; /*0x78f191*/
    v13 = String::GetOrEmpty((char **)&v20); /*0x78f193*/
    (*(void (__stdcall **)(LPVOID, char *))(v12 + 156))(ppv, v13); /*0x78f1a0*/
    memset(Buffer, 0, sizeof(Buffer)); /*0x78f1b1*/
    GameConfig::BuildChecksum(Buffer); /*0x78f1b7*/
    Buffer[40] = 0; /*0x78f1c5*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 168))(ppv, Buffer); /*0x78f1ce*/
    (*(void (__stdcall **)(LPVOID, int, char *))(*(_DWORD *)ppv + 252))(ppv, 1, &v7[v19]); /*0x78f1e5*/
    DeleteAndZero((void **)&v20); /*0x78f1ef*/
  }
}
// 0x69A310
unsigned int SessionClass::GetPlayerColorScheme(ObjectClass * aP0)
{
  unsigned int result; // eax

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
  int v5; // edx

  result = a2; /*0x69b760*/
  if ( a2 == -2 ) /*0x69b76a*/
  {
    IDA_LOBYTE(result) = aP2; /*0x69b76c*/
    if ( aP2 ) /*0x69b772*/
    {
      result = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 9); /*0x69b783*/
      *(&this->q0247) = result; /*0x69b788*/
      *(&this->q0248) = -2; /*0x69b78e*/
    }
    else
    {
      *(&this->q0247) = 0; /*0x69b79a*/
      *(&this->q0248) = -2; /*0x69b7a4*/
    }
  }
  else
  {
    *(&this->q0247) = a2; /*0x69b7b0*/
    *(&this->q0248) = -1; /*0x69b7b6*/
  }
  v5 = *(&this->q0248); /*0x69b7c6*/
  *(&this->q0243) = *(&this->q0247); /*0x69b7cc*/
  *(&this->q0244) = v5; /*0x69b7d2*/
  return result; /*0x69b7d8*/
}
// 0x69BBE0
char SessionClass::GetGameSpeed()
{
  return this->u32_C360; /*0x69bbe6*/
}
// 0x69C4A0
void SessionClass::ddtor()
{
  void *v2; // eax

  v2 = this->q004; /*0x69c4a6*/
  *(_DWORD *)(this + 16) = 0; /*0x69c4a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c4b0*/
  {
    RA2_OPDEL(v2); /*0x69c4b6*/
    *(_DWORD *)(this + 4) = 0; /*0x69c4be*/
  }
  this->IsAllocated = 0; /*0x69c4c1*/
  this->Capacity = 0; /*0x69c4c4*/
}
// 0x69C4D0
unsigned int SessionClass::Write(int a2)
{
  if ( this->IsInitialized ) /*0x69c4d0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x69c4e5*/
  else
    return 0; /*0x69c4d7*/
}
// 0x69C4F0
int SessionClass::Seek(int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x69c4fa*/
}
// 0x69C6C0
TypeList_flat * SessionClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x69c6c3*/
  *this = &(void*)(void*)&VectorClass_enum_DiskID_vftable; /*0x69c6c6*/
  if ( v3 && this->IsAllocated ) /*0x69c6d0*/
  {
    RA2_OPDEL(v3); /*0x69c6d8*/
    this->Items = 0; /*0x69c6e0*/
  }
  this->IsAllocated = 0; /*0x69c6eb*/
  this->Capacity = 0; /*0x69c6f1*/
  if ( (a2 & 1) != 0 ) /*0x69c6f8*/
    RA2_OPDEL(); /*0x69c6fb*/
  return this; /*0x69c705*/
}
// 0x69C710
char SessionClass::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x69c712*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x69c71d*/
  {
    v3 = 0; /*0x69c71f*/
    if ( v2 <= 0 ) /*0x69c723*/
      return 1; /*0x69c743*/
    v4 = (_DWORD *)this->Items; /*0x69c725*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69c72b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69c734*/
    {
      ++v3; /*0x69c736*/
      ++v4; /*0x69c737*/
      if ( v3 >= v2 ) /*0x69c73c*/
        return 1; /*0x69c73c*/
    }
  }
  return 0; /*0x69c73e*/
}
// 0x69C750
char SessionClass::addPlayer(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69c75c*/
  {
    this->IsInitialized = 0; /*0x69c766*/
    if ( a3 ) /*0x69c76c*/
      v4 = a3; /*0x69c782*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x69c77e*/
    this->IsInitialized = 1; /*0x69c786*/
    if ( v4 ) /*0x69c78a*/
    {
      if ( this->Items ) /*0x69c795*/
      {
        v6 = this->Capacity; /*0x69c79c*/
        if ( a2 < v6 ) /*0x69c7a1*/
          v6 = a2; /*0x69c7a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69c7a9*/
          ++i; /*0x69c7ae*/
        if ( this->IsAllocated ) /*0x69c7bb*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x69c7c6*/
          this->Items = 0; /*0x69c7ce*/
        }
      }
      this->Items = v4; /*0x69c7d7*/
      this->Capacity = a2; /*0x69c7df*/
      this->IsAllocated = a3 == 0; /*0x69c7e2*/
      return 1; /*0x69c7e8*/
    }
    else
    {
      return 0; /*0x69c78f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x69c7f2*/
    return 1; /*0x69c7f8*/
  }
}
// 0x69C800
void SessionClass::removePlayer()
{
  if ( this->Items && this->IsAllocated ) /*0x69c80d*/
  {
    RA2_OPDEL(this->Items); /*0x69c813*/
    this->Items = 0; /*0x69c81b*/
  }
  this->IsAllocated = 0; /*0x69c81e*/
  this->Capacity = 0; /*0x69c821*/
}
// 0x69C830
int SessionClass::findPlayer(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->SessionClass_field_0C ) /*0x69c830*/
    return 0; /*0x69c838*/
  v3 = this->SessionClass_field_08; /*0x69c83e*/
  result = 0; /*0x69c841*/
  if ( v3 <= 0 ) /*0x69c845*/
    return -1; /*0x69c85c*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x69c84b*/
  {
    if ( ++result >= v3 ) /*0x69c85a*/
      return -1; /*0x69c85a*/
  }
  return result; /*0x69c83a*/
}
// 0x69C870
unsigned int SessionClass::updatePlayer(int a2)
{
  if ( this->IsInitialized ) /*0x69c870*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x69c885*/
  else
    return 0; /*0x69c877*/
}
// 0x69C890
char SessionClass::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69c89c*/
  {
    this->IsInitialized = 0; /*0x69c8a2*/
    if ( a3 ) /*0x69c8a8*/
      v4 = a3; /*0x69c8be*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x69c8ba*/
    this->IsInitialized = 1; /*0x69c8c2*/
    if ( !v4 ) /*0x69c8c6*/
      return 0; /*0x69c93a*/
    if ( this->Items ) /*0x69c8c8*/
    {
      v5 = this->Capacity; /*0x69c8cf*/
      if ( a2 < v5 ) /*0x69c8d4*/
        v5 = a2; /*0x69c8d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69c8dc*/
        ++i; /*0x69c8e1*/
      if ( this->IsAllocated ) /*0x69c8ee*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x69c8f9*/
        this->Items = 0; /*0x69c901*/
      }
    }
    this->Items = v4; /*0x69c90a*/
    this->Capacity = a2; /*0x69c912*/
    this->IsAllocated = a3 == 0; /*0x69c915*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x69c91e*/
  }
  v7 = this->Capacity; /*0x69c921*/
  if ( v7 < this->Count ) /*0x69c929*/
    this->Count = v7; /*0x69c92b*/
  return 1; /*0x69c92e*/
}
// 0x69C940
int SessionClass::Read(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Count; /*0x69c940*/
  result = 0; /*0x69c943*/
  if ( v2 <= 0 ) /*0x69c948*/
    return -1; /*0x69c95f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x69c94e*/
  {
    if ( ++result >= v2 ) /*0x69c95d*/
      return -1; /*0x69c95d*/
  }
  return result; /*0x69c962*/
}
// 0x69D460
VectorClass_flat * SessionClass::validateGame(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x69d463*/
  *this = &(void*)(void*)&VectorClass_enum_DiskID_vftable; /*0x69d466*/
  if ( v3 && this->IsAllocated ) /*0x69d470*/
  {
    RA2_OPDEL(v3); /*0x69d478*/
    this->Items = 0; /*0x69d480*/
  }
  *((_BYTE *)this + 13) = 0; /*0x69d48b*/
  *(this + 2) = 0; /*0x69d491*/
  if ( (a2 & 1) != 0 ) /*0x69d498*/
    RA2_OPDEL(); /*0x69d49b*/
  return this; /*0x69d4a5*/
}
// 0x7B2720
void SessionClass::SetInstance()
{
  dword_B780A0 = (int)this; /*0x7b2720*/
}