// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_730990_e4.hpp"
#include "e4/classes/E4Recv_730A10_e4.hpp"
#include "e4/classes/E4Recv_7310D0_e4.hpp"
#include "e4/classes/E4Recv_731130_e4.hpp"
#include "e4/classes/E4Recv_7325C0_e4.hpp"
#include "e4/classes/E4Recv_733380_e4.hpp"
#include "e4/classes/E4Recv_7336C0_e4.hpp"
#include "e4/classes/E4Recv_733CD0_e4.hpp"
#include "e4/classes/E4Recv_734F50_e4.hpp"
#include "e4/classes/E4Recv_734F80_e4.hpp"
#include "e4/classes/E4Recv_736C10_e4.hpp"
#include "e4/classes/E4Recv_736DF0_e4.hpp"
#include "e4/classes/E4Recv_737180_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/E4Recv_717A40_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/FileTree_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/FootClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/SuperWeaponClass_e4.hpp"  // G57w10 D supply
#include "e4/classes/CSFClass_e4.hpp"  // G57w10 D supply
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int SelectFactionThemeMusic_Helper_734330(...); }  // w16g4 raw call-form
namespace gamemd { int SelectFactionThemeMusic_Helper_734390(...); }  // w16g4 raw call-form
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char aMissingHs[];  // data: 0x845820 truth(IDA G42.57w9)
extern unsigned int a2;  // data: 0x822bc0 truth(IDA G42.57w9)
extern unsigned int aFatalStringMan;  // data: 0x84583c truth(IDA G42.57w9)
extern wchar_t aMsgNavempty[];  // data: 0x8455dc truth(IDA G42.57w9)
extern wchar_t aMsgNounitssel[];  // data: 0x8455fc truth(IDA G42.57w9)
extern wchar_t aMsgUnitsworth[];  // data: 0x8455ec truth(IDA G42.57w9)


// 0x730A90
namespace gamemd {
int AddMessageListPlayerMessage(wchar_t *a1, int a2)
{
  int v2; // eax

  if ( a2 == -1 ) /*0x730a93*/
    a2 = 240; /*0x730a95*/
  v2 = 3; /*0x730aa3*/
  if ( dword_A83D4C ) /*0x730aa8*/
    v2 = *(unsigned int *)&((unsigned int *)(dword_A83D4C))[134].__pad_90[4]; /*0x730aaa*/
// 0x5d3ba0
  return MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, a1, v2, 16454, a2, 1); /*0x730ac9*/
}
}
// 0x730AF0
namespace gamemd {
AbstractClass * * ProcessSelectionExperience()
{
  int v1; // eax
  House **v2; // esi
  unsigned char *v3; // ecx
  unsigned int v4;
  int v5; // edi
  TechnoClass *v6; // esi
  int v7; // ebx
  unsigned char *v8; // esi
  TechnoClass *v9; // edi
  TechnoClass *v10; // ebp
  char v12; // [esp+11h] [ebp-7h]
  unsigned int v13;
  char v14; // [esp+13h] [ebp-5h]
  unsigned int v15;

  IDA_LOBYTE(v1) = (unsigned char)((gamemd::AbstractClass **)((unsigned char)dword_A8ECC8)); /*0x730af3*/
  v14 = 0; /*0x730afe*/
  if ( (int)dword_A8ECC8 <= 0 ) /*0x730b03*/
    return (gamemd::AbstractClass **)(v1); /*0x730b03*/
  IDA_LOBYTE(v1) = (unsigned char)dword_A8ECBC; /*0x730b09*/
  if ( !*(unsigned int *)dword_A8ECBC
    || (v2 = *(House ***)dword_A8ECBC,
        v1 = (*(int (**)(unsigned int))(**(unsigned int **)dword_A8ECBC + 44))(*(unsigned int *)dword_A8ECBC),
        v1 != 6)
    || (v1 = (*(int (**)(House **))&(*v2)->__pad_3D7[49])( (House **)(v2)), v1 <= 0)
    || (IDA_LOBYTE(v1) = ((House*)v2[135])->IsHumanPlayer(), !(unsigned char)v1) )
  {
    v4 = dword_A8ECC8; /*0x730b71*/
    v5 = 0; /*0x730b77*/
    v12 = 0; /*0x730b7b*/
    v13 = 0; /*0x730b80*/
    v15 = dword_A8ECC8; /*0x730b85*/
    if ( (int)dword_A8ECC8 <= 0 )
    {
  LABEL_24:
      v7 = 0; /*0x730c19*/
      if ( (int)v4 > 0 )
      {
        do
        {
          v8 = (unsigned char *)*((unsigned int *)dword_A8ECBC + v7); /*0x730c29*/
          if ( v8
            && ((*(uint8_t (**)(unsigned int))(*(unsigned int *)v8 + 160))(*((unsigned int *)dword_A8ECBC + v7))
             || (*(uint8_t (**)(unsigned char *))(*(unsigned int *)v8 + 156))( (unsigned char *)(v8)))
            && (v8[20] & 1) != 0
            && (*(uint8_t (**)(unsigned char *))(*(unsigned int *)v8 + 784))( (unsigned char *)(v8))
            && (*(uint8_t (**)(unsigned char *))(*(unsigned int *)v8 + 788))( (unsigned char *)(v8))
            && !v8[664] )
          {
            v9 = (*(int (**)(unsigned char *))(*(unsigned int *)v8 + 44))( (unsigned char *)(v8)) == 15 ? (TechnoClass *)v8 : 0;
            v10 = (*(int (**)(unsigned char *))(*(unsigned int *)v8 + 44))( (unsigned char *)(v8)) == 1 ? (TechnoClass *)v8 : 0;
            if ( (!v9 /*0x730d06*/
               || !((TechnoClass *)(v9))->GetTypeFlag()
               || !v12
               || !v13
               || !(uint8_t)((TechnoClass *)(v9))->IsMission27to30())
              && (!v10 || !*(unsigned char *)(v10[1].ironTintTimer[2] + 3603) || !v12 || !v13 || !Event_Process_746D90(v10)) )
            {
              if ( (*(uint8_t (**)(unsigned char *, int))(*(unsigned int *)v8 + 884))( (unsigned char *)(v8), 9) ) /*0x730d15*/
                v14 = 1; /*0x730d1f*/
            }
            v4 = v15; /*0x730d24*/
          }
          ++v7; /*0x730d28*/
        }
        while ( v7 < (int)v4 );
        IDA_LOBYTE(v1) = v14; /*0x730d31*/
        if ( v14 ) /*0x730d37*/
          goto LABEL_47; /*0x730d37*/
      }
      return (gamemd::AbstractClass **)(v1);
    }
    while ( 1 ) /*0x730b95*/
    {
      v6 = (TechnoClass *)*((unsigned int *)dword_A8ECBC + v5); /*0x730b95*/
      if ( v6 ) /*0x730b9a*/
      {
        if ( (*(int (**)(unsigned int))((char *)v6->vtable1 + 44))(*((unsigned int *)dword_A8ECBC + v5)) == 15 /*0x730baa*/
// 0x5224e0
          && TechnoClass::GetTypeFlag() )
        {
          if ( !(uint8_t)((TechnoClass *)(this))->IsMission27to30() ) /*0x730bbc*/
            goto LABEL_17; /*0x730bbc*/
          IDA_LOBYTE(v1) = v13; /*0x730bbe*/
          v12 = 1; /*0x730bc2*/
          if ( v13 ) /*0x730bc9*/
            goto LABEL_24; /*0x730bc9*/
        }
        else
        {
          v1 = (*(int (**)(TechnoClass *))((char *)v6->vtable1 + 44))( (TechnoClass *)(v6)); /*0x730be0*/
          if ( v1 == 1 ) /*0x730be6*/
          {
            IDA_LOBYTE(v1) = *(unsigned char *)(v6[1].ironTintTimer[2] + 3603); /*0x730bee*/
            if ( (unsigned char)v1 ) /*0x730bf6*/
            {
              if ( Event_Process_746D90(v6) ) /*0x730bfa*/
              {
                IDA_LOBYTE(v1) = v13; /*0x730c03*/
                v12 = 1; /*0x730c07*/
                if ( v13 ) /*0x730c0e*/
                  goto LABEL_24; /*0x730c0e*/
                goto LABEL_23; /*0x730c0e*/
              }
  LABEL_17:
              IDA_LOBYTE(v1) = v12; /*0x730bcd*/
              v13 = 1; /*0x730bd1*/
              if ( v12 ) /*0x730bd8*/
                goto LABEL_24; /*0x730bd8*/
            }
          }
        }
      }
  LABEL_23:
      if ( ++v5 >= (int)v4 ) /*0x730c13*/
        goto LABEL_24; /*0x730c13*/
    }
  }
  IDA_LOBYTE(v1) = (unsigned char)dword_A8ECBC; /*0x730b41*/
  v3 = *(unsigned char **)dword_A8ECBC; /*0x730b46*/
  if ( *(unsigned int *)dword_A8ECBC ) /*0x730b46*/
  {
    if ( (v3[20] & 1) != 0 ) /*0x730b54*/
    {
      IDA_LOBYTE(v1) = (*(int (**)(unsigned char *, int))(*(unsigned int *)v3 + 884))( (unsigned char *)(v3), 9); /*0x730b5e*/
      if ( (unsigned char)v1 ) /*0x730b66*/
  LABEL_47:
        IDA_LOBYTE(v1) = PlayVocClass(*(unsigned int *)&dword_8871E0->__pad_704[40], 0x2000, 1.0, 0); /*0x730d39*/
    }
  }
  return (gamemd::AbstractClass **)(v1);
}
}
// 0x730D60
namespace gamemd {
CellStruct * * sub_730D60()
{
  CellStruct ** result;
  CellStruct ** v1;
  CellStruct ** v2;
  unsigned char *v3; // esi
  CellStruct ** v4;
  CellStruct ** v5;
  CellStruct ** v6;
  CellStruct ** v7;
  unsigned int v8;

  if ( FactoryClass::GetFlag() ) /*0x730d65*/
    return (gamemd::CellStruct **)(System_Get()); /*0x730d6e*/
  result = (gamemd::CellStruct **)((char)g_SelectionManager); /*0x730d79*/
  if ( (int)g_SelectionManager > 0 )
  {
    v1 = (gamemd::CellStruct **)((int)((gamemd::CellStruct **)(0)));
    v2 = (gamemd::CellStruct **)(1);
    v8 = g_SelectionManager; /*0x730d8c*/
    do
    {
      v3 = (unsigned char *)*((unsigned int *)(unsigned int)(g_ObjectClass_CurrentCount)+ v1); /*0x730d9b*/
      if ( v3 && (v3[20] & 1) != 0 )
      {
        if ( (*(uint8_t (**)(unsigned int))(*(unsigned int *)v3 + 160))(*((unsigned int *)g_ObjectClass_CurrentCount
                                                                               + v1))
          && (*(uint8_t (**)(unsigned char *))(*(unsigned int *)v3 + 156))( (unsigned char *)(v3))
          && (*(int (**)(unsigned char *))(*(unsigned int *)v3 + 44))( (unsigned char *)(v3)) != 6 )
        {
          v4 = (gamemd::CellStruct **)((int)((gamemd::CellStruct **)(*(unsigned int *)v3)));
          v5 = (gamemd::CellStruct **)((char)((gamemd::CellStruct **)((int)((gamemd::CellStruct **)((*(int (**)(unsigned char *, unsigned int, unsigned int))(*(unsigned int *)v3 + 452))( (unsigned char *)(v3), 0, 0))))));
          result = (gamemd::CellStruct **)((unsigned int)((gamemd::CellStruct **)((char)((gamemd::CellStruct **)((*(int (**)(unsigned char *, int, int))(v4 + 888))( (unsigned char *)(v3), 11, (int)v5))))));
          v2 = (gamemd::CellStruct **)((unsigned int)((gamemd::CellStruct **)((char)((gamemd::CellStruct **)(result)))));
          if ( !result ) /*0x730df5*/
            return result; /*0x730df5*/
        }
        else if ( (*(int (**)(unsigned char *))(*(unsigned int *)v3 + 44))( (unsigned char *)(v3)) == 1
               && (*((*(int (**)(unsigned char *))(*(unsigned int *)v3 + 44))( (unsigned char *)(v3)) == 1
                   ? (unsigned int *)(v3 + 728)
                   : (unsigned int *)728)
                || *(unsigned char *)(*((*(int (**)(unsigned char *))(*(unsigned int *)v3 + 44))( (unsigned char *)(v3)) == 1
                              ? (unsigned int *)(v3 + 1732)
                              : (unsigned int *)1732)
                            + 3598)) )
        {
          v6 = (gamemd::CellStruct **)((int)((gamemd::CellStruct **)(*(unsigned int *)v3)));
          v7 = (gamemd::CellStruct **)((char)((gamemd::CellStruct **)((int)((gamemd::CellStruct **)((*(int (**)(unsigned char *, unsigned int, unsigned int))(*(unsigned int *)v3 + 452))( (unsigned char *)(v3), 0, 0))))));
          result = (gamemd::CellStruct **)((unsigned int)((gamemd::CellStruct **)((char)((gamemd::CellStruct **)((*(int (**)(unsigned char *, int, int))(v6 + 888))( (unsigned char *)(v3), 11, (int)v7))))));
          v2 = (gamemd::CellStruct **)((unsigned int)((gamemd::CellStruct **)((char)((gamemd::CellStruct **)(result)))));
          if ( !result ) /*0x730e60*/
            return result; /*0x730e60*/
        }
      }
      result = (gamemd::CellStruct **)((char)v8);
      ++v1; /*0x730e66*/
    }
    while ( v1 < (gamemd::CellStruct **)(int)v8 );
    if ( v2 ) /*0x730e71*/
      return (CellStruct * *)PlayVocClass(g_RulesClass_Instance->Scorches4[0], 0x2000, 1.0, 0); /*0x730e8a*/
  }
  return (gamemd::CellStruct **)(result);
}
}
// 0x731130
namespace gamemd {
int E4Recv_731130::sub_731130()
{

  int v1; // edi
  int v3; // esi
  int v4; // eax
  ObjectClass *v5; // ecx

  v1 = *(unsigned int *)((char *)&stru_A8EB00 + 164) - 1; /*0x731138*/
  if ( *(unsigned int *)((char *)&stru_A8EB00 + 164) - 1 < 0 ) /*0x73113f*/
    return 1; /*0x7311a6*/
  while ( 1 ) /*0x731147*/
  {
    v3 = *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v1); /*0x731147*/
    if ( v3 && !*(unsigned char *)(v3 + 129) ) /*0x73114e*/
    {
      if ( *(unsigned int *)&dword_A8B238 ) /*0x73115f*/
        LOBYTE(v4) = ((House*)*(House **)(v3 + 540))->IsHumanPlayer(); /*0x731175*/
      else
        v4 = *(uint8_t *)(*(unsigned int *)(v3 + 540) + 493); /*0x731167*/
      if ( (unsigned char)v4 ) /*0x73117c*/
      {
        v5 = *(ObjectClass **)(v3 + 532); /*0x73117e*/
        if ( v5 != (ObjectClass *)((char *)this - 1) ) /*0x731189*/
          goto LABEL_17; /*0x731189*/
        if ( !*(unsigned char *)(v3 + 131) ) /*0x731193*/
          return 0; /*0x731193*/
        if ( v5 != (ObjectClass *)((char *)this - 1) ) /*0x731197*/
        {
LABEL_17:
          if ( *(unsigned char *)(v3 + 131) ) /*0x731199*/
            return 0; /*0x7311a6*/
        }
      }
    }
    if ( --v1 < 0 ) /*0x7311a4*/
      return 1; /*0x7311a4*/
  }

}
}
// 0x731AA0
namespace gamemd {
AbstractClass * * sub_731AA0()
{
  AbstractClass ** v1;
  AbstractClass ** v2;
  unsigned char *v3; // ecx

  v1 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(*(unsigned int *)((char *)&stru_A8EB00 + 228))));
  v2 = (gamemd::AbstractClass **)(0);
  if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 228) <= 0 ) /*0x731aad*/
    return (gamemd::AbstractClass **)(1); /*0x731ad8*/
  while ( 1 ) /*0x731ab4*/
  {
    v3 = *(unsigned char **)(*(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v2); /*0x731ab4*/
    if ( v3 ) /*0x731ab9*/
    {
      if ( (v3[20] & 1) != 0 && !(*(uint8_t (**)(unsigned char *))(*(unsigned int *)v3 + 1216))( (unsigned char *)(v3)) ) /*0x731ac9*/
        break; /*0x731ac9*/
    }
    if ( ++(int)(v2) >= (int)(v1) ) /*0x731ad6*/
      return (gamemd::AbstractClass **)(1); /*0x731ad6*/
  }
  return 0; /*0x731ad8*/
}
}
// 0x731EB0
namespace gamemd {
unsigned int * sub_731EB0(unsigned char (__fastcall *)(int, int), int a2)
{
  unsigned int *v2; // eax
  unsigned int *v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v13; // [esp+14h] [ebp-4h]

  v2 = (unsigned int *)RA2_OPNEW(0x18u); /*0x731ec0*/
  if ( v2 ) /*0x731ecc*/
  {
    v2[1] = 0; /*0x731ece*/
    v2[2] = 0; /*0x731ed1*/
    *((unsigned char *)v2 + 12) = 1; /*0x731ed4*/
    *((unsigned char *)v2 + 13) = 0; /*0x731ed8*/
    *v2 = (unsigned int)(void*)&DynamicVectorClass_TechnoClass___vftable; /*0x731edb*/
    v2[5] = 10; /*0x731ee1*/
    v2[4] = 0; /*0x731ee8*/
    v3 = v2; /*0x731eeb*/
  }
  else
  {
    v3 = (unsigned int *)(0); /*0x731eef*/
  }
  v4 = 0; /*0x731ef6*/
  v13 = dword_A8EC88; /*0x731efa*/
  if ( dword_A8EC88 <= 0 ) /*0x731efe*/
    return v3; /*0x731f62*/
  do /*0x731f56*/
  {
    v5 = *((unsigned int *)dword_A8EC7C + v4); /*0x731f0a*/
    if ( a1(v5, a2) ) /*0x731f0f*/
    {
      v6 = v3[2]; /*0x731f17*/
      if ( v3[4] < v6 /*0x731f39*/
        || (*((unsigned char *)v3 + 13) || !v6)
        && (v7 = v3[5], v7 > 0)
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v3 + 8))( (unsigned int *)(v3), v6 + v7, 0) )
      {
        v8 = v3[4]; /*0x731f40*/
        v9 = v3[1]; /*0x731f43*/
        v3[4] = v8 + 1; /*0x731f49*/
        *(unsigned int *)(v9 + 4 * v8) = v5; /*0x731f4c*/
      }
    }
    ++v4; /*0x731f53*/
  }
  while ( v4 < v13 ); /*0x731f56*/
  return v3; /*0x731f5b*/
}
}
// 0x731F70
namespace gamemd {
unsigned int * TechnoClass_GatherFiltered(unsigned char (__fastcall *)(int, int), int a2)
{
  unsigned int *v2; // eax
  unsigned int *v3; // esi
  int v4; // ebp
  int CoordData; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int Height; // [esp+18h] [ebp-4h]

  v2 = (unsigned int *)RA2_OPNEW(0x18u); /*0x731f80*/
  if ( v2 ) /*0x731f8c*/
  {
    v2[1] = 0; /*0x731f8e*/
    v2[2] = 0; /*0x731f91*/
    *((unsigned char *)v2 + 12) = 1; /*0x731f94*/
    *((unsigned char *)v2 + 13) = 0; /*0x731f98*/
    *v2 = (unsigned int)(void*)&DynamicVectorClass_TechnoClass___vftable; /*0x731f9b*/
    v2[5] = 10; /*0x731fa1*/
    v2[4] = 0; /*0x731fa8*/
    v3 = v2; /*0x731fab*/
  }
  else
  {
    v3 = (unsigned int *)(0); /*0x731faf*/
  }
  v4 = 0; /*0x731fbc*/
  Height = GetHeightMap((gamemd::ObjectClass *)&g_TacticalClass_Instance); /*0x731fc0*/
  if ( Height <= 0 ) /*0x731fc4*/
    return v3; /*0x73203d*/
  do /*0x732031*/
  {
    CoordData = GetCoordDataMap(v4); /*0x731fd3*/
    if ( CoordData && (*(unsigned char *)(CoordData + 20) & 1) != 0 && a1(CoordData, a2) ) /*0x731fea*/
    {
      v6 = v3[2]; /*0x731ff2*/
      if ( v3[4] < v6 /*0x732014*/
        || (*((unsigned char *)v3 + 13) || !v6)
        && (v7 = v3[5], v7 > 0)
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v3 + 8))( (unsigned int *)(v3), v6 + v7, 0) )
      {
        v8 = v3[4]; /*0x73201b*/
        v9 = v3[1]; /*0x73201e*/
        v3[4] = v8 + 1; /*0x732024*/
        *(unsigned int *)(v9 + 4 * v8) = CoordData; /*0x732027*/
      }
    }
    ++v4; /*0x73202e*/
  }
  while ( v4 < Height ); /*0x732031*/
  return v3; /*0x732036*/
}
}
// 0x732770
namespace gamemd {
int TechnoClass_StepCleanupIfHuman(int a1, void * a2)
{
  char v4; // al
  BOOL result; // eax

  result = 0; /*0x7327b7*/
  if ( a1 && *(unsigned char *)(a1 + 144) )
  {
    v4 = *(unsigned int *)&dword_A8B238
       ? ((House*)*(House **)(a1 + 540))->IsHumanPlayer()
       : *(unsigned char *)(*(unsigned int *)(a1 + 540) + 493);
    if ( v4 && (uint8_t)((ObjectClass *)((ObjectClass *)a1))->StepCleanup( (void *)(a2)) ) /*0x7327ad*/
      return 1; /*0x732782*/
  }
  return result; /*0x7327b6*/
}
}
// 0x732950
namespace gamemd {
int SelectAllOfType()
{
  int result; // eax
  int v2; // edi
  EventClass *v3; // eax
  EventClass *v4; // esi
  int v5; // ebp
  DynamicVector *v6; // ebx
  EventClass *v7; // eax
  EventClass *v8; // ebp
  int HeightMap; // ebx
  int i; // esi
  TechnoClass *CoordDataMap; // edi
  int v12; // edi
  unsigned char *v13; // esi
  DynamicVector *v14; // eax
  int v15; // edi
  int j; // esi
  void *DynamicVector_field_0x10; // ebp
  int k; // edi
  void *v19; // esi
  int v20; // eax
  wchar_t *v21; // [esp-4h] [ebp-214h]
  wchar_t *StringCSF; // [esp-4h] [ebp-214h]
  TechnoClass *v23; // [esp+8h] [ebp-208h] BYREF
  unsigned int *v24; // [esp+Ch] [ebp-204h]
  wchar_t Destination[256]; // [esp+10h] [ebp-200h] BYREF

  result = ((unsigned int *)(dword_A8B538))[0]; /*0x732950*/
  v2 = 0; /*0x73295d*/
  if ( ((unsigned int *)(dword_A8B538))[0] ) /*0x732961*/
    return result; /*0x732961*/
  SelectAllOfType_Play(); /*0x73296d*/
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] != 2 ) /*0x732979*/
    &byte_B0FE64 = 0; /*0x73297b*/
  v24 = TacticalClass::CollectSelectedIDs(); /*0x732989*/
  if ( &byte_B0FE64 ) /*0x732996*/
  {
    v3 = (EventClass *)RA2_OPNEW(0x18u); /*0x732998*/
    v4 = v3; /*0x73299d*/
    if ( v3 ) /*0x7329a4*/
    {
      ((EventClass *)(v3))->resetEvent(0, 0); /*0x7329aa*/
      v4->EventClass_field_0x0 = (int)&DynamicVectorClass_TechnoClass___vftable; /*0x7329af*/
      *(unsigned int *)&v4->__pad_10[4] = 10; /*0x7329b5*/
      *(unsigned int *)v4->__pad_10 = 0; /*0x7329bc*/
    }
    else
    {
      v4 = (EventClass *)(0); /*0x7329c1*/
    }
    v5 = *(unsigned int *)((char *)&stru_A8EB00 + 164); /*0x7329c3*/
    if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 164) > 0 ) /*0x7329cb*/
    {
      do /*0x7329f3*/
      {
        v23 = *(TechnoClass **)(*(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v2); /*0x7329d7*/
        if ( (uint8_t)((TechnoClass *)(v23))->IsOwnedByHuman() ) /*0x7329db*/
          ((DynamicVector *)((DynamicVector *)v4))->AddItem((unsigned int *)(&v23)); /*0x7329eb*/
        ++v2; /*0x7329f0*/
      }
      while ( v2 < v5 ); /*0x7329f3*/
    }
    v6 = (DynamicVector *)v4; /*0x7329f5*/
  }
  else
  {
    v7 = (EventClass *)RA2_OPNEW(0x18u); /*0x7329fc*/
    v8 = v7; /*0x732a01*/
    if ( v7 ) /*0x732a08*/
    {
      ((EventClass *)(v7))->resetEvent(0, 0); /*0x732a0e*/
      v8->EventClass_field_0x0 = (int)&DynamicVectorClass_TechnoClass___vftable; /*0x732a13*/
      *(unsigned int *)&v8->__pad_10[4] = 10; /*0x732a1a*/
      *(unsigned int *)v8->__pad_10 = 0; /*0x732a21*/
    }
    else
    {
      v8 = (EventClass *)(0); /*0x732a26*/
    }
    HeightMap = GetHeightMap((ObjectClass *)g_TacticalClass_Instance); /*0x732a33*/
    for ( i = 0; i < HeightMap; ++i ) /*0x732a39*/
    {
      CoordDataMap = (TechnoClass *)GetCoordDataMap(i); /*0x732a47*/
      if ( SelectAllOfType_Helper((ObjectClass *)CoordDataMap) ) /*0x732a4b*/
      {
        v23 = CoordDataMap; /*0x732a58*/
        if ( (uint8_t)((TechnoClass *)(CoordDataMap))->IsOwnedByHuman() ) /*0x732a5c*/
          ((DynamicVector *)((DynamicVector *)v8))->AddItem((unsigned int *)(&v23)); /*0x732a6c*/
      }
    }
    v12 = 0; /*0x732a79*/
    v6 = (DynamicVector *)v8; /*0x732a7d*/
    v23 = *(TechnoClass **)v8->__pad_10; /*0x732a7f*/
    if ( (int)v23 <= 0 ) /*0x732a83*/
    {
  LABEL_25:
      byte_B0FE64 = 1; /*0x732aad*/
    }
    else
    {
      while ( 1 ) /*0x732a8c*/
      {
        v13 = (unsigned char *)*((unsigned int *)v8->EventClass_field_0x4 + v12); /*0x732a8c*/
        if ( IDTechnoClassMatches( (void *)(v13), (int)v24) ) /*0x732a91*/
        {
          if ( !v13[131] ) /*0x732a9a*/
            break; /*0x732a9a*/
        }
        if ( ++v12 >= (int)v23 ) /*0x732aab*/
          goto LABEL_25; /*0x732aab*/
      }
      if ( !&byte_B0FE64 ) /*0x732abd*/
        goto LABEL_36; /*0x732abd*/
    }
    if ( v8 ) /*0x732ac1*/
      (*(void (**)(EventClass *, int))v8->EventClass_field_0x0)( (EventClass *)(v8), 1); /*0x732aca*/
    v14 = (DynamicVector *)RA2_OPNEW(0x18u); /*0x732ace*/
    if ( v14 ) /*0x732ad8*/
      v6 = (DynamicVector *)((DynamicVector *)(v14))->Constructor_Techno(0, 0); /*0x732ae5*/
    else
      v6 = (DynamicVector *)(0); /*0x732ae9*/
    v15 = *(unsigned int *)((char *)&stru_A8EB00 + 164); /*0x732aeb*/
    for ( j = 0; j < v15; ++j ) /*0x732af5*/
    {
      v23 = *(TechnoClass **)(*(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * j); /*0x732b01*/
      if ( (uint8_t)((TechnoClass *)(v23))->IsOwnedByHuman() ) /*0x732b05*/
        ((DynamicVector *)(v6))->AddItem((unsigned int *)(&v23)); /*0x732b15*/
    }
  }
  LABEL_36: DynamicVector_field_0x10 = (void *)(v6->DynamicVector_field_0x10);
  for ( k = 0; k < (int)DynamicVector_field_0x10; ++k ) /*0x732b26*/
  {
    v19 = *(void **)(*(unsigned int *)&(&v6->DynamicVector_field_0x1)[3] + 4 * k); /*0x732b2b*/
    if ( IDTechnoClassMatches( (void *)(v19), (int)v24) ) /*0x732b34*/
      (*(void (**)(void *))(*(unsigned int *)v19 + 332))( (void *)(v19)); /*0x732b41*/
  }
  if ( *(unsigned int *)((char *)&stru_A8EB00 + 228) ) /*0x732b55*/
  {
    if ( &byte_B0FE64 ) /*0x732b7c*/
      StringCSF = GetStringCSF((wchar_t *)(g_Str_MSG_SelAcrossMap), 0,(const char *)(g_Str_File_UICmnds_cpp), 1011); /*0x732b98*/
    else
      StringCSF = GetStringCSF((wchar_t *)(g_Str_MSG_SelAcrossScreen), 0,(const char *)(g_Str_File_UICmnds_cpp), 1013); /*0x732bb2*/
    wcscpy( (wchar_t *)(Destination), (const wchar_t *)(StringCSF)); /*0x732b9a*/
  }
  else
  {
    v21 = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_MSG_NothingSelected), 0,(const char *)(g_Str_File_UICmnds_cpp), 1009));
    wcscpy( (wchar_t *)(Destination), (const wchar_t *)(v21)); /*0x732b73*/
  }
  v20 = 3; /*0x732bc8*/
  if ( dword_A83D4C ) /*0x732bcd*/
    v20 = *(unsigned int *)&((unsigned int *)(dword_A83D4C))[134].__pad_90[4]; /*0x732bcf*/
  result = MessageListClass::AddMessage( /*0x732bf0*/
             (MessageListClass *)&stru_A8BB1C.__pad_87[189],
             0,
             0,
             Destination,
             v20,
             16454,
             240,
             1);
  *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] = 2; /*0x732bf5*/
  IDA_LOBYTE(&byte_B0FE58) = 0; /*0x732bff*/
  if ( v24 ) /*0x732c0c*/
    result = (*(int (**)(unsigned int *, int))*v24)( (unsigned int *)(v24), 1); /*0x732c12*/
  if ( v6 ) /*0x732c16*/
    return (**(int (***)(DynamicVector *, int))v6->__pad_0)(v6, 1); /*0x732c1e*/
  return result; /*0x732c20*/
}
}
// 0x732FF0
namespace gamemd {
char sub_732FF0(void * a1, int (__fastcall *)(unsigned int, int), int a3)
{
  int HeightMap; // eax
  unsigned int *v4; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  unsigned int *v10; // eax
  int v11; // ebx
  int i; // edi
  int v13; // ebp
  int j; // edi
  int v17; // [esp+18h] [ebp-8h] BYREF
  int (__fastcall *v18)(unsigned int, int); // [esp+1Ch] [ebp-4h]

  v18 = a2; /*0x732ffc*/
  if ( byte_B0FE64 ) /*0x733008*/
  {
    HeightMap = (int)RA2_OPNEW(0x18u); /*0x73300e*/
    v4 = (unsigned int *)HeightMap; /*0x733013*/
    v5 = 0; /*0x733015*/
    if ( HeightMap ) /*0x73301c*/
    {
      IDA_LOBYTE(HeightMap) = (uint8_t)((EventClass *)((unsigned int *)HeightMap))->resetEvent(0, 0); /*0x733022*/
      *v4 = (unsigned int)(void*)&DynamicVectorClass_TechnoClass___vftable; /*0x733027*/
      v4[5] = 10; /*0x73302d*/
      v4[4] = 0; /*0x733034*/
    }
    else
    {
      v4 = (unsigned int *)(0); /*0x733039*/
    }
    v6 = dword_A8EC88; /*0x73303b*/
    if ( dword_A8EC88 > 0 ) /*0x733043*/
    {
      do /*0x73309e*/
      {
        v7 = *((unsigned int *)dword_A8EC7C + v5); /*0x733052*/
        IDA_LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman( v7, (void *)(a1)); /*0x733057*/
        if ( (unsigned char)HeightMap ) /*0x73305e*/
        {
          v8 = v4[2]; /*0x733060*/
          if ( v4[4] < v8 /*0x73308a*/
            || ((IDA_LOBYTE(HeightMap) = *((unsigned char *)v4 + 13), (unsigned char)HeightMap) || !v8)
            && (HeightMap = v4[5], HeightMap > 0)
            && (IDA_LOBYTE(HeightMap) = (*(int (**)(unsigned int *, int, unsigned int))(*v4 + 8))( (unsigned int *)(v4), v8 + HeightMap, 0),
                (unsigned char)HeightMap) )
          {
            HeightMap = v4[4]; /*0x73308c*/
            v9 = v4[1]; /*0x73308f*/
            v4[4] = HeightMap + 1; /*0x733095*/
            *(unsigned int *)(v9 + 4 * HeightMap) = v7; /*0x733098*/
          }
        }
        ++v5; /*0x73309b*/
      }
      while ( v5 < v6 ); /*0x73309e*/
    }
  }
  else
  {
    v10 = (unsigned int *)RA2_OPNEW(0x18u); /*0x7330a5*/
    v4 = v10; /*0x7330aa*/
    if ( v10 ) /*0x7330b1*/
    {
      ((EventClass *)(v10))->resetEvent(0, 0); /*0x7330b9*/
      *v4 = (unsigned int)(void*)&DynamicVectorClass_TechnoClass___vftable; /*0x7330be*/
      v4[5] = 10; /*0x7330c4*/
      v4[4] = 0; /*0x7330cb*/
    }
    else
    {
      v4 = (unsigned int *)(0); /*0x7330d4*/
    }
    HeightMap = GetHeightMap((gamemd::ObjectClass *)&g_TacticalClass_Instance); /*0x7330dc*/
    v11 = HeightMap; /*0x7330e1*/
    for ( i = 0; i < v11; ++i ) /*0x7330e7*/
    {
      HeightMap = GetCoordDataMap(i); /*0x7330f0*/
      if ( HeightMap ) /*0x7330f7*/
      {
        if ( (*(unsigned char *)(HeightMap + 20) & 1) != 0 ) /*0x733103*/
        {
          v17 = HeightMap; /*0x73310b*/
          IDA_LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman( HeightMap, (void *)(a1)); /*0x73310f*/
          if ( (unsigned char)HeightMap ) /*0x733116*/
            IDA_LOBYTE(HeightMap) = ((DynamicVector *)(v4))->AddItem( (unsigned int *)(&v17)); /*0x73311f*/
        }
      }
    }
  }
  v13 = v4[4]; /*0x733129*/
  for ( j = 0; j < v13; ++j ) /*0x733130*/
    IDA_LOBYTE(HeightMap) = v18(*(unsigned int *)(v4[1] + 4 * j), a3); /*0x73313e*/
  if ( v4 ) /*0x733149*/
    IDA_LOBYTE(HeightMap) = (*(int (**)(unsigned int *, int))*v4)( (unsigned int *)(v4), 1); /*0x733151*/
  return HeightMap; /*0x733153*/
}
}
// 0x7331B0
namespace gamemd {
void sub_7331B0()
{
  int v1; // ebp
  EventClass *v2; // eax
  EventClass *v3; // esi
  int v4; // ebx
  int v5; // edi
  void *EventClass_field_0x8; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int *EventClass_field_0x4; // edx
  int HeightMap; // eax
  EventClass *v11; // eax
  EventClass *v12; // esi
  int v13; // ebx
  House **v14; // edi
  void *v15; // ecx
  unsigned int *v16; // edx

  v1 = 0; /*0x7331b9*/
  if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] ) /*0x7331bf*/
  {
    (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_1624[8])( /*0x7331c5*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8],
      1);
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = 0; /*0x7331c7*/
  }
  v2 = (EventClass *)RA2_OPNEW(0x18u); /*0x7331cf*/
  v3 = v2; /*0x7331d4*/
  if ( v2 ) /*0x7331db*/
  {
    ((EventClass *)(v2))->resetEvent(0, 0); /*0x7331e1*/
    v3->EventClass_field_0x0 = (int)&DynamicVectorClass_TechnoClass___vftable; /*0x7331e6*/
        *(unsigned int *)(v2 + 20) = 10;
        *(unsigned int *)(v2 + 16) = 0;
  }
  else
  {
    v3 = (EventClass *)(0); /*0x7331f8*/
  }
  v4 = *(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x7331fa*/
  if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 228) > 0 ) /*0x733202*/
  {
    do /*0x73325b*/
    {
      v5 = *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v1); /*0x73320a*/
      if ( v5 && (*(unsigned char *)(v5 + 20) & 1) != 0 ) /*0x73321b*/
      {
                v5 = *(unsigned int *)(v2 + 8);
                if ( *(unsigned int *)(v2 + 16) < v5
          || (IDA_BYTE1(v3->EventClass_field_0xC) || !EventClass_field_0x8)
          && (v7 = *(unsigned int *)&v3->__pad_10[4], v7 > 0)
&& (*(uint8_t (**)(EventClass *, int, unsigned int))(v3->EventClass_field_0x0 + 8))( (EventClass *)(v3), (int)EventClass_field_0x8 + v7, 0) )



        {
                    v7 = *(unsigned int *)(v2 + 16);
                    v8 = *(unsigned int *)(v2 + 4);
                    *(unsigned int *)(v2 + 16) = v7 + 1;
          EventClass_field_0x4[v8] = v5; /*0x733255*/
        }
      }
      ++v1; /*0x733258*/
    }
    while ( v1 < v4 ); /*0x73325b*/
    v1 = 0; /*0x73325d*/
  }
  *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = (unsigned int)v3; /*0x73325f*/
    HeightMap = *(unsigned int *)(v2 + 16);
  if ( !HeightMap ) /*0x73326a*/
  {
    if ( v3 ) /*0x733272*/
      (*(void (**)(EventClass *, int))v3->EventClass_field_0x0)( (EventClass *)(v3), 1); /*0x73327a*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = 0; /*0x73327e*/
    v11 = (EventClass *)RA2_OPNEW(0x18u); /*0x733284*/
    v12 = v11; /*0x733289*/
    if ( v11 ) /*0x733290*/
    {
      ((EventClass *)(v11))->resetEvent(0, 0); /*0x733296*/
      v12->EventClass_field_0x0 = (int)&DynamicVectorClass_TechnoClass___vftable; /*0x73329b*/
            *(unsigned int *)(v11 + 20) = 10;
            *(unsigned int *)(v11 + 16) = 0;
    }
    else
    {
      v12 = (EventClass *)(0); /*0x7332ad*/
    }
    HeightMap = GetHeightMap((ObjectClass *)g_TacticalClass_Instance); /*0x7332b5*/
    v13 = HeightMap; /*0x7332ba*/
    if ( HeightMap > 0 ) /*0x7332be*/
    {
      do /*0x733360*/
      {
        HeightMap = GetCoordDataMap(v1); /*0x7332cb*/
        v14 = (House **)HeightMap; /*0x7332d0*/
        if ( HeightMap ) /*0x7332d4*/
        {
          if ( (*(unsigned char *)(HeightMap + 20) & 1) != 0 ) /*0x7332e4*/
          {
            IDA_LOBYTE(HeightMap) = *(unsigned char *)(HeightMap + 144); /*0x7332e6*/
            if ( (unsigned char)HeightMap ) /*0x7332ee*/
            {
              if ( *(unsigned int *)&dword_A8B238 ) /*0x7332f7*/
                IDA_LOBYTE(HeightMap) = ((House*)v14[135])->IsHumanPlayer(); /*0x73330d*/
              else
                HeightMap = IDA_BYTE1(v14[135]->q1EC); /*0x7332ff*/
              if ( (unsigned char)HeightMap ) /*0x733314*/
              {
                HeightMap = (*(int (**)(House **))&(*v14)->House_field_0x29[3])( (House **)(v14)); /*0x73331a*/
                if ( HeightMap != 6 ) /*0x733320*/
                {
                  v15 = v12->q008; /*0x733322*/
                  if ( *(unsigned int *)v12->__pad_10 < (int)v15 /*0x73334c*/
                    || ((IDA_LOBYTE(HeightMap) = IDA_BYTE1(v12->EventClass_field_0xC), (unsigned char)HeightMap) || !v15)
                    && (HeightMap = *(unsigned int *)&v12->__pad_10[4], HeightMap > 0)
&& (IDA_LOBYTE(HeightMap) = (*(int (**)(EventClass *, int, unsigned int))(v12->EventClass_field_0x0 + 8))( (EventClass *)(v12), (int)v15 + HeightMap, 0), (unsigned char)HeightMap) )





                  {
                    HeightMap = *(unsigned int *)v12->__pad_10; /*0x73334e*/
                    v16 = (unsigned int *)(v12->EventClass_field_0x4); /*0x733351*/
                    *(unsigned int *)v12->__pad_10 = HeightMap + 1; /*0x733357*/
                    v16[HeightMap] = (unsigned int)(v14); /*0x73335a*/
                  }
                }
              }
            }
          }
        }
        ++v1; /*0x73335d*/
      }
      while ( v1 < v13 ); /*0x733360*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = (unsigned int)v12; /*0x733366*/
  }
  return HeightMap; /*0x73336c*/
}
}
// 0x733380
namespace gamemd {
int E4Recv_733380::UpdateUnitHealthTooltip(char a1, void * aMsgCritical, void * aMsgHealthy, void * aMsgHeavilydama)
{

  int result; // eax
  int v2; // esi
  unsigned int *v3; // eax
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  BuildingClass *v8; // esi
  wchar_t *StringCSF; // ebx
  DynamicVector *v10; // eax
  DynamicVector *v11; // edi
  int v12; // ebp
  int v13; // eax
  int DynamicVector_field_0x10; // ebp
  int v15; // esi
  int v16; // eax
  SuperWeaponClass *v17; // [esp+4h] [ebp-210h]
  int v18; // [esp+8h] [ebp-20Ch]
  int v19; // [esp+10h] [ebp-204h] BYREF
  wchar_t Destination[256]; // [esp+14h] [ebp-200h] BYREF

  result = (&dword_A8B538)[0]; /*0x733380*/
  v2 = 0; /*0x73338c*/
  if ( !(&dword_A8B538)[0] ) /*0x733390*/
  {
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] == 3 ) /*0x73339d*/
    {
      if ( dword_845560 == -1 ) /*0x733402*/
      {
        v18 = 0; /*0x733404*/
      }
      else if ( dword_845560 ) /*0x73340c*/
      {
        v4 = -(dword_845560 != 1); /*0x73341b*/
        LOBYTE(v4) = v4 & 0xFE; /*0x73341d*/
        v18 = v4 + 2; /*0x733422*/
      }
      else
      {
        v18 = 1; /*0x73340e*/
      }
      if ( a1 ) /*0x733428*/
        SuperWeaponClass::UpdateAll(v17); /*0x733430*/
    }
    else
    {
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] ) /*0x7333a7*/
      {
        (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_1624[8])( /*0x7333ad*/
          *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8],
          1);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = 0; /*0x7333af*/
      }
      v3 = TechnoClass::GatherAllBuildings(); /*0x7333b5*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = (unsigned int)v3; /*0x7333ba*/
      if ( !v3[4] ) /*0x7333bf*/
      {
        if ( v3 ) /*0x7333c8*/
          (*(void (**)(unsigned int *, int))*v3)( (unsigned int *)(v3), 1); /*0x7333d0*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = 0; /*0x7333d9*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = GatherTechnoClassFiltered( /*0x7333e4*/
                                                                (uint8_t (__fastcall *)(int, int))TechnoClass::IsCapturableByPlayer,
                                                                0);
      }
      SuperWeaponClass::UpdateAll(v17); /*0x7333ef*/
      v18 = 0; /*0x7333f4*/
    }
    v5 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8]; /*0x733437*/
    v6 = 0; /*0x73343e*/
    v7 = *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] + 16); /*0x733440*/
    if ( v7 > 0 ) /*0x733445*/
    {
      do /*0x733467*/
      {
        v8 = *(BuildingClass **)(*(unsigned int *)(v5 + 4) + 4 * v6); /*0x73344a*/
        if ( ((BuildingClass *)v8)->GetSellPriority() == v18 ) /*0x733458*/
          (*((void (**)(BuildingClass *))v8->vtable1 + 83))( (BuildingClass *)(v8)); /*0x73345e*/
        ++v6; /*0x733464*/
      }
      while ( v6 < v7 ); /*0x733467*/
      v2 = 0; /*0x733469*/
    }
    if ( v18 ) /*0x733471*/
    {
      if ( v18 == 1 ) /*0x733490*/
      {
        StringCSF = GetStringCSF((wchar_t *)aMsgHeavilydama, 0, (const char *)g_Str_File_UICmnds_cpp, 1606); /*0x7334a8*/
      }
      else if ( v18 == 2 ) /*0x7334af*/
      {
        StringCSF = GetStringCSF((wchar_t *)aMsgHealthy, 0, (const char *)g_Str_File_UICmnds_cpp, 1608); /*0x7334c7*/
      }
      else
      {
        StringCSF = (wchar_t *)(&g_TypeClass_DefaultString); /*0x7334cb*/
      }
    }
    else
    {
      StringCSF = GetStringCSF((wchar_t *)aMsgCritical, 0, (const char *)g_Str_File_UICmnds_cpp, 1604); /*0x733489*/
    }
    v10 = (DynamicVector *)__2_YAPAXI_Z(0x18u); /*0x7334d2*/
    if ( v10 ) /*0x7334dc*/
      v11 = (DynamicVector *)((DynamicVector *)(v10))->Constructor_Techno(0, 0); /*0x7334e7*/
    else
      v11 = (DynamicVector *)(0); /*0x7334eb*/
    v12 = *(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x7334ed*/
    if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 228) > 0 ) /*0x7334f5*/
    {
      do /*0x733522*/
      {
        v13 = *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v2); /*0x7334fc*/
        if ( v13 && (*(unsigned char *)(v13 + 20) & 1) != 0 ) /*0x73350d*/
        {
          v19 = *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v2); /*0x733516*/
          ((DynamicVector *)(v11))->AddItem( (unsigned int *)(&v19)); /*0x73351a*/
        }
        ++v2; /*0x73351f*/
      }
      while ( v2 < v12 ); /*0x733522*/
    }
    DynamicVector_field_0x10 = (int)v11->DynamicVector_field_0x10; /*0x733524*/
    v15 = 0; /*0x733527*/
    if ( DynamicVector_field_0x10 > 0 ) /*0x73352b*/
    {
      while ( ((BuildingClass *)*(BuildingClass **)(*(unsigned int *)&(&v11->DynamicVector_field_0x1)[3] + 4 * v15))->GetSellPriority() == v18 ) /*0x73353c*/
      {
        if ( ++v15 >= DynamicVector_field_0x10 ) /*0x733541*/
          goto LABEL_42; /*0x733541*/
      }
      StringCSF = GetStringCSF((wchar_t *)g_Str_MSG_Mixed, 0, (const char *)g_Str_File_UICmnds_cpp, 1583); /*0x73355b*/
    }
LABEL_42:
    if ( v11 ) /*0x73355f*/
      (**(void (***)(DynamicVector *, int))v11->__pad_0)(v11, 1); /*0x733567*/
    FillUnitTooltipUI(Destination, StringCSF); /*0x73356f*/
    v16 = 3; /*0x73357a*/
    if ( dword_A83D4C ) /*0x733584*/
      v16 = *(unsigned int *)&(&(&dword_A83D4C)[134].__pad_90)[4]; /*0x733586*/
    MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, Destination, v16, 16454, 240, 1); /*0x7335a7*/
    dword_845560 = v18; /*0x7335b6*/
    result = *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] + 16); /*0x7335bc*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] = 0; /*0x7335c1*/
    if ( result ) /*0x7335cb*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] = 3; /*0x7335cd*/
    LOBYTE(&byte_B0FE58) = 0; /*0x7335d7*/
  }
  return result; /*0x7335de*/

}
}
// 0x7336C0
namespace gamemd {
int DrawUnitExperiencePopup(char a1)
{

  int result; // eax
  int v2; // esi
  unsigned int *v3; // eax
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int *v8; // esi
  wchar_t *StringCSF; // ebx
  DynamicVector *v10; // eax
  DynamicVector *v11; // edi
  int v12; // ebp
  int v13; // eax
  int DynamicVector_field_0x10; // ebp
  int v15; // esi
  int v16; // eax
  SuperWeaponClass *v17; // [esp+4h] [ebp-210h]
  int v18; // [esp+8h] [ebp-20Ch]
  int v19; // [esp+10h] [ebp-204h] BYREF
  wchar_t Destination[256]; // [esp+14h] [ebp-200h] BYREF

  result = (&dword_A8B538)[0]; /*0x7336c0*/
  v2 = 0; /*0x7336cc*/
  if ( !(&dword_A8B538)[0] ) /*0x7336d0*/
  {
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] == 4 ) /*0x7336dd*/
    {
      if ( dword_845564 == -1 ) /*0x733742*/
      {
        v18 = 0; /*0x733744*/
      }
      else if ( dword_845564 ) /*0x73374c*/
      {
        v4 = -(dword_845564 != 1); /*0x73375b*/
        LOBYTE(v4) = v4 & 0xFE; /*0x73375d*/
        v18 = v4 + 2; /*0x733762*/
      }
      else
      {
        v18 = 1; /*0x73374e*/
      }
      if ( a1 ) /*0x733768*/
        SuperWeaponClass::UpdateAll(v17); /*0x733770*/
    }
    else
    {
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] ) /*0x7336e7*/
      {
        (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_1624[8])( /*0x7336ed*/
          *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8],
          1);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = 0; /*0x7336ef*/
      }
      v3 = TechnoClass::GatherAllBuildings(); /*0x7336f5*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = (unsigned int)v3; /*0x7336fa*/
      if ( !v3[4] ) /*0x7336ff*/
      {
        if ( v3 ) /*0x733708*/
          (*(void (**)(unsigned int *, int))*v3)( (unsigned int *)(v3), 1); /*0x733710*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = 0; /*0x733719*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = GatherTechnoClassFiltered( /*0x733724*/
                                                                (uint8_t (__fastcall *)(int, int))TechnoClass::IsCapturableByPlayer,
                                                                0);
      }
      SuperWeaponClass::UpdateAll(v17); /*0x73372f*/
      v18 = 0; /*0x733734*/
    }
    v5 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8]; /*0x733777*/
    v6 = 0; /*0x73377e*/
    v7 = *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] + 16); /*0x733780*/
    if ( v7 > 0 ) /*0x733785*/
    {
      do /*0x7337ab*/
      {
        v8 = *(int **)(*(unsigned int *)(v5 + 4) + 4 * v6); /*0x73378a*/
        if ( FootClass::CheckAccelLimit(v8 + 84) == v18 ) /*0x73379c*/
          (*(void (**)(int *))(*v8 + 332))( (int *)(v8)); /*0x7337a2*/
        ++v6; /*0x7337a8*/
      }
      while ( v6 < v7 ); /*0x7337ab*/
      v2 = 0; /*0x7337ad*/
    }
    if ( v18 ) /*0x7337b5*/
    {
      if ( v18 == 1 ) /*0x7337d4*/
      {
        StringCSF = GetStringCSF( aMsgVeteran, 0, (const char *)(g_Str_File_UICmnds_cpp), 1680); /*0x7337ec*/
      }
      else if ( v18 == 2 ) /*0x7337f3*/
      {
        StringCSF = GetStringCSF( aMsgLittleexper, 0, (const char *)(g_Str_File_UICmnds_cpp), 1682); /*0x73380b*/
      }
      else
      {
        StringCSF =(wchar_t *)&g_TypeClass_DefaultString; /*0x73380f*/
      }
    }
    else
    {
      StringCSF = GetStringCSF( aMsgElite, 0, (const char *)(g_Str_File_UICmnds_cpp), 1678); /*0x7337cd*/
    }
    v10 = (DynamicVector *)__2_YAPAXI_Z(0x18u); /*0x733816*/
    if ( v10 ) /*0x733820*/
      v11 = (DynamicVector *)((DynamicVector *)(v10))->Constructor_Techno(0, 0); /*0x73382b*/
    else
      v11 = (DynamicVector *)(0); /*0x73382f*/
    v12 = *(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x733831*/
    if ( *(int *)((char *)&stru_A8EB00 + 228) > 0 ) /*0x733839*/
    {
      do /*0x733866*/
      {
        v13 = *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v2); /*0x733840*/
        if ( v13 && (*(unsigned char *)(v13 + 20) & 1) != 0 ) /*0x733851*/
        {
          v19 = *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v2); /*0x73385a*/
          ((DynamicVector *)(v11))->AddItem( (unsigned int *)(&v19)); /*0x73385e*/
        }
        ++v2; /*0x733863*/
      }
      while ( v2 < v12 ); /*0x733866*/
    }
    DynamicVector_field_0x10 = (int)v11->DynamicVector_field_0x10; /*0x733868*/
    v15 = 0; /*0x73386b*/
    if ( DynamicVector_field_0x10 > 0 ) /*0x73386f*/
    {
      while ( FootClass::CheckAccelLimit((*(unsigned int *)(*(unsigned int *)&(&v11->DynamicVector_field_0x1)[3] + 4 * v15) + 336)) == v18 ) /*0x733886*/
      {
        if ( ++v15 >= DynamicVector_field_0x10 ) /*0x73388b*/
          goto LABEL_42; /*0x73388b*/
      }
      StringCSF = GetStringCSF((wchar_t *)g_Str_MSG_Mixed, 0, (const char *)g_Str_File_UICmnds_cpp, 1658); /*0x7338a5*/
    }
LABEL_42:
    if ( v11 ) /*0x7338a9*/
      (**(void (***)(DynamicVector *, int))v11->__pad_0)(v11, 1); /*0x7338b1*/
    FillUnitTooltipUI(Destination, StringCSF); /*0x7338b9*/
    v16 = 3; /*0x7338c4*/
    if ( dword_A83D4C ) /*0x7338ce*/
      v16 = *(unsigned int *)&(&dword_A83D4C)[((unsigned int *)&134.__pad_90)[4]]; /*0x7338d0*/
    MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, Destination, v16, 16454, 240, 1); /*0x7338f1*/
    dword_845564 = v18; /*0x733900*/
    result = *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] + 16); /*0x733906*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] = 0; /*0x73390b*/
    if ( result ) /*0x733915*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] = 4; /*0x733917*/
    LOBYTE(&byte_B0FE58) = 0; /*0x733921*/
  }
  return result; /*0x733928*/

}
}
// 0x7339B0
namespace gamemd {
int SelectUnitsByTheme(char a1)
{
  void *result; // eax
  int v2; // ebp
  unsigned int *v4; // eax
  int v5; // ebx
  int v6; // edi
  const char *v7; // eax
  wchar_t *StringCSF; // ebx
  DynamicVector *v9; // eax
  DynamicVector *v10; // ebp
  int v11; // edi
  int i; // esi
  int v13; // eax
  int DynamicVector_field_0x10; // edi
  int v15; // esi
  int v16; // eax
  SuperWeaponClass *v17; // [esp+0h] [ebp-218h]
  char *Block; // [esp+8h] [ebp-210h]
  int v19; // [esp+Ch] [ebp-20Ch] BYREF
  int v21; // [esp+14h] [ebp-204h] BYREF
  wchar_t Destination[256]; // [esp+18h] [ebp-200h] BYREF

  result = (void *)(&dword_A8B538)[0]; /*0x7339b0*/
  v2 = 0; /*0x7339bd*/
  if ( !(&dword_A8B538)[0] ) /*0x7339c3*/
  {
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] == 5 ) /*0x7339d0*/
    {
      Block = SelectFactionThemeMusic( /*0x733a62*/
                *(int *)&g_BuildingLoadQueue_Array.__pad_1624[8],
                &g_BuildingLoadQueue_Array.__pad_F70[1472],
                *(int *)&g_BuildingLoadQueue_Array.__pad_1624[12],
                &v21);
      if ( a1 ) /*0x733a66*/
        SuperWeaponClass::UpdateAll(v17); /*0x733a6e*/
    }
    else
    {
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] ) /*0x7339da*/
      {
        (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_1624[8])( /*0x7339e0*/
          *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8],
          1);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = 0; /*0x7339e2*/
      }
      v4 = TechnoClass::GatherAllBuildings(); /*0x7339e8*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = (unsigned int)v4; /*0x7339ed*/
      if ( !v4[4] ) /*0x7339f2*/
      {
        if ( v4 ) /*0x7339fb*/
          (*(void (**)(unsigned int *, int))*v4)( (unsigned int *)(v4), 1); /*0x733a03*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = 0; /*0x733a0c*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] = GatherTechnoClassFiltered( /*0x733a17*/
                                                                (uint8_t (__fastcall *)(int, int))TechnoClass::IsCapturableByPlayer,
                                                                0);
      }
      SuperWeaponClass::UpdateAll(v17); /*0x733a22*/
      Block = SelectFactionThemeMusic(*(int *)&g_BuildingLoadQueue_Array.__pad_1624[8], 0, 0x7FFFFFFF, &v21); /*0x733a3e*/
    }
    v5 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8]; /*0x733a73*/
    v19 = *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[8] + 16); /*0x733a80*/
    if ( v19 > 0 ) /*0x733a84*/
    {
      do /*0x733aed*/
      {
        v6 = *(unsigned int *)(v5->vtable2 + 4 * v2); /*0x733a89*/
        v7 = (const char *)((*(int (**)(int))(*(unsigned int *)v6 + 136))(v6) + 36); /*0x733a9a*/
        if ( Block && !strcmp(v7, Block) && (*(uint8_t (**)(int))(*(unsigned int *)v6 + 316))(v6) ) /*0x733ad2*/
          (*(void (**)(int))(*(unsigned int *)v6 + 332))(v6); /*0x733ae0*/
        ++v2; /*0x733aea*/
      }
      while ( v2 < v19 ); /*0x733aed*/
    }
    StringCSF = (wchar_t *)(0); /*0x733af1*/
    v9 = (DynamicVector *)RA2_OPNEW(0x18u); /*0x733af3*/
    if ( v9 ) /*0x733afd*/
      v10 = (DynamicVector *)((DynamicVector *)(v9))->Constructor_Techno(0, 0); /*0x733b08*/
    else
      v10 = (DynamicVector *)(0); /*0x733b0c*/
    v11 = *(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x733b0e*/
    for ( i = 0; i < v11; ++i ) /*0x733b18*/
    {
      v13 = *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * i); /*0x733b1f*/
      if ( v13 ) /*0x733b24*/
      {
        if ( *(unsigned char *)(v13 + 20) & 1 ) /*0x733b2c*/
        {
          v19 = v13; /*0x733b39*/
          ((DynamicVector *)(v10))->AddItem( (unsigned int *)(&v19)); /*0x733b3d*/
        }
      }
    }
    DynamicVector_field_0x10 = (int)v10->DynamicVector_field_0x10; /*0x733b47*/
    v15 = 0; /*0x733b4a*/
    if ( DynamicVector_field_0x10 <= 0 ) /*0x733b4e*/
      goto LABEL_31; /*0x733b4e*/
    while ( Object_Helper_733C60(*(unsigned int *)(*(unsigned int *)&v10->DynamicVector_field_0x1[3] + 4 * v15), Block) ) /*0x733b61*/
    {
      if ( ++v15 >= DynamicVector_field_0x10 ) /*0x733b66*/
        goto LABEL_31; /*0x733b66*/
    }
    StringCSF = GetStringCSF( (wchar_t *)(g_Str_MSG_Mixed), 0, (const char *)(g_Str_File_UICmnds_cpp), 1731); /*0x733b80*/
    if ( !StringCSF ) /*0x733b84*/
    {
  LABEL_31:
      if ( *(int *)((char *)&stru_A8EB00 + 228) > 0 ) /*0x733b8d*/
        StringCSF = *(wchar_t **)((*(int (**)(unsigned int))(***(unsigned int ***)((char *)&stru_A8EB00 + 216) + 136))(**(unsigned int **)((char *)&stru_A8EB00 + 216)) /*0x733b9f*/
                                + 96);
    }
    FillUnitTooltipUI(Destination, StringCSF); /*0x733ba8*/
    v16 = 3; /*0x733bb3*/
    if ( dword_A83D4C ) /*0x733bba*/
      v16 = *(unsigned int *)&(&dword_A83D4C)[134].__pad_90[4]; /*0x733bbc*/
    MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, Destination, v16, 16454, 240, 1); /*0x733bdd*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1624[12] = v21; /*0x733bec*/
    strcpy( (char *)(&g_BuildingLoadQueue_Array.__pad_F70[1472]), (const char *)(Block)); /*0x733c09*/
    if ( Block ) /*0x733c16*/
      RA2_OPDEL(Block); /*0x733c19*/
    result = (void *)(v10->DynamicVector_field_0x10); /*0x733c21*/
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] = 0; /*0x733c24*/
    if ( result ) /*0x733c30*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_1584[144] = 5; /*0x733c32*/
    IDA_LOBYTE(&byte_B0FE58) = 0; /*0x733c3e*/
    if ( v10 ) /*0x733c45*/
      return (int)((void *)(**(int (***)(DynamicVector *, int))v10->__pad_0)(v10, 1)); /*0x733c4e*/
  }
  return (int)(result); /*0x733c50*/
}
}
// 0x733CD0
namespace gamemd {
unsigned int * E4Recv_733CD0::sub_733CD0()
{

  ObjectClass *v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  const char *v8; // ebp
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  const char **v14; // [esp+Ch] [ebp-14h]
  int v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int uniqueId; // [esp+1Ch] [ebp-4h]

  v1 = (gamemd::ObjectClass *)(this); /*0x733cd6*/
  v2 = (unsigned int)__2_YAPAXI_Z(0x18u); /*0x733cde*/
  if ( v2 ) /*0x733cea*/
  {
    *(unsigned int *)(v2 + 4) = 0; /*0x733cec*/
    *(unsigned int *)(v2 + 8) = 0; /*0x733cef*/
    *(unsigned char *)(v2 + 12) = 1; /*0x733cf2*/
    *(unsigned char *)(v2 + 13) = 0; /*0x733cf6*/
    *(unsigned int *)v2 = (unsigned int)&vt_DynamicVectorClass;
    *(unsigned int *)(v2 + 20) = 10; /*0x733cff*/
    *(unsigned int *)(v2 + 16) = 0; /*0x733d06*/
    v3 = v2; /*0x733d09*/
  }
  else
  {
    v3 = 0; /*0x733d0d*/
  }
  v4 = 0; /*0x733d12*/
  uniqueId = ((unsigned int *)v1)[0]; /*0x733d16*/
  v16 = 0; /*0x733d1a*/
  if ( uniqueId <= 0 ) /*0x733d1e*/
    return (unsigned int *)v3; /*0x733dfa*/
  while ( 1 ) /*0x733d2e*/
  {
    v5 = *((unsigned int *)((unsigned int *)v1)[0] + v4); /*0x733d2e*/
    v6 = (*(int (**)(int))(*(unsigned int *)v5 + 136))(v5); /*0x733d33*/
    v7 = *(unsigned int *)(v3 + 16); /*0x733d39*/
    v8 = (const char *)(v6 + 36); /*0x733d3e*/
    v15 = 0; /*0x733d43*/
    if ( v7 <= 0 ) /*0x733d47*/
      goto LABEL_13; /*0x733d47*/
    v14 = *(const char ***)(v3 + 4); /*0x733d4c*/
    while ( strcmp(v8, *v14) ) /*0x733d89*/
    {
      ++v15; /*0x733d95*/
      ++v14; /*0x733d99*/
      if ( v15 >= v7 ) /*0x733d9d*/
        goto LABEL_13; /*0x733d9d*/
    }
    if ( v15 == -1 ) /*0x733da4*/
    {
LABEL_13:
      v9 = *(unsigned int *)(v3 + 8); /*0x733da6*/
      if ( v7 < v9 /*0x733dc5*/
        || (*(unsigned char *)(v3 + 13) || !v9)
        && (v10 = *(unsigned int *)(v3 + 20), v10 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v3 + 8))(v3, v9 + v10, 0) )
      {
        v11 = *(unsigned int *)(v3 + 16); /*0x733dcc*/
        v12 = *(unsigned int *)(v3 + 4); /*0x733dcf*/
        *(unsigned int *)(v3 + 16) = v11 + 1; /*0x733dd5*/
        *(unsigned int *)(v12 + 4 * v11) = (unsigned int)v8; /*0x733dd8*/
      }
    }
    v4 = ++v16; /*0x733de3*/
    if ( v16 >= uniqueId ) /*0x733dea*/
      return (unsigned int *)v3; /*0x733df3*/
    v1 = (gamemd::ObjectClass *)(this); /*0x733d27*/
  }

}
}
// 0x733E10
namespace gamemd {
void * SelectFactionThemeMusic(int a1, const char * a2, int a3, unsigned int * a4)
{
  int v4; // edi
  int v5; // esi
  int v6; // ebx
  int v7; // ebp
  int v8; // ecx
  unsigned int *v9; // eax
  unsigned int *v10; // esi
  unsigned int *v11; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  unsigned int *v17; // ebp
  const char *v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  int v24; // eax
  int v26; // ebp
  int i; // edi
  int v28; // eax
  int v29; // edx
  int v30; // edi
  int v31; // eax
  int *v32; // esi
  const char *v33; // edi
  char *v34; // ebp
  unsigned int *v36; // [esp+10h] [ebp-24h]
  int v37; // [esp+14h] [ebp-20h]
  const char **v38; // [esp+18h] [ebp-1Ch]
  int v39; // [esp+1Ch] [ebp-18h]
  int v40; // [esp+20h] [ebp-14h] BYREF
  int v43; // [esp+2Ch] [ebp-8h]
  int v44; // [esp+30h] [ebp-4h]

  v4 = a1; /*0x733e17*/
  a2 = a2; /*0x733e19*/
  a1 = a1; /*0x733e1f*/
  v5 = 0; /*0x733e28*/
  if ( RA2_OPNEW(0x18u) ) /*0x733e23*/
  {
    v6 = SelectFactionThemeMusic_Helper_734330(0, 0); /*0x733e3a*/
    v37 = v6; /*0x733e3c*/
  }
  else
  {
    v37 = 0; /*0x733e42*/
    v6 = 0; /*0x733e46*/
  }
  v7 = v4->q010; /*0x733e48*/
  if ( v7 > 0 ) /*0x733e4d*/
  {
    do /*0x733e81*/
    {
      v8 = *(unsigned int *)(v4->vtable2 + 4 * v5); /*0x733e52*/
      v40 = (*(int (**)(int))(*(unsigned int *)v8 + 136))(v8) + 36; /*0x733e64*/
      if ( SelectFactionThemeMusic_Helper(v6, v40) == -1 ) /*0x733e70*/
        SelectFactionThemeMusic_Helper_734390(&v40); /*0x733e79*/
      ++v5; /*0x733e7e*/
    }
    while ( v5 < v7 ); /*0x733e81*/
  }
  v9 = (unsigned int *)RA2_OPNEW(0x18u); /*0x733e85*/
  v10 = v9; /*0x733e8a*/
  v11 = (unsigned int *)(0); /*0x733e8c*/
  if ( v9 ) /*0x733e93*/
  {
    ((VectorClass *)(v9))->Construct(0, 0); /*0x733e99*/
    v10[4] = 0; /*0x733e9e*/
    v11 = v10; /*0x733ea1*/
    *v10 = (unsigned int)(void*)&DynamicVectorClass_int_vftable; /*0x733ea3*/
    v10[5] = 10; /*0x733ea9*/
    v36 = v10; /*0x733eb0*/
  }
  else
  {
    v36 = (unsigned int *)(0); /*0x733eb6*/
  }
  v40 = v37->Items; /*0x733ec3*/
  v40 = v40; /*0x733ebe*/
  if ( v40 > 0 ) /*0x733ec7*/
  {
    do /*0x733f09*/
    {
      v13 = v11[2]; /*0x733ec9*/
      if ( v11[4] < v13 /*0x733eee*/
        || (*((unsigned char *)v11 + 13) || !v13)
        && (v14 = v11[5], v14 > 0)
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v11 + 8))( (unsigned int *)(v11), v13 + v14, 0) )
      {
        v15 = v11[4]; /*0x733ef5*/
        v16 = v11[1]; /*0x733ef8*/
        v11[4] = v15 + 1; /*0x733efe*/
        *(unsigned int *)(v16 + 4 * v15) = 0; /*0x733f01*/
      }
      --v40; /*0x733f08*/
    }
    while ( v40 ); /*0x733f09*/
  }
  v39 = 0; /*0x733f0e*/
  v44 = v4->q010; /*0x733f18*/
  if ( v44 > 0 ) /*0x733f1c*/
  {
    while ( 1 ) /*0x733f2f*/
    {
      v17 = *(unsigned int **)(v4->vtable2 + 4 * v39); /*0x733f2f*/
      v18 = (const char *)((*(int (**)(unsigned int *))(*v17 + 136))( (unsigned int *)(v17)) + 36); /*0x733f43*/
      v19 = 0; /*0x733f46*/
      v43 = v37->Items; /*0x733f4d*/
      if ( v43 <= 0 ) /*0x733f51*/
      {
  LABEL_27:
        v20 = -1; /*0x733fab*/
      }
      else
      {
        v38 = v37->Items; /*0x733f56*/
        while ( strcmp(v18, *v38) ) /*0x733f8d*/
        {
          ++v19; /*0x733f9b*/
          ++v38; /*0x733fa1*/
          if ( v19 >= v43 ) /*0x733fa5*/
          {
            v11 = v36; /*0x733fa7*/
            goto LABEL_27; /*0x733fa7*/
          }
        }
        v11 = v36; /*0x734046*/
        v20 = v19; /*0x73404a*/
      }
      v21 = v17[135]; /*0x733fb4*/
      v22 = *(unsigned int *)(v11[1] + 4 * v20); /*0x733fbc*/
      v23 = (*(int (**)(unsigned int *))(*v17 + 136))( (unsigned int *)(v17)); /*0x733fbf*/
      v24 = v22 + (*(int (**)(int, int))(*(unsigned int *)v23 + 132))(v23, v21); /*0x733fd0*/
      v11 = v36; /*0x733fd2*/
      v44 = v44; /*0x733fdd*/
      *(unsigned int *)(v36[1] + 4 * v20) = v24; /*0x733fe1*/
      if ( ++v39 >= v44 ) /*0x733fef*/
        break; /*0x733fef*/
      v4 = a1; /*0x733f24*/
    }
  }
  v26 = -1; /*0x733ff9*/
  *a4 = 0; /*0x733ffc*/
  if ( !a2 ) /*0x734008*/
    goto LABEL_39; /*0x734008*/
  for ( i = 0; i < v40; ++i ) /*0x734012*/
  {
    if ( strcmp(a2, *(const char **)(v37->Items + 4 * i)) ) /*0x734028*/
    {
      v28 = *(unsigned int *)(v11[1] + 4 * i); /*0x734061*/
      if ( v28 < a3 && v28 > *a4 ) /*0x73406e*/
      {
        *a4 = v28; /*0x734070*/
        v26 = i; /*0x734072*/
      }
    }
  }
  if ( !*a4 ) /*0x734081*/
  {
  LABEL_39:
    v29 = 0; /*0x73408a*/
    v30 = -1; /*0x73408c*/
    v31 = 0; /*0x73408f*/
    if ( v40 > 0 ) /*0x734093*/
    {
      v32 = (int *)v11[1]; /*0x734095*/
      do /*0x7340a8*/
      {
        if ( *v32 > v29 ) /*0x73409c*/
        {
          v29 = *v32; /*0x73409e*/
          v30 = v31; /*0x7340a0*/
        }
        ++v31; /*0x7340a2*/
        ++v32; /*0x7340a3*/
      }
      while ( v31 < v40 ); /*0x7340a8*/
    }
    v26 = v30; /*0x7340ae*/
    *a4 = v29; /*0x7340b0*/
  }
  v33 = a2; /*0x7340b2*/
  if ( v26 != -1 ) /*0x7340b9*/
    v33 = *(const char **)(v37->Items + 4 * v26); /*0x7340c2*/
  v34 = (char *)RA2_OPNEW(0x64u); /*0x7340cf*/
  if ( v33 ) /*0x7340d3*/
    strcpy( (char *)(v34), (const char *)(v33)); /*0x7340e9*/
  if ( v37 ) /*0x7340f8*/
    (**(void (***)(int, int))v37)(v37, 1); /*0x7340fe*/
  if ( v11 ) /*0x734102*/
    (*(void (**)(unsigned int *, int))*v11)( (unsigned int *)(v11), 1); /*0x73410a*/
  return v34; /*0x73410c*/
}
}
// 0x734E60
namespace gamemd {
wchar_t * GetStringCSF(wchar_t *Format, unsigned int *a2, const char *aP3, int a4)
{
  unsigned int *v7; // eax
  wchar_t *v8; // esi

  if ( a2 ) /*0x734e68*/
    *a2 = 0; /*0x734e6a*/
  if ( !dword_B1CF74 ) /*0x734e77*/
    return (wchar_t *)(aFatalStringMan); /*0x734e7a*/
  v7 = (unsigned int *)(bsearch(Format,(const void *)( dword_B1CF74), dword_B1CF6C, 0x28u, _strcmpi)); /*0x734e93*/
  if ( v7 ) /*0x734e9d*/
  {
    if ( a2 ) /*0x734ea1*/
      *a2 = *((unsigned int *)dword_B1CF7C + v7[9]); /*0x734eaf*/
    return (wchar_t *)*((unsigned int *)dword_B1CF78 + v7[9]); /*0x734ebc*/
  }
  else
  {
    v8 = (wchar_t *)RA2_OPNEW(0x208u); /*0x734ed6*/
    swprintf(v8 + 2, (const size_t)aMissingHs, Format, aP3, a4); /*0x734ee4*/
    Debug::Log("***NO_STRING*** '%s' -> file:%s line:%d\n", (const char *)Format, aP3, a4); /*0x734ef5*/
    *(unsigned int *)v8 = dword_B1CF88; /*0x734f05*/
    dword_B1CF88 = (unsigned int)v8; /*0x734f08*/
    return v8 + 2; /*0x734f03*/
  }
}
}
// 0x734F50
namespace gamemd {
int E4Recv_734F50::sub_734F50()
{

  int result; // eax
  WinMain *v3; // [esp+0h] [ebp-4h]

  result = dword_B1CF84; /*0x734f50*/
  if ( (ObjectClass *)*(unsigned int *)&dword_B1CF84 != (ObjectClass *)this ) /*0x734f5a*/
  {
    WinMain::ShutdownCleanup(v3); /*0x734f5c*/
    dword_B1CF84 = (int)this; /*0x734f67*/
    return CSFClass::LoadFile((const char *)dword_B1CF68); /*0x734f6d*/
  }
  return result; /*0x734f72*/

}
}
// 0x734F80
namespace gamemd {
int E4Recv_734F80::sub_734F80()
{

  int result; // eax
  WinMain *v3; // [esp+0h] [ebp-4h]

  result = dword_B1CF60; /*0x734f80*/
  if ( (ObjectClass *)*(unsigned int *)&dword_B1CF60 != (ObjectClass *)this ) /*0x734f8a*/
  {
    WinMain::ShutdownCleanup(v3); /*0x734f8c*/
    dword_B1CF60 = (int)this; /*0x734f97*/
    return CSFClass::LoadFile((const char *)dword_B1CF68); /*0x734f9d*/
  }
  return result; /*0x734fa2*/

}
}
// 0x734FB0
namespace gamemd {
int sub_734FB0()
{
  return dword_B1CF84; /*0x734fb5*/
}
}
// 0x734FC0
namespace gamemd {
int sub_734FC0()
{
  return dword_B1CF60; /*0x734fc5*/
}
}
// 0x735120
namespace gamemd {
char * CharToWideString(unsigned char *a1)
{
  char *result; // eax
  int v2; // esi
  unsigned short *v3; // edx

  if ( !a1 ) /*0x735122*/
    return 0; /*0x735124*/
  result = (char *)&unk_B13F24 + 2048 * dword_B1CF94; /*0x735133*/
  v2 = 1024; /*0x73513b*/
  v3 = (unsigned short *)(result); /*0x735140*/
  while ( *a1 ) /*0x73512d*/
  {
    if ( !v2 ) /*0x735146*/
      break; /*0x735146*/
    *v3++ = (uint8_t)*a1++; /*0x73514c*/
    if ( v2 != -1 ) /*0x735156*/
      --v2; /*0x735158*/
  }
  *v3 = 0; /*0x73515e*/
  *((unsigned short *)result + 1023) = 0; /*0x735163*/
  dword_B1CF94 = ((unsigned char)dword_B1CF94 + 1) & 7; /*0x735179*/
  return result; /*0x735126*/
}
}
// 0x735370
namespace gamemd {
int sub_735370()
{
  dword_B1CFA8 = 0; /*0x735372*/
  dword_B1CFAC = 0; /*0x735377*/
  dword_B1CFB0 = 0; /*0x73537c*/
  dword_B1CFB4 = 0; /*0x735381*/
  return 0; /*0x735386*/
}
}
// 0x735390
namespace gamemd {
int sub_735390()
{
  dword_B1CFC0 = dword_B1CFA8; /*0x7353a1*/
  dword_B1CFC4 = dword_B1CFAC; /*0x7353ab*/
  dword_B1CFC8 = dword_B1CFB0; /*0x7353b1*/
  dword_B1CFCC = dword_B1CFB4; /*0x7353b7*/
  return dword_B1CFB4; /*0x7353bc*/
}
}
// 0x730660
namespace gamemd {
int unknown_libname_34()
{
  FileTree::CleanupAll(); /*0x730660*/
  return (unsigned int)LoadingScreen::LoadSHPs();
}
} // namespace gamemd

// 0x730740
namespace gamemd {
int sub_730740()
{
  return dword_A8EB84; /*0x730745*/
}
} // namespace gamemd

// 0x730750
namespace gamemd {
int sub_730750()
{
  return dword_A8EB88; /*0x730755*/
}
} // namespace gamemd

// 0x730760
namespace gamemd {
int sub_730760()
{
  dword_B0FDE0 = 0; /*0x730762*/
  dword_B0FDE4 = 0; /*0x730767*/
  dword_B0FDE8 = 0; /*0x73076c*/
  dword_B0FDEC = 0; /*0x730771*/
  return 0; /*0x730776*/
}
} // namespace gamemd

// 0x730780
namespace gamemd {
void sub_730780()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x73078c*/
  dbl_B0FDF8 = Math::Sqrt(v0 + v0); /*0x73079e*/
}
} // namespace gamemd

// 0x7307B0
namespace gamemd {
void sub_7307B0()
{
  dbl_B0FE48 = dbl_B0FDF8 / 60.0; /*0x7307bc*/
}
} // namespace gamemd

// 0x7307D0
namespace gamemd {
void sub_7307D0()
{
  dbl_B0FE30 = 1.0 / dbl_B0FE48; /*0x7307dc*/
}
} // namespace gamemd

// 0x7307F0
namespace gamemd {
void sub_7307F0()
{
  dbl_B0FE28 = 0.0174532925199433 * 45.0; /*0x7307fc*/
}
} // namespace gamemd

// 0x730810
namespace gamemd {
void sub_730810()
{
  dbl_B0FE00 = 0.0174532925199433 * 60.0; /*0x73081c*/
}
} // namespace gamemd

// 0x730830
namespace gamemd {
void sub_730830()
{
  dbl_B0FDD8 = 0.0174532925199433 * 90.0; /*0x73083c*/
}
} // namespace gamemd

// 0x730850
namespace gamemd {
long long sub_730850()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0FDD8 - dbl_B0FE00); /*0x730862*/
  result = Math::RoundToInt(v0 * dbl_B0FDF8 * 0.5); /*0x730876*/
  dword_B0FE50 = result; /*0x73087b*/
  return result; /*0x730880*/
}
} // namespace gamemd

// 0x730890
namespace gamemd {
void sub_730890()
{
  dbl_B0FE08 = Math::ArcTan((double)dword_B0FE50 * 0.00390625); /*0x7308a7*/
}
} // namespace gamemd

// 0x7308C0
namespace gamemd {
void sub_7308C0()
{
  dbl_B0FE20 = Math::ArcTan((double)(2 * dword_B0FE50) / dbl_B0FDF8); /*0x7308e2*/
}
} // namespace gamemd

// 0x7308F0
namespace gamemd {
long long sub_7308F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0FE50) + 0.5); /*0x73090b*/
  dword_B0FE44 = result; /*0x730910*/
  return result; /*0x730916*/
}
} // namespace gamemd

// 0x730920
namespace gamemd {
int sub_730920()
{
  word_B0FDF0 = 0; /*0x730922*/
  word_B0FDF2 = 0; /*0x730928*/
  return 0; /*0x73092e*/
}
} // namespace gamemd

// 0x730930
namespace gamemd {
int sub_730930()
{
  dword_B0FE10 = 0; /*0x730932*/
  dword_B0FE14 = 0; /*0x730937*/
  dword_B0FE18 = 0; /*0x73093c*/
  return 0; /*0x730941*/
}
} // namespace gamemd

// 0x730950
namespace gamemd {
int sub_730950()
{
  dword_B0FE40 = 0; /*0x730955*/
  dword_B0FE38 = 128; /*0x73095f*/
  dword_B0FE3C = 128; /*0x730964*/
  return 128; /*0x730969*/
}
} // namespace gamemd

// 0x730AD0
namespace gamemd {
int sub_730AD0()
{
  return 16454; /*0x730ad5*/
}
} // namespace gamemd

// 0x730AE0
namespace gamemd {
int sub_730AE0()
{
  return 240; /*0x730ae5*/
}
} // namespace gamemd

// 0x731A90
namespace gamemd {
int j_FactoryClass_GetFlag()
{
  return FactoryClass::GetFlag();
}
} // namespace gamemd

// 0x731BE0
namespace gamemd {
void sub_731BE0()
{
  byte_B0FE58 = 0; /*0x731be0*/
}
} // namespace gamemd

// 0x731D90
namespace gamemd {
wchar_t * FillUnitTooltipUI(wchar_t * Destination, wchar_t * Source)
{
  wchar_t *v2; // esi
  const wchar_t *v3; // ebp
  wchar_t *v4; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  wchar_t *String; // eax
  wchar_t *v12; // eax
  wchar_t Destinationa[100]; // [esp+10h] [ebp-C8h] BYREF

  v2 = Destination; /*0x731d9d*/
  if ( *(unsigned int *)(dword_B0FE6C + 16) && Source ) /*0x731db0*/
  {
    wcscpy( (wchar_t *)(Destinationa), (const wchar_t *)(Source)); /*0x731dbc*/
    _wcsupr(Destinationa); /*0x731dc6*/
    v3 = (const wchar_t *)(dword_A8ECC8); /*0x731dcb*/
    if ( dword_A8ECC8 ) /*0x731dd6*/
    {
      v6 = 0; /*0x731e08*/
      v7 = 0; /*0x731e0a*/
      if ( (int)dword_A8ECC8 > 0 ) /*0x731e0e*/
      {
        do /*0x731e4b*/
        {
          v8 = *((unsigned int *)dword_A8ECBC + v7); /*0x731e16*/
          if ( v8 ) /*0x731e1b*/
          {
            if ( (*(unsigned char *)(v8 + 20) & 1) != 0 ) /*0x731e27*/
            {
              v9 = *(unsigned int *)(v8 + 540); /*0x731e2b*/
              v10 = (*(int (**)(int))(*(unsigned int *)v8 + 136))(v8); /*0x731e31*/
              v6 += (*(int (**)(int, int))(*(unsigned int *)v10 + 132))(v10, v9); /*0x731e42*/
              v2 = Destination; /*0x731e44*/
            }
          }
          ++v7; /*0x731e48*/
        }
        while ( v7 < (int)v3 ); /*0x731e4b*/
      }
      String = (unsigned int)GetStringCSF( aMsgUnitsworth, 0, (const char *)(g_Str_File_UICmnds_cpp), 1052); /*0x731e65*/
      return (wchar_t *)swprintf(v2, (const size_t)String, v3, Destinationa, v6); /*0x731e6c*/
    }
    else
    {
      v4 = GetStringCSF( aMsgNounitssel, 0, (const char *)(g_Str_File_UICmnds_cpp), 1032); /*0x731dee*/
      return (wchar_t *)swprintf(v2, (const size_t)v4, Destinationa); /*0x731df5*/
    }
  }
  else
  {
    v12 = GetStringCSF( aMsgNavempty, 0, (const char *)(g_Str_File_UICmnds_cpp), 1022); /*0x731e90*/
    return wcscpy( (wchar_t *)(v2), (const wchar_t *)(v12)); /*0x731e97*/
  }
}
} // namespace gamemd

// 0x732110
namespace gamemd {
int sub_732110(int a1, int (__fastcall *)(unsigned int, int), int a3)
{
  int v4; // esi
  int v6; // ebx
  int result; // eax

  v4 = 0; /*0x732116*/
  v6 = *(unsigned int *)(a1 + 16); /*0x73211a*/
  if ( v6 > 0 ) /*0x73211f*/
  {
    do /*0x732130*/
      result = a2(*(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v4++), a3); /*0x73212b*/
    while ( v4 < v6 ); /*0x732130*/
  }
  return result; /*0x732132*/
}
} // namespace gamemd

// 0x732140
namespace gamemd {
int sub_732140(int a1, unsigned char (__fastcall *)(int, int), void (__fastcall *)(int, int), int a4, int a5)
{
  int result; // eax
  int v7; // edi
  int v9; // esi
  int i; // [esp+Ch] [ebp-4h]

  result = *(unsigned int *)(a1 + 16); /*0x732146*/
  v7 = 0; /*0x732149*/
  for ( i = result; v7 < i; ++v7 ) /*0x732153*/
  {
    v9 = *(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v7); /*0x73215d*/
    if ( a2(v9, a4) ) /*0x732162*/
      a3(v9, a5); /*0x73216e*/
    result = i; /*0x732172*/
  }
  return result; /*0x73217c*/
}
} // namespace gamemd

// 0x732190
namespace gamemd {
char sub_732190(int a1, unsigned char (__fastcall *)(unsigned int, int), int a3)
{
  int v4; // esi
  int v6; // ebp

  v4 = 0; /*0x732196*/
  v6 = *(unsigned int *)(a1 + 16); /*0x73219a*/
  if ( v6 <= 0 ) /*0x73219f*/
    return 1; /*0x7321b6*/
  while ( a2(*(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v4), a3) ) /*0x7321af*/
  {
    if ( ++v4 >= v6 ) /*0x7321b4*/
      return 1; /*0x7321b4*/
  }
  return 0; /*0x7321b6*/
}
} // namespace gamemd

// 0x7321D0
namespace gamemd {
char sub_7321D0(int a1, unsigned char (__fastcall *)(unsigned int, int), int a3)
{
  int v4; // esi
  int v6; // ebp

  v4 = 0; /*0x7321d6*/
  v6 = *(unsigned int *)(a1 + 16); /*0x7321da*/
  if ( v6 <= 0 ) /*0x7321df*/
    return 0; /*0x7321f6*/
  while ( !a2(*(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v4), a3) ) /*0x7321ef*/
  {
    if ( ++v4 >= v6 ) /*0x7321f4*/
      return 0; /*0x7321f4*/
  }
  return 1; /*0x7321f6*/
}
} // namespace gamemd

// 0x7325C0
namespace gamemd {
BOOL AbstractClass::sub_7325C0()
{

  return (*((int (**)(ObjectClass *))this->vtable1 + 11))(this) != 6 /*0x7325f4*/
      && *(unsigned char *)((*((int (**)(ObjectClass *))this->vtable1 + 33))(this) + 3516)
      && (*((uint8_t (**)(ObjectClass *))this->vtable1 + 79))(this);

}
} // namespace gamemd

// 0x732C30
namespace gamemd {
char IDTechnoClassMatches(ObjectClass * a1, int a2)
{
  int v3; // ebp
  int v4; // edi

  v3 = *(unsigned int *)(a2 + 16); /*0x732c35*/
  v4 = 0; /*0x732c39*/
  if ( v3 <= 0 ) /*0x732c3f*/
    return 0; /*0x732c8a*/
  while ( !(uint8_t)((ObjectClass *)(a1))->StepCleanup(*(void **)(*(unsigned int *)(a2 + 4) + 4 * v4)) /*0x732c83*/
       || !(*((uint8_t (**)(ObjectClass *))a1->vtable1 + 79))( (ObjectClass *)(a1))
       && (!a1
        || (*((int (**)(ObjectClass *))a1->vtable1 + 11))( (ObjectClass *)(a1)) != 6
        || !*(unsigned int *)((*((int (**)(ObjectClass *))a1->vtable1 + 33))( (ObjectClass *)(a1)) + 1032)) )
  {
    if ( ++v4 >= v3 ) /*0x732c88*/
      return 0; /*0x732c88*/
  }
  return 1; /*0x732c8a*/
}
} // namespace gamemd

// 0x734430
namespace gamemd {
void sub_734430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x73443c*/
  dbl_B11E98 = Math::Sqrt(v0 + v0); /*0x73444e*/
}
} // namespace gamemd

// 0x734460
namespace gamemd {
void sub_734460()
{
  dbl_B1CF50 = dbl_B11E98 / 60.0; /*0x73446c*/
}
} // namespace gamemd

// 0x734480
namespace gamemd {
void sub_734480()
{
  dbl_B1CF38 = 1.0 / dbl_B1CF50; /*0x73448c*/
}
} // namespace gamemd

// 0x7344A0
namespace gamemd {
void sub_7344A0()
{
  dbl_B1BF30 = 0.0174532925199433 * 45.0; /*0x7344ac*/
}
} // namespace gamemd

// 0x7344C0
namespace gamemd {
void sub_7344C0()
{
  dbl_B12EA0 = 0.0174532925199433 * 60.0; /*0x7344cc*/
}
} // namespace gamemd

// 0x7344E0
namespace gamemd {
void sub_7344E0()
{
  dbl_B0FE78 = 0.0174532925199433 * 90.0; /*0x7344ec*/
}
} // namespace gamemd

// 0x734500
namespace gamemd {
long long sub_734500()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0FE78 - dbl_B12EA0); /*0x734512*/
  result = Math::RoundToInt(v0 * dbl_B11E98 * 0.5); /*0x734526*/
  dword_B1CF5C = result; /*0x73452b*/
  return result; /*0x734530*/
}
} // namespace gamemd

// 0x734540
namespace gamemd {
void sub_734540()
{
  dbl_B13EA8 = Math::ArcTan((double)dword_B1CF5C * 0.00390625); /*0x734557*/
}
} // namespace gamemd

// 0x734570
namespace gamemd {
void sub_734570()
{
  dbl_B1BF28 = Math::ArcTan((double)(2 * dword_B1CF5C) / dbl_B11E98); /*0x734592*/
}
} // namespace gamemd

// 0x7345A0
namespace gamemd {
long long sub_7345A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1CF5C) + 0.5); /*0x7345bb*/
  dword_B1CF4C = result; /*0x7345c0*/
  return result; /*0x7345c6*/
}
} // namespace gamemd

// 0x7345D0
namespace gamemd {
int sub_7345D0()
{
  word_B0FE90 = 0; /*0x7345d2*/
  word_B0FE92 = 0; /*0x7345d8*/
  return 0; /*0x7345de*/
}
} // namespace gamemd

// 0x7345E0
namespace gamemd {
int sub_7345E0()
{
  *(unsigned int *)&((unsigned char *)&byte_B13EB0)[104] = 0; /*0x7345e2*/
  *(unsigned int *)&((unsigned char *)&byte_B13EB0)[108] = 0; /*0x7345e7*/
  *(unsigned int *)&((unsigned char *)&byte_B13EB0)[112] = 0; /*0x7345ec*/
  return 0; /*0x7345f1*/
}
} // namespace gamemd

// 0x734600
namespace gamemd {
int sub_734600()
{
  dword_B1CF48 = 0; /*0x734605*/
  dword_B1CF40 = 128; /*0x73460f*/
  dword_B1CF44 = 128; /*0x734614*/
  return 128; /*0x734619*/
}
} // namespace gamemd

// 0x734620
namespace gamemd {
int sub_734620()
{
  dword_B0FE80 = 0; /*0x734622*/
  dword_B0FE84 = 0; /*0x734627*/
  dword_B0FE88 = 0; /*0x73462c*/
  dword_B0FE8C = 0; /*0x734631*/
  return 0; /*0x734636*/
}
} // namespace gamemd

// 0x734FE0
namespace gamemd {
int WideMessageBox(CampaignScore * aP0, const WCHAR * a1, LPCWCH lpWideCharStr, UINT uType)
{
  CHAR Caption[2048]; // [esp+8h] [ebp-1C00h] BYREF
  CHAR MultiByteStr[5120]; // [esp+808h] [ebp-1400h] BYREF

  WideCharToMultiByte( 0, 0, (LPCWCH)(a1), -1, (LPSTR)(MultiByteStr), 5120, 0, 0); /*0x73500c*/
  WideCharToMultiByte( 0, 0, (LPCWCH)(lpWideCharStr), -1, (LPSTR)(Caption), 2048, 0, 0); /*0x73502a*/
  return MessageBoxA((HWND)(aP0), MultiByteStr, Caption, uType); /*0x735048*/
}
} // namespace gamemd

// 0x735060
namespace gamemd {
unsigned char CharToWide_Bulk(unsigned short * a1, unsigned char * a2, int a3)
{
  uint8_t result; // al

  for ( result = *a2; *a2; result = *a2 ) /*0x735060*/
  {
    if ( !a3 ) /*0x73506d*/
      break; /*0x73506d*/
    *a1++ = result; /*0x735073*/
    ++a2; /*0x735079*/
    if ( a3 != -1 ) /*0x73507d*/
      --a3; /*0x73507f*/
  }
  *a1 = 0; /*0x735086*/
  return result; /*0x73508b*/
}
} // namespace gamemd

// 0x735090
namespace gamemd {
int WideToChar_Copy(unsigned char * a1, char * a2, int a3)
{
  int result; // eax

  while ( *(unsigned short *)a2 ) /*0x735090*/
  {
    if ( !a3 ) /*0x73509d*/
      break; /*0x73509d*/
    IDA_LOBYTE(result) = *a2; /*0x73509f*/
    a2 += 2; /*0x7350a1*/
    *a1++ = result; /*0x7350a4*/
    if ( a3 != -1 ) /*0x7350aa*/
      --a3; /*0x7350ac*/
  }
  *a1 = 0; /*0x7350b3*/
  return result; /*0x7350b6*/
}
} // namespace gamemd

// 0x7350C0
namespace gamemd {
char * ToWideStringChar(IUnknown * aP0)
{
  char *result; // eax
  int v2; // edi
  unsigned char *v3; // esi
  char v4; // dl

  if ( !aP0 ) /*0x7350c2*/
    return 0; /*0x7350c4*/
  result = (char *)&unk_B0FE94 + 1024 * dword_B1CF90; /*0x7350d0*/
  v2 = 1024; /*0x7350da*/
  v3 = (unsigned char *)(result); /*0x7350df*/
  while ( *(unsigned short *)aP0 ) /*0x7350d5*/
  {
    if ( !v2 ) /*0x7350e5*/
      break; /*0x7350e5*/
    v4 = *aP0; /*0x7350e7*/
    aP0 += 2; /*0x7350e9*/
    *v3++ = v4; /*0x7350ec*/
    if ( v2 != -1 ) /*0x7350f2*/
      --v2; /*0x7350f4*/
  }
  *v3 = 0; /*0x7350fb*/
  result[1023] = 0; /*0x7350fe*/
  dword_B1CF90 = ((unsigned char)dword_B1CF90 + 1) & 7; /*0x735111*/
  return result; /*0x7350c6*/
}
} // namespace gamemd

// 0x735180
namespace gamemd {
void sub_735180()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x73518c*/
  dbl_B1CFD0 = Math::Sqrt(v0 + v0); /*0x73519e*/
}
} // namespace gamemd

// 0x7351B0
namespace gamemd {
void sub_7351B0()
{
  dbl_B1D0B0 = dbl_B1CFD0 / 60.0; /*0x7351bc*/
}
} // namespace gamemd

// 0x7351D0
namespace gamemd {
void sub_7351D0()
{
  dbl_B1D008 = 1.0 / dbl_B1D0B0; /*0x7351dc*/
}
} // namespace gamemd

// 0x7351F0
namespace gamemd {
void sub_7351F0()
{
  dbl_B1D000 = 0.0174532925199433 * 45.0; /*0x7351fc*/
}
} // namespace gamemd

// 0x735210
namespace gamemd {
void sub_735210()
{
  dbl_B1CFD8 = 0.0174532925199433 * 60.0; /*0x73521c*/
}
} // namespace gamemd

// 0x735230
namespace gamemd {
void sub_735230()
{
  dbl_B1CFA0 = 0.0174532925199433 * 90.0; /*0x73523c*/
}
} // namespace gamemd

// 0x735250
namespace gamemd {
long long sub_735250()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1CFA0 - dbl_B1CFD8); /*0x735262*/
  result = Math::RoundToInt(v0 * dbl_B1CFD0 * 0.5); /*0x735276*/
  dword_B1D0B8 = result; /*0x73527b*/
  return result; /*0x735280*/
}
} // namespace gamemd

// 0x735290
namespace gamemd {
void sub_735290()
{
  dbl_B1CFE0 = Math::ArcTan((double)dword_B1D0B8 * 0.00390625); /*0x7352a7*/
}
} // namespace gamemd

// 0x7352C0
namespace gamemd {
void sub_7352C0()
{
  dbl_B1CFF8 = Math::ArcTan((double)(2 * dword_B1D0B8) / dbl_B1CFD0); /*0x7352e2*/
}
} // namespace gamemd

// 0x7352F0
namespace gamemd {
long long sub_7352F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D0B8) + 0.5); /*0x73530b*/
  dword_B1D0AC = result; /*0x735310*/
  return result; /*0x735316*/
}
} // namespace gamemd

// 0x735320
namespace gamemd {
int sub_735320()
{
  g_UnitSelectionState = 0; /*0x735322*/
  return 0; /*0x73532e*/
}
} // namespace gamemd

// 0x735330
namespace gamemd {
int sub_735330()
{
  dword_B1CFE8 = 0; /*0x735332*/
  dword_B1CFEC = 0; /*0x735337*/
  dword_B1CFF0 = 0; /*0x73533c*/
  return 0; /*0x735341*/
}
} // namespace gamemd

// 0x735350
namespace gamemd {
int sub_735350()
{
  dword_B1D0A8 = 0; /*0x735355*/
  dword_B1D0A0 = 128; /*0x73535f*/
  dword_B1D0A4 = 128; /*0x735364*/
  return 128; /*0x735369*/
}
} // namespace gamemd

// 0x736C10
namespace gamemd {
char ObjectClass::sub_736C10()
{

  int v2; // eax
  unsigned int v4[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(int (**)(TechnoClass *))(this->vtable1 + 388))(this) != 5 ) /*0x736c21*/
    return 0; /*0x736c21*/
  v4[0] = this->location[0]; /*0x736c2f*/
  v4[1] = this->location[1]; /*0x736c3b*/
  v4[2] = this->location[2]; /*0x736c42*/
  if ( (uint8_t)((Tactical *)&dword_87F7E8)->IsCellVisible((unsigned int *)(v4)) || !this->isInPlayfield[0] ) /*0x736c54*/
    return 0; /*0x736c8a*/
  v2 = *((unsigned int *)this + 373); /*0x736c5e*/
  if ( v2 ) /*0x736c66*/
    *(unsigned char *)(v2 + 130) = 1; /*0x736c68*/
  (*(void (**)(TechnoClass *))(this->vtable1 + 928))(this); /*0x736c73*/
  (*(void (**)(TechnoClass *))(this->vtable1 + 248))(this); /*0x736c7d*/
  return 1; /*0x736c85*/

}
} // namespace gamemd

// 0x7393B0
namespace gamemd {
void nullsub_248()
{
  ; /*0x7393b0*/
}
} // namespace gamemd
