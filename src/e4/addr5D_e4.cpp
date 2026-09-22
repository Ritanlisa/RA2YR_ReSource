// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5D0190_e4.hpp"
#include "e4/classes/E4Recv_5D0240_e4.hpp"
#include "e4/classes/E4Recv_5D25D0_e4.hpp"
#include "e4/classes/E4Recv_5D2650_e4.hpp"
#include "e4/classes/E4Recv_5D30C0_e4.hpp"
#include "e4/classes/E4Recv_5D4430_e4.hpp"
#include "e4/classes/E4Recv_5D4F20_e4.hpp"
#include "e4/classes/E4Recv_5D6D80_e4.hpp"
#include "e4/classes/E4Recv_5D7580_e4.hpp"
#include "e4/classes/E4Recv_5D7CD0_e4.hpp"
#include "e4/classes/E4Recv_5D7FF0_e4.hpp"
#include "e4/classes/E4Recv_5D8010_e4.hpp"
#include "e4/classes/E4Recv_5D8FB0_e4.hpp"
#include "e4/classes/E4Recv_5D8FC0_e4.hpp"
#include "e4/classes/E4Recv_5D9060_e4.hpp"
#include "e4/classes/E4Recv_5DAB80_e4.hpp"

// 0x5D0190
namespace gamemd {
int E4Recv_5D0190::sub_5D0190(const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5D0190(_DWORD *this, const char *a2)
{
  int v3; // esi
  int v5; // esi
  void *v6; // [esp+8h] [ebp-4h] BYREF

  String::Assign((char **)&v6, a2); /*0x5d019e*/
  String::ToLower((const char **)&v6); /*0x5d01a7*/
  v3 = 0; /*0x5d01af*/
  if ( (int)*(this + 25) <= 0 ) /*0x5d01b3*/
  {
LABEL_6:
    DeleteAndZero(&v6); /*0x5d0202*/
    return 0; /*0x5d0210*/
  }
  while ( !String::NotEquals(*(const char ***)(*(this + 22) + 4 * v3), 0) ) /*0x5d01c4*/
  {
LABEL_5:
    if ( ++v3 >= *(this + 25) ) /*0x5d0200*/
      goto LABEL_6; /*0x5d0200*/
  }
  String::AssignFromPtr((char **)&a2, *(const char ***)(*(this + 22) + 4 * v3)); /*0x5d01d1*/
  String::ToLower(&a2); /*0x5d01da*/
  if ( !String::Compare((const char **)&v6, &a2) ) /*0x5d01e8*/
  {
    DeleteAndZero((void **)&a2); /*0x5d01f5*/
    goto LABEL_5; /*0x5d01f5*/
  }
  v5 = *(_DWORD *)(*(this + 22) + 4 * v3); /*0x5d021a*/
  DeleteAndZero((void **)&a2); /*0x5d021d*/
  DeleteAndZero(&v6); /*0x5d0226*/
  return v5; /*0x5d020b*/
}
}
} // namespace gamemd

// 0x5D0240
namespace gamemd {
char ** E4Recv_5D0240::sub_5D0240(char ** a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char **__thiscall sub_5D0240(int *this, char **a2, char a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // ecx

  v3 = *(this + 25); /*0x5d0242*/
  v4 = 0; /*0x5d0245*/
  if ( v3 <= 0 ) /*0x5d024a*/
  {
LABEL_5:
    String::Assign(a2, 0); /*0x5d0264*/
    return a2; /*0x5d0271*/
  }
  else
  {
    v5 = *(this + 22); /*0x5d024c*/
    v6 = v5; /*0x5d0253*/
    while ( a3 != *(_BYTE *)(*(_DWORD *)v6 + 4) ) /*0x5d025a*/
    {
      ++v4; /*0x5d025c*/
      v6 += 4; /*0x5d025d*/
      if ( v4 >= v3 ) /*0x5d0262*/
        goto LABEL_5; /*0x5d0262*/
    }
    String::AssignFromPtr(a2, *(const char ***)(v5 + 4 * v4)); /*0x5d0283*/
    return a2; /*0x5d0288*/
  }
}
}
} // namespace gamemd

// 0x5D0580
namespace gamemd {
int j_DeleteAndZero()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
void __thiscall j_DeleteAndZero(void **this)
{
  DeleteAndZero(this); /*0x5d0580*/
}
}
} // namespace gamemd

// 0x5D2350
namespace gamemd {
int sub_5D2350(int a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_5D2350(int a1, int *a2)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  _DWORD v5[4]; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  result = a2[2]; /*0x5d2359*/
  if ( result > 0 ) /*0x5d235e*/
  {
    result = a2[3]; /*0x5d2364*/
    if ( result > 0 ) /*0x5d2369*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5d237b*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5d238c*/
      if ( g_WWMouseClass_Instance ) /*0x5d239e*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 60))(g_WWMouseClass_Instance, a1, 0); /*0x5d23a5*/
      v3 = *a2; /*0x5d23af*/
      v4 = a2[1]; /*0x5d23b3*/
      v5[2] = a2[2]; /*0x5d23b9*/
      v5[3] = a2[3]; /*0x5d23c6*/
      v5[1] = Rect.top + v4; /*0x5d23ce*/
      v5[0] = Rect.left + v3; /*0x5d23de*/
      result = (*(int (__thiscall **)(int, _DWORD *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x5d23e5*/
                 g_DSurface_Primary,
                 v5,
                 a1,
                 a2,
                 0,
                 1);
      if ( g_WWMouseClass_Instance ) /*0x5d23f1*/
        return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))(g_WWMouseClass_Instance, a1, 0); /*0x5d23f8*/
    }
  }
  return result; /*0x5d23fb*/
}
}
} // namespace gamemd

// 0x5D25D0
namespace gamemd {
char E4Recv_5D25D0::sub_5D25D0(char * Source, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5D25D0(int this, char *Source, int a3)
{
  char **v4; // eax
  char **v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx

  if ( !Source || !a3 ) /*0x5d25e3*/
    return 0; /*0x5d25e3*/
  v4 = (char **)__2_YAPAXI_Z(0xCu); /*0x5d25e7*/
  v5 = v4 ? Audio::SetSoundFileName(v4, Source, a3) : 0;
  v6 = this->M56; /*0x5d2602*/
  if ( this->M64 >= v6 ) /*0x5d260d*/
  {
    if ( !(unsigned char)this->M61 && v6 ) /*0x5d2618*/
      return 0; /*0x5d2618*/
    v7 = this->M68; /*0x5d261a*/
    if ( v7 <= 0 /*0x5d262a*/
      || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->M48 + 8))(this + 48, v6 + v7, 0) )
    {
      return 0; /*0x5d264a*/
    }
  }
  v8 = this->M64; /*0x5d2631*/
  v9 = this->M52; /*0x5d2634*/
  this->M64 = v8 + 1; /*0x5d263a*/
  *(_DWORD *)(v9 + 4 * v8) = v5; /*0x5d263d*/
  return 1; /*0x5d2640*/
}
}
} // namespace gamemd

// 0x5D2650
namespace gamemd {
void E4Recv_5D2650::sub_5D2650(void * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5D2650(_DWORD *this, void *a2, int a3)
{
  int v4; // esi
  int v5; // eax

  if ( a2 ) /*0x5d265c*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x5d265e*/
    {
      v4 = 0; /*0x5d266a*/
      if ( (int)*(this + 16) > 0 ) /*0x5d266e*/
      {
        while ( _strcmpi(a2, **(const void ***)(*(this + 13) + 4 * v4)) ) /*0x5d2684*/
        {
          if ( ++v4 >= *(this + 16) ) /*0x5d268c*/
            return; /*0x5d268c*/
        }
        v5 = Math::RoundToInt((double)a3 * MEMORY[0xA8EB98]); /*0x5d269f*/
        nullsub_192(v5); /*0x5d26a7*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x5D4510
namespace gamemd {
int ProcessEditControlKey(CellStruct * aP0, int edx0, int * a2, unsigned short a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ProcessEditControlKey(CellStruct *aP0, int edx0, int *a2, unsigned __int16 a4)
{
  int v4; // edi
  CellStruct *v5; // esi
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  int v9; // edi
  int *v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  void (__thiscall ***v22)(_DWORD, int); // ecx
  int v23; // edi
  int *v24; // eax
  int v25; // edx
  AbstractClass *v26; // ecx
  int v27; // edx
  int v28; // eax
  AbstractClass *v29; // eax
  void (__thiscall ***v30)(_DWORD, int); // ecx
  int v31; // edi
  int *v32; // eax
  int v33; // edx
  int v34; // eax
  void (__thiscall ***v35)(_DWORD, int); // ecx
  int v36; // edi
  int *v37; // eax
  int v38; // edx
  AbstractClass *v39; // eax
  int v40; // eax

  v4 = 0; /*0x5d451a*/
  v5 = aP0; /*0x5d451f*/
  if ( !a4 ) /*0x5d4521*/
  {
    aP0 = (CellStruct *)*a2; /*0x5d452b*/
    if ( !*a2 ) /*0x5d452b*/
      return 0; /*0x5d4537*/
    v7 = *a2; /*0x5d453a*/
    BYTE1(v7) = BYTE1(aP0) & 0xF7; /*0x5d453c*/
    if ( v7 == 1 || v7 == 2 ) /*0x5d4547*/
    {
      if ( ((unsigned __int8)aP0 & 2) != 0 && v5->__pad_8[17] ) /*0x5d4552*/
      {
        DisableIME(); /*0x5d455d*/
        if ( v5->__pad_8[17] ) /*0x5d4562*/
        {
          v8 = *(void (__thiscall ****)(_DWORD, int))&v5->__pad_8[28]; /*0x5d4569*/
          v5->__pad_8[17] = 0; /*0x5d456c*/
          if ( v8 ) /*0x5d4572*/
            (**v8)(v8, 1); /*0x5d4578*/
          nullsub_48(); /*0x5d457a*/
          if ( v5->__pad_8[18] ) /*0x5d457f*/
          {
            if ( v5->__pad_8[17] ) /*0x5d4586*/
              v9 = *(_DWORD *)v5->__pad_8 + *(_DWORD *)&v5->__pad_8[12]; /*0x5d4593*/
            else
              v9 = *(_DWORD *)v5->__pad_8; /*0x5d4597*/
            v10 = (int *)v5->field_0; /*0x5d459a*/
            if ( v5->field_0 ) /*0x5d459a*/
            {
              do /*0x5d45b1*/
              {
                v11 = *v10; /*0x5d45a0*/
                v10[4] = v9; /*0x5d45a4*/
                v10 = (int *)(*(int (__thiscall **)(int *))(v11 + 4))(v10); /*0x5d45a7*/
                v9 += *(_DWORD *)&v5->__pad_8[12]; /*0x5d45ad*/
              }
              while ( v10 ); /*0x5d45b1*/
            }
            ++*(_DWORD *)&v5->__pad_8[4]; /*0x5d45b3*/
          }
        }
        return 2; /*0x5d45bf*/
      }
      return 0; /*0x5d4643*/
    }
  }
  if ( !v5->__pad_8[17] ) /*0x5d45c7*/
    return v4; /*0x5d4990*/
  if ( a4 ) /*0x5d45d0*/
  {
    v12 = a4; /*0x5d4646*/
  }
  else
  {
    LOWORD(aP0) = *(_WORD *)a2; /*0x5d45d6*/
    v12 = (unsigned __int8)Event_Process(*(_BYTE **)&stru_87C374.__pad_14B0[8012], (CCINIClass *)aP0); /*0x5d45eb*/
    v13 = *a2; /*0x5d45f1*/
    if ( (*a2 & 0x1000) != 0 && v12 >= 48 && v12 <= 57 ) /*0x5d4605*/
    {
      BYTE1(v13) &= ~0x10u; /*0x5d4609*/
      *a2 = v13; /*0x5d460c*/
    }
    else if ( (*a2 & 0x1000) != 0 || (v13 & 0x8000) != 0 || v12 < 32 ) /*0x5d461c*/
    {
      v14 = (unsigned __int8)*a2; /*0x5d461e*/
      if ( v14 != 13 && v14 != 8 && v14 != 27 && (_BYTE)v12 != 8 ) /*0x5d4635*/
      {
        *a2 = 0; /*0x5d463b*/
        return 0; /*0x5d463b*/
      }
    }
  }
  if ( v12 == 8 ) /*0x5d464f*/
  {
    if ( *a2 != 8 ) /*0x5d495d*/
    {
      v39 = (AbstractClass *)v5->field_2B0; /*0x5d495f*/
      if ( (int)v39 > v5->field_2B4 ) /*0x5d496d*/
      {
        v40 = (int)&v39[-1].NeedsSaveOrLink + 3; /*0x5d496f*/
        v4 = 2; /*0x5d4970*/
        v5->field_2B0 = v40; /*0x5d4975*/
        *(_WORD *)&v5->__pad_8[2 * v40 + 32] = 0; /*0x5d497b*/
      }
    }
    *a2 = 0; /*0x5d4984*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&v5->__pad_8[28] + 80))(*(_DWORD *)&v5->__pad_8[28]); /*0x5d498d*/
    return v4; /*0x5d498d*/
  }
  if ( v12 != 13 ) /*0x5d4658*/
  {
    if ( v12 != 27 ) /*0x5d4661*/
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&v5->__pad_8[28] + 80))(*(_DWORD *)&v5->__pad_8[28]); /*0x5d466c*/
      if ( v12 > 31 ) /*0x5d4672*/
      {
        if ( *(_WORD *)&v5->__pad_8[2 * v5->field_2B0 + 32] ) /*0x5d468a*/
        {
          v15 = v5->field_2B4; /*0x5d4694*/
          v16 = *(_DWORD *)&v5->__pad_8[8] - 1; /*0x5d469a*/
          do /*0x5d46b2*/
          {
            if ( v5->field_2B0 - v15 >= v16 ) /*0x5d46a9*/
              break; /*0x5d46a9*/
            v17 = v5->field_2B0 + 1; /*0x5d46ab*/
            v5->field_2B0 = v17; /*0x5d46ac*/
          }
          while ( *(_WORD *)&v5->__pad_8[2 * v17 + 32] ); /*0x5d46b2*/
        }
        if ( v5->field_2B0 - v5->field_2B4 >= *(_DWORD *)&v5->__pad_8[8] - 1 ) /*0x5d46cf*/
          goto LABEL_46; /*0x5d46cf*/
        *(_WORD *)&v5->__pad_8[2 * v5->field_2B0 + 32] = v12; /*0x5d46d1*/
        v18 = v5->field_2B0 + 1; /*0x5d46dc*/
        v4 = 1; /*0x5d46dd*/
        v5->field_2B0 = v18; /*0x5d46e4*/
        *(_WORD *)&v5->__pad_8[2 * v18 + 32] = 0; /*0x5d46ea*/
        TextRenderer::GetInstance(); /*0x5d46f5*/
        if ( Text::MeasureWidth((CampaignScore *)&v5->field_28, 0) >= v5->field_2C4 - 10 ) /*0x5d4711*/
        {
          v19 = v5->field_2B0 - 1; /*0x5d4719*/
          v5->field_2B0 = v19; /*0x5d471a*/
          *(_WORD *)&v5->__pad_8[2 * v19 + 32] = 0; /*0x5d4720*/
LABEL_46:
          if ( v5->__pad_8[16] ) /*0x5d4725*/
          {
            v20 = v5->field_2B0 /*0x5d475f*/
                - WideString::WordWrap(
                    (wchar_t *)&v5->field_16C,
                    (CampaignScore *)&v5->__pad_8[2 * v5->field_2B4 + 32],
                    *(_DWORD *)v5->__pad_2BC,
                    *(CampaignScore **)&v5->__pad_2BC[4],
                    1);
            v5->field_2B0 = v20; /*0x5d4768*/
            *(_WORD *)&v5->__pad_8[2 * v20 + 32] = v12; /*0x5d476e*/
            v21 = v5->field_2B0 + 1; /*0x5d4779*/
            v5->field_2B0 = v21; /*0x5d477a*/
            *(_WORD *)&v5->__pad_8[2 * v21 + 32] = 0; /*0x5d4780*/
            *a2 = 0; /*0x5d4788*/
            return 4; /*0x5d478d*/
          }
          v4 = 0; /*0x5d4790*/
        }
      }
      *a2 = 0; /*0x5d4792*/
      return v4; /*0x5d479e*/
    }
    DisableIME(); /*0x5d47a1*/
    if ( !v5->__pad_8[17] ) /*0x5d47a6*/
      goto LABEL_77; /*0x5d47a6*/
    v22 = *(void (__thiscall ****)(_DWORD, int))&v5->__pad_8[28]; /*0x5d47b1*/
    v5->__pad_8[17] = 0; /*0x5d47b4*/
    if ( v22 ) /*0x5d47ba*/
      (**v22)(v22, 1); /*0x5d47c0*/
    nullsub_48(); /*0x5d47c2*/
    if ( !v5->__pad_8[18] ) /*0x5d47c7*/
    {
LABEL_77:
      *a2 = 0; /*0x5d48b0*/
      return 2; /*0x5d48c1*/
    }
    if ( v5->__pad_8[17] ) /*0x5d47d2*/
      v23 = *(_DWORD *)v5->__pad_8 + *(_DWORD *)&v5->__pad_8[12]; /*0x5d47df*/
    else
      v23 = *(_DWORD *)v5->__pad_8; /*0x5d47e3*/
    v24 = (int *)v5->field_0; /*0x5d47e6*/
    if ( v5->field_0 ) /*0x5d47e6*/
    {
      do /*0x5d4801*/
      {
        v25 = *v24; /*0x5d47f0*/
        v24[4] = v23; /*0x5d47f4*/
        v24 = (int *)(*(int (__thiscall **)(int *))(v25 + 4))(v24); /*0x5d47f7*/
        v23 += *(_DWORD *)&v5->__pad_8[12]; /*0x5d47fd*/
      }
      while ( v24 ); /*0x5d4801*/
    }
LABEL_76:
    ++*(_DWORD *)&v5->__pad_8[4]; /*0x5d48ad*/
    goto LABEL_77; /*0x5d48ad*/
  }
  v26 = (AbstractClass *)v5->field_2B4; /*0x5d4808*/
  if ( v5->field_2B0 < (int)v26 ) /*0x5d4816*/
    v5->field_2B0 = (int)v26; /*0x5d4818*/
  if ( *(_WORD *)&v5->__pad_8[2 * v5->field_2B0 + 32] ) /*0x5d4824*/
  {
    v27 = *(_DWORD *)&v5->__pad_8[8] - 1; /*0x5d482e*/
    do /*0x5d4846*/
    {
      if ( v5->field_2B0 - (int)v26 >= v27 ) /*0x5d483d*/
        break; /*0x5d483d*/
      v28 = v5->field_2B0 + 1; /*0x5d483f*/
      v5->field_2B0 = v28; /*0x5d4840*/
    }
    while ( *(_WORD *)&v5->__pad_8[2 * v28 + 32] ); /*0x5d4846*/
  }
  v29 = (AbstractClass *)v5->field_2B0; /*0x5d484d*/
  if ( v29 == v26 ) /*0x5d4855*/
  {
    DisableIME(); /*0x5d4857*/
    if ( !v5->__pad_8[17] ) /*0x5d485c*/
      goto LABEL_77; /*0x5d485c*/
    v30 = *(void (__thiscall ****)(_DWORD, int))&v5->__pad_8[28]; /*0x5d4863*/
    v5->__pad_8[17] = 0; /*0x5d4866*/
    if ( v30 ) /*0x5d486c*/
      (**v30)(v30, 1); /*0x5d4872*/
    nullsub_48(); /*0x5d4874*/
    if ( !v5->__pad_8[18] ) /*0x5d4879*/
      goto LABEL_77; /*0x5d487e*/
    if ( v5->__pad_8[17] ) /*0x5d4880*/
      v31 = *(_DWORD *)v5->__pad_8 + *(_DWORD *)&v5->__pad_8[12]; /*0x5d488d*/
    else
      v31 = *(_DWORD *)v5->__pad_8; /*0x5d4891*/
    v32 = (int *)v5->field_0; /*0x5d4894*/
    if ( v5->field_0 ) /*0x5d4894*/
    {
      do /*0x5d48ab*/
      {
        v33 = *v32; /*0x5d489a*/
        v32[4] = v31; /*0x5d489e*/
        v32 = (int *)(*(int (__thiscall **)(int *))(v33 + 4))(v32); /*0x5d48a1*/
        v31 += *(_DWORD *)&v5->__pad_8[12]; /*0x5d48a7*/
      }
      while ( v32 ); /*0x5d48ab*/
    }
    goto LABEL_76; /*0x5d48ab*/
  }
  if ( (char *)v29 - (char *)v26 < *(_DWORD *)&v5->__pad_8[8] - 1 ) /*0x5d48ce*/
  {
    *(_WORD *)&v5->__pad_8[2 * (_DWORD)v29 + 32] = 32; /*0x5d48d0*/
    v34 = v5->field_2B0 + 1; /*0x5d48dd*/
    v5->field_2B0 = v34; /*0x5d48de*/
    *(_WORD *)&v5->__pad_8[2 * v34 + 32] = 0; /*0x5d48e4*/
  }
  DisableIME(); /*0x5d48e9*/
  if ( v5->__pad_8[17] ) /*0x5d48ee*/
  {
    v35 = *(void (__thiscall ****)(_DWORD, int))&v5->__pad_8[28]; /*0x5d48f5*/
    v5->__pad_8[17] = 0; /*0x5d48f8*/
    if ( v35 ) /*0x5d48fe*/
      (**v35)(v35, 1); /*0x5d4904*/
    nullsub_48(); /*0x5d4906*/
    if ( v5->__pad_8[18] ) /*0x5d490b*/
    {
      if ( v5->__pad_8[17] ) /*0x5d4912*/
        v36 = *(_DWORD *)v5->__pad_8 + *(_DWORD *)&v5->__pad_8[12]; /*0x5d491f*/
      else
        v36 = *(_DWORD *)v5->__pad_8; /*0x5d4923*/
      v37 = (int *)v5->field_0; /*0x5d4926*/
      if ( v5->field_0 ) /*0x5d4926*/
      {
        do /*0x5d493d*/
        {
          v38 = *v37; /*0x5d492c*/
          v37[4] = v36; /*0x5d4930*/
          v37 = (int *)(*(int (__thiscall **)(int *))(v38 + 4))(v37); /*0x5d4933*/
          v36 += *(_DWORD *)&v5->__pad_8[12]; /*0x5d4939*/
        }
        while ( v37 ); /*0x5d493d*/
      }
      ++*(_DWORD *)&v5->__pad_8[4]; /*0x5d493f*/
    }
  }
  *a2 = 0; /*0x5d494b*/
  return 3; /*0x5d4531*/
}
}
} // namespace gamemd

// 0x5D4D50
namespace gamemd {
HWND Dialog_MessageLoop()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND Dialog_MessageLoop()
{
  HWND result; // eax
  int v1; // esi
  int v2; // esi
  struct tagMSG Msg; // [esp+10h] [ebp-1Ch] BYREF

  result = g_hWnd; /*0x5d4d50*/
  if ( g_hWnd ) /*0x5d4d5e*/
  {
    ++unk_AA0430; /*0x5d4d77*/
    for ( result = (HWND)GameLoopMessagePump(&Msg, 0, 0, 0, 0); result; result = (HWND)GameLoopMessagePump( /*0x5d4d84*/
                                                                                         &Msg,
                                                                                         0,
                                                                                         0,
                                                                                         0,
                                                                                         0) )
    {
      result = (HWND)IsMessageDialog(&Msg, 0, 0); /*0x5d4da6*/
      if ( !result ) /*0x5d4dad*/
        break; /*0x5d4dad*/
      Dialog::MapDialogResource(&Msg); /*0x5d4db7*/
      if ( g_TacticalRender ) /*0x5d4dc4*/
        HandleToolTipMessage(&Msg); /*0x5d4dcb*/
      v1 = 0; /*0x5d4dd5*/
      if ( MEMORY[0xABFCA0] <= 0 ) /*0x5d4dd9*/
      {
LABEL_9:
        v2 = 0; /*0x5d4dff*/
        if ( MEMORY[0xABFCC8] <= 0 ) /*0x5d4e03*/
        {
LABEL_12:
          if ( !MEMORY[0xABFD34] || !(unsigned __int8)MEMORY[0xABFD34](&Msg) ) /*0x5d4e35*/
          {
            TranslateMessage(&Msg); /*0x5d4e40*/
            DispatchMessageA(&Msg); /*0x5d4e47*/
          }
        }
        else
        {
          while ( !TranslateAcceleratorA( /*0x5d4e1c*/
                     *((HWND *)MEMORY[0xABFCBC] + 2 * v2 + 1),
                     *((HACCEL *)MEMORY[0xABFCBC] + 2 * v2),
                     &Msg) )
          {
            if ( ++v2 >= MEMORY[0xABFCC8] ) /*0x5d4e26*/
              goto LABEL_12; /*0x5d4e26*/
          }
        }
      }
      else
      {
        while ( !IsDialogMessageA(*((HWND *)MEMORY[0xABFC94] + v1), &Msg) ) /*0x5d4dee*/
        {
          if ( ++v1 >= MEMORY[0xABFCA0] ) /*0x5d4df8*/
            goto LABEL_9; /*0x5d4df8*/
        }
      }
    }
  }
  return result; /*0x5d4e66*/
}
}
} // namespace gamemd

// 0x5D4F20
namespace gamemd {
int E4Recv_5D4F20::sub_5D4F20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5D4F20(const char *this)
{
  int v1; // edi

  v1 = 0; /*0x5d4f29*/
  if ( MEMORY[0xABFCA0] <= 0 ) /*0x5d4f2f*/
    return 0; /*0x5d4f87*/
  while ( 1 ) /*0x5d4f47*/
  {
    GetWindowTextA(*((HWND *)MEMORY[0xABFC94] + v1), MEMORY[0xABFCD0], 99); /*0x5d4f47*/
    if ( !strcmp(MEMORY[0xABFCD0], this) ) /*0x5d4f56*/
      break; /*0x5d4f56*/
    if ( ++v1 >= MEMORY[0xABFCA0] ) /*0x5d4f85*/
      return 0; /*0x5d4f85*/
  }
  return *((_DWORD *)MEMORY[0xABFC94] + v1); /*0x5d4f87*/
}
}
} // namespace gamemd

// 0x5D6000
namespace gamemd {
char sub_5D6000(HWND hWnd, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5D6000(HWND hWnd, int a2)
{
  int v3; // esi
  char result; // al
  LPARAM v5; // esi
  wchar_t *v6; // eax
  LRESULT v7; // edi
  bool v8; // [esp+13h] [ebp-9h]
  int i; // [esp+14h] [ebp-8h]

  ListBox::Clear(hWnd); /*0x5d600d*/
  v8 = g_GameMode_Current[0] == 5; /*0x5d6020*/
  v3 = 0; /*0x5d6027*/
  for ( i = 0; ; v3 = i ) /*0x5d6029*/
  {
    result = MEMORY[0xABFD70]; /*0x5d602d*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d6034*/
    {
      MEMORY[0xABFD70] |= 1u; /*0x5d603d*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&MEMORY[0xABFDA0], 0, 0); /*0x5d6048*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d604d*/
      MEMORY[0xABFDB4] = 10; /*0x5d6057*/
      MEMORY[0xABFDB0] = 0; /*0x5d6066*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d606c*/
    }
    if ( v3 >= MEMORY[0xABFDB0] ) /*0x5d607a*/
      break; /*0x5d607a*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d6087*/
    {
      MEMORY[0xABFD70] |= 1u; /*0x5d6090*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&MEMORY[0xABFDA0], 0, 0); /*0x5d609b*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d60a0*/
      MEMORY[0xABFDB4] = 10; /*0x5d60aa*/
      MEMORY[0xABFDB0] = 0; /*0x5d60b9*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d60bf*/
    }
    v5 = *((_DWORD *)MEMORY[0xABFDA4] + v3); /*0x5d60cc*/
    if ( !v8 || (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)v5 + 64))(v5) ) /*0x5d60db*/
    {
      v6 = WideString::GetOrEmpty_Alt((wchar_t **)(v5 + 32)); /*0x5d60e5*/
      v7 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v6); /*0x5d60f7*/
      if ( *(_DWORD *)(v5 + 40) == a2 ) /*0x5d60ff*/
        SendMessageA(hWnd, 0x14Eu, v7, 0); /*0x5d610a*/
      SendMessageA(hWnd, 0x151u, v7, v5); /*0x5d6114*/
    }
    ++i; /*0x5d611d*/
  }
  return result; /*0x5d6128*/
}
}
} // namespace gamemd

// 0x5D7590
namespace gamemd {
int LoadMultiplayerModesList(AbstractClass * a1, int edx0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall LoadMultiplayerModesList(AbstractClass *a1, int edx0)
{
  AbstractClass *v2; // esi
  int v3; // eax
  int v4; // edi
  signed int String; // esi
  int v6; // esi
  char *v7; // eax
  wchar_t *StringCSF; // eax
  int v9; // esi
  char *v10; // eax
  wchar_t *v11; // eax
  ObjectClass *v12; // esi
  ObjectClass *v13; // esi
  char *v14; // eax
  int v15; // esi
  char v16; // al
  int v17; // esi
  ObjectClass *v19; // [esp+20h] [ebp-114h] BYREF
  ObjectClass aP3; // [esp+24h] [ebp-110h] BYREF
  _DWORD v21[5]; // [esp+120h] [ebp-14h] BYREF

  v2 = a1; /*0x5d7598*/
  aP3.customSound_controller[4] = edx0; /*0x5d759a*/
  aP3.customSound_controller[2] = (int)a1; /*0x5d75aa*/
  CCFileClass::Construct(&aP3.location[2], &stru_830620.__pad_3BC[60]); /*0x5d75ae*/
  if ( CCFileClass::Open(&aP3.location[2], 0) ) /*0x5d75bd*/
  {
    *(_DWORD *)&aP3.bombVisible = 0; /*0x5d75ce*/
    aP3.health = 0; /*0x5d75d2*/
    GenericList::Constructor(&aP3.estimatedHealth); /*0x5d75d6*/
    aP3.estimatedHealth = (int)&vt_List_INIClass_INISection; /*0x5d75e8*/
    memset(&aP3.onBridge, 0, 13); /*0x5d75f3*/
    aP3.location[0] = 0; /*0x5d760f*/
    aP3.location[1] = 0; /*0x5d7616*/
    aP3.customSound = (int)&vt_INIClass; /*0x5d761d*/
    if ( FileStraw::Open(&aP3.customSound, (int)&aP3.location[2], 0) > 0 ) /*0x5d762c*/
    {
      aP3.customSound_controller[3] = INIClass::FindKey((char *)&aP3.customSound, v2); /*0x5d763e*/
      aP3.objectTypeFlags = 0; /*0x5d7642*/
      if ( aP3.customSound_controller[3] > 0 ) /*0x5d7646*/
      {
        while ( 1 ) /*0x5d766b*/
        {
          INIClass::GetStringByIndexEx( /*0x5d766b*/
            &aP3.customSound,
            (ObjectClass *)&aP3.__pad_0[12],
            (ObjectClass *)v2,
            (ObjectClass *)aP3.objectTypeFlags);
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP3.__pad_0[12]); /*0x5d7674*/
          v4 = v3; /*0x5d767d*/
          unknown_libname_73(&v19); /*0x5d767f*/
          String::Assign((char **)&aP3.attachedTag, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x5d768d*/
          String = INIClass::ReadString( /*0x5d76b2*/
                     (ObjectClass *)&aP3.customSound,
                     (ObjectClass *)v2,
                     (ObjectClass *)&aP3.__pad_0[12],
                     (ReferenceCounted *)&aP3.attachedTag,
                     (int)&v19);
          DeleteAndZero(&aP3.attachedTag); /*0x5d76b4*/
          if ( String <= 0 ) /*0x5d76bb*/
            goto LABEL_49; /*0x5d76bb*/
          unknown_libname_73(&aP3); /*0x5d76c5*/
          v6 = String::Tokenize((const char **)&v19, 0, &MEMORY[0x817F70], &aP3); /*0x5d76e2*/
          if ( String::Length((const char **)&aP3) ) /*0x5d76e4*/
            break; /*0x5d76e4*/
LABEL_48:
          DeleteAndZero((void **)&aP3); /*0x5d7c50*/
LABEL_49:
          DeleteAndZero((void **)&v19); /*0x5d7c59*/
          DeleteAndZero((void **)&aP3.__pad_0[12]); /*0x5d7c66*/
          if ( ++aP3.objectTypeFlags >= aP3.customSound_controller[3] ) /*0x5d7c7a*/
            goto LABEL_50; /*0x5d7c7a*/
          v2 = (AbstractClass *)aP3.customSound_controller[2]; /*0x5d7655*/
        }
        String::Assign((char **)aP3.customSound_controller, &stru_830620.__pad_3BC[56]); /*0x5d76fa*/
        String::TrimLeft((const char **)&aP3, (ObjectClass *)aP3.customSound_controller); /*0x5d7708*/
        DeleteAndZero((void **)aP3.customSound_controller); /*0x5d7711*/
        String::Assign((char **)&aP3.owningHouseIndex, &stru_830620.__pad_3BC[56]); /*0x5d771f*/
        String::TrimRight((const char **)&aP3, (ObjectClass *)&aP3.owningHouseIndex); /*0x5d772d*/
        DeleteAndZero((void **)&aP3.owningHouseIndex); /*0x5d7736*/
        v7 = String::GetOrEmpty((char **)&aP3); /*0x5d7749*/
        StringCSF = GetStringCSF((wchar_t *)v7, 0, &stru_830620.__pad_3BC[24], 1030); /*0x5d7752*/
        WideString::Assign((wchar_t **)&aP3.nextArrayIndex, (CampaignScore *)StringCSF); /*0x5d775c*/
        unknown_libname_73(&aP3.__pad_0[8]); /*0x5d7765*/
        v9 = String::Tokenize((const char **)&v19, v6, &MEMORY[0x817F70], (ObjectClass *)&aP3.__pad_0[8]); /*0x5d7782*/
        if ( !String::Length((const char **)&aP3.__pad_0[8]) ) /*0x5d778b*/
        {
LABEL_47:
          DeleteAndZero((void **)&aP3.__pad_0[8]); /*0x5d7c3e*/
          DeleteAndZero::Alt((void **)&aP3.nextArrayIndex); /*0x5d7c4b*/
          goto LABEL_48; /*0x5d7c4b*/
        }
        String::Assign((char **)&aP3.ambientSoundController[3], &stru_830620.__pad_3BC[56]); /*0x5d779a*/
        String::TrimLeft((const char **)&aP3.__pad_0[8], (ObjectClass *)&aP3.ambientSoundController[3]); /*0x5d77a8*/
        DeleteAndZero((void **)&aP3.ambientSoundController[3]); /*0x5d77b1*/
        String::Assign((char **)aP3.ambientSoundController, &stru_830620.__pad_3BC[56]); /*0x5d77bf*/
        String::TrimRight((const char **)&aP3.__pad_0[8], (ObjectClass *)aP3.ambientSoundController); /*0x5d77cd*/
        DeleteAndZero((void **)aP3.ambientSoundController); /*0x5d77d6*/
        v10 = String::GetOrEmpty((char **)&aP3.__pad_0[8]); /*0x5d77e9*/
        v11 = GetStringCSF((wchar_t *)v10, 0, &stru_830620.__pad_3BC[24], 1041); /*0x5d77f2*/
        WideString::Assign((wchar_t **)&aP3.referenceCount, (CampaignScore *)v11); /*0x5d77fc*/
        unknown_libname_73(&aP3.__pad_0[4]); /*0x5d7805*/
        v12 = (ObjectClass *)String::Tokenize( /*0x5d7822*/
                               (const char **)&v19,
                               v9,
                               &MEMORY[0x817F70],
                               (ObjectClass *)&aP3.__pad_0[4]);
        if ( !String::Length((const char **)&aP3.__pad_0[4]) ) /*0x5d782b*/
        {
LABEL_46:
          DeleteAndZero((void **)&aP3.__pad_0[4]); /*0x5d7c2c*/
          DeleteAndZero::Alt((void **)&aP3.referenceCount); /*0x5d7c39*/
          goto LABEL_47; /*0x5d7c39*/
        }
        String::Assign((char **)&aP3.ambientSoundController[4], &stru_830620.__pad_3BC[56]); /*0x5d783a*/
        String::TrimLeft((const char **)&aP3.__pad_0[4], (ObjectClass *)&aP3.ambientSoundController[4]); /*0x5d7848*/
        DeleteAndZero((void **)&aP3.ambientSoundController[4]); /*0x5d7851*/
        String::Assign((char **)&aP3.ambientSoundController[2], &stru_830620.__pad_3BC[56]); /*0x5d785f*/
        String::TrimRight((const char **)&aP3.__pad_0[4], (ObjectClass *)&aP3.ambientSoundController[2]); /*0x5d786d*/
        DeleteAndZero((void **)&aP3.ambientSoundController[2]); /*0x5d7876*/
        unknown_libname_73(&aP3.abstractFlags); /*0x5d787f*/
        v13 = (ObjectClass *)String::Tokenize( /*0x5d789c*/
                               (const char **)&v19,
                               (int)v12,
                               &MEMORY[0x817F70],
                               (ObjectClass *)&aP3.abstractFlags);
        String::Assign((char **)&aP3.customSound_controller[1], &stru_830620.__pad_3BC[56]); /*0x5d78a3*/
        String::TrimLeft((const char **)&aP3.abstractFlags, (ObjectClass *)&aP3.customSound_controller[1]); /*0x5d78b1*/
        DeleteAndZero((void **)&aP3.customSound_controller[1]); /*0x5d78ba*/
        String::Assign((char **)&aP3.fallRate, &stru_830620.__pad_3BC[56]); /*0x5d78c8*/
        String::TrimRight((const char **)&aP3.abstractFlags, (ObjectClass *)&aP3.fallRate); /*0x5d78d6*/
        DeleteAndZero((void **)&aP3.fallRate); /*0x5d78df*/
        unknown_libname_73(&aP3.uniqueId); /*0x5d78e8*/
        String::Tokenize((const char **)&v19, (int)v13, &MEMORY[0x817F70], (ObjectClass *)&aP3.uniqueId); /*0x5d78fc*/
        String::Assign((char **)&aP3.nextObject, &stru_830620.__pad_3BC[56]); /*0x5d790a*/
        String::TrimLeft((const char **)&aP3.uniqueId, (ObjectClass *)&aP3.nextObject); /*0x5d7918*/
        DeleteAndZero(&aP3.nextObject); /*0x5d7921*/
        String::Assign((char **)&aP3.attachedBomb, &stru_830620.__pad_3BC[56]); /*0x5d792f*/
        String::TrimRight((const char **)&aP3.uniqueId, (ObjectClass *)&aP3.attachedBomb); /*0x5d793d*/
        DeleteAndZero(&aP3.attachedBomb); /*0x5d7946*/
        LOBYTE(aP3.ambientSoundController[1]) = 1; /*0x5d794f*/
        if ( String::Length((const char **)&aP3.uniqueId) ) /*0x5d7954*/
        {
          v14 = String::GetOrEmpty((char **)&aP3.uniqueId); /*0x5d7966*/
          LOBYTE(aP3.ambientSoundController[1]) = _strcmpi(v14, g_Str_false) != 0; /*0x5d7979*/
        }
        if ( WideString::Length((const wchar_t **)&aP3.nextArrayIndex) /*0x5d79a3*/
          && String::Length((const char **)&aP3.__pad_0[4])
          && String::Length((const char **)&aP3.abstractFlags) )
        {
          v15 = 0; /*0x5d79d3*/
          aP3.NeedsSaveOrLink = (void *)(*(int (__thiscall **)(int, int *, int *, char *, int *, int, int))(*(_DWORD *)aP3.customSound_controller[4] + 4))( /*0x5d79d5*/
                                          aP3.customSound_controller[4],
                                          &aP3.nextArrayIndex,
                                          &aP3.referenceCount,
                                          &aP3.__pad_0[4],
                                          &aP3.abstractFlags,
                                          aP3.ambientSoundController[1],
                                          v4);
          v16 = (char)(&g_MatrixTransformState)[82]; /*0x5d79d9*/
          while ( 1 ) /*0x5d79de*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d79e0*/
            {
              LOBYTE((&g_MatrixTransformState)[82]) = v16 | 1; /*0x5d79eb*/
              MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MatrixTransformState + 996, 0, 0); /*0x5d79f0*/
              *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7a05*/
              *((_QWORD *)&g_MatrixTransformState + 500) = 0xA00000000LL; /*0x5d7a0b*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a11*/
              v16 = (char)(&g_MatrixTransformState)[82]; /*0x5d7a16*/
            }
            if ( v15 >= (int)*(&g_MatrixTransformState + 1000) ) /*0x5d7a2b*/
              break; /*0x5d7a2b*/
            if ( (v16 & 1) == 0 ) /*0x5d7a2f*/
            {
              LOBYTE((&g_MatrixTransformState)[82]) = v16 | 1; /*0x5d7a38*/
              *(_QWORD *)(&(&g_MatrixTransformState)[83] + 1) = 0; /*0x5d7a3d*/
              *((_WORD *)&g_MatrixTransformState + 1998) = 1; /*0x5d7a49*/
              *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7a56*/
              *((_QWORD *)&g_MatrixTransformState + 500) = 0xA00000000LL; /*0x5d7a62*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a68*/
              v16 = (char)(&g_MatrixTransformState)[82]; /*0x5d7a6d*/
            }
            if ( *(_DWORD *)(*(&(*(&g_MatrixTransformState + 997))->X + v15) + 40) > *((_DWORD *)aP3.NeedsSaveOrLink + 10) ) /*0x5d7a88*/
              break; /*0x5d7a88*/
            ++v15; /*0x5d7a8a*/
          }
          if ( v15 ) /*0x5d7a92*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d7b56*/
            {
              LOBYTE((&g_MatrixTransformState)[82]) = v16 | 1; /*0x5d7b5f*/
              *(_QWORD *)(&(&g_MatrixTransformState)[83] + 1) = 0; /*0x5d7b64*/
              *((_WORD *)&g_MatrixTransformState + 1998) = 1; /*0x5d7b70*/
              *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7b7d*/
              *((_QWORD *)&g_MatrixTransformState + 500) = 0xA00000000LL; /*0x5d7b89*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7b8f*/
            }
            v17 = v15 - 1; /*0x5d7ba2*/
            if ( (int)*(&g_MatrixTransformState + 1000) >= (int)*(&g_MatrixTransformState + 998) /*0x5d7bcc*/
              && (!*((_BYTE *)&g_MatrixTransformState + 3997) && *(&g_MatrixTransformState + 998)
               || (int)*(&g_MatrixTransformState + 1001) <= 0
               || !((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 996))->Z)(
                     &(&g_MatrixTransformState)[83],
                     (char *)*(&g_MatrixTransformState + 1001) + (_DWORD)*(&g_MatrixTransformState + 998),
                     0)) )
            {
              goto LABEL_45; /*0x5d7bd1*/
            }
            if ( v17 < (int)&(*(&g_MatrixTransformState + 1000))[-1].Z + 3 ) /*0x5d7bde*/
              memcpy( /*0x5d7bff*/
                &(*(&g_MatrixTransformState + 997))->Z + v17,
                &(*(&g_MatrixTransformState + 997))->Y + v17,
                4 * ((_DWORD)*(&g_MatrixTransformState + 1000) + 0x3FFFFFFF * v17 + 0x3FFFFFFF));
            *(&(*(&g_MatrixTransformState + 997))->Y + v17) = (int)aP3.NeedsSaveOrLink; /*0x5d7c10*/
          }
          else
          {
            if ( (v16 & 1) == 0 ) /*0x5d7a9a*/
            {
              LOBYTE((&g_MatrixTransformState)[82]) = v16 | 1; /*0x5d7aa3*/
              *(_QWORD *)(&(&g_MatrixTransformState)[83] + 1) = 0; /*0x5d7aa8*/
              *((_WORD *)&g_MatrixTransformState + 1998) = 1; /*0x5d7ab4*/
              *(&g_MatrixTransformState + 996) = (CoordStruct *)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7ac1*/
              *((_QWORD *)&g_MatrixTransformState + 500) = 0xA00000000LL; /*0x5d7acd*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7ad3*/
            }
            if ( (int)*(&g_MatrixTransformState + 1000) >= (int)*(&g_MatrixTransformState + 998) /*0x5d7b16*/
              && (!*((_BYTE *)&g_MatrixTransformState + 3997) && *(&g_MatrixTransformState + 998)
               || (int)*(&g_MatrixTransformState + 1001) <= 0
               || !((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 996))->Z)(
                     &(&g_MatrixTransformState)[83],
                     (char *)*(&g_MatrixTransformState + 1001) + (_DWORD)*(&g_MatrixTransformState + 998),
                     0)) )
            {
              goto LABEL_45; /*0x5d7b1b*/
            }
            if ( *(&g_MatrixTransformState + 1000) ) /*0x5d7b28*/
              memcpy( /*0x5d7b3c*/
                &(*(&g_MatrixTransformState + 997))->Y,
                *(&g_MatrixTransformState + 997),
                4 * (_DWORD)*(&g_MatrixTransformState + 1000));
            (*(&g_MatrixTransformState + 997))->X = (int)aP3.NeedsSaveOrLink; /*0x5d7b4d*/
          }
          *(&g_MatrixTransformState + 1000) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 1000) + 1); /*0x5d7c14*/
        }
LABEL_45:
        DeleteAndZero((void **)&aP3.uniqueId); /*0x5d7c1a*/
        DeleteAndZero((void **)&aP3.abstractFlags); /*0x5d7c27*/
        goto LABEL_46; /*0x5d7c27*/
      }
    }
LABEL_50:
    HashTable::DestroyHashTableINIClass((void **)&aP3.customSound); /*0x5d7c82*/
  }
  aP3.location[2] = (int)&vt_CCFileClass; /*0x5d7c92*/
  v21[3] = 0; /*0x5d7c9d*/
  Vector::Clear((int)v21); /*0x5d7ca4*/
  aP3.location[2] = (int)&off_7E1668; /*0x5d7cb0*/
  return BufferIOFileClass::Dtor(&aP3.location[2]); /*0x5d7cc0*/
}
}
} // namespace gamemd

// 0x5D7CE0
namespace gamemd {
int GameInit_Complete()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int GameInit_Complete()
{
  int i; // esi
  void (__thiscall ***v1)(_DWORD, int); // ecx
  _BYTE v3[4]; // [esp+8h] [ebp-1Ch] BYREF
  void **v4; // [esp+Ch] [ebp-18h] BYREF
  void **v5; // [esp+10h] [ebp-14h] BYREF
  void **v6; // [esp+14h] [ebp-10h] BYREF
  void **v7; // [esp+18h] [ebp-Ch] BYREF
  void **v8; // [esp+1Ch] [ebp-8h] BYREF
  void **v9; // [esp+20h] [ebp-4h] BYREF

  for ( i = 0; ; ++i ) /*0x5d7ce5*/
  {
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d7cf3*/
    {
      MEMORY[0xABFD70] |= 1u; /*0x5d7cfd*/
      GameInit::InitMultiplayerModes(0, 0); /*0x5d7d08*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7d12*/
    }
    if ( i >= MEMORY[0xABFDB0] ) /*0x5d7d20*/
      break; /*0x5d7d20*/
    v1 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(System_Init() + 4) + 4 * i); /*0x5d7d2a*/
    if ( v1 ) /*0x5d7d32*/
      (**v1)(v1, 1); /*0x5d7d37*/
  }
  v4 = &vt_MultiplayerGameMode_Initializer_MultiplayerBattle; /*0x5d7d45*/
  String::Assign(MEMORY[0x830C00]); /*0x5d7d4d*/
  LoadMultiplayerModesList(v3, &v4); /*0x5d7d5a*/
  DeleteAndZero(v3); /*0x5d7d63*/
  v5 = &vt_MultiplayerGameMode_Initializer_MultiplayerManBattle; /*0x5d7d6c*/
  String::Assign(MEMORY[0x830BF4]); /*0x5d7d79*/
  LoadMultiplayerModesList(v3, &v5); /*0x5d7d86*/
  DeleteAndZero(v3); /*0x5d7d8f*/
  v6 = &vt_MultiplayerGameMode_Initializer_MultiplayerSiege; /*0x5d7d98*/
  String::Assign(MEMORY[0x830BEC]); /*0x5d7da5*/
  LoadMultiplayerModesList(v3, &v6); /*0x5d7db2*/
  DeleteAndZero(v3); /*0x5d7dbb*/
  v7 = &vt_MultiplayerGameMode_Initializer_UnholyAlliance; /*0x5d7dc4*/
  String::Assign(MEMORY[0x830BE4]); /*0x5d7dd1*/
  LoadMultiplayerModesList(v3, &v7); /*0x5d7dde*/
  DeleteAndZero(v3); /*0x5d7de7*/
  v8 = &vt_MultiplayerGameMode_Initializer_FreeForAll; /*0x5d7df0*/
  String::Assign(MEMORY[0x830BD8]); /*0x5d7dfd*/
  LoadMultiplayerModesList(v3, &v8); /*0x5d7e0a*/
  DeleteAndZero(v3); /*0x5d7e13*/
  v9 = &vt_MultiplayerGameMode_Initializer_MPCooperative; /*0x5d7e1c*/
  String::Assign(MEMORY[0x830BCC]); /*0x5d7e29*/
  LoadMultiplayerModesList(v3, &v9); /*0x5d7e36*/
  return DeleteAndZero(v3); /*0x5d7e44*/
}
}
} // namespace gamemd

// 0x5D9060
namespace gamemd {
short E4Recv_5D9060::sub_5D9060(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall sub_5D9060(_DWORD *this, int a2)
{
  int v2; // ebx
  int v4; // ebp
  int v5; // edx
  __int16 v6; // di

  v2 = a2; /*0x5d9061*/
  if ( !a2 ) /*0x5d906c*/
    v2 = 1; /*0x5d906e*/
  v4 = 255; /*0x5d9073*/
  while ( 1 ) /*0x5d907b*/
  {
    v5 = v2 + *(this + 4); /*0x5d907b*/
    *(this + 4) = v5; /*0x5d907f*/
    v6 = v5; /*0x5d9087*/
    if ( v5 > 0xFFFF ) /*0x5d908a*/
      *(this + 4) = 2048; /*0x5d908c*/
    if ( !g_NetworkInterface || g_GameMode_Current[0] != 4 ) /*0x5d90a4*/
      break; /*0x5d90a4*/
    if ( (*(unsigned __int8 (__stdcall **)(_WORD))(*(_DWORD *)g_NetworkInterface + 104))(v5) ) /*0x5d90a9*/
    {
      (*(void (__thiscall **)(int, __int16))(*(_DWORD *)g_NetworkInterface + 108))(g_NetworkInterface, v6); /*0x5d90ca*/
      return v6; /*0x5d90ca*/
    }
    if ( !v4-- ) /*0x5d90b0*/
      return v6; /*0x5d90be*/
  }
  return v6; /*0x5d90ba*/
}
}
} // namespace gamemd

// 0x5D9DB0
namespace gamemd {
int DetectPortAllocationPattern(int a1, short * a2, unsigned short * a3, unsigned char * a4, unsigned char * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall DetectPortAllocationPattern(int a1, __int16 *a2, unsigned __int16 *a3, _BYTE *a4, _BYTE *a5)
{
  __int16 *v5; // ebp
  int v6; // edx
  int v8; // ecx
  __int16 *v9; // edx
  unsigned __int16 *v10; // eax
  int v11; // esi
  int v12; // ebp
  unsigned __int16 v13; // cx
  __int16 v14; // cx
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v19; // eax
  unsigned __int16 v20; // ax
  int v21; // esi
  int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned __int16 v24; // cx
  int v25; // esi
  int v26; // edi
  int v27; // esi
  int v28; // eax
  int v29; // [esp+1Ch] [ebp+Ch]

  v5 = a2; /*0x5d9db2*/
  Debug::Log(); /*0x5d9dd9*/
  v6 = a1; /*0x5d9dde*/
  if ( a1 > 0 ) /*0x5d9deb*/
  {
    v29 = a1; /*0x5d9ded*/
    do /*0x5d9e46*/
    {
      v8 = v6 - 1; /*0x5d9df1*/
      if ( v6 - 1 > 0 ) /*0x5d9df6*/
      {
        v9 = v5; /*0x5d9dfa*/
        v10 = a3 + 1; /*0x5d9dfc*/
        v11 = (char *)v5 - (char *)a3; /*0x5d9dff*/
        v12 = v8; /*0x5d9e01*/
        do /*0x5d9e33*/
        {
          v13 = *(v10 - 1); /*0x5d9e03*/
          if ( v13 > *v10 ) /*0x5d9e0d*/
          {
            *(v10 - 1) = *v10; /*0x5d9e15*/
            *v10 = v13; /*0x5d9e19*/
            v14 = *v9; /*0x5d9e22*/
            *v9 = *(unsigned __int16 *)((char *)v10 + v11); /*0x5d9e25*/
            *(unsigned __int16 *)((char *)v10 + v11) = v14; /*0x5d9e28*/
          }
          ++v9; /*0x5d9e2c*/
          ++v10; /*0x5d9e2f*/
          --v12; /*0x5d9e32*/
        }
        while ( v12 ); /*0x5d9e33*/
        v5 = a2; /*0x5d9e35*/
        v6 = a1; /*0x5d9e39*/
      }
      --v29; /*0x5d9e42*/
    }
    while ( v29 ); /*0x5d9e46*/
  }
  v15 = a3[1]; /*0x5d9e4c*/
  v16 = (unsigned __int16)v15 - *a3; /*0x5d9e55*/
  if ( v16 == 1 ) /*0x5d9e5a*/
  {
    v17 = a3[2]; /*0x5d9e5e*/
    if ( (unsigned __int16)v17 - v15 == 1 && a3[3] - v17 == 1 ) /*0x5d9e74*/
    {
      Debug::Log(); /*0x5d9e7b*/
      *a4 = 0; /*0x5d9e8d*/
      *a5 = 1; /*0x5d9e90*/
      return 1; /*0x5d9e97*/
    }
  }
  if ( v16 == 2 ) /*0x5d9e9d*/
  {
    v19 = a3[2]; /*0x5d9ea1*/
    if ( (unsigned __int16)v19 - v15 == 2 && a3[3] - v19 == 2 ) /*0x5d9eb7*/
    {
      Debug::Log(); /*0x5d9ebe*/
      *a4 = 0; /*0x5d9ece*/
      *a5 = 1; /*0x5d9ed6*/
      return 2; /*0x5d9eda*/
    }
  }
  v20 = a3[2]; /*0x5d9edf*/
  v21 = v20 - v15; /*0x5d9ee5*/
  v22 = a3[3] - v20; /*0x5d9eed*/
  if ( v16 != v21 ) /*0x5d9ef1*/
  {
    if ( v21 == v22 ) /*0x5d9f42*/
    {
      Debug::Log(); /*0x5d9f4a*/
      *a4 = 0; /*0x5d9f5a*/
      *a5 = 0; /*0x5d9f62*/
      return v21; /*0x5d9f66*/
    }
    if ( v6 > 0 ) /*0x5d9f6b*/
    {
      v23 = a3; /*0x5d9f6f*/
      do /*0x5d9f7e*/
      {
        *v23 -= *(unsigned __int16 *)((char *)v23 + (char *)v5 - (char *)a3); /*0x5d9f77*/
        ++v23; /*0x5d9f7a*/
        --v6; /*0x5d9f7d*/
      }
      while ( v6 ); /*0x5d9f7e*/
    }
    v24 = a3[2]; /*0x5d9f84*/
    v25 = a3[1]; /*0x5d9f93*/
    v26 = v24 - v25; /*0x5d9f95*/
    v27 = v25 - *a3; /*0x5d9f9d*/
    v28 = a3[3] - v24; /*0x5d9f9f*/
    if ( v27 == v26 ) /*0x5d9fa3*/
    {
      if ( v26 == v28 ) /*0x5d9fa7*/
      {
        Debug::Log(); /*0x5d9faf*/
        *a4 = 1; /*0x5d9fbf*/
        *a5 = 1; /*0x5d9fc7*/
        return v27; /*0x5d9fcb*/
      }
    }
    else if ( v27 != v28 ) /*0x5d9fd0*/
    {
      if ( v26 == v28 ) /*0x5d9fd4*/
      {
        Debug::Log(); /*0x5d9fdc*/
        *a4 = 1; /*0x5d9fec*/
        *a5 = 0; /*0x5d9fef*/
        return v26; /*0x5d9ff2*/
      }
      else
      {
        *a5 = 0; /*0x5da005*/
        *a4 = 0; /*0x5da009*/
        return 0; /*0x5da00c*/
      }
    }
    Debug::Log(); /*0x5da018*/
    *a4 = 1; /*0x5da028*/
    *a5 = 0; /*0x5da030*/
    return v27; /*0x5da02b*/
  }
  if ( v21 == v22 ) /*0x5d9ef6*/
  {
    Debug::Log(); /*0x5d9efd*/
    *a4 = 0; /*0x5d9f0d*/
    *a5 = 1; /*0x5d9f10*/
  }
  else
  {
    Debug::Log(); /*0x5d9f21*/
    *a4 = 0; /*0x5d9f33*/
    *a5 = 0; /*0x5d9f36*/
  }
  return v16; /*0x5d9e93*/
}
}
} // namespace gamemd

// 0x5DA750
namespace gamemd {
void HandleNetworkPlayerDisconnect(wchar_t * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall HandleNetworkPlayerDisconnect(wchar_t *a1, int a2)
{
  wchar_t *v2; // ebp
  int v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  char *v17; // eax
  int v18; // eax
  wchar_t *StringCSF; // [esp-8h] [ebp-134h]
  wchar_t *v20; // [esp-8h] [ebp-134h]
  CampaignScore *_0; // [esp+0h] [ebp-12Ch]
  wchar_t *v21; // [esp+Ch] [ebp-120h] BYREF
  int aP1_4; // [esp+10h] [ebp-11Ch]
  int v24[2]; // [esp+14h] [ebp-118h] BYREF
  wchar_t String[80]; // [esp+1Ch] [ebp-110h] BYREF
  char v26[112]; // [esp+BCh] [ebp-70h] BYREF

  v2 = a1; /*0x5da75d*/
  v4 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)a1]; /*0x5da762*/
  v21 = a1; /*0x5da76c*/
  if ( HouseClass_Player.__pad_5568[23232] ) /*0x5da770*/
    Debug::Log(); /*0x5da77f*/
  if ( !v4 || !*(_BYTE *)(v4 + 492) ) /*0x5da78f*/
    return; /*0x5da797*/
  String[0] = 0; /*0x5da7a0*/
  if ( a2 == 1 ) /*0x5da7a7*/
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[76], 0, &stru_830620.__pad_BC0[52], 464); /*0x5da7c6*/
    swprintf(String, (const size_t)StringCSF, (const wchar_t *const)(v4 + 90154), _0); /*0x5da7cc*/
  }
  else if ( !a2 ) /*0x5da7d0*/
  {
    v20 = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[36], 0, &stru_830620.__pad_BC0[52], 466); /*0x5da7f3*/
    swprintf(String, (const size_t)v20, (const wchar_t *const)(v4 + 90154), _0); /*0x5da7f5*/
  }
  if ( wcslen(String) ) /*0x5da802*/
  {
    v5 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x5da822*/
    MessageListClass::AddMessage( /*0x5da845*/
      &HouseClass_Player.__pad_5568[10668],
      0,
      0,
      (CellStruct *)String,
      *(_DWORD *)(*(_DWORD *)(v4 + 52) + 192),
      (IUnknown *)0x4046,
      v5,
      0);
    MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0); /*0x5da851*/
  }
  Network::sendData((int)&HouseClass_Player.__pad_5568[22284], (AnimClass *)v2); /*0x5da85d*/
  if ( a2 ) /*0x5da864*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] ) /*0x5da871*/
    {
      v6 = EventClass::Add2(v26, *(AnimClass **)(HouseClass_Player.field_0 + 48), 0x23u, (IUnknown *)v2); /*0x5da893*/
      if ( Networking_LastEventIndex < 128 ) /*0x5da8a2*/
      {
        qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v6, 0x6Fu); /*0x5da8c2*/
        g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x5da8d3*/
        Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x5da8ea*/
        ++Networking_LastEventIndex; /*0x5da8f0*/
      }
    }
    else
    {
      Network::SendOffer(v4); /*0x5da875*/
    }
LABEL_21:
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5da940*/
    {
      if ( HouseClass_Player.__pad_5568[18668] ) /*0x5da94d*/
      {
        if ( SessionClass::IsValidHouse((int)&HouseClass_Player.__pad_5568[8068], (#375 *)v4) ) /*0x5da959*/
        {
          HouseClass_Player.__pad_5568[20508] = 1; /*0x5da96b*/
          v7 = EventClass::validateEventType((int *)&g_NetworkEventQueue); /*0x5da972*/
          v8 = v7; /*0x5da977*/
          if ( v7 != -1 ) /*0x5da97c*/
          {
            v9 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v7]; /*0x5da987*/
            aP1_4 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v8]; /*0x5da98c*/
            if ( v9 ) /*0x5da990*/
            {
              if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 2 ) /*0x5da99f*/
              {
                v10 = 0; /*0x5da9a5*/
                v11 = 0; /*0x5da9a7*/
                if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5da9ab*/
                {
                  v12 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x5da9b3*/
                  while ( *(_DWORD *)(*(_DWORD *)v12 + 111) != v8 ) /*0x5da9ba*/
                  {
                    ++v11; /*0x5da9bc*/
                    v12 += 4; /*0x5da9bd*/
                    if ( v11 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5da9c2*/
                      goto LABEL_33; /*0x5da9c2*/
                  }
                  v10 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v11) + 40); /*0x5da9d1*/
                  *(_WORD *)&HouseClass_Player.__pad_5568[18696] = *(_WORD *)&HouseClass_Player.__pad_5568[2 * v11 + 20478]; /*0x5da9d4*/
LABEL_33:
                  v2 = v21; /*0x5da9db*/
                }
                Network::CopyAddress(v10, &v21, (int)v24); /*0x5da9e9*/
                NetworkID::Assign(&HouseClass_Player.__pad_5568[18672], (IPXManagerClass *)&v21, (int)v24, 0); /*0x5da9ff*/
                Network::FormatAddress((unsigned __int16 *)&HouseClass_Player.__pad_5568[18672], 0); /*0x5daa0b*/
                Debug::Log(); /*0x5daa16*/
                Debug::Log(); /*0x5daa2d*/
                Network::SetPlayerCoords( /*0x5daa3f*/
                  &HouseClass_Player.__pad_5568[22284],
                  (IPXManagerClass *)&HouseClass_Player.__pad_5568[18672]);
                v9 = aP1_4; /*0x5daa44*/
              }
              wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[20388], (const wchar_t *)(v9 + 90154)); /*0x5daa53*/
              Debug::Log(); /*0x5daa62*/
              *(_DWORD *)&HouseClass_Player.__pad_5568[20472] = v8; /*0x5daa6f*/
              if ( SessionClass::IsValidHouse((int)&HouseClass_Player.__pad_5568[8068], 0) ) /*0x5daa77*/
                Network::SendMasterPlayerList((int)&g_NetworkEventQueue); /*0x5daa85*/
            }
          }
        }
      }
    }
    goto LABEL_37; /*0x5daa85*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5da8fe*/
  {
    if ( !dword_B779C4 || (Network::SendOffer(v4), *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4) ) /*0x5da91b*/
    {
      if ( HouseClass_Player.__pad_5568[18668] ) /*0x5da928*/
      {
        NetworkManager::RemovePlayer((int)&g_NetworkEventQueue, (AnimClass *)v2); /*0x5da934*/
        goto LABEL_21; /*0x5da934*/
      }
    }
  }
LABEL_37:
  v13 = 0; /*0x5daa8a*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5daa94*/
  {
    v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x5daa9a*/
    v15 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x5daaa0*/
    while ( *(wchar_t **)(*(_DWORD *)v15 + 111) != v2 ) /*0x5daaa7*/
    {
      ++v13; /*0x5daaa9*/
      v15 += 4; /*0x5daaaa*/
      if ( v13 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5daaaf*/
        goto LABEL_54; /*0x5daaaf*/
    }
    v16 = 0; /*0x5daab9*/
    v17 = &HouseClass_Player.__pad_5568[18396]; /*0x5daabb*/
    while ( *(_DWORD *)v17 != *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v13) ) /*0x5daac2*/
    {
      v17 += 4; /*0x5daac4*/
      ++v16; /*0x5daac7*/
      if ( (int)v17 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x5daacd*/
        goto LABEL_47; /*0x5daacd*/
    }
    *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v16 + 18396] = *(&g_MatrixTransformState + 2275); /*0x5daad6*/
    v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x5daadd*/
LABEL_47:
    __3_YAXPAX_Z(*(void **)(v14 + 4 * v13)); /*0x5daae3*/
    v18 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 16))( /*0x5dab03*/
            &HouseClass_Player.__pad_5568[18368],
            *(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v13);
    if ( v18 != -1 && v18 < *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5dab13*/
    {
      --*(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5dab18*/
      for ( ; /*0x5dab1e*/
            v18 < *(int *)&HouseClass_Player.__pad_5568[18384];
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v18 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v18) )
      {
        ++v18; /*0x5dab26*/
      }
    }
    Network_Disconnect_69BBF0(&HouseClass_Player.__pad_5568[8068], v13); /*0x5dab3e*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5dab4a*/
    {
      if ( HouseClass_Player.__pad_5568[18668] ) /*0x5dab53*/
        NetworkManager::RemovePlayer((int)&g_NetworkEventQueue, (AnimClass *)v2); /*0x5dab5b*/
    }
  }
LABEL_54:
  --*(_DWORD *)&HouseClass_Player.__pad_5568[8856]; /*0x5dab60*/
}
}
} // namespace gamemd

// 0x5DB720
namespace gamemd {
int CheckNetworkGameTimeout()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int CheckNetworkGameTimeout()
{
  int result; // eax
  int v1; // ebp
  signed int i; // edi
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // esi
  DWORD Ticks; // eax
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  _DWORD v13[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v14; // [esp+1D4h] [ebp-4h]
  char v15; // [esp+1D6h] [ebp-2h]

  result = MEMORY[0xA8DA6C]; /*0x5db720*/
  v1 = 1; /*0x5db72c*/
  for ( i = 1; i < MEMORY[0xA8DA6C]; ++i ) /*0x5db737*/
  {
    if ( wcscmp(*(const wchar_t **)(MEMORY[0xA8DA60] + 4 * i), MEMORY[0xA8D610]) ) /*0x5db74b*/
    {
      v3 = g_PerformanceTickOffset; /*0x5db760*/
      if ( g_LastPerformanceTick != -1 ) /*0x5db769*/
        v3 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5db77b*/
      if ( (unsigned int)(v3 - *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA60] + 4 * i) + 53)) > 0x12C ) /*0x5db78f*/
      {
        Debug::Log(); /*0x5db797*/
        __3_YAXPAX_Z(*(void **)(MEMORY[0xA8DA60] + 4 * i)); /*0x5db7a5*/
        v4 = (*(int (__thiscall **)(int *, int))(MEMORY[0xA8DA5C] + 16))(&MEMORY[0xA8DA5C], MEMORY[0xA8DA60] + 4 * i); /*0x5db7c1*/
        if ( v4 != -1 ) /*0x5db7c7*/
          Network_Check(v4); /*0x5db7cf*/
        NetworkLobby::UpdatePlayerList(); /*0x5db7d4*/
        if ( i <= (int)g_NetworkSetupConfig ) /*0x5db7df*/
        {
          GameSetup::DisplayPlayers(); /*0x5db7e3*/
          SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db7f0*/
        }
      }
    }
    result = MEMORY[0xA8DA6C]; /*0x5db7f5*/
  }
  if ( MEMORY[0xA8DA54] > 1 ) /*0x5db809*/
  {
    do /*0x5db99b*/
    {
      if ( !*(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1) + 52) ) /*0x5db818*/
      {
        v5 = g_PerformanceTickOffset; /*0x5db824*/
        if ( g_LastPerformanceTick != -1 ) /*0x5db82d*/
          v5 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5db83f*/
        *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1) + 52) = v5; /*0x5db849*/
      }
      v6 = g_LastPerformanceTick; /*0x5db84c*/
      v7 = g_PerformanceTickOffset; /*0x5db852*/
      if ( g_LastPerformanceTick != -1 ) /*0x5db85b*/
      {
        Ticks = Timer::GetTicks(); /*0x5db862*/
        v6 = g_LastPerformanceTick; /*0x5db867*/
        v7 += Ticks - g_LastPerformanceTick; /*0x5db86f*/
      }
      if ( (unsigned int)(v7 - *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1) + 52)) <= 0x168 ) /*0x5db882*/
      {
        v10 = g_PerformanceTickOffset; /*0x5db8e5*/
        if ( v6 != -1 ) /*0x5db8ee*/
          v10 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5db900*/
        v11 = MEMORY[0xA8DA48]; /*0x5db902*/
        v12 = *(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1); /*0x5db908*/
        if ( (unsigned int)(v10 - *(_DWORD *)(v12 + 52)) > 0x12C && !*(_BYTE *)(v12 + 56) ) /*0x5db916*/
        {
          memset(v13, 0, sizeof(v13)); /*0x5db92c*/
          v14 = 0; /*0x5db92e*/
          v15 = 0; /*0x5db930*/
          strcpy((char *)&v13[1], MEMORY[0xA8B380]); /*0x5db954*/
          v13[0] = 5; /*0x5db95d*/
          Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v13, 455, 0, *(_DWORD *)(v11 + 4 * v1) + 40, 0, 0); /*0x5db97d*/
          Event::Dispatch(); /*0x5db982*/
          *(_BYTE *)(*(_DWORD *)(MEMORY[0xA8DA48] + 4 * v1) + 56) = 1; /*0x5db98f*/
        }
      }
      else
      {
        __3_YAXPAX_Z(*(void **)(MEMORY[0xA8DA48] + 4 * v1)); /*0x5db887*/
        v9 = (*(int (__thiscall **)(int *, int))(MEMORY[0xA8DA44] + 16))(&MEMORY[0xA8DA44], MEMORY[0xA8DA48] + 4 * v1); /*0x5db8a4*/
        if ( v9 != -1 && v9 < MEMORY[0xA8DA54] && v9 < --MEMORY[0xA8DA54] ) /*0x5db8bf*/
        {
          do /*0x5db8d7*/
          {
            ++v9; /*0x5db8c7*/
            *(_DWORD *)(MEMORY[0xA8DA48] + 4 * v9 - 4) = *(_DWORD *)(MEMORY[0xA8DA48] + 4 * v9); /*0x5db8cb*/
          }
          while ( v9 < MEMORY[0xA8DA54] ); /*0x5db8d7*/
        }
        GameSetup::DisplayPlayers(); /*0x5db8db*/
      }
      result = MEMORY[0xA8DA54]; /*0x5db993*/
      ++v1; /*0x5db998*/
    }
    while ( v1 < MEMORY[0xA8DA54] ); /*0x5db99b*/
  }
  return result; /*0x5db9a1*/
}
}
} // namespace gamemd

// 0x5DBE20
namespace gamemd {
void SetGameSetupPlayerState(char * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall SetGameSetupPlayerState(char *a1, int a2)
{
  char *v2; // edi
  int v3; // ebx
  HWND v4; // eax
  char *v5; // eax
  int v6; // esi
  char *v7; // eax

  v2 = a1; /*0x5dbe23*/
  v3 = a2; /*0x5dbe27*/
  if ( !a1 ) /*0x5dbe29*/
  {
    v2 = &HouseClass_Player.__pad_5568[8396]; /*0x5dbe2d*/
    if ( !a2 ) /*0x5dbe32*/
    {
      v4 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5dbe39*/
      EnablePlayerSlotControls(v4, 1); /*0x5dbe42*/
    }
  }
  v5 = CharToWideString(v2); /*0x5dbe4e*/
  if ( !wcscmp((const wchar_t *)v5, (const wchar_t *)&HouseClass_Player.__pad_5568[17244]) ) /*0x5dbe54*/
    v3 = 1; /*0x5dbe60*/
  v6 = 0; /*0x5dbe6a*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5dbe6e*/
  {
    while ( 1 ) /*0x5dbe79*/
    {
      v7 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6)); /*0x5dbe79*/
      if ( !_strcmpi(v7, v2) ) /*0x5dbe7f*/
        break; /*0x5dbe7f*/
      if ( ++v6 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5dbe93*/
      {
        GameSetup::DisplayPlayers(0); /*0x5dbe97*/
        return; /*0x5dbe9f*/
      }
    }
    if ( v6 != -1 ) /*0x5dbea3*/
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6) + 119) = v3; /*0x5dbeae*/
  }
  GameSetup::DisplayPlayers(0); /*0x5dbeb6*/
}
}
} // namespace gamemd

// 0x5DBF50
namespace gamemd {
int UpdateMultiplayerPlayerOptions(CCINIClass * aP0, CCINIClass * aP1, CCINIClass * aP2, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall UpdateMultiplayerPlayerOptions(CCINIClass *aP0, CCINIClass *aP1, CCINIClass *aP2, int a4, int a5)
{
  ObjectClass *v5; // edi
  ObjectClass *v7; // ebx
  SessionClass *v8; // esi
  char *v9; // eax
  ReferenceCounted *v11; // esi
  SessionClass *v12; // ebx
  int ResourceID2CSF; // ebx
  bool v14; // al
  int ResourceID3CSF; // eax
  int ResourceID4CSF; // eax
  int v17; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  HWND v23; // eax
  int v24; // ebx
  int v25; // [esp+10h] [ebp-Ch]
  SessionClass *v27; // [esp+18h] [ebp-4h]

  v5 = (ObjectClass *)-1; /*0x5dbf57*/
  v7 = 0; /*0x5dbf60*/
  v8 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x5dbf62*/
  while ( 1 ) /*0x5dbf69*/
  {
    v9 = ToWideStringChar((IUnknown *)v8->GameMode[0]); /*0x5dbf69*/
    if ( !_strcmpi(v9, aP0) ) /*0x5dbf70*/
      break; /*0x5dbf70*/
    v8 = (SessionClass *)((char *)v8 + 4); /*0x5dbf7c*/
    v7 = (ObjectClass *)((char *)v7 + 1); /*0x5dbf7f*/
    if ( (int)v8 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x5dbf86*/
      goto LABEL_6; /*0x5dbf86*/
  }
  v5 = v7; /*0x5dbf8a*/
LABEL_6:
  v25 = 0; /*0x5dbf8c*/
  if ( v5 == (ObjectClass *)-1 ) /*0x5dbf97*/
    return 0; /*0x5dbf9c*/
  v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xBC); /*0x5dbfaf*/
  if ( !v11 ) /*0x5dbfb3*/
    v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xBD); /*0x5dbfbf*/
  v12 = *(SessionClass **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396]; /*0x5dbfc1*/
  v27 = v12; /*0x5dbfca*/
  if ( (CCINIClass *)SessionClass::GetPlayerSide((int)v12) != aP1 ) /*0x5dbfd9*/
  {
    v25 = 1; /*0x5dbfde*/
    SessionClass::SetPlayerOption((int)v12, (SkirmishDialog *)aP1); /*0x5dbfe6*/
  }
  if ( SessionClass::GetOption(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396]) != a4 ) /*0x5dbffd*/
  {
    v25 = 1; /*0x5dc002*/
    SessionClass::SetOption((int)v12, (SessionClass *)a4); /*0x5dc00a*/
  }
  if ( SessionClass::GetOption2(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396]) != a5 ) /*0x5dc021*/
  {
    v25 = 1; /*0x5dc026*/
    SessionClass::SetOption2((int)v12, (SessionClass *)a5); /*0x5dc02e*/
  }
  ResourceID2CSF = GetResourceID2CSF(v5); /*0x5dc03a*/
  v14 = GetComboBoxSelected(v11, ResourceID2CSF, 0xFFFFFFFF) == -3; /*0x5dc04a*/
  if ( aP1 == (CCINIClass *)-3 ) /*0x5dc050*/
  {
    if ( !v14 ) /*0x5dc054*/
    {
      SetupComboBoxObserver((HWND)v11, ResourceID2CSF); /*0x5dc05e*/
      ResourceID3CSF = GetResourceID3CSF(v5); /*0x5dc065*/
      SetupComboBoxRandomAlliance((HWND)v11, ResourceID3CSF); /*0x5dc06e*/
      ResourceID4CSF = GetResourceID4CSF(v5); /*0x5dc075*/
      InitComboBoxNone((HWND)v11, ResourceID4CSF); /*0x5dc07e*/
      v17 = PlayerSlot::IndexToDlgID(v5); /*0x5dc085*/
      DlgItem = GetDlgItem((HWND)v11, v17); /*0x5dc095*/
      SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5dc09c*/
      ResourceIDCSF = GetResourceIDCSF(v5); /*0x5dc0a9*/
      FillListBox((HWND)v11, ResourceIDCSF); /*0x5dc0af*/
      SetupSkirmishSpawnLocations((HWND)v11, ResourceIDCSF, 8); /*0x5dc0b6*/
    }
  }
  else if ( v14 ) /*0x5dc0ba*/
  {
    FillComboBoxRandomOnly((HWND)v11, ResourceID2CSF); /*0x5dc0c0*/
    v20 = GetResourceID3CSF(v5); /*0x5dc0c7*/
    FillComboBoxAllianceSlots((HWND)v11, v20); /*0x5dc0d0*/
    v21 = GetResourceID4CSF(v5); /*0x5dc0d7*/
    FillLobbyPlayerSlot((HWND)v11, v21); /*0x5dc0e0*/
    v22 = PlayerSlot::IndexToDlgID(v5); /*0x5dc0e7*/
    v23 = GetDlgItem((HWND)v11, v22); /*0x5dc0f7*/
    SendMessageA(v23, 0x4F1u, 0, 0); /*0x5dc0fe*/
    v24 = GetResourceIDCSF(v5); /*0x5dc10b*/
    FillComboBoxFactions((HWND)v11, v24); /*0x5dc111*/
    SetupSkirmishSpawnLocations((HWND)v11, v24, -2); /*0x5dc11c*/
  }
  if ( (CCINIClass *)SessionClass::GetPlayerColor(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396]) != aP2 ) /*0x5dc133*/
    SessionClass::SetPlayerColor((int)v27, (int)aP2); /*0x5dc13a*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v5 + 18396] == **(_DWORD **)&HouseClass_Player.__pad_5568[18372] ) /*0x5dc14e*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8416] = aP2; /*0x5dc150*/
  GameSetup::DisplayPlayers(0); /*0x5dc158*/
  return v25; /*0x5dbf99*/
}
}
} // namespace gamemd

// 0x5DD8A0
namespace gamemd {
int SynchronizeMultiplayerGameStart()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall SynchronizeMultiplayerGameStart@<al>(int a1@<edi>)
{
  int v2; // eax
  int v3; // eax
  int LobbyStatus; // eax
  int v5; // ecx
  wchar_t *v7; // eax
  int i; // esi
  wchar_t *StringCSF; // [esp-18h] [ebp-1F4h]
  char v10[16]; // [esp+4h] [ebp-1D8h] BYREF
  _DWORD v11[113]; // [esp+14h] [ebp-1C8h] BYREF
  __int16 v12; // [esp+1D8h] [ebp-4h]
  char v13; // [esp+1DAh] [ebp-2h]

  if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) <= 0x1E ) /*0x5dd8b6*/
    v2 = 30; /*0x5dd8c7*/
  else
    v2 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2; /*0x5dd8c2*/
  v3 = Network::SetConnectionParams( /*0x5dd8dd*/
         (int *)&HouseClass_Player.__pad_5568[22284],
         (IUnknown *)v2,
         -1,
         1000,
         (CellStruct *)1);
  LOBYTE(v3) = HouseClass_Player.__pad_5568[10324]; /*0x5dd8e2*/
  if ( FindAndValidateMap( /*0x5dd906*/
         (ObjectClass *)&HouseClass_Player.__pad_5568[9772],
         *(int *)&HouseClass_Player.__pad_5568[10320],
         &HouseClass_Player.__pad_5568[10286],
         v3,
         1) == 1 )
  {
    Debug::Log(); /*0x5dd911*/
    memset(v11, 0, sizeof(v11)); /*0x5dd924*/
    v12 = 0; /*0x5dd92a*/
    v13 = 0; /*0x5dd942*/
    v11[0] = 19; /*0x5dd943*/
    Network::SendMessage( /*0x5dd94b*/
      (int)&HouseClass_Player.__pad_5568[22284],
      (int)v11,
      455,
      1,
      (int)&HouseClass_Player.__pad_5568[10344],
      0,
      0);
    while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 ) /*0x5dd95c*/
    {
      if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) ) /*0x5dd963*/
        break; /*0x5dd96a*/
      Event::Dispatch(); /*0x5dd96c*/
    }
    goto LABEL_8; /*0x5dd97d*/
  }
  Debug::Log(); /*0x5dda12*/
  if ( !HouseClass_Player.__pad_5568[10324] || IsRandMap::Sed2((int)&HouseClass_Player.__pad_5568[8068]) ) /*0x5dda28*/
  {
    SynchronizeMultiplayerGameStart_Start(); /*0x5dda31*/
    if ( RequestNetworkFile(&HouseClass_Player.__pad_5568[9772], 3, 1) ) /*0x5dda42*/
    {
      if ( !IsRandMap::Sed2((int)&HouseClass_Player.__pad_5568[8068]) || RequestNetworkFile(v10, 3, 1) ) /*0x5dda68*/
      {
LABEL_8:
        strcpy((char *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700), &HouseClass_Player.__pad_5568[9772]); /*0x5dd97f*/
        LobbyStatus = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]); /*0x5dd9b1*/
        if ( LobbyStatus < 20 ) /*0x5dd9b9*/
        {
          Debug::Log(); /*0x5dd9c1*/
          LobbyStatus = 20; /*0x5dd9c9*/
        }
        v5 = 8 * LobbyStatus; /*0x5dd9ce*/
        if ( 8 * LobbyStatus < 120 ) /*0x5dd9d8*/
          v5 = 120; /*0x5dd9da*/
        Network::SetConnectionParams( /*0x5dd9ea*/
          (int *)&HouseClass_Player.__pad_5568[22284],
          (IUnknown *)LobbyStatus,
          -1,
          v5,
          (CellStruct *)1);
        TacticalClass::SetCameraPosition(&HouseClass_Player.__pad_5568[22284], 60, -1, 600); /*0x5dd9fd*/
        return 1; /*0x5dda0c*/
      }
    }
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = -1; /*0x5dda8c*/
  StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_BC0[168], 710); /*0x5ddaaa*/
  v7 = GetStringCSF(aTxtUnablePlayW, 0, &stru_830620.__pad_BC0[168], 710); /*0x5ddab5*/
  Dialog::ShowMessageBox((int)v7, StringCSF, 0, 0, 0, a1); /*0x5ddabf*/
  memset(v11, 0, sizeof(v11)); /*0x5ddad3*/
  v12 = 0; /*0x5ddad5*/
  v13 = 0; /*0x5ddad7*/
  v11[0] = 10; /*0x5ddae2*/
  strcpy((char *)&v11[1], &HouseClass_Player.__pad_5568[8396]); /*0x5ddaf9*/
  for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18336]; ++i ) /*0x5ddb0e*/
  {
    Network::SendMessage( /*0x5ddb32*/
      (int)&HouseClass_Player.__pad_5568[22284],
      (int)v11,
      455,
      1,
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * i) + 40,
      0,
      0);
    Event::Dispatch(); /*0x5ddb37*/
  }
  Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v11, 455, 0, 0, 0, 0); /*0x5ddb5d*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17224] ) /*0x5ddb69*/
    Network::SendMessage( /*0x5ddb85*/
      (int)&HouseClass_Player.__pad_5568[22284],
      (int)v11,
      455,
      0,
      (int)&HouseClass_Player.__pad_5568[17228],
      0,
      0);
  while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 ) /*0x5ddb96*/
  {
    if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) ) /*0x5ddb9d*/
      break; /*0x5ddba4*/
    Event::Dispatch(); /*0x5ddba6*/
  }
  return 0; /*0x5dda06*/
}
}
} // namespace gamemd

// 0x5DF180
namespace gamemd {
int SkirmishDialogProc(SkirmishDialog * aP0, int a2, unsigned short a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SkirmishDialogProc(SkirmishDialog *aP0, int a2, unsigned __int16 a3, HWND a4)
{
  if ( !*((_BYTE *)&g_MatrixTransformState + 5208) ) /*0x5df189*/
  {
    switch ( a2 ) /*0x5df198*/
    {
      case 273: /*0x5df198*/
        if ( a3 > 0x624u ) /*0x5df262*/
        {
          if ( a3 == 1690 ) /*0x5df395*/
          {
            HouseClass_Player.__pad_5568[8111] = SendDlgItemMessageA((HWND)aP0, 1690, 0xF0u, 0, 0) == 1; /*0x5df3fb*/
          }
          else if ( a3 == 1693 ) /*0x5df39a*/
          {
            HouseClass_Player.__pad_5568[8112] = 0; /*0x5df3af*/
            if ( SendDlgItemMessageA((HWND)aP0, 1693, 0xF0u, 0, 0) == 1 ) /*0x5df3c3*/
            {
              HouseClass_Player.__pad_5568[8112] = 1; /*0x5df3c6*/
              return 0; /*0x5df3cf*/
            }
          }
        }
        else
        {
          switch ( a3 ) /*0x5df268*/
          {
            case 0x624u: /*0x5df268*/
              HouseClass_Player.__pad_5568[8108] = 0; /*0x5df36d*/
              if ( SendDlgItemMessageA((HWND)aP0, 1572, 0xF0u, 0, 0) == 1 ) /*0x5df381*/
              {
                HouseClass_Player.__pad_5568[8108] = 1; /*0x5df384*/
                return 0; /*0x5df38d*/
              }
              break;
            case 0x3E8u: /*0x5df268*/
              HouseClass_Player.__pad_5568[8300] = 0; /*0x5df333*/
              if ( SendDlgItemMessageA((HWND)aP0, 1000, 0xF0u, 0, 0) == 1 ) /*0x5df347*/
              {
                HouseClass_Player.__pad_5568[8300] = 1; /*0x5df34e*/
                return 0; /*0x5df357*/
              }
              break;
            case 0x54Du: /*0x5df268*/
              HouseClass_Player.__pad_5568[8109] = 0; /*0x5df2f9*/
              if ( SendDlgItemMessageA((HWND)aP0, 1357, 0xF0u, 0, 0) == 1 ) /*0x5df30d*/
              {
                HouseClass_Player.__pad_5568[8109] = 1; /*0x5df314*/
                return 0; /*0x5df31d*/
              }
              break;
            case 0x54Eu: /*0x5df268*/
              HouseClass_Player.__pad_5568[8110] = 0; /*0x5df2a0*/
              if ( SendDlgItemMessageA((HWND)aP0, 1358, 0xF0u, 0, 0) == 1 ) /*0x5df2b0*/
              {
                HouseClass_Player.__pad_5568[8110] = 1; /*0x5df2bb*/
                if ( !HouseClass_Player.__pad_5568[8100] ) /*0x5df2c3*/
                {
                  HouseClass_Player.__pad_5568[8100] = 1; /*0x5df2d7*/
                  SendDlgItemMessageA((HWND)aP0, 1355, 0xF1u, 1u, 0); /*0x5df2dd*/
                  return 0; /*0x5df2e3*/
                }
              }
              break;
          }
        }
        break;
      case 276: /*0x5df198*/
        if ( GetDlgItem((HWND)aP0, 1321) == a4 ) /*0x5df1e3*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = 6 - SendDlgItemMessageA((HWND)aP0, 1321, 0x400u, 0, 0); /*0x5df1fd*/
        if ( GetDlgItem((HWND)aP0, 1026) == a4 ) /*0x5df20d*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = SendDlgItemMessageA((HWND)aP0, 1026, 0x400u, 0, 0); /*0x5df220*/
        if ( GetDlgItem((HWND)aP0, 1359) == a4 ) /*0x5df231*/
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = SendDlgItemMessageA((HWND)aP0, 1359, 0x400u, 0, 0); /*0x5df248*/
          return 0; /*0x5df251*/
        }
        break;
      case 1175: /*0x5df198*/
        InitSkirmishDialogControls((HWND)aP0, 1); /*0x5df1b7*/
        return 0; /*0x5df1c0*/
    }
  }
  return 0; /*0x5df1bc*/
}
}
} // namespace gamemd

// 0x5DF410
namespace gamemd {
int Network_SendJoinRequest(int a1, unsigned char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Network_SendJoinRequest(int a1, unsigned __int8 a2)
{
  wchar_t *String; // eax
  wchar_t *v5; // eax
  char v6; // bl
  int v7; // ebx
  wchar_t *v8; // eax
  void *v9; // [esp+10h] [ebp-1DCh] BYREF
  int v10; // [esp+14h] [ebp-1D8h]
  int v11; // [esp+1Ch] [ebp-1D0h]
  _DWORD v12[113]; // [esp+24h] [ebp-1C8h] BYREF
  __int16 v13; // [esp+1E8h] [ebp-4h]
  char v14; // [esp+1EAh] [ebp-2h]

  v10 = a1; /*0x5df41f*/
  if ( a1 < 1 ) /*0x5df423*/
  {
    String = GetStringCSF(MEMORY[0x8315C0], 0, MEMORY[0x831288], 3712); /*0x5df436*/
    Dialog::ShowMessage(-1, (size_t)String); /*0x5df442*/
    PlayVocClass(g_RulesClass_Instance->MovieOff, 0x2000, 1.0, 0); /*0x5df462*/
    return 0; /*0x5df473*/
  }
  if ( MEMORY[0xA8DA6C] <= 1 || a1 > MEMORY[0xA8DA6C] ) /*0x5df484*/
  {
    v5 = GetStringCSF(MEMORY[0x83156C], 0, MEMORY[0x831288], 3719); /*0x5df87b*/
  }
  else if ( strlen(MEMORY[0xA8B380]) ) /*0x5df48f*/
  {
    if ( !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC117C])) /*0x5df6c6*/
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1180]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1184]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1188]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC118C]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1190]))
      || !strcmp(MEMORY[0xA8B380], ToWideStringChar((char *)MEMORY[0xAC1194]))
      || (String::Assign((char **)&v9, MEMORY[0xA8B380]), v6 = Network_Send(&v9), DeleteAndZero(&v9), v6) )
    {
      v8 = GetStringCSF(MEMORY[0x831580], 0, MEMORY[0x831288], 3742); /*0x5df82c*/
      Dialog::ShowMessage(-1, (size_t)v8); /*0x5df838*/
      PlayVocClass(g_RulesClass_Instance->MovieOff, 0x2000, 1.0, 0); /*0x5df858*/
      return 0; /*0x5df869*/
    }
    v7 = v10; /*0x5df6d1*/
    if ( *(_BYTE *)(*(_DWORD *)(MEMORY[0xA8DA60] + 4 * v10) + 52) ) /*0x5df6d8*/
    {
      memset(v12, 0, sizeof(v12)); /*0x5df704*/
      v13 = 0; /*0x5df706*/
      v14 = 0; /*0x5df708*/
      v12[0] = 6; /*0x5df713*/
      strcpy((char *)&v12[1], MEMORY[0xA8B380]); /*0x5df72e*/
      strcpy((char *)&v12[6], MEMORY[0xABFF7C]); /*0x5df750*/
      *(_DWORD *)((char *)&v12[11] + 3) = Session::GetPlayerOption(g_GameMode_Current); /*0x5df768*/
      *(_DWORD *)((char *)&v12[12] + 3) = Session::GetPlayerColor(g_GameMode_Current); /*0x5df776*/
      *(_DWORD *)((char *)&v12[14] + 3) = NetworkBuffer::GetField2(&MEMORY[0xA8ECE0]); /*0x5df784*/
      *(_DWORD *)((char *)&v12[15] + 3) = NetworkBuffer::GetField3(&MEMORY[0xA8ECE0]); /*0x5df799*/
      *(_DWORD *)((char *)&v12[16] + 3) = MEMORY[0xAC026C]; /*0x5df7a2*/
      *(_DWORD *)((char *)&v12[18] + 3) = MEMORY[0xAC0270]; /*0x5df7a6*/
      *(_DWORD *)((char *)&v12[17] + 3) = MEMORY[0xAC0274]; /*0x5df7aa*/
      *(_DWORD *)((char *)&v12[19] + 3) = GameOptions::GetEntry(); /*0x5df7bf*/
      *(_DWORD *)((char *)&v12[21] + 3) = a2; /*0x5df7c3*/
      Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v12, 455, 1, *(_DWORD *)(MEMORY[0xA8DA60] + 4 * v7) + 40, 0, 0); /*0x5df7e3*/
      MEMORY[0xAC0230] = Timer::GetTicks(); /*0x5df7fa*/
      MEMORY[0xAC0234] = v11; /*0x5df800*/
      MEMORY[0xAC0238] = 600; /*0x5df806*/
      return 1; /*0x5df81a*/
    }
    v5 = GetStringCSF((wchar_t *)MEMORY[0x83159C], 0, MEMORY[0x831288], 3750); /*0x5df6f0*/
  }
  else
  {
    v5 = GetStringCSF((wchar_t *)MEMORY[0x8315B0], 0, MEMORY[0x831288], 3727); /*0x5df4ac*/
  }
  Dialog::ShowMessage(-1, (size_t)v5); /*0x5df888*/
  PlayVocClass(g_RulesClass_Instance->MovieOff, 0x2000, 1.0, 0); /*0x5df8a7*/
  return 0; /*0x5df469*/
}
}
} // namespace gamemd

// 0x5DF9E0
namespace gamemd {
signed int Network_SendHeartbeat(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
signed int __fastcall Network_SendHeartbeat(int a1, int a2, int a3, int a4)
{
  DWORD Ticks; // eax
  int v6; // esi
  signed int v7; // eax
  int v8; // esi
  signed int v9; // eax
  signed int result; // eax
  int v11; // esi
  int v12; // edx
  int v13; // [esp+10h] [ebp-1D4h]
  _DWORD v15[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v16; // [esp+1E0h] [ebp-4h]
  char v17; // [esp+1E2h] [ebp-2h]

  if ( (MEMORY[0xAC01BC] & 1) == 0 ) /*0x5df9fb*/
  {
    MEMORY[0xAC01BC] |= 1u; /*0x5dfa06*/
    MEMORY[0xAC0220] = Timer::GetTicks(); /*0x5dfa11*/
    MEMORY[0xAC0228] = 0; /*0x5dfa16*/
    atexit(nullsub_27); /*0x5dfa21*/
  }
  if ( (MEMORY[0xAC01BC] & 2) == 0 ) /*0x5dfa30*/
  {
    MEMORY[0xAC01BC] |= 2u; /*0x5dfa3c*/
    MEMORY[0xAC0200] = Timer::GetTicks(); /*0x5dfa47*/
    MEMORY[0xAC0208] = 0; /*0x5dfa4c*/
    atexit(nullsub_26); /*0x5dfa57*/
  }
  if ( (MEMORY[0xAC01BC] & 4) == 0 ) /*0x5dfa66*/
  {
    MEMORY[0xAC01BC] |= 4u; /*0x5dfa72*/
    MEMORY[0xABFF70] = Timer::GetTicks(); /*0x5dfa7d*/
    MEMORY[0xABFF78] = 0; /*0x5dfa82*/
    atexit(nullsub_25); /*0x5dfa8d*/
  }
  if ( a4 ) /*0x5dfa9c*/
  {
    MEMORY[0xAC0220] = Timer::GetTicks(); /*0x5dfaac*/
    MEMORY[0xAC0228] = 120; /*0x5dfab5*/
    MEMORY[0xAC0224] = v13; /*0x5dfabf*/
    Ticks = Timer::GetTicks(); /*0x5dfac4*/
    MEMORY[0xAC0208] = 35; /*0x5dfad2*/
    MEMORY[0xAC0200] = Ticks; /*0x5dfadc*/
    MEMORY[0xAC0204] = v13; /*0x5dfae1*/
    MEMORY[0xABFF70] = Timer::GetTicks(); /*0x5dfaec*/
    MEMORY[0xABFF74] = v13; /*0x5dfafa*/
    MEMORY[0xABFF78] = 83; /*0x5dfaff*/
  }
  v6 = MEMORY[0xAC0228]; /*0x5dfb0a*/
  if ( MEMORY[0xAC0220] == -1 ) /*0x5dfb13*/
  {
LABEL_12:
    if ( v6 && !a1 ) /*0x5dfb31*/
      goto LABEL_18; /*0x5dfb31*/
    goto LABEL_14; /*0x5dfb31*/
  }
  v7 = Timer::GetTicks() - MEMORY[0xAC0220]; /*0x5dfb1f*/
  if ( v7 < v6 ) /*0x5dfb27*/
  {
    v6 -= v7; /*0x5dfb29*/
    goto LABEL_12; /*0x5dfb29*/
  }
LABEL_14:
  MEMORY[0xAC0220] = Timer::GetTicks(); /*0x5dfb37*/
  MEMORY[0xAC0224] = v13; /*0x5dfb4e*/
  MEMORY[0xAC0228] = 120; /*0x5dfb54*/
  if ( Dialog::GetCurrentType() != 188 || a1 ) /*0x5dfb68*/
  {
    memset(v15, 0, sizeof(v15)); /*0x5dfb79*/
    v16 = 0; /*0x5dfb7b*/
    v17 = 0; /*0x5dfb7d*/
    v15[0] = 0; /*0x5dfb88*/
    strcpy((char *)&v15[1], MEMORY[0xA8B380]); /*0x5dfb9d*/
    Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, 0, 0, 0); /*0x5dfbb7*/
    if ( MEMORY[0xA8D5FC] ) /*0x5dfbc2*/
      Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, (int)&MEMORY[0xA8D600], 0, 0); /*0x5dfbdb*/
  }
LABEL_18:
  if ( (int)g_NetworkSetupConfig <= 0 || (int)g_NetworkSetupConfig >= MEMORY[0xA8DA6C] ) /*0x5dfbef*/
  {
LABEL_24:
    if ( !a2 ) /*0x5dfc1f*/
      goto LABEL_27; /*0x5dfc1f*/
    goto LABEL_25; /*0x5dfc1f*/
  }
  v8 = MEMORY[0xAC0208]; /*0x5dfbf6*/
  if ( MEMORY[0xAC0200] != -1 ) /*0x5dfbff*/
  {
    v9 = Timer::GetTicks() - MEMORY[0xAC0200]; /*0x5dfc0b*/
    if ( v9 >= v8 ) /*0x5dfc13*/
      goto LABEL_25; /*0x5dfc13*/
    v8 -= v9; /*0x5dfc15*/
  }
  if ( v8 ) /*0x5dfc19*/
    goto LABEL_24; /*0x5dfc19*/
LABEL_25:
  MEMORY[0xAC0200] = Timer::GetTicks(); /*0x5dfc25*/
  MEMORY[0xAC0204] = v13; /*0x5dfc3c*/
  MEMORY[0xAC0208] = 35; /*0x5dfc41*/
  memset(v15, 0, sizeof(v15)); /*0x5dfc52*/
  v16 = 0; /*0x5dfc60*/
  v17 = 0; /*0x5dfc62*/
  v15[0] = 2; /*0x5dfc63*/
  strcpy((char *)&v15[1], ToWideStringChar(*(char **)(MEMORY[0xA8DA60] + 4 * g_NetworkSetupConfig))); /*0x5dfc8f*/
  Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, 0, 0, 0); /*0x5dfca9*/
  if ( MEMORY[0xA8D5FC] ) /*0x5dfcb4*/
    Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, (int)&MEMORY[0xA8D600], 0, 0); /*0x5dfccd*/
LABEL_27:
  result = MEMORY[0xABFF70]; /*0x5dfcd2*/
  v11 = MEMORY[0xABFF78]; /*0x5dfcd7*/
  if ( MEMORY[0xABFF70] != -1 ) /*0x5dfce0*/
  {
    result = Timer::GetTicks() - MEMORY[0xABFF70]; /*0x5dfcec*/
    if ( result >= v11 ) /*0x5dfcf4*/
      goto LABEL_31; /*0x5dfcf4*/
    v11 -= result; /*0x5dfcf6*/
  }
  if ( v11 ) /*0x5dfcfa*/
    goto LABEL_32; /*0x5dfcfa*/
LABEL_31:
  if ( g_NetworkSettingsState >= 2 ) /*0x5dfd03*/
  {
LABEL_32:
    if ( !a3 ) /*0x5dfd0c*/
      return result; /*0x5dfd0c*/
  }
  MEMORY[0xABFF70] = Timer::GetTicks(); /*0x5dfd12*/
  MEMORY[0xABFF74] = v13; /*0x5dfd29*/
  MEMORY[0xABFF78] = 83; /*0x5dfd2e*/
  memset(v15, 0, sizeof(v15)); /*0x5dfd3f*/
  v16 = 0; /*0x5dfd41*/
  v17 = 0; /*0x5dfd43*/
  v15[0] = 4; /*0x5dfd58*/
  v12 = MEMORY[0xA8B394]; /*0x5dfd66*/
  strcpy((char *)&v15[1], MEMORY[0xA8B380]); /*0x5dfd6f*/
  *(_DWORD *)((char *)&v15[11] + 3) = MEMORY[0xA8B37C]; /*0x5dfd86*/
  *(_DWORD *)((char *)&v15[12] + 3) = v12; /*0x5dfd95*/
  result = Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, 0, 0, 0); /*0x5dfd99*/
  if ( MEMORY[0xA8D5FC] ) /*0x5dfda4*/
    return Network::SendMessage((int)&MEMORY[0xA8E9C0], (int)v15, 455, 0, (int)&MEMORY[0xA8D600], 0, 0); /*0x5dfdbd*/
  return result; /*0x5dfdc2*/
}
}
} // namespace gamemd

// 0x5DFE00
namespace gamemd {
char Network_SendPlayerOptions(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Network_SendPlayerOptions(_DWORD *a1, int a2)
{
  char *v3; // eax
  char *v4; // eax
  const void *v6; // ebx
  char *v7; // eax
  char *v8; // eax
  _DWORD v9[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v10; // [esp+1D4h] [ebp-4h]
  char v11; // [esp+1D6h] [ebp-2h]

  if ( *a1 || MEMORY[0xA8D60C] ) /*0x5dfe1e*/
  {
    if ( *a1 != 2 ) /*0x5dff1a*/
      return 0; /*0x5dff1a*/
    v6 = a1 + 1; /*0x5dff20*/
    v7 = ToWideStringChar((char *)MEMORY[0xA8D610]); /*0x5dff28*/
    if ( _strcmpi(v6, v7) || !wcslen(MEMORY[0xA8D610]) || MEMORY[0xA8D60C] || g_NetworkSettingsState < 2 ) /*0x5dff68*/
    {
      return 0; /*0x5e00a0*/
    }
    else
    {
      memset(v9, 0, sizeof(v9)); /*0x5dff7d*/
      v10 = 0; /*0x5dff7f*/
      v11 = 0; /*0x5dff81*/
      v9[0] = 3; /*0x5dff8c*/
      strcpy((char *)&v9[1], MEMORY[0xA8B380]); /*0x5dffa7*/
      strcpy((char *)&v9[6], MEMORY[0xABFF7C]); /*0x5dffc9*/
      *(_DWORD *)((char *)&v9[11] + 3) = Session::GetPlayerOption(g_GameMode_Current); /*0x5dffe1*/
      *(_DWORD *)((char *)&v9[12] + 3) = Session::GetPlayerColor(g_GameMode_Current); /*0x5dffef*/
      *(_DWORD *)((char *)&v9[13] + 3) = WideString::Hash(MEMORY[0xA8D610]); /*0x5dfffe*/
      *(_DWORD *)((char *)&v9[20] + 3) = MEMORY[0xA8DA8C]; /*0x5e0009*/
      *(_DWORD *)((char *)&v9[21] + 3) = MEMORY[0xA8DA8C] == MEMORY[0x8316A4]; /*0x5e0019*/
      if ( MEMORY[0xA8DA84] ) /*0x5e001d*/
      {
        if ( *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 107) != -1 ) /*0x5e0038*/
          *(_DWORD *)((char *)&v9[21] + 3) = 0; /*0x5e003a*/
        Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v9, 455, 1, a2, 0, 0); /*0x5e0058*/
        v8 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x5e0065*/
        if ( !_strcmpi(v6, v8) ) /*0x5e006c*/
        {
          CheckGameSettingsChanged(1, 1); /*0x5e007c*/
          if ( MEMORY[0xA8B23C] ) /*0x5e0089*/
            (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 96))(MEMORY[0xA8B23C]); /*0x5e008d*/
        }
        return 1; /*0x5e0093*/
      }
      else
      {
        return 1; /*0x5e0022*/
      }
    }
  }
  else
  {
    if ( wcslen(MEMORY[0xA8D610]) ) /*0x5dfe29*/
    {
      if ( !MEMORY[0xA8D60E] || (v3 = ToWideStringChar((char *)MEMORY[0xA8D610]), !_strcmpi(MEMORY[0xA8B380], v3)) ) /*0x5dfe52*/
      {
        v4 = ToWideStringChar((char *)MEMORY[0xA8D610]); /*0x5dfe67*/
        if ( _strcmpi(MEMORY[0xA8B380], v4) && !MEMORY[0xA8ED5C] ) /*0x5dfe85*/
          return 1; /*0x5dfe93*/
        memset(v9, 0, sizeof(v9)); /*0x5dfe9f*/
        v10 = 0; /*0x5dfea1*/
        v11 = 0; /*0x5dfea3*/
        v9[0] = 1; /*0x5dfea9*/
        strcpy((char *)&v9[1], ToWideStringChar((char *)MEMORY[0xA8D610])); /*0x5dfed4*/
        *(_DWORD *)((char *)&v9[11] + 3) = *(_DWORD *)((char *)&v9[11] + 3) & 0xFFFFFFFE | MEMORY[0xA8D60E] & 1; /*0x5dfef6*/
        Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v9, 455, 1, a2, 0, 0); /*0x5dff05*/
      }
    }
    return 1; /*0x5dff0d*/
  }
}
}
} // namespace gamemd

// 0x5D0590
namespace gamemd {
void nullsub_24()
{
  ;
}
} // namespace gamemd

// 0x5D30C0
namespace gamemd {
unsigned int * E4Recv_5D30C0::sub_5D30C0(wchar_t * String, unsigned int * a3)
{
{
    wchar_t *v3;
    int v4;
    size_t v6;
    int v7;
    int v8;
    int v10;
    v3 = String;
    v4 = 0;
    v10 = 0;
    if ( String && (v6 = wcslen(String)) != 0 )
  {
    v7 = this->M8;
    while ( 1 )
    {
    for ( LOWORD(v6) = *v3; *v3; LOWORD(v6) = *v3 )
      {
    if ( (short)v6 == 10 )
    break;
    ++v3;
    v6 = this->Vf4(v6);
    v4 += v6;
      }
    if ( v4 > v10 )
    v10 = v4;
    if ( *v3 == 10 )
      {
    v6 = this->M8;
    ++v3;
    v7 += v6;
      }
    if ( !*v3 )
    break;
    v4 = 0;
    }
    v8 = this->M4;
    *((int*)(a3) + 3) = v7;
    *((int*)(a3) + 2) = v10 + v8;
    *a3 = 0;
    *((int*)(a3) + 1) = 0;
    return a3;
  }
    else
  {
    *a3 = 0;
    *((int*)(a3) + 1) = 0;
    *((int*)(a3) + 2) = 0;
    *((int*)(a3) + 3) = 0;
    return a3;
  }
}
}
} // namespace gamemd

// 0x5D36A0
namespace gamemd {
int sub_5D36A0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
{
    int result;
    unsigned int v5;
    int *WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 == 273 )
    {
    v5 = HIWORD(a3);
    WindowLongA = (int *)GetWindowLongA(hWnd, 8);
    if ( (unsigned short)a3 > 0x5AEu )
      {
    if ( (unsigned short)a3 == 1455 && !v5 )
    *WindowLongA = 2;
      }
    else if ( (unsigned short)a3 == 1454 )
      {
    if ( !v5 )
        {
    *WindowLongA = 0;
    return 0;
        }
      }
    else if ( (short)a3 && (unsigned short)a3 <= 2u && !v5 )
      {
    *WindowLongA = 1;
    return 0;
      }
    }
    else if ( a2 == 534 )
    {
    return (unsigned char)Window::ClampToScreen(a4);
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D37C0
namespace gamemd {
int sub_5D37C0()
{
{
    DataGlobal_ABFC18 = 0;
    DataGlobal_ABFC1C = 0;
    DataGlobal_ABFC20 = 0;
    DataGlobal_ABFC24 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D37E0
namespace gamemd {
void sub_5D37E0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABFC30 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5D3850
namespace gamemd {
void sub_5D3850()
{
{
    DataGlobal_ABFC60 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5D3870
namespace gamemd {
void sub_5D3870()
{
{
    DataGlobal_ABFC38 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5D3890
namespace gamemd {
void sub_5D3890()
{
{
    DataGlobal_ABFC10 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5D38B0
namespace gamemd {
long long sub_5D38B0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABFC10 - DataGlobal_ABFC38);
    result = Math::RoundToInt(v0 * DataGlobal_ABFC30 * 0.5);
    DataGlobal_ABFC88 = result;
    return result;
}
}
} // namespace gamemd

// 0x5D4C90
namespace gamemd {
void sub_5D4C90()
{
{
    DataGlobal_ABFC90 = (int)&vt_VectorClass_HWND;
    if ( DataGlobal_ABFC94 && DataGlobal_ABFC9D )
  {
    __3_YAXPAX_Z(DataGlobal_ABFC94);
    DataGlobal_ABFC94 = 0;
  }
    DataGlobal_ABFC9D = 0;
    DataGlobal_ABFC98 = 0;
}
}
} // namespace gamemd

// 0x5D4D10
namespace gamemd {
void sub_5D4D10()
{
{
    DataGlobal_ABFCB8 = (int)&vt_VectorClass_AcceleratorTracker;
    if ( DataGlobal_ABFCBC && DataGlobal_ABFCC5 )
  {
    __3_YAXPAX_Z(DataGlobal_ABFCBC);
    DataGlobal_ABFCBC = 0;
  }
    DataGlobal_ABFCC5 = 0;
    DataGlobal_ABFCC0 = 0;
}
}
} // namespace gamemd

// 0x5D5860
namespace gamemd {
void nullsub_192(int a1)
{
  ;
}
} // namespace gamemd

// 0x5D5890
namespace gamemd {
int timeGetTime()
{
    DWORD __stdcall timeGetTime()
{
    return __imp_timeGetTime();
}
}
} // namespace gamemd

// 0x5D58A0
namespace gamemd {
int _0timeGetTime()
{
    DWORD __stdcall 0timeGetTime()
{
    return timeGetTime();
}
}
} // namespace gamemd

// 0x5D5940
namespace gamemd {
void sub_5D5940()
{
{
    DataGlobal_ABFD60 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5D5960
namespace gamemd {
void sub_5D5960()
{
{
    DataGlobal_ABFD38 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5D5980
namespace gamemd {
long long sub_5D5980()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABFD38 - DataGlobal_ABFD60);
    result = Math::RoundToInt(v0 * DataGlobal_ABFD58 * 0.5);
    DataGlobal_ABFDD0 = result;
    return result;
}
}
} // namespace gamemd

// 0x5D59C0
namespace gamemd {
void sub_5D59C0()
{
{
    DataGlobal_ABFD68 = Math::ArcTan((double)DataGlobal_ABFDD0 * 0.00390625);
}
}
} // namespace gamemd

// 0x5D59F0
namespace gamemd {
void sub_5D59F0()
{
{
    DataGlobal_ABFD88 = Math::ArcTan((double)(2 * DataGlobal_ABFDD0) / DataGlobal_ABFD58);
}
}
} // namespace gamemd

// 0x5D5A50
namespace gamemd {
int sub_5D5A50()
{
{
    DataGlobal_ABFD50 = 0;
    DataGlobal_ABFD52 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D5A60
namespace gamemd {
int sub_5D5A60()
{
{
    DataGlobal_ABFD78 = 0;
    DataGlobal_ABFD7C = 0;
    DataGlobal_ABFD80 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D5A80
namespace gamemd {
int sub_5D5A80()
{
{
    DataGlobal_ABFDC0 = 0;
    DataGlobal_ABFDB8 = 128;
    DataGlobal_ABFDBC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5D5AA0
namespace gamemd {
int sub_5D5AA0()
{
{
    DataGlobal_ABFD40 = 0;
    DataGlobal_ABFD44 = 0;
    DataGlobal_ABFD48 = 0;
    DataGlobal_ABFD4C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D7550
namespace gamemd {
int sub_5D7550(int a1)
{
{
    return *(int *)(*(int *)&HouseClass_Array->__pad_0[4 * a1] + 90204);
}
}
} // namespace gamemd

// 0x5D7580
namespace gamemd {
unsigned int * E4Recv_5D7580::sub_5D7580()
{
{
    this->vfptr = &vt_MultiplayerGameMode_InitializerBase;
    return &this->vfptr;
}
}
} // namespace gamemd

// 0x5D7CD0
namespace gamemd {
void E4Recv_5D7CD0::sub_5D7CD0()
{
{
    this->vfptr = &vt_MultiplayerGameMode_InitializerBase;
}
}
} // namespace gamemd

// 0x5D7FF0
namespace gamemd {
unsigned int * E4Recv_5D7FF0::___Gfacet_locale_std__UAEPAXI_Z_127(char a2)
{
{
    *(void**)this = &vt_MultiplayerGameMode_InitializerBase;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x5D8010
namespace gamemd {
unsigned int * E4Recv_5D8010::___Gfacet_locale_std__UAEPAXI_Z_128(char a2)
{
{
    *(void**)this = &vt_MultiplayerGameMode_InitializerBase;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x5D8A40
namespace gamemd {
int sub_5D8A40()
{
{
    DataGlobal_ABFDE0 = 0;
    DataGlobal_ABFDE4 = 0;
    DataGlobal_ABFDE8 = 0;
    DataGlobal_ABFDEC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D8A60
namespace gamemd {
void sub_5D8A60()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABFDF8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5D8A90
namespace gamemd {
void sub_5D8A90()
{
{
    DataGlobal_ABFE48 = DataGlobal_ABFDF8 / 60.0;
}
}
} // namespace gamemd

// 0x5D8AB0
namespace gamemd {
void sub_5D8AB0()
{
{
    DataGlobal_ABFE30 = 1.0 / DataGlobal_ABFE48;
}
}
} // namespace gamemd

// 0x5D8AD0
namespace gamemd {
void sub_5D8AD0()
{
{
    DataGlobal_ABFE28 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5D8AF0
namespace gamemd {
void sub_5D8AF0()
{
{
    DataGlobal_ABFE00 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5D8B10
namespace gamemd {
void sub_5D8B10()
{
{
    DataGlobal_ABFDD8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5D8B30
namespace gamemd {
long long sub_5D8B30()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABFDD8 - DataGlobal_ABFE00);
    result = Math::RoundToInt(v0 * DataGlobal_ABFDF8 * 0.5);
    DataGlobal_ABFE50 = result;
    return result;
}
}
} // namespace gamemd

// 0x5D8B70
namespace gamemd {
void sub_5D8B70()
{
{
    DataGlobal_ABFE08 = Math::ArcTan((double)DataGlobal_ABFE50 * 0.00390625);
}
}
} // namespace gamemd

// 0x5D8BA0
namespace gamemd {
void sub_5D8BA0()
{
{
    DataGlobal_ABFE20 = Math::ArcTan((double)(2 * DataGlobal_ABFE50) / DataGlobal_ABFDF8);
}
}
} // namespace gamemd

// 0x5D8BD0
namespace gamemd {
long long sub_5D8BD0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABFE50) + 0.5);
    DataGlobal_ABFE44 = result;
    return result;
}
}
} // namespace gamemd

// 0x5D8C00
namespace gamemd {
int sub_5D8C00()
{
{
    DataGlobal_ABFDF0 = 0;
    DataGlobal_ABFDF2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D8C10
namespace gamemd {
int sub_5D8C10()
{
{
    DataGlobal_ABFE10 = 0;
    DataGlobal_ABFE14 = 0;
    DataGlobal_ABFE18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D8C30
namespace gamemd {
int sub_5D8C30()
{
{
    DataGlobal_ABFE40 = 0;
    DataGlobal_ABFE38 = 128;
    DataGlobal_ABFE3C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5D8D80
namespace gamemd {
void sub_5D8D80()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABFE78 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5D8DB0
namespace gamemd {
void sub_5D8DB0()
{
{
    DataGlobal_ABFEE0 = DataGlobal_ABFE78 / 60.0;
}
}
} // namespace gamemd

// 0x5D8DD0
namespace gamemd {
void sub_5D8DD0()
{
{
    DataGlobal_ABFEB0 = 1.0 / DataGlobal_ABFEE0;
}
}
} // namespace gamemd

// 0x5D8DF0
namespace gamemd {
void sub_5D8DF0()
{
{
    DataGlobal_ABFEA8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5D8E10
namespace gamemd {
void sub_5D8E10()
{
{
    DataGlobal_ABFE80 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5D8E30
namespace gamemd {
void sub_5D8E30()
{
{
    DataGlobal_ABFE58 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5D8E50
namespace gamemd {
long long sub_5D8E50()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABFE58 - DataGlobal_ABFE80);
    result = Math::RoundToInt(v0 * DataGlobal_ABFE78 * 0.5);
    DataGlobal_ABFEE8 = result;
    return result;
}
}
} // namespace gamemd

// 0x5D8E90
namespace gamemd {
void sub_5D8E90()
{
{
    DataGlobal_ABFE88 = Math::ArcTan((double)DataGlobal_ABFEE8 * 0.00390625);
}
}
} // namespace gamemd

// 0x5D8EC0
namespace gamemd {
void sub_5D8EC0()
{
{
    DataGlobal_ABFEA0 = Math::ArcTan((double)(2 * DataGlobal_ABFEE8) / DataGlobal_ABFE78);
}
}
} // namespace gamemd

// 0x5D8EF0
namespace gamemd {
long long sub_5D8EF0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABFEE8) + 0.5);
    DataGlobal_ABFEDC = result;
    return result;
}
}
} // namespace gamemd

// 0x5D8F20
namespace gamemd {
int sub_5D8F20()
{
{
    DataGlobal_ABFE70 = 0;
    DataGlobal_ABFE72 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D8F30
namespace gamemd {
int sub_5D8F30()
{
{
    DataGlobal_ABFE90 = 0;
    DataGlobal_ABFE94 = 0;
    DataGlobal_ABFE98 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D8F50
namespace gamemd {
int sub_5D8F50()
{
{
    DataGlobal_ABFEC0 = 0;
    DataGlobal_ABFEB8 = 128;
    DataGlobal_ABFEBC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5D8F70
namespace gamemd {
int sub_5D8F70()
{
{
    DataGlobal_ABFE60 = 0;
    DataGlobal_ABFE64 = 0;
    DataGlobal_ABFE68 = 0;
    DataGlobal_ABFE6C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D8F90
namespace gamemd {
int sub_5D8F90()
{
{
    DataGlobal_ABFEC8 = 0;
    DataGlobal_ABFECC = 0;
    DataGlobal_ABFED0 = 0;
    DataGlobal_ABFED4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5D8FB0
namespace gamemd {
unsigned int * E4Recv_5D8FB0::sub_5D8FB0()
{
{
    *(void**)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    return this;
}
}
} // namespace gamemd

// 0x5D8FC0
namespace gamemd {
void E4Recv_5D8FC0::__Release__NonReentrantLock_details_Concurrency__QAEXXZ()
{
{
    *(int *)this = 0;
}
}
} // namespace gamemd

// 0x5DA4B0
namespace gamemd {
int sub_5DA4B0()
{
{
    DataGlobal_ABFEF8 = 0;
    DataGlobal_ABFEFC = 0;
    DataGlobal_ABFF00 = 0;
    DataGlobal_ABFF04 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5DA4D0
namespace gamemd {
void sub_5DA4D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABFF10 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5DA500
namespace gamemd {
void sub_5DA500()
{
{
    DataGlobal_ABFF60 = DataGlobal_ABFF10 / 60.0;
}
}
} // namespace gamemd

// 0x5DA520
namespace gamemd {
void sub_5DA520()
{
{
    DataGlobal_ABFF48 = 1.0 / DataGlobal_ABFF60;
}
}
} // namespace gamemd

// 0x5DA540
namespace gamemd {
void sub_5DA540()
{
{
    DataGlobal_ABFF40 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5DA560
namespace gamemd {
void sub_5DA560()
{
{
    DataGlobal_ABFF18 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5DA580
namespace gamemd {
void sub_5DA580()
{
{
    DataGlobal_ABFEF0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5DA5A0
namespace gamemd {
long long sub_5DA5A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABFEF0 - DataGlobal_ABFF18);
    result = Math::RoundToInt(v0 * DataGlobal_ABFF10 * 0.5);
    DataGlobal_ABFF68 = result;
    return result;
}
}
} // namespace gamemd

// 0x5DA5E0
namespace gamemd {
void sub_5DA5E0()
{
{
    DataGlobal_ABFF20 = Math::ArcTan((double)DataGlobal_ABFF68 * 0.00390625);
}
}
} // namespace gamemd

// 0x5DA610
namespace gamemd {
void sub_5DA610()
{
{
    DataGlobal_ABFF38 = Math::ArcTan((double)(2 * DataGlobal_ABFF68) / DataGlobal_ABFF10);
}
}
} // namespace gamemd

// 0x5DA640
namespace gamemd {
long long sub_5DA640()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABFF68) + 0.5);
    DataGlobal_ABFF5C = result;
    return result;
}
}
} // namespace gamemd

// 0x5DA670
namespace gamemd {
int sub_5DA670()
{
{
    DataGlobal_ABFF08 = 0;
    DataGlobal_ABFF0A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5DA680
namespace gamemd {
int sub_5DA680()
{
{
    DataGlobal_ABFF28 = 0;
    DataGlobal_ABFF2C = 0;
    DataGlobal_ABFF30 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5DA6A0
namespace gamemd {
int sub_5DA6A0()
{
{
    DataGlobal_ABFF58 = 0;
    DataGlobal_ABFF50 = 128;
    DataGlobal_ABFF54 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5DAB80
namespace gamemd {
int E4Recv_5DAB80::sub_5DAB80()
{
{
    unsigned int i;
    int v3;
    char String[80];
    v3 = 0;
    strcpy(String, this);
    _strupr(String);
    for ( i = 0; i < strlen(String); ++i )
    ComputeHash(&v3, String[i]);
    return v3;
}
}
} // namespace gamemd

// 0x5DACD0
namespace gamemd {
int sub_5DACD0()
{
{
    DataGlobal_AC01A8 = 0;
    DataGlobal_AC01AC = 0;
    DataGlobal_AC01B0 = 0;
    DataGlobal_AC01B4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5DACF0
namespace gamemd {
void sub_5DACF0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC01C0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5DAD20
namespace gamemd {
void sub_5DAD20()
{
{
    DataGlobal_AC0250 = DataGlobal_AC01C0 / 60.0;
}
}
} // namespace gamemd

// 0x5DAD40
namespace gamemd {
void sub_5DAD40()
{
{
    DataGlobal_AC0218 = 1.0 / DataGlobal_AC0250;
}
}
} // namespace gamemd

// 0x5DAD60
namespace gamemd {
void sub_5DAD60()
{
{
    DataGlobal_AC0210 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5DAD80
namespace gamemd {
void sub_5DAD80()
{
{
    DataGlobal_AC01C8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5DADA0
namespace gamemd {
void sub_5DADA0()
{
{
    DataGlobal_AC0198 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5DADC0
namespace gamemd {
long long sub_5DADC0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC0198 - DataGlobal_AC01C8);
    result = Math::RoundToInt(v0 * DataGlobal_AC01C0 * 0.5);
    DataGlobal_AC0258 = result;
    return result;
}
}
} // namespace gamemd

// 0x5DAE00
namespace gamemd {
void sub_5DAE00()
{
{
    DataGlobal_AC01D8 = Math::ArcTan((double)DataGlobal_AC0258 * 0.00390625);
}
}
} // namespace gamemd

// 0x5DAE30
namespace gamemd {
void sub_5DAE30()
{
{
    DataGlobal_AC01F8 = Math::ArcTan((double)(2 * DataGlobal_AC0258) / DataGlobal_AC01C0);
}
}
} // namespace gamemd

// 0x5DAE60
namespace gamemd {
long long sub_5DAE60()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC0258) + 0.5);
    DataGlobal_AC024C = result;
    return result;
}
}
} // namespace gamemd

// 0x5DAE90
namespace gamemd {
int sub_5DAE90()
{
{
    DataGlobal_AC01B8 = 0;
    DataGlobal_AC01BA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5DAEA0
namespace gamemd {
int sub_5DAEA0()
{
{
    DataGlobal_AC01E8 = 0;
    DataGlobal_AC01EC = 0;
    DataGlobal_AC01F0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5DAEC0
namespace gamemd {
int sub_5DAEC0()
{
{
    DataGlobal_AC0248 = 0;
    DataGlobal_AC0240 = 128;
    DataGlobal_AC0244 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5DAEE0
namespace gamemd {
int sub_5DAEE0()
{
{
    DataGlobal_AC0230 = Timer::GetTicks();
    DataGlobal_AC0238 = 0;
    return atexit(nullsub_194);
}
}
} // namespace gamemd

// 0x5DAF10
namespace gamemd {
void nullsub_194()
{
  ;
}
} // namespace gamemd

// 0x5DAF20
namespace gamemd {
unsigned char sub_5DAF20()
{
{
    Event::Dispatch();
    NetworkLobby::MessageHandler();
    return 0;
}
}
} // namespace gamemd

// 0x5DB680
namespace gamemd {
char InitNetworkGameState()
{
{
    int v1;
    char v2[8];
    if ( !Network_Init(g_NetworkManager) )
    return 0;
    if ( g_GameMode_Current[0] != 4 )
  {
    if ( DataGlobal_A8D5FC )
    {
    Network::CopyAddress(&DataGlobal_A8D600, &v1, (int)v2);
    Network_Init_542FC0(&v1);
    }
  }
    LoadNetworkShareStrings();
    Game::ResetFlags();
    Network::InitPlayerSlots();
    return 1;
}
}
} // namespace gamemd

// 0x5DE360
namespace gamemd {
char SendNetworkLobbyChatMessage(HWND hWnd, LPARAM a2, int a3)
{
{
    HWND DlgItem;
    signed int v5;
    HWND v6;
    char result;
    char *v8;
    int v9;
    int i;
    int v11;
    int j;
    wchar_t lParam[111];
    short v15;
    int v16[113];
    short v17;
    char v18;
    DlgItem = GetDlgItem(hWnd, 1344);
    SendMessageA(DlgItem, 0x4B3u, 0x6Fu, (LPARAM)lParam);
    v15 = 0;
    v5 = wcslen(lParam);
    v6 = GetDlgItem(hWnd, 1344);
    SendMessageA(v6, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString);
    result = InvalidateRect(hWnd, 0, 1);
    if ( v5 > 2 )
  {
    v8 = CharToWideString(g_GameSetupBuffer);
    Dialog::ShowMessage(a2, (size_t)g_Str_Trace___s_, v8, lParam);
    memset(v16, 0, sizeof(v16));
    v17 = 0;
    v18 = 0;
    v16[0] = 12;
    strcpy((char *)&v16[1], g_GameSetupBuffer);
    wcscpy((wchar_t *)&v16[12], lParam);
    v16[68] = a3;
    v16[69] = WideString::Hash(g_CurrentPlayerName);
    result = g_NetworkSettingsState;
    if ( g_NetworkSettingsState == 2 )
    {
    v9 = Game_PlayerCount;
    for ( i = 1; i < v9; ++i )
      {
    Network::SendMessage((int)g_NetworkManager, (int)v16, 455, 1, *(int *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0);
    result = Event::Dispatch();
      }
    }
    else
    {
    v11 = g_GameSetupConfig;
    for ( j = 1; j < v11; ++j )
      {
    Network::SendMessage((int)g_NetworkManager, (int)v16, 455, 1, *(int *)(g_GameSetupFlags + 4 * j) + 40, 0, 0);
    result = Event::Dispatch();
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5DF8C0
namespace gamemd {
int Network_BroadcastMessage(int a1)
{
{
    int i;
    int result;
    int v4[113];
    short v5;
    char v6;
    memset(v4, 0, sizeof(v4));
    v5 = 0;
    v6 = 0;
    v4[0] = 10;
    strcpy((char *)&v4[1], g_GameSetupBuffer);
    for ( i = 1; i < Game_PlayerCount; ++i )
  {
    Network::SendMessage((int)g_NetworkManager, (int)v4, 455, 1, *(int *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0);
    Event::Dispatch();
  }
    if ( (g_NetworkSettingsState == 1 || g_NetworkSettingsState == 2) && !Network::IsBroadcastAddr((char *)(*(int *)(g_NetworkPlayerConfig + 4 * a1) + 40)) )
  {
    Network::SendMessage((int)g_NetworkManager, (int)v4, 455, 1, *(int *)(g_NetworkPlayerConfig + 4 * a1) + 40, 0, 0);
  }
    Network::SendMessage((int)g_NetworkManager, (int)v4, 455, 0, 0, 0, 0);
    Game::ResetFlags();
    GameClass::InitDifficultyButtons();
    result = PtrVector::Destroy(&g_PlayerInfoCount);
    g_CurrentPlayerName = 0;
    return result;
}
}
} // namespace gamemd

// 0x5DFDD0
namespace gamemd {
void nullsub_25()
{
  ;
}
} // namespace gamemd

// 0x5DFDE0
namespace gamemd {
void nullsub_26()
{
  ;
}
} // namespace gamemd

// 0x5DFDF0
namespace gamemd {
void nullsub_27()
{
  ;
}
} // namespace gamemd
