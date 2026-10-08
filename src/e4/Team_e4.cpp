// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ScoreText_e4.hpp"
#include "e4/classes/BuildingLoadQueue_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

#include "e4/classes/E4Recv_597430_e4.hpp"
#include "e4/classes/E4Recv_6342E0_e4.hpp"
#include "e4/classes/E4Recv_634B20_e4.hpp"
#include "e4/classes/E4Recv_637640_e4.hpp"
#include "e4/classes/E4Recv_63B050_e4.hpp"
#include "e4/classes/E4Recv_63E5D0_e4.hpp"
#include "e4/classes/E4Recv_6550C0_e4.hpp"
#include "e4/classes/E4Recv_65FB80_e4.hpp"
#include "e4/classes/E4Recv_6EF470_e4.hpp"
#include "e4/classes/E4Recv_6F2230_e4.hpp"
#include "e4/classes/E4Recv_6F25E0_e4.hpp"
#include "e4/classes/E4Recv_6F26E0_e4.hpp"
#include "e4/classes/E4Recv_6F2780_e4.hpp"
#include "e4/classes/E4Recv_6F27F0_e4.hpp"
#include "e4/classes/E4Recv_750060_e4.hpp"
#include "e4/classes/E4Recv_764FA0_e4.hpp"
#include "e4/classes/E4Recv_765410_e4.hpp"
#include "e4/classes/E4Recv_765C90_e4.hpp"
#include "e4/classes/E4Recv_76E430_e4.hpp"
#include "e4/classes/E4Recv_76E750_e4.hpp"
#include "e4/classes/E4Recv_7AF500_e4.hpp"
#include "e4/classes/E4Recv_7B0490_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/E4Recv_76C290_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/BuildingLoadQueue_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/ScoreText_e4.hpp"
#include "e4/classes/StaticString_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/Game_e4.hpp"  // G42.36 C2027 supply
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int ConstructWDTSelection(...);  // raw 0076C290: int __thiscall ConstructWDTSelection(int this, int a2, int a3)
    int Network_Process_6E7C20(...);  // raw 006E7C20: void *__thiscall Network_Process_6E7C20(ObjectClass *this)
    int ProcessGraphicMenu(...);  // raw 004F2300: int __thiscall ProcessGraphicMenu(int this)
    int SelectionInitializeWOL(...);  // raw 0076C6E0: int __thiscall SelectionInitializeWOL(int this)
    int ShowWDTTerritorySelection(...);  // raw 0076CDA0: _DWORD *__thiscall ShowWDTTerritorySelection(TechnoClass *this, _DWORD *a2)
    int Team_Start_76E2F0(...);  // raw 0076E2F0: char *__userpurge Team_Start_76E2F0@<eax>(int this@<ecx>, DeleteAndZero a2)
    int Team_Start_76E750(...);  // raw 0076E750: _DWORD *__thiscall Team_Start_76E750(int this, int a2)
} // namespace gamemd

// 0x561180
namespace gamemd {
char Team_Start(void * a1, void * a2, void * a3, void * a4)
{
  unsigned int v4; // ecx
  unsigned int v6; // esi
  char result; // al
  Dialog *Dialog; // edi
  TechnoTypeClass *v9; // ecx
  int v10; // esi
  int v11; // eax
  void * v12;
  int v13; // [esp+0h] [ebp-2Ch]
  int v14; // [esp+0h] [ebp-2Ch]
  int v15; // [esp+4h] [ebp-28h]
  int v16; // [esp+4h] [ebp-28h]
  int *v17; // [esp+8h] [ebp-24h]
  int *v18; // [esp+8h] [ebp-24h]
  LONG dwNewLong; // [esp+Ch] [ebp-20h] BYREF
  unsigned int v20; // [esp+10h] [ebp-1Ch]
  int Ticks; // [esp+14h] [ebp-18h]
  int v22; // [esp+18h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+20h] [ebp-Ch]
  int v25; // [esp+24h] [ebp-8h]
  int v26; // [esp+28h] [ebp-4h]

  v6 = v4; /*0x561188*/
  v20 = v4; /*0x561191*/
  dwNewLong = -1; /*0x561195*/
    Debug::Log("Testing display mode @ %dx%d\n") /*G57c1: IDA 0x56119d push offset aTestingDisplay*/;
  (*(void (**)(void *))((void *)(*(unsigned int *)&((MouseClass *)dword_887640)->q_30)))(dword_887640);  /*0x5611ad*/
  (*((void (**)(ObjectClass *, unsigned int))g_DSurface_Hidden->vtable1 + 6))( (ObjectClass *)(g_DSurface_Hidden), 0); /*0x5611ba*/
  Frame::Present( (void *)((int)g_DSurface_Hidden), (void *)(a3), (void *)(yBottom), (void *)(a4), 0, (void *)(v13), (void *)(v15), (void *)(v17)); /*0x5611c7*/
  result = ChangeVideoMode(v6, yBottom); /*0x5611d0*/
  if ( result ) /*0x5611d7*/
  {
    (*((void (**)(ObjectClass *, unsigned int))g_DSurface_Hidden->vtable1 + 6))( (ObjectClass *)(g_DSurface_Hidden), 0); /*0x5611ea*/
    Frame::Present( (void *)((int)g_DSurface_Hidden), (void *)(a3), (void *)(yBottom), (void *)(a4), 0, (void *)(v14), (void *)(v16), (void *)(v18)); /*0x5611f7*/
    (*(void (**)(void *))((void *)(*(unsigned int *)&((MouseClass *)dword_887640)->q_40)))(dword_887640);  /*0x561204*/
    Screen::Capture( 1, 0, (int)(a3), yBottom); /*0x56120b*/
    Dialog = (Dialog *)CreateDialog(0xD9u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_561350, 0); /*0x561221*/
    if ( !Dialog ) /*0x561225*/
      goto LABEL_13; /*0x561225*/
    v12 = a3; /*0x56122f*/
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x561234*/
    ((gamemd::Dialog *)(Dialog))->Show(); /*0x56123c*/
        Ticks = ((Timer *)0)->GetTicks();
    v23 = 600; /*0x561254*/
    while ( dwNewLong < 0 ) /*0x56125c*/
    {
            if ( ((gamemd::Dialog *)0)->PumpMessages() == 1 )
        break; /*0x56126b*/
      IDA_LOBYTE(v9) = 0; /*0x56126d*/
      Process(v9, v12); /*0x56126f*/
      v10 = v23; /*0x561278*/
      if ( Ticks != -1 ) /*0x56127f*/
      {
                v10 = ((Timer *)0)->GetTicks() - Ticks;
        if ( v11 >= v10 ) /*0x561290*/
          goto LABEL_9; /*0x561290*/
        v10 -= v11; /*0x561292*/
      }
      if ( v10 <= 0 ) /*0x561296*/
      {
    unsigned int v21 = 0;  /* G37 hoist */
  LABEL_9:
        PostMessageA((HWND)Dialog, 0x111u, 0x6CAu, 0); /*0x561298*/
                v21 = ((Timer *)0)->GetTicks();
        v26 = 300; /*0x5612bd*/
        Ticks = v24; /*0x5612c1*/
        v22 = v25; /*0x5612c5*/
        v23 = 300; /*0x5612c9*/
      }
    }
    ((Dialog*)Dialog)->Destroy(); /*0x5612d7*/
    if ( dwNewLong == 1 ) /*0x5612e4*/
    {
  LABEL_13:
            Debug::Log("Keeping display mode @ %dx%d\n") /*G57c1: IDA 0x561331 push offset aKeepingDisplay*/;
      g_DSurface_Hidden_2 = (int)((AudioStream *)g_DSurface_Hidden);
      return 1; /*0x561343*/
    }
    else
    {
            Debug::Log("Resetting display mode @ %dx%d\n") /*G57c1: IDA 0x5612f8 push offset aResettingDispl*/;
      ChangeVideoMode(stru_A8EB00.ObjectTypeClass[33], stru_A8EB00.ObjectTypeClass[34]); /*0x56130c*/
      g_DSurface_Hidden_2 = (int)((AudioStream *)g_DSurface_Hidden); /*0x56131b*/
      return 0; /*0x561317*/
    }
  }
  return result; /*0x5611d9*/
}
}
// 0x5D26C0
namespace gamemd {
int Team::ReleaseAll(ObjectClass * aP1)
{

  int v3; // esi
  int result; // eax
  int v5; // ecx

  v3 = 0; /*0x5d26c4*/
  result = *(unsigned int *)&this->__pad_0[40]; /*0x5d26c6*/
  if ( result > 0 ) /*0x5d26cb*/
  {
    do /*0x5d26e4*/
    {
      v5 = *(unsigned int *)(*(unsigned int *)&this->__pad_0[28] + 4 * v3); /*0x5d26d6*/
      (*(void (**)(int, int))(*(unsigned int *)v5 + 32))( v5, (int)(aP1)); /*0x5d26db*/
      result = *(unsigned int *)&this->__pad_0[40]; /*0x5d26de*/
      ++v3; /*0x5d26e1*/
    }
    while ( v3 < result ); /*0x5d26e4*/
  }
  return result; /*0x5d26e7*/

}
}
// 0x6219D0
namespace gamemd {
int sub_6219D0(int * a1, int a2, int a3, int a4)
{
  int v5; // edi
  int result; // eax
  int v7; // eax
  int v8; // edx
  int v9; // kr00_4
  int v11; // ebp
  int v12; // ecx
  int v13; // edi
  int v14; // ebx
  int v15; // edx
  unsigned short *v16; // ecx
  int v17; // ebp
  int v18; // ebx
  int v19; // ebx
  int v20; // ebp
  int v21; // edi
  int v22; // edx
  unsigned short *v23; // ecx
  int v24; // ebp
  int v25; // [esp+8h] [ebp-14h]
  int v26; // [esp+8h] [ebp-14h]
  int v27; // [esp+Ch] [ebp-10h]
  int v29; // [esp+20h] [ebp+4h]
  int v30; // [esp+20h] [ebp+4h]

  v5 = a2; /*0x6219d7*/
  result = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)a2 + 92))(a2, 0, 0); /*0x6219e7*/
  v27 = result; /*0x6219ec*/
  if ( result ) /*0x6219f0*/
  {
    v7 = (*(int (**)(int))(*(unsigned int *)v5 + 116))(v5); /*0x6219fc*/
    v8 = a1[1]; /*0x621a05*/
    v9 = v7; /*0x621a0a*/
    v11 = v9 / 2; /*0x621a12*/
    v25 = v8; /*0x621a1a*/
    if ( v8 < a1[3] + v8 ) /*0x621a1e*/
    {
      v12 = v11 * v8; /*0x621a26*/
      v29 = v11 * v8; /*0x621a29*/
      do /*0x621aaf*/
      {
        v13 = *a1; /*0x621a2d*/
        v14 = *a1 + a3; /*0x621a36*/
        if ( v13 < v13 + a3 ) /*0x621a3b*/
        {
          IDA_HIWORD(v15) = IDA_HIWORD(v27); /*0x621a3d*/
          v16 = (unsigned short *)(v27 + 2 * (v12 + *a1)); /*0x621a45*/
          do /*0x621a8c*/
          {
            IDA_LOWORD(v15) = *v16++; /*0x621a4f*/
            IDA_LOWORD(v11) = IDA_HIWORD(g_ScreenSaverState) & (IDA_HIWORD(g_ScreenSaverState) >> 1); /*0x621a5b*/
            IDA_LOWORD(v14) = (uint16_t)g_ScreenSaverState >> 1; /*0x621a65*/
            v14 &= g_ScreenSaverState; /*0x621a68*/
            IDA_LOWORD(v15) = (uint16_t)v15 >> 1; /*0x621a6e*/
            v17 = v14 | v11; /*0x621a71*/
            IDA_LOWORD(v14) = (uint16_t)g_CreditsScreenState >> 1; /*0x621a7a*/
            v11 = v15 & (v14 | v17); /*0x621a7f*/
            ++v13; /*0x621a81*/
            *(v16 - 1) = v11; /*0x621a82*/
            v15 = a3 + *a1; /*0x621a88*/
          }
          while ( v13 < v15 ); /*0x621a8c*/
          v8 = v25; /*0x621a8e*/
          v11 = v9 / 2; /*0x621a92*/
          v12 = v29; /*0x621a96*/
        }
        ++v8; /*0x621aa0*/
        v12 += v11; /*0x621aa3*/
        v25 = v8; /*0x621aa7*/
        v29 = v12; /*0x621aab*/
      }
      while ( v8 < a1[3] + a1[1] ); /*0x621aaf*/
      v5 = a2; /*0x621ab5*/
    }
    v18 = a1[1]; /*0x621ab9*/
    v26 = v18; /*0x621ac0*/
    if ( v18 < v18 + a4 ) /*0x621ac9*/
    {
      v19 = v11 * v18; /*0x621acf*/
      v30 = v19; /*0x621ad2*/
      do /*0x621b59*/
      {
        v20 = *a1 + a1[2]; /*0x621adb*/
        v21 = *a1 + a3; /*0x621ae0*/
        v22 = a3 + v19 + *a1; /*0x621ae3*/
        if ( v21 < v20 ) /*0x621ae7*/
        {
          v23 = (unsigned short *)(v27 + 2 * v22); /*0x621aed*/
          do /*0x621b35*/
          {
            IDA_LOWORD(v22) = *v23++; /*0x621af7*/
            IDA_LOWORD(v20) = IDA_HIWORD(g_ScreenSaverState) & (IDA_HIWORD(g_ScreenSaverState) >> 1); /*0x621b03*/
            IDA_LOWORD(v19) = (uint16_t)g_ScreenSaverState >> 1; /*0x621b0d*/
            v19 &= g_ScreenSaverState; /*0x621b10*/
            IDA_LOWORD(v22) = (uint16_t)v22 >> 1; /*0x621b16*/
            v24 = v19 | v20; /*0x621b19*/
            IDA_LOWORD(v19) = (uint16_t)g_CreditsScreenState >> 1; /*0x621b22*/
            v20 = v22 & (v19 | v24); /*0x621b27*/
            ++v21; /*0x621b29*/
            *(v23 - 1) = v20; /*0x621b2a*/
            v22 = *a1 + a1[2]; /*0x621b31*/
          }
          while ( v21 < v22 ); /*0x621b35*/
          v19 = v30; /*0x621b37*/
        }
        v19 += v9 / 2; /*0x621b47*/
        ++v26; /*0x621b4f*/
        v30 = v19; /*0x621b55*/
      }
      while ( v26 < a4 + a1[1] ); /*0x621b59*/
      v5 = a2; /*0x621b5f*/
    }
    return (*(int (**)(int))(*(unsigned int *)v5 + 96))(v5); /*0x621b67*/
  }
  return result; /*0x621b6c*/
}
}
// 0x634B20
namespace gamemd {
Game * * E4Recv_634B20::sub_634B20()
{

  ObjectClass * v2;
  unsigned char *v3; // esi
  int uniqueId; // edx
  int v5; // ecx
  unsigned int *v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // ebp
  unsigned char *v10; // eax
  int v11; // esi
  int i; // [esp+10h] [ebp-90h]
  ObjectClass *nextObject; // [esp+14h] [ebp-8Ch]
  int v14; // [esp+18h] [ebp-88h]
  int j; // [esp+18h] [ebp-88h]
  unsigned int v16[2]; // [esp+1Ch] [ebp-84h] BYREF
  unsigned int v17[3]; // [esp+24h] [ebp-7Ch] BYREF
  unsigned short v18[56]; // [esp+30h] [ebp-70h] BYREF

  v2 = (gamemd::ObjectClass *)((int)((gamemd::ObjectClass *)(0)));
  nextObject = (gamemd::ObjectClass *)(this->nextObject);
  if ( (int)nextObject > 0 ) /*0x634b37*/
  {
    do /*0x634bf7*/
    {
      v3 = *(unsigned char **)(this->occupant + 4 * v2); /*0x634b48*/
      qmemcpy( (void *)(v18), (const void *)(v3), 0x6Cu); /*0x634b57*/
      v3 += 108; /*0x634b57*/
      v18[54] = *(unsigned short *)v3; /*0x634b59*/
      LOBYTE(v18[55]) = v3[2]; /*0x634b5f*/
      GetScenarioClassActionCoords( (unsigned int *)(v17), (unsigned char *)(v18)); /*0x634b60*/
      Debug::Log("Branch [%d];  Member count[%d];  Origin event location[%d, %d, %d]\n"); /*0x634b7d G57c1: IDA 0x634b7d push offset aBranchDMemberC*/
      uniqueId = ((unsigned int *)this)[0]; /*0x634b82*/
      v5 = 0; /*0x634b88*/
      v14 = uniqueId; /*0x634b8a*/
      for ( i = 0; v5 < uniqueId; i = v5 ) /*0x634b94*/
      {
        v6 = (unsigned int *)*((unsigned int *)((unsigned int *)this)[0] + v5); /*0x634b99*/
        if ( v6[2] == (unsigned int)(v2) ) /*0x634b9f*/
        {
          v7 = *v6; /*0x634ba1*/
          (*(int (**)(unsigned int))(*(unsigned int *)*v6 + 136))(*v6); /*0x634ba7*/
          v16[1] = *(unsigned int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)v7 + 440))( v7, (unsigned int *)(v16)); /*0x634bc3*/
          Debug::Log("  Member [%s];  Cell location[%d, %d]\n"); /*0x634bd7 G57c1: IDA 0x634bd7 push offset aMemberSCellLoc*/
          v5 = i; /*0x634bdc*/
          uniqueId = v14; /*0x634be0*/
        }
        ++v5; /*0x634be7*/
      }
      ++v2; /*0x634bf4*/
    }
    while ( v2 < (gamemd::ObjectClass *)(int)nextObject ); /*0x634bf7*/
  }
  if ( (int)this->lineTrailer > 0 ) /*0x634c05*/
  {
    qmemcpy( (void *)(v18), (const void *)(&this->attachedBomb), 0x6Fu); /*0x634c1b*/
    GetScenarioClassActionCoords( (unsigned int *)(v17), (unsigned char *)(v18)); /*0x634c24*/
    Debug::Log("Loop Branch [%d];  Member count[%d];  Origin event location[%d, %d, %d]\n"); /*0x634c43 G57c1: IDA 0x634c43 push offset aLoopBranchDMem*/
    v8 = ((unsigned int *)this)[0]; /*0x634c48*/
    v9 = 0; /*0x634c4e*/
    for ( j = v8; v9 < v8; ++v9 ) /*0x634c56*/
    {
      v10 = (unsigned char *)*((unsigned int *)((unsigned int *)this)[0] + v9); /*0x634c5b*/
      if ( v10[12] ) /*0x634c5e*/
      {
        v11 = *(unsigned int *)v10; /*0x634c65*/
        (*(int (**)(unsigned int))(**(unsigned int **)v10 + 136))(*(unsigned int *)v10); /*0x634c6b*/
        (*(int (**)(int, unsigned int *))(*(unsigned int *)v11 + 440))( v11, (unsigned int *)(v16)); /*0x634c7f*/
        Debug::Log("  Member [%s];  Cell location[%d, %d]\n"); /*0x634c9b G57c1: IDA 0x634c9b push offset aMemberSCellLoc*/
        v8 = j; /*0x634ca0*/
      }
    }
  }

}
}
// 0x637640
namespace gamemd {
void ** E4Recv_637640::sub_637640()
{

  int v1; // eax
  int v2; // eax
  int v3; // eax
  void **result; // eax
  ObjectClass *v5; // [esp+Ch] [ebp-4h] BYREF
  void *retaddr; // [esp+10h] [ebp+0h] BYREF

  v5 = (gamemd::ObjectClass *)(this);
v1 = (*(int (**)(char *, ObjectClass **))(*(unsigned int *)&stru_AC4B30.__pad_EC[124] + 16))((char *)(/*0x637655*/ &stru_AC4B30.__pad_EC[124]), (ObjectClass **)(&v5));


  if ( v1 != -1 && v1 < *(int *)&stru_AC4B30.__pad_EC[140] ) /*0x637665*/
  {
    --*(unsigned int *)&stru_AC4B30.__pad_EC[140]; /*0x63766a*/
    for ( ; /*0x637670*/
          v1 < *(int *)&stru_AC4B30.__pad_EC[140];
          *(unsigned int *)(*(unsigned int *)&stru_AC4B30.__pad_EC[128] + 4 * v1 - 4) = *(unsigned int *)(*(unsigned int *)&stru_AC4B30.__pad_EC[128]
                                                                                      + 4 * v1) )
    {
      ++v1; /*0x637678*/
    }
  }
  v2 = (*(int (**)(Array *, void **))(*(unsigned int *)stru_AC4B30.__pad_0 + 16))( (Array *)(&stru_AC4B30), (void **)(&retaddr)); /*0x63769a*/
  if ( v2 != -1 && v2 < (int)stru_AC4B30.Array_field_0x10 ) /*0x6376aa*/
  {
    --stru_AC4B30.Array_field_0x10; /*0x6376af*/
    for ( ; /*0x6376b5*/
          v2 < (int)stru_AC4B30.Array_field_0x10;
          *((unsigned int *)stru_AC4B30.Array_field_0x4 + v2 - 1) = *((unsigned int *)stru_AC4B30.Array_field_0x4 + v2) )
    {
      ++v2; /*0x6376bd*/
    }
  }
  v5 = (ObjectClass *)&retaddr; /*0x6376d9*/
  v3 = (*((int (**)(void **))stru_AC4B30.Array_field_0xE8 + 4))( (void **)(&stru_AC4B30.Array_field_0xE8)); /*0x6376df*/
  if ( v3 != -1 && v3 < *(int *)&stru_AC4B30.__pad_EC[12] ) /*0x6376ef*/
  {
    --*(unsigned int *)&stru_AC4B30.__pad_EC[12]; /*0x6376f4*/
    for ( ; /*0x6376fa*/
          v3 < *(int *)&stru_AC4B30.__pad_EC[12];
          *(unsigned int *)(*(unsigned int *)stru_AC4B30.__pad_EC + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)stru_AC4B30.__pad_EC
                                                                                + 4 * v3) )
    {
      ++v3; /*0x637702*/
    }
  }
  result = (void **)v5; /*0x637714*/
  if ( *(ObjectClass **)&stru_AC4B30.__pad_EC[176] == v5 ) /*0x637722*/
    *(unsigned int *)&stru_AC4B30.__pad_EC[176] = 0; /*0x637724*/
  if ( *(ObjectClass **)&stru_AC4B30.__pad_EC[28] == v5 ) /*0x637730*/
    *(unsigned int *)&stru_AC4B30.__pad_EC[28] = 0; /*0x637732*/
  if ( *(ObjectClass **)&stru_AC4B30.__pad_70[80] == v5 ) /*0x63773e*/
    *(unsigned int *)&stru_AC4B30.__pad_70[80] = 0; /*0x637740*/
  return result; /*0x637747*/

}
}
// 0x638B70
namespace gamemd {
char sub_638B70(int * a1, int a2, char a3, char a4)
{
  int v6; // edi
  int v7; // edx
  int v8; // esi
  unsigned int *v9; // eax
  void *v10; // eax
  int v11; // [esp+Ch] [ebp-8h] BYREF

  if ( a2 != 11 ) /*0x638b79*/
    return 0; /*0x638b79*/
  if ( !a4 ) /*0x638b85*/
    return 1; /*0x638b8d*/
  if ( !a1 ) /*0x638b92*/
    return 0; /*0x638b92*/
  v6 = *(unsigned int *)(*(int (**)(int *, int *))(*a1 + 440))( (int *)(a1), (int *)(&v6)); /*0x638ba4*/
  v7 = *a1; /*0x638ba6*/
  v6 = v6; /*0x638baf*/
  v8 = *(unsigned int *)(*(int (**)(int *, int *))(v7 + 440))( (int *)(a1), (int *)(&v11)); /*0x638bb9*/
  v11 = v8; /*0x638bbf*/
  v9 = Network_Process_6E7C20(&a3); /*0x638bc3*/
  if ( v9 ) /*0x638bca*/
  {
    v8 = v9[9]; /*0x638bcc*/
  LABEL_9:
    v11 = v8; /*0x638bef*/
    return (unsigned short)v6 == (unsigned short)v8 && IDA_HIWORD(v6) == IDA_HIWORD(v11); /*0x638bef*/
  }
  v10 = ((BuildingLoadQueue *)(&a3))->Find(); /*0x638bd5*/
  if ( v10 ) /*0x638bdc*/
  {
    v8 = *(unsigned int *)(*(int (**)(void *, int *))(v10->u32_1B8))( (void *)(v10), (int *)(&v11));  /*0x638bed*/
    goto LABEL_9; /*0x638bed*/
  }
  return (unsigned short)v6 == (unsigned short)v8 && IDA_HIWORD(v6) == IDA_HIWORD(v11); /*0x638b89*/
}
}
// 0x65AD30
namespace gamemd {
int Team::GetMember(int aP1)
{

  return *((unsigned int *)(unsigned int)(this->field_E4)+ aP1); /*0x65ad3d*/

}
}
// 0x65AE30
namespace gamemd {
int Team::AllMembersValid()
{

  void *v1; // edx
  int result; // eax
  unsigned int *v3; // ecx

  v1 = (void *)(this->field_E8);
  result = 0; /*0x65ae36*/
  if ( (int)v1 <= 0 ) /*0x65ae3a*/
  {
LABEL_5:
    LOBYTE(result) = 0; /*0x65ae4f*/
  }
  else
  {
    v3 = (unsigned int *)(this->field_E4);
    while ( !*v3 ) /*0x65ae45*/
    {
      ++result; /*0x65ae47*/
      ++v3; /*0x65ae48*/
      if ( result >= (int)v1 ) /*0x65ae4d*/
        goto LABEL_5; /*0x65ae4d*/
    }
    LOBYTE(result) = 1; /*0x65ae52*/
  }
  return result; /*0x65ae51*/

}
}
// 0x63A1B0
namespace gamemd {
void sub_63A1B0(int a1)
{
  wchar_t *StringCSF; // eax

  if ( ((unsigned int *)(dword_AC4BF4))[a1] < 1 ) /*0x63a1bb*/
  {
    if ( a1 == 3 ) /*0x63a1c0*/
    {
      StringCSF = GetStringCSF((wchar_t *)(aMsgPlanningmod_7), 0,(const char *)(g_Str_File_PlanMgr_cpp), 3233); /*0x63a1d3*/
    }
    else
    {
      if ( a1 != 4 ) /*0x63a1d8*/
      {
  LABEL_7:
        ++((unsigned int *)(dword_AC4BF4))[a1]; /*0x63a1fc*/
        return; /*0x63a1fc*/
      }
      StringCSF = GetStringCSF((wchar_t *)(aMsgPlanningmod_8), 0,(const char *)(g_Str_File_PlanMgr_cpp), 3233); /*0x63a1eb*/
    }
    AddMessageListPlayerMessage(StringCSF, 480, unsigned int a1, unsigned int a2); /*0x63a1f7*/
    goto LABEL_7; /*0x63a1f7*/
  }
}
}
// 0x76ED10
namespace gamemd {
bool Team_Start_76ED10(void * a1, void * a2)
{
  int State; // eax
  wchar_t *StringCSF; // eax
  bool v6; // bl
  int v7; // edx
  bool v8; // al
  void* v9;
  int v10; // [esp+8h] [ebp-4BCh]
  void* v11;
  int v12; // [esp+10h] [ebp-4B4h]
  int v13[300]; // [esp+14h] [ebp-4B0h] BYREF

  if ( !*(unsigned int *)((unsigned int)(a1)+ 4) ) /*0x76ed10*/
    return 0; /*0x76ed20*/
  ConstructWDTSelection((int)v13, a1, a2); /*0x76ed31*/
  State = ((FileClass*)(unsigned int *)(v13[19] + 8))->GetState(); /*0x76ed3f*/
  ((ScoreText *)(v13))->ShowAlt((const wchar_t **)(State + 20), 0); /*0x76ed4c*/
  StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_WDT_TerritorySelectToolTip), 0,(const char *)(g_Str_File_WDTSel_cpp), 1230)); /*0x76ed62*/
  ((WideString *)((wchar_t **)&v9))->Assign( (wchar_t *)(StringCSF)); /*0x76ed6c*/
  ScoreText::Show( (void *)(v13), ((const wchar_t **)&v9)); /*0x76ed7a*/
  ((DeleteAndZero*)(void **)&v9)->Alt(); /*0x76ed83*/
  Team_Start_76E2F0((int)v13, a2); /*0x76ed8d*/
  ShowWDTTerritorySelection(v13, (int)&v11); /*0x76ed9b*/
  v6 = v12 != 0; /*0x76eda6*/
  if ( v12 ) /*0x76edab*/
  {
    *(unsigned int *)dword_A8B240 = v12->vtable3; /*0x76edba*/
    FindWDTTerritoryClass(&v9, *(int *)dword_A8B240); /*0x76edbf*/
    if ( v10 ) /*0x76edca*/
    {
      *(unsigned int *)&g_abs_A8B270 = *(uint8_t *)(v10 + 14); /*0x76edd7*/
      g_RulesInitConfig = *(uint8_t *)(v10 + 15); /*0x76ede2*/
      *(unsigned int *)&g_abs_A8B25C = *(uint16_t *)(v10 + 16); /*0x76edec*/
      v7 = *(unsigned int *)(v10 + 56) >> 2; /*0x76edf5*/
      byte_A8B31D = 0; /*0x76edfd*/
      byte_A8B31C = v7 & 1; /*0x76ee06*/
      g_abs_A8B258[0] = (*(unsigned int *)(v10 + 56) & 0x10) != 0; /*0x76ee14*/
      IDA_LOBYTE(v7) = (*(unsigned int *)(v10 + 56) & 0x20) != 0; /*0x76ee20*/
      byte_A8B31F = 0; /*0x76ee22*/
      IDA_LOBYTE(dword_A8B320) = v7; /*0x76ee29*/
      g_abs_A8B260[0] = 1; /*0x76ee2f*/
      g_abs_A8B261[0] = IDA_BYTE1(*(unsigned int *)(v10 + 56)) & 1; /*0x76ee3d*/
      g_abs_A8B262[0] = (*(unsigned int *)(v10 + 56) & 0x400) != 0; /*0x76ee4b*/
      v8 = (*(unsigned int *)(v10 + 56) & 0x200) != 0; /*0x76ee57*/
      IDA_LOBYTE(g_abs_A8B264) = 0; /*0x76ee59*/
      g_abs_A8B263[0] = v8; /*0x76ee60*/
      *(unsigned int *)&g_abs_A8B274 = 0; /*0x76ee65*/
      *(unsigned int *)&DataGlobal_A8B278 = 1; /*0x76ee6f*/
    }
    else
    {
      v6 = (unsigned int)(void **)(0);
    }
    v9 = (void*)&rc_ptr_WDTTerritory_vftable; /*0x76ee7d*/
    ((ComPtr *)(&v9))->Release(); /*0x76ee85*/
  }
  v11 = (void*)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76ee8e*/
  ((ComPtr *)(&v11))->Release(); /*0x76ee96*/
  SelectionInitializeWOL((int)v13); /*0x76ee9f*/
  return v6; /*0x76ed22*/
}
}
// 0x7AFAD0
namespace gamemd {
int Team_Start_7AFAD0(void * a1, void * a2)
{
  char **v2; // eax
  char **v3; // esi
  int v5; // edi
  void *v6; // [esp+4h] [ebp-88h] BYREF
  void *v7; // [esp+8h] [ebp-84h] BYREF
  char Buffer[128]; // [esp+Ch] [ebp-80h] BYREF

  v2 = (char **)(((StaticString *)(a1))->Factory());
  sprintf(Buffer, "TheaterChoice%sMenu", *v2); /*0x7afae9*/
  ((String *)((char **)&v6))->Assign( (const char *)(Buffer)); /*0x7afafa*/
  ((String *)((char **)&v7))->Assign((const char *)(aWdtchoicemdIni)); /*0x7afb08*/
  v3 = (char **)(sub_4F1B80( (void *)((char **)&v6), (void *)((char **)&v7), (void *)((void *)(a2)))); /*0x7afb1e*/
  j_DeleteAndZero( (void *)(&v7)); /*0x7afb20*/
  j_DeleteAndZero( (void *)(&v6)); /*0x7afb29*/
  if ( !v3 ) /*0x7afb30*/
    return 0; /*0x7afb32*/
  v5 = ProcessGraphicMenu((int)v3); /*0x7afb44*/
  (*(void (**)(char **, int))*v3)( (char **)(v3), 1); /*0x7afb4c*/
  switch ( v5 ) /*0x7afb52*/
  {
    case 1: /*0x7afb52*/
      return 1; /*0x7afb7e*/
    case 2: /*0x7afb52*/
      return 2; /*0x7afb71*/
    case 3: /*0x7afb52*/
      return 3; /*0x7afb64*/
  }
  return 0; /*0x7afb34*/
}
}
// 0x752460
namespace gamemd {
ObjectClass * Team_Helper_752460(int a1)
{
  if ( a1 < 0 || a1 >= g_InfantrySelectState ) /*0x75246f*/
    return (gamemd::ObjectClass *)(g_Str_none); /*0x75247a*/
  else
    return (gamemd::ObjectClass *)((char *)*((unsigned int *)g_InfantryRenderPool + a1)); /*0x752476*/
}
} // namespace gamemd

// 0x765F60
namespace gamemd {
rc_ptr_base * Team_Create_765F60(rc_ptr_base * a1, int a2)
{
  int v4; // eax
  int v5; // esi
  unsigned int *v6; // edi

  v4 = (int)(RA2_OPNEW(0x10u)); /*0x765f69*/
  v5 = v4; /*0x765f6e*/
  if ( v4 ) /*0x765f75*/
  {
    v6 = (unsigned int *)(v4 + 8); /*0x765f78*/
    *(unsigned int *)(v4 + 4) = 0; /*0x765f7d*/
    *(unsigned int *)v4 = (unsigned int)((void*)&ReferenceCounted_vftable); /*0x765f84*/
    ((ComPtr *)((ComPtr *)(v4 + 8)))->Constructor(); /*0x765f8a*/
    *v6 = (unsigned int)((void*)&rc_ptr_WDTTerritory_vftable); /*0x765f8f*/
    ((ComPtr *)((ComPtr *)(v5 + 8)))->Set(*(unsigned int *)(a2 + 4)); /*0x765f9b*/
    *(unsigned int *)v5 = (unsigned int)((void*)&WorldDominationTour_Conflict_vftable); /*0x765fa0*/
  }
  else
  {
    v5 = 0; /*0x765fa9*/
  }
  ((ComPtr *)(a1))->Constructor(); /*0x765fad*/
  *(unsigned int *)a1->__pad_0 = (unsigned int)((void*)&rc_ptr_WorldDominationTour_Conflict_vftable); /*0x765fb4*/
  ((ComPtr *)(a1))->Set(v5); /*0x765fbc*/
  return a1; /*0x765fc3*/
}
} // namespace gamemd

// 0x767B00
namespace gamemd {
rc_ptr_base * Team_Create_767B00(rc_ptr_base * a1, int a2)
{
  int v4; // eax
  int v5; // esi
  unsigned int *v6; // edi

  v4 = (int)(RA2_OPNEW(0x10u)); /*0x767b09*/
  v5 = v4; /*0x767b0e*/
  if ( v4 ) /*0x767b15*/
  {
    v6 = (unsigned int *)(v4 + 8); /*0x767b18*/
    *(unsigned int *)(v4 + 4) = 0; /*0x767b1d*/
    *(unsigned int *)v4 = (unsigned int)((void*)&ReferenceCounted_vftable); /*0x767b24*/
    ((ComPtr *)((ComPtr *)(v4 + 8)))->Constructor(); /*0x767b2a*/
    *v6 = (unsigned int)((void*)&rc_ptr_WDTState_vftable); /*0x767b2f*/
    ((ComPtr *)((ComPtr *)(v5 + 8)))->Set(*(unsigned int *)(a2 + 4)); /*0x767b3b*/
    *(unsigned int *)v5 = (unsigned int)((void*)&WorldDominationTour_History_vftable); /*0x767b40*/
  }
  else
  {
    v5 = 0; /*0x767b49*/
  }
  ((ComPtr *)(a1))->Constructor(); /*0x767b4d*/
  *(unsigned int *)a1->__pad_0 = (unsigned int)((void*)&rc_ptr_WorldDominationTour_History_vftable); /*0x767b54*/
  ((ComPtr *)(a1))->Set(v5); /*0x767b5c*/
  return a1; /*0x767b63*/
}
} // namespace gamemd

// 0x76ECD0
namespace gamemd {
void Team_Start_76ECD0(int a1, ScoreScreen * a2)
{
  unsigned char v4[1200]; // [esp+8h] [ebp-4B0h] BYREF

  ((Timer*)(HWND *)dword_87F770)->PumpMessages(); /*0x76ece2*/
  ConstructWDTSelection((int)v4, a1, a2); /*0x76eced*/
  Team_Start_76E750((int)v4, a2); /*0x76ecf7*/
  SelectionInitializeWOL((int)v4); /*0x76ed00*/
}
} // namespace gamemd
