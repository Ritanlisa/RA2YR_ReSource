#include "binkmovie.hpp"

// 0x006033F0
int __fastcall BinkMovie::HandleKeyboard(int a1, HWND a2)
{
    uint32_t *v3; // eax
    int v4; // esi
    int DlgCtrlID; // eax
    bool v6; // zf
    uint32_t *v7; // eax
    int v9; // [esp+8h] [ebp-4h] BYREF
    v9 = a1;
    if ( !g_DialogHashMap_Count )
    goto LABEL_5;
    v3 = (uint32_t *)*((uint32_t *)g_DialogHashMap_Base + (g_DialogHashMap_Hasher(&v9) & ((1 << g_DialogHashMap_Buckets) - 1)));
    if ( !v3 )
    goto LABEL_5;
    while ( *v3 != v9 )
    v3 = (uint32_t *)v3[129];
    if ( !v3 )
    goto LABEL_5;
    v7 = v3 + 1;
    if ( v7 )
    v4 = v7[27];
    else
    LABEL_5:
    v4 = 0;
    DlgCtrlID = GetDlgCtrlID(a2);
    if ( (v4 == 148
    || v4 == 216
    || v4 == 245
    || v4 == 226
    || v4 == 213
    || v4 == 257
    || v4 == 297
    || v4 == 215
    || v4 == 187
    || v4 == 256
    || v4 == 214
    || v4 == 293
    || v4 == 290
    || v4 == 274
    || v4 == 231
    || v4 == 278
    || v4 == 285
    || v4 == 284
    || v4 == 254
    || v4 == 271
    || v4 == 279
    || v4 == 276
    || v4 == 230
    || v4 == 243
    || v4 == 244
    || v4 == 700
    || v4 == 270
    || v4 == 264
    || v4 == 3014
    || v4 == 3015)
    && DlgCtrlID == 1820 )
    return 100;
    if ( v4 == 148 )
    if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 )
    return 100;
    v6 = DlgCtrlID == 1771;
    LABEL_46:
    if ( v6 )
    return 100;
    return 0;
    if ( v4 == 259 || v4 == 3015 )
    v6 = DlgCtrlID == 1835;
    goto LABEL_46;
    if ( v4 == 196 && DlgCtrlID == 1961 )
    return 50;
    return 0;
}

