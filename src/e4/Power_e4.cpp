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
namespace gamemd {  // G42.18 ns repair
int Power::Update(int * a2, void *a2_2, void *a3_1, void *a4_1)
{
  this->AbstractClass::ProcessPower(); /*0x43a5d9*/
  return Power::TimerProcess(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - this->u32_30); /*0x43a5f0*/
}
}  // G42.18 ns repair
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
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A83C9C + i) + 52))(*((unsigned int *)dword_A83C9C + i), &v53); /*0x67c72a*/
  for ( j = 0; j < stru_A80220.nextArrayIndex; ++j ) /*0x67c740*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)stru_A80220.ptr_C + j) + 52))( /*0x67c752*/
      *((unsigned int *)stru_A80220.ptr_C + j),
      &v53);
  for ( k = 0; k < MEMORY[0xA83CF0]; ++k ) /*0x67c768*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA83CE4] + k) + 52))( /*0x67c77a*/
      *((unsigned int *)MEMORY[0xA83CE4] + k),
      &v53);
  for ( m = 0; m < FootClass_Array.storedTiberium[2]; ++m ) /*0x67c790*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(FootClass_Array.hijackerInfantryType + 4 * m) + 52))( /*0x67c7a2*/
      *(unsigned int *)(FootClass_Array.hijackerInfantryType + 4 * m),
      &v53);
  for ( n = 0; n < dword_A8E358; ++n ) /*0x67c7b8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A8E34C + n) + 52))(*((unsigned int *)dword_A8E34C + n), &v53); /*0x67c7ca*/
  for ( ii = 0; ii < *(int *)&MEMORY[0xA83D50].__pad_80[40]; ++ii ) /*0x67c7e0*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)&MEMORY[0xA83D50].__pad_80[28] + 4 * ii) + 52))( /*0x67c7f2*/
      *(unsigned int *)(*(unsigned int *)&MEMORY[0xA83D50].__pad_80[28] + 4 * ii),
      &v53);
  for ( jj = 0; jj < dword_A83C78; ++jj ) /*0x67c808*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A83C6C + jj) + 52))( /*0x67c81a*/
      *((unsigned int *)dword_A83C6C + jj),
      &v53);
  for ( kk = 0; kk < MEMORY[0xA8EB00].ptr_0[20]; ++kk ) /*0x67c830*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(MEMORY[0xA8EB00].ptr_0[17] + 4 * kk) + 52))( /*0x67c842*/
      *(unsigned int *)(MEMORY[0xA8EB00].ptr_0[17] + 4 * kk),
      &v53);
  for ( mm = 0; mm < dword_A8B228; ++mm ) /*0x67c858*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A8B21C + mm) + 52))( /*0x67c86a*/
      *((unsigned int *)dword_A8B21C + mm),
      &v53);
  for ( nn = 0; nn < dword_A8E3A0; ++nn ) /*0x67c880*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A8E394 + nn) + 52))( /*0x67c892*/
      *((unsigned int *)dword_A8E394 + nn),
      &v53);
  for ( i1 = 0; i1 < dword_A8B210; ++i1 ) /*0x67c8a8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A8B204 + i1) + 52))( /*0x67c8ba*/
      *((unsigned int *)dword_A8B204 + i1),
      &v53);
  for ( i2 = 0; i2 < MEMORY[0xA8E9B8]; ++i2 ) /*0x67c8d0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8E9AC] + i2) + 52))( /*0x67c8e2*/
      *((unsigned int *)MEMORY[0xA8E9AC] + i2),
      &v53);
  for ( i3 = 0; i3 < FootClass_Array.secondaryFacing[0]; ++i3 ) /*0x67c8f8*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(FootClass_Array.primaryFacing[3] + 4 * i3) + 52))( /*0x67c90a*/
      *(unsigned int *)(FootClass_Array.primaryFacing[3] + 4 * i3),
      &v53);
  for ( i4 = 0; i4 < dword_A8E8E0; ++i4 ) /*0x67c920*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A8E8D4 + i4) + 52))( /*0x67c932*/
      *((unsigned int *)dword_A8E8D4 + i4),
      &v53);
  for ( i5 = 0; i5 < *(int *)&MEMORY[0xA8EB00 + 204]; ++i5 ) /*0x67c948*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)&MEMORY[0xA8EB00 + 192] + 4 * i5) + 52))( /*0x67c95a*/
      *(unsigned int *)(*(unsigned int *)&MEMORY[0xA8EB00 + 192] + 4 * i5),
      &v53);
  for ( i6 = 0; i6 < (int)FootClass_Array.waveEffect; ++i6 ) /*0x67c970*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)&FootClass_Array.auxParticles1->ptr_0 + i6) + 52))( /*0x67c982*/
      *((unsigned int *)&FootClass_Array.auxParticles1->ptr_0 + i6),
      &v53);
  for ( i7 = 0; i7 < *(int *)&FootClass_Array.isTether; ++i7 ) /*0x67c998*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(FootClass_Array.barrelRecoil[5] + 4 * i7) + 52))( /*0x67c9aa*/
      *(unsigned int *)(FootClass_Array.barrelRecoil[5] + 4 * i7),
      &v53);
  for ( i8 = 0; i8 < dword_8872C0; ++i8 ) /*0x67c9c0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_8872B4 + i8) + 52))( /*0x67c9d2*/
      *((unsigned int *)dword_8872B4 + i8),
      &v53);
  for ( i9 = 0; i9 < g_MultiplayerCleanup; ++i9 ) /*0x67c9e8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_B0E784 + i9) + 52))( /*0x67c9fa*/
      *((unsigned int *)dword_B0E784 + i9),
      &v53);
  for ( i10 = 0; i10 < g_GameObjectCleanup; ++i10 ) /*0x67ca10*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)g_TagClassCount + i10) + 52))( /*0x67ca22*/
      *((unsigned int *)g_TagClassCount + i10),
      &v53);
  for ( i11 = 0; i11 < *(int *)FootClass_Array.unknown_short_3C8; ++i11 ) /*0x67ca38*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(FootClass_Array.targetLaserTimer[0] + 4 * i11) + 52))( /*0x67ca4a*/
      *(unsigned int *)(FootClass_Array.targetLaserTimer[0] + 4 * i11),
      &v53);
  for ( i12 = 0; i12 < MEMORY[0xA8EAF8]; ++i12 ) /*0x67ca60*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8EAEC] + i12) + 52))( /*0x67ca72*/
      *((unsigned int *)MEMORY[0xA8EAEC] + i12),
      &v53);
  for ( i13 = 0; i13 < dword_B0E668; ++i13 ) /*0x67ca88*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_B0E65C + i13) + 52))( /*0x67ca9a*/
      *((unsigned int *)dword_B0E65C + i13),
      &v53);
  for ( i14 = 0; i14 < g_BuildingLoadQueue_Array.Weapon[54]; ++i14 ) /*0x67cab0*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(g_BuildingLoadQueue_Array.Weapon[51] + 4 * i14) + 52))( /*0x67cac2*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.Weapon[51] + 4 * i14),
      &v53);
  for ( i15 = 0; i15 < *(int *)&MEMORY[0xA83D50].__pad_C8[40]; ++i15 ) /*0x67cad8*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)&MEMORY[0xA83D50].__pad_C8[28] + 4 * i15) + 52))( /*0x67caea*/
      *(unsigned int *)(*(unsigned int *)&MEMORY[0xA83D50].__pad_C8[28] + 4 * i15),
      &v53);
  for ( i16 = 0; i16 < MEMORY[0xA8EB00].ptr_0[14]; ++i16 ) /*0x67cb00*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(MEMORY[0xA8EB00].ptr_0[11] + 4 * i16) + 52))( /*0x67cb12*/
      *(unsigned int *)(MEMORY[0xA8EB00].ptr_0[11] + 4 * i16),
      &v53);
  for ( i17 = 0; i17 < *(int *)&DataGlobal_887398; ++i17 ) /*0x67cb28*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)&DataGlobal_88738C + 4 * i17) + 52))( /*0x67cb3a*/
      *(unsigned int *)(*(unsigned int *)&DataGlobal_88738C + 4 * i17),
      &v53);
  for ( i18 = 0; i18 < g_WarheadTypePool; ++i18 ) /*0x67cb50*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_8874C4 + i18) + 52))( /*0x67cb62*/
      *((unsigned int *)dword_8874C4 + i18),
      &v53);
  for ( i19 = 0; i19 < g_WeaponTypePool; ++i19 ) /*0x67cb78*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)g_WeaponTypeConfig + i19) + 52))( /*0x67cb8a*/
      *((unsigned int *)g_WeaponTypeConfig + i19),
      &v53);
  for ( i20 = 0; i20 < *(int *)&MEMORY[0xA83D50].__pad_3C[28]; ++i20 ) /*0x67cba0*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)&MEMORY[0xA83D50].__pad_3C[16] + 4 * i20) + 52))( /*0x67cbb2*/
      *(unsigned int *)(*(unsigned int *)&MEMORY[0xA83D50].__pad_3C[16] + 4 * i20),
      &v53);
  for ( i21 = 0; i21 < *(int *)&MEMORY[0xA83D50].__pad_80[8]; ++i21 ) /*0x67cbc8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA83D50].SuperClass_field_0x7C + i21) + 52))( /*0x67cbda*/
      *((unsigned int *)MEMORY[0xA83D50].SuperClass_field_0x7C + i21),
      &v53);
  for ( i22 = 0; i22 < g_GameCleanupState; ++i22 ) /*0x67cbf0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A8020C + i22) + 52))( /*0x67cc02*/
      *((unsigned int *)dword_A8020C + i22),
      &v53);
  for ( i23 = 0; i23 < (int)MEMORY[0xA83D50].SuperClass_field_0x28; ++i23 ) /*0x67cc18*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)&MEMORY[0xA83D50].__pad_14[8] + 4 * i23) + 52))( /*0x67cc2a*/
      *(unsigned int *)(*(unsigned int *)&MEMORY[0xA83D50].__pad_14[8] + 4 * i23),
      &v53);
  for ( i24 = 0; i24 < dword_A83C90; ++i24 ) /*0x67cc40*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A83C84 + i24) + 52))( /*0x67cc52*/
      *((unsigned int *)dword_A83C84 + i24),
      &v53);
  for ( i25 = 0; i25 < *(int *)&MEMORY[0xA8EB00 + 364]; ++i25 ) /*0x67cc68*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)&MEMORY[0xA8EB00 + 352] + 4 * i25) + 52))( /*0x67cc7a*/
      *(unsigned int *)(*(unsigned int *)&MEMORY[0xA8EB00 + 352] + 4 * i25),
      &v53);
  for ( i26 = 0; i26 < dword_B72618; ++i26 ) /*0x67cc90*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_B7260C + i26) + 52))( /*0x67cca2*/
      *((unsigned int *)dword_B7260C + i26),
      &v53);
  for ( i27 = 0; i27 < *(int *)&MEMORY[0xA8EB00 + 68]; ++i27 ) /*0x67ccb8*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)&MEMORY[0xA8EB00 + 56] + 4 * i27) + 52))( /*0x67ccca*/
      *(unsigned int *)(*(unsigned int *)&MEMORY[0xA8EB00 + 56] + 4 * i27),
      &v53);
  for ( i28 = 0; i28 < *(int *)&MEMORY[0xA83D50].__pad_3C[4]; ++i28 ) /*0x67cce0*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)MEMORY[0xA83D50].__pad_34 + 4 * i28) + 52))( /*0x67ccf2*/
      *(unsigned int *)(*(unsigned int *)MEMORY[0xA83D50].__pad_34 + 4 * i28),
      &v53);
  for ( i29 = 0; i29 < g_MissionQueueFrame.random[133]; ++i29 ) /*0x67cd08*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(g_MissionQueueFrame.random[130] + 4 * i29) + 52))( /*0x67cd1a*/
      *(unsigned int *)(g_MissionQueueFrame.random[130] + 4 * i29),
      &v53);
  for ( i30 = 0; i30 < FootClass_Array.turretRecoil[2]; ++i30 ) /*0x67cd30*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(*(unsigned int *)&FootClass_Array.isALoaner + 4 * i30) + 52))( /*0x67cd42*/
      *(unsigned int *)(*(unsigned int *)&FootClass_Array.isALoaner + 4 * i30),
      &v53);
  for ( i31 = 0; i31 < FootClass_Array.primaryFacing[0]; ++i31 ) /*0x67cd58*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(FootClass_Array.barrelFacing[3] + 4 * i31) + 52))( /*0x67cd6a*/
      *(unsigned int *)(FootClass_Array.barrelFacing[3] + 4 * i31),
      &v53);
  for ( i32 = 0; i32 < FootClass_Array.barrelFacing[0]; ++i32 ) /*0x67cd80*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(FootClass_Array.unloadTimer[0] + 4 * i32) + 52))( /*0x67cd92*/
      *(unsigned int *)(FootClass_Array.unloadTimer[0] + 4 * i32),
      &v53);
  for ( i33 = 0; i33 < g_BuildingLoadQueue_Array.BarrelAnimData[0]; ++i33 ) /*0x67cda8*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * i33) + 52))( /*0x67cdba*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * i33),
      &v53);
  for ( i34 = 0; i34 < dword_8A3880; ++i34 ) /*0x67cdd0*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_8A3874 + i34) + 52))( /*0x67cde2*/
      *((unsigned int *)dword_8A3874 + i34),
      &v53);
  for ( i35 = 0; i35 < dword_A8E340; ++i35 ) /*0x67cdf8*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A8E334 + i35) + 52))( /*0x67ce0a*/
      *((unsigned int *)dword_A8E334 + i35),
      &v53);
  for ( i36 = 0; i36 < dword_A83CC8; ++i36 ) /*0x67ce20*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A83CBC + i36) + 52))( /*0x67ce32*/
      *((unsigned int *)dword_A83CBC + i36),
      &v53);
  for ( i37 = 0; i37 < dword_A8E328; ++i37 ) /*0x67ce48*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)dword_A8E31C + i37) + 52))( /*0x67ce5a*/
      *((unsigned int *)dword_A8E31C + i37),
      &v53);
  for ( i38 = 0; i38 < MEMORY[0xA8E998]; ++i38 ) /*0x67ce70*/
    (*(void (**)(unsigned int, int *))(**((unsigned int **)MEMORY[0xA8E98C] + i38) + 52))( /*0x67ce82*/
      *((unsigned int *)MEMORY[0xA8E98C] + i38),
      &v53);
  if ( MEMORY[0xA83D4C] ) /*0x67ce96*/
    Power::TimerProcess((int)MEMORY[0xA83D4C]->Object_field_0x30); /*0x67cea0*/
  Power::TimerProcess(*(int *)&MEMORY[0xA8EB00 + 416]); /*0x67ceb0*/
  Power::TimerProcess(*(int *)&MEMORY[0xA8EB00 + 228]); /*0x67cebf*/
  v50 = v54; /*0x67ceca*/
  this->a2 = v53; /*0x67cece*/
  v51 = v55; /*0x67ced0*/
  this->q004 = v50; /*0x67ced5*/
  this->q008 = v51; /*0x67cedb*/
  return &this->a2; /*0x67ced4*/

}
}
// 0x68B940
namespace gamemd {
int Power::ComputeHousePowerChecksum(unsigned int * a2, void *a2_2)
{

  Checksum::AddString(a2_2, (uint8_t *)((unsigned int)(a2_2)+ 5050)); /*0x68b952*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 5172)); /*0x68b960*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 5176)); /*0x68b96e*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 5180)); /*0x68b97c*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 5184)); /*0x68b98a*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 5188)); /*0x68b998*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 5192)); /*0x68b9a6*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 5196)); /*0x68b9b4*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 7284)); /*0x68b9c2*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 7300)); /*0x68b9d0*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 7280)); /*0x68b9de*/
  ((Checksummer *)(*(unsigned int *)((unsigned int)(a2_2)+ 7288)))->Add_double(*(unsigned int *)(a2_2 + 7292)); /*0x68b9f3*/
  int v3; // ecx
  (*((unsigned char *)&(v3))) = *(unsigned char *)((unsigned int)(a2_2)+ 13500); /*0x68b9f8*/
  ((int *)a2_2)->FlagProcess(v3); /*0x68ba01*/
  int v4; // edx
  (*((unsigned char *)&(v4))) = *(unsigned char *)((unsigned int)(a2_2)+ 13485); /*0x68ba06*/
  ((int *)a2_2)->FlagProcess(v4); /*0x68ba0f*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 7296) / 100); /*0x68ba2e*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13472)); /*0x68ba3c*/
  int v5; // edx
  (*((unsigned char *)&(v5))) = *(unsigned char *)((unsigned int)(a2_2)+ 13484); /*0x68ba41*/
  ((int *)a2_2)->FlagProcess(v5); /*0x68ba4a*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13516)); /*0x68ba58*/
  int v6; // ecx
  (*((unsigned char *)&(v6))) = *(unsigned char *)((unsigned int)(a2_2)+ 13486); /*0x68ba5d*/
  ((int *)a2_2)->FlagProcess(v6); /*0x68ba66*/
  int v7; // edx
  (*((unsigned char *)&(v7))) = *(unsigned char *)((unsigned int)(a2_2)+ 13487); /*0x68ba6b*/
  int v8; // eax
  v8 = ((int *)a2_2)->FlagProcess(v7); /*0x68ba74*/
  (*((unsigned char *)&(v8))) = *(unsigned char *)((unsigned int)(a2_2)+ 13488); /*0x68ba79*/
  ((int *)a2_2)->FlagProcess(v8); /*0x68ba82*/
  int v9; // ecx
  (*((unsigned char *)&(v9))) = *(unsigned char *)((unsigned int)(a2_2)+ 13490); /*0x68ba87*/
  ((int *)a2_2)->FlagProcess(v9); /*0x68ba90*/
  int v10; // edx
  (*((unsigned char *)&(v10))) = *(unsigned char *)((unsigned int)(a2_2)+ 13492); /*0x68ba95*/
  int v11; // eax
  v11 = ((int *)a2_2)->FlagProcess(v10); /*0x68ba9e*/
  (*((unsigned char *)&(v11))) = *(unsigned char *)((unsigned int)(a2_2)+ 13489); /*0x68baa3*/
  ((int *)a2_2)->FlagProcess(v11); /*0x68baac*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 7300)); /*0x68baba*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13520)); /*0x68bac8*/
  int v12; // ecx
  v12 = *(unsigned int *)((unsigned int)(a2_2)+ 4584); /*0x68bacd*/
  int v13; // eax
  v13 = *(unsigned int *)((unsigned int)(a2_2)+ 4592); /*0x68bad3*/
  if ( v12 != -1 ) /*0x68badc*/
  {
    if ( (int)dword_A8ED84 - v12 >= v13 ) /*0x68bae8*/
      v13 = 0; /*0x68baee*/
    else
      v13 -= (int)dword_A8ED84 - v12; /*0x68baea*/
  }
  Power::TimerProcess(v13); /*0x68baf3*/
  int v14; // edx
  v14 = *(unsigned int *)((unsigned int)(a2_2)+ 4632); /*0x68baf8*/
  int v15; // eax
  v15 = *(unsigned int *)((unsigned int)(a2_2)+ 4640); /*0x68bafe*/
  if ( v14 != -1 ) /*0x68bb07*/
  {
    if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x68bb13*/
      v15 = 0; /*0x68bb19*/
    else
      v15 -= (int)dword_A8ED84 - v14; /*0x68bb15*/
  }
  Power::TimerProcess(v15); /*0x68bb1e*/
  int v16; // edx
  v16 = *(unsigned int *)((unsigned int)(a2_2)+ 4644); /*0x68bb23*/
  int v17; // eax
  v17 = *(unsigned int *)((unsigned int)(a2_2)+ 4652); /*0x68bb29*/
  if ( v16 != -1 ) /*0x68bb32*/
  {
    if ( (int)dword_A8ED84 - v16 >= v17 ) /*0x68bb3e*/
      v17 = 0; /*0x68bb44*/
    else
      v17 -= (int)dword_A8ED84 - v16; /*0x68bb40*/
  }
  Power::TimerProcess(v17); /*0x68bb49*/
  int v18; // edx
  v18 = *(unsigned int *)((unsigned int)(a2_2)+ 4656); /*0x68bb4e*/
  int v19; // eax
  v19 = *(unsigned int *)((unsigned int)(a2_2)+ 4664); /*0x68bb54*/
  if ( v18 != -1 ) /*0x68bb5d*/
  {
    if ( (int)dword_A8ED84 - v18 >= v19 ) /*0x68bb69*/
      v19 = 0; /*0x68bb6f*/
    else
      v19 -= (int)dword_A8ED84 - v18; /*0x68bb6b*/
  }
  Power::TimerProcess(v19); /*0x68bb74*/
  int v20; // edx
  v20 = *(unsigned int *)((unsigned int)(a2_2)+ 4668); /*0x68bb79*/
  int v21; // eax
  v21 = *(unsigned int *)((unsigned int)(a2_2)+ 4676); /*0x68bb7f*/
  if ( v20 != -1 ) /*0x68bb88*/
  {
    if ( (int)dword_A8ED84 - v20 >= v21 ) /*0x68bb94*/
      v21 = 0; /*0x68bb9a*/
    else
      v21 -= (int)dword_A8ED84 - v20; /*0x68bb96*/
  }
  Power::TimerProcess(v21); /*0x68bb9f*/
  int v22; // ebx
  v22 = *(unsigned int *)((unsigned int)(a2_2)+ 1564); /*0x68bbaa*/
  if ( *(unsigned int *)((unsigned int)(a2_2)+ 1556) != -1 ) /*0x68bbb3*/
    v22 += TimerGetTicks() - *(unsigned int *)((unsigned int)(a2_2)+ 1556); /*0x68bbc6*/
  Power::TimerProcess(v22); /*0x68bbcb*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 1548)); /*0x68bbd9*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 1552)); /*0x68bbe7*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 4696)); /*0x68bbf5*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13632)); /*0x68bc03*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13636)); /*0x68bc11*/
  int v23; // edx
  (*((unsigned char *)&(v23))) = *(unsigned char *)((unsigned int)(a2_2)+ 13476); /*0x68bc16*/
  ((int *)a2_2)->FlagProcess(v23); /*0x68bc1f*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13640)); /*0x68bc2d*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13644)); /*0x68bc3b*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13648)); /*0x68bc49*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13652)); /*0x68bc57*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13656)); /*0x68bc65*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13660)); /*0x68bc73*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13608)); /*0x68bc81*/
  Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13612)); /*0x68bc8f*/
  return Power::TimerProcess(*(unsigned int *)((unsigned int)(a2_2)+ 13616)); /*0x68bca2*/
}
}
// 0x4A1C10
namespace gamemd {
int Power::FinalizeDrain(int a2, void *a2_1)
{


  void *Power_field_0x4; // eax
  Power_field_0x4 = (void *)(this->q004); /*0x4a1c10*/
  if ( !Power_field_0x4 ) /*0x4a1c15*/
    this->a2 = 0; /*0x4a1c17*/
  this->q008 + (unsigned int)Power_field_0x4) = a2; /*0x4a1c1f*/
  int result; // eax
  result = (int)this->q004 + 1; /*0x4a1c27*/
  this->q004 = (int)((void *)result); /*0x4a1c29*/
  if ( result == 4 ) /*0x4a1c2f*/
  {
    (this->q00C) = ((this->q00C) & ~0xFF) | ((this->q004) & 0xFF); /*0x4a1c34*/
    char *i; // eax
    for ( i = (char *)this->q004 + 1; (unsigned int)i < 4; ++i ) /*0x4a1c3d*/
      i[(unsigned int)&this->q020] = (char)this->a2; /*0x4a1c42*/
    a2 = (int)this->a2; /*0x4a1c50*/
    int *p_Power_field_0x8 = &a2; // esi /*0x4a1c57*/
    unsigned int v6; // eax
    v6 = (unsigned int)(~this->a2); /*0x4a1c5b*/
    int v7 = 4; // edi /*0x4a1c5d*/
    do /*0x4a1c7e*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)p_Power_field_0x8 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1c7a*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1c7c*/
      --v7; /*0x4a1c7d*/
    }
    while ( v7 ); /*0x4a1c7e*/
    result = ~v6; /*0x4a1c80*/
    this->a2 = (void *)(result); /*0x4a1c83*/
    this->q004 = 0; /*0x4a1c85*/
  }
  return result; /*0x4a1c8e*/

}
} // namespace gamemd

// 0x4A1CA0
namespace gamemd {
int Power::FlagProcess(int q008, int a2, int a1)
{


  void *Power_field_0x4; // eax
  Power_field_0x4 = q008->Power_field_0x4; /*0x4a1ca0*/
  if ( !Power_field_0x4 ) /*0x4a1ca7*/
    q008->a2 = 0; /*0x4a1ca9*/
  *((unsigned char *)&q008->a2 + (unsigned int)Power_field_0x4) = (unsigned char)a2 != 0; /*0x4a1cb7*/
  int result; // eax
  result = (int)q008->Power_field_0x4 + 1; /*0x4a1cbf*/
  q008->Power_field_0x4 = (void *)result; /*0x4a1cc1*/
  if ( result == 4 ) /*0x4a1cc7*/
  {
    LOBYTE(q008->Power_field_0xC) = q008->Power_field_0x4; /*0x4a1ccc*/
    char *i; // eax
    for ( i = (char *)q008->Power_field_0x4 + 1; (unsigned int)i < 4; ++i ) /*0x4a1cd5*/
      i[(unsigned int)q008 + 8] = (char)q008->a2; /*0x4a1cda*/
    a2 = (int)q008->a2; /*0x4a1ce8*/
    int *p_Power_field_0x8 = &a2; // esi /*0x4a1cef*/
    unsigned int v6 = ~q008->Power_field_0x0; // eax /*0x4a1cf3*/
    int v7 = 4; // edi /*0x4a1cf5*/
    do /*0x4a1d16*/
    {
      v6 = CRC32_Table[*(unsigned __int8 *)p_Power_field_0x8 ^ (unsigned __int8)v6] ^ (v6 >> 8); /*0x4a1d12*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1d14*/
      --v7; /*0x4a1d15*/
    }
    while ( v7 ); /*0x4a1d16*/
    result = ~v6; /*0x4a1d18*/
    q008->Power_field_0x0 = result; /*0x4a1d1b*/
    q008->Power_field_0x4 = 0; /*0x4a1d1d*/
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
  LOBYTE(result) = a2; /*0x750090*/
  if ( a2 ) /*0x750096*/
    this->a2 = (void *)(1065353216); /*0x750098*/
  else
    this->a2 = 0; /*0x7500a1*/
  return result; /*0x75009e*/

}
} // namespace gamemd
