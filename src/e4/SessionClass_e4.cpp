// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x540DC0
int SessionClass::initLAN(int a2, wchar_t * Source, unsigned int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_540DC0(int this, int a2, wchar_t *Source, _DWORD *a4)
{
  void *v6; // eax
  void *v7; // eax
  int v8; // ecx

  if ( !(unsigned char)this->MPGameMode ) /*0x540dc3*/
    return 0; /*0x540dca*/
  if ( *(_DWORD *)(this + 68) == 7 ) /*0x540dd4*/
    return 0; /*0x540dd6*/
  v6 = __2_YAPAXI_Z(0xB8u); /*0x540de1*/
  if ( v6 ) /*0x540deb*/
    v7 = IPXConnClass::constructor( /*0x540e0e*/
           v6,
           this->unknown_14,
           this->unknown_14,
           this->unknown_10,
           *(_WORD *)(this + 32),
           a4,
           a2,
           Source,
           0);
  else
    v7 = 0; /*0x540e15*/
  *(_DWORD *)(this + 4 * *(_DWORD *)(this + 68) + 40) = v7; /*0x540e1a*/
  v8 = *(_DWORD *)(this + 4 * *(_DWORD *)(this + 68) + 40); /*0x540e21*/
  if ( !v8 ) /*0x540e27*/
    return 0; /*0x540e29*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x540e31*/
  *(_DWORD *)(*(_DWORD *)(this + 4 * *(_DWORD *)(this + 68) + 40) + 40) = *(_DWORD *)(this + 88); /*0x540e3e*/
  *(_DWORD *)(*(_DWORD *)(this + 4 * *(_DWORD *)(this + 68) + 40) + 44) = *(_DWORD *)(this + 92); /*0x540e4b*/
  *(_DWORD *)(*(_DWORD *)(this + 4 * (*(_DWORD *)(this + 68))++ + 40) + 48) = *(_DWORD *)(this + 96); /*0x540e58*/
  return 1; /*0x540dcc*/
}
}

// 0x540E70
int SessionClass::initInternet()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_540E70(int this)
{
  int result; // eax
  void *v3; // ebp
  int v4; // ebx
  int v5; // edi
  char *v6; // eax

  if ( !(unsigned char)this->MPGameMode ) /*0x540e73*/
    return 0; /*0x540e7a*/
  v3 = __2_YAPAXI_Z(0xB8u); /*0x540e89*/
  if ( v3 ) /*0x540e90*/
  {
    v4 = MEMORY[0xA8DA78]; /*0x540e93*/
    v5 = this->unknown_14; /*0x540e9a*/
    v6 = CharToWideString(aMulticast); /*0x540ea4*/
    result = (int)IPXConnClass::constructor( /*0x540ebf*/
                    v3,
                    v5,
                    v5,
                    this->unknown_10,
                    *(_WORD *)(this + 32),
                    (_DWORD *)(*(_DWORD *)v4 + 40),
                    -1,
                    (wchar_t *)v6,
                    0);
  }
  else
  {
    result = 0; /*0x540ec8*/
  }
  *(_DWORD *)(this + 80) = result; /*0x540ecc*/
  if ( result ) /*0x540ed0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)result + 4))(result); /*0x540ed8*/
    *(_DWORD *)(*(_DWORD *)(this + 80) + 40) = *(_DWORD *)(this + 88); /*0x540ee1*/
    *(_DWORD *)(*(_DWORD *)(this + 80) + 44) = *(_DWORD *)(this + 92); /*0x540eea*/
    *(_DWORD *)(*(_DWORD *)(this + 80) + 48) = *(_DWORD *)(this + 96); /*0x540ef8*/
    return 1; /*0x540ef3*/
  }
  return result; /*0x540e7c*/
}
}

// 0x552CC0
unsigned int * SessionClass::Load()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_552CC0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax
  _DWORD *v4; // eax
  void *PlayerSide; // eax
  int v6; // esi
  char *v7; // ecx

  if ( *(this + 2)
    || ((Debug::Log_0(MEMORY[0x8298D0]), (v2 = __2_YAPAXI_Z(0x28u)) == 0)
      ? (result = 0)
      : (result = MixFileClass::FromFile(v2, MEMORY[0x8298C4], (int)MEMORY[0x886980])),
        (*(this + 2) = result) != 0) )
  {
    if ( *(this + 1)
      || ((v4 = __2_YAPAXI_Z(0x28u)) == 0
        ? (result = 0)
        : (result = MixFileClass::FromFile(v4, stru_8298B8, (int)MEMORY[0x886980])),
          (*(this + 1) = result) != 0) )
    {
      if ( MEMORY[0xA8B238][0] ) /*0x552d36*/
      {
        PlayerSide = (void *)SessionClass::GetPlayerSide(*(_DWORD *)MEMORY[0xA8DA78]); /*0x552d51*/
        return PaletteManager::Load(PlayerSide); /*0x552d58*/
      }
      else
      {
        v6 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x72b3e8*/
        if ( !MEMORY[0xB0FB80] ) /*0x72b3ea*/
          LoadPaletteSimple(MEMORY[0x844BAC], &MEMORY[0xB0FB7C], &MEMORY[0xB0FB80]); /*0x72b3fc*/
        if ( !MEMORY[0xB0FB88] ) /*0x72b408*/
        {
          if ( v6 ) /*0x72b40c*/
          {
            v7 = MEMORY[0x844BB4][0]; /*0x72b420*/
            if ( v6 != 1 ) /*0x72b433*/
              v7 = MEMORY[0x844BB8]; /*0x72b435*/
            LoadPaletteSimple(v7, &MEMORY[0xB0FB84], &MEMORY[0xB0FB88]); /*0x72b43b*/
          }
          else
          {
            LoadPaletteSimple(MEMORY[0x844BB0][0], &MEMORY[0xB0FB84], &MEMORY[0xB0FB88]); /*0x72b41e*/
          }
        }
        result = (_DWORD *)MEMORY[0xB0FB90]; /*0x72b440*/
        if ( !MEMORY[0xB0FB90] ) /*0x72b448*/
          return (_DWORD *)LoadPaletteSimple(MEMORY[0x844BBC], &MEMORY[0xB0FB8C], &MEMORY[0xB0FB90]); /*0x72b45a*/
      }
    }
  }
  return result; /*0x552d5d*/
}
}

// 0x5ADF20
bool SessionClass::LoadGameSession(ObjectClass * aP1, CellStruct * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall SessionClass::LoadGameSession(_DWORD *this, ObjectClass *aP1, CellStruct *aP2)
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
  v4 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62200] /*0x5adf5b*/
                 + 4 * *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + aP1[42].ambientSoundController[0]) + 188));
  if ( !v4 ) /*0x5adf60*/
  {
    Debug::Log(); /*0x5adf67*/
    return 0; /*0x5adf78*/
  }
  Debug::Log(); /*0x5adf84*/
  String::Assign((char **)&v14, (const char *)(v4 + 36)); /*0x5adf91*/
  v6 = (char *)(this + 20); /*0x5adf96*/
  v7 = SessionClass::LoadMapSelection(v6, (char **)&v14) == 0; /*0x5adfab*/
  DeleteAndZero(&v14); /*0x5adfae*/
  if ( v7 || (v8 = CampaignClass::Check(v6, *(_WORD *)&aP1[79].onBridge)) == 0 ) /*0x5adfea*/
  {
    SessionClass::Destruct(v6); /*0x5adfb9*/
    Debug::Log(); /*0x5adfc3*/
    return 0; /*0x5adfd4*/
  }
  ScenarioClass::SetFileName(aP1->__pad_0, (ObjectClass *)&MEMORY[0x87F8E4].__pad_5568[20760]); /*0x5ae013*/
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
  v11 = (ObjectClass *)StringTable::Find((MapSelect *)v6, *(const char ***)(v10 + 4 * v9)); /*0x5ae037*/
  String::AssignFromPtr((char **)&v14, (const char **)&v11->__pad_0[4]); /*0x5ae041*/
  String::ToLower((const char **)&v14); /*0x5ae04a*/
  String::AssignFromPtr((char **)&v13, (const char **)aP2); /*0x5ae058*/
  String::ToLower((const char **)&v13); /*0x5ae061*/
  if ( !v11 || !String::Compare((const char **)&v14, (const char **)&v13) ) /*0x5ae073*/
  {
    DeleteAndZero(&v13); /*0x5ae080*/
    DeleteAndZero(&v14); /*0x5ae089*/
    goto LABEL_14; /*0x5ae089*/
  }
  v12 = (ObjectClass *)String::GetOrEmpty_Alt((char **)&v11->__pad_0[4]); /*0x5ae09b*/
  ScenarioClass::SetFileName(aP1->__pad_0, v12); /*0x5ae0a7*/
  *(_WORD *)&aP1[79].onBridge = Network_Load(v6, v11); /*0x5ae0b8*/
  DeleteAndZero(&v13); /*0x5ae0bf*/
  DeleteAndZero(&v14); /*0x5ae0c8*/
LABEL_17:
  SessionClass::Destruct(v6); /*0x5ae0cd*/
  return strlen((const char *)&aP1[27].attachedBomb) != 0; /*0x5adf6f*/
}
}

// 0x5CEEF0
char SessionClass::LoadMapSelection(char ** a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SessionClass::LoadMapSelection(char *this, char **a1)
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

  v2 = this; /*0x5ceef8*/
  v47 = this; /*0x5cef00*/
  CCFileClass::Construct3((int)&v49.ambientSoundController[1]); /*0x5cef04*/
  v3 = 0; /*0x5cef09*/
  *(_DWORD *)&v49.__pad_0[4] = 0; /*0x5cef0f*/
  *(_DWORD *)&v49.__pad_0[8] = 0; /*0x5cef13*/
  GenericList::Constructor(&v49.__pad_0[12]); /*0x5cef17*/
  *(_DWORD *)&v49.__pad_0[12] = &vt_List_INIClass_INISection; /*0x5cef20*/
  memset(&v49.owningHouseIndex, 0, 13); /*0x5cef28*/
  v49.attachedBomb = 0; /*0x5cef39*/
  v49.ambientSoundController[0] = 0; /*0x5cef3d*/
  *(_DWORD *)v49.__pad_0 = &vt_INIClass; /*0x5cef41*/
  unknown_libname_73(&v46); /*0x5cef49*/
  unknown_libname_73(&v44); /*0x5cef52*/
  SessionClass::Destruct(v2); /*0x5cef59*/
  (*(void (__thiscall **)(int *, char *))(v49.ambientSoundController[1] + 8))( /*0x5cef6b*/
    &v49.ambientSoundController[1],
    aMapselmdIni);
  (*(void (__thiscall **)(int *, int))(v49.ambientSoundController[1] + 28))(&v49.ambientSoundController[1], 1); /*0x5cef78*/
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
    v7 = (char **)__2_YAPAXI_Z(0x6Cu); /*0x5cefef*/
    if ( !v7 ) /*0x5ceff9*/
      goto LABEL_17; /*0x5ceff9*/
    v8 = (ObjectClass *)MSChoiceClass::LoadFromINI(v7, &v49, (const char **)&v44); /*0x5cf00c*/
    if ( !v8 ) /*0x5cf010*/
      goto LABEL_17; /*0x5cf010*/
    v9 = *((_DWORD *)v2 + 2); /*0x5cf012*/
    if ( *((_DWORD *)v2 + 4) < v9 /*0x5cf038*/
      || (v2[13] || !v9)
      && (v10 = *((_DWORD *)v2 + 5), v10 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v2 + 8))(v2, v9 + v10, 0) )
    {
      v11 = *((_DWORD *)v2 + 4); /*0x5cf03f*/
      v12 = *((_DWORD *)v2 + 1); /*0x5cf042*/
      *((_DWORD *)v2 + 4) = v11 + 1; /*0x5cf048*/
      *(_DWORD *)(v12 + 4 * v11) = v8; /*0x5cf04b*/
    }
    if ( ++v4 > 100 ) /*0x5cf052*/
    {
      v3 = 0; /*0x5cf071*/
      break; /*0x5cf071*/
    }
    v3 = 0; /*0x5cf054*/
  }
  if ( *((_DWORD *)v2 + 4) ) /*0x5cf073*/
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
        v16 = (ObjectClass *)String::Tokenize((const char **)&v44, 0, MEMORY[0x817F70], (void **)&a3); /*0x5cf1a7*/
        if ( String::Length((const char **)&a3) ) /*0x5cf1a9*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf1b6*/
          *((_DWORD *)v2 + 6) = v17; /*0x5cf1bb*/
        }
        v18 = (ObjectClass *)String::Tokenize((const char **)&v44, (int)v16, MEMORY[0x817F70], (void **)&a3); /*0x5cf1d6*/
        if ( String::Length((const char **)&a3) ) /*0x5cf1d8*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf1e5*/
          *((_DWORD *)v2 + 7) = v19; /*0x5cf1ea*/
        }
        v20 = (ObjectClass *)String::Tokenize((const char **)&v44, (int)v18, MEMORY[0x817F70], (void **)&a3); /*0x5cf205*/
        if ( String::Length((const char **)&a3) ) /*0x5cf207*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf214*/
          *((_DWORD *)v2 + 8) = v21; /*0x5cf219*/
        }
        String::Tokenize((const char **)&v44, (int)v20, MEMORY[0x817F70], (void **)&a3); /*0x5cf22b*/
        if ( String::Length((const char **)&a3) ) /*0x5cf234*/
        {
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&a3); /*0x5cf241*/
          *((_DWORD *)v2 + 9) = v22; /*0x5cf246*/
        }
        DeleteAndZero((void **)&a3); /*0x5cf24d*/
      }
      String::Assign((char **)&a3, 0); /*0x5cf259*/
      String::Assign(&a2, MEMORY[0x824254]); /*0x5cf267*/
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
        v27 = __2_YAPAXI_Z(0x10u); /*0x5cf306*/
        if ( !v27 ) /*0x5cf310*/
          goto LABEL_17; /*0x5cf310*/
        v28 = (ObjectClass *)String::SplitComma(v27, (const char **)&v44); /*0x5cf31e*/
        if ( !v28 ) /*0x5cf322*/
          goto LABEL_17; /*0x5cf322*/
        v29 = *((_DWORD *)v47 + 13); /*0x5cf328*/
        v30 = v47 + 44; /*0x5cf32e*/
        if ( *((_DWORD *)v47 + 15) >= v29 ) /*0x5cf333*/
        {
          if ( !v47[57] && v29 ) /*0x5cf33e*/
            continue; /*0x5cf33e*/
          v31 = *((_DWORD *)v47 + 16); /*0x5cf340*/
          if ( v31 <= 0 /*0x5cf350*/
            || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v30 + 8))(v47 + 44, v29 + v31, 0) )
          {
            continue; /*0x5cf350*/
          }
        }
        v32 = *((_DWORD *)v30 + 4); /*0x5cf357*/
        v33 = *((_DWORD *)v30 + 1); /*0x5cf35a*/
        *((_DWORD *)v30 + 4) = v32 + 1; /*0x5cf360*/
        *(_DWORD *)(v33 + 4 * v32) = v28; /*0x5cf363*/
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
                v37 = __2_YAPAXI_Z(0x10u); /*0x5cf4e4*/
                if ( v37 ) /*0x5cf4ee*/
                  v38 = (ReferenceCounted *)Audio::ParseVolume(v37, (const char **)&a3, (const char **)&v44); /*0x5cf501*/
                else
                  v38 = 0; /*0x5cf505*/
                if ( String::Equals_Alt((const char **)v38, 0) ) /*0x5cf50b*/
                {
                  if ( v38 ) /*0x5cf516*/
                  {
                    DeleteAndZero((void **)v38); /*0x5cf51a*/
                    __3_YAXPAX_Z(v38); /*0x5cf520*/
                  }
                }
                else if ( v38 ) /*0x5cf52c*/
                {
                  v39 = *((_DWORD *)v2 + 19); /*0x5cf52e*/
                  if ( *((_DWORD *)v2 + 21) < v39 /*0x5cf556*/
                    || (v2[81] || !v39)
                    && (v40 = *((_DWORD *)v2 + 22), v40 > 0)
                    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v2 + 17) + 8))(
                         v2 + 68,
                         v39 + v40,
                         0) )
                  {
                    v41 = *((_DWORD *)v2 + 21); /*0x5cf55d*/
                    v42 = *((_DWORD *)v2 + 18); /*0x5cf560*/
                    *((_DWORD *)v2 + 21) = v41 + 1; /*0x5cf566*/
                    *(_DWORD *)(v42 + 4 * v41) = v38; /*0x5cf569*/
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
}

// 0x5CF5F0
int SessionClass::Destruct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass_Destructor(_DWORD *this)
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

  for ( i = 0; i < *(this + 21); ++i ) /*0x5cf5fc*/
  {
    v3 = *(this + 18); /*0x5cf5fe*/
    v4 = *(void **)(v3 + 4 * i); /*0x5cf601*/
    if ( v4 ) /*0x5cf606*/
    {
      DeleteAndZero(*(void ***)(v3 + 4 * i)); /*0x5cf60a*/
      __3_YAXPAX_Z(v4); /*0x5cf610*/
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*(this + 17) + 12))(this + 17); /*0x5cf626*/
  *(this + 6) = 0; /*0x5cf629*/
  *(this + 7) = 0; /*0x5cf630*/
  *(this + 8) = 640; /*0x5cf637*/
  *(this + 9) = 400; /*0x5cf63e*/
  for ( j = 0; j < *(this + 15); ++j ) /*0x5cf64c*/
  {
    v6 = *(this + 12); /*0x5cf64e*/
    v7 = *(void **)(v6 + 4 * j); /*0x5cf651*/
    if ( v7 ) /*0x5cf656*/
    {
      DeleteAndZero(*(void ***)(v6 + 4 * j)); /*0x5cf65a*/
      __3_YAXPAX_Z(v7); /*0x5cf660*/
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*(this + 11) + 12))(this + 11); /*0x5cf676*/
  for ( k = 0; k < *(this + 4); ++k ) /*0x5cf680*/
  {
    v9 = *(this + 1); /*0x5cf682*/
    v10 = *(void **)(v9 + 4 * k); /*0x5cf685*/
    if ( v10 ) /*0x5cf68a*/
    {
      SessionClass::loadSettings(*(_DWORD *)(v9 + 4 * k)); /*0x5cf68e*/
      __3_YAXPAX_Z(v10); /*0x5cf694*/
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x5cf6ab*/
}
}

// 0x5D0070
void SessionClass::loadSettings()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall SessionClass::loadSettings(int this)
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

  for ( i = 0; i < this->PlayerColor; ++i ) /*0x5d007f*/
  {
    v3 = *(void ***)(*(_DWORD *)(this + 64) + 4 * i); /*0x5d0084*/
    if ( v3 ) /*0x5d0089*/
    {
      DeleteAndZero::Alt(v3 + 3); /*0x5d008e*/
      __3_YAXPAX_Z(v3); /*0x5d0094*/
    }
  }
  for ( j = 0; j < *(_DWORD *)(this + 100); ++j ) /*0x5d00ab*/
  {
    v5 = *(CCINIClass **)(this + 88); /*0x5d00ad*/
    v6 = *(SessionClass **)&v5->__pad_0[4 * j]; /*0x5d00b0*/
    if ( v6 ) /*0x5d00b5*/
    {
      DeleteAndZero(*(_DWORD *)&v5->__pad_0[4 * j]); /*0x5d00b9*/
      __3_YAXPAX_Z(v6); /*0x5d00bf*/
    }
  }
  v7 = *(CCINIClass **)(this + 88); /*0x5d00cf*/
  *(_DWORD *)(this + 84) = &vt_VectorClass_MapSelection; /*0x5d00d2*/
  if ( v7 && *(_BYTE *)(this + 97) ) /*0x5d00dd*/
  {
    __3_YAXPAX_Z(v7); /*0x5d00e3*/
    *(_DWORD *)(this + 88) = 0; /*0x5d00eb*/
  }
  *(_BYTE *)(this + 97) = 0; /*0x5d00ee*/
  *(_DWORD *)(this + 92) = 0; /*0x5d00f1*/
  v8 = *(CCINIClass **)(this + 64); /*0x5d00f4*/
  *(_DWORD *)(this + 60) = &vt_VectorClass_MSTextEntry; /*0x5d00f7*/
  if ( v8 && *(_BYTE *)(this + 73) ) /*0x5d0102*/
  {
    __3_YAXPAX_Z(v8); /*0x5d0108*/
    *(_DWORD *)(this + 64) = 0; /*0x5d0110*/
  }
  *(_BYTE *)(this + 73) = 0; /*0x5d0113*/
  *(_DWORD *)(this + 68) = 0; /*0x5d0116*/
  v9 = *(CCINIClass **)(this + 40); /*0x5d0119*/
  *(_DWORD *)(this + 36) = &vt_VectorClass_Point2D; /*0x5d011c*/
  if ( v9 && *(_BYTE *)(this + 49) ) /*0x5d0127*/
  {
    __3_YAXPAX_Z(v9); /*0x5d012d*/
    *(_DWORD *)(this + 40) = 0; /*0x5d0135*/
  }
  *(_BYTE *)(this + 49) = 0; /*0x5d013b*/
  this->Config.AICount = 0; /*0x5d013e*/
  DeleteAndZero(this + 32); /*0x5d0141*/
  v10 = 2; /*0x5d0149*/
  v11 = this + 32; /*0x5d014e*/
  do /*0x5d015c*/
  {
    v11 -= 4; /*0x5d0151*/
    DeleteAndZero(v11); /*0x5d0156*/
    --v10; /*0x5d015b*/
  }
  while ( v10 ); /*0x5d015c*/
  DeleteAndZero::Alt((void **)(this + 16)); /*0x5d0161*/
  DeleteAndZero(this + 12); /*0x5d0169*/
  DeleteAndZero(this + 8); /*0x5d0170*/
  DeleteAndZero(this + 4); /*0x5d0178*/
  DeleteAndZero(this); /*0x5d017f*/
}
}

// 0x5D39D0
unsigned int * SessionClass::saveSettings()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_5D39D0(_DWORD *this)
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
}

// 0x5E64C0
unsigned int SessionClass::initPlayers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall sub_5E64C0(void *this)
{
  int PlayerCountMap; // esi
  int v3; // eax

  if ( this == (void *)-1 ) /*0x5e64c3*/
    return 8; /*0x5e64ca*/
  PlayerCountMap = ReadPlayerCountMap((int)this); /*0x5e64d7*/
  if ( MEMORY[0xA8B23C] ) /*0x5e64db*/
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 152))(MEMORY[0xA8B23C]); /*0x5e64df*/
    if ( v3 != -1 && v3 < PlayerCountMap ) /*0x5e64ec*/
      PlayerCountMap = v3; /*0x5e64ee*/
  }
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x5e64f7*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e64f9*/
      return PlayerCountMap & 0xFFFFFFFE; /*0x5e6508*/
    if ( Network::IsMultiplayerActive() ) /*0x5e6509*/
      return 2; /*0x5e6512*/
  }
  return PlayerCountMap; /*0x5e64ca*/
}
}

// 0x663B40
int SessionClass::BuildLobbyPlayerList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_663B40(void *this)
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

  while ( this->unknown_10 ) /*0x663b46*/
  {
    __3_YAXPAX_Z(**((void ***)this + 1)); /*0x663b53*/
    v2 = this->unknown_10; /*0x663b58*/
    if ( v2 > 0 ) /*0x663b60*/
    {
      v3 = v2 - 1; /*0x663b62*/
      v4 = 0; /*0x663b63*/
      for ( this->unknown_10 = v3; /*0x663b6a*/
            v4 < this->unknown_10;
            *(_DWORD *)(this->MPGameMode + 4 * v4 - 4) = *(_DWORD *)(this->MPGameMode + 4 * v4) )
      {
        ++v4; /*0x663b6f*/
      }
    }
  }
  result = HouseClass_Count; /*0x663b85*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x663b94*/
  {
    v6 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * i]; /*0x663ba6*/
    if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)v6) && !*(_BYTE *)(v6 + 502) ) /*0x663bbc*/
    {
      v7 = (char *)__2_YAPAXI_Z(0x2Au); /*0x663bd8*/
      *v7 = i; /*0x663be2*/
      v8 = ToWideStringChar((char *)(v6 + 90154)); /*0x663be4*/
      strncpy(v7 + 1, v8, 0x14u); /*0x663bee*/
      v9 = 0; /*0x663bfb*/
      if ( MEMORY[0xA8DA84] > 0 ) /*0x663bff*/
      {
        v10 = MEMORY[0xA8DA78]; /*0x663c01*/
        while ( *(_DWORD *)(*(_DWORD *)v10 + 111) != i ) /*0x663c12*/
        {
          ++v9; /*0x663c14*/
          v10 += 4; /*0x663c15*/
          if ( v9 >= MEMORY[0xA8DA84] ) /*0x663c1a*/
            goto LABEL_15; /*0x663c1a*/
        }
        Network::CopyAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v9) + 40), &v16, (int)&v17); /*0x663c34*/
        *(_DWORD *)(v7 + 33) = v17; /*0x663c3d*/
        *(_WORD *)(v7 + 37) = *((_WORD *)&MEMORY[0xA8E2B2] + v9); /*0x663c48*/
      }
LABEL_15:
      v7[41] = 1; /*0x663c50*/
      v7[39] = MEMORY[0xA8E2AC] == *(_DWORD *)(v6 + 48); /*0x663c6a*/
      v7[40] = 1 << i; /*0x663c6d*/
      v11 = this->unknown_08; /*0x663c70*/
      if ( this->unknown_10 < v11 /*0x663c93*/
        || (*((_BYTE *)this + 13) || !v11)
        && (v12 = this->unknown_14, v12 > 0)
        && (*(unsigned __int8 (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, v11 + v12, 0) )
      {
        v13 = this->unknown_10; /*0x663c9a*/
        v14 = this->MPGameMode; /*0x663c9d*/
        this->unknown_10 = v13 + 1; /*0x663ca3*/
        *(_DWORD *)(v14 + 4 * v13) = v7; /*0x663ca6*/
      }
    }
    result = i + 1; /*0x663cb3*/
  }
  return result; /*0x663cc3*/
}
}

// 0x691500
unsigned int * SessionClass::GetEntry(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall SessionClass::GetEntry(_DWORD *this, IUnknown *aP1)
{
  int v2; // edx
  int v4; // ecx

  v2 = *(this + 11); /*0x691500*/
  if ( v2 == -1 ) /*0x691506*/
  {
    aP1->field_0 = -1; /*0x691510*/
    aP1->field_4 = 0; /*0x691512*/
    return &aP1->field_0; /*0x691508*/
  }
  else
  {
    v4 = *(this + 9); /*0x691518*/
    aP1->field_0 = *(_DWORD *)(v4 + 8 * v2 + 164); /*0x691527*/
    aP1->field_4 = *(_DWORD *)(v4 + 8 * v2 + 168); /*0x691531*/
    return &aP1->field_0; /*0x69151b*/
  }
}
}

// 0x6915D0
BOOL SessionClass::SetField()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall SessionClass::SetField(_DWORD *this)
{
  return *(this + 11) < *(_DWORD *)(*(this + 9) + 160); /*0x6915e0*/
}
}

// 0x696F10
int SessionClass::GetPlayerSide()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass_GetPlayerSide(int this)
{
  int result; // eax

  result = -2; /*0x696f13*/
  if ( *(_DWORD *)(this + 79) != -2 ) /*0x696f1a*/
    return *(_DWORD *)(this + 75); /*0x696f1c*/
  return result; /*0x696f1f*/
}
}

// 0x696F20
int SessionClass::GetPlayerColor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass_GetPlayerColor(int this)
{
  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(_DWORD *)(this + 87) != -2 ) /*0x696f2a*/
    return *(_DWORD *)(this + 83); /*0x696f2c*/
  return result; /*0x696f2f*/
}
}

// 0x696F50
int SessionClass::GetOption()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass_GetOption(int this)
{
  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(_DWORD *)(this + 95) != -2 || *(_DWORD *)(this + 91) != -1 ) /*0x696f60*/
    return *(_DWORD *)(this + 91); /*0x696f62*/
  return result; /*0x696f65*/
}
}

// 0x696F70
int SessionClass::GetOption2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass_GetOption2(int this)
{
  int result; // eax

  result = -2; /*0x696f73*/
  if ( *(_DWORD *)(this + 103) != -2 || *(_DWORD *)(this + 99) != -1 ) /*0x696f80*/
    return *(_DWORD *)(this + 99); /*0x696f82*/
  return result; /*0x696f85*/
}
}

// 0x696F90
int SessionClass::SetPlayerOption(SkirmishDialog * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass::SetPlayerOption(int this, SkirmishDialog *aP1)
{
  SkirmishDialog *result; // eax

  result = aP1; /*0x696f90*/
  if ( aP1 == (SkirmishDialog *)-2 ) /*0x696f97*/
  {
    *(_DWORD *)(this + 75) = 0; /*0x696f99*/
    *(_DWORD *)(this + 79) = -2; /*0x696fa0*/
  }
  else
  {
    *(_DWORD *)(this + 75) = aP1; /*0x696fa6*/
    *(_DWORD *)(this + 79) = -1; /*0x696fa9*/
  }
  return (int)result->__pad_0; /*0x696fa3*/
}
}

// 0x696FC0
int SessionClass::SetPlayerColor(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass_SetPlayerColor(int this, int a2)
{
  int result; // eax

  result = a2; /*0x696fc0*/
  if ( a2 == -2 ) /*0x696fc7*/
  {
    *(_DWORD *)(this + 83) = -1; /*0x696fc9*/
    *(_DWORD *)(this + 87) = -2; /*0x696fd0*/
  }
  else
  {
    *(_DWORD *)(this + 83) = a2; /*0x696fd6*/
    *(_DWORD *)(this + 87) = -1; /*0x696fd9*/
  }
  return result; /*0x696fd3*/
}
}

// 0x696FF0
int SessionClass::SetOption(SessionClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass::SetOption(int this, SessionClass *aP1)
{
  SessionClass *result; // eax

  result = aP1; /*0x696ff0*/
  if ( aP1 == (SessionClass *)-2 ) /*0x696ff7*/
  {
    *(_DWORD *)(this + 91) = -1; /*0x696ff9*/
    *(_DWORD *)(this + 95) = -2; /*0x697000*/
  }
  else
  {
    *(_DWORD *)(this + 91) = aP1; /*0x697006*/
    *(_DWORD *)(this + 95) = -1; /*0x697009*/
  }
  return (int)result->GameMode; /*0x697003*/
}
}

// 0x697020
int SessionClass::SetOption2(SessionClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass::SetOption2(int this, SessionClass *aP1)
{
  SessionClass *result; // eax

  result = aP1; /*0x697020*/
  if ( aP1 == (SessionClass *)-2 ) /*0x697027*/
  {
    *(_DWORD *)(this + 99) = -1; /*0x697029*/
    *(_DWORD *)(this + 103) = -2; /*0x697030*/
  }
  else
  {
    *(_DWORD *)(this + 99) = aP1; /*0x697036*/
    *(_DWORD *)(this + 103) = -1; /*0x697039*/
  }
  return (int)result->GameMode; /*0x697033*/
}
}

// 0x6970A0
char * SessionClass::SessionClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_6970A0(char *this)
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

  this->MPGameMode = 0; /*0x6970b8*/
  this->SkirmishPreferences = 0; /*0x6970bb*/
  this->SkirmishPreferences.idxScenario = 0; /*0x6970c1*/
  this->SkirmishPreferences.GameSpeed = 1; /*0x6970c7*/
  this->SkirmishPreferences.Credits = 10000; /*0x6970cd*/
  this->SkirmishPreferences.UnitCount = 10; /*0x6970d3*/
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
  this->LANPreferences = 0; /*0x697110*/
  this->LANPreferences.idxScenario = 0; /*0x697116*/
  this->LANPreferences.GameSpeed = 1; /*0x69711c*/
  this->LANPreferences.Credits = 10000; /*0x697122*/
  this->LANPreferences.UnitCount = 10; /*0x697128*/
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
  this->WOLPreferences = 0; /*0x69716a*/
  this->WOLPreferences.idxScenario = 0; /*0x697170*/
  this->WOLPreferences.GameSpeed = 1; /*0x697176*/
  this->WOLPreferences.Credits = 10000; /*0x69717c*/
  this->WOLPreferences.UnitCount = 10; /*0x697182*/
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
  *((_DWORD *)this + 420) = &vt_DynamicVectorClass_MultiMission; /*0x697206*/
  *((_DWORD *)this + 425) = 10; /*0x697210*/
  *((_DWORD *)this + 424) = 0; /*0x697216*/
  Waypoint::InitInvalid(this + 2276); /*0x69721c*/
  *((_DWORD *)this + 573) = 0; /*0x697227*/
  *((_DWORD *)this + 574) = 0; /*0x69722d*/
  *(this + 2300) = 1; /*0x697233*/
  *(this + 2301) = 0; /*0x69723a*/
  *((_DWORD *)this + 572) = &vt_DynamicVectorClass_GlobalPacketType; /*0x697240*/
  *((_DWORD *)this + 577) = 10; /*0x69724a*/
  *((_DWORD *)this + 576) = 0; /*0x697250*/
  SessionClass::saveSettings(this + 2600); /*0x697256*/
  Waypoint::InitInvalid(this + 7876); /*0x697261*/
  CCFileClass::Construct3((int)(this + 9044)); /*0x69726c*/
  Waypoint::InitInvalid(this + 9160); /*0x697277*/
  Waypoint::InitInvalid(this + 9676); /*0x697282*/
  this->unknown_vector_280C.Items = 0; /*0x69728c*/
  this->unknown_vector_280C.Capacity = 0; /*0x697292*/
  *(this + 10264) = 1; /*0x697298*/
  *(this + 10265) = 0; /*0x69729f*/
  this->unknown_vector_280C = &vt_DynamicVectorClass_NodeNameType; /*0x6972a5*/
  this->unknown_vector_280C.CapacityIncrement = 10; /*0x6972ab*/
  this->unknown_vector_280C.Count = 0; /*0x6972b1*/
  this->unknown_vector_2824.Items = 0; /*0x6972b7*/
  this->unknown_vector_2824.Capacity = 0; /*0x6972bd*/
  *(this + 10288) = 1; /*0x6972c3*/
  *(this + 10289) = 0; /*0x6972ca*/
  this->unknown_vector_2824 = &vt_DynamicVectorClass_NodeNameType; /*0x6972d0*/
  this->unknown_vector_2824.CapacityIncrement = 10; /*0x6972d6*/
  this->unknown_vector_2824.Count = 0; /*0x6972dc*/
  this->StartSpots.Items = 0; /*0x6972e2*/
  this->StartSpots.Capacity = 0; /*0x6972e8*/
  *(this + 10312) = 1; /*0x6972ee*/
  *(this + 10313) = 0; /*0x6972f5*/
  this->StartSpots = &vt_DynamicVectorClass_NodeNameType; /*0x6972fb*/
  this->StartSpots.CapacityIncrement = 10; /*0x697301*/
  this->StartSpots.Count = 0; /*0x697307*/
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
  *((_DWORD *)this + 2629) = &vt_DynamicVectorClass_char; /*0x697355*/
  *((_DWORD *)this + 2634) = 10; /*0x69735f*/
  *((_DWORD *)this + 2633) = 0; /*0x697365*/
  *((_DWORD *)this + 2636) = 0; /*0x697371*/
  *((_DWORD *)this + 2637) = 0; /*0x697377*/
  *(this + 10552) = 1; /*0x69737d*/
  *(this + 10553) = 0; /*0x697384*/
  *((_DWORD *)this + 2635) = &vt_DynamicVectorClass_unsigned_short_const; /*0x69738a*/
  *((_DWORD *)this + 2640) = 10; /*0x697394*/
  *((_DWORD *)this + 2639) = 0; /*0x69739a*/
  Waypoint::InitInvalid(this + 10604); /*0x6973a0*/
  Waypoint::InitInvalid(this + 10616); /*0x6973ab*/
  Waypoint::InitInvalid(this + 10632); /*0x6973b6*/
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
  this->unknown_14 = 2; /*0x6973ff*/
  this->Config.Credits = 0; /*0x697402*/
  *(this + 32) = 1; /*0x697405*/
  *((_DWORD *)this + 9) = 0; /*0x697409*/
  *(this + 40) = 0; /*0x69740c*/
  *(this + 41) = 0; /*0x69740f*/
  *(this + 53) = 0; /*0x697412*/
  this->Handle = 0; /*0x697415*/
  *(this + 42) = 0; /*0x697418*/
  *(this + 43) = 0; /*0x69741b*/
  *(this + 44) = 0; /*0x69741e*/
  this->Config.PlayerCount = 0; /*0x697421*/
  *(this + 52) = 0; /*0x697424*/
  *(this + 228) = 0; /*0x697427*/
  *(this + 229) = 0; /*0x69742d*/
  *(this + 230) = 0; /*0x697433*/
  *(this + 231) = 0; /*0x697439*/
  *(this + 232) = 0; /*0x69743f*/
  *((_DWORD *)this + 16) = 1; /*0x697445*/
  *((_DWORD *)this + 81) = 0; /*0x69744c*/
  *(this + 328) = 0; /*0x697452*/
  this->idxSide = 0; /*0x69745b*/
  this->idxSide2 = -1; /*0x697461*/
  *((_DWORD *)this + 87) = 2; /*0x697467*/
  this->unknown_160 = -1; /*0x69746d*/
  this->Side = this->idxSide; /*0x697479*/
  this->Side2 = this->idxSide2; /*0x697485*/
  this->Color = *((_DWORD *)this + 87); /*0x697491*/
  this->Color2 = this->unknown_160; /*0x69749d*/
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
  memset(MEMORY[0xB73E44], 0, 0x2000u); /*0x697522*/
  memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x69752e*/
  this->MuteSWLaunches = 0; /*0x697530*/
  this->unknown_304 = 0; /*0x697536*/
  this->LastNickSlot = -1; /*0x69753c*/
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
  this->unknown_310 = 8; /*0x6975b6*/
  *((_DWORD *)this + 198) = 15; /*0x6975c0*/
  *((_DWORD *)this + 204) = 15; /*0x6975c6*/
  *((_DWORD *)this + 197) = 0; /*0x6975cc*/
  *((_DWORD *)this + 199) = 5; /*0x6975df*/
  memset(this + 828, 0, 0x340u); /*0x6975e9*/
  v13 = *((_DWORD *)this + 2031); /*0x6975eb*/
  v14 = *((_DWORD *)this + 2261); /*0x6975f1*/
  LOBYTE(v13) = v13 & 0xFE; /*0x6975fd*/
  *((_DWORD *)this + 205) = 0; /*0x697604*/
  *((_DWORD *)this + 206) = 0; /*0x69760a*/
  *(this + 1660) = 0; /*0x697610*/
  *(this + 1661) = 0; /*0x697616*/
  *((_DWORD *)this + 416) = 0; /*0x69761c*/
  *((_DWORD *)this + 417) = 0; /*0x697622*/
  *((_WORD *)this + 3949) = 0; /*0x697628*/
  *((_DWORD *)this + 2031) = v13; /*0x69762f*/
  (*(void (__thiscall **)(char *, char *))(v14 + 8))(this + 9044, MEMORY[0x83EEAC]); /*0x697635*/
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
  strcpy(this + 10408, &MEMORY[0x889F64]); /*0x697709*/
  *((_DWORD *)this + 2622) = 0; /*0x697712*/
  *((_DWORD *)this + 3115) = 0x7FFFFFFF; /*0x697718*/
  *((_DWORD *)this + 3116) = 0; /*0x697722*/
  *((_DWORD *)this + 3117) = 0; /*0x697728*/
  *((_DWORD *)this + 3118) = MEMORY[0xB07740]; /*0x69773a*/
  *((_DWORD *)this + 3119) = MEMORY[0xB07744]; /*0x697745*/
  v15 = this + 132; /*0x69774e*/
  *((_DWORD *)this + 3120) = MEMORY[0xB07748]; /*0x697754*/
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
  this->unknown_0C = 0; /*0x697790*/
  this->unknown_10 = 0; /*0x697793*/
  *(this + 1704) = 0; /*0x697796*/
  *((_DWORD *)this + 563) = 0; /*0x69779c*/
  *(this + 2256) = 0; /*0x6977a2*/
  *((_DWORD *)this + 565) = 0; /*0x6977a9*/
  return this; /*0x6977a8*/
}
}

// 0x697B70
int SessionClass::CreateConnections()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass_CreateConnections(void *this)
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
  if ( MEMORY[0xA8B238][0] != 3 && MEMORY[0xA8B238][0] != 4 ) /*0x697b93*/
    return 0; /*0x697b9e*/
  v3 = 0; /*0x697ba7*/
  if ( *((int *)this + 2579) > 0 ) /*0x697bab*/
  {
    do /*0x697bc5*/
    {
      Debug::Log(); /*0x697bc5*/
      if ( _wcsicmp( /*0x697be7*/
             *(const wchar_t **)(this->StartSpots.Items + 4 * v3),
             (const wchar_t *)(*((_DWORD *)HouseClass_Array
                               + *(_DWORD *)(*(_DWORD *)(this->StartSpots.Items + 4 * v3) + 111))
                             + 90154)) )
      {
        return 0; /*0x697bf1*/
      }
      if ( !_wcsicmp(*(const wchar_t **)(this->StartSpots.Items + 4 * v3), (const wchar_t *)this + 6160) ) /*0x697c04*/
      {
        *((_DWORD *)this + 3101) = *(_DWORD *)(*(_DWORD *)(this->StartSpots.Items + 4 * v3) + 111); /*0x697c25*/
        Network::CopyAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v3) + 40), &v13, (int)v15); /*0x697c38*/
        NetworkID::Assign(&MEMORY[0xA8DBA4], &v13, (int)v15, 0); /*0x697c4d*/
        Network::SetPlayerCoords(&MEMORY[0xA8DBA4]); /*0x697c5c*/
      }
      v4 = *(_DWORD *)(this->StartSpots.Items + 4 * v3); /*0x697c67*/
      *(_DWORD *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(v4 + 111)) + 516) = *(_DWORD *)(v4 + 123); /*0x697c7e*/
      Network::CopyAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v3) + 40), &v13, (int)v15); /*0x697c94*/
      v5 = 0; /*0x697c99*/
      for ( i = 0; i < 4; ++i ) /*0x697c9b*/
        v5 = (unsigned __int8)v15[i] | (v5 << 8); /*0x697ca8*/
      Debug::Log(); /*0x697cc7*/
      *(_DWORD *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(*(_DWORD *)(this->StartSpots.Items + 4 * v3) + 111)) + 512) = v5; /*0x697ce5*/
      *(_BYTE *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(*(_DWORD *)(this->StartSpots.Items + 4 * v3) + 111)) + 520) = 0; /*0x697d00*/
      if ( v3 > 0 ) /*0x697d06*/
      {
        v7 = *(_DWORD *)(this->StartSpots.Items + 4 * v3); /*0x697d0e*/
        SessionClass::initLAN(*(_DWORD *)(v7 + 111), (wchar_t *)v7, v7 + 40); /*0x697d1f*/
        *(_DWORD *)(*(_DWORD *)(this->StartSpots.Items + 4 * v3) + 115) = -1; /*0x697d2d*/
      }
    }
    while ( ++v3 < this->StartSpots.Count ); /*0x697bc5*/
  }
  v8 = MEMORY[0x887338]; /*0x697d43*/
  v9 = MEMORY[0xA8E284]; /*0x697d48*/
  do /*0x697d79*/
  {
    v10 = MEMORY[0x887340]; /*0x697d4d*/
    if ( v8 != -1 ) /*0x697d56*/
    {
      Ticks = Timer::GetTicks(); /*0x697d62*/
      v8 = MEMORY[0x887338]; /*0x697d64*/
      v10 += Ticks - MEMORY[0x887338]; /*0x697d6b*/
    }
    *v9++ = v10; /*0x697d6d*/
  }
  while ( (int)v9 < (int)&MEMORY[0xA8E2A4] ); /*0x697d79*/
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
  NetworkID::Assign(&MEMORY[0xA8DBB0], &v12, (int)v14, 0); /*0x697dc8*/
  *((_BYTE *)this + 10600) = 1; /*0x697dd2*/
  *((_DWORD *)this + 3107) = 0; /*0x697dd9*/
  *((_DWORD *)this + 3111) = 20; /*0x697ddf*/
  *((_DWORD *)this + 3109) = -1; /*0x697de9*/
  SessionClass::initInternet(MEMORY[0xA8E9C0]); /*0x697df3*/
  SessionClass::BuildLobbyPlayerList(&g_NetworkEventQueue); /*0x697dfd*/
  if ( SessionClass::IsValidHouse((int)MEMORY[0xA8B238], 0) ) /*0x697e08*/
  {
    if ( !(unsigned __int8)LaunchMultiplayerHost(0) /*0x697e25*/
      || !(unsigned __int8)Network::SendMasterPlayerList(&g_NetworkEventQueue) )
    {
LABEL_22:
      MEMORY[0xA8DBA0] = 0; /*0x697e2e*/
    }
  }
  Debug::Log(); /*0x697e4f*/
  Debug::Log(); /*0x697e59*/
  return 1; /*0x697b95*/
}
}

// 0x697E70
char SessionClass::IsValidHouse(void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SessionClass_IsValidHouse(int this, #375 *a2)
{
  #375 *v2; // edi
  int v3; // eax
  int v5; // ecx
  HouseClass *i; // edx
  #375 *v7; // eax

  v2 = a2; /*0x697e73*/
  if ( !a2 ) /*0x697e79*/
    v2 = HouseClass_Player; /*0x697e7b*/
  if ( MEMORY[0xA8B238][0] != 4 || !v2 ) /*0x697e8c*/
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
    v7 = *(#375 **)i->__pad_0; /*0x697edf*/
    if ( *(_BYTE *)(*(_DWORD *)i->__pad_0 + 492) ) /*0x697ee1*/
    {
      if ( !*((_BYTE *)v7 + 501) ) /*0x697eeb*/
        break; /*0x697eeb*/
    }
    if ( ++v5 >= HouseClass_Count ) /*0x697efb*/
      return 0; /*0x697efb*/
  }
  return v2 == v7; /*0x697ea0*/
}
}

// 0x699980
char * SessionClass::LoadMissionList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall SessionClass_LoadMissionList(_DWORD *this)
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
  v61[0] = &vt_List_INIClass_INISection; /*0x6999ad*/
  memset(&v61[7], 0, 12); /*0x6999b5*/
  v62 = 0; /*0x6999c1*/
  v63 = 0; /*0x6999c6*/
  v64 = 0; /*0x6999ca*/
  v60[0] = (int)&vt_INIClass; /*0x6999ce*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x6999d6*/
  CCFileClass::Construct(v67, MEMORY[0x83F520]); /*0x6999e2*/
  if ( CCFileClass::Open(v67, 0) ) /*0x6999ec*/
  {
    FileStraw::Open(v60, (int)v67, 0); /*0x699a03*/
    KeyCount = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)MEMORY[0x83F514]); /*0x699a16*/
    v6 = 0; /*0x699a18*/
    if ( KeyCount > 0 ) /*0x699a1c*/
    {
      while ( 1 ) /*0x699a3f*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x699a3f*/
                                             (char *)v60,
                                             (unsigned __int8 *)MEMORY[0x83F514],
                                             v6);
        if ( INIClass::GetString( /*0x699a4e*/
               (unsigned __int8 ***)v60,
               (unsigned __int8 *)MEMORY[0x83F514],
               StringByIndex,
               &MEMORY[0x889F64],
               v70,
               64) )
        {
          v8 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x699a5c*/
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
  FirstFileA = FindFirstFileA(MEMORY[0x83F50C], &FindFileData); /*0x699aec*/
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
        if ( _strcmpi(cAlternateFileName, MEMORY[0x83F520]) )
        {
          FileClass::SetFileName(v67, cAlternateFileName); /*0x699b48*/
          FileStraw::Open(v60, (int)v67, 0); /*0x699b58*/
          v15 = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)MEMORY[0x83F514]); /*0x699b6b*/
          for ( i = 0; i < v15; ++i )
          {
            v17 = (unsigned __int8 *)INIClass::GetStringByIndex((char *)v60, (unsigned __int8 *)MEMORY[0x83F514], i); /*0x699b90*/
            if ( INIClass::GetString(
                   (unsigned __int8 ***)v60,
                   (unsigned __int8 *)MEMORY[0x83F514],
                   v17,
                   &MEMORY[0x889F64],
                   v70,
                   64) )
            {
              v18 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x699bad*/
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
  v24 = FindFirstFileA(MEMORY[0x83F504], &FindFileData); /*0x699c69*/
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
        if ( _strcmpi(cFileName, MEMORY[0x83F4F4]) ) /*0x699cbe*/
        {
          v26 = __2_YAPAXI_Z(0x28u); /*0x699cd0*/
          if ( v26 ) /*0x699cda*/
          {
            v27 = MixFileClass::FromFile(v26, cFileName, (int)&MEMORY[0x886980]); /*0x699ced*/
            if ( v27 ) /*0x699cf1*/
            {
              if ( MEMORY[0x884DD0] < MEMORY[0x884DC8] /*0x699d2d*/
                || (MEMORY[0x884DCD] || !MEMORY[0x884DC8])
                && MEMORY[0x884DD4] > 0
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x884DC0] + 8))(
                     &MEMORY[0x884DC0],
                     MEMORY[0x884DC8] + MEMORY[0x884DD4],
                     0) )
              {
                v28 = MEMORY[0x884DD0]++; /*0x699d3a*/
                *((_DWORD *)MEMORY[0x884DC4] + v28) = v27; /*0x699d49*/
              }
              v29 = strlen(cFileName) + 1; /*0x699d53*/
              v30 = v29 - 1; /*0x699d5f*/
              strncpy(Destination, cFileName, v29 - 4); /*0x699d67*/
              *((_BYTE *)&v75[62] + v30 + 1) = 0; /*0x699d8f*/
              strcat(Destination, (const char *)&MEMORY[0x83F4F0]); /*0x699d9f*/
              Destination[v30] = 0; /*0x699da8*/
              FileClass::SetFileName(v67, Destination); /*0x699dbb*/
              if ( CCFileClass::Open(v67, 0) ) /*0x699dc7*/
              {
                FileStraw::Open(v60, (int)v67, 0); /*0x699dde*/
                v31 = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)MEMORY[0x83F514]); /*0x699dec*/
                v32 = 0; /*0x699df1*/
                v66 = v31; /*0x699df5*/
                for ( j = 0; j < v66; ++j ) /*0x699dfd*/
                {
                  v33 = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x699e1c*/
                                             (char *)v60,
                                             (unsigned __int8 *)MEMORY[0x83F514],
                                             v32);
                  if ( INIClass::GetString( /*0x699e2b*/
                         (unsigned __int8 ***)v60,
                         (unsigned __int8 *)MEMORY[0x83F514],
                         v33,
                         &MEMORY[0x889F64],
                         v70,
                         64) )
                  {
                    v34 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x699e3d*/
                    if ( v34 ) /*0x699e47*/
                    {
                      v35 = MapFile::LoadDescription(v34, (unsigned __int8 ***)v60, v70); /*0x699e5c*/
                      v36 = v35; /*0x699e61*/
                      if ( v35 ) /*0x699e65*/
                      {
                        v37 = *((_DWORD *)v35 + 97); /*0x699e6b*/
                        v38 = *((_DWORD *)v35 + 96); /*0x699e71*/
                        if ( v38 == v37 ) /*0x699e7b*/
                          swprintf(Buffer, (const size_t)&MEMORY[0x83F4CC], (const wchar_t *const)0x28, v38, 41); /*0x699ea8*/
                        else
                          swprintf(Buffer, (const size_t)&MEMORY[0x83F4DC], (const wchar_t *const)0x28, v38, v37, 41); /*0x699e8e*/
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
                          String = GetStringCSF(MEMORY[0x83F4B8], 0, MEMORY[0x83EEB8], 2845); /*0x699f36*/
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
  hFindFileb = FindFirstFileA(MEMORY[0x83F490], &FindFileData); /*0x69a010*/
  LOBYTE(v56) = 0; /*0x69a014*/
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
          (unsigned __int8 *)MEMORY[0x82BF9C],
          (unsigned __int8 *)MEMORY[0x817854],
          unk_829284,
          v70,
          64);
        INIClass::GetString( /*0x69a095*/
          (unsigned __int8 ***)v60,
          (unsigned __int8 *)g_INI_Key_Digest,
          (unsigned __int8 *)MEMORY[0x831898],
          MEMORY[0x83F3E4],
          v71,
          32);
        BulkCharToWide(v75, (unsigned __int8 *)v70, -1); /*0x69a0aa*/
        LOBYTE(v56) = INIClass::ReadBool_Overwrite(MEMORY[0x82BF9C], MEMORY[0x83DC5C], 0); /*0x69a0c8*/
        v59 = 2; /*0x69a0f0*/
        v58 = 4; /*0x69a0f8*/
        ParseMapFileHeader(v45, v71, v77, (int)&v56, (int)&v59, (int)&v58); /*0x69a0fc*/
        v46 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x69a106*/
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
  v67[0] = &vt_CCFileClass; /*0x69a1b2*/
  v69 = 0; /*0x69a1ba*/
  Vector::Clear((int)v68); /*0x69a1c1*/
  v67[0] = &off_7E1668; /*0x69a1ca*/
  BufferIOFileClass::Dtor(v67); /*0x69a1d2*/
  return HashTable::DestroyHashTableINIClass((void **)v60); /*0x69a1e0*/
}
}

// 0x69A980
wchar_t * SessionClass::ParseGameInfo(char * Source, CampaignScore * aP2, CCINIClass * aP3, CampaignScore * aP4, const char * a5, CampaignScore * aP6, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall SessionClass::ParseGameInfo(
        wchar_t *this,
        char *Source,
        CampaignScore *aP2,
        CCINIClass *aP3,
        CampaignScore *aP4,
        const char *a5,
        CampaignScore *aP6,
        int a8)
{
  wchar_t *v8; // esi
  VectorClass *v9; // ebx
  wchar_t *v10; // ebp
  char *v11; // eax
  wchar_t *StringCSF; // eax
  char v13; // cl
  int v14; // eax
  void (__thiscall **v15)(VectorClass *); // edx
  char *v16; // ecx
  int v17; // eax
  void *v18; // eax
  _DWORD *v19; // edx
  ObjectClass *i; // edi
  CampaignScore *v21; // ecx
  int v22; // eax
  ObjectClass *v23; // eax

  v8 = this; /*0x69a984*/
  v9 = (VectorClass *)(this + 196); /*0x69a989*/
  MapFile::Constructor((_DWORD *)this + 98, 0, 0); /*0x69a997*/
  v10 = v8 + 210; /*0x69a99c*/
  v9[1].Items = (void *)10; /*0x69a9ad*/
  v9[1].vtable0 = 0; /*0x69a9b0*/
  v9->vtable0 = &vt_TypeList_enum_DiskID; /*0x69a9b7*/
  VectorClass::WstringConstructor((_DWORD *)v8 + 105, 0, 0); /*0x69a9bd*/
  v11 = Source; /*0x69a9c2*/
  *((_DWORD *)v8 + 105) = &vt_DynamicVectorClass_Wstring; /*0x69a9c6*/
  *((_DWORD *)v8 + 110) = 10; /*0x69a9cf*/
  *((_DWORD *)v8 + 109) = 0; /*0x69a9d2*/
  if ( v11 ) /*0x69a9d9*/
  {
    strncpy((char *)v8 + 88, v11, (IUnknown *)0x104); /*0x69a9e5*/
    *((_BYTE *)v8 + 347) = 0; /*0x69a9ed*/
  }
  else
  {
    strcpy((char *)v8 + 88, &stru_830620.__pad_579C[39068]); /*0x69aa12*/
    v8 = this; /*0x69aa1b*/
  }
  if ( aP2 ) /*0x69aa25*/
  {
    wcsncpy(v8, (const wchar_t *)aP2, (DropListClass *)0x2C); /*0x69aa2b*/
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
  if ( aP3 ) /*0x69aa61*/
  {
    strncpy((char *)v8 + 348, aP3->__pad_0, (IUnknown *)0x20); /*0x69aa6d*/
    *((_BYTE *)v8 + 379) = 0; /*0x69aa75*/
  }
  else
  {
    strcpy((char *)v8 + 348, &stru_830620.__pad_579C[38440]); /*0x69aa9d*/
    v8 = this; /*0x69aaa6*/
  }
  v13 = (char)aP4; /*0x69aaae*/
  v14 = a8; /*0x69aab2*/
  *((_DWORD *)v8 + 96) = aP6; /*0x69aab6*/
  v15 = (void (__thiscall **)(VectorClass *))v9->vtable0; /*0x69aabc*/
  *((_BYTE *)v8 + 380) = v13; /*0x69aabe*/
  *((_DWORD *)v8 + 97) = v14; /*0x69aac6*/
  v15[3](v9); /*0x69aacc*/
  v16 = (char *)v9->Capacity; /*0x69aacf*/
  if ( (int)v9[1].vtable0 < (int)v16 /*0x69aaf4*/
    || (v9->IsAllocated || !v16)
    && (v17 = (int)v9[1].Items, v17 > 0)
    && (*((unsigned __int8 (__thiscall **)(VectorClass *, char *, _DWORD))v9->vtable0 + 2))(v9, &v16[v17], 0) )
  {
    v18 = v9[1].vtable0; /*0x69aafb*/
    v19 = v9->Items; /*0x69aafe*/
    v9[1].vtable0 = (char *)v18 + 1; /*0x69ab04*/
    v19[(_DWORD)v18] = -2; /*0x69ab07*/
  }
  if ( a5 ) /*0x69ab14*/
  {
    String::Assign(&Source, a5); /*0x69ab1f*/
    if ( String::Length((const char **)&Source) ) /*0x69ab28*/
    {
      unknown_libname_73(&aP4); /*0x69ab39*/
      for ( i = (ObjectClass *)String::Tokenize( /*0x69ab58*/
                                 (const char **)&Source,
                                 0,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP4);
            i != (ObjectClass *)-1;
            i = (ObjectClass *)String::Tokenize(
                                 (const char **)&Source,
                                 (int)i,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP4) )
      {
        String::Assign((char **)&aP2, &stru_830620.__pad_3BC[56]); /*0x69ab67*/
        String::TrimLeft((const char **)&aP4, (ObjectClass *)&aP2); /*0x69ab75*/
        DeleteAndZero((void **)&aP2); /*0x69ab7e*/
        String::Assign((char **)&aP3, &stru_830620.__pad_3BC[56]); /*0x69ab8c*/
        String::TrimRight((const char **)&aP4, (ObjectClass *)&aP3); /*0x69ab9a*/
        DeleteAndZero((void **)&aP3); /*0x69aba3*/
        v21 = (CampaignScore *)*((_DWORD *)v10 + 2); /*0x69aba8*/
        if ( *((_DWORD *)v10 + 4) >= (int)v21 ) /*0x69abb0*/
        {
          if ( !*((_BYTE *)v10 + 13) && v21 ) /*0x69abbb*/
            continue; /*0x69abbb*/
          v22 = *((_DWORD *)v10 + 5); /*0x69abbd*/
          if ( v22 <= 0 /*0x69abce*/
            || !(*(unsigned __int8 (__thiscall **)(wchar_t *, char *, _DWORD))(*(_DWORD *)v10 + 8))(
                  v10,
                  &v21->__pad_0[v22],
                  0) )
          {
            continue; /*0x69abce*/
          }
        }
        v23 = (ObjectClass *)*((_DWORD *)v10 + 4); /*0x69abd5*/
        *((_DWORD *)v10 + 4) = &v23->__pad_0[1]; /*0x69abe0*/
        String::Reassign((char **)(*((_DWORD *)v10 + 1) + 4 * (_DWORD)v23), (AbstractClass *)&aP4); /*0x69abe9*/
      }
      DeleteAndZero((void **)&aP4); /*0x69ac11*/
    }
    DeleteAndZero((void **)&Source); /*0x69ac1a*/
  }
  return v8; /*0x69ac21*/
}
}

// 0x69B7E0
int SessionClass::AssignColor(int a2, MPCooperative * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SessionClass::AssignColor(_DWORD *this, int a2, MPCooperative *aP2)
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
    LOBYTE(result) = (_BYTE)aP2; /*0x69b7f5*/
    if ( (_BYTE)aP2 ) /*0x69b7fb*/
    {
      while ( 1 ) /*0x69b80e*/
      {
        result = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)7); /*0x69b80e*/
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
}

// 0x69BD60
void SessionClass::SetupNetwork()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_69BD60(int this)
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
  v62 = &vt_DynamicVectorClass_NodeNameType; /*0x69bd81*/
  v67 = 10; /*0x69bd89*/
  v66 = 0; /*0x69bd91*/
  Debug::Log(); /*0x69bd95*/
  if ( *(int *)(this + 10316) < 2 ) /*0x69bda6*/
  {
    v62 = &vt_VectorClass_NodeNameType; /*0x69bdac*/
    MPCooperative::updateScoreBoard(&v62); /*0x69bdb4*/
    return; /*0x69bdbe*/
  }
  v52 = 0; /*0x69bdce*/
  memset((void *)(this + 11816), 0, 0x120u); /*0x69bdd2*/
  *(_BYTE *)(this + 12312) = 1; /*0x69bdd4*/
  if ( *(int *)(this + 10316) > 0 ) /*0x69bde3*/
  {
    do /*0x69be9c*/
    {
      v53[0] = 0; /*0x69bde9*/
      v3 = (char **)&MEMORY[0xA8DA90]; /*0x69bdf1*/
      while ( 1 ) /*0x69bdfb*/
      {
        v4 = *v3; /*0x69bdfb*/
        v54 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v1)); /*0x69be07*/
        v5 = ToWideStringChar(v4); /*0x69be0b*/
        if ( !_strcmpi(v54, v5) ) /*0x69be16*/
          break; /*0x69be16*/
        ++v3; /*0x69be26*/
        ++v53[0]; /*0x69be30*/
        if ( (int)v3 >= (int)&MEMORY[0xA8DAB0] ) /*0x69be34*/
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
        (_WORD *)(*(_DWORD *)(this->StartSpots.Items + 4 * v1) + 40),
        *(_WORD *)(this + 4 * v6 + 12280));
      ToWideStringChar(*(char **)(this->StartSpots.Items + 4 * v1)); /*0x69be6a*/
      Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(this->StartSpots.Items + 4 * v1) + 40), 0); /*0x69be7f*/
      Debug::Log(); /*0x69be8b*/
LABEL_10:
      ++v1; /*0x69be93*/
    }
    while ( v1 < this->StartSpots.Count ); /*0x69be9c*/
  }
  v7 = this->StartSpots.Count; /*0x69bea2*/
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
        if ( !*((_BYTE *)&v58 + v10) && *(_DWORD *)(*(_DWORD *)(this->StartSpots.Items + 4 * v10) + 83) < v11 ) /*0x69bee9*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)(this->StartSpots.Items + 4 * v10) + 83); /*0x69beeb*/
          v9 = v10; /*0x69beed*/
        }
        ++v10; /*0x69beef*/
      }
      while ( v10 < v7 ); /*0x69bef2*/
      if ( v9 == 0x7FFFFFFF ) /*0x69befa*/
        break; /*0x69befa*/
      v12 = this->StartSpots.Items; /*0x69befc*/
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
      v7 = this->StartSpots.Count; /*0x69bf54*/
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
        v53[0] = this + 36 * v52 + 11816; /*0x69bfd1*/
        do /*0x69c1f5*/
        {
          if ( v17 != v15 && !*((_BYTE *)&v58 + v17) && NetworkID::Compare((int)v61, *((_DWORD *)Block + v17) + 40) ) /*0x69bff8*/
          {
            v54 = ToWideStringChar(*((char **)Block + v17)); /*0x69c011*/
            v19 = 0; /*0x69c015*/
            v20 = (char **)&MEMORY[0xA8DA90]; /*0x69c017*/
            while ( 1 ) /*0x69c01e*/
            {
              v21 = ToWideStringChar(*v20); /*0x69c01e*/
              if ( !_strcmpi(v54, v21) ) /*0x69c029*/
                break; /*0x69c029*/
              ++v20; /*0x69c039*/
              ++v19; /*0x69c03c*/
              if ( (int)v20 >= (int)&MEMORY[0xA8DAB0] ) /*0x69c043*/
              {
                v54 = 0; /*0x69c045*/
                goto LABEL_39; /*0x69c045*/
              }
            }
            v54 = v19; /*0x69c0f6*/
LABEL_39:
            v56 = ToWideStringChar(*((char **)Block + v50)); /*0x69c04d*/
            v22 = 0; /*0x69c061*/
            v23 = (char **)&MEMORY[0xA8DA90]; /*0x69c063*/
            while ( 1 ) /*0x69c06a*/
            {
              v24 = ToWideStringChar(*v23); /*0x69c06a*/
              if ( !_strcmpi(v56, v24) ) /*0x69c075*/
                break; /*0x69c075*/
              ++v23; /*0x69c081*/
              ++v22; /*0x69c084*/
              if ( (int)v23 >= (int)&MEMORY[0xA8DAB0] ) /*0x69c08b*/
              {
                v22 = 0; /*0x69c08d*/
                break; /*0x69c08d*/
              }
            }
            if ( *(_DWORD *)(this + 4 * (_DWORD)v54 + 12280) == *(_DWORD *)(this + 4 * v22 + 12280) ) /*0x69c0a3*/
            {
              v48 = v55++ + *(_WORD *)(this + 4 * (_DWORD)v54 + 12280); /*0x69c0b9*/
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
  if ( *(_DWORD *)(this + 12316) ) /*0x69c208*/
  {
    Debug::Log(); /*0x69c21c*/
    Network::SetPort((_WORD *)(**(_DWORD **)(this + 10304) + 40), *(_WORD *)(this + 12316)); /*0x69c237*/
    v54 = 0; /*0x69c23c*/
    v32 = (char **)&MEMORY[0xA8DA90]; /*0x69c244*/
    while ( 1 ) /*0x69c24e*/
    {
      v33 = *v32; /*0x69c24e*/
      v34 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x69c259*/
      v35 = ToWideStringChar(v33); /*0x69c25b*/
      if ( !_strcmpi(v34, v35) ) /*0x69c262*/
        break; /*0x69c262*/
      ++v32; /*0x69c276*/
      v54 = (char *)v54 + 1; /*0x69c280*/
      if ( (int)v32 >= (int)&MEMORY[0xA8DAB0] ) /*0x69c284*/
      {
        v36 = 0; /*0x69c286*/
        goto LABEL_58; /*0x69c286*/
      }
    }
    v36 = v54; /*0x69c48c*/
LABEL_58:
    Network::SetPort((_WORD *)(*(_DWORD *)(this + 4 * (_DWORD)v36 + 10328) + 40), *(_WORD *)(this + 12316)); /*0x69c288*/
  }
  v37 = 0; /*0x69c2a5*/
  if ( *(int *)(this + 10316) > 0 ) /*0x69c2a9*/
  {
    v38 = (_WORD *)(this + 12410); /*0x69c2ab*/
    do /*0x69c2d7*/
    {
      v39 = *(_WORD *)(*(_DWORD *)(this->StartSpots.Items + 4 * v37) + 40); /*0x69c2ba*/
      *v38 = v39; /*0x69c2c1*/
      if ( !v39 ) /*0x69c2c4*/
        *v38 = 1234; /*0x69c2c6*/
      ++v37; /*0x69c2d1*/
      ++v38; /*0x69c2d2*/
    }
    while ( v37 < this->StartSpots.Count ); /*0x69c2d7*/
  }
  v40 = (_DWORD *)(**(_DWORD **)(this + 10304) + 40); /*0x69c2e1*/
  v60[0] = *v40; /*0x69c2e6*/
  v60[1] = v40[1]; /*0x69c2f2*/
  v60[2] = v40[2]; /*0x69c2fd*/
  Network::CopyAddress_Small(&v57); /*0x69c301*/
  v51 = 1; /*0x69c313*/
  if ( *(int *)(this + 10316) > 1 ) /*0x69c317*/
  {
    v41 = 4; /*0x69c31d*/
    do /*0x69c430*/
    {
      if ( NetworkID::Compare((int)v60, *(_DWORD *)(v41 + this->StartSpots.Items) + 40) ) /*0x69c333*/
      {
        ToWideStringChar(*(char **)(v41 + this->StartSpots.Items)); /*0x69c349*/
        Debug::Log(); /*0x69c354*/
        v42 = this + 10644; /*0x69c362*/
        v54 = (void *)(this + 10328); /*0x69c368*/
        v55 = 8; /*0x69c36c*/
        do /*0x69c416*/
        {
          v43 = *(char **)v54; /*0x69c381*/
          v56 = ToWideStringChar(*(char **)(v41 + this->StartSpots.Items)); /*0x69c38a*/
          v44 = ToWideStringChar(v43); /*0x69c38e*/
          if ( !_strcmpi(v56, v44) ) /*0x69c399*/
          {
            Network::CopyAddress_Small(v53); /*0x69c3ac*/
            v45 = (_DWORD *)(*(_DWORD *)(v41 + this->StartSpots.Items) + 40); /*0x69c3be*/
            NetworkID::Assign(v45, 0, (int)v53, *(_WORD *)v45); /*0x69c3c8*/
            ToWideStringChar(*(char **)(v41 + this->StartSpots.Items)); /*0x69c3d6*/
            Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(v41 + this->StartSpots.Items) + 40), 0); /*0x69c3eb*/
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
    while ( v51 < this->StartSpots.Count ); /*0x69c430*/
  }
  if ( MEMORY[0x887628] ) /*0x69c440*/
  {
    v47 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 112))(MEMORY[0x887628]); /*0x69c444*/
    LOWORD(v47) = *(_WORD *)(this + 12410); /*0x69c44d*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 92))(MEMORY[0x887628], v47); /*0x69c457*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x69c462*/
  }
  v62 = &vt_VectorClass_NodeNameType; /*0x69c469*/
  if ( Block ) /*0x69c473*/
  {
    if ( v65 ) /*0x69c47b*/
      __3_YAXPAX_Z(Block); /*0x69c47e*/
  }
}
}

// 0x78F000
void SessionClass::BuildLaunchString()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void SessionClass_BuildLaunchString()
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

  v0 = SessionClass::initPlayers(MEMORY[0xA8B254]); /*0x78f009*/
  v1 = 1; /*0x78f014*/
  if ( MEMORY[0xAC10C8] == 1 ) /*0x78f01b*/
    ++v0; /*0x78f01d*/
  v2 = 0; /*0x78f01f*/
  v18 = 0; /*0x78f025*/
  v19 = 0; /*0x78f029*/
  if ( v0 <= 1 ) /*0x78f02d*/
    goto LABEL_15; /*0x78f02d*/
  v3 = v0 - 1; /*0x78f030*/
  v4 = (wchar_t **)&MEMORY[0xA8DA94]; /*0x78f033*/
  v20 = v0; /*0x78f03b*/
  do /*0x78f079*/
  {
    v5 = *v4; /*0x78f03f*/
    if ( *v4 == (wchar_t *)MEMORY[0xAC119C] || v5 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x78f050*/
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
      if ( *v6 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x78f097*/
      {
        ++v18; /*0x78f099*/
      }
      else if ( IsKnownPointer(*v6) ) /*0x78f09f*/
      {
        ++v2; /*0x78f0a8*/
      }
      ++v6; /*0x78f0a9*/
    }
    while ( (int)v6 < (int)&MEMORY[0xA8DAB0] ); /*0x78f0b2*/
  }
  if ( MEMORY[0xAC116C] ) /*0x78f0bb*/
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
    v12 = *(_DWORD *)MEMORY[0xAC116C]; /*0x78f191*/
    v13 = String::GetOrEmpty((char **)&v20); /*0x78f193*/
    (*(void (__stdcall **)(LPVOID, char *))(v12 + 156))(MEMORY[0xAC116C], v13); /*0x78f1a0*/
    memset(Buffer, 0, sizeof(Buffer)); /*0x78f1b1*/
    GameConfig::BuildChecksum(Buffer); /*0x78f1b7*/
    Buffer[40] = 0; /*0x78f1c5*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 168))(MEMORY[0xAC116C], Buffer); /*0x78f1ce*/
    (*(void (__stdcall **)(LPVOID, int, char *))(*(_DWORD *)MEMORY[0xAC116C] + 252))(MEMORY[0xAC116C], 1, &v7[v19]); /*0x78f1e5*/
    DeleteAndZero((void **)&v20); /*0x78f1ef*/
  }
}
}

// 0x69A310
unsigned int SessionClass::GetPlayerColorScheme(ObjectClass * aP0)
{
{
    ObjectClass *result;
    result = aP0;
    if ( aP0 == (ObjectClass *)-2 )
    return DataGlobal_830620.__pad_579C[36704];
    if ( (unsigned int)aP0 < 9 )
    return DataGlobal_830620.__pad_579C[(int)aP0 + 36696];
    return (unsigned int)result;
}
}

// 0x69B760
int SessionClass::AssignSide(int a2, MPCooperative * aP2)
{
{
    int result;
    int v5;
    result = a2;
    if ( a2 == -2 )
  {
    LOBYTE(result) = (char)aP2;
    if ( (char)aP2 )
    {
    result = Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)9);
    this->Side = result;
    this->Side2 = -2;
    }
    else
    {
    this->Side = 0;
    this->Side2 = -2;
    }
  }
    else
  {
    this->Side = a2;
    this->Side2 = -1;
  }
    v5 = this->Side2;
    this->idxSide = this->Side;
    this->idxSide2 = v5;
    return result;
}
}

// 0x69BBE0
char SessionClass::GetGameSpeed()
{
{
    return this->CurrentlyInGame;
}
}

// 0x69C4A0
void SessionClass::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->unknown_10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MPGameMode = 0;
  }
    this->IsAllocated = 0;
    this->unknown_08 = 0;
}
}

// 0x69C4D0
unsigned int SessionClass::Write(int a2)
{
{
    if ( (unsigned char)this->unknown_0C )
    return (unsigned int)(a2 - this->MPGameMode) >> 2;
    else
    return 0;
}
}

// 0x69C4F0
int SessionClass::Seek(int a2)
{
{
    return *(int *)(this->MPGameMode + 4 * a2);
}
}

// 0x69C6C0
TypeList * SessionClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_enum_DiskID;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}

// 0x69C710
char SessionClass::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->unknown_08;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->MPGameMode;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}

// 0x69C750
char SessionClass::addPlayer(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->unknown_0C = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->unknown_0C = 1;
    if ( v4 )
    {
    if ( this->MPGameMode )
      {
    v6 = this->unknown_08;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MPGameMode + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPGameMode = 0;
        }
      }
    this->MPGameMode = v4;
    this->unknown_08 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Clear();
    return 1;
  }
}
}

// 0x69C800
void SessionClass::removePlayer()
{
{
    if ( this->MPGameMode && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MPGameMode = 0;
  }
    this->IsAllocated = 0;
    this->unknown_08 = 0;
}
}

// 0x69C830
int SessionClass::findPlayer(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->unknown_0C )
    return 0;
    v3 = this->unknown_08;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// 0x69C870
unsigned int SessionClass::updatePlayer(int a2)
{
{
    if ( (unsigned char)this->unknown_0C )
    return (unsigned int)(a2 - this->MPGameMode) >> 2;
    else
    return 0;
}
}

// 0x69C890
char SessionClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->unknown_0C = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->unknown_0C = 1;
    if ( !v4 )
    return 0;
    if ( this->MPGameMode )
    {
    v5 = this->unknown_08;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MPGameMode + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPGameMode = 0;
      }
    }
    this->MPGameMode = v4;
    this->unknown_08 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Clear();
  }
    v7 = this->unknown_08;
    if ( v7 < this->unknown_10 )
    this->unknown_10 = v7;
    return 1;
}
}

// 0x69C940
int SessionClass::Read(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->unknown_10;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->MPGameMode; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}

// 0x69D460
VectorClass * SessionClass::validateGame(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_enum_DiskID;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}

// 0x7B2720
void SessionClass::SetInstance()
{
{
    DataGlobal_B780A0 = (int)this;
}
}
