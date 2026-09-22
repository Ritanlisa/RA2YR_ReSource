// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Mission_e4.hpp"

// 0x520AE0
namespace gamemd {
int Mission::ExecuteTechnoMissionAction()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TechnoClass_MissionAction(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  void **v4; // ebp
  unsigned int v5; // edx
  char *v6; // eax
  void *v7; // edi
  int v8; // edx
  int *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // edi
  int result; // eax
  int *v16; // ebp
  int v17; // ecx
  __int16 v18; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v19[3]; // [esp+18h] [ebp-18h] BYREF
  char v20; // [esp+24h] [ebp-Ch] BYREF

  v2 = *(this + 433); /*0x520ae9*/
  if ( v2 == -1 || *(this + 62) >= *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 36 * v2 + 4) ) /*0x520b0d*/
  {
    switch ( v2 ) /*0x520b27*/
    {
      case 11: /*0x520b27*/
      case 12: /*0x520b27*/
      case 13: /*0x520b27*/
      case 14: /*0x520b27*/
      case 15: /*0x520b27*/
        v3 = *(this + 432); /*0x520bc6*/
        if ( *(this + 62) < *(_DWORD *)(*(_DWORD *)(v3 + 3644) + 36 * v2 + 4) ) /*0x520bdf*/
          break; /*0x520bdf*/
        if ( *(int *)(v3 + 3680) > 0 ) /*0x520bed*/
        {
          v4 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x520bf9*/
          if ( !v4 ) /*0x520c00*/
            goto LABEL_20; /*0x520c00*/
          v5 = (unsigned int)Random::State((_DWORD *)MEMORY[0xA8B230] + 134) % *(_DWORD *)(*(this + 432) + 3680); /*0x520c2d*/
          v6 = (char *)v19; /*0x520c37*/
          v7 = *(void **)(*(_DWORD *)(*(this + 432) + 3668) + 4 * v5); /*0x520c3b*/
          v8 = *this; /*0x520c3e*/
          goto LABEL_19; /*0x520c40*/
        }
        if ( !*(_BYTE *)(v3 + 3757) ) /*0x520c42*/
        {
          v4 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x520c56*/
          if ( v4 ) /*0x520c5d*/
          {
            v7 = *(void **)(MEMORY[0x8871E0]->GUICheckboxSound[2] /*0x520c91*/
                          + 4
                          * ((unsigned int)Random::State((_DWORD *)MEMORY[0xA8B230] + 134)
                           % MEMORY[0x8871E0]->BuildingGarrisonedSound[1]));
            v8 = *this; /*0x520c94*/
            v6 = &v20; /*0x520c96*/
LABEL_19:
            v9 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(v8 + 72))(this, v6); /*0x520c9a*/
            AnimClass::ctor(v4, v7, v9, 0, 1, (void *)0x600, 0, 0); /*0x520ca4*/
          }
        }
LABEL_20:
        (*(void (__thiscall **)(_DWORD *))(*this + 248))(this); /*0x520ca9*/
        break; /*0x520cb3*/
      case 20: /*0x520b27*/
      case 21: /*0x520b27*/
      case 36: /*0x520b27*/
        if ( *(this + 62) >= *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 36 * v2 + 4) ) /*0x520cd1*/
          (*(void (__thiscall **)(_DWORD *))(*this + 248))(this); /*0x520cdb*/
        break; /*0x520ce1*/
      case 27: /*0x520b27*/
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 28, 1, 0); /*0x520b38*/
        if ( !*(_BYTE *)(*(this + 432) + 3785) ) /*0x520b44*/
          *((_BYTE *)this + 676) = 1; /*0x520b4e*/
        Mission::GetMissionDelay(this); /*0x520b57*/
        break; /*0x520b5c*/
      case 31: /*0x520b27*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int, _DWORD))(*this + 1368))(this, 0, 1, 0); /*0x520b93*/
        if ( !*(_BYTE *)(*(this + 432) + 3785) ) /*0x520b9f*/
          *((_BYTE *)this + 676) = 0; /*0x520bad*/
        break; /*0x520bb4*/
      case 33: /*0x520b27*/
        break;
      case 34: /*0x520b27*/
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 35, 1, 0); /*0x520bc1*/
        break; /*0x520bc1*/
      case 38: /*0x520b27*/
        if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 10 ) /*0x520b6e*/
          goto LABEL_51; /*0x520b6e*/
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 38, 1, 0); /*0x520b7e*/
        break; /*0x520b84*/
      default:
        if ( v2 != -1 ) /*0x520ce9*/
        {
          v10 = *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 36 * v2 + 12); /*0x520cfa*/
          if ( v10 != -1 ) /*0x520d01*/
          {
            v18 = (_WORD)v10 << 13; /*0x520d11*/
            FacingClass::Set_SyncLog(&v18); /*0x520d16*/
          }
        }
        if ( !*(this + 413) ) /*0x520d1b*/
          WinAPI::Wrapper(-2147467261); /*0x520d2a*/
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) /*0x520d50*/
          && *((double *)this + 175) > 0.1 )
        {
          if ( *((_BYTE *)this + 1755) ) /*0x520d52*/
            (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 6, 1, 0); /*0x520d66*/
          else
            (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 3, 1, 0); /*0x520d79*/
        }
        else
        {
          v11 = *(this + 433); /*0x520d7e*/
          if ( v11 != 40 && v11 != 41 || !*(this + 165) || !*(this + 173) ) /*0x520d98*/
            goto LABEL_44; /*0x520d98*/
          if ( !*(this + 413) ) /*0x520da2*/
            WinAPI::Wrapper(-2147467261); /*0x520db1*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) ) /*0x520dbf*/
          {
            if ( *((_BYTE *)this + 1755) ) /*0x520dc6*/
              (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 41, 1, 0); /*0x520dda*/
            else
              (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 40, 1, 0); /*0x520df3*/
            *((_BYTE *)this + 1677) = 0; /*0x520de0*/
          }
          else
          {
LABEL_44:
            v12 = *(this + 433); /*0x520e02*/
            if ( v12 == 27 || v12 == 28 || v12 == 29 || v12 == 30 ) /*0x520e1a*/
            {
              (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 28, 1, 0); /*0x520e24*/
            }
            else if ( *((_BYTE *)this + 1755) ) /*0x520e26*/
            {
              (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 2, 1, 0); /*0x520e3a*/
            }
            else
            {
LABEL_51:
              (*(void (__thiscall **)(_DWORD *, _DWORD, int, _DWORD))(*this + 1368))(this, 0, 1, 0); /*0x520e42*/
            }
          }
        }
        break; /*0x520d6c*/
    }
  }
  if ( *(this + 433) == 33 && !*((_BYTE *)this + 141) ) /*0x520e5b*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int, _DWORD))(*this + 1368))(this, 0, 1, 0); /*0x520e6f*/
  v13 = 0; /*0x520e81*/
  v14 = *(_DWORD *)(*(this + 432) + 3644) + 36 * *(this + 433); /*0x520e8c*/
  result = *(_DWORD *)(v14 + 16); /*0x520e8f*/
  if ( result > 0 ) /*0x520e95*/
  {
    v16 = (int *)(v14 + 24); /*0x520e97*/
    do /*0x520ef2*/
    {
      if ( *((_BYTE *)this + 252) ) /*0x520e9a*/
      {
        v17 = *(_DWORD *)(v14 + 4); /*0x520eaa*/
        if ( v17 <= 1 ) /*0x520eac*/
          v17 = 1; /*0x520eae*/
        if ( *(this + 62) % v17 == *(v16 - 1) ) /*0x520ebf*/
        {
          v19[0] = *(this + 39); /*0x520ecb*/
          v19[1] = *(this + 40); /*0x520ed6*/
          v19[2] = *(this + 41); /*0x520edd*/
          StartAudioControllerAt(*v16, (int)v19, 0); /*0x520ee4*/
        }
      }
      result = *(_DWORD *)(v14 + 16); /*0x520ee9*/
      ++v13; /*0x520eec*/
      v16 += 2; /*0x520eed*/
    }
    while ( v13 < result ); /*0x520ef2*/
  }
  return result; /*0x520ef4*/
}
}
} // namespace gamemd

// 0x520F40
namespace gamemd {
char Mission::ProcessUnitMissionAI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ProcessUnitMissionAI(_DWORD *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edx
  char v11; // al
  int (__stdcall ***v12)(_DWORD, void *, int *); // eax
  int v13; // esi
  int v14; // eax
  int v15; // edi
  bool v16; // bl
  int v17; // eax
  int v19; // [esp+4Ch] [ebp-30h]
  int v20; // [esp+58h] [ebp-24h]
  __int16 v21; // [esp+5Ch] [ebp-20h] BYREF
  int v22; // [esp+60h] [ebp-1Ch] BYREF
  int v23; // [esp+64h] [ebp-18h] BYREF
  int v24; // [esp+68h] [ebp-14h] BYREF
  _BYTE v25[16]; // [esp+6Ch] [ebp-10h] BYREF

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 2 ) /*0x520f53*/
  {
    if ( !*(this + 413) ) /*0x520f55*/
      WinAPI::Wrapper(-2147467261); /*0x520f64*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) ) /*0x520f72*/
    {
      v2 = *(this + 361); /*0x520f79*/
      v3 = *this; /*0x520f7f*/
      if ( v2 ) /*0x520f86*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(v3 + 1152))(this, v2, 1); /*0x520f97*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1348))(this, 0, 1072693248); /*0x520fa9*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(v3 + 1156))(this, 0, 1); /*0x520f8c*/
      }
    }
  }
  v4 = *(this + 361); /*0x520faf*/
  if ( v4 ) /*0x520fb7*/
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD *))(*(_DWORD *)v4 + 76))(v4, v25, this); /*0x520fc5*/
    LOWORD(v22) = *v5 / 256; /*0x520fd8*/
    HIWORD(v22) = v5[1] / 256; /*0x520fec*/
    LOBYTE(v5) = *((_BYTE *)this + 1756); /*0x520ff1*/
    v23 = v22; /*0x520ffd*/
    if ( !(_BYTE)v5 /*0x521022*/
      || (v6 = *this,
          v7 = (*(int (__thiscall **)(_DWORD *, int, int, _DWORD, int))(*this + 452))(this, -1, -1, 0, 1),
          (*(int (__thiscall **)(_DWORD *, int))(v6 + 428))(this, v7) != 7) )
    {
      if ( !*(this + 413) ) /*0x521028*/
        WinAPI::Wrapper(-2147467261); /*0x521037*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) /*0x521050*/
        && !*((_BYTE *)this + 1048) )
      {
        if ( *(this + 361) ) /*0x52105e*/
        {
          if ( *((_BYTE *)this + 981) ) /*0x52106c*/
          {
            v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 76))(this); /*0x521086*/
            LOWORD(v20) = *v8 / 256; /*0x521099*/
            HIWORD(v20) = v8[1] / 256; /*0x5210af*/
            v9 = *this; /*0x5210b8*/
            v22 = v20; /*0x5210bb*/
            v19 = (*(int (__thiscall **)(_DWORD *))(v9 + 800))(this); /*0x5210c9*/
            v10 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v21) + 80) >> 8; /*0x5210de*/
            LOBYTE(v10) = v10 & 1; /*0x5210e1*/
            v11 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 188))(this, 0, v10, v19); /*0x5210e9*/
            if ( !MapSeed::CheckTileMatch( /*0x521133*/
                    &MEMORY[0x87F7E8],
                    (__int16 *)&v24,
                    (__int16 *)&v23,
                    *(_DWORD *)(*(this + 432) + 1460),
                    v11,
                    (char)v25,
                    0)
              && !*(_BYTE *)(*(this + 432) + 3774)
              && (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 7 )
            {
              (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x52113e*/
            }
          }
        }
      }
    }
  }
  if ( !*(this + 413) ) /*0x521144*/
    WinAPI::Wrapper(-2147467261); /*0x521153*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 168))(*(this + 413)) ) /*0x521161*/
  {
    if ( !*(_BYTE *)(*(this + 432) + 3476) ) /*0x521175*/
      goto LABEL_55; /*0x521175*/
    v12 = (int (__stdcall ***)(_DWORD, void *, int *))*(this + 413); /*0x521183*/
    v22 = 0; /*0x52118d*/
    if ( !v12 ) /*0x521195*/
      goto LABEL_33; /*0x521195*/
    v13 = (**v12)(v12, &unk_818858, &v24); /*0x5211a6*/
    if ( v13 >= 0 ) /*0x5211aa*/
    {
      v15 = v24; /*0x5211b9*/
      ComPtr::Release_Alt(&v22); /*0x5211c1*/
      v14 = v15; /*0x5211c6*/
    }
    else
    {
      ComPtr::Release_Alt(&v22); /*0x5211b0*/
      v14 = 0; /*0x5211b5*/
    }
    v22 = v14; /*0x5211ca*/
    if ( v13 < 0 && v13 != -2147467262 ) /*0x5211d6*/
      WinAPI::Wrapper(v13); /*0x5211d9*/
    if ( !v14 ) /*0x5211e4*/
LABEL_33:
      WinAPI::Wrapper(-2147467261); /*0x5211eb*/
    (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v14 + 12))(v14, v25); /*0x5211fc*/
    v16 = memcmp(v25, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x521215*/
    if ( v22 ) /*0x52121a*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x52121f*/
    if ( v16 ) /*0x521226*/
    {
      LOBYTE(v17) = *((_BYTE *)this + 1677); /*0x521228*/
      if ( !(_BYTE)v17 ) /*0x521230*/
      {
        if ( *((double *)this + 175) <= 0.8 ) /*0x521247*/
          LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 23, 0, 0); /*0x52126b*/
        else
          LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 24, 0, 0); /*0x521254*/
      }
    }
    else
    {
LABEL_55:
      if ( *((_BYTE *)this + 1755) ) /*0x521277*/
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 6, 0, 0); /*0x52128c*/
      else
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 3, 0, 0); /*0x5212a3*/
    }
  }
  else
  {
    v17 = *(this + 433); /*0x5212af*/
    switch ( v17 ) /*0x5212c2*/
    {
      case 3: /*0x5212c2*/
      case 24: /*0x5212c2*/
      case 23: /*0x5212c2*/
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*this + 1368))(this, 0, 0, 0); /*0x521307*/
        break;
      case 6: /*0x5212c2*/
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 2, 0, 0); /*0x5212d4*/
        break;
      case 17: /*0x5212c2*/
        LOBYTE(v17) = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 16, 0, 0); /*0x5212f0*/
        break;
    }
  }
  return v17; /*0x52125a*/
}
}
} // namespace gamemd

// 0x5BDA80
namespace gamemd {
int Mission::SetAndCall(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Mission::SetAndCall(int *this, IUnknown *aP1, IUnknown *aP2)
{
  int v3; // edx

  v3 = *this; /*0x5bda84*/
  this->q5564 = (int)aP1; /*0x5bda8d*/
  return (*(int (__stdcall **)(IUnknown *, IUnknown *))(v3 + 76))(aP1, aP2); /*0x5bda96*/
}
}
} // namespace gamemd

// 0x6ED7E0
namespace gamemd {
char Mission::AssignTeamMemberMissions(ScriptClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Mission::AssignTeamMemberMissions(int this, ScriptClass *aP1, int a3)
{
  ScriptClass *v3; // eax
  ScriptClass *v4; // ebx
  ObjectClass *i; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // ebp
  void *v14; // eax
  AbstractClass v16; // [esp+1Ch] [ebp-28h] BYREF
  ScriptClass *aP1a; // [esp+48h] [ebp+4h]

  LOBYTE(v3) = (_BYTE)aP1; /*0x6ed7e3*/
  v4 = *(ScriptClass **)&aP1->__pad_0[4]; /*0x6ed7e9*/
  for ( i = *(ObjectClass **)(this + 84); i; i = (ObjectClass *)i[8].spawnStatus )
  {
    LOBYTE(v3) = i->isAliveFlag; /*0x6ed801*/
    if ( (_BYTE)v3 )
    {
      if ( i->health && (*(_DWORD *)&HouseClass_Player.__pad_5568[21752] || !i->inLimbo) && !BYTE1(i[9].visibilityFlags) ) /*0x6ed831*/
      {
        v7 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), (IUnknown *)&v16.__pad_0[12]); /*0x6ed848*/
        if ( v7 == 54 || v7 == 53 ) /*0x6ed852*/
          v8 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5920); /*0x6ed867*/
        else
          v8 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5916); /*0x6ed85a*/
        if ( ObjectClass::DistanceTo(i, *(AbstractClass **)(this + 52)) <= v8 ) /*0x6ed87a*/
        {
          BYTE1(i[9].visibilityFlags) = 1; /*0x6ed8b2*/
        }
        else if ( !i[8].ambientSoundController[2] ) /*0x6ed87c*/
        {
          (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)i->__pad_0 + 488))(i, 2, 0); /*0x6ed88e*/
          (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)i->__pad_0 + 968))(i, 0); /*0x6ed89a*/
          (*(void (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)i->__pad_0 + 1152))( /*0x6ed8aa*/
            i,
            *(_DWORD *)(this + 52),
            1);
        }
      }
      LOBYTE(v3) = i->isAliveFlag; /*0x6ed8b9*/
      if ( (_BYTE)v3 )
      {
        v3 = (ScriptClass *)i->health; /*0x6ed8c7*/
        if ( v3 )
        {
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[21752]
            || (v3 = (ScriptClass *)(unsigned __int8)i->inLimbo, !(_BYTE)v3) )
          {
            if ( BYTE1(i[9].visibilityFlags)
              || (v3 = (ScriptClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)i->__pad_0 + 44))(i),
                  v3 == (ScriptClass *)2) )
            {
              v3 = *(ScriptClass **)&i[4].__pad_0[4]; /*0x6ed903*/
              if ( !v3 )
              {
                if ( i[8].ambientSoundController[2]
                  || ((v9 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), (IUnknown *)&v16.abstractFlags), v9 == 54)
                   || v9 == 53
                    ? (v10 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5920))
                    : (v10 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5916)),
                      ObjectClass::DistanceTo(i, *(AbstractClass **)(this + 52)) <= 2 * v10 || v4 == (ScriptClass *)11) )
                {
                  v3 = *(ScriptClass **)&i[4].__pad_0[4]; /*0x6eda11*/
                  if ( !v3 ) /*0x6eda19*/
                  {
                    v3 = (ScriptClass *)i[8].ambientSoundController[2]; /*0x6eda1b*/
                    if ( !v3 ) /*0x6eda23*/
                    {
                      v3 = (ScriptClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)i->__pad_0 + 388))(i); /*0x6eda29*/
                      if ( v3 != v4 ) /*0x6eda31*/
                      {
                        if ( v4 != (ScriptClass *)5 /*0x6eda45*/
                          || (v3 = (ScriptClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)i->__pad_0 + 388))(i),
                              v3 != (ScriptClass *)16) )
                        {
                          TechnoClass::SetFocus(i, 0); /*0x6eda4b*/
                          (*(void (__thiscall **)(ObjectClass *, ScriptClass *, _DWORD))(*(_DWORD *)i->__pad_0 + 488))( /*0x6eda57*/
                            i,
                            v4,
                            0);
                          (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)i->__pad_0 + 968))(i, 0); /*0x6eda63*/
                          LOBYTE(v3) = (*(int (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)i->__pad_0 + 1152))( /*0x6eda71*/
                                         i,
                                         0,
                                         1);
                        }
                      }
                    }
                  }
                }
                else
                {
                  (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)i->__pad_0 + 488))(i, 2, 0); /*0x6ed97a*/
                  (*(void (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)i->__pad_0 + 1152))( /*0x6ed98a*/
                    i,
                    *(_DWORD *)(this + 52),
                    1);
                  (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)i->__pad_0 + 488))(i, 2, 0); /*0x6ed998*/
                  v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 52) + 72))( /*0x6ed9a8*/
                                    *(_DWORD *)(this + 52),
                                    &v16.referenceCount);
                  LOWORD(aP1a) = *v11 / 256; /*0x6ed9bb*/
                  HIWORD(aP1a) = v11[1] / 256; /*0x6ed9d7*/
                  *(_DWORD *)v16.__pad_0 = aP1a; /*0x6ed9e4*/
                  v12 = globalHelper_0DA020(&v16.__pad_0[8], &v16); /*0x6ed9e8*/
                  v13 = *(_DWORD *)i->__pad_0; /*0x6ed9ef*/
                  *(_DWORD *)&v16.__pad_0[4] = *v12; /*0x6ed9fd*/
                  v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v16.__pad_0[4]); /*0x6eda01*/
                  LOBYTE(v3) = (*(int (__thiscall **)(ObjectClass *, void *, int))(v13 + 1152))(i, v14, 1); /*0x6eda09*/
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v3; /*0x6eda86*/
}
}
} // namespace gamemd

// 0x70F770
namespace gamemd {
int Mission::GetMissionDelay()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_70F770(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  _DWORD *v3; // esi
  int v4; // [esp+8h] [ebp-8h]

  v1 = this->q180; /*0x70f770*/
  result = this->q188; /*0x70f779*/
  v3 = this + 96; /*0x70f783*/
  if ( v1 != -1 ) /*0x70f789*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= result ) /*0x70f795*/
      return result; /*0x70f795*/
    result -= (int)MEMORY[0xA8ED84] - v1; /*0x70f797*/
  }
  if ( result > 10 ) /*0x70f79c*/
  {
    result = MEMORY[0xA8E7AC]; /*0x70f79e*/
    if ( !MEMORY[0xA8E7AC] ) /*0x70f7a5*/
    {
      result = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 4, 8); /*0x70f7b6*/
      *v3 = MEMORY[0xA8ED84]; /*0x70f7c1*/
      v3[1] = v4; /*0x70f7c7*/
      v3[2] = result; /*0x70f7ca*/
    }
  }
  return result; /*0x70f7cd*/
}
}
} // namespace gamemd
