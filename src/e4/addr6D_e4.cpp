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
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/E4Recv_6E2790_e4.hpp"
#include "e4/classes/E4Recv_6E0250_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/E4Recv_6E0290_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/Isometric_e4.hpp"
#include "e4/classes/Rect_Point_e4.hpp"
#include "e4/classes/ShapeButton_e4.hpp"

// 0x6D1130
namespace gamemd {
int sub_6D1130()
{
  unsigned int v0;

  dword_B0CCD4 = 240; /*0x6d1149*/
  dword_B0CD00 = dword_87F6CC; /*0x6d1153*/
  byte_B0CCDD = 0; /*0x6d1158*/
  dword_B0CCE0 = 0; /*0x6d115e*/
  dword_B0CCD0 = 5; /*0x6d1164*/
  v0 = dword_B0FA90; /*0x6d116c*/
  Rect_Point::Set(stru_B0CCB0, *(unsigned int *)dword_B0FC60, *((unsigned int *)dword_B0FC60 + 1)); /*0x6d118a*/
  ShapeButton::SetShape((int)stru_B0CCB0, (int)v0, 0, 0); /*0x6d1197*/
  dword_B0CC64 = 241; /*0x6d11a7*/
  dword_B0CC90 = dword_87F6CC; /*0x6d11b1*/
  byte_B0CC6D = 0; /*0x6d11b6*/
  dword_B0CC70 = 0; /*0x6d11bc*/
  dword_B0CC60 = 5; /*0x6d11c2*/
  Rect_Point::Set(stru_B0CC40, *(unsigned int *)dword_B0FC64, *((unsigned int *)dword_B0FC64 + 1)); /*0x6d11e2*/
// 0x69de00
  return ShapeButton::SetShape((int)stru_B0CC40, (int)v0, 0, 0); /*0x6d11f4*/
}
}
// 0x6D6BB0
namespace gamemd {
unsigned int * sub_6D6BB0(unsigned short * a1)
{
  unsigned short *v1; // edi
  int16_t v2; // ax
  int v3; // esi
  unsigned int *result; // eax
  int v5; // ecx
  int16_t v6; // cx
  int v7; // esi
  int v8; // ecx
  int16_t v9; // ax
  int v10; // esi
  int v11; // ecx
  int16_t v12; // cx
  int v13; // esi
  int v14; // ecx

  v1 = a1; /*0x6d6bb2*/
  v2 = *a1 + 2; /*0x6d6bbd*/
  IDA_HIWORD(a1) = a1[1]; /*0x6d6bc1*/
  IDA_LOWORD(a1) = v2; /*0x6d6bc6*/
  v3 = 0; /*0x6d6bd3*/
  while ( 1 ) /*0x6d6bdf*/
  {
    result = (unsigned int *)(CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&a1));
    v5 = result[80]; /*0x6d6be4*/
    if ( (v5 & 0x80u) != 0 && result[17] && (v5 & 0x800) != 0 ) /*0x6d6bf9*/
      break; /*0x6d6bf9*/
    ++IDA_HIWORD(a1); /*0x6d6bff*/
    if ( ++v3 >= 5 ) /*0x6d6c08*/
    {
      v6 = *v1 + 1; /*0x6d6c11*/
      IDA_HIWORD(a1) = v1[1]; /*0x6d6c13*/
      IDA_LOWORD(a1) = v6; /*0x6d6c18*/
      v7 = 0; /*0x6d6c25*/
      while ( 1 ) /*0x6d6c31*/
      {
        result = (unsigned int *)(CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&a1));
        v8 = result[80]; /*0x6d6c36*/
        if ( (v8 & 0x80u) != 0 && result[17] && (v8 & 0x800) != 0 ) /*0x6d6c4b*/
          break; /*0x6d6c4b*/
        ++IDA_HIWORD(a1); /*0x6d6c51*/
        if ( ++v7 >= 5 ) /*0x6d6c5a*/
        {
          v9 = v1[1] + 2; /*0x6d6c63*/
          IDA_LOWORD(a1) = *v1; /*0x6d6c67*/
          IDA_HIWORD(a1) = v9; /*0x6d6c6c*/
          v10 = 0; /*0x6d6c79*/
          while ( 1 ) /*0x6d6c85*/
          {
            result = (unsigned int *)(CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&a1));
            v11 = result[80]; /*0x6d6c8a*/
            if ( (v11 & 0x80u) != 0 && result[17] && (v11 & 0x800) == 0 ) /*0x6d6c9f*/
              break; /*0x6d6c9f*/
            IDA_LOWORD(a1) = (unsigned short)a1 + 1; /*0x6d6ca1*/
            if ( ++v10 >= 5 ) /*0x6d6caa*/
            {
              v12 = v1[1] + 1; /*0x6d6cb3*/
              IDA_LOWORD(a1) = *v1; /*0x6d6cb5*/
              IDA_HIWORD(a1) = v12; /*0x6d6cba*/
              v13 = 0; /*0x6d6cc7*/
              while ( 1 ) /*0x6d6cd3*/
              {
                result = (unsigned int *)(CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&a1));
                v14 = result[80]; /*0x6d6cd8*/
                if ( (v14 & 0x80u) != 0 && result[17] && (v14 & 0x800) == 0 ) /*0x6d6ced*/
                  break; /*0x6d6ced*/
                IDA_LOWORD(a1) = (unsigned short)a1 + 1; /*0x6d6cef*/
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
// 0x6D0E50
namespace gamemd {
void nullsub_236()
{
  ; /*0x6d0e50*/
}
} // namespace gamemd

// 0x6D0F10
namespace gamemd {
void * sub_6D0F10()
{
  int v0; // esi
  unsigned int v1;
  void *result; // eax
  bool v3; // cl
  bool v4; // [esp+Bh] [ebp-101h] BYREF
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  v4 = 0; /*0x6d0f18*/
  v0 = 0; /*0x6d0f1d*/
  v1 = dword_B0C148; /*0x6d0f1f*/
  do /*0x6d0f5a*/
  {
    sprintf(Buffer, "Button%02d.SHP", v0); /*0x6d0f2f*/
    result = LoadFileSHP((gamemd::ConvertClass *)(Buffer),(gamemd::ConvertClass *)(&v4)); /*0x6d0f3f*/
    v3 = v4; /*0x6d0f44*/
    *(unsigned int *)(v1) = (int)result; /*0x6d0f48*/
    ((unsigned int *)(byte_B0CBDC))[v0] = v3; /*0x6d0f4a*/
    ++v1; /*0x6d0f50*/
    ++v0; /*0x6d0f53*/
  }
  while ( (int)v1 < (int)&byte_B0C1AC ); /*0x6d0f5a*/
  return result; /*0x6d0f5c*/
}
} // namespace gamemd

// 0x6D0FB0
namespace gamemd {
int sub_6D0FB0(int a1, int a2, int a3)
{
  *(unsigned int *)(a1 + 36) = a2; /*0x6d0fb0*/
  *(unsigned int *)(a1 + 80) = dword_87F6CC; /*0x6d0fbc*/
  *(unsigned int *)(a1 + 32) = a3; /*0x6d0fc1*/
  *(unsigned char *)(a1 + 45) = 0; /*0x6d0fc4*/
  *(unsigned int *)(a1 + 48) = 0; /*0x6d0fc7*/
  return 0; /*0x6d0fca*/
}
} // namespace gamemd

// 0x6D1570
namespace gamemd {
char E4Recv_6D1570::sub_6D1570()
{

  char result; // al
  int v2[6]; // [esp+4h] [ebp-1Ch] BYREF
  char v3; // [esp+1Ch] [ebp-4h]

  result = (*((int ((gamemd::ObjectClass *)(**))(ObjectClass *, GadgetClass *))this->AbstractClass + 12))(this, &stru_B0CC40); /*0x6d157a*/
  if ( &stru_B0CC40 ) /*0x6d1584*/
  {
    v2[2] = stru_B0CC40.Height; /*0x6d1597*/
    v2[1] = stru_B0CC40.Width; /*0x6d15a1*/
    v2[4] = stru_B0CC40.ID; /*0x6d15ab*/
    v3 = 0; /*0x6d15b6*/
    v2[0] = dword_B0CC64; /*0x6d15bb*/
    v2[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d15bf*/
    v2[3] = *(unsigned int *)&stru_B0CC40.Visible; /*0x6d15c7*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d15cb*/
    return CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v2); /*0x6d15db*/
  }
  return result; /*0x6d15e0*/

}
} // namespace gamemd

// 0x6D1830
namespace gamemd {
void sub_6D1830()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6d183c*/
  dbl_B0CD78 = Math::Sqrt(v0 + v0); /*0x6d184e*/
}
} // namespace gamemd

// 0x6D1860
namespace gamemd {
void sub_6D1860()
{
  dbl_B0CEB8 = dbl_B0CD78 / 60.0; /*0x6d186c*/
}
} // namespace gamemd

// 0x6D1880
namespace gamemd {
void sub_6D1880()
{
  dbl_B0CEA0 = 1.0 / dbl_B0CEB8; /*0x6d188c*/
}
} // namespace gamemd

// 0x6D18A0
namespace gamemd {
void sub_6D18A0()
{
  dbl_B0CE98 = 0.0174532925199433 * 45.0; /*0x6d18ac*/
}
} // namespace gamemd

// 0x6D18C0
namespace gamemd {
void sub_6D18C0()
{
  dbl_B0CD88 = 0.0174532925199433 * 60.0; /*0x6d18cc*/
}
} // namespace gamemd

// 0x6D18E0
namespace gamemd {
void sub_6D18E0()
{
  dbl_B0CD50 = 0.0174532925199433 * 90.0; /*0x6d18ec*/
}
} // namespace gamemd

// 0x6D1900
namespace gamemd {
long long sub_6D1900()
{
  double v0; // st7
  int64_t result; // rax

  v0 = ((Math *)(dbl_B0CD50 - dbl_B0CD88))->Sin(); /*0x6d1912*/
  result = Math::RoundToInt(v0 * dbl_B0CD78 * 0.5); /*0x6d1926*/
  dword_B0CEC0 = result; /*0x6d192b*/
  return result; /*0x6d1930*/
}
} // namespace gamemd

// 0x6D1940
namespace gamemd {
void sub_6D1940()
{
  dbl_B0CD90 = ((Math *)((double)dword_B0CEC0 * 0.00390625))->ArcTan(); /*0x6d1957*/
}
} // namespace gamemd

// 0x6D1970
namespace gamemd {
void sub_6D1970()
{
  dbl_B0CE20 = ((Math *)((double)(2 * dword_B0CEC0) / dbl_B0CD78))->ArcTan(); /*0x6d1992*/
}
} // namespace gamemd

// 0x6D19A0
namespace gamemd {
long long sub_6D19A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0CEC0) + 0.5); /*0x6d19bb*/
  dword_B0CEB4 = result; /*0x6d19c0*/
  return result; /*0x6d19c6*/
}
} // namespace gamemd

// 0x6D19D0
namespace gamemd {
int sub_6D19D0()
{
  word_B0CD74 = 0; /*0x6d19d2*/
  word_B0CD76 = 0; /*0x6d19d8*/
  return 0; /*0x6d19de*/
}
} // namespace gamemd

// 0x6D19E0
namespace gamemd {
int sub_6D19E0()
{
  dword_B0CE08 = 0; /*0x6d19e2*/
  dword_B0CE0C = 0; /*0x6d19e7*/
  dword_B0CE10 = 0; /*0x6d19ec*/
  return 0; /*0x6d19f1*/
}
} // namespace gamemd

// 0x6D1A00
namespace gamemd {
int sub_6D1A00()
{
  dword_B0CEB0 = 0; /*0x6d1a05*/
  dword_B0CEA8 = 128; /*0x6d1a0f*/
  dword_B0CEAC = 128; /*0x6d1a14*/
  return 128; /*0x6d1a19*/
}
} // namespace gamemd

// 0x6D1A20
namespace gamemd {
int sub_6D1A20()
{
  dword_B0CD60 = 0; /*0x6d1a22*/
  dword_B0CD64 = 0; /*0x6d1a27*/
  dword_B0CD68 = 0; /*0x6d1a2c*/
  dword_B0CD6C = 0; /*0x6d1a31*/
  return 0; /*0x6d1a36*/
}
} // namespace gamemd

// 0x6D1A40
namespace gamemd {
int sub_6D1A40()
{
  dword_B0CE28 = 0; /*0x6d1a42*/
  dword_B0CE2C = 0; /*0x6d1a47*/
  dword_B0CE30 = 0; /*0x6d1a4c*/
  dword_B0CE34 = 0; /*0x6d1a51*/
  return 0; /*0x6d1a56*/
}
} // namespace gamemd

// 0x6D1A60
namespace gamemd {
int sub_6D1A60()
{
  g_CraterPool = 0; /*0x6d1a67*/
  dword_B0CE80 = 0; /*0x6d1a6c*/
  byte_B0CE84 = 1; /*0x6d1a71*/
  byte_B0CE85 = 0; /*0x6d1a78*/
  dword_B0CE78 = (int)&off_7F429C; /*0x6d1a7d*/
  dword_B0CE8C = 10; /*0x6d1a87*/
  g_CraterCreationState = 0; /*0x6d1a91*/
  return atexit(sub_6D1AA0); /*0x6d1a9c*/
}
} // namespace gamemd

// 0x6D1AA0
namespace gamemd {
void sub_6D1AA0()
{
  if ( (byte_B0CD58 & 1) == 0 ) /*0x6d1aaa*/
  {
    dword_B0CE78 = (int)&VectorClass_DirtyAreaStruct_vftable; /*0x6d1aae*/
    byte_B0CD58 |= 1u; /*0x6d1ac1*/
    if ( g_CraterPool ) /*0x6d1ac7*/
    {
      if ( byte_B0CE85 ) /*0x6d1ad1*/
      {
        RA2_OPDEL(g_CraterPool); /*0x6d1ad4*/
        g_CraterPool = 0; /*0x6d1adc*/
      }
    }
    byte_B0CE85 = 0; /*0x6d1ae6*/
    dword_B0CE80 = 0; /*0x6d1aed*/
  }
}
} // namespace gamemd

// 0x6D1B10
namespace gamemd {
int sub_6D1B10()
{
  dword_B0CDEC = 0; /*0x6d1b17*/
  dword_B0CDF0 = 0; /*0x6d1b1c*/
  byte_B0CDF4 = 1; /*0x6d1b21*/
  byte_B0CDF5 = 0; /*0x6d1b28*/
  dword_B0CDE8 = (int)&DynamicVectorClass_ShadowControlClass___vftable; /*0x6d1b2d*/
  dword_B0CDFC = 10; /*0x6d1b37*/
  dword_B0CDF8 = 0; /*0x6d1b41*/
  return atexit(sub_6D1B50); /*0x6d1b4c*/
}
} // namespace gamemd

// 0x6D1B50
namespace gamemd {
void sub_6D1B50()
{
  if ( (byte_B0CD59 & 1) == 0 ) /*0x6d1b5a*/
  {
    dword_B0CDE8 = (int)&VectorClass_ShadowControlClass___vftable; /*0x6d1b5e*/
    byte_B0CD59 |= 1u; /*0x6d1b71*/
    if ( dword_B0CDEC ) /*0x6d1b77*/
    {
      if ( byte_B0CDF5 ) /*0x6d1b81*/
      {
        RA2_OPDEL(dword_B0CDEC); /*0x6d1b84*/
        dword_B0CDEC = 0; /*0x6d1b8c*/
      }
    }
    byte_B0CDF5 = 0; /*0x6d1b96*/
    dword_B0CDF0 = 0; /*0x6d1b9d*/
  }
}
} // namespace gamemd

// 0x6D1BB0
namespace gamemd {
void sub_6D1BB0()
{
  dbl_B0CE18 = 60.0 / dbl_B0CD78; /*0x6d1bc9*/
  dbl_B0CD48 = Math::SinCos(dbl_B0CD88) * dbl_B0CE18; /*0x6d1bdd*/
}
} // namespace gamemd

// 0x6D1BF0
namespace gamemd {
void sub_6D1BF0()
{
  LightningStorm_CloudHeightFactor = dbl_B0CD78 / (Math::SinCos(dbl_B0CD88) * 60.0); /*0x6d1c11*/
}
} // namespace gamemd

// 0x6D1E80
namespace gamemd {
void E4Recv_6D1E80::sub_6D1E80()
{

  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_Tactical); /*0x6d1e80*/
  *(unsigned int *)&this->Tactical_field_0x2[2] = (unsigned int)(&vt_Tactical); /*0x6d1e86*/
  this->Tactical_field_0x8[0] = (int)&vt_Tactical; /*0x6d1e8d*/
  this->Tactical_field_0xC[0] = (int)&vt_Tactical; /*0x6d1e94*/
  g_TacticalClass_Instance = 0; /*0x6d1e9b*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6d1ea5*/

}
} // namespace gamemd

// 0x6D20E0
namespace gamemd {
int ZCoordToScreenY(int aP0)
{
  int result; // eax

  IDA_LOWORD(result) = Math::RoundToInt((double)aP0 * dbl_B0CD48 + (double)(aP0 >= (IUnknown *)(728)) + 0.5); /*0x6d2113*/
  return result; /*0x6d2118*/
}
} // namespace gamemd

// 0x6D2B50
namespace gamemd {
void nullsub_238(int a1, int a2)
{
  ; /*0x6d2b50*/
}
} // namespace gamemd

// 0x6D4E00
namespace gamemd {
void E4Recv_6D4E00::sub_6D4E00()
{

  this->location[2] = -1; /*0x6d4e00*/
  LOWORD(this->occupant) = 0; /*0x6d4e0a*/

}
} // namespace gamemd

// 0x6D61C0
namespace gamemd {
int sub_6D61C0(int a1, int a2, int * a3, int * a4)
{
  int result; // eax

  *a3 = 60 * a1 / 2; /*0x6d61d6*/
  *a4 = 30 * a1 / 2; /*0x6d61e9*/
  *a3 += -60 * a2 / 2; /*0x6d6203*/
  result = 30 * a2 / 2; /*0x6d6211*/
  *a4 += result; /*0x6d6215*/
  return result; /*0x6d6205*/
}
} // namespace gamemd

// 0x6D6A90
namespace gamemd {
long long sub_6D6A90(unsigned int * a1)
{
  void *v1; // eax
  int v2; // edx
  unsigned int v4[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = ((Coord *)(&dword_87F7E8))->To_Cell(a1); /*0x6d6a9e*/
  v2 = a1[1]; /*0x6d6aa5*/
  v4[0] = *a1; /*0x6d6aa8*/
  v4[1] = v2; /*0x6d6ab3*/
// 0x47b3a0
  return Isometric::InitTables((gamemd::IUnknown *)((int)v1), v4); /*0x6d6abc*/
}
} // namespace gamemd

// 0x6D84D0
namespace gamemd {
int * sub_6D84D0(int * a1, int * a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h]

  v2 = a2[1]; /*0x6d84da*/
  v5 = *a2; /*0x6d84dd*/
  v6 = v2; /*0x6d84e6*/
  if ( !ClampCoordMap((gamemd::AbstractClass *)(&v5)) || byte_A8ED6B ) /*0x6d84fa*/
  {
    *a1 = *a2; /*0x6d851a*/
    a1[1] = a2[1]; /*0x6d851f*/
    return a1; /*0x6d8514*/
  }
  else
  {
    v4 = v6; /*0x6d8504*/
    *a1 = v5; /*0x6d8509*/
    a1[1] = v4; /*0x6d850b*/
    return a1; /*0x6d84fc*/
  }
}
} // namespace gamemd

// 0x6D8630
namespace gamemd {
void nullsub_41()
{
  ; /*0x6d8630*/
}
} // namespace gamemd

// 0x6D8640
namespace gamemd {
char ClampCoordMap(AbstractClass * aP0)
{
  int v1; // edi
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  char v5; // bl
  int v6; // eax

  v1 = (int)(dword_886FA8 / 2 + 30 * (2 * dword_87F8E4 - dword_87F8DC));
  v2 = (int)(v1 + 60 * dword_87F8EC - dword_886FA8);
  v3 = (int)(dword_886FAC / 2 + 15 * (dword_87F8DC + 2 * dword_87F8E8 - 5));
  v4 = (int)(aP0[1]);
  v5 = 0; /*0x6d86ba*/
  v6 = v3 + (60 * dword_87F8F0 + 270) / 2 - dword_886FAC; /*0x6d86bc*/
  if ( v4 >= v3 ) /*0x6d86c0*/
  {
    if ( v4 > v6 ) /*0x6d86cb*/
    {
      aP0[1] = v6; /*0x6d86cd*/
      v5 = 1; /*0x6d86d0*/
    }
  }
  else
  {
    v5 = 1; /*0x6d86c2*/
    aP0[1] = v3; /*0x6d86c4*/
  }
  if ( *aP0 >= v1 ) /*0x6d86d7*/
  {
    if ( *aP0 <= v2 ) /*0x6d86e7*/
    {
      return v5; /*0x6d86f7*/
    }
    else
    {
      *(unsigned int *)aP0 = v2; /*0x6d86e9*/
      return 1; /*0x6d86ef*/
    }
  }
  else
  {
    *(unsigned int *)aP0 = v1; /*0x6d86d9*/
    return 1; /*0x6d86df*/
  }
}
} // namespace gamemd

// 0x6D8C60
namespace gamemd {
int sub_6D8C60(int a1, int a2)
{
  unsigned int *v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // edi
  int v9; // esi
  int v10; // [esp+18h] [ebp-1Ch]
  int v12; // [esp+20h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-10h]
  unsigned char v14[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a1 + 72))(a1, v14); /*0x6d8c77*/
  v10 = v3[1]; /*0x6d8c89*/
  v4 = (-60 * v10 / 2 + 60 * *v3 / 2) / 256; /*0x6d8cf7*/
  v5 = (30 * v10 / 2 + 30 * *v3 / 2) / 256; /*0x6d8cfa*/
  v6 = Math::RoundToInt((double)(int)v3[2] * dbl_B0CD48 + (double)(v3[2] >= 728) + 0.5); /*0x6d8d21*/
  v12 = v4; /*0x6d8d2d*/
  v13 = v5 - v6; /*0x6d8d31*/
  result = (int)((unsigned int *)(g_TacticalClass_Instance))[45].__tail_0; /*0x6d8d3b*/
  v8 = v4 - (unsigned int)((unsigned int *)(g_TacticalClass_Instance))[44].__tail_0; /*0x6d8d41*/
  v9 = v13 - result; /*0x6d8d43*/
  v12 = v8; /*0x6d8d4b*/
  v13 -= result; /*0x6d8d4f*/
  if ( v8 >= -360 ) /*0x6d8d53*/
  {
    result = dword_B0CE30 + 360; /*0x6d8d5a*/
    if ( v8 <= dword_B0CE30 + 360 && v9 >= -180 && v9 <= dword_B0CE34 + 180 ) /*0x6d8d79*/
    {
      (*(void (**)(int, int *, int))(*(unsigned int *)a1 + 268))(a1, &v12, a2); /*0x6d8d8a*/
      return (*(int (**)(int, int *, int))(*(unsigned int *)a1 + 272))(a1, &v12, a2); /*0x6d8d9b*/
    }
  }
  return result; /*0x6d8da1*/
}
} // namespace gamemd

// 0x6DA350
namespace gamemd {
void nullsub_42()
{
  ; /*0x6da350*/
}
} // namespace gamemd

// 0x6DA370
namespace gamemd {
void nullsub_239(int a1)
{
  ; /*0x6da370*/
}
} // namespace gamemd

// 0x6DC400
namespace gamemd {
void nullsub_43()
{
  ; /*0x6dc400*/
}
} // namespace gamemd

// 0x6DC410
namespace gamemd {
void nullsub_44()
{
  ; /*0x6dc410*/
}
} // namespace gamemd

// 0x6DC430
namespace gamemd {
int Map_GetCoordData(int a1)
{
  return dword_B0CEC8[3 * a1]; /*0x6dc43e*/
}
} // namespace gamemd

// 0x6DCD70
namespace gamemd {
void sub_6DCD70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6dcd7c*/
  dbl_B0E688 = Math::Sqrt(v0 + v0); /*0x6dcd8e*/
}
} // namespace gamemd

// 0x6DCDA0
namespace gamemd {
void sub_6DCDA0()
{
  dbl_B0E6D8 = dbl_B0E688 / 60.0; /*0x6dcdac*/
}
} // namespace gamemd

// 0x6DCDC0
namespace gamemd {
void sub_6DCDC0()
{
  dbl_B0E6C0 = 1.0 / dbl_B0E6D8; /*0x6dcdcc*/
}
} // namespace gamemd

// 0x6DCDE0
namespace gamemd {
void sub_6DCDE0()
{
  dbl_B0E6B8 = 0.0174532925199433 * 45.0; /*0x6dcdec*/
}
} // namespace gamemd

// 0x6DCE00
namespace gamemd {
void sub_6DCE00()
{
  dbl_B0E690 = 0.0174532925199433 * 60.0; /*0x6dce0c*/
}
} // namespace gamemd

// 0x6DCE20
namespace gamemd {
void sub_6DCE20()
{
  dbl_B0E650 = 0.0174532925199433 * 90.0; /*0x6dce2c*/
}
} // namespace gamemd

// 0x6DCE40
namespace gamemd {
long long sub_6DCE40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = ((Math *)(dbl_B0E650 - dbl_B0E690))->Sin(); /*0x6dce52*/
  result = Math::RoundToInt(v0 * dbl_B0E688 * 0.5); /*0x6dce66*/
  dword_B0E6E0 = result; /*0x6dce6b*/
  return result; /*0x6dce70*/
}
} // namespace gamemd

// 0x6DCE80
namespace gamemd {
void sub_6DCE80()
{
  dbl_B0E698 = ((Math *)((double)dword_B0E6E0 * 0.00390625))->ArcTan(); /*0x6dce97*/
}
} // namespace gamemd

// 0x6DCEB0
namespace gamemd {
void sub_6DCEB0()
{
  dbl_B0E6B0 = ((Math *)((double)(2 * dword_B0E6E0) / dbl_B0E688))->ArcTan(); /*0x6dced2*/
}
} // namespace gamemd

// 0x6DCEE0
namespace gamemd {
long long sub_6DCEE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E6E0) + 0.5); /*0x6dcefb*/
  dword_B0E6D4 = result; /*0x6dcf00*/
  return result; /*0x6dcf06*/
}
} // namespace gamemd

// 0x6DCF10
namespace gamemd {
int sub_6DCF10()
{
  dword_B0E680 = 0; /*0x6dcf12*/
  return 0; /*0x6dcf1e*/
}
} // namespace gamemd

// 0x6DCF20
namespace gamemd {
int sub_6DCF20()
{
  dword_B0E6A0 = 0; /*0x6dcf22*/
  dword_B0E6A4 = 0; /*0x6dcf27*/
  dword_B0E6A8 = 0; /*0x6dcf2c*/
  return 0; /*0x6dcf31*/
}
} // namespace gamemd

// 0x6DCF40
namespace gamemd {
int sub_6DCF40()
{
  dword_B0E6D0 = 0; /*0x6dcf45*/
  dword_B0E6C8 = 128; /*0x6dcf4f*/
  dword_B0E6CC = 128; /*0x6dcf54*/
  return 128; /*0x6dcf59*/
}
} // namespace gamemd

// 0x6DCF60
namespace gamemd {
int sub_6DCF60()
{
  dword_B0E670 = 0; /*0x6dcf62*/
  dword_B0E674 = 0; /*0x6dcf67*/
  dword_B0E678 = 0; /*0x6dcf6c*/
  dword_B0E67C = 0; /*0x6dcf71*/
  return 0; /*0x6dcf76*/
}
} // namespace gamemd

// 0x6DCF80
namespace gamemd {
int sub_6DCF80()
{
  dword_B0E65C = 0; /*0x6dcf87*/
  dword_B0E660 = 0; /*0x6dcf8c*/
  byte_B0E664 = 1; /*0x6dcf91*/
  byte_B0E665 = 0; /*0x6dcf98*/
  dword_B0E658 = (int)&off_7F43D0; /*0x6dcf9d*/
  dword_B0E66C = 10; /*0x6dcfa7*/
  dword_B0E668 = 0; /*0x6dcfb1*/
  return atexit(sub_6DCFC0); /*0x6dcfbc*/
}
} // namespace gamemd

// 0x6DCFC0
namespace gamemd {
void sub_6DCFC0()
{
  dword_B0E658 = (int)&VectorClass_TActionClass___vftable; /*0x6dcfc8*/
  if ( dword_B0E65C && byte_B0E665 ) /*0x6dcfdc*/
  {
    RA2_OPDEL(dword_B0E65C); /*0x6dcfdf*/
    dword_B0E65C = 0; /*0x6dcfe7*/
  }
  byte_B0E665 = 0; /*0x6dcfed*/
  dword_B0E660 = 0; /*0x6dcff3*/
}
} // namespace gamemd
