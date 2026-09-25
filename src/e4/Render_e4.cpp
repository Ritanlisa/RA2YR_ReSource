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
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/e4_protos.h"

// 0x52FF90
namespace gamemd {
void Render_Load()
{
  int result; // eax
  Frame *v6; // ecx
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x52ffa0*/
  int v8; // [esp+4h] [ebp-4h]
  int v7; // [esp+0h] [ebp-8h]
  result = ScoreScreen::DrawSHPBackground(Source, (int *)g_DSurface_Hidden, a2, a3, (int)&DataGlobal_886080, v7, v8); /*0x52ffb0*/
  if ( a2 ) /*0x52ffb9*/
  {
    IDA_LOBYTE(v6) = 1; /*0x52ffc3*/
    return Frame::Present(v6, 0); /*0x52ffc5*/
  }
  return result; /*0x52ffb7*/
}
} // namespace gamemd

// 0x53C0A0
namespace gamemd {
void sub_53C0A0(unsigned short * a1, int a2, unsigned short a3, int a4, int a5, int a6, int a7)
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
          v23 = flt_A9FAA0 * v10 * v10; /*0x53c143*/
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
          IDA_LOWORD(v13) = *(_WORD *)v13; /*0x53c1d5*/
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
    while (!v14, unsigned int a1); /*0x53c26c*/
  }
  return result; /*0x53c273*/
}
}
// 0x652230
namespace gamemd {
AbstractClass * * Render_Show(CCINIClass * aP0, int a2)
{
  unsigned int v2; // eax
  int v3; // eax
  char result; // al
  wchar_t *v5; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-18h]

  v2 = (unsigned int)g_CurrentFrame + 1; /*0x652240*/
  if ( g_GameTypeFlags == 2 ) /*0x652246*/
    v2 = g_ScenarioLoadState * (((unsigned int)g_CurrentFrame + g_ScenarioLoadState) / g_ScenarioLoadState); /*0x652255*/
  *(_DWORD *)(a1 + 3) = v2; /*0x652258*/
  if ( g_GameInitState >= 0x4000 ) /*0x652265*/
  {
    result = g_GameMode_Current[0]; /*0x6522b7*/
    if ( g_GameMode_Current[0] && g_GameMode_Current[0] != 5 ) /*0x6522c7*/
    {
      if ( g_GameMode_Current[0] == 4 ) /*0x6522d0*/
        Timer::UpdateDelta(); /*0x6522d2*/
      ++g_GameFlags_Campaign; /*0x6522e4*/
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Queue_CPP, 8878); /*0x65230f*/
      v5 = GetStringCSF(g_Str_TXT_QUEUE_FULL, 0, g_Str_File_Queue_CPP, 8878); /*0x65231a*/
      Dialog::ShowMessageBox(a2, v5, StringCSF, 0, 0, 0); /*0x652324*/
      dword_A8B8B8 = 0; /*0x652335*/
      --g_GameFlags_Campaign; /*0x652341*/
      dword_A8B8BC = 0; /*0x652347*/
      g_WTFMode = 0; /*0x652351*/
      if ( dword_B04874 ) /*0x652358*/
        Mouse::HideWindow(); /*0x65235a*/
      if ( g_GameMode_Current[0] == 4 ) /*0x652366*/
      {
        g_SkirmishFlag = 1; /*0x65236a*/
        byte_A8B8C1 = 1; /*0x65236f*/
        byte_A8B8C2 = 1; /*0x652374*/
        Timer::UpdateDelta(); /*0x652379*/
        ProcessGameResults(0); /*0x652380*/
      }
      MouseClass::LoadCursors(); /*0x652385*/
      return ToggleDisplayMode(0, unsigned int a1); /*0x65238c*/
    }
  }
  else
  {
    if ( g_MenuInitFlags ) /*0x65226e*/
      v3 = g_MenuInitFlags - 1; /*0x652277*/
    else
      v3 = 0x3FFF; /*0x652270*/
    g_MenuInitFlags = v3; /*0x65227b*/
    qmemcpy(&g_MenuInitComplete[111 * v3], (const void *)a1, 0x6Fu); /*0x652290*/
    dword_A70204[g_MenuInitFlags] = timeGetTime(); /*0x6522a3*/
    return ++g_GameInitState; /*0x6522af*/
  }
  return result; /*0x6522a2*/
}
}
// 0x705270
AbstractClass * * Render::DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
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
  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v29); /*0x70529b*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v33); /*0x7052b3*/
  v30 += g_Map_VisibleRect; /*0x7052ce*/
  v34 += g_Map_VisibleRect; /*0x70530d*/
  v8 = ((unsigned __int8)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x705348*/
     | (IDA_BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue)
     | (IDA_BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green);
  v27 = (unsigned __int8)word_A83CDA; /*0x705363*/
  v43[0] = v29; /*0x70538d*/
  v9 = (IDA_HIBYTE(word_A83CDA) >> g_BitMask_Red << g_BitShift_Blue) /*0x705397*/
     | ((unsigned __int8)word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
     | ((unsigned __int8)byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
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
    v13 = ClipRectIntersection(v54, &DSurface_ViewBounds, &v39, 0, 0); /*0x705428*/
    v35 = *v13; /*0x705430*/
    v36 = v13[1]; /*0x705437*/
    v37 = v13[2]; /*0x70543e*/
    v38 = v13[3]; /*0x70544b*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v35, v8); /*0x705456*/
    v27 = -2; /*0x705462*/
    v28 = -2; /*0x705466*/
    v14 = Coord2D::Add(&v27, v52, v44); /*0x70547d*/
    v15 = Rect::Construct(v54, v14, 3, 3); /*0x70548a*/
    v35 = *v15; /*0x705493*/
    v36 = v15[1]; /*0x70549c*/
    v37 = v15[2]; /*0x7054a8*/
    v38 = v15[3]; /*0x7054bb*/
    v16 = ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0); /*0x7054bf*/
    v39 = *v16; /*0x7054c6*/
    v40 = v16[1]; /*0x7054cd*/
    v41 = v16[2]; /*0x7054d4*/
    v42 = v16[3]; /*0x7054e1*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v9); /*0x7054ed*/
  }
  v51[0] = DSurface_ViewBounds; /*0x705501*/
  v51[1] = g_Map_VisibleRect; /*0x70550b*/
  v51[2] = g_Map_VisibleRectOffset; /*0x705511*/
  v51[3] = g_DSurface_WindowOffset; /*0x705518*/
  if ( v10 && ClipLine(v43, v44, v51) ) /*0x70552e*/
  {
    if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x705540*/
      v17 = **(unsigned __int8 **)(g_FileSystem_THEATER_PAL + 372); /*0x70554c*/
    else
      v17 = **(unsigned __int16 **)(g_FileSystem_THEATER_PAL + 372); /*0x705558*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x70556e*/
      DSurface_Composite,
      v43,
      v44,
      v17);
  }
  v27 = v29 - 2; /*0x705583*/
  v28 = v30 - 2; /*0x70558b*/
  v18 = Rect::Construct(v54, &v27, 3, 3); /*0x705597*/
  v35 = *v18; /*0x7055a0*/
  v36 = v18[1]; /*0x7055a9*/
  v37 = v18[2]; /*0x7055b0*/
  v38 = v18[3]; /*0x7055c2*/
  v19 = ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0); /*0x7055cc*/
  v39 = *v19; /*0x7055d4*/
  v40 = v19[1]; /*0x7055db*/
  v41 = v19[2]; /*0x7055e2*/
  v42 = v19[3]; /*0x7055ef*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v9); /*0x7055fa*/
  v28 = v34 - 2; /*0x705611*/
  v27 = v33 - 2; /*0x70561f*/
  v20 = Rect::Construct(v54, &v27, 3, 3); /*0x705623*/
  v35 = *v20; /*0x70562c*/
  v36 = v20[1]; /*0x705635*/
  v37 = v20[2]; /*0x70563c*/
  v38 = v20[3]; /*0x70564e*/
  v21 = ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0); /*0x705658*/
  v39 = *v21; /*0x705660*/
  v40 = v21[1]; /*0x705667*/
  v41 = v21[2]; /*0x70566e*/
  v42 = v21[3]; /*0x70567b*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v8); /*0x705686*/
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
    Coord::To_Screen(g_TacticalClass_Instance, &v45, &v29); /*0x705732*/
    Coord::To_Screen(g_TacticalClass_Instance, &v48, &v33); /*0x705747*/
    v30 += g_Map_VisibleRect; /*0x705761*/
    v34 += g_Map_VisibleRect; /*0x70576e*/
    if ( ClipLine(&v29, &v33, v51) ) /*0x705772*/
    {
      v31 = a7; /*0x705794*/
      v32 = IDA_BYTE2(a7); /*0x705799*/
      v25 = v24; /*0x70579d*/
      if ( v24 >= 254 ) /*0x70579f*/
        v25 = -2; /*0x7057a1*/
      Color::Lerp((unsigned __int8 *)&v31, v25, (unsigned __int8 *)&byte_A83CD9); /*0x7057b0*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x70581e*/
        DSurface_Composite,
        &v29,
        &v33,
        ((unsigned __int8)v31 >> g_BitShift_Green_0 << g_BitShift_Red)
      | (IDA_HIBYTE(v31) >> g_BitMask_Blue << g_BitMask_Green)
      | (v32 >> g_BitMask_Red << g_BitShift_Blue));
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
// 0x780D90
namespace gamemd {
wchar_t ** Render_Format(wchar_t ** a1, char ** a2)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax
  int v7; // edi
  wchar_t *v8; // esi
  char *v9; // eax

  v4 = String::GetOrEmpty_Alt(a2); /*0x780d9f*/
  if ( _strcmpi(v4, g_Str_File_RandMap_Sed) ) /*0x780da5*/
  {
    v7 = 0; /*0x780ddb*/
    if ( g_MultiplayerOptions <= 0 ) /*0x780ddf*/
    {
  LABEL_6:
      WideString::Assign(a1, &g_TypeClass_DefaultString); /*0x780e0b*/
      return a1; /*0x780e17*/
    }
    else
    {
      while ( 1 ) /*0x780de6*/
      {
        v8 = *(wchar_t **)(g_MultiplayerGameState + 4 * v7); /*0x780de6*/
        v9 = String::GetOrEmpty_Alt(a2); /*0x780def*/
        if ( !_strcmpi(v9, v8 + 44) ) /*0x780df5*/
          break; /*0x780df5*/
        if ( ++v7 >= g_MultiplayerOptions ) /*0x780e09*/
          goto LABEL_6; /*0x780e09*/
      }
      WideString::Assign(a1, v8); /*0x780e21*/
      return a1; /*0x780e26*/
    }
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_wonline_cpp, 2970); /*0x780dc2*/
    WideString::Assign(a1, StringCSF); /*0x780dca*/
    return a1; /*0x780dcf*/
  }
}
}
// 0x7C7371
void Render::DrawTileBitmap(int a1, unsigned short * a2, short a3, short a4, unsigned int a5, int a6)
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
            IDA_LOWORD(v30) = *(_WORD *)v20; /*0x7c7ae8*/
            IDA_LOBYTE(v24) = *(_WORD *)v20; /*0x7c7aeb*/
            v27 = v30 >> 8; /*0x7c7aed*/
            --v20; /*0x7c7af0*/
            v21 -= 4; /*0x7c7af3*/
            IDA_LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7af6*/
            goto LABEL_79; /*0x7c7afc*/
          case 2: /*0x7c77b6*/
            v45 = v22 - 8; /*0x7c77d3*/
            v24 = 0; /*0x7c77d7*/
            v23 = ((v22 - 8) >> 4) + 1; /*0x7c77d9*/
  LABEL_119:
            IDA_LOWORD(v27) = *(_WORD *)v20; /*0x7c7aa4*/
            IDA_LOBYTE(v24) = *(_WORD *)v20; /*0x7c7aa9*/
            v21 -= 8; /*0x7c7aab*/
            v20 -= 2; /*0x7c7aae*/
            IDA_LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7ab1*/
            goto LABEL_87; /*0x7c7ab7*/
          case 3: /*0x7c77b6*/
            v45 = v22 - 4; /*0x7c77e3*/
            v24 = 0; /*0x7c77e7*/
            v23 = ((v22 - 4) >> 4) + 1; /*0x7c77e9*/
  LABEL_117:
            IDA_LOBYTE(v24) = *(_BYTE *)v20; /*0x7c7a70*/
            v21 -= 12; /*0x7c7a76*/
            v20 -= 3; /*0x7c7a79*/
            IDA_LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7a7c*/
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
        IDA_LOBYTE(v24) = *(_DWORD *)v20; /*0x7c796d*/
        IDA_LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c796f*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c77f0*/
        IDA_LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c77f7*/
        if ( v18 > 0x7FFF ) /*0x7c7803*/
        {
          v18 = 0x7FFF; /*0x7c7998*/
        }
        else if ( v18 < -32768 ) /*0x7c780e*/
        {
          v18 = -32768; /*0x7c79a4*/
        }
        IDA_LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7814*/
        *v21 = v18; /*0x7c781a*/
  LABEL_75:
        IDA_LOBYTE(v24) = IDA_BYTE1(v28); /*0x7c781d*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c781f*/
        IDA_LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7826*/
        if ( v18 > 0x7FFF ) /*0x7c7832*/
        {
          v18 = 0x7FFF; /*0x7c79b0*/
        }
        else if ( v18 < -32768 ) /*0x7c783d*/
        {
          v18 = -32768; /*0x7c79bc*/
        }
        IDA_LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7843*/
        v21[2] = v18; /*0x7c7849*/
        v27 = IDA_HIWORD(v28); /*0x7c784d*/
  LABEL_79:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c7850*/
        IDA_LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7857*/
        if ( v18 > 0x7FFF ) /*0x7c7863*/
        {
          v18 = 0x7FFF; /*0x7c79c8*/
        }
        else if ( v18 < -32768 ) /*0x7c786e*/
        {
          v18 = -32768; /*0x7c79d4*/
        }
        IDA_LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7874*/
        v21[4] = v18; /*0x7c787a*/
  LABEL_83:
        IDA_LOBYTE(v24) = v27; /*0x7c787e*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c7880*/
        IDA_LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7887*/
        if ( v18 > 0x7FFF ) /*0x7c7893*/
        {
          v18 = 0x7FFF; /*0x7c79e0*/
        }
        else if ( v18 < -32768 ) /*0x7c789e*/
        {
          v18 = -32768; /*0x7c79ec*/
        }
        IDA_LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c78a4*/
        v21[6] = v18; /*0x7c78aa*/
  LABEL_87:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c78ae*/
        IDA_LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c78b5*/
        if ( v18 > 0x7FFF ) /*0x7c78c1*/
        {
          v18 = 0x7FFF; /*0x7c79f8*/
        }
        else if ( v18 < -32768 ) /*0x7c78cc*/
        {
          v18 = -32768; /*0x7c7a04*/
        }
        IDA_LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c78d2*/
        v21[8] = v18; /*0x7c78d8*/
  LABEL_91:
        IDA_LOBYTE(v24) = IDA_BYTE1(v27); /*0x7c78dc*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c78de*/
        IDA_LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c78e5*/
        if ( v18 > 0x7FFF ) /*0x7c78f1*/
        {
          v18 = 0x7FFF; /*0x7c7a10*/
        }
        else if ( v18 < -32768 ) /*0x7c78fc*/
        {
          v18 = -32768; /*0x7c7a1c*/
        }
        IDA_LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7902*/
        v21[10] = v18; /*0x7c7908*/
  LABEL_95:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c790c*/
        IDA_LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7913*/
        if ( v18 > 0x7FFF ) /*0x7c791f*/
        {
          v18 = 0x7FFF; /*0x7c7a28*/
        }
        else if ( v18 < -32768 ) /*0x7c792a*/
        {
          v18 = -32768; /*0x7c7a34*/
        }
        IDA_LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7930*/
        v21[12] = v18; /*0x7c7936*/
  LABEL_99:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c793a*/
        IDA_LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7941*/
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
            IDA_LOBYTE(v24) = 16 * *(_BYTE *)v20; /*0x7c7a5f*/
            v21 -= 14; /*0x7c7a61*/
            IDA_LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7a64*/
            goto LABEL_99; /*0x7c7a6a*/
          case 2u: /*0x7c7982*/
            goto LABEL_117;
          case 3u: /*0x7c7982*/
            IDA_LOWORD(v27) = 16 * *(_WORD *)v20; /*0x7c7a8d*/
            IDA_LOBYTE(v24) = 16 * *(_BYTE *)v20; /*0x7c7a91*/
            v21 -= 10; /*0x7c7a93*/
            IDA_LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7a96*/
            goto LABEL_91; /*0x7c7a9c*/
          case 4u: /*0x7c7982*/
            goto LABEL_119;
          case 5u: /*0x7c7982*/
            v29 = *(unsigned __int8 *)(v20 + 2) << 16; /*0x7c7ac1*/
            IDA_LOWORD(v29) = *(_WORD *)v20; /*0x7c7ac4*/
            v27 = v29 >> 4; /*0x7c7ac9*/
            IDA_LOBYTE(v24) = 16 * *(_WORD *)v20; /*0x7c7acc*/
            v21 -= 6; /*0x7c7acf*/
            IDA_LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7ad2*/
            goto LABEL_83; /*0x7c7ad8*/
          case 6u: /*0x7c7982*/
            goto LABEL_121;
          case 7u: /*0x7c7982*/
            v28 = 16 * *(_DWORD *)v20; /*0x7c7b08*/
            IDA_LOBYTE(v24) = 16 * *(_BYTE *)v20; /*0x7c7b0b*/
            v21 -= 2; /*0x7c7b0d*/
            IDA_LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7b10*/
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
            IDA_LOWORD(v43) = *(_WORD *)v32; /*0x7c7ebc*/
            IDA_LOBYTE(v37) = *(_WORD *)v32; /*0x7c7ebf*/
            v40 = v43 >> 8; /*0x7c7ec1*/
            --v32; /*0x7c7ec4*/
            v31 -= 4; /*0x7c7ec7*/
            IDA_LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7eca*/
            goto LABEL_138; /*0x7c7ed0*/
          case 2: /*0x7c7b86*/
            v46 = v35 - 8; /*0x7c7ba3*/
            v37 = 0; /*0x7c7ba7*/
            v36 = ((v35 - 8) >> 4) + 1; /*0x7c7ba9*/
  LABEL_178:
            IDA_LOWORD(v40) = *(_WORD *)v32; /*0x7c7e78*/
            IDA_LOBYTE(v37) = *(_WORD *)v32; /*0x7c7e7d*/
            v31 -= 8; /*0x7c7e7f*/
            v32 -= 2; /*0x7c7e82*/
            IDA_LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7e85*/
            goto LABEL_146; /*0x7c7e8b*/
          case 3: /*0x7c7b86*/
            v46 = v35 - 4; /*0x7c7bb3*/
            v37 = 0; /*0x7c7bb7*/
            v36 = ((v35 - 4) >> 4) + 1; /*0x7c7bb9*/
  LABEL_176:
            IDA_LOBYTE(v37) = *(_BYTE *)v32; /*0x7c7e44*/
            v31 -= 12; /*0x7c7e4a*/
            v32 -= 3; /*0x7c7e4d*/
            IDA_LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7e50*/
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
        IDA_LOBYTE(v37) = *(_DWORD *)v32; /*0x7c7d3d*/
        IDA_LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7d3f*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7bc0*/
        IDA_LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7bc7*/
        if ( v33 > 0x7FFF ) /*0x7c7bd3*/
        {
          v33 = 0x7FFF; /*0x7c7d6c*/
        }
        else if ( v33 < -32768 ) /*0x7c7bde*/
        {
          v33 = -32768; /*0x7c7d78*/
        }
        IDA_LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7be4*/
        *v31 = v33; /*0x7c7bea*/
  LABEL_134:
        IDA_LOBYTE(v37) = IDA_BYTE1(v41); /*0x7c7bed*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7bef*/
        IDA_LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7bf6*/
        if ( v33 > 0x7FFF ) /*0x7c7c02*/
        {
          v33 = 0x7FFF; /*0x7c7d84*/
        }
        else if ( v33 < -32768 ) /*0x7c7c0d*/
        {
          v33 = -32768; /*0x7c7d90*/
        }
        IDA_LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7c13*/
        v31[2] = v33; /*0x7c7c19*/
        v40 = IDA_HIWORD(v41); /*0x7c7c1d*/
  LABEL_138:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c20*/
        IDA_LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c27*/
        if ( v33 > 0x7FFF ) /*0x7c7c33*/
        {
          v33 = 0x7FFF; /*0x7c7d9c*/
        }
        else if ( v33 < -32768 ) /*0x7c7c3e*/
        {
          v33 = -32768; /*0x7c7da8*/
        }
        IDA_LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7c44*/
        v31[4] = v33; /*0x7c7c4a*/
  LABEL_142:
        IDA_LOBYTE(v37) = v40; /*0x7c7c4e*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c50*/
        IDA_LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c57*/
        if ( v33 > 0x7FFF ) /*0x7c7c63*/
        {
          v33 = 0x7FFF; /*0x7c7db4*/
        }
        else if ( v33 < -32768 ) /*0x7c7c6e*/
        {
          v33 = -32768; /*0x7c7dc0*/
        }
        IDA_LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7c74*/
        v31[6] = v33; /*0x7c7c7a*/
  LABEL_146:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c7e*/
        IDA_LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c85*/
        if ( v33 > 0x7FFF ) /*0x7c7c91*/
        {
          v33 = 0x7FFF; /*0x7c7dcc*/
        }
        else if ( v33 < -32768 ) /*0x7c7c9c*/
        {
          v33 = -32768; /*0x7c7dd8*/
        }
        IDA_LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7ca2*/
        v31[8] = v33; /*0x7c7ca8*/
  LABEL_150:
        IDA_LOBYTE(v37) = IDA_BYTE1(v40); /*0x7c7cac*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7cae*/
        IDA_LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7cb5*/
        if ( v33 > 0x7FFF ) /*0x7c7cc1*/
        {
          v33 = 0x7FFF; /*0x7c7de4*/
        }
        else if ( v33 < -32768 ) /*0x7c7ccc*/
        {
          v33 = -32768; /*0x7c7df0*/
        }
        IDA_LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7cd2*/
        v31[10] = v33; /*0x7c7cd8*/
  LABEL_154:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7cdc*/
        IDA_LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7ce3*/
        if ( v33 > 0x7FFF ) /*0x7c7cef*/
        {
          v33 = 0x7FFF; /*0x7c7dfc*/
        }
        else if ( v33 < -32768 ) /*0x7c7cfa*/
        {
          v33 = -32768; /*0x7c7e08*/
        }
        IDA_LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7d00*/
        v31[12] = v33; /*0x7c7d06*/
  LABEL_158:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7d0a*/
        IDA_LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7d11*/
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
            IDA_LOBYTE(v37) = 16 * *(_BYTE *)v32; /*0x7c7e33*/
            v31 -= 14; /*0x7c7e35*/
            IDA_LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7e38*/
            goto LABEL_158; /*0x7c7e3e*/
          case 2u: /*0x7c7d52*/
            goto LABEL_176;
          case 3u: /*0x7c7d52*/
            IDA_LOWORD(v40) = 16 * *(_WORD *)v32; /*0x7c7e61*/
            IDA_LOBYTE(v37) = 16 * *(_BYTE *)v32; /*0x7c7e65*/
            v31 -= 10; /*0x7c7e67*/
            IDA_LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7e6a*/
            goto LABEL_150; /*0x7c7e70*/
          case 4u: /*0x7c7d52*/
            goto LABEL_178;
          case 5u: /*0x7c7d52*/
            v42 = *(unsigned __int8 *)(v32 + 2) << 16; /*0x7c7e95*/
            IDA_LOWORD(v42) = *(_WORD *)v32; /*0x7c7e98*/
            v40 = v42 >> 4; /*0x7c7e9d*/
            IDA_LOBYTE(v37) = 16 * *(_WORD *)v32; /*0x7c7ea0*/
            v31 -= 6; /*0x7c7ea3*/
            IDA_LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7ea6*/
            goto LABEL_142; /*0x7c7eac*/
          case 6u: /*0x7c7d52*/
            goto LABEL_180;
          case 7u: /*0x7c7d52*/
            v41 = 16 * *(_DWORD *)v32; /*0x7c7edc*/
            IDA_LOBYTE(v37) = 16 * *(_BYTE *)v32; /*0x7c7edf*/
            v31 -= 2; /*0x7c7ee1*/
            IDA_LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7ee4*/
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
            IDA_LOWORD(v17) = *(_WORD *)v8; /*0x7c7724*/
            IDA_LOBYTE(v11) = *(_WORD *)v8; /*0x7c7727*/
            v14 = v17 >> 8; /*0x7c7729*/
            --v8; /*0x7c772c*/
            v9 -= 2; /*0x7c772f*/
            IDA_LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c7732*/
            goto LABEL_19; /*0x7c7738*/
          case 2: /*0x7c73ef*/
            v44 = a5 - 8; /*0x7c740b*/
            v11 = 0; /*0x7c740f*/
            v10 = ((a5 - 8) >> 4) + 1; /*0x7c7411*/
  LABEL_60:
            IDA_LOWORD(v14) = *(_WORD *)v8; /*0x7c76e0*/
            IDA_LOBYTE(v11) = *(_WORD *)v8; /*0x7c76e5*/
            v9 -= 4; /*0x7c76e7*/
            v8 -= 2; /*0x7c76ea*/
            IDA_LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c76ed*/
            goto LABEL_27; /*0x7c76f3*/
          case 3: /*0x7c73ef*/
            v44 = a5 - 4; /*0x7c741b*/
            v11 = 0; /*0x7c741f*/
            v10 = ((a5 - 4) >> 4) + 1; /*0x7c7421*/
  LABEL_58:
            IDA_LOBYTE(v11) = *(_BYTE *)v8; /*0x7c76ac*/
            v9 -= 6; /*0x7c76b2*/
            v8 -= 3; /*0x7c76b5*/
            IDA_LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c76b8*/
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
        IDA_LOBYTE(v11) = *(_DWORD *)v8; /*0x7c75a5*/
        IDA_LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c75a7*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7428*/
        IDA_LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c742f*/
        if ( v6 > 0x7FFF ) /*0x7c743b*/
        {
          v6 = 0x7FFF; /*0x7c75d4*/
        }
        else if ( v6 < -32768 ) /*0x7c7446*/
        {
          v6 = -32768; /*0x7c75e0*/
        }
        IDA_LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c744c*/
        *v9 = v6; /*0x7c7452*/
  LABEL_15:
        IDA_LOBYTE(v11) = IDA_BYTE1(v15); /*0x7c7455*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7457*/
        IDA_LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c745e*/
        if ( v6 > 0x7FFF ) /*0x7c746a*/
        {
          v6 = 0x7FFF; /*0x7c75ec*/
        }
        else if ( v6 < -32768 ) /*0x7c7475*/
        {
          v6 = -32768; /*0x7c75f8*/
        }
        IDA_LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c747b*/
        v9[1] = v6; /*0x7c7481*/
        v14 = IDA_HIWORD(v15); /*0x7c7485*/
  LABEL_19:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7488*/
        IDA_LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c748f*/
        if ( v6 > 0x7FFF ) /*0x7c749b*/
        {
          v6 = 0x7FFF; /*0x7c7604*/
        }
        else if ( v6 < -32768 ) /*0x7c74a6*/
        {
          v6 = -32768; /*0x7c7610*/
        }
        IDA_LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c74ac*/
        v9[2] = v6; /*0x7c74b2*/
  LABEL_23:
        IDA_LOBYTE(v11) = v14; /*0x7c74b6*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c74b8*/
        IDA_LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c74bf*/
        if ( v6 > 0x7FFF ) /*0x7c74cb*/
        {
          v6 = 0x7FFF; /*0x7c761c*/
        }
        else if ( v6 < -32768 ) /*0x7c74d6*/
        {
          v6 = -32768; /*0x7c7628*/
        }
        IDA_LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c74dc*/
        v9[3] = v6; /*0x7c74e2*/
  LABEL_27:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c74e6*/
        IDA_LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c74ed*/
        if ( v6 > 0x7FFF ) /*0x7c74f9*/
        {
          v6 = 0x7FFF; /*0x7c7634*/
        }
        else if ( v6 < -32768 ) /*0x7c7504*/
        {
          v6 = -32768; /*0x7c7640*/
        }
        IDA_LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c750a*/
        v9[4] = v6; /*0x7c7510*/
  LABEL_31:
        IDA_LOBYTE(v11) = IDA_BYTE1(v14); /*0x7c7514*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7516*/
        IDA_LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c751d*/
        if ( v6 > 0x7FFF ) /*0x7c7529*/
        {
          v6 = 0x7FFF; /*0x7c764c*/
        }
        else if ( v6 < -32768 ) /*0x7c7534*/
        {
          v6 = -32768; /*0x7c7658*/
        }
        IDA_LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c753a*/
        v9[5] = v6; /*0x7c7540*/
  LABEL_35:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7544*/
        IDA_LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c754b*/
        if ( v6 > 0x7FFF ) /*0x7c7557*/
        {
          v6 = 0x7FFF; /*0x7c7664*/
        }
        else if ( v6 < -32768 ) /*0x7c7562*/
        {
          v6 = -32768; /*0x7c7670*/
        }
        IDA_LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c7568*/
        v9[6] = v6; /*0x7c756e*/
  LABEL_39:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7572*/
        IDA_LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c7579*/
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
            IDA_LOBYTE(v11) = 16 * *(_BYTE *)v8; /*0x7c769b*/
            v9 -= 7; /*0x7c769d*/
            IDA_LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c76a0*/
            goto LABEL_39; /*0x7c76a6*/
          case 2u: /*0x7c75ba*/
            goto LABEL_58;
          case 3u: /*0x7c75ba*/
            IDA_LOWORD(v14) = 16 * *(_WORD *)v8; /*0x7c76c9*/
            IDA_LOBYTE(v11) = 16 * *(_BYTE *)v8; /*0x7c76cd*/
            v9 -= 5; /*0x7c76cf*/
            IDA_LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c76d2*/
            goto LABEL_31; /*0x7c76d8*/
          case 4u: /*0x7c75ba*/
            goto LABEL_60;
          case 5u: /*0x7c75ba*/
            v16 = *(unsigned __int8 *)(v8 + 2) << 16; /*0x7c76fd*/
            IDA_LOWORD(v16) = *(_WORD *)v8; /*0x7c7700*/
            v14 = v16 >> 4; /*0x7c7705*/
            IDA_LOBYTE(v11) = 16 * *(_WORD *)v8; /*0x7c7708*/
            v9 -= 3; /*0x7c770b*/
            IDA_LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c770e*/
            goto LABEL_23; /*0x7c7714*/
          case 6u: /*0x7c75ba*/
            goto LABEL_62;
          case 7u: /*0x7c75ba*/
            v15 = 16 * *(_DWORD *)v8; /*0x7c7744*/
            IDA_LOBYTE(v11) = 16 * *(_BYTE *)v8; /*0x7c7747*/
            --v9; /*0x7c7749*/
            IDA_LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c774c*/
            goto LABEL_15; /*0x7c7752*/
        }
      }
      *(_DWORD *)a6 = v6; /*0x7c75c1*/
      *(_WORD *)(a6 + 4) = v7; /*0x7c75c5*/
    }
  }
}
// 0x731BF0
namespace gamemd {
void sub_731BF0()
{
  bool v1; // bl
  bool IsButtonDown; // al
  wchar_t *v3; // edi
  int v4; // esi
  _BYTE *v5; // ecx

  if ( byte_B0FE58 ) /*0x731bfa*/
    return 1; /*0x731c01*/
  v1 = Mouse::IsButtonDown(dword_A8EC00) || Mouse::IsButtonDown(dword_A8EC04); /*0x731c31*/
  if ( Mouse::IsButtonDown(BombListClass_Array) || (IsButtonDown = Mouse::IsButtonDown(dword_A8EC0C)) ) /*0x731c54*/
    IsButtonDown = 1; /*0x731c5d*/
  if ( v1 && IsButtonDown ) /*0x731c66*/
  {
    v3 = g_SelectionManager; /*0x731c68*/
    v4 = 0; /*0x731c6e*/
    if ( (int)g_SelectionManager <= 0 ) /*0x731c72*/
      return 1; /*0x731ca2*/
    while ( 1 ) /*0x731c79*/
    {
      v5 = (_BYTE *)*((_DWORD *)g_ObjectClass_CurrentCount + v4); /*0x731c79*/
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
// 0x777E00
namespace gamemd {
int sub_777E00()
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
// 0x778030
namespace gamemd {
void Render_Draw_778030(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
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
// 0x778120
namespace gamemd {
int sub_778120()
{
  return dword_B73570; /*0x778125*/
}
}
// 0x6CA310
namespace gamemd {
WinModemClass * * Render_Parse_6CA310(CampaignScore * aP0, CCINIClass * aP1)
{
  wchar_t *v2; // ebp
  wchar_t *i; // edi
  const wchar_t *v4; // esi
  wchar_t *v5; // ebx
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  wchar_t *v8; // eax
  const wchar_t **v9; // esi
  const wchar_t **v10; // edi
  const wchar_t *v11; // eax
  wchar_t *Stringa; // [esp+18h] [ebp+4h]

  v2 = aP0; /*0x6ca313*/
  for ( i = wcschr(aP0, 0x3Du); i; i = wcschr(v2, 0x3Du) ) /*0x6ca32c*/
  {
    v4 = v2; /*0x6ca332*/
    *i = 0; /*0x6ca336*/
    Stringa = v2; /*0x6ca33b*/
    WideString::Trim(v2); /*0x6ca33f*/
    v5 = i + 1; /*0x6ca344*/
    WideString::Trim(i + 1); /*0x6ca349*/
    if ( i[1] == 34 ) /*0x6ca352*/
    {
      v5 = i + 2; /*0x6ca354*/
      v6 = wcschr(i + 2, 0x22u); /*0x6ca35a*/
      if ( !v6 ) /*0x6ca366*/
        break; /*0x6ca366*/
      *v6 = 0; /*0x6ca36c*/
      v7 = v6 + 1; /*0x6ca371*/
      WideString::Trim(v6 + 1); /*0x6ca376*/
      if ( *v7 == 44 ) /*0x6ca37f*/
        ++v7; /*0x6ca381*/
      v2 = v7; /*0x6ca384*/
      v4 = Stringa; /*0x6ca386*/
    }
    else
    {
      v8 = wcspbrk(i + 1, L", "); /*0x6ca392*/
      if ( v8 ) /*0x6ca39c*/
      {
        *v8 = 0; /*0x6ca39e*/
        v2 = v8 + 1; /*0x6ca3a3*/
      }
      else
      {
        v2 = &g_TypeClass_DefaultString; /*0x6ca3a8*/
      }
    }
    if ( !wcslen(v4) ) /*0x6ca3ae*/
      break; /*0x6ca3ae*/
    if ( v4 && off_8421A8 ) /*0x6ca3c9*/
    {
      v9 = (const wchar_t **)&off_8421A8; /*0x6ca3cb*/
      v10 = (const wchar_t **)&off_8421A8; /*0x6ca3d0*/
      while ( _wcsicmp(*v9, Stringa) ) /*0x6ca3e4*/
      {
        v11 = v10[2]; /*0x6ca3e6*/
        v10 += 2; /*0x6ca3e9*/
        v9 = v10; /*0x6ca3ee*/
        if ( !v11 ) /*0x6ca3f0*/
          goto LABEL_18; /*0x6ca3f0*/
      }
      ((void (__fastcall *)(wchar_t *, int))v9[1])(v5, aP1); /*0x6ca3fa*/
    }
  LABEL_18:
    WideString::Trim(v2); /*0x6ca3fd*/
    if ( !wcslen(v2) ) /*0x6ca40f*/
      return 1; /*0x6ca48f*/
  }
  Debug::Log(); /*0x6ca426*/
  return 0; /*0x6ca440*/
}
}
// 0x6CA940
namespace gamemd {
void sub_6CA940(int a1, unsigned short * a2, int a3)
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
// 0x53D850
namespace gamemd {
void sub_53D850()
{
  int v0; // ebx
  int v1; // edi
  _DWORD *v2; // esi
  int *v3; // eax
  char result; // al
  int i; // esi
  int v6; // [esp+4h] [ebp-8h] BYREF

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) != dword_AA0150 ) /*0x53d865*/
  {
    v0 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2); /*0x53d874*/
    dword_A9FAE8[0] = 0; /*0x53d876*/
    dword_AA0150 = v0; /*0x53d880*/
    v1 = 1; /*0x53d886*/
    v2 = &unk_A9FAEC; /*0x53d88b*/
    do /*0x53d8b2*/
    {
      v3 = ComputeSpiralOffset(&v6, v1); /*0x53d896*/
      ++v2; /*0x53d89d*/
      ++v1; /*0x53d8a8*/
      *(v2 - 1) = *v3 + v0 * v3[1]; /*0x53d8a9*/
    }
    while ( (int)v2 < (int)&dword_A9FF6C ); /*0x53d8b2*/
  }
  result = dword_AA0128; /*0x53d8b6*/
  for ( i = dword_AA0128 - 1; i >= 0; --i ) /*0x53d8c0*/
    result = ZBuffer::RenderSprite(*((int **)dword_AA011C + i)); /*0x53d8cb*/
  return result; /*0x53d8d3*/
}
}
// 0x5541C0
namespace gamemd {
CampaignScore * * Render_Render_5541C0(unsigned short * a0, int a2, AbstractClass * aP2, int a4, AbstractClass * aP4, char a6, char a7)
{
  int v8; // edx
  struct tagRECT *v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+4h] [ebp-1Ch]
  int dy; // [esp+8h] [ebp-18h] BYREF
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14[4]; // [esp+10h] [ebp-10h] BYREF

  dy = 0; /*0x5541dd*/
  v13 = 0; /*0x5541e5*/
  Text::Layout((_DWORD *)g_FogOfWarState, a0, &dy, &v13, aP4); /*0x5541ed*/
  if ( a7 ) /*0x5541f8*/
  {
    v8 = aP4; /*0x5541fa*/
    dy = aP4; /*0x5541fc*/
  }
  else
  {
    v8 = dy; /*0x554202*/
  }
  v14[1] = a4; /*0x554213*/
  v14[3] = v13; /*0x55421b*/
  v14[0] = aP2; /*0x55421f*/
  v14[2] = v8; /*0x554225*/
  if ( (a6 & 1) != 0 ) /*0x55422a*/
  {
    v14[0] = aP2 + (aP4 - v8) / 2; /*0x554237*/
  }
  else if ( (a6 & 2) != 0 ) /*0x55423f*/
  {
    v14[0] = aP4 + aP2 - v8; /*0x554245*/
  }
  Rect::Inflate(v10, v11, dy); /*0x554252*/
  return DSurface::FillRectWithColor(v14, a2, 0, 0x9Fu); /*0x554269*/
}
}
// 0x554280
namespace gamemd {
void Render_Render_554280(unsigned short * a0, AbstractClass * aP1, int * a2, unsigned short a4, char a5)
{
  int v5; // esi
  int v8; // ecx
  int v9; // edx
  int v11[4]; // [esp+14h] [ebp-10h] BYREF

  v5 = a2[1]; /*0x55428a*/
  v8 = *a2; /*0x554294*/
  v9 = *a2 + a2[2]; /*0x55429b*/
  v11[3] = v5 + a2[3]; /*0x55429d*/
  v11[0] = v8; /*0x5542a5*/
  v11[2] = v9; /*0x5542b0*/
  v11[1] = v5; /*0x5542c7*/
  return PrintFontLayout( /*0x554341*/
           aP1,
           a0,
           v11,
           (_DWORD *)g_FogOfWarState,
           (unsigned __int8)((unsigned __int8)(a4 >> g_BitShift_Red) << g_BitShift_Green_0)
         | (((unsigned __int8)((unsigned __int8)(a4 >> g_BitMask_Green) << g_BitMask_Blue)
           | ((unsigned __int8)((unsigned __int8)(a4 >> g_BitShift_Blue) << g_BitMask_Red) << 8)) << 8),
           a5,
           12,
           0,
           0,
           0);
}
}
// 0x63B0A0
namespace gamemd {
AbstractClass * * sub_63B0A0()
{
  int v1; // esi
  int v2; // edi
  int i; // esi
  int v5; // edi

  dword_AC4C28 = 0; /*0x63b0ad*/
  if ( dword_AC4C1C && byte_AC4C25 ) /*0x63b0bb*/
  {
    RA2_OPDEL(dword_AC4C1C); /*0x63b0be*/
    dword_AC4C1C = 0; /*0x63b0c6*/
  }
  dword_AC4B40 = dword_AC4B40; /*0x63b0cc*/
  v1 = 0; /*0x63b0d2*/
  byte_AC4C25 = 0; /*0x63b0d6*/
  for ( dword_AC4C20 = 0; v1 < dword_AC4B40; ++v1 ) /*0x63b0e2*/
  {
    v2 = *((_DWORD *)dword_AC4B34 + v1); /*0x63b0e9*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(**v2->vtable2 + 540), HouseClass_Player) ) /*0x63b100*/
      RenderScenarioActionLines(v2); /*0x63b10b*/
  }
  g_SidebarState = g_SidebarState; /*0x63b115*/
  for ( i = 0; i < g_SidebarState; ++i ) /*0x63b11f*/
  {
    v5 = *((_DWORD *)g_TechnoClass_Count + i); /*0x63b12d*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(v5 + 540), HouseClass_Player) ) /*0x63b136*/
      ScriptAction::ProcessIdleAction(v5); /*0x63b141*/
  }
}
}
// 0x642BB0
namespace gamemd {
void sub_642BB0(unsigned int a1)
{
  int result; // eax
  unsigned int PlayerColor; // eax

  result = 0; /*0x642bba*/
  if ( (g_GameMode_Current[0] == 3 || g_GameMode_Current[0] == 4) /*0x642bd8*/
    && *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * a1) + 107) == -1 )
  {
    return *((_DWORD *)BuildingTypeClass_AnimTable + SessionClass::GetPlayerColorScheme(0xFFFFFFFE)); /*0x642bed*/
  }
  if ( a1 < 8 ) /*0x642bf5*/
  {
    PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)(Game_PlayerInfoArray + 4 * a1)); /*0x642bff*/
    return *((_DWORD *)BuildingTypeClass_AnimTable + SessionClass::GetPlayerColorScheme(PlayerColor)); /*0x642c15*/
  }
  return result; /*0x642bec*/
}
}
// 0x660000
namespace gamemd {
void sub_660000()
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
      if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x66002a*/
        goto LABEL_6; /*0x66002a*/
      v4 -= (int)g_CurrentFrame - v3; /*0x66002c*/
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
// 0x6603B0
namespace gamemd {
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
        if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x6603e2*/
          goto LABEL_7; /*0x6603e2*/
        v4 -= (int)g_CurrentFrame - v3; /*0x6603e4*/
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
            RA2_OPDEL(v5); /*0x660442*/
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
// 0x7760B0
namespace gamemd {
void Render_Render_7760B0(HDC hdc, const char * a2, LONG a3, LONG a4, char a5)
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
// 0x556D40
namespace gamemd {
void sub_556D40()
{
  int i; // edi
  int *v1; // esi
  int v2; // eax
  int *v3; // [esp+4h] [ebp-4h] BYREF

  for ( i = dword_ABCB88 - 1; i >= 0; --i ) /*0x556d4c*/
  {
    v1 = (int *)*((_DWORD *)dword_ABCB7C + i); /*0x556d59*/
    Render_Render_556B70(v1); /*0x556d5e*/
    if ( v1[1] || v1[4 * v1[3] + 7] ) /*0x556d70*/
    {
      Render_Render_556C00((int)v1); /*0x556dd2*/
    }
    else if ( v1 ) /*0x556d7a*/
    {
      v3 = v1; /*0x556d8c*/
      v2 = (*(int (__thiscall **)(int *, int **))(dword_ABCB78 + 16))(&dword_ABCB78, &v3); /*0x556d90*/
      if ( v2 != -1 && v2 < dword_ABCB88 && v2 < --dword_ABCB88 ) /*0x556dab*/
      {
        do /*0x556dc3*/
        {
          ++v2; /*0x556db3*/
          *((_DWORD *)dword_ABCB7C + v2 - 1) = *((_DWORD *)dword_ABCB7C + v2); /*0x556db7*/
        }
        while ( v2 < dword_ABCB88 ); /*0x556dc3*/
      }
      RA2_OPDEL(v1); /*0x556dc6*/
    }
  }
}
} // namespace gamemd

// 0x5BE970
namespace gamemd {
int sub_5BE970(int a1)
{
  return MouseClass_Cursors[7 * a1]; /*0x5be984*/
}
} // namespace gamemd

// 0x5BE990
namespace gamemd {
int sub_5BE990(int a1)
{
  return dword_82D02C[7 * a1]; /*0x5be9a4*/
}
} // namespace gamemd

// 0x5C0640
namespace gamemd {
char sub_5C0640(const char * a1, char * a2, int a3)
{
  char *v3; // ebp
  char i; // al
  _DWORD *v5; // eax
  char v6; // bl
  _DWORD *v7; // eax
  char v8; // bl
  _DWORD v11[22]; // [esp+14h] [ebp-134h] BYREF
  _BYTE v12[12]; // [esp+6Ch] [ebp-DCh] BYREF
  int v13; // [esp+78h] [ebp-D0h]
  char Source[200]; // [esp+80h] [ebp-C8h] BYREF

  v3 = strcpy(Source, a1); /*0x5c0672*/
  for ( i = Source[0]; i; i = *++v3 ) /*0x5c0684*/
  {
    if ( i == 46 ) /*0x5c0688*/
      break; /*0x5c0688*/
  }
  *v3 = 0; /*0x5c0699*/
  GameOptionsClass::UnlockMovieIfNeeded_MoviesList(g_GameModeOptions, Source); /*0x5c06a3*/
  strcpy(v3, aBik_0); /*0x5c06c9*/
  v5 = CCFileClass::Construct(v11, Source); /*0x5c06d6*/
  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v5 + 20))(v5, 0); /*0x5c06e8*/
  v11[0] = &(void*)(void*)&CCFileClass_vftable; /*0x5c06ea*/
  v13 = 0; /*0x5c06f2*/
  Vector::Clear((int)v12); /*0x5c06fa*/
  v11[0] = &off_7E1668; /*0x5c0703*/
  BufferIOFileClass::Dtor(v11); /*0x5c070b*/
  if ( !v6 ) /*0x5c0712*/
  {
    strcpy(v3, aVqa); /*0x5c0735*/
    v7 = CCFileClass::Construct(v11, Source); /*0x5c0742*/
    v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0); /*0x5c0754*/
    v11[0] = &(void*)(void*)&CCFileClass_vftable; /*0x5c0756*/
    v13 = 0; /*0x5c075e*/
    Vector::Clear((int)v12); /*0x5c0766*/
    v11[0] = &off_7E1668; /*0x5c076f*/
    BufferIOFileClass::Dtor(v11); /*0x5c0777*/
    if ( !v8 ) /*0x5c077e*/
      return 0; /*0x5c07be*/
  }
  if ( a2 ) /*0x5c0786*/
    strcpy(a2, Source); /*0x5c07a3*/
  return 1; /*0x5c07ac*/
}
} // namespace gamemd

// 0x5E8740
namespace gamemd {
BOOL sub_5E8740(int a1)
{
  return wcscmp(*(const wchar_t **)(Game_PlayerInfoArray + 4 * a1), g_CurrentPlayerName) == 0; /*0x5e875b*/
}
} // namespace gamemd

// 0x5FFFA0
namespace gamemd {
char sub_5FFFA0()
{
  char result; // al
  int i; // esi

  result = dword_AC1688; /*0x5fffa0*/
  for ( i = dword_AC1688 - 1; i >= 0; --i ) /*0x5fffab*/
    result = BuildingLight::CalculateShading(*((_DWORD **)dword_AC167C + i)); /*0x5fffb6*/
  return result; /*0x5fffbe*/
}
} // namespace gamemd

// 0x63CA80
namespace gamemd {
unsigned int * sub_63CA80(unsigned int * a1, unsigned char * a2, int a3)
{
  int *ScenarioClassActionCoords; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int *v8; // ecx
  _DWORD v10[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, a2); /*0x63ca90*/
  v5 = *ScenarioClassActionCoords; /*0x63ca92*/
  v6 = ScenarioClassActionCoords[1]; /*0x63ca97*/
  v7 = ScenarioClassActionCoords[2]; /*0x63ca9a*/
  if ( *ScenarioClassActionCoords == -1 && v6 == -1 && v7 == -1 && a3 ) /*0x63caad*/
  {
    v8 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a3 + 88))(a3, v10); /*0x63cab9*/
    v5 = *v8; /*0x63cabb*/
    v6 = v8[1]; /*0x63cabd*/
    v7 = v8[2]; /*0x63cac0*/
  }
  *a1 = v5; /*0x63cac5*/
  a1[1] = v6; /*0x63caca*/
  a1[2] = v7; /*0x63cacd*/
  return a1; /*0x63cac9*/
}
} // namespace gamemd

// 0x660530
namespace gamemd {
bool sub_660530()
{
  return g_TriggerEventState == 0; /*0x66053a*/
}
} // namespace gamemd

// 0x68ED80
namespace gamemd {
int Render_Get(ScoreScreen * aP0)
{
  int v1; // ebp
  int v2; // ebx
  int v4; // esi
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v9; // [esp-4h] [ebp-28h]
  int v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]
  void *othera; // [esp+28h] [ebp+4h]
  float otherb; // [esp+28h] [ebp+4h]

  v1 = 0; /*0x68ed8a*/
  v2 = 0; /*0x68ed8d*/
  v12 = 0; /*0x68ed96*/
  v10 = 0; /*0x68ed9a*/
  if ( HouseClass_Count > 0 ) /*0x68ed9e*/
  {
    do /*0x68ee21*/
    {
      v4 = *(_DWORD *)&HouseClass_Array->gap0[4 * v10]; /*0x68edad*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(aP0, (void *)v4) /*0x68edca*/
        && (unsigned __int8)HouseClass::IsAlliedWith((void *)v4, aP0)
        || aP0 == (void *)v4 )
      {
        v5 = VectorClass::GetCount((_DWORD *)(v4 + 21840)) + v2; /*0x68eddd*/
        v6 = VectorClass::GetCount((_DWORD *)(v4 + 21860)) + v5; /*0x68edea*/
        v7 = VectorClass::GetCount((_DWORD *)(v4 + 21880)) + v6; /*0x68edf7*/
        v2 = VectorClass::GetCount((_DWORD *)(v4 + 21900)) + v7; /*0x68ee0c*/
        v1 += v4->killedBuildingsOfHouses + v4->q5488; /*0x68ee0e*/
      }
      ++v10; /*0x68ee1d*/
    }
    while ( v10 < HouseClass_Count ); /*0x68ee21*/
    v12 = v2; /*0x68ee23*/
  }
  Debug::Log(); /*0x68ee34*/
  if ( v2 + v1 <= 0 ) /*0x68ee3e*/
    v11 = 0.0; /*0x68ee4e*/
  else
    v11 = (double)v12 / (double)(v2 + v1); /*0x68ee48*/
  Debug::Log(); /*0x68ee65*/
  (*(void (__stdcall **)(char *))(*((_DWORD *)aP0 + 9) + 24))((char *)aP0 + 36); /*0x68ee82*/
  Debug::Log(); /*0x68ee8b*/
  othera = (void *)(*((_DWORD *)aP0 + 184) + *((_DWORD *)aP0 + 119)); /*0x68eea3*/
  if ( (int)othera <= 0 ) /*0x68eea7*/
    otherb = 0.0; /*0x68eec1*/
  else
    otherb = (double)(*(int (__stdcall **)(char *))(*((_DWORD *)aP0 + 9) + 24))((char *)aP0 + 36) /*0x68eebb*/
           / (double)(int)othera;
  Debug::Log(); /*0x68eed8*/
  v9 = Math::RoundToInt((otherb + v11) * 0.5 * 100.0); /*0x68eef8*/
  Debug::Log(); /*0x68eefe*/
  return v9; /*0x68ef08*/
}
} // namespace gamemd

// 0x6D9A50
namespace gamemd {
int sub_6D9A50(int a1, int a2, int a3, int a4)
{
  int result; // eax
  _BYTE *v5; // esi
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int i; // [esp+10h] [ebp-28h]
  _BYTE v10[16]; // [esp+28h] [ebp-10h] BYREF

  result = 0; /*0x6d9a5f*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x6d9a69*/
  {
    v5 = *(_BYTE **)(dword_8A0394 + 4 * result); /*0x6d9a75*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) == 6 ) /*0x6d9a82*/
    {
      if ( v5[128] ) /*0x6d9a88*/
      {
        v6 = (int *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v5 + 300))(v5, v10); /*0x6d9a9f*/
        v7 = DSurface_ViewBounds + *v6; /*0x6d9aaf*/
        v8 = g_Map_VisibleRect + v6[1]; /*0x6d9ac4*/
        if ( a1 < v6[2] + v7 && a2 < v6[3] + v8 && a1 + a3 > v7 && a4 + a2 > v8 ) /*0x6d9af2*/
        {
          Cell::CreateCrater(*v6, v6[1], v6[2], v6[3], 0); /*0x6d9b15*/
          v5[128] = 0; /*0x6d9b1a*/
        }
      }
    }
    result = i + 1; /*0x6d9b2b*/
  }
  return result; /*0x6d9b38*/
}
} // namespace gamemd

// 0x72B340
namespace gamemd {
int sub_72B340()
{
  return dword_B0FB80; /*0x72b345*/
}
} // namespace gamemd

// 0x72B360
namespace gamemd {
int sub_72B360()
{
  return dword_B0FB88; /*0x72b365*/
}
} // namespace gamemd

// 0x72B500
namespace gamemd {
int sub_72B500()
{
  return g_PaletteManagerPool; /*0x72b505*/
}
} // namespace gamemd

// 0x72B520
namespace gamemd {
ObjectClass * Render_Render_72B520()
{
  return dword_B0FBA0; /*0x72b525*/
}
} // namespace gamemd

// 0x72E820
namespace gamemd {
void Render_Draw(ConvertClass * a1, int * a2, char a3)
{
  RenderScoreScreen(a1, a2, a3); /*0x72e82b*/
  UI_Draw_72E730(a1, a2, dword_B0FBCC, (int)g_DialogControlPool, (int)dword_B0FA04); /*0x72e848*/
}
} // namespace gamemd

// 0x72EB50
namespace gamemd {
void * sub_72EB50()
{
  void *result; // eax

  dword_B0FAC4 = LoadFileSHP(off_844CD4, (bool *)&byte_B0FC95); /*0x72eb6b*/
  dword_B0F9DC = LoadFileSHP(off_844CD8, (bool *)&byte_B0FC96); /*0x72eb80*/
  dword_B0FAC0 = LoadFileSHP(off_844CDC, (bool *)&byte_B0FC97); /*0x72eb95*/
  g_DialogControlPool = LoadFileSHP(off_844CE0, (bool *)&byte_B0FC98); /*0x72ebaa*/
  dword_B0FA04 = LoadFileSHP(off_844CE4, (bool *)&byte_B0FC99); /*0x72ebbf*/
  dword_B0FAF8 = LoadFileSHP(off_844CE8, (bool *)&byte_B0FC9A); /*0x72ebd4*/
  dword_B0FA74 = LoadFileSHP(off_844CEC, (bool *)&byte_B0FC9B); /*0x72ebe9*/
  dword_B0FA38 = LoadFileSHP(off_844CF0, (bool *)&byte_B0FC9C); /*0x72ebfe*/
  dword_B0FAE8 = LoadFileSHP(off_844CF4, (bool *)&byte_B0FC9D); /*0x72ec13*/
  result = LoadFileSHP(off_844CF8, (bool *)&byte_B0FC9E); /*0x72ec18*/
  dword_B0FA54 = result; /*0x72ec1d*/
  return result; /*0x72ec22*/
}
} // namespace gamemd

// 0x774070
namespace gamemd {
BOOL sub_774070()
{
  return dword_B72D0C && *(_DWORD *)(dword_B72D0C + 8) && *(_BYTE *)(dword_B72D0C + 1036); /*0x77408f*/
}
} // namespace gamemd

// 0x7C3230
namespace gamemd {
int sub_7C3230(int a1, int a2, int a3)
{
  if ( a2 ) /*0x7c3232*/
    *(_DWORD *)(a1 + 1924) = a2; /*0x7c3234*/
  else
    *(_DWORD *)(a1 + 1924) = nullsub_49; /*0x7c323c*/
  if ( a3 ) /*0x7c324c*/
    *(_DWORD *)(a1 + 1928) = a3; /*0x7c324e*/
  else
    *(_DWORD *)(a1 + 1928) = nullsub_49; /*0x7c325a*/
  return -1; /*0x7c3257*/
}
} // namespace gamemd

// 0x7C3690
namespace gamemd {
int sub_7C3690(int a1, int a2)
{
  int result; // eax

  result = -1; /*0x7c3690*/
  if ( a2 > 0 && *(unsigned __int16 *)(a1 + 236) >= a2 ) /*0x7c36a4*/
  {
    result = *(_DWORD *)(a1 + 284); /*0x7c36a6*/
    *(_DWORD *)(a1 + 284) = (unsigned __int16)a2; /*0x7c36b2*/
  }
  return result; /*0x7c36b8*/
}
} // namespace gamemd

// 0x7C3710
namespace gamemd {
int sub_7C3710(unsigned char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
  *a2 = a1[242]; /*0x7c3718*/
  *a3 = a1[243]; /*0x7c3726*/
  *a4 = a1[264]; /*0x7c3734*/
  return -1; /*0x7c3739*/
}
} // namespace gamemd
