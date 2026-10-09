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
#include "e4/classes/Checksum_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"

// 0x43A5D0
namespace gamemd {
int Power::Update(int * a2, void *a2_2, void *a3_1, void *a4_1)
{
  AbstractClass::ProcessPower(); /*0x43a5d9*/
  return Power::TimerProcess(*(_DWORD *)&stru_A8EB00.?[416] - this->q00C); /*0x43a5f0*/
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
  void *v50; // eax
  void *v51; // edx
  int v53; // [esp+C0h] [ebp-Ch] BYREF
  void *v54; // [esp+C4h] [ebp-8h]
  void *v55; // [esp+C8h] [ebp-4h]

  v53 = 0; /*0x67c6f2*/
  v54 = 0; /*0x67c6fa*/
  v55 = 0; /*0x67c702*/
  Power::ComputeHousePowerChecksum((int)dword_A8B230, (unsigned int *)&v53); /*0x67c70a*/
  for ( i = 0; i < dword_A83CA8; ++i ) /*0x67c718*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C9C + i) + 52))(*((_DWORD *)dword_A83C9C + i), &v53); /*0x67c72a*/
  for ( j = 0; j < stru_A80220.nextArrayIndex; ++j ) /*0x67c740*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)stru_A80220.vfptr3 + j) + 52))( /*0x67c752*/
      *((_DWORD *)stru_A80220.vfptr3 + j),
      &v53);
  for ( k = 0; k < dword_A83CF0; ++k ) /*0x67c768*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83CE4 + k) + 52))(*((_DWORD *)dword_A83CE4 + k), &v53); /*0x67c77a*/
  for ( m = 0; m < FootClass_Array.storedTiberium[2]; ++m ) /*0x67c790*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.hijackerInfantryType + 4 * m) + 52))( /*0x67c7a2*/
      *(_DWORD *)(FootClass_Array.hijackerInfantryType + 4 * m),
      &v53);
  for ( n = 0; n < dword_A8E358; ++n ) /*0x67c7b8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E34C + n) + 52))(*((_DWORD *)dword_A8E34C + n), &v53); /*0x67c7ca*/
  for ( ii = 0; ii < *(int *)&stru_A83D50.__pad_80[40]; ++ii ) /*0x67c7e0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * ii) + 52))( /*0x67c7f2*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * ii),
      &v53);
  for ( jj = 0; jj < dword_A83C78; ++jj ) /*0x67c808*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C6C + jj) + 52))( /*0x67c81a*/
      *((_DWORD *)dword_A83C6C + jj),
      &v53);
  for ( kk = 0; kk < stru_A8EB00.vfptr[20]; ++kk ) /*0x67c830*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(stru_A8EB00.vfptr[17] + 4 * kk) + 52))( /*0x67c842*/
      *(_DWORD *)(stru_A8EB00.vfptr[17] + 4 * kk),
      &v53);
  for ( mm = 0; mm < dword_A8B228; ++mm ) /*0x67c858*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8B21C + mm) + 52))( /*0x67c86a*/
      *((_DWORD *)dword_A8B21C + mm),
      &v53);
  for ( nn = 0; nn < dword_A8E3A0; ++nn ) /*0x67c880*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E394 + nn) + 52))( /*0x67c892*/
      *((_DWORD *)dword_A8E394 + nn),
      &v53);
  for ( i1 = 0; i1 < dword_A8B210; ++i1 ) /*0x67c8a8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8B204 + i1) + 52))( /*0x67c8ba*/
      *((_DWORD *)dword_A8B204 + i1),
      &v53);
  for ( i2 = 0; i2 < dword_A8E9B8; ++i2 ) /*0x67c8d0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E9AC + i2) + 52))( /*0x67c8e2*/
      *((_DWORD *)dword_A8E9AC + i2),
      &v53);
  for ( i3 = 0; i3 < FootClass_Array.secondaryFacing[0]; ++i3 ) /*0x67c8f8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.primaryFacing[3] + 4 * i3) + 52))( /*0x67c90a*/
      *(_DWORD *)(FootClass_Array.primaryFacing[3] + 4 * i3),
      &v53);
  for ( i4 = 0; i4 < dword_A8E8E0; ++i4 ) /*0x67c920*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E8D4 + i4) + 52))( /*0x67c932*/
      *((_DWORD *)dword_A8E8D4 + i4),
      &v53);
  for ( i5 = 0; i5 < *(int *)&stru_A8EB00.?[204]; ++i5 ) /*0x67c948*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * i5) + 52))( /*0x67c95a*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * i5),
      &v53);
  for ( i6 = 0; i6 < (int)FootClass_Array.waveEffect; ++i6 ) /*0x67c970*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)&FootClass_Array.auxParticles1->vfptr + i6) + 52))( /*0x67c982*/
      *((_DWORD *)&FootClass_Array.auxParticles1->vfptr + i6),
      &v53);
  for ( i7 = 0; i7 < *(int *)&FootClass_Array.isTether; ++i7 ) /*0x67c998*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.barrelRecoil[5] + 4 * i7) + 52))( /*0x67c9aa*/
      *(_DWORD *)(FootClass_Array.barrelRecoil[5] + 4 * i7),
      &v53);
  for ( i8 = 0; i8 < dword_8872C0; ++i8 ) /*0x67c9c0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_8872B4 + i8) + 52))( /*0x67c9d2*/
      *((_DWORD *)dword_8872B4 + i8),
      &v53);
  for ( i9 = 0; i9 < g_MultiplayerCleanup; ++i9 ) /*0x67c9e8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B0E784 + i9) + 52))( /*0x67c9fa*/
      *((_DWORD *)dword_B0E784 + i9),
      &v53);
  for ( i10 = 0; i10 < g_GameObjectCleanup; ++i10 ) /*0x67ca10*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_TagClassCount + i10) + 52))( /*0x67ca22*/
      *((_DWORD *)g_TagClassCount + i10),
      &v53);
  for ( i11 = 0; i11 < *(int *)FootClass_Array.unknown_short_3C8; ++i11 ) /*0x67ca38*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.targetLaserTimer[0] + 4 * i11) + 52))( /*0x67ca4a*/
      *(_DWORD *)(FootClass_Array.targetLaserTimer[0] + 4 * i11),
      &v53);
  for ( i12 = 0; i12 < dword_A8EAF8; ++i12 ) /*0x67ca60*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8EAEC + i12) + 52))( /*0x67ca72*/
      *((_DWORD *)dword_A8EAEC + i12),
      &v53);
  for ( i13 = 0; i13 < dword_B0E668; ++i13 ) /*0x67ca88*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B0E65C + i13) + 52))( /*0x67ca9a*/
      *((_DWORD *)dword_B0E65C + i13),
      &v53);
  for ( i14 = 0; i14 < g_BuildingLoadQueue_Array.Weapon[54]; ++i14 ) /*0x67cab0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(g_BuildingLoadQueue_Array.Weapon[51] + 4 * i14) + 52))( /*0x67cac2*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.Weapon[51] + 4 * i14),
      &v53);
  for ( i15 = 0; i15 < *(int *)&stru_A83D50.__pad_C8[40]; ++i15 ) /*0x67cad8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * i15) + 52))( /*0x67caea*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * i15),
      &v53);
  for ( i16 = 0; i16 < stru_A8EB00.vfptr[14]; ++i16 ) /*0x67cb00*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(stru_A8EB00.vfptr[11] + 4 * i16) + 52))( /*0x67cb12*/
      *(_DWORD *)(stru_A8EB00.vfptr[11] + 4 * i16),
      &v53);
  for ( i17 = 0; i17 < *(int *)&stru_88732C.__pad_1C[80]; ++i17 ) /*0x67cb28*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_88732C.__pad_1C[68] + 4 * i17) + 52))( /*0x67cb3a*/
      *(_DWORD *)(*(_DWORD *)&stru_88732C.__pad_1C[68] + 4 * i17),
      &v53);
  for ( i18 = 0; i18 < g_WarheadTypePool; ++i18 ) /*0x67cb50*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_8874C4 + i18) + 52))( /*0x67cb62*/
      *((_DWORD *)dword_8874C4 + i18),
      &v53);
  for ( i19 = 0; i19 < g_WeaponTypePool; ++i19 ) /*0x67cb78*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_WeaponTypeConfig + i19) + 52))( /*0x67cb8a*/
      *((_DWORD *)g_WeaponTypeConfig + i19),
      &v53);
  for ( i20 = 0; i20 < *(int *)&stru_A83D50.__pad_3C[28]; ++i20 ) /*0x67cba0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i20) + 52))( /*0x67cbb2*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i20),
      &v53);
  for ( i21 = 0; i21 < *(int *)&stru_A83D50.__pad_80[8]; ++i21 ) /*0x67cbc8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)stru_A83D50.SuperClass_field_0x7C + i21) + 52))( /*0x67cbda*/
      *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + i21),
      &v53);
  for ( i22 = 0; i22 < g_GameCleanupState; ++i22 ) /*0x67cbf0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8020C + i22) + 52))( /*0x67cc02*/
      *((_DWORD *)dword_A8020C + i22),
      &v53);
  for ( i23 = 0; i23 < (int)stru_A83D50.SuperClass_field_0x28; ++i23 ) /*0x67cc18*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i23) + 52))( /*0x67cc2a*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i23),
      &v53);
  for ( i24 = 0; i24 < dword_A83C90; ++i24 ) /*0x67cc40*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C84 + i24) + 52))( /*0x67cc52*/
      *((_DWORD *)dword_A83C84 + i24),
      &v53);
  for ( i25 = 0; i25 < *(int *)&stru_A8EB00.?[364]; ++i25 ) /*0x67cc68*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * i25) + 52))( /*0x67cc7a*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * i25),
      &v53);
  for ( i26 = 0; i26 < dword_B72618; ++i26 ) /*0x67cc90*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B7260C + i26) + 52))( /*0x67cca2*/
      *((_DWORD *)dword_B7260C + i26),
      &v53);
  for ( i27 = 0; i27 < *(int *)&stru_A8EB00.?[68]; ++i27 ) /*0x67ccb8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i27) + 52))( /*0x67ccca*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i27),
      &v53);
  for ( i28 = 0; i28 < *(int *)&stru_A83D50.__pad_3C[4]; ++i28 ) /*0x67cce0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i28) + 52))( /*0x67ccf2*/
      *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i28),
      &v53);
  for ( i29 = 0; i29 < g_MissionQueueFrame.random[133]; ++i29 ) /*0x67cd08*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(g_MissionQueueFrame.random[130] + 4 * i29) + 52))( /*0x67cd1a*/
      *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * i29),
      &v53);
  for ( i30 = 0; i30 < FootClass_Array.turretRecoil[2]; ++i30 ) /*0x67cd30*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&FootClass_Array.isALoaner + 4 * i30) + 52))( /*0x67cd42*/
      *(_DWORD *)(*(_DWORD *)&FootClass_Array.isALoaner + 4 * i30),
      &v53);
  for ( i31 = 0; i31 < FootClass_Array.primaryFacing[0]; ++i31 ) /*0x67cd58*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.barrelFacing[3] + 4 * i31) + 52))( /*0x67cd6a*/
      *(_DWORD *)(FootClass_Array.barrelFacing[3] + 4 * i31),
      &v53);
  for ( i32 = 0; i32 < FootClass_Array.barrelFacing[0]; ++i32 ) /*0x67cd80*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.unloadTimer[0] + 4 * i32) + 52))( /*0x67cd92*/
      *(_DWORD *)(FootClass_Array.unloadTimer[0] + 4 * i32),
      &v53);
  for ( i33 = 0; i33 < g_BuildingLoadQueue_Array.BarrelAnimData[0]; ++i33 ) /*0x67cda8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * i33) + 52))( /*0x67cdba*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * i33),
      &v53);
  for ( i34 = 0; i34 < dword_8A3880; ++i34 ) /*0x67cdd0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_8A3874 + i34) + 52))( /*0x67cde2*/
      *((_DWORD *)dword_8A3874 + i34),
      &v53);
  for ( i35 = 0; i35 < dword_A8E340; ++i35 ) /*0x67cdf8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E334 + i35) + 52))( /*0x67ce0a*/
      *((_DWORD *)dword_A8E334 + i35),
      &v53);
  for ( i36 = 0; i36 < dword_A83CC8; ++i36 ) /*0x67ce20*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83CBC + i36) + 52))( /*0x67ce32*/
      *((_DWORD *)dword_A83CBC + i36),
      &v53);
  for ( i37 = 0; i37 < dword_A8E328; ++i37 ) /*0x67ce48*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E31C + i37) + 52))( /*0x67ce5a*/
      *((_DWORD *)dword_A8E31C + i37),
      &v53);
  for ( i38 = 0; i38 < dword_A8E998; ++i38 ) /*0x67ce70*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E98C + i38) + 52))( /*0x67ce82*/
      *((_DWORD *)dword_A8E98C + i38),
      &v53);
  if ( dword_A83D4C ) /*0x67ce96*/
    Power::TimerProcess((int)dword_A83D4C->Object_field_0x30); /*0x67cea0*/
  Power::TimerProcess(*(int *)&stru_A8EB00.?[416]); /*0x67ceb0*/
  Power::TimerProcess(*(int *)&stru_A8EB00.?[228]); /*0x67cebf*/
  v50 = v54; /*0x67ceca*/
  this->Power_field_0x0 = v53; /*0x67cece*/
  v51 = v55; /*0x67ced0*/
  this->Power_field_0x4 = v50; /*0x67ced5*/
  this->Power_field_0x8 = v51; /*0x67cedb*/
  return &this->Power_field_0x0; /*0x67ced4*/
}
}
// 0x68B940
namespace gamemd {
void* Power::ComputeHousePowerChecksum(unsigned int * a2, void *a2_2)
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

  Checksum::AddString(a2_2, (unsigned __int8 *)(a2_2 + 5050)); /*0x68b952*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 5172)); /*0x68b960*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 5176)); /*0x68b96e*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 5180)); /*0x68b97c*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 5184)); /*0x68b98a*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 5188)); /*0x68b998*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 5192)); /*0x68b9a6*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 5196)); /*0x68b9b4*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 7284)); /*0x68b9c2*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 7300)); /*0x68b9d0*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 7280)); /*0x68b9de*/
  Checksummer::Add_double(*(_DWORD *)(a2_2 + 7288), *(_DWORD *)(a2_2 + 7292)); /*0x68b9f3*/
  IDA_LOBYTE(v3) = *(_BYTE *)(a2_2 + 13500); /*0x68b9f8*/
  Power::FlagProcess((int *)a2_2, v3); /*0x68ba01*/
  IDA_LOBYTE(v4) = *(_BYTE *)(a2_2 + 13485); /*0x68ba06*/
  Power::FlagProcess((int *)a2_2, v4); /*0x68ba0f*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 7296) / 100); /*0x68ba2e*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13472)); /*0x68ba3c*/
  IDA_LOBYTE(v5) = *(_BYTE *)(a2_2 + 13484); /*0x68ba41*/
  Power::FlagProcess((int *)a2_2, v5); /*0x68ba4a*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13516)); /*0x68ba58*/
  IDA_LOBYTE(v6) = *(_BYTE *)(a2_2 + 13486); /*0x68ba5d*/
  Power::FlagProcess((int *)a2_2, v6); /*0x68ba66*/
  IDA_LOBYTE(v7) = *(_BYTE *)(a2_2 + 13487); /*0x68ba6b*/
  v8 = Power::FlagProcess((int *)a2_2, v7); /*0x68ba74*/
  IDA_LOBYTE(v8) = *(_BYTE *)(a2_2 + 13488); /*0x68ba79*/
  Power::FlagProcess((int *)a2_2, v8); /*0x68ba82*/
  IDA_LOBYTE(v9) = *(_BYTE *)(a2_2 + 13490); /*0x68ba87*/
  Power::FlagProcess((int *)a2_2, v9); /*0x68ba90*/
  IDA_LOBYTE(v10) = *(_BYTE *)(a2_2 + 13492); /*0x68ba95*/
  v11 = Power::FlagProcess((int *)a2_2, v10); /*0x68ba9e*/
  IDA_LOBYTE(v11) = *(_BYTE *)(a2_2 + 13489); /*0x68baa3*/
  Power::FlagProcess((int *)a2_2, v11); /*0x68baac*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 7300)); /*0x68baba*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13520)); /*0x68bac8*/
  v12 = *(_DWORD *)(a2_2 + 4584); /*0x68bacd*/
  v13 = *(_DWORD *)(a2_2 + 4592); /*0x68bad3*/
  if ( v12 != -1 ) /*0x68badc*/
  {
    if ( (int)dword_A8ED84 - v12 >= v13 ) /*0x68bae8*/
      v13 = 0; /*0x68baee*/
    else
      v13 -= (int)dword_A8ED84 - v12; /*0x68baea*/
  }
  Power::TimerProcess(v13); /*0x68baf3*/
  v14 = *(_DWORD *)(a2_2 + 4632); /*0x68baf8*/
  v15 = *(_DWORD *)(a2_2 + 4640); /*0x68bafe*/
  if ( v14 != -1 ) /*0x68bb07*/
  {
    if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x68bb13*/
      v15 = 0; /*0x68bb19*/
    else
      v15 -= (int)dword_A8ED84 - v14; /*0x68bb15*/
  }
  Power::TimerProcess(v15); /*0x68bb1e*/
  v16 = *(_DWORD *)(a2_2 + 4644); /*0x68bb23*/
  v17 = *(_DWORD *)(a2_2 + 4652); /*0x68bb29*/
  if ( v16 != -1 ) /*0x68bb32*/
  {
    if ( (int)dword_A8ED84 - v16 >= v17 ) /*0x68bb3e*/
      v17 = 0; /*0x68bb44*/
    else
      v17 -= (int)dword_A8ED84 - v16; /*0x68bb40*/
  }
  Power::TimerProcess(v17); /*0x68bb49*/
  v18 = *(_DWORD *)(a2_2 + 4656); /*0x68bb4e*/
  v19 = *(_DWORD *)(a2_2 + 4664); /*0x68bb54*/
  if ( v18 != -1 ) /*0x68bb5d*/
  {
    if ( (int)dword_A8ED84 - v18 >= v19 ) /*0x68bb69*/
      v19 = 0; /*0x68bb6f*/
    else
      v19 -= (int)dword_A8ED84 - v18; /*0x68bb6b*/
  }
  Power::TimerProcess(v19); /*0x68bb74*/
  v20 = *(_DWORD *)(a2_2 + 4668); /*0x68bb79*/
  v21 = *(_DWORD *)(a2_2 + 4676); /*0x68bb7f*/
  if ( v20 != -1 ) /*0x68bb88*/
  {
    if ( (int)dword_A8ED84 - v20 >= v21 ) /*0x68bb94*/
      v21 = 0; /*0x68bb9a*/
    else
      v21 -= (int)dword_A8ED84 - v20; /*0x68bb96*/
  }
  Power::TimerProcess(v21); /*0x68bb9f*/
  v22 = *(_DWORD *)(a2_2 + 1564); /*0x68bbaa*/
  if ( *(_DWORD *)(a2_2 + 1556) != -1 ) /*0x68bbb3*/
    v22 += Timer::GetTicks() - *(_DWORD *)(a2_2 + 1556); /*0x68bbc6*/
  Power::TimerProcess(v22); /*0x68bbcb*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 1548)); /*0x68bbd9*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 1552)); /*0x68bbe7*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 4696)); /*0x68bbf5*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13632)); /*0x68bc03*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13636)); /*0x68bc11*/
  IDA_LOBYTE(v23) = *(_BYTE *)(a2_2 + 13476); /*0x68bc16*/
  Power::FlagProcess((int *)a2_2, v23); /*0x68bc1f*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13640)); /*0x68bc2d*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13644)); /*0x68bc3b*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13648)); /*0x68bc49*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13652)); /*0x68bc57*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13656)); /*0x68bc65*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13660)); /*0x68bc73*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13608)); /*0x68bc81*/
  Power::TimerProcess(*(_DWORD *)(a2_2 + 13612)); /*0x68bc8f*/
  return Power::TimerProcess(*(_DWORD *)(a2_2 + 13616)); /*0x68bca2*/
}
}
// 0x4A1C10
namespace gamemd {
int Power::FinalizeDrain(int a2)
{
  void *Power_field_0x4; // eax
  int result; // eax
  char *i; // eax
  int *p_Power_field_0x8; // esi
  unsigned int v6; // eax
  int v7; // edi

  Power_field_0x4 = this->Power_field_0x4; /*0x4a1c10*/
  if ( !Power_field_0x4 ) /*0x4a1c15*/
    this->a2 = 0; /*0x4a1c17*/
  *((_BYTE *)&this->a2 + (_DWORD)Power_field_0x4) = a2; /*0x4a1c1f*/
  result = (int)this->Power_field_0x4 + 1; /*0x4a1c27*/
  this->Power_field_0x4 = (void *)result; /*0x4a1c29*/
  if ( result == 4 ) /*0x4a1c2f*/
  {
    IDA_LOBYTE(this->Power_field_0xC) = this->Power_field_0x4; /*0x4a1c34*/
    for ( i = (char *)this->Power_field_0x4 + 1; (unsigned int)i < 4; ++i ) /*0x4a1c3d*/
      i[(_DWORD)&this->q008] = (char)this->a2; /*0x4a1c42*/
    a2 = (int)this->a2; /*0x4a1c50*/
    p_Power_field_0x8 = &a2; /*0x4a1c57*/
    v6 = ~this->Power_field_0x0; /*0x4a1c5b*/
    v7 = 4; /*0x4a1c5d*/
    do /*0x4a1c7e*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)p_Power_field_0x8 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1c7a*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1c7c*/
      --v7; /*0x4a1c7d*/
    }
    while ( v7 ); /*0x4a1c7e*/
    result = ~v6; /*0x4a1c80*/
    this->Power_field_0x0 = result; /*0x4a1c83*/
    this->Power_field_0x4 = 0; /*0x4a1c85*/
  }
  return result; /*0x4a1c8e*/
}
} // namespace gamemd

// 0x4A1CA0
namespace gamemd {
int Power::FlagProcess(int Power_field_0x8, int a2, int a1)
{
  void *Power_field_0x4; // eax
  int result; // eax
  char *i; // eax
  int *p_Power_field_0x8; // esi
  unsigned int v6; // eax
  int v7; // edi

  Power_field_0x4 = this->Power_field_0x4; /*0x4a1ca0*/
  if ( !Power_field_0x4 ) /*0x4a1ca7*/
    this->Power_field_0x8 = 0; /*0x4a1ca9*/
  *((_BYTE *)&this->Power_field_0x8 + (_DWORD)Power_field_0x4) = (_BYTE)Power_field_0x8 != 0; /*0x4a1cb7*/
  result = (int)this->Power_field_0x4 + 1; /*0x4a1cbf*/
  this->Power_field_0x4 = (void *)result; /*0x4a1cc1*/
  if ( result == 4 ) /*0x4a1cc7*/
  {
    IDA_LOBYTE(this->Power_field_0xC) = this->Power_field_0x4; /*0x4a1ccc*/
    for ( i = (char *)this->Power_field_0x4 + 1; (unsigned int)i < 4; ++i ) /*0x4a1cd5*/
      i[(_DWORD)&this->q008] = (char)this->Power_field_0x8; /*0x4a1cda*/
    Power_field_0x8 = (int)this->Power_field_0x8; /*0x4a1ce8*/
    p_Power_field_0x8 = &Power_field_0x8; /*0x4a1cef*/
    v6 = ~this->Power_field_0x0; /*0x4a1cf3*/
    v7 = 4; /*0x4a1cf5*/
    do /*0x4a1d16*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)p_Power_field_0x8 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1d12*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1d14*/
      --v7; /*0x4a1d15*/
    }
    while ( v7 ); /*0x4a1d16*/
    result = ~v6; /*0x4a1d18*/
    this->Power_field_0x0 = result; /*0x4a1d1b*/
    this->Power_field_0x4 = 0; /*0x4a1d1d*/
  }
  return result; /*0x4a1d23*/
}
} // namespace gamemd

// 0x4A1D50
namespace gamemd {
int Power::TimerProcess(int a1)
{
  return Checksummer::Add_Buffer(&a1, 4); /*0x4a1d64*/
}
} // namespace gamemd

// 0x750090
namespace gamemd {
char Power::ChangedHouse(char a2)
{
  int result; // eax

  IDA_LOBYTE(result) = a2; /*0x750090*/
  if ( a2 ) /*0x750096*/
    this->Power_field_0x0 = 1065353216; /*0x750098*/
  else
    this->Power_field_0x0 = 0; /*0x7500a1*/
  return result; /*0x75009e*/
}
} // namespace gamemd
