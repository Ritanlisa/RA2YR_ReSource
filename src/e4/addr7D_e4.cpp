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
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { int ctrlevent_capture_4(...); }  // w18j2 raw call-form (variadic last resort) [w18j2 repaired-variadic] [w18j2 repaired-variadic]

// MSVC6 CRT FILE layout (UCRT _iobuf opaque; W16G3, addr7C precedent)
struct _iobuf_msvc6 { char *_ptr; int _cnt; char *_base; int _flag; int _file; int _charbuf; int _bufsiz; char *_tmpfname; };
// [w14e3] vocab extender (raw call-form evidence)
namespace gamemd { int _sopen(...); }
namespace gamemd { int _lock_file2(...); }
namespace gamemd { int _flswbuf(...); }
namespace gamemd { int _lock_fhandle(...); }
namespace gamemd { int _get_osfhandle(...); }
namespace gamemd { int _unlock_fhandle(...); }
namespace gamemd { int _amsg_exit(...); }
namespace gamemd { int getSystemCP(...); }
namespace gamemd { int setSBCS(...); }
namespace gamemd { int setSBUpLow(...); }
namespace gamemd { int CPtoLCID(...); }
namespace gamemd { int __crtGetStringTypeW(...); }
namespace gamemd { int _whiteout_0(...); }
namespace gamemd { int _un_inc_0(...); }
// [w14e3] CRT/SEH vocab supply (g57b5-W5 variadic convention; raw call-form arities cited)
// CPPEH_RECORD: IDA SEH pseudo-struct, usage-shaped (sibling def: addr7C_e4.cpp; fields used here:
// ms_exc.old_esp / ms_exc.registration.TryLevel per 0x7D11C4-0x7D1280)
struct CPPEH_RECORD { void *old_esp; struct { int TryLevel; } registration; };
namespace gamemd {
int __sbh_find_block(...);   // raw 0x7C93E8 call form __sbh_find_block(Block)
int __sbh_alloc_block(...);  // raw 0x7C946E call form __sbh_alloc_block(a1)
int __sbh_resize_block(...); // raw 0x7D0FA5 call form __sbh_resize_block(v5, aP0, v3)
int write_char_0(...);       // raw 0x7D2368 call form write_char_0(v5, File, &v51)
int get_int64_arg_0(...);    // raw 0x7D26AD call form get_int64_arg_0(&a3)
int write_multi_char_0(...); // raw 0x7D281A call form write_multi_char_0(0x20u, n, File, p)
int write_string_0(...);     // raw 0x7D2830 call form write_string_0(&v48, n, File, p)
int _flsbuf(...);            // raw 0x7C8EF4 call form _flsbuf(0, &File)
int _unlock_file2(...);      // raw 0x7CB12E call form _unlock_file2(1, &File)
int gethostname(...);        // ws2_32 import, raw call form gethostname(name, len)
} // namespace gamemd

// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char a1;  // data: 0x831898 truth(IDA G42.57w9)


// 0x7D038F
namespace gamemd {
int __sbh_heap_check()
{
    unsigned int *v2; // ebx
    unsigned int *v3; // esi
    void *v4; // eax
    unsigned int *v5; // esi
    int v6; // ebx
    unsigned int *v7; // edx
    int *v8; // esi
    int v9; // ecx
    int v10; // edi
    int v11; // eax
    unsigned int *v12; // eax
    int *v13; // esi
    unsigned int v14; // eax
    unsigned int v15; // edx
    unsigned int *v16; // ecx
    unsigned int v17; // edx
    int v18; // ecx
    unsigned int v19; // eax
    unsigned int v21[64]; // [esp+Ch] [ebp-13Ch] BYREF
    unsigned int *v22; // [esp+10Ch] [ebp-3Ch]
    unsigned int *v23; // [esp+110h] [ebp-38h]
    int *v24; // [esp+114h] [ebp-34h]
    int v25; // [esp+118h] [ebp-30h]
    int v26; // [esp+11Ch] [ebp-2Ch]
    int *v27; // [esp+120h] [ebp-28h]
    int v28; // [esp+124h] [ebp-24h]
    int v29; // [esp+128h] [ebp-20h]
    int v30; // [esp+12Ch] [ebp-1Ch]
    int v31; // [esp+130h] [ebp-18h]
    int v32; // [esp+134h] [ebp-14h]
    int v33; // [esp+138h] [ebp-10h]
    LPVOID lp; // [esp+13Ch] [ebp-Ch]
    int v35; // [esp+140h] [ebp-8h]
    unsigned int *v36; // [esp+144h] [ebp-4h]

    if ( IsBadWritePtr((LPVOID)(::lp), 20 * dword_B78B94) ) /*0x7d03ad*/
      return -1; /*0x7d03ba*/
    v2 = (unsigned int *)(::lp); /*0x7d03bf*/
    v23 = (unsigned int *)(::lp); /*0x7d03cd*/
    v29 = 0; /*0x7d03d0*/
    if ( dword_B78B94 <= 0 ) /*0x7d03d3*/
      return 0; /*0x7d03d3*/
    while ( 2 ) /*0x7d03dd*/
    {
      v3 = (unsigned int *)v2[4]; /*0x7d03dd*/
      if ( !IsBadWritePtr(v3, 0x41C4u) ) /*0x7d03e6*/
      {
        v4 = (void *)v2[3]; /*0x7d03f4*/
        v26 = 0; /*0x7d03f7*/
        lp = (LPVOID)((unsigned int)v4); /*0x7d03fa*/
        v27 = (int *)(v3 + 81); /*0x7d0403*/
        v5 = v3 + 49; /*0x7d0409*/
        v32 = v2[2]; /*0x7d040f*/
        v31 = 0; /*0x7d0412*/
        v25 = 0; /*0x7d0415*/
        v22 = v5; /*0x7d0418*/
        do /*0x7d064d*/
        {
          v28 = 0; /*0x7d0421*/
          v30 = 0; /*0x7d0424*/
          v36 = (unsigned int *)(0); /*0x7d0427*/
          memset( (void *)(v21), 0, sizeof(v21)); /*0x7d0436*/
          if ( v32 >= 0 ) /*0x7d0438*/
          {
            if ( IsBadWritePtr(lp, 0x8000u) ) /*0x7d0446*/
              return -4; /*0x7d0685*/
            v6 = 0; /*0x7d0457*/
            v7 = (unsigned int *)((char *)lp + 4092); /*0x7d0459*/
            while ( 2 ) /*0x7d045f*/
            {
              v8 = (int *)(v7 - 1020); /*0x7d045f*/
              if ( *(v7 - 1021) != -1 || *v7 != -1 ) /*0x7d0475*/
                return -5; /*0x7d0695*/
              do /*0x7d04e1*/
              {
                v9 = *v8; /*0x7d047b*/
                v10 = *v8; /*0x7d0480*/
                if ( (*v8 & 1) != 0 ) /*0x7d0482*/
                {
                  if ( --v9 > 1024 ) /*0x7d048b*/
                    return -6; /*0x7d068b*/
                  v36 = (unsigned int *)((char *)v36 + 1); /*0x7d0491*/
                }
                else
                {
                  v11 = (v9 >> 4) - 1; /*0x7d049b*/
                  if ( v11 > 63 ) /*0x7d049f*/
                    v11 = 63; /*0x7d04a3*/
                  ++v21[v11]; /*0x7d04a4*/
                }
                if ( v9 < 16 || (v9 & 0xF) != 0 || v9 > 4080 ) /*0x7d04ca*/
                  return -7; /*0x7d0693*/
                v12 = (unsigned int *)((int *)((char *)v8 + v9)); /*0x7d04d4*/
                if ( *(int *)((char *)v8 + v9 - 4) != v10 ) /*0x7d04d7*/
                  return -8; /*0x7d04d7*/
                v8 = (int *)((char *)v8 + v9); /*0x7d04dd*/
              }
              while ( v12 < v7 ); /*0x7d04e1*/
              if ( v12 != v7 ) /*0x7d04e3*/
                return -8; /*0x7d068f*/
              v7 += 1024; /*0x7d04e9*/
              if ( ++v6 < 8 ) /*0x7d04f3*/
                continue; /*0x7d04f3*/
              break;
            }
            v13 = v27; /*0x7d04f9*/
            if ( (unsigned int *)*v27 != v36 ) /*0x7d0501*/
              return -9; /*0x7d0699*/
            v35 = 0; /*0x7d0507*/
            v36 = v21; /*0x7d0511*/
            while ( 1 ) /*0x7d0514*/
            {
              v14 = v13[1]; /*0x7d0514*/
              v33 = 0; /*0x7d0517*/
              v15 = (unsigned int)v13; /*0x7d051e*/
              v24 = v13; /*0x7d0522*/
              if ( (int *)v14 != v13 ) /*0x7d0525*/
              {
                do /*0x7d05ad*/
                {
                  if ( v33 == *v36 ) /*0x7d0533*/
                    break; /*0x7d0533*/
                  if ( v14 < (unsigned int)lp || v14 >= (unsigned int)lp + 0x8000 ) /*0x7d0548*/
                    return -10; /*0x7d06ab*/
                  v16 = (unsigned int *)((v14 & 0xFFFFF000) + 12); /*0x7d0555*/
                  v17 = (v14 & 0xFFFFF000) + 4092; /*0x7d0558*/
                  do /*0x7d0573*/
                  {
                    if ( v16 == (unsigned int *)v14 ) /*0x7d0568*/
                      break; /*0x7d0568*/
                    v16 = (unsigned int *)((char *)v16 + (*v16 & 0xFFFFFFFE)); /*0x7d056f*/
                  }
                  while ( v16 != (unsigned int *)v17 ); /*0x7d0573*/
                  if ( v16 == (unsigned int *)v17 ) /*0x7d0577*/
                    return -11; /*0x7d069f*/
                  v18 = (*(int *)v14 >> 4) - 1; /*0x7d0582*/
                  if ( v18 > 63 ) /*0x7d0586*/
                    v18 = 63; /*0x7d058a*/
                  if ( v18 != v35 ) /*0x7d058e*/
                    return -12; /*0x7d06a3*/
                  if ( *(int **)(v14 + 8) != v24 ) /*0x7d059a*/
                    return -13; /*0x7d06a7*/
                  ++v33; /*0x7d05a0*/
                  v15 = v14; /*0x7d05a3*/
                  v14 = *(unsigned int *)(v14 + 4); /*0x7d05a5*/
                  v24 = (int *)v15; /*0x7d05a8*/
                }
                while ( (int *)v14 != v13 ); /*0x7d05ad*/
                if ( v33 ) /*0x7d05b7*/
                {
                  if ( v35 >= 32 ) /*0x7d05bf*/
                  {
                    v19 = 0x80000000 >> (v35 - 32); /*0x7d05d8*/
                    v30 |= v19; /*0x7d05da*/
                    v31 |= v19; /*0x7d05dd*/
                  }
                  else
                  {
                    v28 |= 0x80000000 >> v35; /*0x7d05c8*/
                    v26 |= 0x80000000 >> v35; /*0x7d05cb*/
                  }
                }
              }
              if ( *(int **)(v15 + 4) != v13 || v33 != *v36 ) /*0x7d05f1*/
                return -14; /*0x7d06b3*/
              if ( v13[2] != v15 ) /*0x7d05f9*/
                return -15; /*0x7d06af*/
              ++v35; /*0x7d05ff*/
              ++v36; /*0x7d0602*/
              v13 += 2; /*0x7d060a*/
              if ( v35 >= 64 ) /*0x7d060c*/
              {
                v5 = v22; /*0x7d0612*/
                v2 = v23; /*0x7d0615*/
                break; /*0x7d0615*/
              }
            }
          }
          if ( v28 != *(v5 - 32) || v30 != *v5 ) /*0x7d0629*/
            return -16; /*0x7d06b7*/
          lp = (LPVOID)((unsigned int)(char *)lp + 0x8000); /*0x7d062f*/
          v27 += 129; /*0x7d0636*/
          v32 *= 2; /*0x7d063d*/
          ++v25; /*0x7d0640*/
          v22 = ++v5; /*0x7d064a*/
        }
        while ( v25 < 32 ); /*0x7d064d*/
        if ( v26 != *v2 || v31 != v2[1] ) /*0x7d0660*/
          return -17; /*0x7d06b9*/
        v2 += 5; /*0x7d0662*/
        ++v29; /*0x7d0665*/
        v23 = v2; /*0x7d066b*/
        if ( v29 < dword_B78B94 ) /*0x7d0674*/
          continue; /*0x7d0674*/
        return 0; /*0x7d0680*/
      }
      break;
    }
    return -2; /*0x7d067c*/
}
}
// 0x7D06BE
namespace gamemd {
int _set_new_handler_shape(int (__cdecl *)(unsigned int), unsigned int a2)
{
    int (__cdecl *v1)(unsigned int); // esi

    _lock(9); /*0x7d06c1*/
    v1 = dword_B782C8; /*0x7d06ca*/
    dword_B782C8 = a1; /*0x7d06d2*/
    _unlock(9); /*0x7d06d7*/
    return v1; /*0x7d06e0*/
}
}
// 0x7D0703
namespace gamemd {
int _filbuf(MouseClass * aP0)
{
    int flag; // eax
    int v2; // eax
    int v3; // edx
    unsigned char *v4; // edi
    int v5; // ecx
    char *ptr; // ecx
    int result; // eax

    flag = (((_iobuf_msvc6 *)File)->_flag); /*0x7d0708*/
    if ( (flag & 0x83) == 0 || (flag & 0x40) != 0 ) /*0x7d0715*/
      return -1; /*0x7d0715*/
    if ( (flag & 2) != 0 ) /*0x7d071d*/
    {
      (flag) = ((flag) & ~0xFF) | ((unsigned int)(flag | 0x20) & 0xFF); /*0x7d071f*/
      (((_iobuf_msvc6 *)File)->_flag) = flag; /*0x7d0721*/
      return -1; /*0x7d07da*/
    }
    (flag) = ((flag) & ~0xFF) | ((unsigned int)(flag | 1) & 0xFF); /*0x7d0729*/
    (((_iobuf_msvc6 *)File)->_flag) = flag; /*0x7d072f*/
    if ( (flag & 0x10C) != 0 ) /*0x7d0732*/
      (((_iobuf_msvc6 *)File)->_ptr) = (((_iobuf_msvc6 *)File)->_base); /*0x7d0740*/
    else
      _getbuf(File); /*0x7d0735*/
    v2 = _read((((_iobuf_msvc6 *)File)->_file), (((_iobuf_msvc6 *)File)->_base), (((_iobuf_msvc6 *)File)->_bufsiz)); /*0x7d074b*/
    (((_iobuf_msvc6 *)File)->_cnt) = v2; /*0x7d0753*/
    if ( !v2 || v2 == -1 )
    {
      (((_iobuf_msvc6 *)File)->_flag) |= v2 != 0 ? 32 : 16;
      (((_iobuf_msvc6 *)File)->_cnt) = 0; /*0x7d07d6*/
      return -1; /*0x7d07d6*/
    }
    v3 = (((_iobuf_msvc6 *)File)->_flag); /*0x7d075f*/
    if ( (v3 & 0x82) == 0 )
    {
      v4 = (((_iobuf_msvc6 *)File)->_file) == -1 ? &unk_87C928 : (unsigned char *)(dword_B78A80[(((_iobuf_msvc6 *)File)->_file) >> 5] + 36 * ((((_iobuf_msvc6 *)File)->_file) & 0x1F));
      if ( (v4[4] & 0x82) == 0x82 ) /*0x7d0796*/
      {
        (((v3) >> 8) & 0xFF) |= 0x20u; /*0x7d0798*/
        (((_iobuf_msvc6 *)File)->_flag) = v3; /*0x7d079b*/
      }
    }
    if ( (((_iobuf_msvc6 *)File)->_bufsiz) == 512 ) /*0x7d07a5*/
    {
      v5 = (((_iobuf_msvc6 *)File)->_flag); /*0x7d07a7*/
      if ( (v5 & 8) != 0 && (v5 & 0x400) == 0 ) /*0x7d07b2*/
        (((_iobuf_msvc6 *)File)->_bufsiz) = 4096; /*0x7d07b4*/
    }
    ptr = (((_iobuf_msvc6 *)File)->_ptr); /*0x7d07bb*/
    (((_iobuf_msvc6 *)File)->_cnt) = v2 - 1; /*0x7d07be*/
    result = (unsigned __int8)*ptr; /*0x7d07c1*/
    (((_iobuf_msvc6 *)File)->_ptr) = ptr + 1; /*0x7d07c5*/
    return result; /*0x7d07c7*/
}
}
// 0x7D0844
namespace gamemd {
int _read_lk(int FileHandle, char * lpBuffer, DWORD nNumberOfBytesToRead)
{
    char *v3; // ebx
    char *v4; // edx
    int v5; // esi
    int v6; // eax
    char v7; // cl
    char v8; // al
    int v9; // eax
    DWORD LastError; // eax
    int v12; // eax
    char *v13; // ecx
    char v14; // al
    char v15; // al
    char *v16; // ecx
    bool v17; // cf
    char v18; // al
    char v19; // al
    unsigned char *v20; // esi
    DWORD NumberOfBytesRead; // [esp+Ch] [ebp-Ch] BYREF
    unsigned int v22; // [esp+10h] [ebp-8h]
    char Buffer; // [esp+17h] [ebp-1h] BYREF
    char *nNumberOfBytesToReada; // [esp+28h] [ebp+10h]

    v22 = 0; /*0x7d084a*/
    v3 = lpBuffer; /*0x7d0853*/
    v4 = lpBuffer; /*0x7d0858*/
    if ( nNumberOfBytesToRead ) /*0x7d085a*/
    {
      v5 = 36 * (FileHandle & 0x1F); /*0x7d087c*/
      v6 = v5 + dword_B78A80[FileHandle >> 5]; /*0x7d087f*/
      v7 = *(unsigned char *)(v6 + 4); /*0x7d0881*/
      if ( (v7 & 2) == 0 ) /*0x7d0887*/
      {
        if ( (v7 & 0x48) != 0 ) /*0x7d0890*/
        {
          v8 = *(unsigned char *)(v6 + 5); /*0x7d0892*/
          if ( v8 != 10 ) /*0x7d0897*/
          {
            --nNumberOfBytesToRead; /*0x7d0899*/
            *lpBuffer = v8; /*0x7d089c*/
            v9 = dword_B78A80[FileHandle >> 5]; /*0x7d089e*/
            v4 = lpBuffer + 1; /*0x7d08a0*/
            v22 = 1; /*0x7d08a3*/
            *(unsigned char *)(v9 + v5 + 5) = 10; /*0x7d08aa*/
          }
        }
        if ( !ReadFile( /*0x7d08be*/
                *(HANDLE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F)),
                v4,
                nNumberOfBytesToRead,
                &NumberOfBytesRead,
                0) )
        {
          LastError = GetLastError(); /*0x7d08c8*/
          if ( LastError == 5 ) /*0x7d08d3*/
          {
            *_errno() = 9; /*0x7d08da*/
            *__doserrno() = 5; /*0x7d08e5*/
            return -1; /*0x7d08fc*/
          }
          if ( LastError != 109 ) /*0x7d08ec*/
          {
            _dosmaperr(LastError); /*0x7d08f3*/
            return -1; /*0x7d08f3*/
          }
          return 0; /*0x7d08ec*/
        }
        v12 = dword_B78A80[FileHandle >> 5]; /*0x7d0901*/
        v22 += NumberOfBytesRead; /*0x7d0906*/
        v13 = (char *)(v12 + v5 + 4); /*0x7d0909*/
        v14 = *v13; /*0x7d090d*/
        if ( *v13 < 0 ) /*0x7d0913*/
        {
          if ( NumberOfBytesRead && *lpBuffer == 10 ) /*0x7d0920*/
            v15 = v14 | 4; /*0x7d0922*/
          else
            v15 = v14 & 0xFB; /*0x7d0926*/
          *v13 = v15; /*0x7d0928*/
          nNumberOfBytesToReada = lpBuffer; /*0x7d0930*/
          v16 = &lpBuffer[v22]; /*0x7d0933*/
          v17 = lpBuffer < &lpBuffer[v22]; /*0x7d0935*/
          v22 += (unsigned int)lpBuffer; /*0x7d0937*/
          if ( v17 ) /*0x7d093a*/
          {
            do /*0x7d0943*/
            {
              v18 = *nNumberOfBytesToReada; /*0x7d0943*/
              if ( *nNumberOfBytesToReada == 26 ) /*0x7d0947*/
              {
                v20 = (unsigned char *)(dword_B78A80[FileHandle >> 5] + v5 + 4); /*0x7d09fd*/
                if ( (*v20 & 0x40) == 0 ) /*0x7d0a05*/
                  *v20 |= 2u; /*0x7d0a09*/
                return v3 - lpBuffer; /*0x7d0a09*/
              }
              if ( v18 == 13 ) /*0x7d094f*/
              {
                if ( nNumberOfBytesToReada >= v16 - 1 ) /*0x7d0960*/
                {
                  ++nNumberOfBytesToReada; /*0x7d0980*/
                  if ( !ReadFile( /*0x7d09a6*/
                          *(HANDLE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F)),
                          &Buffer,
                          1u,
                          &NumberOfBytesRead,
                          0)
                    && GetLastError()
                    || !NumberOfBytesRead )
                  {
  LABEL_35:
                    *v3 = 13; /*0x7d09e9*/
                    goto LABEL_36; /*0x7d09e9*/
                  }
                  if ( (*(unsigned char *)(dword_B78A80[FileHandle >> 5] + v5 + 4) & 0x48) != 0 ) /*0x7d09af*/
                  {
                    v19 = Buffer; /*0x7d09b1*/
                    if ( Buffer == 10 ) /*0x7d09b6*/
                      goto LABEL_33; /*0x7d09b6*/
                    *v3++ = 13; /*0x7d09b8*/
                    *(unsigned char *)(dword_B78A80[FileHandle >> 5] + v5 + 5) = v19; /*0x7d09be*/
                  }
                  else
                  {
                    if ( v3 == lpBuffer && Buffer == 10 ) /*0x7d09cd*/
                      goto LABEL_33; /*0x7d09cd*/
                    _lseek_lk(FileHandle, -1, 1u); /*0x7d09db*/
                    if ( Buffer != 10 ) /*0x7d09e7*/
                      goto LABEL_35; /*0x7d09e7*/
                  }
                }
                else
                {
                  if ( nNumberOfBytesToReada[1] == 10 ) /*0x7d0969*/
                  {
                    nNumberOfBytesToReada += 2; /*0x7d096b*/
  LABEL_33:
                    *v3 = 10; /*0x7d09cf*/
  LABEL_36:
                    ++v3; /*0x7d09ec*/
                    goto LABEL_37; /*0x7d09ec*/
                  }
                  *v3++ = 13; /*0x7d0971*/
                  ++nNumberOfBytesToReada; /*0x7d0975*/
                }
              }
              else
              {
                *v3++ = v18; /*0x7d0951*/
                ++nNumberOfBytesToReada; /*0x7d0954*/
              }
  LABEL_37:
              v16 = (char *)v22; /*0x7d09ed*/
            }
            while ( (unsigned int)nNumberOfBytesToReada < v22 ); /*0x7d0943*/
          }
          return v3 - lpBuffer; /*0x7d0a0b*/
        }
        return v22; /*0x7d0a14*/
      }
    }
    return 0; /*0x7d0a18*/
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
        result = (void *)((gamemd::exception **)(a0));
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
        qmemcpy( (void *)(a0), (const void *)(aP1), 4 * v5); /*0x7d0a53*/
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
    unsigned int *v4; // ebx
    int v5; // esi
    int v6; // eax
    unsigned char *v7; // eax
    char *v8; // ecx
    char v9; // cl
    signed int v10; // edi
    unsigned char Buffer[1028]; // [esp+Ch] [ebp-414h] BYREF
    int v12; // [esp+410h] [ebp-10h]
    DWORD NumberOfBytesWritten; // [esp+414h] [ebp-Ch] BYREF
    DWORD v14; // [esp+418h] [ebp-8h]
    char *v15; // [esp+41Ch] [ebp-4h]
    DWORD FileHandlea; // [esp+428h] [ebp+8h]

    v14 = 0; /*0x7d0dcb*/
    v12 = 0; /*0x7d0dce*/
    if ( !nNumberOfBytesToWrite ) /*0x7d0dd1*/
      return 0; /*0x7d0dd1*/
    v4 = (unsigned int *)(4 * (FileHandle >> 5) + 12028544); /*0x7d0de0*/
    v5 = 36 * (FileHandle & 0x1F); /*0x7d0df2*/
    if ( (*(unsigned char *)(dword_B78A80[FileHandle >> 5] + v5 + 4) & 0x20) != 0 ) /*0x7d0dfa*/
      _lseek_lk(FileHandle, 0, 2u); /*0x7d0e02*/
    v6 = v5 + dword_B78A80[FileHandle >> 5]; /*0x7d0e0c*/
    if ( *(char *)(v6 + 4) >= 0 ) /*0x7d0e12*/
    {
      if ( WriteFile(*(HANDLE *)v6, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, 0) ) /*0x7d0ee6*/
      {
        FileHandlea = 0; /*0x7d0ef3*/
        v14 = NumberOfBytesWritten; /*0x7d0ef6*/
      }
      else
      {
        FileHandlea = GetLastError(); /*0x7d0f01*/
      }
    }
    else
    {
      v15 = (char *)(lpBuffer); /*0x7d0e1e*/
      FileHandlea = 0; /*0x7d0e21*/
      while ( 1 ) /*0x7d0e2a*/
      {
        v7 = Buffer; /*0x7d0e2a*/
        do /*0x7d0e62*/
        {
          if ( v15 - lpBuffer >= nNumberOfBytesToWrite ) /*0x7d0e39*/
            break; /*0x7d0e39*/
          v8 = v15++; /*0x7d0e3b*/
          v9 = *v8; /*0x7d0e41*/
          if ( v9 == 10 ) /*0x7d0e46*/
          {
            ++v12; /*0x7d0e48*/
            *v7++ = 13; /*0x7d0e4b*/
          }
          *v7++ = v9; /*0x7d0e4f*/
        }
        while ( v7 - Buffer < 1024 ); /*0x7d0e62*/
        v10 = v7 - Buffer; /*0x7d0e6c*/
        if ( !WriteFile(*(HANDLE *)(*v4 + v5), Buffer, v7 - Buffer, &NumberOfBytesWritten, 0) ) /*0x7d0e81*/
          break; /*0x7d0e81*/
        v14 += NumberOfBytesWritten; /*0x7d0e8e*/
        if ( (int)NumberOfBytesWritten < v10 || v15 - lpBuffer >= nNumberOfBytesToWrite ) /*0x7d0e9e*/
          goto LABEL_15; /*0x7d0e9e*/
      }
      FileHandlea = GetLastError(); /*0x7d0ed4*/
    }
  LABEL_15:
    if ( v14 ) /*0x7d0ea7*/
      return v14 - v12; /*0x7d0f3d*/
    if ( FileHandlea ) /*0x7d0eb0*/
    {
      if ( FileHandlea == 5 ) /*0x7d0eb8*/
      {
        *_errno() = 9; /*0x7d0ebf*/
        *__doserrno() = 5; /*0x7d0eca*/
      }
      else
      {
        _dosmaperr(FileHandlea); /*0x7d0f09*/
      }
    }
    else
    {
      if ( (*(unsigned char *)(*v4 + v5 + 4) & 0x40) != 0 && *lpBuffer == 26 ) /*0x7d0f23*/
        return 0; /*0x7d0dd5*/
      *_errno() = 28; /*0x7d0f2e*/
      *__doserrno() = 0; /*0x7d0f39*/
    }
    return -1; /*0x7d0f40*/
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
      v4 = (void *)(0); /*0x7d0f75*/
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
        v4 = (void *)(aP0); /*0x7d0fb1*/
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
        memcpy_0( (void *)(v4), (const void *)(aP0), (unsigned int)((AbstractClass *)(v6))); /*0x7d0fcf*/
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
      memcpy_0( (void *)(v4), (const void *)(aP0), (unsigned int)((AbstractClass *)(v7))); /*0x7d1013*/
      __sbh_free_block(Sizea, aP0); /*0x7d101c*/
    }
    goto LABEL_22; /*0x7d101c*/
  }
  free( (void *)(aP0)); /*0x7d0f68*/
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
    return LCMapStringA((LCID)(aP0), dwMapFlags, (LPCSTR)(aP2), cchSrc, lpDestStr, cchDest); /*0x7d116f*/
  if ( dword_B782CC != 1 ) /*0x7d1177*/
    return 0; /*0x7d1177*/
  if ( !CodePage ) /*0x7d1180*/
    CodePage = ::CodePage; /*0x7d1187*/
  v9 = MultiByteToWideChar( CodePage, a8 != 0 ? 9 : 1, (LPCCH)(aP2), cchSrc, 0, 0);
  v10 = v9; /*0x7d11a7*/
  v22 = v9; /*0x7d11a9*/
  if ( !v9 ) /*0x7d11ae*/
    return 0; /*0x7d11ae*/
  v11 = 2 * v9 + 3; /*0x7d11ba*/
  (v11) = ((v11) & ~0xFF) | ((unsigned int)(v11 & 0xFC) & 0xFF); /*0x7d11bd*/
  v12 = alloca(v11); /*0x7d11bf*/
  ms_exc.old_esp = (DWORD)v18; /*0x7d11c4*/
  lpWideCharStr = (LPWSTR)((unsigned int)v18); /*0x7d11c9*/
  ms_exc.registration.TryLevel = -1; /*0x7d11cc*/
  if ( !v18 ) /*0x7d11e8*/
    return 0; /*0x7d11e8*/
  if ( !MultiByteToWideChar( CodePage, 1u, (LPCCH)(aP2), cchSrc, (LPWSTR)(lpWideCharStr), v10) ) /*0x7d11f9*/
    return 0; /*0x7d11f9*/
  v13 = LCMapStringW((LCID)(aP0), dwMapFlags, lpWideCharStr, v10, 0, 0); /*0x7d120f*/
  v14 = v13; /*0x7d1215*/
  v19 = v13; /*0x7d1217*/
  if ( !v13 ) /*0x7d121c*/
    return 0; /*0x7d121c*/
  if ( (dwMapFlags & 0x400) != 0 )
  {
    if ( cchDest && (v13 > cchDest || !LCMapStringW((LCID)(aP0), dwMapFlags, lpWideCharStr, v10, (LPWSTR)lpDestStr, cchDest)) ) /*0x7d1242*/
      return 0; /*0x7d124a*/
  }
  else
  {
    v15 = 2 * v13 + 3; /*0x7d126e*/
    (v15) = ((v15) & ~0xFF) | ((unsigned int)(v15 & 0xFC) & 0xFF); /*0x7d1271*/
    v16 = alloca(v15); /*0x7d1273*/
    ms_exc.old_esp = (DWORD)v18; /*0x7d1278*/
    v21 = v18; /*0x7d127d*/
    ms_exc.registration.TryLevel = -1; /*0x7d1280*/
    if ( !v18 || !LCMapStringW((LCID)(aP0), dwMapFlags, lpWideCharStr, v22, v18, v14) ) /*0x7d12aa*/
      return 0; /*0x7d12aa*/
    v17 = cchDest
        ? WideCharToMultiByte( CodePage, 0x220u, (LPCWCH)(v18), v14, (LPSTR)(lpDestStr), cchDest, 0, 0)
        : WideCharToMultiByte( CodePage, 0x220u, (LPCWCH)(v18), v14, 0, 0, 0, 0);
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
    int v2; // ecx
    int v3; // eax
    int result; // eax
    int SrcStr; // [esp+0h] [ebp-4h] BYREF

    SrcStr = v2; /*0x7d1314*/
    if ( (unsigned int)(C + 1) <= 0x100 ) /*0x7d1321*/
    {
      v3 = *((unsigned __int16 *)off_87C590 + C); /*0x7d1329*/
      return Type & v3; /*0x7d1381*/
    }
    if ( *((char *)off_87C590 + 2 * (((C) >> 8) & 0xFF) + 1) >= 0 ) /*0x7d1344*/
    {
      (SrcStr) = ((SrcStr) & ~0xFFFF) | ((unsigned int)((unsigned __int8)C) & 0xFFFF); /*0x7d1358*/
      result = __crtGetStringTypeA(1u, (LPCSTR)&SrcStr, 1, (LPWORD)&C + 1, 0, 0, 1); /*0x7d136f*/
    }
    else
    {
      (SrcStr) = ((SrcStr) & ~0xFF) | ((unsigned int)((((C) >> 8) & 0xFF)) & 0xFF); /*0x7d134a*/
      *(unsigned short *)((char *)&SrcStr + 1) = (unsigned __int8)C; /*0x7d134d*/
      result = __crtGetStringTypeA(1u, (LPCSTR)&SrcStr, 2, (LPWORD)&C + 1, 0, 0, 1); /*0x7d1352*/
    }
    if ( result ) /*0x7d1379*/
    {
      v3 = (((unsigned int)(C) >> 16) & 0xFFFF); /*0x7d137d*/
      return Type & v3; /*0x7d137d*/
    }
    return result; /*0x7d137b*/
}
}
// 0x7D15A0
namespace gamemd {
int strlen(const char * Str)
{
    const char *v1; // ecx
    int v3; // eax
    int v4; // eax

    v1 = Str; /*0x7d15a0*/
    if ( ((unsigned __int8)Str & 3) == 0 ) /*0x7d15aa*/
      goto main_loop_2; /*0x7d15aa*/
    do /*0x7d15b9*/
    {
      if ( !*v1++ ) /*0x7d15ac*/
        return v1 - 1 - Str; /*0x7d15fc*/
    }
    while ( ((unsigned __int8)v1 & 3) != 0 ); /*0x7d15b9*/
    while ( 1 ) /*0x7d15d6*/
    {
      do /*0x7d15d6*/
      {
  main_loop_2:
        v3 = (*(unsigned int *)v1 + 2130640639) ^ ~*(unsigned int *)v1; /*0x7d15c0*/
        v1 += 4; /*0x7d15ce*/
      }
      while ( (v3 & 0x81010100) == 0 ); /*0x7d15d6*/
      v4 = *((unsigned int *)v1 - 1); /*0x7d15d8*/
      if ( !(unsigned char)v4 ) /*0x7d15dd*/
        break; /*0x7d15dd*/
      if ( !(((v4) >> 8) & 0xFF) ) /*0x7d15e1*/
        return v1 - 3 - Str; /*0x7d1610*/
      if ( (v4 & 0xFF0000) == 0 ) /*0x7d15e8*/
        return v1 - 2 - Str; /*0x7d1606*/
      if ( (v4 & 0xFF000000) == 0 ) /*0x7d15ef*/
        return v1 - 1 - Str; /*0x7d15ef*/
    }
    return v1 - 4 - Str; /*0x7d15fc*/
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
    v61 = (wchar_t *)(0); /*0x7d17d1*/
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
            memset( (void *)(v54), 0, sizeof(v54)); /*0x7d1c7d*/
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
    int v1; // esi
    int v2; // eax

    v1 = C; /*0x7d213c*/
    if ( (int)SrcSizeInBytes <= 1 ) /*0x7d213a*/
      v2 = *((unsigned char *)off_87C590 + 2 * C) & 4; /*0x7d2158*/
    else
      v2 = _isctype(C, 4); /*0x7d2143*/
    if ( !v2 ) /*0x7d215d*/
      return (C & 0xFFFFFFDF) - 7; /*0x7d2162*/
    return v1; /*0x7d2167*/
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
        v7 = byte_7F97CC[v5] & 0xF; /*0x7d220c*/
      v42 = byte_7F97EC[8 * v7 + v4] >> 4; /*0x7d2221*/
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
              (v55) = ((v55) & ~0xFF) | ((unsigned int)(v55 | 0x80) & 0xFF); /*0x7d2287*/
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
                (((v55) >> 8) & 0xFF) |= 0x80u; /*0x7d234d*/
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
              (((v55) >> 8) & 0xFF) |= 8u; /*0x7d2328*/
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
                  (((v55) >> 8) & 0xFF) |= 2u; /*0x7d2668*/
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
                  (((v55) >> 8) & 0xFF) |= 1u; /*0x7d270f*/
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
                v27 = (unsigned int)(unsigned char *)(v36 - v53++); /*0x7d279b*/
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
              (((v6) >> 8) & 0xFF) |= 0x40u; /*0x7d2d1f*/
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
        (((v6) >> 8) & 0xFF) |= 0x80u; /*0x7d2d61*/
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

  v0 = (unsigned int *)(0); /*0x7d2dad*/
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
int _putwc_lk(wchar_t WCh, FILE * File)
{
    FILE *v2; // esi
    char *v3; // eax
    int v4; // eax
    bool v6; // sf
    int v7; // eax
    int v8; // eax

    v2 = File; /*0x7d2fcc*/
    if ( ((((_iobuf_msvc6 *)File)->_flag) & 0x40) != 0
      || ((((_iobuf_msvc6 *)File)->_file) == -1
        ? (v3 = (char *)&unk_87C928)
        : (v3 = (char *)(dword_B78A80[(((_iobuf_msvc6 *)File)->_file) >> 5] + 36 * ((((_iobuf_msvc6 *)File)->_file) & 0x1F))),
          v3[4] >= 0) )
    {
      v6 = (((_iobuf_msvc6 *)File)->_cnt) - 2 < 0; /*0x7d309e*/
      (((_iobuf_msvc6 *)File)->_cnt) -= 2; /*0x7d309e*/
      if ( v6 ) /*0x7d30a2*/
        return _flswbuf(WCh, (int)v2); /*0x7d30b7*/
      *(unsigned short *)v2->_ptr = WCh; /*0x7d30a9*/
      (((_iobuf_msvc6 *)v2)->_ptr) += 2; /*0x7d30ac*/
      return WCh; /*0x7d30af*/
    }
    v4 = wctomb((char *)&File, WCh); /*0x7d300e*/
    if ( v4 == -1 ) /*0x7d3018*/
    {
      *_errno() = 42; /*0x7d301f*/
      return -1; /*0x7d3029*/
    }
    if ( v4 == 1 ) /*0x7d3031*/
    {
      v6 = --(((_iobuf_msvc6 *)v2)->_cnt) < 0; /*0x7d3033*/
      if ( v6 ) /*0x7d3036*/
      {
        v7 = _flsbuf((char)File, v2); /*0x7d304d*/
        goto LABEL_14; /*0x7d304d*/
      }
      *(((_iobuf_msvc6 *)v2)->_ptr) = (char)File; /*0x7d303d*/
      v7 = (unsigned __int8)File; /*0x7d303f*/
    }
    else
    {
      v6 = --(((_iobuf_msvc6 *)v2)->_cnt) < 0; /*0x7d305f*/
      if ( v6 ) /*0x7d3062*/
      {
        v8 = _flsbuf((char)File, v2); /*0x7d3079*/
      }
      else
      {
        *(((_iobuf_msvc6 *)v2)->_ptr)++ = (char)File; /*0x7d3069*/
        v8 = (unsigned __int8)File; /*0x7d306d*/
      }
      if ( v8 == -1 ) /*0x7d3083*/
        return -1; /*0x7d3083*/
      v6 = --(((_iobuf_msvc6 *)v2)->_cnt) < 0; /*0x7d3085*/
      if ( v6 ) /*0x7d3088*/
      {
        v7 = _flsbuf(SBYTE1(File), v2); /*0x7d309c*/
        goto LABEL_14; /*0x7d309c*/
      }
      *(((_iobuf_msvc6 *)v2)->_ptr) = IDA_BYTE1(File); /*0x7d308f*/
      v7 = IDA_BYTE1(File); /*0x7d3091*/
    }
    ++(((_iobuf_msvc6 *)v2)->_ptr); /*0x7d3043*/
  LABEL_14:
    if ( v7 == -1 ) /*0x7d3057*/
      return -1; /*0x7d3057*/
    return WCh; /*0x7d30be*/
}
}
// 0x7D30D1
namespace gamemd {
int _commit(int FileHandle)
{
    int v1; // esi
    void *osfhandle; // eax
    DWORD LastError; // esi

    if ( FileHandle < uNumber ) /*0x7d30de*/
    {
      v1 = 36 * (FileHandle & 0x1F); /*0x7d30f6*/
      if ( (*(unsigned char *)(dword_B78A80[FileHandle >> 5] + v1 + 4) & 1) != 0 ) /*0x7d30fe*/
      {
        _lock_fhandle(FileHandle); /*0x7d3101*/
        if ( (*(unsigned char *)(dword_B78A80[FileHandle >> 5] + v1 + 4) & 1) != 0 ) /*0x7d310e*/
        {
          osfhandle = (void *)_get_osfhandle(FileHandle); /*0x7d3111*/
          if ( FlushFileBuffers(osfhandle) ) /*0x7d3118*/
            LastError = 0; /*0x7d312c*/
          else
            LastError = GetLastError(); /*0x7d3128*/
          if ( !LastError ) /*0x7d3130*/
            goto LABEL_10; /*0x7d3130*/
          *__doserrno() = LastError; /*0x7d3137*/
        }
        *_errno() = 9; /*0x7d313e*/
        LastError = -1; /*0x7d3144*/
  LABEL_10:
        _unlock_fhandle(FileHandle); /*0x7d3147*/
        return LastError; /*0x7d3150*/
      }
    }
    *_errno() = 9; /*0x7d3157*/
    return -1; /*0x7d3160*/
}
}
// 0x7D3164
namespace gamemd {
int _ioinit()
{
    char *v1; // eax
    char *v2; // esi
    unsigned int i; // eax
    int v4; // edi
    LPBYTE v5; // ebx
    unsigned int *v6; // esi
    char *v7; // eax
    unsigned int j; // ecx
    int k; // esi
    int v10; // eax
    int m; // ebx
    int v12; // esi
    DWORD v13; // eax
    HANDLE StdHandle; // eax
    HANDLE v15; // edi
    DWORD FileType; // eax
    struct _STARTUPINFOA StartupInfo; // [esp+Ch] [ebp-48h] BYREF
    HANDLE *v19; // [esp+50h] [ebp-4h]

    v1 = (char *)malloc(0x480u); /*0x7d3172*/
    v2 = v1; /*0x7d3177*/
    if ( !v1 ) /*0x7d317c*/
      _amsg_exit(0x1Bu); /*0x7d3180*/
    dword_B78A80[0] = (int)v1; /*0x7d3186*/
    uNumber = 32; /*0x7d318c*/
    for ( i = (unsigned int)(v1 + 1152); (unsigned int)v2 < i; i = dword_B78A80[0] + 1152 ) /*0x7d3196*/
    {
      v2[4] = 0; /*0x7d31a0*/
      *(unsigned int *)v2 = -1; /*0x7d31a4*/
      *((unsigned int *)v2 + 2) = 0; /*0x7d31a7*/
      v2[5] = 10; /*0x7d31ab*/
      v2 += 36; /*0x7d31b4*/
    }
    GetStartupInfoA(&StartupInfo); /*0x7d31c2*/
    if ( StartupInfo.cbReserved2 && StartupInfo.lpReserved2 ) /*0x7d31d8*/
    {
      v4 = *(unsigned int *)StartupInfo.lpReserved2; /*0x7d31de*/
      v5 = StartupInfo.lpReserved2 + 4; /*0x7d31e0*/
      v19 = (HANDLE *)&StartupInfo.lpReserved2[*(unsigned int *)StartupInfo.lpReserved2 + 4]; /*0x7d31e6*/
      if ( v4 >= 2048 ) /*0x7d31f0*/
        v4 = 2048; /*0x7d31f2*/
      if ( (int)uNumber < v4 ) /*0x7d31fa*/
      {
        v6 = &unk_B78A84; /*0x7d31fc*/
        while ( 1 ) /*0x7d3206*/
        {
          v7 = (char *)malloc(0x480u); /*0x7d3206*/
          if ( !v7 ) /*0x7d320e*/
            break; /*0x7d320e*/
          uNumber += 32; /*0x7d3210*/
          *v6 = (unsigned int)v7; /*0x7d3217*/
          for ( j = (unsigned int)(v7 + 1152); (unsigned int)v7 < j; j = *v6 + 1152 ) /*0x7d3219*/
          {
            v7[4] = 0; /*0x7d3223*/
            *(unsigned int *)v7 = -1; /*0x7d3227*/
            *((unsigned int *)v7 + 2) = 0; /*0x7d322a*/
            v7[5] = 10; /*0x7d322e*/
            v7 += 36; /*0x7d3234*/
          }
          ++v6; /*0x7d323f*/
          if ( (int)uNumber >= v4 ) /*0x7d3248*/
            goto LABEL_19; /*0x7d3248*/
        }
        v4 = uNumber; /*0x7d324c*/
      }
  LABEL_19:
      for ( k = 0; k < v4; ++v5 ) /*0x7d3256*/
      {
        if ( *v19 != (HANDLE)-1 && (*v5 & 1) != 0 && ((*v5 & 8) != 0 || GetFileType(*v19)) ) /*0x7d326d*/
        {
          v10 = dword_B78A80[k >> 5] + 36 * (k & 0x1F); /*0x7d328b*/
          *(unsigned int *)v10 = *v19; /*0x7d3293*/
          *(unsigned char *)(v10 + 4) = *v5; /*0x7d3297*/
        }
        ++v19; /*0x7d329a*/
        ++k; /*0x7d329e*/
      }
    }
    for ( m = 0; m < 3; ++m ) /*0x7d32a4*/
    {
      v12 = dword_B78A80[0] + 36 * m; /*0x7d32b3*/
      if ( *(unsigned int *)v12 == -1 ) /*0x7d32b6*/
      {
        *(unsigned char *)(v12 + 4) = -127; /*0x7d32ba*/
        if ( m ) /*0x7d32be*/
          v13 = -(m != 1) - 11; /*0x7d32cc*/
        else
          v13 = -10; /*0x7d32c2*/
        StdHandle = GetStdHandle(v13); /*0x7d32d0*/
        v15 = StdHandle; /*0x7d32d6*/
        if ( StdHandle == (HANDLE)-1 /*0x7d32f2*/
          || (FileType = GetFileType(StdHandle)) == 0
          || (*(unsigned int *)v12 = v15, (unsigned __int8)FileType == 2) )
        {
          *(unsigned char *)(v12 + 4) |= 0x40u; /*0x7d32f4*/
        }
        else if ( (unsigned __int8)FileType == 3 ) /*0x7d32fd*/
        {
          *(unsigned char *)(v12 + 4) |= 8u; /*0x7d32ff*/
        }
      }
      else
      {
        *(unsigned char *)(v12 + 4) |= 0x80u; /*0x7d3305*/
      }
    }
    return SetHandleCount(uNumber); /*0x7d331b*/
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
int _setmbcp(int CodePage)
{
    UINT SystemCP; // eax
    UINT v2; // ebx
    int v3; // esi
    int v4; // edx
    unsigned int *v5; // eax
    BYTE *v6; // ecx
    BYTE v7; // dl
    unsigned int i; // eax
    int v9; // esi
    char *v10; // ebx
    unsigned __int8 *v11; // ecx
    unsigned __int8 v12; // dl
    unsigned int v13; // eax
    unsigned int v14; // edi
    char v15; // dl
    int v16; // eax
    unsigned int *v17; // esi
    unsigned int j; // eax
    ObjectClass *v20; // [esp+0h] [ebp-24h]
    struct _cpinfo CPInfo; // [esp+Ch] [ebp-18h] BYREF
    unsigned int v22; // [esp+20h] [ebp-4h]
    UINT CodePagea; // [esp+2Ch] [ebp+8h]

    _lock(25); /*0x7d348d*/
    SystemCP = getSystemCP(CodePage); /*0x7d3495*/
    v2 = SystemCP; /*0x7d349a*/
    CodePagea = SystemCP; /*0x7d34a4*/
    if ( SystemCP == dword_B78840 ) /*0x7d34a7*/
    {
  LABEL_2:
      v3 = 0; /*0x7d34a9*/
      goto LABEL_34; /*0x7d34ab*/
    }
    if ( !SystemCP ) /*0x7d34b2*/
    {
  LABEL_31:
      setSBCS(); /*0x7d360e*/
  LABEL_32:
      setSBUpLow(v20); /*0x7d3613*/
      goto LABEL_2; /*0x7d3618*/
    }
    v4 = 0; /*0x7d34b8*/
    v5 = &unk_87C958; /*0x7d34ba*/
    do /*0x7d34cc*/
    {
      if ( *v5 == v2 ) /*0x7d34c1*/
      {
        v22 = 0; /*0x7d3537*/
        memset( (void *)(&unk_B78960), 0, 0x100u); /*0x7d3548*/
        v9 = 48 * v4; /*0x7d354a*/
        unk_B78A60 = 0; /*0x7d354d*/
        v10 = (char *)&unk_87C968 + 48 * v4; /*0x7d354e*/
        do /*0x7d3591*/
        {
          v11 = (unsigned __int8 *)v10; /*0x7d3557*/
          if ( *v10 ) /*0x7d3554*/
          {
            do /*0x7d3582*/
            {
              v12 = v11[1]; /*0x7d355b*/
              if ( !v12 ) /*0x7d3560*/
                break; /*0x7d3560*/
              v13 = *v11; /*0x7d3562*/
                v15 = ((unsigned char *)&byte_87C950)[v22]; /*0x7d356f*/
              if ( v13 <= v12 ) /*0x7d356a*/
              {
                v15 = ((unsigned char *)&byte_87C950)[v22]; /*0x7d356f*/
                do /*0x7d357e*/
                  byte_B78961[v13++] |= v15; /*0x7d3575*/
                while ( v13 <= v14 ); /*0x7d357e*/
              }
              v11 += 2; /*0x7d3581*/
            }
            while ( *v11 ); /*0x7d3582*/
          }
          ++v22; /*0x7d3587*/
          v10 += 8; /*0x7d358a*/
        }
        while ( v22 < 4 ); /*0x7d3591*/
        dword_B7885C = 1; /*0x7d3596*/
        dword_B78840 = CodePagea; /*0x7d35a1*/
        v16 = CPtoLCID(CodePagea); /*0x7d35a6*/
        v17 = (unsigned int *)((char *)&unk_87C95C + v9); /*0x7d35ab*/
        unk_B78850 = *v17++; /*0x7d35b6*/
        unk_B78854 = *v17; /*0x7d35b7*/
        dword_B78A64 = v16; /*0x7d35b9*/
        unk_B78858 = v17[1]; /*0x7d35be*/
        goto LABEL_32; /*0x7d35bf*/
      }
      v5 += 12; /*0x7d34c3*/
      ++v4; /*0x7d34c6*/
    }
    while ( (int)v5 < (int)asc_87CA48 ); /*0x7d34cc*/
    if ( GetCPInfo(v2, &CPInfo) ) /*0x7d34d3*/
    {
      dword_B78A64 = 0; /*0x7d34e6*/
      memset( (void *)(&unk_B78960), 0, 0x100u); /*0x7d34f8*/
      unk_B78A60 = 0; /*0x7d34fa*/
      dword_B78840 = v2; /*0x7d34fb*/
      if ( CPInfo.MaxCharSize <= 1 ) /*0x7d3501*/
      {
        dword_B7885C = 0; /*0x7d35f2*/
      }
      else
      {
        if ( CPInfo.LeadByte[0] ) /*0x7d350b*/
        {
          v6 = &CPInfo.LeadByte[1]; /*0x7d3511*/
          do /*0x7d35c3*/
          {
            v7 = *v6; /*0x7d3514*/
            if ( !*v6 ) /*0x7d3514*/
              break; /*0x7d3518*/
            for ( i = *(v6 - 1); i <= v7; ++i ) /*0x7d351e*/
              byte_B78961[i] |= 4u; /*0x7d352d*/
            v6 += 2; /*0x7d35c2*/
          }
          while ( *(v6 - 1) ); /*0x7d35c3*/
        }
        for ( j = 1; j < 0xFF; ++j ) /*0x7d35cd*/
          byte_B78961[j] |= 8u; /*0x7d35cf*/
        dword_B78A64 = CPtoLCID(v2); /*0x7d35e5*/
        dword_B7885C = 1; /*0x7d35ea*/
      }
      unk_B78850 = 0; /*0x7d3600*/
      unk_B78854 = 0; /*0x7d3601*/
      unk_B78858 = 0; /*0x7d3602*/
      goto LABEL_32; /*0x7d3603*/
    }
    if ( dword_B782D8 ) /*0x7d360c*/
      goto LABEL_31; /*0x7d360c*/
    v3 = -1; /*0x7d361d*/
  LABEL_34:
    _unlock(25); /*0x7d3620*/
    return v3; /*0x7d362a*/
}
}
// 0x7D36AC
namespace gamemd {
void* setSBCS()
{
  memset( (void *)(&unk_B78960), 0, 0x100u); /*0x7d36b7*/
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
unsigned int setSBUpLow(void *a1)
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
          memset( (void *)(&SrcStr[v2]), 0x20u, v4 - v2 + 1); /*0x7d373c*/
        v3 += 2; /*0x7d3746*/
        v2 = *(v3 - 1); /*0x7d3747*/
      }
      while ( v2 ); /*0x7d374c*/
    }
    __crtGetStringTypeA(1u, SrcStr, 256, CharType, dword_B78840, dword_B78A64, 0); /*0x7d376f*/
    __crtLCMapStringA((gamemd::CampaignScore *)(dword_B78A64), 0x100u, SrcStr, 256, DestStr, 256, dword_B78840, 0); /*0x7d3793*/
    __crtLCMapStringA((gamemd::CampaignScore *)(dword_B78A64), 0x200u, SrcStr, 256, v10, 256, dword_B78840, 0); /*0x7d37bb*/
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
          ((unsigned char *)&byte_B78860)[result] = 0; /*0x7d37fe*/
          goto LABEL_16; /*0x7d37fe*/
        }
        byte_B78961[result] |= 0x20u; /*0x7d37ee*/
        v7 = v10[result]; /*0x7d37f5*/
      }
      ((unsigned char *)&byte_B78860)[result] = v7; /*0x7d37e1*/
  LABEL_16:
      if ( ++result >= 0x100 ) /*0x7d380a*/
        return (ControlClass * * int)result; /*0x7d380a*/
    }
  }
  for ( result = 0; result < 0x100; ++result ) /*0x7d380e*/
  {
    if ( result >= 0x41 && result <= 0x5A ) /*0x7d381d*/
    {
      byte_B78961[result] |= 0x10u; /*0x7d381f*/
      v8 = result + 32; /*0x7d3828*/
  LABEL_22:
      ((unsigned char *)&byte_B78860)[result] = v8; /*0x7d382b*/
      continue; /*0x7d3831*/
    }
    if ( result >= 0x61 && result <= 0x7A ) /*0x7d383b*/
    {
      byte_B78961[result] |= 0x20u; /*0x7d383d*/
      v8 = result - 32; /*0x7d3846*/
      goto LABEL_22; /*0x7d3849*/
    }
    ((unsigned char *)&byte_B78860)[result] = 0; /*0x7d384b*/
  }
  return (ControlClass * * int)result; /*0x7d3857*/
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
  return (void*)result; /*0x7d3885*/
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

  v3 = (uint8_t *)(aP0); /*0x7d3891*/
  if ( !dword_B7885C ) /*0x7d3897*/
    return (uint8_t *)strncpy((char *)aP0, (const char *)Source, Count); /*0x7d38a8*/
  _lock(25); /*0x7d38ad*/
  v5 = Count; /*0x7d38b2*/
  if ( !Count ) /*0x7d38b8*/
    goto LABEL_14; /*0x7d38b8*/
  v6 = (const uint8_t *)(Source); /*0x7d38ba*/
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
    memset( (void *)(v3), 0, v12 + 1); /*0x7d3909*/
  _unlock(25); /*0x7d3914*/
  return aP0; /*0x7d391d*/
}
}
// 0x7D3920
namespace gamemd {
int iswctype(wint_t C, wctype_t Type)
{
    int v2; // ecx
    WORD v3; // ax
    WORD CharType[2]; // [esp+0h] [ebp-4h] BYREF

    *(unsigned int *)CharType = v2; /*0x7d3923*/
    if ( C == 0xFFFF ) /*0x7d392a*/
      return 0; /*0x7d392a*/
    if ( C >= 0x100u ) /*0x7d3932*/
    {
      if ( __crtGetStringTypeW(1u, &C, 1, CharType, 0, 0) ) /*0x7d3954*/
      {
        v3 = CharType[0]; /*0x7d3964*/
        return Type & v3; /*0x7d3964*/
      }
      return 0; /*0x7d3963*/
    }
    v3 = *((unsigned short *)off_87C594 + C); /*0x7d393e*/
    return Type & v3; /*0x7d3962*/
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
  (v3) = ((v3) & ~0xFFFF) | ((unsigned int)(C[0]) & 0xFFFF); /*0x7d3a80*/
  v4 = (wint_t *)(aP1); /*0x7d3a84*/
  v5 = *(unsigned int *)aP1;
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
      (v3) = ((v3) & ~0xFFFF) | ((unsigned int)(v11) & 0xFFFF); /*0x7d3c51*/
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
          v27 = (wchar_t *)(asc_87CA48); /*0x7d4064*/
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
            v29 = (int)memset( (void *)(v49), 0, sizeof(v49)); /*0x7d406d*/
            if ( v10 == 123 ) /*0x7d4086*/
            {
              (v29) = ((v29) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(0) & 0xFFFF) << 16); /*0x7d408a*/
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
      v27 = (wchar_t *)(asc_87CA54); /*0x7d3f4a*/
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
      for ( ; !(((v3) >> 8) & 0xFF); *(unsigned int *)C = v3 ) /*0x7d3d1b*/
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
      mbtowc(&DstCh, (const char *)(SrcCh), SrcSizeInBytes); /*0x7d3d86*/
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
          while ( !(((v3) >> 8) & 0xFF) )
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
          while ( !(((v3) >> 8) & 0xFF) )
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
          if ( (((v3) >> 8) & 0xFF)
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
          if ( (((v3) >> 8) & 0xFF) ) /*0x7d43db*/
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
        if ( (((v3) >> 8) & 0xFF) ) /*0x7d4260*/
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
      if ( !(((v3) >> 8) & 0xFF) )
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
  return (ControlClass * *)result; /*0x7d4523*/
}
}
// 0x7D453C
namespace gamemd {
int _hextodec_0(wint_t C)
{
    wint_t result; // ax
    bool v3; // zf

    if ( (C & 0xFF00) == 0 )
    {
      if ( (int)SrcSizeInBytes <= 1
         ? *((unsigned char *)off_87C590 + 2 * (unsigned __int8)C) & 4
         : _isctype((unsigned __int8)C, 4) )
      {
        return C; /*0x7d457b*/
      }
    }
    v3 = iswctype(C, 2u) == 0; /*0x7d4589*/
    result = C - 39; /*0x7d458c*/
    if ( v3 ) /*0x7d458f*/
      return C - 7; /*0x7d4591*/
    return result; /*0x7d457e*/
}
}
// 0x7D482C
namespace gamemd {
void * signal_7D482C(int Signal, void * Function)
{
    unsigned int *v2; // esi
    void *v3; // eax
    unsigned int v4; // eax
    void (__cdecl *v5)(int); // edi
    DWORD LastError; // esi

    if ( Function == (_crt_signal_t)4 || Function == (_crt_signal_t)3 ) /*0x7d4841*/
      goto LABEL_28; /*0x7d4841*/
    if ( Signal == 2 || Signal == 21 || Signal == 22 || Signal == 15 ) /*0x7d4868*/
    {
      _lock(1); /*0x7d48fe*/
      if ( (Signal == 2 || Signal == 21) && !dword_B782EC ) /*0x7d4915*/
      {
        if ( !SetConsoleCtrlHandler((PHANDLER_ROUTINE)(ctrlevent_capture_4), 1) ) /*0x7d4925*/
        {
          LastError = GetLastError(); /*0x7d4952*/
          *__doserrno() = LastError; /*0x7d495a*/
          _unlock(1); /*0x7d495c*/
          goto LABEL_28; /*0x7d495c*/
        }
        dword_B782EC = 1; /*0x7d4927*/
      }
      switch ( Signal ) /*0x7d492f*/
      {
        case 2: /*0x7d492f*/
          v5 = (void (__cdecl *)(int))dword_B782DC; /*0x7d4991*/
          dword_B782DC = (int)Function; /*0x7d4997*/
          break;
        case 15: /*0x7d492f*/
          v5 = (void (__cdecl *)(int))dword_B782E8; /*0x7d4983*/
          dword_B782E8 = (int)Function; /*0x7d4989*/
          break;
        case 21: /*0x7d492f*/
          v5 = (void (__cdecl *)(int))dword_B782E0; /*0x7d4975*/
          dword_B782E0 = (int)Function; /*0x7d497b*/
          break;
        default:
          v5 = (void (__cdecl *)(int))dword_B782E4; /*0x7d493e*/
          dword_B782E4 = (int)Function; /*0x7d4944*/
          break;
      }
      _unlock(1); /*0x7d49a4*/
      return v5; /*0x7d49a4*/
    }
    if ( Signal != 8 && Signal != 4 && Signal != 11 ) /*0x7d487b*/
      goto LABEL_28; /*0x7d487b*/
    v2 = _getptd(); /*0x7d4886*/
    if ( (void *)v2[20] == &unk_87CB20 ) /*0x7d4890*/
    {
      v3 = malloc(Size); /*0x7d4898*/
      v2[20] = v3; /*0x7d48a0*/
      if ( !v3 ) /*0x7d48a3*/
      {
  LABEL_28:
        *_errno() = 22; /*0x7d4962*/
        return (_crt_signal_t)-1; /*0x7d4974*/
      }
      memcpy_0( (void *)(v3), (const void *)(&unk_87CB20), Size); /*0x7d48b1*/
    }
    v4 = siglookup(Signal, v2[20]); /*0x7d48bd*/
    if ( !v4 ) /*0x7d48c6*/
      goto LABEL_28; /*0x7d48c6*/
    v5 = *(void (__cdecl **)(int))(v4 + 8); /*0x7d48cc*/
    do /*0x7d48f2*/
    {
      if ( *(unsigned int *)(v4 + 4) != Signal ) /*0x7d48d2*/
        break; /*0x7d48d2*/
      *(unsigned int *)(v4 + 8) = (unsigned int)Function; /*0x7d48db*/
      v4 += 12; /*0x7d48e7*/
    }
    while ( v4 < v2[20] + 12 * dword_87CBA4 ); /*0x7d48f2*/
    return v5; /*0x7d4970*/
}
}
// 0x7D4A10
namespace gamemd {
int raise(int Signal)
{
    void (__cdecl *v2)(unsigned int); // ebx
    int *v3; // edi
    unsigned int *v4; // esi
    int v5; // edx
    int v6; // ecx
    int v7; // eax
    int v8; // [esp+Ch] [ebp-Ch]
    int v9; // [esp+10h] [ebp-8h]
    int v10; // [esp+14h] [ebp-4h]

    v10 = 0; /*0x7d4a19*/
    switch ( Signal ) /*0x7d4a22*/
    {
      case 2: /*0x7d4a22*/
        v2 = (void (__cdecl *)(unsigned int))dword_B782DC; /*0x7d4a8b*/
        v3 = &dword_B782DC; /*0x7d4a91*/
        break;
      case 4: /*0x7d4a22*/
      case 8: /*0x7d4a22*/
      case 11: /*0x7d4a22*/
        v4 = _getptd(); /*0x7d4a73*/
        v3 = (int *)(siglookup(Signal, v4[20]) + 8); /*0x7d4a83*/
        v2 = (void (__cdecl *)(unsigned int))*v3; /*0x7d4a87*/
        goto LABEL_15; /*0x7d4a89*/
      case 15: /*0x7d4a22*/
        v2 = (void (__cdecl *)(unsigned int))dword_B782E8; /*0x7d4a61*/
        v3 = &dword_B782E8; /*0x7d4a67*/
        break;
      case 21: /*0x7d4a22*/
        v2 = (void (__cdecl *)(unsigned int))dword_B782E0; /*0x7d4a54*/
        v3 = &dword_B782E0; /*0x7d4a5a*/
        break;
      case 22: /*0x7d4a22*/
        v2 = (void (__cdecl *)(unsigned int))dword_B782E4; /*0x7d4a47*/
        v3 = &dword_B782E4; /*0x7d4a4d*/
        break;
      default:
        return -1; /*0x7d4a42*/
    }
    v10 = 1; /*0x7d4a98*/
    _lock(1); /*0x7d4a9f*/
    v4 = (unsigned int *)Signal; /*0x7d4aa4*/
  LABEL_15:
    if ( v2 != (void (__cdecl *)(unsigned int))1 ) /*0x7d4aab*/
    {
      if ( !v2 ) /*0x7d4ac7*/
      {
        if ( v10 ) /*0x7d4acc*/
          _unlock(1); /*0x7d4ad0*/
        _exit(3); /*0x7d4ad8*/
      }
      if ( Signal == 8 || Signal == 11 || Signal == 4 ) /*0x7d4aed*/
      {
        v9 = v4[21]; /*0x7d4af5*/
        v4[21] = 0; /*0x7d4af8*/
        if ( Signal != 8 ) /*0x7d4afb*/
          goto LABEL_32; /*0x7d4afb*/
        v5 = v4[22]; /*0x7d4afd*/
        v4[22] = 140; /*0x7d4b00*/
        v8 = v5; /*0x7d4b07*/
      }
      if ( Signal == 8 ) /*0x7d4b0d*/
      {
        v6 = dword_87CB98; /*0x7d4b0f*/
        if ( dword_87CB98 < dword_87CB98 + dword_87CB9C ) /*0x7d4b1e*/
        {
          v7 = 12 * dword_87CB98; /*0x7d4b23*/
          do /*0x7d4b42*/
          {
            v7 += 12; /*0x7d4b29*/
            *(unsigned int *)(v4[20] + v7 - 4) = 0; /*0x7d4b2c*/
            ++v6; /*0x7d4b3d*/
          }
          while ( v6 < dword_87CB98 + dword_87CB9C ); /*0x7d4b42*/
        }
  LABEL_33:
        if ( v10 ) /*0x7d4b4c*/
          _unlock(1); /*0x7d4b50*/
        if ( Signal == 8 ) /*0x7d4b5a*/
        {
          ((void (__cdecl *)(int, unsigned int))v2)(8, v4[22]); /*0x7d4b61*/
        }
        else
        {
          v2(Signal); /*0x7d4b6a*/
          if ( Signal != 11 && Signal != 4 ) /*0x7d4b77*/
            return 0; /*0x7d4b77*/
        }
        v4[21] = v9; /*0x7d4b80*/
        if ( Signal == 8 ) /*0x7d4b83*/
          v4[22] = v8; /*0x7d4b88*/
        return 0; /*0x7d4b88*/
      }
  LABEL_32:
      *v3 = 0; /*0x7d4b46*/
      goto LABEL_33; /*0x7d4b46*/
    }
    if ( v10 ) /*0x7d4ab1*/
      _unlock(1); /*0x7d4ab8*/
    return 0; /*0x7d4b8d*/
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

  v2 = (char *)(aP0); /*0x7d4c00*/
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
    if ( !(((v5) >> 8) & 0xFF) ) /*0x7d4c3d*/
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
  v7 = (const char *)(aP1); /*0x7d4c61*/
  if ( ((uint8_t)aP1 & 3) == 0 ) /*0x7d4c6b*/
    goto main_loop_entrance_1; /*0x7d4c6b*/
  while ( 1 ) /*0x7d4c6d*/
  {
    (v8) = ((v8) & ~0xFF) | ((unsigned int)(*v7++) & 0xFF); /*0x7d4c6d*/
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
          if ( !(((v8) >> 8) & 0xFF) ) /*0x7d4ca6*/
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
    _lock(11); /*0x7d4d10*/
    _tzset_lk(); /*0x7d4d15*/
    _unlock(11); /*0x7d4d1c*/
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
  v1 = (const char *)(v0); /*0x7d4d5a*/
  if ( !v0 ) /*0x7d4d5f*/
  {
    _unlock(12); /*0x7d4d66*/
    if ( GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)(&TimeZoneInformation)) == -1 ) /*0x7d4d7b*/
      return; /*0x7d4d7b*/
    dword_87CA60 = 60 * TimeZoneInformation; /*0x7d4d99*/
    dword_B782F0 = 1; /*0x7d4d9e*/
    if ( TimeZoneInformation.StandardDate.wMonth ) /*0x7d4da4*/
      dword_87CA60 = 60 * TimeZoneInformation.StandardBias + 60 * TimeZoneInformation; /*0x7d4dad*/
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
  if ( *v0 && (!dword_B783A4 || strcmp(v0, (const char *)(dword_B783A4))) ) /*0x7d4e76*/
  {
    free( (void *)(dword_B783A4)); /*0x7d4e8b*/
    v2 = strlen( (const char *)(v1)); /*0x7d4e91*/
    v3 = (char *)malloc(v2 + 1); /*0x7d4e98*/
    dword_B783A4 = (unsigned int)v3; /*0x7d4ea2*/
    if ( v3 ) /*0x7d4ea7*/
    {
      strcpy( (char *)(v3), (const char *)(v1)); /*0x7d4eaf*/
      _unlock(12); /*0x7d4eb5*/
      strncpy( (char *)(lpMultiByteStr), (const char *)(v1), 3u); /*0x7d4ec3*/
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
        strncpy( (char *)(off_87CAF0), (const char *)(v4), 3u); /*0x7d4f82*/
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
int _isindst_0(unsigned int * a1)
{
    int v2; // eax
    int v3; // ecx
    int v4; // eax

    if ( !dword_87CA64 ) /*0x7d4fd7*/
      return 0; /*0x7d4fd7*/
    v2 = a1[5]; /*0x7d4fe7*/
    if ( v2 != dword_87CAF8 || v2 != dword_87CB08 ) /*0x7d4ff8*/
    {
      if ( dword_B782F0 ) /*0x7d5004*/
      {
        if ( TimeZoneInformation.DaylightDate.wYear ) /*0x7d5031*/
          cvtdate( /*0x7d5065*/
            1,
            0,
            v2,
            TimeZoneInformation.DaylightDate.wMonth,
            0,
            0,
            TimeZoneInformation.DaylightDate.wDay,
            TimeZoneInformation.DaylightDate.wHour,
            TimeZoneInformation.DaylightDate.wMinute,
            TimeZoneInformation.DaylightDate.wSecond,
            TimeZoneInformation.DaylightDate.wMilliseconds);
        else
          cvtdate( /*0x7d504e*/
            1,
            1,
            v2,
            TimeZoneInformation.DaylightDate.wMonth,
            TimeZoneInformation.DaylightDate.wDay,
            TimeZoneInformation.DaylightDate.wDayOfWeek,
            0,
            TimeZoneInformation.DaylightDate.wHour,
            TimeZoneInformation.DaylightDate.wMinute,
            TimeZoneInformation.DaylightDate.wSecond,
            TimeZoneInformation.DaylightDate.wMilliseconds);
        if ( TimeZoneInformation.StandardDate.wYear ) /*0x7d5094*/
          cvtdate( /*0x7d50d4*/
            0,
            0,
            a1[5],
            TimeZoneInformation.StandardDate.wMonth,
            0,
            0,
            TimeZoneInformation.StandardDate.wDay,
            TimeZoneInformation.StandardDate.wHour,
            TimeZoneInformation.StandardDate.wMinute,
            TimeZoneInformation.StandardDate.wSecond,
            TimeZoneInformation.StandardDate.wMilliseconds);
        else
          cvtdate( /*0x7d50b4*/
            0,
            1,
            a1[5],
            TimeZoneInformation.StandardDate.wMonth,
            TimeZoneInformation.StandardDate.wDay,
            TimeZoneInformation.StandardDate.wDayOfWeek,
            0,
            TimeZoneInformation.StandardDate.wHour,
            TimeZoneInformation.StandardDate.wMinute,
            TimeZoneInformation.StandardDate.wSecond,
            TimeZoneInformation.StandardDate.wMilliseconds);
      }
      else
      {
        cvtdate(1, 1, v2, 4, 1, 0, 0, 2, 0, 0, 0); /*0x7d50e3*/
        cvtdate(0, 1, a1[5], 10, 5, 0, 0, 2, 0, 0, 0); /*0x7d50f8*/
      }
    }
    v3 = a1[7]; /*0x7d510b*/
    if ( dword_87CAFC < dword_87CB0C ) /*0x7d5110*/
    {
      if ( v3 >= dword_87CAFC && v3 <= dword_87CB0C ) /*0x7d511c*/
      {
        if ( v3 > dword_87CAFC && v3 < dword_87CB0C ) /*0x7d5128*/
          return 1; /*0x7d512f*/
        goto LABEL_24; /*0x7d5128*/
      }
      return 0; /*0x7d4fdb*/
    }
    if ( v3 < dword_87CB0C || v3 > dword_87CAFC ) /*0x7d5136*/
      return 1; /*0x7d5136*/
    if ( v3 > dword_87CB0C && v3 < dword_87CAFC ) /*0x7d513e*/
      return 0; /*0x7d513e*/
  LABEL_24:
    v4 = 1000 * (*a1 + 60 * (a1[1] + 60 * a1[2])); /*0x7d5144*/
    if ( v3 == dword_87CAFC ) /*0x7d515a*/
      return v4 >= dword_87CB00; /*0x7d5164*/
    else
      return v4 < dword_87CB10; /*0x7d5173*/
}
}
// 0x7D5178
namespace gamemd {
void cvtdate(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int v12; // eax
    int v13; // ecx
    int v14; // edx
    int v15; // ecx
    int v16; // esi
    int v17; // ecx
    int result; // eax
    int v19; // eax
    bool v20; // sf
    int v21; // ecx
    int v22; // [esp+18h] [ebp+10h]

    if ( a2 == 1 ) /*0x7d5184*/
    {
      v22 = a3 & 3; /*0x7d5190*/
      if ( (a3 & 3) != 0 ) /*0x7d5196*/
        v12 = (&dword_87D5B0)[a4]; /*0x7d51a6*/
      else
        v12 = (&dword_87D57C)[a4]; /*0x7d519b*/
      v13 = v12 + 1; /*0x7d51ae*/
      v14 = (365 * a3 + ((a3 - 1) >> 2) + v12 + 1 - 25563) % 7; /*0x7d51cd*/
      if ( v14 > a6 ) /*0x7d51d6*/
        v15 = a6 + 7 * a5 - v14 + v13; /*0x7d51ee*/
      else
        v15 = v13 + a6 + 7 * a5 - v14 - 7; /*0x7d51e0*/
      if ( a5 == 5 ) /*0x7d51f4*/
      {
        if ( v22 ) /*0x7d51fa*/
          v16 = (&dword_87D5B4)[a4]; /*0x7d5204*/
        else
          v16 = (&dword_87D580)[a4]; /*0x7d51fc*/
        if ( v15 > v16 ) /*0x7d520c*/
          v15 -= 7; /*0x7d520e*/
      }
    }
    else
    {
      if ( (a3 & 3) != 0 ) /*0x7d5219*/
        v17 = (&dword_87D5B0)[a4]; /*0x7d5224*/
      else
        v17 = (&dword_87D57C)[a4]; /*0x7d521b*/
      v15 = a7 + v17; /*0x7d522b*/
    }
    if ( a1 == 1 ) /*0x7d5232*/
    {
      dword_87CAFC = v15; /*0x7d5237*/
      dword_87CAF8 = a3; /*0x7d5243*/
      result = a11 + 1000 * (a10 + 60 * (a9 + 60 * a8)); /*0x7d5255*/
      dword_87CB00 = result; /*0x7d5258*/
      return result; /*0x7d525d*/
    }
    dword_87CB0C = v15; /*0x7d5262*/
    v19 = 1000 * (a10 + dword_87CA68 + 60 * (a9 + 60 * a8)); /*0x7d527a*/
    v20 = a11 + v19 < 0; /*0x7d5280*/
    result = a11 + v19; /*0x7d5280*/
    dword_87CB10 = result; /*0x7d5283*/
    if ( v20 ) /*0x7d5288*/
    {
      result += 86400000; /*0x7d528a*/
      v21 = v15 - 1; /*0x7d528f*/
      dword_87CB10 = result; /*0x7d5290*/
  LABEL_24:
      dword_87CB0C = v21; /*0x7d52a8*/
      goto LABEL_25; /*0x7d52a8*/
    }
    if ( result >= 86400000 ) /*0x7d529e*/
    {
      result -= 86400000; /*0x7d52a0*/
      v21 = v15 + 1; /*0x7d52a2*/
      dword_87CB10 = result; /*0x7d52a3*/
      goto LABEL_24; /*0x7d52a3*/
    }
  LABEL_25:
    dword_87CB08 = a3; /*0x7d52ae*/
    return result; /*0x7d52b4*/
}
}
// 0x7D544A
namespace gamemd {
int _sopen(const char * FileName, int OpenFlag, int ShareFlag, ...)
{
    unsigned int v3; // ecx
    DWORD v5; // esi
    int v6; // ebx
    HANDLE v7; // eax
    void *v8; // esi
    DWORD LastError; // eax
    int v10; // esi
    DWORD FileType; // eax
    char v12; // cl
    int v13; // esi
    bool v14; // zf
    ObjectClass *v15; // [esp+0h] [ebp-28h]
    struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+Ch] [ebp-1Ch] BYREF
    DWORD dwShareMode; // [esp+18h] [ebp-10h]
    DWORD dwDesiredAccess; // [esp+1Ch] [ebp-Ch]
    DWORD dwCreationDisposition; // [esp+20h] [ebp-8h]
    char v20; // [esp+27h] [ebp-1h]
    char lpFileName_3; // [esp+33h] [ebp+Bh]
    int v22; // [esp+3Ch] [ebp+14h]
    va_list va; // [esp+40h] [ebp+18h] BYREF

    va_start(va, ShareFlag);
    v22 = va_arg(va, unsigned int); /*0x7d544a*/
    SecurityAttributes.nLength = 12; /*0x7d545b*/
    SecurityAttributes.lpSecurityDescriptor = 0; /*0x7d5462*/
    if ( (OpenFlag & 0x80u) == 0 ) /*0x7d5465*/
    {
      v20 = 0; /*0x7d5470*/
      SecurityAttributes.bInheritHandle = 1; /*0x7d5474*/
    }
    else
    {
      SecurityAttributes.bInheritHandle = 0; /*0x7d5467*/
      v20 = 16; /*0x7d546a*/
    }
    if ( (OpenFlag & 0x8000) == 0 && ((OpenFlag & 0x4000) != 0 || dword_B7857C != 0x8000) ) /*0x7d548f*/
      v20 |= 0x80u; /*0x7d5491*/
    if ( (OpenFlag & 3) != 0 ) /*0x7d549e*/
    {
      if ( (OpenFlag & 3) == 1 ) /*0x7d54a1*/
      {
        dwDesiredAccess = 0x40000000; /*0x7d54b3*/
      }
      else
      {
        if ( (OpenFlag & 3) != 2 ) /*0x7d54a4*/
          goto LABEL_34; /*0x7d54a4*/
        dwDesiredAccess = -1073741824; /*0x7d54aa*/
      }
    }
    else
    {
      dwDesiredAccess = 0x80000000; /*0x7d54bc*/
    }
    switch ( ShareFlag ) /*0x7d54c9*/
    {
      case 16: /*0x7d54c9*/
        dwShareMode = 0; /*0x7d54f1*/
        break;
      case 32: /*0x7d54c9*/
        dwShareMode = 1; /*0x7d54e8*/
        break;
      case 48: /*0x7d54c9*/
        dwShareMode = 2; /*0x7d54df*/
        break;
      case 64: /*0x7d54c9*/
        dwShareMode = 3; /*0x7d54da*/
        break; /*0x7d54dd*/
      default:
  LABEL_34:
        *_errno() = 22; /*0x7d554e*/
        *__doserrno() = 0; /*0x7d555e*/
        return -1; /*0x7d5563*/
    }
    v3 = OpenFlag & 0x700; /*0x7d54f4*/
    if ( v3 > 0x400 ) /*0x7d5507*/
    {
      if ( v3 != 1280 ) /*0x7d5540*/
      {
        if ( v3 == 1536 ) /*0x7d5548*/
          goto LABEL_35; /*0x7d5548*/
        if ( v3 != 1792 ) /*0x7d554c*/
          goto LABEL_34; /*0x7d554c*/
      }
      dwCreationDisposition = 1; /*0x7d5571*/
      goto LABEL_37; /*0x7d5571*/
    }
    if ( v3 == 1024 || (OpenFlag & 0x700) == 0 ) /*0x7d550d*/
    {
      dwCreationDisposition = 3; /*0x7d5535*/
      goto LABEL_37; /*0x7d5538*/
    }
    if ( v3 == 256 ) /*0x7d5511*/
    {
      dwCreationDisposition = 4; /*0x7d552c*/
      goto LABEL_37; /*0x7d5533*/
    }
    if ( v3 == 512 ) /*0x7d5519*/
    {
  LABEL_35:
      dwCreationDisposition = 5; /*0x7d5568*/
      goto LABEL_37; /*0x7d556f*/
    }
    if ( v3 != 768 ) /*0x7d5521*/
      goto LABEL_34; /*0x7d5521*/
    dwCreationDisposition = 2; /*0x7d5523*/
  LABEL_37:
    v5 = 128; /*0x7d5578*/
    if ( (OpenFlag & 0x100) != 0 && (v22 & ~(unsigned char)dword_B781C4 & 0x80u) == 0 ) /*0x7d5592*/
      v5 = 1; /*0x7d5596*/
    if ( (OpenFlag & 0x40) != 0 ) /*0x7d5599*/
    {
      v5 |= 0x4000000u; /*0x7d559b*/
      IDA_BYTE2(dwDesiredAccess) |= 1u; /*0x7d55a1*/
    }
    if ( (OpenFlag & 0x1000) != 0 ) /*0x7d55a8*/
      v5 |= 0x100u; /*0x7d55aa*/
    if ( (OpenFlag & 0x20) != 0 ) /*0x7d55ae*/
    {
      v5 |= 0x8000000u; /*0x7d55b0*/
    }
    else if ( (OpenFlag & 0x10) != 0 ) /*0x7d55ba*/
    {
      v5 |= 0x10000000u; /*0x7d55bc*/
    }
    v6 = _alloc_osfhnd(v15); /*0x7d55c7*/
    if ( v6 == -1 ) /*0x7d55ce*/
    {
      *_errno() = 24; /*0x7d55d5*/
      *__doserrno() = 0; /*0x7d55e0*/
      return -1; /*0x7d55e5*/
    }
    v7 = CreateFileA(FileName, dwDesiredAccess, dwShareMode, &SecurityAttributes, dwCreationDisposition, v5, 0); /*0x7d55fd*/
    v8 = (void *)(v7); /*0x7d5603*/
    if ( v7 == (HANDLE)-1 ) /*0x7d5607*/
      goto LABEL_51; /*0x7d5607*/
    FileType = GetFileType(v7); /*0x7d561e*/
    if ( FileType ) /*0x7d5626*/
    {
      if ( FileType == 2 ) /*0x7d5634*/
      {
        v20 |= 0x40u; /*0x7d5636*/
      }
      else if ( FileType == 3 ) /*0x7d563f*/
      {
        v20 |= 8u; /*0x7d5641*/
      }
      _set_osfhnd(v6, v8); /*0x7d5647*/
      v12 = v20 | 1; /*0x7d565f*/
      v13 = 36 * (v6 & 0x1F); /*0x7d566d*/
      v14 = (v20 & 0x48) == 0; /*0x7d5670*/
      lpFileName_3 = v20 & 0x48; /*0x7d5670*/
      *(unsigned char *)(dword_B78A80[v6 >> 5] + v13 + 4) = v20 | 1; /*0x7d5674*/
      if ( v14 && v12 < 0 && (OpenFlag & 2) != 0 ) /*0x7d5683*/
      {
        dwShareMode = _lseek_lk(v6, -1, 2u); /*0x7d5695*/
        if ( dwShareMode == -1 ) /*0x7d5698*/
        {
          if ( *__doserrno() != 131 ) /*0x7d56a5*/
          {
  LABEL_63:
            _close(v6); /*0x7d56a7*/
            v10 = -1; /*0x7d56ae*/
            goto LABEL_72; /*0x7d56b1*/
          }
        }
        else
        {
          (ShareFlag) = ((ShareFlag) & ~(0xFFULL << 24)) | (((unsigned __int64)(unsigned int)(0) & 0xFF) << 24); /*0x7d56b3*/
          if ( !_read_lk(v6, (char *)&ShareFlag + 3, 1u) && (((unsigned int)(ShareFlag) >> 24) & 0xFF) == 26 && _chsize_lk(v6, dwShareMode) == -1 /*0x7d56f0*/
            || _lseek_lk(v6, 0, 0) == -1 )
          {
            goto LABEL_63; /*0x7d56f0*/
          }
        }
      }
      if ( !lpFileName_3 && (OpenFlag & 8) != 0 ) /*0x7d56fc*/
        *(unsigned char *)(dword_B78A80[v6 >> 5] + v13 + 4) |= 0x20u; /*0x7d5700*/
      v10 = v6; /*0x7d5709*/
      goto LABEL_72; /*0x7d5709*/
    }
    CloseHandle(v8); /*0x7d5629*/
  LABEL_51:
    LastError = GetLastError(); /*0x7d5609*/
    _dosmaperr(LastError); /*0x7d5610*/
    v10 = -1; /*0x7d5616*/
  LABEL_72:
    _unlock_fhandle(v6); /*0x7d570b*/
    return v10; /*0x7d5714*/
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

  v2 = (uint8_t *)(0); /*0x7d5723*/
  if ( !dword_B7885C ) /*0x7d572b*/
    return (uint8_t *)strrchr((const char *)String, C); /*0x7d573a*/
  _lock(25); /*0x7d573f*/
  v4 = (const uint8_t *)(String); /*0x7d5745*/
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
    int v0; // edi
    int i; // esi
    int v2; // eax

    v0 = 0; /*0x7d5795*/
    _lock(2); /*0x7d5797*/
    for ( i = 0; i < (int)Count; ++i ) /*0x7d57a5*/
    {
      if ( *(unsigned int *)(dword_B78BC4 + 4 * i) ) /*0x7d57ac*/
      {
        _lock_file2(i, *(unsigned int *)(dword_B78BC4 + 4 * i)); /*0x7d57b5*/
        v2 = *(unsigned int *)(dword_B78BC4 + 4 * i); /*0x7d57c1*/
        if ( (*(unsigned char *)(v2 + 12) & 0x83) != 0 && *(unsigned int *)(v2 + 28) ) /*0x7d57ca*/
        {
          _fclose_lk(*(unsigned int *)(dword_B78BC4 + 4 * i)); /*0x7d57d1*/
          ++v0; /*0x7d57d7*/
        }
        _unlock_file2(i, *(unsigned int *)(dword_B78BC4 + 4 * i)); /*0x7d57e1*/
      }
    }
    _unlock(2); /*0x7d57f3*/
    return v0; /*0x7d57fb*/
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
    char *v0; // esi
    int v1; // edi
    char **v2; // esi
    const char *i; // edi
    int v4; // eax
    int v5; // ebp
    char *v6; // eax
    int result; // eax

    if ( !dword_B78BB8 ) /*0x7d5acb*/
      __initmbctable(); /*0x7d5acd*/
    v0 = (char *)(dword_B78228); /*0x7d5ad2*/
    v1 = 0; /*0x7d5ad8*/
    while ( *v0 ) /*0x7d5ade*/
    {
      if ( *v0 != 61 ) /*0x7d5ae2*/
        ++v1; /*0x7d5ae4*/
      v0 += strlen( (const char *)(v0)) + 1; /*0x7d5aec*/
    }
    v2 = (char **)malloc(4 * v1 + 4); /*0x7d5aff*/
    dword_B781E4 = (unsigned int)v2; /*0x7d5b04*/
    if ( !v2 ) /*0x7d5b0a*/
      _amsg_exit(9u); /*0x7d5b0e*/
    for ( i = dword_B78228; *i; i += v5 ) /*0x7d5b1a*/
    {
      v4 = strlen( (const char *)(i)); /*0x7d5b20*/
      v5 = v4 + 1; /*0x7d5b28*/
      if ( *i != 61 ) /*0x7d5b2c*/
      {
        v6 = (char *)malloc(v4 + 1); /*0x7d5b2f*/
        *v2 = v6; /*0x7d5b37*/
        if ( !v6 ) /*0x7d5b39*/
          _amsg_exit(9u); /*0x7d5b3d*/
        strcpy( *v2++, (const char *)(i)); /*0x7d5b46*/
      }
    }
    result = free( (void *)(dword_B78228)); /*0x7d5b5d*/
    dword_B78228 = 0; /*0x7d5b63*/
    *v2 = 0; /*0x7d5b69*/
    dword_B78BB4 = 1; /*0x7d5b6d*/
    return result; /*0x7d5b6b*/
}
}
// 0x7D5B79
namespace gamemd {
int _setargv()
{
    CHAR *v0; // edi
    char *v1; // esi
    int v3; // [esp+Ch] [ebp-8h] BYREF
    int v4; // [esp+10h] [ebp-4h] BYREF

    if ( !dword_B78BB8 ) /*0x7d5b89*/
      __initmbctable(); /*0x7d5b8b*/
    GetModuleFileNameA(0, Filename, 0x104u); /*0x7d5b9c*/
    dword_B781F4 = (int)Filename; /*0x7d5ba7*/
    v0 = (CHAR *)(Filename); /*0x7d5bad*/
    if ( *(unsigned char *)dword_B78BA8 ) /*0x7d5baf*/
      v0 = (CHAR *)dword_B78BA8; /*0x7d5bb3*/
    parse_cmdline(v0, 0, 0, &v4, &v3); /*0x7d5bc0*/
    v1 = (char *)malloc(v3 + 4 * v4); /*0x7d5bd4*/
    if ( !v1 ) /*0x7d5bdb*/
      _amsg_exit(8u); /*0x7d5bdf*/
    parse_cmdline(v0, v1, &v1[4 * v4], &v4, &v3); /*0x7d5bf6*/
    dword_B781DC = (int)v1; /*0x7d5c02*/
    dword_B781D8 = v4 - 1; /*0x7d5c0a*/
    return v4 - 1; /*0x7d5c08*/
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
  v6 = (uint8_t *)(a3); /*0x7d5c20*/
  v7 = (uint8_t **)(a2); /*0x7d5c24*/
  *a4 = 1; /*0x7d5c27*/
  v8 = (uint8_t *)(a1); /*0x7d5c2d*/
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
      a2 = (unsigned char **)(v7); /*0x7d5cf6*/
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
          v7 = (uint8_t **)(a2); /*0x7d5d31*/
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

  v0 = (CHAR *)(0); /*0x7d5dd7*/
  EnvironmentStringsW = (WCHAR *)(0); /*0x7d5dd9*/
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
        v4 = WideCharToMultiByte( 0, 0, (LPCWCH)(EnvironmentStringsW), cchWideChar, 0, 0, 0, 0); /*0x7d5e59*/
        v5 = v4; /*0x7d5e5b*/
        if ( v4 ) /*0x7d5e5f*/
        {
          v6 = (CHAR *)malloc(v4); /*0x7d5e62*/
          Block = v6; /*0x7d5e6a*/
          if ( v6 ) /*0x7d5e6e*/
          {
            if ( !WideCharToMultiByte( 0, 0, (LPCWCH)(EnvironmentStringsW), cchWideChar, (LPSTR)(v6), v5, 0, 0) ) /*0x7d5e7b*/
            {
              free( (void *)(Block)); /*0x7d5e85*/
              Block = (CHAR *)(0); /*0x7d5e8b*/
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
    memcpy_0( (void *)(v10), (const void *)(EnvironmentStrings), v9); /*0x7d5edc*/
  else
    v11 = (void *)(0); /*0x7d5ed5*/
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
      free( (void *)(v1)); /*0x7d60ea*/
      return 1; /*0x7d60f1*/
    }
    off_87C1E0 = v1; /*0x7d60f9*/
    _free_lc_time((void **)dword_B78504); /*0x7d60ff*/
    free( (void *)(dword_B78504)); /*0x7d610a*/
    dword_B78504 = (unsigned int)v1; /*0x7d6110*/
  }
  else
  {
    off_87C1E0 = &off_87C1E8; /*0x7d611f*/
    _free_lc_time((void **)dword_B78504); /*0x7d6129*/
    free( (void *)(dword_B78504)); /*0x7d6134*/
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
      free( (void *)(dword_B78508)); /*0x7d6689*/
      free( (void *)(dword_B7850C)); /*0x7d6694*/
      free( (void *)(dword_B78510)); /*0x7d669f*/
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
    free( (void *)(dword_B78508)); /*0x7d673a*/
    free( (void *)(dword_B7850C)); /*0x7d6745*/
    free( (void *)(dword_B78510)); /*0x7d6750*/
    dword_B78508 = 0; /*0x7d6757*/
    dword_B7850C = 0; /*0x7d675d*/
    dword_B78510 = 0; /*0x7d6763*/
    *off_87D620 = malloc(2u); /*0x7d6777*/
    if ( !*off_87D620 ) /*0x7d677e*/
      return -1; /*0x7d677e*/
    strcpy( (char *)*off_87D620, (const char *)(asc_826598)); /*0x7d678e*/
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
  Block = (void *)(0); /*0x7d6ab1*/
  lpSrcStr = 0; /*0x7d6ab4*/
  if ( dword_B782A0 ) /*0x7d6ab7*/
  {
    if ( !CodePage && __getlocaleinfo(0, (uint16_t)word_B7852C, 0x1004u, (char **)&CodePage) ) /*0x7d6ada*/
      goto LABEL_38; /*0x7d6ada*/
    v2 = (WORD *)malloc(0x202u); /*0x7d6af5*/
    v16 = (void *)(v2); /*0x7d6af8*/
    v17 = malloc(0x202u); /*0x7d6b05*/
    Block = malloc(0x101u); /*0x7d6b0e*/
    v3 = (const WCHAR *)malloc(0x202u); /*0x7d6b11*/
    lpSrcStr = (unsigned int)v3; /*0x7d6b1b*/
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
        (j) = ((j) & ~0xFF) | ((unsigned int)(*v5) & 0xFF); /*0x7d6b88*/
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
            v13 = (unsigned short *)((char *)v16 + 2 * v12 + 2); /*0x7d6c25*/
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
      off_87C594 = (void*)(v10); /*0x7d6c42*/
      off_87C590 = (void*)((char *)v16 + 2); /*0x7d6c4b*/
      if ( dword_B78518 ) /*0x7d6c57*/
        free( (void *)(dword_B78518)); /*0x7d6c5a*/
      dword_B78518 = (unsigned int)v16; /*0x7d6c63*/
      if ( dword_B7851C ) /*0x7d6c6f*/
        free( (void *)(dword_B7851C)); /*0x7d6c72*/
      dword_B7851C = (unsigned int)v17; /*0x7d6c7b*/
    }
    else
    {
  LABEL_38:
      free( (void *)(v16)); /*0x7d6c9b*/
      free( (void *)(v17)); /*0x7d6ca3*/
      v1 = 1; /*0x7d6cac*/
    }
    free( (void *)(Block)); /*0x7d6c83*/
    free((void *)lpSrcStr); /*0x7d6c8b*/
    return (AbstractClass * *)v1; /*0x7d6c91*/
  }
  else
  {
    off_87C590 = &_ctype[1]; /*0x7d6cba*/
    off_87C594 = &_ctype[1]; /*0x7d6cbf*/
    free( (void *)(dword_B78518)); /*0x7d6cc4*/
    free( (void *)(dword_B7851C)); /*0x7d6ccf*/
    dword_B78518 = 0; /*0x7d6cd5*/
    dword_B7851C = 0; /*0x7d6cdc*/
    return 0; /*0x7d6ce2*/
  }
}
}
// 0x7D6D2A
namespace gamemd {
int __get_qualified_locale(char * a1, CCINIClass * a2, int a3)
{
    char *v3; // eax
    int v4; // edi

    if ( !dword_B78564 ) /*0x7d6d35*/
    {
      if ( IsThisWindowsNT() ) /*0x7d6d37*/
        dword_B78564 = (int (__stdcall *)(unsigned int, unsigned int, unsigned int, unsigned int))GetLocaleInfoA; /*0x7d6d45*/
      else
        dword_B78564 = (int (__stdcall *)(unsigned int, unsigned int, unsigned int, unsigned int))crtGetLocaleInfoA_16; /*0x7d6d4c*/
    }
    if ( !a1 ) /*0x7d6d5c*/
      goto LABEL_20; /*0x7d6d5c*/
    dword_B78554 = (unsigned int)a1; /*0x7d6d62*/
    if ( *a1 ) /*0x7d6d68*/
      TranslateName(&off_87D1B0, 64, &dword_B78554); /*0x7d6d78*/
    v3 = a1 + 64; /*0x7d6d80*/
    dword_B78558 = a1 + 64; /*0x7d6d85*/
    if ( a1 != (char *)-64 && *v3 ) /*0x7d6d8c*/
    {
      TranslateName(&off_87D0F8, 22, &dword_B78558); /*0x7d6d9c*/
      v3 = (char *)(dword_B78558); /*0x7d6da1*/
    }
    dword_B7855C = 0; /*0x7d6daf*/
    if ( !dword_B78554 || !*dword_B78554 ) /*0x7d6db9*/
    {
      if ( v3 && *v3 ) /*0x7d6dd7*/
      {
        GetLcidFromCountry(); /*0x7d6ddb*/
        goto LABEL_21; /*0x7d6de0*/
      }
  LABEL_20:
      GetLcidFromDefault(); /*0x7d6de2*/
      goto LABEL_21; /*0x7d6de2*/
    }
    if ( v3 && *v3 ) /*0x7d6dc1*/
      GetLcidFromLangCountry(); /*0x7d6dc5*/
    else
      GetLcidFromLanguage(); /*0x7d6dcc*/
  LABEL_21:
    if ( dword_B7855C ) /*0x7d6ded*/
    {
      v4 = ProcessCodePage(a1 + 128); /*0x7d6dff*/
      if ( v4 ) /*0x7d6e04*/
      {
        if ( IsValidCodePage((unsigned __int16)v4) && IsValidLocale(Locale, 1u) ) /*0x7d6e24*/
        {
          if ( a2 ) /*0x7d6e34*/
          {
            *a2 = Locale; /*0x7d6e3d*/
            a2[1] = dword_B78560; /*0x7d6e47*/
            a2[2] = v4; /*0x7d6e4b*/
          }
          if ( !a3 ) /*0x7d6e55*/
            return 1; /*0x7d6e55*/
          if ( dword_B78564(Locale, 4097, a3, 64) && dword_B78564(dword_B78560, 4098, a3 + 64, 64) ) /*0x7d6e80*/
          {
            _itoa(v4, (char *)(a3 + 128), 10); /*0x7d6e94*/
            return 1; /*0x7d6e9f*/
          }
        }
      }
    }
    return 0; /*0x7d6ea3*/
}
}
// 0x7D6F86
namespace gamemd {
int LangCountryEnumProc_4(LPSTR a1)
{
    int v1; // esi
    int v2; // eax
    int v4; // eax
    char String2[120]; // [esp+Ch] [ebp-78h] BYREF

    v1 = LcidFromHexString(a1); /*0x7d6f98*/
    v2 = -(dword_B78548 != 0); /*0x7d6fa7*/
    (v2) = ((v2) & ~0xFFFF) | ((unsigned int)(v2 & 0xF005) & 0xFFFF); /*0x7d6fa9*/
    if ( !dword_B78564(v1, v2 + 4098, String2, 120) ) /*0x7d6fbc*/
      goto LABEL_17; /*0x7d6fbc*/
    if ( !_strcmpi(dword_B78558, String2) )
    {
      if ( !dword_B78564(v1, dword_B78550 != 0 ? 3 : 4097, String2, 120) )
      {
  LABEL_17:
        dword_B7855C = 0; /*0x7d70d5*/
        return 1; /*0x7d70df*/
      }
      if ( !_strcmpi(dword_B78554, String2) ) /*0x7d7012*/
      {
        IDA_LOWORD(dword_B7855C) = dword_B7855C | 0x304; /*0x7d701d*/
        dword_B78560 = v1; /*0x7d7026*/
  LABEL_6:
        Locale = v1; /*0x7d702c*/
        goto LABEL_15; /*0x7d7032*/
      }
      if ( (dword_B7855C & 2) == 0 ) /*0x7d703b*/
      {
        if ( dword_B7854C && !_strnicmp(dword_B78554, String2, dword_B7854C) ) /*0x7d7051*/
        {
          dword_B7855C |= 2u; /*0x7d7063*/
          dword_B78560 = v1; /*0x7d706a*/
          if ( strlen( (const char *)(dword_B78554)) == dword_B7854C ) /*0x7d707c*/
            goto LABEL_6; /*0x7d707c*/
        }
        else if ( (dword_B7855C & 1) == 0 && TestDefaultCountry(v1) ) /*0x7d708a*/
        {
          dword_B7855C |= 1u; /*0x7d7094*/
          dword_B78560 = v1; /*0x7d709b*/
        }
      }
    }
  LABEL_15:
    if ( (dword_B7855C & 0x300) != 0x300 )
    {
      if ( !dword_B78564(v1, dword_B78550 != 0 ? 3 : 4097, String2, 120) )
        goto LABEL_17; /*0x7d70d3*/
      if ( _strcmpi(dword_B78554, String2) ) /*0x7d70ee*/
      {
        if ( dword_B78550 || !dword_B7854C || _strnicmp(dword_B78554, String2, dword_B7854C) ) /*0x7d7148*/
          return ((unsigned int)~dword_B7855C >> 2) & 1; /*0x7d7152*/
        v4 = TestDefaultLanguage(v1, 0); /*0x7d7156*/
      }
      else
      {
        IDA_BYTE1(dword_B7855C) |= 2u; /*0x7d70f9*/
        if ( dword_B78550 || !dword_B7854C || strlen( (const char *)(dword_B78554)) != dword_B7854C ) /*0x7d7124*/
          goto LABEL_28; /*0x7d7124*/
        v4 = TestDefaultLanguage(v1, 1); /*0x7d7128*/
      }
      if ( v4 ) /*0x7d715f*/
      {
  LABEL_28:
        IDA_BYTE1(dword_B7855C) |= 1u; /*0x7d7161*/
        if ( !Locale ) /*0x7d716e*/
          Locale = v1; /*0x7d7170*/
      }
    }
    return ((unsigned int)~dword_B7855C >> 2) & 1; /*0x7d7183*/
}
}
// 0x7D71E0
namespace gamemd {
int LanguageEnumProc_4(LPSTR a1)
{
    int v1; // esi
    int v2; // eax
    int v4; // eax
    char String2[120]; // [esp+4h] [ebp-78h] BYREF

    v1 = LcidFromHexString(a1); /*0x7d71f0*/
    v2 = -(dword_B78550 != 0); /*0x7d71ff*/
    (v2) = ((v2) & ~0xFFFF) | ((unsigned int)(v2 & 0xF002) & 0xFFFF); /*0x7d7201*/
    if ( !dword_B78564(v1, v2 + 4097, String2, 120) ) /*0x7d720c*/
    {
      dword_B7855C = 0; /*0x7d7216*/
      return 1; /*0x7d721f*/
    }
    if ( _strcmpi(dword_B78554, String2) ) /*0x7d722b*/
    {
      if ( dword_B78550 || !dword_B7854C || _strnicmp(dword_B78554, String2, dword_B7854C) ) /*0x7d725f*/
        return ((unsigned int)~dword_B7855C >> 2) & 1; /*0x7d7269*/
      v4 = TestDefaultLanguage(v1, 0); /*0x7d726d*/
    }
    else
    {
      if ( dword_B78550 ) /*0x7d723c*/
      {
  LABEL_11:
        dword_B7855C |= 4u; /*0x7d7278*/
        dword_B78560 = v1; /*0x7d727f*/
        Locale = v1; /*0x7d7285*/
        return ((unsigned int)~dword_B7855C >> 2) & 1; /*0x7d7285*/
      }
      v4 = TestDefaultLanguage(v1, 1); /*0x7d7240*/
    }
    if ( v4 ) /*0x7d7276*/
      goto LABEL_11; /*0x7d7276*/
    return ((unsigned int)~dword_B7855C >> 2) & 1; /*0x7d7298*/
}
}
// 0x7D72D4
namespace gamemd {
int CountryEnumProc_4(LPSTR a1)
{
    int v1; // esi
    int v2; // eax
    char v4[120]; // [esp+4h] [ebp-78h] BYREF

    v1 = LcidFromHexString(a1); /*0x7d72e4*/
    v2 = -(dword_B78548 != 0); /*0x7d72f3*/
    (v2) = ((v2) & ~0xFFFF) | ((unsigned int)(v2 & 0xF005) & 0xFFFF); /*0x7d72f5*/
    if ( dword_B78564(v1, v2 + 4098, v4, 120) ) /*0x7d7300*/
    {
      if ( !_strcmpi(dword_B78558, v4) ) /*0x7d731f*/
      {
        if ( TestDefaultCountry(v1) ) /*0x7d732b*/
        {
          dword_B7855C |= 4u; /*0x7d7335*/
          dword_B78560 = v1; /*0x7d733c*/
          Locale = v1; /*0x7d7342*/
        }
      }
      return ((unsigned int)~dword_B7855C >> 2) & 1; /*0x7d7352*/
    }
    else
    {
      dword_B7855C = 0; /*0x7d730a*/
      return 1; /*0x7d7312*/
    }
}
}
// 0x7D735A
namespace gamemd {
int GetLcidFromDefault()
{
    LCID result; // eax

    IDA_LOWORD(dword_B7855C) = dword_B7855C | 0x104; /*0x7d735a*/
    result = GetUserDefaultLCID(); /*0x7d7363*/
    dword_B78560 = result; /*0x7d7369*/
    Locale = result; /*0x7d736e*/
    return result; /*0x7d7373*/
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

  v3 = (unsigned int)aP2; /*0x7d75e0*/
  if ( !aP2 ) /*0x7d75ea*/
    return a0; /*0x7d7633*/
  (v4) = ((v4) & ~0xFF) | ((unsigned int)(Val) & 0xFF); /*0x7d75ee*/
  v5 = (unsigned char *)(a0); /*0x7d75f3*/
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
int _wctomb_lk(LPSTR lpMultiByteStr, WCHAR WideCharStr)
{
    int result; // eax

    result = (int)lpMultiByteStr; /*0x7d77d9*/
    if ( lpMultiByteStr ) /*0x7d77de*/
    {
      if ( !dword_B782A0 ) /*0x7d77e9*/
      {
        if ( WideCharStr <= 0xFFu ) /*0x7d77f4*/
        {
          *lpMultiByteStr = WideCharStr; /*0x7d77f8*/
          return 1; /*0x7d77fc*/
        }
        goto LABEL_7; /*0x7d77f4*/
      }
      lpMultiByteStr = 0; /*0x7d7800*/
      result = WideCharToMultiByte( /*0x7d781f*/
                 CodePage,
                 0x220u,
                 &WideCharStr,
                 1,
                 (LPSTR)result,
                 SrcSizeInBytes,
                 0,
                 (LPBOOL)&lpMultiByteStr);
      if ( !result || lpMultiByteStr ) /*0x7d782d*/
      {
  LABEL_7:
        *_errno() = 42; /*0x7d782f*/
        return -1; /*0x7d783a*/
      }
    }
    return result; /*0x7d77e0*/
}
}
// 0x7D7AAF
namespace gamemd {
void _ld12cvt(unsigned short * a1, unsigned int * a2, int * a3)
{
    unsigned __int16 v4; // bx
    unsigned int v5; // ecx
    int v6; // eax
    int v7; // ebx
    int v8; // esi
    int result; // eax
    int v10; // eax
    int v11; // esi
    int v12; // esi
    int v13; // edi
    unsigned int v14; // esi
    unsigned int v15; // edx
    int v16; // [esp-8h] [ebp-2Ch]
    int v17; // [esp-4h] [ebp-28h]
    int v18; // [esp-4h] [ebp-28h]
    unsigned int v19[3]; // [esp+Ch] [ebp-18h] BYREF
    int v20; // [esp+18h] [ebp-Ch] BYREF
    unsigned int v21; // [esp+1Ch] [ebp-8h]
    int v22; // [esp+20h] [ebp-4h]
    int v23; // [esp+2Ch] [ebp+8h]

    v4 = a1[5]; /*0x7d7abf*/
    v23 = v4 & 0x8000; /*0x7d7ac7*/
    v20 = *(unsigned int *)(a1 + 3); /*0x7d7acd*/
    v5 = *(unsigned int *)(a1 + 1); /*0x7d7ad0*/
    v6 = *a1; /*0x7d7ad3*/
    v7 = (v4 & 0x7FFF) - 0x3FFF; /*0x7d7adf*/
    v21 = v5; /*0x7d7ae5*/
    v22 = v6 << 16; /*0x7d7af1*/
    if ( v7 != -16383 ) /*0x7d7af4*/
    {
      _CopyMan((int)v19, &v20); /*0x7d7b24*/
      if ( _RoundMan((int)&v20, a3[2]) ) /*0x7d7b30*/
        ++v7; /*0x7d7b3c*/
      v10 = a3[1]; /*0x7d7b3d*/
      if ( v7 >= v10 - a3[2] ) /*0x7d7b47*/
      {
        if ( v7 > v10 ) /*0x7d7b57*/
        {
          if ( v7 >= *a3 ) /*0x7d7b9a*/
          {
            _FillZeroMan(&v20); /*0x7d7ba0*/
            v16 = a3[3]; /*0x7d7ba5*/
            (((unsigned int)(v20) >> 24) & 0xFF) |= 0x80u; /*0x7d7ba8*/
            _ShrMan(&v20, v16); /*0x7d7bb0*/
            v8 = *a3 + a3[5]; /*0x7d7bbb*/
            v17 = 1; /*0x7d7bbd*/
            goto LABEL_5; /*0x7d7bbf*/
          }
          v18 = a3[3]; /*0x7d7bc4*/
          v12 = a3[5]; /*0x7d7bc7*/
          (((unsigned int)(v20) >> 24) & 0xFF) &= ~0x80u; /*0x7d7bca*/
          v8 = v7 + v12; /*0x7d7bd2*/
          _ShrMan(&v20, v18); /*0x7d7bd4*/
          goto LABEL_16; /*0x7d7bd4*/
        }
        v11 = v10 - v7; /*0x7d7b5b*/
        _CopyMan((int)&v20, v19); /*0x7d7b65*/
        _ShrMan(&v20, v11); /*0x7d7b6f*/
        _RoundMan((int)&v20, a3[2]); /*0x7d7b7b*/
        _ShrMan(&v20, a3[3] + 1); /*0x7d7b89*/
      }
      else
      {
        _FillZeroMan(&v20); /*0x7d7b4d*/
      }
      v8 = 0; /*0x7d7b91*/
      goto LABEL_4; /*0x7d7b93*/
    }
    v8 = 0; /*0x7d7af9*/
    if ( !_IsZeroMan(&v20) ) /*0x7d7afc*/
    {
      _FillZeroMan(&v20); /*0x7d7b0e*/
  LABEL_4:
      v17 = 2; /*0x7d7b14*/
  LABEL_5:
      result = v17; /*0x7d7b16*/
      goto LABEL_17; /*0x7d7b17*/
    }
  LABEL_16:
    result = 0; /*0x7d7bdb*/
  LABEL_17:
    v13 = a3[4]; /*0x7d7bdd*/
    v14 = v20 | (v23 != 0 ? 0x80000000 : 0) | (v8 << (31 - *((unsigned char *)a3 + 12)));
    if ( v13 == 64 ) /*0x7d7bfd*/
    {
      v15 = v21; /*0x7d7c02*/
      a2[1] = v14; /*0x7d7c05*/
      *a2 = v15; /*0x7d7c08*/
    }
    else if ( v13 == 32 ) /*0x7d7c0f*/
    {
      *a2 = v14; /*0x7d7c14*/
    }
    return result; /*0x7d7c16*/
}
}
// 0x7D7EE0
namespace gamemd {
void unknown_libname_76(_TBYTE a1, _TBYTE a2)
{
    double v2; // st7
    double v3; // st6
    unsigned int v4; // eax

    v2 = *(double *)&a2; /*0x7d7ee0*/
    v3 = *(double *)&a1; /*0x7d7ee4*/
    while ( !__CFADD__(DWORD1(a1), DWORD1(a1)) ) /*0x7d7eee*/
    {
      if ( !*(unsigned __int64 *)&a1 || ((((unsigned int)(a1) >> 16) & 0xFFFF) & 0x7FFF) != 0 ) /*0x7d7f90*/
        return v2 / v3; /*0x7d7f90*/
      if ( ((((unsigned int)(a2) >> 16) & 0xFFFF) & 0x7FFF) != 0 ) /*0x7d7fb5*/
      {
        if ( ((((unsigned int)(a2) >> 16) & 0xFFFF) & 0x7FFF) == 0x7FFF || !__CFADD__(DWORD1(a2), DWORD1(a2)) ) /*0x7d7fc2*/
          return v2 / v3; /*0x7d7ff4*/
      }
      else if ( __CFADD__(DWORD1(a2), DWORD1(a2)) ) /*0x7d7fce*/
      {
        return v2 / v3; /*0x7d7fce*/
      }
      *(double *)&a1 = v3 * flt_87D408; /*0x7d7fdc*/
      v2 = *(double *)&a2; /*0x7d7fe4*/
    }
    v4 = (2 * DWORD1(a1)) ^ 0xE000000; /*0x7d7ef4*/
    if ( (v4 & 0xE000000) != 0 ) /*0x7d7efe*/
      return v2 / v3; /*0x7d7f02*/
    if ( !((unsigned char *)&byte_87D3F0)[v4 >> 28] ) /*0x7d7f06*/
      return v2 / v3; /*0x7d7f11*/
    if ( ((((unsigned int)(a1) >> 16) & 0xFFFF) & 0x7FFF) == 0 || ((((unsigned int)(a1) >> 16) & 0xFFFF) & 0x7FFF) == 0x7FFF ) /*0x7d7f22*/
      return v2 / v3; /*0x7d7f86*/
    if ( ((((unsigned int)(a2) >> 16) & 0xFFFF) & 0x7FFF) == 1 ) /*0x7d7f4a*/
      return v2 * flt_87D404 / (v3 * flt_87D404); /*0x7d7f77*/
    else
      return v2 * flt_87D400 / (v3 * flt_87D400); /*0x7d7f60*/
}
}
// 0x7D7FF7
namespace gamemd {
int unknown_libname_77()
{
    _TBYTE v1; // [esp-2Ch] [ebp-58h]
    _TBYTE v2; // [esp-20h] [ebp-4Ch]
    _TBYTE v17; // [esp+0h] [ebp-2Ch]
    _TBYTE v18; // [esp+Ch] [ebp-20h]

    switch ( a1 & 0x3F ) /*0x7d7ffd*/
    {
      case 0: /*0x7d7ffd*/
        __asm { fdiv st, st; jumptable 007D7FFD case 0 } /*0x7d8004*/
        return; /*0x7d8009*/
      case 1: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d800d*/
        goto LABEL_4; /*0x7d800d*/
      case 2: /*0x7d7ffd*/
  LABEL_4:
        __asm { fdivr st, st; jumptable 007D7FFD case 2 } /*0x7d800f*/
        return; /*0x7d8014*/
      case 3: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8018*/
        goto LABEL_6; /*0x7d8018*/
      case 4: /*0x7d7ffd*/
  LABEL_6:
        __asm { fdiv st, st; jumptable 007D7FFD case 4 } /*0x7d801a*/
        return; /*0x7d801f*/
      case 5: /*0x7d7ffd*/
        __asm { fdivp st, st; jumptable 007D7FFD case 5 } /*0x7d8020*/
        return; /*0x7d8025*/
      case 6: /*0x7d7ffd*/
        __asm { fdivr st, st; jumptable 007D7FFD case 6 } /*0x7d8026*/
        return; /*0x7d802b*/
      case 7: /*0x7d7ffd*/
        __asm { fdivrp st, st; jumptable 007D7FFD case 7 } /*0x7d802c*/
        return; /*0x7d8031*/
      case 8: /*0x7d7ffd*/
        __asm /*0x7d8032*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 8
          fld st
          fstp [esp+2Ch+var_2C]; _TBYTE
          fstp [esp+2Ch+var_C]
        }
        unknown_libname_76(v1, v2); /*0x7d803f*/
        __asm /*0x7d8044*/
        {
          fld [esp+2Ch+var_C]
          fxch st(1)
        }
        return; /*0x7d804d*/
      case 9: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8051*/
        goto LABEL_12; /*0x7d8051*/
      case 0xA: /*0x7d7ffd*/
  LABEL_12:
        __asm /*0x7d8053*/
        {
          fstp tbyte ptr [esp+0]; jumptable 007D7FFD case 10
          fstp [esp+arg_8]; _TBYTE
        }
        unknown_libname_76(v17, v18); /*0x7d805a*/
        __asm /*0x7d805f*/
        {
          fld [esp+arg_8]
          fxch st(1)
        }
        return; /*0x7d8068*/
      case 0xB: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d806c*/
        goto LABEL_14; /*0x7d806c*/
      case 0xC: /*0x7d7ffd*/
  LABEL_14:
        __asm /*0x7d806e*/
        {
          fxch st(1); jumptable 007D7FFD case 12
          fstp [esp+arg_8]; _TBYTE
          fld st
          fstp tbyte ptr [esp+0]; _TBYTE
          fstp [esp+arg_1C]
        }
        unknown_libname_76(v17, v18); /*0x7d807d*/
        __asm { fld [esp+arg_1C] } /*0x7d8082*/
        return; /*0x7d8089*/
      case 0xD: /*0x7d7ffd*/
        __asm /*0x7d808a*/
        {
          fstp [esp+2Ch+var_2C]; jumptable 007D7FFD case 13
          fstp [esp+2Ch+var_20]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d8091*/
        return; /*0x7d8099*/
      case 0xE: /*0x7d7ffd*/
        __asm /*0x7d809a*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 14
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d80a1*/
        __asm { fld [esp+2Ch+var_20] } /*0x7d80a6*/
        return; /*0x7d80ad*/
      case 0xF: /*0x7d7ffd*/
        __asm /*0x7d80ae*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 15
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d80b5*/
        return; /*0x7d80bd*/
      case 0x10: /*0x7d7ffd*/
        __asm /*0x7d80be*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 16
          fxch st(1)
          fld st
          fstp [esp+2Ch+var_2C]; _TBYTE
          fstp [esp+2Ch+var_C]
        }
        unknown_libname_76(v1, v2); /*0x7d80cd*/
        __asm /*0x7d80d2*/
        {
          fxch st(1)
          fld [esp+2Ch+var_C]
          fxch st(2)
        }
        return; /*0x7d80dd*/
      case 0x11: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d80e1*/
        goto LABEL_20; /*0x7d80e1*/
      case 0x12: /*0x7d7ffd*/
  LABEL_20:
        __asm /*0x7d80e3*/
        {
          fstp tbyte ptr [esp+0]; jumptable 007D7FFD case 18
          fxch st(1)
          fstp [esp+arg_8]; _TBYTE
        }
        unknown_libname_76(v17, v18); /*0x7d80ec*/
        __asm /*0x7d80f1*/
        {
          fxch st(1)
          fld [esp+arg_8]
          fxch st(2)
        }
        return; /*0x7d80fc*/
      case 0x13: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8100*/
        goto LABEL_22; /*0x7d8100*/
      case 0x14: /*0x7d7ffd*/
  LABEL_22:
        __asm /*0x7d8102*/
        {
          fxch st(2); jumptable 007D7FFD case 20
          fstp [esp+arg_8]; _TBYTE
          fxch st(1)
          fld st
          fstp tbyte ptr [esp+0]; _TBYTE
          fstp [esp+arg_1C]
        }
        unknown_libname_76(v17, v18); /*0x7d8113*/
        __asm /*0x7d8118*/
        {
          fxch st(1)
          fld [esp+arg_1C]
        }
        return; /*0x7d8121*/
      case 0x15: /*0x7d7ffd*/
        __asm /*0x7d8122*/
        {
          fstp [esp+2Ch+var_2C]; jumptable 007D7FFD case 21
          fxch st(1)
          fstp [esp+2Ch+var_20]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d812b*/
        __asm { fxch st(1) } /*0x7d8130*/
        return; /*0x7d8135*/
      case 0x16: /*0x7d7ffd*/
        __asm /*0x7d8136*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 22
          fxch st(1)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d813f*/
        __asm /*0x7d8144*/
        {
          fxch st(1)
          fld [esp+2Ch+var_20]
        }
        return; /*0x7d814d*/
      case 0x17: /*0x7d7ffd*/
        __asm /*0x7d814e*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 23
          fxch st(1)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d8157*/
        __asm { fxch st(1) } /*0x7d815c*/
        return; /*0x7d8161*/
      case 0x18: /*0x7d7ffd*/
        __asm /*0x7d8162*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 24
          fxch st(2)
          fld st
          fstp [esp+2Ch+var_2C]; _TBYTE
          fstp [esp+2Ch+var_C]
        }
        unknown_libname_76(v1, v2); /*0x7d8171*/
        __asm /*0x7d8176*/
        {
          fxch st(2)
          fld [esp+2Ch+var_C]
          fxch st(3)
        }
        return; /*0x7d8181*/
      case 0x19: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8185*/
        goto LABEL_28; /*0x7d8185*/
      case 0x1A: /*0x7d7ffd*/
  LABEL_28:
        __asm /*0x7d8187*/
        {
          fstp tbyte ptr [esp+0]; jumptable 007D7FFD case 26
          fxch st(2)
          fstp [esp+arg_8]; _TBYTE
        }
        unknown_libname_76(v17, v18); /*0x7d8190*/
        __asm /*0x7d8195*/
        {
          fxch st(2)
          fld [esp+arg_8]
          fxch st(3)
        }
        return; /*0x7d81a0*/
      case 0x1B: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d81a4*/
        goto LABEL_30; /*0x7d81a4*/
      case 0x1C: /*0x7d7ffd*/
  LABEL_30:
        __asm /*0x7d81a6*/
        {
          fxch st(3); jumptable 007D7FFD case 28
          fstp [esp+arg_8]; _TBYTE
          fxch st(2)
          fld st
          fstp tbyte ptr [esp+0]; _TBYTE
          fstp [esp+arg_1C]
        }
        unknown_libname_76(v17, v18); /*0x7d81b7*/
        __asm /*0x7d81bc*/
        {
          fxch st(2)
          fld [esp+arg_1C]
        }
        return; /*0x7d81c5*/
      case 0x1D: /*0x7d7ffd*/
        __asm /*0x7d81c6*/
        {
          fstp [esp+2Ch+var_2C]; jumptable 007D7FFD case 29
          fxch st(2)
          fstp [esp+2Ch+var_20]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d81cf*/
        __asm { fxch st(2) } /*0x7d81d4*/
        return; /*0x7d81d9*/
      case 0x1E: /*0x7d7ffd*/
        __asm /*0x7d81da*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 30
          fxch st(2)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d81e3*/
        __asm /*0x7d81e8*/
        {
          fxch st(2)
          fld [esp+2Ch+var_20]
        }
        return; /*0x7d81f1*/
      case 0x1F: /*0x7d7ffd*/
        __asm /*0x7d81f2*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 31
          fxch st(2)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d81fb*/
        __asm { fxch st(2) } /*0x7d8200*/
        return; /*0x7d8205*/
      case 0x20: /*0x7d7ffd*/
        __asm /*0x7d8206*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 32
          fxch st(3)
          fld st
          fstp [esp+2Ch+var_2C]; _TBYTE
          fstp [esp+2Ch+var_C]
        }
        unknown_libname_76(v1, v2); /*0x7d8215*/
        __asm /*0x7d821a*/
        {
          fxch st(3)
          fld [esp+2Ch+var_C]
          fxch st(4)
        }
        return; /*0x7d8225*/
      case 0x21: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8229*/
        goto LABEL_36; /*0x7d8229*/
      case 0x22: /*0x7d7ffd*/
  LABEL_36:
        __asm /*0x7d822b*/
        {
          fstp tbyte ptr [esp+0]; jumptable 007D7FFD case 34
          fxch st(3)
          fstp [esp+arg_8]; _TBYTE
        }
        unknown_libname_76(v17, v18); /*0x7d8234*/
        __asm /*0x7d8239*/
        {
          fxch st(3)
          fld [esp+arg_8]
          fxch st(4)
        }
        return; /*0x7d8244*/
      case 0x23: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8248*/
        goto LABEL_38; /*0x7d8248*/
      case 0x24: /*0x7d7ffd*/
  LABEL_38:
        __asm /*0x7d824a*/
        {
          fxch st(4); jumptable 007D7FFD case 36
          fstp [esp+arg_8]; _TBYTE
          fxch st(3)
          fld st
          fstp tbyte ptr [esp+0]; _TBYTE
          fstp [esp+arg_1C]
        }
        unknown_libname_76(v17, v18); /*0x7d825b*/
        __asm /*0x7d8260*/
        {
          fxch st(3)
          fld [esp+arg_1C]
        }
        return; /*0x7d8269*/
      case 0x25: /*0x7d7ffd*/
        __asm /*0x7d826a*/
        {
          fstp [esp+2Ch+var_2C]; jumptable 007D7FFD case 37
          fxch st(3)
          fstp [esp+2Ch+var_20]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d8273*/
        __asm { fxch st(3) } /*0x7d8278*/
        return; /*0x7d827d*/
      case 0x26: /*0x7d7ffd*/
        __asm /*0x7d827e*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 38
          fxch st(3)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d8287*/
        __asm /*0x7d828c*/
        {
          fxch st(3)
          fld [esp+2Ch+var_20]
        }
        return; /*0x7d8295*/
      case 0x27: /*0x7d7ffd*/
        __asm /*0x7d8296*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 39
          fxch st(3)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d829f*/
        __asm { fxch st(3) } /*0x7d82a4*/
        return; /*0x7d82a9*/
      case 0x28: /*0x7d7ffd*/
        __asm /*0x7d82aa*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 40
          fxch st(4)
          fld st
          fstp [esp+2Ch+var_2C]; _TBYTE
          fstp [esp+2Ch+var_C]
        }
        unknown_libname_76(v1, v2); /*0x7d82b9*/
        __asm /*0x7d82be*/
        {
          fxch st(4)
          fld [esp+2Ch+var_C]
          fxch st(5)
        }
        return; /*0x7d82c9*/
      case 0x29: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d82cd*/
        goto LABEL_44; /*0x7d82cd*/
      case 0x2A: /*0x7d7ffd*/
  LABEL_44:
        __asm /*0x7d82cf*/
        {
          fstp tbyte ptr [esp+0]; jumptable 007D7FFD case 42
          fxch st(4)
          fstp [esp+arg_8]; _TBYTE
        }
        unknown_libname_76(v17, v18); /*0x7d82d8*/
        __asm /*0x7d82dd*/
        {
          fxch st(4)
          fld [esp+arg_8]
          fxch st(5)
        }
        return; /*0x7d82e8*/
      case 0x2B: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d82ec*/
        goto LABEL_46; /*0x7d82ec*/
      case 0x2C: /*0x7d7ffd*/
  LABEL_46:
        __asm /*0x7d82ee*/
        {
          fxch st(5); jumptable 007D7FFD case 44
          fstp [esp+arg_8]; _TBYTE
          fxch st(4)
          fld st
          fstp tbyte ptr [esp+0]; _TBYTE
          fstp [esp+arg_1C]
        }
        unknown_libname_76(v17, v18); /*0x7d82ff*/
        __asm /*0x7d8304*/
        {
          fxch st(4)
          fld [esp+arg_1C]
        }
        return; /*0x7d830d*/
      case 0x2D: /*0x7d7ffd*/
        __asm /*0x7d830e*/
        {
          fstp [esp+2Ch+var_2C]; jumptable 007D7FFD case 45
          fxch st(4)
          fstp [esp+2Ch+var_20]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d8317*/
        __asm { fxch st(4) } /*0x7d831c*/
        return; /*0x7d8321*/
      case 0x2E: /*0x7d7ffd*/
        __asm /*0x7d8322*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 46
          fxch st(4)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d832b*/
        __asm /*0x7d8330*/
        {
          fxch st(4)
          fld [esp+2Ch+var_20]
        }
        return; /*0x7d8339*/
      case 0x2F: /*0x7d7ffd*/
        __asm /*0x7d833a*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 47
          fxch st(4)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d8343*/
        __asm { fxch st(4) } /*0x7d8348*/
        return; /*0x7d834d*/
      case 0x30: /*0x7d7ffd*/
        __asm /*0x7d834e*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 48
          fxch st(5)
          fld st
          fstp [esp+2Ch+var_2C]; _TBYTE
          fstp [esp+2Ch+var_C]
        }
        unknown_libname_76(v1, v2); /*0x7d835d*/
        __asm /*0x7d8362*/
        {
          fxch st(5)
          fld [esp+2Ch+var_C]
          fxch st(6)
        }
        return; /*0x7d836d*/
      case 0x31: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8371*/
        goto LABEL_52; /*0x7d8371*/
      case 0x32: /*0x7d7ffd*/
  LABEL_52:
        __asm /*0x7d8373*/
        {
          fstp tbyte ptr [esp+0]; jumptable 007D7FFD case 50
          fxch st(5)
          fstp [esp+arg_8]; _TBYTE
        }
        unknown_libname_76(v17, v18); /*0x7d837c*/
        __asm /*0x7d8381*/
        {
          fxch st(5)
          fld [esp+arg_8]
          fxch st(6)
        }
        return; /*0x7d838c*/
      case 0x33: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8390*/
        goto LABEL_54; /*0x7d8390*/
      case 0x34: /*0x7d7ffd*/
  LABEL_54:
        __asm /*0x7d8392*/
        {
          fxch st(6); jumptable 007D7FFD case 52
          fstp [esp+arg_8]; _TBYTE
          fxch st(5)
          fld st
          fstp tbyte ptr [esp+0]; _TBYTE
          fstp [esp+arg_1C]
        }
        unknown_libname_76(v17, v18); /*0x7d83a3*/
        __asm /*0x7d83a8*/
        {
          fxch st(5)
          fld [esp+arg_1C]
        }
        return; /*0x7d83b1*/
      case 0x35: /*0x7d7ffd*/
        __asm /*0x7d83b2*/
        {
          fstp [esp+2Ch+var_2C]; jumptable 007D7FFD case 53
          fxch st(5)
          fstp [esp+2Ch+var_20]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d83bb*/
        __asm { fxch st(5) } /*0x7d83c0*/
        return; /*0x7d83c5*/
      case 0x36: /*0x7d7ffd*/
        __asm /*0x7d83c6*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 54
          fxch st(5)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d83cf*/
        __asm /*0x7d83d4*/
        {
          fxch st(5)
          fld [esp+2Ch+var_20]
        }
        return; /*0x7d83dd*/
      case 0x37: /*0x7d7ffd*/
        __asm /*0x7d83de*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 55
          fxch st(5)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d83e7*/
        __asm { fxch st(5) } /*0x7d83ec*/
        return; /*0x7d83f1*/
      case 0x38: /*0x7d7ffd*/
        __asm /*0x7d83f2*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 56
          fxch st(6)
          fld st
          fstp [esp+2Ch+var_2C]; _TBYTE
          fstp [esp+2Ch+var_C]
        }
        unknown_libname_76(v1, v2); /*0x7d8401*/
        __asm /*0x7d8406*/
        {
          fxch st(6)
          fld [esp+2Ch+var_C]
          fxch st(7)
        }
        return; /*0x7d8411*/
      case 0x39: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8415*/
        goto LABEL_60; /*0x7d8415*/
      case 0x3A: /*0x7d7ffd*/
  LABEL_60:
        __asm /*0x7d8417*/
        {
          fstp tbyte ptr [esp+0]; jumptable 007D7FFD case 58
          fxch st(6)
          fstp [esp+arg_8]; _TBYTE
        }
        unknown_libname_76(v17, v18); /*0x7d8420*/
        __asm /*0x7d8425*/
        {
          fxch st(6)
          fld [esp+arg_8]
          fxch st(7)
        }
        return; /*0x7d8430*/
      case 0x3B: /*0x7d7ffd*/
        __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8434*/
        goto LABEL_62; /*0x7d8434*/
      case 0x3C: /*0x7d7ffd*/
  LABEL_62:
        __asm /*0x7d8436*/
        {
          fxch st(7); jumptable 007D7FFD case 60
          fstp [esp+arg_8]; _TBYTE
          fxch st(6)
          fld st
          fstp tbyte ptr [esp+0]; _TBYTE
          fstp [esp+arg_1C]
        }
        unknown_libname_76(v17, v18); /*0x7d8447*/
        __asm /*0x7d844c*/
        {
          fxch st(6)
          fld [esp+arg_1C]
        }
        break; /*0x7d8455*/
      case 0x3D: /*0x7d7ffd*/
        __asm /*0x7d8456*/
        {
          fstp [esp+2Ch+var_2C]; jumptable 007D7FFD case 61
          fxch st(6)
          fstp [esp+2Ch+var_20]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d845f*/
        __asm { fxch st(6) } /*0x7d8464*/
        break; /*0x7d8469*/
      case 0x3E: /*0x7d7ffd*/
        __asm /*0x7d846a*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 62
          fxch st(6)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d8473*/
        __asm /*0x7d8478*/
        {
          fxch st(6)
          fld [esp+2Ch+var_20]
        }
        break; /*0x7d8481*/
      case 0x3F: /*0x7d7ffd*/
        __asm /*0x7d8482*/
        {
          fstp [esp+2Ch+var_20]; jumptable 007D7FFD case 63
          fxch st(6)
          fstp [esp+2Ch+var_2C]; _TBYTE
        }
        unknown_libname_76(v1, v2); /*0x7d848b*/
        __asm { fxch st(6) } /*0x7d8490*/
        break; /*0x7d8490*/
    }
}
}
// 0x7D86E6
namespace gamemd {
void* unknown_libname_90(char a1, __int128 a2, int a3, int a4, __int128 a5)
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
    if ( ((unsigned char *)&byte_87D40C)[result] ) /*0x7d8703*/
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
                v6 = (((((unsigned int)(a5) >> 64) & 0xFF) - IDA_BYTE8(a2)) & 0x3F | 0x20) + 1; /*0x7d8811*/
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
  return (void*)result; /*0x7d88e9*/
}
}
// 0x7D88EC
namespace gamemd {
void* unknown_libname_91(double a1, double a2)
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
  return (void*)result; /*0x7d890d*/
}
}
// 0x7D899E
namespace gamemd {
void* unknown_libname_92(char a1, __int128 a2, int a3, int a4, __int128 a5)
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
    if ( ((unsigned char *)&byte_87D40C)[result] ) /*0x7d89bb*/
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
                v6 = (((((unsigned int)(a5) >> 64) & 0xFF) - IDA_BYTE8(a2)) & 0x3F | 0x20) + 1; /*0x7d8ac9*/
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
  return (void*)result; /*0x7d8ba1*/
}
}
// 0x7D8BA4
namespace gamemd {
void* unknown_libname_93(double a1, double a2)
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
  return (void*)result; /*0x7d8bc8*/
}
}
// 0x7D8C6B
namespace gamemd {
int _87except(int a1, int a2, unsigned short * a3)
{
    unsigned __int16 *v3; // ecx
    bool v4; // zf
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // eax
    DWORD v11; // ebx
    int result; // eax
    int v13; // [esp-4h] [ebp-68h]
    ULONG_PTR Arguments[10]; // [esp+Ch] [ebp-58h] BYREF
    double v15; // [esp+34h] [ebp-30h]
    unsigned int v16; // [esp+44h] [ebp-20h]

    v3 = (unsigned __int16 *)*a3; /*0x7d8c79*/
    v5 = *(unsigned int *)a2 - 1; /*0x7d8c7f*/
    v4 = *(unsigned int *)a2 == 1; /*0x7d8c7f*/
    a3 = (unsigned short *)(v3); /*0x7d8c80*/
    if ( v4 ) /*0x7d8c83*/
      goto LABEL_13; /*0x7d8c83*/
    v6 = v5 - 1; /*0x7d8c85*/
    if ( !v6 ) /*0x7d8c86*/
    {
      v13 = 4; /*0x7d8cac*/
      goto LABEL_14; /*0x7d8cae*/
    }
    v7 = v6 - 1; /*0x7d8c88*/
    if ( !v7 ) /*0x7d8c89*/
    {
      v13 = 17; /*0x7d8ca8*/
      goto LABEL_14; /*0x7d8caa*/
    }
    v8 = v7 - 1; /*0x7d8c8b*/
    if ( !v8 ) /*0x7d8c8c*/
    {
      v13 = 18; /*0x7d8ca4*/
      goto LABEL_14; /*0x7d8ca6*/
    }
    v9 = v8 - 1; /*0x7d8c8e*/
    if ( !v9 ) /*0x7d8c8f*/
    {
  LABEL_13:
      v13 = 8; /*0x7d8cb0*/
  LABEL_14:
      v11 = v13; /*0x7d8cb2*/
      if ( !_handle_exc(v13, a2 + 24, v3) ) /*0x7d8cb9*/
      {
        if ( a1 == 16 || a1 == 22 || a1 == 29 ) /*0x7d8cd5*/
        {
          v15 = *(double *)(a2 + 16); /*0x7d8ce6*/
          v16 = v16 & 0xFFFFFFE0 | 3; /*0x7d8cec*/
        }
        else
        {
          v16 &= ~1u; /*0x7d8cd7*/
        }
        _raise_exc((ULONG_PTR)Arguments, (int)&a3, v11, a1, a2 + 8, a2 + 24); /*0x7d8cfe*/
      }
      goto LABEL_21; /*0x7d8cfe*/
    }
    v10 = v9 - 2; /*0x7d8c92*/
    if ( !v10 ) /*0x7d8c93*/
    {
      *(unsigned int *)a2 = 1; /*0x7d8c9c*/
      goto LABEL_21; /*0x7d8ca2*/
    }
    if ( v10 == 1 ) /*0x7d8c96*/
    {
      v13 = 16; /*0x7d8c98*/
      goto LABEL_14; /*0x7d8c9a*/
    }
  LABEL_21:
    _ctrlfp((__int16)v3); /*0x7d8d06*/
    if ( *(unsigned int *)a2 == 8 ) /*0x7d8d18*/
      return _set_errno(*(unsigned int *)a2); /*0x7d8d18*/
    if ( dword_87D700 ) /*0x7d8d21*/
      return _set_errno(*(unsigned int *)a2); /*0x7d8d21*/
    result = ReturnNull5(); /*0x7d8d24*/
    if ( !result ) /*0x7d8d2c*/
      return _set_errno(*(unsigned int *)a2); /*0x7d8d30*/
    return result; /*0x7d8d36*/
}
}
// 0x7D8E22
namespace gamemd {
void __decomp(double a1, int * a2)
{
    int v2; // esi
    BOOL v3; // eax
    double v5; // [esp+10h] [ebp-8h]

    if ( a1 == 0.0 ) /*0x7d8e34*/
    {
      v2 = 0; /*0x7d8e38*/
      v5 = 0.0; /*0x7d8e3a*/
    }
    else if ( ((((unsigned int)(a1) >> 16) & 0xFFFF) & 0x7FF0) == 0 && ((((unsigned int)((unsigned __int64)(a1) >> 32)) & 0xFFFFF) != 0 || ((unsigned int)(a1))) ) /*0x7d8e58*/
    {
      v2 = -1021; /*0x7d8e63*/
      v3 = a1 < 0.0; /*0x7d8e6b*/
      while ( ((((unsigned int)(a1) >> 48) & 0xFF) & 0x10) == 0 ) /*0x7d8e78*/
      {
        ((unsigned int)((unsigned __int64)(a1) >> 32)) *= 2; /*0x7d8e7a*/
        if ( SBYTE3(a1) < 0 ) /*0x7d8e81*/
          ((unsigned int)((unsigned __int64)(a1) >> 32)) |= 1u; /*0x7d8e83*/
        ((unsigned int)(a1)) *= 2; /*0x7d8e87*/
        --v2; /*0x7d8e8a*/
      }
      (((unsigned int)(a1) >> 16) & 0xFFFF) &= ~0x10u; /*0x7d8e8d*/
      if ( v3 ) /*0x7d8e95*/
        (((unsigned int)(a1) >> 24) & 0xFF) |= 0x80u; /*0x7d8e97*/
      v5 = _set_exp(a1, 0); /*0x7d8ea9*/
    }
    else
    {
      v5 = _set_exp(a1, 0); /*0x7d8ec5*/
      v2 = ((*(unsigned int *)((char *)&a1 + 6) >> 4) & 0x7FF) - 1022; /*0x7d8ed2*/
    }
    *a2 = v2; /*0x7d8ede*/
    return v5; /*0x7d8ee1*/
}
}
// 0x7D8EE3
namespace gamemd {
int _frnd(double a1)
{
    double result; // st7

    _ST7 = a1; /*0x7d8ee8*/
    __asm { frndint } /*0x7d8eeb*/
    return result; /*0x7d8ef3*/
}
// 0x7D9038
namespace gamemd {
double _nextafter(double X, double Y)
{
    __int16 v2; // cx
    double result; // st7
    int v4; // edi
    int v5; // eax
    double v6; // [esp+28h] [ebp-1Ch]
    double v7; // [esp+28h] [ebp-1Ch]
    double v8; // [esp+28h] [ebp-1Ch]
    double v9; // [esp+34h] [ebp-10h]
    double v10; // [esp+34h] [ebp-10h]
    int v11; // [esp+3Ch] [ebp-8h] BYREF
    int v12; // [esp+40h] [ebp-4h]

    v12 = _ctrlfp(v2); /*0x7d9059*/
    if ( (IDA_HIWORD(X) & 0x7FF0) == 0x7FF0 || (IDA_HIWORD(Y) & 0x7FF0) == 0x7FF0 ) /*0x7d9074*/
    {
      if ( (IDA_HIWORD(X) & 0x7FF8) == 0x7FF0 && ((IDA_HIDWORD(X) & 0x7FFFF) != 0 || IDA_LODWORD(X)) /*0x7d90a3*/
        || (IDA_HIWORD(Y) & 0x7FF8) == 0x7FF0 && ((IDA_HIDWORD(Y) & 0x7FFFF) != 0 || IDA_LODWORD(Y)) )
      {
        _except2( /*0x7d90c7*/
          8u,
          38,
          IDA_SLODWORD(X),
          IDA_SHIDWORD(X),
          Y,
          COERCE_UNSIGNED_INT64(X + Y),
          IDA_HIDWORD(COERCE_UNSIGNED_INT64(X + Y)),
          v12);
        return X; /*0x7d90c7*/
      }
      if ( (IDA_HIWORD(X) & 0x7FF8) == 0x7FF8 || (IDA_HIWORD(Y) & 0x7FF8) == 0x7FF8 ) /*0x7d90d8*/
      {
        _handle_qnan2(32752, 38, X, Y, v12); /*0x7d92c0*/
        return X; /*0x7d92b6*/
      }
    }
    if ( Y == X ) /*0x7d90ec*/
    {
      _ctrlfp(32752); /*0x7d90f2*/
      return X; /*0x7d90fc*/
    }
    if ( X == 0.0 ) /*0x7d910d*/
    {
      (v6) = (unsigned int)(1); /*0x7d9115*/
      if ( Y <= X ) /*0x7d911f*/
        (v6) = ((v6) & 0xFFFFFFFFULL) | ((unsigned __int64)(unsigned int)(0x80000000) << 32); /*0x7d9127*/
      else
        (v6) = ((v6) & 0xFFFFFFFFULL) | ((unsigned __int64)(unsigned int)(0) << 32); /*0x7d9121*/
    }
    if ( (X <= 0.0 || Y >= X) && (X >= 0.0 || Y <= X) ) /*0x7d915e*/
    {
      if ( (X <= 0.0 || Y <= X) && (X >= 0.0 || Y >= X) ) /*0x7d91a3*/
      {
        v4 = ((unsigned int)(v6)); /*0x7d91bb*/
        goto LABEL_32; /*0x7d91bb*/
      }
      v4 = IDA_LODWORD(X) + 1; /*0x7d91a8*/
      (v6) = (unsigned int)(IDA_LODWORD(X) + 1); /*0x7d91ad*/
      (v6) = ((v6) & 0xFFFFFFFFULL) | ((unsigned __int64)(unsigned int)(IDA_HIDWORD(X)) << 32); /*0x7d91b0*/
      if ( IDA_LODWORD(X) == -1 ) /*0x7d91b3*/
      {
        v5 = IDA_HIDWORD(X) + 1; /*0x7d91b5*/
        goto LABEL_30; /*0x7d91b5*/
      }
    }
    else
    {
      v4 = IDA_LODWORD(X) - 1; /*0x7d9163*/
      (v6) = (unsigned int)(IDA_LODWORD(X) - 1); /*0x7d9168*/
      (v6) = ((v6) & 0xFFFFFFFFULL) | ((unsigned __int64)(unsigned int)(IDA_HIDWORD(X)) << 32); /*0x7d916b*/
      if ( !IDA_LODWORD(X) ) /*0x7d916e*/
      {
        v5 = IDA_HIDWORD(X) - 1; /*0x7d9170*/
  LABEL_30:
        (v6) = ((v6) & 0xFFFFFFFFULL) | ((unsigned __int64)(unsigned int)(v5) << 32); /*0x7d91b6*/
      }
    }
  LABEL_32:
    if ( (IDA_HIWORD(v6) & 0x7FF0) == 0 && ((IDA_HIDWORD(v6) & 0xFFFFF) != 0 || v4) ) /*0x7d91cf*/
    {
      v9 = _decomp(v6, &v11); /*0x7d91e8*/
      v7 = _set_exp(v9, (unsigned __int16)v11 + 1536); /*0x7d91fe*/
      _except2(0x12u, 38, IDA_SLODWORD(X), IDA_SHIDWORD(X), Y, IDA_SLODWORD(v7), IDA_SHIDWORD(v7), v12); /*0x7d9223*/
      return X; /*0x7d9217*/
    }
    else if ( (IDA_HIDWORD(v6) != 2146435072 || v4) && (IDA_HIDWORD(v6) != -1048576 || v4) ) /*0x7d923d*/
    {
      _ctrlfp(32752); /*0x7d929f*/
      return v6; /*0x7d92a4*/
    }
    else
    {
      v10 = _decomp(v6, &v11); /*0x7d9256*/
      v8 = _set_exp(v10, (unsigned __int16)v11 - 1536); /*0x7d926c*/
      result = X; /*0x7d9285*/
      _except2(0x11u, 38, IDA_SLODWORD(X), IDA_SHIDWORD(X), Y, IDA_SLODWORD(v8), IDA_SHIDWORD(v8), v12); /*0x7d9291*/
    }
    return result; /*0x7d92c8*/
}
}
}
// 0x7D93A1
namespace gamemd {
int _alloc_osfhnd()
{
    int v1; // edi
    int v2; // ebx
    int *v3; // ebp
    unsigned int v4; // esi
    unsigned int i; // eax
    char *v6; // eax
    unsigned int v7; // edx
    int v9; // [esp+10h] [ebp-8h]
    int v10; // [esp+14h] [ebp-4h]

    v1 = -1; /*0x7d93a9*/
    _lock(18); /*0x7d93ac*/
    v2 = 0; /*0x7d93b1*/
    v9 = 0; /*0x7d93b4*/
    v10 = 0; /*0x7d93b8*/
    v3 = (int *)(dword_B78A80); /*0x7d93bc*/
    while ( 1 ) /*0x7d93c1*/
    {
      v4 = *v3; /*0x7d93c1*/
      if ( !*v3 ) /*0x7d93c1*/
        break; /*0x7d93c1*/
      for ( i = v4 + 1152; v4 < i; i = *v3 + 1152 ) /*0x7d93cc*/
      {
        if ( (*(unsigned char *)(v4 + 4) & 1) == 0 ) /*0x7d93da*/
        {
          if ( !*(unsigned int *)(v4 + 8) ) /*0x7d93dc*/
          {
            _lock(17); /*0x7d93e4*/
            if ( !*(unsigned int *)(v4 + 8) ) /*0x7d93e9*/
            {
              InitializeCriticalSection((LPCRITICAL_SECTION)(v4 + 12)); /*0x7d93f4*/
              ++*(unsigned int *)(v4 + 8); /*0x7d93fa*/
            }
            _unlock(17); /*0x7d93ff*/
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 12)); /*0x7d9409*/
          if ( (*(unsigned char *)(v4 + 4) & 1) == 0 ) /*0x7d9413*/
          {
            *(unsigned int *)v4 = -1; /*0x7d942d*/
            v1 = v10 + (int)(v4 - *v3) / 36; /*0x7d943d*/
            if ( v1 != -1 ) /*0x7d9444*/
              goto LABEL_22; /*0x7d9444*/
            v2 = v9; /*0x7d9446*/
            break; /*0x7d9446*/
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 12)); /*0x7d9416*/
          v2 = v9; /*0x7d941c*/
        }
        v4 += 36; /*0x7d9423*/
      }
      v10 += 32; /*0x7d944a*/
      ++v3; /*0x7d944f*/
      v9 = ++v2; /*0x7d9459*/
      if ( (int)v3 >= (int)&uNumber ) /*0x7d945d*/
        goto LABEL_22; /*0x7d945d*/
    }
    v6 = (char *)malloc(0x480u); /*0x7d946b*/
    if ( v6 ) /*0x7d9473*/
    {
      uNumber += 32; /*0x7d9475*/
      v7 = (unsigned int)(v6 + 1152); /*0x7d9483*/
      dword_B78A80[v2] = (int)v6; /*0x7d9489*/
      while ( (unsigned int)v6 < v7 ) /*0x7d948d*/
      {
        v6[4] = 0; /*0x7d948f*/
        *(unsigned int *)v6 = -1; /*0x7d9493*/
        *((unsigned int *)v6 + 2) = 0; /*0x7d9496*/
        v6[5] = 10; /*0x7d949a*/
        v6 += 36; /*0x7d94a0*/
        v7 = dword_B78A80[v2] + 1152; /*0x7d94a3*/
      }
      v1 = 32 * v2; /*0x7d94aa*/
      _lock_fhandle(32 * v2); /*0x7d94ad*/
    }
  LABEL_22:
    _unlock(18); /*0x7d94b3*/
    return v1; /*0x7d94bd*/
}
}
// 0x7D9729
namespace gamemd {
void __crtGetStringTypeA(DWORD dwInfoType, CCINIClass * aP1, int cchSrc, LPWORD lpCharType, UINT CodePage, LCID Locale, int a7)
{
    int v7; // eax
    LCID v8; // eax
    int v10; // eax
    size_t v11; // edi
    int v12; // eax
    void *v13; // esp
    int v14; // eax
    WCHAR v15[8]; // [esp+0h] [ebp-34h] BYREF
    WCHAR *v16; // [esp+10h] [ebp-24h]
    int cchWideChar; // [esp+14h] [ebp-20h]
    WORD CharType; // [esp+18h] [ebp-1Ch] BYREF
    CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

    v7 = dword_B78568; /*0x7d974f*/
    if ( !dword_B78568 ) /*0x7d9758*/
    {
      if ( GetStringTypeW(1u, &String1, 1, &CharType) ) /*0x7d9768*/
      {
        v7 = 1; /*0x7d9772*/
      }
      else
      {
        if ( !GetStringTypeA(0, 1u, byte_7F98E4, 1, &CharType) ) /*0x7d978a*/
          return 0; /*0x7d985e*/
        v7 = 2; /*0x7d9792*/
      }
      dword_B78568 = v7; /*0x7d9793*/
    }
    if ( v7 != 2 )
    {
      if ( v7 == 1 )
      {
        if ( !CodePage ) /*0x7d97cd*/
          CodePage = ::CodePage; /*0x7d97d4*/
        v10 = MultiByteToWideChar(CodePage, a7 != 0 ? 9 : 1, lpSrcStr, cchSrc, 0, 0);
        cchWideChar = v10; /*0x7d97f4*/
        if ( v10 ) /*0x7d97f9*/
        {
          v11 = 2 * v10; /*0x7d97fe*/
          v12 = 2 * v10 + 3; /*0x7d9803*/
          (v12) = ((v12) & ~0xFF) | ((unsigned int)(v12 & 0xFC) & 0xFF); /*0x7d9806*/
          v13 = alloca(v12); /*0x7d9808*/
          ms_exc.old_esp = (DWORD)v15; /*0x7d980d*/
          v16 = v15; /*0x7d9812*/
          memset( (void *)(v15), 0, v11); /*0x7d9818*/
          ms_exc.registration.TryLevel = -1; /*0x7d982d*/
          if ( v15 ) /*0x7d9833*/
          {
            v14 = MultiByteToWideChar( CodePage, 1u, lpSrcStr, cchSrc, (LPWSTR)(v15), cchWideChar); /*0x7d9844*/
            if ( v14 ) /*0x7d984c*/
              return GetStringTypeW(dwInfoType, v15, v14, lpCharType); /*0x7d985c*/
          }
        }
      }
      return 0; /*0x7d984c*/
    }
    v8 = Locale; /*0x7d979d*/
    if ( !Locale ) /*0x7d97a2*/
      v8 = dword_B782A0; /*0x7d97a4*/
    return GetStringTypeA(v8, dwInfoType, lpSrcStr, cchSrc, lpCharType); /*0x7d9863*/
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
          v25 = (char *)(0); /*0x7d9cd8*/
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
            v25 = (char *)(0); /*0x7d9cce*/
          }
          if ( v39 ) /*0x7d9c81*/
          {
            v25 = (char *)(0); /*0x7d9c83*/
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
            v25 = (char *)(0); /*0x7d9cef*/
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
    unsigned __int8 v3; // al
    unsigned int result; // eax
    bool v5; // zf

    if ( !lpMultiByteStr || !a3 ) /*0x7d9ded*/
      return 0; /*0x7d9ded*/
    v3 = *lpMultiByteStr; /*0x7d9def*/
    if ( !*lpMultiByteStr ) /*0x7d9def*/
    {
      if ( lpWideCharStr ) /*0x7d9dfa*/
        *lpWideCharStr = 0; /*0x7d9dfc*/
      return 0; /*0x7d9dff*/
    }
    if ( !dword_B782A0 ) /*0x7d9e0b*/
    {
      if ( lpWideCharStr ) /*0x7d9e12*/
        *lpWideCharStr = v3; /*0x7d9e18*/
      return 1; /*0x7d9e18*/
    }
    if ( *((char *)off_87C590 + 2 * v3 + 1) >= 0 ) /*0x7d9e2e*/
    {
      if ( MultiByteToWideChar( CodePage, 9u, (LPCCH)lpMultiByteStr, 1, (LPWSTR)(lpWideCharStr), lpWideCharStr != 0) ) /*0x7d9e95*/
        return 1; /*0x7d9e1e*/
      goto LABEL_18; /*0x7d9e9d*/
    }
    result = SrcSizeInBytes; /*0x7d9e30*/
    if ( (int)SrcSizeInBytes > 1 ) /*0x7d9e38*/
    {
      if ( (int)a3 >= (int)SrcSizeInBytes ) /*0x7d9e3d*/
      {
        v5 = MultiByteToWideChar( CodePage, 9u, (LPCCH)lpMultiByteStr, SrcSizeInBytes, (LPWSTR)(lpWideCharStr), lpWideCharStr != 0) == 0; /*0x7d9e5b*/
        result = SrcSizeInBytes; /*0x7d9e5d*/
        if ( !v5 ) /*0x7d9e62*/
          return result; /*0x7d9e62*/
        goto LABEL_16; /*0x7d9e62*/
      }
  LABEL_18:
      *_errno() = 42; /*0x7d9e6e*/
      return -1; /*0x7d9e7c*/
    }
  LABEL_16:
    if ( a3 < result || !lpMultiByteStr[1] ) /*0x7d9e69*/
      goto LABEL_18; /*0x7d9e6c*/
    return result; /*0x7d9e01*/
}
}
// 0x7D9FAC
namespace gamemd {
void * sub_7D9FAC()
{
    LONG (__stdcall *result)(struct _EXCEPTION_POINTERS *); // eax

    result = SetUnhandledExceptionFilter(___CxxUnhandledExceptionFilter_YGJPAU_EXCEPTION_POINTERS___Z); /*0x7d9fb1*/
    lpfn = result; /*0x7d9fb7*/
    return result; /*0x7d9fbc*/
}
}
// 0x7D9FCA
namespace gamemd {
int _flswbuf(unsigned short Buf, FILE * a2)
{
    FILE *v2; // esi
    int flag; // eax
    int file; // ecx
    int v5; // eax
    char *base; // eax
    signed int v7; // edi
    unsigned char *v8; // eax
    unsigned __int16 v9; // bx
    int v11; // [esp+8h] [ebp-4h]

    v2 = a2; /*0x7d9fd0*/
    flag = a2->_flag; /*0x7d9fd3*/
    file = a2->_file; /*0x7d9fd6*/
    v11 = file; /*0x7d9fdb*/
    if ( (flag & 0x82) == 0 || (flag & 0x40) != 0 ) /*0x7d9fe6*/
      goto LABEL_25; /*0x7d9fe6*/
    if ( (flag & 1) != 0 ) /*0x7d9ff0*/
    {
      a2->_cnt = 0; /*0x7d9ff4*/
      if ( (flag & 0x10) != 0 ) /*0x7d9ff7*/
      {
        (flag) = ((flag) & ~0xFF) | ((unsigned int)(flag & 0xFE) & 0xFF); /*0x7da000*/
        (((_iobuf_msvc6 *)v2)->_ptr) = (((_iobuf_msvc6 *)v2)->_base); /*0x7da002*/
        (((_iobuf_msvc6 *)v2)->_flag) = flag; /*0x7da004*/
        goto LABEL_6; /*0x7da004*/
      }
  LABEL_25:
      (flag) = ((flag) & ~0xFF) | ((unsigned int)(flag | 0x20) & 0xFF); /*0x7da0e3*/
      (((_iobuf_msvc6 *)v2)->_flag) = flag; /*0x7da0e5*/
      return 0xFFFF; /*0x7da0e5*/
    }
  LABEL_6:
    v5 = (((_iobuf_msvc6 *)v2)->_flag); /*0x7da007*/
    (((_iobuf_msvc6 *)v2)->_cnt) = 0; /*0x7da00a*/
    a2 = (FILE *)(0); /*0x7da00f*/
    (v5) = ((v5) & ~0xFF) | ((unsigned int)(v5 & 0xED | 2) & 0xFF); /*0x7da012*/
    (((_iobuf_msvc6 *)v2)->_flag) = v5; /*0x7da018*/
    if ( (v5 & 0x10C) == 0 ) /*0x7da01b*/
    {
      if ( v2 != &File && v2 != (FILE *)&unk_87BF90 || !_isatty(file) ) /*0x7da02e*/
        _getbuf(v2); /*0x7da039*/
      file = v11; /*0x7da03f*/
    }
    if ( ((((_iobuf_msvc6 *)v2)->_flag) & 0x108) != 0 ) /*0x7da049*/
    {
      base = (((_iobuf_msvc6 *)v2)->_base); /*0x7da04b*/
      v7 = (((_iobuf_msvc6 *)v2)->_ptr) - base; /*0x7da050*/
      (((_iobuf_msvc6 *)v2)->_ptr) = base + 2; /*0x7da055*/
      (((_iobuf_msvc6 *)v2)->_cnt) = (((_iobuf_msvc6 *)v2)->_bufsiz) - 2; /*0x7da05e*/
      if ( v7 <= 0 ) /*0x7da061*/
      {
        if ( file == -1 ) /*0x7da076*/
          v8 = &unk_87C928; /*0x7da091*/
        else
          v8 = (unsigned char *)(dword_B78A80[file >> 5] + 36 * (file & 0x1F)); /*0x7da08c*/
        if ( (v8[4] & 0x20) != 0 ) /*0x7da09a*/
          _lseek(file, 0, 2); /*0x7da0a0*/
      }
      else
      {
        a2 = (FILE *)_write( file, (const void *)(base), v7); /*0x7da06e*/
      }
      v9 = Buf; /*0x7da0ab*/
      *(unsigned short *)v2->_base = Buf; /*0x7da0ae*/
    }
    else
    {
      v9 = Buf; /*0x7da0b3*/
      v7 = 2; /*0x7da0b8*/
      a2 = (FILE *)_write( file, (const void *)(&Buf), 2u); /*0x7da0cb*/
    }
    if ( a2 == (FILE *)v7 ) /*0x7da0d2*/
      return v9; /*0x7da0e1*/
    (((_iobuf_msvc6 *)v2)->_flag) |= 0x20u; /*0x7da0d4*/
    return 0xFFFF; /*0x7da0ed*/
}
}
// 0x7DA0F1
namespace gamemd {
int __crtGetStringTypeW(DWORD dwInfoType, CCINIClass * aP1, int cchSrc, CCINIClass * aP3, UINT CodePage, LCID Locale)
{
    int v6; // eax
    int v8; // eax
    size_t v9; // esi
    int v10; // eax
    void *v11; // esp
    int v12; // eax
    void *v13; // esp
    LCID v14; // eax
    WORD *v15; // esi
    WORD v16[6]; // [esp+0h] [ebp-38h] BYREF
    LPSTR lpMultiByteStr; // [esp+Ch] [ebp-2Ch]
    int v18; // [esp+10h] [ebp-28h]
    WORD *v19; // [esp+14h] [ebp-24h]
    BOOL StringTypeA; // [esp+18h] [ebp-20h]
    WORD CharType; // [esp+1Ch] [ebp-1Ch] BYREF
    CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

    v6 = dword_B78570; /*0x7da117*/
    if ( !dword_B78570 ) /*0x7da120*/
    {
      if ( GetStringTypeW(1u, &String1, 1, &CharType) ) /*0x7da130*/
      {
        v6 = 1; /*0x7da13a*/
      }
      else
      {
        if ( !GetStringTypeA(0, 1u, byte_7F98E4, 1, &CharType) ) /*0x7da152*/
          return 0; /*0x7da152*/
        v6 = 2; /*0x7da15a*/
      }
      dword_B78570 = v6; /*0x7da15b*/
    }
    if ( v6 == 1 ) /*0x7da163*/
      return GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType); /*0x7da177*/
    if ( v6 == 2 ) /*0x7da17f*/
    {
      if ( !CodePage ) /*0x7da188*/
        CodePage = ::CodePage; /*0x7da18f*/
      v8 = WideCharToMultiByte(CodePage, 0x220u, lpSrcStr, cchSrc, 0, 0, 0, 0); /*0x7da1a4*/
      v9 = v8; /*0x7da1aa*/
      v18 = v8; /*0x7da1ac*/
      if ( v8 ) /*0x7da1b1*/
      {
        v10 = v8 + 3; /*0x7da1ba*/
        (v10) = ((v10) & ~0xFF) | ((unsigned int)(v10 & 0xFC) & 0xFF); /*0x7da1bd*/
        v11 = alloca(v10); /*0x7da1bf*/
        ms_exc.old_esp = (DWORD)v16; /*0x7da1c4*/
        lpMultiByteStr = (LPSTR)v16; /*0x7da1c9*/
        memset( (void *)(v16), 0, v9); /*0x7da1cf*/
        ms_exc.registration.TryLevel = -1; /*0x7da1d7*/
        if ( lpMultiByteStr ) /*0x7da1f3*/
        {
          if ( WideCharToMultiByte( CodePage, 0x220u, lpSrcStr, cchSrc, (LPSTR)(lpMultiByteStr), v9, 0, 0) ) /*0x7da20d*/
          {
            v12 = 2 * v9 + 5; /*0x7da226*/
            (v12) = ((v12) & ~0xFF) | ((unsigned int)(v12 & 0xFC) & 0xFF); /*0x7da229*/
            v13 = alloca(v12); /*0x7da22b*/
            ms_exc.old_esp = (DWORD)v16; /*0x7da230*/
            v19 = v16; /*0x7da235*/
            ms_exc.registration.TryLevel = -1; /*0x7da245*/
            if ( v16 ) /*0x7da24b*/
            {
              v14 = Locale; /*0x7da24d*/
              if ( !Locale ) /*0x7da252*/
                v14 = dword_B782A0; /*0x7da254*/
              v15 = &v16[cchSrc]; /*0x7da25f*/
              *v15 = -1; /*0x7da262*/
              *(v15 - 1) = -1; /*0x7da267*/
              StringTypeA = GetStringTypeA(v14, dwInfoType, lpMultiByteStr, v18, v16); /*0x7da27e*/
              if ( *(v15 - 1) != 0xFFFF && *v15 == 0xFFFF ) /*0x7da28e*/
              {
                memcpy( lpCharType, (const void *)(v16), 2 * cchSrc); /*0x7da295*/
                return StringTypeA; /*0x7da2a0*/
              }
            }
          }
        }
      }
    }
    return 0; /*0x7da2a7*/
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
    v8 = WideCharToMultiByte( (UINT)(aP6), 0x220u, (LPCWCH)(aP2), cchSrc, 0, 0, 0, 0); /*0x7da390*/
    cbMultiByte = v8; /*0x7da396*/
    if ( v8 ) /*0x7da39b*/
    {
      v9 = v8 + 3; /*0x7da3a4*/
      (v9) = ((v9) & ~0xFF) | ((unsigned int)(v9 & 0xFC) & 0xFF); /*0x7da3a7*/
      v10 = alloca(v9); /*0x7da3a9*/
      ms_exc.old_esp = (DWORD)v17; /*0x7da3ae*/
      lpMultiByteStr = (unsigned int)v17; /*0x7da3b3*/
      ms_exc.registration.TryLevel = -1; /*0x7da3c4*/
      if ( v17 ) /*0x7da3cb*/
      {
        if ( WideCharToMultiByte( (UINT)(aP6), 0x220u, (LPCWCH)(aP2), cchSrc, (LPSTR)(lpMultiByteStr), cbMultiByte, 0, 0) ) /*0x7da3e7*/
        {
          v11 = LCMapStringA(aP0, aP1, lpMultiByteStr, cbMultiByte, 0, 0); /*0x7da403*/
          v12 = v11; /*0x7da409*/
          v18 = v11; /*0x7da40b*/
          if ( v11 ) /*0x7da410*/
          {
            v13 = v11 + 3; /*0x7da41d*/
            (v13) = ((v13) & ~0xFF) | ((unsigned int)(v13 & 0xFC) & 0xFF); /*0x7da420*/
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
                  v15 = (unsigned int)aP5; /*0x7da469*/
                  if ( aP5 ) /*0x7da46e*/
                  {
                    if ( aP5 >= v12 ) /*0x7da472*/
                      v15 = v12; /*0x7da474*/
                    strncpy( (char *)aP4, (const char *)(v17), v15); /*0x7da47b*/
                  }
                  return (ControlClass * *)v12; /*0x7da483*/
                }
                if ( aP5 ) /*0x7da488*/
                  v16 = MultiByteToWideChar( (UINT)(aP6), 1u, (LPCCH)(v17), v12, (LPWSTR)(aP4), (int)(aP5)); /*0x7da49b*/
                else
                  v16 = MultiByteToWideChar( (UINT)(aP6), 1u, (LPCCH)(v17), v12, 0, 0); /*0x7da48c*/
                v12 = v16; /*0x7da4a1*/
                if ( v16 ) /*0x7da4a5*/
                  return (ControlClass * *)v12; /*0x7da4a9*/
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
int _getwc_lk(FILE * File)
{
    FILE *v1; // esi
    char *v2; // eax
    bool v3; // sf
    size_t v4; // edi
    int v5; // eax
    __int16 result; // ax
    int v7; // eax
    char SrcCh[4]; // [esp+8h] [ebp-4h] BYREF

    v1 = File; /*0x7da517*/
    if ( ((((_iobuf_msvc6 *)File)->_flag) & 0x40) != 0
      || ((((_iobuf_msvc6 *)File)->_file) == -1
        ? (v2 = (char *)&unk_87C928)
        : (v2 = (char *)(dword_B78A80[(((_iobuf_msvc6 *)File)->_file) >> 5] + 36 * ((((_iobuf_msvc6 *)File)->_file) & 0x1F))),
          v2[4] >= 0) )
    {
      v3 = (((_iobuf_msvc6 *)File)->_cnt) - 2 < 0; /*0x7da5e6*/
      (((_iobuf_msvc6 *)File)->_cnt) -= 2; /*0x7da5e6*/
      if ( v3 ) /*0x7da5ea*/
      {
        return _filwbuf(v1); /*0x7da5f9*/
      }
      else
      {
        result = *(unsigned short *)v1->_ptr; /*0x7da5ee*/
        v1->_ptr += 2; /*0x7da5f4*/
      }
    }
    else
    {
      v3 = --(((_iobuf_msvc6 *)File)->_cnt) < 0; /*0x7da553*/
      v4 = 1; /*0x7da558*/
      if ( v3 ) /*0x7da559*/
        v5 = _filbuf( (FILE *)(v1)); /*0x7da566*/
      else
        v5 = *(unsigned __int8 *)v1->_ptr++; /*0x7da55d*/
      if ( v5 == -1 ) /*0x7da56f*/
        return -1; /*0x7da56f*/
      SrcCh[0] = v5; /*0x7da580*/
      if ( *((char *)off_87C590 + 2 * (unsigned __int8)v5 + 1) < 0 ) /*0x7da58b*/
      {
        v3 = --v1->_cnt < 0; /*0x7da58d*/
        if ( v3 ) /*0x7da590*/
          v7 = _filbuf( (FILE *)(v1)); /*0x7da59d*/
        else
          v7 = *(unsigned __int8 *)v1->_ptr++; /*0x7da594*/
        if ( v7 == -1 ) /*0x7da5a6*/
        {
          ungetc(SrcCh[0], v1); /*0x7da5ae*/
          return -1; /*0x7da575*/
        }
        SrcCh[1] = v7; /*0x7da5b9*/
        v4 = 2; /*0x7da5bc*/
      }
      if ( mbtowc((wchar_t *)&File + 1, SrcCh, v4) == -1 ) /*0x7da5d1*/
      {
        *_errno() = 42; /*0x7da5d8*/
        return -1; /*0x7da5de*/
      }
      return IDA_HIWORD(File); /*0x7da5e0*/
    }
    return result; /*0x7da5ff*/
}
}
// 0x7DA638
namespace gamemd {
int _ungetwc_lk(wchar_t MbCh, unsigned int * a2)
{
    wchar_t v2; // bx
    unsigned int *v3; // esi
    int v4; // eax
    int v5; // eax
    char *v6; // ecx
    int v7; // eax
    int v9; // eax

    v2 = MbCh; /*0x7da63c*/
    if ( MbCh == 0xFFFF ) /*0x7da645*/
      return -1; /*0x7da645*/
    v3 = a2; /*0x7da647*/
    v4 = a2[3]; /*0x7da64a*/
    if ( (v4 & 1) == 0 && ((v4 & 0x80u) == 0 || (v4 & 2) != 0) ) /*0x7da657*/
      return -1; /*0x7da657*/
    if ( !a2[2] ) /*0x7da659*/
      _getbuf(a2); /*0x7da660*/
    v5 = v3[3]; /*0x7da666*/
    if ( (v5 & 0x40) != 0
      || (v3[4] == -1 ? (v6 = (char *)&unk_87C928) : (v6 = (char *)(dword_B78A80[(int)v3[4] >> 5] + 36 * (v3[4] & 0x1F))),
          v6[4] >= 0) )
    {
      if ( *v3 == v3[2] ) /*0x7da6fe*/
      {
        if ( v3[1] ) /*0x7da700*/
          return -1; /*0x7da704*/
        *v3 += 2; /*0x7da709*/
      }
      v3[1] += 2; /*0x7da70b*/
      (v5) = ((v5) & ~0xFF) | ((unsigned int)(v5 & 0xEE | 1) & 0xFF); /*0x7da711*/
      *v3 -= 2; /*0x7da713*/
      v3[3] = v5; /*0x7da716*/
      *(unsigned short *)*v3 = v2; /*0x7da71b*/
      return *(unsigned short *)*v3; /*0x7da720*/
    }
    else
    {
      v7 = wctomb((char *)&MbCh, v2); /*0x7da6a0*/
      if ( v7 == -1 ) /*0x7da6aa*/
      {
        *_errno() = 42; /*0x7da6b1*/
        return -1; /*0x7da6be*/
      }
      if ( *v3 == v3[2] ) /*0x7da6c4*/
      {
        if ( v3[1] ) /*0x7da6c6*/
          return -1; /*0x7da6ca*/
        *v3 += v7; /*0x7da6ce*/
      }
      if ( v7 != 1 ) /*0x7da6d3*/
        *(unsigned char *)--*v3 = IDA_HIBYTE(MbCh); /*0x7da6dc*/
      *(unsigned char *)--*v3 = MbCh; /*0x7da6e5*/
      v3[1] += v7; /*0x7da6e7*/
      v9 = v3[3]; /*0x7da6ea*/
      (v9) = ((v9) & ~0xFF) | ((unsigned int)(v9 & 0xEE | 1) & 0xFF); /*0x7da6ef*/
      v3[3] = v9; /*0x7da6f1*/
      return v2; /*0x7da6f4*/
    }
}
}
// 0x7DA725
namespace gamemd {
int __crtCompareStringA(LCID Locale, DWORD dwCmpFlags, CHAR * lpString1, int cchCount1, CHAR * lpString2, int cchCount2, UINT CodePage)
{
    int v7; // esi
    BYTE *LeadByte; // eax
    unsigned __int8 v10; // dl
    BYTE *i; // eax
    unsigned __int8 v12; // dl
    int v13; // eax
    int v14; // eax
    void *v15; // esp
    int v16; // eax
    int v17; // esi
    int v18; // eax
    void *v19; // esp
    WCHAR v21[8]; // [esp+0h] [ebp-4Ch] BYREF
    struct _cpinfo CPInfo; // [esp+10h] [ebp-3Ch] BYREF
    WCHAR *v23; // [esp+24h] [ebp-28h]
    LPWSTR lpWideCharStr; // [esp+28h] [ebp-24h]
    int v25; // [esp+2Ch] [ebp-20h]
    int cchWideChar; // [esp+30h] [ebp-1Ch]
    CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

    if ( !dword_B78578 ) /*0x7da756*/
    {
      if ( CompareStringW(0, 0, &String1, 1, &String1, 1) ) /*0x7da763*/
      {
        dword_B78578 = 1; /*0x7da76d*/
      }
      else
      {
        if ( !CompareStringA(0, 0, byte_7F98E4, 1, byte_7F98E4, 1) ) /*0x7da788*/
          return 0; /*0x7da788*/
        dword_B78578 = 2; /*0x7da78e*/
      }
    }
    v7 = cchCount1; /*0x7da798*/
    if ( cchCount1 > 0 ) /*0x7da79d*/
      v7 = strncnt_0(lpString1, cchCount1); /*0x7da7aa*/
    if ( cchCount2 > 0 ) /*0x7da7b2*/
      cchCount2 = strncnt_0(lpString2, cchCount2); /*0x7da7c1*/
    if ( dword_B78578 == 2 ) /*0x7da7cc*/
      return CompareStringA(Locale, dwCmpFlags, lpString1, v7, lpString2, cchCount2); /*0x7da7e4*/
    if ( dword_B78578 == 1 ) /*0x7da7eb*/
    {
      if ( !CodePage ) /*0x7da7f4*/
        CodePage = ::CodePage; /*0x7da7fb*/
      if ( !v7 || !cchCount2 ) /*0x7da805*/
      {
        if ( v7 == cchCount2 ) /*0x7da80e*/
          return 2; /*0x7da813*/
        if ( cchCount2 > 1 ) /*0x7da81b*/
          return 1; /*0x7da81b*/
        if ( v7 > 1 ) /*0x7da826*/
          return 3; /*0x7da86b*/
        if ( !GetCPInfo(CodePage, &CPInfo) ) /*0x7da837*/
          return 0; /*0x7da837*/
        if ( v7 > 0 ) /*0x7da83f*/
        {
          if ( CPInfo.MaxCharSize >= 2 ) /*0x7da845*/
          {
            LeadByte = CPInfo.LeadByte; /*0x7da847*/
            if ( CPInfo.LeadByte[0] ) /*0x7da84d*/
            {
              while ( 1 ) /*0x7da84f*/
              {
                v10 = LeadByte[1]; /*0x7da84f*/
                if ( !v10 ) /*0x7da854*/
                  break; /*0x7da854*/
                if ( (unsigned int)*lpString1 >= *LeadByte && (unsigned int)*lpString1 <= v10 ) /*0x7da861*/
                  return 2; /*0x7da861*/
                LeadByte += 2; /*0x7da864*/
                if ( !*LeadByte ) /*0x7da865*/
                  return 3; /*0x7da867*/
              }
            }
          }
          return 3; /*0x7da854*/
        }
        if ( cchCount2 > 0 ) /*0x7da870*/
        {
          if ( CPInfo.MaxCharSize >= 2 ) /*0x7da876*/
          {
            for ( i = CPInfo.LeadByte; *i; i += 2 ) /*0x7da87e*/
            {
              v12 = i[1]; /*0x7da880*/
              if ( !v12 ) /*0x7da885*/
                break; /*0x7da885*/
              if ( (unsigned int)*lpString2 >= *i && (unsigned int)*lpString2 <= v12 ) /*0x7da892*/
                return 2; /*0x7da892*/
            }
          }
          return 1; /*0x7da81f*/
        }
      }
      v13 = MultiByteToWideChar( CodePage, 9u, (LPCCH)(lpString1), v7, 0, 0); /*0x7da8ae*/
      cchWideChar = v13; /*0x7da8b4*/
      if ( v13 ) /*0x7da8b9*/
      {
        v14 = 2 * v13 + 3; /*0x7da8c4*/
        (v14) = ((v14) & ~0xFF) | ((unsigned int)(v14 & 0xFC) & 0xFF); /*0x7da8c7*/
        v15 = alloca(v14); /*0x7da8c9*/
        ms_exc.old_esp = (DWORD)v21; /*0x7da8ce*/
        lpWideCharStr = (unsigned int)v21; /*0x7da8d3*/
        ms_exc.registration.TryLevel = -1; /*0x7da8d6*/
        if ( v21 ) /*0x7da8f5*/
        {
          if ( MultiByteToWideChar( CodePage, 1u, (LPCCH)(lpString1), v7, (LPWSTR)(lpWideCharStr), cchWideChar) ) /*0x7da90f*/
          {
            v16 = MultiByteToWideChar( CodePage, 9u, (LPCCH)(lpString2), cchCount2, 0, 0); /*0x7da922*/
            v17 = v16; /*0x7da924*/
            v25 = v16; /*0x7da926*/
            if ( v16 ) /*0x7da92b*/
            {
              v18 = 2 * v16 + 3; /*0x7da933*/
              (v18) = ((v18) & ~0xFF) | ((unsigned int)(v18 & 0xFC) & 0xFF); /*0x7da936*/
              v19 = alloca(v18); /*0x7da938*/
              ms_exc.old_esp = (DWORD)v21; /*0x7da93d*/
              v23 = v21; /*0x7da942*/
              ms_exc.registration.TryLevel = -1; /*0x7da945*/
              if ( v21 ) /*0x7da95f*/
              {
                if ( MultiByteToWideChar( CodePage, 1u, (LPCCH)(lpString2), cchCount2, (LPWSTR)(v21), v17) ) /*0x7da96e*/
                  return CompareStringW(Locale, dwCmpFlags, lpWideCharStr, cchWideChar, v21, v17); /*0x7da98c*/
              }
            }
          }
        }
      }
    }
    return 0; /*0x7da993*/
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
  v4 = (void *)(dword_B781E4); /*0x7da9f6*/
  v5 = v3[1] == 0; /*0x7daa00*/
  if ( dword_B781E4 == (void *)dword_B781E8 ) /*0x7daa09*/
  {
    v4 = (void *)copy_environ(dword_B781E4); /*0x7daa0c*/
    dword_B781E4 = (unsigned int)v4; /*0x7daa12*/
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
      dword_B781E4 = (unsigned int)v7; /*0x7daa4b*/
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
  v9 = (unsigned int *)(dword_B781E4); /*0x7daa72*/
  Block = (void *)(dword_B781E4); /*0x7daa78*/
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
    free( (void *)(v18)); /*0x7daa9b*/
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
        v14 = strlen( (const char *)(Str)); /*0x7dab0a*/
        v15 = (char *)malloc(v14 + 2); /*0x7dab12*/
        v16 = (CHAR *)(v15); /*0x7dab17*/
        if ( v15 )
        {
          strcpy( (char *)(v15), (const char *)(Str)); /*0x7dab23*/
          v17 = &v19[v16 - Str]; /*0x7dab2f*/
          *v17 = 0; /*0x7dab32*/
          SetEnvironmentVariableA(v16, !v5 ? (LPCSTR)v17 + 1 : 0);
          free( (void *)(v16)); /*0x7dab47*/
        }
      }
      return 0; /*0x7dab47*/
    }
  LABEL_30:
    dword_B781E4 = (unsigned int)v13; /*0x7daafc*/
    goto LABEL_31; /*0x7daafc*/
  }
  if ( !v5 ) /*0x7daad1*/
  {
    if ( v10 < 0 ) /*0x7daad5*/
      v11 = -v10; /*0x7daad7*/
    v13 = realloc(v9, 4 * v11 + 8); /*0x7daae2*/
    if ( !v13 ) /*0x7daaeb*/
      return -1; /*0x7daaeb*/
    *((unsigned int *)v13 + v11) = (unsigned int)Str; /*0x7daaf4*/
    *((unsigned int *)v13 + v11 + 1) = 0; /*0x7daaf7*/
    goto LABEL_30; /*0x7daaf7*/
  }
  return 0; /*0x7daa34*/
}
}
// 0x7DAC6C
namespace gamemd {
int _chsize_lk(int FileHandle, LONG lDistanceToMove)
{
    int v2; // esi
    DWORD v3; // eax
    int v4; // edi
    DWORD v5; // eax
    int v6; // eax
    void *osfhandle; // eax
    BOOL v8; // eax
    DWORD LastError; // edi
    unsigned char Buffer[4096]; // [esp+8h] [ebp-1004h] BYREF
    LONG v12; // [esp+1008h] [ebp-4h]
    LONG lDistanceToMovea; // [esp+1018h] [ebp+Ch]

    v2 = 0; /*0x7dac7b*/
    v12 = _lseek_lk(FileHandle, 0, 1u); /*0x7dac90*/
    if ( v12 == -1 ) /*0x7dac93*/
      return -1; /*0x7dac93*/
    v3 = _lseek_lk(FileHandle, 0, 2u); /*0x7dac9f*/
    if ( v3 == -1 ) /*0x7daca9*/
      return -1; /*0x7dad8b*/
    v4 = lDistanceToMove - v3; /*0x7dacb3*/
    if ( (int)(lDistanceToMove - v3) <= 0 ) /*0x7dacb7*/
    {
      if ( (int)(lDistanceToMove - v3) < 0 ) /*0x7dad2e*/
      {
        _lseek_lk(FileHandle, lDistanceToMove, 0); /*0x7dad38*/
        osfhandle = (void *)_get_osfhandle(FileHandle); /*0x7dad40*/
        v8 = SetEndOfFile(osfhandle); /*0x7dad49*/
        v2 = v8 - 1; /*0x7dad57*/
        if ( !v8 ) /*0x7dad5a*/
        {
          *_errno() = 13; /*0x7dad61*/
          LastError = GetLastError(); /*0x7dad6d*/
          *__doserrno() = LastError; /*0x7dad74*/
        }
      }
    }
    else
    {
      memset( (void *)(Buffer), 0, sizeof(Buffer)); /*0x7dacc7*/
      lDistanceToMovea = _setmode_lk(FileHandle, 0x8000); /*0x7dacdc*/
      while ( 1 ) /*0x7dace1*/
      {
        v5 = 4096; /*0x7dace1*/
        if ( v4 < 4096 ) /*0x7dace3*/
          v5 = v4; /*0x7dace5*/
        v6 = _write_lk(FileHandle, Buffer, v5); /*0x7dacf2*/
        if ( v6 == -1 ) /*0x7dacfd*/
          break; /*0x7dacfd*/
        v4 -= v6; /*0x7dacff*/
        if ( v4 <= 0 ) /*0x7dad03*/
          goto LABEL_13; /*0x7dad03*/
      }
      if ( *__doserrno() == 5 ) /*0x7dad0f*/
        *_errno() = 13; /*0x7dad16*/
      v2 = -1; /*0x7dad1c*/
  LABEL_13:
      _setmode_lk(FileHandle, lDistanceToMovea); /*0x7dad1f*/
    }
    _lseek_lk(FileHandle, v12, 0); /*0x7dad7e*/
    return v2; /*0x7dad8d*/
}
}
// 0x7DAE6E
namespace gamemd {
int isctype_CRT(unsigned char a1, int a2, unsigned char a3)
{
    int result; // eax

    if ( (a3 & (unsigned __int8)byte_B78961[a1]) != 0 ) /*0x7dae7d*/
      return 1; /*0x7dae7d*/
    result = a2 ? (unsigned __int16)(a2 & _ctype[a1 + 1]) : 0;
    if ( result ) /*0x7dae98*/
      return 1; /*0x7dae9d*/
    return result; /*0x7dae9a*/
}
}
// 0x7DAE9F
namespace gamemd {
int __crtMessageBoxA(int a1, int a2, int a3)
{
    int v3; // ebx
    HMODULE LibraryA; // eax
    HMODULE v5; // edi

    v3 = 0; /*0x7daea0*/
    if ( !dword_B78580 ) /*0x7daeaa*/
    {
      LibraryA = LoadLibraryA("user32.dll"); /*0x7daeb1*/
      v5 = LibraryA; /*0x7daeb7*/
      if ( !LibraryA ) /*0x7daebb*/
        return 0; /*0x7daebb*/
      dword_B78580 = (int (__stdcall *)(unsigned int, unsigned int, unsigned int, unsigned int))GetProcAddress(LibraryA, "MessageBoxA"); /*0x7daecd*/
      if ( !dword_B78580 ) /*0x7daed2*/
        return 0; /*0x7daf24*/
      dword_B78584 = GetProcAddress(v5, "GetActiveWindow"); /*0x7daee2*/
      dword_B78588 = (int (__stdcall *)(unsigned int))GetProcAddress(v5, "GetLastActivePopup"); /*0x7daee9*/
    }
    if ( dword_B78584 ) /*0x7daef5*/
    {
      v3 = dword_B78584(); /*0x7daef9*/
      if ( v3 ) /*0x7daefd*/
      {
        if ( dword_B78588 ) /*0x7daf06*/
          v3 = dword_B78588(v3); /*0x7daf0b*/
      }
    }
    return dword_B78580(v3, a1, a2, a3); /*0x7daf20*/
}
}
// 0x7DAF28
namespace gamemd {
int __getlocaleinfo(int a1, LCID Locale, LCTYPE LCType, CCINIClass * a4)
{
    char *v4; // edi
    size_t LocaleInfoA; // esi
    size_t v6; // eax
    int v7; // esi
    CHAR *v8; // eax
    char *v9; // eax
    WCHAR *v11; // esi
    unsigned __int8 v12; // bl
    int v13; // eax
    char Source[128]; // [esp+Ch] [ebp-80h] BYREF
    int v15; // [esp+94h] [ebp+8h]

    if ( a1 == 1 ) /*0x7daf38*/
    {
      v4 = (char *)(Source); /*0x7daf4a*/
      v15 = 0; /*0x7daf50*/
      LocaleInfoA = __crtGetLocaleInfoA(Locale, LCType, Source, 128, 0); /*0x7daf5b*/
      if ( !LocaleInfoA ) /*0x7daf62*/
      {
        if ( GetLastError() != 122 ) /*0x7daf6d*/
          return -1; /*0x7daf6d*/
        v6 = __crtGetLocaleInfoA(Locale, LCType, 0, 0, 0); /*0x7daf78*/
        v7 = v6; /*0x7daf7d*/
        if ( !v6 ) /*0x7daf84*/
          return -1; /*0x7daf84*/
        v8 = (CHAR *)malloc(v6); /*0x7daf87*/
        v4 = (char *)(v8); /*0x7daf8c*/
        if ( !v8 ) /*0x7daf91*/
          return -1; /*0x7daf91*/
        v15 = 1; /*0x7daf96*/
        LocaleInfoA = __crtGetLocaleInfoA(Locale, LCType, v8, v7, 0); /*0x7dafa8*/
        if ( !LocaleInfoA ) /*0x7dafaf*/
          goto LABEL_9; /*0x7dafaf*/
      }
      v9 = (char *)malloc(LocaleInfoA); /*0x7dafb2*/
      *a4 = v9; /*0x7dafbd*/
      if ( !v9 ) /*0x7dafbf*/
      {
        if ( !v15 ) /*0x7dafc4*/
          return -1; /*0x7dafd4*/
  LABEL_9:
        free( (void *)(v4)); /*0x7dafc6*/
        return -1; /*0x7dafc7*/
      }
      strncpy( (char *)(v9), (const char *)(v4), LocaleInfoA); /*0x7dafd8*/
      if ( v15 ) /*0x7dafe3*/
        free( (void *)(v4)); /*0x7dafe6*/
    }
    else
    {
      if ( a1 ) /*0x7daff2*/
        return -1; /*0x7daff2*/
      v11 = &LCData; /*0x7daff6*/
      if ( !__crtGetLocaleInfoW(Locale, LCType, &LCData, 4, 0) ) /*0x7db004*/
        return -1; /*0x7db00e*/
      *(unsigned char *)a4 = 0; /*0x7db013*/
      do /*0x7db057*/
      {
        v12 = *(unsigned char *)v11; /*0x7db01d*/
        if ( (int)SrcSizeInBytes <= 1 ) /*0x7db01f*/
          v13 = *((unsigned char *)off_87C590 + 2 * v12) & 4; /*0x7db03c*/
        else
          v13 = _isctype(v12, 4); /*0x7db027*/
        if ( !v13 ) /*0x7db041*/
          break; /*0x7db041*/
        ++v11; /*0x7db04e*/
        *(unsigned char *)a4 = v12 + 10 * *(unsigned char *)a4 - 48; /*0x7db04f*/
      }
      while ( (int)v11 < (int)word_B78594 ); /*0x7db057*/
    }
    return 0; /*0x7dafd0*/
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
  memset( (void *)(v23), 204, 10); /*0x7db228*/
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
  v9 = (int)(77 * ((((unsigned int)(v7) >> 24) & 0xFF) + 2 * (((unsigned int)(a2) >> 24) & 0xFF)) + 19728 * v7 - 323162868) >> 16; /*0x7db343*/
  *(unsigned long long *)&v24[2] = IDA___PAIR64__(a2, (unsigned int)a1); /*0x7db346*/
  __multtenpow12(v24, -(int16_t)v9, 1); /*0x7db353*/
  if ( *(unsigned short *)&v24[10] >= 0x3FFFu ) /*0x7db361*/
  {
    (v9) = ((v9) & ~0xFFFF) | ((unsigned int)(v9 + 1) & 0xFFFF); /*0x7db366*/
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
        a1 = (unsigned int)*(ObjectClass **)v24; /*0x7db3ee*/
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
    return (AbstractClass * *)v25; /*0x7db471*/
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
int _raise_exc(ULONG_PTR Arguments, unsigned int * a2, DWORD dwExceptionCode, short a4, double * a5, double * a6)
{
    char v6; // cl
    unsigned int *v7; // esi
    char v8; // al
    int v9; // eax
    unsigned int *v10; // eax
    unsigned int v11; // ecx
    int v12; // eax
    unsigned int *v13; // eax
    unsigned int v14; // ecx
    double *v15; // edi
    int result; // eax
    int v17; // ecx
    int v18; // ecx
    int v19; // ecx
    unsigned int v20; // ecx
    int v21; // ecx
    int v22; // ecx
    unsigned int v23; // ecx

    *(unsigned int *)(Arguments + 4) = 0; /*0x7db695*/
    *(unsigned int *)(Arguments + 8) = 0; /*0x7db69e*/
    *(unsigned int *)(Arguments + 12) = 0; /*0x7db6a5*/
    v6 = dwExceptionCode; /*0x7db6a8*/
    if ( (dwExceptionCode & 0x10) != 0 ) /*0x7db6ae*/
    {
      dwExceptionCode = -1073741681; /*0x7db6b3*/
      *(unsigned int *)(Arguments + 4) |= 1u; /*0x7db6ba*/
    }
    if ( (v6 & 2) != 0 ) /*0x7db6c0*/
    {
      dwExceptionCode = -1073741677; /*0x7db6c5*/
      *(unsigned int *)(Arguments + 4) |= 2u; /*0x7db6cc*/
    }
    if ( (v6 & 1) != 0 ) /*0x7db6d2*/
    {
      dwExceptionCode = -1073741679; /*0x7db6d7*/
      *(unsigned int *)(Arguments + 4) |= 4u; /*0x7db6de*/
    }
    if ( (v6 & 4) != 0 ) /*0x7db6e5*/
    {
      dwExceptionCode = -1073741682; /*0x7db6ea*/
      *(unsigned int *)(Arguments + 4) |= 8u; /*0x7db6f1*/
    }
    if ( (v6 & 8) != 0 ) /*0x7db6f8*/
    {
      dwExceptionCode = -1073741680; /*0x7db6fd*/
      *(unsigned int *)(Arguments + 4) |= 0x10u; /*0x7db704*/
    }
    v7 = a2; /*0x7db708*/
    *(unsigned int *)(Arguments + 8) = *(unsigned int *)(Arguments + 8) & 0xFFFFFFEF | (16 * ((*a2 & 1) == 0)); /*0x7db722*/
    *(unsigned int *)(Arguments + 8) = *(unsigned int *)(Arguments + 8) & 0xFFFFFFF7 | (2 * (~(unsigned __int8)*v7 & 4)); /*0x7db739*/
    *(unsigned int *)(Arguments + 8) = *(unsigned int *)(Arguments + 8) & 0xFFFFFFFB | (~*v7 >> 1) & 4; /*0x7db750*/
    *(unsigned int *)(Arguments + 8) = *(unsigned int *)(Arguments + 8) & 0xFFFFFFFD | (~*v7 >> 3) & 2; /*0x7db767*/
    *(unsigned int *)(Arguments + 8) = *(unsigned int *)(Arguments + 8) & 0xFFFFFFFE | (~*v7 >> 5) & 1; /*0x7db77e*/
    v8 = _statfp(); /*0x7db781*/
    if ( (v8 & 1) != 0 ) /*0x7db788*/
      *(unsigned int *)(Arguments + 12) |= 0x10u; /*0x7db78d*/
    if ( (v8 & 4) != 0 ) /*0x7db793*/
      *(unsigned int *)(Arguments + 12) |= 8u; /*0x7db798*/
    if ( (v8 & 8) != 0 ) /*0x7db79e*/
      *(unsigned int *)(Arguments + 12) |= 4u; /*0x7db7a3*/
    if ( (v8 & 0x10) != 0 ) /*0x7db7a9*/
      *(unsigned int *)(Arguments + 12) |= 2u; /*0x7db7ae*/
    if ( (v8 & 0x20) != 0 ) /*0x7db7b3*/
      *(unsigned int *)(Arguments + 12) |= 1u; /*0x7db7b8*/
    v9 = *v7 & 0xC00; /*0x7db7c2*/
    switch ( v9 ) /*0x7db7c4*/
    {
      case 0: /*0x7db7c4*/
        *(unsigned int *)Arguments &= 0xFFFFFFFC; /*0x7db7fd*/
        break; /*0x7db7fd*/
      case 1024: /*0x7db7c4*/
        v10 = (unsigned int *)Arguments; /*0x7db7ec*/
        v11 = *(unsigned int *)Arguments & 0xFFFFFFFC | 1; /*0x7db7f4*/
        goto LABEL_28; /*0x7db7f4*/
      case 2048: /*0x7db7c4*/
        v10 = (unsigned int *)Arguments; /*0x7db7e0*/
        v11 = *(unsigned int *)Arguments & 0xFFFFFFFC | 2; /*0x7db7e8*/
  LABEL_28:
        *v10 = v11; /*0x7db7f6*/
        break; /*0x7db7f8*/
      case 3072: /*0x7db7c4*/
        *(unsigned int *)Arguments |= 3u; /*0x7db7db*/
        break;
    }
    v12 = *v7 & 0x300; /*0x7db800*/
    switch ( v12 ) /*0x7db809*/
    {
      case 0: /*0x7db809*/
        v13 = (unsigned int *)Arguments; /*0x7db82b*/
        v14 = *(unsigned int *)Arguments & 0xFFFFFFE3 | 8; /*0x7db833*/
        goto LABEL_36; /*0x7db833*/
      case 512: /*0x7db809*/
        v13 = (unsigned int *)Arguments; /*0x7db81e*/
        v14 = *(unsigned int *)Arguments & 0xFFFFFFE3 | 4; /*0x7db826*/
  LABEL_36:
        *v13 = v14; /*0x7db836*/
        break; /*0x7db836*/
      case 768: /*0x7db809*/
        *(unsigned int *)Arguments &= 0xFFFFFFE3; /*0x7db819*/
        break;
    }
    *(unsigned int *)Arguments = *(unsigned int *)Arguments & 0xFFFE001F | (32 * (a4 & 0xFFF)); /*0x7db838*/
    *(unsigned int *)(Arguments + 32) |= 1u; /*0x7db856*/
    *(unsigned int *)(Arguments + 32) = *(unsigned int *)(Arguments + 32) & 0xFFFFFFE1 | 2; /*0x7db864*/
    *(double *)(Arguments + 16) = *a5; /*0x7db86f*/
    *(unsigned int *)(Arguments + 80) |= 1u; /*0x7db875*/
    v15 = a6; /*0x7db883*/
    *(unsigned int *)(Arguments + 80) = *(unsigned int *)(Arguments + 80) & 0xFFFFFFE1 | 2; /*0x7db886*/
    *(double *)(Arguments + 64) = *v15; /*0x7db88e*/
    _clrfp(); /*0x7db891*/
    RaiseException(dwExceptionCode, 0, 1u, &Arguments); /*0x7db8a0*/
    result = Arguments; /*0x7db8a6*/
    if ( (*(unsigned char *)(Arguments + 8) & 0x10) != 0 ) /*0x7db8ad*/
      *v7 &= ~1u; /*0x7db8af*/
    if ( (*(unsigned char *)(result + 8) & 8) != 0 ) /*0x7db8b6*/
      *v7 &= ~4u; /*0x7db8b8*/
    if ( (*(unsigned char *)(result + 8) & 4) != 0 ) /*0x7db8bf*/
      *v7 &= ~8u; /*0x7db8c1*/
    if ( (*(unsigned char *)(result + 8) & 2) != 0 ) /*0x7db8c8*/
      *v7 &= ~0x10u; /*0x7db8ca*/
    if ( (*(unsigned char *)(result + 8) & 1) != 0 ) /*0x7db8d0*/
      *v7 &= ~0x20u; /*0x7db8d2*/
    v17 = *(unsigned int *)result & 3; /*0x7db8dc*/
    if ( !v17 ) /*0x7db8e2*/
    {
      *v7 &= 0xFFFFF3FF; /*0x7db909*/
      goto LABEL_56; /*0x7db909*/
    }
    v18 = v17 - 1; /*0x7db8e4*/
    if ( !v18 ) /*0x7db8e5*/
    {
      v20 = *v7; /*0x7db8fd*/
      (((v20) >> 8) & 0xFF) = IDA_BYTE1(*v7) & 0xF3 | 4; /*0x7db902*/
      goto LABEL_54; /*0x7db902*/
    }
    v19 = v18 - 1; /*0x7db8e7*/
    if ( !v19 ) /*0x7db8e8*/
    {
      v20 = *v7; /*0x7db8f3*/
      (((v20) >> 8) & 0xFF) = IDA_BYTE1(*v7) & 0xF3 | 8; /*0x7db8f8*/
  LABEL_54:
      *v7 = v20; /*0x7db905*/
      goto LABEL_56; /*0x7db907*/
    }
    if ( v19 == 1 ) /*0x7db8eb*/
      *((unsigned char *)v7 + 1) |= 0xCu; /*0x7db8ed*/
  LABEL_56:
    v21 = (*(unsigned int *)result >> 2) & 7; /*0x7db90b*/
    if ( !v21 ) /*0x7db916*/
    {
      v23 = *v7 & 0xFFFFF3FF; /*0x7db92d*/
      (((v23) >> 8) & 0xFF) |= 3u; /*0x7db92f*/
      goto LABEL_62; /*0x7db92f*/
    }
    v22 = v21 - 1; /*0x7db918*/
    if ( !v22 ) /*0x7db919*/
    {
      v23 = *v7 & 0xFFFFF3FF; /*0x7db924*/
      (((v23) >> 8) & 0xFF) |= 2u; /*0x7db926*/
  LABEL_62:
      *v7 = v23; /*0x7db932*/
      goto LABEL_63; /*0x7db932*/
    }
    if ( v22 == 1 ) /*0x7db91c*/
      *v7 &= 0xFFFFF3FF; /*0x7db91e*/
  LABEL_63:
    *v15 = *(double *)(result + 64); /*0x7db934*/
    return result; /*0x7db939*/
}
}
// 0x7DB93E
namespace gamemd {
int _handle_exc(char a1, double * a2, short a3)
{
    int v3; // edi
    int v4; // ecx
    double *v5; // ecx
    double v7; // st7
    char v8; // c0
    char v9; // c3
    char v11; // c0
    char v12; // c3
    BOOL v13; // esi
    int v14; // ecx
    BOOL v15; // edx
    __int16 v16; // ax
    int v17; // eax
    double v19; // [esp+18h] [ebp-Ch]
    double v20; // [esp+18h] [ebp-Ch]
    int v21; // [esp+20h] [ebp-4h] BYREF

    v3 = a1 & 0x1F; /*0x7db94b*/
    if ( (a1 & 8) != 0 && (a3 & 1) != 0 ) /*0x7db958*/
    {
      _set_statfp(); /*0x7db95b*/
      v3 = a1 & 0x17; /*0x7db961*/
      goto LABEL_46; /*0x7db964*/
    }
    if ( (a1 & 4) != 0 && (a3 & 4) != 0 ) /*0x7db971*/
    {
      _set_statfp(); /*0x7db975*/
      v3 = a1 & 0x1B; /*0x7db97b*/
      goto LABEL_46; /*0x7db97e*/
    }
    if ( (a1 & 1) != 0 && (a3 & 8) != 0 ) /*0x7db98f*/
    {
      _set_statfp(); /*0x7db997*/
      v4 = a3 & 0xC00; /*0x7db9a5*/
      if ( (a3 & 0xC00) != 0 ) /*0x7db9a7*/
      {
        switch ( v4 ) /*0x7db9b3*/
        {
          case 1024: /*0x7db9b3*/
            v5 = a2; /*0x7dba0d*/
            if ( *a2 <= 0.0 ) /*0x7dba1b*/
              v7 = -dbl_87D550; /*0x7dba2b*/
            else
              v7 = dbl_87D560; /*0x7dba1d*/
            break;
          case 2048: /*0x7db9b3*/
            v5 = a2; /*0x7db9e5*/
            if ( *a2 <= 0.0 ) /*0x7db9f3*/
              v7 = -dbl_87D560; /*0x7dba03*/
            else
              v7 = dbl_87D550; /*0x7db9f5*/
            break;
          case 3072: /*0x7db9b3*/
            v5 = a2; /*0x7db9c5*/
            v7 = dbl_87D560; /*0x7db9d0*/
            if ( v8 != 0 || v9 != 0 ) /*0x7db9d8*/
              v7 = -dbl_87D560; /*0x7db9db*/
            break;
          default:
  LABEL_25:
            v3 = a1 & 0x1E; /*0x7dba55*/
            goto LABEL_46; /*0x7dba58*/
        }
      }
      else
      {
        v5 = a2; /*0x7dba35*/
        v7 = dbl_87D550; /*0x7dba40*/
        if ( v11 != 0 || v12 != 0 ) /*0x7dba48*/
          v7 = -dbl_87D550; /*0x7dba4b*/
      }
      *v5 = v7; /*0x7dba53*/
      goto LABEL_25; /*0x7dba53*/
    }
    if ( (a1 & 2) != 0 && (a3 & 0x10) != 0 ) /*0x7dba69*/
    {
      v13 = (a1 & 0x10) != 0; /*0x7dba76*/
      v19 = *a2; /*0x7dba7d*/
      if ( v19 == 0.0 ) /*0x7dba8c*/
      {
        v13 = 1; /*0x7dbb21*/
      }
      else
      {
        v20 = _decomp(v19, &v21); /*0x7dbaa9*/
        v14 = v21 - 1536; /*0x7dbaac*/
        if ( v21 - 1536 >= -1074 ) /*0x7dbab8*/
        {
          v15 = v20 < 0.0; /*0x7dbacf*/
          v16 = IDA_BYTE6(v20) & 0xF; /*0x7dbada*/
          IDA_LOBYTE(v16) = v16 | 0x10; /*0x7dbadd*/
          IDA_HIWORD(v20) = v16; /*0x7dbadf*/
          if ( v14 < -1021 ) /*0x7dbaea*/
          {
            v17 = -1021 - v14; /*0x7dbaec*/
            do /*0x7dbb09*/
            {
              if ( (IDA_LOBYTE(v20) & 1) != 0 && !v13 ) /*0x7dbaf5*/
                v13 = 1; /*0x7dbaf7*/
              IDA_LODWORD(v20) >>= 1; /*0x7dbaf9*/
              if ( ((((v20) >> 32) & 0xFF) & 1) != 0 ) /*0x7dbaff*/
                (((v20) >> 24) & 0xFF) |= 0x80u; /*0x7dbb01*/
              IDA_HIDWORD(v20) >>= 1; /*0x7dbb05*/
              --v17; /*0x7dbb08*/
            }
            while ( v17 ); /*0x7dbb09*/
          }
          if ( v15 ) /*0x7dbb0d*/
            v20 = -v20; /*0x7dbb14*/
        }
        else
        {
          v13 = 1; /*0x7dbabc*/
          v20 = 0.0; /*0x7dbabe*/
        }
        *a2 = v20; /*0x7dbb1d*/
      }
      if ( v13 ) /*0x7dbb26*/
        _set_statfp(); /*0x7dbb2a*/
      v3 = a1 & 0x1D; /*0x7dbb30*/
    }
  LABEL_46:
    if ( (a1 & 0x10) != 0 && (a3 & 0x20) != 0 ) /*0x7dbb3d*/
    {
      _set_statfp(); /*0x7dbb41*/
      v3 &= ~0x10u; /*0x7dbb47*/
    }
    return v3 == 0; /*0x7dbb4e*/
}
}
// 0x7DBC68
namespace gamemd {
void* __clrfp(short a1)
{
  __asm { fnclex } /*0x7dbc6f*/
  return (void*)a1; /*0x7dbc75*/
}
}
// 0x7DBCF0
namespace gamemd {
int ldexp(double X, int Y)
{
    __int16 v2; // cx
    int v3; // edi
    __int16 v4; // cx
    int v5; // eax
    double v7; // st7
    int v8; // eax
    double v9; // st7
    double v10; // st7
    double v11; // st7
    double v12; // st7
    __int16 v13; // cx
    double v14; // [esp+10h] [ebp-20h]
    double v15; // [esp+10h] [ebp-20h]
    __int16 v16; // [esp+18h] [ebp-18h]
    int v17; // [esp+18h] [ebp-18h]
    int v18; // [esp+18h] [ebp-18h]
    double v19; // [esp+24h] [ebp-Ch]
    int v20; // [esp+2Ch] [ebp-4h] BYREF

    v3 = _ctrlfp(v2); /*0x7dbd0b*/
    v4 = -1; /*0x7dbd19*/
    if ( (IDA_HIWORD(X) & 0x7FF0) == 0x7FF0 ) /*0x7dbd1a*/
    {
      v5 = _sptype(IDA_SLODWORD(X), IDA_SHIDWORD(X)); /*0x7dbd21*/
      v4 = v16; /*0x7dbd29*/
      if ( v5 <= 0 ) /*0x7dbd2a*/
        return _except2(8u, 25, X, (double)Y, X + 1.0, v3); /*0x7dbd85*/
      if ( v5 > 2 ) /*0x7dbd2f*/
      {
        if ( v5 == 3 ) /*0x7dbd34*/
          return _handle_qnan2(25, X, (double)Y, v3); /*0x7dbd57*/
        return _except2(8u, 25, X, (double)Y, X + 1.0, v3); /*0x7dbd34*/
      }
      goto LABEL_8; /*0x7dbd2f*/
    }
    if ( X == 0.0 ) /*0x7dbd93*/
    {
  LABEL_8:
      _ctrlfp(v4); /*0x7dbd95*/
      return X; /*0x7dbda1*/
    }
    v7 = _decomp(X, &v20); /*0x7dbdb2*/
    v8 = v20 + Y; /*0x7dbdd3*/
    if ( v20 + Y > 2560 ) /*0x7dbdda*/
    {
      v17 = v3; /*0x7dbddf*/
      v14 = _copysign(dbl_87D550, v7); /*0x7dbdf7*/
      v9 = (double)Y; /*0x7dbe00*/
      return _except2(0x11u, 25, X, v9, v14, v17); /*0x7dbe14*/
    }
    if ( v8 > 1024 ) /*0x7dbe1e*/
    {
      v10 = _set_exp(v7, (unsigned __int16)v8 - 1536); /*0x7dbe2e*/
      v17 = v3; /*0x7dbe3c*/
      v14 = v10; /*0x7dbe3f*/
      v9 = (double)Y; /*0x7dbe48*/
      return _except2(0x11u, 25, X, v9, v14, v17); /*0x7dbe4b*/
    }
    if ( v8 < -2557 ) /*0x7dbe52*/
    {
      v18 = v3; /*0x7dbe54*/
      v15 = 0.0; /*0x7dbe59*/
      v11 = (double)Y; /*0x7dbe62*/
      return _except2(0x12u, 25, X, v11, v15, v18); /*0x7dbeb2*/
    }
    if ( v8 < -1021 ) /*0x7dbe6c*/
    {
      v12 = _set_exp(v7, (unsigned __int16)v8 + 1536); /*0x7dbe7c*/
      v18 = v3; /*0x7dbe8a*/
      v15 = v12; /*0x7dbe8d*/
      v11 = (double)Y; /*0x7dbe96*/
      return _except2(0x12u, 25, X, v11, v15, v18); /*0x7dbe96*/
    }
    v19 = _set_exp(v7, v8); /*0x7dbec2*/
    _ctrlfp(v13); /*0x7dbec7*/
    return v19; /*0x7dbed2*/
}
}
// 0x7DBED6
namespace gamemd {
int __ld12mul(int a1, int a2)
{
    __int16 v4; // cx
    __int16 v5; // ax
    __int16 v6; // di
    int result; // eax
    int v8; // ecx
    int v9; // edi
    unsigned __int16 v10; // dx
    int v11; // eax
    int v12; // ebx
    unsigned int v13[3]; // [esp+Ch] [ebp-24h] BYREF
    int v14; // [esp+18h] [ebp-18h]
    int v15; // [esp+1Ch] [ebp-14h]
    int v16; // [esp+20h] [ebp-10h]
    unsigned __int16 *v17; // [esp+24h] [ebp-Ch]
    unsigned __int16 *v18; // [esp+28h] [ebp-8h]
    unsigned int *v19; // [esp+2Ch] [ebp-4h]
    int v20; // [esp+38h] [ebp+8h]
    int v21; // [esp+38h] [ebp+8h]
    int i; // [esp+3Ch] [ebp+Ch]

    v4 = *(unsigned short *)(a2 + 10); /*0x7dbee4*/
    v15 = 0; /*0x7dbeeb*/
    memset( (void *)(v13), 0, sizeof(v13)); /*0x7dbeee*/
    v5 = *(unsigned short *)(a1 + 10); /*0x7dbef7*/
    v6 = v5 ^ v4; /*0x7dbf02*/
    result = v5 & 0x7FFF; /*0x7dbf04*/
    v8 = v4 & 0x7FFF; /*0x7dbf06*/
    v9 = v6 & 0x8000; /*0x7dbf08*/
    v10 = v8 + result; /*0x7dbf12*/
    v20 = v8 + result; /*0x7dbf15*/
    if ( (unsigned __int16)result < 0x7FFFu && (unsigned __int16)v8 < 0x7FFFu && v10 <= 0xBFFDu ) /*0x7dbf2e*/
    {
      if ( v10 <= 0x3FBFu ) /*0x7dbf39*/
      {
        result = 0; /*0x7dbf3b*/
  LABEL_16:
        *(unsigned int *)(a1 + 8) = 0; /*0x7dbf79*/
        *(unsigned int *)(a1 + 4) = 0; /*0x7dbf7c*/
        *(unsigned int *)a1 = 0; /*0x7dbf7f*/
        return result; /*0x7dbf81*/
      }
      if ( (unsigned short)result || (++v20, (*(unsigned int *)(a1 + 8) & 0x7FFFFFFF) != 0) ) /*0x7dbf4f*/
      {
        result = 0; /*0x7dbf61*/
      }
      else
      {
        result = 0; /*0x7dbf51*/
        if ( !*(unsigned int *)(a1 + 4) && !*(unsigned int *)a1 ) /*0x7dbf58*/
          goto LABEL_45; /*0x7dbf5a*/
      }
      if ( !(unsigned short)v8 ) /*0x7dbf66*/
      {
        ++v20; /*0x7dbf68*/
        if ( (*(unsigned int *)(a2 + 8) & 0x7FFFFFFF) == 0 && !*(unsigned int *)(a2 + 4) && !*(unsigned int *)a2 ) /*0x7dbf75*/
          goto LABEL_16; /*0x7dbf77*/
      }
      v16 = 0; /*0x7dbf86*/
      v19 = &v13[1]; /*0x7dbf8c*/
      for ( i = 5; i > 0; --i ) /*0x7dbf8f*/
      {
        v18 = (unsigned __int16 *)(a1 + 2 * v16); /*0x7dbfa6*/
        v17 = (unsigned __int16 *)(a2 + 8); /*0x7dbfac*/
        v14 = i; /*0x7dbfaf*/
        do /*0x7dbfe8*/
        {
          if ( __addl(*(v19 - 1), *v17 * *v18, v19 - 1) ) /*0x7dbfcb*/
            ++*(unsigned short *)v19; /*0x7dbfda*/
          ++v18; /*0x7dbfdd*/
          --v17; /*0x7dbfe1*/
          --v14; /*0x7dbfe5*/
        }
        while ( v14 ); /*0x7dbfe8*/
        v19 = (unsigned int *)((char *)v19 + 2); /*0x7dbfea*/
        ++v16; /*0x7dbfee*/
      }
      v21 = v20 + 49154; /*0x7dbffa*/
      if ( (__int16)v21 <= 0 ) /*0x7dc006*/
        goto LABEL_49; /*0x7dc006*/
      do /*0x7dc024*/
      {
        if ( (v13[2] & 0x80000000) != 0 ) /*0x7dc00c*/
          break; /*0x7dc00c*/
        __shl_12(v13); /*0x7dc012*/
        v21 += 0xFFFF; /*0x7dc017*/
      }
      while ( (__int16)v21 > 0 ); /*0x7dc024*/
      if ( (__int16)v21 <= 0 ) /*0x7dc02b*/
      {
  LABEL_49:
        v21 += 0xFFFF; /*0x7dc02d*/
        if ( (v21 & 0x8000u) != 0 ) /*0x7dc039*/
        {
          v11 = -(__int16)v21; /*0x7dc03f*/
          v21 -= (__int16)v21; /*0x7dc041*/
          v12 = v11; /*0x7dc044*/
          do /*0x7dc05a*/
          {
            if ( (v13[0] & 1) != 0 ) /*0x7dc04a*/
              ++v15; /*0x7dc04c*/
            __shr_12((int *)v13); /*0x7dc053*/
            --v12; /*0x7dc058*/
          }
          while ( v12 ); /*0x7dc05a*/
          if ( v15 ) /*0x7dc060*/
            ((unsigned int)(v13[0]) & 0xFF) |= 1u; /*0x7dc062*/
        }
      }
      if ( ((unsigned int)(v13[0]) & 0xFFFF) > 0x8000u || (v13[0] & 0x1FFFF) == 0x18000 ) /*0x7dc07b*/
      {
        if ( *(unsigned int *)((char *)v13 + 2) == -1 ) /*0x7dc081*/
        {
          *(unsigned int *)((char *)v13 + 2) = 0; /*0x7dc083*/
          if ( *(unsigned int *)((char *)&v13[1] + 2) == -1 ) /*0x7dc08b*/
          {
            *(unsigned int *)((char *)&v13[1] + 2) = 0; /*0x7dc08d*/
            if ( (((unsigned int)(v13[2]) >> 16) & 0xFFFF) == 0xFFFF ) /*0x7dc097*/
            {
              ++v21; /*0x7dc099*/
              (v13[2]) = ((v13[2]) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(0x8000) & 0xFFFF) << 16); /*0x7dc09c*/
            }
            else
            {
              ++(((unsigned int)(v13[2]) >> 16) & 0xFFFF); /*0x7dc0a4*/
            }
          }
          else
          {
            ++*(unsigned int *)((char *)&v13[1] + 2); /*0x7dc0aa*/
          }
        }
        else
        {
          ++*(unsigned int *)((char *)v13 + 2); /*0x7dc0af*/
        }
      }
      result = v21; /*0x7dc0b2*/
      if ( (unsigned __int16)v21 < 0x7FFFu ) /*0x7dc0b9*/
      {
        result = v9 | v21; /*0x7dc0bf*/
        *(unsigned short *)a1 = (((unsigned int)(v13[0]) >> 16) & 0xFFFF); /*0x7dc0c1*/
        *(unsigned int *)(a1 + 2) = v13[1]; /*0x7dc0c7*/
        *(unsigned int *)(a1 + 6) = v13[2]; /*0x7dc0cd*/
  LABEL_45:
        *(unsigned short *)(a1 + 10) = result; /*0x7dc0d0*/
        return result; /*0x7dc0d4*/
      }
    }
    *(unsigned int *)(a1 + 4) = 0; /*0x7dc0db*/
    *(unsigned int *)a1 = 0; /*0x7dc0eb*/
    *(unsigned int *)(a1 + 8) = (unsigned short)v9 != 0 ? -32768 : 2147450880;
    return result; /*0x7dc0f1*/
}
}
// 0x7DC291
namespace gamemd {
int _filwbuf(unsigned short ** a1)
{
    unsigned __int16 *v1; // eax
    unsigned int v2; // eax
    unsigned __int16 *v3; // edx
    unsigned char *v4; // edi
    unsigned __int16 *v5; // ecx
    unsigned __int16 *v6; // ecx
    int result; // eax

    v1 = a1[3]; /*0x7dc296*/
    if ( ((unsigned __int8)v1 & 0x83) == 0 || ((unsigned __int8)v1 & 0x40) != 0 ) /*0x7dc2a3*/
      return 0xFFFF; /*0x7dc2a3*/
    if ( ((unsigned __int8)v1 & 2) != 0 ) /*0x7dc2ab*/
    {
      IDA_LOBYTE(v1) = (unsigned __int8)v1 | 0x20; /*0x7dc2ad*/
      a1[3] = v1; /*0x7dc2af*/
      return 0xFFFF; /*0x7dc371*/
    }
    IDA_LOBYTE(v1) = (unsigned __int8)v1 | 1; /*0x7dc2b7*/
    a1[3] = v1; /*0x7dc2bd*/
    if ( ((unsigned __int16)v1 & 0x10C) != 0 ) /*0x7dc2c0*/
      *a1 = a1[2]; /*0x7dc2ce*/
    else
      _getbuf(a1); /*0x7dc2c3*/
    v2 = _read((int)a1[4], a1[2], (unsigned int)a1[6]); /*0x7dc2d9*/
    a1[1] = (unsigned __int16 *)v2; /*0x7dc2e1*/
    if ( v2 < 2 || v2 == -1 )
    {
      a1[3] = (unsigned __int16 *)((v2 != 0 ? 32 : 16) | (unsigned int)a1[3]);
      a1[1] = 0; /*0x7dc36d*/
      return 0xFFFF; /*0x7dc36d*/
    }
    v3 = a1[3]; /*0x7dc2f2*/
    if ( ((unsigned __int8)v3 & 0x82) == 0 )
    {
      v4 = a1[4] == (unsigned __int16 *)-1
         ? &unk_87C928
         : (unsigned char *)(dword_B78A80[(int)a1[4] >> 5] + 36 * ((unsigned int)a1[4] & 0x1F));
      if ( (v4[4] & 0x82) == 0x82 ) /*0x7dc329*/
      {
        (((v3) >> 8) & 0xFF) |= 0x20u; /*0x7dc32b*/
        a1[3] = v3; /*0x7dc32e*/
      }
    }
    if ( a1[6] == (unsigned __int16 *)512 ) /*0x7dc338*/
    {
      v5 = a1[3]; /*0x7dc33a*/
      if ( ((unsigned __int8)v5 & 8) != 0 && ((((v5) >> 8) & 0xFF) & 4) == 0 ) /*0x7dc345*/
        a1[6] = (unsigned __int16 *)4096; /*0x7dc347*/
    }
    v6 = *a1; /*0x7dc34e*/
    a1[1] = (unsigned __int16 *)(v2 - 2); /*0x7dc353*/
    result = *v6; /*0x7dc356*/
    *a1 = v6 + 1; /*0x7dc35c*/
    return result; /*0x7dc35e*/
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
int _setmode_lk(int a1, int a2)
{
    char *v2; // edx
    char v3; // cl
    char v4; // cl
    int v5; // eax

    v2 = (char *)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F) + 4); /*0x7dc484*/
    v3 = *v2; /*0x7dc488*/
    if ( a2 == 0x8000 ) /*0x7dc497*/
    {
      v4 = v3 & 0x7F; /*0x7dc499*/
  LABEL_5:
      v5 = -(*v2 < 0); /*0x7dc4ab*/
      *v2 = v4; /*0x7dc4af*/
      (v5) = ((v5) & ~0xFFFF) | ((unsigned int)(v5 & 0xC000) & 0xFFFF); /*0x7dc4b1*/
      return v5 + 0x8000; /*0x7dc4b8*/
    }
    if ( a2 == 0x4000 ) /*0x7dc4a6*/
    {
      v4 = v3 | 0x80; /*0x7dc4a8*/
      goto LABEL_5; /*0x7dc4a8*/
    }
    *_errno() = 22; /*0x7dc4be*/
    return -1; /*0x7dc4b7*/
}
}
// 0x7DC4C9
namespace gamemd {
int __crtGetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData, UINT CodePage)
{
    int v5; // eax
    int LocaleInfoA; // eax
    int v8; // eax
    void *v9; // esp
    int v10; // [esp-4h] [ebp-34h]
    CHAR v11[16]; // [esp+0h] [ebp-30h] BYREF
    CHAR *v12; // [esp+10h] [ebp-20h]
    int v13; // [esp+14h] [ebp-1Ch]
    CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

    v5 = dword_B78598; /*0x7dc4ef*/
    if ( !dword_B78598 ) /*0x7dc4f8*/
    {
      if ( GetLocaleInfoW(0, 1u, 0, 0) ) /*0x7dc4ff*/
      {
        v10 = 1; /*0x7dc509*/
      }
      else
      {
        if ( !GetLocaleInfoA(0, 1u, 0, 0) ) /*0x7dc51a*/
          return 0; /*0x7dc5c8*/
        v10 = 2; /*0x7dc520*/
      }
      v5 = v10; /*0x7dc522*/
      dword_B78598 = v10; /*0x7dc523*/
    }
    if ( v5 == 1 ) /*0x7dc52b*/
      return GetLocaleInfoW(Locale, LCType, lpLCData, cchData); /*0x7dc53f*/
    if ( v5 != 2 ) /*0x7dc547*/
      return 0; /*0x7dc547*/
    if ( !CodePage ) /*0x7dc54c*/
      CodePage = ::CodePage; /*0x7dc553*/
    LocaleInfoA = GetLocaleInfoA(Locale, LCType, 0, 0); /*0x7dc55e*/
    v13 = LocaleInfoA; /*0x7dc564*/
    if ( !LocaleInfoA ) /*0x7dc569*/
      return 0; /*0x7dc569*/
    v8 = LocaleInfoA + 3; /*0x7dc56e*/
    (v8) = ((v8) & ~0xFF) | ((unsigned int)(v8 & 0xFC) & 0xFF); /*0x7dc571*/
    v9 = alloca(v8); /*0x7dc573*/
    ms_exc.old_esp = (DWORD)v11; /*0x7dc578*/
    v12 = v11; /*0x7dc57d*/
    ms_exc.registration.TryLevel = -1; /*0x7dc58d*/
    if ( !v11 || !GetLocaleInfoA(Locale, LCType, v11, v13) ) /*0x7dc59f*/
      return 0; /*0x7dc5a7*/
    if ( cchData ) /*0x7dc5ac*/
      return MultiByteToWideChar( CodePage, 1u, (LPCCH)(v11), -1, (LPWSTR)(lpLCData), cchData); /*0x7dc5c0*/
    else
      return MultiByteToWideChar( CodePage, 1u, (LPCCH)(v11), -1, 0, 0); /*0x7dc5b0*/
}
}
// 0x7DC5DC
namespace gamemd {
int __crtGetLocaleInfoA(LCID Locale, LCTYPE LCType, CCINIClass * aP2, int cchData, UINT CodePage)
{
    int v5; // eax
    int LocaleInfoW; // eax
    int v8; // eax
    void *v9; // esp
    int v10; // [esp-4h] [ebp-34h]
    WCHAR v11[8]; // [esp+0h] [ebp-30h] BYREF
    WCHAR *v12; // [esp+10h] [ebp-20h]
    int v13; // [esp+14h] [ebp-1Ch]
    CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

    v5 = dword_B7859C; /*0x7dc602*/
    if ( !dword_B7859C ) /*0x7dc60b*/
    {
      if ( GetLocaleInfoW(0, 1u, 0, 0) ) /*0x7dc612*/
      {
        v10 = 1; /*0x7dc61c*/
      }
      else
      {
        if ( !GetLocaleInfoA(0, 1u, 0, 0) ) /*0x7dc62d*/
          return 0; /*0x7dc6e6*/
        v10 = 2; /*0x7dc633*/
      }
      v5 = v10; /*0x7dc635*/
      dword_B7859C = v10; /*0x7dc636*/
    }
    if ( v5 == 2 ) /*0x7dc63e*/
      return GetLocaleInfoA(Locale, LCType, lpLCData, cchData); /*0x7dc652*/
    if ( v5 != 1 ) /*0x7dc65a*/
      return 0; /*0x7dc65a*/
    if ( !CodePage ) /*0x7dc663*/
      CodePage = ::CodePage; /*0x7dc66a*/
    LocaleInfoW = GetLocaleInfoW(Locale, LCType, 0, 0); /*0x7dc675*/
    v13 = LocaleInfoW; /*0x7dc67b*/
    if ( !LocaleInfoW ) /*0x7dc680*/
      return 0; /*0x7dc680*/
    v8 = 2 * LocaleInfoW + 3; /*0x7dc687*/
    (v8) = ((v8) & ~0xFF) | ((unsigned int)(v8 & 0xFC) & 0xFF); /*0x7dc68a*/
    v9 = alloca(v8); /*0x7dc68c*/
    ms_exc.old_esp = (DWORD)v11; /*0x7dc691*/
    v12 = v11; /*0x7dc696*/
    ms_exc.registration.TryLevel = -1; /*0x7dc6a6*/
    if ( !v11 || !GetLocaleInfoW(Locale, LCType, v11, v13) ) /*0x7dc6b8*/
      return 0; /*0x7dc6c0*/
    if ( cchData ) /*0x7dc6c7*/
      return WideCharToMultiByte( CodePage, 0x220u, (LPCWCH)(v11), -1, lpLCData, cchData, 0, 0); /*0x7dc6de*/
    else
      return WideCharToMultiByte( CodePage, 0x220u, (LPCWCH)(v11), -1, 0, 0, 0, 0); /*0x7dc6cb*/
}
}
// 0x7DC7CB
namespace gamemd {
void HandleErrorCOM(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * pperrinfo, LPCWSTR lpString, int a7, void ** a8)
{
    LPCWSTR v9; // ebx
    int v10; // eax
    unsigned int v11; // esi
    int v12; // eax
    void *v13; // esp
    unsigned char *v14; // edx
    bool v15; // zf
    unsigned __int16 *v16; // esi
    unsigned int *v17; // ecx
    int v18; // eax
    int v19; // edx
    unsigned __int16 v20; // di
    int v21; // esi
    int v22; // esi
    int v23; // esi
    unsigned int *v24; // esi
    __int16 v25; // si
    unsigned int *v26; // esi
    unsigned __int16 *v27; // edi
    unsigned int *v28; // esi
    unsigned __int16 *v29; // edi
    int v30; // esi
    unsigned char *v31; // eax
    int v32; // edx
    unsigned short *v33; // ecx
    unsigned char *v34; // esi
    unsigned int v35; // ecx
    unsigned int *v36; // ebx
    unsigned int *v37; // eax
    unsigned int *v38; // esi
    HRESULT v39; // ebx
    void **v40; // esi
    ICreateErrorInfo *v41; // edi
    unsigned char v42[12]; // [esp+0h] [ebp-60h] BYREF
    unsigned int v43[8]; // [esp+Ch] [ebp-54h] BYREF
    unsigned char *v44; // [esp+2Ch] [ebp-34h] BYREF
    int *v45; // [esp+30h] [ebp-30h]
    int v46; // [esp+34h] [ebp-2Ch]
    unsigned int v47; // [esp+38h] [ebp-28h]
    VARIANTARG pvarg; // [esp+3Ch] [ebp-24h] BYREF
    int v49; // [esp+4Ch] [ebp-14h] BYREF
    int v50; // [esp+50h] [ebp-10h] BYREF
    unsigned char *v51; // [esp+54h] [ebp-Ch]
    unsigned short *v52; // [esp+58h] [ebp-8h]
    unsigned __int16 *v53; // [esp+5Ch] [ebp-4h]

    *a8 = 0; /*0x7dc7d7*/
    if ( !a1 ) /*0x7dc7de*/
      return -2147467261; /*0x7dc7e5*/
    v44 = (unsigned char *)(0); /*0x7dc7ef*/
    v9 = lpString; /*0x7dc7f0*/
    v45 = (int *)(0); /*0x7dc7f3*/
    v46 = 0; /*0x7dc7f4*/
    v47 = 0; /*0x7dc7f7*/
    if ( lpString ) /*0x7dc7f8*/
    {
      v10 = lstrlenW(lpString); /*0x7dc7fb*/
      v46 = v10; /*0x7dc801*/
    }
    else
    {
      v10 = v46; /*0x7dc806*/
    }
    v50 = -3; /*0x7dc80d*/
    if ( (a3 & 0xC) != 0 ) /*0x7dc814*/
    {
      if ( !v10 ) /*0x7dc818*/
        return -2147024809; /*0x7dc9bc*/
      v47 = 1; /*0x7dc821*/
      v45 = &v50; /*0x7dc828*/
    }
    if ( v10 )
    {
      v11 = 16 * v10; /*0x7dc836*/
      v12 = 16 * v10 + 3; /*0x7dc838*/
      (v12) = ((v12) & ~0xFF) | ((unsigned int)(v12 & 0xFC) & 0xFF); /*0x7dc83b*/
      v13 = alloca(v12); /*0x7dc83d*/
      v14 = v42; /*0x7dc842*/
      memset( (void *)(v42), 0, v11); /*0x7dc84d*/
      v51 = v42; /*0x7dc851*/
      v52 = (unsigned short *)(v9); /*0x7dc857*/
      v44 = v42; /*0x7dc85f*/
      v15 = *v9 == 0; /*0x7dc865*/
      v16 = (unsigned __int16 *)&v42[16 * v46 - 16]; /*0x7dc869*/
      v53 = v16; /*0x7dc86d*/
      if ( !v15 ) /*0x7dc870*/
      {
        v17 = v16 + 4; /*0x7dc87b*/
        v18 = a7 - 4; /*0x7dc87f*/
        v19 = a7 - 8; /*0x7dc882*/
        while ( 1 ) /*0x7dc890*/
        {
          v20 = *v52 & 0xF7FF; /*0x7dc890*/
          *v16 = v20; /*0x7dc895*/
          if ( v20 > 0x4002u ) /*0x7dc8a1*/
          {
            switch ( v20 ) /*0x7dc94a*/
            {
              case 0x4003u: /*0x7dc94a*/
              case 0x4004u: /*0x7dc94a*/
              case 0x4005u: /*0x7dc94a*/
              case 0x4006u: /*0x7dc94a*/
              case 0x4007u: /*0x7dc94a*/
              case 0x4008u: /*0x7dc94a*/
              case 0x4009u: /*0x7dc94a*/
              case 0x400Au: /*0x7dc94a*/
              case 0x400Bu: /*0x7dc94a*/
              case 0x400Cu: /*0x7dc94a*/
              case 0x400Du: /*0x7dc94a*/
              case 0x400Eu: /*0x7dc94a*/
              case 0x4011u: /*0x7dc94a*/
                goto LABEL_28;
              default:
  LABEL_27:
                if ( (v20 & 0x2000) != 0 ) /*0x7dc956*/
                  goto LABEL_28; /*0x7dc956*/
                return -2147024809; /*0x7dc956*/
            }
          }
          if ( v20 == 16386 ) /*0x7dc8a7*/
          {
  LABEL_28:
            v30 = *(unsigned int *)(v18 + 4); /*0x7dc958*/
            v19 += 4; /*0x7dc95b*/
            v18 += 4; /*0x7dc95d*/
            *v17 = v30; /*0x7dc95f*/
          }
          else
          {
            switch ( v20 ) /*0x7dc8b9*/
            {
              case 2u: /*0x7dc8b9*/
                (v21) = ((v21) & ~0xFFFF) | ((unsigned int)(*(unsigned short *)(v18 + 4)) & 0xFFFF); /*0x7dc8c0*/
                v19 += 4; /*0x7dc8c4*/
                v18 += 4; /*0x7dc8c6*/
                goto LABEL_17; /*0x7dc8c6*/
              case 3u: /*0x7dc8b9*/
              case 8u: /*0x7dc8b9*/
              case 9u: /*0x7dc8b9*/
              case 0xAu: /*0x7dc8b9*/
              case 0xDu: /*0x7dc8b9*/
                goto LABEL_28;
              case 4u: /*0x7dc8b9*/
                *v53 = 5; /*0x7dc8d3*/
                goto LABEL_19; /*0x7dc8d3*/
              case 5u: /*0x7dc8b9*/
              case 7u: /*0x7dc8b9*/
  LABEL_19:
                v22 = *(unsigned int *)(v19 + 8); /*0x7dc8d8*/
                v19 += 8; /*0x7dc8db*/
                *v17 = v22; /*0x7dc8de*/
                v18 += 8; /*0x7dc8e0*/
                v23 = *(unsigned int *)(v19 + 4); /*0x7dc8e3*/
                goto LABEL_21; /*0x7dc8e6*/
              case 6u: /*0x7dc8b9*/
                v24 = *(unsigned int **)(v18 + 4); /*0x7dc8e8*/
                v19 += 4; /*0x7dc8eb*/
                v18 += 4; /*0x7dc8ed*/
                *v17 = *v24; /*0x7dc8f1*/
                v23 = v24[1]; /*0x7dc8f3*/
  LABEL_21:
                v17[1] = v23; /*0x7dc8f6*/
                break; /*0x7dc8f9*/
              case 0xBu: /*0x7dc8b9*/
                v25 = *(unsigned short *)(v18 + 4); /*0x7dc8fb*/
                v18 += 4; /*0x7dc8ff*/
                v19 += 4; /*0x7dc901*/
                v21 = -(v25 != 0); /*0x7dc906*/
  LABEL_17:
                *(unsigned short *)v17 = v21; /*0x7dc8c8*/
                break; /*0x7dc8cb*/
              case 0xCu: /*0x7dc8b9*/
                v26 = *(unsigned int **)(v18 + 4); /*0x7dc90a*/
                v27 = v53; /*0x7dc90d*/
                v19 += 4; /*0x7dc910*/
                v18 += 4; /*0x7dc912*/
                *(unsigned int *)v53 = *v26++; /*0x7dc914*/
                v27 += 2; /*0x7dc914*/
                *(unsigned int *)v27 = *v26++; /*0x7dc915*/
                v27 += 2; /*0x7dc915*/
                *(unsigned int *)v27 = *v26; /*0x7dc916*/
                *((unsigned int *)v27 + 1) = v26[1]; /*0x7dc917*/
                break; /*0x7dc918*/
              case 0xEu: /*0x7dc8b9*/
                v28 = *(unsigned int **)(v18 + 4); /*0x7dc91a*/
                v29 = v53; /*0x7dc91d*/
                v19 += 4; /*0x7dc920*/
                v18 += 4; /*0x7dc922*/
                *(unsigned int *)v53 = *v28++; /*0x7dc924*/
                v29 += 2; /*0x7dc924*/
                *(unsigned int *)v29 = *v28++; /*0x7dc925*/
                v29 += 2; /*0x7dc925*/
                *(unsigned int *)v29 = *v28; /*0x7dc926*/
                *((unsigned int *)v29 + 1) = v28[1]; /*0x7dc927*/
                *v53 = 14; /*0x7dc92b*/
                break; /*0x7dc930*/
              case 0x11u: /*0x7dc8b9*/
                v19 += 4; /*0x7dc932*/
                v18 += 4; /*0x7dc934*/
                *(unsigned char *)v17 = *(unsigned char *)v18; /*0x7dc93a*/
                break; /*0x7dc93d*/
              default:
                goto LABEL_27;
            }
          }
          ++v52; /*0x7dc961*/
          v53 -= 8; /*0x7dc965*/
          v17 -= 4; /*0x7dc96c*/
          if ( !*v52 ) /*0x7dc96f*/
            break; /*0x7dc96f*/
          v16 = v53; /*0x7dc887*/
        }
        v9 = lpString; /*0x7dc979*/
        v14 = v51; /*0x7dc97c*/
      }
      v31 = &v14[16 * v47]; /*0x7dc98b*/
      v32 = 0; /*0x7dc98d*/
      v33 = &v9[v46 - v47 - 1]; /*0x7dc98f*/
      if ( v33 >= v9 )
      {
        do
        {
          if ( (*v33 & 0xBFFF) != 0x80C ) /*0x7dc9a9*/
            break; /*0x7dc9a9*/
          v34 = (*v33 & 0x4000) != 0 ? (unsigned char *)*((unsigned int *)v31 + 2) : v31;
          if ( *(unsigned short *)v34 != 10 ) /*0x7dc9c7*/
            break; /*0x7dc9c7*/
          if ( *((unsigned int *)v34 + 2) != -2147352572 ) /*0x7dc9d0*/
            break; /*0x7dc9d0*/
          ++v32; /*0x7dc9d2*/
          v31 += 16; /*0x7dc9d3*/
          --v33; /*0x7dc9d7*/
        }
        while ( v33 >= v9 );
        if ( v32 ) /*0x7dc9de*/
        {
          v35 = 0; /*0x7dc9e0*/
          if ( v47 ) /*0x7dc9e5*/
          {
            v36 = (unsigned int *)(v51); /*0x7dc9e7*/
            v37 = &v51[16 * v32]; /*0x7dc9ef*/
            do /*0x7dca03*/
            {
              *v37 = *v36; /*0x7dc9f5*/
              v37[1] = v36[1]; /*0x7dc9f6*/
              v37[2] = v36[2]; /*0x7dc9f7*/
              v38 = v36 + 3; /*0x7dc9f7*/
              ++v35; /*0x7dc9f8*/
              v36 += 4; /*0x7dc9f9*/
              v37[3] = *v38; /*0x7dc9fc*/
              v37 += 4; /*0x7dc9fd*/
            }
            while ( v35 < v47 ); /*0x7dca03*/
          }
          v46 -= v32; /*0x7dca05*/
          v44 += 16 * v32; /*0x7dca0b*/
        }
      }
    }
    VariantInit(&pvarg); /*0x7dca12*/
    v49 = -1; /*0x7dca1d*/
    memset( (void *)(v43), 0, sizeof(v43)); /*0x7dca32*/
    v39 = (*(int (__stdcall **)(int, int, void *, unsigned int, int, unsigned char **, VARIANTARG *, unsigned int *, int *))(*(unsigned int *)a1 + 24))(
            a1,
            a2,
            &unk_B785A0,
            0,
            a3,
            &v44,
            vt != 0 ? &pvarg : 0,
            v43,
            &v49);
    if ( v39 >= 0 ) /*0x7dca5e*/
    {
      if ( vt ) /*0x7dcb1d*/
      {
        if ( vt == 12 || vt == pvarg.vt || (v39 = VariantChangeType(&pvarg, &pvarg, 0, vt), v39 >= 0) ) /*0x7dcb43*/
        {
          switch ( vt ) /*0x7dcb50*/
          {
            case 2u: /*0x7dcb50*/
            case 0xBu: /*0x7dcb50*/
              IDA_LOWORD(pperrinfo->lpVtbl) = pvarg.iVal; /*0x7dcb6e*/
              return v39; /*0x7dcb71*/
            case 3u: /*0x7dcb50*/
            case 4u: /*0x7dcb50*/
            case 8u: /*0x7dcb50*/
            case 9u: /*0x7dcb50*/
            case 0xAu: /*0x7dcb50*/
            case 0xDu: /*0x7dcb50*/
              goto LABEL_67;
            case 5u: /*0x7dcb50*/
            case 6u: /*0x7dcb50*/
            case 7u: /*0x7dcb50*/
              *(unsigned __int64 *)&pperrinfo->lpVtbl = pvarg.llVal; /*0x7dcb5d*/
              return v39; /*0x7dcb65*/
            case 0xCu: /*0x7dcb50*/
            case 0xEu: /*0x7dcb50*/
              v41 = pperrinfo; /*0x7dcb73*/
              pperrinfo->lpVtbl = *(struct ICreateErrorInfoVtbl **)&pvarg.vt; /*0x7dcb79*/
              ++v41; /*0x7dcb79*/
              v41->lpVtbl = (struct ICreateErrorInfoVtbl *)pvarg.decVal.Hi32; /*0x7dcb7a*/
              *(unsigned __int64 *)&v41[1].lpVtbl = pvarg.llVal; /*0x7dcb7b*/
              return v39; /*0x7dcb7d*/
            case 0x11u: /*0x7dcb50*/
              IDA_LOBYTE(pperrinfo->lpVtbl) = pvarg.bVal; /*0x7dcb85*/
              return v39; /*0x7dcb87*/
            default:
              if ( (vt & 0x6000) == 0x2000 ) /*0x7dcb93*/
              {
  LABEL_67:
                pperrinfo->lpVtbl = (struct ICreateErrorInfoVtbl *)pvarg.decVal.Lo32; /*0x7dcb95*/
                return v39; /*0x7dcb9d*/
              }
              v39 = -2147024809; /*0x7dcb9f*/
              break; /*0x7dcb9f*/
          }
        }
        VariantClear(&pvarg); /*0x7dcba8*/
      }
      return v39; /*0x7dcba8*/
    }
    VariantClear(&pvarg); /*0x7dca68*/
    if ( v39 != -2147352567 ) /*0x7dca74*/
      return v39; /*0x7dcbae*/
    if ( v43[6] ) /*0x7dca7d*/
      ((void (__stdcall *)(unsigned int *))v43[6])(v43); /*0x7dca83*/
    pperrinfo = (ICreateErrorInfo *)(0); /*0x7dca89*/
    if ( CreateErrorInfo(&pperrinfo) >= 0 ) /*0x7dca95*/
    {
      pperrinfo->lpVtbl->SetGUID(pperrinfo, (const GUID *const)&unk_87DA00); /*0x7dcaa2*/
      pperrinfo->lpVtbl->SetDescription(pperrinfo, (LPOLESTR)v43[2]); /*0x7dcaae*/
      pperrinfo->lpVtbl->SetHelpContext(pperrinfo, v43[4]); /*0x7dcaba*/
      pperrinfo->lpVtbl->SetHelpFile(pperrinfo, (LPOLESTR)v43[3]); /*0x7dcac6*/
      pperrinfo->lpVtbl->SetSource(pperrinfo, (LPOLESTR)v43[1]); /*0x7dcad2*/
      v40 = a8; /*0x7dcad8*/
      if ( pperrinfo->lpVtbl->QueryInterface(pperrinfo, &stru_87D9F0, a8) < 0 ) /*0x7dcae8*/
        *v40 = 0; /*0x7dcaea*/
    }
    if ( !((unsigned int)(v43[0]) & 0xFFFF) ) /*0x7dcaf0*/
      return v43[7]; /*0x7dcb12*/
    if ( ((unsigned int)(v43[0]) & 0xFFFF) < 0xFE00u ) /*0x7dcaf8*/
      return ((unsigned int)(v43[0]) & 0xFFFF) - 2147220992; /*0x7dcb08*/
    return -2147155969; /*0x7dcbb3*/
}
}
// 0x7DCE0E
namespace gamemd {
unsigned int * _com_error::sub_7DCE0E(int a2)
{
    int v3; // eax

    *(this + 1) = *(_com_error *)(a2 + 4); /*0x7dce18*/
    v3 = *(unsigned int *)(a2 + 8); /*0x7dce1b*/
    *((unsigned int *)this + 3) = 0; /*0x7dce1e*/
    *((unsigned int *)this + 2) = v3; /*0x7dce22*/
    this->vfptr = (int)(void*)&_com_error_vftable; /*0x7dce27*/
    if ( v3 ) /*0x7dce2d*/
      (*(void (__stdcall **)(int))(*(unsigned int *)v3 + 4))(v3); /*0x7dce32*/
    return &this->vfptr; /*0x7dce37*/
}
}
// 0x7DCE3B
namespace gamemd {
HLOCAL _com_error::sub_7DCE3B()
{
    HLOCAL result; // eax
    void *v3; // esi

    result = (HLOCAL)*((unsigned int *)this + 2); /*0x7dce3e*/
    this->vfptr = (int)(void*)&_com_error_vftable; /*0x7dce41*/
    if ( result ) /*0x7dce49*/
      result = (HLOCAL)(*(int (__stdcall **)(HLOCAL))(*(unsigned int *)result + 8))(result); /*0x7dce4e*/
    v3 = (void *)*((unsigned int *)this + 3); /*0x7dce51*/
    if ( v3 ) /*0x7dce56*/
      return LocalFree(v3); /*0x7dce59*/
    return result; /*0x7dce5f*/
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

  Block = (char *)(0); /*0x7dcfd3*/
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
        Block = (char *)(v8); /*0x7dd0a0*/
        if ( v8 ) /*0x7dd0a3*/
        {
          if ( __crtLCMapStringA(dword_B782A0, 0x200u, String, -1, v8, v7, 0, 1) ) /*0x7dd0b7*/
            strcpy( (char *)(String), (const char *)(Block)); /*0x7dd0c9*/
        }
      }
      if ( v10 ) /*0x7dd0d5*/
        _unlock(19); /*0x7dd0d9*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7dd0e2*/
      free( (void *)(Block)); /*0x7dd0eb*/
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
    int result; // eax
    BOOL i; // eax
    int AsciiChar; // edi
    unsigned __int8 *v3; // eax
    struct _INPUT_RECORD Buffer; // [esp+0h] [ebp-1Ch] BYREF
    DWORD Mode; // [esp+14h] [ebp-8h] BYREF
    DWORD NumberOfEventsRead; // [esp+18h] [ebp-4h] BYREF

    if ( dword_87DD70 == -1 ) /*0x7dd21f*/
    {
      if ( hConsoleInput == (HANDLE)-1 ) /*0x7dd233*/
      {
        return -1; /*0x7dd235*/
      }
      else
      {
        if ( hConsoleInput == (HANDLE)-2 ) /*0x7dd23c*/
          __initconin(); /*0x7dd23e*/
        GetConsoleMode(hConsoleInput, &Mode); /*0x7dd250*/
        SetConsoleMode(hConsoleInput, 0); /*0x7dd264*/
        for ( i = ReadConsoleInputA(hConsoleInput, &Buffer, 1u, &NumberOfEventsRead); /*0x7dd27c*/
              i && NumberOfEventsRead;
              i = ReadConsoleInputA(hConsoleInput, &Buffer, 1u, &NumberOfEventsRead) )
        {
          if ( Buffer.EventType == 1 && Buffer.Event.KeyEvent.bKeyDown ) /*0x7dd293*/
          {
            AsciiChar = (unsigned __int8)Buffer.Event.KeyEvent.uChar.AsciiChar; /*0x7dd295*/
            if ( Buffer.Event.KeyEvent.uChar.AsciiChar ) /*0x7dd29b*/
              goto LABEL_17; /*0x7dd29b*/
            v3 = (unsigned __int8 *)_getextendedkeycode(&Buffer.Event); /*0x7dd2a1*/
            if ( v3 ) /*0x7dd2a9*/
            {
              AsciiChar = *v3; /*0x7dd2bd*/
              dword_87DD70 = v3[1]; /*0x7dd2c4*/
              goto LABEL_17; /*0x7dd2c9*/
            }
          }
        }
        AsciiChar = -1; /*0x7dd2cb*/
  LABEL_17:
        SetConsoleMode(hConsoleInput, Mode); /*0x7dd2ce*/
        return AsciiChar; /*0x7dd2d9*/
      }
    }
    else
    {
      result = (unsigned __int8)dword_87DD70; /*0x7dd221*/
      dword_87DD70 = -1; /*0x7dd224*/
    }
    return result; /*0x7dd22a*/
}
}
// 0x7DD505
namespace gamemd {
void output(char * a1, int a2)
{
    char vtable0; // bl
    int v3; // edi
    int v4; // ecx
    int v5; // eax
    int int_arg_1; // eax
    int v7; // eax
    char *v8; // eax
    int v9; // esi
    char *v10; // eax
    char *v11; // ecx
    char *i; // eax
    int v13; // edx
    wchar_t short_arg_0; // ax
    __int16 *v15; // eax
    char *v16; // ecx
    unsigned int *v17; // eax
    int v18; // eax
    char *j; // eax
    int v20; // edx
    unsigned short *v21; // eax
    __int64 int64_arg_1; // rax
    unsigned __int64 v23; // rdi
    int v24; // eax
    int v25; // ebx
    unsigned __int64 v26; // kr08_8
    char *v27; // eax
    unsigned int *v28; // eax
    char v29; // bl
    unsigned int *v30; // esi
    wchar_t *v31; // edi
    char *v32; // ebx
    wchar_t v33; // ax
    unsigned int *v34; // eax
    char *v36; // eax
    char MbCh; // [esp+Ch] [ebp-248h] BYREF
    char v39; // [esp+20Bh] [ebp-49h] BYREF
    int v40; // [esp+20Ch] [ebp-48h]
    int v41; // [esp+210h] [ebp-44h]
    __int64 v42; // [esp+214h] [ebp-40h]
    char v43[4]; // [esp+21Ch] [ebp-38h] BYREF
    int v44; // [esp+220h] [ebp-34h]
    int v45; // [esp+224h] [ebp-30h]
    int v46; // [esp+228h] [ebp-2Ch]
    int v47; // [esp+22Ch] [ebp-28h]
    int v48; // [esp+230h] [ebp-24h]
    int v49; // [esp+234h] [ebp-20h]
    int v50; // [esp+238h] [ebp-1Ch]
    char v51[2]; // [esp+23Eh] [ebp-16h] BYREF
    int v52; // [esp+240h] [ebp-14h] BYREF
    int v53; // [esp+244h] [ebp-10h]
    int v54; // [esp+248h] [ebp-Ch]
    char *p_MbCh; // [esp+24Ch] [ebp-8h]
    int v56; // [esp+250h] [ebp-4h]
    ObjectClass *thisa; // [esp+25Ch] [ebp+8h]

    vtable0 = (char)this->AbstractClass; /*0x7dd514*/
    v3 = 0; /*0x7dd516*/
    thisa = (ObjectClass *)((char *)&this->AbstractClass + 1); /*0x7dd518*/
    v54 = 0; /*0x7dd51b*/
    v52 = 0; /*0x7dd520*/
    if ( vtable0 ) /*0x7dd523*/
    {
      v4 = v53; /*0x7dd529*/
      while ( 1 ) /*0x7dd542*/
      {
        if ( v52 < 0 ) /*0x7dd545*/
          return v52; /*0x7dd545*/
        if ( vtable0 < 32 || vtable0 > 120 ) /*0x7dd553*/
          v5 = 0; /*0x7dd563*/
        else
          v5 = byte_7F97CC[vtable0] & 0xF; /*0x7dd55e*/
        v45 = byte_7F97EC[8 * v5 + v3] >> 4; /*0x7dd573*/
        switch ( v45 ) /*0x7dd57c*/
        {
          case 0: /*0x7dd57c*/
            goto $NORMAL_STATE$1533;
          case 1: /*0x7dd57c*/
            v53 = -1; /*0x7dd583*/
            v44 = 0; /*0x7dd587*/
            v47 = 0; /*0x7dd58a*/
            v49 = 0; /*0x7dd58d*/
            v50 = 0; /*0x7dd590*/
            v56 = 0; /*0x7dd593*/
            v48 = 0; /*0x7dd596*/
            goto LABEL_171; /*0x7dd599*/
          case 2: /*0x7dd57c*/
            switch ( vtable0 ) /*0x7dd5a4*/
            {
              case ' ': /*0x7dd5a4*/
                v56 |= 2u; /*0x7dd5e1*/
                break;
              case '#': /*0x7dd5a4*/
                (v56) = ((v56) & ~0xFF) | ((unsigned int)(v56 | 0x80) & 0xFF); /*0x7dd5d8*/
                break;
              case '+': /*0x7dd5a4*/
                v56 |= 1u; /*0x7dd5cf*/
                break;
              case '-': /*0x7dd5a4*/
                v56 |= 4u; /*0x7dd5c6*/
                break;
              case '0': /*0x7dd5a4*/
                v56 |= 8u; /*0x7dd5bd*/
                break;
            }
            goto LABEL_171; /*0x7dd5c1*/
          case 3: /*0x7dd57c*/
            if ( vtable0 == 42 ) /*0x7dd5ed*/
            {
              int_arg_1 = get_int_arg_1(&a2); /*0x7dd5f3*/
              v49 = int_arg_1; /*0x7dd5fb*/
              if ( int_arg_1 >= 0 ) /*0x7dd5fe*/
                goto LABEL_171; /*0x7dd5fe*/
              v56 |= 4u; /*0x7dd604*/
              v7 = -int_arg_1; /*0x7dd608*/
            }
            else
            {
              v7 = vtable0 + 10 * v49 - 48; /*0x7dd61b*/
            }
            v49 = v7; /*0x7dd60a*/
            goto LABEL_171; /*0x7dd60d*/
          case 4: /*0x7dd57c*/
            v53 = 0; /*0x7dd621*/
            goto LABEL_171; /*0x7dd624*/
          case 5: /*0x7dd57c*/
            if ( vtable0 == 42 ) /*0x7dd62c*/
            {
              v53 = get_int_arg_1(&a2); /*0x7dd63a*/
              if ( v53 < 0 ) /*0x7dd63d*/
                v53 = -1; /*0x7dd643*/
            }
            else
            {
              v53 = vtable0 + 10 * v4 - 48; /*0x7dd656*/
            }
            goto LABEL_171; /*0x7dd647*/
          case 6: /*0x7dd57c*/
            switch ( vtable0 ) /*0x7dd661*/
            {
              case 'I': /*0x7dd661*/
                if ( IDA_LOBYTE(thisa->AbstractClass) == 54 && IDA_BYTE1(thisa->AbstractClass) == 52 ) /*0x7dd69c*/
                {
                  (((v56) >> 8) & 0xFF) |= 0x80u; /*0x7dd6a0*/
                  thisa = (ObjectClass *)((char *)thisa + 2); /*0x7dd6a4*/
                }
                else
                {
                  v45 = 0; /*0x7dd6ac*/
  $NORMAL_STATE$1533: /*0x7dd6af*/
                  v48 = 0; /*0x7dd6af*/
                  if ( *((char *)off_87C590 + 2 * (unsigned __int8)vtable0 + 1) < 0 ) /*0x7dd6c0*/
                  {
                    write_char_1(vtable0, &v52); /*0x7dd6ca*/
                    v8 = (char *)thisa; /*0x7dd6cf*/
                    thisa = (ObjectClass *)((char *)thisa + 1); /*0x7dd6d2*/
                    vtable0 = *v8; /*0x7dd6d6*/
                  }
                  write_char_1(vtable0, &v52); /*0x7dd6e1*/
                }
                break;
              case 'h': /*0x7dd661*/
                v56 |= 0x20u; /*0x7dd687*/
                break;
              case 'l': /*0x7dd661*/
                v56 |= 0x10u; /*0x7dd67e*/
                break;
              case 'w': /*0x7dd661*/
                v56 |= 0x800u; /*0x7dd676*/
                break;
            }
            goto LABEL_171; /*0x7dd679*/
          case 7: /*0x7dd57c*/
            if ( vtable0 > 103 ) /*0x7dd6f3*/
            {
              switch ( vtable0 ) /*0x7dd916*/
              {
                case 'i': /*0x7dd916*/
                  goto LABEL_114; /*0x7dd916*/
                case 'n': /*0x7dd916*/
                  v21 = (unsigned short *)get_int_arg_1(&a2); /*0x7dd9c7*/
                  if ( (v56 & 0x20) != 0 ) /*0x7dd9d1*/
                    *v21 = v52; /*0x7dd9d7*/
                  else
                    *(unsigned int *)v21 = v52; /*0x7dd9df*/
                  v47 = 1; /*0x7dd9e1*/
                  goto LABEL_171; /*0x7dd9e8*/
                case 'o': /*0x7dd916*/
                  v54 = 8; /*0x7dd9b4*/
                  if ( (v56 & 0x80u) != 0 ) /*0x7dd9bb*/
                    (((v56) >> 8) & 0xFF) |= 2u; /*0x7dd9bd*/
                  break;
                default:
                  switch ( vtable0 ) /*0x7dd92d*/
                  {
                    case 'p': /*0x7dd92d*/
                      v53 = 8; /*0x7dd980*/
  LABEL_105:
                      v46 = 7; /*0x7dd987*/
                      break;
                    case 's': /*0x7dd92d*/
                      goto LABEL_55; /*0x7dd932*/
                    case 'u': /*0x7dd92d*/
                      goto LABEL_115; /*0x7dd93a*/
                    case 'x': /*0x7dd92d*/
                      v46 = 39; /*0x7dd949*/
                      break;
                    default:
                      goto LABEL_148; /*0x7dd943*/
                  }
                  v54 = 16; /*0x7dd992*/
                  if ( (v56 & 0x80u) != 0 ) /*0x7dd999*/
                  {
                    v51[0] = 48; /*0x7dd99e*/
                    v50 = 2; /*0x7dd9a4*/
                    v51[1] = v46 + 81; /*0x7dd9ab*/
                  }
                  break;
              }
  LABEL_116:
              if ( (v56 & 0x8000) == 0 ) /*0x7dd9fc*/
              {
                if ( (v56 & 0x20) != 0 ) /*0x7dda0e*/
                {
                  if ( (v56 & 0x40) != 0 ) /*0x7dda18*/
                    IDA_LODWORD(int64_arg_1) = (__int16)get_int_arg_1(&a2); /*0x7dda20*/
                  else
                    IDA_LODWORD(int64_arg_1) = (unsigned __int16)get_int_arg_1(&a2); /*0x7dda2c*/
                }
                else
                {
                  if ( (v56 & 0x40) == 0 ) /*0x7dda39*/
                  {
                    int64_arg_1 = (unsigned int)get_int_arg_1(&a2); /*0x7dda43*/
                    goto LABEL_126; /*0x7dda43*/
                  }
                  IDA_LODWORD(int64_arg_1) = get_int_arg_1(&a2); /*0x7dda3b*/
                }
                int64_arg_1 = (int)int64_arg_1; /*0x7dda23*/
              }
              else
              {
                int64_arg_1 = get_int64_arg_1(&a2); /*0x7dda02*/
              }
  LABEL_126:
              if ( (v56 & 0x40) != 0 && int64_arg_1 < 0 ) /*0x7dda53*/
              {
                IDA_HIDWORD(v23) = -(int)int64_arg_1; /*0x7dda60*/
                (((v56) >> 8) & 0xFF) |= 1u; /*0x7dda64*/
                IDA_LODWORD(v23) = (unsigned __int64)-int64_arg_1 >> 32; /*0x7dda68*/
              }
              else
              {
                v23 = IDA___PAIR64__(int64_arg_1, IDA_HIDWORD(int64_arg_1)); /*0x7dda6e*/
              }
              if ( (v56 & 0x8000) == 0 ) /*0x7dda74*/
                IDA_LODWORD(v23) = 0; /*0x7dda76*/
              if ( v53 >= 0 ) /*0x7dda7d*/
                v56 &= ~8u; /*0x7dda88*/
              else
                v53 = 1; /*0x7dda7f*/
              if ( !v23 ) /*0x7dda90*/
                v50 = 0; /*0x7dda92*/
              p_MbCh = &v39; /*0x7dda99*/
              while ( 1 ) /*0x7dda9c*/
              {
                v24 = v53--; /*0x7dda9c*/
                if ( v24 <= 0 && !v23 ) /*0x7ddaaa*/
                  break; /*0x7ddaaa*/
                v42 = v54; /*0x7ddab4*/
                v25 = IDA___PAIR64__(v23, IDA_HIDWORD(v23)) % v54 + 48; /*0x7ddac4*/
                v26 = IDA___PAIR64__(v23, IDA_HIDWORD(v23)) / v54; /*0x7ddad6*/
                v23 = IDA___PAIR64__(v26, IDA_HIDWORD(v26)); /*0x7ddad6*/
                if ( v25 > 57 ) /*0x7ddad8*/
                  IDA_LOBYTE(v25) = v46 + v25; /*0x7ddada*/
                v27 = p_MbCh--; /*0x7ddadd*/
                *v27 = v25; /*0x7ddae3*/
              }
              v28 = (unsigned int *)(&v39 - p_MbCh++); /*0x7ddaea*/
              v54 = (int)v28; /*0x7ddaf4*/
              if ( (v56 & 0x200) != 0 && (*p_MbCh != 48 || !v28) ) /*0x7ddb03*/
              {
                --p_MbCh; /*0x7ddb05*/
                v18 = (int)v28 + 1; /*0x7ddb08*/
                *p_MbCh = 48; /*0x7ddb0c*/
                goto LABEL_147; /*0x7ddb0c*/
              }
              goto LABEL_148; /*0x7ddb03*/
            }
            if ( vtable0 >= 101 ) /*0x7dd6fc*/
              goto LABEL_65; /*0x7dd6fc*/
            if ( vtable0 > 88 ) /*0x7dd705*/
            {
              if ( vtable0 == 90 ) /*0x7dd7f8*/
              {
                v15 = (__int16 *)get_int_arg_1(&a2); /*0x7dd830*/
                if ( v15 && (v16 = (char *)*((unsigned int *)v15 + 1)) != 0 ) /*0x7dd83f*/
                {
                  if ( (v56 & 0x800) != 0 ) /*0x7dd844*/
                  {
                    v17 = (unsigned int *)((unsigned int)*v15 >> 1); /*0x7dd849*/
                    p_MbCh = v16; /*0x7dd84b*/
                    v54 = (int)v17; /*0x7dd84e*/
                    v48 = 1; /*0x7dd851*/
                    goto LABEL_148; /*0x7dd858*/
                  }
                  v48 = 0; /*0x7dd85d*/
                  p_MbCh = v16; /*0x7dd861*/
                  v18 = *v15; /*0x7dd864*/
                }
                else
                {
                  p_MbCh = (char *)(off_87C4C8); /*0x7dd871*/
                  v18 = strlen( (const char *)(off_87C4C8)); /*0x7dd908*/
                }
                goto LABEL_147; /*0x7dd867*/
              }
              if ( vtable0 == 99 ) /*0x7dd7fd*/
                goto LABEL_69; /*0x7dd7fd*/
              if ( vtable0 != 100 ) /*0x7dd800*/
                goto LABEL_148; /*0x7dd800*/
  LABEL_114:
              v56 |= 0x40u; /*0x7dd9ed*/
  LABEL_115:
              v54 = 10; /*0x7dd9f1*/
              goto LABEL_116; /*0x7dd9f1*/
            }
            switch ( vtable0 ) /*0x7dd70b*/
            {
              case 'X': /*0x7dd70b*/
                goto LABEL_105; /*0x7dd70b*/
              case 'C': /*0x7dd70b*/
                if ( (v56 & 0x830) == 0 ) /*0x7dd7bf*/
                  v56 |= 0x800u; /*0x7dd7c1*/
  LABEL_69:
                if ( (v56 & 0x810) != 0 ) /*0x7dd7ce*/
                {
                  short_arg_0 = get_short_arg_0(&a2); /*0x7dd7d0*/
                  v54 = wctomb(&MbCh, short_arg_0); /*0x7dd7e5*/
                  if ( v54 < 0 ) /*0x7dd7ea*/
                    v47 = 1; /*0x7dd7ec*/
                }
                else
                {
                  MbCh = get_int_arg_1(&a2); /*0x7dd811*/
                  v54 = 1; /*0x7dd817*/
                }
                p_MbCh = &MbCh; /*0x7dd824*/
                break; /*0x7dd827*/
              case 'E': /*0x7dd70b*/
              case 'G': /*0x7dd70b*/
                v44 = 1; /*0x7dd78e*/
                vtable0 += 32; /*0x7dd795*/
  LABEL_65:
                v56 |= 0x40u; /*0x7dd798*/
                p_MbCh = &MbCh; /*0x7dd7a4*/
                if ( v4 >= 0 ) /*0x7dd7a7*/
                {
                  if ( !v4 && vtable0 == 103 ) /*0x7dd87f*/
                    v53 = 1; /*0x7dd881*/
                }
                else
                {
                  v53 = 6; /*0x7dd7ad*/
                }
                a2 += 8; /*0x7dd891*/
                v40 = *(unsigned int *)(a2 - 8); /*0x7dd89a*/
                v41 = *(unsigned int *)(a2 - 4); /*0x7dd8a0*/
                off_87C4D0[0](); /*0x7dd8b2*/
              case 'S': /*0x7dd70b*/
                if ( (v56 & 0x830) == 0 ) /*0x7dd731*/
                  (((v56) >> 8) & 0xFF) |= 8u; /*0x7dd733*/
  LABEL_55:
                v9 = v53; /*0x7dd737*/
                if ( v53 == -1 ) /*0x7dd73d*/
                  v9 = 0x7FFFFFFF; /*0x7dd73f*/
                v10 = (char *)get_int_arg_1(&a2); /*0x7dd748*/
                v11 = v10; /*0x7dd754*/
                p_MbCh = v10; /*0x7dd756*/
                if ( (v56 & 0x810) != 0 ) /*0x7dd759*/
                {
                  if ( !v10 ) /*0x7dd761*/
                  {
                    v11 = (char *)off_87C4CC; /*0x7dd763*/
                    p_MbCh = (char *)off_87C4CC; /*0x7dd769*/
                  }
                  v48 = 1; /*0x7dd76c*/
                  for ( i = v11; ; i += 2 ) /*0x7dd773*/
                  {
                    v13 = v9--; /*0x7dd775*/
                    if ( !v13 || !*(unsigned short *)i ) /*0x7dd780*/
                      break; /*0x7dd780*/
                  }
                  v18 = (i - v11) >> 1; /*0x7dd954*/
                }
                else
                {
                  if ( !v10 ) /*0x7dd95d*/
                  {
                    v11 = (char *)(off_87C4C8); /*0x7dd95f*/
                    p_MbCh = (char *)(off_87C4C8); /*0x7dd965*/
                  }
                  for ( j = v11; ; ++j ) /*0x7dd968*/
                  {
                    v20 = v9--; /*0x7dd96a*/
                    if ( !v20 || !*j ) /*0x7dd971*/
                      break; /*0x7dd971*/
                  }
                  v18 = j - v11; /*0x7dd979*/
                }
  LABEL_147:
                v54 = v18; /*0x7ddb0f*/
                break;
            }
  LABEL_148:
            if ( v47 ) /*0x7ddb16*/
              goto LABEL_171; /*0x7ddb16*/
            v29 = v56; /*0x7ddb1c*/
            if ( (v56 & 0x40) == 0 ) /*0x7ddb22*/
              goto LABEL_157; /*0x7ddb22*/
            if ( (v56 & 0x100) != 0 ) /*0x7ddb27*/
            {
              v51[0] = 45; /*0x7ddb29*/
  LABEL_156:
              v50 = 1; /*0x7ddb43*/
              goto LABEL_157; /*0x7ddb43*/
            }
            if ( (v56 & 1) != 0 ) /*0x7ddb32*/
            {
              v51[0] = 43; /*0x7ddb34*/
              goto LABEL_156; /*0x7ddb38*/
            }
            if ( (v56 & 2) != 0 ) /*0x7ddb3d*/
            {
              v51[0] = 32; /*0x7ddb3f*/
              goto LABEL_156; /*0x7ddb3f*/
            }
  LABEL_157:
            v30 = (unsigned int *)(v49 - v50 - v54); /*0x7ddb4a*/
            if ( (v56 & 0xC) == 0 ) /*0x7ddb56*/
              write_multi_char_1(32, (unsigned int *)(v49 - v50 - v54), &v52); /*0x7ddb5f*/
            write_string_1(v51, (unsigned int *)v50, &v52); /*0x7ddb72*/
            if ( (v29 & 8) != 0 && (v29 & 4) == 0 ) /*0x7ddb82*/
              write_multi_char_1(48, v30, &v52); /*0x7ddb8b*/
            if ( v48 && v54 > 0 ) /*0x7ddb9e*/
            {
              v31 = (wchar_t *)p_MbCh; /*0x7ddba0*/
              v32 = (char *)(v54 - 1); /*0x7ddba3*/
              do /*0x7ddbcf*/
              {
                v33 = *v31++; /*0x7ddba4*/
                v34 = (unsigned int *)wctomb(v43, v33); /*0x7ddbae*/
                if ( (int)v34 <= 0 ) /*0x7ddbb7*/
                  break; /*0x7ddbb7*/
                write_string_1(v43, v34, &v52); /*0x7ddbc2*/
              }
              while ( v32-- ); /*0x7ddbcf*/
            }
            else
            {
              write_string_1(p_MbCh, (unsigned int *)v54, &v52); /*0x7ddbdd*/
            }
            if ( (v56 & 4) != 0 ) /*0x7ddbe9*/
              write_multi_char_1(32, v30, &v52); /*0x7ddbf2*/
  LABEL_171:
            v36 = (char *)thisa; /*0x7ddbfa*/
            thisa = (ObjectClass *)((char *)thisa + 1); /*0x7ddbfd*/
            vtable0 = *v36; /*0x7ddc00*/
            if ( !*v36 ) /*0x7ddc00*/
              return v52; /*0x7ddc04*/
            v3 = v45; /*0x7dd535*/
            v4 = v53; /*0x7dd538*/
            break; /*0x7dd538*/
          default:
            goto LABEL_171;
        }
      }
    }
    return v52; /*0x7ddc0d*/
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

  Block = (wchar_t *)(0); /*0x7ddce5*/
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
        Block = (wchar_t *)(v7); /*0x7dddbd*/
        if ( v7 ) /*0x7dddc0*/
        {
          if ( __crtLCMapStringW(dword_B782A0, 0x200u, aP0, -1, v7, v6, 0) ) /*0x7dddd2*/
            wcscpy( (wchar_t *)(aP0), (const wchar_t *)(Block)); /*0x7ddde4*/
        }
      }
      if ( v9 ) /*0x7dddf0*/
        _unlock(19); /*0x7dddf4*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7dddfd*/
      free( (void *)(Block)); /*0x7dde06*/
      return aP0; /*0x7dde0b*/
    }
    else
    {
      if ( v9 ) /*0x7ddd54*/
        _unlock(19); /*0x7ddd58*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7ddd61*/
      result = (wchar_t *)(aP0); /*0x7ddd67*/
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
    result = (wchar_t *)(aP0); /*0x7ddcea*/
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
unsigned int  ConvertRGB24to556(int a1, unsigned short * a2, __m64 a3, __m64 a4, int a5)
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
        (v8) = ((v8) & ~0xFF) | ((unsigned int)(v6[1]) & 0xFF); /*0x7de442*/
        v31 = 0; /*0x7de445*/
        v32 = *v6; /*0x7de447*/
        if ( !*v7 ) /*0x7de449*/
          break; /*0x7de449*/
        (v31) = ((v31) & ~0xFF) | ((unsigned int)(v6[2]) & 0xFF); /*0x7de44e*/
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
      (v31) = ((v31) & ~0xFF) | ((unsigned int)(v6[2]) & 0xFF); /*0x7de4c2*/
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
unsigned int  ConvertRGB24toRGB565(int a1, unsigned short * a2, __m64 a3, __m64 a4, int a5)
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
        (v8) = ((v8) & ~0xFF) | ((unsigned int)(v6[1]) & 0xFF); /*0x7de782*/
        v31 = 0; /*0x7de785*/
        v32 = *v6; /*0x7de787*/
        if ( !*v7 ) /*0x7de789*/
          break; /*0x7de789*/
        (v31) = ((v31) & ~0xFF) | ((unsigned int)(v6[2]) & 0xFF); /*0x7de78e*/
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
      (v31) = ((v31) & ~0xFF) | ((unsigned int)(v6[2]) & 0xFF); /*0x7de802*/
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
unsigned int  ConvertRGB24to655(int a1, unsigned short * a2, __m64 a3, __m64 a4, int a5)
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
        (v8) = ((v8) & ~0xFF) | ((unsigned int)(v6[1]) & 0xFF); /*0x7deac2*/
        v31 = 0; /*0x7deac5*/
        v32 = *v6; /*0x7deac7*/
        if ( !*v7 ) /*0x7deac9*/
          break; /*0x7deac9*/
        (v31) = ((v31) & ~0xFF) | ((unsigned int)(v6[2]) & 0xFF); /*0x7deace*/
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
      (v31) = ((v31) & ~0xFF) | ((unsigned int)(v6[2]) & 0xFF); /*0x7deb42*/
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
unsigned int  ConvertRGB24to565(int a1, unsigned short * a2, __m64 a3, __m64 a4, int a5)
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
        (v8) = ((v8) & ~0xFF) | ((unsigned int)(v6[1]) & 0xFF); /*0x7dee02*/
        v31 = 0; /*0x7dee05*/
        v32 = *v6; /*0x7dee07*/
        if ( !*v7 ) /*0x7dee09*/
          break; /*0x7dee09*/
        (v31) = ((v31) & ~0xFF) | ((unsigned int)(v6[2]) & 0xFF); /*0x7dee0e*/
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
      (v31) = ((v31) & ~0xFF) | ((unsigned int)(v6[2]) & 0xFF); /*0x7dee82*/
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
    int lk; // edi

    if ( FileHandle < uNumber && (*(unsigned char *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7d0805*/
    {
      _lock_fhandle(FileHandle); /*0x7d0809*/
      lk = _read_lk(FileHandle, DstBuf, MaxCharCount); /*0x7d081d*/
      _unlock_fhandle(FileHandle); /*0x7d081f*/
      return lk; /*0x7d0827*/
    }
    else
    {
      *_errno() = 9; /*0x7d0831*/
      *__doserrno() = 0; /*0x7d083c*/
      return -1; /*0x7d083f*/
    }
}
} // namespace gamemd

// 0x7D0D55
namespace gamemd {
int _write(int FileHandle, CCINIClass * aP1, unsigned int MaxCharCount)
{
    int v3; // edi

    if ( FileHandle < uNumber && (*(unsigned char *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7d0d7b*/
    {
      _lock_fhandle(FileHandle); /*0x7d0d7f*/
      v3 = _write_lk(FileHandle, Buf, MaxCharCount); /*0x7d0d93*/
      _unlock_fhandle(FileHandle); /*0x7d0d95*/
      return v3; /*0x7d0d9d*/
    }
    else
    {
      *_errno() = 9; /*0x7d0da7*/
      *__doserrno() = 0; /*0x7d0db2*/
      return -1; /*0x7d0db5*/
    }
}
} // namespace gamemd

// 0x7D107D
namespace gamemd {
size_t _msize(CCINIClass * Block)
{
    size_t v1; // esi

    _lock(9); /*0x7d1080*/
    if ( __sbh_find_block((int)Block) ) /*0x7d108a*/
    {
      v1 = *((unsigned int *)Block - 1) - 9; /*0x7d109a*/
      _unlock(9); /*0x7d109d*/
    }
    else
    {
      _unlock(9); /*0x7d10a7*/
      return HeapSize(hHeap, 0, Block); /*0x7d10bc*/
    }
    return v1; /*0x7d10c0*/
}
} // namespace gamemd

// 0x7D12E6
namespace gamemd {
unsigned char * strncnt(const unsigned char * String, int Count)
{
  unsigned char *v2; // eax
  int v3; // ecx

  v2 = (unsigned char *)(String); /*0x7d12ea*/
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
    DWORD *v0; // eax
    DWORD *v1; // esi
    DWORD CurrentThreadId; // eax

    _mtinitlocks(); /*0x7d1387*/
    dwTlsIndex = TlsAlloc(); /*0x7d1395*/
    if ( dwTlsIndex == -1 ) /*0x7d139a*/
      return 0; /*0x7d139a*/
    v0 = (DWORD *)calloc(1u, 0x74u); /*0x7d13a0*/
    v1 = v0; /*0x7d13a5*/
    if ( !v0 || !TlsSetValue(dwTlsIndex, v0) ) /*0x7d13b4*/
      return 0; /*0x7d13d6*/
    _initptd(v1); /*0x7d13bf*/
    CurrentThreadId = GetCurrentThreadId(); /*0x7d13c5*/
    v1[1] = -1; /*0x7d13cb*/
    *v1 = CurrentThreadId; /*0x7d13d1*/
    return 1; /*0x7d13d4*/
}
} // namespace gamemd

// 0x7D13F8
namespace gamemd {
int _initptd(int a1)
{
    *(unsigned int *)(a1 + 80) = (unsigned int)&unk_87CB20; /*0x7d13fc*/
    *(unsigned int *)(a1 + 20) = 1; /*0x7d1403*/
    return a1; /*0x7d140a*/
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
    int v2; // edi
    char v3; // bl
    int v4; // eax
    int v6; // ecx
    double v7; // st7
    unsigned char v8[12]; // [esp+Ch] [ebp-18h] BYREF
    double v9; // [esp+18h] [ebp-Ch] BYREF
    int v10; // [esp+20h] [ebp-4h] BYREF

    v2 = 0; /*0x7d1533*/
    v3 = __strgtold12(v8, &v10, a2, 0, 0, 0, 0); /*0x7d153f*/
    if ( (v3 & 4) != 0 ) /*0x7d1547*/
    {
      v2 = 512; /*0x7d1549*/
      v9 = 0.0; /*0x7d154e*/
    }
    else
    {
      v4 = Fltin2_Helper((int)v8, (int)&v9); /*0x7d155e*/
      if ( (v3 & 2) != 0 || v4 == 1 ) /*0x7d156d*/
        v2 = 128; /*0x7d156f*/
      if ( (v3 & 1) != 0 || v4 == 2 ) /*0x7d157c*/
        v2 |= 0x100u; /*0x7d157e*/
    }
    v6 = v10 - a2; /*0x7d158a*/
    v7 = v9; /*0x7d158d*/
    *(unsigned int *)a1 = v2; /*0x7d1590*/
    *(double *)(a1 + 16) = v7; /*0x7d1593*/
    *(unsigned int *)(a1 + 4) = v6; /*0x7d1597*/
    return a1; /*0x7d1596*/
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
      *result = (&dword_87C7B4)[2 * v1]; /*0x7d1661*/
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
    if ( --(((_iobuf_msvc6 *)Stream)->_cnt) < 0 ) /*0x7d216d*/
      return _filbuf( (FILE *)(Stream)); /*0x7d217c*/
    return *(unsigned __int8 *)Stream->_ptr++; /*0x7d217a*/
}
} // namespace gamemd

// 0x7D2183
namespace gamemd {
int _un_inc(int Character, FILE * Stream)
{
    int result; // eax

    if ( Character != -1 ) /*0x7d2188*/
      return ungetc_0(Character, Stream); /*0x7d2192*/
    return result; /*0x7d2199*/
}
} // namespace gamemd

// 0x7D219A
namespace gamemd {
int _whiteout(unsigned int * a1, FILE * Stream)
{
    int v2; // edi

    do /*0x7d21ae*/
    {
      ++*a1; /*0x7d21a4*/
      v2 = fgetc_0( (FILE *)(Stream)); /*0x7d21ab*/
    }
    while ( isspace(v2) ); /*0x7d21ae*/
    return v2; /*0x7d21bb*/
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
int get_int_arg_0(ObjectClass * a1)
{
    *a1 += 4; /*0x7d2999*/
    return *(unsigned int *)(*a1 - 4); /*0x7d29a1*/
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
    int v7; // ebx
    int v8; // esi
    int v9; // ecx
    int v10; // eax
    unsigned char v12[8]; // [esp+4h] [ebp-24h] BYREF
    int v13; // [esp+Ch] [ebp-1Ch]
    int v14; // [esp+14h] [ebp-14h]
    int v15; // [esp+18h] [ebp-10h]
    int v16; // [esp+20h] [ebp-8h]
    int v17; // [esp+30h] [ebp+8h]

    v7 = a1 - 1900; /*0x7d29bc*/
    if ( a1 - 1900 < 70 || v7 > 138 ) /*0x7d29d1*/
      return -1; /*0x7d2a6e*/
    v8 = a3 + (&dword_87D5B0)[a2]; /*0x7d29e3*/
    if ( (v7 & 3) == 0 && a2 > 2 ) /*0x7d29ee*/
      ++v8; /*0x7d29f0*/
    __tzset(); /*0x7d29f1*/
    v16 = v8; /*0x7d2a06*/
    v15 = a1 - 1900; /*0x7d2a0b*/
    v13 = a4; /*0x7d2a19*/
    v14 = a2 - 1; /*0x7d2a33*/
    v9 = dword_87CA60 + 60 * (a5 + 60 * (a4 + 24 * (((a1 - 1901) >> 2) + v8 + 365 * (a1 - 1900)))) + a6 + 2085978496; /*0x7d2a38*/
    v17 = v9; /*0x7d2a3f*/
    if ( a7 == 1 || a7 == -1 && dword_87CA64 && (v10 = _isindst((int)v12), v9 = v17, v10) ) /*0x7d2a62*/
      v9 += dword_87CA68; /*0x7d2a64*/
    return v9; /*0x7d2a71*/
}
} // namespace gamemd

// 0x7D2A74
namespace gamemd {
int _close(int FileHandle)
{
    int v1; // edi

    if ( FileHandle < uNumber && (*(unsigned char *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7d2a9a*/
    {
      _lock_fhandle(FileHandle); /*0x7d2a9e*/
      v1 = _close_lk(FileHandle); /*0x7d2aaa*/
      _unlock_fhandle(FileHandle); /*0x7d2aac*/
      return v1; /*0x7d2ab4*/
    }
    else
    {
      *_errno() = 9; /*0x7d2abe*/
      *__doserrno() = 0; /*0x7d2ac9*/
      return -1; /*0x7d2acc*/
    }
}
} // namespace gamemd

// 0x7D2AD1
namespace gamemd {
int _close_lk(int FileHandle)
{
    int osfhandle; // edi
    void *v2; // eax
    DWORD LastError; // edi

    if ( _get_osfhandle(FileHandle) == -1 /*0x7d2b0b*/
      || (FileHandle == 1 || FileHandle == 2) && (osfhandle = _get_osfhandle(2), _get_osfhandle(1) == osfhandle)
      || (v2 = (void *)_get_osfhandle(FileHandle), CloseHandle(v2)) )
    {
      LastError = 0; /*0x7d2b1f*/
    }
    else
    {
      LastError = GetLastError(); /*0x7d2b1b*/
    }
    _free_osfhnd(FileHandle); /*0x7d2b22*/
    *(unsigned char *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) = 0; /*0x7d2b3a*/
    if ( !LastError ) /*0x7d2b41*/
      return 0; /*0x7d2b4f*/
    _dosmaperr(LastError); /*0x7d2b44*/
    return -1; /*0x7d2b51*/
}
} // namespace gamemd

// 0x7D2B54
namespace gamemd {
int _freebuf(MouseClass * a1)
{
    int result; // eax

    result = *(unsigned int *)(a1 + 12); /*0x7d2b59*/
    if ( (result & 0x83) != 0 && (result & 8) != 0 ) /*0x7d2b62*/
    {
      free(*(void **)(a1 + 8)); /*0x7d2b67*/
      *(unsigned short *)(a1 + 12) &= 0xFBF7u; /*0x7d2b6c*/
      *(unsigned int *)a1 = 0; /*0x7d2b75*/
      *(unsigned int *)(a1 + 8) = 0; /*0x7d2b77*/
      *(unsigned int *)(a1 + 4) = 0; /*0x7d2b7a*/
      return 0; /*0x7d2b72*/
    }
    return result; /*0x7d2b7d*/
}
} // namespace gamemd

// 0x7D2B7F
namespace gamemd {
int _stbuf(int a1)
{
    int v1; // eax
    int *v2; // edi
    void *v3; // eax
    int v4; // edi

    if ( !_isatty(*(unsigned int *)(a1 + 16)) ) /*0x7d2b8f*/
      return 0; /*0x7d2b8f*/
    if ( (FILE *)a1 == &File ) /*0x7d2b97*/
    {
      v1 = 0; /*0x7d2b99*/
    }
    else
    {
      if ( (void *)a1 != &unk_87BF90 ) /*0x7d2ba3*/
        return 0; /*0x7d2c08*/
      v1 = 1; /*0x7d2ba7*/
    }
    ++dword_B781C0; /*0x7d2ba8*/
    if ( (*(unsigned short *)(a1 + 12) & 0x10C) != 0 ) /*0x7d2bb4*/
      return 0; /*0x7d2bb4*/
    v2 = (int *)(4 * v1 + 12026576); /*0x7d2bc0*/
    if ( (&dword_B782D0)[v1] || (v3 = malloc(0x1000u), (*v2 = (int)v3) != 0) ) /*0x7d2bd9*/
    {
      v4 = *v2; /*0x7d2bee*/
      *(unsigned int *)(a1 + 24) = 4096; /*0x7d2bf0*/
      *(unsigned int *)(a1 + 8) = v4; /*0x7d2bf3*/
      *(unsigned int *)a1 = v4; /*0x7d2bf6*/
      *(unsigned int *)(a1 + 4) = 4096; /*0x7d2bf8*/
    }
    else
    {
      *(unsigned int *)(a1 + 8) = a1 + 20; /*0x7d2be0*/
      *(unsigned int *)a1 = a1 + 20; /*0x7d2be3*/
      *(unsigned int *)(a1 + 24) = 2; /*0x7d2be6*/
      *(unsigned int *)(a1 + 4) = 2; /*0x7d2be9*/
    }
    *(unsigned short *)(a1 + 12) |= 0x1102u; /*0x7d2bfb*/
    return 1; /*0x7d2c06*/
}
} // namespace gamemd

// 0x7D2C0C
namespace gamemd {
int _ftbuf(int a1, int a2)
{
    int result; // eax

    if ( a1 ) /*0x7d2c12*/
    {
      if ( (*(unsigned char *)(a2 + 13) & 0x10) != 0 ) /*0x7d2c1c*/
      {
        result = _flush((unsigned int *)a2); /*0x7d2c1f*/
        *(unsigned char *)(a2 + 13) &= 0xEEu; /*0x7d2c24*/
        *(unsigned int *)(a2 + 24) = 0; /*0x7d2c28*/
        *(unsigned int *)a2 = 0; /*0x7d2c2c*/
        *(unsigned int *)(a2 + 8) = 0; /*0x7d2c2f*/
      }
    }
    return result; /*0x7d2c34*/
}
} // namespace gamemd

// 0x7D2E6E
namespace gamemd {
unsigned int * E4Recv_7D2E6E::sub_7D2E6E()
{
    this->q004 = 0; /*0x7d2e70*/
    this->q008 = 0; /*0x7d2e74*/
    this->AbstractClass = (void*)&exception_vftable; /*0x7d2e78*/
    return &this->AbstractClass; /*0x7d2e7e*/
}
} // namespace gamemd

// 0x7D2E7F
namespace gamemd {
ObjectClass * E4Recv_7D2E7F::sub_7D2E7F(void * Block, char a2)
{
    Exception::Destructor((Exception *)this); /*0x7d2e82*/
    if ( (a2 & 1) != 0 ) /*0x7d2e8c*/
      RA2_OPDEL(this); /*0x7d2e8f*/
    return (ObjectClass *)this; /*0x7d2e97*/
}
} // namespace gamemd

// 0x7D2E9B
namespace gamemd {
exception * E4Recv_7D2E9B::__0exception_QAE_ABQBD_Z(const char ** a2)
{
    int v3; // eax
    char *v4; // eax

    *(unsigned int *)this = (unsigned int)(void*)&exception_vftable; /*0x7d2ea3*/
    v3 = strlen(*a2); /*0x7d2eab*/
    v4 = (char *)RA2_OPNEW(v3 + 1); /*0x7d2eb2*/
    *((unsigned int *)this + 1) = (unsigned int)v4; /*0x7d2eb8*/
    if ( v4 ) /*0x7d2ebe*/
      strcpy( (char *)(v4), *a2); /*0x7d2ec3*/
    *((unsigned int *)this + 2) = 1; /*0x7d2eca*/
    return (exception *)this; /*0x7d2ed3*/
}
} // namespace gamemd

// 0x7D2ED8
namespace gamemd {
exception * E4Recv_7D2ED8::__0exception_QAE_ABV0__Z(const struct exception * a2)
{
    int v3; // eax
    int v4; // eax
    char *v5; // eax

    *(unsigned int *)this = (unsigned int)(void*)&exception_vftable; /*0x7d2ee0*/
    v3 = *((unsigned int *)a2 + 2); /*0x7d2ee6*/
    *((unsigned int *)this + 2) = v3; /*0x7d2eeb*/
    if ( v3 ) /*0x7d2eee*/
    {
      v4 = strlen(*((const char **)a2 + 1)); /*0x7d2ef3*/
      v5 = (char *)RA2_OPNEW(v4 + 1); /*0x7d2efa*/
      *((unsigned int *)this + 1) = (unsigned int)v5; /*0x7d2f00*/
      if ( v5 ) /*0x7d2f06*/
        strcpy( (char *)(v5), *((const char **)a2 + 1)); /*0x7d2f0c*/
    }
    else
    {
      *((unsigned int *)this + 1) = *((unsigned int *)a2 + 1); /*0x7d2f18*/
    }
    return (exception *)this; /*0x7d2f1d*/
}
} // namespace gamemd

// 0x7D2F22
namespace gamemd {
ObjectClass * E4Recv_7D2F22::__4exception_QAEAAV0_ABV0__Z(struct exception * a2)
{
    if ( this != a2 ) /*0x7d2f29*/
    {
      Exception::Destructor(this); /*0x7d2f2b*/
      __0exception_QAE_ABV0__Z(this, a2); /*0x7d2f36*/
    }
    return (ObjectClass *)this; /*0x7d2f3d*/
}
} // namespace gamemd

// 0x7D2F57
namespace gamemd {
const char * E4Recv_7D2F57::_what_exception__UBEPBDXZ()
{
    const char *result; // eax

    result = (const char *)*((unsigned int *)this + 1); /*0x7d2f57*/
    if ( !result ) /*0x7d2f5c*/
      return "Unknown exception"; /*0x7d2f5e*/
    return result; /*0x7d2f63*/
}
} // namespace gamemd

// 0x7D2F64
namespace gamemd {
void  __noreturn _CxxThrowException_8(void * pExceptionObject, _ThrowInfo * pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy( (void *)(dwExceptionCode), (const void *)(&unk_7F9928), sizeof(dwExceptionCode)); /*0x7d2f7a*/
  dwExceptionCode[6] = (DWORD)pExceptionObject; /*0x7d2f7c*/
  dwExceptionCode[7] = (DWORD)pThrowInfo; /*0x7d2f82*/
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]); /*0x7d2f92*/
}
} // namespace gamemd

// 0x7D2F9E
namespace gamemd {
short sub_7D2F9E(wchar_t WCh, FILE * Stream)
{
    __int16 v2; // si

    _lock_file(Stream); /*0x7d2fa3*/
    v2 = _putwc_lk(WCh, Stream); /*0x7d2fb9*/
    _unlock_file(Stream); /*0x7d2fbb*/
    return v2; /*0x7d2fc6*/
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
    v4 = (void *)(0); /*0x7d3394*/
    if ( v2 <= 0xFFFFFFE0 ) /*0x7d3399*/
    {
      if ( v3 <= dword_87C584 ) /*0x7d33a1*/
      {
        _lock(9); /*0x7d33a5*/
        v4 = __sbh_alloc_block(v3); /*0x7d33b2*/
        _unlock(9); /*0x7d33b4*/
        if ( v4 ) /*0x7d33be*/
        {
          memset( (void *)(v4), 0, v3); /*0x7d33ef*/
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
    int v0; // ebx
    int i; // edi
    int v2; // esi
    int v3; // eax

    v0 = 0; /*0x7d3405*/
    _lock(2); /*0x7d3407*/
    for ( i = 3; i < (int)Count; ++i ) /*0x7d3416*/
    {
      v2 = 4 * i; /*0x7d3420*/
      v3 = *(unsigned int *)(4 * i + dword_B78BC4); /*0x7d3423*/
      if ( v3 ) /*0x7d3428*/
      {
        if ( (*(unsigned char *)(v3 + 12) & 0x83) != 0 && fclose(*(FILE **)(4 * i + dword_B78BC4)) != -1 ) /*0x7d343a*/
          ++v0; /*0x7d343c*/
        if ( i >= 20 ) /*0x7d3440*/
        {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(unsigned int *)(v2 + dword_B78BC4) + 32)); /*0x7d344e*/
          free(*(void **)(v2 + dword_B78BC4)); /*0x7d345c*/
          *(unsigned int *)(v2 + dword_B78BC4) = 0; /*0x7d3467*/
        }
      }
    }
    _unlock(2); /*0x7d3477*/
    return v0; /*0x7d347f*/
}
} // namespace gamemd

// 0x7D362F
namespace gamemd {
UINT getSystemCP(UINT a1)
{
    UINT result; // eax

    result = a1; /*0x7d362f*/
    dword_B782D8 = 0; /*0x7d3633*/
    switch ( a1 ) /*0x7d363d*/
    {
      case 0xFFFFFFFE: /*0x7d363d*/
        dword_B782D8 = 1; /*0x7d363f*/
        return GetOEMCP(); /*0x7d3649*/
      case 0xFFFFFFFD: /*0x7d363d*/
        dword_B782D8 = 1; /*0x7d3654*/
        return GetACP(); /*0x7d365e*/
      case 0xFFFFFFFC: /*0x7d363d*/
        dword_B782D8 = 1; /*0x7d366e*/
        return CodePage; /*0x7d3669*/
    }
    return result; /*0x7d3678*/
}
} // namespace gamemd

// 0x7D3679
namespace gamemd {
int CPtoLCID(int a1)
{
    switch ( a1 ) /*0x7d3682*/
    {
      case 932: /*0x7d3682*/
        return 1041; /*0x7d36a6*/
      case 936: /*0x7d3682*/
        return 2052; /*0x7d36a0*/
      case 949: /*0x7d3682*/
        return 1042; /*0x7d369a*/
      case 950: /*0x7d3682*/
        return 1028; /*0x7d3694*/
    }
    return 0; /*0x7d3693*/
}
} // namespace gamemd

// 0x7D3982
namespace gamemd {
wint_t towupper(wint_t C)
{
    int v1; // ebx
    wint_t result; // ax
    wint_t Ca; // [esp+8h] [ebp+4h]

    v1 = 0; /*0x7d3983*/
    if ( dword_B782A0 ) /*0x7d398b*/
    {
      InterlockedIncrement(&dword_B78BA4); /*0x7d39ac*/
      if ( dword_B78BA0 ) /*0x7d39be*/
      {
        InterlockedDecrement(&dword_B78BA4); /*0x7d39c1*/
        _lock(19); /*0x7d39c5*/
        v1 = 1; /*0x7d39cd*/
      }
      Ca = towupper_0(C); /*0x7d39da*/
      if ( v1 ) /*0x7d39de*/
        _unlock(19); /*0x7d39e2*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7d39eb*/
      return Ca; /*0x7d39ed*/
    }
    else
    {
      result = C; /*0x7d398d*/
      if ( C >= 0x61u && C <= 0x7Au ) /*0x7d399b*/
        return C - 32; /*0x7d399d*/
    }
    return result; /*0x7d39a2*/
}
} // namespace gamemd

// 0x7D39F6
namespace gamemd {
wint_t towupper_0(wint_t C)
{
    int v1; // ecx
    wint_t result; // ax
    bool v3; // zf
    WCHAR DestStr; // [esp+0h] [ebp-2h] BYREF

    DestStr = (((unsigned int)(v1) >> 16) & 0xFFFF); /*0x7d39f9*/
    result = C; /*0x7d39fa*/
    if ( C != 0xFFFF ) /*0x7d3a01*/
    {
      if ( dword_B782A0 ) /*0x7d3a0f*/
      {
        if ( C >= 0x100u || iswctype(C, 2u) ) /*0x7d3a2d*/
        {
          v3 = __crtLCMapStringW(dword_B782A0, 0x200u, &C, 1, &DestStr, 1, 0) == 0; /*0x7d3a5f*/
          result = C; /*0x7d3a61*/
          if ( !v3 ) /*0x7d3a65*/
            return DestStr; /*0x7d3a67*/
        }
        else
        {
          return C; /*0x7d3a38*/
        }
      }
      else if ( C >= 0x61u && C <= 0x7Au ) /*0x7d3a1b*/
      {
        return C - 32; /*0x7d3a1d*/
      }
    }
    return result; /*0x7d3a06*/
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
    int result; // eax

    if ( MbCh != -1 ) /*0x7d45a8*/
      return _ungetwc_lk(MbCh, a2); /*0x7d45b2*/
    return result; /*0x7d45b9*/
}
} // namespace gamemd

// 0x7D45BA
namespace gamemd {
wint_t _whiteout_0(unsigned int * a1, FILE * File)
{
    wint_t v2; // di

    do /*0x7d45ce*/
    {
      ++*a1; /*0x7d45c4*/
      v2 = fgetwc(File); /*0x7d45cb*/
    }
    while ( iswspace(v2) ); /*0x7d45ce*/
    return v2; /*0x7d45dc*/
}
} // namespace gamemd

// 0x7D45DF
namespace gamemd {
int _mbsnbicoll(const unsigned char * Str1, const unsigned char * Str2, size_t MaxCount)
{
    int v4; // eax

    if ( !MaxCount ) /*0x7d45e6*/
      return 0; /*0x7d45e8*/
    v4 = __crtCompareStringA(dword_B78A64, 1u, (PCNZCH)Str1, MaxCount, (PCNZCH)Str2, MaxCount, dword_B78840); /*0x7d4606*/
    if ( v4 ) /*0x7d4610*/
      return v4 - 2; /*0x7d4619*/
    else
      return 0x7FFFFFFF; /*0x7d4612*/
}
} // namespace gamemd

// 0x7D461E
namespace gamemd {
int __wtomb_environ()
{
    int v0; // esi
    const WCHAR *v1; // eax
    size_t v2; // eax
    int v3; // ebp
    CHAR *v4; // eax
    char *Str; // [esp+10h] [ebp-4h]

    v0 = dword_B781EC; /*0x7d4622*/
    v1 = *(const WCHAR **)dword_B781EC; /*0x7d462b*/
    if ( !*(unsigned int *)dword_B781EC ) /*0x7d462b*/
      return 0; /*0x7d467f*/
    while ( 1 ) /*0x7d4641*/
    {
      v2 = WideCharToMultiByte( 1u, 0, (LPCWCH)(v1), -1, 0, 0, 0, 0); /*0x7d4641*/
      v3 = v2; /*0x7d4643*/
      if ( !v2 ) /*0x7d4647*/
        break; /*0x7d4647*/
      v4 = (CHAR *)malloc(v2); /*0x7d464a*/
      Str = (char *)(v4); /*0x7d4652*/
      if ( !v4 || !WideCharToMultiByte( 1u, 0, *(LPCWCH *)v0, -1, (LPSTR)(v4), v3, 0, 0) ) /*0x7d4663*/
        break; /*0x7d4663*/
      __crtsetenv(Str, 0); /*0x7d466e*/
      v1 = *(const WCHAR **)(v0 + 4); /*0x7d4673*/
      v0 += 4; /*0x7d4676*/
      if ( !v1 ) /*0x7d467d*/
        return 0; /*0x7d467d*/
    }
    return -1; /*0x7d4681*/
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
    char *v4; // ecx
    unsigned int v5; // esi
    char *v6; // edi
    int v7; // ebx
    bool v8; // cc
    char v9; // bl
    char *v10; // ecx
    char result; // al

    v4 = a2; /*0x7d46c0*/
    if ( a4 ) /*0x7d46c6*/
    {
      *a2 = 45; /*0x7d46cb*/
      v4 = a2 + 1; /*0x7d46ce*/
      v5 = -a1; /*0x7d46cf*/
    }
    else
    {
      v5 = a1; /*0x7d46d3*/
    }
    v6 = v4; /*0x7d46d6*/
    do /*0x7d46fc*/
    {
      v7 = v5 % a3; /*0x7d46e1*/
      v8 = v5 % a3 <= 9; /*0x7d46e8*/
      v5 /= a3; /*0x7d46eb*/
      if ( v8 ) /*0x7d46ed*/
        v9 = v7 + 48; /*0x7d46f4*/
      else
        v9 = v7 + 87; /*0x7d46ef*/
      *v4++ = v9; /*0x7d46f7*/
    }
    while ( v5 ); /*0x7d46fc*/
    *v4 = 0; /*0x7d46fe*/
    v10 = v4 - 1; /*0x7d4701*/
    do /*0x7d470e*/
    {
      result = *v10; /*0x7d4704*/
      *v10 = *v6; /*0x7d4706*/
      *v6 = result; /*0x7d4708*/
      --v10; /*0x7d470a*/
      ++v6; /*0x7d470b*/
    }
    while ( v6 < v10 ); /*0x7d470e*/
    return result; /*0x7d4710*/
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
  x64toa_20(Value, ((unsigned int)((unsigned __int64)(Value) >> 32)), Buffer, Radix, v3); /*0x7d4781*/
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
    void (__cdecl *v1)(int); // esi
    int *v2; // eax
    int v3; // edi
    int v5; // [esp-4h] [ebp-10h]

    _lock(1); /*0x7d49b5*/
    if ( CtrlType ) /*0x7d49c0*/
    {
      v1 = (void (__cdecl *)(int))dword_B782E0; /*0x7d49d1*/
      v2 = &dword_B782E0; /*0x7d49d7*/
      v5 = 21; /*0x7d49dc*/
    }
    else
    {
      v1 = (void (__cdecl *)(int))dword_B782DC; /*0x7d49c2*/
      v2 = &dword_B782DC; /*0x7d49c8*/
      v5 = 2; /*0x7d49cd*/
    }
    v3 = v5; /*0x7d49e0*/
    if ( v1 ) /*0x7d49e1*/
    {
      if ( v1 == (void (__cdecl *)(int))1 ) /*0x7d49f0*/
      {
        _unlock(1); /*0x7d4a02*/
      }
      else
      {
        *v2 = 0; /*0x7d49f2*/
        _unlock(1); /*0x7d49f6*/
        v1(v3); /*0x7d49fc*/
      }
      return 1; /*0x7d4a08*/
    }
    else
    {
      _unlock(1); /*0x7d49e4*/
      return 0; /*0x7d49ea*/
    }
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
int _isindst(CampaignScore * a1)
{
    int v1; // esi

    _lock(11); /*0x7d4fae*/
    v1 = _isindst_0(a1); /*0x7d4fbe*/
    _unlock(11); /*0x7d4fc0*/
    return v1; /*0x7d4fca*/
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

  v1 = *(unsigned int *)aP0;
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
  v11 = (int *)(dword_87D580); /*0x7d533e*/
  v7->tm_yday = v9 / 86400; /*0x7d5343*/
  v12 = v9 % 86400; /*0x7d534c*/
  if ( !v2 ) /*0x7d5350*/
    v11 = (int *)(dword_87D5B4); /*0x7d5352*/
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
    DWORD FileAttributesA; // eax
    DWORD LastError; // eax

    FileAttributesA = GetFileAttributesA(FileName); /*0x7d53c6*/
    if ( FileAttributesA == -1 ) /*0x7d53cf*/
    {
      LastError = GetLastError(); /*0x7d53d1*/
      _dosmaperr(LastError); /*0x7d53d8*/
      return -1; /*0x7d53e1*/
    }
    if ( (FileAttributesA & 1) != 0 && (AccessMode & 2) != 0 ) /*0x7d53eb*/
    {
      *_errno() = 13; /*0x7d53f2*/
      *__doserrno() = 5; /*0x7d53fd*/
      return -1; /*0x7d5403*/
    }
    return 0; /*0x7d53e1*/
}
} // namespace gamemd

// 0x7D5408
namespace gamemd {
char * _strdup(INIClass * aP0)
{
  int v1; // eax
  char *v2; // eax

  if ( aP0 && (v1 = strlen( (const char *)(aP0)), (v2 = (char *)malloc(v1 + 1)) != 0) ) /*0x7d5422*/
    return strcpy( (char *)(v2), (const char *)(aP0)); /*0x7d5426*/
  else
    return 0; /*0x7d542f*/
}
} // namespace gamemd

// 0x7D5433
namespace gamemd {
int _open(const char * FileName, int OpenFlag, ...)
{
    int v3; // [esp+Ch] [ebp+Ch]
    va_list va; // [esp+10h] [ebp+10h] BYREF

    va_start(va, OpenFlag);
    v3 = va_arg(va, unsigned int); /*0x7d5433*/
    return _sopen(FileName, OpenFlag, 64, v3); /*0x7d5449*/
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
    v9 = ((unsigned char *)&byte_7F9948)[v6 + v8++]; /*0x7d583a*/
    *v4 = v9; /*0x7d5842*/
    v4[4] = ((unsigned char *)&byte_7F995F)[v8 + v7]; /*0x7d584b*/
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
LONG _XcptFilter(ObjectClass * a1, struct _EXCEPTION_POINTERS * ExceptionInfo)
{
    unsigned int *v2; // esi
    int *v3; // eax
    void (__cdecl *v4)(int); // ebx
    int v6; // ecx
    int v7; // edx
    int v8; // ecx
    int v9; // eax
    int v10; // edi
    int v11; // [esp+8h] [ebp-4h]

    v2 = _getptd(); /*0x7d58fb*/
    v3 = (int *)xcptlookup(a1, v2[20]); /*0x7d5903*/
    if ( !v3 ) /*0x7d590c*/
      return UnhandledExceptionFilter(ExceptionInfo); /*0x7d590c*/
    v4 = (void (__cdecl *)(int))v3[2]; /*0x7d5912*/
    if ( !v4 ) /*0x7d591a*/
      return UnhandledExceptionFilter(ExceptionInfo); /*0x7d5a24*/
    if ( v4 == (void (__cdecl *)(int))5 ) /*0x7d5923*/
    {
      v3[2] = 0; /*0x7d5925*/
      return 1; /*0x7d592b*/
    }
    else
    {
      if ( v4 != (void (__cdecl *)(int))1 ) /*0x7d5934*/
      {
        v11 = v2[21]; /*0x7d593d*/
        v2[21] = ExceptionInfo; /*0x7d5943*/
        v6 = v3[1]; /*0x7d5946*/
        if ( v6 == 8 ) /*0x7d594c*/
        {
          v7 = dword_87CB98; /*0x7d5952*/
          if ( dword_87CB98 < dword_87CB98 + dword_87CB9C ) /*0x7d5963*/
          {
            v8 = 12 * dword_87CB98; /*0x7d5968*/
            do /*0x7d5987*/
            {
              v8 += 12; /*0x7d596e*/
              *(unsigned int *)(v8 + v2[20] - 4) = 0; /*0x7d5971*/
              ++v7; /*0x7d5982*/
            }
            while ( v7 < dword_87CB98 + dword_87CB9C ); /*0x7d5987*/
          }
          v9 = *v3; /*0x7d598c*/
          v10 = v2[22]; /*0x7d598e*/
          switch ( v9 ) /*0x7d5996*/
          {
            case -1073741682: /*0x7d5996*/
              v2[22] = 131; /*0x7d5998*/
              break;
            case -1073741680: /*0x7d5996*/
              v2[22] = 129; /*0x7d59a8*/
              break;
            case -1073741679: /*0x7d5996*/
              v2[22] = 132; /*0x7d59b8*/
              break;
            case -1073741677: /*0x7d5996*/
              v2[22] = 133; /*0x7d59c8*/
              break;
            case -1073741683: /*0x7d5996*/
              v2[22] = 130; /*0x7d59d8*/
              break;
            case -1073741681: /*0x7d5996*/
              v2[22] = 134; /*0x7d59e8*/
              break;
            case -1073741678: /*0x7d5996*/
              v2[22] = 138; /*0x7d59f8*/
              break;
          }
          v4(8); /*0x7d5a04*/
          v2[22] = v10; /*0x7d5a07*/
        }
        else
        {
          v3[2] = 0; /*0x7d5a0e*/
          v4(v6); /*0x7d5a13*/
        }
        v2[21] = v11; /*0x7d5a19*/
      }
      return -1; /*0x7d5a1c*/
    }
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
  return (int *)result; /*0x7d5f30*/
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
  result = (int *)(dword_87CBA8); /*0x7d5f3f*/
  do /*0x7d5f51*/
  {
    if ( NumberOfBytesWritten == *result ) /*0x7d5f46*/
      break; /*0x7d5f46*/
    result += 2; /*0x7d5f48*/
    ++v1; /*0x7d5f4b*/
  }
  while ( (int)result < (int)&unk_87CC38 ); /*0x7d5f51*/
  v3 = 2 * v1; /*0x7d5f56*/
  if ( NumberOfBytesWritten == (&dword_87CBA8)[2 * v1] )
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
        strcpy( (char *)(Filename), "<program name unknown>"); /*0x7d5fb4*/
      v4 = (char *)(Filename); /*0x7d5fc3*/
      if ( (unsigned int)(strlen( (const char *)(Filename)) + 1) > 0x3C ) /*0x7d5fd3*/
      {
        v4 = (char *)&savedregs + strlen( (const char *)(Filename)) - 479; /*0x7d5fee*/
        strncpy( (char *)(v4), "...", 3u); /*0x7d5ff6*/
      }
      strcpy( (char *)(Destination), "Runtime Error!\n\nProgram: ");
      strcat( (char *)(Destination), (const char *)(v4)); /*0x7d6017*/
      strcat( (char *)(Destination), (const char *)(asc_83F318)); /*0x7d6028*/
      strcat( (char *)(Destination), (&off_87CBAC)[v3]); /*0x7d603a*/
      return (int *)__crtMessageBoxA(Destination, "Microsoft Visual C++ Runtime Library", 73744); /*0x7d6050*/
    }
  }
  return result; /*0x7d6082*/
}
} // namespace gamemd

// 0x7D6146
namespace gamemd {
int _get_lc_time(CCINIClass * a1)
{
    int v2; // edi
    int v3; // edi
    int v4; // edi
    int v5; // edi
    int v6; // edi
    int v7; // edi
    int v8; // edi
    int v9; // edi
    int v10; // edi
    int v11; // edi
    int v12; // edi
    int v13; // edi
    int v14; // edi
    int v15; // edi
    int v16; // edi
    int v17; // edi
    int v18; // edi
    int v19; // edi
    int v20; // edi
    int v21; // edi
    int v22; // edi
    int v23; // edi
    int v24; // edi
    int v25; // edi
    int v26; // edi
    int v27; // edi
    int v28; // edi
    int v29; // edi
    int v30; // edi
    int v31; // edi
    int v32; // edi
    int v33; // edi
    int v34; // edi
    int v35; // edi
    int v36; // edi
    int v37; // edi
    int v38; // edi
    int v39; // edi
    int v40; // edi
    int v41; // edi
    int v42; // edi
    int v43; // edi
    LCID v44; // [esp+4h] [ebp-8h]
    LCID Locale; // [esp+8h] [ebp-4h]

    Locale = (unsigned __int16)word_B7853E; /*0x7d615f*/
    v44 = (unsigned __int16)word_B78540; /*0x7d6162*/
    if ( !a1 ) /*0x7d6165*/
      return -1; /*0x7d6167*/
    v2 = __getlocaleinfo(1, (unsigned __int16)word_B7853E, 0x31u, a1 + 1); /*0x7d6181*/
    v3 = __getlocaleinfo(1, Locale, 0x32u, a1 + 2) | v2; /*0x7d6192*/
    v4 = __getlocaleinfo(1, Locale, 0x33u, a1 + 3) | v3; /*0x7d61a3*/
    v5 = __getlocaleinfo(1, Locale, 0x34u, a1 + 4) | v4; /*0x7d61b7*/
    v6 = __getlocaleinfo(1, Locale, 0x35u, a1 + 5) | v5; /*0x7d61c8*/
    v7 = __getlocaleinfo(1, Locale, 0x36u, a1 + 6) | v6; /*0x7d61df*/
    v8 = __getlocaleinfo(1, Locale, 0x37u, a1) | v7; /*0x7d61e7*/
    v9 = __getlocaleinfo(1, Locale, 0x2Au, a1 + 8) | v8; /*0x7d61fb*/
    v10 = __getlocaleinfo(1, Locale, 0x2Bu, a1 + 9) | v9; /*0x7d620c*/
    v11 = __getlocaleinfo(1, Locale, 0x2Cu, a1 + 10) | v10; /*0x7d621d*/
    v12 = __getlocaleinfo(1, Locale, 0x2Du, a1 + 11) | v11; /*0x7d622e*/
    v13 = __getlocaleinfo(1, Locale, 0x2Eu, a1 + 12) | v12; /*0x7d6242*/
    v14 = __getlocaleinfo(1, Locale, 0x2Fu, a1 + 13) | v13; /*0x7d6253*/
    v15 = __getlocaleinfo(1, Locale, 0x30u, a1 + 7) | v14; /*0x7d6264*/
    v16 = __getlocaleinfo(1, Locale, 0x44u, a1 + 14) | v15; /*0x7d6275*/
    v17 = __getlocaleinfo(1, Locale, 0x45u, a1 + 15) | v16; /*0x7d6289*/
    v18 = __getlocaleinfo(1, Locale, 0x46u, a1 + 16) | v17; /*0x7d629a*/
    v19 = __getlocaleinfo(1, Locale, 0x47u, a1 + 17) | v18; /*0x7d62ab*/
    v20 = __getlocaleinfo(1, Locale, 0x48u, a1 + 18) | v19; /*0x7d62bc*/
    v21 = __getlocaleinfo(1, Locale, 0x49u, a1 + 19) | v20; /*0x7d62d0*/
    v22 = __getlocaleinfo(1, Locale, 0x4Au, a1 + 20) | v21; /*0x7d62e1*/
    v23 = __getlocaleinfo(1, Locale, 0x4Bu, a1 + 21) | v22; /*0x7d62f2*/
    v24 = __getlocaleinfo(1, Locale, 0x4Cu, a1 + 22) | v23; /*0x7d6303*/
    v25 = __getlocaleinfo(1, Locale, 0x4Du, a1 + 23) | v24; /*0x7d6317*/
    v26 = __getlocaleinfo(1, Locale, 0x4Eu, a1 + 24) | v25; /*0x7d6328*/
    v27 = __getlocaleinfo(1, Locale, 0x4Fu, a1 + 25) | v26; /*0x7d6339*/
    v28 = __getlocaleinfo(1, Locale, 0x38u, a1 + 26) | v27; /*0x7d634a*/
    v29 = __getlocaleinfo(1, Locale, 0x39u, a1 + 27) | v28; /*0x7d635e*/
    v30 = __getlocaleinfo(1, Locale, 0x3Au, a1 + 28) | v29; /*0x7d636f*/
    v31 = __getlocaleinfo(1, Locale, 0x3Bu, a1 + 29) | v30; /*0x7d6380*/
    v32 = __getlocaleinfo(1, Locale, 0x3Cu, a1 + 30) | v31; /*0x7d6391*/
    v33 = __getlocaleinfo(1, Locale, 0x3Du, a1 + 31) | v32; /*0x7d63a5*/
    v34 = __getlocaleinfo(1, Locale, 0x3Eu, a1 + 32) | v33; /*0x7d63b9*/
    v35 = __getlocaleinfo(1, Locale, 0x3Fu, a1 + 33) | v34; /*0x7d63cd*/
    v36 = __getlocaleinfo(1, Locale, 0x40u, a1 + 34) | v35; /*0x7d63e1*/
    v37 = __getlocaleinfo(1, Locale, 0x41u, a1 + 35) | v36; /*0x7d63f8*/
    v38 = __getlocaleinfo(1, Locale, 0x42u, a1 + 36) | v37; /*0x7d640c*/
    v39 = __getlocaleinfo(1, Locale, 0x43u, a1 + 37) | v38; /*0x7d6420*/
    v40 = __getlocaleinfo(1, Locale, 0x28u, a1 + 38) | v39; /*0x7d6434*/
    v41 = __getlocaleinfo(1, Locale, 0x29u, a1 + 39) | v40; /*0x7d644b*/
    v42 = __getlocaleinfo(1, v44, 0x1Fu, a1 + 40) | v41; /*0x7d645f*/
    v43 = __getlocaleinfo(1, v44, 0x20u, a1 + 41) | v42; /*0x7d6479*/
    return v43 | __getlocaleinfo(1, v44, 0x1003u, a1 + 42); /*0x7d6491*/
}
} // namespace gamemd

// 0x7D6494
namespace gamemd {
int _free_lc_time(CCINIClass * a1)
{
    int result; // eax

    if ( a1 ) /*0x7d649b*/
    {
      free(a1[1]); /*0x7d64a4*/
      free(a1[2]); /*0x7d64ac*/
      free(a1[3]); /*0x7d64b4*/
      free(a1[4]); /*0x7d64bc*/
      free(a1[5]); /*0x7d64c4*/
      free(a1[6]); /*0x7d64cc*/
      free(*a1); /*0x7d64d3*/
      free(a1[8]); /*0x7d64db*/
      free(a1[9]); /*0x7d64e3*/
      free(a1[10]); /*0x7d64eb*/
      free(a1[11]); /*0x7d64f3*/
      free(a1[12]); /*0x7d64fb*/
      free(a1[13]); /*0x7d6503*/
      free(a1[7]); /*0x7d650b*/
      free(a1[14]); /*0x7d6513*/
      free(a1[15]); /*0x7d651b*/
      free(a1[16]); /*0x7d6526*/
      free(a1[17]); /*0x7d652e*/
      free(a1[18]); /*0x7d6536*/
      free(a1[19]); /*0x7d653e*/
      free(a1[20]); /*0x7d6546*/
      free(a1[21]); /*0x7d654e*/
      free(a1[22]); /*0x7d6556*/
      free(a1[23]); /*0x7d655e*/
      free(a1[24]); /*0x7d6566*/
      free(a1[25]); /*0x7d656e*/
      free(a1[26]); /*0x7d6576*/
      free(a1[27]); /*0x7d657e*/
      free(a1[28]); /*0x7d6586*/
      free(a1[29]); /*0x7d658e*/
      free(a1[30]); /*0x7d6596*/
      free(a1[31]); /*0x7d659e*/
      free(a1[32]); /*0x7d65ac*/
      free(a1[33]); /*0x7d65b7*/
      free(a1[34]); /*0x7d65c2*/
      free(a1[35]); /*0x7d65cd*/
      free(a1[36]); /*0x7d65d8*/
      free(a1[37]); /*0x7d65e3*/
      free(a1[38]); /*0x7d65ee*/
      free(a1[39]); /*0x7d65f9*/
      free(a1[40]); /*0x7d6604*/
      free(a1[41]); /*0x7d660f*/
      return free(a1[42]); /*0x7d661a*/
    }
    return result; /*0x7d6622*/
}
} // namespace gamemd

// 0x7D67F9
namespace gamemd {
char fix_grouping(CCINIClass * a1)
{
    char *v1; // ecx
    char result; // al
    char *v3; // eax

    v1 = (char *)(a1); /*0x7d67f9*/
    for ( result = *a1; *v1; result = *v1 ) /*0x7d67fd*/
    {
      if ( result < 48 || result > 57 ) /*0x7d680a*/
      {
        if ( result == 59 ) /*0x7d681b*/
        {
          v3 = v1; /*0x7d681d*/
          do /*0x7d6829*/
          {
            *v3 = v3[1]; /*0x7d6825*/
            ++v3; /*0x7d6827*/
          }
          while ( *v3 ); /*0x7d6829*/
          continue; /*0x7d682c*/
        }
      }
      else
      {
        *v1 = result - 48; /*0x7d680e*/
      }
      ++v1; /*0x7d6810*/
    }
    return result; /*0x7d6818*/
}
} // namespace gamemd

// 0x7D6830
namespace gamemd {
int __init_monetary()
{
    void **v0; // eax
    void **v1; // esi

    if ( dword_B782A4 ) /*0x7d6838*/
    {
      v0 = (void **)calloc(1u, 0x30u); /*0x7d683e*/
      v1 = v0; /*0x7d6843*/
      if ( !v0 ) /*0x7d6849*/
        return 1; /*0x7d684f*/
      if ( _get_lc_lconv(v0) ) /*0x7d6851*/
      {
        _free_lc_lconv(v1); /*0x7d685c*/
        free( (void *)(v1)); /*0x7d6862*/
        return 1; /*0x7d6869*/
      }
      *v1 = *off_87D620; /*0x7d6872*/
      v1[1] = off_87D620[1]; /*0x7d687c*/
      v1[2] = off_87D620[2]; /*0x7d6887*/
      off_87D620 = (void **)v1; /*0x7d6890*/
      _free_lc_lconv((void **)dword_B78514); /*0x7d6896*/
      free( (void *)(dword_B78514)); /*0x7d68a1*/
      dword_B78514 = (unsigned int)v1; /*0x7d68a7*/
    }
    else
    {
      off_87D5F0 = *off_87D620; /*0x7d68bd*/
      off_87D5F4[0] = (__int16 (*)[2])off_87D620[1]; /*0x7d68c6*/
      off_87D5F8[0] = (__int16 (*)[2])off_87D620[2]; /*0x7d68cf*/
      off_87D620 = &off_87D5F0; /*0x7d68d4*/
      _free_lc_lconv((void **)dword_B78514); /*0x7d68de*/
      free( (void *)(dword_B78514)); /*0x7d68e9*/
      dword_B78514 = 0; /*0x7d68ee*/
    }
    return 0; /*0x7d684e*/
}
} // namespace gamemd

// 0x7D68FB
namespace gamemd {
int _get_lc_lconv(CCINIClass * a1)
{
    LCID v1; // edi
    int v3; // ebx
    int v4; // ebx
    int v5; // ebx
    int v6; // ebx
    int v7; // ebx
    int v8; // ebx
    int v9; // ebx
    int v10; // ebx
    int v11; // ebx
    int v12; // ebx
    int v13; // ebx
    int v14; // ebx
    int v15; // ebx
    int v16; // ebx

    v1 = (unsigned __int16)word_B78534; /*0x7d6901*/
    if ( !a1 ) /*0x7d690a*/
      return -1; /*0x7d690c*/
    v3 = __getlocaleinfo(1, (unsigned __int16)word_B78534, 0x15u, a1 + 3); /*0x7d6923*/
    v4 = __getlocaleinfo(1, v1, 0x14u, a1 + 4) | v3; /*0x7d6933*/
    v5 = __getlocaleinfo(1, v1, 0x16u, a1 + 5) | v4; /*0x7d6943*/
    v6 = __getlocaleinfo(1, v1, 0x17u, a1 + 6) | v5; /*0x7d6956*/
    v7 = __getlocaleinfo(1, v1, 0x18u, a1 + 7) | v6; /*0x7d6969*/
    fix_grouping_0(a1[7]); /*0x7d696b*/
    v8 = __getlocaleinfo(1, v1, 0x50u, a1 + 8) | v7; /*0x7d697e*/
    v9 = __getlocaleinfo(1, v1, 0x51u, a1 + 9) | v8; /*0x7d698e*/
    v10 = __getlocaleinfo(0, v1, 0x1Au, a1 + 10) | v9; /*0x7d69a1*/
    v11 = __getlocaleinfo(0, v1, 0x19u, (char **)((char *)a1 + 41)) | v10; /*0x7d69b1*/
    v12 = __getlocaleinfo(0, v1, 0x54u, (char **)((char *)a1 + 42)) | v11; /*0x7d69c1*/
    v13 = __getlocaleinfo(0, v1, 0x55u, (char **)((char *)a1 + 43)) | v12; /*0x7d69d1*/
    v14 = __getlocaleinfo(0, v1, 0x56u, a1 + 11) | v13; /*0x7d69e4*/
    v15 = __getlocaleinfo(0, v1, 0x57u, (char **)((char *)a1 + 45)) | v14; /*0x7d69f4*/
    v16 = __getlocaleinfo(0, v1, 0x52u, (char **)((char *)a1 + 46)) | v15; /*0x7d6a07*/
    return v16 | __getlocaleinfo(0, v1, 0x53u, (char **)((char *)a1 + 47)); /*0x7d6a1a*/
}
} // namespace gamemd

// 0x7D6A1D
namespace gamemd {
char fix_grouping_0(char * a1)
{
    char *v1; // ecx
    char result; // al
    char *v3; // eax

    v1 = a1; /*0x7d6a1d*/
    for ( result = *a1; *v1; result = *v1 ) /*0x7d6a21*/
    {
      if ( result < 48 || result > 57 ) /*0x7d6a2e*/
      {
        if ( result == 59 ) /*0x7d6a3f*/
        {
          v3 = v1; /*0x7d6a41*/
          do /*0x7d6a4d*/
          {
            *v3 = v3[1]; /*0x7d6a49*/
            ++v3; /*0x7d6a4b*/
          }
          while ( *v3 ); /*0x7d6a4d*/
          continue; /*0x7d6a50*/
        }
      }
      else
      {
        *v1 = result - 48; /*0x7d6a32*/
      }
      ++v1; /*0x7d6a34*/
    }
    return result; /*0x7d6a3c*/
}
} // namespace gamemd

// 0x7D6A54
namespace gamemd {
int _free_lc_lconv(CCINIClass * a1)
{
    void *result; // eax

    if ( a1 ) /*0x7d6a5b*/
    {
      result = a1[3]; /*0x7d6a5d*/
      if ( result != &word_B78594 ) /*0x7d6a65*/
      {
        free(a1[3]); /*0x7d6a68*/
        free(a1[4]); /*0x7d6a70*/
        free(a1[5]); /*0x7d6a78*/
        free(a1[6]); /*0x7d6a80*/
        free(a1[7]); /*0x7d6a88*/
        free(a1[8]); /*0x7d6a90*/
        return (void *)free(a1[9]); /*0x7d6a98*/
      }
    }
    return result; /*0x7d6aa0*/
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

  result = (char *)(0); /*0x7d6cf4*/
  memset( (void *)(v5), 0, 32); /*0x7d6cfd*/
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
    int v3; // ebx
    int result; // eax
    int v5; // esi

    v3 = 0; /*0x7d6ead*/
    result = 1; /*0x7d6eb4*/
    while ( v3 <= a2 ) /*0x7d6eb5*/
    {
      if ( !result ) /*0x7d6eb9*/
        break; /*0x7d6eb9*/
      v5 = (v3 + a2) / 2; /*0x7d6ec8*/
      result = _strcmpi(*a3, *(char **)(a1 + 8 * v5)); /*0x7d6ed5*/
      if ( result ) /*0x7d6ede*/
      {
        if ( result >= 0 ) /*0x7d6eea*/
          v3 = v5 + 1; /*0x7d6ef2*/
        else
          a2 = v5 - 1; /*0x7d6eed*/
      }
      else
      {
        *a3 = (char *)(a1 + 8 * v5 + 4); /*0x7d6ee6*/
      }
    }
    return result; /*0x7d6efa*/
}
} // namespace gamemd

// 0x7D6EFF
namespace gamemd {
int GetLcidFromLangCountry()
{
    int v0; // eax
    int result; // eax

    dword_B78550 = strlen( (const char *)(dword_B78554)) == 3; /*0x7d6f18*/
    v0 = strlen( (const char *)(dword_B78558)); /*0x7d6f1d*/
    Locale = 0; /*0x7d6f2a*/
    dword_B78548 = v0 == 3; /*0x7d6f3a*/
    if ( dword_B78550 ) /*0x7d6f3f*/
      dword_B7854C = 2; /*0x7d6f41*/
    else
      dword_B7854C = GetPrimaryLen(dword_B78554); /*0x7d6f59*/
    EnumSystemLocalesA(LangCountryEnumProc_4, 1u); /*0x7d6f65*/
    result = dword_B7855C; /*0x7d6f6b*/
    if ( (dword_B7855C & 0x100) == 0 || (dword_B7855C & 0x200) == 0 || (dword_B7855C & 7) == 0 ) /*0x7d6f7c*/
      dword_B7855C = 0; /*0x7d6f7e*/
    return result; /*0x7d6f85*/
}
} // namespace gamemd

// 0x7D718A
namespace gamemd {
bool GetLcidFromLanguage()
{
    int v0; // eax
    BOOL result; // eax

    v0 = strlen( (const char *)(dword_B78554)); /*0x7d7190*/
    dword_B78550 = v0 == 3; /*0x7d719e*/
    if ( v0 == 3 ) /*0x7d71a3*/
      dword_B7854C = 2; /*0x7d71a5*/
    else
      dword_B7854C = GetPrimaryLen(dword_B78554); /*0x7d71bd*/
    result = EnumSystemLocalesA(LanguageEnumProc_4, 1u); /*0x7d71c9*/
    if ( (dword_B7855C & 4) == 0 ) /*0x7d71d6*/
      dword_B7855C = 0; /*0x7d71d8*/
    return result; /*0x7d71df*/
}
} // namespace gamemd

// 0x7D729D
namespace gamemd {
bool GetLcidFromCountry()
{
    BOOL result; // eax

    dword_B78548 = strlen( (const char *)(dword_B78558)) == 3; /*0x7d72b8*/
    result = EnumSystemLocalesA(CountryEnumProc_4, 1u); /*0x7d72bd*/
    if ( (dword_B7855C & 4) == 0 ) /*0x7d72ca*/
      dword_B7855C = 0; /*0x7d72cc*/
    return result; /*0x7d72d3*/
}
} // namespace gamemd

// 0x7D7374
namespace gamemd {
int ProcessCodePage(char * String)
{
    const char *v1; // esi
    int result; // eax
    unsigned char v3[8]; // [esp+4h] [ebp-8h] BYREF

    v1 = (const char *)(String); /*0x7d737a*/
    if ( String && *String && strcmp(String, off_7FA2D8) ) /*0x7d738c*/
    {
      if ( strcmp(String, off_7FA2D4) ) /*0x7d739d*/
        return atol(v1); /*0x7d73a6*/
      result = dword_B78564(dword_B78560, 11, v3, 8); /*0x7d73b0*/
    }
    else
    {
      result = dword_B78564(dword_B78560, 4100, v3, 8); /*0x7d73c3*/
    }
    if ( !result ) /*0x7d73cb*/
      return result; /*0x7d73cb*/
    v1 = (const char *)(v3); /*0x7d73cd*/
    return atol(v1); /*0x7d73d7*/
}
} // namespace gamemd

// 0x7D73DA
namespace gamemd {
int TestDefaultCountry(short a1)
{
    unsigned short *v1; // eax

    v1 = &unk_87D0E4; /*0x7d73da*/
    while ( a1 != *v1 ) /*0x7d73e7*/
    {
      if ( (int)++v1 >= (int)&off_87D0F8 ) /*0x7d73f0*/
        return 1; /*0x7d73f5*/
    }
    return 0; /*0x7d73f5*/
}
} // namespace gamemd

// 0x7D73F9
namespace gamemd {
bool TestDefaultLanguage(int a1, int a2)
{
    int v2; // eax
    int PrimaryLen; // esi
    BOOL result; // eax
    char v5[120]; // [esp+0h] [ebp-78h] BYREF

    v2 = a1 & 0x3FF; /*0x7d7408*/
    (((v2) >> 8) & 0xFF) |= 4u; /*0x7d740f*/
    result = 0; /*0x7d7458*/
    if ( dword_B78564(v2, 1, v5, 120) ) /*0x7d7413*/
    {
      if ( a1 == LcidFromHexString(v5) ) /*0x7d742a*/
        return 1; /*0x7d742a*/
      if ( !a2 ) /*0x7d7430*/
        return 1; /*0x7d7430*/
      PrimaryLen = GetPrimaryLen(dword_B78554); /*0x7d7444*/
      if ( PrimaryLen != strlen( (const char *)(dword_B78554)) ) /*0x7d7450*/
        return 1; /*0x7d741b*/
    }
    return result; /*0x7d7454*/
}
} // namespace gamemd

// 0x7D745B
namespace gamemd {
bool IsThisWindowsNT()
{
    struct _OSVERSIONINFOA VersionInformation; // [esp+0h] [ebp-94h] BYREF

    VersionInformation.dwOSVersionInfoSize = 148; /*0x7d746a*/
    return GetVersionExA(&VersionInformation) && VersionInformation.dwPlatformId == 2; /*0x7d748b*/
}
} // namespace gamemd

// 0x7D7491
namespace gamemd {
int crtGetLocaleInfoA_16(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
    int v4; // esi
    int v5; // edi
    int v6; // eax
    unsigned int v7; // ecx
    const char *v9; // eax

    v4 = 0; /*0x7d7499*/
    v5 = 26; /*0x7d749b*/
    while ( 1 ) /*0x7d74a5*/
    {
      v6 = (v5 + v4) / 2; /*0x7d74a5*/
      v7 = (&dword_87CC40)[11 * v6]; /*0x7d74ac*/
      if ( Locale == v7 ) /*0x7d74b5*/
        break; /*0x7d74b5*/
      if ( Locale >= v7 ) /*0x7d74ba*/
        v4 = v6 + 1; /*0x7d74c1*/
      else
        v5 = v6 - 1; /*0x7d74bc*/
      if ( v4 > v5 ) /*0x7d74c6*/
        return GetLocaleInfoA(Locale, LCType, lpLCData, cchData); /*0x7d74c6*/
    }
    switch ( LCType ) /*0x7d74e3*/
    {
      case 1u: /*0x7d74e3*/
        v9 = &a040a[44 * v6]; /*0x7d7543*/
        break;
      case 3u: /*0x7d74e3*/
        v9 = (const char *)((char *)&unk_87CC50 + 44 * v6); /*0x7d7539*/
        break;
      case 7u: /*0x7d74e3*/
        v9 = (const char *)((char *)&unk_87CC58 + 44 * v6); /*0x7d752f*/
        break;
      case 0xBu: /*0x7d74e3*/
        v9 = (const char *)((char *)&unk_87CC5C + 44 * v6); /*0x7d7525*/
        break;
      case 0x1001u: /*0x7d74e3*/
        v9 = (&off_87CC4C)[11 * v6]; /*0x7d751a*/
        break;
      case 0x1002u: /*0x7d74e3*/
        v9 = (&off_87CC54)[11 * v6]; /*0x7d750f*/
        break;
      case 0x1004u: /*0x7d74e3*/
        v9 = &a1252[44 * v6]; /*0x7d7505*/
        break;
      default:
        return GetLocaleInfoA(Locale, LCType, lpLCData, cchData); /*0x7d74dc*/
    }
    if ( !v9 || cchData < 1 ) /*0x7d7553*/
      return GetLocaleInfoA(Locale, LCType, lpLCData, cchData); /*0x7d7553*/
    strncpy( (char *)(lpLCData), (const char *)(v9), cchData - 1); /*0x7d7562*/
    lpLCData[cchData - 1] = 0; /*0x7d756a*/
    return 1; /*0x7d74d8*/
}
} // namespace gamemd

// 0x7D7577
namespace gamemd {
int LcidFromHexString(char * a1)
{
    int result; // eax
    char v3; // cl

    for ( result = 0; ; result = v3 + 16 * (result + 268435453) ) /*0x7d757b*/
    {
      v3 = *a1++; /*0x7d757d*/
      if ( !v3 ) /*0x7d7582*/
        break; /*0x7d7582*/
      if ( v3 < 97 || v3 > 102 ) /*0x7d758c*/
      {
        if ( v3 >= 65 && v3 <= 70 ) /*0x7d759b*/
          v3 -= 7; /*0x7d759d*/
      }
      else
      {
        v3 -= 39; /*0x7d758e*/
      }
    }
    return result; /*0x7d75af*/
}
} // namespace gamemd

// 0x7D75B0
namespace gamemd {
int GetPrimaryLen(char * a1)
{
    int result; // eax
    char v3; // cl

    for ( result = 0; ; ++result ) /*0x7d75b4*/
    {
      v3 = *a1++; /*0x7d75b6*/
      if ( (v3 < 65 || v3 > 90) && (v3 < 97 || v3 > 122) ) /*0x7d75cb*/
        break; /*0x7d75cb*/
    }
    return result; /*0x7d75d0*/
}
} // namespace gamemd

// 0x7D7638
namespace gamemd {
int _lseek(int FileHandle, int Offset, int Origin)
{
    int v3; // edi

    if ( FileHandle < uNumber && (*(unsigned char *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7d765e*/
    {
      _lock_fhandle(FileHandle); /*0x7d7662*/
      v3 = _lseek_lk(FileHandle, Offset, Origin); /*0x7d7676*/
      _unlock_fhandle(FileHandle); /*0x7d7678*/
      return v3; /*0x7d7680*/
    }
    else
    {
      *_errno() = 9; /*0x7d768a*/
      *__doserrno() = 0; /*0x7d7695*/
      return -1; /*0x7d7698*/
    }
}
} // namespace gamemd

// 0x7D769D
namespace gamemd {
DWORD _lseek_lk(int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod)
{
    void *osfhandle; // eax
    DWORD v4; // edi
    DWORD LastError; // eax

    osfhandle = (void *)_get_osfhandle(FileHandle); /*0x7d76a4*/
    if ( osfhandle == (void *)-1 ) /*0x7d76ad*/
    {
      *_errno() = 9; /*0x7d76b4*/
      return -1; /*0x7d76ec*/
    }
    v4 = SetFilePointer(osfhandle, lDistanceToMove, 0, dwMoveMethod); /*0x7d76cd*/
    if ( v4 == -1 ) /*0x7d76d2*/
      LastError = GetLastError(); /*0x7d76d4*/
    else
      LastError = 0; /*0x7d76dc*/
    if ( LastError ) /*0x7d76e0*/
    {
      _dosmaperr(LastError); /*0x7d76e3*/
      return -1; /*0x7d76e3*/
    }
    *(unsigned char *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) &= ~2u; /*0x7d7702*/
    return v4; /*0x7d770d*/
}
} // namespace gamemd

// 0x7D7710
namespace gamemd {
int _getbuf(MouseClass * aP0)
{
    void *v1; // eax
    int result; // eax

    ++dword_B781C0; /*0x7d7710*/
    v1 = malloc(0x1000u); /*0x7d771b*/
    this->vtable3 = v1; /*0x7d7727*/
    if ( v1 ) /*0x7d772a*/
    {
      this->vtable4 = (void *)((int)this->vtable4 | 8); /*0x7d772c*/
      this->nextArrayIndex = 4096; /*0x7d7730*/
    }
    else
    {
      this->vtable4 = (void *)((int)this->vtable4 | 4); /*0x7d7739*/
      this->vtable3 = &this->abstractFlags; /*0x7d7740*/
      this->nextArrayIndex = 2; /*0x7d7743*/
    }
    result = (int)this->vtable3; /*0x7d774a*/
    this->vtable2 = 0; /*0x7d774d*/
    this->AbstractClass = (void *)result; /*0x7d7751*/
    return result; /*0x7d7753*/
}
} // namespace gamemd

// 0x7D7754
namespace gamemd {
int _isatty(int FileHandle)
{
    if ( FileHandle < uNumber ) /*0x7d775e*/
      return *(unsigned char *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 0x40; /*0x7d7779*/
    else
      return 0; /*0x7d7760*/
}
} // namespace gamemd

// 0x7D777D
namespace gamemd {
int wctomb(char * MbCh, wchar_t WCh)
{
    int v2; // ebx
    int WCha; // [esp+18h] [ebp+Ch]

    InterlockedIncrement(&dword_B78BA4); /*0x7d7789*/
    v2 = 0; /*0x7d7795*/
    if ( dword_B78BA0 ) /*0x7d779d*/
    {
      InterlockedDecrement(&dword_B78BA4); /*0x7d77a0*/
      _lock(19); /*0x7d77a4*/
      v2 = 1; /*0x7d77ac*/
    }
    WCha = _wctomb_lk(MbCh, WCh); /*0x7d77b9*/
    if ( v2 ) /*0x7d77bf*/
      _unlock(19); /*0x7d77c3*/
    else
      InterlockedDecrement(&dword_B78BA4); /*0x7d77cc*/
    return WCha; /*0x7d77d1*/
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

  if ( ((unsigned int)((unsigned __int64)(a2) >> 32)) ) /*0x7d7847*/
  {
    v4 = ((unsigned int)((unsigned __int64)(a2) >> 32)); /*0x7d7861*/
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
    v8 = ((unsigned int)((unsigned __int64)(a2) >> 32)) * (v6 / v5); /*0x7d7883*/
    v9 = (unsigned int)a2 * (uint64_t)(unsigned int)(v6 / v5); /*0x7d7884*/
    v7 = __CFADD__(v8, IDA_HIDWORD(v9)); /*0x7d7888*/
    IDA_HIDWORD(v9) += v8; /*0x7d7888*/
    if ( v7 || v9 > a1 ) /*0x7d7898*/
      v9 -= a2; /*0x7d789e*/
    return a1 - v9; /*0x7d78ae*/
  }
  else
  {
    (v2) = (unsigned int)(a1); /*0x7d7859*/
    (v2) = ((v2) & 0xFFFFFFFFULL) | ((unsigned __int64)(unsigned int)(IDA_HIDWORD(a1) % (unsigned int)a2) << 32); /*0x7d7859*/
    return v2 % (unsigned int)a2; /*0x7d785d*/
  }
}
} // namespace gamemd

// 0x7D78B5
namespace gamemd {
int _ZeroTail(int a1, int a2)
{
    int v2; // esi
    unsigned int *i; // eax

    if ( (~(-1 << (31 - a2 % 32)) & *(unsigned int *)(a1 + 4 * (a2 / 32))) == 0 ) /*0x7d78dc*/
    {
      v2 = a2 / 32 + 1; /*0x7d78de*/
      if ( v2 >= 3 ) /*0x7d78e2*/
        return 1; /*0x7d78f9*/
      for ( i = (unsigned int *)(a1 + 4 * v2); !*i; ++i ) /*0x7d78e4*/
      {
        if ( ++v2 >= 3 ) /*0x7d78f3*/
          return 1; /*0x7d78f3*/
      }
    }
    return 0; /*0x7d78f8*/
}
} // namespace gamemd

// 0x7D78FE
namespace gamemd {
int _IncMan(int a1, int a2)
{
    int result; // eax
    int v3; // esi
    unsigned int *v4; // edi

    result = __addl(*(unsigned int *)(a1 + 4 * (a2 / 32)), 1 << (31 - a2 % 32), (unsigned int *)(a1 + 4 * (a2 / 32))); /*0x7d7929*/
    v3 = a2 / 32 - 1; /*0x7d7931*/
    if ( v3 >= 0 ) /*0x7d7932*/
    {
      v4 = (unsigned int *)(a1 + 4 * v3); /*0x7d7934*/
      do /*0x7d794e*/
      {
        if ( !result ) /*0x7d7939*/
          break; /*0x7d7939*/
        result = __addl(*v4, 1u, v4); /*0x7d7940*/
        --v3; /*0x7d7948*/
        --v4; /*0x7d7949*/
      }
      while ( v3 >= 0 ); /*0x7d794e*/
    }
    return result; /*0x7d7950*/
}
} // namespace gamemd

// 0x7D7954
namespace gamemd {
int _RoundMan(int a1, int a2)
{
    int v2; // edi
    int v4; // edx
    unsigned int *v5; // eax
    char v6; // si
    int v8; // [esp+Ch] [ebp-8h]
    int v9; // [esp+10h] [ebp-4h]
    unsigned int *v10; // [esp+20h] [ebp+Ch]

    v2 = a2 - 1; /*0x7d795f*/
    v9 = 0; /*0x7d7965*/
    v4 = a2 % 32; /*0x7d797b*/
    v8 = a2 / 32; /*0x7d7983*/
    v5 = (unsigned int *)(a1 + 4 * (a2 / 32)); /*0x7d7986*/
    v10 = v5; /*0x7d7989*/
    v6 = 31 - v4; /*0x7d798c*/
    if ( ((1 << (31 - v4)) & *v5) != 0 ) /*0x7d7995*/
    {
      if ( !_ZeroTail(a1, a2 + 1) ) /*0x7d799c*/
        v9 = _IncMan(a1, v2); /*0x7d79b1*/
      v5 = v10; /*0x7d79b5*/
    }
    *v5 &= -1 << v6; /*0x7d79c2*/
    if ( v8 + 1 < 3 ) /*0x7d79ca*/
      memset((void *)(a1 + 4 * (v8 + 1)), 0, 4 * (3 - (v8 + 1))); /*0x7d79d6*/
    return v9; /*0x7d79db*/
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
    *a1 = 0; /*0x7d7a02*/
    a1[1] = 0; /*0x7d7a03*/
    a1[2] = 0; /*0x7d7a04*/
    return 0; /*0x7d7a05*/
}
} // namespace gamemd

// 0x7D7A07
namespace gamemd {
int _IsZeroMan(unsigned int * a1)
{
    int v2; // ecx

    v2 = 0; /*0x7d7a0b*/
    while ( !*a1 ) /*0x7d7a10*/
    {
      ++v2; /*0x7d7a12*/
      ++a1; /*0x7d7a13*/
      if ( v2 >= 3 ) /*0x7d7a19*/
        return 1; /*0x7d7a1e*/
    }
    return 0; /*0x7d7a1e*/
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
    unsigned __int16 v2; // si
    __int16 v3; // di
    int v4; // ecx
    __int16 v5; // si
    unsigned int v6; // ecx
    int v7; // ecx
    unsigned int v9; // [esp+8h] [ebp-10h] BYREF
    int v10; // [esp+Ch] [ebp-Ch]
    int v11; // [esp+10h] [ebp-8h]
    int v12; // [esp+14h] [ebp-4h]

    v12 = 0; /*0x7d7c52*/
    v2 = a1[5]; /*0x7d7c5c*/
    v3 = v2 & 0x8000; /*0x7d7c64*/
    v9 = *(unsigned int *)(a1 + 3); /*0x7d7c69*/
    v4 = *(unsigned int *)(a1 + 1); /*0x7d7c6c*/
    v11 = *a1 << 16; /*0x7d7c75*/
    v5 = v2 & 0x7FFF; /*0x7d7c7c*/
    v10 = v4; /*0x7d7c82*/
    if ( _RoundMan((int)&v9, 64) ) /*0x7d7c85*/
    {
      v6 = 0x80000000; /*0x7d7c90*/
      ++v5; /*0x7d7c95*/
    }
    else
    {
      v6 = v9; /*0x7d7c98*/
    }
    if ( v5 == 0x7FFF ) /*0x7d7ca0*/
      v12 = 1; /*0x7d7ca2*/
    *(unsigned int *)(a2 + 4) = v6; /*0x7d7cae*/
    v7 = v10; /*0x7d7cb1*/
    *(unsigned short *)(a2 + 8) = v5 | v3; /*0x7d7cb4*/
    *(unsigned int *)a2 = v7; /*0x7d7cb8*/
    return v12; /*0x7d7cbd*/
}
} // namespace gamemd

// 0x7D7CEE
namespace gamemd {
int _atoldbl(_LDOUBLE * Result, char * String)
{
    unsigned __int16 v3[6]; // [esp+0h] [ebp-Ch] BYREF

    __strgtold12(v3, &String, String, 1, 0, 0, 0); /*0x7d7d06*/
    return _ld12told(v3, (int)Result); /*0x7d7d1a*/
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
    v10 = strlen( (const char *)(v7)); /*0x7d7daa*/
    return (char *)memcpy( (void *)(aP0), (const void *)(v7), v10 + 1); /*0x7d7db3*/
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
  strcpy( (char *)(v6), (const char *)(Source)); /*0x7d7e0b*/
  v5[3] = v6; /*0x7d7e13*/
  return v5; /*0x7d7e18*/
}
} // namespace gamemd

// 0x7D7E1C
namespace gamemd {
int ___dtold(unsigned int a1, int a2, int * a3)
{
    int v4; // ecx
    int v5; // eax
    unsigned int v6; // edx
    int v7; // eax
    __int16 v8; // di
    int result; // eax
    int v10; // ecx
    int v11; // ecx
    unsigned __int64 v12; // rcx
    unsigned int v13; // [esp+Ch] [ebp-4h]
    __int16 v14; // [esp+1Ch] [ebp+Ch]

    (a1) = ((a1) & ~0xFFFF) | ((unsigned int)(*((unsigned short *)a3 + 3)) & 0xFFFF); /*0x7d7e26*/
    v4 = (a1 >> 4) & 0x7FF; /*0x7d7e39*/
    v14 = a1 & 0x8000; /*0x7d7e3b*/
    v5 = a3[1]; /*0x7d7e3e*/
    v6 = *a3; /*0x7d7e41*/
    v7 = v5 & 0xFFFFF; /*0x7d7e4b*/
    v13 = 0x80000000; /*0x7d7e52*/
    if ( (unsigned short)v4 ) /*0x7d7e55*/
    {
      if ( (unsigned __int16)v4 == 2047 ) /*0x7d7e59*/
        v8 = 0x7FFF; /*0x7d7e63*/
      else
        v8 = v4 + 15360; /*0x7d7e5b*/
    }
    else
    {
      if ( !v7 && !v6 ) /*0x7d7e72*/
      {
        *(unsigned int *)(a2 + 4) = 0; /*0x7d7e77*/
        *(unsigned int *)a2 = 0; /*0x7d7e7a*/
        *(unsigned short *)(a2 + 8) = 0; /*0x7d7e7c*/
        return a2; /*0x7d7e80*/
      }
      v8 = v4 + 15361; /*0x7d7e82*/
      v13 = 0; /*0x7d7e88*/
    }
    v10 = (v7 << 11) | (v6 >> 21); /*0x7d7e93*/
    result = a2; /*0x7d7e95*/
    v11 = v13 | v10; /*0x7d7e98*/
    *(unsigned int *)(a2 + 4) = v11; /*0x7d7e9e*/
    *(unsigned int *)a2 = v6 << 11; /*0x7d7ea1*/
    while ( (v11 & 0x80000000) == 0 ) /*0x7d7ea5*/
    {
      v12 = 2 * IDA___PAIR64__(v11, *(unsigned int *)a2); /*0x7d7eb2*/
      *(unsigned __int64 *)a2 = v12; /*0x7d7eb5*/
      --v8; /*0x7d7eba*/
      v11 = ((unsigned int)((unsigned __int64)(v12) >> 32)); /*0x7d7ec0*/
    }
    *(unsigned short *)(a2 + 8) = v8 | v14; /*0x7d7ec9*/
    return result; /*0x7d7ecd*/
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
int unknown_libname_78(double a1, double a2)
{
    _TBYTE v2; // [esp+0h] [ebp-2Ch]
    _TBYTE v3; // [esp+Ch] [ebp-20h]

    *(double *)&v2 = a1; /*0x7d8499*/
    *(double *)&v3 = a2; /*0x7d849c*/
    unknown_libname_76(v2, v3); /*0x7d84a0*/
}
} // namespace gamemd

// 0x7D84A9
namespace gamemd {
int unknown_libname_79(double a1, double a2)
{
    _TBYTE v2; // [esp+0h] [ebp-2Ch]
    _TBYTE v3; // [esp+Ch] [ebp-20h]

    *(double *)&v3 = a1; /*0x7d84ac*/
    *(double *)&v2 = a2; /*0x7d84b0*/
    unknown_libname_76(v2, v3); /*0x7d84b3*/
}
} // namespace gamemd

// 0x7D86BC
namespace gamemd {
int unknown_libname_88(double a1, double a2)
{
    _TBYTE v2; // [esp+0h] [ebp-30h]
    _TBYTE v3; // [esp+Ch] [ebp-24h]

    *(double *)&v2 = a1; /*0x7d86c0*/
    *(double *)&v3 = a2; /*0x7d86c3*/
    unknown_libname_76(v2, v3); /*0x7d86c7*/
}
} // namespace gamemd

// 0x7D86D1
namespace gamemd {
int unknown_libname_89(double a1, double a2)
{
    _TBYTE v2; // [esp+0h] [ebp-30h]
    _TBYTE v3; // [esp+Ch] [ebp-24h]

    *(double *)&v3 = a1; /*0x7d86d5*/
    *(double *)&v2 = a2; /*0x7d86d9*/
    unknown_libname_76(v2, v3); /*0x7d86dc*/
}
} // namespace gamemd

// 0x7D8D3B
namespace gamemd {
double _set_exp(double a1, short a2)
{
    double v3; // [esp+0h] [ebp-8h]

    v3 = a1; /*0x7d8d53*/
    (v3) = ((v3) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(IDA_HIWORD(a1) & 0x800F | (16 * (a2 + 1022))) & 0xFFFF) << 16); /*0x7d8d5b*/
    return v3; /*0x7d8d62*/
}
} // namespace gamemd

// 0x7D8DA4
namespace gamemd {
double _set_bexp(double a1, short a2)
{
    double v3; // [esp+0h] [ebp-8h]

    v3 = a1; /*0x7d8db5*/
    (v3) = ((v3) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(IDA_HIWORD(a1) & 0x800F | (16 * a2)) & 0xFFFF) << 16); /*0x7d8dbf*/
    return v3; /*0x7d8dc6*/
}
} // namespace gamemd

// 0x7D8DC8
namespace gamemd {
int _sptype(int a1, int a2)
{
    if ( a2 == 2146435072 ) /*0x7d8dd4*/
    {
      if ( !a1 ) /*0x7d8dd9*/
        return 1; /*0x7d8e1d*/
    }
    else if ( a2 == -1048576 && !a1 ) /*0x7d8deb*/
    {
      return 2; /*0x7d8def*/
    }
    if ( ((((unsigned int)(a2) >> 16) & 0xFFFF) & 0x7FF8) == 0x7FF8 ) /*0x7d8dfe*/
      return 3; /*0x7d8e02*/
    if ( ((((unsigned int)(a2) >> 16) & 0xFFFF) & 0x7FF8) == 0x7FF0 && ((a2 & 0x7FFFF) != 0 || a1) ) /*0x7d8e17*/
      return 4; /*0x7d8e19*/
    return 0; /*0x7d8e1c*/
}
} // namespace gamemd

// 0x7D8EF5
namespace gamemd {
double _copysign(double Number, double Sign)
{
    double v3; // [esp+0h] [ebp-8h]

    IDA_LODWORD(v3) = IDA_LODWORD(Number); /*0x7d8efd*/
    IDA_HIDWORD(v3) = IDA_HIDWORD(Sign) ^ (IDA_HIDWORD(Number) ^ IDA_HIDWORD(Sign)) & 0x7FFFFFFF; /*0x7d8f0e*/
    return v3; /*0x7d8f14*/
}
} // namespace gamemd

// 0x7D8F16
namespace gamemd {
double _chgsign(double X)
{
    double v2; // [esp+0h] [ebp-8h]

    IDA_LODWORD(v2) = IDA_LODWORD(X); /*0x7d8f1e*/
    IDA_HIDWORD(v2) = ~IDA_HIDWORD(X) ^ (IDA_HIDWORD(X) ^ ~IDA_HIDWORD(X)) & 0x7FFFFFFF; /*0x7d8f33*/
    return v2; /*0x7d8f39*/
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
    __int16 v1; // cx
    int v2; // edi
    int v3; // eax
    double result; // st7
    __int16 v5; // cx
    int v6; // [esp+10h] [ebp-10h]
    int v7; // [esp+1Ch] [ebp-4h] BYREF
    double Xa; // [esp+28h] [ebp+8h]

    v2 = _ctrlfp(v1); /*0x7d8f6a*/
    if ( (IDA_HIWORD(X) & 0x7FF0) == 0x7FF0 ) /*0x7d8f79*/
    {
      v3 = _sptype(IDA_SLODWORD(X), IDA_SHIDWORD(X)); /*0x7d8f80*/
      if ( v3 > 0 ) /*0x7d8f89*/
      {
        if ( v3 <= 2 ) /*0x7d8f8e*/
        {
          _ctrlfp(v6); /*0x7d8faf*/
          return X; /*0x7d8fb9*/
        }
        if ( v3 == 3 ) /*0x7d8f93*/
        {
          _handle_qnan1(v6, 37, X, v2); /*0x7d8fa0*/
          return X; /*0x7d8fa8*/
        }
      }
      _except1( /*0x7d8fd6*/
        8u,
        37,
        IDA_SLODWORD(X),
        IDA_SHIDWORD(X),
        COERCE_UNSIGNED_INT64(X + 1.0),
        IDA_HIDWORD(COERCE_UNSIGNED_INT64(X + 1.0)),
        v2);
      return X; /*0x7d8fca*/
    }
    else if ( X == 0.0 ) /*0x7d8fe1*/
    {
      result = X; /*0x7d8ff1*/
      _except1( /*0x7d8ffd*/
        4u,
        37,
        IDA_SLODWORD(X),
        IDA_SHIDWORD(X),
        COERCE_UNSIGNED_INT64(-dbl_87D550),
        IDA_HIDWORD(COERCE_UNSIGNED_INT64(-dbl_87D550)),
        v2);
    }
    else
    {
      _decomp(X, &v7); /*0x7d9013*/
      Xa = (double)(v7 - 1); /*0x7d9026*/
      _ctrlfp(v5); /*0x7d9029*/
      return Xa; /*0x7d902e*/
    }
    return result; /*0x7d9034*/
}
} // namespace gamemd

// 0x7D92CD
namespace gamemd {
int _finite(double X)
{
    return (IDA_HIWORD(X) & 0x7FF0) != 32752; /*0x7d92e0*/
}
} // namespace gamemd

// 0x7D92E1
namespace gamemd {
int _isnan(double X)
{
    return (IDA_HIWORD(X) & 0x7FF8) == 0x7FF0 && ((IDA_HIDWORD(X) & 0x7FFFF) != 0 || IDA_LODWORD(X)) || (IDA_HIWORD(X) & 0x7FF8) == 0x7FF8; /*0x7d930b*/
}
} // namespace gamemd

// 0x7D930F
namespace gamemd {
int _fpclass(double X)
{
    int v1; // eax
    int v2; // eax
    int v4; // eax
    int v5; // eax

    if ( (IDA_HIWORD(X) & 0x7FF0) == 0x7FF0 ) /*0x7d9321*/
    {
      v1 = _sptype(IDA_SLODWORD(X), IDA_SHIDWORD(X)) - 1; /*0x7d9331*/
      if ( v1 ) /*0x7d9333*/
      {
        v2 = v1 - 1; /*0x7d9335*/
        if ( !v2 ) /*0x7d9336*/
          return 4; /*0x7d9344*/
        if ( v2 == 1 ) /*0x7d9339*/
          return 2; /*0x7d9340*/
        return 1; /*0x7d933d*/
      }
      else
      {
        return 512; /*0x7d9348*/
      }
    }
    else if ( (IDA_HIWORD(X) & 0x7FF0) == 0 && ((IDA_HIDWORD(X) & 0xFFFFF) != 0 || IDA_LODWORD(X)) ) /*0x7d9368*/
    {
      v4 = -((IDA_HIWORD(X) & 0x8000) != 0); /*0x7d936e*/
      (v4) = ((v4) & ~0xFF) | ((unsigned int)(v4 & 0x90) & 0xFF); /*0x7d9370*/
      return v4 + 128; /*0x7d9372*/
    }
    else
    {
      v5 = -((IDA_HIWORD(X) & 0x8000) != 0); /*0x7d938b*/
      (v5) = ((v5) & ~0xFF) | ((unsigned int)(0) & 0xFF); /*0x7d938d*/
      if ( X == 0.0 ) /*0x7d9387*/
        return v5 + 64; /*0x7d938f*/
      else
        return v5 + 256; /*0x7d939a*/
    }
}
} // namespace gamemd

// 0x7D94C4
namespace gamemd {
int _set_osfhnd(int a1, HANDLE hHandle)
{
    if ( a1 < uNumber && *(unsigned int *)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F)) == -1 ) /*0x7d94ef*/
    {
      if ( dword_87C2A4 == 1 ) /*0x7d94fd*/
      {
        if ( a1 ) /*0x7d9502*/
        {
          if ( a1 == 1 ) /*0x7d9505*/
          {
            SetStdHandle(0xFFFFFFF5, hHandle); /*0x7d9512*/
          }
          else if ( a1 == 2 ) /*0x7d9508*/
          {
            SetStdHandle(0xFFFFFFF4, hHandle); /*0x7d950d*/
          }
        }
        else
        {
          SetStdHandle(0xFFFFFFF6, hHandle); /*0x7d9517*/
        }
      }
      *(unsigned int *)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F)) = hHandle; /*0x7d951f*/
      return 0; /*0x7d9522*/
    }
    else
    {
      *_errno() = 9; /*0x7d952c*/
      *__doserrno() = 0; /*0x7d9537*/
      return -1; /*0x7d953a*/
    }
}
} // namespace gamemd

// 0x7D9540
namespace gamemd {
int _free_osfhnd(int a1)
{
    int v1; // eax

    if ( a1 >= uNumber /*0x7d9572*/
      || (v1 = 36 * (a1 & 0x1F) + dword_B78A80[a1 >> 5], (*(unsigned char *)(v1 + 4) & 1) == 0)
      || *(unsigned int *)v1 == -1 )
    {
      *_errno() = 9; /*0x7d95ab*/
      *__doserrno() = 0; /*0x7d95b6*/
      return -1; /*0x7d95b9*/
    }
    else
    {
      if ( dword_87C2A4 == 1 ) /*0x7d957b*/
      {
        if ( a1 ) /*0x7d9581*/
        {
          if ( a1 == 1 ) /*0x7d9584*/
          {
            SetStdHandle(0xFFFFFFF5, 0); /*0x7d9591*/
          }
          else if ( a1 == 2 ) /*0x7d9587*/
          {
            SetStdHandle(0xFFFFFFF4, 0); /*0x7d958c*/
          }
        }
        else
        {
          SetStdHandle(0xFFFFFFF6, 0); /*0x7d9596*/
        }
      }
      *(unsigned int *)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F)) = -1; /*0x7d959e*/
      return 0; /*0x7d95a2*/
    }
}
} // namespace gamemd

// 0x7D95BF
namespace gamemd {
intptr_t _get_osfhandle(int FileHandle)
{
    int v1; // eax

    if ( FileHandle < uNumber ) /*0x7d95c9*/
    {
      v1 = dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F); /*0x7d95e2*/
      if ( (*(unsigned char *)(v1 + 4) & 1) != 0 ) /*0x7d95e5*/
        return *(unsigned int *)v1; /*0x7d95e7*/
    }
    *_errno() = 9; /*0x7d95ef*/
    *__doserrno() = 0; /*0x7d95fa*/
    return -1; /*0x7d95e9*/
}
} // namespace gamemd

// 0x7D9601
namespace gamemd {
int _open_osfhandle(intptr_t OSFileHandle, int Flags)
{
    char v2; // bl
    DWORD FileType; // eax
    DWORD LastError; // eax
    int v5; // eax
    int v6; // esi
    ObjectClass *v8; // [esp+0h] [ebp-8h]

    v2 = 0; /*0x7d9605*/
    if ( (Flags & 8) != 0 ) /*0x7d960c*/
      v2 = 32; /*0x7d960e*/
    if ( (Flags & 0x4000) != 0 ) /*0x7d9615*/
      v2 |= 0x80u; /*0x7d9617*/
    if ( (Flags & 0x80u) != 0 ) /*0x7d961e*/
      v2 |= 0x10u; /*0x7d9620*/
    FileType = GetFileType((HANDLE)OSFileHandle); /*0x7d9626*/
    switch ( FileType ) /*0x7d962e*/
    {
      case 0u: /*0x7d962e*/
        LastError = GetLastError(); /*0x7d9630*/
        _dosmaperr(LastError); /*0x7d9637*/
        return -1; /*0x7d9673*/
      case 2u: /*0x7d962e*/
        v2 |= 0x40u; /*0x7d9644*/
        break;
      case 3u: /*0x7d962e*/
        v2 |= 8u; /*0x7d964e*/
        break;
    }
    v5 = _alloc_osfhnd(v8); /*0x7d9651*/
    v6 = v5; /*0x7d9656*/
    if ( v5 == -1 ) /*0x7d965b*/
    {
      *_errno() = 24; /*0x7d9662*/
      *__doserrno() = 0; /*0x7d966d*/
      return -1; /*0x7d966d*/
    }
    _set_osfhnd(v5, (HANDLE)OSFileHandle); /*0x7d9679*/
    *(unsigned char *)(dword_B78A80[v6 >> 5] + 36 * (v6 & 0x1F) + 4) = v2 | 1; /*0x7d9696*/
    _unlock_fhandle(v6); /*0x7d969a*/
    return v6; /*0x7d96a4*/
}
} // namespace gamemd

// 0x7D96A8
namespace gamemd {
void _lock_fhandle(int a1)
{
    int v1; // edi
    int v2; // esi

    v1 = 36 * (a1 & 0x1F); /*0x7d96c8*/
    v2 = v1 + dword_B78A80[a1 >> 5]; /*0x7d96cb*/
    if ( !*(unsigned int *)(v2 + 8) ) /*0x7d96cd*/
    {
      _lock(17); /*0x7d96d5*/
      if ( !*(unsigned int *)(v2 + 8) ) /*0x7d96da*/
      {
        InitializeCriticalSection((LPCRITICAL_SECTION)(v2 + 12)); /*0x7d96e5*/
        ++*(unsigned int *)(v2 + 8); /*0x7d96eb*/
      }
      _unlock(17); /*0x7d96f0*/
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_B78A80[a1 >> 5] + v1 + 12)); /*0x7d96fd*/
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
    int v4; // esi
    unsigned __int16 v6[6]; // [esp+4h] [ebp-Ch] BYREF

    v4 = __strgtold12((int)v6, a2, a3, a4, 0, 0, 0); /*0x7d9d64*/
    if ( _ld12told(v6, a1) == 1 ) /*0x7d9d75*/
      return v4 | 2; /*0x7d9d77*/
    return v4; /*0x7d9d7c*/
}
} // namespace gamemd

// 0x7D9D7F
namespace gamemd {
int mbtowc(wchar_t * DstCh, const char * SrcCh, size_t SrcSizeInBytes)
{
    int v3; // ebx
    size_t SrcSizeInBytesa; // [esp+1Ch] [ebp+10h]

    InterlockedIncrement(&dword_B78BA4); /*0x7d9d8b*/
    v3 = 0; /*0x7d9d97*/
    if ( dword_B78BA0 ) /*0x7d9d9f*/
    {
      InterlockedDecrement(&dword_B78BA4); /*0x7d9da2*/
      _lock(19); /*0x7d9da6*/
      v3 = 1; /*0x7d9dae*/
    }
    SrcSizeInBytesa = _mbtowc_lk(DstCh, SrcCh, SrcSizeInBytes); /*0x7d9dc0*/
    if ( v3 ) /*0x7d9dc5*/
      _unlock(19); /*0x7d9dc9*/
    else
      InterlockedDecrement(&dword_B78BA4); /*0x7d9dd2*/
    return SrcSizeInBytesa; /*0x7d9dd7*/
}
} // namespace gamemd

// 0x7D9EB0
namespace gamemd {
int __allshl(long long a1, unsigned char a2)
{
    __int64 v2; // rax

    if ( a2 >= 0x40u ) /*0x7d9eb3*/
    {
      (v2) = (unsigned int)(0); /*0x7d9eca*/
    }
    else if ( a2 >= 0x20u ) /*0x7d9eb8*/
    {
      (v2) = (unsigned int)(0); /*0x7d9ec2*/
    }
    else
    {
      return a1 << (a2 & 0x1F); /*0x7d9ebd*/
    }
    return v2; /*0x7d9ebf*/
}
} // namespace gamemd

// 0x7D9ECF
namespace gamemd {
int ungetc(int Character, FILE * Stream)
{
    int v2; // esi

    _lock_file(Stream); /*0x7d9ed4*/
    v2 = ungetc_0(Character, Stream); /*0x7d9eea*/
    _unlock_file(Stream); /*0x7d9eec*/
    return v2; /*0x7d9ef6*/
}
} // namespace gamemd

// 0x7D9EF8
namespace gamemd {
int ungetc_0(int Character, FILE * Stream)
{
    int flag; // eax
    int v4; // eax

    if ( Character == -1 ) /*0x7d9f01*/
      return -1; /*0x7d9f01*/
    flag = (((_iobuf_msvc6 *)Stream)->_flag); /*0x7d9f07*/
    if ( (flag & 1) == 0 && ((flag & 0x80u) == 0 || (flag & 2) != 0) ) /*0x7d9f14*/
      return -1; /*0x7d9f14*/
    if ( !(((_iobuf_msvc6 *)Stream)->_base) ) /*0x7d9f16*/
      _getbuf(Stream); /*0x7d9f1d*/
    if ( (((_iobuf_msvc6 *)Stream)->_ptr) == (((_iobuf_msvc6 *)Stream)->_base) ) /*0x7d9f28*/
    {
      if ( (((_iobuf_msvc6 *)Stream)->_cnt) ) /*0x7d9f2a*/
        return -1; /*0x7d9f49*/
      ++(((_iobuf_msvc6 *)Stream)->_ptr); /*0x7d9f31*/
    }
    if ( ((((_iobuf_msvc6 *)Stream)->_flag) & 0x40) != 0 ) /*0x7d9f37*/
    {
      if ( *--(((_iobuf_msvc6 *)Stream)->_ptr) != (unsigned char)Character ) /*0x7d9f3f*/
      {
        ++(((_iobuf_msvc6 *)Stream)->_ptr); /*0x7d9f42*/
        return -1; /*0x7d9f42*/
      }
    }
    else
    {
      *--(((_iobuf_msvc6 *)Stream)->_ptr) = Character; /*0x7d9f4e*/
    }
    v4 = (((_iobuf_msvc6 *)Stream)->_flag); /*0x7d9f50*/
    ++(((_iobuf_msvc6 *)Stream)->_cnt); /*0x7d9f53*/
    (v4) = ((v4) & ~0xFF) | ((unsigned int)(v4 & 0xEE | 1) & 0xFF); /*0x7d9f58*/
    (((_iobuf_msvc6 *)Stream)->_flag) = v4; /*0x7d9f5a*/
    return (unsigned __int8)Character; /*0x7d9f47*/
}
} // namespace gamemd

// 0x7D9F66
namespace gamemd {
LONG ___CxxUnhandledExceptionFilter_YGJPAU_EXCEPTION_POINTERS___Z(struct _EXCEPTION_POINTERS * ExceptionInfo)
{
    PEXCEPTION_RECORD ExceptionRecord; // eax

    ExceptionRecord = ExceptionInfo->ExceptionRecord; /*0x7d9f6b*/
    if ( ExceptionInfo->ExceptionRecord->ExceptionCode == -529697949 /*0x7d9f82*/
      && ExceptionRecord->NumberParameters == 3
      && ExceptionRecord->ExceptionInformation[0] == 429065504 )
    {
      _terminate_YAXXZ(); /*0x7d9f84*/
    }
    if ( lpfn && __ValidateExecute_YAHP6GHXZ_Z((FARPROC)lpfn) ) /*0x7d9f93*/
      return lpfn(ExceptionInfo); /*0x7d9f9e*/
    else
      return 0; /*0x7d9fa6*/
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
int wcsncnt_0(CampaignScore * a1, int a2)
{
    unsigned short *v2; // eax
    int v3; // ecx
    int v4; // esi

    v2 = (unsigned short *)(a1); /*0x7da4c3*/
    v3 = a2 - 1; /*0x7da4ca*/
    if ( a2 ) /*0x7da4cd*/
    {
      do /*0x7da4dc*/
      {
        if ( !*v2 ) /*0x7da4cf*/
          break; /*0x7da4d3*/
        v4 = v3; /*0x7da4d6*/
        ++v2; /*0x7da4d8*/
        --v3; /*0x7da4d9*/
      }
      while ( v4 ); /*0x7da4dc*/
    }
    if ( *v2 ) /*0x7da4de*/
      return a2; /*0x7da4ec*/
    else
      return v2 - a1; /*0x7da4e9*/
}
} // namespace gamemd

// 0x7DA4EF
namespace gamemd {
wint_t fgetwc_0x7DA4EF(FILE * Stream)
{
    wint_t v1; // di

    _lock_file(Stream); /*0x7da4f6*/
    v1 = _getwc_lk(Stream); /*0x7da502*/
    _unlock_file(Stream); /*0x7da504*/
    return v1; /*0x7da50f*/
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
    char *v2; // esi
    const unsigned __int8 *v3; // eax
    char v4; // al

    v2 = (char *)dword_B781E4; /*0x7dab55*/
    v3 = *(const unsigned __int8 **)dword_B781E4; /*0x7dab5c*/
    if ( !*(unsigned int *)dword_B781E4 ) /*0x7dab5c*/
      return -((v2 - (unsigned char *)dword_B781E4) >> 2); /*0x7dab8f*/
    while ( 1 ) /*0x7dab6c*/
    {
      if ( !_mbsnbicoll(Str1, v3, MaxCount) ) /*0x7dab6c*/
      {
        v4 = *(unsigned char *)(*(unsigned int *)v2 + MaxCount); /*0x7dab7a*/
        if ( v4 == 61 || !v4 ) /*0x7dab83*/
          break; /*0x7dab83*/
      }
      v3 = (const unsigned __int8 *)*((unsigned int *)v2 + 1); /*0x7dab85*/
      v2 += 4; /*0x7dab88*/
      if ( !v3 ) /*0x7dab8d*/
        return -((v2 - (unsigned char *)dword_B781E4) >> 2); /*0x7dab8d*/
    }
    return (v2 - (unsigned char *)dword_B781E4) >> 2; /*0x7dab9c*/
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
    int result; // eax
    unsigned int v4; // ecx

    result = 0; /*0x7db06f*/
    v4 = a1 + a2; /*0x7db071*/
    if ( a1 + a2 < a1 || v4 < a2 ) /*0x7db07a*/
      result = 1; /*0x7db07e*/
    *a3 = v4; /*0x7db084*/
    return result; /*0x7db083*/
}
} // namespace gamemd

// 0x7DB087
namespace gamemd {
int __add_12(unsigned int * a1, unsigned int * a2)
{
    if ( __addl(*a1, *a2, a1) && __addl(a1[1], 1u, a1 + 1) ) /*0x7db0aa*/
      ++a1[2]; /*0x7db0b6*/
    if ( __addl(a1[1], a2[1], a1 + 1) ) /*0x7db0c2*/
      ++a1[2]; /*0x7db0ce*/
    return __addl(a1[2], a2[2], a1 + 2); /*0x7db0e2*/
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
    unsigned int v4; // ecx
    int v5; // esi
    int v6; // eax
    __int16 result; // ax
    unsigned int v8; // [esp+8h] [ebp-10h] BYREF
    int v9; // [esp+Ch] [ebp-Ch]
    int v10; // [esp+10h] [ebp-8h]
    int v11; // [esp+14h] [ebp-4h]
    int v12; // [esp+28h] [ebp+10h]

    v11 = 16462; /*0x7db152*/
    *(unsigned int *)a3 = 0; /*0x7db159*/
    *(unsigned int *)(a3 + 4) = 0; /*0x7db15b*/
    *(unsigned int *)(a3 + 8) = 0; /*0x7db15e*/
    if ( a2 ) /*0x7db161*/
    {
      v12 = a2; /*0x7db164*/
      do /*0x7db1af*/
      {
        v8 = *(unsigned int *)a3; /*0x7db16c*/
        v9 = *(unsigned int *)(a3 + 4); /*0x7db16d*/
        v10 = *(unsigned int *)(a3 + 8); /*0x7db16f*/
        __shl_12((unsigned int *)a3); /*0x7db170*/
        __shl_12((unsigned int *)a3); /*0x7db176*/
        __add_12((unsigned int *)a3, &v8); /*0x7db180*/
        __shl_12((unsigned int *)a3); /*0x7db186*/
        v9 = 0; /*0x7db18e*/
        v10 = 0; /*0x7db192*/
        v8 = *a1; /*0x7db199*/
        __add_12((unsigned int *)a3, &v8); /*0x7db1a1*/
        ++a1; /*0x7db1a9*/
        --v12; /*0x7db1ac*/
      }
      while ( v12 ); /*0x7db1af*/
    }
    while ( !*(unsigned int *)(a3 + 8) ) /*0x7db1b7*/
    {
      v4 = *(unsigned int *)(a3 + 4); /*0x7db1b9*/
      *(unsigned int *)(a3 + 8) = (((unsigned int)(v4) >> 16) & 0xFFFF); /*0x7db1c1*/
      v5 = (v4 << 16) | (((unsigned int)(*(unsigned int *)a3) >> 16) & 0xFFFF); /*0x7db1ce*/
      v6 = *(unsigned int *)a3 << 16; /*0x7db1d0*/
      v11 += 65520; /*0x7db1d3*/
      *(unsigned int *)(a3 + 4) = v5; /*0x7db1da*/
      *(unsigned int *)a3 = v6; /*0x7db1dd*/
    }
    while ( (*(unsigned int *)(a3 + 8) & 0x8000) == 0 ) /*0x7db1e9*/
    {
      __shl_12((unsigned int *)a3); /*0x7db1ec*/
      v11 += 0xFFFF; /*0x7db1f1*/
    }
    result = v11; /*0x7db1fb*/
    *(unsigned short *)(a3 + 10) = v11; /*0x7db200*/
    return result; /*0x7db1ff*/
}
} // namespace gamemd

// 0x7DB49A
namespace gamemd {
double _handle_qnan1(int a1, double a2, int a3)
{
    __int16 v5; // cx

    if ( dword_87D700 ) /*0x7db4a4*/
    {
      *_errno() = 33; /*0x7db4d9*/
      _ctrlfp(v5); /*0x7db4e2*/
    }
    else
    {
      _umatherr( /*0x7db4c5*/
        1,
        a1,
        IDA_SLODWORD(a2),
        IDA_SHIDWORD(a2),
        COERCE_UNSIGNED_INT64(0.0),
        IDA_HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
        a2,
        a3);
    }
    return a2; /*0x7db4cd*/
}
} // namespace gamemd

// 0x7DB4EE
namespace gamemd {
double _handle_qnan2(int a1, double a2, double a3, int a4)
{
    __int16 v6; // cx
    double v7; // [esp+1Ch] [ebp-8h]

    v7 = a2 + a3; /*0x7db500*/
    if ( dword_87D700 ) /*0x7db503*/
    {
      *_errno() = 33; /*0x7db539*/
      _ctrlfp(v6); /*0x7db542*/
      return v7; /*0x7db547*/
    }
    else
    {
      _umatherr(1, a1, IDA_SLODWORD(a2), IDA_SHIDWORD(a2), IDA_SLODWORD(a3), IDA_SHIDWORD(a3), v7, a4); /*0x7db525*/
      return a2; /*0x7db518*/
    }
}
} // namespace gamemd

// 0x7DB54E
namespace gamemd {
double _except1(DWORD dwExceptionCode, int a2, double a3, double a4, int a5)
{
    int v5; // eax
    double result; // st7
    __int16 v7; // cx
    ULONG_PTR Arguments[14]; // [esp+1Ch] [ebp-58h] BYREF
    int v9; // [esp+54h] [ebp-20h]

    if ( !_handle_exc(dwExceptionCode, &a4, a5) ) /*0x7db55e*/
    {
      v9 &= ~1u; /*0x7db56d*/
      _raise_exc((ULONG_PTR)Arguments, (int)&a5, dwExceptionCode, a2, (int)&a3, (int)&a4); /*0x7db584*/
    }
    v5 = _errcode(dwExceptionCode); /*0x7db58f*/
    if ( dword_87D700 || !v5 ) /*0x7db5a0*/
    {
      _set_errno(v5); /*0x7db5cb*/
      _ctrlfp(v7); /*0x7db5da*/
      return a4; /*0x7db5df*/
    }
    else
    {
      result = a3; /*0x7db5b4*/
      _umatherr( /*0x7db5c0*/
        v5,
        a2,
        IDA_SLODWORD(a3),
        IDA_SHIDWORD(a3),
        COERCE_UNSIGNED_INT64(0.0),
        IDA_HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
        a4,
        a5);
    }
    return result; /*0x7db5c8*/
}
} // namespace gamemd

// 0x7DB5E6
namespace gamemd {
double _except2(DWORD dwExceptionCode, int a2, double a3, double a4, double a5, int a6)
{
    int v6; // eax
    int v7; // eax
    double result; // st7
    __int16 v9; // cx
    ULONG_PTR Arguments[10]; // [esp+1Ch] [ebp-58h] BYREF
    double v11; // [esp+44h] [ebp-30h]
    int v12; // [esp+54h] [ebp-20h]

    if ( !_handle_exc(dwExceptionCode, &a5, a6) ) /*0x7db5f6*/
    {
      v6 = v12; /*0x7db602*/
      (v6) = ((v6) & ~0xFF) | ((unsigned int)(v12 & 0xE0 | 3) & 0xFF); /*0x7db607*/
      v12 = v6; /*0x7db609*/
      v11 = a4; /*0x7db620*/
      _raise_exc((ULONG_PTR)Arguments, (int)&a6, dwExceptionCode, a2, (int)&a3, (int)&a5); /*0x7db628*/
    }
    v7 = _errcode(dwExceptionCode); /*0x7db633*/
    if ( dword_87D700 || !v7 ) /*0x7db644*/
    {
      _set_errno(v7); /*0x7db670*/
      _ctrlfp(v9); /*0x7db67f*/
      return a5; /*0x7db684*/
    }
    else
    {
      result = a3; /*0x7db659*/
      _umatherr(v7, a2, IDA_SLODWORD(a3), IDA_SHIDWORD(a3), IDA_SLODWORD(a4), IDA_SHIDWORD(a4), a5, a6); /*0x7db665*/
    }
    return result; /*0x7db66d*/
}
} // namespace gamemd

// 0x7DBB55
namespace gamemd {
double _umatherr(int Value, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
    __int16 v8; // [esp-4h] [ebp-24h]

    if ( _get_fname(a2) ) /*0x7dbb5e*/
    {
      _ctrlfp(v8); /*0x7dbb9e*/
      if ( !ReturnNull5() ) /*0x7dbba7*/
        _set_errno(Value); /*0x7dbbb4*/
      return a7; /*0x7dbbba*/
    }
    else
    {
      _ctrlfp(v8); /*0x7dbbc8*/
      _set_errno(Value); /*0x7dbbd0*/
      return a7; /*0x7dbbd5*/
    }
}
} // namespace gamemd

// 0x7DBBDD
namespace gamemd {
errno_t _set_errno(int Value)
{
    errno_t result; // eax

    result = Value; /*0x7dbbdd*/
    if ( Value == 1 ) /*0x7dbbe4*/
    {
      result = (errno_t)_errno(); /*0x7dbbf9*/
      *(unsigned int *)result = 33; /*0x7dbbfe*/
    }
    else if ( Value > 1 && Value <= 3 ) /*0x7dbbeb*/
    {
      result = (errno_t)_errno(); /*0x7dbbed*/
      *(unsigned int *)result = 34; /*0x7dbbf2*/
    }
    return result; /*0x7dbbf8*/
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
    if ( (a1 & 0x20) != 0 ) /*0x7dbc30*/
      return 5; /*0x7dbc4d*/
    if ( (a1 & 8) != 0 ) /*0x7dbc38*/
      return 1; /*0x7dbc3c*/
    if ( (a1 & 4) != 0 ) /*0x7dbc40*/
      return 2; /*0x7dbc44*/
    if ( (a1 & 1) != 0 ) /*0x7dbc48*/
      return 3; /*0x7dbc4a*/
    return 2 * (a1 & 2); /*0x7dbc4d*/
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
void __statfp(short a1)
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
    char *v3; // ebx
    char v4; // al
    int v5; // eax
    char *v6; // esi
    unsigned int *v7; // esi
    __int64 v8; // [esp+4h] [ebp-Ch] BYREF
    int v9; // [esp+Ch] [ebp-4h]

    v3 = (char *)&unk_87D720 - 96; /*0x7dc104*/
    if ( a2 ) /*0x7dc10a*/
    {
      if ( a2 < 0 ) /*0x7dc10c*/
      {
        a2 = -a2; /*0x7dc118*/
        v3 = (char *)&unk_87D880 - 96; /*0x7dc11b*/
      }
      if ( !a3 ) /*0x7dc121*/
        *a1 = 0; /*0x7dc126*/
      while ( a2 ) /*0x7dc12c*/
      {
        v4 = a2; /*0x7dc130*/
        v3 += 84; /*0x7dc133*/
        a2 >>= 3; /*0x7dc136*/
        v5 = v4 & 7; /*0x7dc13a*/
        if ( v5 ) /*0x7dc13f*/
        {
          v6 = &v3[12 * v5]; /*0x7dc14a*/
          if ( *(unsigned short *)v6 >= 0x8000u ) /*0x7dc14d*/
          {
            (v8) = (unsigned int)(*(unsigned int *)v6); /*0x7dc152*/
            v7 = v6 + 4; /*0x7dc152*/
            (v8) = ((v8) & 0xFFFFFFFFULL) | ((unsigned __int64)(unsigned int)(*v7) << 32); /*0x7dc153*/
            v9 = v7[1]; /*0x7dc154*/
            --*(unsigned int *)((char *)&v8 + 2); /*0x7dc155*/
            v6 = (char *)&v8; /*0x7dc158*/
          }
          __ld12mul((int)a1, (int)v6); /*0x7dc15f*/
        }
      }
    }
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
    int v7; // esi

    v7 = HandleErrorCOM(a1, a2, a3, vt, perrinfo, lpString, (int)&a7, (void **)&perrinfo); /*0x7dc7b2*/
    if ( v7 < 0 ) /*0x7dc7b9*/
      SetErrorInfo(0, (IErrorInfo *)perrinfo); /*0x7dc7c0*/
    return v7; /*0x7dc7c8*/
}
} // namespace gamemd

// 0x7DCC74
namespace gamemd {
int sub_7DCC74(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * pperrinfo, LPCWSTR lpString, int a7)
{
    int result; // eax
    int v8; // [esp+0h] [ebp-4h]

    result = HandleErrorCOM(a1, a2, a3, vt, pperrinfo, lpString, (int)&a7, (void **)&pperrinfo); /*0x7dcc92*/
    if ( result < 0 ) /*0x7dcc9e*/
      ThrowErrorCOM(result, (int)pperrinfo, v8); /*0x7dcca4*/
    return result; /*0x7dccab*/
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
    sub_7DCE3B(this); /*0x7dcdf5*/
    if ( (a2 & 1) != 0 ) /*0x7dcdff*/
      RA2_OPDEL(this); /*0x7dce02*/
    return &this->AbstractClass; /*0x7dce0a*/
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
    const wchar_t *v2; // eax
    const wchar_t *v3; // edx
    const wchar_t *v4; // ecx
    const wchar_t *v5; // esi
    const wchar_t *v6; // edi
    wint_t v7; // ax
    wint_t v8; // ax
    wint_t v9; // ax
    int v11; // [esp+8h] [ebp-4h]
    wint_t String1a; // [esp+14h] [ebp+8h]
    const wchar_t *String2a; // [esp+18h] [ebp+Ch]

    if ( dword_B782A0 ) /*0x7dd106*/
    {
      InterlockedIncrement(&dword_B78BA4); /*0x7dd156*/
      if ( dword_B78BA0 ) /*0x7dd162*/
      {
        InterlockedDecrement(&dword_B78BA4); /*0x7dd165*/
        _lock(19); /*0x7dd16d*/
        v11 = 1; /*0x7dd173*/
      }
      else
      {
        v11 = 0; /*0x7dd17c*/
      }
      v5 = String1; /*0x7dd17f*/
      v6 = String2; /*0x7dd183*/
      do /*0x7dd1af*/
      {
        v7 = *v5++; /*0x7dd186*/
        IDA_LOWORD(String2a) = towlower_0(v7); /*0x7dd191*/
        v8 = *v6++; /*0x7dd194*/
        v9 = towlower_0(v8); /*0x7dd19a*/
        String1a = v9; /*0x7dd1a6*/
      }
      while ( (unsigned short)String2a && (unsigned short)String2a == v9 ); /*0x7dd1af*/
      if ( v11 ) /*0x7dd1b6*/
        _unlock(19); /*0x7dd1ba*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7dd1c3*/
    }
    else
    {
      v3 = String2; /*0x7dd108*/
      v4 = String1; /*0x7dd10b*/
      do /*0x7dd14c*/
      {
        IDA_LOWORD(v2) = *v4; /*0x7dd10e*/
        if ( *v4 <= 0x5Au && (unsigned __int16)v2 >= 0x41u ) /*0x7dd11b*/
          v2 += 16; /*0x7dd11d*/
        String2a = v2; /*0x7dd120*/
        IDA_LOWORD(v2) = *v3; /*0x7dd123*/
        if ( *v3 <= 0x5Au && (unsigned __int16)v2 >= 0x41u ) /*0x7dd130*/
          IDA_LOWORD(v2) = (unsigned short)v2 + 32; /*0x7dd132*/
        String1a = (unsigned __int16)v2; /*0x7dd136*/
        IDA_HIWORD(v2) = IDA_HIWORD(String2a); /*0x7dd139*/
        ++v4; /*0x7dd13c*/
        ++v3; /*0x7dd13e*/
      }
      while ( (unsigned short)String2a && (unsigned short)String2a == (unsigned short)v2 ); /*0x7dd14c*/
    }
    return (unsigned __int16)String2a - String1a; /*0x7dd1d1*/
}
} // namespace gamemd

// 0x7DD1D7
namespace gamemd {
int sub_7DD1D7()
{
    int v0; // esi

    _lock(8); /*0x7dd1da*/
    v0 = _getch(); /*0x7dd1e6*/
    _unlock(8); /*0x7dd1e8*/
    return v0; /*0x7dd1f1*/
}
} // namespace gamemd

// 0x7DD2E0
namespace gamemd {
int sub_7DD2E0()
{
    int result; // eax
    int v1; // eax
    int v2; // esi

    (result) = ((result) & ~0xFF) | ((unsigned int)(dword_87DD70) & 0xFF); /*0x7dd2e0*/
    if ( dword_87DD70 == -1 ) /*0x7dd2e9*/
    {
      v1 = _getch(); /*0x7dd2f7*/
      v2 = v1; /*0x7dd2fc*/
      if ( v1 == -1 || _putch(v1) == -1 ) /*0x7dd30d*/
        return -1; /*0x7dd313*/
      else
        return v2; /*0x7dd30f*/
    }
    else
    {
      dword_87DD70 = -1; /*0x7dd2eb*/
      return (unsigned __int8)result; /*0x7dd2f3*/
    }
}
} // namespace gamemd

// 0x7DD334
namespace gamemd {
int _kbhit()
{
    int v0; // eax
    void *v1; // esp
    int *v2; // edi
    int *i; // esi
    int v5; // [esp+0h] [ebp-10h] BYREF
    int v6; // [esp+4h] [ebp-Ch] BYREF
    DWORD NumberOfEvents; // [esp+8h] [ebp-8h] BYREF
    DWORD NumberOfEventsRead; // [esp+Ch] [ebp-4h] BYREF

    if ( dword_87DD70 == -1 ) /*0x7dd342*/
    {
      if ( hConsoleInput == (HANDLE)-2 ) /*0x7dd34f*/
        __initconin(); /*0x7dd351*/
      if ( hConsoleInput == (HANDLE)-1 ) /*0x7dd35e*/
        return 0; /*0x7dd35e*/
      if ( !GetNumberOfConsoleInputEvents(hConsoleInput, &NumberOfEvents) ) /*0x7dd369*/
        return 0; /*0x7dd369*/
      if ( !NumberOfEvents ) /*0x7dd378*/
        return 0; /*0x7dd378*/
      v0 = 20 * NumberOfEvents + 3; /*0x7dd380*/
      (v0) = ((v0) & ~0xFF) | ((unsigned int)(v0 & 0xFC) & 0xFF); /*0x7dd383*/
      v1 = alloca(v0); /*0x7dd385*/
      v2 = &v5; /*0x7dd38a*/
      if ( !&v5 /*0x7dd3b0*/
        || !PeekConsoleInputA(hConsoleInput, (PINPUT_RECORD)&v5, NumberOfEvents, &NumberOfEventsRead)
        || !NumberOfEventsRead
        || NumberOfEventsRead > NumberOfEvents )
      {
        return 0; /*0x7dd3ec*/
      }
      for ( i = &v6; *(unsigned short *)v2 != 1 || !*i || !*((unsigned char *)i + 10) && !_getextendedkeycode(i); i += 5 ) /*0x7dd3b6*/
      {
        --NumberOfEventsRead; /*0x7dd3d5*/
        v2 += 5; /*0x7dd3d8*/
        if ( !NumberOfEventsRead ) /*0x7dd3e2*/
          return 0; /*0x7dd3e2*/
      }
    }
    return 1; /*0x7dd3e9*/
}
} // namespace gamemd

// 0x7DD413
namespace gamemd {
int _ungetch(int Ch)
{
    if ( Ch == -1 || dword_87DD70 != -1 ) /*0x7dd423*/
      return -1; /*0x7dd430*/
    dword_87DD70 = (unsigned __int8)Ch; /*0x7dd42a*/
    return (unsigned __int8)Ch; /*0x7dd42f*/
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
    result = (unsigned char *)(0); /*0x7dd446*/
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
    va_list va; // [esp+8h] [ebp+8h] BYREF

    va_start(va, Format);
    return output(Format, va); /*0x7dd504*/
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
    *a1 += 4; /*0x7ddcaf*/
    return *(unsigned int *)(*a1 - 4); /*0x7ddcb7*/
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
    *a1 += 4; /*0x7ddccc*/
    return *(unsigned short *)(*a1 - 4); /*0x7ddcd5*/
}
} // namespace gamemd

// 0x7DDE13
namespace gamemd {
wchar_t * _wcsdup(CampaignScore * aP0)
{
  int v1; // eax
  wchar_t *v2; // eax

  if ( aP0 && (v1 = wcslen(aP0), (v2 = (wchar_t *)malloc(2 * v1 + 2)) != 0) ) /*0x7dde30*/
    return wcscpy( (wchar_t *)(v2), (const wchar_t *)(aP0)); /*0x7dde34*/
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

  v1 = (char *)(aP0); /*0x7dde5a*/
  v2 = strlen( (const char *)(aP0)) + 1; /*0x7dde61*/
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
    int result; // eax
    const wchar_t *v4; // edx
    const wchar_t *v5; // ecx
    wchar_t v6; // ax
    const wchar_t *v7; // esi
    const wchar_t *v8; // edi
    wint_t v9; // ax
    wint_t v10; // ax
    wint_t v11; // ax
    bool v12; // zf
    int v13; // [esp+4h] [ebp-4h]
    wint_t String1a; // [esp+10h] [ebp+8h]
    const wchar_t *String2a; // [esp+14h] [ebp+Ch]

    result = 0; /*0x7dde87*/
    if ( MaxCount ) /*0x7dde8c*/
    {
      if ( dword_B782A0 ) /*0x7dde99*/
      {
        InterlockedIncrement(&dword_B78BA4); /*0x7ddef2*/
        if ( dword_B78BA0 ) /*0x7ddefe*/
        {
          InterlockedDecrement(&dword_B78BA4); /*0x7ddf01*/
          _lock(19); /*0x7ddf09*/
          v13 = 1; /*0x7ddf0f*/
        }
        else
        {
          v13 = 0; /*0x7ddf18*/
        }
        v7 = String1; /*0x7ddf1b*/
        v8 = String2; /*0x7ddf1f*/
        do /*0x7ddf50*/
        {
          v9 = *v7++; /*0x7ddf22*/
          IDA_LOWORD(String2a) = towlower_0(v9); /*0x7ddf2d*/
          v10 = *v8++; /*0x7ddf30*/
          v11 = towlower_0(v10); /*0x7ddf36*/
          v12 = MaxCount-- == 1; /*0x7ddf3b*/
          String1a = v11; /*0x7ddf40*/
        }
        while ( !v12 && (unsigned short)String2a && (unsigned short)String2a == v11 ); /*0x7ddf50*/
        if ( v13 ) /*0x7ddf57*/
          _unlock(19); /*0x7ddf5b*/
        else
          InterlockedDecrement(&dword_B78BA4); /*0x7ddf64*/
      }
      else
      {
        v4 = String2; /*0x7dde9b*/
        v5 = String1; /*0x7dde9e*/
        do /*0x7ddee8*/
        {
          (result) = ((result) & ~0xFFFF) | ((unsigned int)(*v5) & 0xFFFF); /*0x7ddea1*/
          if ( *v5 <= 0x5Au && (unsigned __int16)result >= 0x41u ) /*0x7ddeae*/
            result += 32; /*0x7ddeb0*/
          String2a = (const wchar_t *)result; /*0x7ddeb3*/
          v6 = *v4; /*0x7ddeb6*/
          if ( *v4 <= 0x5Au && v6 >= 0x41u ) /*0x7ddec3*/
            v6 += 32; /*0x7ddec5*/
          String1a = v6; /*0x7ddec9*/
          ++v5; /*0x7ddecc*/
          ++v4; /*0x7ddece*/
          if ( !--MaxCount ) /*0x7dded2*/
            break; /*0x7dded2*/
          (result) = ((result) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(IDA_HIWORD(String2a)) & 0xFFFF) << 16); /*0x7dded8*/
          if ( !(unsigned short)String2a ) /*0x7ddede*/
            break; /*0x7ddede*/
        }
        while ( (unsigned short)String2a == v6 ); /*0x7ddee8*/
      }
      return (unsigned __int16)String2a - String1a; /*0x7ddf72*/
    }
    return result; /*0x7ddf75*/
}
} // namespace gamemd

// 0x7DDF78
namespace gamemd {
int _filelength(int FileHandle)
{
    LONG v1; // edi
    DWORD v2; // ebx

    if ( FileHandle < uNumber && (*(unsigned char *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7ddf9e*/
    {
      _lock_fhandle(FileHandle); /*0x7ddfa3*/
      v1 = _lseek_lk(FileHandle, 0, 1u); /*0x7ddfb2*/
      v2 = -1; /*0x7ddfb4*/
      if ( v1 != -1 ) /*0x7ddfbc*/
      {
        v2 = _lseek_lk(FileHandle, 0, 2u); /*0x7ddfc8*/
        if ( v1 != v2 ) /*0x7ddfcf*/
          _lseek_lk(FileHandle, v1, 0); /*0x7ddfd5*/
      }
      _unlock_fhandle(FileHandle); /*0x7ddfde*/
      return v2; /*0x7ddfe4*/
    }
    else
    {
      *_errno() = 9; /*0x7ddfef*/
      *__doserrno() = 0; /*0x7ddffa*/
      return -1; /*0x7ddffd*/
    }
}
} // namespace gamemd

// 0x7DE002
namespace gamemd {
wint_t towlower(wint_t C)
{
    wint_t v1; // bp
    wint_t result; // ax
    int v3; // edi
    wint_t v4; // bp

    v1 = C; /*0x7de003*/
    result = -1; /*0x7de007*/
    if ( C != 0xFFFF ) /*0x7de010*/
    {
      v3 = 0; /*0x7de012*/
      if ( dword_B782A0 ) /*0x7de01a*/
      {
        InterlockedIncrement(&dword_B78BA4); /*0x7de038*/
        if ( dword_B78BA0 ) /*0x7de04a*/
        {
          InterlockedDecrement(&dword_B78BA4); /*0x7de04d*/
          _lock(19); /*0x7de051*/
          v3 = 1; /*0x7de059*/
        }
        v4 = towlower_0(C); /*0x7de063*/
        if ( v3 ) /*0x7de065*/
          _unlock(19); /*0x7de069*/
        else
          InterlockedDecrement(&dword_B78BA4); /*0x7de072*/
        return v4; /*0x7de075*/
      }
      else
      {
        if ( C >= 0x41u && C <= 0x5Au ) /*0x7de026*/
          return C + 32; /*0x7de028*/
        return v1; /*0x7de02b*/
      }
    }
    return result; /*0x7de079*/
}
} // namespace gamemd

// 0x7DE07C
namespace gamemd {
wint_t towlower_0(wint_t C)
{
    int v1; // ecx
    wint_t result; // ax
    bool v3; // zf
    WCHAR DestStr; // [esp+0h] [ebp-2h] BYREF

    DestStr = (((unsigned int)(v1) >> 16) & 0xFFFF); /*0x7de07f*/
    result = C; /*0x7de080*/
    if ( C != 0xFFFF ) /*0x7de087*/
    {
      if ( dword_B782A0 ) /*0x7de095*/
      {
        if ( C >= 0x100u || iswctype(C, 1u) ) /*0x7de0b1*/
        {
          v3 = __crtLCMapStringW(dword_B782A0, 0x100u, &C, 1, &DestStr, 1, 0) == 0; /*0x7de0e3*/
          result = C; /*0x7de0e5*/
          if ( !v3 ) /*0x7de0e9*/
            return DestStr; /*0x7de0eb*/
        }
        else
        {
          return C; /*0x7de0bc*/
        }
      }
      else if ( C >= 0x41u && C <= 0x5Au ) /*0x7de0a1*/
      {
        return C + 32; /*0x7de0a3*/
      }
    }
    return result; /*0x7de08c*/
}
} // namespace gamemd

// 0x7DE0F1
namespace gamemd {
HANDLE __initconin()
{
    HANDLE result; // eax

    result = CreateFileA("CONIN$", 0xC0000000, 3u, 0, 3u, 0, 0); /*0x7de104*/
    hConsoleInput = result; /*0x7de10a*/
    return result; /*0x7de10f*/
}
} // namespace gamemd

// 0x7DE110
namespace gamemd {
HANDLE __initconout()
{
    HANDLE result; // eax

    result = CreateFileA("CONOUT$", 0x40000000u, 3u, 0, 3u, 0, 0); /*0x7de123*/
    hConsoleOutput = result; /*0x7de129*/
    return result; /*0x7de12e*/
}
} // namespace gamemd

// 0x7DE12F
namespace gamemd {
HANDLE __termcon()
{
    HANDLE result; // eax

    if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 ) /*0x7de143*/
      CloseHandle(hConsoleOutput); /*0x7de146*/
    result = hConsoleInput; /*0x7de148*/
    if ( hConsoleInput != (HANDLE)-1 && hConsoleInput != (HANDLE)-2 ) /*0x7de155*/
      return (HANDLE)CloseHandle(hConsoleInput); /*0x7de158*/
    return result; /*0x7de15a*/
}
} // namespace gamemd

// 0x7DE17D
namespace gamemd {
int _putch(int Ch)
{
    DWORD v1; // ecx
    DWORD NumberOfCharsWritten; // [esp+0h] [ebp-4h] BYREF

    NumberOfCharsWritten = v1; /*0x7de180*/
    (Ch) = ((Ch) & ~(0xFFULL << 24)) | (((unsigned __int64)(unsigned int)(Ch) & 0xFF) << 24); /*0x7de18b*/
    if ( hConsoleOutput == (HANDLE)-2 ) /*0x7de18e*/
      __initconout(); /*0x7de190*/
    if ( hConsoleOutput == (HANDLE)-1 || !WriteConsoleA(hConsoleOutput, (char *)&Ch + 3, 1u, &NumberOfCharsWritten, 0) ) /*0x7de1ac*/
      return -1; /*0x7de1bc*/
    else
      return (((unsigned int)(Ch) >> 24) & 0xFF); /*0x7de1b6*/
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
  return Voxel::FacePixelBuffer( (int *)(a1));
}
} // namespace gamemd
