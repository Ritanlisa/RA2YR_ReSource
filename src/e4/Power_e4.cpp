// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"

// 0x43A5D0
namespace gamemd {
int Power::Update(int * a2, void *a4 = 0, void *a3 = 0, void *a1 = 0)
{

  AbstractClass::ProcessPower((int)this, a2); /*0x43a5d9*/
  return Power::TimerProcess((int)MEMORY[0xA8ED84] - *((unsigned int *)this + 12)); /*0x43a5f0*/

}
}
// 0x67C6E0
namespace gamemd {
unsigned int * Power::UpdateAll()
{

  int i; // esi
  int j; // esi
  int k; // esi
  int m; // esi
  int n; // esi
  int ii; // esi
  int jj; // esi
  int kk; // esi
  int mm; // esi
  int nn; // esi
  int i1; // esi
  int i2; // esi
  int i3; // esi
  int i4; // esi
  int i5; // esi
  int i6; // esi
  int i7; // esi
  int i8; // esi
  int i9; // esi
  int i10; // esi
  int i11; // esi
  int i12; // esi
  int i13; // esi
  int i14; // esi
  int i15; // esi
  int i16; // esi
  int i17; // esi
  int i18; // esi
  int i19; // esi
  int i20; // esi
  int i21; // esi
  int i22; // esi
  int i23; // esi
  int i24; // esi
  int i25; // esi
  int i26; // esi
  int i27; // esi
  int i28; // esi
  int i29; // esi
  int i30; // esi
  int i31; // esi
  int i32; // esi
  int i33; // esi
  int i34; // esi
  int i35; // esi
  int i36; // esi
  int i37; // esi
  int i38; // esi
  int v50; // eax
  int v51; // edx
  int v53; // [esp+C0h] [ebp-Ch] BYREF
  int v54; // [esp+C4h] [ebp-8h]
  int v55; // [esp+C8h] [ebp-4h]

  v53 = 0; /*0x67c6f2*/
  v54 = 0; /*0x67c6fa*/
  v55 = 0; /*0x67c702*/
  Power::ComputeHousePowerChecksum(&v53); /*0x67c70a*/
  for ( i = 0; i < g_SuperWeaponTypeArray; ++i ) /*0x67c718*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)g_SuperWeaponTypeCount + i) + 52))( /*0x67c72a*/
      *((unsigned int *)g_SuperWeaponTypeCount + i),
      &v53);
  for ( j = 0; j < HouseClass_Count; ++j ) /*0x67c740*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)&HouseClass_Array->__pad_0[4 * j] + 52))( /*0x67c752*/
      *(unsigned int *)&HouseClass_Array->__pad_0[4 * j],
      &v53);
  for ( k = 0; k < g_CrateCount; ++k ) /*0x67c768*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)g_UnitTypeCount2 + k) + 52))( /*0x67c77a*/
      *((unsigned int *)g_UnitTypeCount2 + k),
      &v53);
  for ( m = 0; m < MEMORY[0x8B4118]; ++m ) /*0x67c790*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x8B410C] + m) + 52))( /*0x67c7a2*/
      *((unsigned int *)MEMORY[0x8B410C] + m),
      &v53);
  for ( n = 0; n < MEMORY[0xA8E358]; ++n ) /*0x67c7b8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8E34C] + n) + 52))( /*0x67c7ca*/
      *((unsigned int *)MEMORY[0xA8E34C] + n),
      &v53);
  for ( ii = 0; ii < MEMORY[0xA83DF8]; ++ii ) /*0x67c7e0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA83DEC] + ii) + 52))( /*0x67c7f2*/
      *((unsigned int *)MEMORY[0xA83DEC] + ii),
      &v53);
  for ( jj = 0; jj < g_TriggerClassCount; ++jj ) /*0x67c808*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)g_TriggerTypeCount + jj) + 52))( /*0x67c81a*/
      *((unsigned int *)g_TriggerTypeCount + jj),
      &v53);
  for ( kk = 0; kk < MEMORY[0xA8EB50]; ++kk ) /*0x67c830*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8EB44] + kk) + 52))( /*0x67c842*/
      *((unsigned int *)MEMORY[0xA8EB44] + kk),
      &v53);
  for ( mm = 0; mm < MEMORY[0xA8B228]; ++mm ) /*0x67c858*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8B21C] + mm) + 52))( /*0x67c86a*/
      *((unsigned int *)MEMORY[0xA8B21C] + mm),
      &v53);
  for ( nn = 0; nn < MEMORY[0xA8E3A0]; ++nn ) /*0x67c880*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8E394] + nn) + 52))( /*0x67c892*/
      *((unsigned int *)MEMORY[0xA8E394] + nn),
      &v53);
  for ( i1 = 0; i1 < MEMORY[0xA8B210]; ++i1 ) /*0x67c8a8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8B204] + i1) + 52))( /*0x67c8ba*/
      *((unsigned int *)MEMORY[0xA8B204] + i1),
      &v53);
  for ( i2 = 0; i2 < MEMORY[0xA8E9B8]; ++i2 ) /*0x67c8d0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8E9AC] + i2) + 52))( /*0x67c8e2*/
      *((unsigned int *)MEMORY[0xA8E9AC] + i2),
      &v53);
  for ( i3 = 0; i3 < MEMORY[0x8B4160]; ++i3 ) /*0x67c8f8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x8B4154] + i3) + 52))( /*0x67c90a*/
      *((unsigned int *)MEMORY[0x8B4154] + i3),
      &v53);
  for ( i4 = 0; i4 < MEMORY[0xA8E8E0]; ++i4 ) /*0x67c920*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8E8D4] + i4) + 52))( /*0x67c932*/
      *((unsigned int *)MEMORY[0xA8E8D4] + i4),
      &v53);
  for ( i5 = 0; i5 < MEMORY[0xA8ECB0]; ++i5 ) /*0x67c948*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8ECA4] + i5) + 52))( /*0x67c95a*/
      *((unsigned int *)MEMORY[0xA8ECA4] + i5),
      &v53);
  for ( i6 = 0; i6 < MEMORY[0x8B40F8]; ++i6 ) /*0x67c970*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x8B40EC] + i6) + 52))( /*0x67c982*/
      *((unsigned int *)MEMORY[0x8B40EC] + i6),
      &v53);
  for ( i7 = 0; i7 < dword_8B41D8; ++i7 ) /*0x67c998*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)unk_8B41CC + i7) + 52))(*((unsigned int *)unk_8B41CC + i7), &v53); /*0x67c9aa*/
  for ( i8 = 0; i8 < MEMORY[0x8872C0]; ++i8 ) /*0x67c9c0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x8872B4] + i8) + 52))( /*0x67c9d2*/
      *((unsigned int *)MEMORY[0x8872B4] + i8),
      &v53);
  for ( i9 = 0; i9 < MEMORY[0xB0E790]; ++i9 ) /*0x67c9e8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xB0E784] + i9) + 52))( /*0x67c9fa*/
      *((unsigned int *)MEMORY[0xB0E784] + i9),
      &v53);
  for ( i10 = 0; i10 < MEMORY[0xB0E730]; ++i10 ) /*0x67ca10*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xB0E724] + i10) + 52))( /*0x67ca22*/
      *((unsigned int *)MEMORY[0xB0E724] + i10),
      &v53);
  for ( i11 = 0; i11 < dword_8B4188; ++i11 ) /*0x67ca38*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)unk_8B417C + i11) + 52))(*((unsigned int *)unk_8B417C + i11), &v53); /*0x67ca4a*/
  for ( i12 = 0; i12 < MEMORY[0xA8EAF8]; ++i12 ) /*0x67ca60*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8EAEC] + i12) + 52))( /*0x67ca72*/
      *((unsigned int *)MEMORY[0xA8EAEC] + i12),
      &v53);
  for ( i13 = 0; i13 < MEMORY[0xB0E668]; ++i13 ) /*0x67ca88*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xB0E65C] + i13) + 52))( /*0x67ca9a*/
      *((unsigned int *)MEMORY[0xB0E65C] + i13),
      &v53);
  for ( i14 = 0; i14 < MEMORY[0xB0F1B0]; ++i14 ) /*0x67cab0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xB0F1A4] + i14) + 52))( /*0x67cac2*/
      *((unsigned int *)MEMORY[0xB0F1A4] + i14),
      &v53);
  for ( i15 = 0; i15 < MEMORY[0xA83E40]; ++i15 ) /*0x67cad8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA83E34] + i15) + 52))( /*0x67caea*/
      *((unsigned int *)MEMORY[0xA83E34] + i15),
      &v53);
  for ( i16 = 0; i16 < MEMORY[0xA8EB38]; ++i16 ) /*0x67cb00*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8EB2C] + i16) + 52))( /*0x67cb12*/
      *((unsigned int *)MEMORY[0xA8EB2C] + i16),
      &v53);
  for ( i17 = 0; i17 < MEMORY[0x887398]; ++i17 ) /*0x67cb28*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x88738C] + i17) + 52))( /*0x67cb3a*/
      *((unsigned int *)MEMORY[0x88738C] + i17),
      &v53);
  for ( i18 = 0; i18 < MEMORY[0x8874D0]; ++i18 ) /*0x67cb50*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x8874C4] + i18) + 52))( /*0x67cb62*/
      *((unsigned int *)MEMORY[0x8874C4] + i18),
      &v53);
  for ( i19 = 0; i19 < MEMORY[0x887578]; ++i19 ) /*0x67cb78*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x88756C] + i19) + 52))( /*0x67cb8a*/
      *((unsigned int *)MEMORY[0x88756C] + i19),
      &v53);
  for ( i20 = 0; i20 < MEMORY[0xA83DA8]; ++i20 ) /*0x67cba0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA83D9C] + i20) + 52))( /*0x67cbb2*/
      *((unsigned int *)MEMORY[0xA83D9C] + i20),
      &v53);
  for ( i21 = 0; i21 < MEMORY[0xA83DD8]; ++i21 ) /*0x67cbc8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA83DCC] + i21) + 52))( /*0x67cbda*/
      *((unsigned int *)MEMORY[0xA83DCC] + i21),
      &v53);
  for ( i22 = 0; i22 < g_GameCleanupState; ++i22 ) /*0x67cbf0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A8020C + i22) + 52))( /*0x67cc02*/
      *((unsigned int *)dword_A8020C + i22),
      &v53);
  for ( i23 = 0; i23 < MEMORY[0xA83D78]; ++i23 ) /*0x67cc18*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA83D6C] + i23) + 52))( /*0x67cc2a*/
      *((unsigned int *)MEMORY[0xA83D6C] + i23),
      &v53);
  for ( i24 = 0; i24 < g_BulletTypeInitState; ++i24 ) /*0x67cc40*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A83C84 + i24) + 52))( /*0x67cc52*/
      *((unsigned int *)dword_A83C84 + i24),
      &v53);
  for ( i25 = 0; i25 < MEMORY[0xA8ED50]; ++i25 ) /*0x67cc68*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8ED44] + i25) + 52))( /*0x67cc7a*/
      *((unsigned int *)MEMORY[0xA8ED44] + i25),
      &v53);
  for ( i26 = 0; i26 < dword_B72618; ++i26 ) /*0x67cc90*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_B7260C + i26) + 52))( /*0x67cca2*/
      *((unsigned int *)dword_B7260C + i26),
      &v53);
  for ( i27 = 0; i27 < MEMORY[0xA8EC28]; ++i27 ) /*0x67ccb8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8EC1C] + i27) + 52))( /*0x67ccca*/
      *((unsigned int *)MEMORY[0xA8EC1C] + i27),
      &v53);
  for ( i28 = 0; i28 < MEMORY[0xA83D90]; ++i28 ) /*0x67cce0*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)&MEMORY[0xA83D84]->vtable0[4 * i28] + 52))( /*0x67ccf2*/
      *(unsigned int *)&MEMORY[0xA83D84]->vtable0[4 * i28],
      &v53);
  for ( i29 = 0; i29 < g_BridgeCellPool; ++i29 ) /*0x67cd08*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_ABCA14 + i29) + 52))( /*0x67cd1a*/
      *((unsigned int *)dword_ABCA14 + i29),
      &v53);
  for ( i30 = 0; i30 < dword_8B41A0; ++i30 ) /*0x67cd30*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)unk_8B4194 + i30) + 52))(*((unsigned int *)unk_8B4194 + i30), &v53); /*0x67cd42*/
  for ( i31 = 0; i31 < MEMORY[0x8B4148]; ++i31 ) /*0x67cd58*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x8B413C] + i31) + 52))( /*0x67cd6a*/
      *((unsigned int *)MEMORY[0x8B413C] + i31),
      &v53);
  for ( i32 = 0; i32 < MEMORY[0x8B4130]; ++i32 ) /*0x67cd80*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x8B4124] + i32) + 52))( /*0x67cd92*/
      *((unsigned int *)MEMORY[0x8B4124] + i32),
      &v53);
  for ( i33 = 0; i33 < MEMORY[0xB0F4F8]; ++i33 ) /*0x67cda8*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)&MEMORY[0xB0F4EC]->__pad_0[4 * i33] + 52))( /*0x67cdba*/
      *(unsigned int *)&MEMORY[0xB0F4EC]->__pad_0[4 * i33],
      &v53);
  for ( i34 = 0; i34 < MEMORY[0x8A3880]; ++i34 ) /*0x67cdd0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0x8A3874] + i34) + 52))( /*0x67cde2*/
      *((unsigned int *)MEMORY[0x8A3874] + i34),
      &v53);
  for ( i35 = 0; i35 < MEMORY[0xA8E340]; ++i35 ) /*0x67cdf8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8E334] + i35) + 52))( /*0x67ce0a*/
      *((unsigned int *)MEMORY[0xA8E334] + i35),
      &v53);
  for ( i36 = 0; i36 < dword_A83CC8; ++i36 ) /*0x67ce20*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A83CBC + i36) + 52))( /*0x67ce32*/
      *((unsigned int *)dword_A83CBC + i36),
      &v53);
  for ( i37 = 0; i37 < MEMORY[0xA8E328]; ++i37 ) /*0x67ce48*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8E31C] + i37) + 52))( /*0x67ce5a*/
      *((unsigned int *)MEMORY[0xA8E31C] + i37),
      &v53);
  for ( i38 = 0; i38 < MEMORY[0xA8E998]; ++i38 ) /*0x67ce70*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8E98C] + i38) + 52))( /*0x67ce82*/
      *((unsigned int *)MEMORY[0xA8E98C] + i38),
      &v53);
  if ( HouseClass_Player ) /*0x67ce96*/
    Power::TimerProcess(*((unsigned int *)HouseClass_Player + 12)); /*0x67cea0*/
  Power::TimerProcess((int)MEMORY[0xA8ED84]); /*0x67ceb0*/
  Power::TimerProcess((int)MEMORY[0xA8ECC8]); /*0x67cebf*/
  v50 = v54; /*0x67ceca*/
  *this = v53; /*0x67cece*/
  v51 = v55; /*0x67ced0*/
  *((unsigned int *)this + 1) = v50; /*0x67ced5*/
  *((unsigned int *)this + 2) = v51; /*0x67cedb*/
  return this; /*0x67ced4*/

}
}
// 0x68B940
namespace gamemd {
void* Power::ComputeHousePowerChecksum(unsigned int * a2)
{

  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // ebx
  int v23; // edx

  Checksum::AddString(a2, (unsigned __int8 *)((char *)this + 5050)); /*0x68b952*/
  Power::TimerProcess(*((unsigned int *)this + 1293)); /*0x68b960*/
  Power::TimerProcess(*((unsigned int *)this + 1294)); /*0x68b96e*/
  Power::TimerProcess(*((unsigned int *)this + 1295)); /*0x68b97c*/
  Power::TimerProcess(*((unsigned int *)this + 1296)); /*0x68b98a*/
  Power::TimerProcess(*((unsigned int *)this + 1297)); /*0x68b998*/
  Power::TimerProcess(*((unsigned int *)this + 1298)); /*0x68b9a6*/
  Power::TimerProcess(*((unsigned int *)this + 1299)); /*0x68b9b4*/
  Power::TimerProcess(*((unsigned int *)this + 1821)); /*0x68b9c2*/
  Power::TimerProcess(*((unsigned int *)this + 1825)); /*0x68b9d0*/
  Power::TimerProcess(*((unsigned int *)this + 1820)); /*0x68b9de*/
  Checksummer::Add_double(*((unsigned int *)this + 1822), *((unsigned int *)this + 1823)); /*0x68b9f3*/
  LOBYTE(v3) = *((unsigned char *)this + 13500); /*0x68b9f8*/
  Power::FlagProcess((int *)a2, v3); /*0x68ba01*/
  LOBYTE(v4) = *((unsigned char *)this + 13485); /*0x68ba06*/
  Power::FlagProcess((int *)a2, v4); /*0x68ba0f*/
  Power::TimerProcess(*((unsigned int *)this + 1824) / 100); /*0x68ba2e*/
  Power::TimerProcess(*((unsigned int *)this + 3368)); /*0x68ba3c*/
  LOBYTE(v5) = *((unsigned char *)this + 13484); /*0x68ba41*/
  Power::FlagProcess((int *)a2, v5); /*0x68ba4a*/
  Power::TimerProcess(*((unsigned int *)this + 3379)); /*0x68ba58*/
  LOBYTE(v6) = *((unsigned char *)this + 13486); /*0x68ba5d*/
  Power::FlagProcess((int *)a2, v6); /*0x68ba66*/
  LOBYTE(v7) = *((unsigned char *)this + 13487); /*0x68ba6b*/
  v8 = Power::FlagProcess((int *)a2, v7); /*0x68ba74*/
  LOBYTE(v8) = *((unsigned char *)this + 13488); /*0x68ba79*/
  Power::FlagProcess((int *)a2, v8); /*0x68ba82*/
  LOBYTE(v9) = *((unsigned char *)this + 13490); /*0x68ba87*/
  Power::FlagProcess((int *)a2, v9); /*0x68ba90*/
  LOBYTE(v10) = *((unsigned char *)this + 13492); /*0x68ba95*/
  v11 = Power::FlagProcess((int *)a2, v10); /*0x68ba9e*/
  LOBYTE(v11) = *((unsigned char *)this + 13489); /*0x68baa3*/
  Power::FlagProcess((int *)a2, v11); /*0x68baac*/
  Power::TimerProcess(*((unsigned int *)this + 1825)); /*0x68baba*/
  Power::TimerProcess(*((unsigned int *)this + 3380)); /*0x68bac8*/
  v12 = *((unsigned int *)this + 1146); /*0x68bacd*/
  v13 = *((unsigned int *)this + 1148); /*0x68bad3*/
  if ( v12 != -1 ) /*0x68badc*/
  {
    if ( (int)MEMORY[0xA8ED84] - v12 >= v13 ) /*0x68bae8*/
      v13 = 0; /*0x68baee*/
    else
      v13 -= (int)MEMORY[0xA8ED84] - v12; /*0x68baea*/
  }
  Power::TimerProcess(v13); /*0x68baf3*/
  v14 = *((unsigned int *)this + 1158); /*0x68baf8*/
  v15 = *((unsigned int *)this + 1160); /*0x68bafe*/
  if ( v14 != -1 ) /*0x68bb07*/
  {
    if ( (int)MEMORY[0xA8ED84] - v14 >= v15 ) /*0x68bb13*/
      v15 = 0; /*0x68bb19*/
    else
      v15 -= (int)MEMORY[0xA8ED84] - v14; /*0x68bb15*/
  }
  Power::TimerProcess(v15); /*0x68bb1e*/
  v16 = *((unsigned int *)this + 1161); /*0x68bb23*/
  v17 = *((unsigned int *)this + 1163); /*0x68bb29*/
  if ( v16 != -1 ) /*0x68bb32*/
  {
    if ( (int)MEMORY[0xA8ED84] - v16 >= v17 ) /*0x68bb3e*/
      v17 = 0; /*0x68bb44*/
    else
      v17 -= (int)MEMORY[0xA8ED84] - v16; /*0x68bb40*/
  }
  Power::TimerProcess(v17); /*0x68bb49*/
  v18 = *((unsigned int *)this + 1164); /*0x68bb4e*/
  v19 = *((unsigned int *)this + 1166); /*0x68bb54*/
  if ( v18 != -1 ) /*0x68bb5d*/
  {
    if ( (int)MEMORY[0xA8ED84] - v18 >= v19 ) /*0x68bb69*/
      v19 = 0; /*0x68bb6f*/
    else
      v19 -= (int)MEMORY[0xA8ED84] - v18; /*0x68bb6b*/
  }
  Power::TimerProcess(v19); /*0x68bb74*/
  v20 = *((unsigned int *)this + 1167); /*0x68bb79*/
  v21 = *((unsigned int *)this + 1169); /*0x68bb7f*/
  if ( v20 != -1 ) /*0x68bb88*/
  {
    if ( (int)MEMORY[0xA8ED84] - v20 >= v21 ) /*0x68bb94*/
      v21 = 0; /*0x68bb9a*/
    else
      v21 -= (int)MEMORY[0xA8ED84] - v20; /*0x68bb96*/
  }
  Power::TimerProcess(v21); /*0x68bb9f*/
  v22 = *((unsigned int *)this + 391); /*0x68bbaa*/
  if ( *((unsigned int *)this + 389) != -1 ) /*0x68bbb3*/
    v22 += Timer::GetTicks() - *((unsigned int *)this + 389); /*0x68bbc6*/
  Power::TimerProcess(v22); /*0x68bbcb*/
  Power::TimerProcess(*((unsigned int *)this + 387)); /*0x68bbd9*/
  Power::TimerProcess(*((unsigned int *)this + 388)); /*0x68bbe7*/
  Power::TimerProcess(*((unsigned int *)this + 1174)); /*0x68bbf5*/
  Power::TimerProcess(*((unsigned int *)this + 3408)); /*0x68bc03*/
  Power::TimerProcess(*((unsigned int *)this + 3409)); /*0x68bc11*/
  LOBYTE(v23) = *((unsigned char *)this + 13476); /*0x68bc16*/
  Power::FlagProcess((int *)a2, v23); /*0x68bc1f*/
  Power::TimerProcess(*((unsigned int *)this + 3410)); /*0x68bc2d*/
  Power::TimerProcess(*((unsigned int *)this + 3411)); /*0x68bc3b*/
  Power::TimerProcess(*((unsigned int *)this + 3412)); /*0x68bc49*/
  Power::TimerProcess(*((unsigned int *)this + 3413)); /*0x68bc57*/
  Power::TimerProcess(*((unsigned int *)this + 3414)); /*0x68bc65*/
  Power::TimerProcess(*((unsigned int *)this + 3415)); /*0x68bc73*/
  Power::TimerProcess(*((unsigned int *)this + 3402)); /*0x68bc81*/
  Power::TimerProcess(*((unsigned int *)this + 3403)); /*0x68bc8f*/
  return Power::TimerProcess(*((unsigned int *)this + 3404)); /*0x68bca2*/

}
}
// 0x4A1C10
namespace gamemd {
int Power::FinalizeDrain(int a2)
{

  int v2; // eax
  int result; // eax
  unsigned int i; // eax
  int *v5; // esi
  unsigned int v6; // eax
  int v7; // edi

  v2 = *(unsigned int *)&this->__pad_0[4]; /*0x4a1c10*/
  if ( !v2 ) /*0x4a1c15*/
    *(unsigned int *)&this->__pad_0[8] = 0; /*0x4a1c17*/
  this->__pad_0[v2 + 8] = a2; /*0x4a1c1f*/
  result = *(unsigned int *)&this->__pad_0[4] + 1; /*0x4a1c27*/
  *(unsigned int *)&this->__pad_0[4] = result; /*0x4a1c29*/
  if ( result == 4 ) /*0x4a1c2f*/
  {
    this->__pad_0[12] = this->__pad_0[4]; /*0x4a1c34*/
    for ( i = *(unsigned int *)&this->__pad_0[4] + 1; i < 4; ++i ) /*0x4a1c3d*/
      this->__pad_0[i + 8] = this->__pad_0[8]; /*0x4a1c42*/
    a2 = *(unsigned int *)&this->__pad_0[8]; /*0x4a1c50*/
    v5 = &a2; /*0x4a1c57*/
    v6 = ~*(unsigned int *)this->__pad_0; /*0x4a1c5b*/
    v7 = 4; /*0x4a1c5d*/
    do /*0x4a1c7e*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)v5 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1c7a*/
      v5 = (int *)((char *)v5 + 1); /*0x4a1c7c*/
      --v7; /*0x4a1c7d*/
    }
    while ( v7 ); /*0x4a1c7e*/
    result = ~v6; /*0x4a1c80*/
    *(unsigned int *)this->__pad_0 = result; /*0x4a1c83*/
    *(unsigned int *)&this->__pad_0[4] = 0; /*0x4a1c85*/
  }
  return result; /*0x4a1c8e*/

}
} // namespace gamemd

// 0x4A1CA0
namespace gamemd {
int Power::FlagProcess(int a2)
{

  int v2; // eax
  int result; // eax
  unsigned int i; // eax
  int *v5; // esi
  unsigned int v6; // eax
  int v7; // edi

  v2 = *(unsigned int *)&this->__pad_0[4]; /*0x4a1ca0*/
  if ( !v2 ) /*0x4a1ca7*/
    *(unsigned int *)&this->__pad_0[8] = 0; /*0x4a1ca9*/
  this->__pad_0[v2 + 8] = (unsigned char)a2 != 0; /*0x4a1cb7*/
  result = *(unsigned int *)&this->__pad_0[4] + 1; /*0x4a1cbf*/
  *(unsigned int *)&this->__pad_0[4] = result; /*0x4a1cc1*/
  if ( result == 4 ) /*0x4a1cc7*/
  {
    this->__pad_0[12] = this->__pad_0[4]; /*0x4a1ccc*/
    for ( i = *(unsigned int *)&this->__pad_0[4] + 1; i < 4; ++i ) /*0x4a1cd5*/
      this->__pad_0[i + 8] = this->__pad_0[8]; /*0x4a1cda*/
    a2 = *(unsigned int *)&this->__pad_0[8]; /*0x4a1ce8*/
    v5 = &a2; /*0x4a1cef*/
    v6 = ~*(unsigned int *)this->__pad_0; /*0x4a1cf3*/
    v7 = 4; /*0x4a1cf5*/
    do /*0x4a1d16*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)v5 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1d12*/
      v5 = (int *)((char *)v5 + 1); /*0x4a1d14*/
      --v7; /*0x4a1d15*/
    }
    while ( v7 ); /*0x4a1d16*/
    result = ~v6; /*0x4a1d18*/
    *(unsigned int *)this->__pad_0 = result; /*0x4a1d1b*/
    *(unsigned int *)&this->__pad_0[4] = 0; /*0x4a1d1d*/
  }
  return result; /*0x4a1d23*/

}
} // namespace gamemd

// 0x4A1D50
namespace gamemd {
int Power::TimerProcess(void * a1)
{

  int v2; // [esp+4h] [ebp+4h] BYREF

  return Checksummer::Add_Buffer((unsigned int *)a1, (unsigned __int8 *)&v2, 4); /*0x4a1d64*/

}
} // namespace gamemd

// 0x750090
namespace gamemd {
char Power::ChangedHouse(char a2)
{

  char result; // al

  result = a2; /*0x750090*/
  if ( a2 ) /*0x750096*/
    *this = 1065353216; /*0x750098*/
  else
    *this = 0; /*0x7500a1*/
  return result; /*0x75009e*/

}
} // namespace gamemd
