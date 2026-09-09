// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6C0025
namespace gamemd {
void nullsub_114(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x6C6520
namespace gamemd {
int sub_6C6520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C6520()
{
  MEMORY[0xB0BCF8] = 0; /*0x6c6522*/
  MEMORY[0xB0BCFC] = 0; /*0x6c6527*/
  MEMORY[0xB0BD00] = 0; /*0x6c652c*/
  MEMORY[0xB0BD04] = 0; /*0x6c6531*/
  return 0; /*0x6c6536*/
}
}
} // namespace gamemd

// 0x6C6540
namespace gamemd {
int sub_6C6540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6C6540(
        _DWORD *this,
        int a2,
        wchar_t *String,
        int a4,
        int aP1,
        ControlClass *aP5,
        int aP3,
        int aP4)
{
  DropListClass *Instance; // ebx

  GadgetClass::Construct(this, (GadgetClass *)aP1, (GadgetClass *)aP5, (GadgetClass *)aP3, (ControlClass *)aP4, 0, 0); /*0x6c6560*/
  Buffer::Init(this + 9, 0, 0); /*0x6c656c*/
  *(this + 12) = 0; /*0x6c657e*/
  *(this + 13) = a4; /*0x6c6585*/
  *this = &StaticButtonClass::`vftable'; /*0x6c6588*/
  StaticButtonClass::Draw((void **)this, (DropListClass *)String, 0); /*0x6c658e*/
  if ( aP3 == -1 || aP4 == -1 ) /*0x6c659b*/
  {
    Instance = (DropListClass *)TextRenderer::GetInstance(); /*0x6c65a8*/
    if ( aP3 == -1 ) /*0x6c65aa*/
      *(this + 5) = Text::MeasureWidth(*(this + 12), 0); /*0x6c65b9*/
    if ( aP4 == -1 ) /*0x6c65bf*/
      *(this + 6) = Instance->DropListClass_field_0x1C; /*0x6c65c4*/
  }
  return this; /*0x6c65c9*/
}
}
} // namespace gamemd

// 0x6C68C0
namespace gamemd {
void sub_6C68C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C68C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c68cc*/
  MEMORY[0xB0BD30] = Math::Sqrt(v0 + v0); /*0x6c68de*/
}
}
} // namespace gamemd

// 0x6C68F0
namespace gamemd {
void sub_6C68F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C68F0()
{
  MEMORY[0xB0BDA8] = MEMORY[0xB0BD30] / 60.0; /*0x6c68fc*/
}
}
} // namespace gamemd

// 0x6C6910
namespace gamemd {
void sub_6C6910()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C6910()
{
  MEMORY[0xB0BD88] = 1.0 / MEMORY[0xB0BDA8]; /*0x6c691c*/
}
}
} // namespace gamemd

// 0x6C6930
namespace gamemd {
void sub_6C6930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C6930()
{
  MEMORY[0xB0BD80] = 0.0174532925199433 * 45.0; /*0x6c693c*/
}
}
} // namespace gamemd

// 0x6C6950
namespace gamemd {
void sub_6C6950()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C6950()
{
  MEMORY[0xB0BD38] = 0.0174532925199433 * 60.0; /*0x6c695c*/
}
}
} // namespace gamemd

// 0x6C6970
namespace gamemd {
void sub_6C6970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C6970()
{
  MEMORY[0xB0BD08] = 0.0174532925199433 * 90.0; /*0x6c697c*/
}
}
} // namespace gamemd

// 0x6C6990
namespace gamemd {
long long sub_6C6990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6C6990()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0BD08] - MEMORY[0xB0BD38]); /*0x6c69a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0BD30] * 0.5); /*0x6c69b6*/
  MEMORY[0xB0BDB0] = result; /*0x6c69bb*/
  return result; /*0x6c69c0*/
}
}
} // namespace gamemd

// 0x6C69D0
namespace gamemd {
void sub_6C69D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C69D0()
{
  MEMORY[0xB0BD40] = Math::ArcTan((double)MEMORY[0xB0BDB0] * 0.00390625); /*0x6c69e7*/
}
}
} // namespace gamemd

// 0x6C6A00
namespace gamemd {
void sub_6C6A00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C6A00()
{
  MEMORY[0xB0BD70] = Math::ArcTan((double)(2 * MEMORY[0xB0BDB0]) / MEMORY[0xB0BD30]); /*0x6c6a22*/
}
}
} // namespace gamemd

// 0x6C6A30
namespace gamemd {
long long sub_6C6A30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6C6A30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0BDB0]) + 0.5); /*0x6c6a4b*/
  MEMORY[0xB0BDA4] = result; /*0x6c6a50*/
  return result; /*0x6c6a56*/
}
}
} // namespace gamemd

// 0x6C6A60
namespace gamemd {
int sub_6C6A60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C6A60()
{
  MEMORY[0xB0BD20] = 0; /*0x6c6a62*/
  MEMORY[0xB0BD22] = 0; /*0x6c6a68*/
  return 0; /*0x6c6a6e*/
}
}
} // namespace gamemd

// 0x6C6A70
namespace gamemd {
int sub_6C6A70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C6A70()
{
  MEMORY[0xB0BD60] = 0; /*0x6c6a72*/
  MEMORY[0xB0BD64] = 0; /*0x6c6a77*/
  MEMORY[0xB0BD68] = 0; /*0x6c6a7c*/
  return 0; /*0x6c6a81*/
}
}
} // namespace gamemd

// 0x6C6A90
namespace gamemd {
int sub_6C6A90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C6A90()
{
  MEMORY[0xB0BDA0] = 0; /*0x6c6a95*/
  MEMORY[0xB0BD98] = 128; /*0x6c6a9f*/
  MEMORY[0xB0BD9C] = 128; /*0x6c6aa4*/
  return 128; /*0x6c6aa9*/
}
}
} // namespace gamemd

// 0x6C6AB0
namespace gamemd {
int sub_6C6AB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C6AB0()
{
  MEMORY[0xB0BD10] = 0; /*0x6c6ab2*/
  MEMORY[0xB0BD14] = 0; /*0x6c6ab7*/
  MEMORY[0xB0BD18] = 0; /*0x6c6abc*/
  MEMORY[0xB0BD1C] = 0; /*0x6c6ac1*/
  return 0; /*0x6c6ac6*/
}
}
} // namespace gamemd

// 0x6C6AD0
namespace gamemd {
int sub_6C6AD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C6AD0()
{
  MEMORY[0xB0BD28] = Timer::GetTicks(); /*0x6c6adf*/
  return atexit(nullsub_234); /*0x6c6aea*/
}
}
} // namespace gamemd

// 0x6C6AF0
namespace gamemd {
void nullsub_234()
{
  ;
}
} // namespace gamemd

// 0x6C6B40
namespace gamemd {
int sub_6C6B40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C6B40()
{
  MEMORY[0xB0BD50] = 0; /*0x6c6b47*/
  MEMORY[0xB0BD54] = 0; /*0x6c6b4c*/
  MEMORY[0xB0BD58] = 0; /*0x6c6b51*/
  return atexit(sub_6C6B60); /*0x6c6b5c*/
}
}
} // namespace gamemd

// 0x6C6B60
namespace gamemd {
void sub_6C6B60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_6C6B60()
{
  MEMORY[0xB0BD50] = 0; /*0x6c6b65*/
  __3_YAXPAX_Z(MEMORY[0xB0BD58]); /*0x6c6b70*/
}
}
} // namespace gamemd

// 0x6C6F50
namespace gamemd {
void ProcessGameResults(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// void __fastcall ProcessGameResults(char a1)
// {
//   IUnknown *v2; // esi
//   char *v3; // eax
//   char *inited; // eax
//   INIClass *v5; // esi
//   char *v6; // eax
//   char *v7; // eax
//   ObjectClass *v8; // esi
//   char *v9; // eax
//   char *v10; // eax
//   IUnknown *v11; // esi
//   char *v12; // eax
//   char *v13; // eax
//   char *v14; // eax
//   char *v15; // eax
//   char *v16; // eax
//   char *v17; // eax
//   ObjectClass *v19; // esi
//   char *eax31; // eax
//   char *v20; // eax
//   IUnknown *v21; // esi
//   char *v22; // eax
//   char *v23; // eax
//   bool v24; // bl
//   char *v25; // eax
//   char *v26; // eax
//   bool v27; // bl
//   char *v28; // eax
//   char *v29; // eax
//   IUnknown *v30; // esi
//   char *v31; // eax
//   char *v32; // eax
//   IUnknown *v33; // esi
//   char *v34; // eax
//   char *v35; // eax
//   char *v36; // eax
//   char *v37; // eax
//   bool v38; // bl
//   char *v39; // eax
//   char *v40; // eax
//   IUnknown *v41; // esi
//   char *v42; // eax
//   char *v43; // eax
//   IUnknown *v44; // esi
//   char *v45; // eax
//   char *v46; // eax
//   char *v47; // ... [52498 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x6C87F0
namespace gamemd {
int sub_6C87F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C87F0()
{
  int v1; // [esp+4h] [ebp-4h]

  MEMORY[0xB0BD28] = Timer::GetTicks(); /*0x6c87fc*/
  MEMORY[0xB0BD2C] = v1; /*0x6c8805*/
  MEMORY[0xB0BDB4] = 1; /*0x6c880a*/
  return v1; /*0x6c8811*/
}
}
} // namespace gamemd

// 0x6C8840
namespace gamemd {
rc_ptr * sub_6C8840(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr *__thiscall sub_6C8840(_DWORD *Block, char a2)
{
  *Block = &rc_ptr<PlayerProfile>::`vftable'; /*0x6c8843*/
  ComPtr::Release(Block); /*0x6c8849*/
  if ( (a2 & 1) != 0 ) /*0x6c8853*/
    __3_YAXPAX_Z(Block); /*0x6c8856*/
  return (rc_ptr *)Block; /*0x6c8860*/
}
}
} // namespace gamemd

// 0x6C8900
namespace gamemd {
char sub_6C8900()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6C8900(int *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x6c8904*/
  if ( *this < *(this + 1) ) /*0x6c890b*/
    return 0; /*0x6c890d*/
  v4 = 2 * v2; /*0x6c8913*/
  if ( 2 * v2 < 10 ) /*0x6c891b*/
    v4 = 10; /*0x6c891d*/
  v5 = __2_YAPAXI_Z(32776 * v4); /*0x6c8932*/
  memset(v5, 0, 4 * ((unsigned int)(32776 * v4) >> 2)); /*0x6c893d*/
  v7 = (int)v5; /*0x6c8947*/
  v6 = (const void *)*(this + 2); /*0x6c894d*/
  if ( v6 ) /*0x6c8952*/
    qmemcpy(v5, v6, 32776 * *this); /*0x6c8967*/
  __3_YAXPAX_Z((void *)*(this + 2)); /*0x6c8974*/
  *(this + 1) = v4; /*0x6c8980*/
  *(this + 2) = v7; /*0x6c8983*/
  return 1; /*0x6c890f*/
}
}
} // namespace gamemd

// 0x6C8990
namespace gamemd {
int sub_6C8990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C8990()
{
  MEMORY[0xB0BDC0] = 0; /*0x6c8992*/
  MEMORY[0xB0BDC4] = 0; /*0x6c8997*/
  MEMORY[0xB0BDC8] = 0; /*0x6c899c*/
  MEMORY[0xB0BDCC] = 0; /*0x6c89a1*/
  return 0; /*0x6c89a6*/
}
}
} // namespace gamemd

// 0x6C89B0
namespace gamemd {
unsigned int * sub_6C89B0(size_t Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6C89B0(_DWORD *this, size_t Size)
{
  void *v3; // eax

  *this = Size; /*0x6c89b8*/
  v3 = __2_YAPAXI_Z(Size); /*0x6c89ba*/
  *(this + 1) = v3; /*0x6c89c2*/
  *(this + 2) = v3; /*0x6c89c5*/
  return this; /*0x6c89ca*/
}
}
} // namespace gamemd

// 0x6C8B10
namespace gamemd {
int sub_6C8B10(int a2, int a3, short a4, short a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6C8B10(_DWORD *this, int a2, int a3, __int16 a4, __int16 a5)
{
  int v6; // edi
  _DWORD *v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  char *v11; // edi
  int v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+18h] [ebp-8h] BYREF
  _BYTE *v14; // [esp+2Ch] [ebp+Ch]
  int v15; // [esp+30h] [ebp+10h]

  v6 = *(this + 2); /*0x6c8b19*/
  if ( v6 + 12 > (unsigned int)(*(this + 1) + *this) ) /*0x6c8b28*/
    return 0; /*0x6c8b28*/
  v12 = *(this + 2); /*0x6c8b2c*/
  *(this + 2) = v6 + 12; /*0x6c8b30*/
  if ( !v6 ) /*0x6c8b33*/
    return 0; /*0x6c8b35*/
  *(_WORD *)v6 = a4; /*0x6c8b4f*/
  *(_WORD *)(v6 + 2) = a5; /*0x6c8b52*/
  *(_WORD *)(v6 + 4) = *(_WORD *)(a3 + 8); /*0x6c8b5a*/
  *(_WORD *)(v6 + 6) = *(_WORD *)(a3 + 12); /*0x6c8b66*/
  *(_DWORD *)(v6 + 8) = *(this + 2); /*0x6c8b70*/
  v8 = CellStruct::Copy((int *)a3, &v13); /*0x6c8b73*/
  v9 = a2; /*0x6c8b7a*/
  v14 = (_BYTE *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, *v8, v8[1]); /*0x6c8b92*/
  v15 = 0; /*0x6c8b9b*/
  if ( *(int *)(a3 + 12) > 0 ) /*0x6c8ba3*/
  {
    while ( 1 ) /*0x6c8bbb*/
    {
      v10 = Map_Append(v14, (int)&MEMORY[0xB0BDD0], *(_DWORD *)(a3 + 8)); /*0x6c8bbb*/
      v11 = (char *)*(this + 2); /*0x6c8bc0*/
      if ( (unsigned int)&v11[v10] > *(this + 1) + *this || (*(this + 2) = &v11[v10], !v11) ) /*0x6c8bd4*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6c8c16*/
        return 0; /*0x6c8c22*/
      }
      qmemcpy(v11, &MEMORY[0xB0BDD0], v10); /*0x6c8be0*/
      ++v15; /*0x6c8bf4*/
      v14 += (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x6c8c06*/
      if ( v15 >= *(_DWORD *)(a3 + 12) ) /*0x6c8c0a*/
        break; /*0x6c8c0a*/
      v9 = a2; /*0x6c8c0c*/
    }
    v6 = v12; /*0x6c8c25*/
    v9 = a2; /*0x6c8c29*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6c8c31*/
  return v6; /*0x6c8b37*/
}
}
} // namespace gamemd

// 0x6C8C60
namespace gamemd {
int sub_6C8C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C8C60()
{
  MEMORY[0xB0BED8] = 0; /*0x6c8c62*/
  MEMORY[0xB0BEDC] = 0; /*0x6c8c67*/
  MEMORY[0xB0BEE0] = 0; /*0x6c8c6c*/
  MEMORY[0xB0BEE4] = 0; /*0x6c8c71*/
  return 0; /*0x6c8c76*/
}
}
} // namespace gamemd

// 0x6C8C80
namespace gamemd {
void sub_6C8C80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C8C80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c8c8c*/
  MEMORY[0xB0BEF0] = Math::Sqrt(v0 + v0); /*0x6c8c9e*/
}
}
} // namespace gamemd

// 0x6C8CB0
namespace gamemd {
void sub_6C8CB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C8CB0()
{
  MEMORY[0xB0BF58] = MEMORY[0xB0BEF0] / 60.0; /*0x6c8cbc*/
}
}
} // namespace gamemd

// 0x6C8CD0
namespace gamemd {
void sub_6C8CD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C8CD0()
{
  MEMORY[0xB0BF40] = 1.0 / MEMORY[0xB0BF58]; /*0x6c8cdc*/
}
}
} // namespace gamemd

// 0x6C8CF0
namespace gamemd {
void sub_6C8CF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C8CF0()
{
  MEMORY[0xB0BF20] = 0.0174532925199433 * 45.0; /*0x6c8cfc*/
}
}
} // namespace gamemd

// 0x6C8D10
namespace gamemd {
void sub_6C8D10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C8D10()
{
  MEMORY[0xB0BEF8] = 0.0174532925199433 * 60.0; /*0x6c8d1c*/
}
}
} // namespace gamemd

// 0x6C8D30
namespace gamemd {
void sub_6C8D30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C8D30()
{
  MEMORY[0xB0BED0] = 0.0174532925199433 * 90.0; /*0x6c8d3c*/
}
}
} // namespace gamemd

// 0x6C8D50
namespace gamemd {
long long sub_6C8D50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6C8D50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0BED0] - MEMORY[0xB0BEF8]); /*0x6c8d62*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0BEF0] * 0.5); /*0x6c8d76*/
  MEMORY[0xB0BF60] = result; /*0x6c8d7b*/
  return result; /*0x6c8d80*/
}
}
} // namespace gamemd

// 0x6C8D90
namespace gamemd {
void sub_6C8D90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C8D90()
{
  MEMORY[0xB0BF00] = Math::ArcTan((double)MEMORY[0xB0BF60] * 0.00390625); /*0x6c8da7*/
}
}
} // namespace gamemd

// 0x6C8DC0
namespace gamemd {
void sub_6C8DC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C8DC0()
{
  MEMORY[0xB0BF18] = Math::ArcTan((double)(2 * MEMORY[0xB0BF60]) / MEMORY[0xB0BEF0]); /*0x6c8de2*/
}
}
} // namespace gamemd

// 0x6C8DF0
namespace gamemd {
long long sub_6C8DF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6C8DF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0BF60]) + 0.5); /*0x6c8e0b*/
  MEMORY[0xB0BF54] = result; /*0x6c8e10*/
  return result; /*0x6c8e16*/
}
}
} // namespace gamemd

// 0x6C8E20
namespace gamemd {
int sub_6C8E20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C8E20()
{
  MEMORY[0xB0BEE8] = 0; /*0x6c8e22*/
  MEMORY[0xB0BEEA] = 0; /*0x6c8e28*/
  return 0; /*0x6c8e2e*/
}
}
} // namespace gamemd

// 0x6C8E30
namespace gamemd {
int sub_6C8E30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C8E30()
{
  MEMORY[0xB0BF08] = 0; /*0x6c8e32*/
  MEMORY[0xB0BF0C] = 0; /*0x6c8e37*/
  MEMORY[0xB0BF10] = 0; /*0x6c8e3c*/
  return 0; /*0x6c8e41*/
}
}
} // namespace gamemd

// 0x6C8E50
namespace gamemd {
int sub_6C8E50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C8E50()
{
  MEMORY[0xB0BF50] = 0; /*0x6c8e55*/
  MEMORY[0xB0BF48] = 128; /*0x6c8e5f*/
  MEMORY[0xB0BF4C] = 128; /*0x6c8e64*/
  return 128; /*0x6c8e69*/
}
}
} // namespace gamemd

// 0x6C8E70
namespace gamemd {
Iostream_init * __0Iostream_init_QAE_XZ_5()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_5(Iostream_init *this)
{
  return this; /*0x6c8e72*/
}
}
} // namespace gamemd

// 0x6C8F10
namespace gamemd {
LRESULT sub_6C8F10(HWND hDlg, int nIDDlgItem, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __fastcall sub_6C8F10(HWND hDlg, int nIDDlgItem, int a3)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+Ch] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)MEMORY[0x842158], (const wchar_t *const)(a3 / 60 / 60), a3 / 60 % 60, a3 % 60); /*0x6c8f69*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x6c8f73*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8f8c*/
}
}
} // namespace gamemd

// 0x6C8FA0
namespace gamemd {
LRESULT sub_6C8FA0(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __fastcall sub_6C8FA0(CampaignScore *aP0, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  CampaignScore *v7; // [esp+0h] [ebp-48h]
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7); /*0x6c8fb8*/
  DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x6c8fc2*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8fdb*/
}
}
} // namespace gamemd

// 0x6C8FF0
namespace gamemd {
int DlgProcScoreScreen()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge DlgProcScoreScreen@<eax>(
        CampaignScore *a1@<ebp>,
        HWND hWnd,
        unsigned int a3,
        WPARAM wParam,
        wchar_t *Format)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  HWND DlgItem; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  int v13; // edi
  HWND v14; // eax
  wchar_t *v15; // ecx
  wchar_t *v16; // esi
  ScenarioClass *String; // edi
  ScenarioClass *v17; // esi
  HWND v19; // eax
  void (__stdcall *v20)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND eax21a; // eax
  IUnknown *v21; // eax
  const wchar_t *v23; // esi
  int v24; // ecx
  int v25; // edi
  char *v26; // esi
  char *v27; // esi
  char *v28; // esi
  int v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  Movie *v32; // eax
  _DWORD *v33; // eax
  ScenarioClass *v34; // [esp-8h] [ebp-54h]
  wchar_t lParam[32]; // [esp+Ch] [ebp-40h] BYREF
  IUnknown *wParama; // [esp+58h] [ebp+Ch]
  wchar_t *Formatb; // [esp+5Ch] [ebp+10h]
  wchar_t *Formata; // [esp+5Ch] [ebp+10h]

  result = BaseDialogProc((SkirmishDialog *)hWnd, a3, wParam, (unsigned int)Format); /*0x6c900c*/
  if ( !result ) /*0x6c9013*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x6c901c*/
    if ( a3 > 0x497 ) /*0x6c9028*/
    {
      if ( a3 == 1240 ) /*0x6c9383*/
      {
        if ( !wParam ) /*0x6c93cb*/
          SendDlgItemMessageA(hWnd, 1835, 0x4D5u, 0, 29); /*0x6c93db*/
      }
      else if ( a3 == 1260 ) /*0x6c9388*/
      {
        AudioController::Stop(&stru_B05488.__pad_579C[4868]); /*0x6c938f*/
        v33 = (_DWORD *)PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 432), 0x2000, 1.0, 0); /*0x6c93ad*/
        SetAudioSource((AudioMixer *)&stru_B05488.__pad_579C[4868], v33, 0); /*0x6c93b9*/
        SendDlgItemMessageA(hWnd, 1835, 0x4D3u, 0, 0); /*0x6c93c7*/
      }
      return 0; /*0x6c93e1*/
    }
    if ( a3 != 1175 ) /*0x6c902e*/
    {
      if ( a3 == 2 ) /*0x6c9033*/
      {
        if ( *(_DWORD *)&stru_B05488.__pad_579C[4928] ) /*0x6c906e*/
        {
          AudioFile::Stop(&stru_B05488.__pad_579C[4868]); /*0x6c9079*/
          AudioFileClass::Release(&stru_B05488.__pad_579C[4868]); /*0x6c9083*/
          *(_DWORD *)&stru_B05488.__pad_579C[4928] = 0; /*0x6c908a*/
          return 0; /*0x6c909a*/
        }
      }
      else if ( a3 == 273 && (_WORD)wParam == 1059 ) /*0x6c9046*/
      {
        *WindowLongA = 1; /*0x6c9051*/
        AudioFile::Stop(&stru_B05488.__pad_579C[4868]); /*0x6c9057*/
        return 0; /*0x6c9064*/
      }
      return 0; /*0x6c9046*/
    }
    AudioController::Init(&stru_B05488.__pad_579C[4868]); /*0x6c90a2*/
    *(_DWORD *)&stru_B05488.__pad_579C[4928] = 1; /*0x6c90ad*/
    v7 = 0; /*0x6c90b7*/
    v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548); /*0x6c90b9*/
    if ( v8 ) /*0x6c90c1*/
    {
      if ( v8 == 1 ) /*0x6c90ce*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13736); /*0x6c90d0*/
      }
      else if ( v8 == 2 ) /*0x6c90db*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13740); /*0x6c90dd*/
      }
    }
    else
    {
      v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13732); /*0x6c90c3*/
    }
    v9 = v7 / 60; /*0x6c90fc*/
    swprintf( /*0x6c9146*/
      lParam,
      (const size_t)&stru_830620.__pad_579C[50076],
      (const wchar_t *const)(v7 / 60 / 60 / 60),
      (CampaignScore *)(v7 / 60 / 60 % 60));
    DlgItem = GetDlgItem(hWnd, 1777); /*0x6c915a*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9169*/
    v11 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1564); /*0x6c9174*/
    if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556) != -1 ) /*0x6c9187*/
    {
      v12 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556); /*0x6c917a*/
      Formatb = *(wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1564); /*0x6c9180*/
      v11 = (int)Formatb + Timer::GetTicks() - *v12; /*0x6c9199*/
    }
    v13 = v11 / 60; /*0x6c91b7*/
    swprintf( /*0x6c9209*/
      lParam,
      (const size_t)&stru_830620.__pad_579C[50076],
      (const wchar_t *const)(v11 / 60 / 60 / 60),
      (CampaignScore *)(v11 / 60 / 60 % 60));
    v14 = GetDlgItem(hWnd, 1778); /*0x6c9217*/
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9226*/
    if ( v13 > v9 ) /*0x6c9233*/
    {
      v15 = (wchar_t *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13806); /*0x6c9243*/
      v16 = (wchar_t *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13837); /*0x6c9249*/
    }
    else
    {
      v15 = (wchar_t *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13744); /*0x6c9235*/
      v16 = (wchar_t *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13775); /*0x6c923b*/
    }
    String = (ScenarioClass *)GetStringCSF(v15, 0, &stru_830620.__pad_579C[50108], 138); /*0x6c926e*/
    v17 = (ScenarioClass *)GetStringCSF(v16, 0, &stru_830620.__pad_579C[50108], 139); /*0x6c927b*/
    v19 = GetDlgItem(hWnd, 1779); /*0x6c927d*/
    v34 = String; /*0x6c927f*/
    v20 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9280*/
    SendMessageA(v19, 0x4B2u, 0, (LPARAM)v34); /*0x6c928e*/
    eax21a = GetDlgItem(hWnd, 1780); /*0x6c9296*/
    SendMessageA(eax21a, 0x4B2u, 0, (LPARAM)v17); /*0x6c92a1*/
    v21 = HouseClass_Count; /*0x6c92a3*/
    v23 = 0; /*0x6c92a8*/
    v24 = 0; /*0x6c92aa*/
    wParama = HouseClass_Count; /*0x6c92ac*/
    Formata = 0; /*0x6c92b2*/
    if ( (int)HouseClass_Count > 0 ) /*0x6c92b6*/
    {
      do /*0x6c930e*/
      {
        v25 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v24]; /*0x6c92be*/
        if ( *(_BYTE *)(v25 + 493) ) /*0x6c92c1*/
        {
          v26 = (char *)v23 + SumArray((int *)(v25 + 9032)); /*0x6c92dc*/
          v27 = &v26[SumArray((int *)(v25 + 11088))]; /*0x6c92e9*/
          v28 = &v27[SumArray((int *)(v25 + 13144))]; /*0x6c92f6*/
          v29 = SumArray((int *)(v25 + 15200)); /*0x6c92f8*/
          v24 = (int)Formata; /*0x6c92fd*/
          v23 = (const wchar_t *)&v28[v29]; /*0x6c9301*/
          v21 = wParama; /*0x6c9303*/
        }
        Formata = (wchar_t *)++v24; /*0x6c930a*/
      }
      while ( v24 < (int)v21 ); /*0x6c930e*/
      v20 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9310*/
    }
    v30 = GetDlgItem(hWnd, 1835); /*0x6c931c*/
    PostMessageA(v30, 0x4D7u, 0, (LPARAM)hWnd); /*0x6c9327*/
    swprintf(lParam, (const size_t)&g_Str_Fmt_PctD, v23, a1); /*0x6c9338*/
    v31 = GetDlgItem(hWnd, 1782); /*0x6c9346*/
    v20(v31, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9355*/
    v32 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_SCORE); /*0x6c9361*/
    ThemeClass::Play((int *)&g_BuildingTypeClass_Count, v32); /*0x6c936c*/
    return 0; /*0x6c9374*/
  }
  return result; /*0x6c905c*/
}
}
} // namespace gamemd

// 0x6C93F0
namespace gamemd {
void sub_6C93F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C93F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c93fc*/
  MEMORY[0xB0BF78] = Math::Sqrt(v0 + v0); /*0x6c940e*/
}
}
} // namespace gamemd

// 0x6C9420
namespace gamemd {
void sub_6C9420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C9420()
{
  MEMORY[0xB0BFC8] = MEMORY[0xB0BF78] / 60.0; /*0x6c942c*/
}
}
} // namespace gamemd

// 0x6C9440
namespace gamemd {
void sub_6C9440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C9440()
{
  MEMORY[0xB0BFB0] = 1.0 / MEMORY[0xB0BFC8]; /*0x6c944c*/
}
}
} // namespace gamemd

// 0x6C9460
namespace gamemd {
void sub_6C9460()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C9460()
{
  MEMORY[0xB0BFA8] = 0.0174532925199433 * 45.0; /*0x6c946c*/
}
}
} // namespace gamemd

// 0x6C9480
namespace gamemd {
void sub_6C9480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C9480()
{
  MEMORY[0xB0BF80] = 0.0174532925199433 * 60.0; /*0x6c948c*/
}
}
} // namespace gamemd

// 0x6C94A0
namespace gamemd {
void sub_6C94A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C94A0()
{
  MEMORY[0xB0BF68] = 0.0174532925199433 * 90.0; /*0x6c94ac*/
}
}
} // namespace gamemd

// 0x6C94C0
namespace gamemd {
long long sub_6C94C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6C94C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0BF68] - MEMORY[0xB0BF80]); /*0x6c94d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0BF78] * 0.5); /*0x6c94e6*/
  MEMORY[0xB0BFD0] = result; /*0x6c94eb*/
  return result; /*0x6c94f0*/
}
}
} // namespace gamemd

// 0x6C9500
namespace gamemd {
void sub_6C9500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C9500()
{
  MEMORY[0xB0BF88] = Math::ArcTan((double)MEMORY[0xB0BFD0] * 0.00390625); /*0x6c9517*/
}
}
} // namespace gamemd

// 0x6C9530
namespace gamemd {
void sub_6C9530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C9530()
{
  MEMORY[0xB0BFA0] = Math::ArcTan((double)(2 * MEMORY[0xB0BFD0]) / MEMORY[0xB0BF78]); /*0x6c9552*/
}
}
} // namespace gamemd

// 0x6C9560
namespace gamemd {
long long sub_6C9560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6C9560()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0BFD0]) + 0.5); /*0x6c957b*/
  MEMORY[0xB0BFC4] = result; /*0x6c9580*/
  return result; /*0x6c9586*/
}
}
} // namespace gamemd

// 0x6C9590
namespace gamemd {
int sub_6C9590()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C9590()
{
  MEMORY[0xB0BF70] = 0; /*0x6c9592*/
  MEMORY[0xB0BF72] = 0; /*0x6c9598*/
  return 0; /*0x6c959e*/
}
}
} // namespace gamemd

// 0x6C95A0
namespace gamemd {
int sub_6C95A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C95A0()
{
  MEMORY[0xB0BF90] = 0; /*0x6c95a2*/
  MEMORY[0xB0BF94] = 0; /*0x6c95a7*/
  MEMORY[0xB0BF98] = 0; /*0x6c95ac*/
  return 0; /*0x6c95b1*/
}
}
} // namespace gamemd

// 0x6C95C0
namespace gamemd {
int sub_6C95C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C95C0()
{
  MEMORY[0xB0BFC0] = 0; /*0x6c95c5*/
  MEMORY[0xB0BFB8] = 128; /*0x6c95cf*/
  MEMORY[0xB0BFBC] = 128; /*0x6c95d4*/
  return 128; /*0x6c95d9*/
}
}
} // namespace gamemd

// 0x6C96E0
namespace gamemd {
unsigned int * sub_6C96E0(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6C96E0(float *this, _DWORD *a2, int a3)
{
  float *v3; // eax
  int v4; // esi
  int v5; // ecx
  char *v6; // edx
  double v7; // st7
  int v9; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v3 = this; /*0x6c96e3*/
  v9 = 0; /*0x6c96ec*/
  v4 = 4; /*0x6c96f0*/
  v10 = 0; /*0x6c96f5*/
  v11 = 0; /*0x6c96f9*/
  v12 = 0; /*0x6c96fd*/
  v5 = a3 - (_DWORD)this; /*0x6c9705*/
  v6 = (char *)((char *)&v9 - (char *)v3); /*0x6c9707*/
  do /*0x6c9716*/
  {
    v7 = *(float *)((char *)v3 + v5) + *v3; /*0x6c970c*/
    ++v3; /*0x6c970e*/
    --v4; /*0x6c9711*/
    *(float *)((char *)v3 + (_DWORD)v6 - 4) = v7; /*0x6c9712*/
  }
  while ( v4 ); /*0x6c9716*/
  *a2 = v9; /*0x6c9723*/
  a2[1] = v10; /*0x6c9729*/
  a2[2] = v11; /*0x6c9730*/
  a2[3] = v12; /*0x6c9737*/
  return a2; /*0x6c9722*/
}
}
} // namespace gamemd

// 0x6C9780
namespace gamemd {
unsigned int * sub_6C9780(unsigned int * a2, float * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6C9780(char *this, _DWORD *a2, float *a3)
{
  int v3; // esi
  float *v4; // eax
  char *v5; // ecx
  double v6; // st7
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v8 = 0; /*0x6c9789*/
  v9 = 0; /*0x6c978e*/
  v3 = 4; /*0x6c9792*/
  v10 = 0; /*0x6c9797*/
  v11 = 0; /*0x6c979b*/
  v4 = a3; /*0x6c979f*/
  v5 = (char *)(this - (char *)a3); /*0x6c97a3*/
  do /*0x6c97b4*/
  {
    v6 = *(float *)((char *)v4 + (_DWORD)v5) - *v4; /*0x6c97aa*/
    ++v4; /*0x6c97ac*/
    --v3; /*0x6c97af*/
    *(float *)((char *)v4 + (char *)&v8 - (char *)a3 - 4) = v6; /*0x6c97b0*/
  }
  while ( v3 ); /*0x6c97b4*/
  *a2 = v8; /*0x6c97c1*/
  a2[1] = v9; /*0x6c97c7*/
  a2[2] = v10; /*0x6c97ce*/
  a2[3] = v11; /*0x6c97d5*/
  return a2; /*0x6c97c0*/
}
}
} // namespace gamemd

// 0x6C9820
namespace gamemd {
int Float_FirstPositive(float * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Float_FirstPositive(float *a1)
{
  int v1; // edx

  v1 = 0; /*0x6c9820*/
  while ( *a1 <= 0.0 ) /*0x6c982f*/
  {
    ++v1; /*0x6c9831*/
    ++a1; /*0x6c9832*/
    if ( v1 >= 4 ) /*0x6c9838*/
      return -1; /*0x6c983d*/
  }
  return v1; /*0x6c983d*/
}
}
} // namespace gamemd

// 0x6C9940
namespace gamemd {
int sub_6C9940(char a2, char a3, unsigned signed char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6C9940(_DWORD *this, char a2, char a3, unsigned __int8 a4)
{
  unsigned __int16 v4; // ax
  int result; // eax

  HIBYTE(v4) = a2; /*0x6c9946*/
  LOBYTE(v4) = a3; /*0x6c9950*/
  result = a4 | (v4 << 8); /*0x6c9957*/
  *(this + 2) = result; /*0x6c9959*/
  return result; /*0x6c995c*/
}
}
} // namespace gamemd

// 0x6C9960
namespace gamemd {
void sub_6C9960(wchar_t * String)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_6C9960(void **this, wchar_t *String)
{
  size_t v3; // eax
  wchar_t *v4; // eax

  if ( *(this + 5) ) /*0x6c9964*/
  {
    __3_YAXPAX_Z(*(this + 5)); /*0x6c996c*/
    *(this + 5) = 0; /*0x6c9974*/
  }
  if ( String ) /*0x6c9981*/
  {
    v3 = wcslen(String); /*0x6c9984*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x6c998e*/
    *(this + 5) = v4; /*0x6c9996*/
    if ( v4 ) /*0x6c999b*/
      wcscpy(v4, String); /*0x6c999f*/
  }
}
}
} // namespace gamemd

// 0x6C99B0
namespace gamemd {
int sub_6C99B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6C99B0()
{
  MEMORY[0xB0BFD8] = 0; /*0x6c99b2*/
  MEMORY[0xB0BFDC] = 0; /*0x6c99b7*/
  MEMORY[0xB0BFE0] = 0; /*0x6c99bc*/
  MEMORY[0xB0BFE4] = 0; /*0x6c99c1*/
  return 0; /*0x6c99c6*/
}
}
} // namespace gamemd

// 0x6C9AC0
namespace gamemd {
unsigned int * sub_6C9AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6C9AC0(_DWORD *this)
{
  *this = 0; /*0x6c9ac4*/
  *(this + 1) = 0; /*0x6c9ac6*/
  *(this + 2) = 0; /*0x6c9ac9*/
  *(this + 3) = 0; /*0x6c9acc*/
  *(this + 4) = 0; /*0x6c9acf*/
  *(this + 5) = 0; /*0x6c9ad2*/
  *(this + 6) = 0; /*0x6c9ad5*/
  *(this + 7) = 0; /*0x6c9ad8*/
  *(this + 8) = 0; /*0x6c9adb*/
  return this; /*0x6c9ade*/
}
}
} // namespace gamemd

// 0x6C9F00
namespace gamemd {
void nullsub_40()
{
  ;
}
} // namespace gamemd

// 0x6CA1E0
namespace gamemd {
char sub_6CA1E0(char * Source)
// 0x6c9f00
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6CA1E0(char *this, char *Source)
{
  wchar_t *v3; // ebp
  int v4; // esi
  wchar_t *v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  wchar_t *v8; // esi
  size_t v9; // eax
  wchar_t *v10; // eax
  const wchar_t *v11; // esi
  char v13; // [esp+11h] [ebp-47h]
  wchar_t v14; // [esp+12h] [ebp-46h] BYREF
  _DWORD *v15; // [esp+14h] [ebp-44h]
  wchar_t Dest[32]; // [esp+18h] [ebp-40h] BYREF

  v15 = this; /*0x6ca1f5*/
  mbstowcs(Dest, Source, 0x20u); /*0x6ca1f9*/
  v3 = (wchar_t *)(this + 4); /*0x6ca201*/
  while ( 1 ) /*0x6ca27e*/
  {
    while ( 1 ) /*0x6ca208*/
    {
      v13 = 0; /*0x6ca208*/
      v4 = 0; /*0x6ca20d*/
      v5 = v3; /*0x6ca20f*/
      v6 = *v15; /*0x6ca211*/
      *v3 = 0; /*0x6ca213*/
      while ( (*(int (__thiscall **)(int, wchar_t *, int))(*(_DWORD *)v6 + 8))(v6, &v14, 2) == 2 ) /*0x6ca22a*/
      {
        if ( v14 != 10 ) /*0x6ca235*/
        {
          if ( v14 != 13 ) /*0x6ca23b*/
          {
            *v5 = v14; /*0x6ca23d*/
            ++v4; /*0x6ca240*/
            ++v5; /*0x6ca241*/
          }
          if ( v4 < 1024 ) /*0x6ca24a*/
            continue; /*0x6ca24a*/
        }
        goto LABEL_10; /*0x6ca24a*/
      }
      v13 = 1; /*0x6ca24e*/
LABEL_10:
      v7 = v15; /*0x6ca253*/
      v3[v4] = 0; /*0x6ca257*/
      ++v7[513]; /*0x6ca260*/
      v8 = WideString::Trim(v3); /*0x6ca26b*/
      if ( wcslen(v8) ) /*0x6ca26e*/
      {
        if ( *v8 != 59 ) /*0x6ca27e*/
          break; /*0x6ca27e*/
      }
      if ( v13 ) /*0x6ca286*/
        return 0; /*0x6ca286*/
    }
    if ( !v8 ) /*0x6ca28f*/
      return 0; /*0x6ca2f8*/
    v9 = wcslen(MEMORY[0x842354]); /*0x6ca296*/
    if ( !_wcsnicmp(v8, MEMORY[0x842354], v9) ) /*0x6ca2a2*/
    {
      v10 = wcschr(v8, 0x20u); /*0x6ca2b5*/
      v11 = v10; /*0x6ca2ba*/
      if ( v10 ) /*0x6ca2c1*/
      {
        WideString::Trim(v10); /*0x6ca2c9*/
        if ( !_wcsicmp(v11, Dest) ) /*0x6ca2d4*/
        {
          Debug::Log(); /*0x6ca2ee*/
          return 1; /*0x6ca2ff*/
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x6CA4A0
namespace gamemd {
void sub_6CA4A0(wchar_t * String2, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall sub_6CA4A0(wchar_t *String2, int a2, int a3)
{
  const wchar_t **v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // eax

  if ( String2 && MEMORY[0x8421A8] ) /*0x6ca4b2*/
  {
    v3 = (const wchar_t **)&MEMORY[0x8421A8]; /*0x6ca4b4*/
    v4 = (const wchar_t **)&MEMORY[0x8421A8]; /*0x6ca4b9*/
    while ( _wcsicmp(*v3, String2) ) /*0x6ca4c9*/
    {
      v5 = v4[2]; /*0x6ca4cb*/
      v4 += 2; /*0x6ca4ce*/
      v3 = v4; /*0x6ca4d3*/
      if ( !v5 ) /*0x6ca4d5*/
        return; /*0x6ca4d5*/
    }
    ((void (__fastcall *)(int, int))v3[1])(a2, a3); /*0x6ca4e5*/
  }
}
}
} // namespace gamemd

// 0x6CA4F0
namespace gamemd {
wchar_t * sub_6CA4F0(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__fastcall sub_6CA4F0(_DWORD *a1)
{
  wchar_t *v1; // ebp
  int v2; // ebx
  int v3; // esi
  wchar_t *v4; // edi
  _DWORD *v5; // eax
  wchar_t *v6; // esi
  char v8; // [esp+11h] [ebp-7h]
  wchar_t v9; // [esp+12h] [ebp-6h] BYREF
  _DWORD *v10; // [esp+14h] [ebp-4h]

  v10 = a1; /*0x6ca4f7*/
  v1 = (wchar_t *)(a1 + 1); /*0x6ca4fb*/
  while ( 1 ) /*0x6ca504*/
  {
    v2 = *a1; /*0x6ca504*/
    *v1 = 0; /*0x6ca506*/
    v8 = 0; /*0x6ca50c*/
    v3 = 0; /*0x6ca511*/
    v4 = v1; /*0x6ca513*/
    while ( (*(int (__thiscall **)(int, wchar_t *, int))(*(_DWORD *)v2 + 8))(v2, &v9, 2) == 2 ) /*0x6ca526*/
    {
      if ( v9 != 10 ) /*0x6ca531*/
      {
        if ( v9 != 13 ) /*0x6ca537*/
        {
          *v4 = v9; /*0x6ca539*/
          ++v3; /*0x6ca53c*/
          ++v4; /*0x6ca53d*/
        }
        if ( v3 < 1024 ) /*0x6ca546*/
          continue; /*0x6ca546*/
      }
      goto LABEL_11; /*0x6ca546*/
    }
    v8 = 1; /*0x6ca54a*/
LABEL_11:
    v5 = v10; /*0x6ca54f*/
    v1[v3] = 0; /*0x6ca553*/
    ++v5[513]; /*0x6ca55c*/
    v6 = WideString::Trim(v1); /*0x6ca567*/
    if ( wcslen(v6) ) /*0x6ca56a*/
    {
      if ( *v6 != 59 ) /*0x6ca57a*/
        return v6; /*0x6ca588*/
    }
    if ( v8 ) /*0x6ca582*/
      return 0; /*0x6ca591*/
    a1 = v10; /*0x6ca500*/
  }
}
}
} // namespace gamemd

// 0x6CA5A0
namespace gamemd {
unsigned int sub_6CA5A0(wchar_t * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall sub_6CA5A0(wchar_t *Source)
{
  ObjectClass *v1; // esi
  ObjectClass *v2; // edi
  ObjectClass *v3; // ebx
  int v4; // eax
  BlowStraw *v5; // esi
  int v6; // ebp
  ObjectClass *v7; // ebx
  ObjectClass *v8; // esi
  BlowStraw Destination; // [esp+10h] [ebp-18h] BYREF
  __int16 v11; // [esp+26h] [ebp-2h]

  wcsncpy((wchar_t *)&Destination, Source, (DropListClass *)0xC); /*0x6ca5af*/
  v11 = 0; /*0x6ca5bb*/
  v1 = (ObjectClass *)wcschr(&Destination, (CCINIClass *)0x3A); /*0x6ca5c7*/
  *(_WORD *)v1->__pad_0 = 0; /*0x6ca5d2*/
  v1 = (ObjectClass *)((char *)v1 + 2); /*0x6ca5dc*/
  v2 = (ObjectClass *)WideChar::ToLong(&Destination, 0, 10); /*0x6ca5e2*/
  v3 = (ObjectClass *)wcschr((BlowStraw *)v1, (CCINIClass *)0x3A); /*0x6ca5e9*/
  *(_WORD *)v3->__pad_0 = 0; /*0x6ca5f0*/
  v4 = WideChar::ToLong((BlowStraw *)v1, 0, 10); /*0x6ca5f5*/
  v5 = (BlowStraw *)&v3->__pad_0[2]; /*0x6ca5fa*/
  v6 = v4; /*0x6ca600*/
  v7 = (ObjectClass *)wcschr((BlowStraw *)&v3->__pad_0[2], (CCINIClass *)0x3A); /*0x6ca607*/
  *(_WORD *)v7->__pad_0 = 0; /*0x6ca60e*/
  v8 = (ObjectClass *)WideChar::ToLong(v5, 0, 10); /*0x6ca61e*/
  return 60 * WideChar::ToLong((BlowStraw *)&v7->__pad_0[2], 0, 10) / 0x64u /*0x6ca640*/
       + 60 * ((_DWORD)v8 + 3600 * (_DWORD)v2 + 60 * v6);
}
}
} // namespace gamemd

// 0x6CA670
namespace gamemd {
unsigned int sub_6CA670(wchar_t * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __fastcall sub_6CA670(wchar_t *a1, unsigned int *a2)
{
  unsigned int result; // eax

  result = sub_6CA5A0(a1); /*0x6ca673*/
  *a2 = result; /*0x6ca678*/
  return result; /*0x6ca67a*/
}
}
} // namespace gamemd

// 0x6CA680
namespace gamemd {
unsigned int sub_6CA680(wchar_t * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __fastcall sub_6CA680(wchar_t *a1, int a2)
{
  unsigned int result; // eax

  result = sub_6CA5A0(a1); /*0x6ca683*/
  if ( result ) /*0x6ca68a*/
    *(_DWORD *)(a2 + 4) = result; /*0x6ca68c*/
  return result; /*0x6ca68f*/
}
}
} // namespace gamemd

// 0x6CA6A0
namespace gamemd {
int sub_6CA6A0(BlowStraw * String1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6CA6A0(BlowStraw *String1, int a2)
{
  BlowStraw *v2; // ebx
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  int v6; // edi
  int result; // eax
  const wchar_t **v8; // eax
  char *v9; // esi
  int v10; // ecx

  v2 = String1; /*0x6ca6a4*/
  v4 = wcschr(String1, (CCINIClass *)0x3A); /*0x6ca6ab*/
  v5 = v4; /*0x6ca6b0*/
  if ( v4 ) /*0x6ca6b7*/
  {
    *v4 = 0; /*0x6ca6be*/
    *(_DWORD *)(a2 + 12) = wcstol(v2, 0, 0); /*0x6ca6cb*/
    v2 = (BlowStraw *)(v5 + 1); /*0x6ca6ce*/
  }
  v6 = 0; /*0x6ca6d7*/
  result = 2; /*0x6ca6db*/
  if ( *(_DWORD *)&stru_830620.__pad_579C[50204] ) /*0x6ca6e0*/
  {
    v8 = (const wchar_t **)&stru_830620.__pad_579C[50204]; /*0x6ca6e2*/
    v9 = &stru_830620.__pad_579C[50204]; /*0x6ca6e7*/
    while ( 1 ) /*0x6ca6ed*/
    {
      result = _wcsicmp((const wchar_t *)v2, *v8); /*0x6ca6ed*/
      if ( !result ) /*0x6ca6f7*/
        break; /*0x6ca6f7*/
      v10 = *((_DWORD *)v9 + 2); /*0x6ca6f9*/
      v9 += 8; /*0x6ca6fc*/
      ++v6; /*0x6ca6ff*/
      v8 = (const wchar_t **)v9; /*0x6ca700*/
      if ( !v10 ) /*0x6ca704*/
      {
        result = 2; /*0x6ca706*/
        goto LABEL_8; /*0x6ca706*/
      }
    }
    *(_DWORD *)(a2 + 16) = *(_DWORD *)&stru_830620.__pad_579C[8 * v6 + 50208]; /*0x6ca71a*/
  }
  else
  {
LABEL_8:
    *(_DWORD *)(a2 + 16) = 2; /*0x6ca70b*/
  }
  return result; /*0x6ca70b*/
}
}
} // namespace gamemd

// 0x6CA730
namespace gamemd {
int sub_6CA730(BlowStraw * Str, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6CA730(BlowStraw *Str, _DWORD *a2)
{
  wchar_t *v4; // edi
  char v5; // al
  BlowStraw *v6; // esi
  wchar_t *v7; // edi
  unsigned __int8 v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+10h] [ebp-8h]
  char v11; // [esp+14h] [ebp-4h]

  v4 = wcschr(Str, (CCINIClass *)0x3A); /*0x6ca742*/
  *v4 = 0; /*0x6ca749*/
  v5 = WideChar::ToLong(Str, 0, 10); /*0x6ca74e*/
  v6 = (BlowStraw *)(v4 + 1); /*0x6ca753*/
  v11 = v5; /*0x6ca759*/
  v7 = wcschr((BlowStraw *)(v4 + 1), (CCINIClass *)0x3A); /*0x6ca762*/
  *v7 = 0; /*0x6ca769*/
  v10 = WideChar::ToLong(v6, 0, 10); /*0x6ca77b*/
  v9 = WideChar::ToLong((BlowStraw *)(v7 + 1), 0, 10); /*0x6ca78c*/
  return sub_6C9940(a2, v11, v10, v9); /*0x6ca7a1*/
}
}
} // namespace gamemd

// 0x6CA7B0
namespace gamemd {
void sub_6CA7B0(wchar_t * String, void ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_6CA7B0(wchar_t *String, void **a2)
{
  sub_6C9960(a2, String); /*0x6ca7b3*/
}
}
} // namespace gamemd

// 0x6CABF0
namespace gamemd {
int sub_6CABF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CABF0()
{
  MEMORY[0xB0BFF0] = 0; /*0x6cabf2*/
  MEMORY[0xB0BFF4] = 0; /*0x6cabf7*/
  MEMORY[0xB0BFF8] = 0; /*0x6cabfc*/
  MEMORY[0xB0BFFC] = 0; /*0x6cac01*/
  return 0; /*0x6cac06*/
}
}
} // namespace gamemd

// 0x6CAC10
namespace gamemd {
void sub_6CAC10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CAC10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cac1c*/
  MEMORY[0xB0C008] = Math::Sqrt(v0 + v0); /*0x6cac2e*/
}
}
} // namespace gamemd

// 0x6CAC40
namespace gamemd {
void sub_6CAC40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CAC40()
{
  MEMORY[0xB0C080] = MEMORY[0xB0C008] / 60.0; /*0x6cac4c*/
}
}
} // namespace gamemd

// 0x6CAC60
namespace gamemd {
void sub_6CAC60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CAC60()
{
  MEMORY[0xB0C068] = 1.0 / MEMORY[0xB0C080]; /*0x6cac6c*/
}
}
} // namespace gamemd

// 0x6CAC80
namespace gamemd {
void sub_6CAC80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CAC80()
{
  MEMORY[0xB0C060] = 0.0174532925199433 * 45.0; /*0x6cac8c*/
}
}
} // namespace gamemd

// 0x6CACA0
namespace gamemd {
void sub_6CACA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CACA0()
{
  MEMORY[0xB0C010] = 0.0174532925199433 * 60.0; /*0x6cacac*/
}
}
} // namespace gamemd

// 0x6CACC0
namespace gamemd {
void sub_6CACC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CACC0()
{
  MEMORY[0xB0BFE8] = 0.0174532925199433 * 90.0; /*0x6caccc*/
}
}
} // namespace gamemd

// 0x6CACE0
namespace gamemd {
long long sub_6CACE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6CACE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0BFE8] - MEMORY[0xB0C010]); /*0x6cacf2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0C008] * 0.5); /*0x6cad06*/
  MEMORY[0xB0C088] = result; /*0x6cad0b*/
  return result; /*0x6cad10*/
}
}
} // namespace gamemd

// 0x6CAD20
namespace gamemd {
void sub_6CAD20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CAD20()
{
  MEMORY[0xB0C018] = Math::ArcTan((double)MEMORY[0xB0C088] * 0.00390625); /*0x6cad37*/
}
}
} // namespace gamemd

// 0x6CAD50
namespace gamemd {
void sub_6CAD50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CAD50()
{
  MEMORY[0xB0C030] = Math::ArcTan((double)(2 * MEMORY[0xB0C088]) / MEMORY[0xB0C008]); /*0x6cad72*/
}
}
} // namespace gamemd

// 0x6CAD80
namespace gamemd {
long long sub_6CAD80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6CAD80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0C088]) + 0.5); /*0x6cad9b*/
  MEMORY[0xB0C07C] = result; /*0x6cada0*/
  return result; /*0x6cada6*/
}
}
} // namespace gamemd

// 0x6CADB0
namespace gamemd {
int sub_6CADB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CADB0()
{
  MEMORY[0xB0C000] = 0; /*0x6cadb2*/
  return 0; /*0x6cadbe*/
}
}
} // namespace gamemd

// 0x6CADC0
namespace gamemd {
int sub_6CADC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CADC0()
{
  MEMORY[0xB0C020] = 0; /*0x6cadc2*/
  MEMORY[0xB0C024] = 0; /*0x6cadc7*/
  MEMORY[0xB0C028] = 0; /*0x6cadcc*/
  return 0; /*0x6cadd1*/
}
}
} // namespace gamemd

// 0x6CADE0
namespace gamemd {
int sub_6CADE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CADE0()
{
  MEMORY[0xB0C078] = 0; /*0x6cade5*/
  MEMORY[0xB0C070] = 128; /*0x6cadef*/
  MEMORY[0xB0C074] = 128; /*0x6cadf4*/
  return 128; /*0x6cadf9*/
}
}
} // namespace gamemd

// 0x6CAE00
namespace gamemd {
int sub_6CAE00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CAE00()
{
  MEMORY[0xB0C038] = 0; /*0x6cae1b*/
  MEMORY[0xB0C03C] = 1; /*0x6cae2a*/
  MEMORY[0xB0C040] = -65535; /*0x6cae45*/
  MEMORY[0xB0C044] = -65536; /*0x6cae59*/
  MEMORY[0xB0C048] = -1; /*0x6cae6d*/
  MEMORY[0xB0C050] = 0x1FFFF; /*0x6cae98*/
  MEMORY[0xB0C04C] = 0xFFFF; /*0x6caeab*/
  MEMORY[0xB0C054] = 0x10000; /*0x6caeb1*/
  MEMORY[0xB0C058] = 65537; /*0x6caeb7*/
  return 65537; /*0x6caebe*/
}
}
} // namespace gamemd

// 0x6CC070
namespace gamemd {
void nullsub_231()
{
  ;
}
} // namespace gamemd

// 0x6CDE80
namespace gamemd {
void nullsub_235(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x6CE360
namespace gamemd {
int sub_6CE360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CE360()
{
  MEMORY[0xB0C098] = 0; /*0x6ce362*/
  MEMORY[0xB0C09C] = 0; /*0x6ce367*/
  MEMORY[0xB0C0A0] = 0; /*0x6ce36c*/
  MEMORY[0xB0C0A4] = 0; /*0x6ce371*/
  return 0; /*0x6ce376*/
}
}
} // namespace gamemd

// 0x6CE380
namespace gamemd {
void sub_6CE380()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CE380()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ce38c*/
  MEMORY[0xB0C0B0] = Math::Sqrt(v0 + v0); /*0x6ce39e*/
}
}
} // namespace gamemd

// 0x6CE3B0
namespace gamemd {
void sub_6CE3B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CE3B0()
{
  MEMORY[0xB0C100] = MEMORY[0xB0C0B0] / 60.0; /*0x6ce3bc*/
}
}
} // namespace gamemd

// 0x6CE3D0
namespace gamemd {
void sub_6CE3D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CE3D0()
{
  MEMORY[0xB0C0E8] = 1.0 / MEMORY[0xB0C100]; /*0x6ce3dc*/
}
}
} // namespace gamemd

// 0x6CE3F0
namespace gamemd {
void sub_6CE3F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CE3F0()
{
  MEMORY[0xB0C0E0] = 0.0174532925199433 * 45.0; /*0x6ce3fc*/
}
}
} // namespace gamemd

// 0x6CE410
namespace gamemd {
void sub_6CE410()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CE410()
{
  MEMORY[0xB0C0B8] = 0.0174532925199433 * 60.0; /*0x6ce41c*/
}
}
} // namespace gamemd

// 0x6CE430
namespace gamemd {
void sub_6CE430()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CE430()
{
  MEMORY[0xB0C090] = 0.0174532925199433 * 90.0; /*0x6ce43c*/
}
}
} // namespace gamemd

// 0x6CE450
namespace gamemd {
long long sub_6CE450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6CE450()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0C090] - MEMORY[0xB0C0B8]); /*0x6ce462*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0C0B0] * 0.5); /*0x6ce476*/
  MEMORY[0xB0C108] = result; /*0x6ce47b*/
  return result; /*0x6ce480*/
}
}
} // namespace gamemd

// 0x6CE490
namespace gamemd {
void sub_6CE490()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CE490()
{
  MEMORY[0xB0C0C0] = Math::ArcTan((double)MEMORY[0xB0C108] * 0.00390625); /*0x6ce4a7*/
}
}
} // namespace gamemd

// 0x6CE4C0
namespace gamemd {
void sub_6CE4C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CE4C0()
{
  MEMORY[0xB0C0D8] = Math::ArcTan((double)(2 * MEMORY[0xB0C108]) / MEMORY[0xB0C0B0]); /*0x6ce4e2*/
}
}
} // namespace gamemd

// 0x6CE4F0
namespace gamemd {
long long sub_6CE4F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6CE4F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0C108]) + 0.5); /*0x6ce50b*/
  MEMORY[0xB0C0FC] = result; /*0x6ce510*/
  return result; /*0x6ce516*/
}
}
} // namespace gamemd

// 0x6CE520
namespace gamemd {
int sub_6CE520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CE520()
{
  MEMORY[0xB0C0A8] = 0; /*0x6ce522*/
  MEMORY[0xB0C0AA] = 0; /*0x6ce528*/
  return 0; /*0x6ce52e*/
}
}
} // namespace gamemd

// 0x6CE530
namespace gamemd {
int sub_6CE530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CE530()
{
  MEMORY[0xB0C0C8] = 0; /*0x6ce532*/
  MEMORY[0xB0C0CC] = 0; /*0x6ce537*/
  MEMORY[0xB0C0D0] = 0; /*0x6ce53c*/
  return 0; /*0x6ce541*/
}
}
} // namespace gamemd

// 0x6CE550
namespace gamemd {
int sub_6CE550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CE550()
{
  MEMORY[0xB0C0F8] = 0; /*0x6ce555*/
  MEMORY[0xB0C0F0] = 128; /*0x6ce55f*/
  MEMORY[0xB0C0F4] = 128; /*0x6ce564*/
  return 128; /*0x6ce569*/
}
}
} // namespace gamemd

// 0x6CE570
namespace gamemd {
ObjectClass * sub_6CE570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_6CE570(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x6ce575*/
  v3 = (const void **)&stru_830620.__pad_579C[51204]; /*0x6ce577*/
  while ( _strcmpi(*v3, this) ) /*0x6ce58a*/
  {
    ++v3; /*0x6ce58c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x6ce58f*/
    if ( (int)v3 >= (int)&stru_830620.__pad_579C[51252] ) /*0x6ce596*/
      return (ObjectClass *)-1; /*0x6ce59e*/
  }
  return v2; /*0x6ce598*/
}
}
} // namespace gamemd

// 0x6CF070
namespace gamemd {
int sub_6CF070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CF070()
{
  sub_6CF8F0(&MEMORY[0xB0C114], 0, 0); /*0x6cf079*/
  MEMORY[0xB0C114] = (int)&DynamicVectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf087*/
  MEMORY[0xB0C128] = 10; /*0x6cf091*/
  MEMORY[0xB0C124] = 0; /*0x6cf09b*/
  sub_6CF8F0(&MEMORY[0xB0C12C], 0, 0); /*0x6cf0a5*/
  MEMORY[0xB0C12C] = (int)&DynamicVectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf0b4*/
  MEMORY[0xB0C13C] = 0; /*0x6cf0be*/
  MEMORY[0xB0C110] = (int)&SwizzleManagerClass::`vftable'; /*0x6cf0c8*/
  MEMORY[0xB0C128] = 1000; /*0x6cf0d2*/
  MEMORY[0xB0C140] = 1000; /*0x6cf0d7*/
  return atexit(SwizzleManagerClass::Register); /*0x6cf0e2*/
}
}
} // namespace gamemd

// 0x6CF320
namespace gamemd {
int globalHelper_0CF320(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl globalHelper_0CF320(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x6cf330*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x6CF8F0
namespace gamemd {
unsigned int * sub_6CF8F0(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6CF8F0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx

  *(this + 1) = 0; /*0x6cf8fd*/
  *(this + 2) = a2; /*0x6cf900*/
  *((_BYTE *)this + 12) = 1; /*0x6cf903*/
  *((_BYTE *)this + 13) = 0; /*0x6cf907*/
  *this = &VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf90a*/
  if ( !a2 ) /*0x6cf910*/
    return this; /*0x6cf910*/
  if ( !a3 ) /*0x6cf918*/
  {
    v7 = __2_YAPAXI_Z(8 * a2); /*0x6cf942*/
    if ( v7 ) /*0x6cf94c*/
    {
      v8 = v7; /*0x6cf951*/
      if ( a2 - 1 >= 0 ) /*0x6cf955*/
      {
        v9 = a2; /*0x6cf957*/
        do /*0x6cf961*/
        {
          *v8 = 0; /*0x6cf958*/
          v8[1] = 0; /*0x6cf95a*/
          v8 += 2; /*0x6cf95d*/
          --v9; /*0x6cf960*/
        }
        while ( v9 ); /*0x6cf961*/
        *(this + 1) = v7; /*0x6cf963*/
        *((_BYTE *)this + 13) = 1; /*0x6cf966*/
        return this; /*0x6cf96f*/
      }
    }
    else
    {
      v7 = 0; /*0x6cf972*/
    }
    *(this + 1) = v7; /*0x6cf974*/
    *((_BYTE *)this + 13) = 1; /*0x6cf977*/
    return this; /*0x6cf97b*/
  }
  v4 = a3; /*0x6cf91d*/
  if ( a2 - 1 >= 0 ) /*0x6cf921*/
  {
    v5 = a2; /*0x6cf923*/
    do /*0x6cf92d*/
    {
      *v4 = 0; /*0x6cf924*/
      v4[1] = 0; /*0x6cf926*/
      v4 += 2; /*0x6cf929*/
      --v5; /*0x6cf92c*/
    }
    while ( v5 ); /*0x6cf92d*/
  }
  *(this + 1) = a3; /*0x6cf92f*/
  return this; /*0x6cf934*/
}
}
} // namespace gamemd

// 0x6CF990
namespace gamemd {
int sub_6CF990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CF990()
{
  MEMORY[0xB0CB28] = 0; /*0x6cf992*/
  MEMORY[0xB0CB2C] = 0; /*0x6cf997*/
  MEMORY[0xB0CB30] = 0; /*0x6cf99c*/
  MEMORY[0xB0CB34] = 0; /*0x6cf9a1*/
  return 0; /*0x6cf9a6*/
}
}
} // namespace gamemd

// 0x6CF9B0
namespace gamemd {
void sub_6CF9B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CF9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cf9bc*/
  MEMORY[0xB0CB48] = Math::Sqrt(v0 + v0); /*0x6cf9ce*/
}
}
} // namespace gamemd

// 0x6CF9E0
namespace gamemd {
void sub_6CF9E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CF9E0()
{
  MEMORY[0xB0CD30] = MEMORY[0xB0CB48] / 60.0; /*0x6cf9ec*/
}
}
} // namespace gamemd

// 0x6CFA00
namespace gamemd {
void sub_6CFA00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CFA00()
{
  MEMORY[0xB0CCA8] = 1.0 / MEMORY[0xB0CD30]; /*0x6cfa0c*/
}
}
} // namespace gamemd

// 0x6CFA20
namespace gamemd {
void sub_6CFA20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CFA20()
{
  MEMORY[0xB0CCA0] = 0.0174532925199433 * 45.0; /*0x6cfa2c*/
}
}
} // namespace gamemd

// 0x6CFA40
namespace gamemd {
void sub_6CFA40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CFA40()
{
  MEMORY[0xB0CB60] = 0.0174532925199433 * 60.0; /*0x6cfa4c*/
}
}
} // namespace gamemd

// 0x6CFA60
namespace gamemd {
void sub_6CFA60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CFA60()
{
  MEMORY[0xB0C1B0] = 0.0174532925199433 * 90.0; /*0x6cfa6c*/
}
}
} // namespace gamemd

// 0x6CFA80
namespace gamemd {
long long sub_6CFA80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6CFA80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0C1B0] - MEMORY[0xB0CB60]); /*0x6cfa92*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0CB48] * 0.5); /*0x6cfaa6*/
  MEMORY[0xB0CD3C] = result; /*0x6cfaab*/
  return result; /*0x6cfab0*/
}
}
} // namespace gamemd

// 0x6CFAC0
namespace gamemd {
void sub_6CFAC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CFAC0()
{
  MEMORY[0xB0CB70] = Math::ArcTan((double)MEMORY[0xB0CD3C] * 0.00390625); /*0x6cfad7*/
}
}
} // namespace gamemd

// 0x6CFAF0
namespace gamemd {
void sub_6CFAF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6CFAF0()
{
  MEMORY[0xB0CC30] = Math::ArcTan((double)(2 * MEMORY[0xB0CD3C]) / MEMORY[0xB0CB48]); /*0x6cfb12*/
}
}
} // namespace gamemd

// 0x6CFB20
namespace gamemd {
long long sub_6CFB20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6CFB20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0CD3C]) + 0.5); /*0x6cfb3b*/
  MEMORY[0xB0CD2C] = result; /*0x6cfb40*/
  return result; /*0x6cfb46*/
}
}
} // namespace gamemd

// 0x6CFB50
namespace gamemd {
int sub_6CFB50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CFB50()
{
  MEMORY[0xB0CB40] = 0; /*0x6cfb52*/
  MEMORY[0xB0CB42] = 0; /*0x6cfb58*/
  return 0; /*0x6cfb5e*/
}
}
} // namespace gamemd

// 0x6CFB60
namespace gamemd {
int sub_6CFB60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CFB60()
{
  MEMORY[0xB0CC10] = 0; /*0x6cfb62*/
  MEMORY[0xB0CC14] = 0; /*0x6cfb67*/
  MEMORY[0xB0CC18] = 0; /*0x6cfb6c*/
  return 0; /*0x6cfb71*/
}
}
} // namespace gamemd

// 0x6CFB80
namespace gamemd {
int sub_6CFB80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CFB80()
{
  MEMORY[0xB0CD20] = 0; /*0x6cfb85*/
  MEMORY[0xB0CD18] = 128; /*0x6cfb8f*/
  MEMORY[0xB0CD1C] = 128; /*0x6cfb94*/
  return 128; /*0x6cfb99*/
}
}
} // namespace gamemd

// 0x6CFBA0
namespace gamemd {
int sub_6CFBA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CFBA0()
{
  _BYTE *v0; // esi
  int v1; // edi

  v0 = &MEMORY[0xB0C1C0]; /*0x6cfba2*/
  v1 = 25; /*0x6cfba7*/
  do /*0x6cfbb7*/
  {
    ShapeButtonClass::Init(v0); /*0x6cfbae*/
    v0 += 96; /*0x6cfbb3*/
    --v1; /*0x6cfbb6*/
  }
  while ( v1 ); /*0x6cfbb7*/
  return atexit(sub_6CFBD0); /*0x6cfbc6*/
}
}
} // namespace gamemd

// 0x6CFBD0
namespace gamemd {
void sub_6CFBD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_6CFBD0()
{
  int *v0; // esi
  int v1; // edi

  if ( (MEMORY[0xB0C1AC] & 1) == 0 ) /*0x6cfbda*/
  {
    MEMORY[0xB0C1AC] |= 1u; /*0x6cfbe0*/
    v0 = &MEMORY[0xB0CB20]; /*0x6cfbe6*/
    v1 = 25; /*0x6cfbeb*/
    do /*0x6cfbfb*/
    {
      v0 -= 24; /*0x6cfbf0*/
      ShapeButtonClass::Destructor((int)v0); /*0x6cfbf5*/
      --v1; /*0x6cfbfa*/
    }
    while ( v1 ); /*0x6cfbfb*/
  }
}
}
} // namespace gamemd

// 0x6CFC00
namespace gamemd {
int sub_6CFC00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CFC00()
{
  ShapeButtonClass::Init(MEMORY[0xB0CCB0]); /*0x6cfc05*/
  return atexit(sub_6CFC20); /*0x6cfc15*/
}
}
} // namespace gamemd

// 0x6CFC20
namespace gamemd {
void sub_6CFC20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_6CFC20()
{
  if ( (MEMORY[0xB0C1AC] & 2) == 0 ) /*0x6cfc2a*/
  {
    MEMORY[0xB0C1AC] |= 2u; /*0x6cfc2e*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB0CCB0]); /*0x6cfc39*/
  }
}
}
} // namespace gamemd

// 0x6CFC40
namespace gamemd {
int sub_6CFC40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6CFC40()
{
  ShapeButtonClass::Init(MEMORY[0xB0CC40]); /*0x6cfc45*/
  return atexit(sub_6CFC60); /*0x6cfc55*/
}
}
} // namespace gamemd

// 0x6CFC60
namespace gamemd {
void sub_6CFC60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_6CFC60()
{
  if ( (MEMORY[0xB0C1AC] & 4) == 0 ) /*0x6cfc6a*/
  {
    MEMORY[0xB0C1AC] |= 4u; /*0x6cfc6e*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB0CC40]); /*0x6cfc79*/
  }
}
}
} // namespace gamemd

// 0x6CFD20
namespace gamemd {
void sub_6CFD20(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_6CFD20(int a1, int a2)
{
  MEMORY[0xB0CB78][a1] = a2; /*0x6cfd20*/
}
}
} // namespace gamemd

// 0x6CFD30
namespace gamemd {
int sub_6CFD30(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6CFD30(int a1)
{
  return MEMORY[0xB0CB78][a1]; /*0x6cfd37*/
}
}
} // namespace gamemd

// 0x6CFD40
namespace gamemd {
char * FontClass_GetEntry(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall FontClass_GetEntry(int a1)
{
  unsigned int v1; // eax

  v1 = MEMORY[0xB0CB78][a1]; /*0x6cfd40*/
  if ( v1 > 0x18 ) /*0x6cfd49*/
    return 0; /*0x6cfd5c*/
  else
    return (char *)&MEMORY[0xB0C1C0] + 96 * v1; /*0x6cfd56*/
}
}
} // namespace gamemd

// 0x6CFD60
namespace gamemd {
unsigned int * sub_6CFD60(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_6CFD60(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edi

  result = a1; /*0x6cfd7a*/
  v4 = MEMORY[0xB0CC24]; /*0x6cfd82*/
  v5 = *((_DWORD *)MEMORY[0xB0FC68] + 2); /*0x6cfd8f*/
  v6 = *((_DWORD *)MEMORY[0xB0FC68] + 3); /*0x6cfd92*/
  *a1 = *(_DWORD *)MEMORY[0xB0FC68] + MEMORY[0xB0CC38] * MEMORY[0xB0CB78][a2]; /*0x6cfd95*/
  a1[1] = v4; /*0x6cfd97*/
  a1[2] = v5; /*0x6cfd9a*/
  a1[3] = v6; /*0x6cfd9d*/
  return result; /*0x6cfda0*/
}
}
} // namespace gamemd

// 0x6CFDB0
namespace gamemd {
int sub_6CFDB0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6CFDB0(int a1)
{
  int result; // eax
  int v2; // ecx

  MEMORY[0xB0CB54] = a1; /*0x6cfdb5*/
  result = *(_DWORD *)MEMORY[0xB0FC6C] - a1 * *((_DWORD *)MEMORY[0xB0FC68] + 2); /*0x6cfdc9*/
  v2 = *(_DWORD *)MEMORY[0xB0FC60] + *((_DWORD *)MEMORY[0xB0FC60] + 2); /*0x6cfdd6*/
  MEMORY[0xB0CC2C] = result; /*0x6cfddb*/
  if ( result <= v2 ) /*0x6cfde0*/
    MEMORY[0xB0CC2C] = v2; /*0x6cfde2*/
  return result; /*0x6cfdd8*/
}
}
} // namespace gamemd

// 0x6CFE10
namespace gamemd {
int sub_6CFE10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6CFE10(void *this)
{
  return (int)this - MEMORY[0xB0CC20] + 1; /*0x6cfe19*/
}
}
} // namespace gamemd
