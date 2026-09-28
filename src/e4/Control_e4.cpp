// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Control_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CoopCampaignVector_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"

// 0x48E620
namespace gamemd {
int Control::DispatchClick(ControlClass * aP1)
{
  int v3; // ecx

  v3 = this->u32_28; /*0x48e623*/
  if ( v3 ) /*0x48e628*/
    (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)v3 + 108))(v3, 0); /*0x48e62e*/
  return GadgetClass::ClearState(aP1); /*0x48e63d*/
}
} // namespace gamemd
// 0x60B950
namespace gamemd {
int Control::RepositionControlsDialog()
{
  HWND Parent; // esi
  int v3; // ebp
  unsigned int *v4; // eax
  Dialog *v5; // esi
  int DlgCtrlID; // edi
  int result; // eax
  int v8; // ebx
  unsigned int *v9; // eax
  int v10; // eax
  int X; // [esp+10h] [ebp-3Ch]
  int nWidth; // [esp+14h] [ebp-38h]
  int nHeight; // [esp+18h] [ebp-34h]
  HWND v14; // [esp+1Ch] [ebp-30h] BYREF
  HWND hWnd; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  struct tagRECT v18; // [esp+2Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+3Ch] [ebp-10h] BYREF

  hWnd = (HWND)this; /*0x60b95a*/
  Parent = GetParent((HWND)this); /*0x60b96a*/
  GetWindowRect(Parent, &Rect); /*0x60b972*/
  GetWindowRect(&v18); /*0x60b97a*/
  X = v18.left - Rect.left; /*0x60b996*/
  nHeight = v18.bottom - v18.top; /*0x60b9a2*/
  v3 = v18.top - Rect.top; /*0x60b9ab*/
  nWidth = v18.right - v18.left; /*0x60b9ad*/
  v14 = Parent; /*0x60b9b3*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60b9b7*/
    goto LABEL_5; /*0x60b9b7*/
  v4 = *(unsigned int **)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60b9d8*/
                  + 4
                  * ((*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_208[80])(&v14)
                   & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v4 ) /*0x60b9dd*/
    goto LABEL_5; /*0x60b9dd*/
  while ( (HWND)*v4 != v14 ) /*0x60b9e5*/
  {
    v4 = (unsigned int *)v4[129]; /*0x60b9eb*/
    if ( !v4 ) /*0x60b9f3*/
      goto LABEL_5; /*0x60b9f3*/
  }
  v9 = v4 + 1; /*0x60bd04*/
  if ( v9 ) /*0x60bd09*/
    v5 = (Dialog *)v9[27]; /*0x60bd0f*/
  else
  LABEL_5:
    v5 = 0; /*0x60b9f5*/
  DlgCtrlID = GetDlgCtrlID(hWnd); /*0x60ba02*/
  result = nHeight; /*0x60ba0e*/
  v8 = X; /*0x60ba12*/
  v14 = (HWND)v3; /*0x60ba16*/
  v16 = nWidth; /*0x60ba1a*/
  v17 = nHeight; /*0x60ba1e*/
  if ( v5 == (Dialog *)268 /*0x60bb57*/
    || v5 == (Dialog *)148
    || v5 == (Dialog *)163
    || v5 == (Dialog *)115
    || v5 == (Dialog *)216
    || v5 == (Dialog *)3003
    || v5 == (Dialog *)245
    || v5 == (Dialog *)261
    || v5 == (Dialog *)226
    || v5 == (Dialog *)213
    || v5 == (Dialog *)693
    || v5 == (Dialog *)183
    || v5 == (Dialog *)692
    || v5 == (Dialog *)3015
    || v5 == (Dialog *)257
    || v5 == (Dialog *)297
    || v5 == (Dialog *)3014
    || v5 == (Dialog *)215
    || v5 == (Dialog *)264
    || v5 == (Dialog *)188
    || v5 == (Dialog *)189
    || v5 == (Dialog *)187
    || v5 == (Dialog *)181
    || v5 == (Dialog *)3002
    || v5 == (Dialog *)255
    || v5 == (Dialog *)107
    || v5 == (Dialog *)256
    || v5 == (Dialog *)258
    || v5 == (Dialog *)184
    || v5 == (Dialog *)214
    || v5 == (Dialog *)259
    || (result = Dialog::IsSpecialTemplate(v5), (unsigned char)result) )
  {
    if ( DlgCtrlID == 1684 ) /*0x60bb63*/
    {
      if ( v5 == (Dialog *)268 /*0x60bc38*/
        || v5 == (Dialog *)148
        || v5 == (Dialog *)163
        || v5 == (Dialog *)115
        || v5 == (Dialog *)216
        || v5 == (Dialog *)3003
        || v5 == (Dialog *)245
        || v5 == (Dialog *)261
        || v5 == (Dialog *)226
        || v5 == (Dialog *)213
        || v5 == (Dialog *)693
        || v5 == (Dialog *)183
        || v5 == (Dialog *)692
        || v5 == (Dialog *)3015
        || v5 == (Dialog *)257
        || v5 == (Dialog *)297
        || v5 == (Dialog *)3014
        || v5 == (Dialog *)215
        || v5 == (Dialog *)264 )
      {
        goto LABEL_74; /*0x60bc38*/
      }
      if ( v5 == (Dialog *)188 ) /*0x60bc40*/
      {
  LABEL_75:
        result = SessionClass::GetGameSpeed((SessionClass *)&unk_A8B238); /*0x60bce4*/
        if ( (unsigned char)result ) /*0x60bcf0*/
          return result; /*0x60bcf0*/
        ++v3; /*0x60bcf6*/
        goto LABEL_170; /*0x60bcf7*/
      }
      if ( v5 == (Dialog *)189 /*0x60bc99*/
        || v5 == (Dialog *)187
        || v5 == (Dialog *)181
        || v5 == (Dialog *)3002
        || v5 == (Dialog *)255
        || v5 == (Dialog *)107
        || v5 == (Dialog *)256
        || v5 == (Dialog *)258
        || v5 == (Dialog *)184
        || v5 == (Dialog *)214
        || v5 == (Dialog *)259 )
      {
  LABEL_74:
        if ( v5 == (Dialog *)189 /*0x60bcda*/
          || v5 == (Dialog *)258
          || v5 == (Dialog *)3014
          || v5 == (Dialog *)261
          || v5 == (Dialog *)107 )
        {
          goto LABEL_75; /*0x60bcda*/
        }
        result = SessionClass::GetGameSpeed((SessionClass *)&unk_A8B238); /*0x60bd1c*/
        if ( (unsigned char)result ) /*0x60bd23*/
          return result; /*0x60bd23*/
        v3 += 7; /*0x60bd2d*/
        ++nHeight; /*0x60bd31*/
      }
      else
      {
        if ( v5 != (Dialog *)293 /*0x60bdfc*/
          && v5 != (Dialog *)231
          && v5 != (Dialog *)278
          && (v5 == (Dialog *)194
           || v5 != (Dialog *)201
           && v5 != (Dialog *)285
           && v5 != (Dialog *)284
           && v5 != (Dialog *)276
           && v5 != (Dialog *)700
           && v5 != (Dialog *)275
           && v5 != (Dialog *)265
           && v5 != (Dialog *)271
           && v5 != (Dialog *)279
           && v5 != (Dialog *)230
           && v5 != (Dialog *)243
           && v5 != (Dialog *)244
           && v5 != (Dialog *)270
           && v5 != (Dialog *)274)
          || v5 == (Dialog *)201
          || v5 == (Dialog *)275 )
        {
          return result; /*0x60bdfc*/
        }
        v3 += 2; /*0x60be02*/
      }
  LABEL_170:
      if ( (HWND)v3 == v14 ) /*0x60c078*/
        goto LABEL_171; /*0x60c078*/
      return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c0a9*/
    }
  }
  if ( v5 == (Dialog *)258 ) /*0x60be10*/
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
        return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c072*/
      goto LABEL_170; /*0x60c072*/
    }
    goto LABEL_167; /*0x60be4a*/
  }
  if ( v5 == (Dialog *)187 ) /*0x60be79*/
  {
    if ( DlgCtrlID != 1344 ) /*0x60be81*/
      return result; /*0x60be81*/
    --nWidth; /*0x60be87*/
  }
  else if ( v5 == (Dialog *)188 || v5 == (Dialog *)189 ) /*0x60bea2*/
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
    if ( v5 == (Dialog *)259 ) /*0x60beae*/
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
      result = 800; /*0x60befa*/
      if ( (int)g_DisplayWidth < 800 ) /*0x60bf01*/
        return result; /*0x60bf01*/
      v3 -= 50; /*0x60bf20*/
      goto LABEL_170; /*0x60bf22*/
    }
    if ( v5 == (Dialog *)3015 ) /*0x60bf2d*/
      return result; /*0x60bf2d*/
    if ( v5 == (Dialog *)264 ) /*0x60bf39*/
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
    if ( v5 != (Dialog *)275 ) /*0x60bfdf*/
    {
      if ( v5 != (Dialog *)270 || DlgCtrlID != 1951 ) /*0x60c014*/
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
    return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c084*/
  result = nHeight; /*0x60c08a*/
  if ( nHeight != v17 ) /*0x60c090*/
    return MoveWindow(hWnd, X, v3, nWidth, nHeight, 0); /*0x60c090*/
  return result; /*0x60c0af*/
}
} // namespace gamemd
// 0x60C540
namespace gamemd {
int Control::CheckControlTypeDialog()
{
  int result; // eax
  int v2; // ecx
  Control *v3; // [esp+4h] [ebp-4h] BYREF

  result = *(unsigned int *)&g_DialogPool.__pad_208[60]; /*0x60c541*/
  v3 = this; /*0x60c549*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60c54d*/
    goto LABEL_7; /*0x60c54d*/
  result = *(unsigned int *)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60c570*/
                     + 4
                     * ((*(int (__thiscall **)(Control **))&g_DialogPool.__pad_208[80])(&v3)
                      & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !result ) /*0x60c575*/
    goto LABEL_7; /*0x60c575*/
  while ( *(Control **)result != v3 ) /*0x60c57d*/
  {
    result = *(unsigned int *)(result + 516); /*0x60c57f*/
    if ( !result ) /*0x60c587*/
    {
      IDA_LOBYTE(result) = 0; /*0x60c589*/
      return result; /*0x60c58d*/
    }
  }
  v2 = result + 4; /*0x60c592*/
  if ( result != -4 ) /*0x60c597*/
  {
    result = *(unsigned int *)(result + 112); /*0x60c59e*/
    if ( result == 268 /*0x60c7b0*/
      || result == 148
      || result == 182
      || result == 163
      || result == 115
      || result == 216
      || result == 3003
      || result == 245
      || result == 261
      || result == 213
      || result == 226
      || result == 693
      || result == 183
      || result == 692
      || result == 257
      || result == 297
      || result == 3014
      || result == 3015
      || result == 267
      || result == 215
      || result == 264
      || result == 188
      || result == 189
      || result == 187
      || result == 181
      || result == 3002
      || result == 255
      || result == 234
      || result == 107
      || result == 256
      || result == 258
      || result == 184
      || result == 214
      || result == 259
      || result == 212
      || result == 293
      || result == 290
      || result == 274
      || result == 231
      || result == 278
      || result == 194
      || result == 201
      || result == 275
      || result == 254
      || result == 271
      || result == 285
      || result == 284
      || result == 279
      || result == 276
      || result == 230
      || result == 243
      || result == 244
      || result == 700
      || result == 270
      || result == 251 )
    {
      IDA_LOBYTE(result) = 1; /*0x60c7b7*/
      *(unsigned int *)(v2 + 176) = 1; /*0x60c7b9*/
      *(unsigned char *)(v2 + 189) = 1; /*0x60c7bf*/
    }
    else
    {
      IDA_LOBYTE(result) = 0; /*0x60c7b2*/
    }
  }
  else
  {
  LABEL_7:
    IDA_LOBYTE(result) = 0; /*0x60c599*/
  }
  return result; /*0x60c58b*/
}
} // namespace gamemd