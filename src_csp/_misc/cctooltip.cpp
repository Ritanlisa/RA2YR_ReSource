#include "cctooltip.hpp"

// 0x00478BA0
char  CCToolTip::CalculatePopupPosition(uint32_t *this, uint32_t *a2)
{
    int *v2; // esi
    int *v3; // edi
    int v4; // eax
    int v5; // ebp
    char *v6; // ecx
    bool v7; // cc
    char *v8; // edx
    int v9; // ecx
    int v10; // eax
    char *v11; // ecx
    char *v12; // eax
    int v13; // eax
    int *v14; // eax
    int v15; // ecx
    int v16; // ebx
    int v17; // eax
    int v18; // edi
    int v19; // eax
    int v21; // eax
    int v22; // ecx
    int v23; // eax
    int v24; // [esp+0h] [ebp-1Ch] BYREF
    uint32_t *v25; // [esp+4h] [ebp-18h]
    uint32_t *v26; // [esp+8h] [ebp-14h]
    int v27; // [esp+14h] [ebp-8h]
    int v28; // [esp+18h] [ebp-4h]
    v26 = this;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 40))(WWMouseClass_Instance) >= 0 )
    v25 = (uint32_t *)g_FogOfWarState;
    if ( byte_A8EB7C == 1 )
    v2 = a2;
    if ( *a2 > DSurface_ViewBounds + g_Map_VisibleRectOffset )
    v3 = &DSurface_SidebarBounds;
    byte_884B8E = 1;
    goto LABEL_8;
    else
    v2 = a2;
    if ( *a2 <= DSurface_SidebarBounds + dword_886F98 )
    v3 = &DSurface_SidebarBounds;
    byte_884B8E = 1;
    goto LABEL_8;
    v3 = &DSurface_ViewBounds;
    LABEL_8:
    if ( v3 )
    Text::Layout((uint32_t *)g_FogOfWarState, (unsigned __int16 *)v2 + 8, &v24, &a2, v3[2]);
    v4 = v2[2];
    v5 = v24 + 4;
    v6 = (char *)a2 + 3;
    v7 = v24 + 4 <= v4;
    v24 += 4;
    a2 = (uint32_t *)((char *)a2 + 3);
    if ( !v7 )
    v4 = v5;
    v8 = (char *)v2[3];
    v2[2] = v4;
    if ( (int)v6 <= (int)v8 )
    v6 = v8;
    v2[3] = (int)v6;
    v9 = v3[2];
    if ( v4 >= v9 )
    Text::Layout(v25, (unsigned __int16 *)v2 + 8, &v24, &a2, v9 - 4);
    v10 = v2[2];
    v5 = v24 + 4;
    v11 = (char *)a2 + 3;
    v7 = v24 + 4 <= v10;
    v24 += 4;
    a2 = (uint32_t *)((char *)a2 + 3);
    if ( !v7 )
    v10 = v5;
    v2[2] = v10;
    v12 = (char *)v2[3];
    if ( (int)v11 > (int)v12 )
    v12 = v11;
    v2[3] = (int)v12;
    v13 = v26[1];
    if ( v13 && *(uint8_t *)(v13 + 24) )
    v14 = (int *)(v13 + 4);
    v15 = *v14;
    v16 = v14[1];
    v27 = v14[2];
    v28 = v14[3];
    if ( v15 >= *v3 + v3[2] / 2 )
    *v2 = v15 - v5 + 5;
    else
    *v2 = v27 + v15 - 5;
    v17 = *v3;
    if ( *v3 <= *v2 )
    v17 = *v2;
    *v2 = v17;
    if ( v16 >= v3[1] + v3[3] / 2 )
    v2[1] = v16 - (uint32_t)a2 + 5;
    else
    v2[1] = v28 + v16 - 5;
    v18 = v3[1];
    v19 = v2[1];
    if ( v18 > v19 )
    v2[1] = v18;
    return 1;
    else
    v21 = v2[2] + *v2 - *v3 - v3[2];
    if ( v21 > 0 )
    *v2 -= v21;
    v22 = v2[3];
    v23 = v2[1] + 16;
    v2[1] = v23;
    if ( v22 + v23 - v3[3] - v3[1] <= 0 )
    return 1;
    v19 = v23 - v22 - 16;
    v2[1] = v19;
    return 1;
    return 0;
}

int  CCToolTip::_vt02(uint32_t *this, uint32_t *a2)
{
    int v3; // esi
    if ( byte_A8EB7C == 1 )
    v3 = (int)a2;
    if ( *a2 >= DSurface_ViewBounds + g_Map_VisibleRectOffset )
    goto LABEL_5;
    else
    v3 = (int)a2;
    if ( *a2 <= DSurface_SidebarBounds + dword_886F98 )
    LABEL_5:
    byte_884B8E = 1;
    g_CameoRenderFlag = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    return ToolTipManager::release(this, v3);
}

// 0x00478E10
int  CCToolTip::Draw1(uint8_t *this, char a2)
{
    *(this + 608) = a2;
    return ToolTipManager::ddtor((int)this, a2 == 0);
}

// 0x00478E30
char __userpurge CCToolTip::Draw2@<al>(int a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
    int v4; // eax
    int v5; // edi
    int v6; // ebx
    int v7; // esi
    int v8; // ebx
    int v9; // edx
    uint32_t *v10; // ebp
    int v11; // eax
    int v12; // edx
    int v13; // edi
    int v14; // ebx
    int v15; // eax
    int v16; // edx
    int v17; // edi
    int v20; // [esp+10h] [ebp-28h] BYREF
    int v21; // [esp+14h] [ebp-24h]
    int v22; // [esp+18h] [ebp-20h] BYREF
    int v23; // [esp+1Ch] [ebp-1Ch]
    int v24; // [esp+20h] [ebp-18h]
    int v25; // [esp+24h] [ebp-14h]
    int v26; // [esp+28h] [ebp-10h] BYREF
    uint32_t v27[3]; // [esp+2Ch] [ebp-Ch] BYREF
    int retaddr; // [esp+38h] [ebp+0h]
    v4 = *(uint32_t *)a3;
    v5 = *(uint32_t *)(a3 + 4);
    if ( byte_A8EB7C == 1 )
    v6 = DSurface_ViewBounds + g_Map_VisibleRectOffset;
    if ( v4 + *(uint32_t *)(a3 + 8) <= DSurface_ViewBounds + g_Map_VisibleRectOffset )
    v7 = DSurface_Composite;
    goto LABEL_13;
    if ( *(uint8_t *)(a1 + 608) != 1 || v4 < v6 )
    return v4;
    v7 = DSurface_Sidebar;
    v4 -= v6;
    else
    v8 = DSurface_SidebarBounds + dword_886F98;
    if ( v4 >= DSurface_SidebarBounds + dword_886F98 )
    v7 = DSurface_Composite;
    v4 -= v8;
    goto LABEL_13;
    if ( *(uint8_t *)(a1 + 608) != 1 || v4 + *(uint32_t *)(a3 + 8) >= v8 )
    return v4;
    v7 = DSurface_Sidebar;
    g_TooltipActive = 1;
    LABEL_13:
    if ( v7 )
    v23 = v5;
    v25 = v5;
    v9 = *(uint32_t *)v7;
    v10 = (uint32_t *)g_FogOfWarState;
    v22 = v4;
    v24 = v4;
    v21 = a3 + 16;
    v11 = (*(int (__thiscall **)(int, int))(v9 + 124))(v7, a2);
    Text::Layout(v10, (unsigned __int16 *)(a3 + 16), &a4, &v20, v11);
    v26 = v24 + v20;
    v25 = v23 + a4;
    v12 = *(uint32_t *)v7;
    v13 = v20 + 4;
    v14 = a4 + 8;
    v21 = v20 + 4;
    v15 = (*(int (__thiscall **)(int))(v12 + 124))(v7);
    v16 = v23;
    if ( v14 + v23 > v15 )
    v16 = (*(int (__thiscall **)(int))(*(uint32_t *)v7 + 124))(v7) - v14;
    v23 = v16;
    v25 = v14 + v16;
    v26 = v24 + v13;
    v27[0] = v16;
    v27[2] = v14;
    retaddr = v21;
    v27[1] = v24;
    v17 = ((unsigned __int8)dword_B0FA1C >> g_BitShift_Green_0 << g_BitShift_Red)
    | (BYTE1(dword_B0FA1C) >> g_BitMask_Blue << g_BitMask_Green)
    | (BYTE2(dword_B0FA1C) >> g_BitMask_Red << g_BitShift_Blue);
    (*(void (__thiscall **)(int, uint32_t *))(*(uint32_t *)v7 + 20))(v7, v27);
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)v7 + 88))(v7, &v26, v17);
    Char::Swap(v10, 1);
    TextGroup::SetRect(v10, &v22);
    Property::Set(v10, v17);
    LOBYTE(v4) = Font::Print((int)v10, v7, (_WORD *)v21, v22 + 4, v23 + 2, v24 - v22, v25 - v23, 0, 0, 0);
    return v4;
}

int __stdcall CCToolTip::_vt05(int a1)
{
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 40))(WWMouseClass_Instance) >= 0 )
    return CursorAnim::Load(a1);
    else
    return 0;
}

uint32_t * CCToolTip::_vt00(uint32_t *Block, char a2)
{
    *Block = &CCToolTip::`vftable';
    ToolTipClass::updateString(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

