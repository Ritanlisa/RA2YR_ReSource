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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7AA870)
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
char CChatEventSink::Check(unsigned int * a2, int a3)
{

  if ( a3 < 0 || a3 >= *(unsigned int *)this->__pad_0 ) /*0x7aee9a*/
    return 0; /*0x7aeead*/
  *a2 = *(unsigned int *)(this->CChatEventSink_field_0x08 + 4 * a3); /*0x7aeea6*/
  return 1; /*0x7aeeaa*/

}
} // namespace gamemd
// 0x7AD350
namespace gamemd {
ObjectClass * CChatEventSink::DeleteAndZero(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7AD350)
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
char CChatEventSink::EnsureCapacity(int a2)
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