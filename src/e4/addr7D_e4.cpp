// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7D2E6E_e4.hpp"
#include "e4/classes/E4Recv_7D2E7F_e4.hpp"
#include "e4/classes/E4Recv_7D2E9B_e4.hpp"
#include "e4/classes/E4Recv_7D2ED8_e4.hpp"
#include "e4/classes/E4Recv_7D2F22_e4.hpp"
#include "e4/classes/E4Recv_7D2F57_e4.hpp"
#include "e4/classes/E4Recv_7DCDF2_e4.hpp"
#include "e4/classes/_com_error_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/E4Recv_7B9530_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x7D038F
namespace gamemd {
int __sbh_heap_check()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D038F.json)
}
}
// 0x7D06BE
namespace gamemd {
int _set_new_handler_shape(int (__cdecl *a1)(unsigned int), unsigned int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D06BE.json)
}
}
// 0x7D0703
namespace gamemd {
int _filbuf(MouseClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D0703.json)
}
}
// 0x7D0844
namespace gamemd {
int _read_lk(int FileHandle, char * lpBuffer, DWORD nNumberOfBytesToRead)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D0844.json)
}
}
// 0x7D0A20
namespace gamemd {
exception * * memcpy_0(void * a0, CCINIClass * aP1, AbstractClass * aP2)
{
  char *v3; // esi
  char *v4; // edi
  size_t v5; // ecx
  void *result; // eax
  char *v7; // esi
  char *v8; // edi
  size_t v9; // ecx

  v3 = (char *)aP1; /*0x7d0a25*/
  v4 = (char *)a0; /*0x7d0a2b*/
  if ( a0 > aP1 && a0 < ((unsigned int)(char)*)(unsigned int)(aP1)+ aP2 ) /*0x7d0a3a*/
  {
    v7 = (char *)(unsigned int)(aP1)+ aP2 - 4; /*0x7d0bb8*/
    v8 = (char *)(unsigned int)(a0)+ aP2 - 4; /*0x7d0bbc*/
    if ( ((uint8_t)v8 & 3) == 0 ) /*0x7d0bc6*/
    {
      v9 = (unsigned int)(aP2)>> 2; /*0x7d0bc8*/
      if ( (unsigned int)(aP2)>> 2 >= 8 ) /*0x7d0bd1*/
      {
        while ( v9 ) /*0x7d0bd4*/
        {
          *(unsigned int *)v8 = *(unsigned int *)v7; /*0x7d0bd4*/
          v7 -= 4; /*0x7d0bd4*/
          v8 -= 4; /*0x7d0bd4*/
          --v9; /*0x7d0bd4*/
        }
        switch ( (unsigned int)(aP2)& 3 ) /*0x7d0bd7*/
        {
          case 0u: /*0x7d0bd7*/
            goto TrailDown0_0;
          case 1u: /*0x7d0bd7*/
            goto TrailDown1_0;
          case 2u: /*0x7d0bd7*/
            goto TrailDown2_0;
          case 3u: /*0x7d0bd7*/
            goto TrailDown3_0;
        }
      }
      switch ( (unsigned int)(aP2)& 3 ) /*0x7d0cf7*/
      {
        case 0u: /*0x7d0cf7*/
          goto TrailDown0_0;
        case 1u: /*0x7d0cf7*/
          goto TrailDown1_0;
        case 2u: /*0x7d0cf7*/
          goto TrailDown2_0;
        case 3u: /*0x7d0cf7*/
          goto TrailDown3_0;
      }
    }
    switch ( aP2 ) /*0x7d0c04*/
    {
      case 0u: /*0x7d0c04*/
  TrailDown0_0:
        result = (gamemd::exception **)(a0);
        break; /*0x7d0d16*/
      case 1u: /*0x7d0c04*/
  TrailDown1_0:
        v8[3] = v7[3]; /*0x7d0d18*/
        result = a0; /*0x7d0d1e*/
        break; /*0x7d0d24*/
      case 2u: /*0x7d0c04*/
  TrailDown2_0:
        v8[3] = v7[3]; /*0x7d0d28*/
        v8[2] = v7[2]; /*0x7d0d31*/
        result = a0; /*0x7d0d34*/
        break; /*0x7d0d3a*/
      case 3u: /*0x7d0c04*/
  TrailDown3_0:
        v8[3] = v7[3]; /*0x7d0d3c*/
        v8[2] = v7[2]; /*0x7d0d45*/
        v8[1] = v7[1]; /*0x7d0d4b*/
        result = a0; /*0x7d0d4e*/
        break; /*0x7d0d4e*/
      default:
        __asm { jmp dword ptr ds:loc_7D0C04+4[eax*4] } /*0x7d0bfd*/
        return (gamemd::exception **)(result); /*0x7d0bfd*/
    }
  }
  else
  {
    if ( ((uint8_t)a0 & 3) != 0 ) /*0x7d0a46*/
    {
      if ( aP2 >= (AbstractClass *)(4) ) /*0x7d0a66*/
        __asm { jmp dword ptr ds:loc_7D0A7C+4[eax*4] } /*0x7d0a6d*/
      __asm { jmp dword ptr ds:TrailUp0_0[ecx*4]; jumptable 007D0A55 case 0 } /*0x7d0a74*/
    }
    v5 = (unsigned int)(aP2)>> 2; /*0x7d0a48*/
    switch ( v5 ) /*0x7d0a7c*/
    {
      case 0u: /*0x7d0a7c*/
        goto UnwindUp0_0;
      case 1u: /*0x7d0a7c*/
        goto UnwindUp1_0;
      case 2u: /*0x7d0a7c*/
        goto UnwindUp2_0;
      case 3u: /*0x7d0a7c*/
        goto UnwindUp3_0;
      case 4u: /*0x7d0a7c*/
        goto UnwindUp4_0;
      case 5u: /*0x7d0a7c*/
        goto UnwindUp5_0;
      case 6u: /*0x7d0a7c*/
        goto UnwindUp6_0;
      case 7u: /*0x7d0a7c*/
        *((unsigned int *)a0 + v5 - 7) = *((unsigned int *)aP1 + v5 - 7); /*0x7d0b20*/
  UnwindUp6_0:
        *((unsigned int *)a0 + v5 - 6) = *((unsigned int *)aP1 + v5 - 6); /*0x7d0b24*/
  UnwindUp5_0:
        *((unsigned int *)a0 + v5 - 5) = *((unsigned int *)aP1 + v5 - 5); /*0x7d0b2c*/
  UnwindUp4_0:
        *((unsigned int *)a0 + v5 - 4) = *((unsigned int *)aP1 + v5 - 4); /*0x7d0b34*/
  UnwindUp3_0:
        *((unsigned int *)a0 + v5 - 3) = *((unsigned int *)aP1 + v5 - 3); /*0x7d0b3c*/
  UnwindUp2_0:
        *((unsigned int *)a0 + v5 - 2) = *((unsigned int *)aP1 + v5 - 2); /*0x7d0b44*/
  UnwindUp1_0:
        *((unsigned int *)a0 + v5 - 1) = *((unsigned int *)aP1 + v5 - 1); /*0x7d0b4c*/
        v3 = (char *)aP1 + 4 * v5; /*0x7d0b5b*/
        v4 = (char *)a0 + 4 * v5; /*0x7d0b5d*/
  UnwindUp0_0:
        switch ( (unsigned int)(aP2)& 3 ) /*0x7d0b5f*/
        {
          case 0u: /*0x7d0b5f*/
            goto TrailUp0_0;
          case 1u: /*0x7d0b5f*/
            goto TrailUp1_0;
          case 2u: /*0x7d0b5f*/
            goto TrailUp2_0;
          case 3u: /*0x7d0b5f*/
            goto TrailUp3_0;
        }
      default:
        qmemcpy(a0, aP1, 4 * v5); /*0x7d0a53*/
        v3 = (char *)aP1 + 4 * v5; /*0x7d0a53*/
        v4 = (char *)a0 + 4 * v5; /*0x7d0a53*/
        switch ( (unsigned int)(aP2)& 3 ) /*0x7d0a55*/
        {
          case 0u: /*0x7d0a55*/
  TrailUp0_0:
            result = a0; /*0x7d0b78*/
            break; /*0x7d0b7e*/
          case 1u: /*0x7d0a55*/
  TrailUp1_0:
            *v4 = *v3; /*0x7d0b80*/
            result = a0; /*0x7d0b84*/
            break; /*0x7d0b8a*/
          case 2u: /*0x7d0a55*/
  TrailUp2_0:
            *v4 = *v3; /*0x7d0b8c*/
            v4[1] = v3[1]; /*0x7d0b93*/
            result = a0; /*0x7d0b96*/
            break; /*0x7d0b9c*/
          case 3u: /*0x7d0a55*/
  TrailUp3_0:
            *v4 = *v3; /*0x7d0ba0*/
            v4[1] = v3[1]; /*0x7d0ba7*/
            v4[2] = v3[2]; /*0x7d0bad*/
            result = a0; /*0x7d0bb0*/
            break; /*0x7d0bb6*/
        }
        break; /*0x7d0bb6*/
    }
  }
  return (gamemd::exception **)(result);
}
}
// 0x7D0DBA
namespace gamemd {
int _write_lk(int FileHandle, unsigned char * lpBuffer, DWORD nNumberOfBytesToWrite)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D0DBA.json)
}
}
// 0x7D0F45
namespace gamemd {
void * realloc(CCINIClass * aP0, size_t Size)
{
  size_t v3; // esi
  void *v4; // edi
  size_t v5; // eax
  size_t v6; // eax
  size_t v7; // eax
  size_t Sizea; // [esp+18h] [ebp+Ch]

  if ( !aP0 ) /*0x7d0f50*/
    return malloc(Size); /*0x7d0f5b*/
  v3 = Size; /*0x7d0f60*/
  if ( Size ) /*0x7d0f65*/
  {
    while ( 1 ) /*0x7d0f75*/
    {
      v4 = 0; /*0x7d0f75*/
      if ( v3 > 0xFFFFFFE0 ) /*0x7d0f7a*/
        goto LABEL_27; /*0x7d0f7a*/
      _lock(9); /*0x7d0f82*/
      v5 = __sbh_find_block(aP0); /*0x7d0f88*/
      Sizea = v5; /*0x7d0f8e*/
      if ( v5 ) /*0x7d0f94*/
        break; /*0x7d0f94*/
      _unlock(9); /*0x7d1030*/
      if ( !v3 ) /*0x7d1038*/
        v3 = 1; /*0x7d103c*/
      v3 = (v3 + 15) & 0xFFFFFFF0; /*0x7d1040*/
      v4 = HeapReAlloc((HANDLE)(hHeap), 0, aP0, v3); /*0x7d1053*/
  LABEL_26:
      if ( v4 ) /*0x7d1057*/
        return v4; /*0x7d1057*/
  LABEL_27:
      if ( !dword_B782C4 ) /*0x7d1060*/
        return v4; /*0x7d1076*/
      if ( !_callnewh(v3) ) /*0x7d1063*/
        return 0; /*0x7d106b*/
    }
    if ( v3 <= dword_87C584 ) /*0x7d0fa0*/
    {
      if ( __sbh_resize_block(v5, aP0, v3) ) /*0x7d0fa5*/
      {
        v4 = aP0; /*0x7d0fb1*/
  LABEL_22:
        _unlock(9); /*0x7d1024*/
        goto LABEL_26; /*0x7d102c*/
      }
      v4 = (void *)__sbh_alloc_block(v3); /*0x7d0fbb*/
      if ( v4 ) /*0x7d0fc0*/
      {
        v6 = *((unsigned int *)aP0 - 1) - 1; /*0x7d0fc5*/
        if ( v6 >= v3 ) /*0x7d0fc8*/
          v6 = v3; /*0x7d0fca*/
        memcpy_0(v4, aP0,(AbstractClass *)(v6)); /*0x7d0fcf*/
        __sbh_free_block(Sizea, aP0); /*0x7d0fd8*/
        goto LABEL_22; /*0x7d0fd8*/
      }
    }
    if ( !v3 ) /*0x7d0fe6*/
      v3 = 1; /*0x7d0fea*/
    v3 = (v3 + 15) & 0xFFFFFFF0; /*0x7d0fee*/
    v4 = HeapAlloc((HANDLE)(hHeap), 0, v3); /*0x7d1000*/
    if ( v4 ) /*0x7d1004*/
    {
      v7 = *((unsigned int *)aP0 - 1) - 1; /*0x7d1009*/
      if ( v7 >= v3 ) /*0x7d100c*/
        v7 = v3; /*0x7d100e*/
      memcpy_0(v4, aP0,(AbstractClass *)(v7)); /*0x7d1013*/
      __sbh_free_block(Sizea, aP0); /*0x7d101c*/
    }
    goto LABEL_22; /*0x7d101c*/
  }
  free(aP0); /*0x7d0f68*/
  return 0; /*0x7d1078*/
}
}
// 0x7D10C2
namespace gamemd {
ControlClass * * __crtLCMapStringA(CampaignScore * aP0, DWORD dwMapFlags, ObjectClass * aP2, int cchSrc, LPSTR lpDestStr, int cchDest, UINT CodePage, int a8)
{
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  void *v12; // esp
  int v13; // eax
  int v14; // esi
  int v15; // eax
  void *v16; // esp
  int v17; // eax
  WCHAR v18[8]; // [esp+0h] [ebp-38h] BYREF
  int v19; // [esp+10h] [ebp-28h]
  LPWSTR lpWideCharStr; // [esp+14h] [ebp-24h]
  WCHAR *v21; // [esp+18h] [ebp-20h]
  int v22; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  if ( !dword_B782CC ) /*0x7d10f0*/
  {
    if ( LCMapStringW(0, 0x100u, &String1, 1, 0, 0) ) /*0x7d1104*/
    {
      dword_B782CC = 1; /*0x7d110e*/
    }
    else
    {
      if ( !LCMapStringA(0, 0x100u,(LPCSTR)(byte_7F98E4), 1, 0, 0) ) /*0x7d1128*/
        return 0; /*0x7d1263*/
      dword_B782CC = 2; /*0x7d112e*/
    }
  }
  if ( cchSrc > 0 ) /*0x7d113b*/
    cchSrc = (int)(strncnt((const unsigned char *)(aP2), cchSrc)); /*0x7d114a*/
  if ( dword_B782CC == 2 ) /*0x7d1155*/
    return LCMapStringA(aP0, dwMapFlags, aP2, cchSrc, lpDestStr, cchDest); /*0x7d116f*/
  if ( dword_B782CC != 1 ) /*0x7d1177*/
    return 0; /*0x7d1177*/
  if ( !CodePage ) /*0x7d1180*/
    CodePage = ::CodePage; /*0x7d1187*/
  v9 = MultiByteToWideChar(CodePage, a8 != 0 ? 9 : 1, aP2, cchSrc, 0, 0);
  v10 = v9; /*0x7d11a7*/
  v22 = v9; /*0x7d11a9*/
  if ( !v9 ) /*0x7d11ae*/
    return 0; /*0x7d11ae*/
  v11 = 2 * v9 + 3; /*0x7d11ba*/
  IDA_LOBYTE(v11) = v11 & 0xFC; /*0x7d11bd*/
  v12 = alloca(v11); /*0x7d11bf*/
  ms_exc.old_esp = (DWORD)v18; /*0x7d11c4*/
  lpWideCharStr = v18; /*0x7d11c9*/
  ms_exc.registration.TryLevel = -1; /*0x7d11cc*/
  if ( !v18 ) /*0x7d11e8*/
    return 0; /*0x7d11e8*/
  if ( !MultiByteToWideChar(CodePage, 1u, aP2, cchSrc, lpWideCharStr, v10) ) /*0x7d11f9*/
    return 0; /*0x7d11f9*/
  v13 = LCMapStringW(aP0, dwMapFlags, lpWideCharStr, v10, 0, 0); /*0x7d120f*/
  v14 = v13; /*0x7d1215*/
  v19 = v13; /*0x7d1217*/
  if ( !v13 ) /*0x7d121c*/
    return 0; /*0x7d121c*/
  if ( (dwMapFlags & 0x400) != 0 )
  {
    if ( cchDest && (v13 > cchDest || !LCMapStringW(aP0, dwMapFlags, lpWideCharStr, v10, (LPWSTR)lpDestStr, cchDest)) ) /*0x7d1242*/
      return 0; /*0x7d124a*/
  }
  else
  {
    v15 = 2 * v13 + 3; /*0x7d126e*/
    IDA_LOBYTE(v15) = v15 & 0xFC; /*0x7d1271*/
    v16 = alloca(v15); /*0x7d1273*/
    ms_exc.old_esp = (DWORD)v18; /*0x7d1278*/
    v21 = v18; /*0x7d127d*/
    ms_exc.registration.TryLevel = -1; /*0x7d1280*/
    if ( !v18 || !LCMapStringW(aP0, dwMapFlags, lpWideCharStr, v22, v18, v14) ) /*0x7d12aa*/
      return 0; /*0x7d12aa*/
    v17 = cchDest
        ? WideCharToMultiByte(CodePage, 0x220u, v18, v14, lpDestStr, cchDest, 0, 0)
        : WideCharToMultiByte(CodePage, 0x220u, v18, v14, 0, 0, 0, 0);
    v14 = v17; /*0x7d12d5*/
    if ( !v17 ) /*0x7d12d9*/
      return 0; /*0x7d12d9*/
  }
  return (ControlClass **)(v14);
}
}
// 0x7D1311
namespace gamemd {
int _isctype(int C, int Type)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D1311.json)
}
}
// 0x7D15A0
namespace gamemd {
int strlen(const char * Str)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D15A0.json)
}
}
// 0x7D170D
namespace gamemd {
ControlClass * * _input(FILE * Stream, char * a2, int a3)
{
  char *v3; // esi
  uint8_t v4; // al
  FILE *v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int i; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // ebx
  int v17; // ebx
  char *v18; // esi
  FILE *v19; // edi
  int v26; // eax
  char *v30; // edi
  int v31; // eax
  unsigned int v32; // edx
  uint8_t v33; // al
  uint8_t v34; // cl
  uint8_t v35; // al
  int v36; // esi
  wchar_t *v37; // esi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int64_t v42; // rax
  int v43; // eax
  int v44; // edi
  int v45; // eax
  int v46; // ebx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int result; // eax
  int v51; // [esp-4h] [ebp-1D4h]
  char v52; // [esp+Ch] [ebp-1C4h] BYREF
  char v53; // [esp+Dh] [ebp-1C3h] BYREF
  unsigned char v54[32]; // [esp+16Ch] [ebp-64h] BYREF
  int v55; // [esp+18Ch] [ebp-44h]
  wchar_t DstCh; // [esp+192h] [ebp-3Eh] BYREF
  int v57; // [esp+194h] [ebp-3Ch]
  char SrcCh[3]; // [esp+198h] [ebp-38h] BYREF
  char v59; // [esp+19Bh] [ebp-35h]
  int v60; // [esp+19Ch] [ebp-34h]
  wchar_t *v61; // [esp+1A0h] [ebp-30h]
  wchar_t *v62; // [esp+1A4h] [ebp-2Ch]
  int64_t v63; // [esp+1A8h] [ebp-28h]
  int v64; // [esp+1B0h] [ebp-20h]
  int v65; // [esp+1B4h] [ebp-1Ch]
  char v66; // [esp+1B8h] [ebp-18h]
  char v67; // [esp+1B9h] [ebp-17h]
  char v68; // [esp+1BAh] [ebp-16h]
  char v69; // [esp+1BBh] [ebp-15h]
  int C; // [esp+1BCh] [ebp-14h]
  char v71; // [esp+1C1h] [ebp-Fh]
  char v72; // [esp+1C2h] [ebp-Eh]
  char v73; // [esp+1C3h] [ebp-Dh]
  int v74; // [esp+1C4h] [ebp-Ch]
  char v75; // [esp+1CBh] [ebp-5h]
  int v76; // [esp+1CCh] [ebp-4h] BYREF
  char *v77; // [esp+1DCh] [ebp+Ch]
  int v78; // [esp+1DCh] [ebp+Ch]

  v69 = 0; /*0x7d1716*/
  v3 = a2; /*0x7d171c*/
  v4 = *a2; /*0x7d1722*/
  v76 = 0; /*0x7d1724*/
  v60 = 0; /*0x7d1729*/
  if ( !v4 ) /*0x7d172c*/
    goto LABEL_256; /*0x7d172c*/
  v5 = Stream; /*0x7d1732*/
  while ( 2 )
  {
    if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1743*/
      v6 = *((unsigned char *)off_87C590 + 2 * v4) & 8; /*0x7d1760*/
    else
      v6 = _isctype(v4, 8); /*0x7d174b*/
    if ( v6 ) /*0x7d1765*/
    {
      --v76; /*0x7d1767*/
      v7 = _whiteout((int)&v76, v5); /*0x7d1770*/
      _un_inc(v7, v5); /*0x7d1778*/
      v8 = (uint8_t)*++v3; /*0x7d177d*/
      for ( i = isspace(v8); i; i = isspace(v10) ) /*0x7d1783*/
        v10 = (uint8_t)*++v3; /*0x7d178f*/
    }
    if ( *v3 != 37 ) /*0x7d17a0*/
    {
      ++v76; /*0x7d207f*/
      v46 = fgetc_0((FILE *)(v5)); /*0x7d2088*/
      v47 = (uint8_t)*v3++; /*0x7d208b*/
      C = v46; /*0x7d2091*/
      v78 = (int)v3; /*0x7d2094*/
      if ( v47 == v46 ) /*0x7d2097*/
      {
        if ( *((char *)off_87C590 + 2 * (uint8_t)v46 + 1) >= 0 ) /*0x7d20a7*/
          goto LABEL_247; /*0x7d20a7*/
        ++v76; /*0x7d20a9*/
        v48 = fgetc_0((FILE *)(v5)); /*0x7d20ad*/
        v49 = (uint8_t)*v3++; /*0x7d20b3*/
        v78 = (int)v3; /*0x7d20b9*/
        if ( v49 == v48 ) /*0x7d20bc*/
        {
          --v76; /*0x7d20be*/
          goto LABEL_247; /*0x7d20be*/
        }
        --v76; /*0x7d20fc*/
        _un_inc(v48, v5); /*0x7d2101*/
        --v76; /*0x7d2106*/
        _un_inc(v46, v5); /*0x7d210b*/
      }
      else
      {
        --v76; /*0x7d20ee*/
        _un_inc(v46, v5); /*0x7d20f3*/
      }
      break; /*0x7d210b*/
    }
    v59 = 0; /*0x7d17a6*/
    v66 = 0; /*0x7d17aa*/
    v67 = 0; /*0x7d17ae*/
    v72 = 0; /*0x7d17b2*/
    v71 = 0; /*0x7d17b6*/
    v68 = 0; /*0x7d17ba*/
    v11 = 0; /*0x7d17be*/
    v75 = 0; /*0x7d17c0*/
    v65 = 0; /*0x7d17c4*/
    v64 = 0; /*0x7d17c7*/
    v74 = 0; /*0x7d17ca*/
    v73 = 1; /*0x7d17cd*/
    v61 = 0; /*0x7d17d1*/
    do /*0x7d187f*/
    {
      v12 = (uint8_t)*++v3; /*0x7d17d4*/
      if ( (int)SrcSizeInBytes <= 1 ) /*0x7d17e0*/
        v13 = *((unsigned char *)off_87C590 + 2 * (uint8_t)v12) & 4; /*0x7d17fd*/
      else
        v13 = _isctype((uint8_t)v12, 4); /*0x7d17e8*/
      if ( v13 ) /*0x7d1802*/
      {
        ++v64; /*0x7d1807*/
        v74 = v12 + 10 * v74 - 48; /*0x7d1811*/
        continue; /*0x7d1814*/
      }
      if ( v12 <= 78 ) /*0x7d1819*/
      {
        switch ( v12 ) /*0x7d181b*/
        {
          case 'N': /*0x7d181b*/
            continue; /*0x7d181b*/
          case '*': /*0x7d181b*/
            ++v72; /*0x7d1854*/
            continue; /*0x7d1857*/
          case 'F': /*0x7d181b*/
            continue; /*0x7d1825*/
          case 'I': /*0x7d181b*/
            if ( v3[1] == 54 && v3[2] == 52 ) /*0x7d1843*/
            {
              v61 = (wchar_t *)((char *)v61 + 1); /*0x7d1845*/
              v63 = 0; /*0x7d1848*/
              v3 += 2; /*0x7d1850*/
              continue; /*0x7d1852*/
            }
            break;
          case 'L': /*0x7d181b*/
            ++v73; /*0x7d1831*/
            continue; /*0x7d1834*/
        }
  LABEL_32:
        ++v71; /*0x7d1868*/
        continue; /*0x7d186b*/
      }
      if ( v12 == 104 ) /*0x7d185c*/
      {
        --v73; /*0x7d1875*/
        --v75; /*0x7d1878*/
      }
      else
      {
        if ( v12 == 108 ) /*0x7d1861*/
        {
          ++v73; /*0x7d186d*/
        }
        else if ( v12 != 119 ) /*0x7d1866*/
        {
          goto LABEL_32; /*0x7d1866*/
        }
        ++v75; /*0x7d1870*/
      }
    }
    while ( !v71 ); /*0x7d187f*/
    v77 = v3; /*0x7d1889*/
    if ( !v72 ) /*0x7d188c*/
    {
      v55 = a3; /*0x7d1891*/
      a3 += 4; /*0x7d1897*/
      v62 = *(wchar_t **)(a3 - 4); /*0x7d189d*/
    }
    v71 = 0; /*0x7d18a0*/
    if ( !v75 ) /*0x7d18a8*/
    {
      if ( *v3 == 83 || *v3 == 67 ) /*0x7d18b2*/
        v75 = 1; /*0x7d18ba*/
      else
        v75 = -1; /*0x7d18b4*/
    }
    v57 = (uint8_t)*v3 | 0x20; /*0x7d18ca*/
    v14 = v57; /*0x7d18c4*/
    if ( v57 != 110 ) /*0x7d18cd*/
    {
      if ( v57 == 99 || v57 == 123 ) /*0x7d18d7*/
      {
        ++v76; /*0x7d18eb*/
        v15 = fgetc_0((FILE *)(Stream)); /*0x7d18ee*/
      }
      else
      {
        v15 = _whiteout((int)&v76, Stream); /*0x7d18e0*/
      }
      C = v15; /*0x7d18f4*/
    }
    if ( v64 && !v74 ) /*0x7d1901*/
    {
  LABEL_253:
      --v76; /*0x7d20e3*/
      _un_inc(C, Stream); /*0x7d20ec*/
      break; /*0x7d20ec*/
    }
    if ( v14 > 111 ) /*0x7d190a*/
    {
      switch ( v14 ) /*0x7d1b73*/
      {
        case 'p': /*0x7d1b73*/
          v73 = 1; /*0x7d1e1c*/
          goto LABEL_181; /*0x7d1e1c*/
        case 's': /*0x7d1b73*/
          if ( v75 > 0 ) /*0x7d1c6e*/
            v68 = 1; /*0x7d1c70*/
          v30 = (char *)(asc_87C918); /*0x7d1c74*/
          break;
        case 'u': /*0x7d1b73*/
          goto LABEL_181; /*0x7d1b84*/
        case 'x': /*0x7d1b73*/
  LABEL_63:
          v16 = C; /*0x7d1956*/
          if ( C == 45 ) /*0x7d195c*/
          {
            v67 = 1; /*0x7d1962*/
          }
          else if ( C != 43 ) /*0x7d1be3*/
          {
  LABEL_129:
            if ( v16 != 48 ) /*0x7d1c0a*/
              goto LABEL_189; /*0x7d1c0a*/
            ++v76; /*0x7d1c13*/
            v31 = fgetc_0((FILE *)(Stream)); /*0x7d1c16*/
            v16 = v31; /*0x7d1c1b*/
            C = v31; /*0x7d1c21*/
            if ( (unsigned char)v31 == 120 || (unsigned char)v31 == 88 ) /*0x7d1c29*/
            {
              ++v76; /*0x7d1c58*/
              v16 = fgetc_0((FILE *)(Stream)); /*0x7d1c61*/
              C = v16; /*0x7d1c63*/
              v51 = 120; /*0x7d1c66*/
              goto LABEL_134; /*0x7d1c68*/
            }
            v65 = 1; /*0x7d1c2e*/
            if ( v14 != 120 ) /*0x7d1c35*/
            {
              v51 = 111; /*0x7d1c37*/
  LABEL_134:
              v14 = v51; /*0x7d1c39*/
              goto LABEL_189; /*0x7d1c3a*/
            }
            --v76; /*0x7d1c42*/
            _un_inc(v31, Stream); /*0x7d1c46*/
            v16 = 48; /*0x7d1c4f*/
            goto LABEL_188; /*0x7d1c50*/
          }
          if ( --v74 || !v64 ) /*0x7d1bee*/
          {
            ++v76; /*0x7d1bf9*/
            v16 = fgetc_0((FILE *)(Stream)); /*0x7d1c01*/
            C = v16; /*0x7d1c04*/
          }
          else
          {
            v71 = 1; /*0x7d1bf0*/
          }
          goto LABEL_129; /*0x7d1bf4*/
        case '{': /*0x7d1b73*/
          if ( v75 > 0 ) /*0x7d1bc0*/
            v68 = 1; /*0x7d1bc2*/
          v30 = v77 + 1; /*0x7d1bc9*/
          v77 = v30; /*0x7d1bca*/
          if ( *v30 != 94 ) /*0x7d1bd0*/
          {
  LABEL_141:
            memset(v54, 0, sizeof(v54)); /*0x7d1c7d*/
            if ( v57 == 123 && *v30 == 93 ) /*0x7d1c96*/
            {
              IDA_LOBYTE(v32) = 93; /*0x7d1c98*/
              ++v30; /*0x7d1c9a*/
              v54[11] = 32; /*0x7d1c9b*/
            }
            else
            {
              IDA_LOBYTE(v32) = v59; /*0x7d1ca1*/
            }
            while ( 1 ) /*0x7d1ca4*/
            {
              v33 = *v30; /*0x7d1ca4*/
              if ( *v30 == 93 ) /*0x7d1ca8*/
                break; /*0x7d1ca8*/
              ++v30; /*0x7d1caa*/
              if ( v33 == 45 && (unsigned char)v32 && (v34 = *v30, *v30 != 93) ) /*0x7d1cb8*/
              {
                ++v30; /*0x7d1cba*/
                if ( (uint8_t)v32 >= v34 ) /*0x7d1cbd*/
                {
                  v35 = v32; /*0x7d1cc3*/
                  IDA_LOBYTE(v32) = v34; /*0x7d1cc5*/
                }
                else
                {
                  v35 = v34; /*0x7d1cbf*/
                }
                if ( (uint8_t)v32 <= v35 ) /*0x7d1cc9*/
                {
                  v32 = (uint8_t)v32; /*0x7d1ccb*/
                  v36 = v35 - (uint8_t)v32 + 1; /*0x7d1cd3*/
                  do /*0x7d1cea*/
                  {
                    v54[v32 >> 3] |= 1 << (v32 & 7); /*0x7d1ce6*/
                    ++v32; /*0x7d1ce8*/
                    --v36; /*0x7d1ce9*/
                  }
                  while ( v36 ); /*0x7d1cea*/
                }
                IDA_LOBYTE(v32) = 0; /*0x7d1cec*/
              }
              else
              {
                IDA_LOBYTE(v32) = v33; /*0x7d1cf3*/
                v54[v33 >> 3] |= 1 << (v33 & 7); /*0x7d1d05*/
              }
            }
            if ( *v30 ) /*0x7d1d09*/
            {
              if ( v57 == 123 ) /*0x7d1d16*/
                v77 = v30; /*0x7d1d18*/
              v37 = v62; /*0x7d1d1e*/
              --v76; /*0x7d1d21*/
              v61 = v62; /*0x7d1d28*/
              _un_inc(C, Stream); /*0x7d1d2b*/
              while ( 1 ) /*0x7d1d36*/
              {
                if ( v64 ) /*0x7d1d36*/
                {
                  if ( !v74-- ) /*0x7d1d38*/
                    break; /*0x7d1d40*/
                }
                ++v76; /*0x7d1d46*/
                v39 = fgetc_0((FILE *)(Stream)); /*0x7d1d4a*/
                C = v39; /*0x7d1d53*/
                if ( v39 == -1 || ((1 << (v39 & 7)) & (v66 ^ (char)v54[v39 >> 3])) == 0 ) /*0x7d1d74*/
                {
                  --v76; /*0x7d1dd6*/
                  _un_inc(v39, Stream); /*0x7d1ddb*/
                  break; /*0x7d1ddb*/
                }
                if ( v72 ) /*0x7d1d7a*/
                {
                  v61 = (wchar_t *)((char *)v61 + 1); /*0x7d1dce*/
                }
                else
                {
                  if ( v68 ) /*0x7d1d80*/
                  {
                    SrcCh[0] = v39; /*0x7d1d88*/
                    if ( *((char *)off_87C590 + 2 * (uint8_t)v39 + 1) < 0 ) /*0x7d1d93*/
                    {
                      ++v76; /*0x7d1d95*/
                      SrcCh[1] = fgetc_0((FILE *)(Stream)); /*0x7d1d9f*/
                    }
                    mbtowc(&DstCh, SrcCh, SrcSizeInBytes); /*0x7d1db0*/
                    *v37++ = DstCh; /*0x7d1dbc*/
                  }
                  else
                  {
                    *(unsigned char *)v37 = v39; /*0x7d1dc3*/
                    v37 = (wchar_t *)((char *)v37 + 1); /*0x7d1dc5*/
                  }
                  v62 = v37; /*0x7d1dc6*/
                }
              }
              if ( v61 != v37 ) /*0x7d1de5*/
              {
                if ( !v72 ) /*0x7d1def*/
                {
                  ++v60; /*0x7d1df5*/
                  if ( v57 != 99 ) /*0x7d1dfc*/
                  {
                    if ( v68 ) /*0x7d1e09*/
                      *v62 = 0; /*0x7d1e0b*/
                    else
                      *(unsigned char *)v62 = 0; /*0x7d1e14*/
                  }
                }
                goto LABEL_242; /*0x7d1e0f*/
              }
            }
            goto LABEL_256; /*0x7d1de5*/
          }
          ++v30; /*0x7d1bd8*/
          break;
        default:
  LABEL_117:
          if ( (uint8_t)*v77 == C ) /*0x7d1b9e*/
          {
            --v69; /*0x7d1ba4*/
            if ( !v72 ) /*0x7d1bab*/
              a3 = v55; /*0x7d1bb4*/
            goto LABEL_242; /*0x7d1bb7*/
          }
          goto LABEL_253; /*0x7d1b9e*/
      }
  LABEL_140:
      v66 = -1; /*0x7d1c79*/
      goto LABEL_141; /*0x7d1c79*/
    }
    switch ( v14 ) /*0x7d1910*/
    {
      case 'o': /*0x7d1910*/
  LABEL_181:
        v16 = C; /*0x7d1e20*/
        if ( C == 45 ) /*0x7d1e26*/
        {
          v67 = 1; /*0x7d1e28*/
        }
        else if ( C != 43 ) /*0x7d1e31*/
        {
          goto LABEL_189; /*0x7d1e31*/
        }
        if ( !--v74 && v64 ) /*0x7d1e3c*/
        {
          v71 = 1; /*0x7d1e3e*/
          goto LABEL_189; /*0x7d1e42*/
        }
        ++v76; /*0x7d1e47*/
        v16 = fgetc_0((FILE *)(Stream)); /*0x7d1e50*/
  LABEL_188:
        C = v16; /*0x7d1e52*/
  LABEL_189:
        if ( v61 ) /*0x7d1e59*/
        {
          if ( !v71 ) /*0x7d1e63*/
          {
            while ( 1 ) /*0x7d1e69*/
            {
              if ( v14 == 120 ) /*0x7d1e6c*/
              {
                if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1e75*/
                  v40 = *((unsigned char *)off_87C590 + 2 * v16) & 0x80; /*0x7d1e8e*/
                else
                  v40 = _isctype(v16, 128); /*0x7d1e7d*/
                if ( !v40 ) /*0x7d1e95*/
                  goto LABEL_209; /*0x7d1e95*/
                v63 *= 16; /*0x7d1eaa*/
                v16 = _hextodec(v16); /*0x7d1eb5*/
                C = v16; /*0x7d1eb8*/
              }
              else
              {
                if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1ec4*/
                  v41 = *((unsigned char *)off_87C590 + 2 * v16) & 4; /*0x7d1eda*/
                else
                  v41 = _isctype(v16, 4); /*0x7d1ec9*/
                if ( !v41 ) /*0x7d1edf*/
                {
  LABEL_209:
                  --v76; /*0x7d1f3e*/
                  _un_inc(v16, Stream); /*0x7d1f45*/
                  break; /*0x7d1f45*/
                }
                if ( v14 == 111 ) /*0x7d1ee4*/
                {
                  if ( v16 >= 56 ) /*0x7d1ee9*/
                    goto LABEL_209; /*0x7d1ee9*/
                  v42 = 8 * v63; /*0x7d1ef4*/
                }
                else
                {
                  v42 = 10 * v63; /*0x7d1f05*/
                }
                v63 = v42; /*0x7d1f0a*/
              }
              ++v65; /*0x7d1f10*/
              v63 += v16 - 48; /*0x7d1f17*/
              if ( v64 ) /*0x7d1f21*/
              {
                if ( !--v74 ) /*0x7d1f26*/
                  break; /*0x7d1f26*/
              }
              ++v76; /*0x7d1f2b*/
              v16 = fgetc_0((FILE *)(Stream)); /*0x7d1f33*/
              C = v16; /*0x7d1f36*/
            }
          }
          if ( v67 ) /*0x7d1f50*/
            v63 = -v63; /*0x7d1f66*/
        }
        else
        {
          if ( !v71 ) /*0x7d1f72*/
          {
            while ( 1 ) /*0x7d1f78*/
            {
              if ( v14 == 120 || v14 == 112 ) /*0x7d1f80*/
              {
                if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1fc3*/
                  v45 = *((unsigned char *)off_87C590 + 2 * v16) & 0x80; /*0x7d1fdc*/
                else
                  v45 = _isctype(v16, 128); /*0x7d1fcb*/
                if ( !v45 ) /*0x7d1fe3*/
                {
  LABEL_231:
                  --v76; /*0x7d201c*/
                  _un_inc(v16, Stream); /*0x7d2023*/
                  break; /*0x7d2023*/
                }
                v44 = 16 * v11; /*0x7d1fe6*/
                v16 = _hextodec(v16); /*0x7d1fee*/
                C = v16; /*0x7d1ff1*/
              }
              else
              {
                if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1f89*/
                  v43 = *((unsigned char *)off_87C590 + 2 * v16) & 4; /*0x7d1f9f*/
                else
                  v43 = _isctype(v16, 4); /*0x7d1f8e*/
                if ( !v43 ) /*0x7d1fa4*/
                  goto LABEL_231; /*0x7d1fa4*/
                if ( v14 == 111 ) /*0x7d1fa9*/
                {
                  if ( v16 >= 56 ) /*0x7d1fae*/
                    goto LABEL_231; /*0x7d1fae*/
                  v44 = 8 * v11; /*0x7d1fb0*/
                }
                else
                {
                  v44 = 10 * v11; /*0x7d1fb8*/
                }
              }
              ++v65; /*0x7d1ff4*/
              v11 = v44 + v16 - 48; /*0x7d1ffb*/
              if ( v64 ) /*0x7d1fff*/
              {
                if ( !--v74 ) /*0x7d2004*/
                  break; /*0x7d2004*/
              }
              ++v76; /*0x7d2009*/
              v16 = fgetc_0((FILE *)(Stream)); /*0x7d2011*/
              C = v16; /*0x7d2014*/
            }
          }
          if ( v67 ) /*0x7d202e*/
            v11 = -v11; /*0x7d2030*/
        }
        if ( v65 ) /*0x7d203f*/
        {
          if ( v72 ) /*0x7d2049*/
            goto LABEL_242; /*0x7d2049*/
          ++v60; /*0x7d204b*/
          goto LABEL_237; /*0x7d204b*/
        }
        goto LABEL_256; /*0x7d203f*/
      case 'c': /*0x7d1910*/
        if ( !v64 ) /*0x7d1b4e*/
        {
          ++v74; /*0x7d1b50*/
          v64 = 1; /*0x7d1b53*/
        }
        if ( v75 > 0 ) /*0x7d1b5e*/
          v68 = 1; /*0x7d1b60*/
        v30 = (char *)(asc_87C920); /*0x7d1b64*/
        goto LABEL_140; /*0x7d1b69*/
      case 'd': /*0x7d1910*/
        goto LABEL_181; /*0x7d1922*/
    }
    if ( v14 <= 100 ) /*0x7d1928*/
      goto LABEL_117; /*0x7d1928*/
    if ( v14 <= 103 )
    {
      v17 = C; /*0x7d196b*/
      v18 = &v52; /*0x7d196e*/
      if ( C == 45 ) /*0x7d1977*/
      {
        v52 = 45; /*0x7d1979*/
        v18 = &v53; /*0x7d197f*/
      }
      else if ( C != 43 ) /*0x7d198a*/
      {
        v19 = Stream; /*0x7d19a3*/
        goto LABEL_70; /*0x7d19a3*/
      }
      v19 = Stream; /*0x7d198c*/
      --v74; /*0x7d198f*/
      ++v76; /*0x7d1992*/
      v17 = fgetc_0((FILE *)(Stream)); /*0x7d199b*/
      C = v17; /*0x7d199e*/
  LABEL_70:
      if ( !v64 || v74 > 349 ) /*0x7d19b3*/
        v74 = 349; /*0x7d19b5*/
      while ( (int)SrcSizeInBytes <= 1 ? *((unsigned char *)off_87C590 + 2 * v17) & 4 : _isctype(v17, 4) )
      {
        if ( !v74-- ) /*0x7d19e0*/
          break; /*0x7d19e8*/
        ++v65; /*0x7d19ea*/
        *v18++ = v17; /*0x7d19ed*/
        ++v76; /*0x7d19f0*/
        v17 = fgetc_0((FILE *)(v19)); /*0x7d19f9*/
        C = v17; /*0x7d19fc*/
      }
      if ( ::SrcCh == (unsigned char)v17 )
      {
        if ( v74-- )
        {
          ++v76; /*0x7d1a13*/
          v17 = fgetc_0((FILE *)(v19)); /*0x7d1a1c*/
          *v18 = ::SrcCh; /*0x7d1a23*/
          C = v17; /*0x7d1a26*/
          ++v18; /*0x7d1a29*/
          while ( (int)SrcSizeInBytes <= 1 ? *((unsigned char *)off_87C590 + 2 * v17) & 4 : _isctype(v17, 4) )
          {
            if ( !v74-- ) /*0x7d1a4e*/
              break; /*0x7d1a56*/
            ++v65; /*0x7d1a58*/
            *v18++ = v17; /*0x7d1a5b*/
            ++v76; /*0x7d1a5e*/
            v17 = fgetc_0((FILE *)(v19)); /*0x7d1a67*/
            C = v17; /*0x7d1a6a*/
          }
        }
      }
      if ( v65 && (v17 == 101 || v17 == 69) )
      {
        if ( v74-- )
        {
          *v18++ = 101; /*0x7d1a91*/
          ++v76; /*0x7d1a95*/
          v26 = fgetc_0((FILE *)(v19)); /*0x7d1a99*/
          v17 = v26; /*0x7d1a9e*/
          C = v26; /*0x7d1aa4*/
          if ( v26 == 45 ) /*0x7d1aa7*/
          {
            *v18++ = 45; /*0x7d1aa9*/
            goto LABEL_95; /*0x7d1aac*/
          }
          if ( v26 == 43 ) /*0x7d1ab1*/
          {
  LABEL_95:
            if ( !v74-- ) /*0x7d1ab3*/
            {
              v74 = 0; /*0x7d1abd*/
              goto LABEL_98; /*0x7d1ac0*/
            }
            goto LABEL_97; /*0x7d1abb*/
          }
  LABEL_98:
          while ( (int)SrcSizeInBytes <= 1 ? *((unsigned char *)off_87C590 + 2 * v17) & 4 : _isctype(v17, 4) )
          {
            if ( !v74-- ) /*0x7d1af5*/
              break; /*0x7d1afd*/
            ++v65; /*0x7d1aff*/
            *v18++ = v17; /*0x7d1b02*/
  LABEL_97:
            ++v76; /*0x7d1ac2*/
            v17 = fgetc_0((FILE *)(v19)); /*0x7d1acb*/
            C = v17; /*0x7d1ace*/
          }
        }
      }
      --v76; /*0x7d1b07*/
      _un_inc(v17, v19); /*0x7d1b0c*/
      if ( v65 ) /*0x7d1b17*/
      {
        if ( !v72 ) /*0x7d1b21*/
        {
          ++v60; /*0x7d1b27*/
          *v18 = 0; /*0x7d1b2a*/
          off_87C4D8[0](); /*0x7d1b3d*/
        }
        goto LABEL_242; /*0x7d1b21*/
      }
      break; /*0x7d1b17*/
    }
    if ( v14 == 105 ) /*0x7d1936*/
    {
      v14 = 100; /*0x7d1955*/
      goto LABEL_63; /*0x7d1955*/
    }
    if ( v14 != 110 ) /*0x7d193b*/
      goto LABEL_117; /*0x7d193b*/
    v11 = v76; /*0x7d1945*/
    if ( v72 ) /*0x7d1948*/
      goto LABEL_242; /*0x7d1948*/
  LABEL_237:
    if ( v61 ) /*0x7d2052*/
    {
      *(unsigned long long *)v62 = v63; /*0x7d205a*/
    }
    else if ( v73 ) /*0x7d206b*/
    {
      *(unsigned int *)v62 = v11; /*0x7d206d*/
    }
    else
    {
      *v62 = v11; /*0x7d2071*/
    }
  LABEL_242:
    ++v69; /*0x7d2074*/
    v78 = (int)(v77 + 1); /*0x7d2077*/
    v3 = (char *)v78; /*0x7d207a*/
  LABEL_247:
    if ( C == -1 ) /*0x7d20c5*/
    {
      if ( *v3 == 37 && *(unsigned char *)(v78 + 1) == 110 ) /*0x7d20d3*/
      {
        v3 = (char *)v78; /*0x7d20d5*/
        goto LABEL_251; /*0x7d20d5*/
      }
  LABEL_257:
      result = v60; /*0x7d2119*/
      if ( !v60 && !v69 ) /*0x7d2123*/
        return (ControlClass **)(-1); /*0x7d2125*/
      return (ControlClass **)(result); /*0x7d2128*/
    }
  LABEL_251:
    v4 = *v3; /*0x7d20d7*/
    if ( *v3 ) /*0x7d20d7*/
    {
      v5 = Stream; /*0x7d1737*/
      continue; /*0x7d1737*/
    }
    break;
  }
  LABEL_256:
  if ( C == -1 ) /*0x7d2117*/
    goto LABEL_257; /*0x7d2117*/
  return (ControlClass **)(v60); /*0x7d212d*/
}
}
// 0x7D2132
namespace gamemd {
int _hextodec(int C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2132.json)
}
}
// 0x7D21BE
namespace gamemd {
AbstractClass * * _woutput(FILE * File, CampaignScore * aP1, ObjectClass * aP2)
{
  int v4; // ecx
  wchar_t v5; // bx
  bool v6; // zf
  int v7; // eax
  int int_arg_0; // eax
  int v9; // eax
  int v10; // esi
  char *v11; // eax
  char *v12; // ecx
  int v13; // eax
  int16_t *v14; // eax
  char *v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  char *i; // eax
  int v19; // edx
  unsigned short *v20; // eax
  int64_t v21; // rax
  uint64_t v22; // rdi
  int v23; // eax
  int v24; // ebx
  uint64_t v25; // kr08_8
  char *v26; // eax
  int v27; // eax
  char v28; // bl
  int v29; // esi
  char *v30; // edi
  int v31; // ebx
  int v32; // eax
  wchar_t *v33; // eax
  wchar_t DstCh[255]; // [esp+Ch] [ebp-450h] BYREF
  unsigned char v36[513]; // [esp+20Bh] [ebp-251h] BYREF
  int v37; // [esp+40Ch] [ebp-50h]
  int v38; // [esp+410h] [ebp-4Ch]
  int64_t v39; // [esp+414h] [ebp-48h]
  int v40; // [esp+41Ch] [ebp-40h]
  wchar_t WCh[2]; // [esp+420h] [ebp-3Ch] BYREF
  int v42; // [esp+424h] [ebp-38h]
  int v43; // [esp+428h] [ebp-34h]
  int v44; // [esp+42Ch] [ebp-30h]
  int v45; // [esp+430h] [ebp-2Ch]
  int v46; // [esp+434h] [ebp-28h]
  char SrcCh[2]; // [esp+43Ah] [ebp-22h] BYREF
  int v48; // [esp+43Ch] [ebp-20h] BYREF
  int v49; // [esp+440h] [ebp-1Ch]
  int v50; // [esp+444h] [ebp-18h]
  int v51; // [esp+448h] [ebp-14h] BYREF
  int v52; // [esp+44Ch] [ebp-10h]
  char *v53; // [esp+450h] [ebp-Ch]
  int j; // [esp+454h] [ebp-8h]
  int v55; // [esp+458h] [ebp-4h]
  wchar_t *v56; // [esp+468h] [ebp+Ch]

  v56 = (wchar_t *)(aP1 + 1); /*0x7d21ca*/
  v4 = 0; /*0x7d21cf*/
  v5 = (wchar_t)(*aP1); /*0x7d21d1*/
  v6 = *aP1 == 0; /*0x7d21d5*/
  j = 0; /*0x7d21d9*/
  v51 = 0; /*0x7d21dc*/
  if ( !v6 ) /*0x7d21df*/
  {
    while ( 1 ) /*0x7d21ec*/
    {
      if ( v51 < 0 ) /*0x7d21ef*/
return (AbstractClass **)v51; /*0x7d21ef*/
      if ( v5 < 0x20u || v5 > 0x78u ) /*0x7d2201*/
        v7 = 0; /*0x7d2211*/
      else
        v7 = (&byte_7F97CC)[v5] & 0xF; /*0x7d220c*/
      v42 = (&byte_7F97EC)[8 * v7 + v4] >> 4; /*0x7d2221*/
      switch ( v42 ) /*0x7d222c*/
      {
        case 0: /*0x7d222c*/
          goto $NORMAL_STATE$1749;
        case 1: /*0x7d222c*/
          v52 = -1; /*0x7d2233*/
          v43 = 0; /*0x7d2237*/
          v44 = 0; /*0x7d223a*/
          v46 = 0; /*0x7d223d*/
          v50 = 0; /*0x7d2240*/
          v55 = 0; /*0x7d2243*/
          v49 = 0; /*0x7d2246*/
          goto LABEL_167; /*0x7d2249*/
        case 2: /*0x7d222c*/
          switch ( v5 ) /*0x7d2253*/
          {
            case ' ': /*0x7d2253*/
              v55 |= 2u; /*0x7d2290*/
              break;
            case '#': /*0x7d2253*/
              IDA_LOBYTE(v55) = v55 | 0x80; /*0x7d2287*/
              break;
            case '+': /*0x7d2253*/
              v55 |= 1u; /*0x7d227e*/
              break;
            case '-': /*0x7d2253*/
              v55 |= 4u; /*0x7d2275*/
              break;
            case '0': /*0x7d2253*/
              v55 |= 8u; /*0x7d226c*/
              break;
          }
          goto LABEL_167; /*0x7d2270*/
        case 3: /*0x7d222c*/
          if ( v5 == 42 ) /*0x7d229d*/
          {
            int_arg_0 = get_int_arg_0(&aP2); /*0x7d22a3*/
            v46 = int_arg_0; /*0x7d22ab*/
            if ( int_arg_0 >= 0 ) /*0x7d22ae*/
              goto LABEL_167; /*0x7d22ae*/
            v55 |= 4u; /*0x7d22b4*/
            v9 = -int_arg_0; /*0x7d22b8*/
          }
          else
          {
            v9 = v5 + 10 * v46 - 48; /*0x7d22cb*/
          }
          v46 = v9; /*0x7d22ba*/
          goto LABEL_167; /*0x7d22bd*/
        case 4: /*0x7d222c*/
          v52 = 0; /*0x7d22d1*/
          goto LABEL_167; /*0x7d22d4*/
        case 5: /*0x7d222c*/
          if ( v5 == 42 ) /*0x7d22dd*/
          {
            v52 = get_int_arg_0(&aP2); /*0x7d22eb*/
            if ( v52 < 0 ) /*0x7d22ee*/
              v52 = -1; /*0x7d22f4*/
          }
          else
          {
            v52 = v5 + 10 * v52 - 48; /*0x7d230a*/
          }
          goto LABEL_167; /*0x7d22f8*/
        case 6: /*0x7d222c*/
          switch ( v5 ) /*0x7d2318*/
          {
            case 'I': /*0x7d2318*/
              if ( *v56 == 54 && v56[1] == 52 ) /*0x7d2347*/
              {
                v56 += 2; /*0x7d2349*/
                IDA_BYTE1(v55) |= 0x80u; /*0x7d234d*/
              }
              else
              {
                v42 = 0; /*0x7d2356*/
  $NORMAL_STATE$1749: /*0x7d2359*/
                v49 = 1; /*0x7d2359*/
                write_char_0(v5, File, &v51); /*0x7d2368*/
              }
              break;
            case 'h': /*0x7d2318*/
              v55 |= 0x20u; /*0x7d2331*/
              break;
            case 'w': /*0x7d2318*/
              IDA_BYTE1(v55) |= 8u; /*0x7d2328*/
              break;
          }
          goto LABEL_167; /*0x7d232c*/
        case 7: /*0x7d222c*/
          if ( v5 > 0x67u ) /*0x7d237b*/
          {
            switch ( v5 ) /*0x7d25bd*/
            {
              case 'i': /*0x7d25bd*/
                goto LABEL_111; /*0x7d25bd*/
              case 'n': /*0x7d25bd*/
                v20 = (unsigned short *)get_int_arg_0(&aP2); /*0x7d2672*/
                if ( (v55 & 0x20) != 0 ) /*0x7d267c*/
                  *v20 = v51; /*0x7d2682*/
                else
                  *(unsigned int *)v20 = v51; /*0x7d268a*/
                v44 = 1; /*0x7d268c*/
                goto LABEL_167; /*0x7d2693*/
              case 'o': /*0x7d25bd*/
                j = 8; /*0x7d265f*/
                if ( (v55 & 0x80u) != 0 ) /*0x7d2666*/
                  IDA_BYTE1(v55) |= 2u; /*0x7d2668*/
  LABEL_113:
                if ( (v55 & 0x8000) != 0 ) /*0x7d26a7*/
                {
                  IDA_LODWORD(v21) = get_int64_arg_0(&aP2); /*0x7d26ad*/
                  goto LABEL_123; /*0x7d26b3*/
                }
                if ( (v55 & 0x20) != 0 ) /*0x7d26b9*/
                {
                  if ( (v55 & 0x40) != 0 ) /*0x7d26c3*/
                    IDA_LODWORD(v21) = (int16_t)get_int_arg_0(&aP2); /*0x7d26cb*/
                  else
                    IDA_LODWORD(v21) = (uint16_t)get_int_arg_0(&aP2); /*0x7d26d7*/
  LABEL_118:
                  v21 = (int)v21; /*0x7d26ce*/
                }
                else
                {
                  if ( (v55 & 0x40) != 0 ) /*0x7d26e4*/
                  {
                    IDA_LODWORD(v21) = get_int_arg_0(&aP2); /*0x7d26e6*/
                    goto LABEL_118; /*0x7d26ec*/
                  }
                  v21 = (unsigned int)get_int_arg_0(&aP2); /*0x7d26ee*/
                }
  LABEL_123:
                if ( (v55 & 0x40) != 0 && v21 < 0 ) /*0x7d26fe*/
                {
                  IDA_HIDWORD(v22) = -(int)v21; /*0x7d270b*/
                  IDA_BYTE1(v55) |= 1u; /*0x7d270f*/
                  IDA_LODWORD(v22) = (uint64_t)-v21 >> 32; /*0x7d2713*/
                }
                else
                {
                  v22 = IDA___PAIR64__(v21, IDA_HIDWORD(v21)); /*0x7d2719*/
                }
                if ( (v55 & 0x8000) == 0 ) /*0x7d271f*/
                  IDA_LODWORD(v22) = 0; /*0x7d2721*/
                if ( v52 >= 0 ) /*0x7d2728*/
                  v55 &= ~8u; /*0x7d2733*/
                else
                  v52 = 1; /*0x7d272a*/
                if ( !v22 ) /*0x7d273b*/
                  v50 = 0; /*0x7d273d*/
                v53 = (char *)(v36); /*0x7d2747*/
                while ( 1 ) /*0x7d274a*/
                {
                  v23 = v52--; /*0x7d274a*/
                  if ( v23 <= 0 && !v22 ) /*0x7d2758*/
                    break; /*0x7d2758*/
                  v39 = j; /*0x7d2762*/
                  v24 = IDA___PAIR64__(v22, IDA_HIDWORD(v22)) % j + 48; /*0x7d2772*/
                  v25 = IDA___PAIR64__(v22, IDA_HIDWORD(v22)) / j; /*0x7d2784*/
                  v22 = IDA___PAIR64__(v25, IDA_HIDWORD(v25)); /*0x7d2784*/
                  if ( v24 > 57 ) /*0x7d2786*/
                    IDA_LOBYTE(v24) = v45 + v24; /*0x7d2788*/
                  v26 = v53--; /*0x7d278b*/
                  *v26 = v24; /*0x7d2791*/
                }
                v27 = (unsigned char *)(v36 - v53++); /*0x7d279b*/
                j = v27; /*0x7d27a5*/
                if ( (v55 & 0x200) != 0 && (*v53 != 48 || !j) ) /*0x7d27b6*/
                {
                  --v53; /*0x7d27b8*/
                  ++j; /*0x7d27bb*/
                  *v53 = 48; /*0x7d27c1*/
                }
                goto LABEL_144; /*0x7d27c1*/
              case 'p': /*0x7d25bd*/
                v52 = 8; /*0x7d262b*/
  LABEL_102:
                v45 = 7; /*0x7d2632*/
                goto LABEL_103; /*0x7d2632*/
            }
            if ( v5 != 115 ) /*0x7d25d9*/
            {
              if ( v5 != 117 ) /*0x7d25e1*/
              {
                if ( v5 != 120 ) /*0x7d25ea*/
                  goto LABEL_144; /*0x7d25ea*/
                v45 = 39; /*0x7d25f0*/
  LABEL_103:
                j = 16; /*0x7d2635*/
                if ( (v55 & 0x80u) != 0 ) /*0x7d2640*/
                {
                  IDA_LOWORD(v48) = 48; /*0x7d2645*/
                  v50 = 2; /*0x7d264e*/
                  IDA_HIWORD(v48) = v45 + 81; /*0x7d2655*/
                }
                goto LABEL_113; /*0x7d2659*/
              }
  LABEL_112:
              j = 10; /*0x7d269c*/
              goto LABEL_113; /*0x7d269c*/
            }
            goto LABEL_51; /*0x7d25d9*/
          }
          if ( v5 >= 0x65u ) /*0x7d2384*/
            goto LABEL_63; /*0x7d2384*/
          if ( v5 > 0x58u ) /*0x7d238d*/
          {
            if ( v5 == 90 ) /*0x7d24a6*/
            {
              v14 = (int16_t *)get_int_arg_0(&aP2); /*0x7d24d5*/
              if ( v14 && (v15 = (char *)*((unsigned int *)v14 + 1)) != 0 ) /*0x7d24e4*/
              {
                if ( (v55 & 0x800) != 0 ) /*0x7d24ea*/
                {
                  v16 = (unsigned int)*v14 >> 1; /*0x7d24ef*/
                  v53 = v15; /*0x7d24f1*/
                  j = v16; /*0x7d24f4*/
                  v49 = 1; /*0x7d24f7*/
                  goto LABEL_144; /*0x7d24fe*/
                }
                v17 = *v14; /*0x7d2503*/
                v49 = 0; /*0x7d2506*/
                v53 = v15; /*0x7d2509*/
              }
              else
              {
                v53 = (char *)(off_87C4C8); /*0x7d2519*/
                v17 = strlen((const char *)(off_87C4C8)); /*0x7d251d*/
              }
              goto LABEL_81; /*0x7d2509*/
            }
            if ( v5 == 99 ) /*0x7d24ab*/
              goto LABEL_67; /*0x7d24ab*/
            if ( v5 != 100 ) /*0x7d24ae*/
              goto LABEL_144; /*0x7d24ae*/
  LABEL_111:
            v55 |= 0x40u; /*0x7d2698*/
            goto LABEL_112; /*0x7d2698*/
          }
          switch ( v5 ) /*0x7d2393*/
          {
            case 'X': /*0x7d2393*/
              goto LABEL_102; /*0x7d2393*/
            case 'C': /*0x7d2393*/
              if ( (v55 & 0x830) == 0 ) /*0x7d245c*/
                v55 |= 0x20u; /*0x7d245e*/
  LABEL_67:
              v49 = 1; /*0x7d2461*/
              v13 = get_int_arg_0(&aP2); /*0x7d246b*/
              *(unsigned int *)WCh = v13; /*0x7d2475*/
              if ( (v55 & 0x20) != 0 ) /*0x7d2478*/
              {
                SrcCh[1] = 0; /*0x7d2480*/
                SrcCh[0] = v13; /*0x7d2484*/
                if ( mbtowc(DstCh, SrcCh, SrcSizeInBytes) < 0 ) /*0x7d249c*/
                  v44 = 1; /*0x7d249e*/
              }
              else
              {
                DstCh[0] = v13; /*0x7d24b9*/
              }
              j = 1; /*0x7d24c6*/
              v53 = (char *)DstCh; /*0x7d24c9*/
              break; /*0x7d24cc*/
            case 'E': /*0x7d2393*/
            case 'G': /*0x7d2393*/
              v43 = 1; /*0x7d242b*/
              v5 += 32; /*0x7d2432*/
  LABEL_63:
              v55 |= 0x40u; /*0x7d2434*/
              v53 = (char *)DstCh; /*0x7d2441*/
              if ( v52 >= 0 ) /*0x7d2444*/
              {
                if ( !v52 ) /*0x7d2525*/
                  v52 = v5 == 103; /*0x7d252d*/
              }
              else
              {
                v52 = 6; /*0x7d244a*/
              }
              aP2 += 8; /*0x7d253d*/
              v37 = *(unsigned int *)(aP2 - 8); /*0x7d2546*/
              v38 = *(unsigned int *)(aP2 - 4); /*0x7d254c*/
              off_87C4D0[0](); /*0x7d255e*/
            case 'S': /*0x7d2393*/
              if ( (v55 & 0x830) == 0 ) /*0x7d23bd*/
                v55 |= 0x20u; /*0x7d23bf*/
  LABEL_51:
              v10 = v52; /*0x7d23c3*/
              if ( v52 == -1 ) /*0x7d23c9*/
                v10 = 0x7FFFFFFF; /*0x7d23cb*/
              v11 = (char *)get_int_arg_0(&aP2); /*0x7d23d4*/
              v12 = v11; /*0x7d23de*/
              v53 = v11; /*0x7d23e0*/
              if ( (v55 & 0x20) == 0 ) /*0x7d23e3*/
              {
                if ( !v11 ) /*0x7d25fd*/
                {
                  v12 = (char *)off_87C4CC; /*0x7d25ff*/
                  v53 = (char *)off_87C4CC; /*0x7d2605*/
                }
                v49 = 1; /*0x7d2608*/
                for ( i = v12; ; i += 2 ) /*0x7d260f*/
                {
                  v19 = v10--; /*0x7d2611*/
                  if ( !v19 || !*(unsigned short *)i ) /*0x7d2618*/
                    break; /*0x7d2618*/
                }
                v17 = (i - v12) >> 1; /*0x7d2624*/
  LABEL_81:
                j = v17; /*0x7d250c*/
                break; /*0x7d250f*/
              }
              if ( !v11 ) /*0x7d23eb*/
              {
                v12 = (char *)(off_87C4C8); /*0x7d23ed*/
                v53 = (char *)(off_87C4C8); /*0x7d23f3*/
              }
              for ( j = 0; j < v10; ++j ) /*0x7d23fc*/
              {
                if ( !*v12 ) /*0x7d2402*/
                  break; /*0x7d2406*/
                if ( *((char *)off_87C590 + 2 * (uint8_t)*v12 + 1) < 0 ) /*0x7d241a*/
                  ++v12; /*0x7d241c*/
                ++v12; /*0x7d241d*/
              }
              break;
          }
  LABEL_144:
          if ( v44 ) /*0x7d27c8*/
            goto LABEL_167; /*0x7d27c8*/
          v28 = v55; /*0x7d27ce*/
          if ( (v55 & 0x40) == 0 ) /*0x7d27d4*/
            goto LABEL_153; /*0x7d27d4*/
          if ( (v55 & 0x100) != 0 ) /*0x7d27d9*/
          {
            IDA_LOWORD(v48) = 45; /*0x7d27db*/
  LABEL_152:
            v50 = 1; /*0x7d27fb*/
            goto LABEL_153; /*0x7d27fb*/
          }
          if ( (v55 & 1) != 0 ) /*0x7d27e6*/
          {
            IDA_LOWORD(v48) = 43; /*0x7d27e8*/
            goto LABEL_152; /*0x7d27ee*/
          }
          if ( (v55 & 2) != 0 ) /*0x7d27f3*/
          {
            IDA_LOWORD(v48) = 32; /*0x7d27f5*/
            goto LABEL_152; /*0x7d27f5*/
          }
  LABEL_153:
          v29 = v46 - v50 - j; /*0x7d2802*/
          if ( (v55 & 0xC) == 0 ) /*0x7d280e*/
            write_multi_char_0(0x20u, v46 - v50 - j, File, (int)&v51); /*0x7d281a*/
          write_string_0((int)&v48, v50, File, (int)&v51); /*0x7d2830*/
          if ( (v28 & 8) != 0 && (v28 & 4) == 0 ) /*0x7d2840*/
            write_multi_char_0(0x30u, v29, File, (int)&v51); /*0x7d284c*/
          if ( v49 || j <= 0 ) /*0x7d285e*/
          {
            write_string_0((int)v53, j, File, (int)&v51); /*0x7d28ae*/
          }
          else
          {
            v30 = v53; /*0x7d2863*/
            v31 = j - 1; /*0x7d2866*/
            do /*0x7d289d*/
            {
              v40 = mbtowc(WCh, v30, SrcSizeInBytes); /*0x7d287c*/
              if ( v40 <= 0 ) /*0x7d2881*/
                break; /*0x7d2881*/
              write_char_0(WCh[0], File, &v51); /*0x7d288d*/
              v30 += v40; /*0x7d2892*/
              v32 = v31--; /*0x7d2898*/
            }
            while ( v32 > 0 ); /*0x7d289d*/
          }
          if ( (v55 & 4) != 0 ) /*0x7d28ba*/
            write_multi_char_0(0x20u, v29, File, (int)&v51); /*0x7d28c6*/
  LABEL_167:
          v33 = v56++; /*0x7d28ce*/
          v5 = *v33; /*0x7d28d7*/
          if ( !*v33 ) /*0x7d28d7*/
return (AbstractClass **)v51; /*0x7d28dd*/
          v4 = v42; /*0x7d21e9*/
          break; /*0x7d21e9*/
        default:
          goto LABEL_167;
      }
    }
  }
return (AbstractClass **)v51; /*0x7d28e6*/
}
}
// 0x7D2C36
namespace gamemd {
unsigned int * _openfile(char * FileName, unsigned char * a2, int ShareFlag, unsigned int * a4)
{
  unsigned char *v4; // edi
  char v5; // al
  unsigned int v6; // ecx
  unsigned int v7; // esi
  int v8; // edx
  char v9; // al
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v18; // [esp+Ch] [ebp-8h]
  int v19; // [esp+10h] [ebp-4h]

  v4 = a2; /*0x7d2c44*/
  v18 = 0; /*0x7d2c49*/
  v19 = 0; /*0x7d2c4c*/
  v5 = *a2; /*0x7d2c4f*/
  if ( *a2 == 97 ) /*0x7d2c53*/
  {
    v6 = 265; /*0x7d2c6f*/
  LABEL_7:
    v7 = dword_B783D4 | 2; /*0x7d2c74*/
    goto LABEL_8; /*0x7d2c74*/
  }
  if ( v5 != 114 ) /*0x7d2c57*/
  {
    if ( v5 != 119 ) /*0x7d2c5b*/
      return 0; /*0x7d2c5b*/
    v6 = 769; /*0x7d2c61*/
    goto LABEL_7; /*0x7d2c66*/
  }
  v6 = 0; /*0x7d2c68*/
  v7 = dword_B783D4 | 1; /*0x7d2c6a*/
  LABEL_8:
  v8 = 1; /*0x7d2c77*/
  while ( 1 ) /*0x7d2c7a*/
  {
    v9 = *++v4; /*0x7d2c7a*/
    if ( !v9 || !v8 ) /*0x7d2c88*/
      break; /*0x7d2c88*/
    if ( v9 > 84 ) /*0x7d2c94*/
    {
      v13 = v9 - 98; /*0x7d2d08*/
      if ( v13 ) /*0x7d2d0b*/
      {
        v14 = v13 - 1; /*0x7d2d0d*/
        if ( v14 ) /*0x7d2d0e*/
        {
          v15 = v14 - 11; /*0x7d2d10*/
          if ( v15 ) /*0x7d2d13*/
          {
            if ( v15 != 6 || (v6 & 0xC000) != 0 ) /*0x7d2d1d*/
  LABEL_38:
              v8 = 0; /*0x7d2d5a*/
            else
              IDA_BYTE1(v6) |= 0x40u; /*0x7d2d1f*/
          }
          else
          {
            if ( v18 ) /*0x7d2d2a*/
              goto LABEL_38; /*0x7d2d2a*/
            v18 = 1; /*0x7d2d2c*/
            v7 &= ~0x4000u; /*0x7d2d33*/
          }
        }
        else
        {
          if ( v18 ) /*0x7d2d41*/
            goto LABEL_38; /*0x7d2d41*/
          v18 = 1; /*0x7d2d43*/
          v7 |= 0x4000u; /*0x7d2d4a*/
        }
      }
      else
      {
        if ( (v6 & 0xC000) != 0 ) /*0x7d2d58*/
          goto LABEL_38; /*0x7d2d58*/
        IDA_BYTE1(v6) |= 0x80u; /*0x7d2d61*/
      }
    }
    else if ( v9 == 84 ) /*0x7d2c96*/
    {
      if ( (v6 & 0x1000) != 0 ) /*0x7d2cff*/
        goto LABEL_38; /*0x7d2cff*/
      v6 |= 0x1000u; /*0x7d2d01*/
    }
    else
    {
      v10 = v9 - 43; /*0x7d2c98*/
      if ( v10 ) /*0x7d2c9b*/
      {
        v11 = v10 - 25; /*0x7d2c9d*/
        if ( v11 ) /*0x7d2ca0*/
        {
          v12 = v11 - 14; /*0x7d2ca2*/
          if ( v12 ) /*0x7d2ca5*/
          {
            if ( v12 != 1 || v19 ) /*0x7d2cb1*/
              goto LABEL_38; /*0x7d2cb1*/
            v19 = 1; /*0x7d2cb7*/
            v6 |= 0x20u; /*0x7d2cbe*/
          }
          else
          {
            if ( v19 ) /*0x7d2cc6*/
              goto LABEL_38; /*0x7d2cc6*/
            v19 = 1; /*0x7d2ccc*/
            v6 |= 0x10u; /*0x7d2cd3*/
          }
        }
        else
        {
          if ( (v6 & 0x40) != 0 ) /*0x7d2cdb*/
            goto LABEL_38; /*0x7d2cdb*/
          v6 |= 0x40u; /*0x7d2cdd*/
        }
      }
      else
      {
        if ( (v6 & 2) != 0 ) /*0x7d2ce5*/
          goto LABEL_38; /*0x7d2ce5*/
        v6 = v6 & 0xFFFFFFFC | 2; /*0x7d2ced*/
        v7 = v7 & 0xFFFFFF7C | 0x80; /*0x7d2cf0*/
      }
    }
  }
  v16 = _sopen(FileName, v6, ShareFlag, 420); /*0x7d2d7a*/
  if ( v16 < 0 ) /*0x7d2d81*/
    return 0; /*0x7d2d83*/
  ++dword_B781C0; /*0x7d2d8a*/
  a4[3] = v7; /*0x7d2d90*/
  a4[1] = 0; /*0x7d2d93*/
  *a4 = 0; /*0x7d2d96*/
  a4[2] = 0; /*0x7d2d98*/
  a4[7] = 0; /*0x7d2d9b*/
  a4[4] = v16; /*0x7d2d9e*/
  return a4; /*0x7d2da1*/
}
}
// 0x7D2DA6
namespace gamemd {
unsigned int * _getstream()
{
  unsigned int *v0; // edi
  int v1; // esi
  int v2; // eax
  int v3; // esi
  int v4; // eax

  v0 = 0; /*0x7d2dad*/
  _lock(2); /*0x7d2daf*/
  v1 = 0; /*0x7d2db4*/
  if ( (int)Count > 0 ) /*0x7d2dbd*/
  {
    while ( 1 ) /*0x7d2dc8*/
    {
      v2 = *(unsigned int *)(dword_B78BC4 + 4 * v1); /*0x7d2dc8*/
      if ( !v2 ) /*0x7d2dcd*/
        break; /*0x7d2dcd*/
      if ( (*(unsigned char *)(v2 + 12) & 0x83) == 0 ) /*0x7d2dd3*/
      {
        _lock_file2(v1, *(unsigned int *)(dword_B78BC4 + 4 * v1)); /*0x7d2dd7*/
        if ( (*(unsigned char *)(*(unsigned int *)(dword_B78BC4 + 4 * v1) + 12) & 0x83) == 0 ) /*0x7d2deb*/
        {
          v0 = *(unsigned int **)(dword_B78BC4 + 4 * v1); /*0x7d2e01*/
          goto LABEL_11; /*0x7d2e04*/
        }
        _unlock_file2(v1, *(unsigned int *)(dword_B78BC4 + 4 * v1)); /*0x7d2def*/
      }
      if ( ++v1 >= (int)Count ) /*0x7d2dfd*/
        goto LABEL_13; /*0x7d2dfd*/
    }
    v3 = 4 * v1; /*0x7d2e08*/
    *(unsigned int *)(v3 + dword_B78BC4) =(unsigned int)malloc(0x38u); /*0x7d2e17*/
    v4 = *(unsigned int *)(v3 + dword_B78BC4); /*0x7d2e1f*/
    if ( !v4 ) /*0x7d2e24*/
      goto LABEL_13; /*0x7d2e24*/
    InitializeCriticalSection((LPCRITICAL_SECTION)(v4 + 32)); /*0x7d2e2a*/
    EnterCriticalSection((LPCRITICAL_SECTION)(*(unsigned int *)(v3 + dword_B78BC4) + 32)); /*0x7d2e3c*/
    v0 = *(unsigned int **)(v3 + dword_B78BC4); /*0x7d2e47*/
  LABEL_11:
    if ( v0 ) /*0x7d2e4c*/
    {
      v0[4] = -1; /*0x7d2e4e*/
      v0[1] = 0; /*0x7d2e52*/
      v0[3] = 0; /*0x7d2e55*/
      v0[2] = 0; /*0x7d2e58*/
      *v0 = 0; /*0x7d2e5b*/
      v0[7] = 0; /*0x7d2e5d*/
    }
  }
  LABEL_13:
  _unlock(2); /*0x7d2e60*/
  return v0; /*0x7d2e6a*/
}
}
// 0x7D2FC8
namespace gamemd {
void _putwc_lk(wchar_t WCh, FILE * File)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2FC8.json)
}
}
// 0x7D30D1
namespace gamemd {
void _commit(int FileHandle)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D30D1.json)
}
}
// 0x7D3164
namespace gamemd {
void _ioinit()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3164.json)
}
}
// 0x7D3320
namespace gamemd {
void* _ioterm_0()
{
  void **v0; // esi
  char *result; // eax
  unsigned int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // ebx

  v0 = (void **)dword_B78A80; /*0x7d3323*/
  do /*0x7d336e*/
  {
    result = (char *)*v0; /*0x7d3328*/
    if ( *v0 ) /*0x7d3328*/
    {
      v2 = (unsigned int)*v0; /*0x7d332e*/
      if ( *v0 < result + 1152 ) /*0x7d3337*/
      {
        v3 = (struct _RTL_CRITICAL_SECTION *)(v2 + 12); /*0x7d3339*/
        do /*0x7d3358*/
        {
          if ( v3[-1].SpinCount ) /*0x7d333c*/
            DeleteCriticalSection(v3); /*0x7d3343*/
          v2 += 36; /*0x7d334b*/
          v3 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 36); /*0x7d3353*/
        }
        while ( v2 < (unsigned int)*v0 + 1152 ); /*0x7d3358*/
      }
      result = (char *)free(*v0); /*0x7d335c*/
      *v0 = 0; /*0x7d3361*/
    }
    ++v0; /*0x7d3365*/
  }
  while ( (int)v0 < (int)&uNumber ); /*0x7d336e*/
  return result; /*0x7d3370*/
}
}
// 0x7D3482
namespace gamemd {
void _setmbcp(int CodePage)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3482.json)
}
}
// 0x7D36AC
namespace gamemd {
void* setSBCS()
{
  memset(&unk_B78960, 0, 0x100u); /*0x7d36b7*/
  unk_B78A60 = 0; /*0x7d36b9*/
  dword_B78840 = 0; /*0x7d36c1*/
  dword_B7885C = 0; /*0x7d36c6*/
  dword_B78A64 = 0; /*0x7d36cb*/
  unk_B78850 = 0; /*0x7d36d0*/
  unk_B78854 = 0; /*0x7d36d1*/
  unk_B78858 = 0; /*0x7d36d2*/
  return 0; /*0x7d36d3*/
}
}
// 0x7D36D5
namespace gamemd {
ControlClass * * int setSBUpLow()
{
  unsigned int i; // eax
  BYTE v2; // al
  BYTE *v3; // edx
  unsigned int v4; // ecx
  unsigned int result; // eax
  WORD *j; // ecx
  char v7; // dl
  char v8; // cl
  WORD CharType[256]; // [esp+4h] [ebp-514h] BYREF
  CHAR v10[256]; // [esp+204h] [ebp-314h] BYREF
  CHAR DestStr[256]; // [esp+304h] [ebp-214h] BYREF
  CHAR SrcStr[256]; // [esp+404h] [ebp-114h] BYREF
  struct _cpinfo CPInfo; // [esp+504h] [ebp-14h] BYREF

  if ( GetCPInfo(dword_B78840, &CPInfo) ) /*0x7d36e9*/
  {
    for ( i = 0; i < 0x100; ++i ) /*0x7d36f8*/
      SrcStr[i] = i; /*0x7d36ff*/
    v2 = CPInfo.LeadByte[0]; /*0x7d370b*/
    SrcStr[0] = 32; /*0x7d370e*/
    if ( CPInfo.LeadByte[0] ) /*0x7d3717*/
    {
      v3 = &CPInfo.LeadByte[1]; /*0x7d371b*/
      do /*0x7d374c*/
      {
        v4 = *v3; /*0x7d371e*/
        if ( v2 <= v4 ) /*0x7d3726*/
          memset(&SrcStr[v2], 0x20u, v4 - v2 + 1); /*0x7d373c*/
        v3 += 2; /*0x7d3746*/
        v2 = *(v3 - 1); /*0x7d3747*/
      }
      while ( v2 ); /*0x7d374c*/
    }
    __crtGetStringTypeA(1u, SrcStr, 256, CharType, dword_B78840, dword_B78A64, 0); /*0x7d376f*/
    __crtLCMapStringA(dword_B78A64, 0x100u, SrcStr, 256, DestStr, 256, dword_B78840, 0); /*0x7d3793*/
    __crtLCMapStringA(dword_B78A64, 0x200u, SrcStr, 256, v10, 256, dword_B78840, 0); /*0x7d37bb*/
    result = 0; /*0x7d37c3*/
    for ( j = CharType; ; ++j ) /*0x7d37c5*/
    {
      if ( (*j & 1) != 0 ) /*0x7d37d1*/
      {
        byte_B78961[result] |= 0x10u; /*0x7d37d3*/
        v7 = DestStr[result]; /*0x7d37da*/
      }
      else
      {
        if ( (*j & 2) == 0 ) /*0x7d37ec*/
        {
          byte_B78860[result] = 0; /*0x7d37fe*/
          goto LABEL_16; /*0x7d37fe*/
        }
        byte_B78961[result] |= 0x20u; /*0x7d37ee*/
        v7 = v10[result]; /*0x7d37f5*/
      }
      byte_B78860[result] = v7; /*0x7d37e1*/
  LABEL_16:
      if ( ++result >= 0x100 ) /*0x7d380a*/
        return result; /*0x7d380a*/
    }
  }
  for ( result = 0; result < 0x100; ++result ) /*0x7d380e*/
  {
    if ( result >= 0x41 && result <= 0x5A ) /*0x7d381d*/
    {
      byte_B78961[result] |= 0x10u; /*0x7d381f*/
      v8 = result + 32; /*0x7d3828*/
  LABEL_22:
      byte_B78860[result] = v8; /*0x7d382b*/
      continue; /*0x7d3831*/
    }
    if ( result >= 0x61 && result <= 0x7A ) /*0x7d383b*/
    {
      byte_B78961[result] |= 0x20u; /*0x7d383d*/
      v8 = result - 32; /*0x7d3846*/
      goto LABEL_22; /*0x7d3849*/
    }
    byte_B78860[result] = 0; /*0x7d384b*/
  }
  return result; /*0x7d3857*/
}
}
// 0x7D385A
namespace gamemd {
int _getmbcp()
{
  return dword_B7885C != 0 ? dword_B78840 : 0;
}
} // namespace gamemd

// 0x7D386A
namespace gamemd {
void* __initmbctable()
{
  int result; // eax

  if ( !dword_B78BB8 ) /*0x7d3871*/
  {
    result = _setmbcp(-3); /*0x7d3875*/
    dword_B78BB8 = 1; /*0x7d387b*/
  }
  return result; /*0x7d3885*/
}
}
// 0x7D3886
namespace gamemd {
unsigned char * _mbsnbcpy(IUnknown * aP0, const unsigned char * Source, size_t Count)
{
  uint8_t *v3; // edi
  size_t v5; // edx
  const uint8_t *v6; // ecx
  uint8_t v7; // al
  bool v8; // zf
  unsigned char *v9; // ecx
  uint8_t v10; // al
  size_t v11; // eax
  size_t v12; // edx

  v3 = aP0; /*0x7d3891*/
  if ( !dword_B7885C ) /*0x7d3897*/
    return (uint8_t *)strncpy((char *)aP0, (const char *)Source, Count); /*0x7d38a8*/
  _lock(25); /*0x7d38ad*/
  v5 = Count; /*0x7d38b2*/
  if ( !Count ) /*0x7d38b8*/
    goto LABEL_14; /*0x7d38b8*/
  v6 = Source; /*0x7d38ba*/
  while ( 1 ) /*0x7d38bd*/
  {
    v7 = *v6; /*0x7d38bd*/
    --v5; /*0x7d38bf*/
    v8 = (byte_B78961[*v6] & 4) == 0; /*0x7d38c3*/
    *v3 = *v6; /*0x7d38ca*/
    if ( v8 ) /*0x7d38cc*/
    {
      ++v3; /*0x7d38e1*/
      ++v6; /*0x7d38e2*/
      if ( !v7 ) /*0x7d38e5*/
        goto LABEL_14; /*0x7d38e5*/
      goto LABEL_10; /*0x7d38e5*/
    }
    ++v3; /*0x7d38ce*/
    v9 = v6 + 1; /*0x7d38cf*/
    if ( !v5 ) /*0x7d38d2*/
    {
      *(v3 - 1) = 0; /*0x7d38ed*/
      goto LABEL_14; /*0x7d38f1*/
    }
    v10 = *v9; /*0x7d38d4*/
    --v5; /*0x7d38d6*/
    *v3++ = *v9; /*0x7d38d7*/
    v6 = v9 + 1; /*0x7d38da*/
    if ( !v10 ) /*0x7d38dd*/
      break; /*0x7d38dd*/
  LABEL_10:
    if ( !v5 ) /*0x7d38e9*/
      goto LABEL_14; /*0x7d38e9*/
  }
  *(v3 - 2) = 0; /*0x7d38f3*/
  LABEL_14:
  v11 = v5; /*0x7d38f7*/
  v12 = v5 - 1; /*0x7d38f9*/
  if ( v11 ) /*0x7d38fd*/
    memset(v3, 0, v12 + 1); /*0x7d3909*/
  _unlock(25); /*0x7d3914*/
  return aP0; /*0x7d391d*/
}
}
// 0x7D3920
namespace gamemd {
void iswctype(wint_t C, wctype_t Type)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3920.json)
}
}
// 0x7D3A6D
namespace gamemd {
ControlClass * * _winput(FILE * File, CampaignScore * aP1, int a3)
{
  int v3; // ebx
  wint_t *v4; // edi
  wint_t v5; // ax
  char v6; // al
  int i; // eax
  int v8; // esi
  int v10; // esi
  int v11; // eax
  int v12; // esi
  wchar_t *p_Source; // esi
  int v14; // eax
  int v16; // edi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  size_t v25; // esi
  char *v26; // edi
  wchar_t *v27; // edi
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  int v32; // esi
  char *v33; // esi
  int v35; // eax
  char *v36; // eax
  int v37; // eax
  int v38; // esi
  int v40; // esi
  uint64_t v42; // rax
  unsigned int v43; // et0
  int v45; // esi
  int v46; // eax
  wint_t v47; // ax
  int result; // eax
  unsigned char v49[8192]; // [esp+Ch] [ebp-2304h] BYREF
  wchar_t Source; // [esp+200Ch] [ebp-304h] BYREF
  char v51; // [esp+200Eh] [ebp-302h] BYREF
  int v52; // [esp+22C8h] [ebp-48h]
  int v53; // [esp+22CCh] [ebp-44h]
  int v54; // [esp+22D0h] [ebp-40h]
  wchar_t DstCh; // [esp+22D6h] [ebp-3Ah] BYREF
  uint64_t v56; // [esp+22D8h] [ebp-38h]
  int v57; // [esp+22E0h] [ebp-30h]
  int v58; // [esp+22E4h] [ebp-2Ch]
  int v59; // [esp+22E8h] [ebp-28h]
  int v60; // [esp+22ECh] [ebp-24h]
  char *MbCh; // [esp+22F0h] [ebp-20h]
  int v62; // [esp+22F4h] [ebp-1Ch]
  char v63; // [esp+22FAh] [ebp-16h]
  char v64; // [esp+22FBh] [ebp-15h]
  wint_t C[3]; // [esp+22FCh] [ebp-14h]
  char v66; // [esp+2302h] [ebp-Eh]
  char v67; // [esp+2303h] [ebp-Dh]
  int v68; // [esp+2304h] [ebp-Ch]
  char v69; // [esp+2308h] [ebp-8h]
  char v70; // [esp+2309h] [ebp-7h]
  char v71; // [esp+230Ah] [ebp-6h]
  char v72; // [esp+230Bh] [ebp-5h]
  int v73; // [esp+230Ch] [ebp-4h] BYREF
  int v74; // [esp+231Ch] [ebp+Ch]

  v66 = 0; /*0x7d3a7a*/
  IDA_LOWORD(v3) = C[0]; /*0x7d3a80*/
  v4 = aP1; /*0x7d3a84*/
  v5 = *aP1; /*0x7d3a89*/
  v73 = 0; /*0x7d3a8c*/
  v57 = 0; /*0x7d3a92*/
  if ( !v5 ) /*0x7d3a95*/
    goto LABEL_252; /*0x7d3a95*/
  do
  {
    if ( iswctype(v5, 8u) ) /*0x7d3aa2*/
    {
      --v73; /*0x7d3ab0*/
      v6 = _whiteout_0((int)&v73, File); /*0x7d3aba*/
      _un_inc_0(v6, (int)File); /*0x7d3ac2*/
      for ( i = iswspace(*++v4); i; i = iswspace(*v4) ) /*0x7d3acd*/
        ++v4; /*0x7d3ada*/
    }
    if ( *v4 != 37 ) /*0x7d3aeb*/
    {
      ++v73; /*0x7d44d7*/
      v3 = fgetwc(File); /*0x7d44df*/
      v47 = *v4++; /*0x7d44e1*/
      *(unsigned int *)C = v3; /*0x7d44ea*/
      if ( v47 == (unsigned short)v3 ) /*0x7d44ed*/
        goto LABEL_246; /*0x7d44ed*/
      goto LABEL_251; /*0x7d44ed*/
    }
    v64 = 0; /*0x7d3af1*/
    v63 = 0; /*0x7d3af5*/
    v71 = 0; /*0x7d3af9*/
    v69 = 0; /*0x7d3afd*/
    v67 = 0; /*0x7d3b01*/
    v72 = 0; /*0x7d3b05*/
    v53 = 0; /*0x7d3b09*/
    v59 = 0; /*0x7d3b0c*/
    v62 = 0; /*0x7d3b0f*/
    v58 = 0; /*0x7d3b12*/
    v68 = 0; /*0x7d3b15*/
    v70 = 1; /*0x7d3b18*/
    v54 = 0; /*0x7d3b1c*/
    do
    {
      v8 = *++v4; /*0x7d3b21*/
      if ( (v8 & 0xFF00) == 0 )
      {
        if ( (int)SrcSizeInBytes <= 1
           ? *((unsigned char *)off_87C590 + 2 * (uint8_t)v8) & 4
           : _isctype((uint8_t)v8, 4) )
        {
          ++v58; /*0x7d3b61*/
          v68 = v8 + 10 * v68 - 48; /*0x7d3b6b*/
          continue; /*0x7d3b6e*/
        }
      }
      if ( v8 <= 78 ) /*0x7d3b73*/
      {
        switch ( v8 ) /*0x7d3b75*/
        {
          case 'N': /*0x7d3b75*/
            continue; /*0x7d3b75*/
          case '*': /*0x7d3b75*/
            ++v71; /*0x7d3bb0*/
            continue; /*0x7d3bb3*/
          case 'F': /*0x7d3b75*/
            continue; /*0x7d3b7f*/
          case 'I': /*0x7d3b75*/
            if ( v4[1] == 54 && v4[2] == 52 ) /*0x7d3b9f*/
            {
              ++v54; /*0x7d3ba1*/
              v56 = 0; /*0x7d3ba4*/
              v4 += 2; /*0x7d3bac*/
              continue; /*0x7d3bae*/
            }
            break;
          case 'L': /*0x7d3b75*/
            ++v70; /*0x7d3b8b*/
            continue; /*0x7d3b8e*/
        }
  LABEL_28:
        ++v69; /*0x7d3bc4*/
        continue; /*0x7d3bc7*/
      }
      if ( v8 == 104 ) /*0x7d3bb8*/
      {
        --v70; /*0x7d3bd1*/
        --v72; /*0x7d3bd4*/
      }
      else
      {
        if ( v8 == 108 ) /*0x7d3bbd*/
        {
          ++v70; /*0x7d3bc9*/
        }
        else if ( v8 != 119 ) /*0x7d3bc2*/
        {
          goto LABEL_28; /*0x7d3bc2*/
        }
        ++v72; /*0x7d3bcc*/
      }
    }
    while ( !v69 );
    v74 = (int)v4; /*0x7d3be5*/
    if ( !v71 ) /*0x7d3be8*/
    {
      v52 = a3; /*0x7d3bed*/
      a3 += 4; /*0x7d3bf3*/
      MbCh = *(char **)(a3 - 4); /*0x7d3bf9*/
    }
    v69 = 0; /*0x7d3bfc*/
    if ( !v72 ) /*0x7d3c04*/
    {
      if ( *v4 == 83 || *v4 == 67 ) /*0x7d3c13*/
        v72 = -1; /*0x7d3c1b*/
      else
        v72 = 1; /*0x7d3c15*/
    }
    v60 = *v4 | 0x20; /*0x7d3c28*/
    v10 = v60; /*0x7d3c22*/
    if ( v60 != 110 ) /*0x7d3c2b*/
    {
      if ( v60 == 99 || v60 == 123 ) /*0x7d3c35*/
      {
        ++v73; /*0x7d3c49*/
        v11 = fgetwc(File); /*0x7d3c4c*/
      }
      else
      {
        v11 = _whiteout_0((int)&v73, File); /*0x7d3c3e*/
      }
      IDA_LOWORD(v3) = v11; /*0x7d3c51*/
      *(unsigned int *)C = v11; /*0x7d3c54*/
    }
    if ( v58 && !v68 ) /*0x7d3c62*/
      goto LABEL_251; /*0x7d3c62*/
    if ( v10 > 111 ) /*0x7d3c6b*/
    {
      switch ( v10 ) /*0x7d3f59*/
      {
        case 'p': /*0x7d3f59*/
          v70 = 1; /*0x7d4205*/
          goto LABEL_175; /*0x7d4205*/
        case 's': /*0x7d3f59*/
          if ( v72 > 0 ) /*0x7d405e*/
            v67 = 1; /*0x7d4060*/
          v27 = asc_87CA48; /*0x7d4064*/
          break;
        case 'u': /*0x7d3f59*/
          goto LABEL_175; /*0x7d3f6a*/
        case 'x': /*0x7d3f59*/
          goto LABEL_59; /*0x7d3f73*/
        case '{': /*0x7d3f59*/
          if ( v72 > 0 ) /*0x7d3fa3*/
            v67 = 1; /*0x7d3fa5*/
          v27 = v4 + 1; /*0x7d3fad*/
          v74 = (int)v27; /*0x7d3fae*/
          if ( *v27 != 94 ) /*0x7d3fb5*/
          {
  LABEL_138:
            v29 = (int)memset(v49, 0, sizeof(v49)); /*0x7d406d*/
            if ( v10 == 123 ) /*0x7d4086*/
            {
              IDA_HIWORD(v29) = 0; /*0x7d408a*/
              if ( *v27 == 93 ) /*0x7d408e*/
              {
                v59 = 93; /*0x7d4091*/
                ++v27; /*0x7d4094*/
                v49[11] = 32; /*0x7d4095*/
              }
            }
            while ( 1 ) /*0x7d409c*/
            {
              IDA_LOWORD(v29) = *v27; /*0x7d409c*/
              if ( *v27 == 93 ) /*0x7d40a3*/
                break; /*0x7d40a3*/
              ++v27; /*0x7d40a6*/
              if ( (unsigned short)v29 == 45 && (unsigned short)v59 && (IDA_LOWORD(v30) = *v27, *v27 != 93) ) /*0x7d40bb*/
              {
                ++v27; /*0x7d40be*/
                if ( (uint16_t)v59 >= (uint16_t)v30 ) /*0x7d40c3*/
                {
                  v29 = v59; /*0x7d40c9*/
                  v59 = v30; /*0x7d40cc*/
                }
                else
                {
                  v29 = v30; /*0x7d40c5*/
                }
                if ( (uint16_t)v59 <= (uint16_t)v29 ) /*0x7d40d3*/
                {
                  v31 = (uint16_t)v59; /*0x7d40d5*/
                  v32 = (uint16_t)v29 - (uint16_t)v59 + 1; /*0x7d40de*/
                  do /*0x7d40f8*/
                  {
                    v30 = v31 & 7; /*0x7d40e3*/
                    v29 = (int)&v49[v31 >> 3]; /*0x7d40ed*/
                    *(unsigned char *)v29 |= 1 << v30; /*0x7d40f4*/
                    ++v31; /*0x7d40f6*/
                    --v32; /*0x7d40f7*/
                  }
                  while ( v32 ); /*0x7d40f8*/
                  IDA_LOWORD(v3) = C[0]; /*0x7d40fa*/
                }
                v59 = 0; /*0x7d40fd*/
              }
              else
              {
                v59 = v29; /*0x7d4106*/
                v30 = v29 & 7; /*0x7d410b*/
                v29 = (int)&v49[(uint16_t)v29 >> 3]; /*0x7d4115*/
                *(unsigned char *)v29 |= 1 << v30; /*0x7d411c*/
              }
            }
            if ( !*v27 ) /*0x7d4127*/
              goto LABEL_252; /*0x7d4127*/
            if ( v60 == 123 ) /*0x7d4131*/
              v74 = (int)v27; /*0x7d4133*/
            v33 = MbCh; /*0x7d4139*/
            --v73; /*0x7d413c*/
            _un_inc_0(v3, (int)File); /*0x7d4140*/
            while ( 1 ) /*0x7d4147*/
            {
              if ( v58 ) /*0x7d414b*/
              {
                if ( !v68-- ) /*0x7d414d*/
                  goto LABEL_168; /*0x7d4155*/
              }
              ++v73; /*0x7d415a*/
              v35 = fgetwc(File); /*0x7d415d*/
              IDA_LOWORD(v3) = v35; /*0x7d4162*/
              *(unsigned int *)C = v35; /*0x7d416a*/
              if ( (unsigned short)v35 == 0xFFFF || ((1 << (v35 & 7)) & (v64 ^ (char)v49[(uint16_t)v35 >> 3])) == 0 ) /*0x7d418f*/
                break; /*0x7d418f*/
              if ( v71 ) /*0x7d4195*/
              {
                v33 += 2; /*0x7d41ba*/
              }
              else if ( v67 ) /*0x7d419b*/
              {
                v36 = MbCh; /*0x7d419d*/
                MbCh += 2; /*0x7d41a0*/
                *(unsigned short *)v36 = v3; /*0x7d41a4*/
              }
              else
              {
                v37 = wctomb(MbCh, v35); /*0x7d41ad*/
                MbCh += v37; /*0x7d41b2*/
              }
            }
            --v73; /*0x7d41c0*/
            _un_inc_0(v35, (int)File); /*0x7d41c4*/
  LABEL_168:
            if ( v33 != MbCh ) /*0x7d41ce*/
            {
              if ( !v71 ) /*0x7d41d8*/
              {
                ++v57; /*0x7d41de*/
                if ( v60 != 99 ) /*0x7d41e5*/
                {
                  if ( v67 ) /*0x7d41f2*/
                    *(unsigned short *)MbCh = 0; /*0x7d41f4*/
                  else
                    *MbCh = 0; /*0x7d41fd*/
                }
              }
              goto LABEL_244; /*0x7d41f8*/
            }
            goto LABEL_252; /*0x7d41ce*/
          }
          ++v27; /*0x7d3fbd*/
          break;
        default:
          goto LABEL_115; /*0x7d3f7c*/
      }
  LABEL_137:
      v64 = -1; /*0x7d4069*/
      goto LABEL_138; /*0x7d4069*/
    }
    if ( v10 == 111 ) /*0x7d3c71*/
      goto LABEL_175; /*0x7d3c71*/
    if ( v10 == 99 ) /*0x7d3c7a*/
    {
      if ( !v58 ) /*0x7d3f34*/
      {
        ++v68; /*0x7d3f36*/
        v58 = 1; /*0x7d3f39*/
      }
      if ( v72 > 0 ) /*0x7d3f44*/
        v67 = 1; /*0x7d3f46*/
      v27 = asc_87CA54; /*0x7d3f4a*/
      goto LABEL_137; /*0x7d3f4f*/
    }
    if ( v10 != 100 )
    {
      if ( v10 <= 100 ) /*0x7d3c89*/
        goto LABEL_115; /*0x7d3c89*/
      if ( v10 > 103 ) /*0x7d3c92*/
      {
        if ( v10 != 105 ) /*0x7d3c97*/
        {
          if ( v10 == 110 ) /*0x7d3c9c*/
          {
            v12 = v73; /*0x7d3ca6*/
            if ( !v71 ) /*0x7d3ca9*/
            {
  LABEL_215:
              if ( v54 ) /*0x7d43a1*/
              {
                *(unsigned long long *)MbCh = v56; /*0x7d43ad*/
              }
              else if ( v70 ) /*0x7d44c1*/
              {
                *(unsigned int *)MbCh = v12; /*0x7d44c3*/
              }
              else
              {
                *(unsigned short *)MbCh = v12; /*0x7d44c7*/
              }
            }
            goto LABEL_244; /*0x7d43b5*/
          }
  LABEL_115:
          if ( *v4 == (unsigned short)v3 ) /*0x7d3f81*/
          {
            --v66; /*0x7d3f87*/
            if ( !v71 ) /*0x7d3f8e*/
              a3 = v52; /*0x7d3f97*/
            goto LABEL_244; /*0x7d3f9a*/
          }
  LABEL_251:
          --v73; /*0x7d4512*/
          _un_inc_0(v3, (int)File); /*0x7d4519*/
          break; /*0x7d4519*/
        }
        v10 = 100; /*0x7d3cb6*/
        v60 = 100; /*0x7d3cb7*/
  LABEL_59:
        if ( (unsigned short)v3 == 45 ) /*0x7d3cbe*/
        {
          v63 = 1; /*0x7d3cc4*/
          goto LABEL_123; /*0x7d3cc8*/
        }
        if ( (unsigned short)v3 == 43 ) /*0x7d3fc9*/
        {
  LABEL_123:
          if ( --v68 || !v58 ) /*0x7d3fd2*/
          {
            ++v73; /*0x7d3fdd*/
            v3 = fgetwc(File); /*0x7d3fe5*/
            *(unsigned int *)C = v3; /*0x7d3fe8*/
          }
          else
          {
            v69 = 1; /*0x7d3fd4*/
          }
        }
        if ( (unsigned short)v3 == 48 ) /*0x7d3fef*/
        {
          ++v73; /*0x7d3ff8*/
          v28 = fgetwc(File); /*0x7d3ffb*/
          IDA_LOWORD(v3) = v28; /*0x7d4001*/
          *(unsigned int *)C = v28; /*0x7d4005*/
          if ( (unsigned short)v28 == 120 || (unsigned short)v28 == 88 ) /*0x7d4012*/
          {
            ++v73; /*0x7d4044*/
            v3 = fgetwc(File); /*0x7d404c*/
            *(unsigned int *)C = v3; /*0x7d404f*/
            v60 = 120; /*0x7d4052*/
          }
          else
          {
            v62 = 1; /*0x7d4016*/
            if ( v10 != 120 ) /*0x7d401d*/
            {
              v60 = 111; /*0x7d401f*/
              goto LABEL_183; /*0x7d4026*/
            }
            --v73; /*0x7d402e*/
            _un_inc_0(v28, (int)File); /*0x7d4032*/
            v3 = 48; /*0x7d403b*/
  LABEL_182:
            *(unsigned int *)C = v3; /*0x7d4238*/
          }
        }
        goto LABEL_183; /*0x7d4238*/
      }
      p_Source = &Source; /*0x7d3cd1*/
      if ( (unsigned short)v3 == 45 ) /*0x7d3cd7*/
      {
        Source = 45; /*0x7d3cd9*/
        p_Source = (wchar_t *)&v51; /*0x7d3ce0*/
        goto LABEL_64; /*0x7d3ce6*/
      }
      if ( (unsigned short)v3 == 43 ) /*0x7d3cec*/
      {
  LABEL_64:
        --v68; /*0x7d3cee*/
        ++v73; /*0x7d3cf4*/
        v3 = fgetwc(File); /*0x7d3cfc*/
        *(unsigned int *)C = v3; /*0x7d3cff*/
      }
      if ( !v58 || v68 > 349 ) /*0x7d3d0f*/
        v68 = 349; /*0x7d3d11*/
      for ( ; !IDA_BYTE1(v3); *(unsigned int *)C = v3 ) /*0x7d3d1b*/
      {
        if ( (int)SrcSizeInBytes <= 1 ) /*0x7d3d29*/
          v14 = *((unsigned char *)off_87C590 + 2 * (uint8_t)v3) & 4; /*0x7d3d48*/
        else
          v14 = _isctype((uint8_t)v3, 4); /*0x7d3d32*/
        if ( !v14 ) /*0x7d3d4d*/
          break; /*0x7d3d4d*/
        if ( !v68-- ) /*0x7d3d4f*/
          break; /*0x7d3d57*/
        ++v62; /*0x7d3d59*/
        *p_Source++ = v3; /*0x7d3d5f*/
        ++v73; /*0x7d3d64*/
        v3 = fgetwc(File); /*0x7d3d6c*/
      }
      mbtowc(&DstCh, SrcCh, SrcSizeInBytes); /*0x7d3d86*/
      v16 = v68; /*0x7d3d8b*/
      if ( DstCh == (unsigned short)v3 )
      {
        v16 = v68 - 1; /*0x7d3d99*/
        if ( v68 )
        {
          ++v73; /*0x7d3da1*/
          v3 = fgetwc(File); /*0x7d3da9*/
          *p_Source = DstCh; /*0x7d3daf*/
          *(unsigned int *)C = v3; /*0x7d3db4*/
          ++p_Source; /*0x7d3db7*/
          while ( !IDA_BYTE1(v3) )
          {
            if ( !((int)SrcSizeInBytes <= 1
                 ? *((unsigned char *)off_87C590 + 2 * (uint8_t)v3) & 4
                 : _isctype((uint8_t)v3, 4)) )
              break; /*0x7d3dee*/
            if ( !v16-- ) /*0x7d3df0*/
              break; /*0x7d3df5*/
            ++v62; /*0x7d3df7*/
            *p_Source++ = v3; /*0x7d3dfd*/
            ++v73; /*0x7d3e02*/
            v3 = fgetwc(File); /*0x7d3e0a*/
            *(unsigned int *)C = v3; /*0x7d3e0d*/
          }
        }
      }
      if ( v62 && ((unsigned short)v3 == 101 || (unsigned short)v3 == 69) )
      {
        v19 = v16; /*0x7d3e2c*/
        v20 = v16 - 1; /*0x7d3e2e*/
        if ( v19 )
        {
          *p_Source++ = 101; /*0x7d3e3a*/
          ++v73; /*0x7d3e41*/
          v21 = fgetwc(File); /*0x7d3e44*/
          IDA_LOWORD(v3) = v21; /*0x7d3e49*/
          *(unsigned int *)C = v21; /*0x7d3e50*/
          if ( (unsigned short)v21 == 45 ) /*0x7d3e53*/
          {
            *p_Source++ = 45; /*0x7d3e55*/
            goto LABEL_92; /*0x7d3e5a*/
          }
          if ( (unsigned short)v21 == 43 ) /*0x7d3e60*/
          {
  LABEL_92:
            if ( v20-- ) /*0x7d3e62*/
              goto LABEL_94; /*0x7d3e67*/
            v20 = 0; /*0x7d3e69*/
          }
          while ( !IDA_BYTE1(v3) )
          {
            if ( !((int)SrcSizeInBytes <= 1
                 ? *((unsigned char *)off_87C590 + 2 * (uint8_t)v3) & 4
                 : _isctype((uint8_t)v3, 4)) )
              break; /*0x7d3eb4*/
            if ( !v20-- ) /*0x7d3eb6*/
              break; /*0x7d3ebb*/
            ++v62; /*0x7d3ebd*/
            *p_Source++ = v3; /*0x7d3ec0*/
  LABEL_94:
            ++v73; /*0x7d3e6d*/
            v3 = fgetwc(File); /*0x7d3e78*/
            *(unsigned int *)C = v3; /*0x7d3e7b*/
          }
        }
      }
      --v73; /*0x7d3eca*/
      _un_inc_0(v3, (int)File); /*0x7d3ece*/
      if ( v62 ) /*0x7d3ed9*/
      {
        if ( !v71 ) /*0x7d3ee3*/
        {
          *p_Source = 0; /*0x7d3ee9*/
          ++v57; /*0x7d3ef3*/
          v25 = 2 * (p_Source - &Source) + 2; /*0x7d3efa*/
          v26 = (char *)malloc(v25); /*0x7d3f04*/
          wcstombs(v26, &Source, v25); /*0x7d3f0f*/
          off_87C4D8[0](); /*0x7d3f1e*/
        }
        goto LABEL_244; /*0x7d3ee3*/
      }
      break; /*0x7d3ed9*/
    }
  LABEL_175:
    if ( (unsigned short)v3 == 45 ) /*0x7d420d*/
    {
      v63 = 1; /*0x7d420f*/
    }
    else if ( (unsigned short)v3 != 43 ) /*0x7d4219*/
    {
      goto LABEL_183; /*0x7d4219*/
    }
    if ( --v68 || !v58 ) /*0x7d4222*/
    {
      ++v73; /*0x7d422d*/
      v3 = fgetwc(File); /*0x7d4236*/
      goto LABEL_182; /*0x7d4236*/
    }
    v69 = 1; /*0x7d4224*/
  LABEL_183:
    if ( !v54 )
    {
      v12 = v53; /*0x7d43be*/
      if ( v69 ) /*0x7d43c1*/
        goto LABEL_239; /*0x7d43c1*/
      while ( 1 )
      {
        if ( v60 == 120 || v60 == 112 )
        {
          if ( IDA_BYTE1(v3)
            || ((int)SrcSizeInBytes <= 1
              ? (v46 = *((unsigned char *)off_87C590 + 2 * (uint8_t)v3) & 0x80)
              : (v46 = _isctype((uint8_t)v3, 128)),
                !v46) )
          {
  LABEL_238:
            --v73; /*0x7d449b*/
            _un_inc_0(v3, (int)File); /*0x7d44a2*/
  LABEL_239:
            if ( v63 ) /*0x7d44ad*/
              v12 = -v12; /*0x7d44b3*/
            goto LABEL_210; /*0x7d44b5*/
          }
          v45 = 16 * v12; /*0x7d4462*/
          v3 = _hextodec_0(v3); /*0x7d446a*/
          *(unsigned int *)C = v3; /*0x7d446d*/
        }
        else
        {
          if ( IDA_BYTE1(v3) ) /*0x7d43db*/
            goto LABEL_238; /*0x7d43db*/
          if ( !((int)SrcSizeInBytes <= 1
               ? *((unsigned char *)off_87C590 + 2 * (uint8_t)v3) & 4
               : _isctype((uint8_t)v3, 4)) )
            goto LABEL_238; /*0x7d440c*/
          if ( v60 == 111 ) /*0x7d4416*/
          {
            if ( (uint16_t)v3 >= 0x38u ) /*0x7d441c*/
              goto LABEL_238; /*0x7d441c*/
            v45 = 8 * v12; /*0x7d441e*/
          }
          else
          {
            v45 = 10 * v12; /*0x7d4426*/
          }
        }
        ++v62; /*0x7d4470*/
        v12 = v45 + (uint16_t)v3 - 48; /*0x7d447a*/
        if ( v58 ) /*0x7d447e*/
        {
          if ( !--v68 ) /*0x7d4483*/
            goto LABEL_239; /*0x7d4483*/
        }
        ++v73; /*0x7d4488*/
        v3 = fgetwc(File); /*0x7d4490*/
        *(unsigned int *)C = v3; /*0x7d4493*/
      }
    }
    if ( v69 ) /*0x7d4249*/
      goto LABEL_207; /*0x7d4249*/
    v38 = v56; /*0x7d424f*/
    while ( 2 )
    {
      if ( v60 == 120 )
      {
        if ( IDA_BYTE1(v3) ) /*0x7d4260*/
          break; /*0x7d4260*/
        if ( !((int)SrcSizeInBytes <= 1
             ? *((unsigned char *)off_87C590 + 2 * (uint8_t)v3) & 0x80
             : _isctype((uint8_t)v3, 128)) )
          break; /*0x7d4296*/
        IDA_HIDWORD(v56) = IDA___PAIR64__(IDA_HIDWORD(v56), v38) >> 28; /*0x7d42ac*/
        v40 = 16 * v38; /*0x7d42ac*/
        v3 = _hextodec_0(v3); /*0x7d42b4*/
        *(unsigned int *)C = v3; /*0x7d42b7*/
        goto LABEL_203; /*0x7d42ba*/
      }
      if ( !IDA_BYTE1(v3) )
      {
        if ( (int)SrcSizeInBytes <= 1
           ? *((unsigned char *)off_87C590 + 2 * (uint8_t)v3) & 4
           : _isctype((uint8_t)v3, 4) )
        {
          if ( v60 == 111 ) /*0x7d42f6*/
          {
            if ( (uint16_t)v3 >= 0x38u ) /*0x7d42fc*/
              break; /*0x7d42fc*/
            v42 = 8 * IDA___PAIR64__(IDA_HIDWORD(v56), v38); /*0x7d4306*/
          }
          else
          {
            v42 = 10 * IDA___PAIR64__(IDA_HIDWORD(v56), v38); /*0x7d4315*/
          }
          IDA_HIDWORD(v56) = IDA_HIDWORD(v42); /*0x7d431c*/
          v40 = v42; /*0x7d431c*/
  LABEL_203:
          ++v62; /*0x7d431f*/
          v43 = ((uint16_t)v3 - 48 + IDA___PAIR64__(IDA_HIDWORD(v56), v40)) >> 32; /*0x7d432b*/
          v38 = (uint16_t)v3 - 48 + v40; /*0x7d432b*/
          v56 = IDA___PAIR64__(v43, v38); /*0x7d4332*/
          if ( v58 ) /*0x7d4335*/
          {
            if ( !--v68 ) /*0x7d433a*/
              goto LABEL_207; /*0x7d433a*/
          }
          ++v73; /*0x7d433f*/
          v3 = fgetwc(File); /*0x7d4347*/
          *(unsigned int *)C = v3; /*0x7d434a*/
          continue; /*0x7d434d*/
        }
      }
      break;
    }
    --v73; /*0x7d4352*/
    _un_inc_0(v3, (int)File); /*0x7d4359*/
  LABEL_207:
    if ( v63 ) /*0x7d4364*/
      v56 = -(int64_t)v56; /*0x7d4376*/
    v12 = v53; /*0x7d4379*/
  LABEL_210:
    if ( v60 == 70 ) /*0x7d4380*/
      v62 = 0; /*0x7d4382*/
    if ( !v62 ) /*0x7d438a*/
      break; /*0x7d438a*/
    if ( !v71 ) /*0x7d4394*/
    {
      ++v57; /*0x7d439a*/
      goto LABEL_215; /*0x7d439a*/
    }
  LABEL_244:
    ++v66; /*0x7d44cd*/
    v4 = (wint_t *)(v74 + 2); /*0x7d44d1*/
  LABEL_246:
    if ( (uint16_t)v3 == -1 && (*v4 != 37 || v4[1] != 110) ) /*0x7d4502*/
      break; /*0x7d4502*/
    v5 = *v4; /*0x7d4504*/
  }
  while ( *v4 );
  LABEL_252:
  result = v57; /*0x7d4520*/
  if ( (uint16_t)v3 == -1 && !v57 && !v66 ) /*0x7d4535*/
    return -1; /*0x7d4537*/
  return result; /*0x7d4523*/
}
}
// 0x7D453C
namespace gamemd {
void _hextodec_0(wint_t C)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D453C.json)
}
}
// 0x7D482C
namespace gamemd {
void * signal_7D482C(int Signal, void * Function)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D482C.json)
}
}
// 0x7D4A10
namespace gamemd {
void raise(int Signal)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D4A10.json)
}
}
// 0x7D4C00
namespace gamemd {
ObjectClass * * strcat(CCINIClass * aP0, ObjectClass * aP1)
{
  char *v2; // ecx
  int v4; // eax
  int v5; // eax
  char *v6; // edi
  const char *v7; // ecx
  int v8; // edx
  int v9; // eax

  v2 = aP0; /*0x7d4c00*/
  if ( ((uint8_t)aP0 & 3) == 0 ) /*0x7d4c0b*/
    goto find_end_of_dest_string_loop; /*0x7d4c0b*/
  do /*0x7d4c1a*/
  {
    if ( !*v2++ ) /*0x7d4c0d*/
    {
  start_byte_3_0:
      v6 = v2 - 1; /*0x7d4c4f*/
      goto copy_start_0; /*0x7d4c52*/
    }
  }
  while ( ((uint8_t)v2 & 3) != 0 ); /*0x7d4c1a*/
  while ( 1 ) /*0x7d4c32*/
  {
    do /*0x7d4c32*/
    {
  find_end_of_dest_string_loop:
      v4 = (*(unsigned int *)v2 + 2130640639) ^ ~*(unsigned int *)v2; /*0x7d4c1c*/
      v2 += 4; /*0x7d4c2a*/
    }
    while ( (v4 & 0x81010100) == 0 ); /*0x7d4c32*/
    v5 = *((unsigned int *)v2 - 1); /*0x7d4c34*/
    if ( !(unsigned char)v5 ) /*0x7d4c39*/
      break; /*0x7d4c39*/
    if ( !IDA_BYTE1(v5) ) /*0x7d4c3d*/
    {
      v6 = v2 - 3; /*0x7d4c59*/
      goto copy_start_0; /*0x7d4c5c*/
    }
    if ( (v5 & 0xFF0000) == 0 ) /*0x7d4c44*/
    {
      v6 = v2 - 2; /*0x7d4c54*/
      goto copy_start_0; /*0x7d4c57*/
    }
    if ( (v5 & 0xFF000000) == 0 ) /*0x7d4c4b*/
      goto start_byte_3_0; /*0x7d4c4b*/
  }
  v6 = v2 - 4; /*0x7d4c5e*/
  copy_start_0:
  v7 = aP1; /*0x7d4c61*/
  if ( ((uint8_t)aP1 & 3) == 0 ) /*0x7d4c6b*/
    goto main_loop_entrance_1; /*0x7d4c6b*/
  while ( 1 ) /*0x7d4c6d*/
  {
    IDA_LOBYTE(v8) = *v7++; /*0x7d4c6d*/
    if ( !(unsigned char)v8 ) /*0x7d4c72*/
      break; /*0x7d4c72*/
    *v6++ = v8; /*0x7d4c74*/
    if ( ((uint8_t)v7 & 3) == 0 ) /*0x7d4c7d*/
    {
      while ( 1 ) /*0x7d4c92*/
      {
  main_loop_entrance_1:
        v9 = (*(unsigned int *)v7 + 2130640639) ^ ~*(unsigned int *)v7; /*0x7d4c86*/
        v8 = *(unsigned int *)v7; /*0x7d4c94*/
        v7 += 4; /*0x7d4c96*/
        if ( (v9 & 0x81010100) != 0 ) /*0x7d4c9e*/
        {
          if ( !(unsigned char)v8 ) /*0x7d4ca2*/
            goto LABEL_26; /*0x7d4ca2*/
          if ( !IDA_BYTE1(v8) ) /*0x7d4ca6*/
          {
            *(unsigned short *)v6 = (uint8_t)v8; /*0x7d4ccf*/
            return aP0; /*0x7d4cd7*/
          }
          if ( (v8 & 0xFF0000) == 0 ) /*0x7d4cae*/
          {
            *(unsigned short *)v6 = v8; /*0x7d4cc2*/
            v6[2] = 0; /*0x7d4cc9*/
            return aP0; /*0x7d4cce*/
          }
          if ( (v8 & 0xFF000000) == 0 ) /*0x7d4cb6*/
          {
            *(unsigned int *)v6 = v8; /*0x7d4cba*/
            return aP0; /*0x7d4cc1*/
          }
        }
        *(unsigned int *)v6 = v8; /*0x7d4c81*/
        v6 += 4; /*0x7d4c83*/
      }
    }
  }
  LABEL_26:
  *v6 = v8; /*0x7d4cd8*/
  return aP0; /*0x7d4cc0*/
}
}
// 0x7D4CE0
namespace gamemd {
void* __tzset()
{
  if ( !dword_B783A8 ) /*0x7d4ce7*/
  {
    _lock(11); /*0x7d4ceb*/
    if ( !dword_B783A8 ) /*0x7d4cf8*/
    {
      _tzset_lk(); /*0x7d4cfa*/
      ++dword_B783A8; /*0x7d4cff*/
    }
    _unlock(11); /*0x7d4d07*/
  }
}
}
// 0x7D4D0E
namespace gamemd {
void _tzset()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D4D0E.json)
}
}
// 0x7D4D24
namespace gamemd {
void* _tzset_lk()
{
  char *v0; // eax
  const char *v1; // esi
  int v2; // eax
  char *v3; // eax
  const char *v4; // esi
  int v5; // ecx
  char v6; // al
  int v7; // eax
  int v8; // [esp+10h] [ebp-8h]
  BOOL UsedDefaultChar; // [esp+14h] [ebp-4h] BYREF

  v8 = 0; /*0x7d4d32*/
  _lock(12); /*0x7d4d35*/
  dword_87CB08 = -1; /*0x7d4d3a*/
  dword_87CAF8 = -1; /*0x7d4d41*/
  dword_B782F0 = 0; /*0x7d4d48*/
  v0 = getenv("TZ"); /*0x7d4d55*/
  v1 = v0; /*0x7d4d5a*/
  if ( !v0 ) /*0x7d4d5f*/
  {
    _unlock(12); /*0x7d4d66*/
    if ( GetTimeZoneInformation(&TimeZoneInformation) == -1 ) /*0x7d4d7b*/
      return; /*0x7d4d7b*/
    dword_87CA60 = 60 * TimeZoneInformation.Bias; /*0x7d4d99*/
    dword_B782F0 = 1; /*0x7d4d9e*/
    if ( TimeZoneInformation.StandardDate.wMonth ) /*0x7d4da4*/
      dword_87CA60 = 60 * TimeZoneInformation.StandardBias + 60 * TimeZoneInformation.Bias; /*0x7d4dad*/
    if ( TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias ) /*0x7d4dc2*/
    {
      dword_87CA64 = 1; /*0x7d4dc6*/
      dword_87CA68 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias); /*0x7d4dcf*/
    }
    else
    {
      dword_87CA64 = 0; /*0x7d4dd6*/
      dword_87CA68 = 0; /*0x7d4ddc*/
    }
    if ( !WideCharToMultiByte( /*0x7d4e11*/
            CodePage,
            0x220u,
            TimeZoneInformation.StandardName,
            -1,
            lpMultiByteStr,
            63,
            0,
            &UsedDefaultChar)
      || UsedDefaultChar )
    {
      *lpMultiByteStr = 0; /*0x7d4e23*/
    }
    else
    {
      lpMultiByteStr[63] = 0; /*0x7d4e18*/
    }
    if ( WideCharToMultiByte( /*0x7d4e4e*/
           CodePage,
           0x220u,
           TimeZoneInformation.DaylightName,
           -1,
           off_87CAF0,
           63,
           0,
           &UsedDefaultChar)
      && !UsedDefaultChar )
    {
      off_87CAF0[63] = 0; /*0x7d4e59*/
      return; /*0x7d4e5d*/
    }
  LABEL_41:
    *off_87CAF0 = 0; /*0x7d4f95*/
    return; /*0x7d4f9d*/
  }
  if ( *v0 && (!dword_B783A4 || strcmp(v0, dword_B783A4)) ) /*0x7d4e76*/
  {
    free(dword_B783A4); /*0x7d4e8b*/
    v2 = strlen(v1); /*0x7d4e91*/
    v3 = (char *)malloc(v2 + 1); /*0x7d4e98*/
    dword_B783A4 = v3; /*0x7d4ea2*/
    if ( v3 ) /*0x7d4ea7*/
    {
      strcpy(v3, v1); /*0x7d4eaf*/
      _unlock(12); /*0x7d4eb5*/
      strncpy(lpMultiByteStr, v1, 3u); /*0x7d4ec3*/
      v4 = v1 + 3; /*0x7d4ecd*/
      lpMultiByteStr[3] = 0; /*0x7d4ed3*/
      if ( *v4 == 45 ) /*0x7d4eda*/
      {
        v8 = 1; /*0x7d4edc*/
        ++v4; /*0x7d4ee3*/
      }
      v5 = 3600 * atol(v4); /*0x7d4eef*/
      dword_87CA60 = v5; /*0x7d4ef5*/
      while ( 1 ) /*0x7d4efb*/
      {
        v6 = *v4; /*0x7d4efb*/
        if ( *v4 != 43 && (v6 < 48 || v6 > 57) ) /*0x7d4f07*/
          break; /*0x7d4f07*/
        ++v4; /*0x7d4f09*/
      }
      if ( *v4 == 58 ) /*0x7d4f0f*/
      {
        v5 = 60 * atol(++v4) + dword_87CA60; /*0x7d4f22*/
        dword_87CA60 = v5; /*0x7d4f24*/
        while ( *v4 >= 48 && *v4 <= 57 ) /*0x7d4f32*/
          ++v4; /*0x7d4f34*/
        if ( *v4 == 58 ) /*0x7d4f3a*/
        {
          v5 = atol(++v4) + dword_87CA60; /*0x7d4f4a*/
          dword_87CA60 = v5; /*0x7d4f4c*/
          while ( *v4 >= 48 && *v4 <= 57 ) /*0x7d4f5a*/
            ++v4; /*0x7d4f5c*/
        }
      }
      if ( v8 ) /*0x7d4f63*/
        dword_87CA60 = -v5; /*0x7d4f67*/
      v7 = *v4; /*0x7d4f6d*/
      dword_87CA64 = v7; /*0x7d4f72*/
      if ( v7 ) /*0x7d4f77*/
      {
        strncpy(off_87CAF0, v4, 3u); /*0x7d4f82*/
        off_87CAF0[3] = 0; /*0x7d4f8f*/
        return; /*0x7d4f93*/
      }
      goto LABEL_41; /*0x7d4f77*/
    }
  }
  _unlock(12); /*0x7d4fa0*/
}
}
// 0x7D4FCC
namespace gamemd {
void _isindst_0(unsigned int * a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D4FCC.json)
}
}
// 0x7D5178
namespace gamemd {
void cvtdate(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5178.json)
}
}
// 0x7D544A
namespace gamemd {
void _sopen(const char * FileName, int OpenFlag, int ShareFlag, ...)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D544A.json)
}
}
// 0x7D571F
namespace gamemd {
unsigned char * _mbsrchr(const unsigned char * String, unsigned int C)
{
  uint8_t *v2; // esi
  const uint8_t *v4; // ecx
  uint8_t v5; // dl
  int v6; // eax
  bool v7; // zf

  v2 = 0; /*0x7d5723*/
  if ( !dword_B7885C ) /*0x7d572b*/
    return (uint8_t *)strrchr((const char *)String, C); /*0x7d573a*/
  _lock(25); /*0x7d573f*/
  v4 = String; /*0x7d5745*/
  do /*0x7d5781*/
  {
    v5 = *v4; /*0x7d5748*/
    v6 = *v4; /*0x7d574a*/
    if ( (byte_B78961[(uint8_t)v6] & 4) != 0 ) /*0x7d5757*/
    {
      v5 = *++v4; /*0x7d5759*/
      if ( v5 ) /*0x7d575f*/
      {
        if ( C == (v5 | (v6 << 8)) ) /*0x7d576c*/
          v2 = (uint8_t *)(v4 - 1); /*0x7d576e*/
        goto LABEL_12; /*0x7d5771*/
      }
      v7 = v2 == 0; /*0x7d5773*/
    }
    else
    {
      v7 = C == v6; /*0x7d5777*/
    }
    if ( v7 ) /*0x7d577a*/
      v2 = (uint8_t *)v4; /*0x7d577c*/
  LABEL_12:
    ++v4; /*0x7d577e*/
  }
  while ( v5 ); /*0x7d5781*/
  _unlock(25); /*0x7d5785*/
  return v2; /*0x7d578e*/
}
}
// 0x7D5791
namespace gamemd {
int _rmtmp()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5791.json)
}
}
// 0x7D5A68
namespace gamemd {
unsigned char * _wincmdln()
{
  unsigned char *v0; // esi
  uint8_t v1; // al

  if ( !dword_B78BB8 ) /*0x7d5a6f*/
    __initmbctable(); /*0x7d5a71*/
  v0 = (unsigned char *)dword_B78BA8; /*0x7d5a77*/
  if ( *(unsigned char *)dword_B78BA8 != 34 ) /*0x7d5a81*/
  {
    if ( *(unsigned char *)dword_B78BA8 > 0x20u ) /*0x7d5aaa*/
    {
      do /*0x7d5ab0*/
        ++v0; /*0x7d5aac*/
      while ( *v0 > 0x20u ); /*0x7d5ab0*/
    }
    goto LABEL_12; /*0x7d5ab0*/
  }
  while ( 1 ) /*0x7d5a83*/
  {
    v1 = *++v0; /*0x7d5a83*/
    if ( v1 == 34 || !v1 ) /*0x7d5a8d*/
      break; /*0x7d5a8d*/
    if ( _ismbblead(v1) ) /*0x7d5a93*/
      ++v0; /*0x7d5a9d*/
  }
  if ( *v0 != 34 ) /*0x7d5aa3*/
    goto LABEL_12; /*0x7d5aa3*/
  do /*0x7d5aba*/
  {
    ++v0; /*0x7d5aa5*/
  LABEL_12:
    ; /*0x7d5ab2*/
  }
  while ( *v0 && *v0 <= 0x20u ); /*0x7d5aba*/
  return v0; /*0x7d5abf*/
}
}
// 0x7D5AC0
namespace gamemd {
int _setenvp()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5AC0.json)
}
}
// 0x7D5B79
namespace gamemd {
int _setargv()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5B79.json)
}
}
// 0x7D5C12
namespace gamemd {
unsigned int * parse_cmdline(unsigned char * a1, unsigned char ** a2, unsigned char * a3, unsigned int * a4, unsigned int * a5)
{
  uint8_t *v6; // esi
  uint8_t **v7; // edi
  uint8_t *v8; // eax
  uint8_t v9; // dl
  uint8_t v10; // dl
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  uint8_t v15; // dl
  int v17; // [esp+14h] [ebp+8h]
  BOOL v18; // [esp+24h] [ebp+18h]

  *a5 = 0; /*0x7d5c1d*/
  v6 = a3; /*0x7d5c20*/
  v7 = a2; /*0x7d5c24*/
  *a4 = 1; /*0x7d5c27*/
  v8 = a1; /*0x7d5c2d*/
  if ( a2 ) /*0x7d5c32*/
  {
    *a2 = a3; /*0x7d5c34*/
    v7 = ++a2; /*0x7d5c36*/
  }
  if ( *a1 == 34 ) /*0x7d5c3f*/
  {
    while ( 1 ) /*0x7d5c41*/
    {
      v9 = *++v8; /*0x7d5c41*/
      if ( v9 == 34 || !v9 ) /*0x7d5c4c*/
        break; /*0x7d5c4c*/
      if ( (byte_B78961[v9] & 4) != 0 ) /*0x7d5c58*/
      {
        ++*a5; /*0x7d5c5a*/
        if ( v6 ) /*0x7d5c5e*/
          *v6++ = *v8++; /*0x7d5c62*/
      }
      ++*a5; /*0x7d5c66*/
      if ( v6 ) /*0x7d5c6a*/
        *v6++ = *v8; /*0x7d5c6e*/
    }
    ++*a5; /*0x7d5c73*/
    if ( v6 ) /*0x7d5c77*/
      *v6++ = 0; /*0x7d5c79*/
    if ( *v8 == 34 ) /*0x7d5c80*/
      ++v8; /*0x7d5c82*/
  }
  else
  {
    do /*0x7d5cb7*/
    {
      ++*a5; /*0x7d5c85*/
      if ( v6 ) /*0x7d5c89*/
        *v6++ = *v8; /*0x7d5c8d*/
      v10 = *v8++; /*0x7d5c90*/
      if ( (byte_B78961[v10] & 4) != 0 ) /*0x7d5c9d*/
      {
        ++*a5; /*0x7d5c9f*/
        if ( v6 ) /*0x7d5ca3*/
          *v6++ = *v8; /*0x7d5ca7*/
        ++v8; /*0x7d5caa*/
      }
      if ( v10 == 32 ) /*0x7d5cae*/
        break; /*0x7d5cae*/
      if ( !v10 ) /*0x7d5cb2*/
      {
        --v8; /*0x7d5cbd*/
        goto LABEL_28; /*0x7d5cbe*/
      }
    }
    while ( v10 != 9 ); /*0x7d5cb7*/
    if ( v6 ) /*0x7d5cc2*/
      *(v6 - 1) = 0; /*0x7d5cc4*/
  }
  LABEL_28:
  v18 = 0; /*0x7d5cc8*/
  while ( *v8 ) /*0x7d5ccc*/
  {
    while ( *v8 == 32 || *v8 == 9 ) /*0x7d5cdf*/
      ++v8; /*0x7d5ce1*/
    if ( !*v8 ) /*0x7d5ce4*/
      break; /*0x7d5ce4*/
    if ( v7 ) /*0x7d5cef*/
    {
      *v7++ = v6; /*0x7d5cf1*/
      a2 = v7; /*0x7d5cf6*/
    }
    ++*a4; /*0x7d5cfc*/
    while ( 1 ) /*0x7d5cfe*/
    {
      v17 = 1; /*0x7d5cfe*/
      v11 = 0; /*0x7d5d05*/
      while ( *v8 == 92 ) /*0x7d5d0a*/
      {
        ++v8; /*0x7d5d0c*/
        ++v11; /*0x7d5d0d*/
      }
      if ( *v8 == 34 ) /*0x7d5d13*/
      {
        if ( (v11 & 1) == 0 ) /*0x7d5d18*/
        {
          if ( v18 && v8[1] == 34 ) /*0x7d5d28*/
            ++v8; /*0x7d5d2a*/
          else
            v17 = 0; /*0x7d5d2e*/
          v7 = a2; /*0x7d5d31*/
          v18 = !v18; /*0x7d5d3c*/
        }
        v11 >>= 1; /*0x7d5d3f*/
      }
      v12 = v11; /*0x7d5d41*/
      v13 = v11 - 1; /*0x7d5d43*/
      if ( v12 ) /*0x7d5d46*/
      {
        v14 = v13 + 1; /*0x7d5d48*/
        do /*0x7d5d54*/
        {
          if ( v6 ) /*0x7d5d4b*/
            *v6++ = 92; /*0x7d5d4d*/
          ++*a5; /*0x7d5d51*/
          --v14; /*0x7d5d53*/
        }
        while ( v14 ); /*0x7d5d54*/
      }
      v15 = *v8; /*0x7d5d56*/
      if ( !*v8 || !v18 && (v15 == 32 || v15 == 9) ) /*0x7d5d6a*/
        break; /*0x7d5d6a*/
      if ( v17 ) /*0x7d5d70*/
      {
        if ( v6 ) /*0x7d5d74*/
        {
          if ( (byte_B78961[v15] & 4) != 0 ) /*0x7d5d80*/
          {
            *v6++ = v15; /*0x7d5d82*/
            ++v8; /*0x7d5d85*/
            ++*a5; /*0x7d5d86*/
          }
          *v6++ = *v8; /*0x7d5d8a*/
        }
        else if ( (byte_B78961[v15] & 4) != 0 ) /*0x7d5d99*/
        {
          ++v8; /*0x7d5d9b*/
          ++*a5; /*0x7d5d9c*/
        }
        ++*a5; /*0x7d5d9e*/
      }
      ++v8; /*0x7d5da0*/
    }
    if ( v6 ) /*0x7d5da8*/
      *v6++ = 0; /*0x7d5daa*/
    ++*a5; /*0x7d5dae*/
  }
  if ( v7 ) /*0x7d5db7*/
    *v7 = 0; /*0x7d5db9*/
  ++*a4; /*0x7d5dc2*/
  return a4; /*0x7d5dbf*/
}
}
// 0x7D5DC6
namespace gamemd {
int * __crtGetEnvironmentStringsA()
{
  CHAR *v0; // ebx
  WCHAR *EnvironmentStringsW; // esi
  LPCH EnvironmentStrings; // edi
  WCHAR *i; // eax
  size_t v4; // eax
  int v5; // ebp
  CHAR *v6; // eax
  LPCH j; // eax
  size_t v9; // ebp
  void *v10; // eax
  void *v11; // esi
  CHAR *Block; // [esp+10h] [ebp-8h]
  int cchWideChar; // [esp+14h] [ebp-4h]

  v0 = 0; /*0x7d5dd7*/
  EnvironmentStringsW = 0; /*0x7d5dd9*/
  EnvironmentStrings = 0; /*0x7d5ddb*/
  if ( dword_B784FC ) /*0x7d5ddf*/
  {
    if ( dword_B784FC == 1 ) /*0x7d5e17*/
      goto LABEL_7; /*0x7d5e17*/
    if ( dword_B784FC != 2 ) /*0x7d5ea1*/
      return 0; /*0x7d5ea1*/
  }
  else
  {
    EnvironmentStringsW = GetEnvironmentStringsW(); /*0x7d5de3*/
    if ( EnvironmentStringsW ) /*0x7d5de7*/
    {
      dword_B784FC = 1; /*0x7d5de9*/
  LABEL_7:
      if ( EnvironmentStringsW || (EnvironmentStringsW = GetEnvironmentStringsW()) != 0 ) /*0x7d5e27*/
      {
        for ( i = EnvironmentStringsW; *i; ++i ) /*0x7d5e2d*/
        {
          do /*0x7d5e36*/
            ++i; /*0x7d5e35*/
          while ( *i ); /*0x7d5e36*/
        }
        cchWideChar = i - EnvironmentStringsW + 1; /*0x7d5e55*/
        v4 = WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, 0, 0, 0, 0); /*0x7d5e59*/
        v5 = v4; /*0x7d5e5b*/
        if ( v4 ) /*0x7d5e5f*/
        {
          v6 = (CHAR *)malloc(v4); /*0x7d5e62*/
          Block = v6; /*0x7d5e6a*/
          if ( v6 ) /*0x7d5e6e*/
          {
            if ( !WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, v6, v5, 0, 0) ) /*0x7d5e7b*/
            {
              free(Block); /*0x7d5e85*/
              Block = 0; /*0x7d5e8b*/
            }
            v0 = Block; /*0x7d5e8f*/
          }
        }
        FreeEnvironmentStringsW(EnvironmentStringsW); /*0x7d5e94*/
        return v0; /*0x7d5e9c*/
      }
      return 0; /*0x7d5eef*/
    }
    EnvironmentStrings = GetEnvironmentStrings(); /*0x7d5dfb*/
    if ( !EnvironmentStrings ) /*0x7d5dff*/
      return 0; /*0x7d5dff*/
    dword_B784FC = 2; /*0x7d5e05*/
  }
  if ( !EnvironmentStrings ) /*0x7d5ea5*/
  {
    EnvironmentStrings = GetEnvironmentStrings(); /*0x7d5ead*/
    if ( !EnvironmentStrings ) /*0x7d5eb1*/
      return 0; /*0x7d5eb1*/
  }
  for ( j = EnvironmentStrings; *j; ++j ) /*0x7d5eb3*/
  {
    do /*0x7d5eba*/
      ++j; /*0x7d5eb9*/
    while ( *j ); /*0x7d5eba*/
  }
  v9 = j - EnvironmentStrings + 1; /*0x7d5ec6*/
  v10 = malloc(v9); /*0x7d5ec9*/
  v11 = v10; /*0x7d5ece*/
  if ( v10 ) /*0x7d5ed3*/
    memcpy_0(v10, EnvironmentStrings, v9); /*0x7d5edc*/
  else
    v11 = 0; /*0x7d5ed5*/
  FreeEnvironmentStringsA(EnvironmentStrings); /*0x7d5ee5*/
  return (CHAR *)v11; /*0x7d5ef1*/
}
}
// 0x7D60B5
namespace gamemd {
void* __init_time()
{
  void **v0; // eax
  void **v1; // esi

  if ( dword_B782AC ) /*0x7d60bd*/
  {
    v0 = (void **)calloc(1u, 0xACu); /*0x7d60c6*/
    v1 = v0; /*0x7d60cb*/
    if ( !v0 ) /*0x7d60d1*/
      return 1; /*0x7d60d7*/
    if ( _get_lc_time(v0) ) /*0x7d60d9*/
    {
      _free_lc_time(v1); /*0x7d60e4*/
      free(v1); /*0x7d60ea*/
      return 1; /*0x7d60f1*/
    }
    off_87C1E0 = v1; /*0x7d60f9*/
    _free_lc_time((void **)dword_B78504); /*0x7d60ff*/
    free(dword_B78504); /*0x7d610a*/
    dword_B78504 = v1; /*0x7d6110*/
  }
  else
  {
    off_87C1E0 = &off_87C1E8; /*0x7d611f*/
    _free_lc_time((void **)dword_B78504); /*0x7d6129*/
    free(dword_B78504); /*0x7d6134*/
    dword_B78504 = 0; /*0x7d6139*/
  }
  return 0; /*0x7d60d6*/
}
}
// 0x7D6624
namespace gamemd {
AbstractClass * * __init_numeric()
{
  LCID v1; // edi
  int v2; // esi
  int v3; // esi
  int v4; // esi
  char v6; // al
  unsigned char *v7; // eax
  unsigned char *v8; // eax
  char v9; // al

  v1 = (uint16_t)word_B7853A; /*0x7d662f*/
  if ( dword_B782A8 ) /*0x7d6636*/
  {
    v2 = __getlocaleinfo(1, (uint16_t)word_B7853A, 0xEu, (char **)&dword_B78508); /*0x7d6657*/
    v3 = __getlocaleinfo(1, v1, 0xFu, (char **)&dword_B7850C) | v2; /*0x7d6667*/
    v4 = __getlocaleinfo(1, v1, 0x10u, (char **)&dword_B78510) | v3; /*0x7d6674*/
    fix_grouping((char *)dword_B78510); /*0x7d6676*/
    if ( v4 ) /*0x7d6681*/
    {
      free(dword_B78508); /*0x7d6689*/
      free(dword_B7850C); /*0x7d6694*/
      free(dword_B78510); /*0x7d669f*/
      dword_B78508 = 0; /*0x7d66a7*/
      dword_B7850C = 0; /*0x7d66ad*/
      dword_B78510 = 0; /*0x7d66b3*/
      return -1; /*0x7d66bc*/
    }
    if ( *off_87D620 != &unk_87D5E8 ) /*0x7d66cd*/
    {
      free(*off_87D620); /*0x7d66d0*/
      free(off_87D620[1]); /*0x7d66dd*/
      free(off_87D620[2]); /*0x7d66ea*/
    }
    *off_87D620 = dword_B78508; /*0x7d66fd*/
    off_87D620[1] = dword_B7850C; /*0x7d670a*/
    off_87D620[2] = dword_B78510; /*0x7d6718*/
    v6 = *(unsigned char *)*off_87D620; /*0x7d6722*/
    dword_87C7A4 = 1; /*0x7d6724*/
    SrcCh[0] = v6; /*0x7d672a*/
  }
  else
  {
    free(dword_B78508); /*0x7d673a*/
    free(dword_B7850C); /*0x7d6745*/
    free(dword_B78510); /*0x7d6750*/
    dword_B78508 = 0; /*0x7d6757*/
    dword_B7850C = 0; /*0x7d675d*/
    dword_B78510 = 0; /*0x7d6763*/
    *off_87D620 = malloc(2u); /*0x7d6777*/
    if ( !*off_87D620 ) /*0x7d677e*/
      return -1; /*0x7d677e*/
    strcpy((char *)*off_87D620, asc_826598); /*0x7d678e*/
    off_87D620[1] = malloc(2u); /*0x7d67a3*/
    v7 = off_87D620[1]; /*0x7d67ab*/
    if ( !v7 ) /*0x7d67b0*/
      return -1; /*0x7d67b0*/
    *v7 = 0; /*0x7d67b8*/
    off_87D620[2] = malloc(2u); /*0x7d67c6*/
    v8 = off_87D620[2]; /*0x7d67ce*/
    if ( !v8 ) /*0x7d67d3*/
      return -1; /*0x7d67d3*/
    *v8 = 0; /*0x7d67d9*/
    v9 = *(unsigned char *)*off_87D620; /*0x7d67e2*/
    dword_87C7A4 = 1; /*0x7d67e4*/
    SrcCh[0] = v9; /*0x7d67ee*/
  }
  return 0; /*0x7d67f5*/
}
}
// 0x7D6AA2
namespace gamemd {
AbstractClass * * __init_ctype()
{
  int v1; // ebx
  WORD *v2; // edi
  const WCHAR *v3; // eax
  int i; // eax
  BYTE *v5; // eax
  int j; // edx
  int v7; // ecx
  WCHAR *v8; // ecx
  int k; // eax
  char *v10; // edi
  BYTE *v11; // eax
  int v12; // esi
  unsigned short *v13; // ecx
  struct _cpinfo CPInfo; // [esp+4h] [ebp-24h] BYREF
  void *v16; // [esp+18h] [ebp-10h]
  void *v17; // [esp+1Ch] [ebp-Ch]
  LPCWCH lpSrcStr; // [esp+20h] [ebp-8h]
  void *Block; // [esp+24h] [ebp-4h]

  v1 = 0; /*0x7d6aa9*/
  Block = 0; /*0x7d6ab1*/
  lpSrcStr = 0; /*0x7d6ab4*/
  if ( dword_B782A0 ) /*0x7d6ab7*/
  {
    if ( !CodePage && __getlocaleinfo(0, (uint16_t)word_B7852C, 0x1004u, (char **)&CodePage) ) /*0x7d6ada*/
      goto LABEL_38; /*0x7d6ada*/
    v2 = (WORD *)malloc(0x202u); /*0x7d6af5*/
    v16 = v2; /*0x7d6af8*/
    v17 = malloc(0x202u); /*0x7d6b05*/
    Block = malloc(0x101u); /*0x7d6b0e*/
    v3 = (const WCHAR *)malloc(0x202u); /*0x7d6b11*/
    lpSrcStr = v3; /*0x7d6b1b*/
    if ( !v2 ) /*0x7d6b1e*/
      goto LABEL_38; /*0x7d6b1e*/
    if ( !v17 ) /*0x7d6b27*/
      goto LABEL_38; /*0x7d6b27*/
    if ( !Block ) /*0x7d6b30*/
      goto LABEL_38; /*0x7d6b30*/
    if ( !v3 ) /*0x7d6b38*/
      goto LABEL_38; /*0x7d6b38*/
    for ( i = 0; i < 256; ++i ) /*0x7d6b3e*/
      *((unsigned char *)Block + i) = i; /*0x7d6b48*/
    if ( !GetCPInfo(CodePage, &CPInfo) || CPInfo.MaxCharSize > 2 ) /*0x7d6b6c*/
      goto LABEL_38; /*0x7d6b6c*/
    SrcSizeInBytes = IDA_LOWORD(CPInfo.MaxCharSize); /*0x7d6b79*/
    if ( IDA_LOWORD(CPInfo.MaxCharSize) > 1u && CPInfo.LeadByte[0] ) /*0x7d6b83*/
    {
      v5 = &CPInfo.LeadByte[1]; /*0x7d6b85*/
      do /*0x7d6ba7*/
      {
        IDA_LOBYTE(j) = *v5; /*0x7d6b88*/
        if ( !*v5 ) /*0x7d6b88*/
          break; /*0x7d6b8c*/
        v7 = *(v5 - 1); /*0x7d6b8e*/
        for ( j = (uint8_t)j; v7 <= j; j = *v5 ) /*0x7d6b92*/
          *((unsigned char *)Block + v7++) = 0; /*0x7d6b9c*/
        v5 += 2; /*0x7d6ba6*/
      }
      while ( *(v5 - 1) ); /*0x7d6ba7*/
    }
    if ( !__crtGetStringTypeA(1u, (LPCSTR)Block, 256, v2 + 1, 0, 0, 0) ) /*0x7d6bb9*/
      goto LABEL_38; /*0x7d6bb9*/
    v8 = (WCHAR *)lpSrcStr; /*0x7d6bc9*/
    *v2 = 0; /*0x7d6bcc*/
    for ( k = 0; k < 256; ++k ) /*0x7d6bcf*/
      *v8++ = k; /*0x7d6bd1*/
    v10 = (char *)v17 + 2; /*0x7d6be0*/
    if ( __crtGetStringTypeW(1u, lpSrcStr, 256, (LPWORD)v17 + 1, 0, 0) ) /*0x7d6bea*/
    {
      *(unsigned short *)v17 = 0; /*0x7d6bfd*/
      if ( (int)SrcSizeInBytes > 1 && CPInfo.LeadByte[0] ) /*0x7d6c0c*/
      {
        v11 = &CPInfo.LeadByte[1]; /*0x7d6c0e*/
        do /*0x7d6c3a*/
        {
          if ( !*v11 ) /*0x7d6c11*/
            break; /*0x7d6c15*/
          v12 = *(v11 - 1); /*0x7d6c17*/
          if ( v12 <= *v11 ) /*0x7d6c20*/
          {
            v13 = (char *)v16 + 2 * v12 + 2; /*0x7d6c25*/
            do /*0x7d6c36*/
            {
              *v13 = 0x8000; /*0x7d6c29*/
              ++v12; /*0x7d6c2e*/
              ++v13; /*0x7d6c33*/
            }
            while ( v12 <= *v11 ); /*0x7d6c36*/
          }
          v11 += 2; /*0x7d6c39*/
        }
        while ( *(v11 - 1) ); /*0x7d6c3a*/
      }
      off_87C594 = v10; /*0x7d6c42*/
      off_87C590 = (char *)v16 + 2; /*0x7d6c4b*/
      if ( dword_B78518 ) /*0x7d6c57*/
        free(dword_B78518); /*0x7d6c5a*/
      dword_B78518 = v16; /*0x7d6c63*/
      if ( dword_B7851C ) /*0x7d6c6f*/
        free(dword_B7851C); /*0x7d6c72*/
      dword_B7851C = v17; /*0x7d6c7b*/
    }
    else
    {
  LABEL_38:
      free(v16); /*0x7d6c9b*/
      free(v17); /*0x7d6ca3*/
      v1 = 1; /*0x7d6cac*/
    }
    free(Block); /*0x7d6c83*/
    free((void *)lpSrcStr); /*0x7d6c8b*/
    return v1; /*0x7d6c91*/
  }
  else
  {
    off_87C590 = &_ctype[1]; /*0x7d6cba*/
    off_87C594 = &_ctype[1]; /*0x7d6cbf*/
    free(dword_B78518); /*0x7d6cc4*/
    free(dword_B7851C); /*0x7d6ccf*/
    dword_B78518 = 0; /*0x7d6cd5*/
    dword_B7851C = 0; /*0x7d6cdc*/
    return 0; /*0x7d6ce2*/
  }
}
}
// 0x7D6D2A
namespace gamemd {
void __get_qualified_locale(char * a0, CCINIClass * aP1, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6D2A.json)
}
}
// 0x7D6F86
namespace gamemd {
void LangCountryEnumProc_4(LPSTR)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6F86.json)
}
}
// 0x7D71E0
namespace gamemd {
void LanguageEnumProc_4(LPSTR)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D71E0.json)
}
}
// 0x7D72D4
namespace gamemd {
int CountryEnumProc_4(LPSTR)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D72D4.json)
}
}
// 0x7D735A
namespace gamemd {
int GetLcidFromDefault()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D735A.json)
}
}
// 0x7D75E0
namespace gamemd {
void * memset(void * a0, int Val, AbstractClass * aP2)
{
  size_t v3; // edx
  int v4; // eax
  unsigned char *v5; // edi
  int v6; // ecx
  size_t v7; // ecx
  unsigned int v8; // ecx

  v3 = aP2; /*0x7d75e0*/
  if ( !aP2 ) /*0x7d75ea*/
    return a0; /*0x7d7633*/
  IDA_LOBYTE(v4) = Val; /*0x7d75ee*/
  v5 = a0; /*0x7d75f3*/
  if ( aP2 < 4 ) /*0x7d75f8*/
    goto LABEL_13; /*0x7d75f8*/
  v6 = -(int)a0 & 3; /*0x7d75fc*/
  if ( v6 ) /*0x7d75ff*/
  {
    v3 = aP2 - v6; /*0x7d7601*/
    do /*0x7d7607*/
    {
      *v5++ = Val; /*0x7d7603*/
      --v6; /*0x7d7606*/
    }
    while ( v6 ); /*0x7d7607*/
  }
  v4 = 16843009 * (uint8_t)Val; /*0x7d7615*/
  v7 = v3; /*0x7d7617*/
  v3 &= 3u; /*0x7d7619*/
  v8 = v7 >> 2; /*0x7d761c*/
  if ( !v8 || (memset32(v5, v4, v8), v5 += 4 * v8, v3) ) /*0x7d7625*/
  {
  LABEL_13:
    do /*0x7d762b*/
    {
      *v5++ = v4; /*0x7d7627*/
      --v3; /*0x7d762a*/
    }
    while ( v3 ); /*0x7d762b*/
  }
  return a0; /*0x7d7632*/
}
}
// 0x7D77D6
namespace gamemd {
void _wctomb_lk(LPSTR lpMultiByteStr, WCHAR WideCharStr)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D77D6.json)
}
}
// 0x7D7AAF
namespace gamemd {
void _ld12cvt(unsigned short * a1, unsigned int * a2, int * a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7AAF.json)
}
}
// 0x7D7EE0
namespace gamemd {
void unknown_libname_76()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7EE0.json)
}
}
// 0x7D7FF7
namespace gamemd {
int unknown_libname_77()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7FF7.json)
}
}
// 0x7D86E6
namespace gamemd {
void* unknown_libname_90()
{
  unsigned int result; // eax
  int v6; // ecx
  double v7; // st7
  int16_t v8; // fps
  double v9; // st6
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  int16_t v13; // fps

  result = *(unsigned int *)((char *)&a2 + 6) ^ 0x700; /*0x7d86ed*/
  if ( ((*(unsigned int *)((char *)&a2 + 6) ^ 0x700) & 0x700) == 0 ) /*0x7d86f7*/
  {
    result = (result >> 11) & 0xF; /*0x7d8700*/
    if ( byte_87D40C[result] ) /*0x7d8703*/
    {
      result = *(unsigned int *)((unsigned char *)&a2 + 6) & 0x7FFF0000; /*0x7d8714*/
      if ( (*(unsigned int *)((unsigned char *)&a2 + 6) & 0x7FFF0000) != 0x7FFF0000 ) /*0x7d871e*/
      {
        result = *(unsigned int *)((unsigned char *)&a5 + 6) & 0x7FFF0000; /*0x7d8728*/
        if ( (*(unsigned int *)((unsigned char *)&a5 + 6) & 0x7FFF0000) != 0 && result != 2147418112 ) /*0x7d8738*/
        {
          result = 2 * DWORD1(a5); /*0x7d8742*/
          if ( !(2 * DWORD1(a5)) ) /*0x7d8742*/
          {
            result = 2 * DWORD1(a2); /*0x7d874e*/
            if ( !(2 * DWORD1(a2)) ) /*0x7d874e*/
            {
              if ( (IDA_WORD4(a5) & 0x7FFFu) > (IDA_WORD4(a2) & 0x7FFFu) + 63 ) /*0x7d876e*/
              {
                v6 = ((IDA_BYTE8(a5) - IDA_BYTE8(a2)) & 0x3F | 0x20) + 1; /*0x7d8811*/
                v7 = fabs(*(long double *)&a2); /*0x7d8830*/
                v9 = fabs(*(long double *)&a5); /*0x7d8836*/
                do /*0x7d8852*/
                {
                  v10 = v9 < v7; /*0x7d8838*/
                  v11 = 0; /*0x7d8838*/
                  v12 = v9 == v7; /*0x7d8838*/
                  result = v8 & 0x100; /*0x7d883c*/
                  if ( (v8 & 0x100) == 0 ) /*0x7d8841*/
                    v9 = v9 - v7; /*0x7d8843*/
                  v7 = v7 * dbl_87D43C; /*0x7d884d*/
                  --v6; /*0x7d884f*/
                }
                while ( v6 ); /*0x7d8852*/
              }
              else
              {
                while ( 1 ) /*0x7d8779*/
                {
                  result = (IDA_WORD4(a2) & 0x7FFF) + 10; /*0x7d8779*/
                  if ( (int)((IDA_WORD4(a5) & 0x7FFF) - result) < 0 ) /*0x7d8788*/
                    break; /*0x7d8788*/
                  *(double *)&a5 = __FPREM__(*(long double *)&a5, *(long double *)&a2); /*0x7d87c6*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (a1 & 3) != 0 ) /*0x7d8890*/
  {
    __asm { fnstenv [esp+28h+var_28] } /*0x7d88d3*/
    __asm { fldenv [esp+28h+var_28] }
    return v13 & 0x4300; /*0x7d88cb*/
  }
  return result; /*0x7d88e9*/
}
}
// 0x7D88EC
namespace gamemd {
void* unknown_libname_91()
{
  int result; // eax
  char v3; // dl
  unsigned char v4[20]; // [esp+0h] [ebp-34h]
  int v5; // [esp+14h] [ebp-20h]
  __int128 v6; // [esp+18h] [ebp-1Ch]

  *(double *)&v6 = a1; /*0x7d88f0*/
  *(double *)v4 = a2; /*0x7d88f4*/
  if ( (*(unsigned int *)&v4[6] & 0x7FFF0000) != 0 ) /*0x7d8902*/
    return unknown_libname_90(0, *(__int128 *)v4, *(int *)&v4[16], v5, v6); /*0x7d8904*/
  result = *(unsigned int *)&v4[4] | *(unsigned int *)v4; /*0x7d8918*/
  if ( a2 != 0.0 ) /*0x7d891c*/
  {
    *(double *)&v4[12] = a2; /*0x7d8920*/
    v3 = 2; /*0x7d8929*/
    if ( (IDA_WORD4(v6) & 0x7FFFu) <= 0x7FBE ) /*0x7d894f*/
    {
      v3 = 3; /*0x7d8951*/
      *(double *)&v6 = a1 * dbl_87D424; /*0x7d895a*/
    }
    *(double *)v4 = a2 * dbl_87D424; /*0x7d8964*/
    return unknown_libname_90(v3, *(__int128 *)v4, IDA_HIDWORD(*(uint64_t *)&a2), v5, v6); /*0x7d898d*/
  }
  return result; /*0x7d890d*/
}
}
// 0x7D899E
namespace gamemd {
void* unknown_libname_92()
{
  unsigned int result; // eax
  int v6; // ecx
  double v7; // st7
  int16_t v8; // fps
  double v9; // st6
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  int16_t v13; // fps

  result = *(unsigned int *)((char *)&a2 + 6) ^ 0x700; /*0x7d89a5*/
  if ( ((*(unsigned int *)((char *)&a2 + 6) ^ 0x700) & 0x700) == 0 ) /*0x7d89af*/
  {
    result = (result >> 11) & 0xF; /*0x7d89b8*/
    if ( byte_87D40C[result] ) /*0x7d89bb*/
    {
      result = *(unsigned int *)((unsigned char *)&a2 + 6) & 0x7FFF0000; /*0x7d89cc*/
      if ( (*(unsigned int *)((unsigned char *)&a2 + 6) & 0x7FFF0000) != 0x7FFF0000 ) /*0x7d89d6*/
      {
        result = *(unsigned int *)((unsigned char *)&a5 + 6) & 0x7FFF0000; /*0x7d89e0*/
        if ( (*(unsigned int *)((unsigned char *)&a5 + 6) & 0x7FFF0000) != 0 && result != 2147418112 ) /*0x7d89f0*/
        {
          result = 2 * DWORD1(a5); /*0x7d89fa*/
          if ( !(2 * DWORD1(a5)) ) /*0x7d89fa*/
          {
            result = 2 * DWORD1(a2); /*0x7d8a06*/
            if ( !(2 * DWORD1(a2)) ) /*0x7d8a06*/
            {
              if ( (IDA_WORD4(a5) & 0x7FFFu) > (IDA_WORD4(a2) & 0x7FFFu) + 63 ) /*0x7d8a26*/
              {
                v6 = ((IDA_BYTE8(a5) - IDA_BYTE8(a2)) & 0x3F | 0x20) + 1; /*0x7d8ac9*/
                v7 = fabs(*(long double *)&a2); /*0x7d8ae8*/
                v9 = fabs(*(long double *)&a5); /*0x7d8aee*/
                do /*0x7d8b0a*/
                {
                  v10 = v9 < v7; /*0x7d8af0*/
                  v11 = 0; /*0x7d8af0*/
                  v12 = v9 == v7; /*0x7d8af0*/
                  result = v8 & 0x100; /*0x7d8af4*/
                  if ( (v8 & 0x100) == 0 ) /*0x7d8af9*/
                    v9 = v9 - v7; /*0x7d8afb*/
                  v7 = v7 * dbl_87D43C; /*0x7d8b05*/
                  --v6; /*0x7d8b07*/
                }
                while ( v6 ); /*0x7d8b0a*/
              }
              else
              {
                while ( 1 ) /*0x7d8a31*/
                {
                  result = (IDA_WORD4(a2) & 0x7FFF) + 10; /*0x7d8a31*/
                  if ( (int)((IDA_WORD4(a5) & 0x7FFF) - result) < 0 ) /*0x7d8a40*/
                    break; /*0x7d8a40*/
                  *(double *)&a5 = __FPREM__(*(long double *)&a5, *(long double *)&a2); /*0x7d8a7e*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (a1 & 3) != 0 ) /*0x7d8b48*/
  {
    __asm { fnstenv [esp+28h+var_28] } /*0x7d8b8b*/
    __asm { fldenv [esp+28h+var_28] }
    return v13 & 0x4300; /*0x7d8b83*/
  }
  return result; /*0x7d8ba1*/
}
}
// 0x7D8BA4
namespace gamemd {
void* unknown_libname_93()
{
  int result; // eax
  char v3; // dl
  unsigned char v4[20]; // [esp+0h] [ebp-34h]
  int v5; // [esp+14h] [ebp-20h]
  __int128 v6; // [esp+18h] [ebp-1Ch]

  *(double *)&v6 = a1; /*0x7d8ba8*/
  *(double *)v4 = a2; /*0x7d8bac*/
  if ( (*(unsigned int *)&v4[6] & 0x7FFF0000) != 0 ) /*0x7d8bbd*/
    return unknown_libname_92(0, *(__int128 *)v4, *(int *)&v4[16], v5, v6); /*0x7d8bbf*/
  result = *(unsigned int *)&v4[4] | *(unsigned int *)v4; /*0x7d8bd3*/
  if ( a2 != 0.0 ) /*0x7d8bd7*/
  {
    *(double *)&v4[12] = a2; /*0x7d8bdb*/
    v3 = 2; /*0x7d8be4*/
    if ( (IDA_WORD4(v6) & 0x7FFFu) <= 0x7FBE ) /*0x7d8c0a*/
    {
      v3 = 3; /*0x7d8c0c*/
      *(double *)&v6 = a1 * dbl_87D424; /*0x7d8c15*/
    }
    *(double *)v4 = a2 * dbl_87D424; /*0x7d8c1f*/
    return unknown_libname_92(v3, *(__int128 *)v4, IDA_HIDWORD(*(uint64_t *)&a2), v5, v6); /*0x7d8c48*/
  }
  return result; /*0x7d8bc8*/
}
}
// 0x7D8C6B
namespace gamemd {
void _87except(int a1, int a2, unsigned short * a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8C6B.json)
}
}
// 0x7D8E22
namespace gamemd {
void __decomp()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8E22.json)
}
}
// 0x7D8EE3
namespace gamemd {
void _frnd(double a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8EE3.json)
}
// 0x7D9038
namespace gamemd {
double _nextafter(double X, double Y)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9038.json)
}
}
}
// 0x7D93A1
namespace gamemd {
void _alloc_osfhnd()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D93A1.json)
}
}
// 0x7D9729
namespace gamemd {
void __crtGetStringTypeA(DWORD dwInfoType, CCINIClass * aP1, int cchSrc, LPWORD lpCharType, UINT CodePage, LCID Locale, int a7)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9729.json)
}
}
// 0x7D9872
namespace gamemd {
ControlClass * * __strgtold12(int a1, char ** a2, char * a3, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  char v9; // cl
  char v10; // bl
  unsigned char *v12; // eax
  unsigned char *v14; // eax
  int v15; // eax
  char *v16; // ecx
  char *v17; // edi
  int v18; // esi
  int v19; // eax
  bool v21; // zf
  unsigned char *v22; // eax
  int v23; // eax
  int v24; // eax
  char *v25; // ebx
  unsigned int v26; // esi
  int16_t v27; // ax
  int16_t v28; // dx
  int16_t v29; // ax
  int v31; // [esp-4h] [ebp-6Ch]
  int v32; // [esp-4h] [ebp-6Ch]
  unsigned char v33[23]; // [esp+Ch] [ebp-5Ch] BYREF
  char v34; // [esp+23h] [ebp-45h]
  unsigned short v35[3]; // [esp+28h] [ebp-40h] BYREF
  unsigned int v36; // [esp+2Eh] [ebp-3Ah]
  int v37; // [esp+32h] [ebp-36h]
  int v38; // [esp+38h] [ebp-30h]
  int v39; // [esp+3Ch] [ebp-2Ch]
  int v40; // [esp+40h] [ebp-28h]
  int v41; // [esp+44h] [ebp-24h]
  int v42; // [esp+48h] [ebp-20h]
  int v43; // [esp+4Ch] [ebp-1Ch]
  int v44; // [esp+50h] [ebp-18h]
  int v45; // [esp+54h] [ebp-14h]
  int v46; // [esp+58h] [ebp-10h]
  int v48; // [esp+60h] [ebp-8h]
  unsigned int v49; // [esp+64h] [ebp-4h]

  a3 = a3; /*0x7d987b*/
  v33 = v33; /*0x7d9883*/
  v8 = 0; /*0x7d9886*/
  v40 = 0; /*0x7d9889*/
  v44 = 1; /*0x7d988c*/
  v49 = 0; /*0x7d988f*/
  v46 = 0; /*0x7d9892*/
  v41 = 0; /*0x7d9895*/
  v42 = 0; /*0x7d9898*/
  v39 = 0; /*0x7d989b*/
  v38 = 0; /*0x7d989e*/
  v43 = 0; /*0x7d98a1*/
  v48 = 0; /*0x7d98a4*/
  v45 = 0; /*0x7d98a7*/
  while ( 1 ) /*0x7d98ad*/
  {
    v9 = *a3; /*0x7d98ad*/
    if ( *a3 != 32 && v9 != 9 && v9 != 10 && v9 != 13 ) /*0x7d98c1*/
      break; /*0x7d98c1*/
    ++a3; /*0x7d98c3*/
  }
  while ( 2 )
  {
    v10 = *a3++; /*0x7d98c9*/
    switch ( v8 )
    {
      case 0:
        if ( v10 >= 49 && v10 <= 57 ) /*0x7d98e4*/
          goto LABEL_10; /*0x7d98e4*/
        if ( v10 == SrcCh[0] ) /*0x7d98f3*/
          goto LABEL_12; /*0x7d98f3*/
        if ( v10 == 43 ) /*0x7d9902*/
        {
          v40 = 0; /*0x7d9922*/
          v8 = 2; /*0x7d9928*/
          continue; /*0x7d9929*/
        }
        if ( v10 == 45 ) /*0x7d9906*/
        {
          v40 = 0x8000; /*0x7d9918*/
          v8 = 2; /*0x7d991f*/
          continue; /*0x7d9920*/
        }
        if ( v10 != 48 ) /*0x7d990b*/
          goto LABEL_106; /*0x7d990b*/
        goto LABEL_35; /*0x7d990b*/
      case 1:
        v46 = 1; /*0x7d992e*/
        if ( v10 >= 49 && v10 <= 57 ) /*0x7d9936*/
          goto LABEL_10; /*0x7d9936*/
        if ( v10 == SrcCh[0] ) /*0x7d993e*/
          goto LABEL_46; /*0x7d993e*/
        if ( v10 == 43 || v10 == 45 ) /*0x7d994c*/
          goto LABEL_30; /*0x7d994c*/
        if ( v10 != 48 ) /*0x7d9951*/
          goto LABEL_25; /*0x7d9951*/
        goto LABEL_35; /*0x7d9951*/
      case 2:
        if ( v10 >= 49 && v10 <= 57 ) /*0x7d998a*/
        {
  LABEL_10:
          v31 = 3; /*0x7d98e6*/
  LABEL_80:
          v8 = v31; /*0x7d9b0a*/
  LABEL_81:
          --a3; /*0x7d9b0b*/
        }
        else
        {
          if ( v10 == SrcCh[0] ) /*0x7d9996*/
          {
  LABEL_12:
            v32 = 5; /*0x7d98f5*/
            goto LABEL_89; /*0x7d98f7*/
          }
          if ( v10 != 48 ) /*0x7d999f*/
          {
  LABEL_91:
            v17 = a3; /*0x7d9b5a*/
            goto LABEL_108; /*0x7d9b5d*/
          }
  LABEL_35:
          v8 = 1; /*0x7d99a5*/
        }
        continue; /*0x7d99a7*/
      case 3:
        v46 = 1; /*0x7d99ac*/
        while ( (int)SrcSizeInBytes <= 1
              ? *((unsigned char *)off_87C590 + 2 * (uint8_t)v10) & 4
              : _isctype((uint8_t)v10, 4) )
        {
          if ( v49 >= 0x19 ) /*0x7d99de*/
          {
            ++v48; /*0x7d99f0*/
          }
          else
          {
            v12 = v33; /*0x7d99e0*/
            ++v49; /*0x7d99e3*/
            ++v33; /*0x7d99e9*/
            *v12 = v10 - 48; /*0x7d99ec*/
          }
          v10 = *a3++; /*0x7d99f3*/
        }
        if ( v10 != SrcCh[0] ) /*0x7d99fe*/
          goto LABEL_57; /*0x7d99fe*/
  LABEL_46:
        v8 = 4; /*0x7d9a00*/
        continue; /*0x7d9a02*/
      case 4:
        v46 = 1; /*0x7d9a0b*/
        v41 = 1; /*0x7d9a0e*/
        if ( !v49 ) /*0x7d9a11*/
        {
          while ( v10 == 48 ) /*0x7d9a16*/
          {
            --v48; /*0x7d9a18*/
            v10 = *a3++; /*0x7d9a1b*/
          }
        }
        while ( (int)SrcSizeInBytes <= 1
              ? *((unsigned char *)off_87C590 + 2 * (uint8_t)v10) & 4
              : _isctype((uint8_t)v10, 4) )
        {
          if ( v49 < 0x19 ) /*0x7d9a4f*/
          {
            v14 = v33; /*0x7d9a51*/
            ++v49; /*0x7d9a54*/
            ++v33; /*0x7d9a5a*/
            --v48; /*0x7d9a5d*/
            *v14 = v10 - 48; /*0x7d9a60*/
          }
          v10 = *a3++; /*0x7d9a62*/
        }
  LABEL_57:
        if ( v10 == 43 || v10 == 45 ) /*0x7d9a73*/
        {
  LABEL_30:
          --a3; /*0x7d997a*/
          v32 = 11; /*0x7d997b*/
        }
        else
        {
  LABEL_25:
          if ( v10 <= 67 || v10 > 69 && (v10 <= 99 || v10 > 101) ) /*0x7d996d*/
          {
  LABEL_106:
            v17 = a3 - 1; /*0x7d9be5*/
            goto LABEL_108; /*0x7d9be6*/
          }
          v32 = 6; /*0x7d9973*/
        }
        goto LABEL_89; /*0x7d9975*/
      case 5:
        v41 = 1; /*0x7d9a84*/
        if ( (int)SrcSizeInBytes <= 1 ) /*0x7d9a87*/
          v15 = *((unsigned char *)off_87C590 + 2 * (uint8_t)v10) & 4; /*0x7d9aa6*/
        else
          v15 = _isctype((uint8_t)v10, 4); /*0x7d9a8e*/
        if ( !v15 ) /*0x7d9aaa*/
          goto LABEL_91; /*0x7d9aaa*/
        v8 = 4; /*0x7d9ab0*/
        goto LABEL_81; /*0x7d9ab2*/
      case 6:
        v16 = a3 - 2; /*0x7d9ab4*/
        a3 = a3 - 2; /*0x7d9aba*/
        if ( v10 >= 49 && v10 <= 57 ) /*0x7d9ac2*/
          goto LABEL_79; /*0x7d9ac2*/
        if ( v10 == 43 ) /*0x7d9aca*/
          goto LABEL_88; /*0x7d9aca*/
        if ( v10 == 45 ) /*0x7d9ace*/
          goto LABEL_87; /*0x7d9ace*/
        if ( v10 != 48 ) /*0x7d9ad3*/
          goto LABEL_107; /*0x7d9ad3*/
  LABEL_70:
        v32 = 8; /*0x7d9ad9*/
        goto LABEL_89; /*0x7d9adb*/
      case 7:
        if ( v10 >= 49 && v10 <= 57 ) /*0x7d9b06*/
          goto LABEL_79; /*0x7d9b06*/
        if ( v10 == 48 ) /*0x7d9b14*/
          goto LABEL_70; /*0x7d9b14*/
        goto LABEL_91; /*0x7d9b14*/
      case 8:
        v42 = 1; /*0x7d9add*/
        while ( v10 == 48 ) /*0x7d9ae3*/
          v10 = *a3++; /*0x7d9ae5*/
        if ( v10 < 49 || v10 > 57 ) /*0x7d9af6*/
          goto LABEL_106; /*0x7d9af6*/
  LABEL_79:
        v31 = 9; /*0x7d9b08*/
        goto LABEL_80; /*0x7d9b08*/
      case 9:
        v42 = 1; /*0x7d9b62*/
        v18 = 0; /*0x7d9b69*/
        while ( 2 ) /*0x7d9b72*/
        {
          if ( (int)SrcSizeInBytes <= 1 ) /*0x7d9b72*/
            v19 = *((unsigned char *)off_87C590 + 2 * (uint8_t)v10) & 4; /*0x7d9b8f*/
          else
            v19 = _isctype((uint8_t)v10, 4); /*0x7d9b7a*/
          if ( v19 ) /*0x7d9b94*/
          {
            v18 = v10 + 10 * v18 - 48; /*0x7d9b9c*/
            if ( v18 <= 5200 ) /*0x7d9ba6*/
            {
              v10 = *a3++; /*0x7d9ba8*/
              continue; /*0x7d9bab*/
            }
            v18 = 5201; /*0x7d9bad*/
          }
          break;
        }
        v43 = v18; /*0x7d9bb2*/
        while ( (int)SrcSizeInBytes <= 1
              ? *((unsigned char *)off_87C590 + 2 * (uint8_t)v10) & 4
              : _isctype((uint8_t)v10, 4) )
          v10 = *a3++; /*0x7d9be0*/
        goto LABEL_106; /*0x7d9bde*/
      case 11:
        if ( !a7 ) /*0x7d9b1c*/
        {
          v17 = a3 - 1; /*0x7d9b4a*/
          goto LABEL_108; /*0x7d9b4f*/
        }
        v16 = a3 - 1; /*0x7d9b21*/
        a3 = a3 - 1; /*0x7d9b27*/
        if ( v10 == 43 ) /*0x7d9b2a*/
        {
  LABEL_88:
          v32 = 7; /*0x7d9b40*/
  LABEL_89:
          v8 = v32; /*0x7d9b42*/
          continue; /*0x7d9b43*/
        }
        if ( v10 == 45 ) /*0x7d9b2e*/
        {
  LABEL_87:
          v44 = -1; /*0x7d9b34*/
          v8 = 7; /*0x7d9b3a*/
          continue; /*0x7d9b3b*/
        }
  LABEL_107:
        v17 = v16; /*0x7d9be8*/
  LABEL_108:
        v21 = v46 == 0; /*0x7d9bea*/
        *v17 = v17; /*0x7d9bf1*/
        if ( v21 ) /*0x7d9bf3*/
        {
          v28 = 0; /*0x7d9cd2*/
          v27 = 0; /*0x7d9cd4*/
          v26 = 0; /*0x7d9cd6*/
          v25 = 0; /*0x7d9cd8*/
          v45 = 4; /*0x7d9cda*/
        }
        else
        {
          if ( v49 <= 0x18 ) /*0x7d9bff*/
          {
            v22 = v33; /*0x7d9c16*/
          }
          else
          {
            if ( v34 >= 5 ) /*0x7d9c05*/
              ++v34; /*0x7d9c07*/
            v49 = 24; /*0x7d9c0a*/
            v22 = v33 - 1; /*0x7d9c10*/
            ++v48; /*0x7d9c11*/
          }
          if ( v49 ) /*0x7d9c1d*/
          {
            while ( !*--v22 ) /*0x7d9c23*/
            {
              --v49; /*0x7d9c29*/
              ++v48; /*0x7d9c2c*/
            }
            __mtold12(v33, v49, v35); /*0x7d9c3c*/
            v23 = v43; /*0x7d9c41*/
            if ( v44 < 0 ) /*0x7d9c4c*/
              v23 = -v43; /*0x7d9c4e*/
            v24 = v48 + v23; /*0x7d9c50*/
            if ( !v42 ) /*0x7d9c56*/
              v24 += a5; /*0x7d9c58*/
            if ( !v41 ) /*0x7d9c5e*/
              v24 -= a6; /*0x7d9c60*/
            if ( v24 > 5200 ) /*0x7d9c68*/
            {
              v39 = 1; /*0x7d9c6a*/
              goto LABEL_125; /*0x7d9c6a*/
            }
            if ( v24 >= -5200 ) /*0x7d9c9f*/
            {
              __multtenpow12(v35, v24, a4); /*0x7d9cb2*/
              v28 = v35[0]; /*0x7d9cb7*/
              v25 = *(char **)&v35[1]; /*0x7d9cba*/
              v26 = v36; /*0x7d9cbd*/
              v27 = v37; /*0x7d9cc0*/
            }
            else
            {
              v38 = 1; /*0x7d9ca1*/
  LABEL_125:
              v25 = a3; /*0x7d9c71*/
              v26 = (unsigned int)a3; /*0x7d9c74*/
              v27 = (int16_t)a3; /*0x7d9c77*/
              v28 = (int16_t)a3; /*0x7d9c7a*/
            }
          }
          else
          {
            v28 = 0; /*0x7d9cc8*/
            v27 = 0; /*0x7d9cca*/
            v26 = 0; /*0x7d9ccc*/
            v25 = 0; /*0x7d9cce*/
          }
          if ( v39 ) /*0x7d9c81*/
          {
            v25 = 0; /*0x7d9c83*/
            v27 = 0x7FFF; /*0x7d9c85*/
            v26 = 0x80000000; /*0x7d9c8a*/
            v28 = 0; /*0x7d9c8f*/
            v45 = 2; /*0x7d9c91*/
          }
          else if ( v38 ) /*0x7d9ce7*/
          {
            v28 = 0; /*0x7d9ce9*/
            v27 = 0; /*0x7d9ceb*/
            v26 = 0; /*0x7d9ced*/
            v25 = 0; /*0x7d9cef*/
            v45 = 1; /*0x7d9cf1*/
          }
        }
        v29 = v40 | v27; /*0x7d9cfb*/
        v28->nextArrayIndex = v26; /*0x7d9cff*/
        v28->vtable3 = v25; /*0x7d9d02*/
        v28->q028 = v29; /*0x7d9d05*/
        v45 = v45; /*0x7d9d09*/
        *(unsigned short *)v28 = v28; /*0x7d9d0d*/
    }
  }
}
}
// 0x7D9DDC
namespace gamemd {
int _mbtowc_lk(LPWSTR lpWideCharStr, unsigned char * lpMultiByteStr, unsigned int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9DDC.json)
}
}
// 0x7D9FAC
namespace gamemd {
void * sub_7D9FAC()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9FAC.json)
}
}
// 0x7D9FCA
namespace gamemd {
void _flswbuf(unsigned short Buf, FILE * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9FCA.json)
}
}
// 0x7DA0F1
namespace gamemd {
void __crtGetStringTypeW(DWORD dwInfoType, CCINIClass * aP1, int cchSrc, CCINIClass * aP3, UINT CodePage, LCID Locale)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA0F1.json)
}
}
// 0x7DA2B6
namespace gamemd {
ControlClass * * __crtLCMapStringW(CampaignScore * aP0, CampaignScore * aP1, CampaignScore * aP2, int cchSrc, CampaignScore * aP4, CampaignScore * aP5, CampaignScore * aP6)
{
  int v8; // eax
  int v9; // eax
  void *v10; // esp
  int v11; // eax
  int v12; // edi
  int v13; // eax
  void *v14; // esp
  size_t v15; // eax
  int v16; // eax
  CHAR v17[12]; // [esp+0h] [ebp-38h] BYREF
  int v18; // [esp+Ch] [ebp-2Ch]
  CHAR *v19; // [esp+14h] [ebp-24h]
  int cbMultiByte; // [esp+18h] [ebp-20h]
  LPSTR lpMultiByteStr; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  if ( !dword_B78574 ) /*0x7da2e4*/
  {
    if ( LCMapStringW(0, 0x100u, &String1, 1, 0, 0) ) /*0x7da2f8*/
    {
      dword_B78574 = 1; /*0x7da302*/
    }
    else
    {
      if ( !LCMapStringA(0, 0x100u, byte_7F98E4, 1, 0, 0) ) /*0x7da31c*/
        return 0; /*0x7da31c*/
      dword_B78574 = 2; /*0x7da322*/
    }
  }
  if ( cchSrc > 0 ) /*0x7da32f*/
    cchSrc = wcsncnt_0(aP2, cchSrc); /*0x7da33e*/
  if ( dword_B78574 == 1 ) /*0x7da349*/
    return LCMapStringW(aP0, aP1, aP2, cchSrc, aP4, aP5); /*0x7da363*/
  if ( dword_B78574 == 2 ) /*0x7da36b*/
  {
    if ( !aP6 ) /*0x7da374*/
      aP6 = ::aP6; /*0x7da37b*/
    v8 = WideCharToMultiByte(aP6, 0x220u, aP2, cchSrc, 0, 0, 0, 0); /*0x7da390*/
    cbMultiByte = v8; /*0x7da396*/
    if ( v8 ) /*0x7da39b*/
    {
      v9 = v8 + 3; /*0x7da3a4*/
      IDA_LOBYTE(v9) = v9 & 0xFC; /*0x7da3a7*/
      v10 = alloca(v9); /*0x7da3a9*/
      ms_exc.old_esp = (DWORD)v17; /*0x7da3ae*/
      lpMultiByteStr = v17; /*0x7da3b3*/
      ms_exc.registration.TryLevel = -1; /*0x7da3c4*/
      if ( v17 ) /*0x7da3cb*/
      {
        if ( WideCharToMultiByte(aP6, 0x220u, aP2, cchSrc, lpMultiByteStr, cbMultiByte, 0, 0) ) /*0x7da3e7*/
        {
          v11 = LCMapStringA(aP0, aP1, lpMultiByteStr, cbMultiByte, 0, 0); /*0x7da403*/
          v12 = v11; /*0x7da409*/
          v18 = v11; /*0x7da40b*/
          if ( v11 ) /*0x7da410*/
          {
            v13 = v11 + 3; /*0x7da41d*/
            IDA_LOBYTE(v13) = v13 & 0xFC; /*0x7da420*/
            v14 = alloca(v13); /*0x7da422*/
            ms_exc.old_esp = (DWORD)v17; /*0x7da427*/
            v19 = v17; /*0x7da42c*/
            ms_exc.registration.TryLevel = -1; /*0x7da42f*/
            if ( v17 ) /*0x7da449*/
            {
              if ( LCMapStringA(aP0, aP1, lpMultiByteStr, cbMultiByte, v17, v12) ) /*0x7da459*/
              {
                if ( (aP1 & 0x400) != 0 ) /*0x7da467*/
                {
                  v15 = aP5; /*0x7da469*/
                  if ( aP5 ) /*0x7da46e*/
                  {
                    if ( aP5 >= v12 ) /*0x7da472*/
                      v15 = v12; /*0x7da474*/
                    strncpy((char *)aP4, v17, v15); /*0x7da47b*/
                  }
                  return v12; /*0x7da483*/
                }
                if ( aP5 ) /*0x7da488*/
                  v16 = MultiByteToWideChar(aP6, 1u, v17, v12, aP4, aP5); /*0x7da49b*/
                else
                  v16 = MultiByteToWideChar(aP6, 1u, v17, v12, 0, 0); /*0x7da48c*/
                v12 = v16; /*0x7da4a1*/
                if ( v16 ) /*0x7da4a5*/
                  return v12; /*0x7da4a9*/
              }
            }
          }
        }
      }
    }
  }
  return 0; /*0x7da4b0*/
}
}
// 0x7DA512
namespace gamemd {
void _getwc_lk(FILE * File)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA512.json)
}
}
// 0x7DA638
namespace gamemd {
void _ungetwc_lk(wchar_t MbCh, unsigned int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA638.json)
}
}
// 0x7DA725
namespace gamemd {
void __crtCompareStringA(LCID Locale, DWORD dwCmpFlags, CHAR * lpString1, int cchCount1, CHAR * lpString2, int cchCount2, UINT CodePage)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA725.json)
}
}
// 0x7DA9CD
namespace gamemd {
AbstractClass * * __crtsetenv(char * Str, int a2)
{
  uint8_t *v2; // eax
  uint8_t *v3; // esi
  void *v4; // eax
  BOOL v5; // ebx
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  unsigned int *v9; // edi
  int v10; // eax
  int v11; // esi
  unsigned int *v12; // edi
  void *v13; // eax
  int v14; // eax
  char *v15; // eax
  CHAR *v16; // esi
  uint8_t *v17; // eax
  void *v18; // [esp-4h] [ebp-18h]
  uint8_t *v19; // [esp+Ch] [ebp-8h]
  void *Block; // [esp+10h] [ebp-4h]

  if ( !Str ) /*0x7da9da*/
    return -1; /*0x7da9da*/
  v2 = _mbschr((const uint8_t *)Str, 0x3Du); /*0x7da9e1*/
  v3 = v2; /*0x7da9e6*/
  v19 = v2; /*0x7da9ec*/
  if ( !v2 || Str == (char *)v2 ) /*0x7da9f4*/
    return -1; /*0x7da9f4*/
  v4 = dword_B781E4; /*0x7da9f6*/
  v5 = v3[1] == 0; /*0x7daa00*/
  if ( dword_B781E4 == (void *)dword_B781E8 ) /*0x7daa09*/
  {
    v4 = (void *)copy_environ(dword_B781E4); /*0x7daa0c*/
    dword_B781E4 = v4; /*0x7daa12*/
  }
  if ( !v4 ) /*0x7daa19*/
  {
    if ( a2 && dword_B781EC ) /*0x7daa26*/
    {
      if ( __wtomb_environ() ) /*0x7daa28*/
        return -1; /*0x7daa38*/
    }
    else
    {
      if ( v5 ) /*0x7daa3b*/
        return 0; /*0x7daa3b*/
      v7 = malloc(4u); /*0x7daa43*/
      dword_B781E4 = v7; /*0x7daa4b*/
      if ( !v7 ) /*0x7daa50*/
        return -1; /*0x7daa50*/
      *v7 = 0; /*0x7daa52*/
      if ( !dword_B781EC ) /*0x7daa5a*/
      {
        v8 = malloc(4u); /*0x7daa5e*/
        dword_B781EC = (int)v8; /*0x7daa66*/
        if ( !v8 ) /*0x7daa6b*/
          return -1; /*0x7daa6b*/
        *v8 = 0; /*0x7daa6d*/
      }
    }
  }
  v9 = dword_B781E4; /*0x7daa72*/
  Block = dword_B781E4; /*0x7daa78*/
  v10 = findenv((uint8_t *)Str, v3 - (uint8_t *)Str); /*0x7daa7f*/
  v11 = v10; /*0x7daa84*/
  if ( v10 >= 0 && *v9 )
  {
    if ( !v5 ) /*0x7daa93*/
    {
      v9[v10] = Str; /*0x7daaca*/
      goto LABEL_31; /*0x7daacd*/
    }
    v18 = (void *)v9[v10]; /*0x7daa95*/
    v12 = &v9[v10]; /*0x7daa98*/
    free(v18); /*0x7daa9b*/
    while ( *v12 ) /*0x7daaa4*/
    {
      ++v11; /*0x7daaa9*/
      *v12 = v12[1]; /*0x7daaaa*/
      ++v12; /*0x7daaac*/
    }
    v13 = realloc(Block, 4 * v11); /*0x7daaba*/
    if ( !v13 )
    {
  LABEL_31:
      if ( a2 )
      {
        v14 = strlen(Str); /*0x7dab0a*/
        v15 = (char *)malloc(v14 + 2); /*0x7dab12*/
        v16 = v15; /*0x7dab17*/
        if ( v15 )
        {
          strcpy(v15, Str); /*0x7dab23*/
          v17 = &v19[v16 - Str]; /*0x7dab2f*/
          *v17 = 0; /*0x7dab32*/
          SetEnvironmentVariableA(v16, !v5 ? (LPCSTR)v17 + 1 : 0);
          free(v16); /*0x7dab47*/
        }
      }
      return 0; /*0x7dab47*/
    }
  LABEL_30:
    dword_B781E4 = v13; /*0x7daafc*/
    goto LABEL_31; /*0x7daafc*/
  }
  if ( !v5 ) /*0x7daad1*/
  {
    if ( v10 < 0 ) /*0x7daad5*/
      v11 = -v10; /*0x7daad7*/
    v13 = realloc(v9, 4 * v11 + 8); /*0x7daae2*/
    if ( !v13 ) /*0x7daaeb*/
      return -1; /*0x7daaeb*/
    *((unsigned int *)v13 + v11) = Str; /*0x7daaf4*/
    *((unsigned int *)v13 + v11 + 1) = 0; /*0x7daaf7*/
    goto LABEL_30; /*0x7daaf7*/
  }
  return 0; /*0x7daa34*/
}
}
// 0x7DAC6C
namespace gamemd {
void _chsize_lk(int FileHandle, LONG lDistanceToMove)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAC6C.json)
}
}
// 0x7DAE6E
namespace gamemd {
void isctype_CRT(unsigned char a1, int a2, unsigned char a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAE6E.json)
}
}
// 0x7DAE9F
namespace gamemd {
void __crtMessageBoxA(int a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAE9F.json)
}
}
// 0x7DAF28
namespace gamemd {
void __getlocaleinfo(int a1, LCID Locale, LCTYPE LCType, CCINIClass * aP3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAF28.json)
}
}
// 0x7DB207
namespace gamemd {
AbstractClass * * _I10_OUTPUT(long long a1, int a2, int a3, char a4, int a5)
{
  int v5; // ebx
  int16_t v6; // cx
  uint16_t v7; // dx
  int v8; // edi
  int v9; // esi
  bool v10; // zf
  int v11; // edi
  int v12; // esi
  int i; // esi
  int v14; // eax
  char v15; // al
  unsigned char *v16; // ecx
  char v17; // cl
  unsigned char *v18; // eax
  bool v19; // cc
  unsigned char *v20; // ecx
  char v21; // al
  unsigned char v23[12]; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned char v24[12]; // [esp+18h] [ebp-10h] BYREF
  int v25; // [esp+24h] [ebp-4h]
  int v26; // [esp+44h] [ebp+1Ch]

  v5 = v26; /*0x7db211*/
  v6 = a3 & 0x8000; /*0x7db21c*/
  memset(v23, 204, 10); /*0x7db228*/
  v23[10] = -5; /*0x7db250*/
  v23[11] = 63; /*0x7db254*/
  v25 = 1; /*0x7db258*/
  v7 = a3 & 0x7FFF; /*0x7db25f*/
  if ( (a3 & 0x8000u) == 0 ) /*0x7db261*/
    *(unsigned char *)(v26 + 2) = 32; /*0x7db269*/
  else
    *(unsigned char *)(v26 + 2) = 45; /*0x7db263*/
  v8 = a2; /*0x7db26d*/
  if ( !v7 && !a2 && !a1 ) /*0x7db27c*/
    goto LABEL_7; /*0x7db27c*/
  if ( v7 == 0x7FFF ) /*0x7db296*/
  {
    *(unsigned short *)v5 = 1; /*0x7db29d*/
    if ( (v8 != 0x80000000 || a1) && (v8 & 0x40000000) == 0 ) /*0x7db2b2*/
    {
      strcpy((char *)(v5 + 4), "1#SNAN"); /*0x7db2b9*/
  LABEL_23:
      v5->vtable4 = 6; /*0x7db30a*/
      return 0; /*0x7db310*/
    }
    if ( v6 && v8 == -1073741824 ) /*0x7db2c6*/
    {
      if ( !a1 ) /*0x7db2cc*/
      {
        strcpy((char *)(v5 + 4), "1#IND"); /*0x7db2d3*/
  LABEL_20:
        v5->vtable4 = 5; /*0x7db2ed*/
        return 0; /*0x7db2f7*/
      }
    }
    else if ( v8 == 0x80000000 && !a1 ) /*0x7db2dd*/
    {
      strcpy((char *)(v5 + 4), "1#INF"); /*0x7db2e8*/
      goto LABEL_20; /*0x7db2e8*/
    }
    strcpy((char *)(v5 + 4), "1#QNAN"); /*0x7db305*/
    goto LABEL_23; /*0x7db305*/
  }
  *(unsigned short *)v24 = 0; /*0x7db325*/
  *(unsigned short *)&v24[10] = v7; /*0x7db32f*/
  v9 = (int)(77 * (IDA_HIBYTE(v7) + 2 * IDA_HIBYTE(a2)) + 19728 * v7 - 323162868) >> 16; /*0x7db343*/
  *(unsigned long long *)&v24[2] = IDA___PAIR64__(a2, (unsigned int)a1); /*0x7db346*/
  __multtenpow12(v24, -(int16_t)v9, 1); /*0x7db353*/
  if ( *(unsigned short *)&v24[10] >= 0x3FFFu ) /*0x7db361*/
  {
    IDA_LOWORD(v9) = v9 + 1; /*0x7db366*/
    __ld12mul((int)v24, (int)v23); /*0x7db36c*/
  }
  v10 = (a5 & 1) == 0; /*0x7db373*/
  *(unsigned short *)v5 = v9; /*0x7db377*/
  if ( v10 ) /*0x7db37a*/
  {
    v11 = a4; /*0x7db38d*/
    goto LABEL_30; /*0x7db38d*/
  }
  v11 = (int16_t)v9 + a4; /*0x7db382*/
  if ( v11 > 0 ) /*0x7db386*/
  {
  LABEL_30:
    if ( v11 > 21 ) /*0x7db393*/
      v11 = 21; /*0x7db397*/
    v12 = *(uint16_t *)&v24[10] - 16382; /*0x7db39c*/
    *(unsigned short *)&v24[10] = 0; /*0x7db3a2*/
    v26 = 8; /*0x7db3a7*/
    do /*0x7db3bb*/
    {
      __shl_12((unsigned int *)v24); /*0x7db3b2*/
      --v26; /*0x7db3b7*/
    }
    while ( v26 ); /*0x7db3bb*/
    if ( v12 < 0 ) /*0x7db3bf*/
    {
      for ( i = (uint8_t)-(char)v12; i; --i ) /*0x7db3c9*/
        __shr_12((int *)v24); /*0x7db3cf*/
    }
    v14 = v5 + 4; /*0x7db3db*/
    v26 = v5 + 4; /*0x7db3e0*/
    if ( v11 + 1 > 0 ) /*0x7db3e3*/
    {
      *(unsigned int *)&a4 = v11 + 1; /*0x7db3e5*/
      do /*0x7db430*/
      {
        a1 = *(ObjectClass **)v24; /*0x7db3ee*/
        __SET_PAIR__(a3, a2, *(unsigned long long *)&v24[4]); /*0x7db3f4*/
        __shl_12((unsigned int *)v24); /*0x7db3f5*/
        __shl_12((unsigned int *)v24); /*0x7db3fe*/
        __add_12((unsigned int *)v24, (unsigned int *)&a1); /*0x7db40b*/
        __shl_12((unsigned int *)v24); /*0x7db414*/
        v15 = v24[11]; /*0x7db419*/
        v16 = (unsigned char *)v26; /*0x7db41c*/
        v24[11] = 0; /*0x7db41f*/
        ++v26; /*0x7db428*/
        v10 = a4 == 1; /*0x7db42b*/
        *(unsigned int *)&a4 = a4 - 1; /*0x7db42b*/
        *v16 = v15 + 48; /*0x7db42e*/
      }
      while ( !v10 ); /*0x7db430*/
      v14 = v26; /*0x7db432*/
    }
    v17 = *(unsigned char *)(v14 - 1); /*0x7db435*/
    v18 = (unsigned char *)(v14 - 2); /*0x7db439*/
    v19 = v17 < 53; /*0x7db43a*/
    v20 = (unsigned char *)(v5 + 4); /*0x7db43d*/
    if ( v19 ) /*0x7db440*/
    {
      while ( v18 >= v20 ) /*0x7db474*/
      {
        if ( *v18 != 48 ) /*0x7db479*/
        {
          if ( v18 >= v20 ) /*0x7db480*/
            goto LABEL_48; /*0x7db480*/
          break; /*0x7db480*/
        }
        --v18; /*0x7db47b*/
      }
      *(unsigned short *)v5 = 0; /*0x7db482*/
      v5->vtable3 = 32; /*0x7db486*/
      v5->vtable4 = 1; /*0x7db48a*/
      *v20 = 48; /*0x7db48e*/
      goto LABEL_55; /*0x7db48e*/
    }
    while ( v18 >= v20 ) /*0x7db444*/
    {
      if ( *v18 != 57 ) /*0x7db449*/
      {
        if ( v18 >= v20 ) /*0x7db453*/
          goto LABEL_47; /*0x7db453*/
        break; /*0x7db453*/
      }
      *v18-- = 48; /*0x7db44b*/
    }
    ++v18; /*0x7db455*/
    ++*(unsigned short *)v5; /*0x7db456*/
  LABEL_47:
    ++*v18; /*0x7db459*/
  LABEL_48:
    v21 = (unsigned char)v18 - v5 - 3; /*0x7db45b*/
    v5->vtable4 = v21; /*0x7db45f*/
    *(unsigned char *)(v21 + v5 + 4) = 0; /*0x7db465*/
    return v25; /*0x7db471*/
  }
  LABEL_7:
  *(unsigned short *)v5 = 0; /*0x7db27e*/
  v5->vtable3 = 32; /*0x7db282*/
  v5->vtable4 = 1; /*0x7db286*/
  v5->vtable2 = 48; /*0x7db28a*/
  LABEL_55:
  v5->abstractFlags = 0; /*0x7db491*/
  return 1; /*0x7db46d*/
}
}
// 0x7DB68B
namespace gamemd {
void _raise_exc(ULONG_PTR Arguments, unsigned int * a2, DWORD dwExceptionCode, short a4, double * a5, double * a6)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB68B.json)
}
}
// 0x7DB93E
namespace gamemd {
void _handle_exc(char a1, double * a2, short a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB93E.json)
}
}
// 0x7DBC68
namespace gamemd {
void* __clrfp()
{
  __asm { fnclex } /*0x7dbc6f*/
  return a1; /*0x7dbc75*/
}
}
// 0x7DBCF0
namespace gamemd {
void ldexp(double X, int Y)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBCF0.json)
}
}
// 0x7DBED6
namespace gamemd {
void __ld12mul(int a1, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBED6.json)
}
}
// 0x7DC291
namespace gamemd {
void _filwbuf(unsigned short ** a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC291.json)
}
}
// 0x7DC378
namespace gamemd {
unsigned char * _mbschr(const unsigned char * Str, unsigned int C)
{
  const uint8_t *i; // esi
  uint16_t v4; // bx
  uint8_t v5; // al

  if ( !dword_B7885C ) /*0x7dc384*/
    return (uint8_t *)strchr((const char *)Str, C); /*0x7dc38c*/
  _lock(25); /*0x7dc397*/
  for ( i = Str; ; ++i ) /*0x7dc39c*/
  {
    v4 = *i; /*0x7dc3a0*/
    if ( !*i ) /*0x7dc3a0*/
      break; /*0x7dc3a0*/
    if ( (byte_B78961[(uint8_t)v4] & 4) != 0 ) /*0x7dc3b3*/
    {
      v5 = *++i; /*0x7dc3b5*/
      if ( !v5 ) /*0x7dc3bb*/
      {
        _unlock(25); /*0x7dc3dc*/
        return 0; /*0x7dc3e4*/
      }
      if ( C == (v5 | (v4 << 8)) ) /*0x7dc3cb*/
      {
        _unlock(25); /*0x7dc3e8*/
        return (uint8_t *)(i - 1); /*0x7dc3f1*/
      }
    }
    else if ( C == *i ) /*0x7dc3d5*/
    {
      break; /*0x7dc3d5*/
    }
  }
  _unlock(25); /*0x7dc3f3*/
  return v4 == C ? (uint8_t *)i : 0;
}
}
// 0x7DC468
namespace gamemd {
void _setmode_lk(int a1, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC468.json)
}
}
// 0x7DC4C9
namespace gamemd {
void __crtGetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData, UINT CodePage)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC4C9.json)
}
}
// 0x7DC5DC
namespace gamemd {
void __crtGetLocaleInfoA(LCID Locale, LCTYPE LCType, CCINIClass * aP2, int cchData, UINT CodePage)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC5DC.json)
}
}
// 0x7DC7CB
namespace gamemd {
void HandleErrorCOM(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * pperrinfo, LPCWSTR lpString, int a7, void ** a8)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC7CB.json)
}
}
// 0x7DCE0E
namespace gamemd {
unsigned int * _com_error::sub_7DCE0E(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DCE0E.json)
}
}
// 0x7DCE3B
namespace gamemd {
HLOCAL _com_error::sub_7DCE3B()
{
    return nullptr;
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DCE3B.json)
}
}
// 0x7DCFC4
namespace gamemd {
void * _strupr(char * String)
{
  char *result; // eax
  char *j; // edx
  char v3; // cl
  char *i; // edx
  char v5; // cl
  size_t v6; // eax
  int v7; // ebx
  CHAR *v8; // eax
  char *Block; // [esp+8h] [ebp-8h]
  int v10; // [esp+Ch] [ebp-4h]

  Block = 0; /*0x7dcfd3*/
  if ( dword_B782A0 ) /*0x7dcfd6*/
  {
    InterlockedIncrement(&dword_B78BA4); /*0x7dd008*/
    if ( dword_B78BA0 ) /*0x7dd014*/
    {
      InterlockedDecrement(&dword_B78BA4); /*0x7dd017*/
      _lock(19); /*0x7dd01f*/
      v10 = 1; /*0x7dd025*/
    }
    else
    {
      v10 = 0; /*0x7dd02e*/
    }
    if ( dword_B782A0 ) /*0x7dd038*/
    {
      v6 = __crtLCMapStringA(dword_B782A0, 0x200u, String, -1, 0, 0, 0, 1); /*0x7dd089*/
      v7 = v6; /*0x7dd08e*/
      if ( v6 ) /*0x7dd095*/
      {
        v8 = (CHAR *)malloc(v6); /*0x7dd098*/
        Block = v8; /*0x7dd0a0*/
        if ( v8 ) /*0x7dd0a3*/
        {
          if ( __crtLCMapStringA(dword_B782A0, 0x200u, String, -1, v8, v7, 0, 1) ) /*0x7dd0b7*/
            strcpy(String, Block); /*0x7dd0c9*/
        }
      }
      if ( v10 ) /*0x7dd0d5*/
        _unlock(19); /*0x7dd0d9*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7dd0e2*/
      free(Block); /*0x7dd0eb*/
      return String; /*0x7dd0f0*/
    }
    else
    {
      if ( v10 ) /*0x7dd03d*/
        _unlock(19); /*0x7dd041*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7dd04a*/
      result = String; /*0x7dd050*/
      for ( i = String; *i; ++i ) /*0x7dd055*/
      {
        v5 = *i; /*0x7dd05e*/
        if ( *i >= 97 && v5 <= 122 ) /*0x7dd068*/
          *i = v5 - 32; /*0x7dd06d*/
      }
    }
  }
  else
  {
    result = String; /*0x7dcfd8*/
    for ( j = String; *j; ++j ) /*0x7dcfdd*/
    {
      v3 = *j; /*0x7dcfe6*/
      if ( *j >= 97 && v3 <= 122 ) /*0x7dcff0*/
        *j = v3 - 32; /*0x7dcff5*/
    }
  }
  return result; /*0x7dd0f4*/
}
}
// 0x7DD20F
namespace gamemd {
int _getch()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD20F.json)
}
}
// 0x7DD505
namespace gamemd {
void output(char * a1, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD505.json)
}
}
// 0x7DDCD6
namespace gamemd {
BlowStraw * * _wcsupr(CampaignScore * aP0)
{
  wchar_t *result; // eax
  wchar_t *j; // ecx
  wchar_t v3; // dx
  wchar_t *i; // ecx
  wchar_t v5; // dx
  int v6; // edi
  WCHAR *v7; // eax
  wchar_t *Block; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]

  Block = 0; /*0x7ddce5*/
  if ( dword_B782A0 ) /*0x7ddce8*/
  {
    InterlockedIncrement(&dword_B78BA4); /*0x7ddd1f*/
    if ( dword_B78BA0 ) /*0x7ddd2b*/
    {
      InterlockedDecrement(&dword_B78BA4); /*0x7ddd2e*/
      _lock(19); /*0x7ddd36*/
      v9 = 1; /*0x7ddd3c*/
    }
    else
    {
      v9 = 0; /*0x7ddd45*/
    }
    if ( dword_B782A0 ) /*0x7ddd4f*/
    {
      v6 = __crtLCMapStringW(dword_B782A0, 0x200u, aP0, -1, 0, 0, 0); /*0x7ddda8*/
      if ( v6 ) /*0x7dddaf*/
      {
        v7 = (WCHAR *)malloc(2 * v6); /*0x7dddb5*/
        Block = v7; /*0x7dddbd*/
        if ( v7 ) /*0x7dddc0*/
        {
          if ( __crtLCMapStringW(dword_B782A0, 0x200u, aP0, -1, v7, v6, 0) ) /*0x7dddd2*/
            wcscpy(aP0, Block); /*0x7ddde4*/
        }
      }
      if ( v9 ) /*0x7dddf0*/
        _unlock(19); /*0x7dddf4*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7dddfd*/
      free(Block); /*0x7dde06*/
      return aP0; /*0x7dde0b*/
    }
    else
    {
      if ( v9 ) /*0x7ddd54*/
        _unlock(19); /*0x7ddd58*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7ddd61*/
      result = aP0; /*0x7ddd67*/
      for ( i = aP0; *i; ++i ) /*0x7ddd6c*/
      {
        v5 = *i; /*0x7ddd75*/
        if ( *i >= 0x61u && v5 <= 0x7Au ) /*0x7ddd82*/
          *i = v5 - 32; /*0x7ddd87*/
      }
    }
  }
  else
  {
    result = aP0; /*0x7ddcea*/
    for ( j = aP0; *j; ++j ) /*0x7ddcef*/
    {
      v3 = *j; /*0x7ddcf8*/
      if ( *j >= 0x61u && v3 <= 0x7Au ) /*0x7ddd05*/
        *j = v3 - 32; /*0x7ddd0a*/
    }
  }
  return result; /*0x7dde0f*/
}
}
// 0x7DE200
namespace gamemd {
unsigned int  __spoils<ecx> ConvertRGB24to556(int a1, unsigned short * a2, __m64, __m64, int a5)
{
  unsigned short *v5; // edi
  uint8_t *v6; // esi
  unsigned char *v7; // edx
  int v8; // ebx
  unsigned int v9; // kr00_4
  uint8_t *v10; // esi
  unsigned char *v11; // edx
  unsigned short *v12; // edi
  unsigned int *v13; // esi
  unsigned char *v14; // edx
  unsigned short *v15; // edi
  __m64 v16; // mm1
  __m64 v17; // mm0
  __m64 v18; // mm2
  __m64 v19; // mm2
  __m64 v20; // mm0
  int v21; // eax
  int v22; // eax
  unsigned int result; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // eax
  int v29; // ebx
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  bool v34; // zf
  int v35; // eax
  int v36; // [esp+4h] [ebp-8h]
  int v37; // [esp+4h] [ebp-8h]
  int v38; // [esp+4h] [ebp-8h]

  if ( byte_84E862 )
  {
    v38 = 255; /*0x7de267*/
    v13 = (unsigned int *)(a1 + 3); /*0x7de277*/
    v14 = (unsigned char *)(a5 + 1); /*0x7de27a*/
    v15 = a2 - 1; /*0x7de27b*/
    v16 = _m_packssdw(_m_psradi(a3, 4u), _m_psradi(a4, 4u)); /*0x7de28e*/
    v17.m64_u64 = 0; /*0x7de291*/
    v18 = _m_punpckhwd(v16, v16); /*0x7de297*/
    v19 = _m_punpckhwd(v18, v18); /*0x7de29a*/
    do /*0x7de37c*/
    {
      while ( 1 ) /*0x7de2c0*/
      {
        ++v15; /*0x7de2c0*/
        v20 = _m_packuswb(v17, v17); /*0x7de2c3*/
        if ( !*v14 ) /*0x7de2c6*/
          break; /*0x7de2c6*/
        v21 = _mm_cvtsi64_si32(v20); /*0x7de2cb*/
        v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v16); /*0x7de2f6*/
        v13 = (unsigned int *)((char *)v13 + 3); /*0x7de2fb*/
        ++v14; /*0x7de300*/
        *v15 = ((v21 & 0xF80000u) >> 19) | ((uint16_t)(v21 & 0xFC00) >> 5) | ((v21 & 0xF8) << 8); /*0x7de301*/
        if ( !--v38 ) /*0x7de307*/
          goto LABEL_8; /*0x7de307*/
      }
      v24 = _mm_cvtsi64_si32(v20); /*0x7de340*/
      v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v19); /*0x7de36b*/
      v13 = (unsigned int *)((char *)v13 + 3); /*0x7de370*/
      ++v14; /*0x7de375*/
      *v15 = ((v24 & 0xF80000u) >> 19) | ((uint16_t)(v24 & 0xFC00) >> 5) | ((v24 & 0xF8) << 8); /*0x7de376*/
      --v38; /*0x7de379*/
    }
    while ( v38 ); /*0x7de37c*/
  LABEL_8:
    v22 = _mm_cvtsi64_si32(_m_packuswb(v17, v17)); /*0x7de309*/
    result = ((v22 & 0xF80000u) >> 19) | ((uint16_t)(v22 & 0xFC00) >> 5) | ((v22 & 0xF8) << 8); /*0x7de332*/
    v15[1] = result; /*0x7de334*/
    _m_empty(); /*0x7de337*/
  }
  else if ( byte_84E860 )
  {
    v9 = __readeflags(); /*0x7de23d*/
    v37 = 255; /*0x7de23f*/
    v10 = (uint8_t *)(a1 + 3); /*0x7de256*/
    v11 = (unsigned char *)(a5 + 1); /*0x7de259*/
    *a2 = 0; /*0x7de25a*/
    v12 = a2 + 1; /*0x7de25f*/
    do /*0x7de420*/
    {
      v25 = *v10; /*0x7de3c3*/
      v26 = v10[1]; /*0x7de3c6*/
      v27 = v10[2]; /*0x7de3ca*/
      if ( *v11 ) /*0x7de3c0*/
      {
        v28 = a3.m64_i32[0] * v25; /*0x7de3d0*/
        v29 = a3.m64_i32[1] * v26; /*0x7de3d4*/
        v30 = a4.m64_i32[0] * v27; /*0x7de3d8*/
      }
      else
      {
        v28 = a4.m64_i32[1] * v25; /*0x7de42a*/
        v29 = a4.m64_i32[1] * v26; /*0x7de42e*/
        v30 = a4.m64_i32[1] * v27; /*0x7de432*/
      }
      v10 += 3; /*0x7de3dc*/
      if ( (v28 & 0xFF000000) != 0 ) /*0x7de3e4*/
        v28 = 16711680; /*0x7de3e4*/
      if ( (v29 & 0xFF000000) != 0 ) /*0x7de3ee*/
        v29 = 16711680; /*0x7de3ee*/
      if ( (v30 & 0xFF000000) != 0 ) /*0x7de3f8*/
        v30 = 16711680; /*0x7de3f8*/
      ++v11; /*0x7de418*/
      result = ((v30 & 0xF80000u) >> 19) | ((v29 & 0xFC0000u) >> 13) | ((v28 & 0xF80000u) >> 8); /*0x7de419*/
      *v12++ = result; /*0x7de41b*/
      --v37; /*0x7de41d*/
    }
    while ( v37 ); /*0x7de420*/
    __writeeflags(v9); /*0x7de422*/
  }
  else
  {
    v36 = 255; /*0x7de21d*/
    v5 = a2; /*0x7de227*/
    v6 = (uint8_t *)(a1 + 3); /*0x7de22d*/
    v7 = (unsigned char *)(a5 + 1); /*0x7de230*/
    *a2 = 0; /*0x7de231*/
    v8 = 0; /*0x7de236*/
    do
    {
      while ( 1 )
      {
        IDA_LOBYTE(v8) = v6[1]; /*0x7de442*/
        v31 = 0; /*0x7de445*/
        v32 = *v6; /*0x7de447*/
        if ( !*v7 ) /*0x7de449*/
          break; /*0x7de449*/
        IDA_LOBYTE(v31) = v6[2]; /*0x7de44e*/
        ++v7; /*0x7de451*/
        v6 += 3; /*0x7de461*/
        v33 = (8 /*0x7de4aa*/
             * (((uint8_t)(((unsigned int)(a3.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
               | (uint8_t)((unsigned int)(a3.m64_i32[1] * v8) >> 16))
              & 0xFC))
            | ((((uint8_t)(((unsigned int)(a3.m64_i32[0] * v32) >> 16 <= 0xFF) - 1)
               | (uint8_t)((unsigned int)(a3.m64_i32[0] * v32) >> 16))
              & 0xF8) << 8);
        ++v5; /*0x7de4ac*/
        v8 = 0; /*0x7de4af*/
        result = ((uint8_t)(((unsigned int)(a4.m64_i32[0] * v31) >> 16 <= 0xFF
                                   ? (uint8_t)((unsigned int)(a4.m64_i32[0] * v31) >> 16)
                                   : -1)
                                  & 0xF8) >> 3)
               | v33;
        v34 = v36-- == 1; /*0x7de4b3*/
        *v5 = result; /*0x7de4b6*/
        if ( v34 ) /*0x7de4b9*/
          return result; /*0x7de4b9*/
      }
      IDA_LOBYTE(v31) = v6[2]; /*0x7de4c2*/
      ++v7; /*0x7de4c5*/
      v6 += 3; /*0x7de4d5*/
      v35 = (8 /*0x7de51e*/
           * (((uint8_t)(((unsigned int)(a4.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
             | (uint8_t)((unsigned int)(a4.m64_i32[1] * v8) >> 16))
            & 0xFC))
          | ((((uint8_t)(((unsigned int)(a4.m64_i32[1] * v32) >> 16 <= 0xFF) - 1)
             | (uint8_t)((unsigned int)(a4.m64_i32[1] * v32) >> 16))
            & 0xF8) << 8);
      ++v5; /*0x7de520*/
      v8 = 0; /*0x7de523*/
      result = ((uint8_t)(((unsigned int)(a4.m64_i32[1] * v31) >> 16 <= 0xFF
                                 ? (uint8_t)((unsigned int)(a4.m64_i32[1] * v31) >> 16)
                                 : -1)
                                & 0xF8) >> 3)
             | v35;
      v34 = v36-- == 1; /*0x7de527*/
      *v5 = result; /*0x7de52a*/
    }
    while ( !v34 );
  }
  return result; /*0x7de33d*/
}
}
// 0x7DE53A
namespace gamemd {
unsigned int  __spoils<ecx> ConvertRGB24toRGB565(int a1, unsigned short * a2, __m64, __m64, int a5)
{
  unsigned short *v5; // edi
  uint8_t *v6; // esi
  unsigned char *v7; // edx
  int v8; // ebx
  unsigned int v9; // kr00_4
  uint8_t *v10; // esi
  unsigned char *v11; // edx
  unsigned short *v12; // edi
  unsigned int *v13; // esi
  unsigned char *v14; // edx
  unsigned short *v15; // edi
  __m64 v16; // mm1
  __m64 v17; // mm0
  __m64 v18; // mm2
  __m64 v19; // mm2
  __m64 v20; // mm0
  int v21; // eax
  int v22; // eax
  unsigned int result; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // eax
  int v29; // ebx
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  bool v34; // zf
  int v35; // eax
  int v36; // [esp+4h] [ebp-8h]
  int v37; // [esp+4h] [ebp-8h]
  int v38; // [esp+4h] [ebp-8h]

  if ( byte_84E862 )
  {
    v38 = 255; /*0x7de5a1*/
    v13 = (unsigned int *)(a1 + 3); /*0x7de5b1*/
    v14 = (unsigned char *)(a5 + 1); /*0x7de5b4*/
    v15 = a2 - 1; /*0x7de5b5*/
    v16 = _m_packssdw(_m_psradi(a3, 4u), _m_psradi(a4, 4u)); /*0x7de5c8*/
    v17.m64_u64 = 0; /*0x7de5cb*/
    v18 = _m_punpckhwd(v16, v16); /*0x7de5d1*/
    v19 = _m_punpckhwd(v18, v18); /*0x7de5d4*/
    do /*0x7de6bc*/
    {
      while ( 1 ) /*0x7de600*/
      {
        ++v15; /*0x7de600*/
        v20 = _m_packuswb(v17, v17); /*0x7de603*/
        if ( !*v14 ) /*0x7de606*/
          break; /*0x7de606*/
        v21 = _mm_cvtsi64_si32(v20); /*0x7de60b*/
        v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v16); /*0x7de636*/
        v13 = (unsigned int *)((char *)v13 + 3); /*0x7de63b*/
        ++v14; /*0x7de640*/
        *v15 = ((v21 & 0xF80000u) >> 19) | ((uint16_t)(v21 & 0xF800) >> 6) | ((v21 & 0xF8) << 7); /*0x7de641*/
        if ( !--v38 ) /*0x7de647*/
          goto LABEL_8; /*0x7de647*/
      }
      v24 = _mm_cvtsi64_si32(v20); /*0x7de680*/
      v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v19); /*0x7de6ab*/
      v13 = (unsigned int *)((char *)v13 + 3); /*0x7de6b0*/
      ++v14; /*0x7de6b5*/
      *v15 = ((v24 & 0xF80000u) >> 19) | ((uint16_t)(v24 & 0xF800) >> 6) | ((v24 & 0xF8) << 7); /*0x7de6b6*/
      --v38; /*0x7de6b9*/
    }
    while ( v38 ); /*0x7de6bc*/
  LABEL_8:
    v22 = _mm_cvtsi64_si32(_m_packuswb(v17, v17)); /*0x7de649*/
    result = ((v22 & 0xF80000u) >> 19) | ((uint16_t)(v22 & 0xF800) >> 6) | ((v22 & 0xF8) << 7); /*0x7de672*/
    v15[1] = result; /*0x7de674*/
    _m_empty(); /*0x7de677*/
  }
  else if ( byte_84E860 )
  {
    v9 = __readeflags(); /*0x7de577*/
    v37 = 255; /*0x7de579*/
    v10 = (uint8_t *)(a1 + 3); /*0x7de590*/
    v11 = (unsigned char *)(a5 + 1); /*0x7de593*/
    *a2 = 0; /*0x7de594*/
    v12 = a2 + 1; /*0x7de599*/
    do /*0x7de760*/
    {
      v25 = *v10; /*0x7de703*/
      v26 = v10[1]; /*0x7de706*/
      v27 = v10[2]; /*0x7de70a*/
      if ( *v11 ) /*0x7de700*/
      {
        v28 = a3.m64_i32[0] * v25; /*0x7de710*/
        v29 = a3.m64_i32[1] * v26; /*0x7de714*/
        v30 = a4.m64_i32[0] * v27; /*0x7de718*/
      }
      else
      {
        v28 = a4.m64_i32[1] * v25; /*0x7de76a*/
        v29 = a4.m64_i32[1] * v26; /*0x7de76e*/
        v30 = a4.m64_i32[1] * v27; /*0x7de772*/
      }
      v10 += 3; /*0x7de71c*/
      if ( (v28 & 0xFF000000) != 0 ) /*0x7de724*/
        v28 = 16711680; /*0x7de724*/
      if ( (v29 & 0xFF000000) != 0 ) /*0x7de72e*/
        v29 = 16711680; /*0x7de72e*/
      if ( (v30 & 0xFF000000) != 0 ) /*0x7de738*/
        v30 = 16711680; /*0x7de738*/
      ++v11; /*0x7de758*/
      result = ((v30 & 0xF80000u) >> 19) | ((v29 & 0xF80000u) >> 14) | ((v28 & 0xF80000u) >> 9); /*0x7de759*/
      *v12++ = result; /*0x7de75b*/
      --v37; /*0x7de75d*/
    }
    while ( v37 ); /*0x7de760*/
    __writeeflags(v9); /*0x7de762*/
  }
  else
  {
    v36 = 255; /*0x7de557*/
    v5 = a2; /*0x7de561*/
    v6 = (uint8_t *)(a1 + 3); /*0x7de567*/
    v7 = (unsigned char *)(a5 + 1); /*0x7de56a*/
    *a2 = 0; /*0x7de56b*/
    v8 = 0; /*0x7de570*/
    do
    {
      while ( 1 )
      {
        IDA_LOBYTE(v8) = v6[1]; /*0x7de782*/
        v31 = 0; /*0x7de785*/
        v32 = *v6; /*0x7de787*/
        if ( !*v7 ) /*0x7de789*/
          break; /*0x7de789*/
        IDA_LOBYTE(v31) = v6[2]; /*0x7de78e*/
        ++v7; /*0x7de791*/
        v6 += 3; /*0x7de7a1*/
        v33 = (4 /*0x7de7ea*/
             * (((uint8_t)(((unsigned int)(a3.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
               | (uint8_t)((unsigned int)(a3.m64_i32[1] * v8) >> 16))
              & 0xF8))
            | ((((uint8_t)(((unsigned int)(a3.m64_i32[0] * v32) >> 16 <= 0xFF) - 1)
               | (uint8_t)((unsigned int)(a3.m64_i32[0] * v32) >> 16))
              & 0xF8) << 7);
        ++v5; /*0x7de7ec*/
        v8 = 0; /*0x7de7ef*/
        result = ((uint8_t)(((unsigned int)(a4.m64_i32[0] * v31) >> 16 <= 0xFF
                                   ? (uint8_t)((unsigned int)(a4.m64_i32[0] * v31) >> 16)
                                   : -1)
                                  & 0xF8) >> 3)
               | v33;
        v34 = v36-- == 1; /*0x7de7f3*/
        *v5 = result; /*0x7de7f6*/
        if ( v34 ) /*0x7de7f9*/
          return result; /*0x7de7f9*/
      }
      IDA_LOBYTE(v31) = v6[2]; /*0x7de802*/
      ++v7; /*0x7de805*/
      v6 += 3; /*0x7de815*/
      v35 = (4 /*0x7de85e*/
           * (((uint8_t)(((unsigned int)(a4.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
             | (uint8_t)((unsigned int)(a4.m64_i32[1] * v8) >> 16))
            & 0xF8))
          | ((((uint8_t)(((unsigned int)(a4.m64_i32[1] * v32) >> 16 <= 0xFF) - 1)
             | (uint8_t)((unsigned int)(a4.m64_i32[1] * v32) >> 16))
            & 0xF8) << 7);
      ++v5; /*0x7de860*/
      v8 = 0; /*0x7de863*/
      result = ((uint8_t)(((unsigned int)(a4.m64_i32[1] * v31) >> 16 <= 0xFF
                                 ? (uint8_t)((unsigned int)(a4.m64_i32[1] * v31) >> 16)
                                 : -1)
                                & 0xF8) >> 3)
             | v35;
      v34 = v36-- == 1; /*0x7de867*/
      *v5 = result; /*0x7de86a*/
    }
    while ( !v34 );
  }
  return result; /*0x7de67d*/
}
}
// 0x7DE87A
namespace gamemd {
unsigned int  __spoils<ecx> ConvertRGB24to655(int a1, unsigned short * a2, __m64, __m64, int a5)
{
  unsigned short *v5; // edi
  uint8_t *v6; // esi
  unsigned char *v7; // edx
  int v8; // ebx
  unsigned int v9; // kr00_4
  uint8_t *v10; // esi
  unsigned char *v11; // edx
  unsigned short *v12; // edi
  unsigned int *v13; // esi
  unsigned char *v14; // edx
  unsigned short *v15; // edi
  __m64 v16; // mm1
  __m64 v17; // mm0
  __m64 v18; // mm2
  __m64 v19; // mm2
  __m64 v20; // mm0
  int v21; // eax
  int v22; // eax
  unsigned int result; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // eax
  int v29; // ebx
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  bool v34; // zf
  int v35; // eax
  int v36; // [esp+4h] [ebp-8h]
  int v37; // [esp+4h] [ebp-8h]
  int v38; // [esp+4h] [ebp-8h]

  if ( byte_84E862 )
  {
    v38 = 255; /*0x7de8e1*/
    v13 = (unsigned int *)(a1 + 3); /*0x7de8f1*/
    v14 = (unsigned char *)(a5 + 1); /*0x7de8f4*/
    v15 = a2 - 1; /*0x7de8f5*/
    v16 = _m_packssdw(_m_psradi(a3, 4u), _m_psradi(a4, 4u)); /*0x7de908*/
    v17.m64_u64 = 0; /*0x7de90b*/
    v18 = _m_punpckhwd(v16, v16); /*0x7de911*/
    v19 = _m_punpckhwd(v18, v18); /*0x7de914*/
    do /*0x7de9fc*/
    {
      while ( 1 ) /*0x7de940*/
      {
        ++v15; /*0x7de940*/
        v20 = _m_packuswb(v17, v17); /*0x7de943*/
        if ( !*v14 ) /*0x7de946*/
          break; /*0x7de946*/
        v21 = _mm_cvtsi64_si32(v20); /*0x7de94b*/
        v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v16); /*0x7de976*/
        v13 = (unsigned int *)((char *)v13 + 3); /*0x7de97b*/
        ++v14; /*0x7de980*/
        *v15 = ((v21 & 0xFC0000u) >> 18) | ((uint16_t)(v21 & 0xF800) >> 5) | ((v21 & 0xF8) << 8); /*0x7de981*/
        if ( !--v38 ) /*0x7de987*/
          goto LABEL_8; /*0x7de987*/
      }
      v24 = _mm_cvtsi64_si32(v20); /*0x7de9c0*/
      v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v19); /*0x7de9eb*/
      v13 = (unsigned int *)((char *)v13 + 3); /*0x7de9f0*/
      ++v14; /*0x7de9f5*/
      *v15 = ((v24 & 0xFC0000u) >> 18) | ((uint16_t)(v24 & 0xF800) >> 5) | ((v24 & 0xF8) << 8); /*0x7de9f6*/
      --v38; /*0x7de9f9*/
    }
    while ( v38 ); /*0x7de9fc*/
  LABEL_8:
    v22 = _mm_cvtsi64_si32(_m_packuswb(v17, v17)); /*0x7de989*/
    result = ((v22 & 0xFC0000u) >> 18) | ((uint16_t)(v22 & 0xF800) >> 5) | ((v22 & 0xF8) << 8); /*0x7de9b2*/
    v15[1] = result; /*0x7de9b4*/
    _m_empty(); /*0x7de9b7*/
  }
  else if ( byte_84E860 )
  {
    v9 = __readeflags(); /*0x7de8b7*/
    v37 = 255; /*0x7de8b9*/
    v10 = (uint8_t *)(a1 + 3); /*0x7de8d0*/
    v11 = (unsigned char *)(a5 + 1); /*0x7de8d3*/
    *a2 = 0; /*0x7de8d4*/
    v12 = a2 + 1; /*0x7de8d9*/
    do /*0x7deaa0*/
    {
      v25 = *v10; /*0x7dea43*/
      v26 = v10[1]; /*0x7dea46*/
      v27 = v10[2]; /*0x7dea4a*/
      if ( *v11 ) /*0x7dea40*/
      {
        v28 = a3.m64_i32[0] * v25; /*0x7dea50*/
        v29 = a3.m64_i32[1] * v26; /*0x7dea54*/
        v30 = a4.m64_i32[0] * v27; /*0x7dea58*/
      }
      else
      {
        v28 = a4.m64_i32[1] * v25; /*0x7deaaa*/
        v29 = a4.m64_i32[1] * v26; /*0x7deaae*/
        v30 = a4.m64_i32[1] * v27; /*0x7deab2*/
      }
      v10 += 3; /*0x7dea5c*/
      if ( (v28 & 0xFF000000) != 0 ) /*0x7dea64*/
        v28 = 16711680; /*0x7dea64*/
      if ( (v29 & 0xFF000000) != 0 ) /*0x7dea6e*/
        v29 = 16711680; /*0x7dea6e*/
      if ( (v30 & 0xFF000000) != 0 ) /*0x7dea78*/
        v30 = 16711680; /*0x7dea78*/
      ++v11; /*0x7dea98*/
      result = ((v30 & 0xFC0000u) >> 18) | ((v29 & 0xF80000u) >> 13) | ((v28 & 0xF80000u) >> 8); /*0x7dea99*/
      *v12++ = result; /*0x7dea9b*/
      --v37; /*0x7dea9d*/
    }
    while ( v37 ); /*0x7deaa0*/
    __writeeflags(v9); /*0x7deaa2*/
  }
  else
  {
    v36 = 255; /*0x7de897*/
    v5 = a2; /*0x7de8a1*/
    v6 = (uint8_t *)(a1 + 3); /*0x7de8a7*/
    v7 = (unsigned char *)(a5 + 1); /*0x7de8aa*/
    *a2 = 0; /*0x7de8ab*/
    v8 = 0; /*0x7de8b0*/
    do
    {
      while ( 1 )
      {
        IDA_LOBYTE(v8) = v6[1]; /*0x7deac2*/
        v31 = 0; /*0x7deac5*/
        v32 = *v6; /*0x7deac7*/
        if ( !*v7 ) /*0x7deac9*/
          break; /*0x7deac9*/
        IDA_LOBYTE(v31) = v6[2]; /*0x7deace*/
        ++v7; /*0x7dead1*/
        v6 += 3; /*0x7deae1*/
        v33 = (8 /*0x7deb2a*/
             * (((uint8_t)(((unsigned int)(a3.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
               | (uint8_t)((unsigned int)(a3.m64_i32[1] * v8) >> 16))
              & 0xF8))
            | ((((uint8_t)(((unsigned int)(a3.m64_i32[0] * v32) >> 16 <= 0xFF) - 1)
               | (uint8_t)((unsigned int)(a3.m64_i32[0] * v32) >> 16))
              & 0xF8) << 8);
        ++v5; /*0x7deb2c*/
        v8 = 0; /*0x7deb2f*/
        result = ((uint8_t)(((unsigned int)(a4.m64_i32[0] * v31) >> 16 <= 0xFF
                                   ? (uint8_t)((unsigned int)(a4.m64_i32[0] * v31) >> 16)
                                   : -1)
                                  & 0xFC) >> 2)
               | v33;
        v34 = v36-- == 1; /*0x7deb33*/
        *v5 = result; /*0x7deb36*/
        if ( v34 ) /*0x7deb39*/
          return result; /*0x7deb39*/
      }
      IDA_LOBYTE(v31) = v6[2]; /*0x7deb42*/
      ++v7; /*0x7deb45*/
      v6 += 3; /*0x7deb55*/
      v35 = (8 /*0x7deb9e*/
           * (((uint8_t)(((unsigned int)(a4.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
             | (uint8_t)((unsigned int)(a4.m64_i32[1] * v8) >> 16))
            & 0xF8))
          | ((((uint8_t)(((unsigned int)(a4.m64_i32[1] * v32) >> 16 <= 0xFF) - 1)
             | (uint8_t)((unsigned int)(a4.m64_i32[1] * v32) >> 16))
            & 0xF8) << 8);
      ++v5; /*0x7deba0*/
      v8 = 0; /*0x7deba3*/
      result = ((uint8_t)(((unsigned int)(a4.m64_i32[1] * v31) >> 16 <= 0xFF
                                 ? (uint8_t)((unsigned int)(a4.m64_i32[1] * v31) >> 16)
                                 : -1)
                                & 0xFC) >> 2)
             | v35;
      v34 = v36-- == 1; /*0x7deba7*/
      *v5 = result; /*0x7debaa*/
    }
    while ( !v34 );
  }
  return result; /*0x7de9bd*/
}
}
// 0x7DEBBA
namespace gamemd {
unsigned int  __spoils<ecx> ConvertRGB24to565(int a1, unsigned short * a2, __m64, __m64, int a5)
{
  unsigned short *v5; // edi
  uint8_t *v6; // esi
  unsigned char *v7; // edx
  int v8; // ebx
  unsigned int v9; // kr00_4
  uint8_t *v10; // esi
  unsigned char *v11; // edx
  unsigned short *v12; // edi
  unsigned int *v13; // esi
  unsigned char *v14; // edx
  unsigned short *v15; // edi
  __m64 v16; // mm1
  __m64 v17; // mm0
  __m64 v18; // mm2
  __m64 v19; // mm2
  __m64 v20; // mm0
  int v21; // eax
  int v22; // eax
  unsigned int result; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // eax
  int v29; // ebx
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  bool v34; // zf
  int v35; // eax
  int v36; // [esp+4h] [ebp-8h]
  int v37; // [esp+4h] [ebp-8h]
  int v38; // [esp+4h] [ebp-8h]

  if ( byte_84E862 )
  {
    v38 = 255; /*0x7dec21*/
    v13 = (unsigned int *)(a1 + 3); /*0x7dec31*/
    v14 = (unsigned char *)(a5 + 1); /*0x7dec34*/
    v15 = a2 - 1; /*0x7dec35*/
    v16 = _m_packssdw(_m_psradi(a3, 4u), _m_psradi(a4, 4u)); /*0x7dec48*/
    v17.m64_u64 = 0; /*0x7dec4b*/
    v18 = _m_punpckhwd(v16, v16); /*0x7dec51*/
    v19 = _m_punpckhwd(v18, v18); /*0x7dec54*/
    do /*0x7ded3c*/
    {
      while ( 1 ) /*0x7dec80*/
      {
        ++v15; /*0x7dec80*/
        v20 = _m_packuswb(v17, v17); /*0x7dec83*/
        if ( !*v14 ) /*0x7dec86*/
          break; /*0x7dec86*/
        v21 = _mm_cvtsi64_si32(v20); /*0x7dec8b*/
        v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v16); /*0x7decb6*/
        v13 = (unsigned int *)((char *)v13 + 3); /*0x7decbb*/
        ++v14; /*0x7decc0*/
        *v15 = ((v21 & 0xF80000u) >> 19) | ((uint16_t)(v21 & 0xF800) >> 6) | ((v21 & 0xFC) << 8); /*0x7decc1*/
        if ( !--v38 ) /*0x7decc7*/
          goto LABEL_8; /*0x7decc7*/
      }
      v24 = _mm_cvtsi64_si32(v20); /*0x7ded00*/
      v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v19); /*0x7ded2b*/
      v13 = (unsigned int *)((char *)v13 + 3); /*0x7ded30*/
      ++v14; /*0x7ded35*/
      *v15 = ((v24 & 0xF80000u) >> 19) | ((uint16_t)(v24 & 0xF800) >> 6) | ((v24 & 0xFC) << 8); /*0x7ded36*/
      --v38; /*0x7ded39*/
    }
    while ( v38 ); /*0x7ded3c*/
  LABEL_8:
    v22 = _mm_cvtsi64_si32(_m_packuswb(v17, v17)); /*0x7decc9*/
    result = ((v22 & 0xF80000u) >> 19) | ((uint16_t)(v22 & 0xF800) >> 6) | ((v22 & 0xFC) << 8); /*0x7decf2*/
    v15[1] = result; /*0x7decf4*/
    _m_empty(); /*0x7decf7*/
  }
  else if ( byte_84E860 )
  {
    v9 = __readeflags(); /*0x7debf7*/
    v37 = 255; /*0x7debf9*/
    v10 = (uint8_t *)(a1 + 3); /*0x7dec10*/
    v11 = (unsigned char *)(a5 + 1); /*0x7dec13*/
    *a2 = 0; /*0x7dec14*/
    v12 = a2 + 1; /*0x7dec19*/
    do /*0x7dede0*/
    {
      v25 = *v10; /*0x7ded83*/
      v26 = v10[1]; /*0x7ded86*/
      v27 = v10[2]; /*0x7ded8a*/
      if ( *v11 ) /*0x7ded80*/
      {
        v28 = a3.m64_i32[0] * v25; /*0x7ded90*/
        v29 = a3.m64_i32[1] * v26; /*0x7ded94*/
        v30 = a4.m64_i32[0] * v27; /*0x7ded98*/
      }
      else
      {
        v28 = a4.m64_i32[1] * v25; /*0x7dedea*/
        v29 = a4.m64_i32[1] * v26; /*0x7dedee*/
        v30 = a4.m64_i32[1] * v27; /*0x7dedf2*/
      }
      v10 += 3; /*0x7ded9c*/
      if ( (v28 & 0xFF000000) != 0 ) /*0x7deda4*/
        v28 = 16711680; /*0x7deda4*/
      if ( (v29 & 0xFF000000) != 0 ) /*0x7dedae*/
        v29 = 16711680; /*0x7dedae*/
      if ( (v30 & 0xFF000000) != 0 ) /*0x7dedb8*/
        v30 = 16711680; /*0x7dedb8*/
      ++v11; /*0x7dedd8*/
      result = ((v30 & 0xF80000u) >> 19) | ((v29 & 0xF80000u) >> 14) | ((v28 & 0xFC0000u) >> 8); /*0x7dedd9*/
      *v12++ = result; /*0x7deddb*/
      --v37; /*0x7deddd*/
    }
    while ( v37 ); /*0x7dede0*/
    __writeeflags(v9); /*0x7dede2*/
  }
  else
  {
    v36 = 255; /*0x7debd7*/
    v5 = a2; /*0x7debe1*/
    v6 = (uint8_t *)(a1 + 3); /*0x7debe7*/
    v7 = (unsigned char *)(a5 + 1); /*0x7debea*/
    *a2 = 0; /*0x7debeb*/
    v8 = 0; /*0x7debf0*/
    do
    {
      while ( 1 )
      {
        IDA_LOBYTE(v8) = v6[1]; /*0x7dee02*/
        v31 = 0; /*0x7dee05*/
        v32 = *v6; /*0x7dee07*/
        if ( !*v7 ) /*0x7dee09*/
          break; /*0x7dee09*/
        IDA_LOBYTE(v31) = v6[2]; /*0x7dee0e*/
        ++v7; /*0x7dee11*/
        v6 += 3; /*0x7dee21*/
        v33 = (4 /*0x7dee6a*/
             * (((uint8_t)(((unsigned int)(a3.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
               | (uint8_t)((unsigned int)(a3.m64_i32[1] * v8) >> 16))
              & 0xF8))
            | ((((uint8_t)(((unsigned int)(a3.m64_i32[0] * v32) >> 16 <= 0xFF) - 1)
               | (uint8_t)((unsigned int)(a3.m64_i32[0] * v32) >> 16))
              & 0xFC) << 8);
        ++v5; /*0x7dee6c*/
        v8 = 0; /*0x7dee6f*/
        result = ((uint8_t)(((unsigned int)(a4.m64_i32[0] * v31) >> 16 <= 0xFF
                                   ? (uint8_t)((unsigned int)(a4.m64_i32[0] * v31) >> 16)
                                   : -1)
                                  & 0xF8) >> 3)
               | v33;
        v34 = v36-- == 1; /*0x7dee73*/
        *v5 = result; /*0x7dee76*/
        if ( v34 ) /*0x7dee79*/
          return result; /*0x7dee79*/
      }
      IDA_LOBYTE(v31) = v6[2]; /*0x7dee82*/
      ++v7; /*0x7dee85*/
      v6 += 3; /*0x7dee95*/
      v35 = (4 /*0x7deede*/
           * (((uint8_t)(((unsigned int)(a4.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
             | (uint8_t)((unsigned int)(a4.m64_i32[1] * v8) >> 16))
            & 0xF8))
          | ((((uint8_t)(((unsigned int)(a4.m64_i32[1] * v32) >> 16 <= 0xFF) - 1)
             | (uint8_t)((unsigned int)(a4.m64_i32[1] * v32) >> 16))
            & 0xFC) << 8);
      ++v5; /*0x7deee0*/
      v8 = 0; /*0x7deee3*/
      result = ((uint8_t)(((unsigned int)(a4.m64_i32[1] * v31) >> 16 <= 0xFF
                                 ? (uint8_t)((unsigned int)(a4.m64_i32[1] * v31) >> 16)
                                 : -1)
                                & 0xF8) >> 3)
             | v35;
      v34 = v36-- == 1; /*0x7deee7*/
      *v5 = result; /*0x7deeea*/
    }
    while ( !v34 );
  }
  return result; /*0x7decfd*/
}
}
// 0x7D06E2
namespace gamemd {
int sub_7D06E2()
{
  return dword_B782C8; /*0x7d06e7*/
}
} // namespace gamemd

// 0x7D06E8
namespace gamemd {
int _callnewh(IUnknown * aP0)
{
  return dword_B782C8 && dword_B782C8(aP0); /*0x7d06ff*/
}
} // namespace gamemd

// 0x7D07DF
namespace gamemd {
int _read(int FileHandle, void * DstBuf, unsigned int MaxCharCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D07DF.json)
}
} // namespace gamemd

// 0x7D0D55
namespace gamemd {
int _write(int FileHandle, CCINIClass * aP1, unsigned int MaxCharCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D0D55.json)
}
} // namespace gamemd

// 0x7D107D
namespace gamemd {
size_t _msize(CCINIClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D107D.json)
}
} // namespace gamemd

// 0x7D12E6
namespace gamemd {
unsigned char * strncnt(const unsigned char * String, int Count)
{
  unsigned char *v2; // eax
  int v3; // ecx

  v2 = String; /*0x7d12ea*/
  v3 = Count - 1; /*0x7d12f1*/
  if ( Count ) /*0x7d12f4*/
  {
    do /*0x7d1301*/
    {
      if ( !*v2 ) /*0x7d12f6*/
        break; /*0x7d12f9*/
      ++v2; /*0x7d12fb*/
    }
    while ( v3-- ); /*0x7d1301*/
  }
  if ( *v2 ) /*0x7d1303*/
    return (unsigned char *)Count; /*0x7d130e*/
  else
    return (unsigned char *)(v2 - String); /*0x7d1309*/
}
} // namespace gamemd

// 0x7D1386
namespace gamemd {
int _mtinit()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D1386.json)
}
} // namespace gamemd

// 0x7D13F8
namespace gamemd {
int _initptd(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D13F8.json)
}
} // namespace gamemd

// 0x7D140B
namespace gamemd {
unsigned int * _getptd()
{
  DWORD LastError; // edi
  unsigned int *Value; // esi
  unsigned int *v2; // eax
  DWORD CurrentThreadId; // eax

  LastError = GetLastError(); /*0x7d1419*/
  Value = TlsGetValue(dwTlsIndex); /*0x7d1421*/
  if ( !Value ) /*0x7d1425*/
  {
    v2 = calloc(1u, 0x74u); /*0x7d142b*/
    Value = v2; /*0x7d1430*/
    if ( !v2 || !TlsSetValue(dwTlsIndex, v2) ) /*0x7d143f*/
      _amsg_exit(0x10u); /*0x7d1460*/
    _initptd(Value); /*0x7d144a*/
    CurrentThreadId = GetCurrentThreadId(); /*0x7d1450*/
    Value[1] = -1; /*0x7d1456*/
    *Value = CurrentThreadId; /*0x7d145a*/
  }
  SetLastError(LastError); /*0x7d1467*/
  return Value; /*0x7d146f*/
}
} // namespace gamemd

// 0x7D1518
namespace gamemd {
int GetCurrentThread()
{
  return __imp_GetCurrentThread();
}
} // namespace gamemd

// 0x7D151E
namespace gamemd {
int _fltin2(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D151E.json)
}
} // namespace gamemd

// 0x7D161B
namespace gamemd {
int * _dosmaperr(unsigned int a1)
{
  int v1; // esi
  unsigned int *v2; // eax
  int *result; // eax

  v1 = 0; /*0x7d1625*/
  *__doserrno() = a1; /*0x7d1627*/
  v2 = &unk_87C7B0; /*0x7d1629*/
  do /*0x7d163b*/
  {
    if ( a1 == *v2 ) /*0x7d1630*/
    {
      result = _errno(); /*0x7d1654*/
      *result = dword_87C7B4[2 * v1]; /*0x7d1661*/
      return result; /*0x7d1663*/
    }
    v2 += 2; /*0x7d1632*/
    ++v1; /*0x7d1635*/
  }
  while ( (int)v2 < (int)asc_87C918 ); /*0x7d163b*/
  if ( a1 < 0x13 || a1 > 0x24 ) /*0x7d1645*/
  {
    if ( a1 < 0xBC || a1 > 0xCA ) /*0x7d1672*/
    {
      result = _errno(); /*0x7d1681*/
      *result = 22; /*0x7d1686*/
    }
    else
    {
      result = _errno(); /*0x7d1674*/
      *result = 8; /*0x7d1679*/
    }
  }
  else
  {
    result = _errno(); /*0x7d1647*/
    *result = 13; /*0x7d164c*/
  }
  return result; /*0x7d1652*/
}
} // namespace gamemd

// 0x7D168E
namespace gamemd {
int * _errno()
{
  return _getptd() + 2; /*0x7d1696*/
}
} // namespace gamemd

// 0x7D1697
namespace gamemd {
unsigned int * __doserrno()
{
  return _getptd() + 3; /*0x7d169f*/
}
} // namespace gamemd

// 0x7D16A0
namespace gamemd {
unsigned char * _mbsdec(const unsigned char * Start, const unsigned char * Pos)
{
  const uint8_t *v3; // esi

  if ( Start >= Pos ) /*0x7d16aa*/
    return 0; /*0x7d16ac*/
  if ( !dword_B7885C ) /*0x7d16b7*/
    return (uint8_t *)(Pos - 1); /*0x7d16b9*/
  _lock(25); /*0x7d16c0*/
  v3 = Pos - 1; /*0x7d16c9*/
  if ( (byte_B78961[*(Pos - 1)] & 4) != 0 ) /*0x7d16d4*/
  {
    _unlock(25); /*0x7d16d8*/
    return (uint8_t *)(Pos - 2); /*0x7d16de*/
  }
  else
  {
    do /*0x7d16f4*/
      --v3; /*0x7d16e3*/
    while ( Start <= v3 && (byte_B78961[*v3] & 4) != 0 ); /*0x7d16f4*/
    _unlock(25); /*0x7d16f8*/
    return (uint8_t *)&Pos[-(((unsigned char)Pos - (unsigned char)v3) & 1) - 1]; /*0x7d1709*/
  }
}
} // namespace gamemd

// 0x7D2169
namespace gamemd {
int fgetc_0(FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2169.json)
}
} // namespace gamemd

// 0x7D2183
namespace gamemd {
int _un_inc(int Character, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2183.json)
}
} // namespace gamemd

// 0x7D219A
namespace gamemd {
int _whiteout(unsigned int * a1, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D219A.json)
}
} // namespace gamemd

// 0x7D290B
namespace gamemd {
unsigned int * write_char_0(wchar_t WCh, FILE * File, unsigned int * a3)
{
  bool v3; // zf
  unsigned int *result; // eax

  v3 = (uint16_t)_putwc_lk(WCh, File) == 0xFFFF; /*0x7d2919*/
  result = a3; /*0x7d291d*/
  if ( v3 ) /*0x7d2922*/
    *a3 = -1; /*0x7d2924*/
  else
    ++*a3; /*0x7d2928*/
  return result; /*0x7d2927*/
}
} // namespace gamemd

// 0x7D292B
namespace gamemd {
unsigned int * write_multi_char_0(wchar_t WCh, unsigned int * a2, FILE * File, unsigned int * a4)
{
  unsigned int *result; // eax
  unsigned int *i; // edi

  result = a2; /*0x7d2931*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7d2936*/
  {
    result = write_char_0(WCh, File, a4); /*0x7d2945*/
    if ( *a4 == -1 ) /*0x7d2950*/
      break; /*0x7d2950*/
    result = i; /*0x7d2952*/
  }
  return result; /*0x7d2959*/
}
} // namespace gamemd

// 0x7D295C
namespace gamemd {
unsigned int * write_string_0(wchar_t * a1, unsigned int * a2, FILE * File, unsigned int * a4)
{
  unsigned int *result; // eax
  unsigned int *i; // ebx
  wchar_t v7; // ax

  result = a2; /*0x7d2961*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7d2968*/
  {
    v7 = *a1++; /*0x7d2972*/
    result = write_char_0(v7, File, a4); /*0x7d297d*/
    if ( *a4 == -1 ) /*0x7d2988*/
      break; /*0x7d2988*/
    result = i; /*0x7d298a*/
  }
  return result; /*0x7d2991*/
}
} // namespace gamemd

// 0x7D2995
namespace gamemd {
int get_int_arg_0(ObjectClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2995.json)
}
} // namespace gamemd

// 0x7D29A2
namespace gamemd {
long long get_int64_arg_0(ObjectClass * aP0)
{
  *aP0 += 8; /*0x7d29a6*/
  return *(unsigned long long *)(*aP0 - 8); /*0x7d29b1*/
}
} // namespace gamemd

// 0x7D29B2
namespace gamemd {
long __loctotime_t(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D29B2.json)
}
} // namespace gamemd

// 0x7D2A74
namespace gamemd {
int _close(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2A74.json)
}
} // namespace gamemd

// 0x7D2AD1
namespace gamemd {
int _close_lk(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2AD1.json)
}
} // namespace gamemd

// 0x7D2B54
namespace gamemd {
int _freebuf(MouseClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2B54.json)
}
} // namespace gamemd

// 0x7D2B7F
namespace gamemd {
int _stbuf(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2B7F.json)
}
} // namespace gamemd

// 0x7D2C0C
namespace gamemd {
int _ftbuf(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2C0C.json)
}
} // namespace gamemd

// 0x7D2E6E
namespace gamemd {
unsigned int * E4Recv_7D2E6E::sub_7D2E6E()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2E6E.json)
}
} // namespace gamemd

// 0x7D2E7F
namespace gamemd {
ObjectClass * E4Recv_7D2E7F::sub_7D2E7F(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2E7F.json)
}
} // namespace gamemd

// 0x7D2E9B
namespace gamemd {
exception * E4Recv_7D2E9B::__0exception_QAE_ABQBD_Z(const char ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2E9B.json)
}
} // namespace gamemd

// 0x7D2ED8
namespace gamemd {
exception * E4Recv_7D2ED8::__0exception_QAE_ABV0__Z(const struct exception * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2ED8.json)
}
} // namespace gamemd

// 0x7D2F22
namespace gamemd {
ObjectClass * E4Recv_7D2F22::__4exception_QAEAAV0_ABV0__Z(struct exception * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2F22.json)
}
} // namespace gamemd

// 0x7D2F57
namespace gamemd {
const char * E4Recv_7D2F57::_what_exception__UBEPBDXZ()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2F57.json)
}
} // namespace gamemd

// 0x7D2F64
namespace gamemd {
void  __noreturn _CxxThrowException_8(void * pExceptionObject, _ThrowInfo * pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, &unk_7F9928, sizeof(dwExceptionCode)); /*0x7d2f7a*/
  dwExceptionCode[6] = (DWORD)pExceptionObject; /*0x7d2f7c*/
  dwExceptionCode[7] = (DWORD)pThrowInfo; /*0x7d2f82*/
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]); /*0x7d2f92*/
}
} // namespace gamemd

// 0x7D2F9E
namespace gamemd {
short sub_7D2F9E(wchar_t WCh, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2F9E.json)
}
} // namespace gamemd

// 0x7D3374
namespace gamemd {
void * calloc(size_t Count, size_t Size)
{
  SIZE_T v2; // esi
  size_t v3; // ebx
  void *v4; // edi

  v2 = Size * Count; /*0x7d337b*/
  v3 = Size * Count; /*0x7d3383*/
  if ( Size * Count <= 0xFFFFFFE0 ) /*0x7d3385*/
  {
    if ( !v2 ) /*0x7d3389*/
      v2 = 1; /*0x7d338d*/
    v2 = (v2 + 15) & 0xFFFFFFF0; /*0x7d3391*/
  }
  do /*0x7d33e7*/
  {
    v4 = 0; /*0x7d3394*/
    if ( v2 <= 0xFFFFFFE0 ) /*0x7d3399*/
    {
      if ( v3 <= dword_87C584 ) /*0x7d33a1*/
      {
        _lock(9); /*0x7d33a5*/
        v4 = __sbh_alloc_block(v3); /*0x7d33b2*/
        _unlock(9); /*0x7d33b4*/
        if ( v4 ) /*0x7d33be*/
        {
          memset(v4, 0, v3); /*0x7d33ef*/
          return v4; /*0x7d33fc*/
        }
      }
      v4 = HeapAlloc(hHeap, 8u, v2); /*0x7d33cf*/
      if ( v4 ) /*0x7d33d3*/
        return v4; /*0x7d33d3*/
    }
    if ( !dword_B782C4 ) /*0x7d33dc*/
      return v4; /*0x7d33dc*/
  }
  while ( _callnewh(v2) ); /*0x7d33e7*/
  return 0; /*0x7d33f9*/
}
} // namespace gamemd

// 0x7D3401
namespace gamemd {
int _fcloseall()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3401.json)
}
} // namespace gamemd

// 0x7D362F
namespace gamemd {
UINT getSystemCP(UINT)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D362F.json)
}
} // namespace gamemd

// 0x7D3679
namespace gamemd {
int CPtoLCID(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3679.json)
}
} // namespace gamemd

// 0x7D3982
namespace gamemd {
wint_t towupper(wint_t C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3982.json)
}
} // namespace gamemd

// 0x7D39F6
namespace gamemd {
wint_t towupper_0(wint_t C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D39F6.json)
}
} // namespace gamemd

// 0x7D4596
namespace gamemd {
int fgetwc(FILE * File)
{
  return _getwc_lk(File); /*0x7d45a0*/
}
} // namespace gamemd

// 0x7D45A1
namespace gamemd {
int _un_inc_0(short MbCh, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D45A1.json)
}
} // namespace gamemd

// 0x7D45BA
namespace gamemd {
wint_t _whiteout_0(unsigned int * a1, FILE * File)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D45BA.json)
}
} // namespace gamemd

// 0x7D45DF
namespace gamemd {
int _mbsnbicoll(const unsigned char * Str1, const unsigned char * Str2, size_t MaxCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D45DF.json)
}
} // namespace gamemd

// 0x7D461E
namespace gamemd {
int __wtomb_environ()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D461E.json)
}
} // namespace gamemd

// 0x7D468C
namespace gamemd {
char * _itoa(int Value, char * Buffer, int Radix)
{
  if ( Radix == 10 && Value < 0 ) /*0x7d4699*/
    xtoa(Value, Buffer, 0xAu, 1); /*0x7d469f*/
  else
    xtoa(Value, Buffer, Radix, 0); /*0x7d46ac*/
  return Buffer; /*0x7d46b7*/
}
} // namespace gamemd

// 0x7D46B9
namespace gamemd {
char xtoa(unsigned int a1, char * a2, unsigned int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D46B9.json)
}
} // namespace gamemd

// 0x7D4715
namespace gamemd {
char * _ltoa(int Value, char * Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0; /*0x7d4718*/
  if ( Radix == 10 ) /*0x7d471e*/
    v3 = Value < 0; /*0x7d4727*/
  xtoa(Value, Buffer, Radix, v3); /*0x7d4732*/
  return Buffer; /*0x7d473d*/
}
} // namespace gamemd

// 0x7D473F
namespace gamemd {
char * _ultoa(unsigned int Value, char * Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0); /*0x7d474d*/
  return Buffer; /*0x7d4759*/
}
} // namespace gamemd

// 0x7D475A
namespace gamemd {
char * _i64toa(long long Value, char * Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0; /*0x7d475d*/
  if ( Radix == 10 && IDA_SHIDWORD(Value) <= 0 ) /*0x7d4768*/
    v3 = Value < 0; /*0x7d4773*/
  x64toa_20(Value, IDA_HIDWORD(Value), Buffer, Radix, v3); /*0x7d4781*/
  return Buffer; /*0x7d4789*/
}
} // namespace gamemd

// 0x7D478B
namespace gamemd {
char * x64toa_20(unsigned long long a1, char * a2, unsigned int a3, int a4)
{
  char *v4; // esi
  uint64_t v5; // kr00_8
  uint64_t v6; // rax
  char *v7; // esi
  char v8; // cl
  char *result; // eax
  char *v10; // [esp+1Ch] [ebp+10h]
  unsigned int v11; // [esp+24h] [ebp+18h]

  v4 = a2; /*0x7d4794*/
  if ( a4 ) /*0x7d4798*/
  {
    *a2 = 45; /*0x7d47a0*/
    v4 = a2 + 1; /*0x7d47a3*/
    v5 = -(int64_t)a1; /*0x7d47ab*/
  }
  else
  {
    v5 = a1; /*0x7d47b0*/
  }
  v10 = v4; /*0x7d47b3*/
  do /*0x7d47f0*/
  {
    v11 = v5 % a3; /*0x7d47c3*/
    v6 = v5 / a3; /*0x7d47ce*/
    v5 = v6; /*0x7d47db*/
    if ( v11 <= 9 ) /*0x7d47dd*/
      IDA_LOBYTE(v6) = v11 + 48; /*0x7d47e3*/
    else
      IDA_LOBYTE(v6) = v11 + 87; /*0x7d47df*/
    *v4++ = v6; /*0x7d47e5*/
  }
  while ( IDA_HIDWORD(v6) || (unsigned int)v5 ); /*0x7d47f0*/
  *v4 = 0; /*0x7d47f2*/
  v7 = v4 - 1; /*0x7d47f5*/
  do /*0x7d4808*/
  {
    v8 = *v7; /*0x7d47f9*/
    *v7 = *v10; /*0x7d47fd*/
    *v10 = v8; /*0x7d47ff*/
    --v7; /*0x7d4801*/
    result = v10 + 1; /*0x7d4802*/
    v10 = result; /*0x7d4805*/
  }
  while ( result < v7 ); /*0x7d4808*/
  return result; /*0x7d480a*/
}
} // namespace gamemd

// 0x7D4811
namespace gamemd {
char * _ui64toa(unsigned long long Value, char * Buffer, int Radix)
{
  x64toa_20(Value, Buffer, Radix, 0); /*0x7d4822*/
  return Buffer; /*0x7d482a*/
}
} // namespace gamemd

// 0x7D49AE
namespace gamemd {
bool ctrlevent_capture_4(DWORD CtrlType)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D49AE.json)
}
} // namespace gamemd

// 0x7D4B92
namespace gamemd {
unsigned int siglookup(int a1, unsigned int a2)
{
  unsigned int result; // eax

  result = a2; /*0x7d4ba5*/
  if ( *(unsigned int *)(a2 + 4) != a1 ) /*0x7d4ba7*/
  {
    do /*0x7d4bb9*/
      result += 12; /*0x7d4baf*/
    while ( result < a2 + 12 * dword_87CBA4 && *(unsigned int *)(result + 4) != a1 ); /*0x7d4bb9*/
  }
  if ( result >= a2 + 12 * dword_87CBA4 || *(unsigned int *)(result + 4) != a1 ) /*0x7d4bc8*/
    return 0; /*0x7d4bca*/
  return result; /*0x7d4bcc*/
}
} // namespace gamemd

// 0x7D4BD8
namespace gamemd {
void ** __pxcptinfoptrs()
{
  return (void **)(_getptd() + 21); /*0x7d4be0*/
}
} // namespace gamemd

// 0x7D4BF0
namespace gamemd {
char * strcpy(IUnknown * aP0, const char * Source)
{
  JUMPOUT(0x7D4C61); /*0x7d4c61*/
}
} // namespace gamemd

// 0x7D4FAB
namespace gamemd {
int _isindst(CampaignScore * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D4FAB.json)
}
} // namespace gamemd

// 0x7D52B8
namespace gamemd {
struct tm * gmtime(CampaignScore * aP0)
{
  __time32_t v1; // esi
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  void *v6; // eax
  struct tm *v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int *v11; // edi
  int v12; // esi
  int v13; // eax
  int *i; // ebx
  int tm_yday; // edx
  int v16; // eax
  int v17; // esi

  v1 = *aP0; /*0x7d52bf*/
  v2 = 0; /*0x7d52c1*/
  v3 = _getptd(); /*0x7d52c3*/
  v4 = v3; /*0x7d52ca*/
  if ( v1 < 0 ) /*0x7d52cc*/
    return 0; /*0x7d52ce*/
  if ( *(unsigned int *)(v3 + 64) || (v6 = malloc(0x24u), *(unsigned int *)(v4 + 64) = v6, v7 = (struct tm *)&unk_B783B0, v6) ) /*0x7d52ed*/
    v7 = *(struct tm **)(v4 + 64); /*0x7d52ef*/
  v8 = v1 / 126230400; /*0x7d52fa*/
  v9 = v1 % 126230400; /*0x7d5304*/
  v10 = 4 * v8 + 70; /*0x7d5306*/
  if ( v9 >= 31536000 ) /*0x7d5314*/
  {
    v9 -= 31536000; /*0x7d5316*/
    v10 = 4 * v8 + 71; /*0x7d5318*/
    if ( v9 >= 31536000 ) /*0x7d531b*/
    {
      v9 -= 31536000; /*0x7d531d*/
      v10 = 4 * v8 + 72; /*0x7d5324*/
      if ( v9 < 31622400 ) /*0x7d5327*/
      {
        v2 = 1; /*0x7d5330*/
      }
      else
      {
        v10 = 4 * v8 + 73; /*0x7d5329*/
        v9 -= 31622400; /*0x7d532a*/
      }
    }
  }
  v7->tm_year = v10; /*0x7d5333*/
  v11 = dword_87D580; /*0x7d533e*/
  v7->tm_yday = v9 / 86400; /*0x7d5343*/
  v12 = v9 % 86400; /*0x7d534c*/
  if ( !v2 ) /*0x7d5350*/
    v11 = dword_87D5B4; /*0x7d5352*/
  v13 = 1; /*0x7d535c*/
  for ( i = v11 + 1; *i < v7->tm_yday; ++i ) /*0x7d535d*/
    ++v13; /*0x7d5364*/
  tm_yday = v7->tm_yday; /*0x7d536a*/
  v16 = v13 - 1; /*0x7d536d*/
  v7->tm_mon = v16; /*0x7d536e*/
  v7->tm_mday = tm_yday - v11[v16]; /*0x7d537f*/
  v7->tm_wday = (*aP0 / 86400 + 4) % 7; /*0x7d5397*/
  v7->tm_hour = v12 / 3600; /*0x7d539e*/
  v17 = v12 % 3600; /*0x7d53a7*/
  v7->tm_min = v17 / 60; /*0x7d53ae*/
  v7->tm_isdst = 0; /*0x7d53b6*/
  v7->tm_sec = v17 % 60; /*0x7d53ba*/
  return v7; /*0x7d53be*/
}
} // namespace gamemd

// 0x7D53C2
namespace gamemd {
int _access(const char * FileName, int AccessMode)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D53C2.json)
}
} // namespace gamemd

// 0x7D5408
namespace gamemd {
char * _strdup(INIClass * aP0)
{
  int v1; // eax
  char *v2; // eax

  if ( aP0 && (v1 = strlen(aP0), (v2 = (char *)malloc(v1 + 1)) != 0) ) /*0x7d5422*/
    return strcpy(v2, aP0); /*0x7d5426*/
  else
    return 0; /*0x7d542f*/
}
} // namespace gamemd

// 0x7D5433
namespace gamemd {
int _open(const char * FileName, int OpenFlag, ...)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5433.json)
}
} // namespace gamemd

// 0x7D5719
namespace gamemd {
int GetCurrentProcessId()
{
  return __imp_GetCurrentProcessId();
}
} // namespace gamemd

// 0x7D57FE
namespace gamemd {
char * asctime(const struct tm * Tm)
{
  unsigned int *v1; // esi
  void *v2; // eax
  bool v3; // zf
  char *v4; // eax
  char *v5; // ebx
  int v6; // edi
  int v7; // ebp
  int v8; // ecx
  char v9; // dl
  unsigned char *v10; // eax
  unsigned char *v11; // eax
  unsigned char *v12; // eax
  unsigned char *v13; // eax
  unsigned char *v14; // eax
  int v15; // eax
  unsigned char *v16; // eax

  v1 = _getptd(); /*0x7d5807*/
  if ( v1[14] || (v2 = malloc(0x1Au), v1[14] = v2, v3 = v2 == 0, v4 = (char *)&unk_B783DC, !v3) ) /*0x7d5821*/
    v4 = (char *)v1[14]; /*0x7d5823*/
  v5 = v4; /*0x7d582a*/
  v6 = 3 * Tm->tm_wday; /*0x7d582f*/
  v7 = 3 * Tm->tm_mon; /*0x7d5835*/
  v8 = 0; /*0x7d5838*/
  do /*0x7d5852*/
  {
    v9 = byte_7F9948[v6 + v8++]; /*0x7d583a*/
    *v4 = v9; /*0x7d5842*/
    v4[4] = byte_7F995F[v8 + v7]; /*0x7d584b*/
    ++v4; /*0x7d584e*/
  }
  while ( v8 < 3 ); /*0x7d5852*/
  *v4 = 32; /*0x7d5854*/
  v10 = v4 + 4; /*0x7d5857*/
  *v10 = 32; /*0x7d585a*/
  v11 = (unsigned char *)store_dt(v10 + 1, Tm->tm_mday); /*0x7d5862*/
  *v11 = 32; /*0x7d5867*/
  v12 = (unsigned char *)store_dt(v11 + 1, Tm->tm_hour); /*0x7d586f*/
  *v12 = 58; /*0x7d5874*/
  v13 = (unsigned char *)store_dt(v12 + 1, Tm->tm_min); /*0x7d587c*/
  *v13 = 58; /*0x7d5881*/
  v14 = (unsigned char *)store_dt(v13 + 1, Tm->tm_sec); /*0x7d5888*/
  *v14 = 32; /*0x7d5892*/
  v15 = store_dt(v14 + 1, Tm->tm_year / 100 + 19); /*0x7d58a1*/
  v16 = (unsigned char *)store_dt(v15, Tm->tm_year % 100); /*0x7d58b2*/
  *v16 = 10; /*0x7d58ba*/
  v16[1] = 0; /*0x7d58bd*/
  return v5; /*0x7d58c3*/
}
} // namespace gamemd

// 0x7D58C8
namespace gamemd {
unsigned char * store_dt(unsigned char * a1, int a2)
{
  *a1 = a2 / 10 + 48; /*0x7d58dc*/
  a1[1] = a2 % 10 + 48; /*0x7d58ed*/
  return a1 + 2; /*0x7d58e6*/
}
} // namespace gamemd

// 0x7D58F0
namespace gamemd {
LONG _XcptFilter(ObjectClass * aP0, struct _EXCEPTION_POINTERS * ExceptionInfo)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D58F0.json)
}
} // namespace gamemd

// 0x7D5A2E
namespace gamemd {
unsigned int * xcptlookup(ObjectClass * aP0, unsigned int * a1)
{
  unsigned int *result; // eax

  result = a1; /*0x7d5a40*/
  if ( *a1 != aP0 ) /*0x7d5a42*/
  {
    do /*0x7d5a53*/
      result += 3; /*0x7d5a4a*/
    while ( result < &a1[3 * dword_87CBA4] && *result != aP0 ); /*0x7d5a53*/
  }
  if ( result >= &a1[3 * dword_87CBA4] || *result != aP0 ) /*0x7d5a61*/
    return 0; /*0x7d5a63*/
  return result; /*0x7d5a65*/
}
} // namespace gamemd

// 0x7D5EF8
namespace gamemd {
int * _FF_MSGBANNER()
{
  int result; // eax

  result = dword_B78230; /*0x7d5ef8*/
  if ( dword_B78230 == 1 || !dword_B78230 && dword_87C2A4 == 1 ) /*0x7d5f0d*/
  {
    _NMSG_WRITE(0xFCu); /*0x7d5f14*/
    if ( dword_B78500 ) /*0x7d5f21*/
      dword_B78500(); /*0x7d5f23*/
    return _NMSG_WRITE(0xFFu); /*0x7d5f2a*/
  }
  return result; /*0x7d5f30*/
}
} // namespace gamemd

// 0x7D5F31
namespace gamemd {
int * _NMSG_WRITE(DWORD NumberOfBytesWritten)
{
  int v1; // ecx
  int *result; // eax
  int v3; // esi
  char *v4; // edi
  const char **v5; // esi
  HANDLE StdHandle; // eax
  const char *v7; // [esp-14h] [ebp-1B8h]
  DWORD v8; // [esp-10h] [ebp-1B4h]
  DWORD *p_NumberOfBytesWritten; // [esp-Ch] [ebp-1B0h]
  int v10; // [esp-8h] [ebp-1ACh]
  CHAR Filename[260]; // [esp+0h] [ebp-1A4h] BYREF
  char Destination[160]; // [esp+104h] [ebp-A0h] BYREF
  int savedregs; // [esp+1A4h] [ebp+0h] BYREF

  v1 = 0; /*0x7d5f3d*/
  result = dword_87CBA8; /*0x7d5f3f*/
  do /*0x7d5f51*/
  {
    if ( NumberOfBytesWritten == *result ) /*0x7d5f46*/
      break; /*0x7d5f46*/
    result += 2; /*0x7d5f48*/
    ++v1; /*0x7d5f4b*/
  }
  while ( (int)result < (int)&unk_87CC38 ); /*0x7d5f51*/
  v3 = 2 * v1; /*0x7d5f56*/
  if ( NumberOfBytesWritten == dword_87CBA8[2 * v1] )
  {
    result = (int *)dword_B78230; /*0x7d5f65*/
    if ( dword_B78230 == 1 || !dword_B78230 && dword_87C2A4 == 1 )
    {
      v5 = (const char **)&(&off_87CBAC)[v3]; /*0x7d605e*/
      v10 = 0; /*0x7d6064*/
      p_NumberOfBytesWritten = &NumberOfBytesWritten; /*0x7d6066*/
      v8 = strlen(*v5); /*0x7d606f*/
      v7 = *v5; /*0x7d6070*/
      StdHandle = GetStdHandle(0xFFFFFFF4); /*0x7d6074*/
      return (int *)WriteFile(StdHandle, v7, v8, &NumberOfBytesWritten, 0); /*0x7d607b*/
    }
    else if ( NumberOfBytesWritten != 252 )
    {
      if ( !GetModuleFileNameA(0, Filename, 0x104u) ) /*0x7d5f9e*/
        strcpy(Filename, "<program name unknown>"); /*0x7d5fb4*/
      v4 = Filename; /*0x7d5fc3*/
      if ( (unsigned int)(strlen(Filename) + 1) > 0x3C ) /*0x7d5fd3*/
      {
        v4 = (char *)&savedregs + strlen(Filename) - 479; /*0x7d5fee*/
        strncpy(v4, "...", 3u); /*0x7d5ff6*/
      }
      strcpy(Destination, "Runtime Error!\n\nProgram: ");
      strcat(Destination, v4); /*0x7d6017*/
      strcat(Destination, asc_83F318); /*0x7d6028*/
      strcat(Destination, (&off_87CBAC)[v3]); /*0x7d603a*/
      return (int *)__crtMessageBoxA(Destination, "Microsoft Visual C++ Runtime Library", 73744); /*0x7d6050*/
    }
  }
  return result; /*0x7d6082*/
}
} // namespace gamemd

// 0x7D6146
namespace gamemd {
int _get_lc_time(CCINIClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6146.json)
}
} // namespace gamemd

// 0x7D6494
namespace gamemd {
void _free_lc_time(CCINIClass * aP0)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6494.json)
}
} // namespace gamemd

// 0x7D67F9
namespace gamemd {
char fix_grouping(CCINIClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D67F9.json)
}
} // namespace gamemd

// 0x7D6830
namespace gamemd {
int __init_monetary()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6830.json)
}
} // namespace gamemd

// 0x7D68FB
namespace gamemd {
int _get_lc_lconv(CCINIClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D68FB.json)
}
} // namespace gamemd

// 0x7D6A1D
namespace gamemd {
char fix_grouping_0(char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6A1D.json)
}
} // namespace gamemd

// 0x7D6A54
namespace gamemd {
void _free_lc_lconv(CCINIClass * aP0)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6A54.json)
}
} // namespace gamemd

// 0x7D6CE7
namespace gamemd {
int ReturnNull4()
{
  return 0; /*0x7d6ce9*/
}
} // namespace gamemd

// 0x7D6CF0
namespace gamemd {
char * strpbrk(const char * Str, const char * Control)
{
  char *result; // eax
  signed int32_t v5[9]; // [esp+0h] [ebp-24h] BYREF

  result = 0; /*0x7d6cf4*/
  memset(v5, 0, 32); /*0x7d6cfd*/
  while ( 1 ) /*0x7d6d04*/
  {
    IDA_LOBYTE(result) = *Control; /*0x7d6d04*/
    if ( !*Control ) /*0x7d6d04*/
      break; /*0x7d6d04*/
    ++Control; /*0x7d6d0a*/
    _bittestandset(v5, (unsigned int)result); /*0x7d6d0b*/
  }
  while ( 1 ) /*0x7d6d14*/
  {
    IDA_LOBYTE(result) = *Str; /*0x7d6d14*/
    if ( !*Str ) /*0x7d6d14*/
      break; /*0x7d6d14*/
    ++Str; /*0x7d6d1a*/
    if ( _bittest(v5, (unsigned int)result) ) /*0x7d6d1b*/
      return (char *)(Str - 1); /*0x7d6d21*/
  }
  return result; /*0x7d6d27*/
}
} // namespace gamemd

// 0x7D6EA7
namespace gamemd {
int TranslateName(int a1, int a2, char ** a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6EA7.json)
}
} // namespace gamemd

// 0x7D6EFF
namespace gamemd {
int GetLcidFromLangCountry()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6EFF.json)
}
} // namespace gamemd

// 0x7D718A
namespace gamemd {
bool GetLcidFromLanguage()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D718A.json)
}
} // namespace gamemd

// 0x7D729D
namespace gamemd {
bool GetLcidFromCountry()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D729D.json)
}
} // namespace gamemd

// 0x7D7374
namespace gamemd {
int ProcessCodePage(char * String)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7374.json)
}
} // namespace gamemd

// 0x7D73DA
namespace gamemd {
int TestDefaultCountry(short a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D73DA.json)
}
} // namespace gamemd

// 0x7D73F9
namespace gamemd {
bool TestDefaultLanguage(int a1, int a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D73F9.json)
}
} // namespace gamemd

// 0x7D745B
namespace gamemd {
bool IsThisWindowsNT()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D745B.json)
}
} // namespace gamemd

// 0x7D7491
namespace gamemd {
int crtGetLocaleInfoA_16(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7491.json)
}
} // namespace gamemd

// 0x7D7577
namespace gamemd {
int LcidFromHexString(char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7577.json)
}
} // namespace gamemd

// 0x7D75B0
namespace gamemd {
int GetPrimaryLen(char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D75B0.json)
}
} // namespace gamemd

// 0x7D7638
namespace gamemd {
int _lseek(int FileHandle, int Offset, int Origin)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7638.json)
}
} // namespace gamemd

// 0x7D769D
namespace gamemd {
DWORD _lseek_lk(int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D769D.json)
}
} // namespace gamemd

// 0x7D7710
namespace gamemd {
int _getbuf(MouseClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7710.json)
}
} // namespace gamemd

// 0x7D7754
namespace gamemd {
int _isatty(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7754.json)
}
} // namespace gamemd

// 0x7D777D
namespace gamemd {
int wctomb(char * MbCh, wchar_t WCh)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D777D.json)
}
} // namespace gamemd

// 0x7D7840
namespace gamemd {
unsigned long long _aullrem(unsigned long long a1, long long a2)
{
  uint64_t v2; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  uint64_t v6; // rax
  bool v7; // cf
  int v8; // ecx
  uint64_t v9; // rax

  if ( IDA_HIDWORD(a2) ) /*0x7d7847*/
  {
    v4 = IDA_HIDWORD(a2); /*0x7d7861*/
    v5 = a2; /*0x7d7863*/
    v6 = a1; /*0x7d786b*/
    do /*0x7d7879*/
    {
      v7 = v4 & 1; /*0x7d786f*/
      v4 >>= 1; /*0x7d786f*/
      v5 = (v5 >> 1) | (v7 << 31); /*0x7d7871*/
      v6 >>= 1; /*0x7d7873*/
    }
    while ( v4 ); /*0x7d7879*/
    v8 = IDA_HIDWORD(a2) * (v6 / v5); /*0x7d7883*/
    v9 = (unsigned int)a2 * (uint64_t)(unsigned int)(v6 / v5); /*0x7d7884*/
    v7 = __CFADD__(v8, IDA_HIDWORD(v9)); /*0x7d7888*/
    IDA_HIDWORD(v9) += v8; /*0x7d7888*/
    if ( v7 || v9 > a1 ) /*0x7d7898*/
      v9 -= a2; /*0x7d789e*/
    return a1 - v9; /*0x7d78ae*/
  }
  else
  {
    IDA_LODWORD(v2) = a1; /*0x7d7859*/
    IDA_HIDWORD(v2) = IDA_HIDWORD(a1) % (unsigned int)a2; /*0x7d7859*/
    return v2 % (unsigned int)a2; /*0x7d785d*/
  }
}
} // namespace gamemd

// 0x7D78B5
namespace gamemd {
int _ZeroTail(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D78B5.json)
}
} // namespace gamemd

// 0x7D78FE
namespace gamemd {
int _IncMan(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D78FE.json)
}
} // namespace gamemd

// 0x7D7954
namespace gamemd {
int _RoundMan(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7954.json)
}
} // namespace gamemd

// 0x7D79E0
namespace gamemd {
unsigned int * _CopyMan(int a1, unsigned int * a2)
{
  unsigned int *result; // eax
  int v3; // edx

  result = a2; /*0x7d79e0*/
  v3 = 3; /*0x7d79ed*/
  do /*0x7d79f7*/
  {
    *(unsigned int *)((char *)result + a1 - (unsigned int)a2) = *result; /*0x7d79f0*/
    ++result; /*0x7d79f3*/
    --v3; /*0x7d79f6*/
  }
  while ( v3 ); /*0x7d79f7*/
  return result; /*0x7d79f9*/
}
} // namespace gamemd

// 0x7D79FB
namespace gamemd {
int _FillZeroMan(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D79FB.json)
}
} // namespace gamemd

// 0x7D7A07
namespace gamemd {
int _IsZeroMan(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7A07.json)
}
} // namespace gamemd

// 0x7D7A22
namespace gamemd {
int * _ShrMan(int * a1, int a2)
{
  int *v2; // edi
  int v3; // edx
  bool v4; // zf
  int v5; // ebx
  int i; // ecx
  int *result; // eax
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]
  int v11; // [esp+24h] [ebp+Ch]

  v2 = a1; /*0x7d7a30*/
  v10 = 3; /*0x7d7a3a*/
  v8 = a2 / 32; /*0x7d7a43*/
  v3 = a2 % 32; /*0x7d7a4a*/
  v11 = 0; /*0x7d7a4c*/
  do /*0x7d7a7a*/
  {
    v9 = ~(-1 << v3) & *v2; /*0x7d7a5e*/
    *v2 = v11 | ((unsigned int)*v2 >> v3); /*0x7d7a68*/
    ++v2; /*0x7d7a6f*/
    v4 = v10-- == 1; /*0x7d7a74*/
    v11 = v9 << (32 - v3); /*0x7d7a77*/
  }
  while ( !v4 ); /*0x7d7a7a*/
  v5 = 2; /*0x7d7a81*/
  for ( i = 2; i >= 0; --i ) /*0x7d7a86*/
  {
    if ( v5 < v8 ) /*0x7d7a8c*/
    {
      result = a1; /*0x7d7a9d*/
      a1[i] = 0; /*0x7d7aa0*/
    }
    else
    {
      result = *(int **)((char *)a1 + i * 4 - 4 * v8); /*0x7d7a95*/
      a1[i] = (int)result; /*0x7d7a98*/
    }
    --v5; /*0x7d7aa4*/
  }
  return result; /*0x7d7aaa*/
}
} // namespace gamemd

// 0x7D7C47
namespace gamemd {
int _ld12told(unsigned short * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7C47.json)
}
} // namespace gamemd

// 0x7D7CEE
namespace gamemd {
int _atoldbl(_LDOUBLE * Result, char * String)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7CEE.json)
}
} // namespace gamemd

// 0x7D7D49
namespace gamemd {
char * _fptostr(BlowStraw * aP0, char * a1, int a3)
{
  int v3; // edx
  int v4; // ebx
  char *v6; // ecx
  const char *v7; // edi
  char *result; // eax
  char v9; // dl
  int v10; // eax
  char *v11; // [esp+14h] [ebp+8h]

  v3 = a3; /*0x7d7d4c*/
  v4 = (int)a1; /*0x7d7d50*/
  v6 = *(char **)(a3 + 12); /*0x7d7d57*/
  v7 = aP0 + 1; /*0x7d7d5b*/
  *aP0 = 48; /*0x7d7d5e*/
  result = aP0 + 1; /*0x7d7d63*/
  if ( (int)a1 > 0 ) /*0x7d7d65*/
  {
    v11 = a1; /*0x7d7d67*/
    v4 = 0; /*0x7d7d6a*/
    do /*0x7d7d81*/
    {
      v9 = *v6; /*0x7d7d6c*/
      if ( *v6 ) /*0x7d7d6c*/
        ++v6; /*0x7d7d75*/
      else
        v9 = 48; /*0x7d7d7a*/
      *result++ = v9; /*0x7d7d7b*/
      --v11; /*0x7d7d7e*/
    }
    while ( v11 ); /*0x7d7d81*/
    v3 = a3; /*0x7d7d83*/
  }
  *result = 0; /*0x7d7d86*/
  if ( v4 >= 0 && *v6 >= 53 ) /*0x7d7d90*/
  {
    while ( *--result == 57 ) /*0x7d7d92*/
      *result = 48; /*0x7d7d98*/
    ++*result; /*0x7d7d9d*/
  }
  if ( *aP0 == 49 ) /*0x7d7da2*/
  {
    ++*(unsigned int *)(v3 + 4); /*0x7d7da4*/
  }
  else
  {
    v10 = strlen(v7); /*0x7d7daa*/
    return (char *)memcpy(aP0, v7, v10 + 1); /*0x7d7db3*/
  }
  return result; /*0x7d7dbb*/
}
} // namespace gamemd

// 0x7D7DC0
namespace gamemd {
unsigned int * _fltout2(char a1, int a2, unsigned int * a3, char * Destination)
{
  int v4; // eax
  unsigned int *v5; // esi
  char *v6; // edi
  int16_t v8; // [esp-10h] [ebp-40h]
  int16_t v9; // [esp+8h] [ebp-28h] BYREF
  char v10; // [esp+Ah] [ebp-26h]
  char Source[24]; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v12[2]; // [esp+24h] [ebp-Ch] BYREF
  int16_t v13; // [esp+2Ch] [ebp-4h]

  __dtold(v12, &a1); /*0x7d7dd0*/
  v8 = v13; /*0x7d7de9*/
  v4 = _I10_OUTPUT(v12[0], v12[1], v8, 17, 0, &v9); /*0x7d7deb*/
  v5 = a3; /*0x7d7df0*/
  v6 = Destination; /*0x7d7df3*/
  a3[2] = v4; /*0x7d7df6*/
  *v5 = v10; /*0x7d7dfd*/
  v5[1] = v9; /*0x7d7e03*/
  strcpy(v6, Source); /*0x7d7e0b*/
  v5[3] = v6; /*0x7d7e13*/
  return v5; /*0x7d7e18*/
}
} // namespace gamemd

// 0x7D7E1C
namespace gamemd {
int ___dtold()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7E1C.json)
}
} // namespace gamemd

// 0x7D7ED2
namespace gamemd {
void __noreturn _fptrap()
{
  _amsg_exit(2u); /*0x7d7ed4*/
}
} // namespace gamemd

// 0x7D8496
namespace gamemd {
int unknown_libname_78()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8496.json)
}
} // namespace gamemd

// 0x7D84A9
namespace gamemd {
int unknown_libname_79()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D84A9.json)
}
} // namespace gamemd

// 0x7D86BC
namespace gamemd {
int unknown_libname_88()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D86BC.json)
}
} // namespace gamemd

// 0x7D86D1
namespace gamemd {
int unknown_libname_89()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D86D1.json)
}
} // namespace gamemd

// 0x7D8D3B
namespace gamemd {
double _set_exp(double a1, short a2)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8D3B.json)
}
} // namespace gamemd

// 0x7D8DA4
namespace gamemd {
double _set_bexp(double a1, short a2)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8DA4.json)
}
} // namespace gamemd

// 0x7D8DC8
namespace gamemd {
int _sptype(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8DC8.json)
}
} // namespace gamemd

// 0x7D8EF5
namespace gamemd {
double _copysign(double Number, double Sign)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8EF5.json)
}
} // namespace gamemd

// 0x7D8F16
namespace gamemd {
double _chgsign(double X)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8F16.json)
}
} // namespace gamemd

// 0x7D8F3B
namespace gamemd {
double _scalb(double X, int Y)
{
  return ldexp(X, Y); /*0x7d8f50*/
}
} // namespace gamemd

// 0x7D8F51
namespace gamemd {
double _logb(double X)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8F51.json)
}
} // namespace gamemd

// 0x7D92CD
namespace gamemd {
int _finite(double X)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D92CD.json)
}
} // namespace gamemd

// 0x7D92E1
namespace gamemd {
int _isnan(double X)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D92E1.json)
}
} // namespace gamemd

// 0x7D930F
namespace gamemd {
int _fpclass(double X)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D930F.json)
}
} // namespace gamemd

// 0x7D94C4
namespace gamemd {
int _set_osfhnd(int a1, HANDLE hHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D94C4.json)
}
} // namespace gamemd

// 0x7D9540
namespace gamemd {
int _free_osfhnd(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9540.json)
}
} // namespace gamemd

// 0x7D95BF
namespace gamemd {
intptr_t _get_osfhandle(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D95BF.json)
}
} // namespace gamemd

// 0x7D9601
namespace gamemd {
int _open_osfhandle(intptr_t OSFileHandle, int Flags)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9601.json)
}
} // namespace gamemd

// 0x7D96A8
namespace gamemd {
void _lock_fhandle(int a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D96A8.json)
}
} // namespace gamemd

// 0x7D9707
namespace gamemd {
void _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F) + 12)); /*0x7d9722*/
}
} // namespace gamemd

// 0x7D9D43
namespace gamemd {
int __STRINGTOLD(int a1, char ** a2, char * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9D43.json)
}
} // namespace gamemd

// 0x7D9D7F
namespace gamemd {
int mbtowc(wchar_t * DstCh, const char * SrcCh, size_t SrcSizeInBytes)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9D7F.json)
}
} // namespace gamemd

// 0x7D9EB0
namespace gamemd {
int __allshl()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9EB0.json)
}
} // namespace gamemd

// 0x7D9ECF
namespace gamemd {
int ungetc(int Character, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9ECF.json)
}
} // namespace gamemd

// 0x7D9EF8
namespace gamemd {
int ungetc_0(int Character, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9EF8.json)
}
} // namespace gamemd

// 0x7D9F66
namespace gamemd {
LONG ___CxxUnhandledExceptionFilter_YGJPAU_EXCEPTION_POINTERS___Z(struct _EXCEPTION_POINTERS * ExceptionInfo)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9F66.json)
}
} // namespace gamemd

// 0x7D9FBD
namespace gamemd {
LPTOP_LEVEL_EXCEPTION_FILTER sub_7D9FBD()
{
  return SetUnhandledExceptionFilter(lpfn); /*0x7d9fc9*/
}
} // namespace gamemd

// 0x7DA4BF
namespace gamemd {
int wcsncnt_0(CampaignScore * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA4BF.json)
}
} // namespace gamemd

// 0x7DA4EF
namespace gamemd {
wint_t fgetwc_0x7DA4EF(FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA4EF.json)
}
} // namespace gamemd

// 0x7DA9A2
namespace gamemd {
unsigned char * strncnt_0(unsigned char * a1, int a2)
{
  unsigned char *v2; // eax
  int v3; // ecx

  v2 = a1; /*0x7da9a6*/
  v3 = a2 - 1; /*0x7da9ad*/
  if ( a2 ) /*0x7da9b0*/
  {
    do /*0x7da9bd*/
    {
      if ( !*v2 ) /*0x7da9b2*/
        break; /*0x7da9b5*/
      ++v2; /*0x7da9b7*/
    }
    while ( v3-- ); /*0x7da9bd*/
  }
  if ( *v2 ) /*0x7da9bf*/
    return (unsigned char *)a2; /*0x7da9ca*/
  else
    return (unsigned char *)(v2 - a1); /*0x7da9c5*/
}
} // namespace gamemd

// 0x7DAB54
namespace gamemd {
int findenv(unsigned char * Str1, size_t MaxCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAB54.json)
}
} // namespace gamemd

// 0x7DABAC
namespace gamemd {
unsigned int * copy_environ(unsigned int * a1)
{
  int v1; // ecx
  int *v3; // eax
  int v4; // edx
  unsigned int *v5; // esi
  unsigned int *v6; // ebp
  const char *v7; // eax
  const char **v8; // ebx

  v1 = 0; /*0x7dabb1*/
  if ( !a1 ) /*0x7dabb5*/
    return 0; /*0x7dabb7*/
  v3 = a1 + 1; /*0x7dabbe*/
  if ( *a1 ) /*0x7dabbb*/
  {
    do /*0x7dabcb*/
    {
      v4 = *v3; /*0x7dabc3*/
      ++v1; /*0x7dabc5*/
      ++v3; /*0x7dabc6*/
    }
    while ( v4 ); /*0x7dabcb*/
  }
  v5 = malloc(4 * v1 + 4); /*0x7dabdd*/
  v6 = v5; /*0x7dabe2*/
  if ( !v5 ) /*0x7dabe4*/
    _amsg_exit(9u); /*0x7dabe8*/
  v7 = (const char *)*a1; /*0x7dabee*/
  v8 = (const char **)a1; /*0x7dabf0*/
  while ( v7 ) /*0x7dabf4*/
  {
    ++v8; /*0x7dabf7*/
    *v5 = _strdup(v7); /*0x7dabff*/
    v7 = *v8; /*0x7dac01*/
    ++v5; /*0x7dac04*/
  }
  *v5 = 0; /*0x7dac09*/
  return v6; /*0x7dabb9*/
}
} // namespace gamemd

// 0x7DADA2
namespace gamemd {
int _ismbbkprint(unsigned int C)
{
  return CRTisctype(C, 0, 3u); /*0x7dadb2*/
}
} // namespace gamemd

// 0x7DADB3
namespace gamemd {
int _ismbbkpunct(unsigned int C)
{
  return CRTisctype(C, 0, 2u); /*0x7dadc3*/
}
} // namespace gamemd

// 0x7DADC4
namespace gamemd {
int _ismbbalnum(unsigned int C)
{
  return CRTisctype(C, 263, 1u); /*0x7dadd7*/
}
} // namespace gamemd

// 0x7DADD8
namespace gamemd {
int _ismbbalpha(unsigned int C)
{
  return CRTisctype(C, 259, 1u); /*0x7dadeb*/
}
} // namespace gamemd

// 0x7DADEC
namespace gamemd {
int _ismbbgraph(unsigned int C)
{
  return CRTisctype(C, 279, 3u); /*0x7dadff*/
}
} // namespace gamemd

// 0x7DAE00
namespace gamemd {
int _ismbbprint(unsigned int C)
{
  return CRTisctype(C, 343, 3u); /*0x7dae13*/
}
} // namespace gamemd

// 0x7DAE14
namespace gamemd {
int _ismbbpunct(unsigned int C)
{
  return CRTisctype(C, 16, 2u); /*0x7dae24*/
}
} // namespace gamemd

// 0x7DAE25
namespace gamemd {
int _ismbblead(unsigned int Ch)
{
  return CRTisctype(Ch, 0, 4u); /*0x7dae35*/
}
} // namespace gamemd

// 0x7DAE36
namespace gamemd {
int _ismbbtrail(unsigned int Ch)
{
  return CRTisctype(Ch, 0, 8u); /*0x7dae46*/
}
} // namespace gamemd

// 0x7DAE47
namespace gamemd {
int _ismbbkana(unsigned int C)
{
  return dword_B78840 == 932 && CRTisctype(C, 0, 3u); /*0x7dae6a*/
}
} // namespace gamemd

// 0x7DB060
namespace gamemd {
CCINIClass * sub_7DB060()
{
  return off_87D620; /*0x7db065*/
}
} // namespace gamemd

// 0x7DB066
namespace gamemd {
int __addl(unsigned int a1, unsigned int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB066.json)
}
} // namespace gamemd

// 0x7DB087
namespace gamemd {
int __add_12(unsigned int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB087.json)
}
} // namespace gamemd

// 0x7DB0E5
namespace gamemd {
unsigned int * __shl_12(unsigned int * a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // ecx

  v2 = a1[1]; /*0x7db0ed*/
  v3 = *a1; /*0x7db0f0*/
  *a1 *= 2; /*0x7db0f4*/
  v4 = (v3 >> 31) | (2 * v2); /*0x7db0fc*/
  v5 = a1[2]; /*0x7db0fe*/
  a1[1] = v4; /*0x7db103*/
  a1[2] = (v2 >> 31) | (2 * v5); /*0x7db10e*/
  return a1; /*0x7db10d*/
}
} // namespace gamemd

// 0x7DB113
namespace gamemd {
int * __shr_12(int * a1)
{
  unsigned int v2; // edx
  int v3; // edi
  int v4; // ecx

  v2 = a1[2]; /*0x7db119*/
  v3 = a1[1]; /*0x7db121*/
  a1[1] = *(int64_t *)(a1 + 1) >> 1; /*0x7db12a*/
  v4 = (v3 << 31) | ((unsigned int)*a1 >> 1); /*0x7db136*/
  a1[2] = v2 >> 1; /*0x7db139*/
  *a1 = v4; /*0x7db13c*/
  return a1; /*0x7db138*/
}
} // namespace gamemd

// 0x7DB140
namespace gamemd {
short __mtold12(char * a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB140.json)
}
} // namespace gamemd

// 0x7DB49A
namespace gamemd {
double _handle_qnan1(int a1, double a2, int a3)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB49A.json)
}
} // namespace gamemd

// 0x7DB4EE
namespace gamemd {
double _handle_qnan2(int a1, double a2, double a3, int a4)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB4EE.json)
}
} // namespace gamemd

// 0x7DB54E
namespace gamemd {
double _except1(DWORD dwExceptionCode, int a2, double a3, double a4, int a5)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB54E.json)
}
} // namespace gamemd

// 0x7DB5E6
namespace gamemd {
double _except2(DWORD dwExceptionCode, int a2, double a3, double a4, double a5, int a6)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB5E6.json)
}
} // namespace gamemd

// 0x7DBB55
namespace gamemd {
double _umatherr(int Value, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBB55.json)
}
} // namespace gamemd

// 0x7DBBDD
namespace gamemd {
errno_t _set_errno(int Value)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBBDD.json)
}
} // namespace gamemd

// 0x7DBC05
namespace gamemd {
void ** _get_fname(int a1)
{
  int v1; // ecx
  int *v2; // eax

  v1 = 0; /*0x7dbc05*/
  v2 = (int *)&unk_87D628; /*0x7dbc07*/
  while ( *v2 != a1 ) /*0x7dbc12*/
  {
    v2 += 2; /*0x7dbc14*/
    ++v1; /*0x7dbc17*/
    if ( (int)v2 >= (int)&dword_87D700 ) /*0x7dbc1d*/
      return 0; /*0x7dbc21*/
  }
  return (&off_87D62C)[2 * v1]; /*0x7dbc21*/
}
} // namespace gamemd

// 0x7DBC2A
namespace gamemd {
int _errcode(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBC2A.json)
}
} // namespace gamemd

// 0x7DBC57
namespace gamemd {
int ReturnNull5()
{
  return 0; /*0x7dbc59*/
}
} // namespace gamemd

// 0x7DBC5A
namespace gamemd {
void __statfp()
{
  return a1; /*0x7dbc66*/
}
}
// 0x7DBC77
namespace gamemd {
int _ctrlfp(short a1)
{
  return a1; /*0x7dbc98*/
}
} // namespace gamemd

// 0x7DBC9A
namespace gamemd {
void _set_statfp()
{
  ; /*0x7dbc9a*/
}
} // namespace gamemd

// 0x7DC0F6
namespace gamemd {
void __multtenpow12(unsigned short * a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC0F6.json)
}
} // namespace gamemd

// 0x7DC1AA
namespace gamemd {
bool __ValidateExecute_YAHP6GHXZ_Z(FARPROC lpfn)
{
  return !IsBadCodePtr(lpfn); /*0x7dc1c0*/
}
} // namespace gamemd

// 0x7DC1C2
namespace gamemd {
void  __noreturn _terminate_YAXXZ()
{
  unsigned int *v0; // eax

  if ( _getptd()[24] ) /*0x7dc1f1*/
  {
    v0 = _getptd(); /*0x7dc1fd*/
    ((void (*)(void))v0[24])(); /*0x7dc202*/
  }
  abort(); /*0x7dc21e*/
}
} // namespace gamemd

// 0x7DC223
namespace gamemd {
void  __noreturn _unexpected_YAXXZ()
{
  unsigned int *v0; // eax

  if ( _getptd()[25] ) /*0x7dc228*/
  {
    v0 = _getptd(); /*0x7dc22e*/
    ((void (*)(void))v0[25])(); /*0x7dc233*/
  }
  _terminate_YAXXZ(); /*0x7dc236*/
}
} // namespace gamemd

// 0x7DC278
namespace gamemd {
int sub_7DC278()
{
  return 1; /*0x7dc27b*/
}
} // namespace gamemd

// 0x7DC72B
namespace gamemd {
void nullsub_271(int a1)
{
  ; /*0x7dc72b*/
}
} // namespace gamemd

// 0x7DC78F
namespace gamemd {
int sub_7DC78F(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * perrinfo, LPCWSTR lpString, int a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC78F.json)
}
} // namespace gamemd

// 0x7DCC74
namespace gamemd {
int sub_7DCC74(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * pperrinfo, LPCWSTR lpString, int a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DCC74.json)
}
} // namespace gamemd

// 0x7DCD9C
namespace gamemd {
void  __noreturn COM_ThrowError(int a1, int a2, int a3)
{
  unsigned char pExceptionObject[16]; // [esp+0h] [ebp-10h] BYREF

  ThrowErrorCOM_Helper(a1, a2, 0); /*0x7dcdad*/
  _CxxThrowException_8(pExceptionObject, (_ThrowInfo *)&_TI1_AV_com_error__); /*0x7dcdbb*/
}
} // namespace gamemd

// 0x7DCDF2
namespace gamemd {
ObjectClass * E4Recv_7DCDF2::sub_7DCDF2(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DCDF2.json)
}
} // namespace gamemd

// 0x7DCE62
namespace gamemd {
int HeapFree()
{
  return __imp_HeapFree(hHeap, dwFlags, lpMem);
}
} // namespace gamemd

// 0x7DCE68
namespace gamemd {
int HeapAlloc()
{
  return __imp_HeapAlloc(hHeap, dwFlags, dwBytes);
}
} // namespace gamemd

// 0x7DCE6E
namespace gamemd {
int GetTimeZoneInformation()
{
  return __imp_GetTimeZoneInformation(lpTimeZoneInformation);
}
} // namespace gamemd

// 0x7DCE74
namespace gamemd {
int GetLocalTime()
{
  __imp_GetLocalTime(lpSystemTime); /*0x7dce74*/
}
} // namespace gamemd

// 0x7DCE7A
namespace gamemd {
int RtlUnwind()
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue); /*0x7dce7a*/
}
} // namespace gamemd

// 0x7DCE80
namespace gamemd {
int GetCommandLineA()
{
  return __imp_GetCommandLineA();
}
} // namespace gamemd

// 0x7DCE86
namespace gamemd {
int GetVersion()
{
  return __imp_GetVersion();
}
} // namespace gamemd

// 0x7DCE8C
namespace gamemd {
int FatalAppExitA()
{
  __imp_FatalAppExitA(uAction, lpMessageText); /*0x7dce8c*/
}
} // namespace gamemd

// 0x7DCE92
namespace gamemd {
int HeapCreate()
{
  return __imp_HeapCreate(flOptions, dwInitialSize, dwMaximumSize);
}
} // namespace gamemd

// 0x7DCE98
namespace gamemd {
int VirtualFree()
{
  return __imp_VirtualFree(lpAddress, dwSize, dwFreeType);
}
} // namespace gamemd

// 0x7DCE9E
namespace gamemd {
int VirtualAlloc()
{
  return __imp_VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
}
} // namespace gamemd

// 0x7DCEA4
namespace gamemd {
int HeapReAlloc()
{
  return __imp_HeapReAlloc(hHeap, dwFlags, lpMem, dwBytes);
}
} // namespace gamemd

// 0x7DCEAA
namespace gamemd {
int IsBadWritePtr()
{
  return __imp_IsBadWritePtr(lp, ucb);
}
} // namespace gamemd

// 0x7DCEB0
namespace gamemd {
int HeapSize()
{
  return __imp_HeapSize(hHeap, dwFlags, lpMem);
}
} // namespace gamemd

// 0x7DCEB6
namespace gamemd {
int LCMapStringA()
{
  return __imp_LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
} // namespace gamemd

// 0x7DCEBC
namespace gamemd {
int LCMapStringW()
{
  return __imp_LCMapStringW(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
} // namespace gamemd

// 0x7DCEC2
namespace gamemd {
int TlsSetValue()
{
  return __imp_TlsSetValue(dwTlsIndex, lpTlsValue);
}
} // namespace gamemd

// 0x7DCEC8
namespace gamemd {
int TlsAlloc()
{
  return __imp_TlsAlloc();
}
} // namespace gamemd

// 0x7DCECE
namespace gamemd {
int TlsFree()
{
  return __imp_TlsFree(dwTlsIndex);
}
} // namespace gamemd

// 0x7DCED4
namespace gamemd {
int SetLastError()
{
  __imp_SetLastError(dwErrCode); /*0x7dced4*/
}
} // namespace gamemd

// 0x7DCEDA
namespace gamemd {
int TlsGetValue()
{
  return __imp_TlsGetValue(dwTlsIndex);
}
} // namespace gamemd

// 0x7DCEE6
namespace gamemd {
int RaiseException()
{
  __imp_RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments); /*0x7dcee6*/
}
} // namespace gamemd

// 0x7DCEEC
namespace gamemd {
int FlushFileBuffers()
{
  return __imp_FlushFileBuffers(hFile);
}
} // namespace gamemd

// 0x7DCEF2
namespace gamemd {
int SetHandleCount()
{
  return __imp_SetHandleCount(uNumber);
}
} // namespace gamemd

// 0x7DCEF8
namespace gamemd {
int GetStdHandle()
{
  return __imp_GetStdHandle(nStdHandle);
}
} // namespace gamemd

// 0x7DCEFE
namespace gamemd {
int GetFileType()
{
  return __imp_GetFileType(hFile);
}
} // namespace gamemd

// 0x7DCF04
namespace gamemd {
int GetCPInfo()
{
  return __imp_GetCPInfo(CodePage, lpCPInfo);
}
} // namespace gamemd

// 0x7DCF0A
namespace gamemd {
int GetACP()
{
  return __imp_GetACP();
}
} // namespace gamemd

// 0x7DCF10
namespace gamemd {
int GetOEMCP()
{
  return __imp_GetOEMCP();
}
} // namespace gamemd

// 0x7DCF16
namespace gamemd {
int SetConsoleCtrlHandler()
{
  return __imp_SetConsoleCtrlHandler(HandlerRoutine, Add);
}
} // namespace gamemd

// 0x7DCF1C
namespace gamemd {
int GetFileAttributesA()
{
  return __imp_GetFileAttributesA(lpFileName);
}
} // namespace gamemd

// 0x7DCF28
namespace gamemd {
int UnhandledExceptionFilter()
{
  return __imp_UnhandledExceptionFilter(ExceptionInfo);
}
} // namespace gamemd

// 0x7DCF2E
namespace gamemd {
int FreeEnvironmentStringsA()
{
  return __imp_FreeEnvironmentStringsA(penv);
}
} // namespace gamemd

// 0x7DCF34
namespace gamemd {
int FreeEnvironmentStringsW()
{
  return __imp_FreeEnvironmentStringsW(penv);
}
} // namespace gamemd

// 0x7DCF3A
namespace gamemd {
int GetEnvironmentStrings()
{
  return __imp_GetEnvironmentStrings();
}
} // namespace gamemd

// 0x7DCF40
namespace gamemd {
int GetEnvironmentStringsW()
{
  return __imp_GetEnvironmentStringsW();
}
} // namespace gamemd

// 0x7DCF46
namespace gamemd {
int IsValidLocale()
{
  return __imp_IsValidLocale(Locale, dwFlags);
}
} // namespace gamemd

// 0x7DCF4C
namespace gamemd {
int IsValidCodePage()
{
  return __imp_IsValidCodePage(CodePage);
}
} // namespace gamemd

// 0x7DCF52
namespace gamemd {
int GetLocaleInfoA()
{
  return __imp_GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
}
} // namespace gamemd

// 0x7DCF58
namespace gamemd {
int EnumSystemLocalesA()
{
  return __imp_EnumSystemLocalesA(lpLocaleEnumProc, dwFlags);
}
} // namespace gamemd

// 0x7DCF5E
namespace gamemd {
int GetUserDefaultLCID()
{
  return __imp_GetUserDefaultLCID();
}
} // namespace gamemd

// 0x7DCF64
namespace gamemd {
int SetStdHandle()
{
  return __imp_SetStdHandle(nStdHandle, hHandle);
}
} // namespace gamemd

// 0x7DCF6A
namespace gamemd {
int GetStringTypeA()
{
  return __imp_GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
} // namespace gamemd

// 0x7DCF70
namespace gamemd {
int GetStringTypeW()
{
  return __imp_GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
} // namespace gamemd

// 0x7DCF76
namespace gamemd {
int CompareStringA()
{
  return __imp_CompareStringA(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
} // namespace gamemd

// 0x7DCF7C
namespace gamemd {
int CompareStringW()
{
  return __imp_CompareStringW(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
} // namespace gamemd

// 0x7DCF82
namespace gamemd {
int SetEnvironmentVariableA()
{
  return __imp_SetEnvironmentVariableA(lpName, lpValue);
}
} // namespace gamemd

// 0x7DCF88
namespace gamemd {
int SetEndOfFile()
{
  return __imp_SetEndOfFile(hFile);
}
} // namespace gamemd

// 0x7DCF8E
namespace gamemd {
int GetLocaleInfoW()
{
  return __imp_GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
}
} // namespace gamemd

// 0x7DCF94
namespace gamemd {
int lstrlenW()
{
  return __imp_lstrlenW(lpString);
}
} // namespace gamemd

// 0x7DCF9A
namespace gamemd {
int LocalFree()
{
  return __imp_LocalFree(hMem);
}
} // namespace gamemd

// 0x7DCFA0
namespace gamemd {
int GetErrorInfo()
{
  return __imp_GetErrorInfo(dwReserved, pperrinfo);
}
} // namespace gamemd

// 0x7DCFA6
namespace gamemd {
int SetErrorInfo()
{
  return __imp_SetErrorInfo(dwReserved, perrinfo);
}
} // namespace gamemd

// 0x7DCFAC
namespace gamemd {
int VariantChangeType()
{
  return __imp_VariantChangeType(pvargDest, pvarSrc, wFlags, vt);
}
} // namespace gamemd

// 0x7DCFB2
namespace gamemd {
int CreateErrorInfo()
{
  return __imp_CreateErrorInfo(pperrinfo);
}
} // namespace gamemd

// 0x7DCFB8
namespace gamemd {
int VariantClear()
{
  return __imp_VariantClear(pvarg);
}
} // namespace gamemd

// 0x7DCFBE
namespace gamemd {
int VariantInit()
{
  __imp_VariantInit(pvarg); /*0x7dcfbe*/
}
} // namespace gamemd

// 0x7DD0F8
namespace gamemd {
int _wcsicmp(const wchar_t * String1, const wchar_t * String2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD0F8.json)
}
} // namespace gamemd

// 0x7DD1D7
namespace gamemd {
int sub_7DD1D7()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD1D7.json)
}
} // namespace gamemd

// 0x7DD2E0
namespace gamemd {
int sub_7DD2E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD2E0.json)
}
} // namespace gamemd

// 0x7DD334
namespace gamemd {
int _kbhit()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD334.json)
}
} // namespace gamemd

// 0x7DD413
namespace gamemd {
int _ungetch(int Ch)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD413.json)
}
} // namespace gamemd

// 0x7DD434
namespace gamemd {
unsigned char * _getextendedkeycode(int a1)
{
  int v1; // ebx
  unsigned char *result; // eax
  int v3; // ecx
  unsigned short *v4; // esi
  int v5; // eax

  v1 = *(unsigned int *)(a1 + 12); /*0x7dd43a*/
  if ( (v1 & 0x100) != 0 ) /*0x7dd440*/
  {
    result = 0; /*0x7dd446*/
    v3 = 0; /*0x7dd448*/
    v4 = &unk_87DA30; /*0x7dd44a*/
    while ( *v4 != *(unsigned short *)(a1 + 8) ) /*0x7dd452*/
    {
      v4 += 5; /*0x7dd454*/
      ++v3; /*0x7dd457*/
      if ( (int)v4 >= (int)word_87DAA8 ) /*0x7dd45e*/
        return result; /*0x7dd45e*/
    }
    if ( (v1 & 3) != 0 ) /*0x7dd468*/
    {
      return (unsigned char *)(10 * v3 + 8903224); /*0x7dd46d*/
    }
    else if ( (v1 & 0xC) != 0 ) /*0x7dd479*/
    {
      return (unsigned char *)(10 * v3 + 8903222); /*0x7dd47e*/
    }
    else if ( (v1 & 0x10) != 0 ) /*0x7dd48d*/
    {
      return (unsigned char *)(10 * v3 + 8903220); /*0x7dd48f*/
    }
    else
    {
      return (unsigned char *)(10 * v3 + 8903218); /*0x7dd498*/
    }
  }
  else
  {
    if ( (v1 & 3) != 0 ) /*0x7dd4a4*/
    {
      result = (unsigned char *)(8 * *(uint16_t *)(a1 + 8) + 8903342); /*0x7dd4aa*/
    }
    else if ( (v1 & 0xC) != 0 ) /*0x7dd4b6*/
    {
      result = (unsigned char *)(8 * *(uint16_t *)(a1 + 8) + 8903340); /*0x7dd4bc*/
    }
    else
    {
      v5 = *(uint16_t *)(a1 + 8); /*0x7dd4c5*/
      if ( (v1 & 0x10) != 0 ) /*0x7dd4cc*/
        result = (unsigned char *)(8 * v5 + 8903338); /*0x7dd4ce*/
      else
        result = (unsigned char *)(8 * v5 + 8903336); /*0x7dd4d7*/
    }
    if ( *result && *result != 0xE0 || !result[1] ) /*0x7dd4e9*/
      return 0; /*0x7dd4ef*/
  }
  return result; /*0x7dd4f1*/
}
} // namespace gamemd

// 0x7DD4F4
namespace gamemd {
int _cwprintf(const wchar_t *const Format, ...)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD4F4.json)
}
} // namespace gamemd

// 0x7DDC32
namespace gamemd {
unsigned int * write_char_1(int a1, unsigned int * a2)
{
  bool v2; // zf
  unsigned int *result; // eax

  v2 = _putch(a1) == -1; /*0x7ddc3b*/
  result = a2; /*0x7ddc3e*/
  if ( v2 ) /*0x7ddc43*/
    *a2 = -1; /*0x7ddc45*/
  else
    ++*a2; /*0x7ddc49*/
  return result; /*0x7ddc48*/
}
} // namespace gamemd

// 0x7DDC4C
namespace gamemd {
unsigned int * write_multi_char_1(int a1, unsigned int * a2, unsigned int * a3)
{
  unsigned int *result; // eax
  unsigned int *i; // edi

  result = a2; /*0x7ddc52*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7ddc57*/
  {
    result = write_char_1(a1, a3); /*0x7ddc62*/
    if ( *a3 == -1 ) /*0x7ddc6c*/
      break; /*0x7ddc6c*/
    result = i; /*0x7ddc6e*/
  }
  return result; /*0x7ddc75*/
}
} // namespace gamemd

// 0x7DDC78
namespace gamemd {
unsigned int * write_string_1(char * a1, unsigned int * a2, unsigned int * a3)
{
  unsigned int *result; // eax
  unsigned int *i; // ebx
  int v6; // [esp-8h] [ebp-14h]

  result = a2; /*0x7ddc7d*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7ddc84*/
  {
    v6 = *a1++; /*0x7ddc92*/
    result = write_char_1(v6, a3); /*0x7ddc94*/
    if ( *a3 == -1 ) /*0x7ddc9e*/
      break; /*0x7ddc9e*/
    result = i; /*0x7ddca0*/
  }
  return result; /*0x7ddca7*/
}
} // namespace gamemd

// 0x7DDCAB
namespace gamemd {
int get_int_arg_1(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DDCAB.json)
}
} // namespace gamemd

// 0x7DDCB8
namespace gamemd {
long long get_int64_arg_1(unsigned int * a1)
{
  *a1 += 8; /*0x7ddcbc*/
  return *(unsigned long long *)(*a1 - 8); /*0x7ddcc7*/
}
} // namespace gamemd

// 0x7DDCC8
namespace gamemd {
short get_short_arg_0(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DDCC8.json)
}
} // namespace gamemd

// 0x7DDE13
namespace gamemd {
wchar_t * _wcsdup(CampaignScore * aP0)
{
  int v1; // eax
  wchar_t *v2; // eax

  if ( aP0 && (v1 = wcslen(aP0), (v2 = (wchar_t *)malloc(2 * v1 + 2)) != 0) ) /*0x7dde30*/
    return wcscpy(v2, aP0); /*0x7dde34*/
  else
    return 0; /*0x7dde3d*/
}
} // namespace gamemd

// 0x7DDE50
namespace gamemd {
char * _strrev(IUnknown * aP0)
{
  char *v1; // esi
  unsigned int v2; // kr04_4
  char *i; // edi
  char v4; // ah

  v1 = aP0; /*0x7dde5a*/
  v2 = strlen(aP0) + 1; /*0x7dde61*/
  if ( ~v2 != -2 ) /*0x7dde66*/
  {
    for ( i = &aP0[v2 - 2]; v1 < i; --i ) /*0x7dde69*/
    {
      v4 = *v1; /*0x7dde6e*/
      *v1 = *i; /*0x7dde72*/
      *i = v4; /*0x7dde74*/
      ++v1; /*0x7dde76*/
    }
  }
  return aP0; /*0x7dde7c*/
}
} // namespace gamemd

// 0x7DDE80
namespace gamemd {
int _wcsnicmp(ObjectClass * aP0, const wchar_t * String2, size_t MaxCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DDE80.json)
}
} // namespace gamemd

// 0x7DDF78
namespace gamemd {
int _filelength(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DDF78.json)
}
} // namespace gamemd

// 0x7DE002
namespace gamemd {
wint_t towlower(wint_t C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE002.json)
}
} // namespace gamemd

// 0x7DE07C
namespace gamemd {
wint_t towlower_0(wint_t C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE07C.json)
}
} // namespace gamemd

// 0x7DE0F1
namespace gamemd {
HANDLE __initconin()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE0F1.json)
}
} // namespace gamemd

// 0x7DE110
namespace gamemd {
HANDLE __initconout()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE110.json)
}
} // namespace gamemd

// 0x7DE12F
namespace gamemd {
HANDLE __termcon()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE12F.json)
}
} // namespace gamemd

// 0x7DE17D
namespace gamemd {
int _putch(int Ch)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE17D.json)
}
} // namespace gamemd

// 0x7DE1C2
namespace gamemd {
int ReadConsoleInputA()
{
  return __imp_ReadConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
} // namespace gamemd

// 0x7DE1C8
namespace gamemd {
int SetConsoleMode()
{
  return __imp_SetConsoleMode(hConsoleHandle, dwMode);
}
} // namespace gamemd

// 0x7DE1CE
namespace gamemd {
int GetConsoleMode()
{
  return __imp_GetConsoleMode(hConsoleHandle, lpMode);
}
} // namespace gamemd

// 0x7DE1D4
namespace gamemd {
int PeekConsoleInputA()
{
  return __imp_PeekConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
} // namespace gamemd

// 0x7DE1DA
namespace gamemd {
int GetNumberOfConsoleInputEvents()
{
  return __imp_GetNumberOfConsoleInputEvents(hConsoleInput, lpNumberOfEvents);
}
} // namespace gamemd

// 0x7DE1E0
namespace gamemd {
int WriteConsoleA()
{
  return __imp_WriteConsoleA(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, lpReserved);
}
} // namespace gamemd

// 0x7DF9B7
namespace gamemd {
int sub_7DF9B7(int * a1)
{
  return Voxel::FacePixelBuffer(a1);
}
} // namespace gamemd
