// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7011A0_e4.hpp"
#include "e4/classes/E4Recv_706BD0_e4.hpp"
#include "e4/classes/E4Recv_707280_e4.hpp"
#include "e4/classes/E4Recv_7087C0_e4.hpp"
#include "e4/classes/E4Recv_70DE20_e4.hpp"
#include "e4/classes/E4Recv_70E5A0_e4.hpp"
#include "e4/classes/E4Recv_70F1D0_e4.hpp"
#include "e4/classes/E4Recv_70F740_e4.hpp"
#include "e4/classes/E4Recv_70FE40_e4.hpp"
#include "e4/classes/E4Recv_70FE50_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x7049C0
namespace gamemd {
void DrawTacticalMapLine(FootClass * aP0, FootClass * aP1, int a3, int a4, int a5, int a6, int a7, char a8, char a9)
{
  int v9; // edx
  char v10; // bl
  int * v11;
  unsigned int *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int v15; // esi
  unsigned int *v16; // eax
  int *v17; // eax
  int *v18; // eax
  int v19; // eax
  int * v20;
  unsigned int *v21; // eax
  int *v22; // eax
  int *v23; // eax
  unsigned int *v24; // eax
  int *v25; // eax
  int *v26; // eax
  int v27; // edi
  char result; // al
  int v29; // [esp+2Ch] [ebp-80h] BYREF
  int v30; // [esp+30h] [ebp-7Ch]
  int v31; // [esp+34h] [ebp-78h] BYREF
  int v32; // [esp+38h] [ebp-74h]
  int v33[2]; // [esp+3Ch] [ebp-70h] BYREF
  int v34[2]; // [esp+44h] [ebp-68h] BYREF
  unsigned int v35;
  unsigned int * v36;
  unsigned int v37[2]; // [esp+54h] [ebp-58h] BYREF
  int v38[4]; // [esp+5Ch] [ebp-50h] BYREF
  int * v39;
  int * v40;
  int * v41;
  int * v42;
  int * v43;
  int * v44;
  int * v45;
  int * v46;
  unsigned int v47[4]; // [esp+8Ch] [ebp-20h] BYREF
  unsigned int v48[4]; // [esp+9Ch] [ebp-10h] BYREF

  Coord::To_Screen(g_TacticalClass_Instance, &aP0, &v31); /*0x7049dc*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v29); /*0x7049f4*/
  v9 = g_Map_VisibleRect; /*0x7049fd*/
  v10 = a9; /*0x704a07*/
  v32 += g_Map_VisibleRect; /*0x704a14*/
  v30 += g_Map_VisibleRect; /*0x704a1f*/
  v34[1] = v32 + 1; /*0x704a23*/
  v34[0] = v31; /*0x704a30*/
  v33[0] = v29; /*0x704a36*/
  v33[1] = v30 + 1; /*0x704a3a*/
  if ( a9 ) /*0x704a43*/
  {
    if ( *(unsigned int *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x704a51*/
      v11 = **(uint8_t **)(g_FileSystem_THEATER_PAL + 372); /*0x704a5d*/
    else
      v11 = **(uint16_t **)(g_FileSystem_THEATER_PAL + 372); /*0x704a69*/
    v36 = -2; /*0x704a77*/
    v35 = (int *)(-2);
    v12 = (unsigned int *)((int)(Coord2D::Add(&v35, v37, v34)));
    v13 = (int *)(Rect::Construct(v47, v12, 3, 3));
    v39 = (int *)(*v13);
    v40 = (int *)(v13[1]);
    v41 = (int *)(v13[2]);
    v42 = (int *)(v13[3]);
    v14 = (int *)(ClipRectIntersection(v48, &DSurface_ViewBounds, &v39, 0, 0));
    v43 = (int *)(*v14);
    v44 = (int *)(v14[1]);
    v45 = (int *)(v14[2]);
    v46 = (int *)(v14[3]);
    (*(void (__thiscall **)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v43, v11); /*0x704afa*/
    if ( *(unsigned int *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x704b05*/
      v15 = **(uint8_t **)(g_FileSystem_THEATER_PAL + 372); /*0x704b11*/
    else
      v15 = **(uint16_t **)(g_FileSystem_THEATER_PAL + 372); /*0x704b1d*/
    v35 = -2; /*0x704b29*/
    v36 = -2; /*0x704b2d*/
    v16 = Coord2D::Add(&v35, v37, v33); /*0x704b41*/
    v17 = Rect::Construct(v48, v16, 3, 3); /*0x704b4e*/
    v43 = *v17; /*0x704b57*/
    v44 = v17[1]; /*0x704b60*/
    v45 = v17[2]; /*0x704b6c*/
    v46 = v17[3]; /*0x704b7c*/
    v18 = ClipRectIntersection(v47, &DSurface_ViewBounds, &v43, 0, 0); /*0x704b80*/
    v39 = *v18; /*0x704b88*/
    v40 = v18[1]; /*0x704b8f*/
    v41 = v18[2]; /*0x704b9c*/
    v42 = v18[3]; /*0x704ba3*/
    (*(void (__thiscall **)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v39, v15); /*0x704bae*/
    v9 = g_Map_VisibleRect; /*0x704bb1*/
  }
  v38[1] = v9; /*0x704bc2*/
  v38[0] = DSurface_ViewBounds; /*0x704bce*/
  v38[2] = g_Map_VisibleRectOffset; /*0x704bd2*/
  v38[3] = g_DSurface_WindowOffset; /*0x704bd6*/
  if ( v10 && ClipLine(v34, v33, v38) ) /*0x704be9*/
  {
    if ( *(unsigned int *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x704bfa*/
      v19 = **(uint8_t **)(g_FileSystem_THEATER_PAL + 372); /*0x704c04*/
    else
      v19 = **(uint16_t **)(g_FileSystem_THEATER_PAL + 372); /*0x704c10*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 48))( /*0x704c26*/
      DSurface_Composite,
      v34,
      v33,
      v19);
  }
  v20 = (int *)((unsigned int)(((uint8_t)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x704c89*/ | (IDA_BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue) | (IDA_BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green)));
  v35 = (int *)((unsigned int)((int *)((unsigned int)((int *)(-2)))));
  v36 = (unsigned int *)(-2);
  v21 = (int *)(Coord2D::Add(&v35, v37, &v31));
  v22 = (int *)(Rect::Construct(v48, v21, 3, 3));
  v43 = (int *)(*v22);
  v44 = (int *)(v22[1]);
  v45 = (int *)(v22[2]);
  v46 = (int *)(v22[3]);
  v23 = (int *)(ClipRectIntersection(v47, &DSurface_ViewBounds, &v43, 0, 0));
  v39 = (int *)(*v23);
  v40 = (int *)(v23[1]);
  v41 = (int *)(v23[2]);
  v42 = (int *)(v23[3]);
  (*(void (__thiscall **)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v39, v20); /*0x704d11*/
  v35 = -2; /*0x704d1d*/
  v36 = -2; /*0x704d21*/
  v24 = Coord2D::Add(&v35, v37, &v29); /*0x704d35*/
  v25 = Rect::Construct(v48, v24, 3, 3); /*0x704d42*/
  v43 = *v25; /*0x704d49*/
  v44 = v25[1]; /*0x704d52*/
  v45 = v25[2]; /*0x704d5f*/
  v46 = v25[3]; /*0x704d70*/
  v26 = ClipRectIntersection(v47, &DSurface_ViewBounds, &v43, 0, 0); /*0x704d74*/
  v39 = *v26; /*0x704d7c*/
  v40 = v26[1]; /*0x704d83*/
  v41 = v26[2]; /*0x704d90*/
  v42 = v26[3]; /*0x704d97*/
  (*(void (__thiscall **)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v39, v20); /*0x704da2*/
  if ( a8 ) /*0x704dae*/
  {
    v27 = (0x7FFFFFFF - (int)g_CurrentFrame) % 15; /*0x704dc9*/
    result = ClipLine(&v31, &v29, v38); /*0x704dd4*/
    if ( result ) /*0x704ddb*/
      return (*(int (__thiscall **)(int, int *, int *, int, void *, int, unsigned int))(*(unsigned int *)DSurface_Composite + 76))( /*0x704df8*/
               DSurface_Composite,
               &v31,
               &v29,
               v20,
               &unk_843128,
               v27,
               0);
  }
  else
  {
    result = ClipLine(&v31, &v29, v38); /*0x704e14*/
    if ( result ) /*0x704e1b*/
      return (*(int (__thiscall **, unsigned int a1, unsigned int a4, unsigned int a7, unsigned int a2, unsigned int a3, unsigned int a5, unsigned int a6)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 48))( /*0x704e30*/
               DSurface_Composite,
               &v31,
               &v29,
               v20);
  }
  return result; /*0x704dfb*/
}
}
// 0x704E40
namespace gamemd {
void* DrawTacticalLaserLine(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7)
{
  int v7; // esi
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // eax
  DWORD Time; // eax
  void * v13;
  int v14; // esi
  int v15; // edi
  int v16; // ebp
  double v17; // st7
  int result; // eax
  void * v19;
  uint8_t v20; // [esp+12h] [ebp-8Eh]
  int v21; // [esp+18h] [ebp-88h] BYREF
  int v22; // [esp+1Ch] [ebp-84h]
  unsigned int v23;
  int v24; // [esp+24h] [ebp-7Ch] BYREF
  int v25; // [esp+28h] [ebp-78h]
  int16_t v26; // [esp+2Ch] [ebp-74h] BYREF
  char v27; // [esp+2Eh] [ebp-72h]
  int v28; // [esp+30h] [ebp-70h] BYREF
  int v29; // [esp+34h] [ebp-6Ch]
  int * v30;
  int * v31;
  int * v32;
  int * v33;
  int * v34;
  int * v35;
  int * v36;
  int * v37;
  int v38; // [esp+58h] [ebp-48h] BYREF
  int v39; // [esp+5Ch] [ebp-44h]
  int v40; // [esp+60h] [ebp-40h]
  void * v41;
  void * v42;
  unsigned int v43;
  int v44[4]; // [esp+70h] [ebp-30h] BYREF
  unsigned int v45[4]; // [esp+80h] [ebp-20h] BYREF
  unsigned int v46[4]; // [esp+90h] [ebp-10h] BYREF

  v19 = 0; /*0x704e62*/
  v20 = 0; /*0x704e6c*/
  v26 = -1; /*0x704e71*/
  v27 = -1; /*0x704e79*/
  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v24); /*0x704e7d*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v21); /*0x704e95*/
  v22 += g_Map_VisibleRect; /*0x704ec3*/
  v25 += g_Map_VisibleRect; /*0x704ece*/
  v29 = v25 - 2; /*0x704eeb*/
  v28 = v24 - 2; /*0x704f13*/
  v7 = ((uint8_t)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x704f1e*/
     | (IDA_BYTE1(a7, void * a1, void * a2, void * a3, void * a4, void * a5, void * a6) >> g_BitMask_Blue << g_BitMask_Green)
     | (IDA_BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue);
  v8 = (int *)(Rect::Construct(v45, &v28, 3, 3));
  v34 = (int *)(*v8);
  v35 = (int *)(v8[1]);
  v36 = (int *)(v8[2]);
  v37 = (int *)(v8[3]);
  v9 = (int *)(ClipRectIntersection(v46, &DSurface_ViewBounds, &v34, 0, 0));
  v30 = (int *)(*v9);
  v31 = (int *)(v9[1]);
  v32 = (int *)(v9[2]);
  v33 = (int)(v9[3]);
  (*(void (__thiscall **)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v30, v7); /*0x704f88*/
  v29 = v22 - 2; /*0x704f9f*/
  v28 = v21 - 2; /*0x704fad*/
  v10 = Rect::Construct(v46, &v28, 3, 3); /*0x704fb1*/
  v30 = (int)(*v10);
  v31 = (int)(v10[1]);
  v32 = (int *)(v10[2]);
  v33 = (int *)((unsigned int)(v10[3]));
  v11 = (int *)(ClipRectIntersection(v45, &DSurface_ViewBounds, &v30, 0, 0));
  v34 = (int *)((unsigned int)(*v11));
  v35 = (int *)(v11[1]);
  v36 = (int *)(v11[2]);
  v37 = (int *)((unsigned int)(v11[3]));
  (*(void (__thiscall **)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v34, v7); /*0x705014*/
  v44[0] = DSurface_ViewBounds; /*0x705028*/
  v44[1] = g_Map_VisibleRect; /*0x705031*/
  v44[2] = g_Map_VisibleRectOffset; /*0x705035*/
  v44[3] = g_DSurface_WindowOffset; /*0x705039*/
  Time = timeGetTime(); /*0x70503d*/
  v13 = a1; /*0x70504a*/
  v42 = a2; /*0x705054*/
  v14 = 1; /*0x70505f*/
  v15 = 31; /*0x705064*/
  v23 = 1; /*0x70506c*/
  v41 = a1; /*0x705070*/
  v43 = a3; /*0x705074*/
  v16 = 8; /*0x705078*/
  v28 = 8 * (Time >> 4); /*0x70507d*/
  while ( 1 ) /*0x7050b0*/
  {
    v38 = (v15 * v13 + v14 * a4) / 32; /*0x7050b0*/
    v39 = (v14 * a5 + v15 * a2) / 32; /*0x7050d3*/
    v17 = ((double)v23 - 16.0) * 0.0625; /*0x7050f2*/
    v23 = (v14 * a6 + v15 * a3) / 32; /*0x7050f8*/
    v40 = Math::RoundToInt(v17); /*0x705119*/
    Coord::To_Screen(g_TacticalClass_Instance, &v41, &v24); /*0x70512f*/
    Coord::To_Screen(g_TacticalClass_Instance, &v38, &v21); /*0x705144*/
    v25 += g_Map_VisibleRect; /*0x705158*/
    v22 += g_Map_VisibleRect; /*0x70516b*/
    if ( ClipLine(&v24, &v21, v44) ) /*0x70516f*/
    {
      v20 = (int16_t)(IDA_BYTE2(a7));
      v19 = a7; /*0x705195*/
      if ( (((unsigned short)v16 - (unsigned short)v28) & 0x1F8u) <= 0xF8 && (((unsigned short)v16 - (unsigned short)v28) & 0x1F8) != 0 ) /*0x7051aa*/
        Color::Lerp((uint8_t *)&v19, (v16 - v28) & 0xF8, (uint8_t *)&v26); /*0x7051b6*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 48))( /*0x705226*/
        DSurface_Composite,
        &v24,
        &v21,
        ((uint8_t)v19 >> g_BitShift_Green_0 << g_BitShift_Red)
      | (IDA_HIBYTE(v19, void * a1) >> g_BitMask_Blue << g_BitMask_Green)
      | (v20 >> g_BitMask_Red << g_BitShift_Blue, unsigned int a1));
    }
    result = (int)(v38);
    ++v14; /*0x705235*/
    v16 += 8; /*0x705236*/
    --v15; /*0x705239*/
    v23 = v14; /*0x705240*/
    v41 = v38; /*0x705244*/
    v42 = v39; /*0x705248*/
    v43 = v40; /*0x70524c*/
    if ( v16 > 256 ) /*0x705250*/
      break; /*0x705250*/
    v13 = a1; /*0x705083*/
  }
  return (void *)(result);
}
}
// 0x706ED0
namespace gamemd {
void * TechnoClass_RenderVoxel(int * a1, int a2, void * a3, unsigned int * a4, const void * a5, int a6, int * a7, unsigned int a8, int a9, int a10, int a11)
{
  int v12; // eax
  unsigned int *v13; // esi
  unsigned int *v14; // edi
  unsigned int v15; // ebx
  float *v16; // eax
  float *v17; // eax
  int v18; // edx
  int v19; // ebx
  unsigned int *v20; // edi
  int16_t v21; // ax
  struct IPersistStreamVtbl *lpVtbl; // esi
  int *v23; // eax
  unsigned int v24; // ebx
  unsigned int *v25; // esi
  int v26; // edx
  int v27; // edi
  int v28; // eax
  int * v29;
  int * v30;
  int *v31; // eax
  int *SHPFrame; // [esp-18h] [ebp-154h]
  int v34; // [esp-14h] [ebp-150h]
  int v35; // [esp-10h] [ebp-14Ch]
  int * v36;
  int * v37;
  int * v38;
  int * v39;
  int * v40;
  int v41; // [esp+20h] [ebp-11Ch] BYREF
  int v42; // [esp+24h] [ebp-118h]
  int v43; // [esp+28h] [ebp-114h]
  int v44; // [esp+2Ch] [ebp-110h]
  unsigned int *v45; // [esp+30h] [ebp-10Ch]
  unsigned int v46[6]; // [esp+34h] [ebp-108h] BYREF
  float v47[12]; // [esp+4Ch] [ebp-F0h] BYREF
  float v48[12]; // [esp+7Ch] [ebp-C0h] BYREF
  int v49[12]; // [esp+ACh] [ebp-90h] BYREF
  float v50[12]; // [esp+DCh] [ebp-60h] BYREF
  float v51[12]; // [esp+10Ch] [ebp-30h] BYREF

  qmemcpy(v48, a5, sizeof(v48)); /*0x706eeb*/
  v12 = *a1; /*0x706ef4*/
  qmemcpy(v49, a5, sizeof(v49)); /*0x706efe*/
  if ( *(unsigned char *)((*(int (__thiscall **)(int *))(v12 + 132))(a1) + 3500) ) /*0x706f08*/
    dword_B43180 = 1; /*0x706f12*/
  v14 = (unsigned int *)a4[1]; /*0x706f36*/
  v45 = (unsigned int *)*a4; /*0x706f45*/
  v13 = v45; /*0x706f34*/
  v37 = v14; /*0x706f49*/
  Audio_Render(0, (int)v49, (int)flt_887430, (int)&dword_887470, 3.0); /*0x706f4d*/
  Viewport::Clear(); /*0x706f52*/
  v15 = 0; /*0x706f5a*/
  if ( v45[1] ) /*0x706f57*/
  {
    do /*0x706fe5*/
    {
      if ( v14 ) /*0x706f66*/
      {
        qmemcpy(v47, (const void *)(v14[3] + 48 * (v15 + v14[1] * (a8 % v14[2]))), sizeof(v47)); /*0x706f92*/
        qmemcpy(v48, MultiplyMatrix3x4(v50, (float *)v49, v47), sizeof(v48)); /*0x706fb3*/
        v13 = v45; /*0x706fb5*/
        v14 = v37; /*0x706fb9*/
      }
      v16 = MultiplyMatrix3x4(v51, flt_887430, v48); /*0x706fce*/
      TransformVoxelVertex(v13, v15++, 0, v16); /*0x706fda*/
    }
    while ( v15 < v13[1] ); /*0x706fe5*/
  }
  v17 = Voxel::RenderFrame(v47); /*0x706fef*/
  v18 = *a1; /*0x706ff4*/
  qmemcpy(v46, v17, sizeof(v46)); /*0x707002*/
  if ( (*(uint8_t (__thiscall **)(int *))(v18 + 468))(a1)
    || (*(uint8_t (__thiscall **)(int *))(*a1 + 472))(a1) )
  {
    if ( a1
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6
      && *(unsigned char *)(*((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6 ? a1 + 328 : (int *)1312) + 5809) )
    {
      v19 = a9 | 6; /*0x70705a*/
    }
    else
    {
      v19 = a9 | 4; /*0x707066*/
    }
  }
  else
  {
    v19 = a9; /*0x70706b*/
  }
  if ( (uint8_t)House::IsHumanPlayer((void *)a1[135]) /*0x707086*/
    && (*(uint8_t (__thiscall **)(int *))(*a1 + 196))(a1) )
  {
    v19 = (*(int (__thiscall **)(int *, int))(*a1 + 1084))(a1, v19); /*0x70709c*/
  }
  v20 = (unsigned int *)a6; /*0x7070a5*/
  v41 = *a7; /*0x7070ae*/
  v42 = a7[1]; /*0x7070b5*/
  v43 = a7[2]; /*0x7070bc*/
  v44 = a7[3]; /*0x7070c9*/
  if ( g_DSurface_Hidden_2 != dword_B1D13C ) /*0x7070d4*/
  {
    v21 = *((unsigned short *)a1 + 485); /*0x7070da*/
    if ( v21 <= 0 ) /*0x7070e6*/
    {
      if ( *((unsigned char *)a1 + 973) ) /*0x707140*/
        *((unsigned short *)a1 + 485) = IDA_LOWORD(v46[5]) /*0x707166*/
                             + IDA_LOWORD(v46[1])
                             + *(unsigned short *)(a6 + 4)
                             + IDA_LOWORD(g_TacticalClass_Instance[45].lpVtbl);
    }
    else
    {
      lpVtbl = (int *)(g_TacticalClass_Instance[45].lpVtbl);
      v37 = (int *)((unsigned int *)((int *)(0)));
      v40 = (int *)((unsigned int)((int *)(v21 - (unsigned int)lpVtbl)));
      v38 = (int *)(0);
      v39 = (int *)(g_Map_VisibleRectOffset);
      v23 = (int *)(ClipRectIntersection(v47, &v41, (int *)&v37, 0, 0));
      v41 = *v23; /*0x707125*/
      v42 = v23[1]; /*0x70712c*/
      v43 = v23[2]; /*0x707133*/
      v44 = v23[3]; /*0x70713a*/
    }
  }
  v24 = v19 & 0xFFFFFFEF; /*0x707172*/
  if ( (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 1 && *((unsigned char *)a1 + 1747) ) /*0x70717d*/
    v25 = (unsigned int *)dword_B1D140; /*0x707187*/
  else
    v25 = (unsigned int *)(*(int (__thiscall **)(int *))(*a1 + 484))(a1); /*0x70719a*/
  v26 = 0; /*0x70719c*/
  if ( (v24 & 8) != 0 ) /*0x7071a1*/
  {
    v27 = (*(int (__stdcall **)(int *))(a1[1] + 16))(a1 + 1); /*0x7071b3*/
    v28 = v27 + Math::RoundToInt(*((float *)a1 + 147)); /*0x7071ba*/
    v20 = (unsigned int *)a6; /*0x7071bc*/
    v26 = v28 % 400; /*0x7071c9*/
  }
  v29 = (int *)(v20[1]);
  v36 = (int *)((unsigned int *)((int *)(v26)));
  v37 = (int *)((unsigned int *)(v46[0] + *v20));
  v30 = (int *)(*a1);
  v38 = v46[1] + v29; /*0x7071f3*/
  v35 = (*(int (__thiscall **)(int *))(v30 + 752))(a1); /*0x707200*/
  v34 = (*(int (__thiscall **)(int *))(*a1 + 748))(a1); /*0x70720c*/
  SHPFrame = (int *)BuildingClass::GetSHPFrame(v25, v24); /*0x707215*/
  v31 = Miles::DriverGet(); /*0x707227*/
  BlitterDrawSHP( /*0x707235*/
    (int *)g_DSurface_Hidden_2,
    (int)v25,
    v31,
    &v46[2],
    (int *)&v37,
    &v41,
    0,
    SHPFrame,
    v34,
    v35,
    a10,
    a11,
    v36);
  if ( *(unsigned char *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3500) ) /*0x707245*/
    dword_B43180 = 0; /*0x70724f*/
  qmemcpy(a3, v46, 0x18u); /*0x70726b*/
  return a3; /*0x70726d*/
}
}
// 0x709550
namespace gamemd {
AbstractClass * * __usercall SelectTargetByWeight(unsigned int *a1@<ecx> a1, int a2@<esi> a2)
{
  int i; // edx
  int v4; // eax
  int v5; // ecx
  unsigned int *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebp
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  unsigned int *v15; // ecx
  int v16; // eax
  unsigned int *v17; // esi
  int v18; // eax
  int v19; // ebp
  int v20; // edx
  int v21; // eax
  int v22; // ebx
  int v23; // edx
  int v24; // esi
  int k; // eax
  int j; // [esp+10h] [ebp-38h]
  int v28; // [esp+14h] [ebp-34h]
  void **v29; // [esp+18h] [ebp-30h] BYREF
  void *Block; // [esp+1Ch] [ebp-2Ch]
  int v31; // [esp+20h] [ebp-28h]
  int v32; // [esp+24h] [ebp-24h]
  int v33; // [esp+28h] [ebp-20h]
  int v34; // [esp+2Ch] [ebp-1Ch]
  void **v35; // [esp+30h] [ebp-18h] BYREF
  void *v36; // [esp+34h] [ebp-14h]
  int v37; // [esp+38h] [ebp-10h]
  char v38; // [esp+3Dh] [ebp-Bh]
  int v39; // [esp+40h] [ebp-8h]
  int v40; // [esp+44h] [ebp-4h]

  if ( a1[282] ) /*0x709559*/
  {
    for ( i = a1[288] - 1; i >= 0; --i ) /*0x70957f*/
    {
      v4 = 0; /*0x709587*/
      v5 = a1[282]; /*0x70958c*/
      if ( v5 <= 0 ) /*0x709594*/
      {
  LABEL_8:
        v7 = a1[288]; /*0x7095a8*/
        if ( i < v7 ) /*0x7095b0*/
        {
          v8 = v7 - 1; /*0x7095b2*/
          v9 = i; /*0x7095b5*/
          for ( a1[288] = v8; v9 < a1[288]; *(unsigned int *)(a1[285] + 4 * v9 - 4) = *(unsigned int *)(a1[285] + 4 * v9) ) /*0x7095bf*/
            ++v9; /*0x7095c7*/
        }
      }
      else
      {
        v6 = (unsigned int *)a1[279]; /*0x709596*/
        while ( *(unsigned int *)(a1[285] + 4 * i) != *v6 ) /*0x70959e*/
        {
          ++v4; /*0x7095a0*/
          ++v6; /*0x7095a1*/
          if ( v4 >= v5 ) /*0x7095a6*/
            goto LABEL_8; /*0x7095a6*/
        }
      }
    }
    AbstractClassVector::Construct(&v35, 0, 0); /*0x7095e2*/
    v40 = 10; /*0x7095fa*/
    v39 = 0; /*0x7095fe*/
    VectorClass::Construct(&v29, 0, 0); /*0x709602*/
    v10 = a1[288]; /*0x709607*/
    v34 = 10; /*0x709617*/
    v33 = 0; /*0x70961b*/
    if ( v10 > 0 ) /*0x70961f*/
    {
      v11 = 0; /*0x70962b*/
      v28 = a1[282]; /*0x70962f*/
      for ( j = 0; j < v28; ++j ) /*0x709637*/
      {
        v12 = 4 * v11; /*0x709643*/
        v13 = 0; /*0x70964a*/
        v14 = *(unsigned int *)(a1[279] + v12); /*0x70964c*/
        v15 = (unsigned int *)a1[285]; /*0x709653*/
        while ( v14 != *v15 ) /*0x70965b*/
        {
          ++v13; /*0x709661*/
          ++v15; /*0x709662*/
          if ( v13 >= v10 ) /*0x709667*/
          {
            if ( v39 < v37 /*0x709696*/
              || (v38 || !v37)
              && v40 > 0
              && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v35[2])(&v35, v40 + v37, 0) )
            {
              v16 = v39++; /*0x7096a1*/
              *((unsigned int *)v36 + v16) = v14; /*0x7096ac*/
            }
            v17 = (unsigned int *)(v12 + a1[273]); /*0x7096bd*/
            if ( v33 < v31 /*0x7096e4*/
              || (IDA_BYTE1(v32) || !v31)
              && v34 > 0
              && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v29[2])(&v29, v34 + v31, 0) )
            {
              v18 = v33++; /*0x7096f3*/
              *((unsigned int *)Block + v18) = *v17; /*0x7096fc*/
            }
            break; /*0x7096fc*/
          }
        }
        v11 = j + 1; /*0x7096ff*/
      }
    }
    if ( v39 ) /*0x70971a*/
    {
      v23 = 0; /*0x709765*/
      v24 = 0; /*0x709767*/
      for ( k = 0; k < v39; ++k ) /*0x70976d*/
      {
        if ( *((unsigned int *)Block + k) > v23 ) /*0x70977c*/
        {
          v24 = *((unsigned int *)v36 + k); /*0x70977e*/
          v23 = *((unsigned int *)Block + k); /*0x709782*/
        }
      }
      (*(void (__thiscall **)(unsigned int *, int))(*a1 + 968))(a1, v24); /*0x709792*/
    }
    else
    {
      (*(void (__thiscall **)(unsigned int *, int))(a1[284] + 12))(a1 + 284, a2); /*0x709728*/
      v19 = a1[282]; /*0x70972b*/
      v20 = 0; /*0x709731*/
      v21 = 0; /*0x709735*/
      if ( v19 > 0 ) /*0x709739*/
      {
        v22 = a1[273]; /*0x70973b*/
        do /*0x709756*/
        {
          if ( *(unsigned int *)(v22 + 4 * v21) > v20 ) /*0x709746*/
            v20 = *(unsigned int *)(v22 + 4 * v21); /*0x709748*/
          ++v21; /*0x709753*/
        }
        while ( v21 < v19 ); /*0x709756*/
      }
      (*(void (__thiscall **)(unsigned int *))(*a1 + 968))(a1); /*0x70975d*/
    }
    if ( Block && IDA_BYTE1(v32) ) /*0x7097b0*/
    {
      RA2_OPDEL(Block); /*0x7097b3*/
      Block = 0; /*0x7097bb*/
    }
    v31 = 0; /*0x7097c3*/
    IDA_BYTE1(v32) = 0; /*0x7097ca*/
    if ( v36 ) /*0x7097d8*/
    {
      if ( v38 ) /*0x7097e0*/
        RA2_OPDEL(v36); /*0x7097e3*/
    }
  }
  else
  {
    (*(void (__thiscall **)(unsigned int *))(a1[284] + 12))(a1 + 284); /*0x70956d*/
  }
}
}
// 0x70E920
namespace gamemd {
void UpdateTimedStateMachine(int * a1)
{
  unsigned int *v2; // esi
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned int *v14; // esi
  int v15; // edi
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // [esp+Ch] [ebp-8h]

  if ( a1
    && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6
    && a1[165]
    && *(unsigned int *)(a1[165] + 80) == ((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6 ? (unsigned int)a1 : 0) )
  {
    switch ( a1[112] ) /*0x70e97d*/
    {
      case 0: /*0x70e97d*/
        a1[112] = 1; /*0x70e988*/
        v2 = a1 + 109; /*0x70e997*/
        *v2 = g_CurrentFrame; /*0x70e9a3*/
        v2[1] = v21; /*0x70e9a5*/
        v2[2] = 6; /*0x70e9a8*/
        return; /*0x70e9af*/
      case 1: /*0x70e97d*/
        v3 = a1[109]; /*0x70e9b0*/
        v4 = a1[111]; /*0x70e9b6*/
        if ( v3 == -1 ) /*0x70e9c5*/
          goto LABEL_10; /*0x70e9c5*/
        if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x70e9d1*/
          goto LABEL_11; /*0x70e9d1*/
        v4 -= (int)g_CurrentFrame - v3; /*0x70e9d3*/
  LABEL_10:
        if ( !v4 ) /*0x70e9d7*/
        {
  LABEL_11:
          a1[112] = 2; /*0x70e9dd*/
          a1[109] = (int)g_CurrentFrame; /*0x70e9ed*/
          a1[110] = v21; /*0x70e9f8*/
          a1[111] = 4; /*0x70e9fc*/
        }
        break; /*0x70ea03*/
      case 2: /*0x70e97d*/
        v5 = a1[109]; /*0x70ea04*/
        v6 = a1[111]; /*0x70ea0a*/
        if ( v5 == -1 ) /*0x70ea19*/
          goto LABEL_15; /*0x70ea19*/
        if ( (int)g_CurrentFrame - v5 >= v6 ) /*0x70ea25*/
          goto LABEL_16; /*0x70ea25*/
        v6 -= (int)g_CurrentFrame - v5; /*0x70ea27*/
  LABEL_15:
        if ( !v6 ) /*0x70ea2b*/
        {
  LABEL_16:
          a1[112] = 3; /*0x70ea31*/
          v7 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, -5, 5); /*0x70ea4b*/
          a1[109] = (int)g_CurrentFrame; /*0x70ea59*/
          a1[110] = v21; /*0x70ea5f*/
          a1[111] = v7 + 20; /*0x70ea62*/
        }
        break; /*0x70ea6a*/
      case 3: /*0x70e97d*/
        v8 = a1[109]; /*0x70ea6b*/
        v9 = a1[111]; /*0x70ea71*/
        if ( v8 == -1 ) /*0x70ea80*/
          goto LABEL_20; /*0x70ea80*/
        if ( (int)g_CurrentFrame - v8 >= v9 ) /*0x70ea8c*/
          goto LABEL_21; /*0x70ea8c*/
        v9 -= (int)g_CurrentFrame - v8; /*0x70ea8e*/
  LABEL_20:
        if ( !v9 ) /*0x70ea92*/
        {
  LABEL_21:
          a1[112] = 4; /*0x70ea98*/
          a1[109] = (int)g_CurrentFrame; /*0x70eaa8*/
          a1[110] = v21; /*0x70eab3*/
          a1[111] = 64; /*0x70eab7*/
        }
        break; /*0x70eabe*/
      case 4: /*0x70e97d*/
        v10 = a1[109]; /*0x70eabf*/
        v11 = a1[111]; /*0x70eac5*/
        if ( v10 == -1 ) /*0x70ead4*/
          goto LABEL_25; /*0x70ead4*/
        if ( (int)g_CurrentFrame - v10 >= v11 ) /*0x70eae0*/
          goto LABEL_26; /*0x70eae0*/
        v11 -= (int)g_CurrentFrame - v10; /*0x70eae2*/
  LABEL_25:
        if ( !v11 ) /*0x70eae6*/
        {
  LABEL_26:
          a1[112] = 5; /*0x70eaec*/
          a1[109] = (int)g_CurrentFrame; /*0x70eafc*/
          a1[110] = v21; /*0x70eb07*/
          a1[111] = 64; /*0x70eb0b*/
        }
        break; /*0x70eb12*/
      case 5: /*0x70e97d*/
        v12 = a1[109]; /*0x70eb13*/
        v13 = a1[111]; /*0x70eb19*/
        if ( v12 == -1 ) /*0x70eb28*/
          goto LABEL_30; /*0x70eb28*/
        if ( (int)g_CurrentFrame - v12 >= v13 ) /*0x70eb34*/
          goto LABEL_31; /*0x70eb34*/
        v13 -= (int)g_CurrentFrame - v12; /*0x70eb36*/
  LABEL_30:
        if ( !v13 ) /*0x70eb3a*/
        {
  LABEL_31:
          if ( Timeout::GetRemaining(a1 + 106) >= 158 ) /*0x70eb50*/
          {
            a1[112] = 4; /*0x70eb66*/
            a1[109] = (int)g_CurrentFrame; /*0x70eb7a*/
            a1[110] = v21; /*0x70eb7c*/
            a1[111] = 64; /*0x70eb7f*/
          }
          else
          {
            a1[112] = 6; /*0x70eb52*/
          }
        }
        break; /*0x70eb61*/
      case 6: /*0x70e97d*/
        if ( Timeout::GetRemaining(a1 + 106) <= 30 ) /*0x70eb96*/
        {
          a1[112] = (unsigned int *)(7);
          v14 = a1 + 109; /*0x70ebab*/
          *v14 = g_CurrentFrame; /*0x70ebb7*/
          v14[1] = v21; /*0x70ebbd*/
          v14[2] = 6; /*0x70ebc0*/
        }
        return; /*0x70ebc7*/
      case 7: /*0x70e97d*/
        v15 = a1[109]; /*0x70ebc8*/
        v16 = a1[111]; /*0x70ebce*/
        if ( v15 == -1 ) /*0x70ebdd*/
          goto LABEL_39; /*0x70ebdd*/
        if ( (int)g_CurrentFrame - v15 >= v16 ) /*0x70ebe9*/
          goto LABEL_40; /*0x70ebe9*/
        v16 -= (int)g_CurrentFrame - v15; /*0x70ebeb*/
  LABEL_39:
        if ( !v16 ) /*0x70ebef*/
        {
  LABEL_40:
          a1[112] = 8; /*0x70ebf5*/
          a1[109] = (int)g_CurrentFrame; /*0x70ec05*/
          a1[110] = v21; /*0x70ec10*/
          a1[111] = 4; /*0x70ec14*/
        }
        break; /*0x70ec1b*/
      case 8: /*0x70e97d*/
        v17 = a1[109]; /*0x70ec1c*/
        v18 = a1[111]; /*0x70ec22*/
        if ( v17 == -1 ) /*0x70ec31*/
          goto LABEL_44; /*0x70ec31*/
        if ( (int)g_CurrentFrame - v17 >= v18 ) /*0x70ec3d*/
          goto LABEL_45; /*0x70ec3d*/
        v18 -= (int)g_CurrentFrame - v17; /*0x70ec3f*/
  LABEL_44:
        if ( !v18 ) /*0x70ec43*/
        {
  LABEL_45:
          a1[112] = 9; /*0x70ec45*/
          a1[109] = (int)g_CurrentFrame; /*0x70ec55*/
          a1[110] = v21; /*0x70ec60*/
          a1[111] = 20; /*0x70ec64*/
        }
        break; /*0x70ec6b*/
      case 9: /*0x70e97d*/
        v19 = a1[109]; /*0x70ec6c*/
        v20 = a1[111]; /*0x70ec72*/
        if ( v19 != -1 ) /*0x70ec7b*/
        {
          if ( (int)g_CurrentFrame - v19 >= v20 ) /*0x70ec87*/
            goto LABEL_50; /*0x70ec87*/
          v20 -= (int)g_CurrentFrame - v19; /*0x70ec89*/
        }
        if ( !v20 ) /*0x70ec8d*/
          goto LABEL_50; /*0x70ec8d*/
        return; /*0x70ec8d*/
      default:
  LABEL_50:
        a1[112] = 10; /*0x70ec8f*/
        return; /*0x70ec9e*/
    }
  }
  else
  {
    a1[112] = 0; /*0x70ec9f*/
  }
}
}
// 0x70F120
namespace gamemd {
unsigned long long TechnoClass_RevealRadarEvent(int a1, int a2)
{
  int v3; // edi
  DWORD Ticks; // eax
  int v5; // eax
  DWORD result; // eax
  unsigned int v7;
  unsigned char v8[4]; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]

  if ( a1 && a2 ) /*0x70f12c*/
  {
    dword_B0EB3C = a2; /*0x70f134*/
    dword_B0EB38 = a1; /*0x70f13a*/
    v3 = *((unsigned int *)g_RulesClass_Instance + 1536); /*0x70f140*/
    Ticks = Timer::GetTicks(); /*0x70f14a*/
    dword_B0EA74 = v9; /*0x70f161*/
    v7 = HouseClass_Player; /*0x70f169*/
    dword_B0EA70 = Ticks; /*0x70f16e*/
    dword_B0EA78 = v3; /*0x70f173*/
    v5 = (*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)a1 + 72))(a1, v8); /*0x70f180*/
    return MapClass::RevealArea0(v5, 2, v7, 0, 0, 0, 1, 1); /*0x70f189*/
  }
  else
  {
    dword_B0EB3C = 0; /*0x70f198*/
    dword_B0EB38 = 0; /*0x70f1a2*/
    result = Timer::GetTicks(); /*0x70f1ac*/
    dword_B0EA70 = result; /*0x70f1b7*/
    dword_B0EA74 = v9; /*0x70f1bc*/
    dword_B0EA78 = 0; /*0x70f1c2*/
  }
  return result; /*0x70f18f*/
}
}
// 0x7011A0
namespace gamemd {
int E4Recv_7011A0::sub_7011A0()
{
  int v3; // edi
  int v4; // edx
  int v5; // eax
  unsigned int *v6; // eax
  char *v7; // esi
  int v8; // eax
  double v9; // st7
  int v10; // esi
  int v11; // eax
  int v12; // [esp+14h] [ebp-1Ch]
  double v14; // [esp+1Ch] [ebp-14h]
  unsigned char v15[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( this->vt_slot_84() ) /*0x7011a9*/
    return 0; /*0x7011b1*/
  v3 = g_RulesClass_Instance[1].V3Rocket[11]; /*0x7011bd*/
  if ( !v3 ) /*0x7011c5*/
    return 0; /*0x7011c8*/
  v4 = g_RulesClass_Instance[1].DMisl[0]; /*0x7011d5*/
  v5 = *this; /*0x7011db*/
  IDA_LODWORD(v14) = g_RulesClass_Instance[1].V3Rocket[13]; /*0x7011dd*/
  IDA_HIDWORD(v14) = v4; /*0x7011e5*/
  v6 = (unsigned int *)this->vt_slot_72(v15); /*0x7011ec*/
  IDA_LOWORD(v12) = *v6 / 256; /*0x7011ff*/
  IDA_HIWORD(v12) = v6[1] / 256; /*0x701218*/
  v12 = v12; /*0x701225*/
  v7 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v12); /*0x701234*/
  v8 = ScenarioClass::CalcMinShroudLevel(&MapClass_Instance); /*0x701236*/
  v9 = (double)((v7[283] - v8) / v3) * v14; /*0x701259*/
  if ( v9 >= *(double *)&g_RulesClass_Instance[1].DMisl[1] ) /*0x70126c*/
    v9 = *(double *)&g_RulesClass_Instance[1].DMisl[1]; /*0x701270*/
  v10 = dword_B0EB34 * v7[283]; /*0x70127d*/
  v11 = Math::RoundToInt(v9); /*0x70127f*/
  Math::Sqrt((double)(v10 * v10 + (v11 << 8) * (v11 << 8))); /*0x7012a1*/
  return Math::RoundToInt(v9); /*0x7011b0*/
}
} // namespace gamemd

// 0x70D180
namespace gamemd {
void GlobalFlag_Set(char a1)
{
  byte_843108 = a1; /*0x70d180*/
}
} // namespace gamemd

// 0x70DE20
namespace gamemd {
int E4Recv_70DE20::sub_70DE20(int a2)
{
  *(&this->NeedsSaveOrLink1) += a2; /*0x70de2c*/
  return a2; /*0x70de32*/
}
} // namespace gamemd

// 0x70F740
namespace gamemd {
int E4Recv_70F740::sub_70F740(int a2)
{
  unsigned int *v2; // ecx
  int v4; // [esp+4h] [ebp-8h]

  v2 = &this->q180; /*0x70f74c*/
  *v2 = g_CurrentFrame; /*0x70f752*/
  v2[1] = v4; /*0x70f758*/
  v2[2] = a2; /*0x70f75b*/
  return v4; /*0x70f75e*/
}
} // namespace gamemd

// 0x70FE40
namespace gamemd {
int E4Recv_70FE40::sub_70FE40(int a2)
{
  *(unsigned int *)&this->M464 = a2; /*0x70fe44*/
  return a2; /*0x70fe4a*/
}
} // namespace gamemd

// 0x70FE50
namespace gamemd {
int E4Recv_70FE50::sub_70FE50()
{
  int v2; // ecx
  int result; // eax

  v2 = *(unsigned int *)&this->M468; /*0x70fe53*/
  if ( v2 ) /*0x70fe5b*/
  {
    (*(void (__thiscall **)(int))(*(unsigned int *)v2 + 248))(v2); /*0x70fe5f*/
    *(unsigned int *)&this->M468 = 0; /*0x70fe65*/
  }
  result = *(unsigned int *)&this->M460; /*0x70fe6f*/
  if ( result ) /*0x70fe77*/
  {
    *(unsigned int *)(result + 464) = 0; /*0x70fe79*/
    result = *(unsigned int *)(*(unsigned int *)&this->M460 + 540); /*0x70fe89*/
    if ( result ) /*0x70fe91*/
      *(unsigned char *)(result + 22392) = 1; /*0x70fe93*/
    *(unsigned int *)&this->M460 = 0; /*0x70fe9a*/
  }
  return result; /*0x70fea4*/
}
} // namespace gamemd
