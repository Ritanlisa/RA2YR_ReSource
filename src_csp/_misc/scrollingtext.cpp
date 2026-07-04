#include "scrollingtext.hpp"

int  ScrollingText::AddLine(uint8_t *this, wchar_t *String, int a3, wchar_t *Source, int a5)
{
    wchar_t *v5; // edi
    int v7; // ebp
    wchar_t *v9; // esi
    size_t v10; // edi
    wchar_t *v11; // edi
    int v12; // ebp
    signed int v13; // eax
    size_t v14; // edi
    int v15; // edi
    signed int v16; // eax
    int v17; // esi
    int v18; // [esp+10h] [ebp-4h]
    wchar_t *Stringa; // [esp+18h] [ebp+4h]
    int v20; // [esp+1Ch] [ebp+8h]
    v5 = String;
    if ( !String )
    return 0;
    if ( !Source )
    return 0;
    if ( !*(this + 24) )
    return 0;
    v7 = *(uint32_t *)this;
    if ( !*(uint32_t *)this )
    return 0;
    while ( *(uint32_t *)(v7 + 40) != a3 )
    LABEL_8:
    v7 = (*(int (__thiscall **)(int))(*(uint32_t *)v7 + 4))(v7);
    if ( !v7 )
    return 0;
    if ( memcmp(*(const void **)(v7 + 48), v5, 2 * wcslen(v5)) )
    v5 = String;
    goto LABEL_8;
    v18 = v7;
    v9 = (wchar_t *)(*(uint32_t *)(v7 + 48) + 2 * wcslen(String) + 2);
    Stringa = (wchar_t *)*((uint32_t *)this + 4);
    v10 = wcslen(v9);
    if ( wcslen(Source) + v10 >= (unsigned int)Stringa )
    v14 = wcslen(v9) - *((uint32_t *)this + 4);
    v15 = wcslen(Source) + v14;
    v16 = wcslen(v9);
    if ( v16 < v15 )
    v16 = v15;
    WideString::WordWrap(0, v9, v15, v16, 0);
    wcscat(v9, Source);
    else
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * (uint32_t)Stringa + 2);
    TextRenderer::GetInstance();
    v20 = Text::MeasureWidth((int)v9, 0);
    v12 = Text::MeasureWidth(*(uint32_t *)(v7 + 48), 0) - v20;
    wcscpy(v11, v9);
    wcscat(v11, Source);
    while ( v12 + Text::MeasureWidth((int)v11, 0) >= *((uint32_t *)this + 177) )
    v13 = wcslen(v9);
    if ( v13 < 10 )
    v13 = 10;
    WideString::WordWrap(0, v9, 10, v13, 0);
    wcscpy(v11, v9);
    wcscat(v11, Source);
    __3_YAXPAX_Z(v11);
    wcscat(v9, Source);
    v7 = v18;
    if ( a5 == -1 )
    *(uint32_t *)(v7 + 36) = 0;
    return 1;
    else
    v17 = g_PerformanceTickOffset;
    if ( g_LastPerformanceTick != -1 )
    v17 += Timer::GetTicks() - g_LastPerformanceTick;
    *(uint32_t *)(v7 + 36) = a5 + v17;
    return 1;
}

