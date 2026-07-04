#include "lwcviewclass.hpp"

int  LWCViewClass::RenderCells(uint32_t *this)
{
    uint32_t *v1; // ebp
    int Bit; // edi
    int result; // eax
    int v4; // esi
    int *ScreenRect; // eax
    uint32_t *v6; // eax
    int *Coords; // eax
    int *v8; // eax
    int v9; // ecx
    int v10; // eax
    int v11; // ecx
    char v12; // dl
    uint32_t *v13; // eax
    uint32_t *v14; // eax
    uint32_t *v15; // eax
    uint32_t *v16; // eax
    uint32_t *v17; // eax
    uint32_t *v18; // eax
    uint32_t *v19; // eax
    uint32_t *v20; // eax
    uint32_t *v21; // eax
    uint32_t *v22; // eax
    uint32_t *v23; // eax
    int v24; // [esp+18h] [ebp-1DCh]
    int v25; // [esp+18h] [ebp-1DCh]
    int v26; // [esp+18h] [ebp-1DCh]
    int v27; // [esp+18h] [ebp-1DCh]
    int v28; // [esp+1Ch] [ebp-1D8h]
    int v29; // [esp+1Ch] [ebp-1D8h]
    int v30; // [esp+1Ch] [ebp-1D8h]
    int v31; // [esp+1Ch] [ebp-1D8h]
    int v32; // [esp+30h] [ebp-1C4h] BYREF
    int v33; // [esp+34h] [ebp-1C0h]
    int v34; // [esp+38h] [ebp-1BCh]
    int v35; // [esp+3Ch] [ebp-1B8h]
    uint32_t *v36; // [esp+40h] [ebp-1B4h]
    uint32_t v37[2]; // [esp+44h] [ebp-1B0h] BYREF
    uint32_t v38[2]; // [esp+4Ch] [ebp-1A8h] BYREF
    uint32_t v39[2]; // [esp+54h] [ebp-1A0h] BYREF
    uint32_t v40[2]; // [esp+5Ch] [ebp-198h] BYREF
    uint32_t v41[2]; // [esp+64h] [ebp-190h] BYREF
    uint32_t v42[2]; // [esp+6Ch] [ebp-188h] BYREF
    uint32_t v43[2]; // [esp+74h] [ebp-180h] BYREF
    uint32_t v44[2]; // [esp+7Ch] [ebp-178h] BYREF
    uint32_t v45[2]; // [esp+84h] [ebp-170h] BYREF
    uint32_t v46[2]; // [esp+8Ch] [ebp-168h] BYREF
    uint32_t v47[2]; // [esp+94h] [ebp-160h] BYREF
    uint32_t v48[3]; // [esp+9Ch] [ebp-158h] BYREF
    uint32_t v49[4]; // [esp+A8h] [ebp-14Ch] BYREF
    uint32_t v50[4]; // [esp+B8h] [ebp-13Ch] BYREF
    uint32_t v51[4]; // [esp+C8h] [ebp-12Ch] BYREF
    uint32_t v52[4]; // [esp+D8h] [ebp-11Ch] BYREF
    int v53[4]; // [esp+E8h] [ebp-10Ch] BYREF
    uint32_t v54[4]; // [esp+F8h] [ebp-FCh] BYREF
    uint32_t v55[4]; // [esp+108h] [ebp-ECh] BYREF
    uint32_t v56[4]; // [esp+118h] [ebp-DCh] BYREF
    int v57; // [esp+128h] [ebp-CCh] BYREF
    int v58; // [esp+130h] [ebp-C4h] BYREF
    uint32_t v59[6]; // [esp+138h] [ebp-BCh] BYREF
    int v60; // [esp+150h] [ebp-A4h] BYREF
    int v61; // [esp+158h] [ebp-9Ch] BYREF
    int v62; // [esp+160h] [ebp-94h] BYREF
    int v63[3]; // [esp+168h] [ebp-8Ch] BYREF
    int v64[4]; // [esp+174h] [ebp-80h] BYREF
    int v65[4]; // [esp+184h] [ebp-70h] BYREF
    int v66[4]; // [esp+194h] [ebp-60h] BYREF
    int v67[4]; // [esp+1A4h] [ebp-50h] BYREF
    int v68[4]; // [esp+1B4h] [ebp-40h] BYREF
    int v69[4]; // [esp+1C4h] [ebp-30h] BYREF
    int v70[4]; // [esp+1D4h] [ebp-20h] BYREF
    int v71[4]; // [esp+1E4h] [ebp-10h] BYREF
    v1 = this;
    v36 = this;
    LayerClass::CellIteratorReset(&MapClass_Instance);
    Bit = LayerClass::CellIteratorNext(&MapClass_Instance);
    result = 255 >> g_BitMask_Blue << g_BitMask_Green;
    v4 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | result;
    if ( Bit )
    do
    ScreenRect = CellClass::GetScreenRect(Bit, v64);
    v53[0] = *ScreenRect;
    v53[1] = ScreenRect[1];
    v53[2] = ScreenRect[2];
    v53[3] = ScreenRect[3];
    v6 = ClipRectIntersection(v66, v53, &DSurface_ViewBounds, 0, 0);
    v59[2] = *v6;
    v59[3] = v6[1];
    if ( (int)v6[2] > 0 && (int)v6[3] > 0 )
    Coords = CellClass::GetCoords((uint32_t *)Bit, v63);
    v48[0] = *Coords;
    v48[1] = Coords[1];
    v48[2] = Coords[2];
    v8 = Coord::To_ScreenRaw(&v62, v48);
    v9 = v8[1];
    v10 = *v8 - v1[44] - 2;
    v11 = Map_VisibleRect + v9 - v1[45] - 2;
    v34 = 4;
    v12 = *(uint8_t *)(Bit + 292);
    v32 = v10;
    v33 = v11;
    v35 = 4;
    if ( (v12 & 4) != 0 )
    v47[0] = v10;
    v47[1] = v11;
    v42[0] = 10;
    v42[1] = 0;
    v13 = Coord2D::Add(v47, v59, v42);
    v14 = Rect::Construct(v70, v13, 4, 4);
    v51[0] = *v14;
    v51[1] = v14[1];
    v51[2] = v14[2];
    v51[3] = v14[3];
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v51, v4);
    if ( (*(uint8_t *)(Bit + 292) & 0x10) != 0 )
    v40[0] = v32;
    v40[1] = v33;
    v28 = v35;
    v24 = v34;
    v46[0] = 0;
    v46[1] = 6;
    v15 = Coord2D::Add(v40, &v61, v46);
    v16 = Rect::Construct(v68, v15, v24, v28);
    v52[0] = *v16;
    v52[1] = v16[1];
    v52[2] = v16[2];
    v52[3] = v16[3];
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v52, v4);
    if ( (*(uint8_t *)(Bit + 292) & 8) != 0 )
    v37[0] = v32;
    v37[1] = v33;
    v29 = v35;
    v25 = v34;
    v44[0] = -10;
    v44[1] = 0;
    v17 = Coord2D::Add(v37, &v57, v44);
    v18 = Rect::Construct(v65, v17, v25, v29);
    v54[0] = *v18;
    v54[1] = v18[1];
    v54[2] = v18[2];
    v54[3] = v18[3];
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v54, v4);
    if ( (*(uint8_t *)(Bit + 292) & 0xE0) != 0 )
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v32, v4);
    if ( (*(uint8_t *)(Bit + 296) & 4) != 0 )
    v39[0] = v32;
    v39[1] = v33;
    v30 = v35;
    v26 = v34;
    v38[0] = 10;
    v38[1] = -60;
    v19 = Coord2D::Add(v39, &v58, v38);
    v20 = Rect::Construct(v67, v19, v26, v30);
    v49[0] = *v20;
    v49[1] = v20[1];
    v49[2] = v20[2];
    v49[3] = v20[3];
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v49, v4);
    if ( (*(uint8_t *)(Bit + 296) & 0x10) != 0 )
    v43[0] = v32;
    v43[1] = v33;
    v31 = v35;
    v27 = v34;
    v41[0] = 0;
    v41[1] = -66;
    v21 = Coord2D::Add(v43, &v60, v41);
    v22 = Rect::Construct(v69, v21, v27, v31);
    v50[0] = *v22;
    v50[1] = v22[1];
    v50[2] = v22[2];
    v50[3] = v22[3];
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v50, v4);
    if ( (*(uint8_t *)(Bit + 296) & 8) != 0 )
    v45[0] = v32 - 10;
    v45[1] = v33 - 60;
    v23 = Rect::Construct(v71, v45, v34, v35);
    v56[0] = *v23;
    v56[1] = v23[1];
    v56[2] = v23[2];
    v56[3] = v23[3];
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v56, v4);
    if ( (*(uint8_t *)(Bit + 296) & 0xE0) != 0 )
    v55[0] = v32;
    v55[1] = v33 - 60;
    v55[3] = v35;
    v55[2] = v34;
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v55, v4);
    v1 = v36;
    result = LayerClass::CellIteratorNext(&MapClass_Instance);
    Bit = result;
    while ( result );
    return result;
}

