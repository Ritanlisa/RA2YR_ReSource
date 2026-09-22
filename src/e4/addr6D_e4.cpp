// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6D04D0_e4.hpp"
#include "e4/classes/E4Recv_6D1570_e4.hpp"
#include "e4/classes/E4Recv_6D1E80_e4.hpp"
#include "e4/classes/E4Recv_6D3290_e4.hpp"
#include "e4/classes/E4Recv_6D3470_e4.hpp"
#include "e4/classes/E4Recv_6D4E00_e4.hpp"
#include "e4/classes/E4Recv_6D5730_e4.hpp"
#include "e4/classes/E4Recv_6D5C50_e4.hpp"
#include "e4/classes/E4Recv_6D6170_e4.hpp"
#include "e4/classes/E4Recv_6D9CE0_e4.hpp"
#include "e4/classes/E4Recv_6DA9D0_e4.hpp"
#include "e4/classes/E4Recv_6DC420_e4.hpp"
#include "e4/classes/LWCViewClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x6D1130
namespace gamemd {
int sub_6D1130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  DataGlobal_B0CCD4 = 240; /*0x6d1149*/
  DataGlobal_B0CD00 = g_SidebarConfig; /*0x6d1153*/
  DataGlobal_B0CCDD = 0; /*0x6d1158*/
  DataGlobal_B0CCE0 = 0; /*0x6d115e*/
  DataGlobal_B0CCD0 = 5; /*0x6d1164*/
  void * v0 = DataGlobal_B0FA90; /*0x6d116c*/
  Rect_Point::Set(DataGlobal_B0CCB0, *(_DWORD *)DataGlobal_B0FC60, *((_DWORD *)DataGlobal_B0FC60 + 1)); /*0x6d118a*/
  ShapeButton::SetShape((int)DataGlobal_B0CCB0, (int)v0, 0, 0); /*0x6d1197*/
  DataGlobal_B0CC64 = 241; /*0x6d11a7*/
  DataGlobal_B0CC90 = g_SidebarConfig; /*0x6d11b1*/
  DataGlobal_B0CC6D = 0; /*0x6d11b6*/
  DataGlobal_B0CC70 = 0; /*0x6d11bc*/
  DataGlobal_B0CC60 = 5; /*0x6d11c2*/
  Rect_Point::Set(DataGlobal_B0CC40, *(_DWORD *)DataGlobal_B0FC64, *((_DWORD *)DataGlobal_B0FC64 + 1)); /*0x6d11e2*/
  return ShapeButton::SetShape((int)DataGlobal_B0CC40, (int)v0, 0, 0); /*0x6d11f4*/
}
}
} // namespace gamemd

// 0x6D6BB0
namespace gamemd {
unsigned int * sub_6D6BB0(unsigned short * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v2; // ax
  _DWORD *result; // eax
  __int16 v6; // cx
  __int16 v9; // ax
  __int16 v12; // cx
  SpeedType *v1 = a1; /*0x6d6bb2*/
  v2 = *a1 + 2; /*0x6d6bbd*/
  HIWORD(a1) = a1[1]; /*0x6d6bc1*/
  LOWORD(a1) = v2; /*0x6d6bc6*/
  IUnknown *v3 = 0; /*0x6d6bd3*/
  while ( 1 ) /*0x6d6bdf*/
  {
    result = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a1); /*0x6d6bdf*/
    int v5 = result[80]; /*0x6d6be4*/
    if ( (v5 & 0x80u) != 0 && result[17] && (v5 & 0x800) != 0 ) /*0x6d6bf9*/
      break; /*0x6d6bf9*/
    ++HIWORD(a1); /*0x6d6bff*/
    if ( ++v3 >= 5 ) /*0x6d6c08*/
    {
      v6 = *v1 + 1; /*0x6d6c11*/
      HIWORD(a1) = v1[1]; /*0x6d6c13*/
      LOWORD(a1) = v6; /*0x6d6c18*/
      int v7 = 0; /*0x6d6c25*/
      while ( 1 ) /*0x6d6c31*/
      {
        result = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a1); /*0x6d6c31*/
        int v8 = result[80]; /*0x6d6c36*/
        if ( (v8 & 0x80u) != 0 && result[17] && (v8 & 0x800) != 0 ) /*0x6d6c4b*/
          break; /*0x6d6c4b*/
        ++HIWORD(a1); /*0x6d6c51*/
        if ( ++v7 >= 5 ) /*0x6d6c5a*/
        {
          v9 = v1[1] + 2; /*0x6d6c63*/
          LOWORD(a1) = *v1; /*0x6d6c67*/
          HIWORD(a1) = v9; /*0x6d6c6c*/
          int v10 = 0; /*0x6d6c79*/
          while ( 1 ) /*0x6d6c85*/
          {
            result = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a1); /*0x6d6c85*/
            int v11 = result[80]; /*0x6d6c8a*/
            if ( (v11 & 0x80u) != 0 && result[17] && (v11 & 0x800) == 0 ) /*0x6d6c9f*/
              break; /*0x6d6c9f*/
            LOWORD(a1) = (_WORD)a1 + 1; /*0x6d6ca1*/
            if ( ++v10 >= 5 ) /*0x6d6caa*/
            {
              v12 = v1[1] + 1; /*0x6d6cb3*/
              LOWORD(a1) = *v1; /*0x6d6cb5*/
              HIWORD(a1) = v12; /*0x6d6cba*/
              int v13 = 0; /*0x6d6cc7*/
              while ( 1 ) /*0x6d6cd3*/
              {
                result = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a1); /*0x6d6cd3*/
                int v14 = result[80]; /*0x6d6cd8*/
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

// 0x6D0E50
namespace gamemd {
void nullsub_236()
{
  ;
}
} // namespace gamemd

// 0x6D0F10
namespace gamemd {
void * sub_6D0F10()
{
{
    int v0;
    int *v1;
    void *result;
    bool v3;
    bool v4;
    char Buffer[256];
    v4 = 0;
    v0 = 0;
    v1 = DataGlobal_B0C148;
    do
  {
    sprintf(Buffer, DataGlobal_842828, v0);
    result = LoadFileSHP(Buffer, &v4);
    v3 = v4;
    *v1 = (int)result;
    DataGlobal_B0CBDC[v0] = v3;
    ++v1;
    ++v0;
  }
    while ( (int)v1 < (int)&DataGlobal_B0C1AC );
    return result;
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
{
    *(void**)this = vt_Tactical;
    this->M4 = (unsigned int)vt_Tactical;
    this->M8 = (unsigned int)vt_Tactical;
    this->M12 = &vt_Tactical;
    g_TacticalClass_Instance = 0;
    AbstractClass::DTOR(this);
}
}
} // namespace gamemd

// 0x6D20E0
namespace gamemd {
long long ZCoordToScreenY(IUnknown * aP0)
{
{
    return Math::RoundToInt((double)(int)aP0 * *(double *)&DataGlobal_B05488[30912] + (double)((int)aP0 >= 728) + 0.5);
}
}
} // namespace gamemd

// 0x6D2B50
namespace gamemd {
void nullsub_238(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x6D4E00
namespace gamemd {
void E4Recv_6D4E00::sub_6D4E00()
{
{
    this->M164 = -1;
    this->M36 = 0;
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

// 0x6D8630
namespace gamemd {
void nullsub_41()
{
  ;
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
    v1 = *(int *)&DataGlobal_87C374[44084] / 2 + 30 * (2 * *(int *)&DataGlobal_87C374[13680] - *(int *)&DataGlobal_87C374[13672]);
    v2 = v1 + 60 * *(int *)&DataGlobal_87C374[13688] - *(int *)&DataGlobal_87C374[44084];
    v3 = (AbstractClass *)(*(int *)&DataGlobal_87C374[44088] / 2 + 15 * (*(int *)&DataGlobal_87C374[13672] + 2 * *(int *)&DataGlobal_87C374[13684] - 5));
    v4 = *(AbstractClass **)&aP0->__pad_0[4];
    v5 = 0;
    v6 = (AbstractClass *)((char *)(v3) + (60 * *(int *)&DataGlobal_87C374[13692] + 270) / 2 - *(int *)&DataGlobal_87C374[44088]);
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
{
    int *v3;
    int v4;
    int v5;
    int v6;
    int result;
    int v8;
    int v9;
    int v10;
    int v12;
    int v13;
    char v14[12];
    v3 = (int *)(*(int (__thiscall **)(int, char *))(*(int *)(a1) + 72))(a1, v14);
    v10 = v3[1];
    v4 = (-60 * v10 / 2 + 60 * *v3 / 2) / 256;
    v5 = (30 * v10 / 2 + 30 * *v3 / 2) / 256;
    v6 = Math::RoundToInt((double)(int)v3[2] * DataGlobal_B0CD48 + (double)(v3[2] >= 728) + 0.5);
    v12 = v4;
    v13 = v5 - v6;
    result = (int)g_TacticalClass_Instance[45].__tail_0;
    v8 = v4 - (unsigned int)g_TacticalClass_Instance[44].__tail_0;
    v9 = v13 - result;
    v12 = v8;
    v13 -= result;
    if ( v8 >= -360 )
  {
    result = DataGlobal_B0CE30 + 360;
    if ( v8 <= DataGlobal_B0CE30 + 360 && v9 >= -180 && v9 <= DataGlobal_B0CE34 + 180 )
    {
    (*(void (__thiscall **)(int, int *, int))(*(int *)(a1) + 268))(a1, &v12, a2);
    return (*(int (__thiscall **)(int, int *, int))(*(int *)(a1) + 272))(a1, &v12, a2);
    }
  }
    return result;
}
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

// 0x6DC430
namespace gamemd {
int Map_GetCoordData(int a1)
{
{
    return DataGlobal_B0CEC8[3 * a1];
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
