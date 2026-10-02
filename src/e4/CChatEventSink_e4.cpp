// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CComObject_CChatEventSink___ATL_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x7AA870
namespace gamemd {
Coord * * CChatEventSink::HandleChatChannelList(int a1, int a2, const char * a3)
{
    unsigned int v25 = 0;  /* G37 hoist */

  int referenceCount; // eax
  int v4; // ebx
  int v5; // ebp
  const char *v6; // ebx
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int occupant; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  char *v14; // edx
  int v15; // esi
  int abstractFlags; // eax
  int v17; // esi
  int v18; // esi
  String *v19; // ecx
  int v20; // esi
  char *vtable3; // eax
  int v22; // esi
  int v23; // esi
  String *v24; // ecx
  HashTable *v25; // esi
  int v26; // esi
  ObjectClass *v27; // eax
  HWND v28; // eax
  HWND v29; // esi
  HWND DlgItem; // eax
  ObjectClass *v32; // [esp+58h] [ebp-340h]
  unsigned char v33[300]; // [esp+68h] [ebp-330h] BYREF
  char v34[516]; // [esp+194h] [ebp-204h] BYREF

  unknown_libname_73(v33); /*0x7aa87e*/
  memset(v34, 0, 513); /*0x7aa893*/
  *(unsigned int *)&v33[4] = 0; /*0x7aa89b*/
  memset(&v33[12], 0, 12); /*0x7aa8a1*/
  if ( !BYTE1(stru_B77D80.HashTable_field_0x40) ) /*0x7aa8ad*/
  {
    *(unsigned int *)&v33[8] = 0; /*0x7aa8c0*/
    if ( a2 == 262459 ) /*0x7aa8ca*/
    {
      *(unsigned int *)&v33[8] = 41; /*0x7aa8cc*/
    }
    else
    {
      if ( CChatEventSink::Check((CChatEventSink *)&stru_B76510.StringVector_field_0x10, &v33[8], 0) ) /*0x7aa8e4*/
        CChatEventSink::EnsureCapacity((CChatEventSink *)&stru_B76510.StringVector_field_0x10, 0); /*0x7aa8f3*/
      if ( a2 < 0 ) /*0x7aa8fa*/
      {
LABEL_103:
        *(unsigned int *)&v33[12] = 0; /*0x7aaf7c*/
        __3_YAXPAX_Z(*(void **)&v33[20]); /*0x7aaf89*/
        goto LABEL_104; /*0x7aaf89*/
      }
      if ( *(unsigned int *)&v33[8] ) /*0x7aa90e*/
      {
        ((gamemd::Debug *)this)->Log(); /*0x7aa91d*/
        memset(&v33[32], 0, 0x10Cu); /*0x7aa930*/
        referenceCount = (int)(((char *)&stru_B76AC4)); /*0x7aa932*/
        v4 = 0; /*0x7aa937*/
        if ( ((char *)&stru_B76AC4) > 0 ) /*0x7aa93b*/
        {
          v5 = 0; /*0x7aa93d*/
          do /*0x7aa985*/
          {
            if ( v5 >= 0 && v4 < referenceCount ) /*0x7aa945*/
              qmemcpy(&v33[32], (const void *)(stru_B76AC4.occupant + v5), 0x10Cu); /*0x7aa959*/
            if ( *(unsigned int *)&v33[72] != -1 ) /*0x7aa962*/
            {
              ((Array *)((Array *)&v33[12]))->InsertElement(&v33[32], *(int *)&v33[12]); /*0x7aa972*/
              referenceCount = (int)(((char *)&stru_B76AC4)); /*0x7aa977*/
            }
            ++v4; /*0x7aa97c*/
            v5 += 268; /*0x7aa97d*/
          }
          while ( v4 < referenceCount ); /*0x7aa985*/
        }
        ((unsigned int *)&stru_B76AC4)[0] = 0; /*0x7aa987*/
      }
      else
      {
        *(unsigned int *)&g_WindowManager.__pad_EC[636] = 0; /*0x7aa910*/
      }
    }
    v6 = a3; /*0x7aa98d*/
    if ( a3 ) /*0x7aa996*/
    {
      do /*0x7aae72*/
      {
        if ( *(unsigned int *)v6 ) /*0x7aa99c*/
        {
          if ( a2 == 262459 ) /*0x7aa9c3*/
          {
            if ( *((unsigned int *)v6 + 10) != -1 ) /*0x7aa9cd*/
            {
              v7 = (int)(((char *)&stru_B76AC4)); /*0x7aa9d3*/
              v8 = 0; /*0x7aa9d8*/
              v9 = 0; /*0x7aa9da*/
              if ( ((char *)&stru_B76AC4) > 0 ) /*0x7aa9de*/
              {
                occupant = stru_B76AC4.occupant; /*0x7aa9e4*/
                while ( 1 ) /*0x7aa9ea*/
                {
                  if ( v9 >= 0 && v9 < v7 ) /*0x7aa9f0*/
                    v8 = occupant; /*0x7aa9f2*/
                  if ( v8 ) /*0x7aa9f6*/
                  {
                    v11 = strcmp((const char *)(v8 + 52), v6 + 52); /*0x7aaa04*/
                    v6 = a3; /*0x7aaa27*/
                    if ( !v11 ) /*0x7aaa30*/
                      break; /*0x7aaa30*/
                  }
                  v7 = (int)(((char *)&stru_B76AC4)); /*0x7aaa32*/
                  ++v9; /*0x7aaa37*/
                  occupant += 268; /*0x7aaa38*/
                  if ( v9 >= ((char *)&stru_B76AC4) ) /*0x7aaa40*/
                    goto LABEL_88; /*0x7aaa40*/
                }
                ((gamemd::Debug *)this)->Log(); /*0x7aaa54*/
                *(unsigned int *)(v8 + 40) = *((unsigned int *)a3 + 10); /*0x7aaa5f*/
              }
            }
          }
          else
          {
            ((Array *)((Array *)&((char *)&stru_B76AC4)))->InsertElement(v6,(int)(((char *)&stru_B76AC4))); /*0x7aaa74*/
            v12 = 0; /*0x7aaa79*/
            v13 = *(unsigned int *)&v33[12]; /*0x7aaa7b*/
            if ( *(int *)&v33[12] > 0 ) /*0x7aaa81*/
            {
              v14 = *(char **)&v33[20]; /*0x7aaa87*/
              while ( 1 ) /*0x7aaa8b*/
              {
                if ( v12 >= 0 && v12 < v13 ) /*0x7aaa91*/
                  qmemcpy(&v33[32], v14, 0x10Cu); /*0x7aaa9e*/
                if ( !strcmp((const char *)(&v33[84]), v6 + 52) ) /*0x7aaaad*/
                  break; /*0x7aaaad*/
                v13 = *(unsigned int *)&v33[12]; /*0x7aaad4*/
                v6 = a3; /*0x7aaad8*/
                ++v12; /*0x7aaadf*/
                v14 += 268; /*0x7aaae0*/
                if ( v12 >= *(int *)&v33[12] ) /*0x7aaae8*/
                  goto LABEL_43; /*0x7aaae8*/
              }
              v6 = a3; /*0x7aaaec*/
              v15 = *(unsigned int *)&v33[72]; /*0x7aaaf3*/
              ((gamemd::Debug *)this)->Log(); /*0x7aab01*/
              *((unsigned int *)a3 + 10) = v15; /*0x7aab09*/
            }
LABEL_43:
            ((String *)((String *)v33))->Assign_Bool(v6 + 52); /*0x7aab0c*/
            ((CChatEventSink *)((CChatEventSink *)v33))->EncodeString(39); /*0x7aab1f*/
            ((String *)((String *)v33))->ToLower(); /*0x7aab28*/
            if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x7aab41*/
            {
              unknown_libname_73(&v33[24]); /*0x7aab4b*/
              abstractFlags = (int)(((char *)&g_WebBrowserConfig)); /*0x7aab50*/
              v17 = 0; /*0x7aab55*/
              if ( ((char *)&g_WebBrowserConfig) <= 0 ) /*0x7aab59*/
              {
LABEL_51:
                v18 = 0; /*0x7aab96*/
                if ( abstractFlags < 0 ) /*0x7aab9a*/
                  v18 = abstractFlags; /*0x7aab9c*/
                if ( v18 >= ((char *)&g_WebBrowserConfig) ) /*0x7aaba4*/
                {
                  ((DynamicVector *)((DynamicVector *)&((char *)&g_WebBrowserConfig)))->EnsureCapacity(); /*0x7aabab*/
                  abstractFlags = (int)(((char *)&g_WebBrowserConfig)); /*0x7aabb0*/
                }
                if ( abstractFlags >= ((char *)&g_WebBrowserConfig) ) /*0x7aabbb*/
                {
                  ((DynamicVector *)((DynamicVector *)&((char *)&g_WebBrowserConfig)))->EnsureCapacity(); /*0x7aabc2*/
                  abstractFlags = (int)(((char *)&g_WebBrowserConfig)); /*0x7aabc7*/
                }
                if ( v18 < abstractFlags ) /*0x7aabce*/
                {
                  memcpy( /*0x7aabeb*/
                    (void *)(((char *)&g_WebBrowserConfig) + 4 * v18 + 4),
                    (const void *)(((char *)&g_WebBrowserConfig) + 4 * v18),
                    4 * (abstractFlags + 0x3FFFFFFF * v18));
                  abstractFlags = (int)(((char *)&g_WebBrowserConfig)); /*0x7aabf0*/
                }
                v19 = (String *)(((char *)&g_WebBrowserConfig) + 4 * v18); /*0x7aabfe*/
                if ( v19 ) /*0x7aac03*/
                {
                  ((String *)(v19))->AssignFromPtr((const char **)v33); /*0x7aac0a*/
                  abstractFlags = (int)(((char *)&g_WebBrowserConfig)); /*0x7aac0f*/
                }
                ((unsigned int *)&g_WebBrowserConfig)[0] = abstractFlags + 1; /*0x7aac15*/
              }
              else
              {
                while ( 1 ) /*0x7aab5b*/
                {
                  if ( v17 >= 0 && v17 < abstractFlags ) /*0x7aab61*/
                    ((String *)((String *)&v33[24]))->Reassign((const char **)(((char *)&g_WebBrowserConfig) + 4 * v17)); /*0x7aab71*/
                  if ( (uint8_t)((String *)((String *)&v33[24]))->Compare((const char **)v33) ) /*0x7aab7f*/
                    break; /*0x7aab7f*/
                  abstractFlags = (int)(((char *)&g_WebBrowserConfig)); /*0x7aab8c*/
                  if ( ++v17 >= ((char *)&g_WebBrowserConfig) ) /*0x7aab94*/
                    goto LABEL_51; /*0x7aab94*/
                }
              }
              DeleteAndZero((char)((ObjectClass *)&v33[24])); /*0x7aac1e*/
            }
            v20 = *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool.__pad_0 /*0x7aac42*/
                            + 4 * (dword_B76548(v33) & ((1 << SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
            if ( v20 ) /*0x7aac47*/
            {
              while ( !(uint8_t)((String *)((String *)v20))->Compare((const char **)v33) ) /*0x7aac57*/
              {
                v20 = *(unsigned int *)(v20 + 8); /*0x7aac5d*/
                if ( !v20 ) /*0x7aac62*/
                  goto LABEL_66; /*0x7aac62*/
              }
            }
            else
            {
LABEL_66:
              unknown_libname_73(&v33[28]); /*0x7aac64*/
              vtable3 = (char *)((char *)&stru_B765EC); /*0x7aac6d*/
              v22 = 0; /*0x7aac72*/
              if ( (int)((char *)&stru_B765EC) <= 0 ) /*0x7aac76*/
              {
LABEL_72:
                v23 = 0; /*0x7aacb3*/
                if ( (int)vtable3 < 0 ) /*0x7aacb7*/
                  v23 = (int)vtable3; /*0x7aacb9*/
                if ( v23 >= ((char *)&stru_B765EC) ) /*0x7aacc1*/
                {
                  ((DynamicVector *)((DynamicVector *)&((char *)&stru_B765EC)))->EnsureCapacity(); /*0x7aacc8*/
                  vtable3 = (char *)((char *)&stru_B765EC); /*0x7aaccd*/
                }
                if ( (int)vtable3 >= ((char *)&stru_B765EC) ) /*0x7aacd8*/
                {
                  ((DynamicVector *)((DynamicVector *)&((char *)&stru_B765EC)))->EnsureCapacity(); /*0x7aacdf*/
                  vtable3 = (char *)((char *)&stru_B765EC); /*0x7aace4*/
                }
                if ( v23 < (int)vtable3 ) /*0x7aaceb*/
                {
                  memcpy( /*0x7aad08*/
                    (void *)(((char *)&stru_B765EC) + 4 * v23 + 4),
                    (const void *)(((char *)&stru_B765EC) + 4 * v23),
                    4 * (unsigned int)&vtable3[0x3FFFFFFF * v23]);
                  vtable3 = (char *)((char *)&stru_B765EC); /*0x7aad0d*/
                }
                v24 = (String *)(((char *)&stru_B765EC) + 4 * v23); /*0x7aad1b*/
                if ( v24 ) /*0x7aad20*/
                {
                  ((String *)(v24))->AssignFromPtr((const char **)v33); /*0x7aad27*/
                  vtable3 = (char *)((char *)&stru_B765EC); /*0x7aad2c*/
                }
                ((unsigned int *)&stru_B765EC)[0] = (unsigned int)(vtable3 + 1); /*0x7aad32*/
              }
              else
              {
                while ( 1 ) /*0x7aac78*/
                {
                  if ( v22 >= 0 && v22 < (int)vtable3 ) /*0x7aac7e*/
                    ((String *)((String *)&v33[28]))->Reassign((const char **)(((char *)&stru_B765EC) + 4 * v22)); /*0x7aac8e*/
                  if ( (uint8_t)((String *)((String *)&v33[28]))->Compare((const char **)v33) ) /*0x7aac9c*/
                    break; /*0x7aac9c*/
                  vtable3 = (char *)((char *)&stru_B765EC); /*0x7aaca9*/
                  if ( ++v22 >= (int)((char *)&stru_B765EC) ) /*0x7aacb1*/
                    goto LABEL_72; /*0x7aacb1*/
                }
              }
              DeleteAndZero((char)((ObjectClass *)&v33[28])); /*0x7aad3b*/
            }
            v25 = g_WOL_HashTable; /*0x7aad40*/
            v26 = *(unsigned int *)(*(unsigned int *)v25->__pad_0 /*0x7aad5c*/
                            + 4
                            * (((int (*)(unsigned char *))g_WOL_HashTable->HashTable_field_0x18)(v33)
                             & ((1 << v25->HashTable_field_0x0C) - 1)));
            if ( v26 ) /*0x7aad61*/
            {
              while ( !(uint8_t)((String *)((String *)v26))->Compare((const char **)v33) ) /*0x7aad71*/
              {
                v26 = *(unsigned int *)(v26 + 112); /*0x7aad73*/
                if ( !v26 ) /*0x7aad78*/
                  goto LABEL_87; /*0x7aad78*/
              }
            }
            else
            {
LABEL_87:
              strcat(v34, ((String *)((String *)v33))->GetOrEmpty()); /*0x7aad7a*/
              strcat(v34,(const char *)(asc_8318B8)); /*0x7aadd7*/
              ++*(unsigned int *)&v33[4]; /*0x7aade5*/
            }
          }
        }
        else
        {
          ((Array *)((Array *)&g_WindowManager.__pad_EC[636]))->InsertElement(v6, *(int *)&g_WindowManager.__pad_EC[636]); /*0x7aa9ae*/
        }
LABEL_88:
        if ( *(int *)&v33[4] > 20 ) /*0x7aadee*/
        {
          (*(void (**)(LPVOID, char *, int, char *, int, int, unsigned int, unsigned int))(*(unsigned int *)g_UIPointerTable + 20))( /*0x7aae1f*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            v34,
            g_NetworkRematchState & 0xFFFF00,
            -1,
            0,
            0);
          (*(void (**)(LPVOID, char *, int, char *, int))(*(unsigned int *)g_UIPointerTable + 56))( /*0x7aae4b*/
            g_UIPointerTable,
            stru_B76188.__pad_20,
            g_WOL_GameConfig,
            v34,
            g_NetworkRematchState & 0xFFFF00);
          *(unsigned int *)&v33[4] = 0; /*0x7aae5c*/
          memset(v34, 0, 0x200u); /*0x7aae64*/
        }
        v6 = (const char *)*((unsigned int *)v6 + 12); /*0x7aae66*/
        a3 = v6; /*0x7aae6b*/
      }
      while ( v6 ); /*0x7aae72*/
      if ( *(unsigned int *)&v33[4] ) /*0x7aae7e*/
      {
        (*(void (**)(LPVOID, char *, int, char *, int, int, unsigned int, unsigned int))(*(unsigned int *)g_UIPointerTable + 20))( /*0x7aaead*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v34,
          g_NetworkRematchState & 0xFFFF00,
          -1,
          0,
          0);
        (*(void (**)(LPVOID, char *, int, char *, int))(*(unsigned int *)g_UIPointerTable + 56))( /*0x7aaed9*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v34,
          g_NetworkRematchState & 0xFFFF00);
        memset(v34, 0, 0x200u); /*0x7aaeea*/
      }
    }
    SetEvent((void *)(dword_B73690)); /*0x7aaef2*/
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7aaf0a*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x7aaf18*/
    }
    else
    {
      v27 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7aaf27*/
      if ( v27 ) /*0x7aaf2e*/
        FillBuddyListWOL(v27); /*0x7aaf32*/
      if ( *(unsigned int *)&v33[8] ) /*0x7aaf3d*/
      {
        GameListRenderWOL(v32); /*0x7aaf77*/
      }
      else
      {
        PopulateWOLLobbyListBox(v32); /*0x7aaf3f*/
        v28 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x7aaf49*/
        v29 = v28; /*0x7aaf4e*/
        if ( v28 ) /*0x7aaf52*/
        {
          KillTimer(v28, 0x55Du); /*0x7aaf5a*/
          DlgItem = GetDlgItem(v29, 1373); /*0x7aaf68*/
          EnableWindow(DlgItem, 1); /*0x7aaf6f*/
        }
      }
    }
    goto LABEL_103; /*0x7aaf20*/
  }
  *(unsigned int *)&v33[12] = 0; /*0x7aa8af*/
  __3_YAXPAX_Z(0); /*0x7aa8b4*/
LABEL_104:
  DeleteAndZero((char)((ObjectClass *)v33)); /*0x7aaf8e*/
  return 0; /*0x7aaf9a*/

}
} // namespace gamemd
// 0x7AD930
namespace gamemd {
int CChatEventSink::GrowBuffer()
{

  int v2; // eax
  int CChatEventSink_field_0x04; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *CChatEventSink_field_0x08; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *(unsigned int *)this->__pad_0; /*0x7ad935*/
  CChatEventSink_field_0x04 = this->CChatEventSink_field_0x04; /*0x7ad938*/
  if ( 3 * v2 > CChatEventSink_field_0x04 ) /*0x7ad940*/
    return 0; /*0x7ad943*/
  v5 = CChatEventSink_field_0x04 / 2; /*0x7ad94f*/
  if ( CChatEventSink_field_0x04 / 2 < 10 ) /*0x7ad954*/
    v5 = 10; /*0x7ad956*/
  if ( v5 >= CChatEventSink_field_0x04 ) /*0x7ad95d*/
    return 0; /*0x7ad960*/
  v6 = (void *)__2_YAPAXI_Z(268 * v5); /*0x7ad974*/
  CChatEventSink_field_0x08 = (const void *)this->CChatEventSink_field_0x08; /*0x7ad979*/
  v8 = (int)v6; /*0x7ad981*/
  if ( CChatEventSink_field_0x08 ) /*0x7ad985*/
    qmemcpy(v6, CChatEventSink_field_0x08, 268 * *(unsigned int *)this->__pad_0); /*0x7ad99f*/
  __3_YAXPAX_Z((void *)this->CChatEventSink_field_0x08); /*0x7ad9ad*/
  this->CChatEventSink_field_0x08 = v8; /*0x7ad9b9*/
  this->CChatEventSink_field_0x04 = v5; /*0x7ad9bc*/
  return 1; /*0x7ad942*/

}
} // namespace gamemd
// 0x7AED40
namespace gamemd {
int CChatEventSink::ProcessChatEvent()
{

  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *CChatEventSink_field_0x08; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *(unsigned int *)this->__pad_0; /*0x7aed44*/
  if ( *(unsigned int *)this->__pad_0 < this->CChatEventSink_field_0x04 ) /*0x7aed4b*/
    return 0; /*0x7aed4d*/
  v4 = 2 * v2; /*0x7aed53*/
  if ( 2 * v2 < 10 ) /*0x7aed5b*/
    v4 = 10; /*0x7aed5d*/
  v5 = (void *)__2_YAPAXI_Z(248 * v4); /*0x7aed72*/
  memset(v5, 0, 4 * ((unsigned int)(248 * v4) >> 2)); /*0x7aed7d*/
  v7 = (int)v5; /*0x7aed87*/
  CChatEventSink_field_0x08 = (const void *)this->CChatEventSink_field_0x08; /*0x7aed8d*/
  if ( CChatEventSink_field_0x08 ) /*0x7aed92*/
    qmemcpy(v5, CChatEventSink_field_0x08, 248 * *(unsigned int *)this->__pad_0); /*0x7aeda7*/
  __3_YAXPAX_Z((void *)this->CChatEventSink_field_0x08); /*0x7aedb4*/
  this->CChatEventSink_field_0x04 = v4; /*0x7aedc0*/
  this->CChatEventSink_field_0x08 = v7; /*0x7aedc3*/
  return 1; /*0x7aed4f*/

}
} // namespace gamemd
// 0x7AEE90
namespace gamemd {
char CChatEventSink::Check(unsigned int * a2, int a3, void *a3_2)
{

  if ( a3 < 0 || a3 >= *(unsigned int *)this->__pad_0 ) /*0x7aee9a*/
    return 0; /*0x7aeead*/
  *a2 = *(unsigned int *)(this->CChatEventSink_field_0x08 + 4 * a3); /*0x7aeea6*/
  return 1; /*0x7aeeaa*/

}
} // namespace gamemd
// 0x7AD350
namespace gamemd {
ObjectClass * CChatEventSink::DeleteAndZero(char a2 a2)
{

  DeleteAndZero((char)((ObjectClass *)Block)); /*0x7ad353*/
  if ( (a2 & 1) != 0 ) /*0x7ad35d*/
    __3_YAXPAX_Z(Block); /*0x7ad360*/
  return (void **)Block; /*0x7ad36a*/

}
} // namespace gamemd
// 0x7AECB0
namespace gamemd {
int CChatEventSink::ComputeBucketMask(int a2)
{

  return (*(int (**)(int))((char *)this + 24))(a2) & ((1 << *((unsigned int *)this + 3)) - 1); /*0x7aecc4*/

}
} // namespace gamemd
// 0x7AEDD0
namespace gamemd {
char CChatEventSink::EnsureCapacity(int a2, void *a2_2)
{

  int v3; // esi
  int v5; // ecx
  int v6; // eax
  int CChatEventSink_field_0x04; // ecx
  int v8; // ebp
  void *v9; // eax
  const void *CChatEventSink_field_0x08; // esi
  int v11; // [esp+Ch] [ebp+4h]

  v3 = *(unsigned int *)this->__pad_0; /*0x7aedd4*/
  if ( !*(unsigned int *)this->__pad_0 ) /*0x7aedd4*/
    return 0; /*0x7aeddb*/
  v5 = a2; /*0x7aede1*/
  if ( a2 < 0 ) /*0x7aede7*/
    v5 = 0; /*0x7aede9*/
  if ( v5 >= v3 ) /*0x7aeded*/
    v5 = v3 - 1; /*0x7aedef*/
  memcpy( /*0x7aee0f*/
    (void *)(this->CChatEventSink_field_0x08 + 4 * v5),
    (const void *)(this->CChatEventSink_field_0x08 + 4 * (v5 + 1)),
    4 * (v3 + 0x3FFFFFFF * (v5 + 1)));
  v6 = *(unsigned int *)this->__pad_0 - 1; /*0x7aee1a*/
  *(unsigned int *)this->__pad_0 = v6; /*0x7aee1c*/
  CChatEventSink_field_0x04 = this->CChatEventSink_field_0x04; /*0x7aee1e*/
  if ( 3 * v6 <= CChatEventSink_field_0x04 ) /*0x7aee26*/
  {
    v8 = CChatEventSink_field_0x04 / 2; /*0x7aee2f*/
    if ( CChatEventSink_field_0x04 / 2 < 10 ) /*0x7aee34*/
      v8 = 10; /*0x7aee36*/
    if ( v8 < CChatEventSink_field_0x04 ) /*0x7aee3d*/
    {
      v9 = (void *)__2_YAPAXI_Z(4 * v8); /*0x7aee47*/
      CChatEventSink_field_0x08 = (const void *)this->CChatEventSink_field_0x08; /*0x7aee4c*/
      v11 = (int)v9; /*0x7aee54*/
      if ( CChatEventSink_field_0x08 ) /*0x7aee58*/
        qmemcpy(v9, CChatEventSink_field_0x08, 4 * *(unsigned int *)this->__pad_0); /*0x7aee66*/
      __3_YAXPAX_Z((void *)this->CChatEventSink_field_0x08); /*0x7aee73*/
      this->CChatEventSink_field_0x08 = v11; /*0x7aee7f*/
      this->CChatEventSink_field_0x04 = v8; /*0x7aee82*/
    }
  }
  return 1; /*0x7aedda*/

}
} // namespace gamemd
// 0x7B5E30
namespace gamemd {
char CChatEventSink::EncodeString(char a2)
{

  char *v4; // eax
  char *v5; // eax
  size_t v6; // esi
  const char *v7; // edi
  char *v8; // eax
  char *v9; // ebp
  const char *v10; // esi
  size_t v11; // ecx
  unsigned char *v12; // eax

  if ( !*(unsigned int *)this->__pad_0 ) /*0x7b5e33*/
    return 0; /*0x7b5e39*/
  v4 = (char *)(strchr(*(const char **)this->__pad_0, a2)); /*0x7b5e46*/
  if ( !v4 ) /*0x7b5e50*/
    return 0; /*0x7b5e52*/
  v5 = &v4[-*(unsigned int *)this->__pad_0]; /*0x7b5e5c*/
  v6 = (size_t)v5; /*0x7b5e5f*/
  v7 = (const char *)(&g_INI_DefaultBuffer); /*0x7b5e63*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x7b5e58*/
    v7 = *(const char **)this->__pad_0; /*0x7b5e6a*/
  v8 = (char *)__2_YAPAXI_Z((size_t)(v5 + 1)); /*0x7b5e70*/
  v9 = v8; /*0x7b5e75*/
  *v8 = 0; /*0x7b5e7c*/
  if ( v7 ) /*0x7b5e80*/
    strncpy(v8, v7, v6); /*0x7b5e85*/
  v9[v6] = 0; /*0x7b5e8d*/
  v10 = (const char *)(&g_INI_DefaultBuffer); /*0x7b5e91*/
  if ( v9 ) /*0x7b5e98*/
    v10 = v9; /*0x7b5e9a*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x7b5e9c*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5ea3*/
  *(unsigned int *)this->__pad_0 = 0; /*0x7b5ead*/
  if ( v10 ) /*0x7b5eb3*/
    v11 = strlen(v10) + 1; /*0x7b5ebc*/
  else
    v11 = 1; /*0x7b5ec2*/
  v12 = (unsigned char *)__2_YAPAXI_Z(v11); /*0x7b5ec8*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(v12); /*0x7b5ed0*/
  *v12 = 0; /*0x7b5ed4*/
  if ( v10 ) /*0x7b5ed7*/
    strcpy(*(char **)this->__pad_0, v10); /*0x7b5eef*/
  if ( v9 ) /*0x7b5efa*/
    __3_YAXPAX_Z(v9); /*0x7b5efd*/
  return 1; /*0x7b5e3b*/

}
} // namespace gamemd