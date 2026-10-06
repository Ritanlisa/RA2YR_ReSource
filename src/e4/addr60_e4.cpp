// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_600660_e4.hpp"
#include "e4/classes/E4Recv_60B740_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"

// 0x600750
namespace gamemd {
void sub_600750()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  unsigned int *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_AC1B50; /*0x600750*/
  for ( i = 0; i < dword_AC1B50; v0 = dword_AC1B50 ) /*0x60075d*/
  {
    v2 = (unsigned int *)*((unsigned int *)dword_AC1B48 + i); /*0x600764*/
    while ( v2 ) /*0x600769*/
    {
      v3 = (void *)(v2); /*0x60076b*/
      v2 = (unsigned int *)v2[2]; /*0x60076d*/
      RA2_OPDEL(v3); /*0x600771*/
    }
    *((unsigned int *)dword_AC1B48 + i++) = 0; /*0x600784*/
  }
  v4 = dword_AC1B78; /*0x600795*/
  dword_AC1B4C = 0; /*0x60079b*/
  if ( v0 > dword_AC1B78 ) /*0x6007a7*/
  {
    do /*0x60085a*/
    {
      if ( byte_AC1B5C || v0 <= v4 ) /*0x6007bd*/
        break; /*0x6007bd*/
      v5 = (int *)dword_AC1B48; /*0x6007c9*/
      v6 = v0; /*0x6007cf*/
      dword_AC1B50 = v0 >> 1; /*0x6007d4*/
      --dword_AC1B54; /*0x6007e0*/
      dword_AC1B48 = (unsigned int)(RA2_OPNEW(4 * (v0 >> 1))); /*0x6007f9*/
      memset((void *)(dword_AC1B48), 0, 4 * dword_AC1B50); /*0x600801*/
      if ( v6 > 0 ) /*0x600803*/
      {
        v7 = v5; /*0x600805*/
        v8 = v6; /*0x600807*/
        do /*0x600842*/
        {
          v9 = *v7; /*0x600809*/
          if ( *v7 ) /*0x600809*/
          {
            do /*0x60083c*/
            {
              v10 = (*(unsigned int (*)(unsigned int))&dword_AC1B60)(v9) & ((1 << dword_AC1B54) - 1); /*0x600825*/
              v11 = *((unsigned int *)dword_AC1B48 + v10); /*0x60082c*/
              *((unsigned int *)dword_AC1B48 + v10) = v9; /*0x60082f*/
              v12 = *(unsigned int *)(v9 + 8); /*0x600832*/
              *(unsigned int *)(v9 + 8) = v11; /*0x600835*/
              v9 = v12; /*0x60083a*/
            }
            while ( v12 ); /*0x60083c*/
          }
          ++v7; /*0x60083e*/
          --v8; /*0x600841*/
        }
        while ( v8 ); /*0x600842*/
      }
      RA2_OPDEL(v5); /*0x600845*/
      v4 = dword_AC1B78; /*0x60084a*/
      v0 = dword_AC1B50; /*0x600850*/
    }
    while ( dword_AC1B50 > (unsigned int)dword_AC1B78 ); /*0x60085a*/
  }
  RA2_OPDEL(dword_AC1B48); /*0x600866*/
}
}
// 0x600920
namespace gamemd {
void sub_600920()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  unsigned int *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_AC18C8; /*0x600920*/
  for ( i = 0; i < dword_AC18C8; v0 = dword_AC18C8 ) /*0x60092d*/
  {
    v2 = (unsigned int *)*((unsigned int *)g_DialogPool + i); /*0x600934*/
    while ( v2 ) /*0x600939*/
    {
      v3 = (void *)(v2); /*0x60093b*/
      v2 = (unsigned int *)v2[2]; /*0x60093d*/
      RA2_OPDEL(v3); /*0x600941*/
    }
    *((unsigned int *)g_DialogPool + i++) = 0; /*0x600954*/
  }
  v4 = dword_AC18F0; /*0x600965*/
  unk_AC18C4 = 0; /*0x60096b*/
  if ( v0 > dword_AC18F0 ) /*0x600977*/
  {
    do /*0x600a2a*/
    {
      if ( byte_AC18D4 || v0 <= v4 ) /*0x60098d*/
        break; /*0x60098d*/
      v5 = (int *)g_DialogPool; /*0x600999*/
      v6 = v0; /*0x60099f*/
      dword_AC18C8 = v0 >> 1; /*0x6009a4*/
      --dword_AC18CC; /*0x6009b0*/
      g_DialogPool = (int)(RA2_OPNEW(4 * (v0 >> 1))); /*0x6009c9*/
      memset((void *)(g_DialogPool), 0, 4 * dword_AC18C8); /*0x6009d1*/
      if ( v6 > 0 ) /*0x6009d3*/
      {
        v7 = v5; /*0x6009d5*/
        v8 = v6; /*0x6009d7*/
        do /*0x600a12*/
        {
          v9 = *v7; /*0x6009d9*/
          if ( *v7 ) /*0x6009d9*/
          {
            do /*0x600a0c*/
            {
              v10 = (*(unsigned int (*)(unsigned int))&dword_AC18D8)(v9) & ((1 << dword_AC18CC) - 1); /*0x6009f5*/
              v11 = *((unsigned int *)g_DialogPool + v10); /*0x6009fc*/
              *((unsigned int *)g_DialogPool + v10) = v9; /*0x6009ff*/
              v12 = *(unsigned int *)(v9 + 8); /*0x600a02*/
              *(unsigned int *)(v9 + 8) = v11; /*0x600a05*/
              v9 = v12; /*0x600a0a*/
            }
            while ( v12 ); /*0x600a0c*/
          }
          ++v7; /*0x600a0e*/
          --v8; /*0x600a11*/
        }
        while ( v8 ); /*0x600a12*/
      }
      RA2_OPDEL(v5); /*0x600a15*/
      v4 = dword_AC18F0; /*0x600a1a*/
      v0 = dword_AC18C8; /*0x600a20*/
    }
    while ( dword_AC18C8 > (unsigned int)dword_AC18F0 ); /*0x600a2a*/
  }
  RA2_OPDEL(g_DialogPool); /*0x600a36*/
}
}
// 0x600AF0
namespace gamemd {
void sub_600AF0()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  int j; // ebp
  int v3; // edi
  unsigned int *k; // eax
  void **v5; // ecx
  unsigned int v6; // ecx
  int *v7; // ebp
  int v8; // esi
  int *v9; // edi
  int v10; // ebx
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int i; // [esp+10h] [ebp-4h]

  v0 = dword_AC1B08; /*0x600af1*/
  v1 = 0; /*0x600afa*/
  for ( i = 0; v1 < dword_AC1B08; v0 = dword_AC1B08 ) /*0x600b04*/
  {
    for ( j = *((unsigned int *)dword_AC1B00 + v1); j; v1 = i ) /*0x600b10*/
    {
      v3 = j; /*0x600b12*/
      j = *(unsigned int *)(j + 516); /*0x600b14*/
      if ( *(unsigned int *)(v3 + 44) ) /*0x600b1e*/
      {
        RA2_OPDEL(*(void **)(v3 + 44)); /*0x600b29*/
        *(unsigned int *)(v3 + 44) = 0; /*0x600b31*/
      }
      for ( k = *(unsigned int **)(v3 + 56); k; k = *(unsigned int **)(v3 + 56) ) /*0x600b39*/
        LinkedList::Remove( (unsigned int *)(v3 + 4), (unsigned int *)(k)); /*0x600b3e*/
      v5 = *(void ***)(v3 + 64); /*0x600b4a*/
      if ( v5 ) /*0x600b4f*/
        ((DeleteAndZero*)v5)->OrFree(1); /*0x600b53*/
      RA2_OPDEL((void *)v3); /*0x600b59*/
    }
    i = ++v1; /*0x600b70*/
    *((unsigned int *)dword_AC1B00 + v1 - 1) = 0; /*0x600b74*/
  }
  v6 = dword_AC1B30; /*0x600b81*/
  dword_AC1B04 = 0; /*0x600b87*/
  if ( v0 > dword_AC1B30 ) /*0x600b8f*/
  {
    do /*0x600c46*/
    {
      if ( byte_AC1B14 || v0 <= v6 ) /*0x600ba5*/
        break; /*0x600ba5*/
      v7 = (int *)dword_AC1B00; /*0x600bb1*/
      v8 = v0; /*0x600bb7*/
      dword_AC1B08 = v0 >> 1; /*0x600bbb*/
      --dword_AC1B0C; /*0x600bc5*/
      dword_AC1B00 = (unsigned int)(RA2_OPNEW(4 * (v0 >> 1))); /*0x600bdd*/
      memset((void *)(dword_AC1B00), 0, 4 * dword_AC1B08); /*0x600be5*/
      if ( v8 > 0 ) /*0x600be7*/
      {
        v9 = v7; /*0x600be9*/
        v10 = v8; /*0x600beb*/
        do /*0x600c2c*/
        {
          v11 = *v9; /*0x600bed*/
          if ( *v9 ) /*0x600bed*/
          {
            do /*0x600c26*/
            {
              v12 = (*(unsigned int (*)(unsigned int))&dword_AC1B18)(v11) & ((1 << dword_AC1B0C) - 1); /*0x600c09*/
              v13 = *((unsigned int *)dword_AC1B00 + v12); /*0x600c10*/
              *((unsigned int *)dword_AC1B00 + v12) = v11; /*0x600c13*/
              v14 = *(unsigned int *)(v11 + 516); /*0x600c16*/
              *(unsigned int *)(v11 + 516) = v13; /*0x600c1c*/
              v11 = v14; /*0x600c24*/
            }
            while ( v14 ); /*0x600c26*/
          }
          ++v9; /*0x600c28*/
          --v10; /*0x600c2b*/
        }
        while ( v10 ); /*0x600c2c*/
      }
      RA2_OPDEL(v7); /*0x600c31*/
      v6 = dword_AC1B30; /*0x600c36*/
      v0 = dword_AC1B08; /*0x600c3c*/
    }
    while ( dword_AC1B08 > (unsigned int)dword_AC1B30 ); /*0x600c46*/
  }
  RA2_OPDEL(dword_AC1B00); /*0x600c53*/
}
}
// 0x600C70
namespace gamemd {
int NavigateDialogTab(HWND hCtl, bool a2)
{
  HWND Parent; // eax
  int result; // eax

  Parent = GetParent(hCtl); /*0x600c77*/
  result = (int)GetNextDlgTabItem(Parent, hCtl, a2); /*0x600c86*/
  if ( (HWND)result == hCtl ) /*0x600c90*/
  {
    IDA_LOBYTE(result) = 0; /*0x600c9c*/
  }
  else
  {
    result = (int)SetFocus((HWND)result); /*0x600c93*/
    IDA_LOBYTE(result) = 1; /*0x600c99*/
  }
  return result; /*0x600c8e*/
}
}
// 0x600CA0
namespace gamemd {
int ValidateDialogEvent(int a1, HWND a2)
{
  unsigned int *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  unsigned int *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x600cac*/
  if ( !dword_AC1B04 ) /*0x600cb0*/
    goto LABEL_5; /*0x600cb0*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v8)) & ((1 << dword_AC1B0C) - 1))); /*0x600cd1*/
  if ( !v3 ) /*0x600cd6*/
    goto LABEL_5; /*0x600cd6*/
  while ( *v3 != v8 ) /*0x600cde*/
  {
    v3 = (unsigned int *)v3[129]; /*0x600ce4*/
    if ( !v3 ) /*0x600cec*/
      goto LABEL_5; /*0x600cec*/
  }
  v7 = v3 + 1; /*0x600f18*/
  if ( v7 ) /*0x600f1d*/
    v4 = (void *)v7[27]; /*0x600f23*/
  else
  LABEL_5:
    v4 = (void *)(0); /*0x600cee*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x600cf1*/
  if ( (v4 == (void *)268 /*0x600f05*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || v4 == (void *)293
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)276
     || v4 == (void *)700
     || v4 == (void *)275
     || v4 == (void *)265
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)270
     || v4 == (void *)274)
    && DlgCtrlID == 1684 )
  {
    return 30; /*0x600f0f*/
  }
  if ( (v4 == (void *)188 /*0x600f69*/
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 30; /*0x600f69*/
  }
  if ( v4 != (void *)259 && v4 != (void *)3015 ) /*0x600f82*/
    goto LABEL_102; /*0x600f82*/
  if ( DlgCtrlID != 1780 ) /*0x600f8e*/
  {
    if ( DlgCtrlID == 1779 /*0x601026*/
      || DlgCtrlID == 1695
      || DlgCtrlID == 1782
      || DlgCtrlID == 1775
      || DlgCtrlID == 1777
      || DlgCtrlID == 1776
      || DlgCtrlID == 1778
      || DlgCtrlID == 1852
      || DlgCtrlID == 1853
      || DlgCtrlID == 1854
      || DlgCtrlID == 1855
      || DlgCtrlID == 1856
      || DlgCtrlID == 1845
      || DlgCtrlID == 1842
      || DlgCtrlID == 1002
      || DlgCtrlID == 1843 )
    {
      return 30; /*0x601026*/
    }
    if ( DlgCtrlID == 1041 /*0x60109a*/
      || DlgCtrlID == 1042
      || DlgCtrlID == 1049
      || DlgCtrlID == 1050
      || DlgCtrlID == 1699
      || DlgCtrlID == 1700
      || DlgCtrlID == 1701
      || DlgCtrlID == 1703
      || DlgCtrlID == 1702
      || DlgCtrlID == 1704
      || DlgCtrlID == 1850
      || DlgCtrlID == 1849
      || DlgCtrlID == 1851
      || DlgCtrlID == 1848 )
    {
      return 60; /*0x6010a4*/
    }
  LABEL_102:
    if ( v4 != (void *)264 && v4 != (void *)3014 ) /*0x6010b3*/
    {
  LABEL_164:
      ((Event *)(v4))->IsValidActionType(); /*0x601346*/
      return 15; /*0x601348*/
    }
    if ( DlgCtrlID != 1746 /*0x601197*/
      && DlgCtrlID != 1002
      && DlgCtrlID != 1843
      && DlgCtrlID != 1819
      && DlgCtrlID != 1842
      && DlgCtrlID != 1693
      && DlgCtrlID != 1695
      && DlgCtrlID != 1694
      && DlgCtrlID != 1696
      && DlgCtrlID != 1931
      && DlgCtrlID != 1480
      && DlgCtrlID != 1041
      && DlgCtrlID != 1042
      && DlgCtrlID != 1043
      && DlgCtrlID != 1044
      && DlgCtrlID != 1045
      && DlgCtrlID != 1046
      && DlgCtrlID != 1047
      && DlgCtrlID != 1048 )
    {
      if ( DlgCtrlID == 1049 /*0x60133b*/
        || DlgCtrlID == 1050
        || DlgCtrlID == 1051
        || DlgCtrlID == 1052
        || DlgCtrlID == 1053
        || DlgCtrlID == 1054
        || DlgCtrlID == 1055
        || DlgCtrlID == 1056
        || DlgCtrlID == 1699
        || DlgCtrlID == 1700
        || DlgCtrlID == 1705
        || DlgCtrlID == 1708
        || DlgCtrlID == 1711
        || DlgCtrlID == 1714
        || DlgCtrlID == 1717
        || DlgCtrlID == 1720
        || DlgCtrlID == 1701
        || DlgCtrlID == 1703
        || DlgCtrlID == 1706
        || DlgCtrlID == 1709
        || DlgCtrlID == 1712
        || DlgCtrlID == 1715
        || DlgCtrlID == 1718
        || DlgCtrlID == 1721
        || DlgCtrlID == 1702
        || DlgCtrlID == 1704
        || DlgCtrlID == 1707
        || DlgCtrlID == 1710
        || DlgCtrlID == 1713
        || DlgCtrlID == 1716
        || DlgCtrlID == 1719
        || DlgCtrlID == 1722
        || DlgCtrlID == 1802
        || DlgCtrlID == 1803
        || DlgCtrlID == 1804
        || DlgCtrlID == 1805
        || DlgCtrlID == 1806
        || DlgCtrlID == 1807
        || DlgCtrlID == 1808
        || DlgCtrlID == 1809 )
      {
        return 60; /*0x601345*/
      }
      goto LABEL_164; /*0x60133b*/
    }
    return 30; /*0x600f73*/
  }
  return 15; /*0x600f07*/
}
}
// 0x6015E0
namespace gamemd {
int CtlDialogColorHandler(int a1, HWND a2)
{
  unsigned int *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  int result; // eax
  unsigned int *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x6015ec*/
  if ( !dword_AC1B04 ) /*0x6015f0*/
    goto LABEL_5; /*0x6015f0*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x601611*/
  if ( !v3 ) /*0x601616*/
    goto LABEL_5; /*0x601616*/
  while ( *v3 != v9 ) /*0x60161e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x601624*/
    if ( !v3 ) /*0x60162c*/
      goto LABEL_5; /*0x60162c*/
  }
  v8 = v3 + 1; /*0x6018c0*/
  if ( v8 ) /*0x6018c5*/
    v4 = (void *)v8[27]; /*0x6018cb*/
  else
  LABEL_5:
    v4 = (void *)(0); /*0x60162e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x601631*/
  v6 = DlgCtrlID; /*0x60163d*/
  if ( (v4 == (void *)268 /*0x60188d*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || v4 == (void *)293
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)276
     || v4 == (void *)700
     || v4 == (void *)275
     || v4 == (void *)265
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)270
     || v4 == (void *)274)
    && DlgCtrlID == 1684
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 1; /*0x60188d*/
  }
  if ( v4 == (void *)259 || v4 == (void *)3015 ) /*0x6018a1*/
  {
    if ( DlgCtrlID == 1780 ) /*0x6018ad*/
      return 3; /*0x6018b7*/
    if ( DlgCtrlID == 1779 /*0x601a4d*/
      || DlgCtrlID == 1695
      || DlgCtrlID == 1782
      || DlgCtrlID == 1775
      || DlgCtrlID == 1777
      || DlgCtrlID == 1776
      || DlgCtrlID == 1778
      || DlgCtrlID == 1843
      || DlgCtrlID == 1845
      || DlgCtrlID == 1842
      || DlgCtrlID == 1002
      || DlgCtrlID == 1852
      || DlgCtrlID == 1853
      || DlgCtrlID == 1854
      || DlgCtrlID == 1855
      || DlgCtrlID == 1856
      || DlgCtrlID == 1846
      || DlgCtrlID == 1847
      || DlgCtrlID == 1041
      || DlgCtrlID == 1042
      || DlgCtrlID == 1049
      || DlgCtrlID == 1050
      || DlgCtrlID == 1699
      || DlgCtrlID == 1700
      || DlgCtrlID == 1701
      || DlgCtrlID == 1703
      || DlgCtrlID == 1702
      || DlgCtrlID == 1704
      || DlgCtrlID == 1850
      || DlgCtrlID == 1849
      || DlgCtrlID == 1851
      || DlgCtrlID == 1848 )
    {
      return 1; /*0x601a4d*/
    }
  }
  if ( (v4 == (void *)264 || v4 == (void *)3014) /*0x601cf5*/
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1843
     || DlgCtrlID == 1819
     || DlgCtrlID == 1842
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809) )
  {
    return 1; /*0x601cf5*/
  }
  if ( !((Event *)(v4))->IsValidActionType() ) /*0x601cf9*/
    return 1; /*0x601cf9*/
  result = 3; /*0x601d08*/
  if ( v6 != 1685 ) /*0x601d0d*/
    return 1; /*0x601d0f*/
  return result; /*0x6018af*/
}
}
// 0x601D20
namespace gamemd {
int ValidateDialogControl(int a1, HWND a2)
{
  unsigned int *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  unsigned int *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x601d2c*/
  if ( !dword_AC1B04 ) /*0x601d30*/
    goto LABEL_5; /*0x601d30*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x601d51*/
  if ( !v3 ) /*0x601d56*/
    goto LABEL_5; /*0x601d56*/
  while ( *v3 != v9 ) /*0x601d5e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x601d64*/
    if ( !v3 ) /*0x601d6c*/
      goto LABEL_5; /*0x601d6c*/
  }
  v8 = v3 + 1; /*0x602000*/
  if ( v8 ) /*0x602005*/
    v4 = (void *)v8[27]; /*0x60200b*/
  else
  LABEL_5:
    v4 = (void *)(0); /*0x601d6e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x601d71*/
  v6 = DlgCtrlID; /*0x601d7d*/
  if ( (v4 != (void *)268 /*0x601fcd*/
     && v4 != (void *)148
     && v4 != (void *)163
     && v4 != (void *)115
     && v4 != (void *)216
     && v4 != (void *)3003
     && v4 != (void *)245
     && v4 != (void *)261
     && v4 != (void *)226
     && v4 != (void *)213
     && v4 != (void *)693
     && v4 != (void *)183
     && v4 != (void *)692
     && v4 != (void *)3015
     && v4 != (void *)257
     && v4 != (void *)297
     && v4 != (void *)3014
     && v4 != (void *)215
     && v4 != (void *)264
     && v4 != (void *)188
     && v4 != (void *)189
     && v4 != (void *)187
     && v4 != (void *)181
     && v4 != (void *)3002
     && v4 != (void *)255
     && v4 != (void *)107
     && v4 != (void *)256
     && v4 != (void *)258
     && v4 != (void *)184
     && v4 != (void *)214
     && v4 != (void *)259
     && v4 != (void *)293
     && v4 != (void *)231
     && v4 != (void *)278
     && v4 != (void *)194
     && v4 != (void *)201
     && v4 != (void *)285
     && v4 != (void *)284
     && v4 != (void *)276
     && v4 != (void *)700
     && v4 != (void *)275
     && v4 != (void *)265
     && v4 != (void *)271
     && v4 != (void *)279
     && v4 != (void *)230
     && v4 != (void *)243
     && v4 != (void *)244
     && v4 != (void *)270
     && v4 != (void *)274
     || DlgCtrlID != 1684)
    && (v4 != (void *)188
     && v4 != (void *)189
     && v4 != (void *)258
     && v4 != (void *)194
     && v4 != (void *)201
     && v4 != (void *)3014
     || DlgCtrlID != 1772 && DlgCtrlID != 1448) )
  {
    if ( v4 == (void *)259 || v4 == (void *)3015 ) /*0x601fe1*/
    {
      switch ( DlgCtrlID ) /*0x601fed*/
      {
        case 1780: /*0x601fed*/
          return 16; /*0x601ff7*/
        case 1779: /*0x601fed*/
        case 1695: /*0x601fed*/
        case 1782: /*0x601fed*/
        case 1775: /*0x601fed*/
        case 1777: /*0x601fed*/
        case 1776: /*0x601fed*/
        case 1778: /*0x601fed*/
        case 1843: /*0x601fed*/
        case 1845: /*0x601fed*/
        case 1842: /*0x601fed*/
        case 1002: /*0x601fed*/
          return 8; /*0x602091*/
        case 1852: /*0x601fed*/
        case 1853: /*0x601fed*/
        case 1854: /*0x601fed*/
        case 1855: /*0x601fed*/
        case 1856: /*0x601fed*/
          return 16; /*0x6023d8*/
        case 1041: /*0x601fed*/
        case 1042: /*0x601fed*/
        case 1049: /*0x601fed*/
        case 1050: /*0x601fed*/
        case 1699: /*0x601fed*/
        case 1700: /*0x601fed*/
        case 1701: /*0x601fed*/
        case 1703: /*0x601fed*/
        case 1702: /*0x601fed*/
        case 1704: /*0x601fed*/
        case 1850: /*0x601fed*/
        case 1849: /*0x601fed*/
        case 1851: /*0x601fed*/
        case 1848: /*0x601fed*/
          return 32; /*0x602141*/
      }
    }
    if ( v4 == (void *)264 || v4 == (void *)3014 ) /*0x60215a*/
    {
      if ( DlgCtrlID == 1746 /*0x60220e*/
        || DlgCtrlID == 1002
        || DlgCtrlID == 1843
        || DlgCtrlID == 1819
        || DlgCtrlID == 1842
        || DlgCtrlID == 1693
        || DlgCtrlID == 1695
        || DlgCtrlID == 1694
        || DlgCtrlID == 1696
        || DlgCtrlID == 1931
        || DlgCtrlID == 1480
        || DlgCtrlID == 1041
        || DlgCtrlID == 1042
        || DlgCtrlID == 1043
        || DlgCtrlID == 1044
        || DlgCtrlID == 1045
        || DlgCtrlID == 1046
        || DlgCtrlID == 1047
        || DlgCtrlID == 1048 )
      {
        return 32; /*0x60214b*/
      }
      if ( DlgCtrlID == 1049 /*0x6023b2*/
        || DlgCtrlID == 1050
        || DlgCtrlID == 1051
        || DlgCtrlID == 1052
        || DlgCtrlID == 1053
        || DlgCtrlID == 1054
        || DlgCtrlID == 1055
        || DlgCtrlID == 1056
        || DlgCtrlID == 1699
        || DlgCtrlID == 1700
        || DlgCtrlID == 1705
        || DlgCtrlID == 1708
        || DlgCtrlID == 1711
        || DlgCtrlID == 1714
        || DlgCtrlID == 1717
        || DlgCtrlID == 1720
        || DlgCtrlID == 1701
        || DlgCtrlID == 1703
        || DlgCtrlID == 1706
        || DlgCtrlID == 1709
        || DlgCtrlID == 1712
        || DlgCtrlID == 1715
        || DlgCtrlID == 1718
        || DlgCtrlID == 1721
        || DlgCtrlID == 1702
        || DlgCtrlID == 1704
        || DlgCtrlID == 1707
        || DlgCtrlID == 1710
        || DlgCtrlID == 1713
        || DlgCtrlID == 1716
        || DlgCtrlID == 1719
        || DlgCtrlID == 1722
        || DlgCtrlID == 1802
        || DlgCtrlID == 1803
        || DlgCtrlID == 1804
        || DlgCtrlID == 1805
        || DlgCtrlID == 1806
        || DlgCtrlID == 1807
        || DlgCtrlID == 1808
        || DlgCtrlID == 1809 )
      {
        return 64; /*0x6023bc*/
      }
    }
    if ( ((Event *)(v4))->IsValidActionType() && v6 == 1685 ) /*0x6023ce*/
      return 16; /*0x6023ce*/
  }
  return 8; /*0x601fef*/
}
}
// 0x6023F0
namespace gamemd {
int sub_6023F0(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  unsigned int *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x6023fc*/
  if ( !dword_AC1B04 ) /*0x602400*/
    goto LABEL_5; /*0x602400*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v8)) & ((1 << dword_AC1B0C) - 1))); /*0x602421*/
  if ( !v3 ) /*0x602426*/
    goto LABEL_5; /*0x602426*/
  while ( *v3 != v8 ) /*0x60242e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x602430*/
    if ( !v3 ) /*0x602438*/
      goto LABEL_5; /*0x602438*/
  }
  v7 = v3 + 1; /*0x60246e*/
  if ( v7 ) /*0x602473*/
    v4 = v7[27]; /*0x602475*/
  else
  LABEL_5:
    v4 = 0; /*0x60243a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60243d*/
  if ( (v4 == 259 || v4 == 3015) && DlgCtrlID == 1780 ) /*0x602458*/
    return IDA_HIDWORD(dword_8871E0->GenericClick); /*0x602462*/
  else
    return -1; /*0x60247b*/
}
}
// 0x602490
namespace gamemd {
bool IsValidActionDialog(int a1, HWND a2)
{
  unsigned int *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // esi
  unsigned int *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60249c*/
  if ( !dword_AC1B04 ) /*0x6024a0*/
    goto LABEL_5; /*0x6024a0*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v8)) & ((1 << dword_AC1B0C) - 1))); /*0x6024c1*/
  if ( !v3 ) /*0x6024c6*/
    goto LABEL_5; /*0x6024c6*/
  while ( *v3 != v8 ) /*0x6024ce*/
  {
    v3 = (unsigned int *)v3[129]; /*0x6024d4*/
    if ( !v3 ) /*0x6024dc*/
      goto LABEL_5; /*0x6024dc*/
  }
  v7 = v3 + 1; /*0x60263c*/
  if ( v7 ) /*0x602641*/
    v4 = (void *)v7[27]; /*0x602647*/
  else
  LABEL_5:
    v4 = (void *)(0); /*0x6024de*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x6024ed*/
  if ( (v4 == (void *)268 /*0x60262c*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || ((Dialog*)v4)->IsSpecialTemplate())
    && DlgCtrlID == 1684 )
  {
    return 1; /*0x60262f*/
  }
  if ( (v4 == (void *)188 /*0x60268d*/
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 1; /*0x602690*/
  }
  if ( (v4 == (void *)259 || v4 == (void *)3015) /*0x6027f3*/
    && (DlgCtrlID == 1779
     || DlgCtrlID == 1780
     || DlgCtrlID == 1695
     || DlgCtrlID == 1782
     || DlgCtrlID == 1775
     || DlgCtrlID == 1777
     || DlgCtrlID == 1776
     || DlgCtrlID == 1778
     || DlgCtrlID == 1843
     || DlgCtrlID == 1845
     || DlgCtrlID == 1842
     || DlgCtrlID == 1002
     || DlgCtrlID == 1846
     || DlgCtrlID == 1847
     || DlgCtrlID == 1852
     || DlgCtrlID == 1853
     || DlgCtrlID == 1854
     || DlgCtrlID == 1855
     || DlgCtrlID == 1856
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1850
     || DlgCtrlID == 1849
     || DlgCtrlID == 1851
     || DlgCtrlID == 1848) )
  {
    return 1; /*0x6027f6*/
  }
  if ( (v4 == (void *)264 || v4 == (void *)3014) /*0x602a9d*/
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809
     || DlgCtrlID == 1843
     || DlgCtrlID == 1842
     || DlgCtrlID == 1819
     || DlgCtrlID == 1845) )
  {
    return 1; /*0x602aa0*/
  }
// 0x601360
  return ((Event *)(v4))->IsValidActionType() && DlgCtrlID == 1685 && !((SessionClass *)(dword_A8B238))->GetGameSpeed(); /*0x60262e*/
}
}
// 0x602DD0
namespace gamemd {
char IsDialogControlHidden(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  unsigned int *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x602ddc*/
  if ( !dword_AC1B04 ) /*0x602de0*/
    goto LABEL_5; /*0x602de0*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v8)) & ((1 << dword_AC1B0C) - 1))); /*0x602e01*/
  if ( !v3 ) /*0x602e06*/
    goto LABEL_5; /*0x602e06*/
  while ( *v3 != v8 ) /*0x602e0e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x602e14*/
    if ( !v3 ) /*0x602e1c*/
      goto LABEL_5; /*0x602e1c*/
  }
  v7 = v3 + 1; /*0x602f64*/
  if ( v7 ) /*0x602f69*/
    v4 = v7[27]; /*0x602f6f*/
  else
  LABEL_5:
    v4 = 0; /*0x602e1e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x602e21*/
  if ( (v4 == 148 /*0x602f54*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 1; /*0x602f5b*/
  }
  switch ( v4 ) /*0x602f7d*/
  {
    case 148: /*0x602f7d*/
      if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 || DlgCtrlID == 1771 ) /*0x602f92*/
        return 1; /*0x602f99*/
      break;
    case 259: /*0x602f7d*/
      if ( DlgCtrlID == 1835 ) /*0x602fa7*/
        return 1; /*0x602fae*/
      break;
    case 3015: /*0x602f7d*/
      if ( DlgCtrlID == 1835 ) /*0x602fbc*/
        return 1; /*0x602fc3*/
      break;
    default:
      if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x602fd1*/
        return 1; /*0x602fd8*/
      break;
  }
  return 0; /*0x602f56*/
}
}
// 0x603040
namespace gamemd {
int LoadCampaignMissionData(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  unsigned int *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60304c*/
  if ( !dword_AC1B04 ) /*0x603050*/
    goto LABEL_5; /*0x603050*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v8)) & ((1 << dword_AC1B0C) - 1))); /*0x603071*/
  if ( !v3 ) /*0x603076*/
    goto LABEL_5; /*0x603076*/
  while ( *v3 != v8 ) /*0x60307e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x603084*/
    if ( !v3 ) /*0x60308c*/
      goto LABEL_5; /*0x60308c*/
  }
  v7 = v3 + 1; /*0x6031d7*/
  if ( v7 ) /*0x6031dc*/
    v4 = v7[27]; /*0x6031e2*/
  else
  LABEL_5:
    v4 = 0; /*0x60308e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603091*/
  if ( (v4 == 148 /*0x6031c4*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 37; /*0x6031c7*/
  }
  if ( (v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201 || v4 == 258 || v4 == 3014) /*0x603226*/
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 14; /*0x60322f*/
  }
  return 0; /*0x6031c6*/
}
}
// 0x6035F0
namespace gamemd {
AbstractClass * * DispatchDialogControlAction(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int DlgCtrlID; // edi
  int v6; // ecx
  int result; // eax
  int v8; // ecx
  unsigned int *v9; // eax
  int v10; // [esp+8h] [ebp-4h] BYREF

  v10 = a1; /*0x6035fc*/
  if ( !dword_AC1B04 ) /*0x603600*/
    goto LABEL_5; /*0x603600*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v10)) & ((1 << dword_AC1B0C) - 1))); /*0x603621*/
  if ( !v3 ) /*0x603626*/
    goto LABEL_5; /*0x603626*/
  while ( *v3 != v10 ) /*0x60362e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x603634*/
    if ( !v3 ) /*0x60363c*/
      goto LABEL_5; /*0x60363c*/
  }
  v9 = v3 + 1; /*0x6037a4*/
  if ( v9 ) /*0x6037a9*/
    v4 = v9[27]; /*0x6037af*/
  else
  LABEL_5:
    v4 = 0; /*0x60363e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603647*/
  result = VtableStub_72E280(v6); /*0x603649*/
  if ( (v4 == 148 /*0x60377c*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    result = UI_Helper_72E2A0(); /*0x60377e*/
  }
  if ( v4 == 148 ) /*0x603789*/
  {
    if ( DlgCtrlID == 1770 ) /*0x603791*/
    {
      return UI_Helper_72DAC0(); /*0x603793*/
    }
    else if ( DlgCtrlID == 1772 ) /*0x6037bd*/
    {
      return UI_Helper_72DAD0(); /*0x6037bf*/
    }
  }
  else if ( v4 == 259 || v4 == 3015 ) /*0x6037d6*/
  {
    if ( DlgCtrlID == 1835 ) /*0x6037de*/
      return VtableStub_72D450(v8); /*0x6037e0*/
  }
  else if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x6037f7*/
  {
    return UI_Helper_72CC80(); /*0x6037f9*/
  }
  return (gamemd::AbstractClass **)(result);
}
}
// 0x603870
namespace gamemd {
AbstractClass * * GetDialogControlSHP(int a1, HWND a2, bool * a3)
{
  unsigned int *v4; // eax
  int v5; // esi
  int DlgCtrlID; // eax
  unsigned int *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x60387c*/
  if ( !dword_AC1B04 ) /*0x603880*/
    goto LABEL_5; /*0x603880*/
  v4 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x6038a1*/
  if ( !v4 ) /*0x6038a6*/
    goto LABEL_5; /*0x6038a6*/
  while ( *v4 != v9 ) /*0x6038ae*/
  {
    v4 = (unsigned int *)v4[129]; /*0x6038b4*/
    if ( !v4 ) /*0x6038bc*/
      goto LABEL_5; /*0x6038bc*/
  }
  v8 = v4 + 1; /*0x603a13*/
  if ( v8 ) /*0x603a18*/
    v5 = v8[27]; /*0x603a1e*/
  else
  LABEL_5:
    v5 = 0; /*0x6038be*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x6038c1*/
  if ( (v5 == 148 /*0x6039f4*/
     || v5 == 216
     || v5 == 245
     || v5 == 226
     || v5 == 213
     || v5 == 257
     || v5 == 297
     || v5 == 215
     || v5 == 187
     || v5 == 256
     || v5 == 214
     || v5 == 293
     || v5 == 290
     || v5 == 274
     || v5 == 231
     || v5 == 278
     || v5 == 285
     || v5 == 284
     || v5 == 254
     || v5 == 271
     || v5 == 279
     || v5 == 276
     || v5 == 230
     || v5 == 243
     || v5 == 244
     || v5 == 700
     || v5 == 270
     || v5 == 264
     || v5 == 3014
     || v5 == 3015)
    && DlgCtrlID == 1820 )
  {
    return LoadFileSHP((char *)(off_833674),(bool *)(a3)); /*0x603a08*/
  }
  if ( v5 == 148 ) /*0x603a2c*/
  {
    if ( DlgCtrlID == 1770 ) /*0x603a33*/
      return (gamemd::AbstractClass **)(dword_B0FB48); /*0x603a3d*/
    if ( DlgCtrlID == 1772 ) /*0x603a45*/
      return (gamemd::AbstractClass **)(dword_B0FB10); /*0x603a4f*/
  }
  else if ( v5 == 259 || v5 == 3015 ) /*0x603a60*/
  {
    if ( DlgCtrlID == 1835 ) /*0x603a67*/
      return (gamemd::AbstractClass **)(dword_B0FB30); /*0x603a71*/
  }
  else if ( v5 == 196 && DlgCtrlID == 1961 ) /*0x603a81*/
  {
    return (gamemd::AbstractClass **)((void *)dword_B0FAD0);
  }
  return 0; /*0x603a05*/
}
}
// 0x603AA0
namespace gamemd {
int IsDialogWindowClass(HWND a1, HWND a2)
{
  int v3; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  HWND v8; // edi
  bool v9; // al
  HWND hWnd; // [esp+Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+10h] [ebp-80h] BYREF

  hWnd = a1; /*0x603ab2*/
  if ( !dword_AC1B04 ) /*0x603ab6*/
    return 0; /*0x603ab6*/
  v3 = *((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&hWnd)) & ((1 << dword_AC1B0C) - 1))); /*0x603ad7*/
  if ( !v3 ) /*0x603adc*/
    return 0; /*0x603adc*/
  while ( *(HWND *)v3 != hWnd ) /*0x603ae4*/
  {
    v3 = *(unsigned int *)(v3 + 516); /*0x603ae6*/
    if ( !v3 ) /*0x603aee*/
      return 0; /*0x603aee*/
  }
  v5 = v3 + 4; /*0x603b00*/
  if ( v3 == -4 ) /*0x603b05*/
    return 0; /*0x603b05*/
  v6 = *(unsigned int *)(v3 + 112); /*0x603b07*/
  if ( v6 != 269 /*0x603b91*/
    && v6 != 217
    && v6 != 240
    && v6 != 206
    && v6 != 288
    && v6 != 289
    && v6 != 277
    && v6 != 211
    && v6 != 207
    && v6 != 287
    && v6 != 195
    && v6 != 283
    && v6 != 225
    && v6 != 286
    && v6 != 196
    && v6 != 304
    && v6 != 208
    && v6 != 252
    && v6 != 294 )
  {
    return 0; /*0x603b91*/
  }
  *(unsigned int *)(v5 + 176) = 2; /*0x603b97*/
  hWnd = a2; /*0x603bac*/
  GetClassNameA(a2, ClassName, 128); /*0x603bb0*/
  if ( !strcmp(ClassName, g_INI_Key_Edit) || !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x603c05*/
    return 192; /*0x603c2c*/
  if ( !strcmp(ClassName,(const char *)(g_INI_Key_ListBox)) /*0x603c99*/
    && dword_AC1B04
    && (v7 = *((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&hWnd)) & ((1 << dword_AC1B0C) - 1)))) != 0 )
  {
    v8 = hWnd; /*0x603c9b*/
    while ( *(HWND *)v7 != hWnd ) /*0x603ca1*/
    {
      v7 = *(unsigned int *)(v7 + 516); /*0x603ca3*/
      if ( !v7 ) /*0x603cab*/
        goto LABEL_37; /*0x603cab*/
    }
    v9 = *(unsigned int *)(v7 + 108) == 1; /*0x603cb7*/
  }
  else
  {
    v8 = hWnd; /*0x603cbc*/
  LABEL_37:
    if ( strcmp(ClassName,(const char *)(g_INI_Key_ComboBox)) ) /*0x603cd1*/
      return 0; /*0x603cf8*/
    v9 = (GetWindowLongA(v8, -16) & 3) != 3; /*0x603d0c*/
  }
  if ( !v9 ) /*0x603d11*/
    return 0; /*0x603afb*/
  return 192; /*0x603af0*/
}
}
// 0x603D30
namespace gamemd {
void * CacheDialogInvalidate(HWND hWnd, HWND a2)
{
  HWND *result; // eax
  HWND v5; // [esp+8h] [ebp-4h] BYREF

  result = (HWND *)dword_AC1B04; /*0x603d31*/
  v5 = hWnd; /*0x603d3e*/
  if ( dword_AC1B04 ) /*0x603d42*/
  {
    result = (HWND *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v5)) & ((1 << dword_AC1B0C) - 1))); /*0x603d63*/
    if ( result ) /*0x603d68*/
    {
      while ( *result != v5 ) /*0x603d70*/
      {
        result = (HWND *)result[129]; /*0x603d72*/
        if ( !result ) /*0x603d7a*/
          return result; /*0x603d7a*/
      }
      if ( ++result ) /*0x603d89*/
      {
        result[28] = (HWND)2; /*0x603d90*/
        result[5] = a2; /*0x603d97*/
        return (HWND *)InvalidateRect(hWnd, 0, 1); /*0x603d9a*/
      }
    }
  }
  return result; /*0x603d7c*/
}
}
// 0x603E40
namespace gamemd {
unsigned int * sub_603E40(int a1, int a2)
{
  unsigned int *result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (unsigned int *)dword_AC1B04; /*0x603e41*/
  v4 = a1; /*0x603e4b*/
  if ( dword_AC1B04 ) /*0x603e4f*/
  {
    result = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v4)) & ((1 << dword_AC1B0C) - 1))); /*0x603e70*/
    if ( result ) /*0x603e75*/
    {
      while ( *result != v4 ) /*0x603e7d*/
      {
        result = (unsigned int *)result[129]; /*0x603e7f*/
        if ( !result ) /*0x603e87*/
          return result; /*0x603e87*/
      }
      if ( ++result ) /*0x603e95*/
        result[48] = a2; /*0x603e97*/
    }
  }
  return result; /*0x603e89*/
}
}
// 0x604060
namespace gamemd {
wchar_t ** GetSkirmishMenuOwnerName(SkirmishDialog * aP0, HWND a2, HWND a3)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax

  v4 = (char *)(DlgSkirmishMenuProc( (HWND)(a2), (HWND)(a3)));
  if ( v4 ) /*0x604072*/
  {
    StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)v4, 0,(const char *)(g_Str_File_ownrdraw_cpp), 1957));
    ((WideString *)((WideString *)aP0))->Assign( (wchar_t *)(StringCSF)); /*0x60408a*/
  }
  else
  {
    ((WideString *)((WideString *)aP0))->Assign((wchar_t *)(&g_TypeClass_DefaultString)); /*0x60409c*/
  }
  return (wchar_t **)(aP0);
}
}
// 0x6040B0
namespace gamemd {
AbstractClass * * DlgSkirmishMenuProc(HWND a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  char *result; // eax
  unsigned int *v6; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  int v9; // eax
  unsigned int *v10; // eax
  unsigned int *v11; // eax
  int v12; // eax
  HWND v13; // [esp+8h] [ebp-4h] BYREF

  v13 = a1; /*0x6040bc*/
  if ( !dword_AC1B04 ) /*0x6040c0*/
    goto LABEL_5; /*0x6040c0*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v13)) & ((1 << dword_AC1B0C) - 1))); /*0x6040e1*/
  if ( !v3 ) /*0x6040e6*/
    goto LABEL_5; /*0x6040e6*/
  while ( (HWND)*v3 != v13 ) /*0x6040ee*/
  {
    v3 = (unsigned int *)v3[129]; /*0x6040f0*/
    if ( !v3 ) /*0x6040f8*/
      goto LABEL_5; /*0x6040f8*/
}
}
}
// 0x606740
namespace gamemd {
int Dialog_SetActiveFlag(int a1, char a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = dword_AC1B04; /*0x606741*/
  v4 = a1; /*0x60674b*/
  if ( dword_AC1B04 ) /*0x60674f*/
  {
    result = *((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v4)) & ((1 << dword_AC1B0C) - 1))); /*0x606770*/
    if ( result ) /*0x606775*/
    {
      while ( *(unsigned int *)result != v4 ) /*0x60677d*/
      {
        result = *(unsigned int *)(result + 516); /*0x60677f*/
        if ( !result ) /*0x606787*/
          return result; /*0x606787*/
      }
      result += 4; /*0x606790*/
      if ( result ) /*0x606795*/
        *(unsigned char *)(result + 188) = a2; /*0x606797*/
    }
  }
  return result; /*0x606789*/
}
}
// 0x6071E0
namespace gamemd {
AbstractClass * * GadgetClass_RenderAnimation(HWND a1, char a2)
{
  HWND v23; // edi
  HWND v62; // [esp+3Ch] [ebp-188h] BYREF
  void *Block; // [esp+4Ch] [ebp-178h]
  HWND hWnd; // [esp+64h] [ebp-160h]
  struct tagRECT v112; // [esp+174h] [ebp-50h] BYREF
  struct tagRECT Rect; // [esp+184h] [ebp-40h] BYREF

  int v2 = (int)a1;
  hWnd = a1;
  v62 = a1;
  if ( !g_DialogHashMap_Count )
    goto LABEL_6;
  int v3 = ((HashTable_flat*)(unsigned int *)((int)&g_DialogHashMap_Base))->ComputeHash((int)&v62);
  a1 = (HWND)g_DialogHashMap_Base;
  unsigned int * v4 = (unsigned int *)*((unsigned int *)g_DialogHashMap_Base + v3);
  if ( !v4 )
    goto LABEL_6;
  a1 = v62;
  while ( (HWND)*v4 != v62 )
  {
    unsigned int v63 = 0;  /* G37 hoist */
    v4 = (unsigned int *)v4[129];
    if ( !v4 )
      goto LABEL_6;
  }
  unsigned int * v7 = v4 + 1;
  if ( v7 )
    char v63 = *((unsigned char *)v7 + 215);
  else
LABEL_6:
    v63 = 0;
  v62 = (HWND)v2;
  if ( !g_DialogHashMap_Count )
    goto LABEL_17;
  int v5 = ((HashTable_flat*)((int)&g_DialogHashMap_Base))->ComputeHash((int)&v62);
  a1 = (HWND)g_DialogHashMap_Base;
  unsigned int * v6 = (unsigned int *)*((unsigned int *)g_DialogHashMap_Base + v5);
  if ( !v6 )
    goto LABEL_17;
  a1 = v62;
  while ( (HWND)*v6 != v62 )
  {
    unsigned int v60 = 0;  /* G37 hoist */
    v6 = (unsigned int *)v6[129];
    if ( !v6 )
      goto LABEL_17;
  }
  unsigned int * v8 = v6 + 1;
  if ( v8 )
    char v60 = *((unsigned char *)v8 + 214);
  else
LABEL_17:
    v60 = 0;
  v62 = (HWND)v2;
  if ( !g_DialogHashMap_Count )
    goto LABEL_23;
  int v9 = ((HashTable_flat*)((int)&g_DialogHashMap_Base))->ComputeHash((int)&v62);
  a1 = (HWND)g_DialogHashMap_Base;
  unsigned int * v10 = (unsigned int *)*((unsigned int *)g_DialogHashMap_Base + v9);
  if ( !v10 )
    goto LABEL_23;
  a1 = v62;
  while ( (HWND)*v10 != v62 )
  {
    unsigned int v61 = 0;  /* G37 hoist */
    v10 = (unsigned int *)v10[129];
    if ( !v10 )
      goto LABEL_23;
  }
  unsigned int * v34 = v10 + 1;
  if ( v34 )
    char v61 = *((unsigned char *)v34 + 213);
  else
LABEL_23:
    v61 = 0;
  int v85 = VtableStub_72E280(a1);
  int * v65 = (int *)UI_Helper_72E2C0();
  void * v79 = DataGlobal_B0FAF8;
  int v69[2]; // [esp+58h] [ebp-16Ch] BYREF
  v69[0] = (int)DataGlobal_B0FAC4;
  void * v73 = DataGlobal_B0F9DC;
  void * v105 = DataGlobal_B0FAC0;
  int v11 = VtableStub_72D450();
  int v12 = (int)(DataGlobal_B0FA20);
  void * v80 = DataGlobal_B0FB00;
  v62 = (HWND)v11;
  int v13 = *(unsigned int *)DSurface_Alternate;
  int v70 = (int)(DataGlobal_B0FA20);
  int v82; // [esp+9Ch] [ebp-128h] BYREF
  int * v14 = (int *)(*(int (**)(int, int *))(v13 + 120))( DSurface_Alternate, (int *)(&v82));
  int v72[4]; // [esp+68h] [ebp-15Ch] BYREF
  v72[0] = *v14;
  v72[1] = v14[1];
  v72[2] = v14[2];
  v72[3] = v14[3];
  int v109[4]; // [esp+144h] [ebp-80h] BYREF
  v109[0] = *(unsigned int *)DataGlobal_B0FC20;
  v109[1] = *((unsigned int *)DataGlobal_B0FC20 + 1);
  v109[2] = *((unsigned int *)DataGlobal_B0FC20 + 2);
  v109[3] = *((unsigned int *)DataGlobal_B0FC20 + 3);
  int v107[4]; // [esp+124h] [ebp-A0h] BYREF
  v107[0] = *(unsigned int *)DataGlobal_B0FC14;
  v107[1] = *((unsigned int *)DataGlobal_B0FC14 + 1);
  v107[2] = *((unsigned int *)DataGlobal_B0FC14 + 2);
  v107[3] = *((unsigned int *)DataGlobal_B0FC14 + 3);
  int v97 = *(unsigned int *)DataGlobal_B0FC18;
  int v98 = *((unsigned int *)DataGlobal_B0FC18 + 1);
  int v99 = *((unsigned int *)DataGlobal_B0FC18 + 2);
  int v100 = *((unsigned int *)DataGlobal_B0FC18 + 3);
  int v15 = *(unsigned int *)DataGlobal_B0FC10;
  v82 = *(unsigned int *)DataGlobal_B0FC10;
  int v83 = *((unsigned int *)DataGlobal_B0FC10 + 1);
  int v16 = v83;
  int v17 = *((unsigned int *)DataGlobal_B0FC10 + 2);
  int v18 = *(unsigned int *)g_GadgetAnimState;
  int v84 = *((unsigned int *)DataGlobal_B0FC10 + 3);
  int v93 = v18;
  int v94 = *((unsigned int *)g_GadgetAnimState + 1);
  int v95 = *((unsigned int *)g_GadgetAnimState + 2);
  int v96 = *((unsigned int *)g_GadgetAnimState + 3);
  ScreenDialogToClient( (void *)((void *)(hWnd)), (void *)(&v112));
  GetWindowRect(hWnd, &Rect);
  int v19 = Rect.left - v112.left;
  int v20 = Rect.top - v112.top;
  int v21 = v16;
  int v22 = v12 * v84;
  if ( v61 )
  {
    v15 = v97;
    v17 = v99;
    v21 = v98;
    v22 += v83;
  }
  unsigned int v110[4]; // [esp+154h] [ebp-70h] BYREF
  v110[1] = v21;
  unsigned int v106[4]; // [esp+114h] [ebp-B0h] BYREF
  v106[1] = v20 + v21;
  v110[3] = v22;
  v106[3] = v22;
  v110[0] = v15;
  unsigned int v111[4]; // [esp+164h] [ebp-60h] BYREF
  v111[0] = v93;
  v111[1] = v94;
  v106[0] = v19 + v15;
  v110[2] = v17;
  int v68 = a2 != 0 ? -1 : 1;
  v106[2] = v17;
  v111[2] = v95;
  v111[3] = v96;
  unsigned int v108[4]; // [esp+134h] [ebp-90h] BYREF
  v108[2] = v95;
  v108[3] = v96;
  v108[0] = v19 + v93;
  v108[1] = v20 + v94;
  int v78 = 5;
  if ( a2 )
    v78 = 10;
  int v87 = 11;
  if ( a2 )
    v87 = 16;
  int v89 = 1;
  if ( a2 )
    v89 = 6;
  int v86 = 0;
  if ( a2 )
    v86 = 5;
  int v88 = 0;
  if ( a2 )
    v88 = 5;
  v23 = hWnd;
  DataGlobal_AC1CAC = (unsigned char *)(0);
  EnumChildWindows(hWnd, EnumFunc, 0);
  int v24 = v70;
  int v74 = (int)(DataGlobal_AC1CAC);
  int v75 = v70 - 1;
  int v81 = v83;
  if ( v60 )
    v81 = v83 + v84;
  DataGlobal_AC4894 = (unsigned char *)(0);
  EnumChildWindows(v23, sub_60A250, 0);
  int v67; // [esp+50h] [ebp-174h]
  IDA_HIBYTE(v67) = DataGlobal_AC4894 >= 1;
  if ( DataGlobal_AC4894 < 1 )
    ++v75;
  int v25 = v24 + 1;
  int v101 = v24 + 1;
  int * v26 = (int *)operator new(4 * (v24 + 3));
  Block = (unsigned int)v26;
  int v27 = 1;
  if ( v24 + 1 > 0 )
  {
    int * v28 = v26;
    do
      *v28++ = v27++;
    while ( v27 - 1 < v25 );
  }
  int v29 = v24 + 3;
  int v30 = 0;
  v26[v29 - 1] = 0;
  v26[v25] = v27 + 1;
  v26[v29 - 3] = 0;
  if ( v24 + 3 > 0 )
  {
    do
    {
      if ( v30 <= *v26 )
        v30 = *v26;
      ++v26;
      --v29;
    }
    while ( v29 );
  }
  int v64 = 0;
  int v104 = v30 + 6;
  if ( v30 + 6 > 0 )
  {
    int v31 = (int)v65;
    int v32 = v85;
    int v33 = v69[0];
    while ( 1 )
    {
  void *v57; // edx
      int v35 = (int)v73;
      if ( v60 )
      {
  int v116; // [esp+1A4h] [ebp-20h] BYREF
        int * v36 = (int *)(Copy8Bytes(&v116, v107));
  int v102[2]; // [esp+FCh] [ebp-C8h] BYREF
        v102[0] = *v36;
        v102[1] = v36[1];
        int v37 = v64 - *((unsigned int *)Block + v70);
        if ( v37 < 0 )
        {
          DrawToSurfaceSHP(DSurface_Alternate, v32,(gamemd::ConvertClass *)(v35), a2 != 0 ? 6 : 0, (gamemd::ConvertClass *)v102, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        }
        else if ( v37 >= 6 && !a2 )
        {
          DrawToSurfaceSHP(DSurface_Alternate, v32,(gamemd::ConvertClass *)(v35), 6u, (gamemd::ConvertClass *)v102, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        }
      }
      if ( v61 )
      {
  int v114; // [esp+194h] [ebp-30h] BYREF
        int * v38 = (int *)(Copy8Bytes(&v114, &v97));
        int v76 = *v38;
        int v77 = v38[1];
        int v39 = v64 - *((unsigned int *)Block + v101);
        if ( v39 < 0 )
        {
          DrawToSurfaceSHP( DSurface_Alternate, v32, (gamemd::ConvertClass *)((int)v79), a2 == 0, (ConvertClass *)(&v76), (ConvertClass *)(v72), 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        }
        else if ( v39 >= 6 )
        {
          DrawToSurfaceSHP( DSurface_Alternate, v32, (gamemd::ConvertClass *)((int)v79), a2 != 0, (ConvertClass *)(&v76), (ConvertClass *)(v72), 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        }
        else
        {
  int v118; // [esp+1B4h] [ebp-10h] BYREF
          int * v40 = (int *)(Copy8Bytes(&v118, v109));
          v76 = *v40;
          v77 = v40[1];
          DrawToSurfaceSHP( DSurface_Alternate, v32, (gamemd::ConvertClass *)((int)v79), 1u, (ConvertClass *)(&v76), (ConvertClass *)(v72), 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
  int v117; // [esp+1ACh] [ebp-18h] BYREF
          int * v41 = (int *)(Copy8Bytes(&v117, &v97));
          v76 = *v41;
          v77 = v41[1];
          DrawToSurfaceSHP(
            DSurface_Alternate,
            v32,
            (gamemd::ConvertClass *)(int)v105,
            v86 + v68 * v39,
            &v76,
            v72,
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
      }
      if ( v60 )
      {
  int v119; // [esp+1BCh] [ebp-8h] BYREF
        int * v42 = (int *)(Copy8Bytes(&v119, v107));
  int v103[2]; // [esp+104h] [ebp-C0h] BYREF
        v103[0] = *v42;
        v103[1] = v42[1];
        int v43 = v64 - *((unsigned int *)Block + v70);
        if ( v43 < 0 )
        {
          v43 = -1;
LABEL_68:
          DrawToSurfaceSHP(
            DSurface_Alternate,
            v32,
            (gamemd::ConvertClass *)(int)v73,
            v89 + v68 * v43,
            (gamemd::ConvertClass *)v103,
            (gamemd::ConvertClass *)v72,
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
          goto LABEL_69;
        }
        if ( v43 < 6 )
          goto LABEL_68;
        if ( a2 )
          DrawToSurfaceSHP(DSurface_Alternate, v32,(gamemd::ConvertClass *)((int)v73), 0, (gamemd::ConvertClass *)v103, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
      }
LABEL_69:
      if ( v74 > 0 )
      {
        unsigned int * v44 = (unsigned int *)(Block);
        int v45 = v81;
        v65 = (int *)v74;
        do
        {
          int v46 = v64 - *v44;
  int v90[2]; // [esp+C0h] [ebp-104h] BYREF
          v90[0] = v82;
          v90[1] = v45;
          if ( v46 < 0 )
          {
            DrawToSurfaceSHP(DSurface_Alternate, v31,(gamemd::ConvertClass *)(v33), a2 != 0 ? 10 : 1, (gamemd::ConvertClass *)v90, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          }
          else if ( v46 >= 6 )
          {
            DrawToSurfaceSHP(DSurface_Alternate, v31,(gamemd::ConvertClass *)(v33), a2 != 0 ? 1 : 10, (gamemd::ConvertClass *)v90, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          }
          else
          {
            DrawToSurfaceSHP(DSurface_Alternate, v31,(gamemd::ConvertClass *)(v33), v78 + v68 * v46, (gamemd::ConvertClass *)v90, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          }
          ++v44;
          v45 += v84;
          v65 = (int *)((char *)v65 - 1);
        }
        while ( v65 );
      }
      if ( v74 < v75 )
      {
  int v92[2]; // [esp+D0h] [ebp-F4h] BYREF
  int v50; // eax
        v65 = (int *)((char *)Block + 4 * v74);
        int v47 = v81 + v84 * v74;
        int v48 = v75 - v74;
        while ( 1 )
        {
          v92[0] = v82;
          int v49 = *v65;
          v92[1] = v47;
          v50 = v64 - v49;
          if ( v64 - v49 >= 0 )
          {
            if ( v50 >= 6 )
              goto LABEL_87;
            if ( v50 != -1 )
              break;
          }
          DrawToSurfaceSHP(DSurface_Alternate, v31,(gamemd::ConvertClass *)(v33), a2 != 0 ? 0xA : 0, (gamemd::ConvertClass *)v92, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
LABEL_89:
          v47 += v84;
          --v48;
          ++v65;
          if ( !v48 )
            goto LABEL_90;
        }
        if ( v50 != -2 )
        {
          DrawToSurfaceSHP(DSurface_Alternate, v31,(gamemd::ConvertClass *)(v33), v87 + v68 * v50, (gamemd::ConvertClass *)v92, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          goto LABEL_89;
        }
LABEL_87:
        DrawToSurfaceSHP(DSurface_Alternate, v31,(gamemd::ConvertClass *)(v33), a2 != 0 ? 0 : 10, (gamemd::ConvertClass *)v92, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        goto LABEL_89;
      }
LABEL_90:
      if ( IDA_HIBYTE(v67) )
      {
        int v51 = *((unsigned int *)DataGlobal_B0FC28 + 1);
  int v91[2]; // [esp+C8h] [ebp-FCh] BYREF
        v91[0] = v82;
        int v52 = *((unsigned int *)Block + v70 - 1);
        v91[1] = v51 - v84;
        int v53 = v64 - v52;
        if ( v64 - v52 < 0 )
          goto LABEL_94;
        if ( v53 >= 6 )
          goto LABEL_96;
        if ( v53 == -1 )
        {
LABEL_94:
          DrawToSurfaceSHP(DSurface_Alternate, v31,(gamemd::ConvertClass *)(v33), a2 != 0 ? 10 : 1, (gamemd::ConvertClass *)v91, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          goto LABEL_98;
        }
        if ( v53 == -2 )
LABEL_96:
          DrawToSurfaceSHP(DSurface_Alternate, v31,(gamemd::ConvertClass *)(v33), a2 != 0 ? 1 : 10, (gamemd::ConvertClass *)v91, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        else
          DrawToSurfaceSHP(DSurface_Alternate, v31,(gamemd::ConvertClass *)(v33), v78 + v68 * v53, (gamemd::ConvertClass *)v91, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
      }
LABEL_98:
      char v54 = v63;
      if ( !v63 )
        goto LABEL_116;
  int v115; // [esp+19Ch] [ebp-28h] BYREF
      int * v55 = (int *)(Copy8Bytes(&v115, &v93));
      v69[0] = *v55;
      v69[1] = v55[1];
      int v56 = v64 - *((unsigned int *)Block + v70 + 2);
      if ( v56 < 0 )
      {
        if ( a2 )
        {
          v57 = (void *)(DataGlobal_B0FB34);
        }
        else
        {
          if ( g_DDraw_Active >= 800 )
            v69[0] += 80;
          v57 = v80;
        }
        goto LABEL_106;
      }
      if ( v56 >= 6 )
      {
        if ( a2 )
        {
          if ( g_DDraw_Active >= 800 )
            v69[0] += 80;
          v57 = v80;
        }
        else
        {
          v57 = (void *)(DataGlobal_B0FB34);
        }
LABEL_106:
        DrawToSurfaceSHP(DSurface_Alternate, (int)v62,(gamemd::ConvertClass *)((int)v57), 0, (gamemd::ConvertClass *)v69, (gamemd::ConvertClass *)v72, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        goto LABEL_116;
      }
      if ( g_DDraw_Active >= 800 )
        v69[0] += 80;
      DrawToSurfaceSHP(
        DSurface_Alternate,
        (int)v62,
        (gamemd::ConvertClass *)(int)v80,
        v88 + v68 * v56,
        (gamemd::ConvertClass *)v69,
        (gamemd::ConvertClass *)v72,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
LABEL_116:
      (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)g_DSurface_Primary + 92))(g_DSurface_Primary, 0, 0);
      (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
(*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)g_DSurface_Primary + 8))( g_DSurface_Primary, (unsigned int *)(v106), DSurface_Alternate, (unsigned int *)(v110), 0, 1);






      if ( v54 )
(*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)g_DSurface_Primary + 8))( g_DSurface_Primary, (unsigned int *)(v108), DSurface_Alternate, (unsigned int *)(v111), 0, 1);






      (*(void (**)(int))(*(unsigned int *)DSurface_Alternate + 96))(DSurface_Alternate);
      (*(void (**)(int))(*(unsigned int *)g_DSurface_Primary + 96))(g_DSurface_Primary);
      UpdateAudioVideo();
      Sleep(0x1Eu);
      if ( ++v64 >= v104 )
        break;
      v32 = v85;
    }
  }
  RA2_OPDEL(Block);
  if ( !a2 )
    return (gamemd::AbstractClass **)(SendMessageA( (HWND)(hWnd), 0x4EDu, 0, 0));
  PlayVocClass(*((unsigned int *)g_RulesClass_Instance + 468), 0x2000, 1.0, 0);
  while ( (*(int (**)(int))(*(unsigned int *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) )
    (*(void (**)(int))(*(unsigned int *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance);
  return (gamemd::AbstractClass **)(SendMessageA( (HWND)(hWnd), 0x4ECu, 0, 0));
}
} // namespace gamemd

// 0x608500
namespace gamemd {
AbstractClass * * ControlDialogHandler(int a1, HWND a2, unsigned int * a3)
{
  int v4; // esi
  int DlgCtrlID; // eax
  unsigned int *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [esp+8h] [ebp-8h] BYREF
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v16 = a1; /*0x608504*/
  v15 = 0; /*0x60851a*/
  HashTable::Get( (void *)(&dword_AC1B00), (IUnknown *)(&v16), (IUnknown *)(&v15)); /*0x608522*/
  if ( v15 ) /*0x60852d*/
    v4 = *(unsigned int *)(v15 + 108); /*0x60852f*/
  else
    v4 = 0; /*0x608534*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x608537*/
  if ( v4 != 148 ) /*0x608543*/
  {
    if ( v4 == 259 ) /*0x6086da*/
    {
      if ( DlgCtrlID != 1835 ) /*0x6086e1*/
        return 0; /*0x6086e1*/
      v7 = *((unsigned int *)dword_A8B230 + 3374); /*0x6086f8*/
      if ( g_DisplayWidth >= 800 ) /*0x608700*/
      {
        if ( v7 ) /*0x608704*/
        {
  LABEL_31:
          v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608706*/
          if ( !v6 ) /*0x608715*/
            return 0; /*0x608715*/
          *v6 = 103; /*0x60871b*/
  LABEL_47:
          v6[1] = 130; /*0x6087d2*/
          v6[2] = 424; /*0x6087d9*/
          v6[3] = 230; /*0x6087e0*/
          goto LABEL_143; /*0x6087e7*/
        }
        goto LABEL_39; /*0x608704*/
      }
      if ( !v7 ) /*0x608728*/
        goto LABEL_43; /*0x608728*/
      goto LABEL_45; /*0x608728*/
    }
    if ( v4 == 3015 ) /*0x608736*/
    {
      if ( DlgCtrlID != 1835 ) /*0x608741*/
        return 0; /*0x608741*/
      v8 = *((unsigned int *)dword_A8B230 + 3374); /*0x608753*/
      if ( g_DisplayWidth >= 800 ) /*0x608761*/
      {
        if ( v8 ) /*0x608765*/
          goto LABEL_31; /*0x608765*/
  LABEL_39:
        v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608767*/
        if ( !v6 ) /*0x608773*/
          return 0; /*0x608773*/
        *v6 = 104; /*0x608779*/
  LABEL_41:
        v6[1] = 142; /*0x60877f*/
        v6[2] = 424; /*0x608786*/
        v6[3] = 220; /*0x60878d*/
        goto LABEL_143; /*0x608794*/
      }
      if ( !v8 ) /*0x60879b*/
      {
  LABEL_43:
        v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x60879d*/
        if ( !v6 ) /*0x6087a9*/
          return 0; /*0x6087a9*/
        *v6 = 24; /*0x6087af*/
        goto LABEL_41; /*0x6087b5*/
      }
  LABEL_45:
      v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x6087b7*/
      if ( !v6 ) /*0x6087c6*/
        return 0; /*0x6087c6*/
      *v6 = 23; /*0x6087cc*/
      goto LABEL_47; /*0x6087cc*/
    }
    if ( v4 == 188 ) /*0x6087f2*/
    {
      switch ( DlgCtrlID ) /*0x6087fd*/
      {
        case 1839: /*0x6087fd*/
          v9 = g_DisplayWidth; /*0x6087ff*/
          if ( g_DisplayWidth == 640 ) /*0x60880c*/
            goto LABEL_51; /*0x60880c*/
          goto LABEL_80; /*0x60880c*/
        case 1842: /*0x6087fd*/
          goto LABEL_54; /*0x608849*/
        case 1934: /*0x6087fd*/
          goto LABEL_58; /*0x608874*/
        case 1933: /*0x6087fd*/
          goto LABEL_62; /*0x60889f*/
      }
    }
    else
    {
      if ( v4 != 189 ) /*0x6088fa*/
      {
        if ( v4 == 194 ) /*0x60893f*/
        {
          if ( DlgCtrlID != 1839 ) /*0x60894a*/
          {
            switch ( DlgCtrlID ) /*0x608975*/
            {
              case 1842: /*0x608975*/
                if ( g_DisplayWidth == 640 ) /*0x608984*/
                {
                  v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608988*/
                  if ( !v6 ) /*0x608992*/
                    return 0; /*0x608992*/
                  *v6 = 110; /*0x608998*/
  LABEL_116:
                  v6[1] = 215; /*0x608b49*/
                  v6[2] = 266; /*0x608b50*/
                  v6[3] = 22; /*0x608b57*/
                  goto LABEL_143; /*0x608b5e*/
                }
                if ( g_DisplayWidth != 800 && g_DisplayWidth != 1024 ) /*0x6089b1*/
                  return 0; /*0x6089b1*/
                v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x6089b9*/
                if ( !v6 ) /*0x6089c3*/
                  return 0; /*0x6089c3*/
                *v6 = 180; /*0x6089c9*/
  LABEL_111:
                v6[1] = 215; /*0x608b03*/
                v6[2] = 266; /*0x608b0a*/
                v6[3] = 21; /*0x608b11*/
                goto LABEL_143; /*0x608b18*/
              case 1934: /*0x608975*/
                goto LABEL_58; /*0x6089d9*/
              case 1933: /*0x608975*/
                goto LABEL_62; /*0x6089e4*/
            }
            if ( DlgCtrlID != 1932 ) /*0x6089ef*/
              return 0; /*0x6089ef*/
            v13 = g_DisplayWidth; /*0x6089f5*/
            if ( g_DisplayWidth != 640 ) /*0x608a02*/
            {
              if ( g_DisplayWidth != 800 ) /*0x608a0e*/
                goto LABEL_95; /*0x608a0e*/
              goto LABEL_96; /*0x608a0e*/
            }
  LABEL_135:
            v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608c42*/
            if ( !v6 ) /*0x608c4e*/
              return 0; /*0x608c4e*/
            *v6 = 346; /*0x608c50*/
            goto LABEL_141; /*0x608c56*/
          }
          v9 = g_DisplayWidth; /*0x60894c*/
          if ( g_DisplayWidth != 640 ) /*0x608959*/
            goto LABEL_80; /*0x608959*/
        }
        else
        {
          if ( v4 != 201 ) /*0x608a39*/
            return 0; /*0x608a39*/
          if ( DlgCtrlID != 1839 ) /*0x608a44*/
          {
            switch ( DlgCtrlID ) /*0x608ad6*/
            {
              case 1842: /*0x608ad6*/
                v10 = g_DisplayWidth; /*0x608adc*/
                if ( g_DisplayWidth != 640 ) /*0x608ae9*/
                {
                  if ( g_DisplayWidth != 800 ) /*0x608b23*/
                    goto LABEL_113; /*0x608b23*/
                  goto LABEL_114; /*0x608b23*/
                }
                goto LABEL_109; /*0x608ae9*/
              case 1934: /*0x608ad6*/
                v11 = g_DisplayWidth; /*0x608b6a*/
                if ( g_DisplayWidth != 640 ) /*0x608b77*/
                {
                  if ( g_DisplayWidth != 800 ) /*0x608b9c*/
                    goto LABEL_122; /*0x608b9c*/
                  goto LABEL_123; /*0x608b9c*/
                }
  LABEL_119:
                v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608b79*/
                if ( !v6 ) /*0x608b85*/
                  return 0; /*0x608b85*/
                *v6 = 80; /*0x608b8b*/
                goto LABEL_141; /*0x608b91*/
              case 1933: /*0x608ad6*/
                v12 = g_DisplayWidth; /*0x608bce*/
                if ( g_DisplayWidth != 640 ) /*0x608bdb*/
                {
                  if ( g_DisplayWidth != 800 ) /*0x608c00*/
                    goto LABEL_130; /*0x608c00*/
                  goto LABEL_131; /*0x608c00*/
                }
  LABEL_127:
                v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608bdd*/
                if ( !v6 ) /*0x608be9*/
                  return 0; /*0x608be9*/
                *v6 = 228; /*0x608bef*/
                goto LABEL_141; /*0x608bf5*/
            }
            if ( DlgCtrlID != 1932 ) /*0x608c2d*/
              return 0; /*0x608c2d*/
            if ( g_DisplayWidth != 640 ) /*0x608c40*/
            {
              if ( g_DisplayWidth != 800 && g_DisplayWidth != 1024 ) /*0x608c66*/
                return 0; /*0x608c66*/
              v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608c6a*/
              if ( !v6 ) /*0x608c74*/
                return 0; /*0x608c74*/
  LABEL_140:
              *v6 = 430; /*0x608c76*/
  LABEL_141:
              v6[1] = 190; /*0x608c7c*/
              v6[2] = 75; /*0x608c83*/
              goto LABEL_142; /*0x608c83*/
            }
            goto LABEL_135; /*0x608c40*/
          }
          v9 = g_DisplayWidth; /*0x608a4a*/
          if ( g_DisplayWidth != 640 ) /*0x608a57*/
          {
            if ( g_DisplayWidth != 800 ) /*0x608a91*/
              goto LABEL_104; /*0x608a91*/
            goto LABEL_105; /*0x608a91*/
          }
        }
        v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608a5b*/
        if ( v6 ) /*0x608a65*/
        {
          *v6 = 52; /*0x608a6b*/
          v6[1] = 78; /*0x608a71*/
          v6[2] = 396; /*0x608a78*/
          v6[3] = 143; /*0x608a7f*/
          goto LABEL_143; /*0x608a86*/
        }
        return 0; /*0x608a65*/
      }
      switch ( DlgCtrlID ) /*0x608901*/
      {
        case 1839: /*0x608901*/
          v9 = g_DisplayWidth; /*0x608903*/
          if ( g_DisplayWidth == 640 ) /*0x608910*/
          {
  LABEL_51:
            v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608812*/
            if ( v6 ) /*0x60881e*/
            {
              *v6 = 52; /*0x608824*/
              v6[1] = 78; /*0x60882a*/
              v6[2] = 396; /*0x608831*/
              v6[3] = 143; /*0x608838*/
              goto LABEL_143; /*0x60883f*/
            }
            return 0; /*0x60881e*/
          }
  LABEL_80:
          if ( v9 != 800 ) /*0x608965*/
          {
  LABEL_104:
            if ( v9 != 1024 ) /*0x608a99*/
              return 0; /*0x608a99*/
          }
  LABEL_105:
          v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608a9f*/
          if ( v6 ) /*0x608aab*/
          {
            *v6 = 60; /*0x608ab1*/
            v6[1] = 98; /*0x608ab7*/
            v6[2] = 540; /*0x608abe*/
            v6[3] = 143; /*0x608ac5*/
            goto LABEL_143; /*0x608acc*/
          }
          return 0; /*0x608aab*/
        case 1842: /*0x608901*/
  LABEL_54:
          v10 = g_DisplayWidth; /*0x60884b*/
          if ( g_DisplayWidth != 640 ) /*0x608858*/
          {
            if ( g_DisplayWidth != 800 ) /*0x608864*/
            {
  LABEL_113:
              if ( v10 != 1024 ) /*0x608b2b*/
                return 0; /*0x608b2b*/
            }
  LABEL_114:
            v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608b31*/
            if ( !v6 ) /*0x608b3d*/
              return 0; /*0x608b3d*/
            *v6 = 180; /*0x608b43*/
            goto LABEL_116; /*0x608b43*/
          }
  LABEL_109:
          v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608aeb*/
          if ( !v6 ) /*0x608af7*/
            return 0; /*0x608af7*/
          *v6 = 110; /*0x608afd*/
          goto LABEL_111; /*0x608afd*/
        case 1934: /*0x608901*/
  LABEL_58:
          v11 = g_DisplayWidth; /*0x608876*/
          if ( g_DisplayWidth != 640 ) /*0x608883*/
          {
            if ( g_DisplayWidth != 800 ) /*0x60888f*/
            {
  LABEL_122:
              if ( v11 != 1024 ) /*0x608ba4*/
                return 0; /*0x608ba4*/
            }
  LABEL_123:
            v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608baa*/
            if ( !v6 ) /*0x608bb6*/
              return 0; /*0x608bb6*/
            *v6 = 170; /*0x608bbc*/
            goto LABEL_141; /*0x608bc2*/
          }
          goto LABEL_119; /*0x608883*/
        case 1933: /*0x608901*/
  LABEL_62:
          v12 = g_DisplayWidth; /*0x6088a1*/
          if ( g_DisplayWidth != 640 ) /*0x6088ae*/
          {
            if ( g_DisplayWidth != 800 ) /*0x6088ba*/
            {
  LABEL_130:
              if ( v12 != 1024 ) /*0x608c08*/
                return 0; /*0x608c08*/
            }
  LABEL_131:
            v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608c0e*/
            if ( !v6 ) /*0x608c1a*/
              return 0; /*0x608c1a*/
            *v6 = 295; /*0x608c20*/
            goto LABEL_141; /*0x608c26*/
          }
          goto LABEL_127; /*0x6088ae*/
      }
    }
    if ( DlgCtrlID != 1932 ) /*0x6088ca*/
      return 0; /*0x6088ca*/
    v13 = g_DisplayWidth; /*0x6088d0*/
    if ( g_DisplayWidth != 640 ) /*0x6088dd*/
    {
      if ( g_DisplayWidth != 800 ) /*0x6088e9*/
      {
  LABEL_95:
        if ( v13 != 1024 ) /*0x608a16*/
          return 0; /*0x608a16*/
      }
  LABEL_96:
      v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608a1c*/
      if ( !v6 ) /*0x608a28*/
        return 0; /*0x608a28*/
      goto LABEL_140; /*0x608a28*/
    }
    goto LABEL_135; /*0x6088dd*/
  }
  if ( g_DisplayWidth < 800 ) /*0x608557*/
    return 0; /*0x608557*/
  if ( DlgCtrlID == 1770 ) /*0x608562*/
  {
    v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608566*/
    if ( v6 ) /*0x608570*/
    {
      *v6 = 141; /*0x608576*/
      v6[1] = 58; /*0x60857c*/
      v6[2] = 348; /*0x608583*/
      v6[3] = 136; /*0x60858a*/
  LABEL_143:
      *a3 = *v6; /*0x608c95*/
      a3[1] = v6[1]; /*0x608ca3*/
      a3[2] = v6[2]; /*0x608ca9*/
      a3[3] = v6[3]; /*0x608caf*/
      RA2_OPDEL(v6); /*0x608cb2*/
return (gamemd::AbstractClass **)1; /*0x608cc1*/
    }
    return 0; /*0x608570*/
  }
  if ( DlgCtrlID != 1772 ) /*0x60859b*/
  {
    switch ( DlgCtrlID ) /*0x6085d4*/
    {
      case 1295: /*0x6085d4*/
        v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x6085d8*/
        if ( v6 ) /*0x6085e2*/
        {
          *v6 = 177; /*0x6085e8*/
          v6[1] = 265; /*0x6085ee*/
          v6[2] = 272; /*0x6085f5*/
          v6[3] = 22; /*0x6085fc*/
          goto LABEL_143; /*0x608603*/
        }
        return 0; /*0x6085e2*/
      case 1822: /*0x6085d4*/
        v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608611*/
        if ( !v6 ) /*0x60861b*/
          return 0; /*0x60861b*/
        *v6 = 177; /*0x608621*/
        v6[1] = 291; /*0x608627*/
        v6[2] = 141; /*0x60862e*/
        break;
      case 1648: /*0x6085d4*/
        v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608643*/
        if ( !v6 ) /*0x60864d*/
          return 0; /*0x60864d*/
        *v6 = 309; /*0x608653*/
        v6[1] = 291; /*0x608659*/
        v6[2] = 141; /*0x608660*/
        break;
      case 1959: /*0x6085d4*/
        v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x608675*/
        if ( !v6 ) /*0x60867f*/
          return 0; /*0x60867f*/
        *v6 = 10; /*0x608685*/
        v6[1] = 198; /*0x60868b*/
        v6[2] = 610; /*0x608692*/
        break;
      case 1960: /*0x6085d4*/
        v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x6086ab*/
        if ( !v6 ) /*0x6086b5*/
          return 0; /*0x6086b5*/
        *v6 = 10; /*0x6086bb*/
        v6[1] = 505; /*0x6086c1*/
        v6[2] = 610; /*0x6086c8*/
        break;
      default:
        return 0; /*0x6086a3*/
    }
  LABEL_142:
    v6[3] = 20; /*0x608c8a*/
    goto LABEL_143; /*0x608c8a*/
  }
  v6 =(unsigned int *)RA2_OPNEW(0x10u); /*0x60859f*/
  if ( v6 ) /*0x6085a9*/
  {
    *v6 = 141; /*0x6085af*/
    v6[1] = 364; /*0x6085b5*/
    v6[2] = 348; /*0x6085bc*/
    v6[3] = 136; /*0x6085c3*/
    goto LABEL_143; /*0x6085ca*/
  }
  return 0; /*0x608cbc*/
}
}
// 0x608CD0
namespace gamemd {
int IsDialogControlVisible(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int result; // eax
  unsigned int *v6; // eax
  bool v8; // zf
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x608cdc*/
  if ( !dword_AC1B04 ) /*0x608ce0*/
    goto LABEL_5; /*0x608ce0*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x608d01*/
  if ( !v3 ) /*0x608d06*/
    goto LABEL_5; /*0x608d06*/
  while ( *v3 != v9 ) /*0x608d0e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x608d14*/
    if ( !v3 ) /*0x608d1c*/
      goto LABEL_5; /*0x608d1c*/
  }
  v6 = v3 + 1; /*0x608f42*/
  if ( v6 ) /*0x608f47*/
    v4 = v6[27]; /*0x608f4d*/
  else
  LABEL_5:
    v4 = 0; /*0x608d1e*/
  result = GetDlgCtrlID(a2); /*0x608d21*/
  if ( (v4 == 268 /*0x608f32*/
     || v4 == 148
     || v4 == 163
     || v4 == 115
     || v4 == 216
     || v4 == 3003
     || v4 == 245
     || v4 == 261
     || v4 == 226
     || v4 == 213
     || v4 == 693
     || v4 == 183
     || v4 == 692
     || v4 == 3015
     || v4 == 257
     || v4 == 297
     || v4 == 3014
     || v4 == 215
     || v4 == 264
     || v4 == 188
     || v4 == 189
     || v4 == 187
     || v4 == 181
     || v4 == 3002
     || v4 == 255
     || v4 == 107
     || v4 == 256
     || v4 == 258
     || v4 == 184
     || v4 == 214
     || v4 == 259
     || v4 == 293
     || v4 == 231
     || v4 == 278
     || v4 == 194
     || v4 == 201
     || v4 == 285
     || v4 == 284
     || v4 == 276
     || v4 == 700
     || v4 == 275
     || v4 == 265
     || v4 == 271
     || v4 == 279
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 270
     || v4 == 274)
    && result == 1684 )
  {
    IDA_LOBYTE(result) = 1; /*0x608f35*/
    return result; /*0x608f39*/
  }
  if ( (v4 == 148 /*0x609082*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && result == 1820 )
  {
    IDA_LOBYTE(result) = 1; /*0x609085*/
    return result; /*0x609089*/
  }
  if ( (v4 == 188 /*0x6090d4*/
     || v4 == 189
     || v4 == 258
     || v4 == 194
     || v4 == 201
     || v4 == 3014
     || v4 == 261
     || v4 == 107
     || v4 == 275)
    && result == 1128 )
  {
    IDA_LOBYTE(result) = 1; /*0x6090d7*/
    return result; /*0x6090db*/
  }
  switch ( v4 ) /*0x6090e2*/
  {
    case 226: /*0x6090e2*/
      if ( result != 1670 && result != 1400 && result != 1372 && result != 1667 && result != 1375 ) /*0x609115*/
        return result == 1668; /*0x609120*/
      return 1; /*0x609115*/
    case 257: /*0x6090e2*/
      if ( result == 1678 || result == 1677 ) /*0x60913d*/
        return 1; /*0x60913d*/
      return result == 1679; /*0x609148*/
    case 297: /*0x6090e2*/
      IDA_LOBYTE(result) = result == 1861; /*0x609160*/
      return result; /*0x609164*/
    case 256: /*0x6090e2*/
      if ( result == 1673 || result == 1672 ) /*0x60917d*/
        return 1; /*0x60917d*/
      return result == 1401; /*0x609188*/
    case 148: /*0x6090e2*/
      IDA_LOBYTE(result) = result == 1038; /*0x6091a0*/
      return result; /*0x6091a4*/
    case 183: /*0x6090e2*/
      IDA_LOBYTE(result) = result == 1039; /*0x6091b8*/
      return result; /*0x6091bc*/
    case 692: /*0x6090e2*/
      IDA_LOBYTE(result) = result == 1735; /*0x6091d0*/
      return result; /*0x6091d4*/
    case 693: /*0x6090e2*/
      IDA_LOBYTE(result) = result == 1736; /*0x6091e8*/
      return result; /*0x6091ec*/
    case 261: /*0x6090e2*/
      if ( result == 1732 || result == 1730 || result == 1731 ) /*0x609210*/
        return 1; /*0x609210*/
      return result == 1733; /*0x60921b*/
    case 258: /*0x6090e2*/
      if ( result == 1772 || result == 1450 || result == 1448 ) /*0x609243*/
        return 1; /*0x609243*/
      return result == 1559; /*0x60924e*/
    case 181: /*0x6090e2*/
      if ( result == 1314 || result == 1313 || result == 1310 || result == 1311 ) /*0x609281*/
        return 1; /*0x609281*/
      return result == 1312; /*0x60928c*/
    case 3002: /*0x6090e2*/
      if ( result == 1314 ) /*0x60929e*/
        return 1; /*0x60929e*/
      return result == 1313; /*0x609662*/
    case 3003: /*0x6090e2*/
      if ( result == 1324 ) /*0x6092bb*/
        return 1; /*0x6092bb*/
      return result == 1325; /*0x6092c6*/
    case 213: /*0x6090e2*/
      if ( result == 1486 ) /*0x6092d8*/
        return 1; /*0x6092d8*/
      return result == 1485; /*0x6092e3*/
    case 251: /*0x6090e2*/
      if ( result == 6 ) /*0x6092f3*/
        return 1; /*0x6092f3*/
      return result == 1; /*0x6092fc*/
    case 216: /*0x6090e2*/
      IDA_LOBYTE(result) = result == 1739; /*0x609314*/
      return result; /*0x609318*/
    case 215: /*0x6090e2*/
      IDA_LOBYTE(result) = result == 1; /*0x60932a*/
      return result; /*0x60932e*/
    case 188: /*0x6090e2*/
    case 194: /*0x6090e2*/
      return result == 1772 || result == 1416 || result == 1450 || result == 1448 || result == 1474; /*0x60968b*/
    case 189: /*0x6090e2*/
    case 201: /*0x6090e2*/
      if ( result == 1439 || result == 1772 ) /*0x609654*/
        return 1; /*0x609654*/
      v8 = result == 1448; /*0x609656*/
  LABEL_244:
      if ( v8 ) /*0x60965b*/
        return 1; /*0x60965b*/
      return result == 1474; /*0x60965d*/
    case 187: /*0x6090e2*/
      if ( result == 1741 || result == 1740 ) /*0x609377*/
        return 1; /*0x609377*/
      return result == 1742; /*0x609382*/
    case 182: /*0x6090e2*/
      if ( result == 1737 || result == 1810 ) /*0x60939f*/
        return 1; /*0x60939f*/
      return result == 1316; /*0x6093aa*/
    case 107: /*0x6090e2*/
      if ( result == 1411 ) /*0x6093b9*/
        return 1; /*0x6093b9*/
      return result == 1733; /*0x6093c4*/
    case 3014: /*0x6090e2*/
      if ( result == 1745 || result == 1772 ) /*0x6093e1*/
        return 1; /*0x6093e1*/
      return result == 1448; /*0x6093ec*/
    case 271: /*0x6090e2*/
    case 285: /*0x6090e2*/
      return result == 1337 || result == 1772 || result == 1771; /*0x609640*/
    case 265: /*0x6090e2*/
      if ( result == 1 || result == 1573 ) /*0x60941f*/
        return 1; /*0x60941f*/
      return result == 1339; /*0x60942a*/
    case 270: /*0x6090e2*/
    case 284: /*0x6090e2*/
      return result == 1760 || result == 1761 || result == 1762 || result == 1764 || result == 1905 || result == 1375; /*0x609625*/
    case 276: /*0x6090e2*/
      if ( result == 1671 || result == 1772 || result == 1771 || result == 1672 ) /*0x609475*/
        return 1; /*0x609475*/
      return result == 1955; /*0x609480*/
    case 275: /*0x6090e2*/
      if ( result == 1567 /*0x6094d4*/
        || result == 1672
        || result == 1955
        || result == 1958
        || result == 1673
        || result == 1581
        || result == 1579 )
      {
        return 1; /*0x6094d4*/
      }
      v8 = result == 1341; /*0x6094da*/
      goto LABEL_244; /*0x6094df*/
    case 700: /*0x6090e2*/
      if ( result != 1 && result != 1594 ) /*0x6094fa*/
        return 0; /*0x609505*/
      break;
    case 278: /*0x6090e2*/
      if ( result != 1579 && result != 1581 && result != 1474 && result != 1794 && result != 1795 ) /*0x60953f*/
        return 0; /*0x60954a*/
      break;
    case 255: /*0x6090e2*/
      if ( result != 1313 && result != 1314 ) /*0x609563*/
        return 0; /*0x60956e*/
      break;
    case 290: /*0x6090e2*/
      IDA_LOBYTE(result) = result == 1; /*0x609580*/
      return result; /*0x609584*/
    default:
      if ( v4 != 274 ) /*0x60958b*/
      {
        if ( v4 == 231 ) /*0x6095a1*/
          return result == 1 || result == 1398; /*0x6095b1*/
        if ( v4 == 254 ) /*0x6095c3*/
        {
          IDA_LOBYTE(result) = result == 1; /*0x6095ce*/
          return result; /*0x6095d2*/
        }
        if ( v4 != 230 && v4 != 243 && v4 != 244 ) /*0x6095e9*/
        {
          IDA_LOBYTE(result) = 0; /*0x6095ec*/
          return result; /*0x6095f0*/
        }
      }
      IDA_LOBYTE(result) = result == 1; /*0x609596*/
      return result; /*0x60959a*/
  }
  return 1; /*0x608f34*/
}
}
// 0x6096A0
namespace gamemd {
char sub_6096A0(int a1, HWND a2)
{
  HWND *v4; // eax
  unsigned int *v6; // eax
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x6096b5*/
    return 0; /*0x6096b5*/
  v7 = a2; /*0x6096bc*/
  if ( !dword_AC1B04 ) /*0x6096c2*/
    return 0; /*0x6096c2*/
  v4 = (HWND *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v7)) & ((1 << dword_AC1B0C) - 1))); /*0x6096e3*/
  if ( !v4 ) /*0x6096e8*/
    return 0; /*0x6096e8*/
  while ( *v4 != v7 ) /*0x6096f0*/
  {
    v4 = (HWND *)v4[129]; /*0x6096f2*/
    if ( !v4 ) /*0x6096fa*/
      return 0; /*0x6096fa*/
  }
  v6 =(unsigned int *)v4 + 1; /*0x609706*/
  if ( v6 && !v6[26] ) /*0x60970d*/
    return IsDialogControlVisible( a1, (HWND)(a2)); /*0x609718*/
  else
    return 0; /*0x6096fc*/
}
}
// 0x609730
namespace gamemd {
int GetDialogDefaultButton(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int result; // eax
  unsigned int *v6; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = a1; /*0x60973c*/
  if ( !dword_AC1B04 ) /*0x609740*/
    goto LABEL_5; /*0x609740*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v7)) & ((1 << dword_AC1B0C) - 1))); /*0x609761*/
  if ( !v3 ) /*0x609766*/
    goto LABEL_5; /*0x609766*/
  while ( *v3 != v7 ) /*0x60976e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x609770*/
    if ( !v3 ) /*0x609778*/
      goto LABEL_5; /*0x609778*/
  }
  v6 = v3 + 1; /*0x60979f*/
  if ( v6 ) /*0x6097a4*/
    v4 = v6[27]; /*0x6097a6*/
  else
  LABEL_5:
    v4 = 0; /*0x60977a*/
  result = GetDlgCtrlID(a2); /*0x60977d*/
  switch ( v4 ) /*0x609789*/
  {
    case 226: /*0x609789*/
      IDA_LOBYTE(result) = result == 1006; /*0x609796*/
      break;
    case 115: /*0x609789*/
    case 268: /*0x609789*/
    case 259: /*0x609789*/
      IDA_LOBYTE(result) = result == 1059; /*0x609a8c*/
      break;
    case 264: /*0x609789*/
    case 3015: /*0x609789*/
      IDA_LOBYTE(result) = result == 1745; /*0x609a7c*/
      break;
    case 148: /*0x609789*/
    case 182: /*0x609789*/
    case 163: /*0x609789*/
    case 216: /*0x609789*/
    case 3003: /*0x609789*/
    case 245: /*0x609789*/
    case 213: /*0x609789*/
    case 693: /*0x609789*/
    case 183: /*0x609789*/
    case 692: /*0x609789*/
    case 257: /*0x609789*/
    case 297: /*0x609789*/
    case 181: /*0x609789*/
    case 3002: /*0x609789*/
    case 256: /*0x609789*/
    case 184: /*0x609789*/
    case 214: /*0x609789*/
    case 293: /*0x609789*/
    case 278: /*0x609789*/
    case 285: /*0x609789*/
    case 284: /*0x609789*/
    case 275: /*0x609789*/
    case 265: /*0x609789*/
    case 271: /*0x609789*/
    case 276: /*0x609789*/
    case 270: /*0x609789*/
      IDA_LOBYTE(result) = result == 1670; /*0x609a6c*/
      break;
    case 258: /*0x609789*/
    case 261: /*0x609789*/
    case 107: /*0x609789*/
    case 187: /*0x609789*/
    case 279: /*0x609789*/
    case 3014: /*0x609789*/
      IDA_LOBYTE(result) = result == 1472; /*0x609a5c*/
      break;
    case 188: /*0x609789*/
    case 189: /*0x609789*/
    case 234: /*0x609789*/
    case 215: /*0x609789*/
    case 194: /*0x609789*/
    case 201: /*0x609789*/
    case 700: /*0x609789*/
    case 231: /*0x609789*/
    case 230: /*0x609789*/
    case 243: /*0x609789*/
    case 244: /*0x609789*/
    case 290: /*0x609789*/
    case 274: /*0x609789*/
    case 254: /*0x609789*/
    case 252: /*0x609789*/
      IDA_LOBYTE(result) = result == 2; /*0x609a4c*/
      break;
    case 212: /*0x609789*/
      IDA_LOBYTE(result) = result == 1; /*0x609a0a*/
      break;
    case 251: /*0x609789*/
      IDA_LOBYTE(result) = result == 7; /*0x609a20*/
      break;
    default:
      IDA_LOBYTE(result) = v4 == 255 && result == 1653; /*0x609a38*/
      break;
  }
  return result; /*0x609795*/
}
}
// 0x609AA0
namespace gamemd {
bool sub_609AA0(int a1, HWND a2)
{
  HWND *v4; // eax
  unsigned int *v6; // eax
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609ab5*/
    return 0; /*0x609ab5*/
  v7 = a2; /*0x609abc*/
  if ( !dword_AC1B04 ) /*0x609ac2*/
    return 0; /*0x609ac2*/
  v4 = (HWND *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v7)) & ((1 << dword_AC1B0C) - 1))); /*0x609ae3*/
  if ( !v4 ) /*0x609ae8*/
    return 0; /*0x609ae8*/
  while ( *v4 != v7 ) /*0x609af0*/
  {
    v4 = (HWND *)v4[129]; /*0x609af2*/
    if ( !v4 ) /*0x609afa*/
      return 0; /*0x609afa*/
  }
  v6 =(unsigned int *)v4 + 1; /*0x609b06*/
  if ( v6 && !v6[26] ) /*0x609b0d*/
    return GetDialogDefaultButton( a1, (HWND)(a2)); /*0x609b18*/
  else
    return 0; /*0x609afc*/
}
}
// 0x609B30
namespace gamemd {
bool sub_609B30(int a1, HWND a2)
{
  unsigned int *v3; // eax
  void *v4; // esi
  int DlgCtrlID; // edi
  unsigned int *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x609b3c*/
  if ( !dword_AC1B04 ) /*0x609b40*/
    goto LABEL_5; /*0x609b40*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v8)) & ((1 << dword_AC1B0C) - 1))); /*0x609b61*/
  if ( !v3 ) /*0x609b66*/
    goto LABEL_5; /*0x609b66*/
  while ( *v3 != v8 ) /*0x609b6e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x609b70*/
    if ( !v3 ) /*0x609b78*/
      goto LABEL_5; /*0x609b78*/
  }
  v7 = v3 + 1; /*0x609ba2*/
  if ( v7 ) /*0x609ba7*/
    v4 = (void *)v7[27]; /*0x609ba9*/
  else
  LABEL_5:
    v4 = (void *)(0); /*0x609b7a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x609b85*/
// 0x601360
  return ((Event *)(v4))->IsValidActionType() && DlgCtrlID == 1685; /*0x609b98*/
}
}
// 0x609BC0
namespace gamemd {
bool sub_609BC0(int a1, HWND a2)
{
  HWND *v4; // eax
  HWND *v5; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  HWND v9; // [esp+Ch] [ebp-4h] BYREF

  if ( (uint8_t)((SessionClass *)(dword_A8B238))->GetGameSpeed() ) /*0x609bcd*/
    return 0; /*0x609bcd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609bea*/
  {
    v9 = a2; /*0x609bf1*/
    if ( dword_AC1B04 ) /*0x609bf7*/
    {
      v4 = (HWND *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x609c18*/
      if ( v4 ) /*0x609c1d*/
      {
        while ( *v4 != v9 ) /*0x609c25*/
        {
          v4 = (HWND *)v4[129]; /*0x609c27*/
          if ( !v4 ) /*0x609c2f*/
            goto LABEL_7; /*0x609c2f*/
        }
        v7 =(unsigned int *)v4 + 1; /*0x609c95*/
        if ( v7 ) /*0x609c9a*/
        {
          if ( !v7[26] && (uint8_t)IsDialogControlVisible( a1, (HWND)(a2)) ) /*0x609ca7*/
            return 1; /*0x609cb6*/
        }
      }
    }
  }
  LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609c3b*/
    return 0; /*0x609c3b*/
  v9 = a2; /*0x609c46*/
  if ( !dword_AC1B04 ) /*0x609c4c*/
    return 0; /*0x609c4c*/
  v5 = (HWND *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x609c71*/
  if ( !v5 ) /*0x609c76*/
    return 0; /*0x609c76*/
  while ( *v5 != v9 ) /*0x609c7e*/
  {
    v5 = (HWND *)v5[129]; /*0x609c80*/
    if ( !v5 ) /*0x609c88*/
      return 0; /*0x609c90*/
  }
  v8 =(unsigned int *)v5 + 1; /*0x609cbb*/
  return v8 && !v8[26] && (uint8_t)GetDialogDefaultButton( a1, (HWND)(a2)); /*0x609cd8*/
}
}
// 0x609CF0
namespace gamemd {
bool sub_609CF0(int a1, HWND a2)
{
  HWND *v4; // eax
  HWND *v5; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  HWND v9; // [esp+Ch] [ebp-4h] BYREF

  if ( !(uint8_t)((SessionClass *)(dword_A8B238))->GetGameSpeed() ) /*0x609cfd*/
    return 0; /*0x609cfd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609d1a*/
  {
    v9 = a2; /*0x609d21*/
    if ( dword_AC1B04 ) /*0x609d27*/
    {
      v4 = (HWND *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x609d48*/
      if ( v4 ) /*0x609d4d*/
      {
        while ( *v4 != v9 ) /*0x609d55*/
        {
          v4 = (HWND *)v4[129]; /*0x609d57*/
          if ( !v4 ) /*0x609d5f*/
            goto LABEL_7; /*0x609d5f*/
        }
        v7 =(unsigned int *)v4 + 1; /*0x609dc5*/
        if ( v7 ) /*0x609dca*/
        {
          if ( !v7[26] && (uint8_t)IsDialogControlVisible( a1, (HWND)(a2)) ) /*0x609dd7*/
            return 1; /*0x609de6*/
        }
      }
    }
  }
  LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609d6b*/
    return 0; /*0x609d6b*/
  v9 = a2; /*0x609d76*/
  if ( !dword_AC1B04 ) /*0x609d7c*/
    return 0; /*0x609d7c*/
  v5 = (HWND *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x609da1*/
  if ( !v5 ) /*0x609da6*/
    return 0; /*0x609da6*/
  while ( *v5 != v9 ) /*0x609dae*/
  {
    v5 = (HWND *)v5[129]; /*0x609db0*/
    if ( !v5 ) /*0x609db8*/
      return 0; /*0x609dc0*/
  }
  v8 = v5 + 1; /*0x609deb*/
  return v8 && !v8[26] && (uint8_t)GetDialogDefaultButton( a1, (HWND)(a2)); /*0x609e08*/
}
}
// 0x609E20
namespace gamemd {
int FilterDialogButtonAction(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  unsigned int *v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x609e2c*/
  if ( !dword_AC1B04 ) /*0x609e30*/
    goto LABEL_5; /*0x609e30*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x609e51*/
  if ( !v3 ) /*0x609e56*/
    goto LABEL_5; /*0x609e56*/
  while ( *v3 != v9 ) /*0x609e5e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x609e60*/
    if ( !v3 ) /*0x609e68*/
      goto LABEL_5; /*0x609e68*/
  }
  v7 = v3 + 1; /*0x609e94*/
  if ( v7 ) /*0x609e99*/
    v4 = v7[27]; /*0x609e9b*/
  else
  LABEL_5:
    v4 = 0; /*0x609e6a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x609e6d*/
  switch ( v4 ) /*0x609e79*/
  {
    case 269: /*0x609e79*/
      if ( DlgCtrlID != 1473 ) /*0x609e80*/
        return DlgCtrlID == 1472; /*0x609e8b*/
      return 1; /*0x60a0ee*/
    case 217: /*0x609e79*/
      if ( DlgCtrlID == 1473 ) /*0x609ead*/
        return 1; /*0x609ead*/
      return DlgCtrlID == 1738; /*0x60a0de*/
    case 163: /*0x609e79*/
      if ( DlgCtrlID == 1231 ) /*0x609eca*/
        return 1; /*0x609eca*/
      return DlgCtrlID == 1232; /*0x609ed5*/
    case 261: /*0x609e79*/
      if ( DlgCtrlID == 1568 ) /*0x609ee7*/
        return 1; /*0x609ee7*/
      return DlgCtrlID == 1569; /*0x609ef2*/
    case 240: /*0x609e79*/
      return DlgCtrlID == 1472; /*0x609f0e*/
    case 206: /*0x609e79*/
      return DlgCtrlID == 1454; /*0x609f26*/
    case 288: /*0x609e79*/
      if ( DlgCtrlID == 1454 ) /*0x609f34*/
        return 1; /*0x609f34*/
      return DlgCtrlID == 2; /*0x609f3d*/
    case 289: /*0x609e79*/
      if ( DlgCtrlID == 1454 || DlgCtrlID == 1455 ) /*0x609f5a*/
        return 1; /*0x609f5a*/
      return DlgCtrlID == 2; /*0x609f63*/
    case 234: /*0x609e79*/
      if ( DlgCtrlID == 1600 /*0x609fb7*/
        || DlgCtrlID == 1602
        || DlgCtrlID == 1601
        || DlgCtrlID == 1603
        || DlgCtrlID == 1604
        || DlgCtrlID == 1605
        || DlgCtrlID == 1606 )
      {
        return 1; /*0x609fb7*/
      }
      return DlgCtrlID == 1607; /*0x609fc2*/
    case 184: /*0x609e79*/
      if ( DlgCtrlID == 1329 ) /*0x609fd4*/
        return 1; /*0x609fd4*/
      return DlgCtrlID == 1333; /*0x609fdf*/
    case 287: /*0x609e79*/
      return DlgCtrlID == 1472; /*0x609ffb*/
    case 277: /*0x609e79*/
      if ( DlgCtrlID == 1794 ) /*0x60a009*/
        return 1; /*0x60a009*/
      return DlgCtrlID == 1670; /*0x60a014*/
    case 211: /*0x609e79*/
      return DlgCtrlID == 2; /*0x60a02e*/
    case 207: /*0x609e79*/
      if ( DlgCtrlID == 1474 ) /*0x60a03c*/
        return 1; /*0x60a03c*/
      return DlgCtrlID == 2; /*0x60a045*/
    case 195: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a055*/
        return 1; /*0x60a055*/
      return DlgCtrlID == 2; /*0x60a05e*/
    case 283: /*0x609e79*/
      goto LABEL_57; /*0x60a066*/
    case 225: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a081*/
        return 1; /*0x60a081*/
      return DlgCtrlID == 2; /*0x60a086*/
    case 286: /*0x609e79*/
  LABEL_57:
      if ( DlgCtrlID == 1474 ) /*0x60a06d*/
        return 1; /*0x60a06d*/
      return DlgCtrlID == 1670; /*0x60a074*/
    case 196: /*0x609e79*/
      if ( DlgCtrlID == 1421 ) /*0x60a09d*/
        return 1; /*0x60a09d*/
      return DlgCtrlID == 1422; /*0x60a0a4*/
    case 208: /*0x609e79*/
      return DlgCtrlID == 1; /*0x60a0bb*/
    case 252: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a0c7*/
        return 1; /*0x60a0c7*/
      return DlgCtrlID == 2; /*0x60a0cc*/
    case 294: /*0x609e79*/
      if ( DlgCtrlID == 6 ) /*0x60a0d9*/
        return 1; /*0x60a0d9*/
      return DlgCtrlID == 7; /*0x60a0db*/
  }
  return 0; /*0x609f09*/
}
}
// 0x60A100
namespace gamemd {
bool sub_60A100(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  unsigned int *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60a10c*/
  if ( !dword_AC1B04 ) /*0x60a110*/
    goto LABEL_5; /*0x60a110*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v8)) & ((1 << dword_AC1B0C) - 1))); /*0x60a131*/
  if ( !v3 ) /*0x60a136*/
    goto LABEL_5; /*0x60a136*/
  while ( *v3 != v8 ) /*0x60a13e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x60a140*/
    if ( !v3 ) /*0x60a148*/
      goto LABEL_5; /*0x60a148*/
  }
  v7 = v3 + 1; /*0x60a16f*/
  if ( v7 ) /*0x60a174*/
    v4 = v7[27]; /*0x60a176*/
  else
  LABEL_5:
    v4 = 0; /*0x60a14a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60a14d*/
  return v4 == 226 && DlgCtrlID == 1821; /*0x60a159*/
}
}
// 0x60A180
namespace gamemd {
void EnumFunc(HWND hWnd, LPARAM)
{
  HWND v2; // esi
  HWND Parent; // edi
  int v4; // eax
  int v6; // eax

  v2 = hWnd; /*0x60a181*/
  Parent = GetParent(hWnd); /*0x60a190*/
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x60a19d*/
  {
    hWnd = v2; /*0x60a1a4*/
    if ( dword_AC1B04 ) /*0x60a1aa*/
    {
      v4 = *((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&hWnd)) & ((1 << dword_AC1B0C) - 1))); /*0x60a1cb*/
      if ( v4 ) /*0x60a1d0*/
      {
        while ( *(HWND *)v4 != hWnd ) /*0x60a1d8*/
        {
          v4 = *(unsigned int *)(v4 + 516); /*0x60a1da*/
          if ( !v4 ) /*0x60a1e2*/
            return 1; /*0x60a1eb*/
        }
        v6 = v4 + 4; /*0x60a1f2*/
        if ( v6 && !*(unsigned int *)(v6 + 104) && IsDialogControlVisible( (int)Parent, (HWND)(v2)) ) /*0x60a204*/
        {
          if ( IsWindowVisible(v2) ) /*0x60a20e*/
            ++dword_AC1CAC; /*0x60a218*/
        }
      }
    }
  }
  return 1; /*0x60a1e4*/
}
}
// 0x60A250
namespace gamemd {
void sub_60A250(HWND hWnd, LPARAM)
{
  HWND v2; // esi
  HWND Parent; // edi
  int v4; // eax
  int v6; // eax

  v2 = hWnd; /*0x60a251*/
  Parent = GetParent(hWnd); /*0x60a260*/
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x60a26d*/
  {
    hWnd = v2; /*0x60a274*/
    if ( dword_AC1B04 ) /*0x60a27a*/
    {
      v4 = *((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&hWnd)) & ((1 << dword_AC1B0C) - 1))); /*0x60a29b*/
      if ( v4 ) /*0x60a2a0*/
      {
        while ( *(HWND *)v4 != hWnd ) /*0x60a2a8*/
        {
          v4 = *(unsigned int *)(v4 + 516); /*0x60a2aa*/
          if ( !v4 ) /*0x60a2b2*/
            return 1; /*0x60a2bb*/
        }
        v6 = v4 + 4; /*0x60a2c2*/
        if ( v6 && !*(unsigned int *)(v6 + 104) && GetDialogDefaultButton( (int)Parent, (HWND)(v2)) ) /*0x60a2d4*/
        {
          if ( IsWindowVisible(v2) ) /*0x60a2de*/
            ++dword_AC4894; /*0x60a2e8*/
        }
      }
    }
  }
  return 1; /*0x60a2b4*/
}
}
// 0x60B000
namespace gamemd {
AbstractClass * * RepositionGameSpeedIndicator(HWND hWnd, int a2)
{
  HWND Parent; // esi
  char GameSpeedSessionClass; // bl
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  HWND v10; // eax
  unsigned int *v12; // [esp+10h] [ebp-54h]
  int nWidtha; // [esp+14h] [ebp-50h]
  int v15; // [esp+1Ch] [ebp-48h]
  struct tagRECT Rect; // [esp+24h] [ebp-40h] BYREF
  struct tagRECT v17; // [esp+34h] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+44h] [ebp-20h] BYREF
  struct tagRECT v19; // [esp+54h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60b019*/
  GameSpeedSessionClass = ((SessionClass *)(dword_A8B238))->GetGameSpeed(); /*0x60b020*/
  GetWindowRect(Parent, &Rect); /*0x60b02e*/
  GetWindowRect(hWnd, &v19); /*0x60b036*/
  if ( GameSpeedSessionClass )
  {
    v8 = *((int16_t *)dword_B0F9EC + 2); /*0x60b134*/
    nWidtha = *((int16_t *)dword_B0F9EC + 1); /*0x60b145*/
    v12 = (unsigned int *)(dword_B0FC48); /*0x60b149*/
    v9 = Rect.right - Rect.left - 147; /*0x60b14d*/
    v10 = GetParent(hWnd); /*0x60b14f*/
    GetWindowRect(v10, &v18); /*0x60b15b*/
    GetWindowRect(hWnd, &v17); /*0x60b163*/
    return MoveWindow( /*0x60b1a0*/
             hWnd,
             v9,
             v12[1] + v8 * (((v17.bottom - v17.top) / 2 + v17.top - v18.top - 198) / 44),
             nWidtha,
             v8,
             0);
  }
  else
  {
    v5 = *((unsigned int *)dword_B0FC24 + 3); /*0x60b0d8*/
    v15 = *((unsigned int *)dword_B0FC24 + 1); /*0x60b0db*/
    v6 = ((Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2)
       - ((*(unsigned int *)(a2 + 4) - 600) / 2 < 0 ? 0 : (*(unsigned int *)(a2 + 4) - 600) / 2)
       + v19.top
       - v15
       - Rect.top;
    if ( (int)abs32(v6 % v5) >= (int)abs32(v6 / v5 * v5 + v5 - v6) ) /*0x60b115*/
      v7 = v6 / v5 + 1; /*0x60b1a6*/
    else
      v7 = v6 / v5; /*0x60b11b*/
    return MoveWindow(
             hWnd,
             Rect.right
           - ((Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2)
           - Rect.left
           - 156,
             v15 + v7 * v5,
             *((int16_t *)dword_B0FAC4 + 1),
             *((int16_t *)dword_B0FAC4 + 2),
             0);
  }
}
}
// 0x60B880
namespace gamemd {
bool sub_60B880(int a1, HWND a2)
{
  unsigned int *v3; // eax
  int v4; // esi
  unsigned int *v6; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = a1; /*0x60b88c*/
  if ( !dword_AC1B04 ) /*0x60b890*/
    goto LABEL_5; /*0x60b890*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v7)) & ((1 << dword_AC1B0C) - 1))); /*0x60b8b1*/
  if ( !v3 ) /*0x60b8b6*/
    goto LABEL_5; /*0x60b8b6*/
  while ( *v3 != v7 ) /*0x60b8be*/
  {
    v3 = (unsigned int *)v3[129]; /*0x60b8c0*/
    if ( !v3 ) /*0x60b8c8*/
      goto LABEL_5; /*0x60b8c8*/
  }
  v6 = v3 + 1; /*0x60b93a*/
  if ( v6 ) /*0x60b93f*/
    v4 = v6[27]; /*0x60b941*/
  else
  LABEL_5:
    v4 = 0; /*0x60b8ca*/
  GetDlgCtrlID(a2); /*0x60b8cd*/
  return v4 == 183 /*0x60b930*/
      || v4 == 692
      || v4 == 3003
      || v4 == 245
      || v4 == 693
      || v4 == 184
      || v4 == 163
      || v4 == 182
      || v4 == 268
      || v4 == 115
      || v4 == 255
      || v4 == 234;
}
}
// 0x60C0C0
namespace gamemd {
int RepositionDialogControls(HWND hWnd, HWND a2)
{
  HWND v2; // esi
  HWND Parent; // ebx
  int v5; // eax
  int v6; // eax
  unsigned int *v7; // eax
  void *v8; // edi
  int DlgCtrlID; // ebp
  unsigned int *v10; // eax
  int v11; // edi
  int v12; // eax
  unsigned int *v13; // eax
  int v14; // edi
  unsigned int *v15; // eax
  HWND v16; // eax
  unsigned int v17[4]; // [esp+Ch] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+2Ch] [ebp-10h] BYREF

  v2 = hWnd; /*0x60c0c5*/
  Parent = GetParent(hWnd); /*0x60c0d0*/
  if ( (HWND)dword_AC48A8 != Parent ) /*0x60c0dd*/
    return 1; /*0x60c48f*/
  memset( (void *)(v17), 0, sizeof(v17)); /*0x60c0f0*/
  if ( ControlDialogHandler((int)Parent, v2, v17) ) /*0x60c100*/
  {
    UI_Get(v2); /*0x60c10f*/
    Control::RepositionControlsDialog( (HWND)(v2)); /*0x60c116*/
    return 1; /*0x60c11e*/
  }
  else
  {
    if ( (GetWindowLongA(v2, -16) & 0xB) != 0xB ) /*0x60c13a*/
      goto LABEL_9; /*0x60c13a*/
    hWnd = v2; /*0x60c141*/
    if ( !dword_AC1B04 ) /*0x60c147*/
      goto LABEL_9; /*0x60c147*/
    v5 = *((unsigned int *)dword_AC1B00 + HashTable::ComputeHash( (void *)((int)&dword_AC1B00), (int)&hWnd)); /*0x60c15e*/
    if ( !v5 ) /*0x60c163*/
      goto LABEL_9; /*0x60c163*/
    while ( *(HWND *)v5 != hWnd ) /*0x60c16b*/
    {
      v5 = *(unsigned int *)(v5 + 516); /*0x60c16d*/
      if ( !v5 ) /*0x60c175*/
        goto LABEL_9; /*0x60c175*/
    }
    v6 = v5 + 4; /*0x60c1a9*/
    if ( v6 && !*(unsigned int *)(v6 + 104) && IsDialogControlVisible( (int)Parent, (HWND)(v2)) ) /*0x60c1b9*/
    {
      RepositionGameSpeedIndicator(v2); /*0x60c1c8*/
      Control::RepositionControlsDialog( (HWND)(v2)); /*0x60c1cf*/
      return 1; /*0x60c1d7*/
    }
    else
    {
  LABEL_9:
      if ( IsDialogControlVisible( (int)Parent, (HWND)(v2)) ) /*0x60c17b*/
      {
        UI_Get_60B1D0(v2); /*0x60c18a*/
        Control::RepositionControlsDialog( (HWND)(v2)); /*0x60c191*/
        return 1; /*0x60c199*/
      }
      else if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB /*0x60c21c*/
             && (hWnd = v2, a2 = 0, HashTable::Get( (void *)(&dword_AC1B00), (IUnknown *)(&hWnd), (IUnknown *)(&a2)), a2)
             && !*((unsigned int *)a2 + 26)
             && GetDialogDefaultButton( (int)Parent, (HWND)(v2)) )
      {
        UI_Get_60B350(v2); /*0x60c227*/
        Control::RepositionControlsDialog( (HWND)(v2)); /*0x60c22e*/
        return 1; /*0x60c236*/
      }
      else if ( GetDialogDefaultButton( (int)Parent, (HWND)(v2)) ) /*0x60c246*/
      {
        UI_Get_60B420(v2); /*0x60c251*/
        Control::RepositionControlsDialog( (HWND)(v2)); /*0x60c258*/
        return 1; /*0x60c260*/
      }
      else
      {
        a2 = Parent; /*0x60c271*/
        if ( !dword_AC1B04 ) /*0x60c277*/
          goto LABEL_26; /*0x60c277*/
        v7 = (unsigned int *)*((unsigned int *)dword_AC1B00 + HashTable::ComputeHash( (void *)((int)&dword_AC1B00), (int)&a2)); /*0x60c28e*/
        if ( !v7 ) /*0x60c293*/
          goto LABEL_26; /*0x60c293*/
        while ( (HWND)*v7 != a2 ) /*0x60c29b*/
        {
          v7 = (unsigned int *)v7[129]; /*0x60c29d*/
          if ( !v7 ) /*0x60c2a5*/
            goto LABEL_26; /*0x60c2a5*/
        }
        v10 = v7 + 1; /*0x60c2e8*/
        if ( v10 ) /*0x60c2ed*/
          v8 = (void *)v10[27]; /*0x60c2ef*/
        else
  LABEL_26:
          v8 = (void *)(0); /*0x60c2a7*/
        DlgCtrlID = GetDlgCtrlID(v2); /*0x60c2b4*/
        if ( ((Event *)(v8))->IsValidActionType() && DlgCtrlID == 1685 ) /*0x60c2c5*/
        {
          UI_Get_60B550(v2); /*0x60c2c9*/
          Control::RepositionControlsDialog( (HWND)(v2)); /*0x60c2d0*/
          return 1; /*0x60c2d8*/
        }
        else
        {
          v11 = 0; /*0x60c300*/
          hWnd = Parent; /*0x60c309*/
          a2 = 0; /*0x60c30d*/
          HashTable::Get( (void *)(&dword_AC1B00), (IUnknown *)(&hWnd), (IUnknown *)(&a2)); /*0x60c311*/
          if ( a2 ) /*0x60c31c*/
            v11 = *((unsigned int *)a2 + 27); /*0x60c31e*/
          v12 = GetDlgCtrlID(v2); /*0x60c322*/
          if ( v11 == 226 && v12 == 1821 ) /*0x60c336*/
          {
            UI_Get_60B610(v2); /*0x60c33a*/
            Control::RepositionControlsDialog( (HWND)(v2)); /*0x60c341*/
            return 1; /*0x60c349*/
          }
          else
          {
            a2 = Parent; /*0x60c35a*/
            if ( !dword_AC1B04 ) /*0x60c360*/
              goto LABEL_41; /*0x60c360*/
            v13 = (unsigned int *)*((unsigned int *)dword_AC1B00 + HashTable::ComputeHash( (void *)((int)&dword_AC1B00), (int)&a2)); /*0x60c377*/
            if ( !v13 ) /*0x60c37c*/
              goto LABEL_41; /*0x60c37c*/
            while ( (HWND)*v13 != a2 ) /*0x60c384*/
            {
              v13 = (unsigned int *)v13[129]; /*0x60c38a*/
              if ( !v13 ) /*0x60c392*/
                goto LABEL_41; /*0x60c392*/
            }
            v15 = v13 + 1; /*0x60c41b*/
            if ( v15 ) /*0x60c420*/
              v14 = v15[27]; /*0x60c426*/
            else
  LABEL_41:
              v14 = 0; /*0x60c394*/
            GetDlgCtrlID(v2); /*0x60c397*/
            if ( v14 == 183 /*0x60c3f4*/
              || v14 == 692
              || v14 == 3003
              || v14 == 245
              || v14 == 693
              || v14 == 184
              || v14 == 163
              || v14 == 182
              || v14 == 268
              || v14 == 115
              || v14 == 255
              || v14 == 234 )
            {
              UI_Get_60B7A0(v2); /*0x60c3f8*/
              Control::RepositionControlsDialog( (HWND)(v2)); /*0x60c3ff*/
              return 1; /*0x60c407*/
            }
            else
            {
              v16 = GetParent(v2); /*0x60c42f*/
              GetWindowRect(v16, &Rect); /*0x60c441*/
              GetWindowRect(v2, &v18); /*0x60c449*/
              MoveWindow(v2, v18.left - Rect.left, v18.top - Rect.top, v18.right - v18.left, v18.bottom - v18.top, 0); /*0x60c472*/
              Control::RepositionControlsDialog( (HWND)(v2)); /*0x60c47a*/
              return 1; /*0x60c482*/
            }
          }
        }
      }
    }
  }
}
}
// 0x60C4A0
namespace gamemd {  // G42.18c ns repair
int SkirmishDialog::ResizeDialogAndEnum(void *a1, void *a2)
{

  MoveWindow(hWndParent, 0, 0, g_DisplayWidth, *(&g_DisplayWidth + 1), 0); /*0x60c4ba*/
  dword_AC48A8 = (int)hWndParent; /*0x60c4c0*/
  return EnumChildWindows(hWndParent, (WNDENUMPROC)RepositionDialogControls, lParam); /*0x60c4d3*/

}
}  // G42.18c ns repair
// 0x60F4B0
namespace gamemd {
AbstractClass * * InitializeDialogControls(HWND a1, LPARAM a2)
{
  LPARAM v2; // edi
  unsigned int *v4; // eax
  void *v5; // eax
  void *v6; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  void *v10; // eax
  void *v11; // eax
  unsigned int *i; // eax
  int v14; // [esp+10h] [ebp-20Ch] BYREF
  unsigned int *v15; // [esp+14h] [ebp-208h] BYREF
  LPARAM v16; // [esp+18h] [ebp-204h]
  void *v17[128]; // [esp+1Ch] [ebp-200h] BYREF

  v2 = a2; /*0x60f4ba*/
  v16 = a2; /*0x60f4be*/
  DialogClass::RegisterWinClasses(); /*0x60f4c2*/
  dword_AC48A8 = (int)a1; /*0x60f4cd*/
  EnumChildWindows(a1, Dialog::InitWindow, 1); /*0x60f4db*/
  v14 = (int)a1; /*0x60f4e6*/
  v15 = (unsigned int *)(0); /*0x60f4ea*/
  if ( dword_AC1B04 /*0x60f514*/
    && (v4 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v14)) & ((1 << dword_AC1B0C) - 1)))) != 0 )
  {
    while ( *v4 != v14 ) /*0x60f51c*/
    {
      v4 = (unsigned int *)v4[129]; /*0x60f51e*/
      if ( !v4 ) /*0x60f526*/
        goto LABEL_5; /*0x60f526*/
    }
    v7 = v4 + 1; /*0x60f568*/
  }
  else
  {
  LABEL_5:
    memset( (void *)(v17), 0, sizeof(v17)); /*0x60f528*/
    v17[26] = (void *)11; /*0x60f53d*/
    v17[25] = (void *)g_FogOfWarState; /*0x60f548*/
    v5 = RA2_OPNEW(4u); /*0x60f54f*/
    if ( v5 ) /*0x60f559*/
      v6 = (void *)unknown_libname_74( (void *)(v5)); /*0x60f55d*/
    else
      v6 = (void *)(0); /*0x60f570*/
    v17[15] = v6; /*0x60f572*/
    v17[16] = 0; /*0x60f585*/
    v17[23] = 0; /*0x60f589*/
    v17[36] = (void *)-1; /*0x60f590*/
    SymbolTable::Insert((int)&v14, v17); /*0x60f59b*/
    if ( dword_AC1B04 ) /*0x60f5a6*/
    {
      v8 = (unsigned int *)*((unsigned int *)dword_AC1B00 + HashTable::ComputeHash( (void *)((int)&dword_AC1B00), (int)&v14)); /*0x60f5bd*/
      if ( v8 ) /*0x60f5c2*/
      {
        while ( *v8 != v14 ) /*0x60f5ca*/
        {
          v8 = (unsigned int *)v8[129]; /*0x60f5cc*/
          if ( !v8 ) /*0x60f5d4*/
            goto LABEL_15; /*0x60f5d4*/
        }
        v15 = v8 + 1; /*0x60f5df*/
      }
    }
  LABEL_15:
    ((Dialog *)(int)v17)->CleanupTree(); /*0x60f5e3*/
    v2 = v16; /*0x60f5ec*/
    v7 = v15; /*0x60f5f0*/
  }
  v7[8] = 1; /*0x60f5fc*/
  EnumChildWindows(a1, Dialog::SubclassEditControl, 1); /*0x60f603*/
  EnumChildWindows(a1, Dialog::InitializeControls, v2); /*0x60f60c*/
  Dialog::InitializeControls( (HWND)(a1), (LPARAM)((LPARAM)(v2))); /*0x60f610*/
  EnumChildWindows(a1, Dialog::InitWindow, 0); /*0x60f61c*/
  v14 = (int)a1; /*0x60f625*/
  v15 = (unsigned int *)(0); /*0x60f629*/
  if ( dword_AC1B04 /*0x60f653*/
    && (v9 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v14)) & ((1 << dword_AC1B0C) - 1)))) != 0 )
  {
    while ( *v9 != v14 ) /*0x60f65b*/
    {
      v9 = (unsigned int *)v9[129]; /*0x60f65d*/
      if ( !v9 ) /*0x60f665*/
        goto LABEL_20; /*0x60f665*/
    }
    v9[9] = 0; /*0x60f6a8*/
    return 1; /*0x60f6ad*/
  }
  else
  {
  LABEL_20:
    memset( (void *)(v17), 0, sizeof(v17)); /*0x60f667*/
    v17[26] = (void *)11; /*0x60f67c*/
    v17[25] = (void *)g_FogOfWarState; /*0x60f687*/
    v10 = RA2_OPNEW(4u); /*0x60f68e*/
    if ( v10 ) /*0x60f698*/
      v11 = (void *)unknown_libname_74( (void *)(v10)); /*0x60f69c*/
    else
      v11 = (void *)(0); /*0x60f6b7*/
    v17[15] = v11; /*0x60f6b9*/
    v17[16] = 0; /*0x60f6cc*/
    v17[23] = 0; /*0x60f6d0*/
    v17[36] = (void *)-1; /*0x60f6d7*/
    SymbolTable::Insert((int)&v14, v17); /*0x60f6e2*/
    HashTable::Get( (void *)(&dword_AC1B00), (IUnknown *)(&v14), (IUnknown *)(&v15)); /*0x60f6f6*/
    ((GadgetClass *)v17)->SetTooltip( 0); /*0x60f700*/
    for ( i = v17[13]; v17[13]; i = v17[13] ) /*0x60f70b*/
      LinkedList::Remove( (void *)(v17), (unsigned int *)(i)); /*0x60f712*/
    if ( v17[15] ) /*0x60f725*/
      ((DeleteAndZero *)(void **)v17[15])->OrFree( 1); /*0x60f729*/
    v15[8] = 0; /*0x60f734*/
    return 1; /*0x60f738*/
  }
}
}
// 0x600320
namespace gamemd {
int sub_600320()
{
  dword_AC18B0 = 0; /*0x600322*/
  dword_AC18B4 = 0; /*0x600327*/
  dword_AC18B8 = 0; /*0x60032c*/
  dword_AC18BC = 0; /*0x600331*/
  return 0; /*0x600336*/
}
} // namespace gamemd

// 0x600340
namespace gamemd {
void sub_600340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x60034c*/
  dbl_AC1B40 = Math::Sqrt(v0 + v0); /*0x60035e*/
}
} // namespace gamemd

// 0x600370
namespace gamemd {
void sub_600370()
{
  dbl_AC48A0 = dbl_AC1B40 / 60.0; /*0x60037c*/
}
} // namespace gamemd

// 0x600390
namespace gamemd {
void sub_600390()
{
  dbl_AC4838 = 1.0 / dbl_AC48A0; /*0x60039c*/
}
} // namespace gamemd

// 0x6003B0
namespace gamemd {
void sub_6003B0()
{
  dbl_AC4830 = 0.0174532925199433 * 45.0; /*0x6003bc*/
}
} // namespace gamemd

// 0x6003D0
namespace gamemd {
void sub_6003D0()
{
  dbl_AC1B88 = 0.0174532925199433 * 60.0; /*0x6003dc*/
}
} // namespace gamemd

// 0x6003F0
namespace gamemd {
void sub_6003F0()
{
  dbl_AC1898 = 0.0174532925199433 * 90.0; /*0x6003fc*/
}
} // namespace gamemd

// 0x600410
namespace gamemd {
long long sub_600410()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1898 - dbl_AC1B88); /*0x600422*/
  result = Math::RoundToInt(v0 * dbl_AC1B40 * 0.5); /*0x600436*/
  dword_AC48AC = result; /*0x60043b*/
  return result; /*0x600440*/
}
} // namespace gamemd

// 0x600450
namespace gamemd {
void sub_600450()
{
  dbl_AC1CA0 = Math::ArcTan((double)dword_AC48AC * 0.00390625); /*0x600467*/
}
} // namespace gamemd

// 0x600480
namespace gamemd {
void sub_600480()
{
  dbl_AC4610 = Math::ArcTan((double)(2 * dword_AC48AC) / dbl_AC1B40); /*0x6004a2*/
}
} // namespace gamemd

// 0x6004B0
namespace gamemd {
long long sub_6004B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC48AC) + 0.5); /*0x6004cb*/
  dword_AC489C = result; /*0x6004d0*/
  return result; /*0x6004d6*/
}
} // namespace gamemd

// 0x6004E0
namespace gamemd {
int sub_6004E0()
{
  word_AC1B38 = 0; /*0x6004e2*/
  word_AC1B3A = 0; /*0x6004e8*/
  return 0; /*0x6004ee*/
}
} // namespace gamemd

// 0x6004F0
namespace gamemd {
int sub_6004F0()
{
  dword_AC1DF8 = 0; /*0x6004f2*/
  dword_AC1DFC = 0; /*0x6004f7*/
  dword_AC1E00 = 0; /*0x6004fc*/
  return 0; /*0x600501*/
}
} // namespace gamemd

// 0x600510
namespace gamemd {
int sub_600510()
{
  dword_AC4890 = 0; /*0x600515*/
  dword_AC4888 = 128; /*0x60051f*/
  dword_AC488C = 128; /*0x600524*/
  return 128; /*0x600529*/
}
} // namespace gamemd

// 0x600530
namespace gamemd {
int sub_600530()
{
  sub_6B9450(g_DialogHashTable); /*0x600535*/
  return atexit(unknown_libname_26); /*0x600545*/
}
} // namespace gamemd

// 0x600550
namespace gamemd {
int unknown_libname_26()
{
  HashTable::Clear((int)g_DialogHashTable); /*0x600555*/
}
} // namespace gamemd

// 0x600660
namespace gamemd {
ObjectClass * E4Recv_600660::ReadPointerFromECX()
{

  return (int)this->AbstractClass; /*0x600662*/

}
} // namespace gamemd

// 0x6006B0
namespace gamemd {
int sub_6006B0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x6006b0*/
  dbl_AC1B68 = 0.2; /*0x6006b7*/
  dbl_AC1B70 = 0.8; /*0x6006cb*/
  dword_AC1B78 = 128; /*0x6006df*/
  v1 = 0; /*0x6006e4*/
  do /*0x6006e9*/
  {
    ++v1; /*0x6006e6*/
    v0 >>= 1; /*0x6006e7*/
  }
  while ( v0 ); /*0x6006e9*/
  dword_AC1B58 = 0; /*0x6006eb*/
  dword_AC1B54 = v1 - 1; /*0x6006f9*/
  dword_AC1B4C = 0; /*0x6006ff*/
  byte_AC1B5C = 0; /*0x600705*/
  dword_AC1B50 = 1 << (v1 - 1); /*0x60070b*/
  dword_AC1B48 = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x600723*/
  memset( (void *)(dword_AC1B48), 0, 4 * dword_AC1B50); /*0x600729*/
  dword_AC1B60 = (int (*)(unsigned int))ReadPointerFromECX; /*0x600730*/
  return atexit(sub_600750); /*0x600742*/
}
} // namespace gamemd

// 0x600880
namespace gamemd {
int sub_600880()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600880*/
  dbl_AC18E0 = 0.2; /*0x600887*/
  dbl_AC18E8 = 0.8; /*0x60089b*/
  dword_AC18F0 = 128; /*0x6008af*/
  v1 = 0; /*0x6008b4*/
  do /*0x6008b9*/
  {
    ++v1; /*0x6008b6*/
    v0 >>= 1; /*0x6008b7*/
  }
  while ( v0 ); /*0x6008b9*/
  dword_AC18D0 = 0; /*0x6008bb*/
  dword_AC18CC = v1 - 1; /*0x6008c9*/
  unk_AC18C4 = 0; /*0x6008cf*/
  byte_AC18D4 = 0; /*0x6008d5*/
  dword_AC18C8 = 1 << (v1 - 1); /*0x6008db*/
  g_DialogPool = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x6008f3*/
  memset( (void *)(g_DialogPool), 0, 4 * dword_AC18C8); /*0x6008f9*/
  dword_AC18D8 = (int (*)(unsigned int))ReadPointerFromECX; /*0x600900*/
  return atexit(sub_600920); /*0x600912*/
}
} // namespace gamemd

// 0x600A50
namespace gamemd {
int sub_600A50()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600a50*/
  dbl_AC1B20 = 0.2; /*0x600a57*/
  dbl_AC1B28 = 0.8; /*0x600a6b*/
  dword_AC1B30 = 128; /*0x600a7f*/
  v1 = 0; /*0x600a84*/
  do /*0x600a89*/
  {
    ++v1; /*0x600a86*/
    v0 >>= 1; /*0x600a87*/
  }
  while ( v0 ); /*0x600a89*/
  dword_AC1B10 = 0; /*0x600a8b*/
  dword_AC1B0C = v1 - 1; /*0x600a99*/
  dword_AC1B04 = 0; /*0x600a9f*/
  byte_AC1B14 = 0; /*0x600aa5*/
  dword_AC1B08 = 1 << (v1 - 1); /*0x600aab*/
  dword_AC1B00 = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x600ac3*/
  memset( (void *)(dword_AC1B00), 0, 4 * dword_AC1B08); /*0x600ac9*/
  dword_AC1B18 = (int (*)(unsigned int))ReadPointerFromECX; /*0x600ad0*/
  return atexit(sub_600AF0); /*0x600ae2*/
}
} // namespace gamemd

// 0x603DD0
namespace gamemd {
LRESULT globalHelper_003DD0(HWND hWnd, unsigned char a2)
{
  return SendMessageA( (HWND)(hWnd), 0x4E6u, 0, (LPARAM)((LPARAM)(a2))); /*0x603de5*/
}
} // namespace gamemd

// 0x603FC0
namespace gamemd {
wchar_t ** sub_603FC0(wchar_t ** a1, HWND a2, HWND hWnd, unsigned short a4, void * a5)
{
  LPARAM lParam[2]; // [esp+10h] [ebp-Ch] BYREF
  wchar_t *v9; // [esp+18h] [ebp-4h] BYREF
  LRESULT v10; // [esp+24h] [ebp+8h]

  v10 = SendMessageA( (HWND)(hWnd), 0x4E8u, 0, a4 | (*(uint16_t *)a5.__pad_0 << 16)); /*0x603ffc*/
  unknown_libname_74( (void *)(&v9)); /*0x604000*/
  lParam[0] = (LPARAM)hWnd; /*0x604016*/
  lParam[1] = v10; /*0x60401a*/
  SendMessageA( (HWND)(a2), 0x4E9u, 0, (LPARAM)((LPARAM)((LPARAM)lParam))); /*0x60401e*/
  ((WideString *)((WideString *)&a5))->AssignFromPtr((const wchar_t **)&v9); /*0x604029*/
  ((DeleteAndZero*)((DeleteAndZero *)&v9))->Alt(); /*0x604032*/
  ((WideString *)((WideString *)a1))->AssignFromPtr((const wchar_t **)&a5); /*0x60403e*/
  ((DeleteAndZero*)&a5)->Alt(); /*0x604047*/
  return a1; /*0x60404e*/
}
} // namespace gamemd

// 0x60AA60
namespace gamemd {
bool sub_60AA60(HWND hWnd, LPARAM)
{
  HWND Parent; // eax

  Parent = GetParent(hWnd); /*0x60aa66*/
  if ( IsValidActionDialog((int)Parent, hWnd) ) /*0x60aa70*/
    SendMessageA( (HWND)(hWnd), 0x4EEu, 0, 0); /*0x60aa83*/
  return 1; /*0x60aa8e*/
}
} // namespace gamemd

// 0x60B740
namespace gamemd {
BOOL E4Recv_60B740::sub_60B740(HWND hWnd)
{

  HWND Parent; // eax
  struct tagRECT v4; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  Parent = GetParent((HWND)hWnd); /*0x60b748*/
  GetWindowRect(Parent, &Rect); /*0x60b75a*/
  GetWindowRect((HWND)hWnd, &v4); /*0x60b762*/
  return MoveWindow((HWND)hWnd, v4.left - Rect.left, v4.top - Rect.top, v4.right - v4.left, v4.bottom - v4.top, 0); /*0x60b791*/

}
} // namespace gamemd

// 0x60D440
namespace gamemd {
void nullsub_31()
{
  ; /*0x60d440*/
}
} // namespace gamemd

// 0x60D520
namespace gamemd {
LRESULT sub_60D520(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x60d53a*/
}
} // namespace gamemd
