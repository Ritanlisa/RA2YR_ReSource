#include "printtimerontactical.hpp"

int *__fastcall PrintTimerOnTactical::Start(int a1, int a2, int a3, wchar_t *Format, uint32_t *a5, bool *a6)
{
    uint32_t *Instance; // ebx
    int v7; // edi
    int v8; // ebp
    int v9; // ebp
    int v10; // edi
    unsigned __int64 v11; // rax
    int v12; // eax
    bool v13; // cf
    bool *v14; // eax
    int v15; // edx
    int v16; // esi
    uint32_t *v17; // eax
    uint32_t *v18; // eax
    int v20; // [esp-10h] [ebp-654h]
    int v21; // [esp-Ch] [ebp-650h]
    int v22; // [esp-8h] [ebp-64Ch]
    int v23; // [esp-4h] [ebp-648h]
    int v24; // [esp-4h] [ebp-648h]
    int v25; // [esp+0h] [ebp-644h]
    int v26; // [esp+10h] [ebp-634h] BYREF
    wchar_t *v27; // [esp+14h] [ebp-630h]
    int v28; // [esp+18h] [ebp-62Ch]
    int v29; // [esp+1Ch] [ebp-628h] BYREF
    int v30; // [esp+20h] [ebp-624h] BYREF
    uint32_t v31[3]; // [esp+24h] [ebp-620h] BYREF
    int v32; // [esp+30h] [ebp-614h] BYREF
    int v33; // [esp+34h] [ebp-610h] BYREF
    char v34[12]; // [esp+38h] [ebp-60Ch] BYREF
    wchar_t v35[256]; // [esp+44h] [ebp-600h] BYREF
    wchar_t v36; // [esp+244h] [ebp-400h] BYREF
    char v37[508]; // [esp+248h] [ebp-3FCh] BYREF
    wchar_t Buffer[256]; // [esp+444h] [ebp-200h] BYREF
    v29 = a1;
    v28 = a2;
    Instance = (uint32_t *)TextRenderer::GetInstance();
    v7 = a3 / 60 / 60;
    v8 = a3 % 60;
    v23 = a3 % 60;
    v27 = (wchar_t *)(a3 / 60 % 60);
    if ( v7 )
    swprintf(Buffer, (const size_t)&off_842AD8, Format, a3 / 60 / 60, v27, v23);
    swprintf(&v36, (const size_t)&off_842ACC, Format);
    swprintf(v35, (const size_t)&off_842AB0, (const wchar_t *const)v7, v27, v8);
    else
    swprintf(Buffer, (const size_t)&off_842A94, Format, v27, v23);
    swprintf(&v36, (const size_t)&off_842ACC, Format);
    swprintf(v35, (const size_t)a02d02d, v27, v8);
    v26 = 0;
    Text::Layout(Instance, v35, &v26, 0, g_Map_VisibleRectOffset);
    v9 = v28;
    v10 = v28;
    if ( !a3 && a5 && a6 )
    LODWORD(v11) = Audio::Callback();
    if ( *(_QWORD *)a5 > v11 )
    v14 = a6;
    else
    v12 = Audio::Callback();
    v13 = __CFADD__(v12, 1000);
    *a5 = v12 + 1000;
    v14 = a6;
    a5[1] = v13 + v15;
    *a6 = !*a6;
    if ( *v14 )
    v10 = *((uint32_t *)BuildingTypeClass_AnimTable + 5);
    v16 = v29 + 1;
    v31[1] = g_DSurface_WindowOffset - (v29 + 1) * (Instance[7] + 2);
    v31[0] = g_Map_VisibleRectOffset - v26 - 3;
    v17 = (uint32_t *)(*(int (__thiscall **)(int, int *, uint32_t *))(*(uint32_t *)DSurface_Composite + 120))(
    DSurface_Composite,
    &v33,
    v31);
    TextRenderer::DrawText(&v30, (size_t)v37, DSurface_Composite, v17, v9, 0, 17944, v25);
    v33 = g_DSurface_WindowOffset - v16 * (Instance[7] + 2);
    v32 = g_Map_VisibleRectOffset - 3;
    v18 = (uint32_t *)(*(int (__thiscall **)(int, char *, int *, int, uint32_t, int))(*(uint32_t *)DSurface_Composite + 120))(
    DSurface_Composite,
    v34,
    &v32,
    v10,
    0,
    17944);
    return TextRenderer::DrawText(&v29, (size_t)v35, DSurface_Composite, v18, v20, v21, v22, v24);
}

