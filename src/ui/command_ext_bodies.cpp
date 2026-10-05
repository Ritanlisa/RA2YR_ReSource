// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/ui/command_ext.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "command_ext.hpp"
#include "core/ida_vtables.h"  // gC_vftable3

// gC supply: extern declarations from src/e4/e4_globals_decls.hpp
extern unsigned int stru_A8EB00;

namespace gamemd {
// 0x6d1800
void CursorAnim::Load() {}

// 0x624480
void DeleteAndZero::OrFree() {}

// 0x7b5340
void DeleteAndZero::Alt2() {}

// 0x7b6760
void DeleteAndZero::Alt() {}

// 0x55cc20
void ScreenCapture::Frame()
{
    int v1; // eax
    int v2; // eax
    LONG right; // ecx
    LONG bottom; // edx
    int v5; // eax
    int v6; // esi
    int v7; // esi
    LONG v8; // eax
    LONG v9; // ecx
    int i; // esi
    struct tagPOINT v12; // [esp+10h] [ebp-E0h] BYREF
    LONG v13; // [esp+18h] [ebp-D8h]
    LONG v14; // [esp+1Ch] [ebp-D4h]
    struct tagPOINT Point; // [esp+20h] [ebp-D0h] BYREF
    struct tagRECT Rect; // [esp+28h] [ebp-C8h] BYREF
    struct tagPOINT v17; // [esp+38h] [ebp-B8h] BYREF
    char Buffer[4]; // [esp+40h] [ebp-B0h] BYREF
    int v19; // [esp+44h] [ebp-ACh]
    LONG v20; // [esp+48h] [ebp-A8h]
    LONG v21; // [esp+4Ch] [ebp-A4h]
    XSurface v22[2]; // [esp+60h] [ebp-90h] BYREF
    CCFileClass v23; // [esp+84h] [ebp-6Ch] BYREF
    int v24[3]; // [esp+DCh] [ebp-14h] BYREF
    int v25; // [esp+E8h] [ebp-8h]

    IDA_LOBYTE(v1) = *(unsigned int *)((char *)&stru_A8EB00 + 381); /*0x55cc20*/
    if ( *(unsigned int *)((char *)&stru_A8EB00 + 381) ) /*0x55cc33*/
    {
      if ( (g_MissionQueueFrame.waypoints[382] & 1) == 0 ) /*0x55cc40*/
      {
        g_MissionQueueFrame.waypoints[382] |= 1u; /*0x55cc44*/
        IDA_LOWORD(v2) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6000) * 900.0); /*0x55cc5a*/
        *(unsigned int *)&g_MissionQueueFrame.waypoints[430] = v2; /*0x55cc5f*/
      }
      if ( !*(unsigned int *)&g_MissionQueueFrame.waypoints[482] ) /*0x55cc6a*/
      {
        *(unsigned int *)&g_MissionQueueFrame.waypoints[482] = RA2_OPNEW(4 * *(unsigned int *)&g_MissionQueueFrame.waypoints[430]); /*0x55cc89*/
        memset(*(void **)&g_MissionQueueFrame.waypoints[482], 0, 4 * *(unsigned int *)&g_MissionQueueFrame.waypoints[430]); /*0x55cc8f*/
        if ( !*(unsigned int *)&g_MissionQueueFrame.waypoints[482] ) /*0x55cc9b*/
          *(unsigned int *)((char *)&stru_A8EB00 + 381) = 0; /*0x55cc9d*/
      }
      GetClientRect(g_hWnd, &Rect); /*0x55ccaf*/
      Point.x = Rect.left; /*0x55ccc7*/
      Point.y = Rect.top; /*0x55ccd3*/
      v1 = ClientToScreen(g_hWnd, &Point); /*0x55ccd7*/
      if ( v1 ) /*0x55ccdb*/
      {
        v17 = *(struct tagPOINT *)&Rect.right; /*0x55cce9*/
        v1 = ClientToScreen(g_hWnd, &v17); /*0x55ccfc*/
        if ( v1 ) /*0x55cd00*/
        {
          right = Rect.right; /*0x55cd13*/
          bottom = Rect.bottom; /*0x55cd17*/
          v12 = Point; /*0x55cd23*/
          v13 = Rect.right; /*0x55cd2b*/
          v14 = Rect.bottom; /*0x55cd2f*/
          if ( *(unsigned int *)&stru_87F5F0.__pad_58[420] ) /*0x55cd33*/
          {
            if ( *(int *)&stru_87F5F0.__pad_58[420] <= 0 ) /*0x55cd3d*/
            {
              if ( *(int *)&stru_87F5F0.__pad_58[420] >= 0 ) /*0x55cd49*/
                goto LABEL_17; /*0x55cd49*/
              right = *(unsigned int *)&stru_87F5F0.__pad_58[420] + Rect.right; /*0x55cd4b*/
            }
            else
            {
              right = Rect.right - *(unsigned int *)&stru_87F5F0.__pad_58[420]; /*0x55cd41*/
              v12.x = *(unsigned int *)&stru_87F5F0.__pad_58[420] + Point.x; /*0x55cd43*/
            }
            v13 = right; /*0x55cd4d*/
          }
          else if ( !*(unsigned int *)&stru_87F5F0.__pad_58[424] ) /*0x55cd37*/
          {
            goto LABEL_22; /*0x55cd37*/
          }
  LABEL_17:
          if ( *(int *)&stru_87F5F0.__pad_58[424] <= 0 ) /*0x55cd53*/
          {
            if ( *(int *)&stru_87F5F0.__pad_58[424] >= 0 ) /*0x55cd60*/
              goto LABEL_22; /*0x55cd60*/
            bottom = *(unsigned int *)&stru_87F5F0.__pad_58[424] + Rect.bottom; /*0x55cd62*/
          }
          else
          {
            bottom = Rect.bottom - *(unsigned int *)&stru_87F5F0.__pad_58[424]; /*0x55cd58*/
            v12.y = *(unsigned int *)&stru_87F5F0.__pad_58[424] + Point.y; /*0x55cd5a*/
          }
          v14 = bottom; /*0x55cd64*/
  LABEL_22:
          v5 = *(unsigned int *)&g_MissionQueueFrame.waypoints[486]; /*0x55cd68*/
          if ( *(int *)&g_MissionQueueFrame.waypoints[486] >= *(int *)&g_MissionQueueFrame.waypoints[430] ) /*0x55cd75*/
          {
            *(unsigned int *)((char *)&stru_A8EB00 + 381) = 0; /*0x55ce3e*/
            DSurface::Construct(v22[0].Surface, right, bottom, 0, 0); /*0x55ce44*/
            for ( i = 0; i < *(int *)&g_MissionQueueFrame.waypoints[486]; ++i ) /*0x55ce52*/
            {
              sprintf(Buffer, "cap%04d.pcx", i); /*0x55ce6d*/
              CCFileClass::Construct(&v23, Buffer); /*0x55ce81*/
              XSurface::BlitWhole(v22, *(int **)(*(unsigned int *)&g_MissionQueueFrame.waypoints[482] + 4 * i), 0, 1); /*0x55ce97*/
              CompressScreenshot((int *)v23.CDFileClass, (int *)v22[0].Surface, &FileSystem_TEMPERAT_PAL); /*0x55ceac*/
              *(unsigned int *)v23.CDFileClass = (unsigned int)(void *)&CCFileClass_vftable; /*0x55ceb8*/
              v25 = 0; /*0x55cebf*/
              Vector::Clear((int)v24); /*0x55cec6*/
              *(unsigned int *)v23.CDFileClass = &off_7E1668; /*0x55ced2*/
              BufferIOFileClass::Dtor((BufferIOFileClass *)&v23); /*0x55ced9*/
            }
            *(unsigned int *)&g_MissionQueueFrame.waypoints[486] = 0; /*0x55cef0*/
            IDA_LOBYTE(v1) = DSurface::Destroy((DSurface *)v22); /*0x55cef6*/
          }
          else
          {
            v6 = *(unsigned int *)&g_MissionQueueFrame.waypoints[482]; /*0x55cd7b*/
            if ( *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.waypoints[482] /*0x55cd81*/
                           + 4 * *(unsigned int *)&g_MissionQueueFrame.waypoints[486]) )
              goto LABEL_28; /*0x55cd81*/
            v7 = RA2_OPNEW(0x20u); /*0x55cd8d*/
            if ( v7 ) /*0x55cd94*/
            {
              v8 = v13; /*0x55cd96*/
              v9 = v14; /*0x55cd9a*/
              *(unsigned int *)(v7 + 4) = v13; /*0x55cd9e*/
              *(unsigned int *)(v7 + 8) = v9; /*0x55cda6*/
              *(unsigned int *)(v7 + 12) = 0; /*0x55cdae*/
              *(unsigned int *)v7 = &XSurface_Vtable; /*0x55cdb1*/
              *(unsigned int *)(v7 + 16) = 2; /*0x55cdb7*/
              Buffer::Init((Buffer *)(v7 + 20), 0, 2 * v9 * v8); /*0x55cdbe*/
              *(unsigned int *)v7 = &BSurface_Vtable; /*0x55cdc3*/
            }
            else
            {
              v7 = 0; /*0x55cdcb*/
            }
            *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.waypoints[482] + 4 /*0x55cdd9*/
                                                                       * *(unsigned int *)&g_MissionQueueFrame.waypoints[486]) = v7;
            v6 = *(unsigned int *)&g_MissionQueueFrame.waypoints[482]; /*0x55cddc*/
            v5 = *(unsigned int *)&g_MissionQueueFrame.waypoints[486]; /*0x55cde2*/
            bottom = v14; /*0x55cde7*/
            right = v13; /*0x55cdeb*/
            if ( *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.waypoints[482] /*0x55cdef*/
                           + 4 * *(unsigned int *)&g_MissionQueueFrame.waypoints[486]) )
            {
  LABEL_28:
              v21 = bottom; /*0x55cdf4*/
              *(unsigned int *)Buffer = 0; /*0x55ce06*/
              v19 = 0; /*0x55ce0a*/
              v20 = right; /*0x55ce0e*/
              (*(void (__thiscall **)(unsigned int, char *, DSurface *, struct tagPOINT *, unsigned int, int))(**(unsigned int **)(v6 + 4 * v5) /*0x55ce1d*/
                                                                                                 + 8))(
                *(unsigned int *)(v6 + 4 * v5),
                Buffer,
                g_DSurface_Primary,
                &v12,
                0,
                1);
              v5 = *(unsigned int *)&g_MissionQueueFrame.waypoints[486]; /*0x55ce20*/
            }
            v1 = v5 + 1; /*0x55ce26*/
            *(unsigned int *)&g_MissionQueueFrame.waypoints[486] = v1; /*0x55ce29*/
          }
        }
      }
    }
    return v1; /*0x55ce25*/

} // namespace gamemd
