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
#include "e4/classes/Selection_e4.hpp"

// 0x540DC0
namespace gamemd {
int SessionClass::initLAN(int a2, wchar_t * Source, unsigned int * a4)
{

  void *v6; // eax
  void *v7; // eax
  int v8; // ecx

  if ( !*((unsigned char *)this + 4) ) /*0x540dc3*/
    return 0; /*0x540dca*/
  if ( *((unsigned int *)this + 17) == 7 ) /*0x540dd4*/
    return 0; /*0x540dd6*/
  v6 = (void *)RA2_OPNEW(184); /*0x540de1*/
  if ( v6 ) /*0x540deb*/
    v7 = IPXConnClass::constructor( /*0x540e0e*/
           v6,
           *((unsigned int *)this + 5),
           *((unsigned int *)this + 5),
           *((unsigned int *)this + 4),
           *((unsigned short *)this + 16),
           a4,
           a2,
           Source,
           0);
  else
    v7 = 0; /*0x540e15*/
  *(unsigned int *)((char *)this + 4 * *((unsigned int *)this + 17) + 40) = v7; /*0x540e1a*/
  v8 = *(unsigned int *)((char *)this + 4 * *((unsigned int *)this + 17) + 40); /*0x540e21*/
  if ( !v8 ) /*0x540e27*/
    return 0; /*0x540e29*/
  (*(void (**)(int))(*(unsigned int *)v8 + 4))(v8); /*0x540e31*/
  *(unsigned int *)(*(unsigned int *)((char *)this + 4 * *((unsigned int *)this + 17) + 40) + 40) = *((unsigned int *)this + 22); /*0x540e3e*/
  *(unsigned int *)(*(unsigned int *)((char *)this + 4 * *((unsigned int *)this + 17) + 40) + 44) = *((unsigned int *)this + 23); /*0x540e4b*/
  *(unsigned int *)(*(unsigned int *)((char *)this + 4 * (*((unsigned int *)this + 17))++ + 40) + 48) = *((unsigned int *)this + 24); /*0x540e58*/
  return 1; /*0x540dcc*/

}
} // namespace gamemd
// 0x540E70
namespace gamemd {
int SessionClass::initInternet()
{

  int result; // eax
  void *v3; // ebp
  char * v4;
  char * v5;
  char *v6; // eax

  if ( !*((unsigned char *)this + 4) ) /*0x540e73*/
    return 0; /*0x540e7a*/
  v3 = RA2_OPNEW(0xB8u); /*0x540e89*/
  if ( v3 ) /*0x540e90*/
  {
    v4 = (char *)((int)((char *)(g_abs_A8DA78)));
    v5 = (char *)((int)((char *)(*((unsigned int *)this + 5))));
    v6 = (char *)(CharToWideString(aMulticast));
    result = (int)IPXConnClass::constructor( /*0x540ebf*/
                    v3,
                    v5,
                    v5,
                    *((unsigned int *)this + 4),
                    *((unsigned short *)this + 16),
                    (unsigned int *)(*(unsigned int *)v4 + 40),
                    -1,
                    (wchar_t *)v6,
                    0);
  }
  else
  {
    result = 0; /*0x540ec8*/
  }
  *((unsigned int *)this + 20) = result; /*0x540ecc*/
  if ( result ) /*0x540ed0*/
  {
    (*(void (**)(int))(*(unsigned int *)result + 4))(result); /*0x540ed8*/
    *(unsigned int *)(*((unsigned int *)this + 20) + 40) = *((unsigned int *)this + 22); /*0x540ee1*/
    *(unsigned int *)(*((unsigned int *)this + 20) + 44) = *((unsigned int *)this + 23); /*0x540eea*/
    *(unsigned int *)(*((unsigned int *)this + 20) + 48) = *((unsigned int *)this + 24); /*0x540ef8*/
    return 1; /*0x540ef3*/
  }
  return result; /*0x540e7c*/

}
} // namespace gamemd
// 0x552CC0
namespace gamemd {
MixFileClass * SessionClass::Load()
{

  unsigned int *v2; // eax
  unsigned int *result; // eax
  unsigned int *v4; // eax
  void *PlayerSide; // eax
  int v6; // esi
  unsigned int v7;

  if ( *((unsigned int *)this + 2)
    || ((Debug::Log_0(g_abs_8298D0), (v2 = RA2_OPNEW(0x28u)) == 0)
      ? (result = 0)
      : (result = MixFileClass::FromFile(v2, g_abs_8298C4, (int)g_abs_886980)),
        (*((unsigned int *)this + 2) = result) != 0) )
  {
    if ( *((unsigned int *)this + 1)
      || ((v4 = RA2_OPNEW(0x28u)) == 0
        ? (result = 0)
        : (result = MixFileClass::FromFile(v4, stru_8298B8, (int)g_abs_886980)),
          (*((unsigned int *)this + 1) = result) != 0) )
    {
      if ( g_abs_A8B238[0] ) /*0x552d36*/
      {
        PlayerSide = (void *)SessionClass::GetPlayerSide(*(unsigned int *)g_abs_A8DA78); /*0x552d51*/
        return PaletteManager::Load(PlayerSide); /*0x552d58*/
      }
      else
      {
        v6 = *((unsigned int *)g_abs_A8B230 + 3374); /*0x72b3e8*/
        if ( !g_abs_B0FB80 ) /*0x72b3ea*/
          LoadPaletteSimple(g_abs_844BAC, &g_abs_B0FB7C, &g_abs_B0FB80); /*0x72b3fc*/
        if ( !g_abs_B0FB88 ) /*0x72b408*/
        {
          if ( v6 ) /*0x72b40c*/
          {
            v7 = (char *)((unsigned int)((char *)((unsigned int)((char *)((unsigned int)((char *)((unsigned int)((char *)(g_abs_844BB4[0])))))))));
            if ( v6 != 1 ) /*0x72b433*/
              v7 = g_abs_844BB8; /*0x72b435*/
            LoadPaletteSimple(v7, &g_abs_B0FB84, &g_abs_B0FB88); /*0x72b43b*/
          }
          else
          {
            LoadPaletteSimple(g_abs_844BB0[0], &g_abs_B0FB84, &g_abs_B0FB88); /*0x72b41e*/
          }
        }
        result = (unsigned int *)g_abs_B0FB90; /*0x72b440*/
        if ( !g_abs_B0FB90 ) /*0x72b448*/
          return (unsigned int *)LoadPaletteSimple(g_abs_844BBC, &g_abs_B0FB8C, &g_abs_B0FB90); /*0x72b45a*/
      }
    }
  }
  return (gamemd::MixFileClass *)(result);

}
} // namespace gamemd
// 0x5ADF20
namespace gamemd {
MixFileClass * SessionClass::LoadGameSession( ObjectClass * aP1, CellStruct * aP2)
{

  int v4; // esi
  char *v6; // edi
  bool v7; // bl
  int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  ObjectClass *v11; // esi
  ObjectClass *v12; // eax
  void *v13; // [esp+10h] [ebp-8h] BYREF
  void *v14; // [esp+14h] [ebp-4h] BYREF

  if ( !aP1 || String::Equals_Alt((const char **)aP2, 0) ) /*0x5adf37*/
    return 0; /*0x5adf3e*/
  v4 = *(unsigned int *)(*(unsigned int *)&g_abs_89F690 /*0x5adf5b*/
                 + 4 * *(unsigned int *)(*((unsigned int *)g_SuperWeaponTypeCount + aP1[42].ambientSoundController[0]) + 188));
  if ( !v4 ) /*0x5adf60*/
  {
    this->Debug::Log(); /*0x5adf67*/
    return 0; /*0x5adf78*/
  }
  this->Debug::Log(); /*0x5adf84*/
  String::Assign((char **)&v14, (const char *)(v4 + 36)); /*0x5adf91*/
  v6 = (char *)(this + 20); /*0x5adf96*/
  v7 = SessionClass::LoadMapSelection(v6, (char **)&v14) == 0; /*0x5adfab*/
  DeleteAndZero(&v14); /*0x5adfae*/
  if ( v7 || (v8 = CampaignClass::Check(v6, *(unsigned short *)&aP1[79].onBridge)) == 0 ) /*0x5adfea*/
  {
    ((SessionClass *)(v6))->Destruct(); /*0x5adfb9*/
    this->Debug::Log(); /*0x5adfc3*/
    return 0; /*0x5adfd4*/
  }
  ScenarioClass::SetFileName(aP1->__pad_0, (ObjectClass *)&g_abs_87F8E4); /*0x5ae013*/
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
  v11 = (ObjectClass *)StringTable::Find((MapSelect *)v6, *(const char ***)(v10 + 4 * v9)); /*0x5ae037*/
  String::AssignFromPtr((char **)&v14, (const char **)&v11->__pad_0[4]); /*0x5ae041*/
  ((String *)((const char **)&v14))->ToLower(); /*0x5ae04a*/
  String::AssignFromPtr((char **)&v13, (const char **)aP2); /*0x5ae058*/
  ((String *)((const char **)&v13))->ToLower(); /*0x5ae061*/
  if ( !v11 || !((String *)((const char **)&v14))->Compare((const char **)&v13) ) /*0x5ae073*/
  {
    DeleteAndZero(&v13); /*0x5ae080*/
    DeleteAndZero(&v14); /*0x5ae089*/
    goto LABEL_14; /*0x5ae089*/
  }
  v12 = (gamemd::MixFileClass *)((ObjectClass *)String::GetOrEmpty_Alt((char **)&v11->__pad_0[4]));
  ScenarioClass::SetFileName(aP1->__pad_0, v12); /*0x5ae0a7*/
  *(unsigned short *)&aP1[79].onBridge = Network_Load(v6, v11); /*0x5ae0b8*/
  DeleteAndZero(&v13); /*0x5ae0bf*/
  DeleteAndZero(&v14); /*0x5ae0c8*/
LABEL_17:
  ((SessionClass *)(v6))->Destruct(); /*0x5ae0cd*/
  return strlen((const char *)&aP1[27].attachedBomb) != 0; /*0x5adf6f*/

}
} // namespace gamemd
// 0x5CEEF0
namespace gamemd {
AbstractClass * * SessionClass::LoadMapSelection(char ** a1)
{

  char *v2; // ebp
  char *v3; // esi
  int v4; // edi
  char **v5; // eax
  bool v6; // bl
  char **v7; // eax
  ObjectClass *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  bool v14; // bl
  bool v15; // bl
  ObjectClass *v16; // esi
  int v17; // eax
  ObjectClass *v18; // esi
  int v19; // eax
  ObjectClass *v20; // esi
  int v21; // eax
  int v22; // eax
  bool v23; // bl
  int v24; // ebp
  char **v25; // eax
  bool v26; // bl
  int v27; // eax
  ObjectClass *v28; // edi
  int v29; // ecx
  char *v30; // esi
  int v31; // eax
  int v32; // eax
  int v33; // edx
  bool v34; // bl
  char **StringByIndex; // eax
  bool v36; // bl
  int v37; // eax
  ReferenceCounted *v38; // edi
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // edx
  ScoreScreen *a3; // [esp+18h] [ebp-C4h] BYREF
  ObjectClass *v44; // [esp+1Ch] [ebp-C0h] BYREF
  char *a2; // [esp+20h] [ebp-BCh] BYREF
  char *v46; // [esp+24h] [ebp-B8h] BYREF
  char *v47; // [esp+28h] [ebp-B4h] BYREF
  ObjectClass *v48; // [esp+2Ch] [ebp-B0h] BYREF
  ObjectClass v49; // [esp+30h] [ebp-ACh] BYREF

  v2 = (char *)(this);
  v47 = (char *)(this);
  CCFileClass::Construct3((int)&v49.ambientSoundController[1]); /*0x5cef04*/
  v3 = 0; /*0x5cef09*/
  *(unsigned int *)&v49.__pad_0[4] = 0; /*0x5cef0f*/
  *(unsigned int *)&v49.__pad_0[8] = 0; /*0x5cef13*/
  GenericList::Constructor(&v49.__pad_0[12]); /*0x5cef17*/
  *(unsigned int *)&v49.__pad_0[12] = &vt_List_INIClass_INISection; /*0x5cef20*/
  memset(&v49.owningHouseIndex, 0, 13); /*0x5cef28*/
  v49.attachedBomb = 0; /*0x5cef39*/
  v49.ambientSoundController[0] = 0; /*0x5cef3d*/
  *(unsigned int *)v49.__pad_0 = &vt_INIClass; /*0x5cef41*/
  unknown_libname_73(&v46); /*0x5cef49*/
  unknown_libname_73(&v44); /*0x5cef52*/
  SessionClass::Destruct(v2); /*0x5cef59*/
  (*(void (**)(int *, char *))(v49.ambientSoundController[1] + 8))( /*0x5cef6b*/
    &v49.ambientSoundController[1],
    aMapselmdIni);
  (*(void (**)(int *, int))(v49.ambientSoundController[1] + 28))(&v49.ambientSoundController[1], 1); /*0x5cef78*/
  if ( !FileStraw::Open(&v49, (int)&v49.ambientSoundController[1], 0) ) /*0x5cef85*/
    goto LABEL_17; /*0x5cef85*/
  v4 = 1; /*0x5cef98*/
  while ( 1 ) /*0x5cefa2*/
  {
    String::Assign((char **)&a3, 0); /*0x5cefa2*/
    v5 = FromStringInt(&a2, v4); /*0x5cefb7*/
    v6 = INIClass::ReadString(&v49, a1, v5, (char **)&a3, (int)&v44) == 0; /*0x5cefd4*/
    DeleteAndZero((void **)&a2); /*0x5cefd7*/
    DeleteAndZero((void **)&a3); /*0x5cefe0*/
    if ( v6 ) /*0x5cefe7*/
      break; /*0x5cefe7*/
    v7 = (char **)RA2_OPNEW(0x6Cu); /*0x5cefef*/
    if ( !v7 ) /*0x5ceff9*/
      goto LABEL_17; /*0x5ceff9*/
    v8 = (ObjectClass *)MSChoiceClass::LoadFromINI(v7, &v49, (const char **)&v44); /*0x5cf00c*/
    if ( !v8 ) /*0x5cf010*/
      goto LABEL_17; /*0x5cf010*/
    v9 = *((unsigned int *)v2 + 2); /*0x5cf012*/
    if ( *((unsigned int *)v2 + 4) < v9 /*0x5cf038*/
      || (v2[13] || !v9)
      && (v10 = *((unsigned int *)v2 + 5), v10 > 0)
      && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)v2 + 8))(v2, v9 + v10, 0) )
    {
      v11 = *((unsigned int *)v2 + 4); /*0x5cf03f*/
      v12 = *((unsigned int *)v2 + 1); /*0x5cf042*/
      *((unsigned int *)v2 + 4) = v11 + 1; /*0x5cf048*/
      *(unsigned int *)(v12 + 4 * v11) = v8; /*0x5cf04b*/
    }
    if ( ++v4 > 100 ) /*0x5cf052*/
    {
      v3 = 0; /*0x5cf071*/
      break; /*0x5cf071*/
    }
    v3 = 0; /*0x5cf054*/
  }
  if ( *((unsigned int *)v2 + 4) ) /*0x5cf073*/
  {
    String::Assign(&a2, 0); /*0x5cf0e0*/
    String::Assign((char **)&a3, aAnims); /*0x5cf0ee*/
    v14 = (int)INIClass::ReadString(&v49, a1, (char **)&a3, &a2, (int)&v46) > 0; /*0x5cf119*/
    DeleteAndZero((void **)&a3); /*0x5cf11c*/
    DeleteAndZero((void **)&a2); /*0x5cf125*/
    if ( v14 ) /*0x5cf12c*/
    {
      String::Assign((char **)&a3, 0); /*0x5cf137*/
      String::Assign(&a2, aTextrect); /*0x5cf145*/
      v15 = (int)INIClass::ReadString(&v49, &v46, &a2, (char **)&a3, (int)&v44) > 0; /*0x5cf16d*/
      DeleteAndZero((void **)&a2); /*0x5cf170*/
      DeleteAndZero((void **)&a3); /*0x5cf179*/
      if ( v15 ) /*0x5cf180*/
      {
        unknown_libname_73(&a3); /*0x5cf18a*/
        v16 = (ObjectClass *)String::Tokenize((const char **)&v44, 0, g_abs_817F70, (void **)&a3); /*0x5cf1a7*/
        if ( ((String *)((const char **)&a3))->Length() ) /*0x5cf1a9*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf1b6*/
          *((unsigned int *)v2 + 6) = v17; /*0x5cf1bb*/
        }
        v18 = (ObjectClass *)String::Tokenize((const char **)&v44, (int)v16, g_abs_817F70, (void **)&a3); /*0x5cf1d6*/
        if ( ((String *)((const char **)&a3))->Length() ) /*0x5cf1d8*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf1e5*/
          *((unsigned int *)v2 + 7) = v19; /*0x5cf1ea*/
        }
        v20 = (ObjectClass *)String::Tokenize((const char **)&v44, (int)v18, g_abs_817F70, (void **)&a3); /*0x5cf205*/
        if ( ((String *)((const char **)&a3))->Length() ) /*0x5cf207*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf214*/
          *((unsigned int *)v2 + 8) = v21; /*0x5cf219*/
        }
        String::Tokenize((const char **)&v44, (int)v20, g_abs_817F70, (void **)&a3); /*0x5cf22b*/
        if ( ((String *)((const char **)&a3))->Length() ) /*0x5cf234*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf241*/
          *((unsigned int *)v2 + 9) = v22; /*0x5cf246*/
        }
        DeleteAndZero((void **)&a3); /*0x5cf24d*/
      }
      String::Assign((char **)&a3, 0); /*0x5cf259*/
      String::Assign(&a2, g_abs_824254); /*0x5cf267*/
      v23 = (int)INIClass::ReadString(&v49, &v46, &a2, (char **)&a3, (int)&v44) > 0; /*0x5cf28f*/
      DeleteAndZero((void **)&a2); /*0x5cf292*/
      DeleteAndZero((void **)&a3); /*0x5cf29b*/
      if ( v23 ) /*0x5cf2a2*/
        String::Reassign((char **)v2 + 10, (const char **)&v44); /*0x5cf2ac*/
      v24 = 1; /*0x5cf2b1*/
      do /*0x5cf36a*/
      {
        String::Assign(&a2, 0); /*0x5cf2bc*/
        v25 = FromStringInt((char **)&a3, v24); /*0x5cf2d1*/
        v26 = INIClass::ReadString(&v49, &v46, v25, &a2, (int)&v44) == 0; /*0x5cf2eb*/
        DeleteAndZero((void **)&a3); /*0x5cf2ee*/
        DeleteAndZero((void **)&a2); /*0x5cf2f7*/
        if ( v26 ) /*0x5cf2fe*/
          break; /*0x5cf2fe*/
        v27 = RA2_OPNEW(0x10u); /*0x5cf306*/
        if ( !v27 ) /*0x5cf310*/
          goto LABEL_17; /*0x5cf310*/
        v28 = (ObjectClass *)String::SplitComma(v27, (const char **)&v44); /*0x5cf31e*/
        if ( !v28 ) /*0x5cf322*/
          goto LABEL_17; /*0x5cf322*/
        v29 = *((unsigned int *)v47 + 13); /*0x5cf328*/
        v30 = v47 + 44; /*0x5cf32e*/
        if ( *((unsigned int *)v47 + 15) >= v29 ) /*0x5cf333*/
        {
          if ( !v47[57] && v29 ) /*0x5cf33e*/
            continue; /*0x5cf33e*/
          v31 = *((unsigned int *)v47 + 16); /*0x5cf340*/
          if ( v31 <= 0 /*0x5cf350*/
            || !(*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)v30 + 8))(v47 + 44, v29 + v31, 0) )
          {
            continue; /*0x5cf350*/
          }
        }
        v32 = *((unsigned int *)v30 + 4); /*0x5cf357*/
        v33 = *((unsigned int *)v30 + 1); /*0x5cf35a*/
        *((unsigned int *)v30 + 4) = v32 + 1; /*0x5cf360*/
        *(unsigned int *)(v33 + 4 * v32) = v28; /*0x5cf363*/
        ++v24; /*0x5cf366*/
      }
      while ( v24 <= 100 ); /*0x5cf36a*/
      v2 = v47; /*0x5cf3dd*/
      v3 = 0; /*0x5cf3e1*/
    }
    if ( Audio::IsSoundEnabled() ) /*0x5cf3e3*/
    {
      unknown_libname_73(&a3); /*0x5cf3f4*/
      String::Assign(&a2, 0); /*0x5cf3fe*/
      String::Assign(&v47, aSounds); /*0x5cf40c*/
      v34 = (int)INIClass::ReadString(&v49, a1, &v47, &a2, (int)&v46) > 0; /*0x5cf437*/
      DeleteAndZero((void **)&v47); /*0x5cf43a*/
      DeleteAndZero((void **)&a2); /*0x5cf443*/
      if ( v34 ) /*0x5cf44a*/
      {
        a2 = 0; /*0x5cf459*/
        if ( INIClass::FindKey(v49.__pad_0, &v46) > 0 ) /*0x5cf464*/
        {
          do /*0x5cf585*/
          {
            StringByIndex = INIClass::GetStringByIndexEx(&v49, (char **)&v48, &v46, (int)v3); /*0x5cf479*/
            String::Reassign((char **)&a3, (const char **)StringByIndex); /*0x5cf483*/
            DeleteAndZero((void **)&v48); /*0x5cf48c*/
            if ( String::NotEquals((const char **)&a3, 0) ) /*0x5cf497*/
            {
              String::Assign(&v47, 0); /*0x5cf4aa*/
              v36 = (int)INIClass::ReadString(&v49, &v46, (char **)&a3, &v47, (int)&v44) > 0; /*0x5cf4d2*/
              DeleteAndZero((void **)&v47); /*0x5cf4d5*/
              if ( v36 ) /*0x5cf4dc*/
              {
                v37 = RA2_OPNEW(0x10u); /*0x5cf4e4*/
                if ( v37 ) /*0x5cf4ee*/
                  v38 = (ReferenceCounted *)Audio::ParseVolume(v37, (const char **)&a3, (const char **)&v44); /*0x5cf501*/
                else
                  v38 = 0; /*0x5cf505*/
                if ( String::Equals_Alt((const char **)v38, 0) ) /*0x5cf50b*/
                {
                  if ( v38 ) /*0x5cf516*/
                  {
                    DeleteAndZero((void **)v38); /*0x5cf51a*/
                    RA2_OPDEL(v38); /*0x5cf520*/
                  }
                }
                else if ( v38 ) /*0x5cf52c*/
                {
                  v39 = *((unsigned int *)v2 + 19); /*0x5cf52e*/
                  if ( *((unsigned int *)v2 + 21) < v39 /*0x5cf556*/
                    || (v2[81] || !v39)
                    && (v40 = *((unsigned int *)v2 + 22), v40 > 0)
                    && (*(uint8_t (**)(char *, int, unsigned int))(*((unsigned int *)v2 + 17) + 8))(
                         v2 + 68,
                         v39 + v40,
                         0) )
                  {
                    v41 = *((unsigned int *)v2 + 21); /*0x5cf55d*/
                    v42 = *((unsigned int *)v2 + 18); /*0x5cf560*/
                    *((unsigned int *)v2 + 21) = v41 + 1; /*0x5cf566*/
                    *(unsigned int *)(v42 + 4 * v41) = v38; /*0x5cf569*/
                  }
                }
              }
            }
            v3 = ++a2; /*0x5cf574*/
          }
          while ( (int)v3 < INIClass::FindKey(v49.__pad_0, &v46) ); /*0x5cf585*/
        }
      }
      DeleteAndZero((void **)&a3); /*0x5cf591*/
    }
    DeleteAndZero((void **)&v44); /*0x5cf59a*/
    DeleteAndZero((void **)&v46); /*0x5cf5a3*/
    HashTable::DestroyHashTableINIClass((void **)&v49); /*0x5cf5ac*/
    v49.ambientSoundController[1] = (int)&vt_CCFileClass; /*0x5cf5b8*/
    v49.location[2] = 0; /*0x5cf5c0*/
    Vector::Clear((int)&v49.isInLogic); /*0x5cf5c7*/
    v49.ambientSoundController[1] = (int)&off_7E1668; /*0x5cf5d0*/
    BufferIOFileClass::Dtor(&v49.ambientSoundController[1]); /*0x5cf5d8*/
    return 1; /*0x5cf5e0*/
  }
  else
  {
LABEL_17:
    Debug::Log(); /*0x5cf07d*/
    DeleteAndZero((void **)&v44); /*0x5cf089*/
    DeleteAndZero((void **)&v46); /*0x5cf092*/
    HashTable::DestroyHashTableINIClass((void **)&v49); /*0x5cf09b*/
    v49.ambientSoundController[1] = (int)&vt_CCFileClass; /*0x5cf0a7*/
    v49.location[2] = 0; /*0x5cf0af*/
    Vector::Clear((int)&v49.isInLogic); /*0x5cf0b6*/
    v49.ambientSoundController[1] = (int)&off_7E1668; /*0x5cf0bf*/
    BufferIOFileClass::Dtor(&v49.ambientSoundController[1]); /*0x5cf0c7*/
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

  for ( i = 0; i < *((unsigned int *)this + 21); ++i ) /*0x5cf5fc*/
  {
    v3 = *((unsigned int *)this + 18); /*0x5cf5fe*/
    v4 = *(void **)(v3 + 4 * i); /*0x5cf601*/
    if ( v4 ) /*0x5cf606*/
    {
      DeleteAndZero(*(void ***)(v3 + 4 * i)); /*0x5cf60a*/
      RA2_OPDEL(v4); /*0x5cf610*/
    }
  }
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 17) + 12))((unsigned int *)this + 17); /*0x5cf626*/
  *((unsigned int *)this + 6) = 0; /*0x5cf629*/
  *((unsigned int *)this + 7) = 0; /*0x5cf630*/
  *((unsigned int *)this + 8) = 640; /*0x5cf637*/
  *((unsigned int *)this + 9) = 400; /*0x5cf63e*/
  for ( j = 0; j < *((unsigned int *)this + 15); ++j ) /*0x5cf64c*/
  {
    v6 = *((unsigned int *)this + 12); /*0x5cf64e*/
    v7 = *(void **)(v6 + 4 * j); /*0x5cf651*/
    if ( v7 ) /*0x5cf656*/
    {
      DeleteAndZero(*(void ***)(v6 + 4 * j)); /*0x5cf65a*/
      RA2_OPDEL(v7); /*0x5cf660*/
    }
  }
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 11) + 12))((unsigned int *)this + 11); /*0x5cf676*/
  for ( k = 0; k < *((unsigned int *)this + 4); ++k ) /*0x5cf680*/
  {
    v9 = *((unsigned int *)this + 1); /*0x5cf682*/
    v10 = *(void **)(v9 + 4 * k); /*0x5cf685*/
    if ( v10 ) /*0x5cf68a*/
    {
      SessionClass::loadSettings(*(unsigned int *)(v9 + 4 * k)); /*0x5cf68e*/
      RA2_OPDEL(v10); /*0x5cf694*/
    }
  }
  int SessionClass::Destruct(SessionClass *this)

}
} // namespace gamemd
// 0x5D0070
namespace gamemd {
CampaignClass * * SessionClass::loadSettings()
{

  int i; // ebp
  void **v3; // edi
  int j; // ebp
  CCINIClass *v5; // ecx
  SessionClass *v6; // edi
  CCINIClass *v7; // eax
  CCINIClass *v8; // eax
  CCINIClass *v9; // eax
  int v10; // ebx
  int v11; // edi

  for ( i = 0; i < *((unsigned int *)this + 19); ++i ) /*0x5d007f*/
  {
    v3 = *(void ***)(*((unsigned int *)this + 16) + 4 * i); /*0x5d0084*/
    if ( v3 ) /*0x5d0089*/
    {
      DeleteAndZero::Alt(v3 + 3); /*0x5d008e*/
      RA2_OPDEL(v3); /*0x5d0094*/
    }
  }
  for ( j = 0; j < *((unsigned int *)this + 25); ++j ) /*0x5d00ab*/
  {
    v5 = *(CCINIClass **)((char *)this + 88); /*0x5d00ad*/
    v6 = *(SessionClass **)&v5->__pad_0[4 * j]; /*0x5d00b0*/
    if ( v6 ) /*0x5d00b5*/
    {
      DeleteAndZero(*(unsigned int *)&v5->__pad_0[4 * j]); /*0x5d00b9*/
      RA2_OPDEL(v6); /*0x5d00bf*/
    }
  }
  v7 = *(CCINIClass **)((char *)this + 88); /*0x5d00cf*/
  *((unsigned int *)this + 21) = &vt_VectorClass_MapSelection; /*0x5d00d2*/
  if ( v7 && *((unsigned char *)this + 97) ) /*0x5d00dd*/
  {
    RA2_OPDEL(v7); /*0x5d00e3*/
    *((unsigned int *)this + 22) = 0; /*0x5d00eb*/
  }
  *((unsigned char *)this + 97) = 0; /*0x5d00ee*/
  *((unsigned int *)this + 23) = 0; /*0x5d00f1*/
  v8 = *(CCINIClass **)((char *)this + 64); /*0x5d00f4*/
  *((unsigned int *)this + 15) = &vt_VectorClass_MSTextEntry; /*0x5d00f7*/
  if ( v8 && *((unsigned char *)this + 73) ) /*0x5d0102*/
  {
    RA2_OPDEL(v8); /*0x5d0108*/
    *((unsigned int *)this + 16) = 0; /*0x5d0110*/
  }
  *((unsigned char *)this + 73) = 0; /*0x5d0113*/
  *((unsigned int *)this + 17) = 0; /*0x5d0116*/
  v9 = *(CCINIClass **)((char *)this + 40); /*0x5d0119*/
  *((unsigned int *)this + 9) = &vt_VectorClass_Point2D; /*0x5d011c*/
  if ( v9 && *((unsigned char *)this + 49) ) /*0x5d0127*/
  {
    RA2_OPDEL(v9); /*0x5d012d*/
    *((unsigned int *)this + 10) = 0; /*0x5d0135*/
  }
  *((unsigned char *)this + 49) = 0; /*0x5d013b*/
  *((unsigned int *)this + 11) = 0; /*0x5d013e*/
  DeleteAndZero((char *)this + 32); /*0x5d0141*/
  v10 = 2; /*0x5d0149*/
  v11 = (char *)this + 32; /*0x5d014e*/
  do /*0x5d015c*/
  {
    v11 -= 4; /*0x5d0151*/
    DeleteAndZero(v11); /*0x5d0156*/
    --v10; /*0x5d015b*/
  }
  while ( v10 ); /*0x5d015c*/
  DeleteAndZero::Alt((void **)((char *)this + 16)); /*0x5d0161*/
  DeleteAndZero((char *)this + 12); /*0x5d0169*/
  DeleteAndZero((char *)this + 8); /*0x5d0170*/
  DeleteAndZero((char *)this + 4); /*0x5d0178*/
  DeleteAndZero(this); /*0x5d017f*/

}
} // namespace gamemd
// 0x5D39D0
namespace gamemd {
unsigned int * SessionClass::saveSettings()
{

  *this = 0; /*0x5d39da*/
  *((unsigned int *)this + 1) = 0; /*0x5d39dc*/
  *((unsigned int *)this + 2) = 0; /*0x5d39df*/
  *((unsigned int *)this + 3) = 0; /*0x5d39e2*/
  *((unsigned int *)this + 4) = 0; /*0x5d39e5*/
  *((unsigned int *)this + 5) = 0; /*0x5d39e8*/
  *((unsigned char *)this + 24) = 0; /*0x5d39eb*/
  *((unsigned char *)this + 25) = 0; /*0x5d39ee*/
  *((unsigned char *)this + 26) = 0; /*0x5d39f1*/
  *((unsigned int *)this + 7) = 0; /*0x5d39f4*/
  *((unsigned int *)this + 8) = 0; /*0x5d39f7*/
  *((unsigned int *)this + 9) = 0; /*0x5d39fa*/
  *((unsigned int *)this + 172) = 0; /*0x5d39fd*/
  *((unsigned int *)this + 173) = 0; /*0x5d3a03*/
  *((unsigned short *)this + 348) = 0; /*0x5d3a09*/
  *((unsigned int *)this + 175) = 0; /*0x5d3a10*/
  *((unsigned int *)this + 176) = 0; /*0x5d3a16*/
  *((unsigned int *)this + 177) = 0; /*0x5d3a1c*/
  *((unsigned short *)this + 20) = 0; /*0x5d3a22*/
  *((unsigned short *)this + 182) = 0; /*0x5d3a26*/
  memset32((unsigned int *)this + 1312, 65537, 7u); /*0x5d3a38*/
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
  if ( g_abs_A8B23C ) /*0x5e64db*/
  {
    v3 = (*(int (**)(int))(*(unsigned int *)g_abs_A8B23C + 152))(g_abs_A8B23C); /*0x5e64df*/
    if ( v3 != -1 && v3 < PlayerCountMap ) /*0x5e64ec*/
      PlayerCountMap = v3; /*0x5e64ee*/
  }
  if ( g_abs_A8B238[0] == 4 ) /*0x5e64f7*/
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

  while ( *((unsigned int *)this + 4) ) /*0x663b46*/
  {
    RA2_OPDEL(**((void ***)this + 1)); /*0x663b53*/
    v2 = *((unsigned int *)this + 4); /*0x663b58*/
    if ( v2 > 0 ) /*0x663b60*/
    {
      v3 = v2 - 1; /*0x663b62*/
      v4 = 0; /*0x663b63*/
      for ( *((unsigned int *)this + 4) = v3; /*0x663b6a*/
            v4 < *((unsigned int *)this + 4);
            *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v4 - 4) = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v4) )
      {
        ++v4; /*0x663b6f*/
      }
    }
  }
  result = HouseClass_Count; /*0x663b85*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x663b94*/
  {
    v6 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * i]; /*0x663ba6*/
    if ( (uint8_t)House::IsCurrentPlayer((void *)v6) && !*(unsigned char *)(v6 + 502) ) /*0x663bbc*/
    {
      v7 = (char *)RA2_OPNEW(0x2Au); /*0x663bd8*/
      *v7 = i; /*0x663be2*/
      v8 = ToWideStringChar((char *)(v6 + 90154)); /*0x663be4*/
      strncpy(v7 + 1, v8, 0x14u); /*0x663bee*/
      v9 = 0; /*0x663bfb*/
      if ( g_abs_A8DA84 > 0 ) /*0x663bff*/
      {
        v10 = g_abs_A8DA78; /*0x663c01*/
        while ( *(unsigned int *)(*(unsigned int *)v10 + 111) != i ) /*0x663c12*/
        {
          ++v9; /*0x663c14*/
          v10 += 4; /*0x663c15*/
          if ( v9 >= g_abs_A8DA84 ) /*0x663c1a*/
            goto LABEL_15; /*0x663c1a*/
        }
        Network::CopyAddress((unsigned int *)(*(unsigned int *)(g_abs_A8DA78 + 4 * v9) + 40), &v16, (int)&v17); /*0x663c34*/
        *(unsigned int *)(v7 + 33) = v17; /*0x663c3d*/
        *(unsigned short *)(v7 + 37) = *((unsigned short *)&g_abs_A8E2B2 + v9); /*0x663c48*/
      }
LABEL_15:
      v7[41] = 1; /*0x663c50*/
      v7[39] = g_abs_A8E2AC == *(unsigned int *)(v6 + 48); /*0x663c6a*/
      v7[40] = 1 << i; /*0x663c6d*/
      v11 = *((unsigned int *)this + 2); /*0x663c70*/
      if ( *((unsigned int *)this + 4) < v11 /*0x663c93*/
        || (*((unsigned char *)this + 13) || !v11)
        && (v12 = *((unsigned int *)this + 5), v12 > 0)
        && (*(uint8_t (**)(void *, int, unsigned int))(*(unsigned int *)this + 8))(this, v11 + v12, 0) )
      {
        v13 = *((unsigned int *)this + 4); /*0x663c9a*/
        v14 = *((unsigned int *)this + 1); /*0x663c9d*/
        *((unsigned int *)this + 4) = v13 + 1; /*0x663ca3*/
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

  v2 = *((unsigned int *)this + 11); /*0x691500*/
  if ( v2 == -1 ) /*0x691506*/
  {
    aP1->field_0 = -1; /*0x691510*/
    aP1->field_4 = 0; /*0x691512*/
    return &aP1->field_0; /*0x691508*/
  }
  else
  {
    v4 = *((unsigned int *)this + 9); /*0x691518*/
    aP1->field_0 = *(unsigned int *)(v4 + 8 * v2 + 164); /*0x691527*/
    aP1->field_4 = *(unsigned int *)(v4 + 8 * v2 + 168); /*0x691531*/
    return &aP1->field_0; /*0x69151b*/
  }

}
} // namespace gamemd
// 0x6915D0
namespace gamemd {
int SessionClass::SetField()
{

  return *((unsigned int *)this + 11) < *(unsigned int *)(*((unsigned int *)this + 9) + 160); /*0x6915e0*/

}
} // namespace gamemd
// 0x696F10
namespace gamemd {
int SessionClass::GetPlayerSide()
{

  int result; // eax

  result = -2; /*0x696f13*/
  if ( *(unsigned int *)((char *)this + 79) != -2 ) /*0x696f1a*/
    return *(unsigned int *)((char *)this + 75); /*0x696f1c*/
  return result; /*0x696f1f*/

}
} // namespace gamemd
// 0x696F20
namespace gamemd {
int SessionClass::GetPlayerColor()
{

  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(unsigned int *)((char *)this + 87) != -2 ) /*0x696f2a*/
    return *(unsigned int *)((char *)this + 83); /*0x696f2c*/
  return result; /*0x696f2f*/

}
} // namespace gamemd
// 0x696F50
namespace gamemd {
int SessionClass::GetOption()
{

  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(unsigned int *)((char *)this + 95) != -2 || *(unsigned int *)((char *)this + 91) != -1 ) /*0x696f60*/
    return *(unsigned int *)((char *)this + 91); /*0x696f62*/
  return result; /*0x696f65*/

}
} // namespace gamemd
// 0x696F70
namespace gamemd {
int SessionClass::GetOption2()
{

  int result; // eax

  result = -2; /*0x696f73*/
  if ( *(unsigned int *)((char *)this + 103) != -2 || *(unsigned int *)((char *)this + 99) != -1 ) /*0x696f80*/
    return *(unsigned int *)((char *)this + 99); /*0x696f82*/
  return result; /*0x696f85*/

}
} // namespace gamemd
// 0x696F90
namespace gamemd {
int SessionClass::SetPlayerOption(SkirmishDialog * aP1)
{

  SkirmishDialog *result; // eax

  result = aP1; /*0x696f90*/
  if ( aP1 == (SkirmishDialog *)-2 ) /*0x696f97*/
  {
    *(unsigned int *)((char *)this + 75) = 0; /*0x696f99*/
    *(unsigned int *)((char *)this + 79) = -2; /*0x696fa0*/
  }
  else
  {
    *(unsigned int *)((char *)this + 75) = aP1; /*0x696fa6*/
    *(unsigned int *)((char *)this + 79) = -1; /*0x696fa9*/
  }
  return (int)result->__pad_0; /*0x696fa3*/

}
} // namespace gamemd
// 0x696FC0
namespace gamemd {
int SessionClass::SetPlayerColor(int a2)
{

  int result; // eax

  result = a2; /*0x696fc0*/
  if ( a2 == -2 ) /*0x696fc7*/
  {
    *(unsigned int *)((char *)this + 83) = -1; /*0x696fc9*/
    *(unsigned int *)((char *)this + 87) = -2; /*0x696fd0*/
  }
  else
  {
    *(unsigned int *)((char *)this + 83) = a2; /*0x696fd6*/
    *(unsigned int *)((char *)this + 87) = -1; /*0x696fd9*/
  }
  return result; /*0x696fd3*/

}
} // namespace gamemd
// 0x696FF0
namespace gamemd {
int SessionClass::SetOption(SessionClass * aP1)
{

  SessionClass *result; // eax

  result = aP1; /*0x696ff0*/
  if ( aP1 == (SessionClass *)-2 ) /*0x696ff7*/
  {
    *(unsigned int *)((char *)this + 91) = -1; /*0x696ff9*/
    *(unsigned int *)((char *)this + 95) = -2; /*0x697000*/
  }
  else
  {
    *(unsigned int *)((char *)this + 91) = aP1; /*0x697006*/
    *(unsigned int *)((char *)this + 95) = -1; /*0x697009*/
  }
  return (int)result->GameMode; /*0x697003*/

}
} // namespace gamemd
// 0x697020
namespace gamemd {
int SessionClass::SetOption2(SessionClass * aP1)
{

  SessionClass *result; // eax

  result = aP1; /*0x697020*/
  if ( aP1 == (SessionClass *)-2 ) /*0x697027*/
  {
    *(unsigned int *)((char *)this + 99) = -1; /*0x697029*/
    *(unsigned int *)((char *)this + 103) = -2; /*0x697030*/
  }
  else
  {
    *(unsigned int *)((char *)this + 99) = aP1; /*0x697036*/
    *(unsigned int *)((char *)this + 103) = -1; /*0x697039*/
  }
  return (int)result->GameMode; /*0x697033*/

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

  *((unsigned int *)this + 1) = 0; /*0x6970b8*/
  *((unsigned int *)this + 99) = 0; /*0x6970bb*/
  *((unsigned int *)this + 100) = 0; /*0x6970c1*/
  *((unsigned int *)this + 101) = 1; /*0x6970c7*/
  *((unsigned int *)this + 102) = 10000; /*0x6970cd*/
  *((unsigned int *)this + 103) = 10; /*0x6970d3*/
  *((unsigned char *)this + 416) = 1; /*0x6970d9*/
  *((unsigned char *)this + 417) = 1; /*0x6970df*/
  *((unsigned char *)this + 418) = 1; /*0x6970e5*/
  *((unsigned char *)this + 419) = 1; /*0x6970eb*/
  *((unsigned char *)this + 420) = 1; /*0x6970f1*/
  v2 = (unsigned char *)this + 428; /*0x6970f7*/
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
  *((unsigned int *)this + 130) = 0; /*0x697110*/
  *((unsigned int *)this + 131) = 0; /*0x697116*/
  *((unsigned int *)this + 132) = 1; /*0x69711c*/
  *((unsigned int *)this + 133) = 10000; /*0x697122*/
  *((unsigned int *)this + 134) = 10; /*0x697128*/
  *((unsigned char *)this + 540) = 1; /*0x69712e*/
  *((unsigned char *)this + 541) = 1; /*0x697135*/
  *((unsigned char *)this + 542) = 1; /*0x69713c*/
  *((unsigned char *)this + 543) = 1; /*0x697143*/
  *((unsigned char *)this + 544) = 1; /*0x69714a*/
  v4 = (unsigned char *)this + 552; /*0x697151*/
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
  *((unsigned int *)this + 161) = 0; /*0x69716a*/
  *((unsigned int *)this + 162) = 0; /*0x697170*/
  *((unsigned int *)this + 163) = 1; /*0x697176*/
  *((unsigned int *)this + 164) = 10000; /*0x69717c*/
  *((unsigned int *)this + 165) = 10; /*0x697182*/
  *((unsigned char *)this + 664) = 1; /*0x697188*/
  *((unsigned char *)this + 665) = 1; /*0x69718f*/
  *((unsigned char *)this + 666) = 1; /*0x697196*/
  *((unsigned char *)this + 667) = 1; /*0x69719d*/
  *((unsigned char *)this + 668) = 1; /*0x6971a4*/
  v6 = (unsigned char *)this + 676; /*0x6971ab*/
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
  v8 = (unsigned char *)this + 920; /*0x6971c4*/
  v18 = 8; /*0x6971ca*/
  do /*0x6971e5*/
  {
    Waypoint::InitInvalid(v8); /*0x6971d4*/
    v8 += 104; /*0x6971dd*/
    --v18; /*0x6971e1*/
  }
  while ( v18 ); /*0x6971e5*/
  *((unsigned int *)this + 421) = 0; /*0x6971ed*/
  *((unsigned int *)this + 422) = 0; /*0x6971f3*/
  *((unsigned char *)this + 1692) = 1; /*0x6971f9*/
  *((unsigned char *)this + 1693) = 0; /*0x697200*/
  *((unsigned int *)this + 420) = &vt_DynamicVectorClass_MultiMission; /*0x697206*/
  *((unsigned int *)this + 425) = 10; /*0x697210*/
  *((unsigned int *)this + 424) = 0; /*0x697216*/
  Waypoint::InitInvalid((unsigned char *)this + 2276); /*0x69721c*/
  *((unsigned int *)this + 573) = 0; /*0x697227*/
  *((unsigned int *)this + 574) = 0; /*0x69722d*/
  *((unsigned char *)this + 2300) = 1; /*0x697233*/
  *((unsigned char *)this + 2301) = 0; /*0x69723a*/
  *((unsigned int *)this + 572) = &vt_DynamicVectorClass_GlobalPacketType; /*0x697240*/
  *((unsigned int *)this + 577) = 10; /*0x69724a*/
  *((unsigned int *)this + 576) = 0; /*0x697250*/
  SessionClass::saveSettings((unsigned char *)this + 2600); /*0x697256*/
  Waypoint::InitInvalid((unsigned char *)this + 7876); /*0x697261*/
  CCFileClass::Construct3((int)((unsigned char *)this + 9044)); /*0x69726c*/
  Waypoint::InitInvalid((unsigned char *)this + 9160); /*0x697277*/
  Waypoint::InitInvalid((unsigned char *)this + 9676); /*0x697282*/
  *((unsigned int *)this + 2564) = 0; /*0x69728c*/
  *((unsigned int *)this + 2565) = 0; /*0x697292*/
  *((unsigned char *)this + 10264) = 1; /*0x697298*/
  *((unsigned char *)this + 10265) = 0; /*0x69729f*/
  *((unsigned int *)this + 2563) = &vt_DynamicVectorClass_NodeNameType; /*0x6972a5*/
  *((unsigned int *)this + 2568) = 10; /*0x6972ab*/
  *((unsigned int *)this + 2567) = 0; /*0x6972b1*/
  *((unsigned int *)this + 2570) = 0; /*0x6972b7*/
  *((unsigned int *)this + 2571) = 0; /*0x6972bd*/
  *((unsigned char *)this + 10288) = 1; /*0x6972c3*/
  *((unsigned char *)this + 10289) = 0; /*0x6972ca*/
  *((unsigned int *)this + 2569) = &vt_DynamicVectorClass_NodeNameType; /*0x6972d0*/
  *((unsigned int *)this + 2574) = 10; /*0x6972d6*/
  *((unsigned int *)this + 2573) = 0; /*0x6972dc*/
  *((unsigned int *)this + 2576) = 0; /*0x6972e2*/
  *((unsigned int *)this + 2577) = 0; /*0x6972e8*/
  *((unsigned char *)this + 10312) = 1; /*0x6972ee*/
  *((unsigned char *)this + 10313) = 0; /*0x6972f5*/
  *((unsigned int *)this + 2575) = &vt_DynamicVectorClass_NodeNameType; /*0x6972fb*/
  *((unsigned int *)this + 2580) = 10; /*0x697301*/
  *((unsigned int *)this + 2579) = 0; /*0x697307*/
  *((unsigned int *)this + 2624) = 0; /*0x69730d*/
  *((unsigned int *)this + 2625) = 0; /*0x697313*/
  *((unsigned char *)this + 10504) = 1; /*0x697319*/
  *((unsigned char *)this + 10505) = 0; /*0x697320*/
  *((unsigned int *)this + 2623) = &off_7F11B4; /*0x697326*/
  *((unsigned int *)this + 2628) = 10; /*0x697330*/
  *((unsigned int *)this + 2627) = 0; /*0x697336*/
  *((unsigned int *)this + 2630) = 0; /*0x69733c*/
  *((unsigned int *)this + 2631) = 0; /*0x697342*/
  *((unsigned char *)this + 10528) = 1; /*0x697348*/
  *((unsigned char *)this + 10529) = 0; /*0x69734f*/
  *((unsigned int *)this + 2629) = &vt_DynamicVectorClass_char; /*0x697355*/
  *((unsigned int *)this + 2634) = 10; /*0x69735f*/
  *((unsigned int *)this + 2633) = 0; /*0x697365*/
  *((unsigned int *)this + 2636) = 0; /*0x697371*/
  *((unsigned int *)this + 2637) = 0; /*0x697377*/
  *((unsigned char *)this + 10552) = 1; /*0x69737d*/
  *((unsigned char *)this + 10553) = 0; /*0x697384*/
  *((unsigned int *)this + 2635) = &vt_DynamicVectorClass_unsigned_short_const; /*0x69738a*/
  *((unsigned int *)this + 2640) = 10; /*0x697394*/
  *((unsigned int *)this + 2639) = 0; /*0x69739a*/
  Waypoint::InitInvalid((unsigned char *)this + 10604); /*0x6973a0*/
  Waypoint::InitInvalid((unsigned char *)this + 10616); /*0x6973ab*/
  Waypoint::InitInvalid((unsigned char *)this + 10632); /*0x6973b6*/
  v9 = (unsigned char *)this + 10644; /*0x6973bb*/
  v10 = 8; /*0x6973c1*/
  do /*0x6973d1*/
  {
    Waypoint::InitInvalid(v9); /*0x6973c8*/
    v9 += 12; /*0x6973cd*/
    --v10; /*0x6973d0*/
  }
  while ( v10 ); /*0x6973d1*/
  v11 = (DWORD *)((unsigned char *)this + 12172); /*0x6973d3*/
  v12 = 8; /*0x6973d9*/
  do /*0x6973ef*/
  {
    *v11 = Timer::GetTicks(); /*0x6973e6*/
    v11[2] = 0; /*0x6973e8*/
    v11 += 3; /*0x6973eb*/
    --v12; /*0x6973ee*/
  }
  while ( v12 ); /*0x6973ef*/
  *((unsigned char *)this + 12488) = 0; /*0x6973f1*/
  *(unsigned int *)this = 0; /*0x6973fc*/
  *((unsigned int *)this + 5) = 2; /*0x6973ff*/
  *((unsigned int *)this + 7) = 0; /*0x697402*/
  *((unsigned char *)this + 32) = 1; /*0x697405*/
  *((unsigned int *)this + 9) = 0; /*0x697409*/
  *((unsigned char *)this + 40) = 0; /*0x69740c*/
  *((unsigned char *)this + 41) = 0; /*0x69740f*/
  *((unsigned char *)this + 53) = 0; /*0x697412*/
  *((unsigned int *)this + 14) = 0; /*0x697415*/
  *((unsigned char *)this + 42) = 0; /*0x697418*/
  *((unsigned char *)this + 43) = 0; /*0x69741b*/
  *((unsigned char *)this + 44) = 0; /*0x69741e*/
  *((unsigned int *)this + 12) = 0; /*0x697421*/
  *((unsigned char *)this + 52) = 0; /*0x697424*/
  *((unsigned char *)this + 228) = 0; /*0x697427*/
  *((unsigned char *)this + 229) = 0; /*0x69742d*/
  *((unsigned char *)this + 230) = 0; /*0x697433*/
  *((unsigned char *)this + 231) = 0; /*0x697439*/
  *((unsigned char *)this + 232) = 0; /*0x69743f*/
  *((unsigned int *)this + 16) = 1; /*0x697445*/
  *((unsigned int *)this + 81) = 0; /*0x69744c*/
  *((unsigned char *)this + 328) = 0; /*0x697452*/
  *((unsigned int *)this + 93) = 0; /*0x69745b*/
  *((unsigned int *)this + 94) = -1; /*0x697461*/
  *((unsigned int *)this + 87) = 2; /*0x697467*/
  *((unsigned int *)this + 88) = -1; /*0x69746d*/
  *((unsigned int *)this + 97) = *((unsigned int *)this + 93); /*0x697479*/
  *((unsigned int *)this + 98) = *((unsigned int *)this + 94); /*0x697485*/
  *((unsigned int *)this + 95) = *((unsigned int *)this + 87); /*0x697491*/
  *((unsigned int *)this + 96) = *((unsigned int *)this + 88); /*0x69749d*/
  *((unsigned char *)this + 7897) = 1; /*0x6974a3*/
  *((unsigned char *)this + 7896) = 1; /*0x6974aa*/
  *((unsigned char *)this + 8129) = 1; /*0x6974b1*/
  *((unsigned char *)this + 8128) = 1; /*0x6974ba*/
  *(unsigned int *)((unsigned char *)this + 12410) = 0; /*0x6974c1*/
  *(unsigned int *)((unsigned char *)this + 12414) = 0; /*0x6974c9*/
  *(unsigned int *)((unsigned char *)this + 12418) = 0; /*0x6974d4*/
  *(unsigned int *)((unsigned char *)this + 12422) = 0; /*0x6974da*/
  *((unsigned char *)this + 12408) = 0; /*0x6974e0*/
  *((unsigned char *)this + 12396) = 0; /*0x6974e6*/
  *((unsigned short *)this + 6199) = 0; /*0x6974ec*/
  *((unsigned short *)this + 6200) = 0; /*0x6974f3*/
  *((unsigned int *)this + 3068) = 1250; /*0x6974fa*/
  *((unsigned int *)this + 3069) = 0; /*0x697504*/
  *((unsigned char *)this + 12312) = 1; /*0x69750a*/
  *((unsigned char *)this + 12104) = 0; /*0x697511*/
  *((unsigned int *)this + 3079) = 0; /*0x69751c*/
  memset(g_abs_B73E44, 0, 0x2000u); /*0x697522*/
  memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x69752e*/
  *((unsigned int *)this + 192) = 0; /*0x697530*/
  *((unsigned int *)this + 193) = 0; /*0x697536*/
  *((unsigned int *)this + 195) = -1; /*0x69753c*/
  *((unsigned char *)this + 776) = 0; /*0x697542*/
  *((unsigned char *)this + 10600) = 0; /*0x697548*/
  *((unsigned int *)this + 3101) = -1; /*0x697559*/
  memset((unsigned char *)this + 12320, 0, 0x28u); /*0x69755f*/
  *((unsigned short *)this + 6180) = 0; /*0x697561*/
  *((unsigned int *)this + 3107) = 0; /*0x697563*/
  *((unsigned char *)this + 12432) = 1; /*0x697569*/
  *((unsigned int *)this + 3109) = -1; /*0x697570*/
  *((unsigned char *)this + 12440) = 0; /*0x697576*/
  *((unsigned int *)this + 3111) = 20; /*0x69757c*/
  *((unsigned int *)this + 3112) = 0; /*0x697586*/
  *((unsigned int *)this + 3113) = 0; /*0x69758c*/
  *((unsigned int *)this + 3114) = -1; /*0x697592*/
  *((unsigned short *)this + 5314) = 0; /*0x697598*/
  *((unsigned char *)this + 1672) = 0; /*0x69759f*/
  *((unsigned char *)this + 1673) = 0; /*0x6975a5*/
  *((unsigned char *)this + 1674) = 0; /*0x6975b0*/
  *((unsigned int *)this + 196) = 8; /*0x6975b6*/
  *((unsigned int *)this + 198) = 15; /*0x6975c0*/
  *((unsigned int *)this + 204) = 15; /*0x6975c6*/
  *((unsigned int *)this + 197) = 0; /*0x6975cc*/
  *((unsigned int *)this + 199) = 5; /*0x6975df*/
  memset((unsigned char *)this + 828, 0, 0x340u); /*0x6975e9*/
  v13 = *((unsigned int *)this + 2031); /*0x6975eb*/
  v14 = *((unsigned int *)this + 2261); /*0x6975f1*/
  IDA_LOBYTE(v13) = v13 & 0xFE; /*0x6975fd*/
  *((unsigned int *)this + 205) = 0; /*0x697604*/
  *((unsigned int *)this + 206) = 0; /*0x69760a*/
  *((unsigned char *)this + 1660) = 0; /*0x697610*/
  *((unsigned char *)this + 1661) = 0; /*0x697616*/
  *((unsigned int *)this + 416) = 0; /*0x69761c*/
  *((unsigned int *)this + 417) = 0; /*0x697622*/
  *((unsigned short *)this + 3949) = 0; /*0x697628*/
  *((unsigned int *)this + 2031) = v13; /*0x69762f*/
  (*(void (**)(char *, char *))(v14 + 8))((unsigned char *)this + 9044, g_abs_83EEAC); /*0x697635*/
  *((unsigned int *)this + 2288) &= 0xFFFFFFF8; /*0x697648*/
  *((unsigned int *)this + 2289) = 0; /*0x697659*/
  *((unsigned char *)this + 9172) = 0; /*0x69765f*/
  *((unsigned char *)this + 9173) = 1; /*0x697665*/
  *((unsigned char *)this + 9174) = 0; /*0x69766c*/
  *((unsigned short *)this + 4588) = 0; /*0x697672*/
  *((unsigned short *)this + 4844) = 0; /*0x697679*/
  *((unsigned int *)this + 2591) = 0; /*0x697680*/
  *((unsigned int *)this + 2649) = 1; /*0x697686*/
  *((unsigned int *)this + 2562) = 558; /*0x69768c*/
  memset((unsigned char *)this + 2312, 0, 0x20u); /*0x697696*/
  memset((unsigned char *)this + 2344, 0xFFu, 0x100u); /*0x6976a5*/
  *((unsigned int *)this + 2592) |= 1u; /*0x6976b6*/
  *((unsigned int *)this + 2593) = 0; /*0x6976be*/
  *((unsigned int *)this + 2594) = 760; /*0x6976c4*/
  *((unsigned int *)this + 2595) = 3; /*0x6976ce*/
  *((unsigned int *)this + 2596) = 9600; /*0x6976d8*/
  *((unsigned int *)this + 2597) = 0; /*0x6976e2*/
  *((unsigned int *)this + 2598) = -1; /*0x6976e8*/
  *((unsigned int *)this + 2599) = 0; /*0x6976ee*/
  strcpy((unsigned char *)this + 10408, &g_abs_889F64); /*0x697709*/
  *((unsigned int *)this + 2622) = 0; /*0x697712*/
  *((unsigned int *)this + 3115) = 0x7FFFFFFF; /*0x697718*/
  *((unsigned int *)this + 3116) = 0; /*0x697722*/
  *((unsigned int *)this + 3117) = 0; /*0x697728*/
  *((unsigned int *)this + 3118) = g_abs_B07740; /*0x69773a*/
  *((unsigned int *)this + 3119) = g_abs_B07744; /*0x697745*/
  v15 = (unsigned char *)this + 132; /*0x69774e*/
  *((unsigned int *)this + 3120) = g_abs_B07748; /*0x697754*/
  *((unsigned char *)this + 12488) = 0; /*0x697757*/
  *((unsigned int *)this + 3123) = 0; /*0x69775d*/
  *((unsigned int *)this + 3124) = 0; /*0x697763*/
  *((unsigned int *)this + 3125) = 0; /*0x697769*/
  *((unsigned char *)this + 10360) = 0; /*0x69776f*/
  *((unsigned int *)this + 15) = 0; /*0x697775*/
  v16 = 8; /*0x697778*/
  do /*0x69778e*/
  {
    *(v15 - 8) = -1; /*0x69777d*/
    *v15++ = -1; /*0x697784*/
    --v16; /*0x69778d*/
  }
  while ( v16 ); /*0x69778e*/
  *((unsigned int *)this + 3) = 0; /*0x697790*/
  *((unsigned int *)this + 4) = 0; /*0x697793*/
  *((unsigned char *)this + 1704) = 0; /*0x697796*/
  *((unsigned int *)this + 563) = 0; /*0x69779c*/
  *((unsigned char *)this + 2256) = 0; /*0x6977a2*/
  *((unsigned int *)this + 565) = 0; /*0x6977a9*/
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
  unsigned char v14[8]; // [esp+18h] [ebp-10h] BYREF
  unsigned char v15[8]; // [esp+20h] [ebp-8h] BYREF

  Debug::Log(); /*0x697b7e*/
  if ( g_abs_A8B238[0] != 3 && g_abs_A8B238[0] != 4 ) /*0x697b93*/
    return 0; /*0x697b9e*/
  v3 = 0; /*0x697ba7*/
  if ( *((int *)this + 2579) > 0 ) /*0x697bab*/
  {
    do /*0x697bc5*/
    {
      Debug::Log(); /*0x697bc5*/
      if ( _wcsicmp( /*0x697be7*/
             *(const wchar_t **)(*((unsigned int *)this + 2576) + 4 * v3),
             (const wchar_t *)(*((unsigned int *)HouseClass_Array
                               + *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v3) + 111))
                             + 90154)) )
      {
        return 0; /*0x697bf1*/
      }
      if ( !_wcsicmp(*(const wchar_t **)(*((unsigned int *)this + 2576) + 4 * v3), (const wchar_t *)this + 6160) ) /*0x697c04*/
      {
        *((unsigned int *)this + 3101) = *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v3) + 111); /*0x697c25*/
        Network::CopyAddress((unsigned int *)(*(unsigned int *)(g_abs_A8DA78 + 4 * v3) + 40), &v13, (int)v15); /*0x697c38*/
        NetworkID::Assign(&g_abs_A8DBA4, &v13, (int)v15, 0); /*0x697c4d*/
        Network::SetPlayerCoords(&g_abs_A8DBA4); /*0x697c5c*/
      }
      v4 = *(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v3); /*0x697c67*/
      *(unsigned int *)(*((unsigned int *)HouseClass_Array + *(unsigned int *)(v4 + 111)) + 516) = *(unsigned int *)(v4 + 123); /*0x697c7e*/
      Network::CopyAddress((unsigned int *)(*(unsigned int *)(g_abs_A8DA78 + 4 * v3) + 40), &v13, (int)v15); /*0x697c94*/
      v5 = 0; /*0x697c99*/
      for ( i = 0; i < 4; ++i ) /*0x697c9b*/
        v5 = (uint8_t)v15[i] | (v5 << 8); /*0x697ca8*/
      Debug::Log(); /*0x697cc7*/
      *(unsigned int *)(*((unsigned int *)HouseClass_Array + *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v3) + 111)) + 512) = v5; /*0x697ce5*/
      *(unsigned char *)(*((unsigned int *)HouseClass_Array + *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v3) + 111)) + 520) = 0; /*0x697d00*/
      if ( v3 > 0 ) /*0x697d06*/
      {
        v7 = *(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v3); /*0x697d0e*/
        SessionClass::initLAN(*(unsigned int *)(v7 + 111), (wchar_t *)v7, v7 + 40); /*0x697d1f*/
        *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v3) + 115) = -1; /*0x697d2d*/
      }
    }
    while ( ++v3 < *((unsigned int *)this + 2579) ); /*0x697bc5*/
  }
  v8 = g_abs_887338; /*0x697d43*/
  v9 = g_abs_A8E284; /*0x697d48*/
  do /*0x697d79*/
  {
    v10 = g_abs_887340; /*0x697d4d*/
    if ( v8 != -1 ) /*0x697d56*/
    {
      Ticks = Timer::GetTicks(); /*0x697d62*/
      v8 = g_abs_887338; /*0x697d64*/
      v10 += Ticks - g_abs_887338; /*0x697d6b*/
    }
    *v9++ = v10; /*0x697d6d*/
  }
  while ( (int)v9 < (int)&g_abs_A8E2A4 ); /*0x697d79*/
  if ( *(unsigned int *)this != 4 ) /*0x697d7e*/
    goto LABEL_22; /*0x697d7e*/
  if ( !*((unsigned char *)this + 12432) ) /*0x697d84*/
    goto LABEL_22; /*0x697d84*/
  v12 = 0; /*0x697da0*/
  v14[0] = 0; /*0x697db0*/
  v14[1] = 0; /*0x697db4*/
  v14[2] = 0; /*0x697db8*/
  v14[3] = 0; /*0x697dbc*/
  v14[4] = 0; /*0x697dc0*/
  v14[5] = 0; /*0x697dc4*/
  NetworkID::Assign(&g_abs_A8DBB0, &v12, (int)v14, 0); /*0x697dc8*/
  *((unsigned char *)this + 10600) = 1; /*0x697dd2*/
  *((unsigned int *)this + 3107) = 0; /*0x697dd9*/
  *((unsigned int *)this + 3111) = 20; /*0x697ddf*/
  *((unsigned int *)this + 3109) = -1; /*0x697de9*/
  SessionClass::initInternet(g_abs_A8E9C0); /*0x697df3*/
  SessionClass::BuildLobbyPlayerList(&g_NetworkEventQueue); /*0x697dfd*/
  if ( SessionClass::IsValidHouse((int)g_abs_A8B238, 0) ) /*0x697e08*/
  {
    if ( !(uint8_t)LaunchMultiplayerHost(0) /*0x697e25*/
      || !(uint8_t)Network::SendMasterPlayerList(&g_NetworkEventQueue) )
    {
LABEL_22:
      g_abs_A8DBA0 = 0; /*0x697e2e*/
    }
  }
  Debug::Log(); /*0x697e4f*/
  Debug::Log(); /*0x697e59*/
  return 1; /*0x697b95*/

}
// 0x697E70
int  SessionClass::IsValidHouse( void * a2)
{

  void *v2; // edi
  int v3; // eax
  int v5; // ecx
  HouseClass *i; // edx
  void *v7; // eax

  v2 = a2; /*0x697e73*/
  if ( !a2 ) /*0x697e79*/
    v2 = HouseClass_Player; /*0x697e7b*/
  if ( g_abs_A8B238[0] != 4 || !v2 ) /*0x697e8c*/
    goto LABEL_9; /*0x697e8c*/
  v3 = *(unsigned int *)(this + 12404); /*0x697e8e*/
  if ( v3 != -1 ) /*0x697e97*/
    return *((unsigned int *)v2 + 12) == v3; /*0x697ea8*/
  if ( !_wcsicmp((const wchar_t *)v2 + 45077, (const wchar_t *)(this + 12320)) ) /*0x697eb9*/
    return 1; /*0x697ec7*/
LABEL_9:
  v5 = 0; /*0x697ed3*/
  if ( HouseClass_Count <= 0 ) /*0x697ed7*/
    return 0; /*0x697efd*/
  for ( i = HouseClass_Array; ; i = (HouseClass *)((char *)i + 4) ) /*0x697ed9*/
  {
    v7 = *(void **)i->__pad_0; /*0x697edf*/
    if ( *(unsigned char *)(*(unsigned int *)i->__pad_0 + 492) ) /*0x697ee1*/
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
  unsigned int *v4; // ebp
  int KeyCount; // ebx
  int v6; // edi
  uint8_t *StringByIndex; // eax
  wchar_t *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  HANDLE FirstFileA; // ebx
  char *cAlternateFileName; // esi
  int v15; // ebx
  int i; // edi
  uint8_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  HANDLE v24; // ebx
  char *cFileName; // esi
  unsigned int *v26; // eax
  unsigned int *v27; // edi
  int v28; // eax
  unsigned int v29; // kr0C_4
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // ecx
  uint8_t *v33; // eax
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
  unsigned int v61[10]; // [esp+40h] [ebp-5A4h] BYREF
  char v62; // [esp+68h] [ebp-57Ch]
  int v63; // [esp+6Ch] [ebp-578h]
  int v64; // [esp+70h] [ebp-574h]
  int v65; // [esp+74h] [ebp-570h]
  int v66; // [esp+78h] [ebp-56Ch]
  unsigned int v67[22]; // [esp+7Ch] [ebp-568h] BYREF
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
  v3 = *((unsigned int *)this + 420); /*0x69999f*/
  v4 = (unsigned int *)this + 420; /*0x6999a5*/
  v61[0] = &vt_List_INIClass_INISection; /*0x6999ad*/
  memset(&v61[7], 0, 12); /*0x6999b5*/
  v62 = 0; /*0x6999c1*/
  v63 = 0; /*0x6999c6*/
  v64 = 0; /*0x6999ca*/
  v60[0] = (int)&vt_INIClass; /*0x6999ce*/
  (*(void (**)(unsigned int *))(v3 + 12))(v4); /*0x6999d6*/
  CCFileClass::Construct(v67, g_abs_83F520); /*0x6999e2*/
  if ( CCFileClass::Open(v67, 0) ) /*0x6999ec*/
  {
    FileStraw::Open(v60, (int)v67, 0); /*0x699a03*/
    KeyCount = INIClass::GetKeyCount((char *)v60, (uint8_t *)g_abs_83F514); /*0x699a16*/
    v6 = 0; /*0x699a18*/
    if ( KeyCount > 0 ) /*0x699a1c*/
    {
      while ( 1 ) /*0x699a3f*/
      {
        StringByIndex = (uint8_t *)INIClass::GetStringByIndex( /*0x699a3f*/
                                             (char *)v60,
                                             (uint8_t *)g_abs_83F514,
                                             v6);
        if ( INIClass::GetString( /*0x699a4e*/
               (uint8_t ***)v60,
               (uint8_t *)g_abs_83F514,
               StringByIndex,
               &g_abs_889F64,
               v70,
               64) )
        {
          v8 = (wchar_t *)RA2_OPNEW(0x1BCu); /*0x699a5c*/
          if ( v8 ) /*0x699a66*/
            Description = MapFile::LoadDescription(v8, (uint8_t ***)v60, v70); /*0x699a7c*/
          v9 = v4[2]; /*0x699a7e*/
          if ( v4[4] < v9 /*0x699aa4*/
            || (*((unsigned char *)v4 + 13) || !v9)
            && (v10 = v4[5], v10 > 0)
            && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v4 + 8))(v4, v9 + v10, 0) )
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
  INIClass::ClearSection((int)v60, 0, 0); /*0x699acb*/
  CCFileClass::Reset(v67); /*0x699ad4*/
  FirstFileA = FindFirstFileA(g_abs_83F50C, &FindFileData); /*0x699aec*/
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
        if ( _strcmpi(cAlternateFileName, g_abs_83F520) )
        {
          FileClass::SetFileName(v67, cAlternateFileName); /*0x699b48*/
          FileStraw::Open(v60, (int)v67, 0); /*0x699b58*/
          v15 = INIClass::GetKeyCount((char *)v60, (uint8_t *)g_abs_83F514); /*0x699b6b*/
          for ( i = 0; i < v15; ++i )
          {
            v17 = (uint8_t *)INIClass::GetStringByIndex((char *)v60, (uint8_t *)g_abs_83F514, i); /*0x699b90*/
            if ( INIClass::GetString(
                   (uint8_t ***)v60,
                   (uint8_t *)g_abs_83F514,
                   v17,
                   &g_abs_889F64,
                   v70,
                   64) )
            {
              v18 = (wchar_t *)RA2_OPNEW(0x1BCu); /*0x699bad*/
              v19 = v18 ? MapFile::LoadDescription(v18, (uint8_t ***)v60, v70) : 0;
              v20 = v4[2]; /*0x699bd3*/
              if ( v4[4] < v20 /*0x699bf9*/
                || (*((unsigned char *)v4 + 13) || !v20)
                && (v21 = v4[5], v21 > 0)
                && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v4 + 8))(v4, v20 + v21, 0) )
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
  INIClass::ClearSection((int)v60, 0, 0); /*0x699c42*/
  CCFileClass::Reset(v67); /*0x699c4b*/
  v24 = FindFirstFileA(g_abs_83F504, &FindFileData); /*0x699c69*/
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
        if ( _strcmpi(cFileName, g_abs_83F4F4) ) /*0x699cbe*/
        {
          v26 = RA2_OPNEW(0x28u); /*0x699cd0*/
          if ( v26 ) /*0x699cda*/
          {
            v27 = MixFileClass::FromFile(v26, cFileName, (int)&g_abs_886980); /*0x699ced*/
            if ( v27 ) /*0x699cf1*/
            {
              if ( g_abs_884DD0 < g_abs_884DC8 /*0x699d2d*/
                || (g_abs_884DCD || !g_abs_884DC8)
                && g_abs_884DD4 > 0
                && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_884DC0 + 8))(
                     &g_abs_884DC0,
                     g_abs_884DC8 + g_abs_884DD4,
                     0) )
              {
                v28 = g_abs_884DD0++; /*0x699d3a*/
                *((unsigned int *)g_abs_884DC4 + v28) = v27; /*0x699d49*/
              }
              v29 = strlen(cFileName) + 1; /*0x699d53*/
              v30 = v29 - 1; /*0x699d5f*/
              strncpy(Destination, cFileName, v29 - 4); /*0x699d67*/
              *((unsigned char *)&v75[62] + v30 + 1) = 0; /*0x699d8f*/
              strcat(Destination, (const char *)&g_abs_83F4F0); /*0x699d9f*/
              Destination[v30] = 0; /*0x699da8*/
              FileClass::SetFileName(v67, Destination); /*0x699dbb*/
              if ( CCFileClass::Open(v67, 0) ) /*0x699dc7*/
              {
                FileStraw::Open(v60, (int)v67, 0); /*0x699dde*/
                v31 = INIClass::GetKeyCount((char *)v60, (uint8_t *)g_abs_83F514); /*0x699dec*/
                v32 = 0; /*0x699df1*/
                v66 = v31; /*0x699df5*/
                for ( j = 0; j < v66; ++j ) /*0x699dfd*/
                {
                  v33 = (uint8_t *)INIClass::GetStringByIndex( /*0x699e1c*/
                                             (char *)v60,
                                             (uint8_t *)g_abs_83F514,
                                             v32);
                  if ( INIClass::GetString( /*0x699e2b*/
                         (uint8_t ***)v60,
                         (uint8_t *)g_abs_83F514,
                         v33,
                         &g_abs_889F64,
                         v70,
                         64) )
                  {
                    v34 = (wchar_t *)RA2_OPNEW(0x1BCu); /*0x699e3d*/
                    if ( v34 ) /*0x699e47*/
                    {
                      v35 = MapFile::LoadDescription(v34, (uint8_t ***)v60, v70); /*0x699e5c*/
                      v36 = v35; /*0x699e61*/
                      if ( v35 ) /*0x699e65*/
                      {
                        v37 = *((unsigned int *)v35 + 97); /*0x699e6b*/
                        v38 = *((unsigned int *)v35 + 96); /*0x699e71*/
                        if ( v38 == v37 ) /*0x699e7b*/
                          swprintf(Buffer, (const size_t)&g_abs_83F4CC, (const wchar_t *const)0x28, v38, 41); /*0x699ea8*/
                        else
                          swprintf(Buffer, (const size_t)&g_abs_83F4DC, (const wchar_t *const)0x28, v38, v37, 41); /*0x699e8e*/
                        v39 = wcslen(v36); /*0x699ebf*/
                        wcscpy(Source, v36); /*0x699ec1*/
                        wcsncat(Source, stru_82083C, 44 - v39); /*0x699edb*/
                        wcsncat(Source, Buffer, 44 - (v39 + 1)); /*0x699ef9*/
                        if ( Source ) /*0x699f0a*/
                        {
                          wcsncpy(v36, Source, 0x2Cu); /*0x699f17*/
                          v36[43] = 0; /*0x699f1f*/
                        }
                        else
                        {
                          String = GetStringCSF(g_abs_83F4B8, 0, g_abs_83EEB8, 2845); /*0x699f36*/
                          wcscpy(v36, String); /*0x699f3d*/
                        }
                        v41 = v4[2]; /*0x699f45*/
                        if ( v4[4] < v41 /*0x699f6a*/
                          || (*((unsigned char *)v4 + 13) || !v41)
                          && (v42 = v4[5], v42 > 0)
                          && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v4 + 8))(v4, v41 + v42, 0) )
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
  hFindFileb = FindFirstFileA(g_abs_83F490, &FindFileData); /*0x69a010*/
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
          (uint8_t ***)v60,
          (uint8_t *)g_abs_82BF9C,
          (uint8_t *)g_abs_817854,
          unk_829284,
          v70,
          64);
        INIClass::GetString( /*0x69a095*/
          (uint8_t ***)v60,
          (uint8_t *)g_INI_Key_Digest,
          (uint8_t *)g_abs_831898,
          g_abs_83F3E4,
          v71,
          32);
        BulkCharToWide(v75, (uint8_t *)v70, -1); /*0x69a0aa*/
        IDA_LOBYTE(v56) = INIClass::ReadBool_Overwrite(g_abs_82BF9C, g_abs_83DC5C, 0); /*0x69a0c8*/
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
          || (*((unsigned char *)v4 + 13) || !v48)
          && (v49 = v4[5], v49 > 0)
          && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v4 + 8))(v4, v48 + v49, 0) )
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
  v67[0] = &vt_CCFileClass; /*0x69a1b2*/
  v69 = 0; /*0x69a1ba*/
  Vector::Clear((int)v68); /*0x69a1c1*/
  v67[0] = &off_7E1668; /*0x69a1ca*/
  BufferIOFileClass::Dtor(v67); /*0x69a1d2*/
  return HashTable::DestroyHashTableINIClass((void **)v60); /*0x69a1e0*/

}
// 0x69A980
ObjectClass * *  SessionClass::ParseGameInfo(wchar_t * Destination, char * Source, CampaignScore * aP2, CCINIClass * aP3, CampaignScore * aP4, const char * a5, CampaignScore * aP6, int a8)
{

  wchar_t *v8; // esi
  VectorClass *v9; // ebx
  wchar_t *v10; // ebp
  char *v11; // eax
  wchar_t *StringCSF; // eax
  char v13; // cl
  int v14; // eax
  void (**v15)(VectorClass *); // edx
  char *v16; // ecx
  int v17; // eax
  void *v18; // eax
  unsigned int *v19; // edx
  ObjectClass *i; // edi
  CampaignScore *v21; // ecx
  int v22; // eax
  ObjectClass *v23; // eax

  v8 = aP4; /*0x69a984*/
  v9 = (VectorClass *)(aP4 + 196); /*0x69a989*/
  MapFile::Constructor((unsigned int *)aP4 + 98, 0, 0); /*0x69a997*/
  v10 = v8 + 210; /*0x69a99c*/
  v9[1].Items = (void *)10; /*0x69a9ad*/
  v9[1].vtable0 = 0; /*0x69a9b0*/
  v9->vtable0 = &vt_TypeList_enum_DiskID; /*0x69a9b7*/
  VectorClass::WstringConstructor((unsigned int *)v8 + 105, 0, 0); /*0x69a9bd*/
  v11 = a5; /*0x69a9c2*/
  *((unsigned int *)v8 + 105) = &vt_DynamicVectorClass_Wstring; /*0x69a9c6*/
  *((unsigned int *)v8 + 110) = 10; /*0x69a9cf*/
  *((unsigned int *)v8 + 109) = 0; /*0x69a9d2*/
  if ( v11 ) /*0x69a9d9*/
  {
    strncpy((char *)v8 + 88, v11, (IUnknown *)0x104); /*0x69a9e5*/
    *((unsigned char *)v8 + 347) = 0; /*0x69a9ed*/
  }
  else
  {
    strcpy((char *)v8 + 88, &stru_830620.__pad_579C[39068]); /*0x69aa12*/
    v8 = aP4; /*0x69aa1b*/
  }
  if ( aP4 ) /*0x69aa25*/
  {
    wcsncpy(v8, (const wchar_t *)aP4, (DropListClass *)0x2C); /*0x69aa2b*/
    v8[43] = 0; /*0x69aa33*/
  }
  else
  {
    StringCSF = GetStringCSF( /*0x69aa4c*/
                  (wchar_t *)&stru_830620.__pad_579C[38652],
                  0,
                  (CampaignScore *)&stru_830620.__pad_579C[37116],
                  2845);
    wcscpy(v8, StringCSF); /*0x69aa53*/
  }
  if ( a5 ) /*0x69aa61*/
  {
    strncpy((char *)v8 + 348, a5->__pad_0, (IUnknown *)0x20); /*0x69aa6d*/
    *((unsigned char *)v8 + 379) = 0; /*0x69aa75*/
  }
  else
  {
    strcpy((char *)v8 + 348, &stru_830620.__pad_579C[38440]); /*0x69aa9d*/
    v8 = aP4; /*0x69aaa6*/
  }
  v13 = (char)aP4; /*0x69aaae*/
  v14 = a5; /*0x69aab2*/
  *((unsigned int *)v8 + 96) = aP4; /*0x69aab6*/
  v15 = (void (**)(VectorClass *))v9->vtable0; /*0x69aabc*/
  *((unsigned char *)v8 + 380) = v13; /*0x69aabe*/
  *((unsigned int *)v8 + 97) = v14; /*0x69aac6*/
  v15[3](v9); /*0x69aacc*/
  v16 = (char *)v9->Capacity; /*0x69aacf*/
  if ( (int)v9[1].vtable0 < (int)v16 /*0x69aaf4*/
    || (v9->IsAllocated || !v16)
    && (v17 = (int)v9[1].Items, v17 > 0)
    && (*((uint8_t (**)(VectorClass *, char *, unsigned int))v9->vtable0 + 2))(v9, &v16[v17], 0) )
  {
    v18 = v9[1].vtable0; /*0x69aafb*/
    v19 = v9->Items; /*0x69aafe*/
    v9[1].vtable0 = (char *)v18 + 1; /*0x69ab04*/
    v19[(unsigned int)v18] = -2; /*0x69ab07*/
  }
  if ( a5 ) /*0x69ab14*/
  {
    String::Assign(&a5, a5); /*0x69ab1f*/
    if ( String::Length((const char **)&a5) ) /*0x69ab28*/
    {
      unknown_libname_73(&aP4); /*0x69ab39*/
      for ( i = (ObjectClass *)String::Tokenize( /*0x69ab58*/
                                 (const char **)&a5,
                                 0,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP4);
            i != (ObjectClass *)-1;
            i = (ObjectClass *)String::Tokenize(
                                 (const char **)&a5,
                                 (int)i,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP4) )
      {
        String::Assign((char **)&aP4, &stru_830620.__pad_3BC[56]); /*0x69ab67*/
        String::TrimLeft((const char **)&aP4, (ObjectClass *)&aP4); /*0x69ab75*/
        DeleteAndZero((void **)&aP4); /*0x69ab7e*/
        String::Assign((char **)&a5, &stru_830620.__pad_3BC[56]); /*0x69ab8c*/
        String::TrimRight((const char **)&aP4, (ObjectClass *)&a5); /*0x69ab9a*/
        DeleteAndZero((void **)&a5); /*0x69aba3*/
        v21 = (CampaignScore *)*((unsigned int *)v10 + 2); /*0x69aba8*/
        if ( *((unsigned int *)v10 + 4) >= (int)v21 ) /*0x69abb0*/
        {
          if ( !*((unsigned char *)v10 + 13) && v21 ) /*0x69abbb*/
            continue; /*0x69abbb*/
          v22 = *((unsigned int *)v10 + 5); /*0x69abbd*/
          if ( v22 <= 0 /*0x69abce*/
            || !(*(uint8_t (**)(wchar_t *, char *, unsigned int))(*(unsigned int *)v10 + 8))(
                  v10,
                  &v21->__pad_0[v22],
                  0) )
          {
            continue; /*0x69abce*/
          }
        }
        v23 = (ObjectClass *)*((unsigned int *)v10 + 4); /*0x69abd5*/
        *((unsigned int *)v10 + 4) = &v23->__pad_0[1]; /*0x69abe0*/
        String::Reassign((char **)(*((unsigned int *)v10 + 1) + 4 * (unsigned int)v23), (AbstractClass *)&aP4); /*0x69abe9*/
      }
      DeleteAndZero((void **)&aP4); /*0x69ac11*/
    }
    DeleteAndZero((void **)&a5); /*0x69ac1a*/
  }
  return v8; /*0x69ac21*/

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
  unsigned int *v11; // edx
  int v12; // edx

  result = a2; /*0x69b7e0*/
  if ( a2 == -2 ) /*0x69b7ef*/
  {
    IDA_LOBYTE(result) = (unsigned char)aP2; /*0x69b7f5*/
    if ( (unsigned char)aP2 ) /*0x69b7fb*/
    {
      while ( 1 ) /*0x69b80e*/
      {
        result = Random::Range(&g_abs_A8B230->random[1], 0, (IUnknown *)7); /*0x69b80e*/
        if ( result == -2 ) /*0x69b815*/
          break; /*0x69b815*/
        v5 = *((unsigned int *)this + 2579); /*0x69b817*/
        v6 = 0; /*0x69b81d*/
        if ( v5 <= 0 ) /*0x69b821*/
        {
LABEL_12:
          v10 = 0; /*0x69b849*/
          v11 = (unsigned int *)this + 33; /*0x69b84b*/
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
          v7 = (int *)*((unsigned int *)this + 2576); /*0x69b823*/
          while ( 1 ) /*0x69b829*/
          {
            v8 = *v7; /*0x69b829*/
            if ( *(unsigned int *)(*v7 + 87) == -2 && *(unsigned int *)(v8 + 83) == -1 ) /*0x69b834*/
              v9 = -2; /*0x69b836*/
            else
              v9 = *(unsigned int *)(v8 + 83); /*0x69b83a*/
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
      *((unsigned int *)this + 95) = result; /*0x69b85e*/
      *((unsigned int *)this + 96) = -2; /*0x69b866*/
    }
    else
    {
      *((unsigned int *)this + 95) = 0; /*0x69b86e*/
      *((unsigned int *)this + 96) = -2; /*0x69b878*/
    }
  }
  else
  {
    *((unsigned int *)this + 95) = a2; /*0x69b880*/
    *((unsigned int *)this + 96) = -1; /*0x69b886*/
  }
  v12 = *((unsigned int *)this + 96); /*0x69b896*/
  *((unsigned int *)this + 87) = *((unsigned int *)this + 95); /*0x69b89c*/
  *((unsigned int *)this + 88) = v12; /*0x69b8a2*/
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
  int v42; // ebx
  char *v43; // edi
  char *v44; // eax
  unsigned int *v45; // ecx
  bool v46; // zf
  int v47; // eax
  int16_t v48; // [esp-Ch] [ebp-70h]
  int v49; // [esp+8h] [ebp-5Ch]
  int v50; // [esp+8h] [ebp-5Ch]
  int v51; // [esp+8h] [ebp-5Ch]
  int v52; // [esp+Ch] [ebp-58h]
  unsigned int v53[2]; // [esp+10h] [ebp-54h] BYREF
  void *v54; // [esp+18h] [ebp-4Ch]
  int v55; // [esp+1Ch] [ebp-48h]
  void *v56; // [esp+20h] [ebp-44h]
  int v57; // [esp+24h] [ebp-40h] BYREF
  int v58; // [esp+2Ch] [ebp-38h]
  int v59; // [esp+30h] [ebp-34h]
  unsigned int v60[3]; // [esp+34h] [ebp-30h] BYREF
  unsigned int v61[3]; // [esp+40h] [ebp-24h] BYREF
  void **v62; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v64; // [esp+54h] [ebp-10h]
  char v65; // [esp+59h] [ebp-Bh]
  int v66; // [esp+5Ch] [ebp-8h]
  int v67; // [esp+60h] [ebp-4h]

  v1 = 0; /*0x69bd65*/
  v55 = 1; /*0x69bd6f*/
  AbstractClass::updateAnimationState(0, 0); /*0x69bd77*/
  v62 = &vt_DynamicVectorClass_NodeNameType; /*0x69bd81*/
  v67 = 10; /*0x69bd89*/
  v66 = 0; /*0x69bd91*/
  Debug::Log(); /*0x69bd95*/
  if ( *((int *)this + 2579) < 2 ) /*0x69bda6*/
  {
    v62 = &vt_VectorClass_NodeNameType; /*0x69bdac*/
    MPCooperative::updateScoreBoard(&v62); /*0x69bdb4*/
    return; /*0x69bdbe*/
  }
  v52 = 0; /*0x69bdce*/
  memset((void *)((char *)this + 11816), 0, 0x120u); /*0x69bdd2*/
  *((unsigned char *)this + 12312) = 1; /*0x69bdd4*/
  if ( *((int *)this + 2579) > 0 ) /*0x69bde3*/
  {
    do /*0x69be9c*/
    {
      v53[0] = 0; /*0x69bde9*/
      v3 = (char **)&g_abs_A8DA90; /*0x69bdf1*/
      while ( 1 ) /*0x69bdfb*/
      {
        v4 = *v3; /*0x69bdfb*/
        v54 = ToWideStringChar(*(char **)(g_abs_A8DA78 + 4 * v1)); /*0x69be07*/
        v5 = ToWideStringChar(v4); /*0x69be0b*/
        if ( !_strcmpi(v54, v5) ) /*0x69be16*/
          break; /*0x69be16*/
        ++v3; /*0x69be26*/
        ++v53[0]; /*0x69be30*/
        if ( (int)v3 >= (int)&g_abs_A8DAB0 ) /*0x69be34*/
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
        (unsigned short *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v1) + 40),
        *(unsigned short *)((char *)this + 4 * v6 + 12280));
      ToWideStringChar(*(char **)(*((unsigned int *)this + 2576) + 4 * v1)); /*0x69be6a*/
      Network::FormatAddress((uint16_t *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v1) + 40), 0); /*0x69be7f*/
      Debug::Log(); /*0x69be8b*/
LABEL_10:
      ++v1; /*0x69be93*/
    }
    while ( v1 < *((unsigned int *)this + 2579) ); /*0x69be9c*/
  }
  v7 = *((unsigned int *)this + 2579); /*0x69bea2*/
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
        if ( !*((unsigned char *)&v58 + v10) && *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v10) + 83) < v11 ) /*0x69bee9*/
        {
          v11 = *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v10) + 83); /*0x69beeb*/
          v9 = v10; /*0x69beed*/
        }
        ++v10; /*0x69beef*/
      }
      while ( v10 < v7 ); /*0x69bef2*/
      if ( v9 == 0x7FFFFFFF ) /*0x69befa*/
        break; /*0x69befa*/
      v12 = *((unsigned int *)this + 2576); /*0x69befc*/
      *((unsigned char *)&v58 + v9) = 1; /*0x69bf02*/
      v13 = (unsigned int *)(v12 + 4 * v9); /*0x69bf07*/
      if ( v66 < v8 ) /*0x69bf10*/
        goto LABEL_24; /*0x69bf10*/
      if ( !v65 && v8 || v67 <= 0 ) /*0x69bf24*/
        goto LABEL_26; /*0x69bf24*/
      if ( ((uint8_t (*)(void ***, int, unsigned int))v62[2])(&v62, v67 + v8, 0) ) /*0x69bf35*/
      {
LABEL_24:
        v14 = v66++; /*0x69bf44*/
        *((unsigned int *)Block + v14) = *v13; /*0x69bf4d*/
      }
      v8 = v64; /*0x69bf50*/
LABEL_26:
      v7 = *((unsigned int *)this + 2579); /*0x69bf54*/
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
    if ( !*((unsigned char *)&v58 + v15) ) /*0x69bf8f*/
    {
      v17 = 0; /*0x69bf9f*/
      v18 = (unsigned int *)(*((unsigned int *)Block + v15) + 40); /*0x69bfa4*/
      v61[0] = *v18; /*0x69bfab*/
      v61[1] = v18[1]; /*0x69bfb2*/
      v61[2] = v18[2]; /*0x69bfb9*/
      if ( i > 0 ) /*0x69bfbd*/
      {
        v53[0] = (char *)this + 36 * v52 + 11816; /*0x69bfd1*/
        do /*0x69c1f5*/
        {
          if ( v17 != v15 && !*((unsigned char *)&v58 + v17) && NetworkID::Compare((int)v61, *((unsigned int *)Block + v17) + 40) ) /*0x69bff8*/
          {
            v54 = ToWideStringChar(*((char **)Block + v17)); /*0x69c011*/
            v19 = 0; /*0x69c015*/
            v20 = (char **)&g_abs_A8DA90; /*0x69c017*/
            while ( 1 ) /*0x69c01e*/
            {
              v21 = ToWideStringChar(*v20); /*0x69c01e*/
              if ( !_strcmpi(v54, v21) ) /*0x69c029*/
                break; /*0x69c029*/
              ++v20; /*0x69c039*/
              ++v19; /*0x69c03c*/
              if ( (int)v20 >= (int)&g_abs_A8DAB0 ) /*0x69c043*/
              {
                v54 = 0; /*0x69c045*/
                goto LABEL_39; /*0x69c045*/
              }
            }
            v54 = v19; /*0x69c0f6*/
LABEL_39:
            v56 = ToWideStringChar(*((char **)Block + v50)); /*0x69c04d*/
            v22 = 0; /*0x69c061*/
            v23 = (char **)&g_abs_A8DA90; /*0x69c063*/
            while ( 1 ) /*0x69c06a*/
            {
              v24 = ToWideStringChar(*v23); /*0x69c06a*/
              if ( !_strcmpi(v56, v24) ) /*0x69c075*/
                break; /*0x69c075*/
              ++v23; /*0x69c081*/
              ++v22; /*0x69c084*/
              if ( (int)v23 >= (int)&g_abs_A8DAB0 ) /*0x69c08b*/
              {
                v22 = 0; /*0x69c08d*/
                break; /*0x69c08d*/
              }
            }
            if ( *(unsigned int *)((char *)this + 4 * (unsigned int)v54 + 12280) == *(unsigned int *)((char *)this + 4 * v22 + 12280) ) /*0x69c0a3*/
            {
              v48 = v55++ + *(unsigned short *)((char *)this + 4 * (unsigned int)v54 + 12280); /*0x69c0b9*/
              Network::SetPort((unsigned short *)(*((unsigned int *)Block + v17) + 40), v48); /*0x69c0c8*/
              v25 = (char **)Block; /*0x69c0cd*/
              *((unsigned char *)&v58 + v17) = 1; /*0x69c0d1*/
              ToWideStringChar(v25[v17]); /*0x69c0d9*/
            }
            Debug::Log(); /*0x69c0ec*/
            v26 = ToWideStringChar(*((char **)Block + v50)); /*0x69c121*/
            v27 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x69c123*/
            if ( !_strcmpi(v26, v27) ) /*0x69c12a*/
            {
              v56 = (void *)v53[0]; /*0x69c142*/
              v28 = (char *)*((unsigned int *)Block + v17); /*0x69c146*/
              ++v52; /*0x69c14d*/
              v53[0] += 36; /*0x69c151*/
              strcpy((char *)v56, ToWideStringChar(v28)); /*0x69c172*/
            }
            v29 = ToWideStringChar(*((char **)Block + v17)); /*0x69c18c*/
            v30 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x69c18e*/
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
          i = v66; /*0x69c1ee*/
          ++v17; /*0x69c1f2*/
        }
        while ( v17 < v66 ); /*0x69c1f5*/
      }
    }
    ++v15; /*0x69c1fb*/
  }
  if ( *((unsigned int *)this + 3079) ) /*0x69c208*/
  {
    Debug::Log(); /*0x69c21c*/
    Network::SetPort((unsigned short *)(**(unsigned int **)((char *)this + 10304) + 40), *((unsigned short *)this + 6158)); /*0x69c237*/
    v54 = 0; /*0x69c23c*/
    v32 = (char **)&g_abs_A8DA90; /*0x69c244*/
    while ( 1 ) /*0x69c24e*/
    {
      v33 = *v32; /*0x69c24e*/
      v34 = ToWideStringChar(*(char **)g_abs_A8DA78); /*0x69c259*/
      v35 = ToWideStringChar(v33); /*0x69c25b*/
      if ( !_strcmpi(v34, v35) ) /*0x69c262*/
        break; /*0x69c262*/
      ++v32; /*0x69c276*/
      v54 = (char *)v54 + 1; /*0x69c280*/
      if ( (int)v32 >= (int)&g_abs_A8DAB0 ) /*0x69c284*/
      {
        v36 = 0; /*0x69c286*/
        goto LABEL_58; /*0x69c286*/
      }
    }
    v36 = v54; /*0x69c48c*/
LABEL_58:
    Network::SetPort((unsigned short *)(*(unsigned int *)((char *)this + 4 * (unsigned int)v36 + 10328) + 40), *((unsigned short *)this + 6158)); /*0x69c288*/
  }
  v37 = 0; /*0x69c2a5*/
  if ( *((int *)this + 2579) > 0 ) /*0x69c2a9*/
  {
    v38 = (unsigned short *)((char *)this + 12410); /*0x69c2ab*/
    do /*0x69c2d7*/
    {
      v39 = *(unsigned short *)(*(unsigned int *)(*((unsigned int *)this + 2576) + 4 * v37) + 40); /*0x69c2ba*/
      *v38 = v39; /*0x69c2c1*/
      if ( !v39 ) /*0x69c2c4*/
        *v38 = 1234; /*0x69c2c6*/
      ++v37; /*0x69c2d1*/
      ++v38; /*0x69c2d2*/
    }
    while ( v37 < *((unsigned int *)this + 2579) ); /*0x69c2d7*/
  }
  v40 = (unsigned int *)(**(unsigned int **)((char *)this + 10304) + 40); /*0x69c2e1*/
  v60[0] = *v40; /*0x69c2e6*/
  v60[1] = v40[1]; /*0x69c2f2*/
  v60[2] = v40[2]; /*0x69c2fd*/
  Network::CopyAddress_Small(&v57); /*0x69c301*/
  v51 = 1; /*0x69c313*/
  if ( *((int *)this + 2579) > 1 ) /*0x69c317*/
  {
    v41 = 4; /*0x69c31d*/
    do /*0x69c430*/
    {
      if ( NetworkID::Compare((int)v60, *(unsigned int *)(v41 + *((unsigned int *)this + 2576)) + 40) ) /*0x69c333*/
      {
        ToWideStringChar(*(char **)(v41 + *((unsigned int *)this + 2576))); /*0x69c349*/
        Debug::Log(); /*0x69c354*/
        v42 = (char *)this + 10644; /*0x69c362*/
        v54 = (void *)((char *)this + 10328); /*0x69c368*/
        v55 = 8; /*0x69c36c*/
        do /*0x69c416*/
        {
          v43 = *(char **)v54; /*0x69c381*/
          v56 = ToWideStringChar(*(char **)(v41 + *((unsigned int *)this + 2576))); /*0x69c38a*/
          v44 = ToWideStringChar(v43); /*0x69c38e*/
          if ( !_strcmpi(v56, v44) ) /*0x69c399*/
          {
            Network::CopyAddress_Small(v53); /*0x69c3ac*/
            v45 = (unsigned int *)(*(unsigned int *)(v41 + *((unsigned int *)this + 2576)) + 40); /*0x69c3be*/
            NetworkID::Assign(v45, 0, (int)v53, *(unsigned short *)v45); /*0x69c3c8*/
            ToWideStringChar(*(char **)(v41 + *((unsigned int *)this + 2576))); /*0x69c3d6*/
            Network::FormatAddress((uint16_t *)(*(unsigned int *)(v41 + *((unsigned int *)this + 2576)) + 40), 0); /*0x69c3eb*/
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
    while ( v51 < *((unsigned int *)this + 2579) ); /*0x69c430*/
  }
  if ( g_abs_887628 ) /*0x69c440*/
  {
    v47 = (*(int (**)(int))(*(unsigned int *)g_abs_887628 + 112))(g_abs_887628); /*0x69c444*/
    IDA_LOWORD(v47) = *((unsigned short *)this + 6205); /*0x69c44d*/
    (*(void (**)(int, int))(*(unsigned int *)g_abs_887628 + 92))(g_abs_887628, v47); /*0x69c457*/
    (*(void (**)(int))(*(unsigned int *)g_abs_887628 + 28))(g_abs_887628); /*0x69c462*/
  }
  v62 = &vt_VectorClass_NodeNameType; /*0x69c469*/
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

  v0 = SessionClass::initPlayers(g_abs_A8B254); /*0x78f009*/
  v1 = 1; /*0x78f014*/
  if ( g_abs_AC10C8 == 1 ) /*0x78f01b*/
    ++v0; /*0x78f01d*/
  v2 = 0; /*0x78f01f*/
  v18 = 0; /*0x78f025*/
  v19 = 0; /*0x78f029*/
  if ( v0 <= 1 ) /*0x78f02d*/
    goto LABEL_15; /*0x78f02d*/
  v3 = v0 - 1; /*0x78f030*/
  v4 = (wchar_t **)&g_abs_A8DA94; /*0x78f033*/
  v20 = v0; /*0x78f03b*/
  do /*0x78f079*/
  {
    v5 = *v4; /*0x78f03f*/
    if ( *v4 == (wchar_t *)g_abs_AC119C || v5 == (wchar_t *)g_abs_AC11B4 ) /*0x78f050*/
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
      if ( *v6 == (wchar_t *)g_abs_AC11B4 ) /*0x78f097*/
      {
        ++v18; /*0x78f099*/
      }
      else if ( IsKnownPointer(*v6) ) /*0x78f09f*/
      {
        ++v2; /*0x78f0a8*/
      }
      ++v6; /*0x78f0a9*/
    }
    while ( (int)v6 < (int)&g_abs_A8DAB0 ); /*0x78f0b2*/
  }
  if ( g_abs_AC116C ) /*0x78f0bb*/
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
    v12 = *(unsigned int *)g_abs_AC116C; /*0x78f191*/
    v13 = String::GetOrEmpty((char **)&v20); /*0x78f193*/
    (*(void (**)(LPVOID, char *))(v12 + 156))(g_abs_AC116C, v13); /*0x78f1a0*/
    memset(Buffer, 0, sizeof(Buffer)); /*0x78f1b1*/
    GameConfig::BuildChecksum(Buffer); /*0x78f1b7*/
    Buffer[40] = 0; /*0x78f1c5*/
    (*(void (**)(LPVOID, char *))(*(unsigned int *)g_abs_AC116C + 168))(g_abs_AC116C, Buffer); /*0x78f1ce*/
    (*(void (**)(LPVOID, int, char *))(*(unsigned int *)g_abs_AC116C + 252))(g_abs_AC116C, 1, &v7[v19]); /*0x78f1e5*/
    DeleteAndZero((void **)&v20); /*0x78f1ef*/
  }

}
// 0x69A310
unsigned int SessionClass::GetPlayerColorScheme(ObjectClass * aP0)
{

  ObjectClass *result; // eax

  result = aP0; /*0x69a310*/
  if ( aP0 == (ObjectClass *)-2 ) /*0x69a317*/
    return stru_830620.__pad_579C[36704]; /*0x69a31e*/
  if ( (unsigned int)aP0 < 9 ) /*0x69a32b*/
    return stru_830620.__pad_579C[(unsigned int)aP0 + 36696]; /*0x69a32d*/
  return (unsigned int)result; /*0x69a325*/

}
// 0x69B760
int SessionClass::AssignSide(int a2, MPCooperative * aP2)
{

  int result; // eax
  int v5; // edx

  result = a2; /*0x69b760*/
  if ( a2 == -2 ) /*0x69b76a*/
  {
    IDA_LOBYTE(result) = (unsigned char)aP2; /*0x69b76c*/
    if ( (unsigned char)aP2 ) /*0x69b772*/
    {
      result = Random::Range(&g_abs_A8B230->random[1], 0, (IUnknown *)9); /*0x69b783*/
      *((unsigned int *)this + 97) = result; /*0x69b788*/
      *((unsigned int *)this + 98) = -2; /*0x69b78e*/
    }
    else
    {
      *((unsigned int *)this + 97) = 0; /*0x69b79a*/
      *((unsigned int *)this + 98) = -2; /*0x69b7a4*/
    }
  }
  else
  {
    *((unsigned int *)this + 97) = a2; /*0x69b7b0*/
    *((unsigned int *)this + 98) = -1; /*0x69b7b6*/
  }
  v5 = *((unsigned int *)this + 98); /*0x69b7c6*/
  *((unsigned int *)this + 93) = *((unsigned int *)this + 97); /*0x69b7cc*/
  *((unsigned int *)this + 94) = v5; /*0x69b7d2*/
  return result; /*0x69b7d8*/

}
// 0x69BBE0
char SessionClass::GetGameSpeed()
{

  return *((unsigned char *)this + 12504); /*0x69bbe6*/

}
// 0x69C4A0
void SessionClass::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x69c4a6*/
  *((unsigned int *)this + 4) = 0; /*0x69c4a9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x69c4b0*/
  {
    RA2_OPDEL(v2); /*0x69c4b6*/
    *((unsigned int *)this + 1) = 0; /*0x69c4be*/
  }
  *((unsigned char *)this + 13) = 0; /*0x69c4c1*/
  *((unsigned int *)this + 2) = 0; /*0x69c4c4*/

}
// 0x69C4D0
unsigned int SessionClass::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x69c4d0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x69c4e5*/
  else
    return 0; /*0x69c4d7*/

}
// 0x69C4F0
int SessionClass::Seek(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x69c4fa*/

}
// 0x69C6C0
TypeList_flat * SessionClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69c6c3*/
  *Block = &vt_VectorClass_enum_DiskID; /*0x69c6c6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x69c6d0*/
  {
    RA2_OPDEL(v3); /*0x69c6d8*/
    *(Block + 1) = 0; /*0x69c6e0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x69c6eb*/
  *(Block + 2) = 0; /*0x69c6f1*/
  if ( (Block & 1) != 0 ) /*0x69c6f8*/
    RA2_OPDEL(Block); /*0x69c6fb*/
  return (TypeList *)Block; /*0x69c705*/

}
// 0x69C710
char SessionClass::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x69c712*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x69c71d*/
  {
    v3 = 0; /*0x69c71f*/
    if ( v2 <= 0 ) /*0x69c723*/
      return 1; /*0x69c743*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x69c725*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x69c72b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x69c734*/
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

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69c75c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x69c766*/
    if ( a3 ) /*0x69c76c*/
      v4 = a3; /*0x69c782*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x69c77e*/
    *((unsigned char *)this + 12) = 1; /*0x69c786*/
    if ( v4 ) /*0x69c78a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x69c795*/
      {
        v6 = *((unsigned int *)this + 2); /*0x69c79c*/
        if ( a2 < v6 ) /*0x69c7a1*/
          v6 = a2; /*0x69c7a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x69c7a9*/
          ++i; /*0x69c7ae*/
        if ( *((unsigned char *)this + 13) ) /*0x69c7bb*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x69c7c6*/
          *((unsigned int *)this + 1) = 0; /*0x69c7ce*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x69c7d7*/
      *((unsigned int *)this + 2) = a2; /*0x69c7df*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x69c7e2*/
      return 1; /*0x69c7e8*/
    }
    else
    {
      return 0; /*0x69c78f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_W4DiskID *))(*(unsigned int *)this->__pad_0 + 12))(this);;
    return 1; /*0x69c7f8*/
  }

}
// 0x69C800
void SessionClass::removePlayer()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x69c80d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x69c813*/
    *((unsigned int *)this + 1) = 0; /*0x69c81b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x69c81e*/
  *((unsigned int *)this + 2) = 0; /*0x69c821*/

}
// 0x69C830
int  SessionClass::findPlayer( unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*(unsigned char *)(this + 12) ) /*0x69c830*/
    return 0; /*0x69c838*/
  v3 = *(unsigned int *)(this + 8); /*0x69c83e*/
  result = 0; /*0x69c841*/
  if ( v3 <= 0 ) /*0x69c845*/
    return -1; /*0x69c85c*/
  for ( i = *(unsigned int **)(this + 4); *i != *a2; ++i ) /*0x69c84b*/
  {
    if ( ++result >= v3 ) /*0x69c85a*/
      return -1; /*0x69c85a*/
  }
  return result; /*0x69c83a*/

}
// 0x69C870
unsigned int SessionClass::updatePlayer(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x69c870*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x69c885*/
  else
    return 0; /*0x69c877*/

}
// 0x69C890
char SessionClass::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69c89c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x69c8a2*/
    if ( a3 ) /*0x69c8a8*/
      v4 = a3; /*0x69c8be*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x69c8ba*/
    *((unsigned char *)this + 12) = 1; /*0x69c8c2*/
    if ( !v4 ) /*0x69c8c6*/
      return 0; /*0x69c93a*/
    if ( *((unsigned int *)this + 1) ) /*0x69c8c8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x69c8cf*/
      if ( a2 < v5 ) /*0x69c8d4*/
        v5 = a2; /*0x69c8d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x69c8dc*/
        ++i; /*0x69c8e1*/
      if ( *((unsigned char *)this + 13) ) /*0x69c8ee*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x69c8f9*/
        *((unsigned int *)this + 1) = 0; /*0x69c901*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x69c90a*/
    *((unsigned int *)this + 2) = a2; /*0x69c912*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x69c915*/
  }
  else
  {
    (*(void (**)(_TypeList_W4DiskID *))(*(unsigned int *)this->__pad_0 + 12))(this);;
  }
  v7 = *((unsigned int *)this + 2); /*0x69c921*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x69c929*/
    *((unsigned int *)this + 4) = v7; /*0x69c92b*/
  return 1; /*0x69c92e*/

}
// 0x69C940
int SessionClass::Read(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x69c940*/
  result = 0; /*0x69c943*/
  if ( v2 <= 0 ) /*0x69c948*/
    return -1; /*0x69c95f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x69c94e*/
  {
    if ( ++result >= v2 ) /*0x69c95d*/
      return -1; /*0x69c95d*/
  }
  return result; /*0x69c962*/

}
// 0x69D460
VectorClass_flat * SessionClass::validateGame(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d463*/
  *Block = &vt_VectorClass_enum_DiskID; /*0x69d466*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x69d470*/
  {
    RA2_OPDEL(v3); /*0x69d478*/
    *(Block + 1) = 0; /*0x69d480*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x69d48b*/
  *(Block + 2) = 0; /*0x69d491*/
  if ( (Block & 1) != 0 ) /*0x69d498*/
    RA2_OPDEL(Block); /*0x69d49b*/
  return (VectorClass *)Block; /*0x69d4a5*/

}
// 0x7B2720
void SessionClass::SetInstance()
{

  g_abs_B780A0 = (int)this; /*0x7b2720*/

}