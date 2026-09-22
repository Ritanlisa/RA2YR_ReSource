// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x48E620
int Control::DispatchClick(ControlClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Control::DispatchClick(_DWORD *this, ControlClass *aP1)
{
  int v3; // ecx

  v3 = *(this + 10); /*0x48e623*/
  if ( v3 ) /*0x48e628*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 108))(v3, 0); /*0x48e62e*/
  return GadgetClass::ClearState(this, aP1); /*0x48e63d*/
}
}

// 0x60B950
char Control::RepositionControlsDialog()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Control::RepositionControlsDialog(HWND this)
{
  HWND Parent; // esi
  int v3; // ebp
  _DWORD *v4; // eax
  void *v5; // esi
  int DlgCtrlID; // edi
  char result; // al
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // eax
  int X; // [esp+10h] [ebp-3Ch]
  int nWidth; // [esp+14h] [ebp-38h]
  int nHeight; // [esp+18h] [ebp-34h]
  HWND v14; // [esp+1Ch] [ebp-30h] BYREF
  HWND hWnda; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  struct tagRECT v18; // [esp+2Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+3Ch] [ebp-10h] BYREF

  hWnda = this; /*0x60b95a*/
  Parent = GetParent(this); /*0x60b96a*/
  GetWindowRect(Parent, &Rect); /*0x60b972*/
  GetWindowRect(this, &v18); /*0x60b97a*/
  X = v18.left - Rect.left; /*0x60b996*/
  nHeight = v18.bottom - v18.top; /*0x60b9a2*/
  v3 = v18.top - Rect.top; /*0x60b9ab*/
  nWidth = v18.right - v18.left; /*0x60b9ad*/
  v14 = Parent; /*0x60b9b3*/
  if ( !g_DialogHashMap_Count ) /*0x60b9b7*/
    goto LABEL_5; /*0x60b9b7*/
  v4 = (_DWORD *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v14) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x60b9d8*/
  if ( !v4 ) /*0x60b9dd*/
    goto LABEL_5; /*0x60b9dd*/
  while ( (HWND)*v4 != v14 ) /*0x60b9e5*/
  {
    v4 = (_DWORD *)v4[129]; /*0x60b9eb*/
    if ( !v4 ) /*0x60b9f3*/
      goto LABEL_5; /*0x60b9f3*/
  }
  v9 = v4 + 1; /*0x60bd04*/
  if ( v9 ) /*0x60bd09*/
    v5 = (void *)v9[27]; /*0x60bd0f*/
  else
LABEL_5:
    v5 = 0; /*0x60b9f5*/
  DlgCtrlID = GetDlgCtrlID(hWnda); /*0x60ba02*/
  result = nHeight; /*0x60ba0e*/
  v8 = X; /*0x60ba12*/
  v14 = (HWND)v3; /*0x60ba16*/
  v16 = nWidth; /*0x60ba1a*/
  v17 = nHeight; /*0x60ba1e*/
  if ( (v5 == (void *)268 /*0x60bb63*/
     || v5 == (void *)148
     || v5 == (void *)163
     || v5 == (void *)115
     || v5 == (void *)216
     || v5 == (void *)3003
     || v5 == (void *)245
     || v5 == (void *)261
     || v5 == (void *)226
     || v5 == (void *)213
     || v5 == (void *)693
     || v5 == (void *)183
     || v5 == (void *)692
     || v5 == (void *)3015
     || v5 == (void *)257
     || v5 == (void *)297
     || v5 == (void *)3014
     || v5 == (void *)215
     || v5 == (void *)264
     || v5 == (void *)188
     || v5 == (void *)189
     || v5 == (void *)187
     || v5 == (void *)181
     || v5 == (void *)3002
     || v5 == (void *)255
     || v5 == (void *)107
     || v5 == (void *)256
     || v5 == (void *)258
     || v5 == (void *)184
     || v5 == (void *)214
     || v5 == (void *)259
     || (result = Dialog::IsSpecialTemplate(v5)) != 0)
    && DlgCtrlID == 1684 )
  {
    if ( v5 == (void *)268 /*0x60bc38*/
      || v5 == (void *)148
      || v5 == (void *)163
      || v5 == (void *)115
      || v5 == (void *)216
      || v5 == (void *)3003
      || v5 == (void *)245
      || v5 == (void *)261
      || v5 == (void *)226
      || v5 == (void *)213
      || v5 == (void *)693
      || v5 == (void *)183
      || v5 == (void *)692
      || v5 == (void *)3015
      || v5 == (void *)257
      || v5 == (void *)297
      || v5 == (void *)3014
      || v5 == (void *)215
      || v5 == (void *)264 )
    {
      goto LABEL_74; /*0x60bc38*/
    }
    if ( v5 == (void *)188 ) /*0x60bc40*/
    {
LABEL_75:
      result = SessionClass::GetGameSpeed(g_GameMode_Current); /*0x60bce4*/
      if ( result ) /*0x60bcf0*/
        return result; /*0x60bcf0*/
      ++v3; /*0x60bcf6*/
      goto LABEL_170; /*0x60bcf7*/
    }
    if ( v5 == (void *)189 /*0x60bc99*/
      || v5 == (void *)187
      || v5 == (void *)181
      || v5 == (void *)3002
      || v5 == (void *)255
      || v5 == (void *)107
      || v5 == (void *)256
      || v5 == (void *)258
      || v5 == (void *)184
      || v5 == (void *)214
      || v5 == (void *)259 )
    {
LABEL_74:
      if ( v5 == (void *)189 || v5 == (void *)258 || v5 == (void *)3014 || v5 == (void *)261 || v5 == (void *)107 ) /*0x60bcda*/
        goto LABEL_75; /*0x60bcda*/
      result = SessionClass::GetGameSpeed(g_GameMode_Current); /*0x60bd1c*/
      if ( result ) /*0x60bd23*/
        return result; /*0x60bd23*/
      v3 += 7; /*0x60bd2d*/
      ++nHeight; /*0x60bd31*/
    }
    else
    {
      if ( v5 != (void *)293 /*0x60bdfc*/
        && v5 != (void *)231
        && v5 != (void *)278
        && (v5 == (void *)194
         || v5 != (void *)201
         && v5 != (void *)285
         && v5 != (void *)284
         && v5 != (void *)276
         && v5 != (void *)700
         && v5 != (void *)275
         && v5 != (void *)265
         && v5 != (void *)271
         && v5 != (void *)279
         && v5 != (void *)230
         && v5 != (void *)243
         && v5 != (void *)244
         && v5 != (void *)270
         && v5 != (void *)274)
        || v5 == (void *)201
        || v5 == (void *)275 )
      {
        return result; /*0x60bdfc*/
      }
      v3 += 2; /*0x60be02*/
    }
LABEL_170:
    if ( (HWND)v3 == v14 ) /*0x60c078*/
      goto LABEL_171; /*0x60c078*/
    return MoveWindow(hWnda, X, v3, nWidth, nHeight, 0); /*0x60c0a9*/
  }
  if ( v5 == (void *)258 ) /*0x60be10*/
  {
    if ( DlgCtrlID == 1292 ) /*0x60be18*/
    {
      --v3; /*0x60be1a*/
      goto LABEL_170; /*0x60be1b*/
    }
    if ( DlgCtrlID != 1358 && DlgCtrlID != 1683 && DlgCtrlID != 1686 && DlgCtrlID != 1690 ) /*0x60be4a*/
    {
      if ( DlgCtrlID != 1696 ) /*0x60be56*/
        return result; /*0x60be56*/
      ++X; /*0x60be66*/
      ++nWidth; /*0x60be6a*/
LABEL_169:
      if ( X != v8 ) /*0x60c072*/
        return MoveWindow(hWnda, X, v3, nWidth, nHeight, 0); /*0x60c072*/
      goto LABEL_170; /*0x60c072*/
    }
    goto LABEL_167; /*0x60be4a*/
  }
  if ( v5 == (void *)187 ) /*0x60be79*/
  {
    if ( DlgCtrlID != 1344 ) /*0x60be81*/
      return result; /*0x60be81*/
    --nWidth; /*0x60be87*/
  }
  else if ( v5 == (void *)188 || v5 == (void *)189 ) /*0x60bea2*/
  {
    if ( DlgCtrlID != 1343 ) /*0x60c027*/
    {
      if ( DlgCtrlID == 1359 ) /*0x60c035*/
      {
        --v3; /*0x60c037*/
        goto LABEL_170; /*0x60c038*/
      }
      if ( DlgCtrlID != 1358 && DlgCtrlID != 1000 && DlgCtrlID != 1357 && DlgCtrlID != 1690 ) /*0x60c058*/
      {
        if ( DlgCtrlID != 1026 ) /*0x60c060*/
          return result; /*0x60c060*/
        --v3; /*0x60c062*/
        goto LABEL_170; /*0x60c063*/
      }
LABEL_167:
      v10 = X - 1; /*0x60c065*/
      goto LABEL_168; /*0x60c069*/
    }
    ++nWidth; /*0x60c029*/
  }
  else
  {
    if ( v5 == (void *)259 ) /*0x60beae*/
    {
      if ( DlgCtrlID != 1779 /*0x60beee*/
        && DlgCtrlID != 1780
        && DlgCtrlID != 1695
        && DlgCtrlID != 1782
        && DlgCtrlID != 1775
        && DlgCtrlID != 1777
        && DlgCtrlID != 1776
        && DlgCtrlID != 1778 )
      {
        return result; /*0x60beee*/
      }
      result = 32; /*0x60befa*/
      if ( g_DDraw_Active < 800 ) /*0x60bf01*/
        return result; /*0x60bf01*/
      v3 -= 50; /*0x60bf20*/
      goto LABEL_170; /*0x60bf22*/
    }
    if ( v5 == (void *)3015 ) /*0x60bf2d*/
      return result; /*0x60bf2d*/
    if ( v5 == (void *)264 ) /*0x60bf39*/
    {
      if ( DlgCtrlID == 1939 || DlgCtrlID == 1940 || DlgCtrlID == 1938 || DlgCtrlID == 1941 ) /*0x60bf5d*/
        ++v3; /*0x60bf5f*/
      if ( DlgCtrlID == 1943 || DlgCtrlID == 1942 || DlgCtrlID == 1944 ) /*0x60bf76*/
        v3 += 2; /*0x60bf78*/
      if ( DlgCtrlID != 1936 /*0x60bfc9*/
        && DlgCtrlID != 1937
        && DlgCtrlID != 1935
        && DlgCtrlID != 1938
        && DlgCtrlID != 1939
        && DlgCtrlID != 1940
        && DlgCtrlID != 1941
        && DlgCtrlID != 1942
        && DlgCtrlID != 1943
        && DlgCtrlID != 1944 )
      {
        goto LABEL_170; /*0x60bfc9*/
      }
      v10 = X + 1; /*0x60bfd3*/
      goto LABEL_168; /*0x60bfd4*/
    }
    if ( v5 != (void *)275 ) /*0x60bfdf*/
    {
      if ( v5 != (void *)270 || DlgCtrlID != 1951 ) /*0x60c014*/
        return result; /*0x60c014*/
      v10 = X + 1; /*0x60c01e*/
      goto LABEL_168; /*0x60c01f*/
    }
    if ( DlgCtrlID == 1896 ) /*0x60bfe7*/
    {
      v10 = X + 1; /*0x60bfed*/
LABEL_168:
      X = v10; /*0x60c06a*/
      goto LABEL_169; /*0x60c06a*/
    }
    if ( DlgCtrlID != 1343 ) /*0x60bff6*/
      return result; /*0x60bff6*/
    --nWidth; /*0x60bffc*/
  }
LABEL_171:
  if ( nWidth != v16 ) /*0x60c084*/
    return MoveWindow(hWnda, X, v3, nWidth, nHeight, 0); /*0x60c084*/
  result = nHeight; /*0x60c08a*/
  if ( nHeight != v17 ) /*0x60c090*/
    return MoveWindow(hWnda, X, v3, nWidth, nHeight, 0); /*0x60c090*/
  return result; /*0x60c0af*/
}
}

// 0x60C540
char Control::CheckControlTypeDialog()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Dialog_CheckControlType(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  void *v5; // [esp+4h] [ebp-4h] BYREF

  v5 = this; /*0x60c549*/
  if ( !g_DialogHashMap_Count ) /*0x60c54d*/
    return 0; /*0x60c54d*/
  v1 = (_DWORD *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v5) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x60c570*/
  if ( !v1 ) /*0x60c575*/
    return 0; /*0x60c575*/
  while ( (void *)*v1 != v5 ) /*0x60c57d*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60c57f*/
    if ( !v1 ) /*0x60c587*/
      return 0; /*0x60c58d*/
  }
  v3 = v1 + 1; /*0x60c592*/
  if ( v1 == (_DWORD *)-4 ) /*0x60c597*/
    return 0; /*0x60c599*/
  v4 = v1[28]; /*0x60c59e*/
  if ( v4 != 268 /*0x60c7b0*/
    && v4 != 148
    && v4 != 182
    && v4 != 163
    && v4 != 115
    && v4 != 216
    && v4 != 3003
    && v4 != 245
    && v4 != 261
    && v4 != 213
    && v4 != 226
    && v4 != 693
    && v4 != 183
    && v4 != 692
    && v4 != 257
    && v4 != 297
    && v4 != 3014
    && v4 != 3015
    && v4 != 267
    && v4 != 215
    && v4 != 264
    && v4 != 188
    && v4 != 189
    && v4 != 187
    && v4 != 181
    && v4 != 3002
    && v4 != 255
    && v4 != 234
    && v4 != 107
    && v4 != 256
    && v4 != 258
    && v4 != 184
    && v4 != 214
    && v4 != 259
    && v4 != 212
    && v4 != 293
    && v4 != 290
    && v4 != 274
    && v4 != 231
    && v4 != 278
    && v4 != 194
    && v4 != 201
    && v4 != 275
    && v4 != 254
    && v4 != 271
    && v4 != 285
    && v4 != 284
    && v4 != 279
    && v4 != 276
    && v4 != 230
    && v4 != 243
    && v4 != 244
    && v4 != 700
    && v4 != 270
    && v4 != 251 )
  {
    return 0; /*0x60c7b2*/
  }
  v3[44] = 1; /*0x60c7b9*/
  *((_BYTE *)v3 + 189) = 1; /*0x60c7bf*/
  return 1; /*0x60c58b*/
}
}
