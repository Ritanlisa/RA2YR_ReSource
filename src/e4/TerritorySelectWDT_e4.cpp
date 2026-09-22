// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7665D0_e4.hpp"
#include "e4/classes/E4Recv_76FEB0_e4.hpp"
#include "e4/classes/E4Recv_7714B0_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x7665D0
namespace gamemd {
wchar_t ** E4Recv_7665D0::sub_7665D0(wchar_t ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t **__thiscall sub_7665D0(char *this, wchar_t **a2)
{
  const wchar_t **v6; // eax
  const wchar_t **v9; // eax
  void *v13; // [esp+28h] [ebp-18h] BYREF
  void **v14; // [esp+2Ch] [ebp-14h] BYREF
  _DWORD *v15; // [esp+30h] [ebp-10h]
  void **v16; // [esp+34h] [ebp-Ch] BYREF
  int *v17; // [esp+38h] [ebp-8h]
  int v18; // [esp+3Ch] [ebp-4h]
  int v2 = 0; /*0x7665db*/
  E4Recv_7665D0 *v12 = this; /*0x7665e0*/
  if ( !dword_B72770 ) /*0x7665e4*/
    InitWDTGameOptions(); /*0x7665e6*/
  int v3 = 6; /*0x7665ef*/
  void *v11; // [esp+20h] [ebp-20h] BYREF
  unknown_libname_74(&v11); /*0x7665f4*/
  v17 = &dword_B72760; /*0x7665f9*/
  v18 = 0; /*0x766601*/
  v16 = &vt_VectorCursor_rc_ptr_WorldDominationTour_GameOption_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x766605*/
  do /*0x7666b0*/
  {
    if ( !((unsigned __int8 (__thiscall *)(void ***))v16[1])(&v16) ) /*0x76661a*/
      break; /*0x76661f*/
    int v4 = v17[1] + 8 * v18; /*0x766634*/
    ComPtr::Constructor(&v14); /*0x766637*/
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76663c*/
    ComPtr::Set(&v14, *(_DWORD *)(v4 + 4)); /*0x766648*/
    if ( (v2 & v15[2]) == 0 ) /*0x766654*/
    {
      char * v5 = v12 + 8; /*0x76665c*/
      if ( !(*(int (__thiscall **)(_DWORD *, char *))(*v15 + 12))(v15, v12 + 8) ) /*0x766660*/
      {
        v6 = (const wchar_t **)(*(int (__thiscall **)(_DWORD *, void **, char *, void **))(*v15 + 16))( /*0x766678*/
                                 v15,
                                 &v13,
                                 v5,
                                 &v11);
        WideString::Reassign_Alt(&v11, v6); /*0x766680*/
        DeleteAndZero::Alt(&v13); /*0x766689*/
        --v3; /*0x766692*/
        v2 |= v15[2]; /*0x766693*/
      }
    }
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76669a*/
    ComPtr::Release(&v14); /*0x76669e*/
    ((void (__thiscall *)(void ***))v16[2])(&v16); /*0x7666ab*/
  }
  while ( v3 ); /*0x7666b0*/
  v18 = 0; /*0x7666b8*/
  while ( v3 ) /*0x7666c0*/
  {
    if ( !((unsigned __int8 (__thiscall *)(void ***))v16[1])(&v16) ) /*0x7666ce*/
      break; /*0x7666d3*/
    int v7 = v17[1] + 8 * v18; /*0x7666e8*/
    ComPtr::Constructor(&v14); /*0x7666eb*/
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7666f0*/
    ComPtr::Set(&v14, *(_DWORD *)(v7 + 4)); /*0x7666fc*/
    if ( (v2 & v15[2]) == 0 ) /*0x766708*/
    {
      char * v8 = v12 + 8; /*0x766710*/
      if ( (*(int (__thiscall **)(_DWORD *, char *))(*v15 + 12))(v15, v12 + 8) != 2 ) /*0x76671a*/
      {
        v9 = (const wchar_t **)(*(int (__thiscall **)(_DWORD *, void **, char *, void **))(*v15 + 16))( /*0x76672d*/
                                 v15,
                                 &v13,
                                 v8,
                                 &v11);
        WideString::Reassign_Alt(&v11, v9); /*0x766735*/
        DeleteAndZero::Alt(&v13); /*0x76673e*/
        --v3; /*0x766747*/
        v2 |= v15[2]; /*0x766748*/
      }
    }
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76674f*/
    ComPtr::Release(&v14); /*0x766753*/
    ((void (__thiscall *)(void ***))v16[2])(&v16); /*0x766760*/
  }
  WideString::AssignFromPtr(a2, (const wchar_t **)&v11); /*0x766776*/
  v16 = &vt_VectorCursor_rc_ptr_WorldDominationTour_GameOption_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x76677f*/
  DeleteAndZero::Alt(&v11); /*0x766787*/
  return a2; /*0x76678e*/
}
}
} // namespace gamemd

// 0x7714B0
namespace gamemd {
void E4Recv_7714B0::sub_7714B0(int a2, char a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7714B0(_DWORD *this, int a2, char a3, int a4)
{

  int v5 = *(this + 244); /*0x7714c4*/
  int v6 = v5 - 1; /*0x7714c6*/
  if ( v5 > *(this + 239) ) /*0x7714c9*/
  {
  int v10; // edx
    do /*0x77150b*/
    {
      int v7 = *(this + 244); /*0x7714cb*/
      if ( v6 < v7 ) /*0x7714d3*/
      {
        int v8 = v7 - 1; /*0x7714d5*/
        int v9 = v6; /*0x7714d6*/
        for ( *(this + 244) = v8; v9 < *(this + 244); ++v9 ) /*0x7714e0*/
          String::Reassign((char **)(*(this + 241) + 4 * v9), (const char **)(*(this + 241) + 4 * v9 + 4)); /*0x7714f0*/
      }
      v10 = v6--; /*0x771506*/
    }
    while ( v10 > *(this + 239) ); /*0x77150b*/
  }
  if ( !*(this + 239) ) /*0x77150d*/
    *((_BYTE *)this + 952) = 1; /*0x771517*/
  void *v17[4]; // [esp+Ch] [ebp-10h] BYREF
  unknown_libname_73(v17); /*0x771522*/
  int v11 = *this; /*0x77152b*/
  DeleteAndZero::Alt2(v17); /*0x77153b*/
  int v12 = *(this + 6 * a2 + 227); /*0x771540*/
  if ( v12 > 0 )
  {
    int v13 = v12 == 1 ? 0 : Random::Range(Randomizer_Global, 0, v12 - 1);
    if ( Map_Remove_770CE0(v11, *(_DWORD *)(*(this + 6 * a2 + 224) + 4 * v13), (char **)v17) ) /*0x77156f*/
    {
      if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77157c*/
      {
        *(this + 235) = Timer::GetTicks(); /*0x771598*/
        *(this + 236) = v17[2]; /*0x7715a2*/
        *(this + 237) = a4; /*0x7715a5*/
      }
      int v14 = *(this + 242); /*0x7715a8*/
      if ( *(this + 244) < v14 /*0x7715d9*/
        || ((unsigned char)this->M973 || !v14)
  int v15; // eax
        && (v15 = *(this + 245), v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*(this + 240) + 8))(this + 240, v14 + v15, 0) )
      {
        int v16 = *(this + 244); /*0x7715e0*/
        *(this + 244) = v16 + 1; /*0x7715eb*/
        String::Reassign((char **)(*(this + 241) + 4 * v16), (const char **)v17); /*0x7715f4*/
      }
      if ( a3 ) /*0x7715ff*/
        ++*(this + 239); /*0x771601*/
    }
  }
  DeleteAndZero(v17); /*0x77160b*/
}
}
} // namespace gamemd
