// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6D1570_e4.hpp"
#include "e4/classes/E4Recv_6D1E80_e4.hpp"
#include "e4/classes/E4Recv_6D4E00_e4.hpp"

// 0x6D0F10
namespace gamemd {
void * sub_6D0F10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_6D0F10()
{
  int v0; // esi
  int *v1; // edi
  void *result; // eax
  bool v3; // cl
  bool v4; // [esp+Bh] [ebp-101h] BYREF
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  v4 = 0; /*0x6d0f18*/
  v0 = 0; /*0x6d0f1d*/
  v1 = MEMORY[0xB0C148]; /*0x6d0f1f*/
  do /*0x6d0f5a*/
  {
    sprintf(Buffer, MEMORY[0x842828], v0); /*0x6d0f2f*/
    result = LoadFileSHP(Buffer, &v4); /*0x6d0f3f*/
    v3 = v4; /*0x6d0f44*/
    *v1 = (int)result; /*0x6d0f48*/
    MEMORY[0xB0CBDC][v0] = v3; /*0x6d0f4a*/
    ++v1; /*0x6d0f50*/
    ++v0; /*0x6d0f53*/
  }
  while ( (int)v1 < (int)&MEMORY[0xB0C1AC] ); /*0x6d0f5a*/
  return result; /*0x6d0f5c*/
}
}
} // namespace gamemd

// 0x6D0FB0
namespace gamemd {
int sub_6D0FB0(int a1, int a2, int a3)
{
{
    *(int *)(a1 + 36) = a2;
    *(int *)(a1 + 80) = g_SidebarConfig;
    *(int *)(a1 + 32) = a3;
    *(char *)(a1 + 45) = 0;
    *(int *)(a1 + 48) = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6D1130
namespace gamemd {
int sub_6D1130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6D1130()
{
  void *v0; // esi

  MEMORY[0xB0CCD4] = 240; /*0x6d1149*/
  MEMORY[0xB0CD00] = MEMORY[0x87F6CC]; /*0x6d1153*/
  MEMORY[0xB0CCDD] = 0; /*0x6d1158*/
  MEMORY[0xB0CCE0] = 0; /*0x6d115e*/
  MEMORY[0xB0CCD0] = 5; /*0x6d1164*/
  v0 = MEMORY[0xB0FA90]; /*0x6d116c*/
  Rect_Point::Set(MEMORY[0xB0CCB0], *(_DWORD *)MEMORY[0xB0FC60], *((_DWORD *)MEMORY[0xB0FC60] + 1)); /*0x6d118a*/
  ShapeButton::SetShape((int)MEMORY[0xB0CCB0], (int)v0, 0, 0); /*0x6d1197*/
  MEMORY[0xB0CC64] = 241; /*0x6d11a7*/
  MEMORY[0xB0CC90] = MEMORY[0x87F6CC]; /*0x6d11b1*/
  MEMORY[0xB0CC6D] = 0; /*0x6d11b6*/
  MEMORY[0xB0CC70] = 0; /*0x6d11bc*/
  MEMORY[0xB0CC60] = 5; /*0x6d11c2*/
  Rect_Point::Set(MEMORY[0xB0CC40], *(_DWORD *)MEMORY[0xB0FC64], *((_DWORD *)MEMORY[0xB0FC64] + 1)); /*0x6d11e2*/
  return ShapeButton::SetShape((int)MEMORY[0xB0CC40], (int)v0, 0, 0); /*0x6d11f4*/
}
}
} // namespace gamemd

// 0x6D1570
namespace gamemd {
char E4Recv_6D1570::sub_6D1570()
{
{
    char result;
    int v2[6];
    char v3;
    result = this->Vf48(DataGlobal_B0CC40);
    if ( DataGlobal_B0CC40 )
  {
    v2[2] = DataGlobal_B0CC50;
    v2[1] = DataGlobal_B0CC4C;
    v2[4] = DataGlobal_B0CC58;
    v3 = 0;
    v2[0] = DataGlobal_B0CC64;
    v2[5] = g_Str_Tip_ThumbClosed;
    v2[3] = DataGlobal_B0CC54;
    HashTable::Remove((int *)g_TacticalRender, DataGlobal_B0CC64);
    return CommandClass::AddAction(g_TacticalRender, (int)v2);
  }
    return result;
}
}
} // namespace gamemd

// 0x6D1830
namespace gamemd {
void sub_6D1830()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0CD78 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6D1860
namespace gamemd {
void sub_6D1860()
{
{
    DataGlobal_B0CEB8 = DataGlobal_B0CD78 / 60.0;
}
}
} // namespace gamemd

// 0x6D1880
namespace gamemd {
void sub_6D1880()
{
{
    DataGlobal_B0CEA0 = 1.0 / DataGlobal_B0CEB8;
}
}
} // namespace gamemd

// 0x6D18A0
namespace gamemd {
void sub_6D18A0()
{
{
    DataGlobal_B0CE98 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6D18C0
namespace gamemd {
void sub_6D18C0()
{
{
    DataGlobal_B0CD88 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6D18E0
namespace gamemd {
void sub_6D18E0()
{
{
    DataGlobal_B0CD50 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6D1900
namespace gamemd {
long long sub_6D1900()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0CD50 - DataGlobal_B0CD88);
    result = Math::RoundToInt(v0 * DataGlobal_B0CD78 * 0.5);
    DataGlobal_B0CEC0 = result;
    return result;
}
}
} // namespace gamemd

// 0x6D1940
namespace gamemd {
void sub_6D1940()
{
{
    DataGlobal_B0CD90 = Math::ArcTan((double)DataGlobal_B0CEC0 * 0.00390625);
}
}
} // namespace gamemd

// 0x6D1970
namespace gamemd {
void sub_6D1970()
{
{
    DataGlobal_B0CE20 = Math::ArcTan((double)(2 * DataGlobal_B0CEC0) / DataGlobal_B0CD78);
}
}
} // namespace gamemd

// 0x6D19A0
namespace gamemd {
long long sub_6D19A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0CEC0) + 0.5);
    DataGlobal_B0CEB4 = result;
    return result;
}
}
} // namespace gamemd

// 0x6D19D0
namespace gamemd {
int sub_6D19D0()
{
{
    DataGlobal_B0CD74 = 0;
    DataGlobal_B0CD76 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6D19E0
namespace gamemd {
int sub_6D19E0()
{
{
    DataGlobal_B0CE08 = 0;
    DataGlobal_B0CE0C = 0;
    DataGlobal_B0CE10 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6D1A00
namespace gamemd {
int sub_6D1A00()
{
{
    DataGlobal_B0CEB0 = 0;
    DataGlobal_B0CEA8 = 128;
    DataGlobal_B0CEAC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6D1A20
namespace gamemd {
int sub_6D1A20()
{
{
    DataGlobal_B0CD60 = 0;
    DataGlobal_B0CD64 = 0;
    DataGlobal_B0CD68 = 0;
    DataGlobal_B0CD6C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6D1A40
namespace gamemd {
int sub_6D1A40()
{
{
    DataGlobal_B0CE28 = 0;
    DataGlobal_B0CE2C = 0;
    DataGlobal_B0CE30 = 0;
    DataGlobal_B0CE34 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6D1A60
namespace gamemd {
int sub_6D1A60()
{
{
    g_CraterPool = 0;
    DataGlobal_B0CE80 = 0;
    DataGlobal_B0CE84 = 1;
    DataGlobal_B0CE85 = 0;
    DataGlobal_B0CE78 = (int)&DataGlobal_7F429C;
    DataGlobal_B0CE8C = 10;
    g_CraterCreationState = 0;
    return atexit(sub_6D1AA0);
}
}
} // namespace gamemd

// 0x6D1AA0
namespace gamemd {
void sub_6D1AA0()
{
{
    if ( (DataGlobal_B0CD58 & 1) == 0 )
  {
    DataGlobal_B0CE78 = (int)&vt_VectorClass_DirtyAreaStruct;
    DataGlobal_B0CD58 |= 1u;
    if ( g_CraterPool )
    {
    if ( DataGlobal_B0CE85 )
      {
    __3_YAXPAX_Z(g_CraterPool);
    g_CraterPool = 0;
      }
    }
    DataGlobal_B0CE85 = 0;
    DataGlobal_B0CE80 = 0;
  }
}
}
} // namespace gamemd

// 0x6D1B10
namespace gamemd {
int sub_6D1B10()
{
{
    DataGlobal_B0CDEC = 0;
    DataGlobal_B0CDF0 = 0;
    DataGlobal_B0CDF4 = 1;
    DataGlobal_B0CDF5 = 0;
    DataGlobal_B0CDE8 = (int)&vt_DynamicVectorClass_ShadowControlClass;
    DataGlobal_B0CDFC = 10;
    DataGlobal_B0CDF8 = 0;
    return atexit(sub_6D1B50);
}
}
} // namespace gamemd

// 0x6D1B50
namespace gamemd {
void sub_6D1B50()
{
{
    if ( (DataGlobal_B0CD59 & 1) == 0 )
  {
    DataGlobal_B0CDE8 = (int)&vt_VectorClass_ShadowControlClass;
    DataGlobal_B0CD59 |= 1u;
    if ( DataGlobal_B0CDEC )
    {
    if ( DataGlobal_B0CDF5 )
      {
    __3_YAXPAX_Z(DataGlobal_B0CDEC);
    DataGlobal_B0CDEC = 0;
      }
    }
    DataGlobal_B0CDF5 = 0;
    DataGlobal_B0CDF0 = 0;
  }
}
}
} // namespace gamemd

// 0x6D1BB0
namespace gamemd {
void sub_6D1BB0()
{
{
    DataGlobal_B0CE18 = 60.0 / DataGlobal_B0CD78;
    DataGlobal_B0CD48 = Math::SinCos(DataGlobal_B0CD88) * DataGlobal_B0CE18;
}
}
} // namespace gamemd

// 0x6D1BF0
namespace gamemd {
void sub_6D1BF0()
{
{
    LightningStorm_CloudHeightFactor = DataGlobal_B0CD78 / (Math::SinCos(DataGlobal_B0CD88) * 60.0);
}
}
} // namespace gamemd

// 0x6D1E80
namespace gamemd {
void E4Recv_6D1E80::sub_6D1E80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_6D1E80(_DWORD *this)
{
  *this = &Tactical::`vftable'; /*0x6d1e80*/
  *(this + 1) = &Tactical::`vftable'; /*0x6d1e86*/
  *(this + 2) = &Tactical::`vftable'; /*0x6d1e8d*/
  *(this + 3) = &vt_Tactical; /*0x6d1e94*/
  MEMORY[0x887324] = 0; /*0x6d1e9b*/
  AbstractClass::DTOR(this); /*0x6d1ea5*/
}
}
} // namespace gamemd

// 0x6D20E0
namespace gamemd {
long long ZCoordToScreenY(IUnknown * aP0)
{
{
    return Math::RoundToInt((double)(int)aP0 * *(double *)&DataGlobal_B05488.__pad_579C[8484] + (double)((int)aP0 >= 728) + 0.5);
}
}
} // namespace gamemd

// 0x6D4E00
namespace gamemd {
void E4Recv_6D4E00::sub_6D4E00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_6D4E00(int this)
{
  this->M164 = -1; /*0x6d4e00*/
  *(_WORD *)(this + 36) = 0; /*0x6d4e0a*/
}
}
} // namespace gamemd

// 0x6D61C0
namespace gamemd {
int sub_6D61C0(int a1, int a2, int * a3, int * a4)
{
{
    int result;
    *a3 = 60 * a1 / 2;
    *a4 = 30 * a1 / 2;
    *a3 += -60 * a2 / 2;
    result = 30 * a2 / 2;
    *a4 += result;
    return result;
}
}
} // namespace gamemd

// 0x6D6A90
namespace gamemd {
long long sub_6D6A90(unsigned int * a1)
{
{
    void *v1;
    int v2;
    int v4[2];
    v1 = Coord::To_Cell(&DataGlobal_87F7E8, a1);
    v2 = *((int*)(a1) + 1);
    v4[0] = *a1;
    v4[1] = v2;
    return Isometric::InitTables((int)v1, v4);
}
}
} // namespace gamemd

// 0x6D6BB0
namespace gamemd {
unsigned int * sub_6D6BB0(unsigned short * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall sub_6D6BB0(_WORD *a1)
{
  _WORD *v1; // edi
  __int16 v2; // ax
  int v3; // esi
  _DWORD *result; // eax
  int v5; // ecx
  __int16 v6; // cx
  int v7; // esi
  int v8; // ecx
  __int16 v9; // ax
  int v10; // esi
  int v11; // ecx
  __int16 v12; // cx
  int v13; // esi
  int v14; // ecx

  v1 = a1; /*0x6d6bb2*/
  v2 = *a1 + 2; /*0x6d6bbd*/
  HIWORD(a1) = a1[1]; /*0x6d6bc1*/
  LOWORD(a1) = v2; /*0x6d6bc6*/
  v3 = 0; /*0x6d6bd3*/
  while ( 1 ) /*0x6d6bdf*/
  {
    result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6bdf*/
    v5 = result[80]; /*0x6d6be4*/
    if ( (v5 & 0x80u) != 0 && result[17] && (v5 & 0x800) != 0 ) /*0x6d6bf9*/
      break; /*0x6d6bf9*/
    ++HIWORD(a1); /*0x6d6bff*/
    if ( ++v3 >= 5 ) /*0x6d6c08*/
    {
      v6 = *v1 + 1; /*0x6d6c11*/
      HIWORD(a1) = v1[1]; /*0x6d6c13*/
      LOWORD(a1) = v6; /*0x6d6c18*/
      v7 = 0; /*0x6d6c25*/
      while ( 1 ) /*0x6d6c31*/
      {
        result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6c31*/
        v8 = result[80]; /*0x6d6c36*/
        if ( (v8 & 0x80u) != 0 && result[17] && (v8 & 0x800) != 0 ) /*0x6d6c4b*/
          break; /*0x6d6c4b*/
        ++HIWORD(a1); /*0x6d6c51*/
        if ( ++v7 >= 5 ) /*0x6d6c5a*/
        {
          v9 = v1[1] + 2; /*0x6d6c63*/
          LOWORD(a1) = *v1; /*0x6d6c67*/
          HIWORD(a1) = v9; /*0x6d6c6c*/
          v10 = 0; /*0x6d6c79*/
          while ( 1 ) /*0x6d6c85*/
          {
            result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6c85*/
            v11 = result[80]; /*0x6d6c8a*/
            if ( (v11 & 0x80u) != 0 && result[17] && (v11 & 0x800) == 0 ) /*0x6d6c9f*/
              break; /*0x6d6c9f*/
            LOWORD(a1) = (_WORD)a1 + 1; /*0x6d6ca1*/
            if ( ++v10 >= 5 ) /*0x6d6caa*/
            {
              v12 = v1[1] + 1; /*0x6d6cb3*/
              LOWORD(a1) = *v1; /*0x6d6cb5*/
              HIWORD(a1) = v12; /*0x6d6cba*/
              v13 = 0; /*0x6d6cc7*/
              while ( 1 ) /*0x6d6cd3*/
              {
                result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6cd3*/
                v14 = result[80]; /*0x6d6cd8*/
                if ( (v14 & 0x80u) != 0 && result[17] && (v14 & 0x800) == 0 ) /*0x6d6ced*/
                  break; /*0x6d6ced*/
                LOWORD(a1) = (_WORD)a1 + 1; /*0x6d6cef*/
                if ( ++v13 >= 5 ) /*0x6d6cf8*/
                  return 0; /*0x6d6cfa*/
              }
              return result; /*0x6d6ced*/
            }
          }
          return result; /*0x6d6c9f*/
        }
      }
      return result; /*0x6d6c4b*/
    }
  }
  return result; /*0x6d6cfc*/
}
}
} // namespace gamemd

// 0x6D84D0
namespace gamemd {
int * sub_6D84D0(int * a1, int * a2)
{
{
    int v2;
    int v4;
    int v5;
    int v6;
    v2 = *((int*)(a2) + 1);
    v5 = *a2;
    v6 = v2;
    if ( !ClampCoordMap(&v5) || g_ArmageddonMode )
  {
    *a1 = *a2;
    *((int*)(a1) + 1) = *((int*)(a2) + 1);
    return a1;
  }
    else
  {
    v4 = v6;
    *a1 = v5;
    *((int*)(a1) + 1) = v4;
    return a1;
  }
}
}
} // namespace gamemd

// 0x6D8640
namespace gamemd {
char ClampCoordMap(AbstractClass * aP0)
{
{
    int v1;
    int v2;
    AbstractClass *v3;
    AbstractClass *v4;
    char v5;
    AbstractClass *v6;
    v1 = *(int *)&DataGlobal_87C374.__pad_579C[21656] / 2 + 30 * (2 * *(int *)&DataGlobal_87C374.__pad_14B0[8384] - *(int *)&DataGlobal_87C374.__pad_14B0[8376]);
    v2 = v1 + 60 * *(int *)&DataGlobal_87C374.__pad_14B0[8392] - *(int *)&DataGlobal_87C374.__pad_579C[21656];
    v3 = (AbstractClass *)(*(int *)&DataGlobal_87C374.__pad_579C[21660] / 2 + 15 * (*(int *)&DataGlobal_87C374.__pad_14B0[8376] + 2 * *(int *)&DataGlobal_87C374.__pad_14B0[8388] - 5));
    v4 = *(AbstractClass **)&aP0->__pad_0[4];
    v5 = 0;
    v6 = (AbstractClass *)((char *)(v3) + (60 * *(int *)&DataGlobal_87C374.__pad_14B0[8396] + 270) / 2 - *(int *)&DataGlobal_87C374.__pad_579C[21660]);
    if ( (int)v4 >= (int)v3 )
  {
    if ( (int)v4 > (int)v6 )
    {
    *(int *)&aP0->__pad_0[4] = v6;
    v5 = 1;
    }
  }
    else
  {
    v5 = 1;
    *(int *)&aP0->__pad_0[4] = v3;
  }
    if ( *(int *)aP0->__pad_0 >= v1 )
  {
    if ( *(int *)aP0->__pad_0 <= v2 )
    {
    return v5;
    }
    else
    {
    *(int *)aP0->__pad_0 = v2;
    return 1;
    }
  }
    else
  {
    *(int *)aP0->__pad_0 = v1;
    return 1;
  }
}
}
} // namespace gamemd

// 0x6D8C60
namespace gamemd {
int sub_6D8C60(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6D8C60(int a1, int a2)
{
  _DWORD *v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // edi
  int v9; // esi
  int v10; // [esp+18h] [ebp-1Ch]
  int v12; // [esp+20h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-10h]
  _BYTE v14[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 72))(a1, v14); /*0x6d8c77*/
  v10 = v3[1]; /*0x6d8c89*/
  v4 = (-60 * v10 / 2 + 60 * *v3 / 2) / 256; /*0x6d8cf7*/
  v5 = (30 * v10 / 2 + 30 * *v3 / 2) / 256; /*0x6d8cfa*/
  v6 = Math::RoundToInt((double)(int)v3[2] * MEMORY[0xB0CD48] + (double)(v3[2] >= 728) + 0.5); /*0x6d8d21*/
  v12 = v4; /*0x6d8d2d*/
  v13 = v5 - v6; /*0x6d8d31*/
  result = (int)MEMORY[0x887324][45].__tail_0; /*0x6d8d3b*/
  v8 = v4 - (unsigned int)MEMORY[0x887324][44].__tail_0; /*0x6d8d41*/
  v9 = v13 - result; /*0x6d8d43*/
  v12 = v8; /*0x6d8d4b*/
  v13 -= result; /*0x6d8d4f*/
  if ( v8 >= -360 ) /*0x6d8d53*/
  {
    result = MEMORY[0xB0CE30] + 360; /*0x6d8d5a*/
    if ( v8 <= MEMORY[0xB0CE30] + 360 && v9 >= -180 && v9 <= MEMORY[0xB0CE34] + 180 ) /*0x6d8d79*/
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 268))(a1, &v12, a2); /*0x6d8d8a*/
      return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 272))(a1, &v12, a2); /*0x6d8d9b*/
    }
  }
  return result; /*0x6d8da1*/
}
}
} // namespace gamemd

// 0x6DC430
namespace gamemd {
int Map_GetCoordData(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Map_GetCoordData(int a1)
{
  return MEMORY[0xB0CEC8][3 * a1]; /*0x6dc43e*/
}
}
} // namespace gamemd

// 0x6DCD70
namespace gamemd {
void sub_6DCD70()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0E688 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6DCDA0
namespace gamemd {
void sub_6DCDA0()
{
{
    DataGlobal_B0E6D8 = DataGlobal_B0E688 / 60.0;
}
}
} // namespace gamemd

// 0x6DCDC0
namespace gamemd {
void sub_6DCDC0()
{
{
    DataGlobal_B0E6C0 = 1.0 / DataGlobal_B0E6D8;
}
}
} // namespace gamemd

// 0x6DCDE0
namespace gamemd {
void sub_6DCDE0()
{
{
    DataGlobal_B0E6B8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6DCE00
namespace gamemd {
void sub_6DCE00()
{
{
    DataGlobal_B0E690 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6DCE20
namespace gamemd {
void sub_6DCE20()
{
{
    DataGlobal_B0E650 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6DCE40
namespace gamemd {
long long sub_6DCE40()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0E650 - DataGlobal_B0E690);
    result = Math::RoundToInt(v0 * DataGlobal_B0E688 * 0.5);
    DataGlobal_B0E6E0 = result;
    return result;
}
}
} // namespace gamemd

// 0x6DCE80
namespace gamemd {
void sub_6DCE80()
{
{
    DataGlobal_B0E698 = Math::ArcTan((double)DataGlobal_B0E6E0 * 0.00390625);
}
}
} // namespace gamemd

// 0x6DCEB0
namespace gamemd {
void sub_6DCEB0()
{
{
    DataGlobal_B0E6B0 = Math::ArcTan((double)(2 * DataGlobal_B0E6E0) / DataGlobal_B0E688);
}
}
} // namespace gamemd

// 0x6DCEE0
namespace gamemd {
long long sub_6DCEE0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0E6E0) + 0.5);
    DataGlobal_B0E6D4 = result;
    return result;
}
}
} // namespace gamemd

// 0x6DCF10
namespace gamemd {
int sub_6DCF10()
{
{
    DataGlobal_B0E680 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6DCF20
namespace gamemd {
int sub_6DCF20()
{
{
    DataGlobal_B0E6A0 = 0;
    DataGlobal_B0E6A4 = 0;
    DataGlobal_B0E6A8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6DCF40
namespace gamemd {
int sub_6DCF40()
{
{
    DataGlobal_B0E6D0 = 0;
    DataGlobal_B0E6C8 = 128;
    DataGlobal_B0E6CC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6DCF60
namespace gamemd {
int sub_6DCF60()
{
{
    DataGlobal_B0E670 = 0;
    DataGlobal_B0E674 = 0;
    DataGlobal_B0E678 = 0;
    DataGlobal_B0E67C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6DCF80
namespace gamemd {
int sub_6DCF80()
{
{
    DataGlobal_B0E65C = 0;
    DataGlobal_B0E660 = 0;
    DataGlobal_B0E664 = 1;
    DataGlobal_B0E665 = 0;
    DataGlobal_B0E658 = (int)&DataGlobal_7F43D0;
    DataGlobal_B0E66C = 10;
    DataGlobal_B0E668 = 0;
    return atexit(sub_6DCFC0);
}
}
} // namespace gamemd

// 0x6DCFC0
namespace gamemd {
void sub_6DCFC0()
{
{
    DataGlobal_B0E658 = (int)&vt_VectorClass_TActionClass;
    if ( DataGlobal_B0E65C && DataGlobal_B0E665 )
  {
    __3_YAXPAX_Z(DataGlobal_B0E65C);
    DataGlobal_B0E65C = 0;
  }
    DataGlobal_B0E665 = 0;
    DataGlobal_B0E660 = 0;
}
}
} // namespace gamemd

// 0x6D0E50
namespace gamemd {
void nullsub_236()
{
  ;
}
} // namespace gamemd

// 0x6D2B50
namespace gamemd {
void nullsub_238(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x6D8630
namespace gamemd {
void nullsub_41()
{
  ;
}
} // namespace gamemd

// 0x6DA350
namespace gamemd {
void nullsub_42()
{
  ;
}
} // namespace gamemd

// 0x6DA370
namespace gamemd {
void nullsub_239(int a1)
{
  ;
}
} // namespace gamemd

// 0x6DC400
namespace gamemd {
void nullsub_43()
{
  ;
}
} // namespace gamemd

// 0x6DC410
namespace gamemd {
void nullsub_44()
{
  ;
}
} // namespace gamemd
