// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_626120_e4.hpp"
#include "e4/classes/E4Recv_6345A0_e4.hpp"
#include "e4/classes/E4Recv_634770_e4.hpp"
#include "e4/classes/E4Recv_635490_e4.hpp"
#include "e4/classes/E4Recv_63D0F0_e4.hpp"
#include "e4/classes/E4Recv_65A1B0_e4.hpp"
#include "e4/classes/E4Recv_68FFE0_e4.hpp"
#include "e4/classes/E4Recv_6BAFA0_e4.hpp"
#include "e4/classes/E4Recv_6C9900_e4.hpp"
#include "e4/classes/E4Recv_6CABA0_e4.hpp"
#include "e4/classes/E4Recv_7597A0_e4.hpp"
#include "e4/classes/E4Recv_759830_e4.hpp"
#include "e4/classes/E4Recv_759850_e4.hpp"
#include "e4/classes/E4Recv_759880_e4.hpp"
#include "e4/classes/E4Recv_759EA0_e4.hpp"
#include "e4/classes/E4Recv_759EB0_e4.hpp"
#include "e4/classes/E4Recv_759F20_e4.hpp"
#include "e4/classes/E4Recv_783B80_e4.hpp"
#include "e4/classes/E4Recv_7B71D0_e4.hpp"

// 0x52FF90
namespace gamemd {
int Render_Load()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __usercall Render_Load@<eax>(char *Source@<ecx>, char a2@<dl>, int a3@<ebp>)
{
  int result; // eax
  Frame *v6; // ecx
  int v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88730C] + 24))(MEMORY[0x88730C], 0); /*0x52ffa0*/
  result = ScoreScreen::DrawSHPBackground(Source, (int *)MEMORY[0x88730C], a2, a3, (int)&MEMORY[0x886080], v7, v8); /*0x52ffb0*/
  if ( a2 ) /*0x52ffb9*/
  {
    LOBYTE(v6) = 1; /*0x52ffc3*/
    return Frame::Present(v6, 0); /*0x52ffc5*/
  }
  return result; /*0x52ffb7*/
}
}
} // namespace gamemd

// 0x53C0A0
namespace gamemd {
int sub_53C0A0(unsigned short * a1, int a2, unsigned short a3, int a4, int a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_53C0A0(_WORD *a1, int a2, unsigned __int16 a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebx
  int result; // eax
  double v9; // st7
  double v10; // st7
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  bool v14; // zf
  float v16; // [esp+14h] [ebp-34h]
  float v17; // [esp+14h] [ebp-34h]
  float v18; // [esp+18h] [ebp-30h]
  float v19; // [esp+1Ch] [ebp-2Ch]
  float v20; // [esp+20h] [ebp-28h]
  int v21; // [esp+24h] [ebp-24h]
  int v22; // [esp+28h] [ebp-20h]
  float v23; // [esp+2Ch] [ebp-1Ch]
  float v24; // [esp+2Ch] [ebp-1Ch]
  float v25; // [esp+30h] [ebp-18h]
  _WORD *v26; // [esp+34h] [ebp-14h]
  float v27; // [esp+38h] [ebp-10h]
  float v28; // [esp+3Ch] [ebp-Ch]
  float v29; // [esp+40h] [ebp-8h]
  float v30; // [esp+44h] [ebp-4h]

  v7 = a4; /*0x53c0a7*/
  v26 = a1; /*0x53c0b6*/
  v28 = (float)(a4 / 2); /*0x53c0c4*/
  result = a5 / 2; /*0x53c0c9*/
  v9 = (double)(a5 / 2); /*0x53c0ce*/
  v27 = v9; /*0x53c0d3*/
  v18 = v9 * v27 + v28 * v28; /*0x53c0e1*/
  v29 = -v27; /*0x53c0e9*/
  if ( a5 > 0 ) /*0x53c0ec*/
  {
    v21 = a5; /*0x53c0fb*/
    do /*0x53c26c*/
    {
      v20 = -v28; /*0x53c0f7*/
      v30 = v20; /*0x53c103*/
      if ( v7 > 0 ) /*0x53c106*/
      {
        v22 = v7; /*0x53c115*/
        do /*0x53c24a*/
        {
          v19 = v29 * v29; /*0x53c11e*/
          v10 = (1.0 - (v30 * v30 + v19) / v18) * 5.0; /*0x53c133*/
          v23 = unk_A9FAA0 * v10 * v10; /*0x53c143*/
          v25 = ComputeChronosphereDistortion(v23); /*0x53c151*/
          v24 = ComputeDistortionVariant(v23); /*0x53c15a*/
          v16 = v25 * v30 + v24 * v29 + v28; /*0x53c16e*/
          v11 = (int)v16; /*0x53c183*/
          v17 = v25 * v29 - v24 * v30 + v27; /*0x53c18b*/
          v12 = (int)v17; /*0x53c194*/
          if ( v11 >= 0 ) /*0x53c199*/
          {
            if ( v11 >= v7 ) /*0x53c1a1*/
              v11 = v7 - 1; /*0x53c1a3*/
          }
          else
          {
            v11 = 0; /*0x53c19b*/
          }
          if ( v12 >= 0 ) /*0x53c1a8*/
          {
            if ( v12 >= a5 ) /*0x53c1b3*/
              v12 = a5 - 1; /*0x53c1b5*/
          }
          else
          {
            v12 = 0; /*0x53c1aa*/
          }
          v30 = v30 + 1.0; /*0x53c1c5*/
          v13 = a2 + 2 * (v11 + a7 * v12); /*0x53c1d2*/
          LOWORD(v13) = *(_WORD *)v13; /*0x53c1d5*/
          *v26 = ((v13 & 0x1F) + ((int)(a3 * (31 - (v13 & 0x1F))) >> 8)) /*0x53c23a*/
               | (32 * (((v13 >> 5) & 0x3F) + ((int)(a3 * (63 - ((v13 >> 5) & 0x3F))) >> 8)))
               | ((((unsigned __int16)v13 >> 11) + (unsigned __int16)((a3 * (31 - ((unsigned __int16)v13 >> 11))) >> 8)) << 11);
          v7 = a4; /*0x53c23d*/
          a1 = ++v26; /*0x53c240*/
          --v22; /*0x53c247*/
        }
        while ( v22 ); /*0x53c24a*/
      }
      a1 += a6; /*0x53c25c*/
      result = v21 - 1; /*0x53c262*/
      v14 = v21 == 1; /*0x53c262*/
      v26 = a1; /*0x53c263*/
      --v21; /*0x53c266*/
      v29 = v29 + 1.0; /*0x53c269*/
    }
    while ( !v14 ); /*0x53c26c*/
  }
  return result; /*0x53c273*/
}
}
} // namespace gamemd

// 0x652230
namespace gamemd {
char Render_Show(CCINIClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Render_Show(CCINIClass *aP0, int a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  char result; // al
  wchar_t *v6; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-18h]
  int v8; // [esp+0h] [ebp-8h]

  v3 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] + 1; /*0x652240*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] == 2 ) /*0x652246*/
    v3 = *(_DWORD *)&HouseClass_Player.__pad_5568[8864] /*0x652255*/
       * ((unsigned int)(*(_DWORD *)&HouseClass_Player.__pad_5568[8864] + *(_DWORD *)&HouseClass_Player.__pad_5568[23248])
        / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]);
  *(_DWORD *)(v2 + 3) = v3; /*0x652258*/
  if ( dword_8B41F8 >= 0x4000 ) /*0x652265*/
  {
    result = HouseClass_Player.__pad_5568[8068]; /*0x6522b7*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5 ) /*0x6522c7*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x6522d0*/
        Timer::UpdateDelta(); /*0x6522d2*/
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x6522e4*/
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 8878); /*0x65230f*/
      v6 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[5816], 0, &stru_830620.__pad_579C[5860], 8878); /*0x65231a*/
      Dialog::ShowMessageBox((int)v6, StringCSF, 0, 0, 0, v8); /*0x652324*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[9732] = 0; /*0x652335*/
      --*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x652341*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[9736] = 0; /*0x652347*/
      HouseClass_Player.__pad_5568[22252] = 0; /*0x652351*/
      if ( dword_B04874 ) /*0x652358*/
        Mouse::HideWindow(); /*0x65235a*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x652366*/
      {
        stru_B05488.__pad_579C[4436] = 1; /*0x65236a*/
        HouseClass_Player.__pad_5568[9741] = 1; /*0x65236f*/
        HouseClass_Player.__pad_5568[9742] = 1; /*0x652374*/
        Timer::UpdateDelta(); /*0x652379*/
        ProcessGameResults(0); /*0x652380*/
      }
      MouseClass::LoadCursors(); /*0x652385*/
      return ToggleDisplayMode(0); /*0x65238c*/
    }
  }
  else
  {
    if ( *(_DWORD *)&word_8B41FC ) /*0x65226e*/
      v4 = *(_DWORD *)&word_8B41FC - 1; /*0x652277*/
    else
      v4 = 0x3FFF; /*0x652270*/
    *(_DWORD *)&word_8B41FC = v4; /*0x65227b*/
    qmemcpy((char *)&unk_8B4204 + 111 * v4, (const void *)v2, 0x6Fu); /*0x652290*/
    dword_A70204[*(_DWORD *)&word_8B41FC] = timeGetTime(); /*0x6522a3*/
    return ++dword_8B41F8; /*0x6522af*/
  }
  return result; /*0x6522a2*/
}
}
} // namespace gamemd

// 0x705270
int Render::DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Render_DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v8; // esi
  int v9; // edi
  char v10; // bl
  _DWORD *v11; // eax
  int *v12; // eax
  int *v13; // eax
  _DWORD *v14; // eax
  int *v15; // eax
  int *v16; // eax
  int v17; // eax
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int v22; // esi
  int v23; // edi
  int v24; // ebx
  unsigned __int8 v25; // al
  int result; // eax
  int v27; // [esp+24h] [ebp-A0h] BYREF
  int v28; // [esp+28h] [ebp-9Ch]
  int v29; // [esp+2Ch] [ebp-98h] BYREF
  int v30; // [esp+30h] [ebp-94h]
  __int16 v31; // [esp+34h] [ebp-90h] BYREF
  unsigned __int8 v32; // [esp+36h] [ebp-8Eh]
  int v33; // [esp+3Ch] [ebp-88h] BYREF
  int v34; // [esp+40h] [ebp-84h]
  int v35; // [esp+44h] [ebp-80h] BYREF
  int v36; // [esp+48h] [ebp-7Ch]
  int v37; // [esp+4Ch] [ebp-78h]
  int v38; // [esp+50h] [ebp-74h]
  int v39; // [esp+54h] [ebp-70h] BYREF
  int v40; // [esp+58h] [ebp-6Ch]
  int v41; // [esp+5Ch] [ebp-68h]
  int v42; // [esp+60h] [ebp-64h]
  int v43[2]; // [esp+64h] [ebp-60h] BYREF
  int v44[2]; // [esp+6Ch] [ebp-58h] BYREF
  int v45; // [esp+74h] [ebp-50h] BYREF
  int v46; // [esp+78h] [ebp-4Ch]
  int v47; // [esp+7Ch] [ebp-48h]
  int v48; // [esp+80h] [ebp-44h] BYREF
  int v49; // [esp+84h] [ebp-40h]
  int v50; // [esp+88h] [ebp-3Ch]
  int v51[4]; // [esp+8Ch] [ebp-38h] BYREF
  _DWORD v52[2]; // [esp+9Ch] [ebp-28h] BYREF
  _DWORD v53[4]; // [esp+A4h] [ebp-20h] BYREF
  _DWORD v54[4]; // [esp+B4h] [ebp-10h] BYREF

  v31 = 0; /*0x70527a*/
  v32 = 0; /*0x705282*/
  Coord::To_Screen(MEMORY[0x887324], &a1, &v29); /*0x70529b*/
  Coord::To_Screen(MEMORY[0x887324], &a4, &v33); /*0x7052b3*/
  v30 += MEMORY[0x886FA4]; /*0x7052ce*/
  v34 += MEMORY[0x886FA4]; /*0x70530d*/
  v8 = ((unsigned __int8)a7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x705348*/
     | (BYTE2(a7) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
     | (BYTE1(a7) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]);
  v27 = (unsigned __int8)word_A83CDA; /*0x705363*/
  v43[0] = v29; /*0x70538d*/
  v9 = (HIBYTE(word_A83CDA) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x705397*/
     | ((unsigned __int8)word_A83CDA >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
     | ((unsigned __int8)byte_A83CD9 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
  v10 = a8; /*0x705399*/
  v43[1] = v30 + 1; /*0x7053b0*/
  v44[0] = v33; /*0x7053b4*/
  v44[1] = v34 + 1; /*0x7053b8*/
  if ( a8 ) /*0x7053bc*/
  {
    v27 = -2; /*0x7053cb*/
    v28 = -2; /*0x7053dc*/
    v11 = Coord2D::Add(&v27, v52, v43); /*0x7053e6*/
    v12 = Rect::Construct(v53, v11, 3, 3); /*0x7053f3*/
    v39 = *v12; /*0x7053fc*/
    v40 = v12[1]; /*0x705405*/
    v41 = v12[2]; /*0x70540c*/
    v42 = v12[3]; /*0x70541e*/
    v13 = ClipRectIntersection(v54, &MEMORY[0x886FA0], &v39, 0, 0); /*0x705428*/
    v35 = *v13; /*0x705430*/
    v36 = v13[1]; /*0x705437*/
    v37 = v13[2]; /*0x70543e*/
    v38 = v13[3]; /*0x70544b*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v35, v8); /*0x705456*/
    v27 = -2; /*0x705462*/
    v28 = -2; /*0x705466*/
    v14 = Coord2D::Add(&v27, v52, v44); /*0x70547d*/
    v15 = Rect::Construct(v54, v14, 3, 3); /*0x70548a*/
    v35 = *v15; /*0x705493*/
    v36 = v15[1]; /*0x70549c*/
    v37 = v15[2]; /*0x7054a8*/
    v38 = v15[3]; /*0x7054bb*/
    v16 = ClipRectIntersection(v53, &MEMORY[0x886FA0], &v35, 0, 0); /*0x7054bf*/
    v39 = *v16; /*0x7054c6*/
    v40 = v16[1]; /*0x7054cd*/
    v41 = v16[2]; /*0x7054d4*/
    v42 = v16[3]; /*0x7054e1*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v39, v9); /*0x7054ed*/
  }
  v51[0] = MEMORY[0x886FA0]; /*0x705501*/
  v51[1] = MEMORY[0x886FA4]; /*0x70550b*/
  v51[2] = MEMORY[0x886FA8]; /*0x705511*/
  v51[3] = MEMORY[0x886FAC]; /*0x705518*/
  if ( v10 && ClipLine(v43, v44, v51) ) /*0x70552e*/
  {
    if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x705540*/
      v17 = **(unsigned __int8 **)(MEMORY[0x87F6C4] + 372); /*0x70554c*/
    else
      v17 = **(unsigned __int16 **)(MEMORY[0x87F6C4] + 372); /*0x705558*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 48))(MEMORY[0x88731C], v43, v44, v17); /*0x70556e*/
  }
  v27 = v29 - 2; /*0x705583*/
  v28 = v30 - 2; /*0x70558b*/
  v18 = Rect::Construct(v54, &v27, 3, 3); /*0x705597*/
  v35 = *v18; /*0x7055a0*/
  v36 = v18[1]; /*0x7055a9*/
  v37 = v18[2]; /*0x7055b0*/
  v38 = v18[3]; /*0x7055c2*/
  v19 = ClipRectIntersection(v53, &MEMORY[0x886FA0], &v35, 0, 0); /*0x7055cc*/
  v39 = *v19; /*0x7055d4*/
  v40 = v19[1]; /*0x7055db*/
  v41 = v19[2]; /*0x7055e2*/
  v42 = v19[3]; /*0x7055ef*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v39, v9); /*0x7055fa*/
  v28 = v34 - 2; /*0x705611*/
  v27 = v33 - 2; /*0x70561f*/
  v20 = Rect::Construct(v54, &v27, 3, 3); /*0x705623*/
  v35 = *v20; /*0x70562c*/
  v36 = v20[1]; /*0x705635*/
  v37 = v20[2]; /*0x70563c*/
  v38 = v20[3]; /*0x70564e*/
  v21 = ClipRectIntersection(v53, &MEMORY[0x886FA0], &v35, 0, 0); /*0x705658*/
  v39 = *v21; /*0x705660*/
  v40 = v21[1]; /*0x705667*/
  v41 = v21[2]; /*0x70566e*/
  v42 = v21[3]; /*0x70567b*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v39, v8); /*0x705686*/
  v45 = a1; /*0x70569e*/
  v46 = a2; /*0x7056a2*/
  v47 = a3; /*0x7056a6*/
  v22 = 1; /*0x7056aa*/
  v23 = 63; /*0x7056af*/
  v24 = 252; /*0x7056b4*/
  do /*0x705841*/
  {
    v48 = (v22 * a4 + v23 * a1) / 64; /*0x7056ec*/
    v49 = (v22 * a5 + v23 * a2) / 64; /*0x705705*/
    v50 = (v22 * a6 + v23 * a3) / 64; /*0x705728*/
    Coord::To_Screen(MEMORY[0x887324], &v45, &v29); /*0x705732*/
    Coord::To_Screen(MEMORY[0x887324], &v48, &v33); /*0x705747*/
    v30 += MEMORY[0x886FA4]; /*0x705761*/
    v34 += MEMORY[0x886FA4]; /*0x70576e*/
    if ( ClipLine(&v29, &v33, v51) ) /*0x705772*/
    {
      v31 = a7; /*0x705794*/
      v32 = BYTE2(a7); /*0x705799*/
      v25 = v24; /*0x70579d*/
      if ( v24 >= 254 ) /*0x70579f*/
        v25 = -2; /*0x7057a1*/
      Color::Lerp((unsigned __int8 *)&v31, v25, (unsigned __int8 *)&byte_A83CD9); /*0x7057b0*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 48))( /*0x70581e*/
        MEMORY[0x88731C],
        &v29,
        &v33,
        ((unsigned __int8)v31 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
      | (HIBYTE(v31) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
      | (v32 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
    }
    result = v50; /*0x705829*/
    ++v22; /*0x70582d*/
    --v23; /*0x70582e*/
    v24 -= 4; /*0x70582f*/
    v45 = v48; /*0x705835*/
    v46 = v49; /*0x705839*/
    v47 = v50; /*0x70583d*/
  }
  while ( v22 <= 64 ); /*0x705841*/
  return result; /*0x705847*/
}
}

// 0x780D90
namespace gamemd {
wchar_t ** Render_Format(wchar_t ** a1, char ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t **__fastcall Render_Format(wchar_t **a1, char **a2)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax
  int v7; // edi
  int v8; // esi
  char *v9; // eax

  v4 = String::GetOrEmpty_Alt(a2); /*0x780d9f*/
  if ( _strcmpi(v4, aRandmapSed) ) /*0x780da5*/
  {
    v7 = 0; /*0x780ddb*/
    if ( MEMORY[0xA8B8D8] <= 0 ) /*0x780ddf*/
    {
LABEL_6:
      WideString::Assign(a1, (CampaignScore *)&MEMORY[0x87F8E4].__pad_5568[10472]); /*0x780e0b*/
      return a1; /*0x780e17*/
    }
    else
    {
      while ( 1 ) /*0x780de6*/
      {
        v8 = *(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v7); /*0x780de6*/
        v9 = String::GetOrEmpty_Alt(a2); /*0x780def*/
        if ( !_strcmpi(v9, (char *)(v8 + 88)) ) /*0x780df5*/
          break; /*0x780df5*/
        if ( ++v7 >= MEMORY[0xA8B8D8] ) /*0x780e09*/
          goto LABEL_6; /*0x780e09*/
      }
      WideString::Assign(a1, (CampaignScore *)v8); /*0x780e21*/
      return a1; /*0x780e26*/
    }
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_wonline_cpp, 2970); /*0x780dc2*/
    WideString::Assign(a1, (CampaignScore *)StringCSF); /*0x780dca*/
    return a1; /*0x780dcf*/
  }
}
}
} // namespace gamemd

// 0x7C7371
void Render::DrawTileBitmap(int a1, unsigned short * a2, short a3, short a4, unsigned int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl Render_DrawTileBitmap(int a1, _WORD *a2, __int16 a3, __int16 a4, unsigned int a5, int a6)
{
  int v6; // eax
  int v7; // edx
  int v8; // esi
  _WORD *v9; // edi
  signed int v10; // ebp
  int v11; // ebx
  bool v12; // zf
  bool k; // cc
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // esi
  _WORD *v21; // edi
  unsigned int v22; // ebp
  signed int v23; // ebp
  int v24; // ebx
  bool v25; // zf
  bool i; // cc
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _WORD *v31; // edi
  int v32; // esi
  int v33; // eax
  int v34; // edx
  unsigned int v35; // ebp
  signed int v36; // ebp
  int v37; // ebx
  bool v38; // zf
  bool j; // cc
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // [esp-14h] [ebp-20h]
  unsigned int v45; // [esp-14h] [ebp-20h]
  unsigned int v46; // [esp-14h] [ebp-20h]

  if ( a3 == 16 ) /*0x7c7388*/
  {
    if ( a4 == 2 ) /*0x7c73b2*/
    {
      v18 = *(_DWORD *)a6; /*0x7c778c*/
      v19 = *(unsigned __int16 *)(a6 + 4); /*0x7c778e*/
      v20 = a1; /*0x7c7792*/
      v21 = a2; /*0x7c7795*/
      v22 = a5 >> 1; /*0x7c779b*/
      if ( a5 >> 1 >= 0x10 && (a1 & 3) != 0 ) /*0x7c77a7*/
      {
        switch ( a1 & 3 ) /*0x7c77b6*/
        {
          case 0: /*0x7c77b6*/
            break;
          case 1: /*0x7c77b6*/
            v45 = v22 - 12; /*0x7c77c3*/
            v24 = 0; /*0x7c77c7*/
            v23 = ((v22 - 12) >> 4) + 1; /*0x7c77c9*/
LABEL_121:
            v30 = *(unsigned __int8 *)(v20 + 2) << 16; /*0x7c7ae0*/
            LOWORD(v30) = *(_WORD *)v20; /*0x7c7ae8*/
            LOBYTE(v24) = *(_WORD *)v20; /*0x7c7aeb*/
            v27 = v30 >> 8; /*0x7c7aed*/
            --v20; /*0x7c7af0*/
            v21 -= 4; /*0x7c7af3*/
            LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7af6*/
            goto LABEL_79; /*0x7c7afc*/
          case 2: /*0x7c77b6*/
            v45 = v22 - 8; /*0x7c77d3*/
            v24 = 0; /*0x7c77d7*/
            v23 = ((v22 - 8) >> 4) + 1; /*0x7c77d9*/
LABEL_119:
            LOWORD(v27) = *(_WORD *)v20; /*0x7c7aa4*/
            LOBYTE(v24) = *(_WORD *)v20; /*0x7c7aa9*/
            v21 -= 8; /*0x7c7aab*/
            v20 -= 2; /*0x7c7aae*/
            LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7ab1*/
            goto LABEL_87; /*0x7c7ab7*/
          case 3: /*0x7c77b6*/
            v45 = v22 - 4; /*0x7c77e3*/
            v24 = 0; /*0x7c77e7*/
            v23 = ((v22 - 4) >> 4) + 1; /*0x7c77e9*/
LABEL_117:
            LOBYTE(v24) = *(_BYTE *)v20; /*0x7c7a70*/
            v21 -= 12; /*0x7c7a76*/
            v20 -= 3; /*0x7c7a79*/
            LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7a7c*/
            goto LABEL_95; /*0x7c7a82*/
        }
      }
      v45 = a5 >> 1; /*0x7c77a9*/
      v23 = a5 >> 5; /*0x7c77aa*/
      v24 = 0; /*0x7c77ad*/
      v25 = a5 >> 5 == 0; /*0x7c77af*/
      for ( i = v25; !i; i = v23-- <= 1 ) /*0x7c77af*/
      {
        v28 = *(_DWORD *)v20; /*0x7c796b*/
        LOBYTE(v24) = *(_DWORD *)v20; /*0x7c796d*/
        LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c796f*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c77f0*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c77f7*/
        if ( v18 > 0x7FFF ) /*0x7c7803*/
        {
          v18 = 0x7FFF; /*0x7c7998*/
        }
        else if ( v18 < -32768 ) /*0x7c780e*/
        {
          v18 = -32768; /*0x7c79a4*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7814*/
        *v21 = v18; /*0x7c781a*/
LABEL_75:
        LOBYTE(v24) = BYTE1(v28); /*0x7c781d*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c781f*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7826*/
        if ( v18 > 0x7FFF ) /*0x7c7832*/
        {
          v18 = 0x7FFF; /*0x7c79b0*/
        }
        else if ( v18 < -32768 ) /*0x7c783d*/
        {
          v18 = -32768; /*0x7c79bc*/
        }
        LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7843*/
        v21[2] = v18; /*0x7c7849*/
        v27 = HIWORD(v28); /*0x7c784d*/
LABEL_79:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c7850*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7857*/
        if ( v18 > 0x7FFF ) /*0x7c7863*/
        {
          v18 = 0x7FFF; /*0x7c79c8*/
        }
        else if ( v18 < -32768 ) /*0x7c786e*/
        {
          v18 = -32768; /*0x7c79d4*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7874*/
        v21[4] = v18; /*0x7c787a*/
LABEL_83:
        LOBYTE(v24) = v27; /*0x7c787e*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c7880*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7887*/
        if ( v18 > 0x7FFF ) /*0x7c7893*/
        {
          v18 = 0x7FFF; /*0x7c79e0*/
        }
        else if ( v18 < -32768 ) /*0x7c789e*/
        {
          v18 = -32768; /*0x7c79ec*/
        }
        LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c78a4*/
        v21[6] = v18; /*0x7c78aa*/
LABEL_87:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c78ae*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c78b5*/
        if ( v18 > 0x7FFF ) /*0x7c78c1*/
        {
          v18 = 0x7FFF; /*0x7c79f8*/
        }
        else if ( v18 < -32768 ) /*0x7c78cc*/
        {
          v18 = -32768; /*0x7c7a04*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c78d2*/
        v21[8] = v18; /*0x7c78d8*/
LABEL_91:
        LOBYTE(v24) = BYTE1(v27); /*0x7c78dc*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c78de*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c78e5*/
        if ( v18 > 0x7FFF ) /*0x7c78f1*/
        {
          v18 = 0x7FFF; /*0x7c7a10*/
        }
        else if ( v18 < -32768 ) /*0x7c78fc*/
        {
          v18 = -32768; /*0x7c7a1c*/
        }
        LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7902*/
        v21[10] = v18; /*0x7c7908*/
LABEL_95:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c790c*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7913*/
        if ( v18 > 0x7FFF ) /*0x7c791f*/
        {
          v18 = 0x7FFF; /*0x7c7a28*/
        }
        else if ( v18 < -32768 ) /*0x7c792a*/
        {
          v18 = -32768; /*0x7c7a34*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7930*/
        v21[12] = v18; /*0x7c7936*/
LABEL_99:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c793a*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7941*/
        if ( v18 > 0x7FFF ) /*0x7c794d*/
        {
          v18 = 0x7FFF; /*0x7c7a40*/
        }
        else if ( v18 < -32768 ) /*0x7c7958*/
        {
          v18 = -32768; /*0x7c7a4c*/
        }
        v21[14] = v18; /*0x7c795e*/
        v20 += 4; /*0x7c7962*/
        v21 += 16; /*0x7c7965*/
        v25 = v23 == 1; /*0x7c7968*/
      }
      if ( v25 ) /*0x7c797a*/
      {
        switch ( (v45 >> 1) & 7 ) /*0x7c7982*/
        {
          case 0u: /*0x7c7982*/
            break;
          case 1u: /*0x7c7982*/
            LOBYTE(v24) = 16 * *(_BYTE *)v20; /*0x7c7a5f*/
            v21 -= 14; /*0x7c7a61*/
            LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7a64*/
            goto LABEL_99; /*0x7c7a6a*/
          case 2u: /*0x7c7982*/
            goto LABEL_117;
          case 3u: /*0x7c7982*/
            LOWORD(v27) = 16 * *(_WORD *)v20; /*0x7c7a8d*/
            LOBYTE(v24) = 16 * *(_BYTE *)v20; /*0x7c7a91*/
            v21 -= 10; /*0x7c7a93*/
            LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7a96*/
            goto LABEL_91; /*0x7c7a9c*/
          case 4u: /*0x7c7982*/
            goto LABEL_119;
          case 5u: /*0x7c7982*/
            v29 = *(unsigned __int8 *)(v20 + 2) << 16; /*0x7c7ac1*/
            LOWORD(v29) = *(_WORD *)v20; /*0x7c7ac4*/
            v27 = v29 >> 4; /*0x7c7ac9*/
            LOBYTE(v24) = 16 * *(_WORD *)v20; /*0x7c7acc*/
            v21 -= 6; /*0x7c7acf*/
            LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7ad2*/
            goto LABEL_83; /*0x7c7ad8*/
          case 6u: /*0x7c7982*/
            goto LABEL_121;
          case 7u: /*0x7c7982*/
            v28 = 16 * *(_DWORD *)v20; /*0x7c7b08*/
            LOBYTE(v24) = 16 * *(_BYTE *)v20; /*0x7c7b0b*/
            v21 -= 2; /*0x7c7b0d*/
            LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7b10*/
            goto LABEL_75; /*0x7c7b16*/
        }
      }
      *(_DWORD *)a6 = v18; /*0x7c7989*/
      *(_WORD *)(a6 + 4) = v19; /*0x7c798d*/
      v31 = a2 + 1; /*0x7c7b54*/
      v32 = (a5 >> 3) + a1; /*0x7c7b5d*/
      v33 = *(_DWORD *)(a6 + 6); /*0x7c7b61*/
      v34 = *(unsigned __int16 *)(a6 + 10); /*0x7c7b64*/
      v35 = a5 >> 1; /*0x7c7b6b*/
      if ( a5 >> 1 >= 0x10 && (v32 & 3) != 0 ) /*0x7c7b77*/
      {
        switch ( v32 & 3 ) /*0x7c7b86*/
        {
          case 0: /*0x7c7b86*/
            break;
          case 1: /*0x7c7b86*/
            v46 = v35 - 12; /*0x7c7b93*/
            v37 = 0; /*0x7c7b97*/
            v36 = ((v35 - 12) >> 4) + 1; /*0x7c7b99*/
LABEL_180:
            v43 = *(unsigned __int8 *)(v32 + 2) << 16; /*0x7c7eb4*/
            LOWORD(v43) = *(_WORD *)v32; /*0x7c7ebc*/
            LOBYTE(v37) = *(_WORD *)v32; /*0x7c7ebf*/
            v40 = v43 >> 8; /*0x7c7ec1*/
            --v32; /*0x7c7ec4*/
            v31 -= 4; /*0x7c7ec7*/
            LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7eca*/
            goto LABEL_138; /*0x7c7ed0*/
          case 2: /*0x7c7b86*/
            v46 = v35 - 8; /*0x7c7ba3*/
            v37 = 0; /*0x7c7ba7*/
            v36 = ((v35 - 8) >> 4) + 1; /*0x7c7ba9*/
LABEL_178:
            LOWORD(v40) = *(_WORD *)v32; /*0x7c7e78*/
            LOBYTE(v37) = *(_WORD *)v32; /*0x7c7e7d*/
            v31 -= 8; /*0x7c7e7f*/
            v32 -= 2; /*0x7c7e82*/
            LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7e85*/
            goto LABEL_146; /*0x7c7e8b*/
          case 3: /*0x7c7b86*/
            v46 = v35 - 4; /*0x7c7bb3*/
            v37 = 0; /*0x7c7bb7*/
            v36 = ((v35 - 4) >> 4) + 1; /*0x7c7bb9*/
LABEL_176:
            LOBYTE(v37) = *(_BYTE *)v32; /*0x7c7e44*/
            v31 -= 12; /*0x7c7e4a*/
            v32 -= 3; /*0x7c7e4d*/
            LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7e50*/
            goto LABEL_154; /*0x7c7e56*/
        }
      }
      v46 = a5 >> 1; /*0x7c7b79*/
      v36 = a5 >> 5; /*0x7c7b7a*/
      v37 = 0; /*0x7c7b7d*/
      v38 = a5 >> 5 == 0; /*0x7c7b7f*/
      for ( j = v38; !j; j = v36-- <= 1 ) /*0x7c7b7f*/
      {
        v41 = *(_DWORD *)v32; /*0x7c7d3b*/
        LOBYTE(v37) = *(_DWORD *)v32; /*0x7c7d3d*/
        LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7d3f*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7bc0*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7bc7*/
        if ( v33 > 0x7FFF ) /*0x7c7bd3*/
        {
          v33 = 0x7FFF; /*0x7c7d6c*/
        }
        else if ( v33 < -32768 ) /*0x7c7bde*/
        {
          v33 = -32768; /*0x7c7d78*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7be4*/
        *v31 = v33; /*0x7c7bea*/
LABEL_134:
        LOBYTE(v37) = BYTE1(v41); /*0x7c7bed*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7bef*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7bf6*/
        if ( v33 > 0x7FFF ) /*0x7c7c02*/
        {
          v33 = 0x7FFF; /*0x7c7d84*/
        }
        else if ( v33 < -32768 ) /*0x7c7c0d*/
        {
          v33 = -32768; /*0x7c7d90*/
        }
        LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7c13*/
        v31[2] = v33; /*0x7c7c19*/
        v40 = HIWORD(v41); /*0x7c7c1d*/
LABEL_138:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c20*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c27*/
        if ( v33 > 0x7FFF ) /*0x7c7c33*/
        {
          v33 = 0x7FFF; /*0x7c7d9c*/
        }
        else if ( v33 < -32768 ) /*0x7c7c3e*/
        {
          v33 = -32768; /*0x7c7da8*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7c44*/
        v31[4] = v33; /*0x7c7c4a*/
LABEL_142:
        LOBYTE(v37) = v40; /*0x7c7c4e*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c50*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c57*/
        if ( v33 > 0x7FFF ) /*0x7c7c63*/
        {
          v33 = 0x7FFF; /*0x7c7db4*/
        }
        else if ( v33 < -32768 ) /*0x7c7c6e*/
        {
          v33 = -32768; /*0x7c7dc0*/
        }
        LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7c74*/
        v31[6] = v33; /*0x7c7c7a*/
LABEL_146:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c7e*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c85*/
        if ( v33 > 0x7FFF ) /*0x7c7c91*/
        {
          v33 = 0x7FFF; /*0x7c7dcc*/
        }
        else if ( v33 < -32768 ) /*0x7c7c9c*/
        {
          v33 = -32768; /*0x7c7dd8*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7ca2*/
        v31[8] = v33; /*0x7c7ca8*/
LABEL_150:
        LOBYTE(v37) = BYTE1(v40); /*0x7c7cac*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7cae*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7cb5*/
        if ( v33 > 0x7FFF ) /*0x7c7cc1*/
        {
          v33 = 0x7FFF; /*0x7c7de4*/
        }
        else if ( v33 < -32768 ) /*0x7c7ccc*/
        {
          v33 = -32768; /*0x7c7df0*/
        }
        LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7cd2*/
        v31[10] = v33; /*0x7c7cd8*/
LABEL_154:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7cdc*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7ce3*/
        if ( v33 > 0x7FFF ) /*0x7c7cef*/
        {
          v33 = 0x7FFF; /*0x7c7dfc*/
        }
        else if ( v33 < -32768 ) /*0x7c7cfa*/
        {
          v33 = -32768; /*0x7c7e08*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7d00*/
        v31[12] = v33; /*0x7c7d06*/
LABEL_158:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7d0a*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7d11*/
        if ( v33 > 0x7FFF ) /*0x7c7d1d*/
        {
          v33 = 0x7FFF; /*0x7c7e14*/
        }
        else if ( v33 < -32768 ) /*0x7c7d28*/
        {
          v33 = -32768; /*0x7c7e20*/
        }
        v31[14] = v33; /*0x7c7d2e*/
        v32 += 4; /*0x7c7d32*/
        v31 += 16; /*0x7c7d35*/
        v38 = v36 == 1; /*0x7c7d38*/
      }
      if ( v38 ) /*0x7c7d4a*/
      {
        switch ( (v46 >> 1) & 7 ) /*0x7c7d52*/
        {
          case 0u: /*0x7c7d52*/
            break;
          case 1u: /*0x7c7d52*/
            LOBYTE(v37) = 16 * *(_BYTE *)v32; /*0x7c7e33*/
            v31 -= 14; /*0x7c7e35*/
            LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7e38*/
            goto LABEL_158; /*0x7c7e3e*/
          case 2u: /*0x7c7d52*/
            goto LABEL_176;
          case 3u: /*0x7c7d52*/
            LOWORD(v40) = 16 * *(_WORD *)v32; /*0x7c7e61*/
            LOBYTE(v37) = 16 * *(_BYTE *)v32; /*0x7c7e65*/
            v31 -= 10; /*0x7c7e67*/
            LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7e6a*/
            goto LABEL_150; /*0x7c7e70*/
          case 4u: /*0x7c7d52*/
            goto LABEL_178;
          case 5u: /*0x7c7d52*/
            v42 = *(unsigned __int8 *)(v32 + 2) << 16; /*0x7c7e95*/
            LOWORD(v42) = *(_WORD *)v32; /*0x7c7e98*/
            v40 = v42 >> 4; /*0x7c7e9d*/
            LOBYTE(v37) = 16 * *(_WORD *)v32; /*0x7c7ea0*/
            v31 -= 6; /*0x7c7ea3*/
            LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7ea6*/
            goto LABEL_142; /*0x7c7eac*/
          case 6u: /*0x7c7d52*/
            goto LABEL_180;
          case 7u: /*0x7c7d52*/
            v41 = 16 * *(_DWORD *)v32; /*0x7c7edc*/
            LOBYTE(v37) = 16 * *(_BYTE *)v32; /*0x7c7edf*/
            v31 -= 2; /*0x7c7ee1*/
            LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7ee4*/
            goto LABEL_134; /*0x7c7eea*/
        }
      }
      *(_DWORD *)(a6 + 6) = v33; /*0x7c7d59*/
      *(_WORD *)(a6 + 10) = v34; /*0x7c7d5e*/
    }
    else if ( a4 == 1 ) /*0x7c73bd*/
    {
      v6 = *(_DWORD *)a6; /*0x7c73c7*/
      v7 = *(unsigned __int16 *)(a6 + 4); /*0x7c73c9*/
      v8 = a1; /*0x7c73cd*/
      v9 = a2; /*0x7c73d0*/
      if ( (int)a5 >= 16 && (a1 & 3) != 0 ) /*0x7c73e0*/
      {
        switch ( a1 & 3 ) /*0x7c73ef*/
        {
          case 0: /*0x7c73ef*/
            break;
          case 1: /*0x7c73ef*/
            v44 = a5 - 12; /*0x7c73fb*/
            v11 = 0; /*0x7c73ff*/
            v10 = ((a5 - 12) >> 4) + 1; /*0x7c7401*/
LABEL_62:
            v17 = *(unsigned __int8 *)(v8 + 2) << 16; /*0x7c771c*/
            LOWORD(v17) = *(_WORD *)v8; /*0x7c7724*/
            LOBYTE(v11) = *(_WORD *)v8; /*0x7c7727*/
            v14 = v17 >> 8; /*0x7c7729*/
            --v8; /*0x7c772c*/
            v9 -= 2; /*0x7c772f*/
            LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c7732*/
            goto LABEL_19; /*0x7c7738*/
          case 2: /*0x7c73ef*/
            v44 = a5 - 8; /*0x7c740b*/
            v11 = 0; /*0x7c740f*/
            v10 = ((a5 - 8) >> 4) + 1; /*0x7c7411*/
LABEL_60:
            LOWORD(v14) = *(_WORD *)v8; /*0x7c76e0*/
            LOBYTE(v11) = *(_WORD *)v8; /*0x7c76e5*/
            v9 -= 4; /*0x7c76e7*/
            v8 -= 2; /*0x7c76ea*/
            LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c76ed*/
            goto LABEL_27; /*0x7c76f3*/
          case 3: /*0x7c73ef*/
            v44 = a5 - 4; /*0x7c741b*/
            v11 = 0; /*0x7c741f*/
            v10 = ((a5 - 4) >> 4) + 1; /*0x7c7421*/
LABEL_58:
            LOBYTE(v11) = *(_BYTE *)v8; /*0x7c76ac*/
            v9 -= 6; /*0x7c76b2*/
            v8 -= 3; /*0x7c76b5*/
            LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c76b8*/
            goto LABEL_35; /*0x7c76be*/
        }
      }
      v44 = a5; /*0x7c73e2*/
      v10 = a5 >> 4; /*0x7c73e3*/
      v11 = 0; /*0x7c73e6*/
      v12 = a5 >> 4 == 0; /*0x7c73e8*/
      for ( k = v12; !k; k = v10-- <= 1 ) /*0x7c73e8*/
      {
        v15 = *(_DWORD *)v8; /*0x7c75a3*/
        LOBYTE(v11) = *(_DWORD *)v8; /*0x7c75a5*/
        LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c75a7*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7428*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c742f*/
        if ( v6 > 0x7FFF ) /*0x7c743b*/
        {
          v6 = 0x7FFF; /*0x7c75d4*/
        }
        else if ( v6 < -32768 ) /*0x7c7446*/
        {
          v6 = -32768; /*0x7c75e0*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c744c*/
        *v9 = v6; /*0x7c7452*/
LABEL_15:
        LOBYTE(v11) = BYTE1(v15); /*0x7c7455*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7457*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c745e*/
        if ( v6 > 0x7FFF ) /*0x7c746a*/
        {
          v6 = 0x7FFF; /*0x7c75ec*/
        }
        else if ( v6 < -32768 ) /*0x7c7475*/
        {
          v6 = -32768; /*0x7c75f8*/
        }
        LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c747b*/
        v9[1] = v6; /*0x7c7481*/
        v14 = HIWORD(v15); /*0x7c7485*/
LABEL_19:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7488*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c748f*/
        if ( v6 > 0x7FFF ) /*0x7c749b*/
        {
          v6 = 0x7FFF; /*0x7c7604*/
        }
        else if ( v6 < -32768 ) /*0x7c74a6*/
        {
          v6 = -32768; /*0x7c7610*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c74ac*/
        v9[2] = v6; /*0x7c74b2*/
LABEL_23:
        LOBYTE(v11) = v14; /*0x7c74b6*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c74b8*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c74bf*/
        if ( v6 > 0x7FFF ) /*0x7c74cb*/
        {
          v6 = 0x7FFF; /*0x7c761c*/
        }
        else if ( v6 < -32768 ) /*0x7c74d6*/
        {
          v6 = -32768; /*0x7c7628*/
        }
        LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c74dc*/
        v9[3] = v6; /*0x7c74e2*/
LABEL_27:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c74e6*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c74ed*/
        if ( v6 > 0x7FFF ) /*0x7c74f9*/
        {
          v6 = 0x7FFF; /*0x7c7634*/
        }
        else if ( v6 < -32768 ) /*0x7c7504*/
        {
          v6 = -32768; /*0x7c7640*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c750a*/
        v9[4] = v6; /*0x7c7510*/
LABEL_31:
        LOBYTE(v11) = BYTE1(v14); /*0x7c7514*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7516*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c751d*/
        if ( v6 > 0x7FFF ) /*0x7c7529*/
        {
          v6 = 0x7FFF; /*0x7c764c*/
        }
        else if ( v6 < -32768 ) /*0x7c7534*/
        {
          v6 = -32768; /*0x7c7658*/
        }
        LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c753a*/
        v9[5] = v6; /*0x7c7540*/
LABEL_35:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7544*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c754b*/
        if ( v6 > 0x7FFF ) /*0x7c7557*/
        {
          v6 = 0x7FFF; /*0x7c7664*/
        }
        else if ( v6 < -32768 ) /*0x7c7562*/
        {
          v6 = -32768; /*0x7c7670*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c7568*/
        v9[6] = v6; /*0x7c756e*/
LABEL_39:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7572*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c7579*/
        if ( v6 > 0x7FFF ) /*0x7c7585*/
        {
          v6 = 0x7FFF; /*0x7c767c*/
        }
        else if ( v6 < -32768 ) /*0x7c7590*/
        {
          v6 = -32768; /*0x7c7688*/
        }
        v9[7] = v6; /*0x7c7596*/
        v8 += 4; /*0x7c759a*/
        v9 += 8; /*0x7c759d*/
        v12 = v10 == 1; /*0x7c75a0*/
      }
      if ( v12 ) /*0x7c75b2*/
      {
        switch ( (v44 >> 1) & 7 ) /*0x7c75ba*/
        {
          case 0u: /*0x7c75ba*/
            break;
          case 1u: /*0x7c75ba*/
            LOBYTE(v11) = 16 * *(_BYTE *)v8; /*0x7c769b*/
            v9 -= 7; /*0x7c769d*/
            LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c76a0*/
            goto LABEL_39; /*0x7c76a6*/
          case 2u: /*0x7c75ba*/
            goto LABEL_58;
          case 3u: /*0x7c75ba*/
            LOWORD(v14) = 16 * *(_WORD *)v8; /*0x7c76c9*/
            LOBYTE(v11) = 16 * *(_BYTE *)v8; /*0x7c76cd*/
            v9 -= 5; /*0x7c76cf*/
            LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c76d2*/
            goto LABEL_31; /*0x7c76d8*/
          case 4u: /*0x7c75ba*/
            goto LABEL_60;
          case 5u: /*0x7c75ba*/
            v16 = *(unsigned __int8 *)(v8 + 2) << 16; /*0x7c76fd*/
            LOWORD(v16) = *(_WORD *)v8; /*0x7c7700*/
            v14 = v16 >> 4; /*0x7c7705*/
            LOBYTE(v11) = 16 * *(_WORD *)v8; /*0x7c7708*/
            v9 -= 3; /*0x7c770b*/
            LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c770e*/
            goto LABEL_23; /*0x7c7714*/
          case 6u: /*0x7c75ba*/
            goto LABEL_62;
          case 7u: /*0x7c75ba*/
            v15 = 16 * *(_DWORD *)v8; /*0x7c7744*/
            LOBYTE(v11) = 16 * *(_BYTE *)v8; /*0x7c7747*/
            --v9; /*0x7c7749*/
            LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c774c*/
            goto LABEL_15; /*0x7c7752*/
        }
      }
      *(_DWORD *)a6 = v6; /*0x7c75c1*/
      *(_WORD *)(a6 + 4) = v7; /*0x7c75c5*/
    }
  }
}
}

// 0x731BF0
namespace gamemd {
char sub_731BF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_731BF0()
{
  bool v1; // bl
  bool IsButtonDown; // al
  wchar_t *v3; // edi
  int v4; // esi
  _BYTE *v5; // ecx

  if ( MEMORY[0xB0FE58] ) /*0x731bfa*/
    return 1; /*0x731c01*/
  v1 = Mouse::IsButtonDown(MEMORY[0xA8EC00]) || Mouse::IsButtonDown(MEMORY[0xA8EC04]); /*0x731c31*/
  if ( Mouse::IsButtonDown(MEMORY[0xA8EC08]) || (IsButtonDown = Mouse::IsButtonDown(MEMORY[0xA8EC0C])) ) /*0x731c54*/
    IsButtonDown = 1; /*0x731c5d*/
  if ( v1 && IsButtonDown ) /*0x731c66*/
  {
    v3 = MEMORY[0xA8ECC8]; /*0x731c68*/
    v4 = 0; /*0x731c6e*/
    if ( (int)MEMORY[0xA8ECC8] <= 0 ) /*0x731c72*/
      return 1; /*0x731ca2*/
    while ( 1 ) /*0x731c79*/
    {
      v5 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v4); /*0x731c79*/
      if ( v5 ) /*0x731c7e*/
      {
        if ( (v5[20] & 1) != 0 && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 1216))(v5) ) /*0x731c8e*/
          break; /*0x731c8e*/
      }
      if ( ++v4 >= (int)v3 ) /*0x731c9b*/
        return 1; /*0x731c9b*/
    }
  }
  return 0; /*0x731bfc*/
}
}
} // namespace gamemd

// 0x777E00
namespace gamemd {
BOOL sub_777E00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL sub_777E00()
{
  BOOL result; // eax

  result = 0; /*0x777e06*/
  WideCharStr[0] = 0; /*0x777e0a*/
  dword_B73564 = 0; /*0x777e10*/
  MaxCount = 0; /*0x777e15*/
  dword_B7356C = 0; /*0x777e1a*/
  word_B730EC = 0; /*0x777e1f*/
  if ( dword_B7355C ) /*0x777e25*/
    return ImmNotifyIME(dword_B7355C, 0x15u, 4u, 0); /*0x777e2d*/
  return result; /*0x777e32*/
}
}
} // namespace gamemd

// 0x778030
namespace gamemd {
int Render_Draw_778030(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Render_Draw_778030(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  UINT v5; // edx
  UINT v6; // edx
  LRESULT v7; // eax

  if ( Msg > 0x281 ) /*0x778039*/
  {
    switch ( Msg ) /*0x7780d6*/
    {
      case 0x282u: /*0x7780d6*/
      case 0x285u: /*0x7780d6*/
      case 0x290u: /*0x7780d6*/
      case 0x291u: /*0x7780d6*/
        v7 = DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x7780e9*/
        goto LABEL_12; /*0x7780e9*/
      default:
        return 0;
    }
  }
  if ( Msg == 641 ) /*0x77803f*/
  {
    v7 = DefWindowProcA(hWnd, 0x281u, wParam, lParam); /*0x7780c1*/
    goto LABEL_12; /*0x7780c1*/
  }
  v5 = Msg - 269; /*0x778041*/
  if ( !v5 ) /*0x778047*/
  {
    ProcessCompositionIME(); /*0x778089*/
    word_B730EC = 0; /*0x778098*/
    dword_B7356C = 1; /*0x7780a1*/
    v7 = DefWindowProcA(hWnd, 0x10Du, wParam, lParam); /*0x7780b0*/
    goto LABEL_12; /*0x7780b0*/
  }
  v6 = v5 - 1; /*0x778049*/
  if ( !v6 ) /*0x77804a*/
  {
    ProcessCompositionIME(); /*0x778069*/
    dword_B7356C = 0; /*0x778078*/
    v7 = DefWindowProcA(hWnd, 0x10Eu, wParam, lParam); /*0x778087*/
    goto LABEL_12; /*0x778087*/
  }
  if ( v6 == 1 ) /*0x77804d*/
  {
    ProcessCompositionIME(); /*0x778053*/
    v7 = DefWindowProcA(hWnd, 0x10Fu, wParam, lParam); /*0x778067*/
LABEL_12:
    dword_B73570 = v7; /*0x7780ef*/
    return 1; /*0x7780fa*/
  }
  return 0; /*0x7780f9*/
}
}
} // namespace gamemd

// 0x778120
namespace gamemd {
int sub_778120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_778120()
{
  return dword_B73570; /*0x778125*/
}
}
} // namespace gamemd

// 0x6CA310
namespace gamemd {
char Render_Parse_6CA310(CampaignScore * aP0, CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Render_Parse_6CA310(CampaignScore *aP0, CCINIClass *aP1)
{
  BlowStraw *v2; // ebp
  wchar_t *i; // edi
  const wchar_t *v4; // esi
  CampaignScore *v5; // ebx
  wchar_t *v6; // eax
  CampaignScore *v7; // esi
  wchar_t *v8; // eax
  WinModemClass *v9; // esi
  WinModemClass *v10; // edi
  int WinModemClass_field_0x08; // eax
  wchar_t *String; // [esp+18h] [ebp+4h]

  v2 = (BlowStraw *)aP0; /*0x6ca313*/
  for ( i = wcschr((BlowStraw *)aP0, (CCINIClass *)0x3D); i; i = wcschr(v2, (CCINIClass *)0x3D) ) /*0x6ca32c*/
  {
    v4 = (const wchar_t *)v2; /*0x6ca332*/
    *i = 0; /*0x6ca336*/
    String = (wchar_t *)v2; /*0x6ca33b*/
    WideString::Trim((wchar_t *)v2); /*0x6ca33f*/
    v5 = (CampaignScore *)(i + 1); /*0x6ca344*/
    WideString::Trim(i + 1); /*0x6ca349*/
    if ( i[1] == 34 ) /*0x6ca352*/
    {
      v5 = (CampaignScore *)(i + 2); /*0x6ca354*/
      v6 = wcschr((BlowStraw *)(i + 2), (CCINIClass *)0x22); /*0x6ca35a*/
      if ( !v6 ) /*0x6ca366*/
        break; /*0x6ca366*/
      *v6 = 0; /*0x6ca36c*/
      v7 = (CampaignScore *)(v6 + 1); /*0x6ca371*/
      WideString::Trim(v6 + 1); /*0x6ca376*/
      if ( *(_WORD *)v7->__pad_0 == 44 ) /*0x6ca37f*/
        v7 = (CampaignScore *)((char *)v7 + 2); /*0x6ca381*/
      v2 = (BlowStraw *)v7; /*0x6ca384*/
      v4 = String; /*0x6ca386*/
    }
    else
    {
      v8 = wcspbrk((BlowStraw *)(i + 1), (CampaignScore *)&stru_830620.__pad_579C[50716]); /*0x6ca392*/
      if ( v8 ) /*0x6ca39c*/
      {
        *v8 = 0; /*0x6ca39e*/
        v2 = (BlowStraw *)(v8 + 1); /*0x6ca3a3*/
      }
      else
      {
        v2 = (BlowStraw *)&stru_87C374.__pad_579C[23588]; /*0x6ca3a8*/
      }
    }
    if ( !wcslen(v4) ) /*0x6ca3ae*/
      break; /*0x6ca3ae*/
    if ( v4 && *(_DWORD *)&stru_830620.__pad_579C[50156] ) /*0x6ca3c9*/
    {
      v9 = (WinModemClass *)&stru_830620.__pad_579C[50156]; /*0x6ca3cb*/
      v10 = (WinModemClass *)&stru_830620.__pad_579C[50156]; /*0x6ca3d0*/
      while ( _wcsicmp(*(const wchar_t **)v9->__pad_0, String) ) /*0x6ca3e4*/
      {
        WinModemClass_field_0x08 = v10->WinModemClass_field_0x08; /*0x6ca3e6*/
        v10 = (WinModemClass *)((char *)v10 + 8); /*0x6ca3e9*/
        v9 = v10; /*0x6ca3ee*/
        if ( !WinModemClass_field_0x08 ) /*0x6ca3f0*/
          goto LABEL_18; /*0x6ca3f0*/
      }
      ((void (__fastcall *)(CampaignScore *, CCINIClass *))v9->WinModemClass_field_0x04)(v5, aP1); /*0x6ca3fa*/
    }
LABEL_18:
    WideString::Trim((wchar_t *)v2); /*0x6ca3fd*/
    if ( !wcslen((const wchar_t *)v2) ) /*0x6ca40f*/
      return 1; /*0x6ca48f*/
  }
  Debug::Log(); /*0x6ca426*/
  return 0; /*0x6ca440*/
}
}
} // namespace gamemd

// 0x6CA940
namespace gamemd {
char sub_6CA940(int a1, unsigned short * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_6CA940(int a1, _WORD *a2, int a3)
{
  int v4; // esi
  _WORD *v5; // ebp
  __int16 v7; // [esp+12h] [ebp-6h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v4 = 0; /*0x6ca94f*/
  v8 = a1; /*0x6ca953*/
  *a2 = 0; /*0x6ca957*/
  if ( a3 <= 0 ) /*0x6ca95c*/
  {
LABEL_9:
    a2[v4] = 0; /*0x6ca996*/
    return 0; /*0x6ca99e*/
  }
  else
  {
    v5 = a2; /*0x6ca95e*/
    while ( (*(int (__thiscall **)(int, __int16 *, int))(*(_DWORD *)a1 + 8))(a1, &v7, 2) == 2 ) /*0x6ca975*/
    {
      if ( v7 == 10 ) /*0x6ca980*/
        goto LABEL_9; /*0x6ca980*/
      if ( v7 != 13 ) /*0x6ca986*/
      {
        *v5 = v7; /*0x6ca988*/
        ++v4; /*0x6ca98c*/
        ++v5; /*0x6ca98d*/
      }
      if ( v4 >= a3 ) /*0x6ca994*/
        goto LABEL_9; /*0x6ca994*/
      a1 = v8; /*0x6ca962*/
    }
    a2[v4] = 0; /*0x6ca9a8*/
    return 1; /*0x6ca9b1*/
  }
}
}
} // namespace gamemd

// 0x53D850
namespace gamemd {
char sub_53D850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_53D850()
{
  int v0; // ebx
  int v1; // edi
  _DWORD *v2; // esi
  int *v3; // eax
  char result; // al
  int i; // esi
  int v6; // [esp+4h] [ebp-8h] BYREF

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 116))(MEMORY[0x887314]) != unk_AA0150 ) /*0x53d865*/
  {
    v0 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 116))(MEMORY[0x887314]); /*0x53d874*/
    dword_A9FAE8[0] = 0; /*0x53d876*/
    unk_AA0150 = v0; /*0x53d880*/
    v1 = 1; /*0x53d886*/
    v2 = &unk_A9FAEC; /*0x53d88b*/
    do /*0x53d8b2*/
    {
      v3 = ComputeSpiralOffset(&v6, v1); /*0x53d896*/
      ++v2; /*0x53d89d*/
      ++v1; /*0x53d8a8*/
      *(v2 - 1) = *v3 + v0 * v3[1]; /*0x53d8a9*/
    }
    while ( (int)v2 < (int)&unk_A9FF6C ); /*0x53d8b2*/
  }
  result = unk_AA0128; /*0x53d8b6*/
  for ( i = unk_AA0128 - 1; i >= 0; --i ) /*0x53d8c0*/
    result = ZBuffer::RenderSprite(*((int **)unk_AA011C + i)); /*0x53d8cb*/
  return result; /*0x53d8d3*/
}
}
} // namespace gamemd

// 0x5541C0
namespace gamemd {
int Render_Render_5541C0(unsigned short * a0, int a2, AbstractClass * aP2, int a4, AbstractClass * aP4, char a6, char a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Render_Render_5541C0(
        unsigned __int16 *a0,
        int a2,
        AbstractClass *aP2,
        int a4,
        AbstractClass *aP4,
        char a6,
        char a7)
{
  AbstractClass *v8; // edx
  struct tagRECT *v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+4h] [ebp-1Ch]
  AbstractClass *dy; // [esp+8h] [ebp-18h] BYREF
  AbstractClass *v13; // [esp+Ch] [ebp-14h] BYREF
  int a0a[4]; // [esp+10h] [ebp-10h] BYREF

  dy = 0; /*0x5541dd*/
  v13 = 0; /*0x5541e5*/
  Text::Layout(aP0, a0, (AbstractClass *)&dy, (AbstractClass *)&v13, aP4); /*0x5541ed*/
  if ( a7 ) /*0x5541f8*/
  {
    v8 = aP4; /*0x5541fa*/
    dy = aP4; /*0x5541fc*/
  }
  else
  {
    v8 = dy; /*0x554202*/
  }
  a0a[1] = a4; /*0x554213*/
  a0a[3] = (int)v13; /*0x55421b*/
  a0a[0] = (int)aP2; /*0x55421f*/
  a0a[2] = (int)v8; /*0x554225*/
  if ( (a6 & 1) != 0 ) /*0x55422a*/
  {
    a0a[0] = (int)&aP2->__pad_0[((char *)aP4 - (char *)v8) / 2]; /*0x554237*/
  }
  else if ( (a6 & 2) != 0 ) /*0x55423f*/
  {
    a0a[0] = (int)&aP4->__pad_0[(char *)aP2 - (char *)v8]; /*0x554245*/
  }
  Rect::Inflate(v10, v11, (int)dy); /*0x554252*/
  return DSurface::FillRectWithColor(a0a, (ObjectClass *)a2, 0, 0x9Fu); /*0x554269*/
}
}
} // namespace gamemd

// 0x554280
namespace gamemd {
int Render_Render_554280(unsigned short * a0, AbstractClass * aP1, int * a2, unsigned short a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Render_Render_554280(unsigned __int16 *a0, AbstractClass *aP1, int *a2, unsigned __int16 a4, char a5)
{
  int v5; // esi
  int v6; // ecx
  int v7; // edx
  AbstractClass v9; // [esp-18h] [ebp-3Ch] BYREF
  int v10[4]; // [esp+14h] [ebp-10h] BYREF

  v5 = a2[1]; /*0x55428a*/
  v6 = *a2; /*0x554294*/
  v7 = *a2 + a2[2]; /*0x55429b*/
  v10[3] = v5 + a2[3]; /*0x55429d*/
  v10[0] = v6; /*0x5542a5*/
  v10[2] = v7; /*0x5542b0*/
  memset(&v9.__pad_0[12], 0, 12); /*0x5542c3*/
  v10[1] = v5; /*0x5542c7*/
  *(_QWORD *)&v9.__pad_0[4] = (unsigned int)a5 | 0xC00000000LL; /*0x55431a*/
  *(_DWORD *)v9.__pad_0 = (unsigned __int8)((unsigned __int8)(a4 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]) /*0x55432f*/
                        | (((unsigned __int8)((unsigned __int8)(a4 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140])
                          | ((unsigned __int8)((unsigned __int8)(a4 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]) << 8)) << 8);
  return PrintFontLayout((AbstractClass *)v10, aP0, v9); /*0x554341*/
}
}
} // namespace gamemd

// 0x63B0A0
namespace gamemd {
void sub_63B0A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_63B0A0()
{
  int v0; // ebp
  int v1; // esi
  int v2; // edi
  int v3; // ebp
  int i; // esi
  int v5; // edi

  MEMORY[0xAC4C28] = 0; /*0x63b0ad*/
  if ( MEMORY[0xAC4C1C] && MEMORY[0xAC4C25] ) /*0x63b0bb*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC4C1C]); /*0x63b0be*/
    MEMORY[0xAC4C1C] = 0; /*0x63b0c6*/
  }
  v0 = MEMORY[0xAC4B40]; /*0x63b0cc*/
  v1 = 0; /*0x63b0d2*/
  MEMORY[0xAC4C25] = 0; /*0x63b0d6*/
  for ( MEMORY[0xAC4C20] = 0; v1 < v0; ++v1 ) /*0x63b0e2*/
  {
    v2 = *((_DWORD *)MEMORY[0xAC4B34] + v1); /*0x63b0e9*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(***(_DWORD ***)(v2 + 4) + 540), HouseClass_Player) ) /*0x63b100*/
      RenderScenarioActionLines(v2); /*0x63b10b*/
  }
  v3 = MEMORY[0xA8EC88]; /*0x63b115*/
  for ( i = 0; i < v3; ++i ) /*0x63b11f*/
  {
    v5 = *((_DWORD *)MEMORY[0xA8EC7C] + i); /*0x63b12d*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v5 + 540), HouseClass_Player) ) /*0x63b136*/
      ScriptAction::ProcessIdleAction(v5); /*0x63b141*/
  }
}
}
} // namespace gamemd

// 0x642BB0
namespace gamemd {
int sub_642BB0(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_642BB0(unsigned int a1)
{
  int result; // eax
  unsigned int PlayerColor; // eax

  result = 0; /*0x642bba*/
  if ( (MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4) /*0x642bd8*/
    && *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * a1) + 107) == -1 )
  {
    return *((_DWORD *)MEMORY[0xB054D4] + SessionClass::GetPlayerColorScheme(0xFFFFFFFE)); /*0x642bed*/
  }
  if ( a1 < 8 ) /*0x642bf5*/
  {
    PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * a1)); /*0x642bff*/
    return *((_DWORD *)MEMORY[0xB054D4] + SessionClass::GetPlayerColorScheme(PlayerColor)); /*0x642c15*/
  }
  return result; /*0x642bec*/
}
}
} // namespace gamemd

// 0x660000
namespace gamemd {
int sub_660000()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_660000()
{
  int result; // eax
  int i; // edi
  int v2; // ecx
  int v3; // esi
  int v4; // eax

  result = g_TriggerEventState; /*0x660000*/
  for ( i = 0; i < g_TriggerEventState; ++i ) /*0x660006*/
  {
    v2 = *((_DWORD *)g_TriggerPool + i); /*0x660012*/
    v3 = *(_DWORD *)(v2 + 48); /*0x660015*/
    v4 = *(_DWORD *)(v2 + 56); /*0x660018*/
    if ( v3 != -1 ) /*0x66001e*/
    {
      if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x66002a*/
        goto LABEL_6; /*0x66002a*/
      v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x66002c*/
    }
    if ( v4 > 0 ) /*0x660030*/
      goto LABEL_7; /*0x660030*/
LABEL_6:
    if ( *(_BYTE *)(v2 + 60) ) /*0x660032*/
LABEL_7:
      RenderGradientTrapezoid((float *)v2); /*0x660039*/
    result = g_TriggerEventState; /*0x66003e*/
  }
  return result; /*0x660049*/
}
}
} // namespace gamemd

// 0x6603B0
namespace gamemd {
void sub_6603B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6603B0()
{
  int v0; // ebx
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // edx
  int v4; // eax
  void *v5; // esi
  int v6; // eax
  int v7; // [esp+4h] [ebp-4h] BYREF

  v0 = g_TriggerEventState - 1; /*0x6603b7*/
  if ( g_TriggerEventState - 1 >= 0 ) /*0x6603bc*/
  {
    v1 = g_TriggerPool; /*0x6603c4*/
    do /*0x6603ca*/
    {
      v2 = v1[v0]; /*0x6603ca*/
      v3 = *(_DWORD *)(v2 + 36); /*0x6603cd*/
      v4 = *(_DWORD *)(v2 + 44); /*0x6603d0*/
      if ( v3 != -1 ) /*0x6603d6*/
      {
        if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x6603e2*/
          goto LABEL_7; /*0x6603e2*/
        v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x6603e4*/
      }
      if ( !v4 ) /*0x6603e8*/
      {
LABEL_7:
        if ( !*(_BYTE *)(v2 + 60) ) /*0x6603ea*/
        {
          v5 = (void *)v1[v0]; /*0x6603f1*/
          if ( v5 ) /*0x6603f6*/
          {
            v7 = v1[v0]; /*0x660408*/
            v6 = (*(int (__thiscall **)(int *, int *))(dword_B04DA8 + 16))(&dword_B04DA8, &v7); /*0x66040c*/
            if ( v6 != -1 && v6 < g_TriggerEventState && v6 < --g_TriggerEventState ) /*0x660427*/
            {
              do /*0x66043f*/
              {
                ++v6; /*0x66042f*/
                *((_DWORD *)g_TriggerPool + v6 - 1) = *((_DWORD *)g_TriggerPool + v6); /*0x660433*/
              }
              while ( v6 < g_TriggerEventState ); /*0x66043f*/
            }
            __3_YAXPAX_Z(v5); /*0x660442*/
            v1 = g_TriggerPool; /*0x660447*/
          }
        }
      }
      --v0; /*0x660450*/
    }
    while ( v0 >= 0 ); /*0x6603ca*/
  }
}
}
} // namespace gamemd

// 0x7760B0
namespace gamemd {
HFONT Render_Render_7760B0(HDC hdc, const char * a2, LONG a3, LONG a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HFONT __fastcall Render_Render_7760B0(HDC hdc, const char *a2, LONG a3, LONG a4, char a5)
{
  HFONT v7; // eax
  HFONT v8; // esi
  HGDIOBJ v9; // ebx
  HGDIOBJ v10; // eax
  struct tagPOINT pt; // [esp+10h] [ebp-7Ch] BYREF
  struct tagTEXTMETRICA tm; // [esp+18h] [ebp-74h] BYREF
  LOGFONTA lf; // [esp+50h] [ebp-3Ch] BYREF

  SaveDC(hdc); /*0x7760bc*/
  SetGraphicsMode(hdc, 2); /*0x7760c5*/
  ModifyWorldTransform(hdc, 0, 1u); /*0x7760d1*/
  SetViewportOrgEx(hdc, 0, 0, 0); /*0x7760db*/
  SetWindowOrgEx(hdc, 0, 0, 0); /*0x7760e5*/
  pt.x = a3; /*0x776101*/
  pt.y = a4; /*0x776105*/
  DPtoLP(hdc, &pt, 1); /*0x776109*/
  memset(&lf.lfWidth, 0, 12); /*0x77610f*/
  lf.lfHeight = -pt.y; /*0x776121*/
  lf.lfCharSet = 0; /*0x776133*/
  lf.lfOutPrecision = 0; /*0x77613b*/
  lf.lfClipPrecision = 0; /*0x776145*/
  lf.lfWeight = (a5 & 1) != 0 ? 0x2BC : 0;
  lf.lfUnderline = (a5 & 4) != 0; /*0x77615c*/
  lf.lfStrikeOut = (a5 & 8) != 0; /*0x776160*/
  lf.lfQuality = 0; /*0x77616c*/
  lf.lfItalic = (a5 & 2) != 0; /*0x776176*/
  lf.lfPitchAndFamily = 0; /*0x776187*/
  strcpy(lf.lfFaceName, a2); /*0x77618b*/
  v7 = CreateFontIndirectA(&lf); /*0x77619f*/
  v8 = v7; /*0x7761a1*/
  if ( a3 ) /*0x7761aa*/
  {
    v9 = SelectObject(hdc, v7); /*0x7761ba*/
    GetTextMetricsA(hdc, &tm); /*0x7761be*/
    v10 = SelectObject(hdc, v9); /*0x7761c6*/
    DeleteObject(v10); /*0x7761c9*/
    lf.lfWidth = Math::RoundToInt(fabs((double)pt.x) * (double)tm.tmAveCharWidth / fabs((double)pt.y) + 0.5); /*0x7761ec*/
    v8 = CreateFontIndirectA(&lf); /*0x7761f7*/
  }
  RestoreDC(hdc, -1); /*0x7761fc*/
  return v8; /*0x776204*/
}
}
} // namespace gamemd

// 0x556D40
namespace gamemd {
void sub_556D40()
{
{
    int i;
    int *v1;
    int v2;
    int *v3;
    for ( i = DataGlobal_ABCB88 - 1; i >= 0; --i )
  {
    v1 = (int *)*((int *)(DataGlobal_ABCB7C) + i);
    Render_Render_556B70(v1);
    if ( v1[1] || v1[4 * v1[3] + 7] )
    {
    Render_Render_556C00((int)v1);
    }
    else if ( v1 )
    {
    v3 = v1;
    v2 = (*(int (__thiscall **)(int *, int **))(DataGlobal_ABCB78 + 16))(&DataGlobal_ABCB78, &v3);
    if ( v2 != -1 && v2 < DataGlobal_ABCB88 && v2 < --DataGlobal_ABCB88 )
      {
    do
        {
    ++v2;
    *((int *)(DataGlobal_ABCB7C) + v2 - 1) = *((int *)(DataGlobal_ABCB7C) + v2);
        }
    while ( v2 < DataGlobal_ABCB88 );
      }
    __3_YAXPAX_Z(v1);
    }
  }
}
}
} // namespace gamemd

// 0x5BE970
namespace gamemd {
int sub_5BE970(int a1)
{
{
    return MouseClass_Cursors[7 * a1];
}
}
} // namespace gamemd

// 0x5BE990
namespace gamemd {
int sub_5BE990(int a1)
{
{
    return DataGlobal_82D02C[7 * a1];
}
}
} // namespace gamemd

// 0x5C0640
namespace gamemd {
char sub_5C0640(const char * a1, char * a2, int a3)
{
{
    char *v3;
    char i;
    int *v5;
    char v6;
    int *v7;
    char v8;
    int v11[22];
    char v12[12];
    int v13;
    char Source[200];
    v3 = strcpy(Source, a1);
    for ( i = Source[0]; i; i = *++v3 )
  {
    if ( i == 46 )
    break;
  }
    *v3 = 0;
    GameOptionsClass::UnlockMovieIfNeeded_MoviesList(g_GameModeOptions, Source);
    strcpy(v3, aBik_0);
    v5 = CCFileClass::Construct(v11, Source);
    v6 = (*(int (__thiscall **)(int *, int))(*v5 + 20))(v5, 0);
    v11[0] = &vt_CCFileClass;
    v13 = 0;
    Vector::Clear((int)v12);
    v11[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v11);
    if ( !v6 )
  {
    strcpy(v3, aVqa);
    v7 = CCFileClass::Construct(v11, Source);
    v8 = (*(int (__thiscall **)(int *, int))(*v7 + 20))(v7, 0);
    v11[0] = &vt_CCFileClass;
    v13 = 0;
    Vector::Clear((int)v12);
    v11[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v11);
    if ( !v8 )
    return 0;
  }
    if ( a2 )
    strcpy(a2, Source);
    return 1;
}
}
} // namespace gamemd

// 0x5E8740
namespace gamemd {
BOOL sub_5E8740(int a1)
{
{
    return wcscmp(*(const wchar_t **)(Game_PlayerInfoArray + 4 * a1), g_CurrentPlayerName) == 0;
}
}
} // namespace gamemd

// 0x5FFFA0
namespace gamemd {
char sub_5FFFA0()
{
{
    char result;
    int i;
    result = DataGlobal_AC1688;
    for ( i = DataGlobal_AC1688 - 1; i >= 0; --i )
    result = BuildingLight::CalculateShading(*((int **)DataGlobal_AC167C + i));
    return result;
}
}
} // namespace gamemd

// 0x63CA80
namespace gamemd {
unsigned int * sub_63CA80(unsigned int * a1, unsigned char * a2, int a3)
{
{
    int *ScenarioClassActionCoords;
    int v5;
    int v6;
    int v7;
    int *v8;
    int v10[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, a2);
    v5 = *ScenarioClassActionCoords;
    v6 = ScenarioClassActionCoords[1];
    v7 = ScenarioClassActionCoords[2];
    if ( *ScenarioClassActionCoords == -1 && v6 == -1 && v7 == -1 && a3 )
  {
    v8 = (int *)(*(int (__thiscall **)(int, int *))(*(int *)(a3) + 88))(a3, v10);
    v5 = *v8;
    v6 = v8[1];
    v7 = v8[2];
  }
    *a1 = v5;
    *((int*)(a1) + 1) = v6;
    *((int*)(a1) + 2) = v7;
    return a1;
}
}
} // namespace gamemd

// 0x660530
namespace gamemd {
bool sub_660530()
{
  return g_TriggerEventState == 0;
}
} // namespace gamemd

// 0x68ED80
namespace gamemd {
int Render_Get(ScoreScreen * aP0)
{
{
    int v1;
    int v2;
    HouseClass *v4;
    int v5;
    int v6;
    int v7;
    ScoreScreen *v9;
    int v10;
    float v11;
    int v12;
    #375 *other;
    float othera;
    v1 = 0;
    v2 = 0;
    v12 = 0;
    v10 = 0;
    if ( (int)HouseClass_Count > 0 )
  {
    do
    {
    v4 = *(HouseClass **)&HouseClass_Array->__pad_0[4 * v10];
    if ( (unsigned char)HouseClass::IsAlliedWith(aP0, (IUnknown *)v4) && (unsigned char)HouseClass::IsAlliedWith(v4, (IUnknown *)aP0) || aP0 == (ScoreScreen *)v4 )
      {
    v5 = VectorClass::GetCount(v4->ownedInfantryTypes2) + v2;
    v6 = VectorClass::GetCount(v4->__pad_5564) + v5;
    v7 = VectorClass::GetCount(&v4->__pad_5564[20]) + v6;
    v2 = VectorClass::GetCount(&v4->__pad_5564[40]) + v7;
    v1 += v4->killedBuildingsOfHouses[0] + *(int *)v4->__pad_5488;
      }
    ++v10;
    }
    while ( v10 < (int)HouseClass_Count );
    v12 = v2;
  }
    Debug::Log();
    if ( v2 + v1 <= 0 )
    v11 = 0.0;
    else
    v11 = (double)v12 / (double)(v2 + v1);
    Debug::Log();
    (*(void (__stdcall **)(int *))(aP0->ScoreScreen_field_0x24 + 24))(&aP0->ScoreScreen_field_0x24);
    Debug::Log();
    other = (#375 *)(aP0[18].ScoreScreen_field_0x10 + aP0[11].ScoreScreen_field_0x24);
    if ( (int)other <= 0 )
    othera = 0.0;
    else
    othera = (double)(*(int (__stdcall **)(int *))(aP0->ScoreScreen_field_0x24 + 24))(&aP0->ScoreScreen_field_0x24)
    / (double)(int)other;
    Debug::Log();
    v9 = (ScoreScreen *)Math::RoundToInt((othera + v11) * 0.5 * 100.0);
    Debug::Log();
    return (int)v9->__pad_0;
}
}
} // namespace gamemd

// 0x6D9A50
namespace gamemd {
int sub_6D9A50(int a1, int a2, int a3, int a4)
{
{
    int result;
    char *v5;
    int *v6;
    int v7;
    int v8;
    int i;
    char v10[16];
    result = 0;
    for ( i = 0; i < DataGlobal_8A03A0; ++i )
  {
    v5 = *(char **)(DataGlobal_8A0394 + 4 * result);
    if ( (*(int (__thiscall **)(char *))(*(int *)(v5) + 44))(v5) == 6 )
    {
    if ( v5[128] )
      {
    v6 = (int *)(*(int (__thiscall **)(char *, char *))(*(int *)(v5) + 300))(v5, v10);
    v7 = DSurface_ViewBounds + *v6;
    v8 = g_Map_VisibleRect + v6[1];
    if ( a1 < v6[2] + v7 && a2 < v6[3] + v8 && a1 + a3 > v7 && a4 + a2 > v8 )
        {
    Cell::CreateCrater(*v6, v6[1], v6[2], v6[3], 0);
    v5[128] = 0;
        }
      }
    }
    result = i + 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72B340
namespace gamemd {
int sub_72B340()
{
{
    return DataGlobal_B0FB80;
}
}
} // namespace gamemd

// 0x72B360
namespace gamemd {
int sub_72B360()
{
{
    return DataGlobal_B0FB88;
}
}
} // namespace gamemd

// 0x72B500
namespace gamemd {
int sub_72B500()
{
{
    return g_PaletteManagerPool;
}
}
} // namespace gamemd

// 0x72B520
namespace gamemd {
ObjectClass * Render_Render_72B520()
{
{
    return *(ObjectClass **)&DataGlobal_B05488.__pad_579C[20348];
}
}
} // namespace gamemd

// 0x72E820
namespace gamemd {
void Render_Draw(ConvertClass * a1, int * a2, char a3)
{
{
    RenderScoreScreen(a1, a2, a3);
    UI_Draw_72E730( a1, a2, *(int *)&DataGlobal_B05488.__pad_579C[20392], *(int *)&DataGlobal_B05488.__pad_579C[20268], *(int *)&DataGlobal_B05488.__pad_579C[19936]);
}
}
} // namespace gamemd

// 0x72EB50
namespace gamemd {
void * sub_72EB50()
{
{
    void *result;
    DataGlobal_B0FAC4 = LoadFileSHP(DataGlobal_844CD4, (bool *)&DataGlobal_B0FC95);
    DataGlobal_B0F9DC = LoadFileSHP(DataGlobal_844CD8, (bool *)&DataGlobal_B0FC96);
    DataGlobal_B0FAC0 = LoadFileSHP(DataGlobal_844CDC, (bool *)&DataGlobal_B0FC97);
    g_DialogControlPool = LoadFileSHP(DataGlobal_844CE0, (bool *)&DataGlobal_B0FC98);
    DataGlobal_B0FA04 = LoadFileSHP(DataGlobal_844CE4, (bool *)&DataGlobal_B0FC99);
    DataGlobal_B0FAF8 = LoadFileSHP(DataGlobal_844CE8, (bool *)&DataGlobal_B0FC9A);
    DataGlobal_B0FA74 = LoadFileSHP(DataGlobal_844CEC, (bool *)&DataGlobal_B0FC9B);
    DataGlobal_B0FA38 = LoadFileSHP(DataGlobal_844CF0, (bool *)&DataGlobal_B0FC9C);
    DataGlobal_B0FAE8 = LoadFileSHP(DataGlobal_844CF4, (bool *)&DataGlobal_B0FC9D);
    result = LoadFileSHP(DataGlobal_844CF8, (bool *)&DataGlobal_B0FC9E);
    DataGlobal_B0FA54 = result;
    return result;
}
}
} // namespace gamemd

// 0x774070
namespace gamemd {
BOOL sub_774070()
{
{
    return DataGlobal_B72D0C && *(int *)(DataGlobal_B72D0C + 8) && *(char *)(DataGlobal_B72D0C + 1036);
}
}
} // namespace gamemd

// 0x7C3230
namespace gamemd {
int sub_7C3230(int a1, int a2, int a3)
{
{
    if ( a2 )
    *(int *)(a1 + 1924) = a2;
    else
    *(int *)(a1 + 1924) = nullsub_49;
    if ( a3 )
    *(int *)(a1 + 1928) = a3;
    else
    *(int *)(a1 + 1928) = nullsub_49;
    return -1;
}
}
} // namespace gamemd

// 0x7C3690
namespace gamemd {
int sub_7C3690(int a1, int a2)
{
{
    int result;
    result = -1;
    if ( a2 > 0 && *(unsigned short *)(a1 + 236) >= a2 )
  {
    result = *(int *)(a1 + 284);
    *(int *)(a1 + 284) = (unsigned short)a2;
  }
    return result;
}
}
} // namespace gamemd

// 0x7C3710
namespace gamemd {
int sub_7C3710(unsigned signed char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
  *a2 = a1[242];
  *a3 = a1[243];
  *a4 = a1[264];
  return -1;
}
} // namespace gamemd
