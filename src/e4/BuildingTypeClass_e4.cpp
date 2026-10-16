// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Matrix_e4.hpp"
#include "e4/classes/VoxelSection_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/Checksum_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/AbstractTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x45DD90
namespace gamemd {  // G42.18 ns repair
int BuildingTypeClass::ConstructFull(char * Source, void *a2)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  unsigned int *v7; // edx
  unsigned int *v8; // eax
  int v9; // ecx
  unsigned int *v10; // ebp
  unsigned int *v11; // ebp
  unsigned int *v12; // eax
  int v13; // edi
  int v14; // edx
  unsigned int *v15; // eax
  int v16; // edi
  int v17; // edx
  unsigned int *v18; // eax
  int v19; // ecx
  unsigned int *v20; // edi

  TechnoTypeClass::ReadINI((char *)a2, a2, 0); /*0x45dda1*/
  *(unsigned int *)((unsigned int)(a2)+ 3576) = -1; /*0x45ddaf*/
  *(unsigned int *)((unsigned int)(a2)+ 3580) = 0; /*0x45ddb5*/
  *(unsigned int *)((unsigned int)(a2)+ 3584) = 0; /*0x45ddbb*/
  *(unsigned char *)((unsigned int)(a2)+ 3588) = 0; /*0x45ddc1*/
  *(unsigned int *)((unsigned int)(a2)+ 3592) = 0; /*0x45ddc7*/
  *(unsigned int *)((unsigned int)(a2)+ 3596) = dword_89C8D0; /*0x45ddd3*/
  *(unsigned int *)((unsigned int)(a2)+ 3600) = dword_89C8D4; /*0x45ddda*/
  *(unsigned int *)((unsigned int)(a2)+ 3604) = dword_89C8D8; /*0x45dde9*/
  *(unsigned int *)((unsigned int)(a2)+ 3608) = dword_89C8D0; /*0x45ddf2*/
  *(unsigned int *)((unsigned int)(a2)+ 3612) = dword_89C8D4; /*0x45ddfa*/
  *(unsigned int *)((unsigned int)(a2)+ 3616) = dword_89C8D8; /*0x45de03*/
  *(unsigned int *)((unsigned int)(a2)+ 3624) = 0; /*0x45de06*/
  *(unsigned int *)((unsigned int)(a2)+ 3628) = 0; /*0x45de0c*/
  *(unsigned int *)((unsigned int)(a2)+ 3632) = 5000; /*0x45de12*/
  *(unsigned int *)((unsigned int)(a2)+ 3636) = 0; /*0x45de21*/
  *(unsigned int *)((unsigned int)(a2)+ 3640) = 1000000; /*0x45de27*/
  *(unsigned int *)((unsigned int)(a2)+ 3644) = 1000000; /*0x45de2d*/
  *(unsigned int *)((unsigned int)(a2)+ 3648) = 1000000; /*0x45de33*/
  *(unsigned int *)((unsigned int)(a2)+ 3652) = 0xFFFF; /*0x45de40*/
  *(unsigned int *)((unsigned int)(a2)+ 3656) = 0xFFFF; /*0x45de46*/
  *(unsigned int *)((unsigned int)(a2)+ 3660) = 0xFFFF; /*0x45de4c*/
  *(unsigned int *)((unsigned int)(a2)+ 3664) = 0xFFFF; /*0x45de52*/
  *(unsigned int *)((unsigned int)(a2)+ 3668) = 0; /*0x45de58*/
  *(unsigned int *)((unsigned int)(a2)+ 3672) = 0; /*0x45de5e*/
  *(unsigned int *)((unsigned int)(a2)+ 3692) = -1; /*0x45de64*/
  *(unsigned int *)((unsigned int)(a2)+ 3696) = -1; /*0x45de6a*/
  *(unsigned int *)((unsigned int)(a2)+ 3700) = -1; /*0x45de70*/
  *(unsigned int *)((unsigned int)(a2)+ 3704) = -1; /*0x45de76*/
  *(unsigned int *)((unsigned int)(a2)+ 3708) = -1; /*0x45de7c*/
  *(unsigned int *)((unsigned int)(a2)+ 3712) = -1; /*0x45de82*/
  *(unsigned int *)((unsigned int)(a2)+ 3716) = -1; /*0x45de88*/
  *(unsigned int *)((unsigned int)(a2)+ 3744) = 0; /*0x45de8e*/
  *(unsigned int *)((unsigned int)(a2)+ 3748) = 0; /*0x45de94*/
  *(unsigned int *)((unsigned int)(a2)+ 3752) = 0; /*0x45de9a*/
  *(unsigned int *)((unsigned int)(a2)+ 3756) = 0; /*0x45dea0*/
  *(unsigned int *)((unsigned int)(a2)+ 3760) = -1; /*0x45dea6*/
  *(unsigned int *)((unsigned int)(a2)+ 3764) = 3; /*0x45deac*/
  *(unsigned int *)((unsigned int)(a2)+ 3768) = 0; /*0x45deb6*/
  *(unsigned int *)((unsigned int)(a2)+ 3772) = 0; /*0x45debc*/
  *(unsigned int *)((unsigned int)(a2)+ 3776) = 0; /*0x45dec2*/
  *(unsigned int *)((unsigned int)(a2)+ 3780) = 0; /*0x45dec8*/
  *(unsigned int *)((unsigned int)(a2)+ 3784) = 0; /*0x45dece*/
  *(unsigned int *)((unsigned int)(a2)+ 3788) = 0; /*0x45ded4*/
  *(unsigned int *)((unsigned int)(a2)+ 3792) = 0; /*0x45deda*/
  *(unsigned int *)((unsigned int)(a2)+ 3796) = 0; /*0x45dee0*/
  *(unsigned int *)((unsigned int)(a2)+ 3800) = 0; /*0x45dee6*/
  *(unsigned int *)((unsigned int)(a2)+ 3804) = 128; /*0x45deec*/
  *(unsigned int *)((unsigned int)(a2)+ 3808) = 0; /*0x45def6*/
  *(unsigned int *)((unsigned int)(a2)+ 3812) = 0; /*0x45defc*/
  *(unsigned int *)((unsigned int)(a2)+ 3816) = 0; /*0x45df02*/
  *(unsigned int *)((unsigned int)(a2)+ 3820) = 0; /*0x45df08*/
  *(unsigned int *)((unsigned int)(a2)+ 3824) = 0; /*0x45df13*/
  *(unsigned int *)((unsigned int)(a2)+ 3828) = 2; /*0x45df19*/
  *(unsigned int *)((unsigned int)(a2)+ 3832) = 2; /*0x45df1f*/
  *(unsigned int *)((unsigned int)(a2)+ 3836) = 0; /*0x45df25*/
  *(unsigned int *)((unsigned int)(a2)+ 3840) = 0; /*0x45df2b*/
  *(unsigned int *)((unsigned int)(a2)+ 5344) = 0; /*0x45df31*/
  *(unsigned int *)((unsigned int)(a2)+ 5348) = 0; /*0x45df37*/
  *(unsigned int *)((unsigned int)(a2)+ 5356) = 0; /*0x45df3d*/
  *(unsigned int *)((unsigned int)(a2)+ 5364) = 0; /*0x45df43*/
  *(unsigned int *)((unsigned int)(a2)+ 5372) = 0; /*0x45df49*/
  *(unsigned int *)((unsigned int)(a2)+ 5380) = 0; /*0x45df4f*/
  *(unsigned int *)((unsigned int)(a2)+ 5388) = 0; /*0x45df55*/
  *(unsigned int *)((unsigned int)(a2)+ 5392) = 0; /*0x45df5b*/
  *(unsigned int *)((unsigned int)(a2)+ 5396) = 0; /*0x45df61*/
  *(unsigned int *)((unsigned int)(a2)+ 5400) = 0; /*0x45df67*/
  *(unsigned char *)((unsigned int)(a2)+ 5404) = 0; /*0x45df6d*/
  *(unsigned int *)((unsigned int)(a2)+ 5408) = 0; /*0x45df73*/
  *(unsigned int *)((unsigned int)(a2)+ 5412) = 0; /*0x45df79*/
  *(unsigned int *)((unsigned int)(a2)+ 5416) = 0; /*0x45df7f*/
  *(unsigned int *)((unsigned int)(a2)+ 5420) = 0; /*0x45df87*/
  *(unsigned int *)((unsigned int)(a2)+ 5424) = 0; /*0x45df8d*/
  *(unsigned int *)((unsigned int)(a2)+ 5428) = 0; /*0x45df93*/
  *(unsigned int *)((unsigned int)(a2)+ 5432) = dword_89C8A0; /*0x45dfa4*/
  *(unsigned int *)((unsigned int)(a2)+ 5436) = dword_89C8A4; /*0x45dfb0*/
  *(unsigned int *)((unsigned int)(a2)+ 5440) = dword_89C8A8; /*0x45dfb8*/
  v3 = dword_89C8AC; /*0x45dfbb*/
  *(unsigned char *)((unsigned int)(a2)+ 5454) = 0; /*0x45dfc3*/
  *(unsigned int *)((unsigned int)(a2)+ 5444) = v3; /*0x45dfc9*/
  *(unsigned short *)((unsigned int)(a2)+ 5448) = 0; /*0x45dfcc*/
  *(unsigned char *)((unsigned int)(a2)+ 5450) = 1; /*0x45dfd3*/
  a2->u8_154B = 0; /*0x45dfda*/
  a2->u8_154C = 0; /*0x45dfe0*/
  a2->u32_1618 = 0; /*0x45dfe6*/
  a2->u8_154D = 0; /*0x45dfec*/
  a2->u8_154F = 1; /*0x45dff2*/
  a2->u8_1550 = 0; /*0x45dff9*/
  a2->u8_1551 = 0; /*0x45dfff*/
  a2->u8_1552 = 0; /*0x45e005*/
  a2->u32_1554 = -1; /*0x45e00b*/
  a2->u32_1558 = 0; /*0x45e011*/
  a2->u32_155C = 0; /*0x45e017*/
  a2->u32_1560 = 0; /*0x45e01d*/
  a2->u32_1564 = 0; /*0x45e023*/
  a2->u32_1568 = 0; /*0x45e029*/
  a2->u32_156C = 25; /*0x45e02f*/
  a2->u8_1570 = 0; /*0x45e039*/
  a2->u8_1571 = 0; /*0x45e03f*/
  a2->u8_1572 = 0; /*0x45e045*/
  a2->u8_1573 = 0; /*0x45e04b*/
  a2->u8_1574 = 0; /*0x45e051*/
  a2->u8_1575 = 0; /*0x45e057*/
  a2->u8_1576 = 0; /*0x45e05d*/
  a2->u8_1577 = 1; /*0x45e063*/
  a2->u8_1578 = 0; /*0x45e06a*/
  a2->u8_1579 = 0; /*0x45e070*/
  a2->u8_157A = 1; /*0x45e076*/
  a2->u8_157B = 0; /*0x45e07d*/
  a2->u8_157C = 0; /*0x45e083*/
  a2->u32_1580 = 0; /*0x45e089*/
  a2->u8_1584 = 1; /*0x45e08f*/
  a2->u32_161C = 0; /*0x45e096*/
  a2->u32_1620 = -1; /*0x45e09c*/
  a2->u8_16A4 = 0; /*0x45e0a2*/
  a2->u8_16A5 = 0; /*0x45e0a8*/
  a2->u8_16A6 = 0; /*0x45e0ae*/
  a2->u8_16A7 = 0; /*0x45e0b4*/
  a2->u8_16A8 = 0; /*0x45e0ba*/
  a2->u8_16A9 = 0; /*0x45e0c0*/
  a2->u8_16AA = 0; /*0x45e0c6*/
  a2->u8_16AB = 0; /*0x45e0cc*/
  a2->u8_16AC = 0; /*0x45e0d2*/
  a2->u8_16AD = 0; /*0x45e0d8*/
  a2->u8_16AE = 0; /*0x45e0de*/
  a2->u8_16AF = 0; /*0x45e0e4*/
  a2->u8_16B0 = 0; /*0x45e0ea*/
  a2->u8_16B1 = 0; /*0x45e0f0*/
  a2->u8_16B2 = 0; /*0x45e0f6*/
  a2->u8_16B3 = 0; /*0x45e0fc*/
  a2->u8_16B4 = 0; /*0x45e102*/
  a2->u8_16B5 = 1; /*0x45e108*/
  a2->u8_16B6 = 0; /*0x45e10f*/
  a2->u8_16B7 = 0; /*0x45e115*/
  a2->u8_16B8 = 0; /*0x45e11b*/
  a2->u8_16B9 = 0; /*0x45e121*/
  a2->u8_16BA = 0; /*0x45e127*/
  a2->u8_16BB = 0; /*0x45e12d*/
  a2->u8_16BC = 0; /*0x45e133*/
  a2->u8_16BD = 0; /*0x45e139*/
  a2->u8_16BE = 0; /*0x45e13f*/
  a2->u8_16BF = 0; /*0x45e145*/
  a2->u8_16C0 = 0; /*0x45e14b*/
  a2->u8_16C1 = 0; /*0x45e151*/
  a2->u8_16C2 = 0; /*0x45e157*/
  a2->u8_16C3 = 0; /*0x45e15d*/
  a2->u8_16C4 = 0; /*0x45e163*/
  a2->u8_16C5 = 0; /*0x45e169*/
  a2->u8_16C6 = 0; /*0x45e16f*/
  a2->u8_16C7 = 0; /*0x45e175*/
  a2->u8_16C8 = 0; /*0x45e17b*/
  a2->u8_16C9 = 0; /*0x45e181*/
  a2->u8_16CA = 0; /*0x45e187*/
  a2->u8_16CB = 0; /*0x45e18d*/
  a2->u8_16CC = 0; /*0x45e193*/
  a2->u8_16CD = 0; /*0x45e19e*/
  a2->u32_16D0 = 1065353216; /*0x45e1a4*/
  a2->u32_16D4 = 1065353216; /*0x45e1aa*/
  a2->u32_16D8 = 1065353216; /*0x45e1b0*/
  a2->u32_16DC = 1065353216; /*0x45e1b6*/
  a2->u32_16E0 = 1065353216; /*0x45e1bc*/
  a2->u8_16E4 = 0; /*0x45e1c2*/
  a2->u8_16E5 = 0; /*0x45e1c8*/
  a2->u8_16E6 = 0; /*0x45e1ce*/
  a2->u32_16E8 = 1148829696; /*0x45e1d4*/
  a2->u32_16EC = 0; /*0x45e1de*/
  a2->u32_16F0 = -1; /*0x45e1e4*/
  a2->u32_16F4 = -1; /*0x45e1ea*/
  a2->u32_16F8 = 9; /*0x45e1f0*/
  a2->u32_16FC = -1; /*0x45e1fa*/
  a2->u8_1700 = 0; /*0x45e200*/
  a2->u8_1701 = 0; /*0x45e206*/
  a2->u8_1702 = 0; /*0x45e20c*/
  a2->u8_1703 = 0; /*0x45e212*/
  a2->u8_1704 = 1; /*0x45e218*/
  a2->u8_1705 = 0; /*0x45e21f*/
  a2->u8_1706 = 0; /*0x45e225*/
  a2->u8_1707 = 20; /*0x45e22b*/
  a2->u8_1708 = 0; /*0x45e232*/
  a2->u32_170C = 0; /*0x45e238*/
  a2->u32_1710 = 64; /*0x45e23e*/
  a2->u8_1760 = 0; /*0x45e248*/
  a2->u8_1761 = 0; /*0x45e24e*/
  a2->u8_1762 = 0; /*0x45e254*/
  a2->u8_1763 = 0; /*0x45e25a*/
  a2->u8_1764 = 0; /*0x45e260*/
  a2->u8_1765 = 0; /*0x45e266*/
  a2->u8_1766 = 1; /*0x45e26c*/
  a2->u8_1767 = 0; /*0x45e273*/
  a2->u8_1768 = 0; /*0x45e279*/
  a2->u8_1769 = 0; /*0x45e284*/
  a2->u32_1780 = 1; /*0x45e28a*/
  a2->u32_1788 = 0; /*0x45e292*/
  a2->u32_178C = 1; /*0x45e298*/
  a2->u8_1790 = 1; /*0x45e29e*/
  a2->u8_1791 = 0; /*0x45e2a5*/
  a2->u32_1784 = &vt_VectorClassTPoint3D; /*0x45e2ab*/
  a2->u32_1788 = operator new(0xCu); /*0x45e2ba*/
  a2->u8_1791 = 1; /*0x45e2c6*/
  *(unsigned int *)a2 = (unsigned int)(&vt_BuildingTypeClass); /*0x45e2cd*/
  *(unsigned int *)(a2 + 4) = (unsigned int)(&vt_BuildingTypeClass); /*0x45e2d3*/
  a2->VtableStub_8 = &vt_BuildingTypeClass; /*0x45e2d9*/
  a2->u32_C = &vt_BuildingTypeClass; /*0x45e2e1*/
  (a2 + 4)->GenerateUniqueID(); /*0x45e2e8*/
  v4 = dword_A83C78; /*0x45e2ed*/
  if ( dword_A83C78 < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(uint8_t (**)(int *, int, unsigned int))(dword_A83C68 + 8))(
               &dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = dword_A83C78,
        !v5) )
  {
    dword_A83C78 = v4 + 1; /*0x45e330*/
    *((unsigned int *)dword_A83C6C + v4) = (unsigned int)(a2); /*0x45e33a*/
    v4 = dword_A83C78; /*0x45e33d*/
  }
  v6 = 0; /*0x45e342*/
  if ( v4 <= 0 ) /*0x45e346*/
  {
    LABEL_11:
    v6 = -1; /*0x45e35a*/
  }
  else
  {
    v7 = (unsigned int *)(dword_A83C6C); /*0x45e348*/
    while ( *v7 != a2 ) /*0x45e350*/
    {
      ++v6; /*0x45e352*/
      ++v7; /*0x45e353*/
      if ( v6 >= v4 ) /*0x45e358*/
        goto LABEL_11; /*0x45e358*/
    }
  }
  a2->u32_DF8 = v6; /*0x45e35c*/
  a2->u32_F04 = 0; /*0x45e362*/
  a2->u32_F08 = 1; /*0x45e368*/
  a2->u32_F0C = 0; /*0x45e36e*/
  a2->u32_F10 = 0; /*0x45e374*/
  a2->u32_F14 = 1; /*0x45e37a*/
  a2->u32_F18 = 0; /*0x45e380*/
  a2->u32_F1C = 0; /*0x45e386*/
  a2->u32_F20 = 1; /*0x45e38c*/
  a2->u32_F24 = 0; /*0x45e392*/
  a2->u32_F34 = 0; /*0x45e398*/
  a2->u32_F38 = 1; /*0x45e39e*/
  a2->u32_F3C = 0; /*0x45e3a4*/
  a2->u32_F40 = 0; /*0x45e3aa*/
  a2->u32_F44 = 1; /*0x45e3b0*/
  a2->u32_F48 = 0; /*0x45e3b6*/
  v8 = &a2->u32_F5C; /*0x45e3be*/
  v9 = 21; /*0x45e3c4*/
  do /*0x45e414*/
  {
    v10 = v8 - 4; /*0x45e3c9*/
    *v10 = 0; /*0x45e3ce*/
    v10[1] = 0; /*0x45e3d1*/
    v10[2] = 0; /*0x45e3d4*/
    v10[3] = 0; /*0x45e3d7*/
    *v8 = 0; /*0x45e3dc*/
    v8[1] = 0; /*0x45e3df*/
    v8[2] = 0; /*0x45e3e2*/
    v8[3] = 0; /*0x45e3e5*/
    v11 = v8 + 4; /*0x45e3e8*/
    v8 += 17; /*0x45e3eb*/
    --v9; /*0x45e3ee*/
    *v11 = 0; /*0x45e3ef*/
    v11[1] = 0; /*0x45e3f2*/
    v11[2] = 0; /*0x45e3f5*/
    v11[3] = 0; /*0x45e3f8*/
    *(v8 - 9) = 0; /*0x45e3fb*/
    *(v8 - 8) = 0; /*0x45e3fe*/
    *(v8 - 7) = 0; /*0x45e401*/
    *(v8 - 6) = 0; /*0x45e404*/
    *((unsigned char *)v8 - 20) = 1; /*0x45e407*/
    *((unsigned char *)v8 - 19) = 0; /*0x45e40b*/
    *((unsigned char *)v8 - 18) = 0; /*0x45e40e*/
    *((unsigned char *)v8 - 17) = 0; /*0x45e411*/
  }
  while ( v9 ); /*0x45e414*/
  a2->u8_E5C = 0; /*0x45e416*/
  a2->u8_E88 = 0; /*0x45e41c*/
  a2->u8_176A = 0; /*0x45e422*/
  a2->u8_1714 = 0; /*0x45e428*/
  a2->u8_C8E = 0; /*0x45e42e*/
  a2->u8_14E8 = 0; /*0x45e434*/
  a2->u8_14F0 = 0; /*0x45e43a*/
  a2->u8_14F8 = 0; /*0x45e440*/
  a2->u8_1500 = 0; /*0x45e446*/
  a2->u8_1508 = 0; /*0x45e44c*/
  v12 = &a2->u32_1588; /*0x45e452*/
  v13 = 10; /*0x45e458*/
  do /*0x45e472*/
  {
    v14 = dword_89C8D4; /*0x45e463*/
    *v12 = dword_89C8D0; /*0x45e469*/
    v12[1] = v14; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = &a2->u32_15D8; /*0x45e474*/
  v16 = 8; /*0x45e47a*/
  do /*0x45e494*/
  {
    v17 = dword_89C8D4; /*0x45e485*/
    *v15 = dword_89C8D0; /*0x45e48b*/
    v15[1] = v17; /*0x45e48d*/
    v15 += 2; /*0x45e490*/
    --v16; /*0x45e493*/
  }
  while ( v16 ); /*0x45e494*/
  v18 = &a2->u32_1664; /*0x45e49b*/
  v19 = 8; /*0x45e4a7*/
  do /*0x45e4c4*/
  {
    *(v18 - 16) = 0xFFFF; /*0x45e4ac*/
    *(v18 - 15) = 0xFFFF; /*0x45e4b4*/
    *v18 = 0xFFFF; /*0x45e4b7*/
    v18[1] = 0xFFFF; /*0x45e4bd*/
    v18 += 2; /*0x45e4c0*/
    --v19; /*0x45e4c3*/
  }
  while ( v19 ); /*0x45e4c4*/
  v20 = a2->u32_1788; /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20->u32_4 = 0; /*0x45e4d6*/
  v20->u32_8 = 0; /*0x45e4d9*/
  a2->u8_D35 = 1; /*0x45e4dc*/
  a2->u8_D36 = 1; /*0x45e4e3*/
  a2->u8_D3B = 0; /*0x45e4ea*/
  a2->u8_D38 = 0; /*0x45e4f0*/
  a2->u8_D97 = 0; /*0x45e4f6*/
  a2->u8_D96 = 0; /*0x45e4fc*/
  a2->u8_D2E = 0; /*0x45e502*/
  return (int)(a2); /*0x45e508*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x45E520
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_545E520(int aP1)
{

  TechnoTypeClass::Construct((int)this, aP1); /*0x45e528*/
  this->Buildup[0] = 0; /*0x45e52f*/
  *&this->PreventsPlacementOverlap = 0; /*0x45e535*/
  *&this->ProductionCompletionThreshold = 0; /*0x45e53b*/
  this->CostRatePerFrame = 1; /*0x45e541*/
  this->u32_1791 = 0; /*0x45e548*/
  *&this->DockingOffsets = (unsigned int)(&vt_VectorClassTPoint3D); /*0x45e54e*/
  this->TechnoTypeClass = &vt_BuildingTypeClass; /*0x45e558*/
  /* X11: vtable install elided (implicit via BuildingTypeClass virtuals 0x45e55e) */
  /* X11: vtable install elided (implicit via BuildingTypeClass virtuals 0x45e565) */
  /* X11: vtable install elided (implicit via BuildingTypeClass virtuals 0x45e56c) */
  return &this->TechnoTypeClass; /*0x45e575*/

}
} // namespace gamemd
// 0x45E580
namespace gamemd {
AbstractClass * * BuildingTypeClass::CleanupMembers(AbstractClass * a1, AbstractClass * a2)
{


  char BuildupLoaded; // al
  BuildupLoaded = (char)(a1->BuildupLoaded); /*0x45e587*/
  a1->TechnoTypeClass = &vt_BuildingTypeClass; /*0x45e58d*/
  /* X11: vtable install elided (implicit via BuildingTypeClass virtuals 0x45e595) */
  /* X11: vtable install elided (implicit via BuildingTypeClass virtuals 0x45e59c) */
  /* X11: vtable install elided (implicit via BuildingTypeClass virtuals 0x45e5a3) */
  if ( BuildupLoaded && a1->Buildup[0] ) /*0x45e5ac*/
  {
    __3_YAXPAX_Z((void *)a1->Buildup[0]); /*0x45e5b7*/
    a1->Buildup[0] = 0; /*0x45e5bf*/
    a1->BuildupLoaded = 0; /*0x45e5c5*/
  }
  if ( a1->BibShapeLoaded && *&a1->BibShape ) /*0x45e5d3*/
  {
    __3_YAXPAX_Z(*&a1->BibShape); /*0x45e5de*/
    *&a1->BibShape = 0; /*0x45e5e6*/
    a1->BibShapeLoaded = 0; /*0x45e5ec*/
  }
  if ( a1->DeployingAnimLoaded_d && *&a1->DeployingAnim_2 ) /*0x45e5fa*/
  {
    __3_YAXPAX_Z(*&a1->DeployingAnim_2); /*0x45e605*/
    *&a1->DeployingAnim_2 = 0; /*0x45e60d*/
    a1->DeployingAnimLoaded_d = 0; /*0x45e613*/
  }
  if ( a1->UnderDoorAnimLoaded_d && *&a1->UnderDoorAnim_d ) /*0x45e621*/
  {
    __3_YAXPAX_Z(*&a1->UnderDoorAnim_d); /*0x45e62c*/
    *&a1->UnderDoorAnim_d = 0; /*0x45e634*/
    a1->UnderDoorAnimLoaded_d = 0; /*0x45e63a*/
  }
  if ( a1->RubbleLoaded_d && *&a1->Rubble_d ) /*0x45e648*/
  {
    __3_YAXPAX_Z(*&a1->Rubble_d); /*0x45e653*/
    *&a1->Rubble_d = 0; /*0x45e65b*/
    a1->RubbleLoaded_d = 0; /*0x45e661*/
  }
  if ( a1->RoofDeployingAnimLoaded && *&a1->RoofDeployingAnim ) /*0x45e66f*/
  {
    __3_YAXPAX_Z(*&a1->RoofDeployingAnim); /*0x45e67a*/
    *&a1->RoofDeployingAnim = 0; /*0x45e682*/
    a1->RoofDeployingAnimLoaded = 0; /*0x45e688*/
  }
  if ( a1->UnderRoofDoorAnimLoaded && *&a1->UnderRoofDoorAnim ) /*0x45e696*/
  {
    __3_YAXPAX_Z(*&a1->UnderRoofDoorAnim); /*0x45e6a1*/
    *&a1->UnderRoofDoorAnim = 0; /*0x45e6a9*/
    a1->UnderRoofDoorAnimLoaded = 0; /*0x45e6af*/
  }
  AbstractClass::AnnounceExpiredPointer(&a1->TechnoTypeClass, 1); /*0x45e6b9*/
  BuildingTypeClass *v6; // [esp+8h] [ebp-4h] BYREF
  v6 = (gamemd::BuildingTypeClass *)(a1); /*0x45e6ce*/
  int v3; // eax
  v3 = (*(int (**)(unsigned int *, BuildingTypeClass **))(dword_A83C68 + 16))(&dword_A83C68, &v6); /*0x45e6d2*/
  if ( v3 != -1 && v3 < dword_A83C78 && v3 < --dword_A83C78 ) /*0x45e6ed*/
  {
    do /*0x45e705*/
    {
      ++v3; /*0x45e6f5*/
      *((unsigned int *)dword_A83C6C + v3 - 1) = *((unsigned int *)dword_A83C6C + v3); /*0x45e6f9*/
    }
    while ( v3 < dword_A83C78 ); /*0x45e705*/
  }
  void *v4 = *&a1->PreventsPlacementOverlap; // eax /*0x45e707*/
  *&a1->DockingOffsets = &vt_VectorClassTPoint3D; /*0x45e70d*/
  if ( v4 && a1->u32_1791 ) /*0x45e71b*/
  {
    __3_YAXPAX_Z(v4); /*0x45e724*/
    *&a1->PreventsPlacementOverlap = 0; /*0x45e72c*/
  }
  a1->u32_1791 = 0; /*0x45e734*/
  *&a1->ProductionCompletionThreshold = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR((int)a1); /*0x45e745*/

}
} // namespace gamemd
// 0x45E970
namespace gamemd {
AbstractClass * * BuildingTypeClass::LoadRepairAnimations()
{
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  int v1; // ecx
  v1 = v1; /*0x45e97a*/
  ProcessDataCCFileClass(); /*0x45e97c*/
  FileSystem_POWEROFF_SHP = (int)(SearchMIXFile(aPoweroffShp, 0)); /*0x45e994*/
  FileSystem_WRENCH_SHP = (int)(SearchMIXFile(aWrenchShp, 0)); /*0x45e99e*/
  int v3 = 0; // ebp /*0x45e9aa*/
  int v9; // [esp+10h] [ebp-204h]
  v9 = 0; /*0x45e9ae*/
  if ( dword_A83C78 > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      int v4; // esi
      v4 = *((unsigned int *)dword_A83C6C + v3); /*0x45e9c1*/
      if ( v9 <= v4->u32_1707 ) /*0x45e9cd*/
        v9 = v4->u32_1707; /*0x45e9cf*/
      if ( v4->Theater_d ) /*0x45e9d3*/
      {
        if ( v4->u32_1760 ) /*0x45e9df*/
        {
          if ( v4->Image_d ) /*0x45ea23*/
          {
            operator delete((void *)(v4->Image_d)); /*0x45ea2e*/
            v4->Image_d = 0; /*0x45ea36*/
            v4->ImageAllocated = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, &v4->ImageFile_0x19, (const char *)&off_7E1BC6 + 112 * v1); /*0x45ea08*/
          v4->Image_d = SearchMIXFile(Buffer, 0); /*0x45ea1b*/
        }
        if ( v4->u32_1761 ) /*0x45ea42*/
        {
          if ( v4->u32_E00 ) /*0x45ea86*/
          {
            operator delete((void *)(v4->u32_E00)); /*0x45ea91*/
            v4->u32_E00 = 0; /*0x45ea99*/
            v4->qE04 = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, &v4->qE5C, (const char *)&off_7E1BC6 + 112 * v1); /*0x45ea6b*/
          v4->u32_E00 = SearchMIXFile(Buffer, 0); /*0x45ea7e*/
        }
        int v5 = v4->u32_E00; // ecx /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          int v6; // ecx
          v6 = *(int16_t *)(v5 + 6); /*0x45eab3*/
          int v7 = 1; // eax /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          v4->u32_F04 = 0; /*0x45eac8*/
          v4->u32_F08 = v6; /*0x45eace*/
          v4->u32_F0C = v7; /*0x45ead4*/
        }
      }
      else if ( v4->NewTheater_d ) /*0x45eadc*/
      {
        if ( v4->u32_1760 && v4->Image_d ) /*0x45eaec*/
        {
          operator delete((void *)(v4->Image_d)); /*0x45eaf7*/
          v4->Image_d = 0; /*0x45eaff*/
          v4->ImageAllocated = 0; /*0x45eb05*/
        }
        if ( v4->u32_1761 && v4->u32_E00 ) /*0x45eb13*/
        {
          operator delete((void *)(v4->u32_E00)); /*0x45eb1e*/
          v4->u32_E00 = 0; /*0x45eb26*/
          v4->qE04 = 0; /*0x45eb2c*/
        }
        (v4)->LoadAnimations(v1); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < dword_A83C78 ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (*(void (**)(Draw *, int))dword_89DDC0->Draw_field_00)(dword_89DDC0, 1); /*0x45eb5c*/
      int v8; // esi
      v8 = (int)(operator new(0x20u)); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        v8->vtable4 = 0; /*0x45eb72*/
        *(unsigned int *)v8 = (unsigned int)(&XSurface_Vtable); /*0x45eb78*/
        v8->vtable2 = v9 + 16; /*0x45eb80*/
        v8->vtable3 = v9 + 16; /*0x45eb8b*/
        v8->uniqueId = 1; /*0x45eb8e*/
        Buffer::Init(&v8->abstractFlags, 0, (v9 + 16) * (v9 + 16)); /*0x45eb95*/
        *(unsigned int *)v8 = (unsigned int)(&BSurface_Vtable); /*0x45eb9a*/
        dword_89DDC0 = (unsigned int)((Draw *)v8); /*0x45eba0*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x45ebb1*/
      }
    }
  }
}
} // namespace gamemd
// 0x45F230
namespace gamemd {
void* BuildingTypeClass::LoadAnimations(int aP1)
{
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

  if ( !this->DemandLoadBuildup && strlen((const char *)this->q3952 + 30)) ) /*0x45f257*/
  {
    _makepath(Source, 0, 0, (const char *)this->q3952 + 30), ::Ext); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f282*/
    int v3; // eax
    v3 = (int)(SearchMIXFile(Source, 0)); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45f29a*/
      v3 = (int)(SearchMIXFile(Source, 0)); /*0x45f2a5*/
    }
    this->v3 = v3; /*0x45f2ac*/
    if ( v3 ) /*0x45f2b2*/
    {
      int v4 = 1; // ecx /*0x45f2bb*/
      int v5 = v3->nextArrayIndex / 2; // esi /*0x45f2c8*/
      int v23; // [esp+10h] [ebp-158h]
      v23 = v5; /*0x45f2cc*/
      if ( this->Gate ) /*0x45f2c2*/
      {
        v5 = this->GateStages + 1; /*0x45f2d8*/
        v23 = v5; /*0x45f2d9*/
      }
      if ( v5 > 0 ) /*0x45f2df*/
      {
        int v6; // eax
        (*((unsigned short *)&(v6))) = Math::RoundToInt(*(double *)(*(unsigned int *)&g_RulesClass_Instance + 5400) * 900.0 / (double)v23); /*0x45f2f7*/
        v4 = v6; /*0x45f2fc*/
      }
      this->RubbleLoaded = 0; /*0x45f2fe*/
      this->v5 = v5; /*0x45f304*/
      this->v4 = v4; /*0x45f30a*/
    }
  }
  char Filename[64]; // [esp+14h] [ebp-154h] BYREF
  (/*0x45f32d*/ (INIClass *)&DataGlobal_887180)->GetString((uint8_t *)(&this->TurretVoxel4), aDeployinganim, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen(Filename) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f357*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f36a*/
    unsigned char *v7; // esi
    v7 = &this->DeployingAnimLoaded_d; /*0x45f375*/
    if ( this->DeployingAnimLoaded_d && this->DeployingAnim_2 ) /*0x45f37f*/
    {
      operator delete((this->DeployingAnim_2)); /*0x45f38a*/
      this->DeployingAnim_2 = 0; /*0x45f392*/
      *v7 = 0; /*0x45f398*/
    }
    void *FileSHP; // eax
    FileSHP = LoadFileSHP(Source, (bool *)this->q5399 + 7)); /*0x45f3a0*/
    this->DeployingAnim_2 = (gamemd::SHPStruct *)(FileSHP); /*0x45f3a7*/
    if ( !FileSHP ) /*0x45f3ad*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45f3b3*/
      if ( *v7 && this->DeployingAnim_2 ) /*0x45f3bc*/
      {
        operator delete((this->DeployingAnim_2)); /*0x45f3c7*/
        this->DeployingAnim_2 = 0; /*0x45f3cf*/
        *v7 = 0; /*0x45f3d5*/
      }
      this->DeployingAnim_2 = (gamemd::SHPStruct *)(LoadFileSHP(Source, (bool *)this->q5399 + 7))); /*0x45f3e2*/
    }
  }
  (/*0x45f405*/ (INIClass *)&DataGlobal_887180)->GetString((uint8_t *)(&this->TurretVoxel4), aRoofdeployinga, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen(Filename) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f442*/
    unsigned char *v9; // esi
    v9 = &this->RoofDeployingAnimLoaded; /*0x45f44d*/
    if ( this->RoofDeployingAnimLoaded && this->RoofDeployingAnim ) /*0x45f457*/
    {
      operator delete((this->RoofDeployingAnim)); /*0x45f462*/
      this->RoofDeployingAnim = 0; /*0x45f46a*/
      *v9 = 0; /*0x45f470*/
    }
    void *v10; // eax
    v10 = LoadFileSHP(Source, &this->q5400); /*0x45f478*/
    this->RoofDeployingAnim = (gamemd::SHPStruct *)(v10); /*0x45f47f*/
    if ( !v10 ) /*0x45f485*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45f48b*/
      if ( *v9 && this->RoofDeployingAnim ) /*0x45f494*/
      {
        operator delete((this->RoofDeployingAnim)); /*0x45f49f*/
        this->RoofDeployingAnim = 0; /*0x45f4a7*/
        *v9 = 0; /*0x45f4ad*/
      }
      this->RoofDeployingAnim = LoadFileSHP(Source, (bool *)this->q5399 + 7)); /*0x45f4be*/
    }
  }
  (/*0x45f4e1*/ (INIClass *)&DataGlobal_887180)->GetString((uint8_t *)(&this->TurretVoxel4), aDooranim, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen(Filename) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f507*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f51a*/
    int v11; // eax
    v11 = SearchMIXFile(Source, 0); /*0x45f525*/
    this->DoorAnim = v11; /*0x45f52c*/
    if ( !v11 ) /*0x45f532*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45f538*/
      this->DoorAnim = SearchMIXFile(Source, 0); /*0x45f548*/
    }
  }
  (/*0x45f565*/ (INIClass *)&DataGlobal_887180)->GetString((uint8_t *)(&this->TurretVoxel4), aUnderdooranim, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen(Filename) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f5a2*/
    unsigned char *v12 = &this->UnderDoorAnimLoaded_d; // esi /*0x45f5ad*/
    if ( this->UnderDoorAnimLoaded_d && this->UnderDoorAnim_d ) /*0x45f5b7*/
    {
      operator delete((this->UnderDoorAnim_d)); /*0x45f5c2*/
      this->UnderDoorAnim_d = 0; /*0x45f5ca*/
      *v12 = 0; /*0x45f5d0*/
    }
    void *v13; // eax
    v13 = LoadFileSHP(Source, &this->q53C0); /*0x45f5d8*/
    this->UnderDoorAnim_d = v13; /*0x45f5df*/
    if ( !v13 ) /*0x45f5e5*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45f5eb*/
      if ( *v12 && this->UnderDoorAnim_d ) /*0x45f5f4*/
      {
        operator delete((this->UnderDoorAnim_d)); /*0x45f5ff*/
        this->UnderDoorAnim_d = 0; /*0x45f607*/
        *v12 = 0; /*0x45f60d*/
      }
      this->UnderDoorAnim_d = SearchMIXFile(Source, 0); /*0x45f61a*/
    }
  }
  unsigned char *v14 = &this->RubbleLoaded_d; // esi /*0x45f626*/
  if ( this->RubbleLoaded_d && this->Rubble_d ) /*0x45f630*/
  {
    operator delete((this->Rubble_d)); /*0x45f63b*/
    this->Rubble_d = 0; /*0x45f643*/
    *v14 = 0; /*0x45f649*/
  }
  (/*0x45f668*/ (INIClass *)&DataGlobal_887180)->GetString((uint8_t *)(&this->TurretVoxel4), aRubble, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen(Filename) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f6a1*/
    void *v15; // eax
    v15 = LoadFileSHP(Source, &this->q53E0); /*0x45f6ac*/
    this->Rubble_d = v15; /*0x45f6b3*/
    if ( !v15 ) /*0x45f6b9*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45f6bf*/
      if ( *v14 && this->Rubble_d ) /*0x45f6c8*/
      {
        operator delete((this->Rubble_d)); /*0x45f6d3*/
        this->Rubble_d = 0; /*0x45f6db*/
        *v14 = 0; /*0x45f6e1*/
      }
      this->Rubble_d = SearchMIXFile(Source, 0); /*0x45f6ee*/
    }
  }
  (/*0x45f711*/ (INIClass *)&DataGlobal_887180)->GetString((uint8_t *)(&this->TurretVoxel4), aUnderroofdoora, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen(Filename) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f74e*/
    unsigned char *v16 = &this->UnderRoofDoorAnimLoaded; // esi /*0x45f759*/
    if ( this->UnderRoofDoorAnimLoaded && this->UnderRoofDoorAnim ) /*0x45f763*/
    {
      operator delete((this->UnderRoofDoorAnim)); /*0x45f76e*/
      this->UnderRoofDoorAnim = 0; /*0x45f776*/
      *v16 = 0; /*0x45f77c*/
    }
    void *v17; // eax
    v17 = LoadFileSHP(Source, &this->q5420); /*0x45f784*/
    this->UnderRoofDoorAnim = v17; /*0x45f78b*/
    if ( !v17 ) /*0x45f791*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45f797*/
      if ( *v16 && this->UnderRoofDoorAnim ) /*0x45f7a0*/
      {
        operator delete((this->UnderRoofDoorAnim)); /*0x45f7ab*/
        this->UnderRoofDoorAnim = 0; /*0x45f7b3*/
        *v16 = 0; /*0x45f7b9*/
      }
      this->UnderRoofDoorAnim = SearchMIXFile(Source, 0); /*0x45f7c6*/
    }
  }
  (/*0x45f7e9*/ (INIClass *)&DataGlobal_887180)->GetString((uint8_t *)(&this->TurretVoxel4), aSpecialzoverla, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen(Filename) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f822*/
    int v18; // eax
    v18 = SearchMIXFile(Source, 0); /*0x45f82d*/
    this->SpecialZOverlay = v18; /*0x45f834*/
    if ( !v18 ) /*0x45f83a*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45f840*/
      this->SpecialZOverlay = SearchMIXFile(Source, 0); /*0x45f850*/
    }
  }
  (/*0x45f86d*/ (INIClass *)&DataGlobal_887180)->GetString((uint8_t *)(&this->TurretVoxel4), aBibshape, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen(Filename) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f897*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f8aa*/
    unsigned char *v19 = &this->BibShapeLoaded; // esi /*0x45f8b5*/
    if ( this->BibShapeLoaded && this->BibShape ) /*0x45f8bf*/
    {
      operator delete((this->BibShape)); /*0x45f8ca*/
      this->BibShape = 0; /*0x45f8d2*/
      *v19 = 0; /*0x45f8d8*/
    }
    void *v20; // eax
    v20 = LoadFileSHP(Source, &this->q5470); /*0x45f8e0*/
    this->BibShape = v20; /*0x45f8e7*/
    if ( !v20 ) /*0x45f8ed*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45f8f3*/
      if ( *v19 && this->BibShape ) /*0x45f8fc*/
      {
        operator delete((this->BibShape)); /*0x45f907*/
        this->BibShape = 0; /*0x45f90f*/
        *v19 = 0; /*0x45f915*/
      }
      this->BibShape = SearchMIXFile(Source, 0); /*0x45f922*/
    }
  }
  (/*0x45f945*/ (INIClass *)&DataGlobal_887180)->GetString((uint8_t *)(&this->TurretVoxel4), (uint8_t *)g_INI_Key_Image, &g_INI_DefaultBuffer, Filename, 64);
  const char *v21; // edi
  if ( !this->Theater_d || aP1 == -1 ) /*0x45f95c*/
    v21 = ::Ext; /*0x45f97a*/
  else
    v21 = (const char *)(&off_7E1BC6 + 28 * aP1); /*0x45f96e*/
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  strcpy(Ext, v21); /*0x45f993*/
  if ( strlen(Filename) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)(&this->TurretVoxel4), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f9e0*/
  strncpy(&this->TheaterSpecificID, Source, 0x13u); /*0x45f9f3*/
  if ( !this->DemandLoad ) /*0x45f9f8*/
  {
    int v22; // eax
    v22 = SearchMIXFile(Source, 0); /*0x45fa0b*/
    this->Image_d = v22; /*0x45fa12*/
    if ( !v22 ) /*0x45fa18*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45fa1e*/
      strncpy(&this->TheaterSpecificID, Source, 0x13u); /*0x45fa2b*/
      this->Image_d = SearchMIXFile(Source, 0); /*0x45fa3e*/
    }
    if ( !this->Image_d ) /*0x45fa44*/
    {
      ((ObjectTypeClass *)Source)->SetRTTI71(); /*0x45fa50*/
      strncpy(&this->TheaterSpecificID, Source, 0x13u); /*0x45fa5d*/
      this->Image_d = SearchMIXFile(Source, 0); /*0x45fa70*/
    }
  }
  BuildingTypeClass::LoadVoxel(); /*0x45fa78*/
}
} // namespace gamemd
// 0x45FA90
namespace gamemd {
void BuildingTypeClass::LoadVoxel()
{

  CCFileClass v22; // [esp+8h] [ebp-2C4h] BYREF
  int v23[3]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  CCFileClass v25; // [esp+74h] [ebp-258h] BYREF
  CCFileClass v28; // [esp+E0h] [ebp-1ECh] BYREF

  if ( this->TurretAnimIsVoxel || this->BarrelAnimIsVoxel ) /*0x45faa4*/
  {
    char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
    strcpy(Destination, &this->q11B0); /*0x45fadf*/
    char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    char *v20; // [esp-Ch] [ebp-2D8h]
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    char *v2; // eax
    char String[252]; // [esp+1D0h] [ebp-FCh] BYREF
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(&v25, Buffer); /*0x45fb3b*/
      if ( (unsigned __int8)(&v25)->Open(0) ) /*0x45fb48*/
      {
        void *v3; // esi
        v3 = (void *)this->BarrelVoxel_d; /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          ((WaveClass *)this->u32_D2E)->Destroy(); /*0x45fb61*/
          __3_YAXPAX_Z(v3); /*0x45fb67*/
        }
        File *v4; // eax
        v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x45fb71*/
        unsigned int *FileVXL; // eax
        if ( v4 ) /*0x45fb7b*/
          FileVXL = File::LoadFileVXL(v4, (int)&v25, 0); /*0x45fb85*/
        else
          FileVXL = 0; /*0x45fb8c*/
        this->BarrelVoxel_d = (int)FileVXL; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(&v22, Buffer); /*0x45fbbf*/
        void *v6; // esi
        v6 = (void *)this->ChargerTurrets; /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          String::Release((String *)this->u32_D2E); /*0x45fbd0*/
          __3_YAXPAX_Z(v6); /*0x45fbd6*/
        }
        File *v7; // eax
        v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x45fbe0*/
        unsigned int *FileHVA; // eax
        if ( v7 ) /*0x45fbea*/
          FileHVA = File::LoadFileHVA(v7, (int)&v22); /*0x45fbf3*/
        else
          FileHVA = 0; /*0x45fbfa*/
        this->ChargerTurrets = (int)FileHVA; /*0x45fbfe*/
        if ( FileHVA && !*(unsigned char *)FileHVA ) /*0x45fc06*/
        {
          int Info; // eax
          Info = ((VoxelSection *)this->u32_D2E)->GetInfo(0, 0); /*0x45fc12*/
          ((Matrix *)this->u32_D2E)->Scale(*(float *)(Info + 12)); /*0x45fc21*/
        }
        *(unsigned int *)v22.CDFileClass = &vt_CCFileClass; /*0x45fc2a*/
        v24 = 0; /*0x45fc32*/
        Vector::Clear((int)v23); /*0x45fc36*/
        *(unsigned int *)v22.CDFileClass = &off_7E1668; /*0x45fc3f*/
        ((BufferIOFileClass *)&v22)->Dtor(); /*0x45fc43*/
      }
      char *v21; // [esp-Ch] [ebp-2D8h]
      v21 = _strupr(off_8194A8); /*0x45fc55*/
      char *v10; // eax
      char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
      v10 = _strupr(v32); /*0x45fc5e*/
      char *v11; // eax
      v11 = strstr(v10, v21); /*0x45fc67*/
      if ( v11 ) /*0x45fc71*/
      {
        *v11 = 66; /*0x45fc73*/
        unsigned char *v12 = v11 + 1; // eax /*0x45fc76*/
        *v12++ = 65; /*0x45fc77*/
        *v12++ = 82; /*0x45fc7b*/
        *v12 = 76; /*0x45fc7f*/
        v12[1] = 0; /*0x45fc82*/
      }
      *(unsigned int *)v25.CDFileClass = &vt_CCFileClass; /*0x45fc8c*/
      int v27; // [esp+D8h] [ebp-1F4h]
      v27 = 0; /*0x45fc94*/
      int v26[3]; // [esp+CCh] [ebp-200h] BYREF
      Vector::Clear((int)v26); /*0x45fc9b*/
      *(unsigned int *)v25.CDFileClass = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x45fca8*/
    }
    else if ( this->BarrelAnimIsVoxel ) /*0x45fcaf*/
    {
      strncpy(Destination, this->VoxelBarrelFile, 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(&v28, Buffer); /*0x45fd01*/
    if ( (unsigned __int8)CCFileClass::Open(&v28, 0) ) /*0x45fd0e*/
    {
      void *v13; // esi
      v13 = this->q0C0; /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        WaveClass::Destroy((WaveClass *)this->u32_D2E); /*0x45fd27*/
        __3_YAXPAX_Z(v13); /*0x45fd2d*/
      }
      File *v14; // eax
      v14 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x45fd37*/
      unsigned int *v15; // eax
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)&v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
      this->q0C0 = (int)v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(&v22, Buffer); /*0x45fd88*/
      void *v16; // esi
      v16 = this->q0C4; /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        String::Release((String *)this->u32_D2E); /*0x45fd99*/
        __3_YAXPAX_Z(v16); /*0x45fd9f*/
      }
      File *v17; // eax
      v17 = (File *)__2_YAPAXI_Z(0x10u); /*0x45fda9*/
      unsigned int *v18; // eax
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)&v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
      this->q0C4 = (int)v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(unsigned char *)v18 ) /*0x45fdcf*/
        {
          int v19; // eax
          v19 = VoxelSection::GetInfo((VoxelSection *)this->u32_D2E, 0, 0); /*0x45fddb*/
          Matrix::Scale((Matrix *)this->u32_D2E, *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      *(unsigned int *)v22.CDFileClass = &vt_CCFileClass; /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      *(unsigned int *)v22.CDFileClass = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x45fe0c*/
    }
    *(unsigned int *)v28.CDFileClass = &vt_CCFileClass; /*0x45fe18*/
    int v30; // [esp+144h] [ebp-188h]
    v30 = 0; /*0x45fe23*/
    int v29[3]; // [esp+138h] [ebp-194h] BYREF
    Vector::Clear((int)v29); /*0x45fe2a*/
    *(unsigned int *)v28.CDFileClass = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v28); /*0x45fe3d*/
  }

}
} // namespace gamemd
// 0x464B30
namespace gamemd {
int BuildingTypeClass::UpdatePower()
{


  Checksummer *v54; // [esp+Ch] [ebp+4h]
  BuildingTypeClass::ProcessPower((int)this, &v54->crcValue); /*0x464b39*/
  Checksummer::Add_double(v54, this->GateCloseDelay[0], this->GateCloseDelay[1]); /*0x464b4e*/
  Power::TimerProcess(this->LightVisibility); /*0x464b5c*/
  Power::TimerProcess(this->LightIntensity); /*0x464b6a*/
  Power::TimerProcess(this->LightRedTint); /*0x464b78*/
  Power::TimerProcess(this->LightGreenTint); /*0x464b86*/
  Power::TimerProcess(this->LightBlueTint); /*0x464b94*/
  Checksum::AddString((Checksum *)v54, (unsigned __int8 *)this->BuildupFile_0x10); /*0x464ba2*/
  Checksum::AddString((Checksum *)v54, (unsigned __int8 *)this->SecretUnit); /*0x464bb0*/
  Power::TimerProcess(this->Adjacent); /*0x464bbe*/
  Power::TimerProcess(this->Factory[0]); /*0x464bcc*/
  Power::TimerProcess(this->PowerBonus); /*0x464bda*/
  Power::TimerProcess(this->PowerDrain); /*0x464be8*/
  Power::TimerProcess(this->ExtraPowerBonus); /*0x464bf6*/
  Power::TimerProcess(this->ExtraPowerDrain); /*0x464c04*/
  Power::TimerProcess(this->Foundation[0]); /*0x464c12*/
  Power::TimerProcess(this->Height); /*0x464c20*/
  Power::TimerProcess(this->OccupyHeight); /*0x464c2e*/
  Power::TimerProcess(this->MidPoint); /*0x464c3c*/
  Power::TimerProcess(this->DoorStages); /*0x464c4a*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)this->BuildingAnimFrame, 72); /*0x464c5a*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->BuildingAnim[12], 1428); /*0x464c6d*/
  Power::TimerProcess(*&this->Upgrades_d); /*0x464c7b*/
  int v2; // eax
  v2 = Power::TimerProcess(*&this->SpecialZOverlayZAdjust); /*0x464c89*/
  LOBYTE(v2) = this->HoverPad; /*0x464c8e*/
  Power::FlagProcess((Power *)v54, v2); /*0x464c97*/
  int v3; // ecx
  LOBYTE(v3) = this->IsPlug; /*0x464c9c*/
  Power::FlagProcess((Power *)v54, v3); /*0x464ca5*/
  int v4; // edx
  LOBYTE(v4) = this->IsTemple; /*0x464caa*/
  int v5; // eax
  v5 = Power::FlagProcess((Power *)v54, v4); /*0x464cb3*/
  LOBYTE(v5) = this->HasSpotlight; /*0x464cb8*/
  Power::FlagProcess((Power *)v54, v5); /*0x464cc1*/
  int v6; // ecx
  LOBYTE(v6) = this->BaseNormal; /*0x464cc6*/
  Power::FlagProcess((Power *)v54, v6); /*0x464ccf*/
  int v7; // edx
  LOBYTE(v7) = this->EligibileForAllyBuilding; /*0x464cd4*/
  int v8; // eax
  v8 = Power::FlagProcess((Power *)v54, v7); /*0x464cdd*/
  LOBYTE(v8) = this->NeedsEngineer; /*0x464ce2*/
  Power::FlagProcess((Power *)v54, v8); /*0x464ceb*/
  int v9; // ecx
  LOBYTE(v9) = this->Bib; /*0x464cf0*/
  Power::FlagProcess((Power *)v54, v9); /*0x464cf9*/
  int v10; // edx
  LOBYTE(v10) = this->Wall; /*0x464cfe*/
  int v11; // eax
  v11 = Power::FlagProcess((Power *)v54, v10); /*0x464d07*/
  LOBYTE(v11) = this->Capturable; /*0x464d0c*/
  Power::FlagProcess((Power *)v54, v11); /*0x464d15*/
  int v12; // ecx
  LOBYTE(v12) = this->Powered; /*0x464d1a*/
  Power::FlagProcess((Power *)v54, v12); /*0x464d23*/
  int v13; // edx
  LOBYTE(v13) = this->Unsellable; /*0x464d28*/
  int v14; // eax
  v14 = Power::FlagProcess((Power *)v54, v13); /*0x464d31*/
  LOBYTE(v14) = this->Radar; /*0x464d36*/
  Power::FlagProcess((Power *)v54, v14); /*0x464d3f*/
  int v15; // ecx
  LOBYTE(v15) = this->SpySat; /*0x464d44*/
  Power::FlagProcess((Power *)v54, v15); /*0x464d4d*/
  int v16; // edx
  LOBYTE(v16) = this->ChargeAnim; /*0x464d52*/
  int v17; // eax
  v17 = Power::FlagProcess((Power *)v54, v16); /*0x464d5b*/
  LOBYTE(v17) = this->IsAnimDelayedFire; /*0x464d60*/
  Power::FlagProcess((Power *)v54, v17); /*0x464d69*/
  Power::TimerProcess(this->DelayedFireDelay); /*0x464d77*/
  int v18; // edx
  LOBYTE(v18) = this->SiloDamage; /*0x464d7c*/
  int v19; // eax
  v19 = Power::FlagProcess((Power *)v54, v18); /*0x464d85*/
  LOBYTE(v19) = this->UnitRepair; /*0x464d8a*/
  Power::FlagProcess((Power *)v54, v19); /*0x464d93*/
  int v20; // ecx
  LOBYTE(v20) = this->UnitReload; /*0x464d98*/
  Power::FlagProcess((Power *)v54, v20); /*0x464da1*/
  int v21; // edx
  LOBYTE(v21) = this->Cloning; /*0x464da6*/
  int v22; // eax
  v22 = Power::FlagProcess((Power *)v54, v21); /*0x464daf*/
  LOBYTE(v22) = this->Grinding; /*0x464db4*/
  Power::FlagProcess((Power *)v54, v22); /*0x464dbd*/
  int v23; // ecx
  LOBYTE(v23) = this->UnitAbsorb; /*0x464dc2*/
  Power::FlagProcess((Power *)v54, v23); /*0x464dcb*/
  int v24; // edx
  LOBYTE(v24) = this->InfantryAbsorb; /*0x464dd0*/
  int v25; // eax
  v25 = Power::FlagProcess((Power *)v54, v24); /*0x464dd9*/
  LOBYTE(v25) = this->SecretLab; /*0x464dde*/
  Power::FlagProcess((Power *)v54, v25); /*0x464de7*/
  int v26; // ecx
  LOBYTE(v26) = this->Flat_flag; /*0x464dec*/
  Power::FlagProcess((Power *)v54, v26); /*0x464df5*/
  int v27; // edx
  LOBYTE(v27) = this->DockUnload; /*0x464dfa*/
  int v28; // eax
  v28 = Power::FlagProcess((Power *)v54, v27); /*0x464e03*/
  LOBYTE(v28) = this->Recoilless; /*0x464e08*/
  Power::FlagProcess((Power *)v54, v28); /*0x464e11*/
  int v29; // ecx
  LOBYTE(v29) = this->BridgeRepairHut; /*0x464e16*/
  Power::FlagProcess((Power *)v54, v29); /*0x464e1f*/
  int v30; // edx
  LOBYTE(v30) = this->Gate; /*0x464e24*/
  int v31; // eax
  v31 = Power::FlagProcess((Power *)v54, v30); /*0x464e2d*/
  LOBYTE(v31) = this->SAM; /*0x464e32*/
  Power::FlagProcess((Power *)v54, v31); /*0x464e3b*/
  int v32; // ecx
  LOBYTE(v32) = this->ConstructionYard; /*0x464e40*/
  Power::FlagProcess((Power *)v54, v32); /*0x464e49*/
  int v33; // edx
  LOBYTE(v33) = this->NukeSilo; /*0x464e4e*/
  int v34; // eax
  v34 = Power::FlagProcess((Power *)v54, v33); /*0x464e57*/
  LOBYTE(v34) = this->Refinery; /*0x464e5c*/
  Power::FlagProcess((Power *)v54, v34); /*0x464e65*/
  int v35; // ecx
  LOBYTE(v35) = this->WeaponsFactory; /*0x464e6a*/
  Power::FlagProcess((Power *)v54, v35); /*0x464e73*/
  int v36; // edx
  LOBYTE(v36) = this->LaserFencePost; /*0x464e78*/
  int v37; // eax
  v37 = Power::FlagProcess((Power *)v54, v36); /*0x464e81*/
  LOBYTE(v37) = this->LaserFence; /*0x464e86*/
  Power::FlagProcess((Power *)v54, v37); /*0x464e8f*/
  int v38; // ecx
  LOBYTE(v38) = this->FirestormWall; /*0x464e94*/
  Power::FlagProcess((Power *)v54, v38); /*0x464e9d*/
  int v39; // edx
  LOBYTE(v39) = this->Helipad; /*0x464ea2*/
  int v40; // eax
  v40 = Power::FlagProcess((Power *)v54, v39); /*0x464eab*/
  LOBYTE(v40) = this->OrePurifier; /*0x464eb0*/
  Power::FlagProcess((Power *)v54, v40); /*0x464eb9*/
  int v41; // ecx
  LOBYTE(v41) = this->ExtraDamageStage; /*0x464ebe*/
  Power::FlagProcess((Power *)v54, v41); /*0x464ec7*/
  int v42; // edx
  LOBYTE(v42) = this->Hospital; /*0x464ecc*/
  int v43; // eax
  v43 = Power::FlagProcess((Power *)v54, v42); /*0x464ed5*/
  LOBYTE(v43) = this->Armory; /*0x464eda*/
  Power::FlagProcess((Power *)v54, v43); /*0x464ee3*/
  Power::TimerProcess(this->GateStages); /*0x464ef1*/
  int v44; // eax
  v44 = Power::TimerProcess(this->PowersUpToLevel); /*0x464eff*/
  LOBYTE(v44) = this->DamagedDoor; /*0x464f04*/
  Power::FlagProcess((Power *)v54, v44); /*0x464f0d*/
  int v45; // ecx
  LOBYTE(v45) = this->InvisibleInGame; /*0x464f12*/
  Power::FlagProcess((Power *)v54, v45); /*0x464f1b*/
  int v46; // edx
  LOBYTE(v46) = this->TerrainPalette; /*0x464f20*/
  int v47; // eax
  v47 = Power::FlagProcess((Power *)v54, v46); /*0x464f29*/
  LOBYTE(v47) = this->TurretAnimIsVoxel; /*0x464f2e*/
  Power::FlagProcess((Power *)v54, v47); /*0x464f37*/
  int v48; // ecx
  LOBYTE(v48) = this->BarrelAnimIsVoxel; /*0x464f3c*/
  Power::FlagProcess((Power *)v54, v48); /*0x464f45*/
  Checksum::AddString((Checksum *)v54, (unsigned __int8 *)this->VoxelBarrelFile); /*0x464f53*/
  Checksummer::Add_double(v54, *&this->u32_1728, *&this->u32_172C); /*0x464f68*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->VoxelBarrelOffsetToPitchPivotPoint, 12); /*0x464f78*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->VoxelBarrelOffsetToRotatePivotPoint, 12); /*0x464f88*/
  Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->VoxelBarrelOffsetToBuildingPivotPoint, 12); /*0x464f98*/
  int v49; // eax
  v49 = Checksummer::Add_Buffer(v54, (unsigned __int8 *)&this->VoxelBarrelOffsetToBarrelEnd, 12); /*0x464fa8*/
  LOBYTE(v49) = this->CrateBeneath; /*0x464fad*/
  Power::FlagProcess((Power *)v54, v49); /*0x464fb6*/
  int v50; // ecx
  LOBYTE(v50) = this->LeaveRubble; /*0x464fbb*/
  Power::FlagProcess((Power *)v54, v50); /*0x464fc4*/
  int v51; // edx
  LOBYTE(v51) = this->CrateBeneathIsMoney; /*0x464fc9*/
  Power::FlagProcess((Power *)v54, v51); /*0x464fd2*/
  Power::TimerProcess(*&this->NumberOfDocks); /*0x464fe0*/
  Power::TimerProcess(this->BarrelStartPitch); /*0x464fee*/
  int v52; // edx
  LOBYTE(v52) = this->ConcentricRadialIndicator; /*0x464ff3*/
  return Power::FlagProcess((Power *)v54, v52); /*0x465001*/

}
} // namespace gamemd
// 0x465010
namespace gamemd {
AbstractClass * * BuildingTypeClass::SaveLoad_Prefix()
{
  TechnoTypeClass *v1; // esi
  int v2; // edi
  int result; // eax
  char *v4; // ecx
  int v5; // ebp
  int v6; // eax
  unsigned int *v7; // edx
  TechnoTypeClass *v8; // eax
  int SpeedType; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  TechnoTypeClass *v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( v13[1].Weapon[210] && v13[1].vfptr.vfptr.vfptr.vfptr2 ) /*0x465025*/
  {
    operator delete((void *)(v13->vtable2.vfptr.vfptr.vfptr.vfptr2)); /*0x465030*/
    v1[1].vfptr.vfptr.vfptr.vfptr2 = 0; /*0x465038*/
    (*((unsigned char *)&(v1[1].vfptr.vfptr.vfptr.vfptr3))) = 0; /*0x46503e*/
  }
  if ( v1[1].BibShape && v1[1].TurretOffset ) /*0x46504c*/
  {
    operator delete((void *)(v1->vtable2.TurretOffset)); /*0x465057*/
    v1[1].TurretOffset = 0; /*0x46505f*/
    v1[1].CanBeHidden[0] = 0; /*0x465065*/
  }
  if ( (*((unsigned char *)&(v1[1].Cameo))) && *(unsigned int *)&v1[1].q14E4 ) /*0x465073*/
  {
    operator delete((void *)(*(void **)&v1[1].CameoFile[22])); /*0x46507e*/
    *(unsigned int *)&v1[1].q14E4 = 0; /*0x465086*/
    (*((unsigned char *)&(v1[1].Cameo))) = 0; /*0x46508c*/
  }
  if ( v1[1].q14EC && *v1->vtable2.CameoAllocated ) /*0x46509a*/
  {
    operator delete((void *)(*v1->vtable2.CameoAllocated)); /*0x4650a5*/
    *v1->vtable2.CameoAllocated = 0; /*0x4650ad*/
    v1[1].AltCameoFile[3] = 0; /*0x4650b3*/
  }
  if ( v1[1].q14F4 && *(unsigned int *)&v1[1].q14F4 ) /*0x4650c1*/
  {
    operator delete((void *)(*(void **)&v1[1].AltCameoFile[7])); /*0x4650cc*/
    *(unsigned int *)&v1[1].q14F4 = 0; /*0x4650d4*/
    v1[1].AltCameoFile[11] = 0; /*0x4650da*/
  }
  if ( v1[1].RoofDeployingAnim && *(unsigned int *)&v1[1].RoofDeployingAnim ) /*0x4650e8*/
  {
    operator delete((void *)(*(void **)&v1[1].AltCameoFile[15])); /*0x4650f3*/
    *(unsigned int *)&v1[1].RoofDeployingAnim = 0; /*0x4650fb*/
    v1[1].AltCameoFile[19] = 0; /*0x465101*/
  }
  if ( (*((unsigned char *)&(v1[1].AltCameo))) && *(unsigned int *)&v1[1].UnderRoofDoorAnim ) /*0x46510f*/
  {
    operator delete((void *)(*(void **)&v1[1].AltCameoFile[23])); /*0x46511a*/
    *(unsigned int *)&v1[1].UnderRoofDoorAnim = 0; /*0x465122*/
    (*((unsigned char *)&(v1[1].AltCameo))) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      ((BuildingTypeClass *)((BuildingTypeClass *)v1))->loadBuildingProperty_b_545E520((int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = &v1[1].Weapon[244]; /*0x465167*/
      if ( v1 != (TechnoTypeClass *)-6020 ) /*0x46516f*/
      {
        *(unsigned int *)&v1[1].Weapon[248] = 0; /*0x465171*/
        *(unsigned int *)&v1[1].Weapon[252] = 0; /*0x465174*/
        v1[1].Weapon[256] = 1; /*0x465177*/
        v1[1].Weapon[257] = 0; /*0x46517b*/
        *(unsigned int *)v4 = &vt_VectorClassTPoint3D; /*0x46517e*/
      }
      (*(void (**)(char *, int, unsigned int))(*(unsigned int *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
        LABEL_32:
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        SpeedType = v1[1].vfptr.ChargerTurrets[15]; /*0x4651fb*/
        v1[1].vfptr.vfptr.UIName = 0; /*0x465210*/
        SpeedType *= 120; /*0x465219*/
        v1[1].vfptr.vfptr.vfptr.vfptr1 = (int)&dword_89C900 + SpeedType; /*0x465228*/
        v1[1].vfptr.ChargerTurrets[8] = (int)&dword_89D368 + SpeedType; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1[1].vfptr.vfptr.UINameLabel[31]); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v1->vtable2.vfptr.ImageAllocated); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].vfptr.AlphaImage); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].vfptr.MainVoxel); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].vfptr.TurretVoxel); /*0x465278*/
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x46527f*/
        v1[1].vfptr.vfptr.vfptr.vfptr2 = 0; /*0x465284*/
        (*((unsigned char *)&(v1[1].vfptr.vfptr.vfptr.vfptr3))) = 0; /*0x46528a*/
        v1[1].TurretOffset = 0; /*0x465290*/
        v1[1].CanBeHidden[0] = 0; /*0x465296*/
        *(unsigned int *)&v1[1].CameoFile[22] = 0; /*0x46529c*/
        (*((unsigned char *)&(v1[1].Cameo))) = 0; /*0x4652a2*/
        *v1->vtable2.CameoAllocated = 0; /*0x4652a8*/
        v1[1].AltCameoFile[3] = 0; /*0x4652ae*/
        *(unsigned int *)&v1[1].AltCameoFile[7] = 0; /*0x4652b4*/
        v1[1].AltCameoFile[11] = 0; /*0x4652ba*/
        *(unsigned int *)&v1[1].AltCameoFile[15] = 0; /*0x4652c0*/
        v1[1].AltCameoFile[19] = 0; /*0x4652c6*/
        *(unsigned int *)&v1[1].AltCameoFile[23] = 0; /*0x4652cc*/
        (*((unsigned char *)&(v1[1].AltCameo))) = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations((int)v1, dword_A8B230[130].uniqueId); /*0x4652e6*/
        return 0; /*0x4652eb*/
      }
      else
      {
        v13 = 0; /*0x465197*/
        while ( 1 ) /*0x46519b*/
        {
          v6 = *(unsigned int *)v2; /*0x46519b*/
          v10 = 0; /*0x4651a6*/
          v11 = 0; /*0x4651aa*/
          v12 = 0; /*0x4651ae*/
          result = (*(int (__stdcall **)(int, int *, int, unsigned int))(v6 + 12))(v2, &v10, 12, 0); /*0x4651b2*/
          if ( result < 0 ) /*0x4651b7*/
            break; /*0x4651b7*/
          v7 = (int *)v13->vtable1.vfptr.vfptr.vfptr + *(unsigned int *)&v1[1].Weapon[248]); /*0x4651cb*/
          v8 = &v13->vtable1.vfptr.vfptr.vfptr3; /*0x4651cd*/
          ++v5; /*0x4651d0*/
          *v7 = v10; /*0x4651d1*/
          v13 = v8; /*0x4651d7*/
          v7[1] = v11; /*0x4651db*/
          v7[2] = v12; /*0x4651e2*/
          if ( v5 >= v14 ) /*0x4651eb*/
            goto LABEL_32; /*0x4651eb*/
        }
      }
    }
  }
  return result; /*0x4652ed*/
}
} // namespace gamemd
// 0x4653C0
namespace gamemd {
BuildingTypeClass * * BuildingTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( dword_A83C78 <= 0 ) /*0x4653f1*/
  {
    LABEL_6:
    v3 = operator new(0x1798u); /*0x465416*/
    if ( v3 ) /*0x465425*/
      return BuildingTypeClass::ConstructFull(v3, Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83C6C + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return *((unsigned int *)dword_A83C6C + v2); /*0x46542f*/
}
} // namespace gamemd
// 0x465AF0
namespace gamemd {
int BuildingTypeClass::BuildingTypeClass::IsPowered()
{


  int result; // eax
  LOBYTE(result) = this->FreeBuildup; /*0x465af3*/
  if ( (unsigned char)result ) /*0x465afb*/
  {
    result = this->Buildup[0]; /*0x465afd*/
    if ( result ) /*0x465b05*/
    {
      __3_YAXPAX_Z((void *)this->Buildup[0]); /*0x465b08*/
      this->Buildup[0] = 0; /*0x465b10*/
      this->BuildupLoaded = 0; /*0x465b1a*/
    }
  }
  return result; /*0x465b21*/

}
} // namespace gamemd
// 0x50B760
namespace gamemd {
int BuildingTypeClass::ProcessData(unsigned int * a2, short * a3)
{
  int *v5; // ebx
  int v6; // ebx
  int v7; // ebp
  int16_t *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !*(unsigned int *)&dword_A8B238 ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = a2; /*0x50b783*/
  v11 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5216); /*0x50b78f*/
  v12 = 2 * v11 + ((BuildingTypeClass *)((BuildingTypeClass *)a2))->GetFoundationWidth(); /*0x50b7a3*/
  v6 = 2 * v11 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x50b7b1*/
  v7 = 1 << *&this->TargetSpecialThreatCoefficient; /*0x50b7b8*/
  v8 = a3; /*0x50b7ba*/
  v9 = *a3 - v11 - 1; /*0x50b7cd*/
  if ( v9 < *a3 + v12 + 1 ) /*0x50b7d0*/
  {
    while ( 1 ) /*0x50b7e2*/
    {
      v10 = v8[1] - v11 - 1; /*0x50b7e2*/
      if ( v10 < v8[1] + v6 + 1 ) /*0x50b7e5*/
        break; /*0x50b7e5*/
      LABEL_8:
      if ( ++v9 >= *v8 + v12 + 1 ) /*0x50b82d*/
        return 0; /*0x50b82d*/
    }
    while ( 1 ) /*0x50b7eb*/
    {
      (*((unsigned short *)&(a2))) = v9; /*0x50b7eb*/
      (*(((unsigned short *)&(a2)) + 1)) = v10; /*0x50b7f6*/
      if ( (v7 & *((unsigned int *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&a2) + 55)) != 0 ) /*0x50b806*/
        return 1; /*0x50b806*/
      if ( ++v10 >= a3[1] + v6 + 1 ) /*0x50b81b*/
      {
        v8 = a3; /*0x50b81d*/
        goto LABEL_8; /*0x50b81d*/
      }
    }
  }
  return 0; /*0x50b772*/
}
} // namespace gamemd
// 0x594010
namespace gamemd {
int BuildingTypeClass::CheckPlacementArea(ObjectClass * aP1, ObjectClass * aP2)
{

  unsigned short *v3; // edi
  __int16 v4; // ax
  int result; // eax
  __int16 v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // ebp
  int v13; // esi
  Cell *v14; // eax

  v3 = aP1; /*0x594015*/
  v4 = *aP1; /*0x594027*/
  HIWORD(aP1) = aP1[2]; /*0x59402a*/
  LOWORD(aP1) = v4; /*0x594035*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, (__int16 *)&aP1, 1); /*0x59403a*/
  if ( (unsigned char)result )
  {
    v6 = v3->vtable2; /*0x594052*/
    LOWORD(aP1) = *((unsigned int *)v3 + 2) + *(unsigned int *)v3 - 1; /*0x59405a*/
    HIWORD(aP1) = v6; /*0x594065*/
    result = LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, (__int16 *)&aP1, 1); /*0x59406a*/
    if ( (unsigned char)result )
    {
      v7 = v3->vtable2; /*0x59407a*/
      v8 = v3->vtable4; /*0x59407d*/
      LOWORD(aP1) = *v3; /*0x594080*/
      HIWORD(aP1) = v7 + v8 - 1; /*0x594095*/
      result = LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, (__int16 *)&aP1, 1); /*0x59409a*/
      if ( (unsigned char)result )
      {
        v9 = v3->vtable2; /*0x5940b2*/
        v10 = v3->vtable4; /*0x5940b5*/
        LOWORD(aP1) = *((unsigned int *)v3 + 2) + *(unsigned int *)v3 - 1; /*0x5940b8*/
        HIWORD(aP1) = v9 + v10 - 1; /*0x5940cb*/
        result = LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, (__int16 *)&aP1, 1); /*0x5940d0*/
        if ( (unsigned char)result )
        {
          v11 = v3->vtable2; /*0x5940dd*/
          if ( v11 >= v3->vtable4 + v11 ) /*0x5940e9*/
          {
            LABEL_16:
            LOBYTE(result) = 1; /*0x594170*/
            return result; /*0x594177*/
          }
          v12 = aP2; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v13 = *(unsigned int *)v3; /*0x5940f3*/
            result = *(unsigned int *)v3 + v3->vtable3; /*0x5940f8*/
            if ( *(unsigned int *)v3 < result ) /*0x5940fc*/
              break; /*0x5940fc*/
            LABEL_15:
            if ( ++v11 >= v3->vtable4 + v3->vtable2 ) /*0x59416e*/
              goto LABEL_16; /*0x59416e*/
          }
          while ( 1 )
          {
            LOWORD(aP1) = v13; /*0x594104*/
            HIWORD(aP1) = v11; /*0x59410b*/
            result = g_MissionQueueFrame.localVariables[163]
            ? *(unsigned int *)(80 * ((__int16)v13 + g_MapCellWidth * (__int16)v11)
            + g_MissionQueueFrame.localVariables[163]
            + 56)
            : -1;
            if ( (void *)result != this->u32_D2E && result != v12 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (__int16 *)&aP1); /*0x594147*/
            result = Cell::IsEmpty(v14); /*0x59414e*/
            if ( !(unsigned char)result ) /*0x594155*/
              break; /*0x594155*/
            ++v13; /*0x59415c*/
            result = *(unsigned int *)v3 + v3->vtable3; /*0x59415d*/
            if ( v13 >= result ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x59417d*/
  return result; /*0x594170*/

}
} // namespace gamemd
// 0x5FEC70
namespace gamemd {
OverlayTypeClass * * BuildingTypeClass::FindOrCreate2(ObjectClass * Source)
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( *(int *)&g_ObjectTypeConfig <= 0 ) /*0x5feca1*/
  {
    LABEL_6:
    v3 = (OverlayTypeClass *)operator new(0x2BCu); /*0x5fecc6*/
    if ( v3 ) /*0x5fecd5*/
      return OverlayTypeClass::OverlayTypeClass(v3, Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= *(int *)&g_ObjectTypeConfig ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *(unsigned int **)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * v2); /*0x5fecdf*/
}
} // namespace gamemd
// 0x644890
namespace gamemd {
ParticleSystemTypeClass * * BuildingTypeClass::LoadOrGet(ObjectClass * Source)
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( (int)g_InfantryTypeInitState <= 0 ) /*0x6448c1*/
  {
    LABEL_6:
    v3 = (OverlayTypeClass *)operator new(0x310u); /*0x6448e6*/
    if ( v3 ) /*0x6448f5*/
      return ((OverlayTypeClass *)(v3))->Construct(Source); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)&DataGlobal_A83D6C + 4 * v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= (int)g_InfantryTypeInitState ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *(unsigned int **)(*(unsigned int *)&DataGlobal_A83D6C + 4 * v2); /*0x6448ff*/
}
} // namespace gamemd
// 0x644BE0
namespace gamemd {
unsigned int * BuildingTypeClass::Construct(AbstractClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{


  ObjectTypeClass::ConstructFull((int *)aP1, a2); /*0x644beb*/
  aP1->u32_294 = 0; /*0x644bf8*/
  aP1->q298 = 0; /*0x644bfe*/
  *(unsigned int *)aP1->q29C = 0; /*0x644c04*/
  *&aP1->q2B0 = 0; /*0x644c10*/
  *&aP1->q2A0 = 1; /*0x644c19*/
  *&aP1->q2A4 = 1; /*0x644c1f*/
  *&aP1->q2A8 = 0; /*0x644c25*/
  *&aP1->u32_2AC = 1; /*0x644c2b*/
  *&aP1->q2B4 = 0; /*0x644c31*/
  BuildingTypeClass::loadBuildingProperty_b_5478850(&aP1->q2B8, 0, 0); /*0x644c37*/
  aP1->abstractFlags = 10; /*0x644c3c*/
  aP1->uniqueId = 0; /*0x644c43*/
  *&aP1->uniqueId = &vt_TypeList; /*0x644c46*/
  aP1->u32_2D4 = 0; /*0x644c4c*/
  LOBYTE(aP1->q2D8) = 0; /*0x644c66*/
  BYTE1(aP1->?[0]) = 0; /*0x644c6c*/
  BYTE1(aP1->?[1]) = -1; /*0x644c72*/
  BYTE2(aP1->?[1]) = -1; /*0x644c78*/
  aP1->q2DC = 0; /*0x644c81*/
  aP1->q2E0 = 1; /*0x644c87*/
  aP1->u32_2E4 = 0; /*0x644c8d*/
  aP1->u32_2E8 = 0; /*0x644c93*/
  aP1->?[1] = 0; /*0x644c99*/
  aP1->u32_2F0 = 1; /*0x644c9f*/
  aP1->u32_2F4 = 0; /*0x644ca5*/
  aP1->u32_2F8 = 0; /*0x644cab*/
  aP1->u32_2FC = 0; /*0x644cb1*/
  aP1->q300 = 0; /*0x644cb7*/
  aP1->q304 = 0; /*0x644cbd*/
  LOBYTE(aP1->q308) = 0; /*0x644cc3*/
  BYTE1(aP1->?[0]) = 0; /*0x644cc9*/
  BYTE2(aP1->q30A) = 0; /*0x644ccf*/
  HIBYTE(aP1->?[0]) = 4; /*0x644cd5*/
  LOBYTE(aP1->q30C) = 0; /*0x644cdc*/
  HIBYTE(aP1->?[1]) = 0; /*0x644ce2*/
  aP1->q310 = -1; /*0x644ce8*/
  aP1->q314 = -1; /*0x644cee*/
  aP1->TechnoTypeClass = &vt_ParticleTypeClass; /*0x644cf4*/
  /* X11: vtable install elided (implicit via ParticleTypeClass virtuals 0x644cfa) */
  /* X11: vtable install elided (implicit via ParticleTypeClass virtuals 0x644d01) */
  /* X11: vtable install elided (implicit via ParticleTypeClass virtuals 0x644d08) */
  if ( *(int *)&stru_A83D50.__pad_3C[28] < *(int *)&stru_A83D50.__pad_3C[20] /*0x644d43*/
    || (stru_A83D50.__pad_3C[25] || !*(unsigned int *)&stru_A83D50.__pad_3C[20])
    && *(int *)&stru_A83D50.__pad_3C[32] > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A83D50.__pad_3C[12] + 8))(
         &stru_A83D50.__pad_3C[12],
         *(unsigned int *)&stru_A83D50.__pad_3C[20] + *(unsigned int *)&stru_A83D50.__pad_3C[32],
         0) )
  {
    int v3; // eax
    v3 = (*(unsigned int *)&stru_A83D50.__pad_3C[28])++; /*0x644d50*/
    *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v3) = aP1; /*0x644d5f*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x644d96*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    int v4; // eax
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x644da3*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = aP1; /*0x644db2*/
  }
  aP1->__pad_234 = 0; /*0x644db5*/
  return &aP1->TechnoTypeClass; /*0x644dbd*/

}
} // namespace gamemd
// 0x645430
namespace gamemd {
ParticleTypeClass * * BuildingTypeClass::FindOrCreateEx(char *Source)
{
  int v2; // esi
  BuildingTypeClass *v3; // eax
  unsigned int *v4; // eax
  int v6; // ecx
  unsigned int *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( *(int *)&g_BuildingTypeInitState <= 0 ) /*0x64544f*/
  {
    LABEL_5:
    v3 = (BuildingTypeClass *)operator new(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( *(int *)&g_BuildingTypeInitState > 0 ) /*0x6454a0*/
    {
      for ( i = *(unsigned int **)&g_BuildingProductionQueue; (unsigned int *)*i != v4; ++i ) /*0x6454a2*/
      {
        if ( ++v6 >= *(int *)&g_BuildingTypeInitState ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (char *)(*(unsigned int *)(*(unsigned int *)&g_BuildingProductionQueue + 4 * v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= *(int *)&g_BuildingTypeInitState ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return v2; /*0x645491*/
}
} // namespace gamemd
// 0x7171A0
namespace gamemd {
void* BuildingTypeClass::ProcessPower(int *aP1, void *a2)
{

  AbstractTypeClass::ProcessPower(aP1); /*0x7171a9*/
  Checksummer::Add_double(this->Buildup, this->BuildupLoaded); /*0x7171be*/
  Power::TimerProcess(this->BuildCat); /*0x7171cc*/
  Checksummer::Add_double(this->unknown_double_300, this->__pad_304); /*0x7171e1*/
  Checksummer::Add_double(this->AccelerationFactor, this->q30C); /*0x7171f6*/
  Power::TimerProcess(this->CloakingSpeed); /*0x717204*/
  Power::TimerProcess(this->TargetLaser); /*0x717212*/
  Power::TimerProcess(this->q5D4); /*0x717220*/
  Power::TimerProcess(this->PoweredUnit); /*0x71722e*/
  Power::TimerProcess(this->q340); /*0x71723c*/
  Checksummer::Add_Buffer((unsigned int *)aP1, &this->Spawns, 16); /*0x71724c*/
  Checksummer::Add_double(this->unknown_double_360, this->qD90); /*0x717261*/
  Checksummer::Add_double(this->unknown_double_368, this->__pad_36C); /*0x717276*/
  Checksummer::Add_double(this->Weight, this->__pad_374); /*0x71728b*/
  Checksummer::Add_double(this->PhysicalSize, this->__pad_37C); /*0x7172a0*/
  Checksummer::Add_double(this->Size, this->__pad_384); /*0x7172b5*/
  Checksummer::Add_double(this->SizeLimit, this->__pad_38C); /*0x7172ca*/
  int v3; // ecx
  (*((unsigned char *)&(v3))) = this->HoverAttack; /*0x7172cf*/
  Power::FlagProcess(aP1, v3); /*0x7172d8*/
  int v4; // eax
  v4 = Power::TimerProcess(this->unknown_int_398); /*0x7172e6*/
  (*((unsigned char *)&(v4))) = this->ImmuneToVeins; /*0x7172eb*/
  Power::FlagProcess(aP1, v4); /*0x7172f4*/
  int v5; // ecx
  (*((unsigned char *)&(v5))) = this->TiberiumHeal; /*0x7172f9*/
  Power::FlagProcess(aP1, v5); /*0x717302*/
  int v6; // edx
  (*((unsigned char *)&(v6))) = this->TargetLaser; /*0x717307*/
  Power::FlagProcess(aP1, v6); /*0x717310*/
  Checksummer::Add_double(this->RollAngle, this->__pad_3A4); /*0x717325*/
  Checksummer::Add_double(this->PitchAngle, this->__pad_3B4); /*0x71733a*/
  Checksummer::Add_double(this->PitchSpeed, this->__pad_3AC); /*0x71734f*/
  Power::TimerProcess(this->FlightLevel); /*0x71735d*/
  Power::TimerProcess(this->BuildLimit); /*0x71736b*/
  Power::TimerProcess(this->Category); /*0x717379*/
  Checksummer::Add_double(this->DeployTime, this->__pad_3CC); /*0x71738e*/
  Power::TimerProcess(this->FireAngle); /*0x71739c*/
  Power::TimerProcess(this->PipScale); /*0x7173aa*/
  Power::TimerProcess(this->AuxSound1); /*0x7173b8*/
  Power::TimerProcess(this->SinkingSound); /*0x7173c6*/
  Power::TimerProcess(this->VoicePrimaryWeaponAttack); /*0x7173d4*/
  Power::TimerProcess(this->LeaveGrinderSound); /*0x7173e2*/
  Power::TimerProcess(this->GuardRange); /*0x7173f0*/
  Power::TimerProcess(this->ResourceGatherer); /*0x7173fe*/
  Power::TimerProcess(this->BuildTimeMultiplier); /*0x71740c*/
  Power::TimerProcess(this->AirstrikeTeamType); /*0x71741a*/
  Power::TimerProcess(this->ThreatPosed); /*0x717428*/
  Power::TimerProcess(this->VoxelAnimList_Embed); /*0x717436*/
  Power::TimerProcess(this->TurretNotExportedOnGround); /*0x717444*/
  Power::TimerProcess(this->MovementZone); /*0x717452*/
  Power::TimerProcess(this->GuardRange); /*0x717460*/
  Power::TimerProcess(this->MinDebris); /*0x71746e*/
  Power::TimerProcess(this->MaxDebris); /*0x71747c*/
  Power::TimerProcess(this->Passengers); /*0x71748a*/
  Power::TimerProcess(this->Sight); /*0x717498*/
  Power::TimerProcess(this->Cost); /*0x7174a6*/
  Power::TimerProcess(this->Soylent); /*0x7174b4*/
  Power::TimerProcess(this->TechLevel); /*0x7174c2*/
  Power::TimerProcess(this->q648); /*0x7174d0*/
  Power::TimerProcess(this->IdleRate); /*0x7174de*/
  Power::TimerProcess(this->ThreatPosed); /*0x7174ec*/
  Power::TimerProcess(this->Points); /*0x7174fa*/
  Power::TimerProcess(this->Speed); /*0x717508*/
  Power::TimerProcess(this->SpeedType); /*0x717516*/
  Power::TimerProcess(this->Ammo); /*0x717524*/
  Power::TimerProcess(this->AirRangeBonus); /*0x717532*/
  Power::TimerProcess(this->OwnerFlags); /*0x717540*/
  Power::TimerProcess(this->AIBasePlanningSide); /*0x71754e*/
  Power::TimerProcess(this->RotCount); /*0x71755c*/
  Power::TimerProcess(this->ROT); /*0x71756a*/
  Power::TimerProcess(this->TurretOffset); /*0x717578*/
  Power::TimerProcess(this->Points2); /*0x717586*/
  Power::TimerProcess(this->__pad_73C); /*0x717594*/
  Power::TimerProcess(this->ptr_758); /*0x7175a2*/
  Power::TimerProcess(this->ShadowIndex); /*0x7175b0*/
  int v7; // eax
  v7 = Power::TimerProcess(this->Storage); /*0x7175be*/
  (*((unsigned char *)&(v7))) = this->IsTrain; /*0x7175c3*/
  Power::FlagProcess(aP1, v7); /*0x7175cc*/
  int v8; // ecx
  (*((unsigned char *)&(v8))) = this->IsDropship; /*0x7175d1*/
  Power::FlagProcess(aP1, v8); /*0x7175da*/
  int v9; // edx
  (*((unsigned char *)&(v9))) = this->ToProtect; /*0x7175df*/
  int v10; // eax
  v10 = Power::FlagProcess(aP1, v9); /*0x7175e8*/
  (*((unsigned char *)&(v10))) = this->Disableable; /*0x7175ed*/
  Power::FlagProcess(aP1, v10); /*0x7175f6*/
  int v11; // ecx
  (*((unsigned char *)&(v11))) = this->Unbuildable; /*0x7175fb*/
  Power::FlagProcess(aP1, v11); /*0x717604*/
  int v12; // edx
  (*((unsigned char *)&(v12))) = this->DoubleOwned; /*0x717609*/
  int v13; // eax
  v13 = Power::FlagProcess(aP1, v12); /*0x717612*/
  (*((unsigned char *)&(v13))) = this->Invisible; /*0x717617*/
  Power::FlagProcess(aP1, v13); /*0x717620*/
  int v14; // ecx
  (*((unsigned char *)&(v14))) = this->RadarVisible; /*0x717625*/
  Power::FlagProcess(aP1, v14); /*0x71762e*/
  int v15; // edx
  (*((unsigned char *)&(v15))) = this->HasPrimary; /*0x717633*/
  int v16; // eax
  v16 = Power::FlagProcess(aP1, v15); /*0x71763c*/
  (*((unsigned char *)&(v16))) = this->Sensors; /*0x717641*/
  Power::FlagProcess(aP1, v16); /*0x71764a*/
  int v17; // ecx
  (*((unsigned char *)&(v17))) = this->Nominal; /*0x71764f*/
  Power::FlagProcess(aP1, v17); /*0x717658*/
  int v18; // edx
  (*((unsigned char *)&(v18))) = this->DontScore; /*0x71765d*/
  int v19; // eax
  v19 = Power::FlagProcess(aP1, v18); /*0x717666*/
  (*((unsigned char *)&(v19))) = this->DamageSelf; /*0x71766b*/
  Power::FlagProcess(aP1, v19); /*0x717674*/
  int v20; // ecx
  (*((unsigned char *)&(v20))) = this->Turret; /*0x717679*/
  Power::FlagProcess(aP1, v20); /*0x717682*/
  int v21; // edx
  (*((unsigned char *)&(v21))) = this->Repairable; /*0x717687*/
  int v22; // eax
  v22 = Power::FlagProcess(aP1, v21); /*0x717690*/
  (*((unsigned char *)&(v22))) = this->Crewed; /*0x717695*/
  Power::FlagProcess(aP1, v22); /*0x71769e*/
  int v23; // ecx
  (*((unsigned char *)&(v23))) = this->Remapable; /*0x7176a3*/
  Power::FlagProcess(aP1, v23); /*0x7176ac*/
  int v24; // edx
  (*((unsigned char *)&(v24))) = this->IntList_A_Items; /*0x7176b1*/
  int v25; // eax
  v25 = Power::FlagProcess(aP1, v24); /*0x7176ba*/
  (*((unsigned char *)&(v25))) = this->Naval; /*0x7176bf*/
  Power::FlagProcess(aP1, v25); /*0x7176c8*/
  int v26; // ecx
  (*((unsigned char *)&(v26))) = this->Remapable; /*0x7176cd*/
  Power::FinalizeDrain(aP1, v26); /*0x7176d6*/
  int v27; // edx
  (*((unsigned char *)&(v27))) = this->Cloakable; /*0x7176db*/
  int v28; // eax
  v28 = Power::FinalizeDrain(aP1, v27); /*0x7176e4*/
  (*((unsigned char *)&(v28))) = this->Teleporter; /*0x7176e9*/
  Power::FlagProcess(aP1, v28); /*0x7176f2*/
  int v29; // ecx
  (*((unsigned char *)&(v29))) = this->ReselectIfLimboed; /*0x7176f7*/
  Power::FlagProcess(aP1, v29); /*0x717700*/
  int v30; // edx
  (*((unsigned char *)&(v30))) = this->RejoinTeamIfLimboed; /*0x717705*/
  int v31; // eax
  v31 = Power::FlagProcess(aP1, v30); /*0x71770e*/
  (*((unsigned char *)&(v31))) = this->SlaveRegenRate; /*0x717713*/
  Power::FlagProcess(aP1, v31); /*0x71771c*/
  int v32; // ecx
  (*((unsigned char *)&(v32))) = this->qD21; /*0x717721*/
  Power::FlagProcess(aP1, v32); /*0x71772a*/
  int v33; // edx
  (*((unsigned char *)&(v33))) = this->qD23; /*0x71772f*/
  int v34; // eax
  v34 = Power::FlagProcess(aP1, v33); /*0x717738*/
  (*((unsigned char *)&(v34))) = this->SlaveReloadRate; /*0x71773d*/
  Power::FlagProcess(aP1, v34); /*0x717746*/
  int v35; // ecx
  (*((unsigned char *)&(v35))) = this->qD25; /*0x71774b*/
  Power::FlagProcess(aP1, v35); /*0x717754*/
  int v36; // edx
  (*((unsigned char *)&(v36))) = this->qD26; /*0x717759*/
  int v37; // eax
  v37 = Power::FlagProcess(aP1, v36); /*0x717762*/
  (*((unsigned char *)&(v37))) = this->qDBE; /*0x717767*/
  Power::FlagProcess(aP1, v37); /*0x717770*/
  int v38; // ecx
  (*((unsigned char *)&(v38))) = this->qDBF; /*0x717775*/
  Power::FlagProcess(aP1, v38); /*0x71777e*/
  int v39; // edx
  (*((unsigned char *)&(v39))) = this->MobileFire; /*0x717783*/
  int v40; // eax
  v40 = Power::FlagProcess(aP1, v39); /*0x71778c*/
  (*((unsigned char *)&(v40))) = this->OpportunityFire; /*0x717791*/
  Power::FlagProcess(aP1, v40); /*0x71779a*/
  int v41; // ecx
  (*((unsigned char *)&(v41))) = this->DistributedFire; /*0x71779f*/
  return Power::FlagProcess(aP1, v41); /*0x7177ad*/
}
} // namespace gamemd
// 0x7178C0
namespace gamemd {
unsigned int * BuildingTypeClass::GetUpgradeOffset(unsigned int * a2, double a3, unsigned int * a4)
{


  int v4; // ecx
  int v5 = v4; // esi /*0x7178c4*/
  if ( *(unsigned char *)(v4 + 1980) ) /*0x7178c6*/
  {
    int v6; // eax
    v6 = *(unsigned int *)(v4 + 1968); /*0x7178d4*/
    int v7; // ecx
    v7 = *(unsigned int *)(v4 + 1972); /*0x7178da*/
    unsigned int v18[2]; // [esp+24h] [ebp-8h] BYREF
    v18[0] = v6; /*0x7178e1*/
    v18[1] = v7; /*0x7178e6*/
    int *v8; // eax
    int v17[3]; // [esp+18h] [ebp-14h] BYREF
    v8 = (int *)World::ToScreen(v17, v18, a2); /*0x7178fb*/
    int v9 = *v8; // ecx /*0x717900*/
    int v10 = v8->vtable2; // edi /*0x717905*/
    v17[0] = 10 * v5->ClearAllWeapons; /*0x71791b*/
    __asm { fild [esp+2Ch+var_14] } /*0x717921*/
    void *v11; // ebp
    v11 = (void *)(v9 - v17[0]); /*0x717927*/
    void *v12; // edi
    v12 = (void *)(v10 - v17[0]); /*0x717929*/
    __asm /*0x71792b*/
    {
      fld st
      fmul st, st(1)
      fadd st, st
      fstp [esp+2Ch+var_2C]; double
      fstp st
    }
    double v16; // [esp+0h] [ebp-2Ch]
    Math::Sqrt(v16); /*0x717936*/
    __asm { fmul ds:dbl_7F4FC0 } /*0x71793b*/
    int v13; // eax
    LOWORD(v13) = Math::RoundToInt(a3); /*0x717944*/
    int v14; // ebx
    if ( v5->ClearAllWeapons >= 0 ) /*0x717951*/
      v14 = -v13; /*0x717957*/
    else
      v14 = v13; /*0x717953*/
    a2->TechnoTypeClass = v11; /*0x71795f*/
    a2->? = v12; /*0x717961*/
    a2->? = (void *)v14; /*0x717966*/
    return &a2->TechnoTypeClass; /*0x717959*/
  }
  else
  {
    a2->TechnoTypeClass = *(void **)(v4 + 1968); /*0x71797f*/
    a2->? = *(void **)(v4 + 1972); /*0x717984*/
    a2->? = *(void **)(v4 + 1976); /*0x71798b*/
    return &a2->TechnoTypeClass; /*0x717971*/
  }

}
} // namespace gamemd
// 0x746000
namespace gamemd {
int BuildingTypeClass::IsPlacementValid(IUnknown * aP1, IUnknown * aP2)
{


  if ( (*((int (__fastcall **)(BuildingTypeClass *))this->TechnoTypeClass + 114))(this) < 0 /*0x746030*/
    || !MapSeed::CheckTileMatch((MapSeed *)&DataGlobal_87F7E8, aP1, aP2, 0, 0, 0, 0) )
  {
    return 1; /*0x746030*/
  }
  if ( *aP1 == *aP2 && aP1[1] == aP2[1] ) /*0x746050*/
    return 0; /*0x746059*/
  signed int v4; // ecx
  v4 = abs32(aP2[1] - aP1[1]); /*0x74606b*/
  int v5; // eax
  v5 = abs32(*aP2 - *aP1); /*0x746078*/
  if ( v5 <= v4 ) /*0x74607c*/
    v5 = v4; /*0x74607e*/
  if ( v5 == 1 ) /*0x746083*/
    return 0; /*0x74608c*/
  if ( v5 >= 12 /*0x7460ad*/
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, aP1, 1)
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, aP2, 1) )
  {
    return 1; /*0x7460f7*/
  }
  int v6; // eax
  v6 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, aP2) + 80) >> 8; /*0x7460cd*/
  LOBYTE(v6) = v6 & 1; /*0x7460d0*/
  return Pathfinding::CalcDistance((int)&g_AudioInitFlag, aP1, aP2, (int)this, 0, v6, 0) > 15; /*0x746052*/

}
} // namespace gamemd
// 0x7480D0
namespace gamemd {
AbstractClass * * BuildingTypeClass::FindOrCreateAlt(INIClass * Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x7480ec*/
    return 0; /*0x74814f*/
  v2 = 0; /*0x7480fd*/
  if ( dword_A83CF0 <= 0 ) /*0x748101*/
  {
    LABEL_6:
    if ( operator new(0xE78u) ) /*0x74812b*/
      return UnitTypeClass::UnitTypeClass(Source); /*0x748141*/
    return 0; /*0x748135*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)dword_A83CE4 + v2) + 36), Source) ) /*0x74811a*/
  {
    if ( ++v2 >= dword_A83CF0 ) /*0x748124*/
      goto LABEL_6; /*0x748124*/
  }
  return *((unsigned int *)dword_A83CE4 + v2); /*0x74813f*/
}
} // namespace gamemd
// 0x41C500
namespace gamemd {
char BuildingTypeClass::Enqueue(int a2, void *a2_2)
{

  char *v3; // edi
  if ( v3 < 0 ) /*0x41c50c*/
    return 0; /*0x41c50c*/
  v3 = (char *)operator new(8 * (v3 + v3->vtable3)); /*0x41c520*/
  if ( !v3 ) /*0x41c527*/
    return 0; /*0x41c580*/
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  for ( i = 0; i < v3->vtable2; *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x41c535*/
  {
    v5 = 8 * i; /*0x41c539*/
    v6 = (unsigned int *)(*&v3->needsSave * i++); /*0x41c542*/
    *(unsigned int *)&v3[v5] = *v6; /*0x41c547*/
  }
  operator delete((*(void **)v3)); /*0x41c55b*/
  int v7 = v3 + v3->vtable3; // eax /*0x41c566*/
  *(unsigned int *)v3 = v3; /*0x41c568*/
  v3->vtable3 = v7; /*0x41c56a*/
  v3->uniqueId = 0; /*0x41c56d*/
  return 1; /*0x41c574*/
}
} // namespace gamemd
// 0x41C590
namespace gamemd {
size_t BuildingTypeClass::Dequeue(int *aP1, void *a2)
{


  int result; // eax
  result = (int)this->vtable2; /*0x41c593*/
  if ( result ) /*0x41c598*/
  {
    if ( !LOBYTE(this->vtable4) ) /*0x41c59e*/
    {
      qsort(this->TechnoTypeClass, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction); /*0x41c5b0*/
      this->uniqueId = 0; /*0x41c5b8*/
      LOBYTE(this->vtable4) = 1; /*0x41c5bf*/
    }
    char *vtable0; // edi
    vtable0 = (char *)this->TechnoTypeClass; /*0x41c5c9*/
    int v5 = *aP1; // ebx /*0x41c5cb*/
    int vtable1; // ecx
    vtable1 = (int)this->vtable2; /*0x41c5cd*/
    if ( vtable1 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      int v7; // esi
      v7 = *(unsigned int *)&vtable0[8 * (vtable1 / 2)]; /*0x41c5db*/
      if ( v7 <= v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (int)&vtable0[8 * (vtable1 / 2)]; /*0x41c603*/
        vtable0 += 8 * (vtable1 / 2) + 8; /*0x41c5eb*/
        vtable1 += -1 - vtable1 / 2; /*0x41c5f3*/
      }
      else
      {
        vtable1 /= 2; /*0x41c5e5*/
      }
      if ( vtable1 <= 0 ) /*0x41c5f7*/
        return 0; /*0x41c5f7*/
    }
  }
  return result; /*0x41c59a*/

}
} // namespace gamemd
// 0x45E7B0
namespace gamemd {
int BuildingTypeClass::FindIndexByName(void *a1)
{

  if ( !this ) /*0x45e7b6*/
    return -1; /*0x45e7b6*/
  int v2 = 0; // esi /*0x45e7bd*/
  if ( dword_A83C78 <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83C6C + v2) + 36), (char *)this) ) /*0x45e7da*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x45e7e4*/
      return -1; /*0x45e7e4*/
  }
  return v2; /*0x45e7e6*/
}
} // namespace gamemd
// 0x45ECE0
namespace gamemd {
int BuildingTypeClass::GetMaxPips()
{


  int result; // eax
  result = 60 * stru_81926C.Type[this->Foundation[0]] / 8; /*0x45ed02*/
  if ( this->u32_D2E == 2 ) /*0x45ed08*/
  {
    if ( this->Weeder ) /*0x45ed14*/
    {
      int v2; // ecx
      v2 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 6096); /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 6096); /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
      int Storage; // ecx
      Storage = this->Storage; /*0x45ed38*/
      if ( Storage >= 0 ) /*0x45ed40*/
      {
        if ( Storage <= result ) /*0x45ed47*/
          return Storage; /*0x45ed49*/
      }
      else
      {
        return 0; /*0x45ed42*/
      }
    }
  }
  else if ( this->u32_D2E != 4 ) /*0x45ed0d*/
  {
    return ObjectClass::GetModeSpecificValue((TechnoTypeClass *)this); /*0x45ed0f*/
  }
  return result; /*0x45ed30*/

}
} // namespace gamemd
// 0x464AF0
namespace gamemd {
unsigned int * BuildingTypeClass::GetSizeInLeptons(unsigned int * a2)
{


  int v2; // eax
  v2 = this->Foundation[0]; /*0x464af0*/
  int v3 = dword_89DDB8 * this->Height; // ecx /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  int v4; // edx
  v4 = *(int *)((char *)stru_81926C.Type + v2); /*0x464b0b*/
  int v5; // eax
  v5 = *(int *)((char *)dword_819310 + v2); /*0x464b11*/
  *a2 = v4 << 8; /*0x464b1d*/
  a2[1] = v5 << 8; /*0x464b22*/
  a2[2] = v3; /*0x464b27*/
  return a2; /*0x464b2a*/

}
} // namespace gamemd
// 0x465300
namespace gamemd {
int BuildingTypeClass::SaveLoad_Prefix_0(void *a1, void *a2, void *a3, void *a4)
{

  int result; // eax
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  TechnoTypeClass *v7; // [esp+18h] [ebp+4h]
  unsigned int *v8; // [esp+1Ch] [ebp+8h]
  int *v9; // [esp+20h] [ebp+Ch] BYREF
  result = TechnoTypeClass::SaveLoad_Prefix_0(v7, v8, v9, v5, v6); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    int v2 = *v8; // edx /*0x465322*/
    v9 = *(int **)&((unsigned int *)&v7[1])[1424]; /*0x46532e*/
    result = (*(int (__stdcall **)(unsigned int *, int **, int, unsigned int))(v2 + 16))(v8, &v9, 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      int v3 = 0; // ebp /*0x46533d*/
      if ( (int)v9 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        int i; // edi
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (__stdcall **)(unsigned int *, int, int, unsigned int))(*v8 + 16))( /*0x465355*/
                     v8,
                     i + *(unsigned int *)&((unsigned int *)&v7[1])[1420],
                     12,
                     0);
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= (int)v9 ) /*0x465366*/
            return 0; /*0x465366*/
        }
      }
    }
  }
  return result; /*0x46536a*/
}
} // namespace gamemd
// 0x465380
namespace gamemd {
int BuildingTypeClass::GetClassIdentifier()
{

  unsigned int *v2; // [esp+8h] [ebp+8h]
  if ( !v2 ) /*0x465386*/
    return -2147467261; /*0x465388*/
  *v2 = -1366608933; /*0x465396*/
  v2[1] = 298976796; /*0x46539e*/
  v2[2] = 1610654892; /*0x4653a7*/
  v2[3] = unk_7E95CC; /*0x4653b0*/
  return 0; /*0x46538d*/
}
} // namespace gamemd
// 0x465D90
namespace gamemd {
int BuildingTypeClass::GetTypeIdentifier()
{
  return 7; /*0x465d95*/
}
} // namespace gamemd
// 0x465DA0
namespace gamemd {
int BuildingTypeClass::GetObjectSize()
{
  return 6040; /*0x465da5*/
}
} // namespace gamemd
// 0x465DB0
namespace gamemd {
int BuildingTypeClass::GetAuxField()
{
  return this->ArrayIndex; /*0x465db6*/
}
} // namespace gamemd
// 0x465DC0
namespace gamemd {
int BuildingTypeClass::ddtor(void *a1)
{

  BuildingTypeClass::CleanupMembers(a1); /*0x465dc3*/
  char v3; // [esp+8h] [ebp+4h]
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    operator delete((a1)); /*0x465dd0*/
  return (int)a1; /*0x465dda*/
}
} // namespace gamemd
// 0x474A90
namespace gamemd {
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3, void *a4)
{

  char Destination[32]; // [esp+8h] [ebp-20h] BYREF
  INIClass::GetString( /*0x474aba*/
    (INIClass *)aP1,
    a2,
    aP3,
    *(char **)(*(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable + 4 * a4) + 772),
    Destination,
    32);
  int v4 = 0; // esi /*0x474ac4*/
  if ( *(int *)g_AnimClass_SaveState <= 0 ) /*0x474ac8*/
    return a4; /*0x474b06*/
  int v5; // eax
  v5 = *(unsigned int *)&BuildingTypeClass_AnimTable; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    bool v6; // zf
    v6 = _strcmpi(*(char **)(*(unsigned int *)(v5 + 4 * v4) + 772), Destination) == 0; /*0x474ae6*/
    v5 = *(unsigned int *)&BuildingTypeClass_AnimTable; /*0x474ae8*/
    if ( v6 && *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable + 4 * v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= *(int *)g_AnimClass_SaveState ) /*0x474b04*/
      return a4; /*0x474b04*/
  }
  return v4; /*0x474b08*/
}
} // namespace gamemd
// 0x478850
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{


  void *v4 = 0; // ebx /*0x478859*/
  this->vtable2 = 0; /*0x47885d*/
  this->vtable3 = (void *)a2; /*0x478860*/
  LOBYTE(this->vtable4) = 1; /*0x478863*/
  BYTE1(this->u32_D) = 0; /*0x478867*/
  this->TechnoTypeClass = &vt_VectorClass; /*0x47886a*/
  if ( !a2 ) /*0x478870*/
    return &this->TechnoTypeClass; /*0x4788d0*/
  if ( !a3 ) /*0x478878*/
  {
    int v8; // eax
    v8 = __2_YAPAXI_Z(3 * a2); /*0x4788a2*/
    if ( v8 ) /*0x4788ac*/
    {
      if ( a2 - 1 >= 0 ) /*0x4788b3*/
      {
        unsigned char *v9 = &v8->ptr_2; // ecx /*0x4788b5*/
        int v10 = a2; // edx /*0x4788b8*/
        do /*0x4788c5*/
        {
          *(v9 - 2) = 0; /*0x4788b9*/
          *(v9 - 1) = 0; /*0x4788bc*/
          *v9 = 0; /*0x4788bf*/
          v9 += 3; /*0x4788c1*/
          --v10; /*0x4788c4*/
        }
        while ( v10 ); /*0x4788c5*/
      }
      v4 = (void *)v8; /*0x4788c7*/
    }
    this->vtable2 = v4; /*0x4788c9*/
    BYTE1(this->u32_D) = 1; /*0x4788cc*/
    return &this->TechnoTypeClass; /*0x4788cc*/
  }
  if ( a2 - 1 >= 0 ) /*0x47887f*/
  {
    unsigned char *v5; // eax
    v5 = (unsigned char *)(a3 + 2); /*0x478881*/
    int v6 = a2; // ecx /*0x478884*/
    do /*0x478891*/
    {
      *(v5 - 2) = 0; /*0x478885*/
      *(v5 - 1) = 0; /*0x478888*/
      *v5 = 0; /*0x47888b*/
      v5 += 3; /*0x47888d*/
      --v6; /*0x478890*/
    }
    while ( v6 ); /*0x478891*/
  }
  this->vtable2 = (void *)a3; /*0x478893*/
  return &this->TechnoTypeClass; /*0x478898*/

}
} // namespace gamemd
// 0x4C9680
namespace gamemd {
int BuildingTypeClass::GetPowerOutput(int aP1)
{

  int result = aP1; // eax /*0x4c9680*/
  if ( aP1 >= 127 ) /*0x4c9687*/
    result = 127; /*0x4c9689*/
  int16_t v3; // dx
  (*((unsigned char *)&(v3))) = 0; /*0x4c968e*/
  (*(((unsigned char *)&(v3)) + (sizeof(v3) - 1))) = result; /*0x4c9690*/
  (this->abstractFlags) = v3; /*0x4c9692*/
  return result; /*0x4c9696*/
}
} // namespace gamemd
// 0x747370
namespace gamemd {
int BuildingTypeClass::FindIndex(void *a1)
{

  if ( !this ) /*0x747376*/
    return -1; /*0x747376*/
  int v2 = 0; // esi /*0x74737d*/
  if ( dword_A83CF0 <= 0 ) /*0x747381*/
    return -1; /*0x7473a6*/
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83CE4 + v2) + 36), (char *)this) ) /*0x74739a*/
  {
    if ( ++v2 >= dword_A83CF0 ) /*0x7473a4*/
      return -1; /*0x7473a4*/
  }
  return v2; /*0x7473a6*/
}
} // namespace gamemd
