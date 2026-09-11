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

// 0x7D038F
namespace gamemd {
int __sbh_heap_check()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __sbh_heap_check()
{
  _DWORD *v1; // ebx
  _DWORD *v2; // esi
  void *v3; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  _DWORD *v6; // edx
  int *v7; // esi
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // eax
  int *v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // edx
  _DWORD *v15; // ecx
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  _DWORD v20[64]; // [esp+Ch] [ebp-13Ch] BYREF
  _DWORD *v21; // [esp+10Ch] [ebp-3Ch]
  _DWORD *v22; // [esp+110h] [ebp-38h]
  int *v23; // [esp+114h] [ebp-34h]
  int v24; // [esp+118h] [ebp-30h]
  int v25; // [esp+11Ch] [ebp-2Ch]
  int *v26; // [esp+120h] [ebp-28h]
  int v27; // [esp+124h] [ebp-24h]
  int v28; // [esp+128h] [ebp-20h]
  int v29; // [esp+12Ch] [ebp-1Ch]
  int v30; // [esp+130h] [ebp-18h]
  int v31; // [esp+134h] [ebp-14h]
  int v32; // [esp+138h] [ebp-10h]
  LPVOID lp; // [esp+13Ch] [ebp-Ch]
  int v34; // [esp+140h] [ebp-8h]
  _DWORD *v35; // [esp+144h] [ebp-4h]

  if ( IsBadWritePtr(::lp, 20 * dword_B78B94) ) /*0x7d03ad*/
    return -1; /*0x7d03ba*/
  v1 = ::lp; /*0x7d03bf*/
  v22 = ::lp; /*0x7d03cd*/
  v28 = 0; /*0x7d03d0*/
  if ( dword_B78B94 <= 0 ) /*0x7d03d3*/
    return 0; /*0x7d03d3*/
  while ( 2 ) /*0x7d03dd*/
  {
    v2 = (_DWORD *)v1[4]; /*0x7d03dd*/
    if ( !IsBadWritePtr(v2, 0x41C4u) ) /*0x7d03e6*/
    {
      v3 = (void *)v1[3]; /*0x7d03f4*/
      v25 = 0; /*0x7d03f7*/
      lp = v3; /*0x7d03fa*/
      v26 = v2 + 81; /*0x7d0403*/
      v4 = v2 + 49; /*0x7d0409*/
      v31 = v1[2]; /*0x7d040f*/
      v30 = 0; /*0x7d0412*/
      v24 = 0; /*0x7d0415*/
      v21 = v4; /*0x7d0418*/
      do /*0x7d064d*/
      {
        v27 = 0; /*0x7d0421*/
        v29 = 0; /*0x7d0424*/
        v35 = 0; /*0x7d0427*/
        memset(v20, 0, sizeof(v20)); /*0x7d0436*/
        if ( v31 >= 0 ) /*0x7d0438*/
        {
          if ( IsBadWritePtr(lp, 0x8000u) ) /*0x7d0446*/
            return -4; /*0x7d0685*/
          v5 = 0; /*0x7d0457*/
          v6 = (char *)lp + 4092; /*0x7d0459*/
          while ( 2 ) /*0x7d045f*/
          {
            v7 = v6 - 1020; /*0x7d045f*/
            if ( *(v6 - 1021) != -1 || *v6 != -1 ) /*0x7d0475*/
              return -5; /*0x7d0695*/
            do /*0x7d04e1*/
            {
              v8 = *v7; /*0x7d047b*/
              v9 = *v7; /*0x7d0480*/
              if ( (*v7 & 1) != 0 ) /*0x7d0482*/
              {
                if ( --v8 > 1024 ) /*0x7d048b*/
                  return -6; /*0x7d068b*/
                v35 = (_DWORD *)((char *)v35 + 1); /*0x7d0491*/
              }
              else
              {
                v10 = (v8 >> 4) - 1; /*0x7d049b*/
                if ( v10 > 63 ) /*0x7d049f*/
                  v10 = 63; /*0x7d04a3*/
                ++v20[v10]; /*0x7d04a4*/
              }
              if ( v8 < 16 || (v8 & 0xF) != 0 || v8 > 4080 ) /*0x7d04ca*/
                return -7; /*0x7d0693*/
              v11 = (int *)((char *)v7 + v8); /*0x7d04d4*/
              if ( *(int *)((char *)v7 + v8 - 4) != v9 ) /*0x7d04d7*/
                return -8; /*0x7d04d7*/
              v7 = (int *)((char *)v7 + v8); /*0x7d04dd*/
            }
            while ( v11 < v6 ); /*0x7d04e1*/
            if ( v11 != v6 ) /*0x7d04e3*/
              return -8; /*0x7d068f*/
            v6 += 1024; /*0x7d04e9*/
            if ( ++v5 < 8 ) /*0x7d04f3*/
              continue; /*0x7d04f3*/
            break;
          }
          v12 = v26; /*0x7d04f9*/
          if ( (_DWORD *)*v26 != v35 ) /*0x7d0501*/
            return -9; /*0x7d0699*/
          v34 = 0; /*0x7d0507*/
          v35 = v20; /*0x7d0511*/
          while ( 1 ) /*0x7d0514*/
          {
            v13 = v12[1]; /*0x7d0514*/
            v32 = 0; /*0x7d0517*/
            v14 = (unsigned int)v12; /*0x7d051e*/
            v23 = v12; /*0x7d0522*/
            if ( (int *)v13 != v12 ) /*0x7d0525*/
            {
              do /*0x7d05ad*/
              {
                if ( v32 == *v35 ) /*0x7d0533*/
                  break; /*0x7d0533*/
                if ( v13 < (unsigned int)lp || v13 >= (unsigned int)lp + 0x8000 ) /*0x7d0548*/
                  return -10; /*0x7d06ab*/
                v15 = (_DWORD *)((v13 & 0xFFFFF000) + 12); /*0x7d0555*/
                v16 = (v13 & 0xFFFFF000) + 4092; /*0x7d0558*/
                do /*0x7d0573*/
                {
                  if ( v15 == (_DWORD *)v13 ) /*0x7d0568*/
                    break; /*0x7d0568*/
                  v15 = (_DWORD *)((char *)v15 + (*v15 & 0xFFFFFFFE)); /*0x7d056f*/
                }
                while ( v15 != (_DWORD *)v16 ); /*0x7d0573*/
                if ( v15 == (_DWORD *)v16 ) /*0x7d0577*/
                  return -11; /*0x7d069f*/
                v17 = (*(int *)v13 >> 4) - 1; /*0x7d0582*/
                if ( v17 > 63 ) /*0x7d0586*/
                  v17 = 63; /*0x7d058a*/
                if ( v17 != v34 ) /*0x7d058e*/
                  return -12; /*0x7d06a3*/
                if ( *(int **)(v13 + 8) != v23 ) /*0x7d059a*/
                  return -13; /*0x7d06a7*/
                ++v32; /*0x7d05a0*/
                v14 = v13; /*0x7d05a3*/
                v13 = *(_DWORD *)(v13 + 4); /*0x7d05a5*/
                v23 = (int *)v14; /*0x7d05a8*/
              }
              while ( (int *)v13 != v12 ); /*0x7d05ad*/
              if ( v32 ) /*0x7d05b7*/
              {
                if ( v34 >= 32 ) /*0x7d05bf*/
                {
                  v18 = 0x80000000 >> (v34 - 32); /*0x7d05d8*/
                  v29 |= v18; /*0x7d05da*/
                  v30 |= v18; /*0x7d05dd*/
                }
                else
                {
                  v27 |= 0x80000000 >> v34; /*0x7d05c8*/
                  v25 |= 0x80000000 >> v34; /*0x7d05cb*/
                }
              }
            }
            if ( *(int **)(v14 + 4) != v12 || v32 != *v35 ) /*0x7d05f1*/
              return -14; /*0x7d06b3*/
            if ( v12[2] != v14 ) /*0x7d05f9*/
              return -15; /*0x7d06af*/
            ++v34; /*0x7d05ff*/
            ++v35; /*0x7d0602*/
            v12 += 2; /*0x7d060a*/
            if ( v34 >= 64 ) /*0x7d060c*/
            {
              v4 = v21; /*0x7d0612*/
              v1 = v22; /*0x7d0615*/
              break; /*0x7d0615*/
            }
          }
        }
        if ( v27 != *(v4 - 32) || v29 != *v4 ) /*0x7d0629*/
          return -16; /*0x7d06b7*/
        lp = (char *)lp + 0x8000; /*0x7d062f*/
        v26 += 129; /*0x7d0636*/
        v31 *= 2; /*0x7d063d*/
        ++v24; /*0x7d0640*/
        v21 = ++v4; /*0x7d064a*/
      }
      while ( v24 < 32 ); /*0x7d064d*/
      if ( v25 != *v1 || v30 != v1[1] ) /*0x7d0660*/
        return -17; /*0x7d06b9*/
      v1 += 5; /*0x7d0662*/
      ++v28; /*0x7d0665*/
      v22 = v1; /*0x7d066b*/
      if ( v28 < dword_B78B94 ) /*0x7d0674*/
        continue; /*0x7d0674*/
      return 0; /*0x7d0680*/
    }
    break;
  }
  return -2; /*0x7d067c*/
}
}
} // namespace gamemd

// 0x7D06BE
namespace gamemd {
int int_0x7D06BE(__cdecl *__cdecl __set_new_handler_YAP6AHI_ZP6AHI_Z_Z(int (__cdecl *a1)(unsigned int)))(unsigned int)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int (__cdecl *__cdecl __set_new_handler_YAP6AHI_ZP6AHI_Z_Z(int (__cdecl *a1)(unsigned int)))(unsigned int)
{
  int (__cdecl *v1)(_DWORD); // esi

  _lock(9); /*0x7d06c1*/
  v1 = MEMORY[0xB782C8]; /*0x7d06ca*/
  MEMORY[0xB782C8] = a1; /*0x7d06d2*/
  _unlock(9); /*0x7d06d7*/
  return v1; /*0x7d06e0*/
}
}
} // namespace gamemd

// 0x7D06E2
namespace gamemd {
int sub_7D06E2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7D06E2()
{
  return MEMORY[0xB782C8]; /*0x7d06e7*/
}
}
} // namespace gamemd

// 0x7D06E8
namespace gamemd {
int _callnewh(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _callnewh(IUnknown *aP0)
{
  return stru_B782B8.sectionHead[0] && ((int (__cdecl *)(IUnknown *))stru_B782B8.sectionHead[0])(aP0); /*0x7d06ff*/
}
}
} // namespace gamemd

// 0x7D0703
namespace gamemd {
int _filbuf(MouseClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _filbuf(MouseClass *aP0)
{
  void *v1; // eax
  char *v2; // eax
  void *v3; // edx
  char *v4; // edi
  void *v5; // ecx
  unsigned __int8 *v6; // ecx
  int result; // eax

  v1 = aP0->field_C; /*0x7d0708*/
  if ( ((unsigned __int8)v1 & 0x83) == 0 || ((unsigned __int8)v1 & 0x40) != 0 ) /*0x7d0715*/
    return -1; /*0x7d0715*/
  if ( ((unsigned __int8)v1 & 2) != 0 ) /*0x7d071d*/
  {
    LOBYTE(v1) = (unsigned __int8)v1 | 0x20; /*0x7d071f*/
    aP0->field_C = v1; /*0x7d0721*/
    return -1; /*0x7d07da*/
  }
  LOBYTE(v1) = (unsigned __int8)v1 | 1; /*0x7d0729*/
  aP0->field_C = v1; /*0x7d072f*/
  if ( ((unsigned __int16)v1 & 0x10C) != 0 ) /*0x7d0732*/
    aP0->field_0 = (int)aP0->field_8; /*0x7d0740*/
  else
    _getbuf(aP0); /*0x7d0735*/
  v2 = (char *)_read((int)aP0->field_10, aP0->field_8, *(_DWORD *)aP0->__pad_18); /*0x7d074b*/
  aP0->field_4 = v2; /*0x7d0753*/
  if ( !v2 || v2 == (char *)-1 )
  {
    aP0->field_C = (void *)((int)aP0->field_C | (v2 != 0 ? 32 : 16));
    aP0->field_4 = 0; /*0x7d07d6*/
    return -1; /*0x7d07d6*/
  }
  v3 = aP0->field_C; /*0x7d075f*/
  if ( ((unsigned __int8)v3 & 0x82) == 0 )
  {
    v4 = aP0->field_10 == (void *)-1
       ? &stru_87C374.__pad_524[144]
       : (char *)(dword_B78A80[(int)aP0->field_10 >> 5] + 36 * ((int)aP0->field_10 & 0x1F));
    if ( (v4[4] & 0x82) == 0x82 ) /*0x7d0796*/
    {
      BYTE1(v3) |= 0x20u; /*0x7d0798*/
      aP0->field_C = v3; /*0x7d079b*/
    }
  }
  if ( *(_DWORD *)aP0->__pad_18 == 512 ) /*0x7d07a5*/
  {
    v5 = aP0->field_C; /*0x7d07a7*/
    if ( ((unsigned __int8)v5 & 8) != 0 && (BYTE1(v5) & 4) == 0 ) /*0x7d07b2*/
      *(_DWORD *)aP0->__pad_18 = 4096; /*0x7d07b4*/
  }
  v6 = (unsigned __int8 *)aP0->field_0; /*0x7d07bb*/
  aP0->field_4 = v2 - 1; /*0x7d07be*/
  result = *v6; /*0x7d07c1*/
  aP0->field_0 = (int)(v6 + 1); /*0x7d07c5*/
  return result; /*0x7d07c7*/
}
}
} // namespace gamemd

// 0x7D07DF
namespace gamemd {
int _read(int FileHandle, void * DstBuf, unsigned int MaxCharCount)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _read(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  int lk; // edi

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7d0805*/
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
}
} // namespace gamemd

// 0x7D0844
namespace gamemd {
unsigned int _read_lk(int FileHandle, char * lpBuffer, DWORD nNumberOfBytesToRead)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __cdecl _read_lk(int FileHandle, char *lpBuffer, DWORD nNumberOfBytesToRead)
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
  _BYTE *v20; // esi
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
    v7 = *(_BYTE *)(v6 + 4); /*0x7d0881*/
    if ( (v7 & 2) == 0 ) /*0x7d0887*/
    {
      if ( (v7 & 0x48) != 0 ) /*0x7d0890*/
      {
        v8 = *(_BYTE *)(v6 + 5); /*0x7d0892*/
        if ( v8 != 10 ) /*0x7d0897*/
        {
          --nNumberOfBytesToRead; /*0x7d0899*/
          *lpBuffer = v8; /*0x7d089c*/
          v9 = dword_B78A80[FileHandle >> 5]; /*0x7d089e*/
          v4 = lpBuffer + 1; /*0x7d08a0*/
          v22 = 1; /*0x7d08a3*/
          *(_BYTE *)(v9 + v5 + 5) = 10; /*0x7d08aa*/
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
              v20 = (_BYTE *)(dword_B78A80[FileHandle >> 5] + v5 + 4); /*0x7d09fd*/
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
                if ( (*(_BYTE *)(dword_B78A80[FileHandle >> 5] + v5 + 4) & 0x48) != 0 ) /*0x7d09af*/
                {
                  v19 = Buffer; /*0x7d09b1*/
                  if ( Buffer == 10 ) /*0x7d09b6*/
                    goto LABEL_33; /*0x7d09b6*/
                  *v3++ = 13; /*0x7d09b8*/
                  *(_BYTE *)(dword_B78A80[FileHandle >> 5] + v5 + 5) = v19; /*0x7d09be*/
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
} // namespace gamemd

// 0x7D0A20
namespace gamemd {
void * memcpy_0(void * a0, CCINIClass * aP1, AbstractClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__cdecl memcpy_0(void *a0, CCINIClass *aP1, AbstractClass *aP2)
{
  CCINIClass *v3; // esi
  CCINIClass *v4; // edi
  unsigned int v5; // ecx
  CCINIClass *result; // eax
  char *v7; // esi
  char *v8; // edi
  unsigned int v9; // ecx

  v3 = aP1; /*0x7d0a25*/
  v4 = (CCINIClass *)a0; /*0x7d0a2b*/
  if ( a0 > aP1 && a0 < &aP2->__pad_0[(int)aP1] ) /*0x7d0a3a*/
  {
    v7 = &aP1->__pad_0[(_DWORD)aP2 - 4]; /*0x7d0bb8*/
    v8 = (char *)a0 + (_DWORD)aP2 - 4; /*0x7d0bbc*/
    if ( ((unsigned __int8)v8 & 3) == 0 ) /*0x7d0bc6*/
    {
      v9 = (unsigned int)aP2 >> 2; /*0x7d0bc8*/
      if ( (unsigned int)aP2 >> 2 >= 8 ) /*0x7d0bd1*/
      {
        while ( v9 ) /*0x7d0bd4*/
        {
          *(_DWORD *)v8 = *(_DWORD *)v7; /*0x7d0bd4*/
          v7 -= 4; /*0x7d0bd4*/
          v8 -= 4; /*0x7d0bd4*/
          --v9; /*0x7d0bd4*/
        }
        switch ( (unsigned __int8)aP2 & 3 ) /*0x7d0bd7*/
        {
          case 0: /*0x7d0bd7*/
            goto TrailDown0_0;
          case 1: /*0x7d0bd7*/
            goto TrailDown1_0;
          case 2: /*0x7d0bd7*/
            goto TrailDown2_0;
          case 3: /*0x7d0bd7*/
            goto TrailDown3_0;
        }
      }
      switch ( (unsigned __int8)aP2 & 3 ) /*0x7d0cf7*/
      {
        case 0: /*0x7d0cf7*/
          goto TrailDown0_0;
        case 1: /*0x7d0cf7*/
          goto TrailDown1_0;
        case 2: /*0x7d0cf7*/
          goto TrailDown2_0;
        case 3: /*0x7d0cf7*/
          goto TrailDown3_0;
      }
    }
    switch ( (unsigned int)aP2 ) /*0x7d0c04*/
    {
      case 0u: /*0x7d0c04*/
TrailDown0_0:
        result = (CCINIClass *)a0; /*0x7d0d10*/
        break; /*0x7d0d16*/
      case 1u: /*0x7d0c04*/
TrailDown1_0:
        v8[3] = v7[3]; /*0x7d0d18*/
        result = (CCINIClass *)a0; /*0x7d0d1e*/
        break; /*0x7d0d24*/
      case 2u: /*0x7d0c04*/
TrailDown2_0:
        v8[3] = v7[3]; /*0x7d0d28*/
        v8[2] = v7[2]; /*0x7d0d31*/
        result = (CCINIClass *)a0; /*0x7d0d34*/
        break; /*0x7d0d3a*/
      case 3u: /*0x7d0c04*/
TrailDown3_0:
        v8[3] = v7[3]; /*0x7d0d3c*/
        v8[2] = v7[2]; /*0x7d0d45*/
        v8[1] = v7[1]; /*0x7d0d4b*/
        result = (CCINIClass *)a0; /*0x7d0d4e*/
        break; /*0x7d0d4e*/
      default:
        __asm { jmp dword ptr ds:loc_7D0C04+4[eax*4] } /*0x7d0bfd*/
        return result; /*0x7d0bfd*/
    }
  }
  else
  {
    if ( ((unsigned __int8)a0 & 3) != 0 ) /*0x7d0a46*/
    {
      if ( (unsigned int)aP2 >= 4 ) /*0x7d0a66*/
        __asm { jmp dword ptr ds:loc_7D0A7C+4[eax*4] } /*0x7d0a6d*/
      __asm { jmp dword ptr ds:TrailUp0_0[ecx*4]; jumptable 007D0A55 case 0 } /*0x7d0a74*/
    }
    v5 = (unsigned int)aP2 >> 2; /*0x7d0a48*/
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
        *((_DWORD *)a0 + v5 - 7) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 28]; /*0x7d0b20*/
UnwindUp6_0:
        *((_DWORD *)a0 + v5 - 6) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 24]; /*0x7d0b24*/
UnwindUp5_0:
        *((_DWORD *)a0 + v5 - 5) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 20]; /*0x7d0b2c*/
UnwindUp4_0:
        *((_DWORD *)a0 + v5 - 4) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 16]; /*0x7d0b34*/
UnwindUp3_0:
        *((_DWORD *)a0 + v5 - 3) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 12]; /*0x7d0b3c*/
UnwindUp2_0:
        *((_DWORD *)a0 + v5 - 2) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 8]; /*0x7d0b44*/
UnwindUp1_0:
        *((_DWORD *)a0 + v5 - 1) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 4]; /*0x7d0b4c*/
        v3 = (CCINIClass *)((char *)aP1 + 4 * v5); /*0x7d0b5b*/
        v4 = (CCINIClass *)((char *)a0 + 4 * v5); /*0x7d0b5d*/
UnwindUp0_0:
        switch ( (unsigned __int8)aP2 & 3 ) /*0x7d0b5f*/
        {
          case 0: /*0x7d0b5f*/
            goto TrailUp0_0;
          case 1: /*0x7d0b5f*/
            goto TrailUp1_0;
          case 2: /*0x7d0b5f*/
            goto TrailUp2_0;
          case 3: /*0x7d0b5f*/
            goto TrailUp3_0;
        }
      default:
        qmemcpy(a0, aP1, 4 * v5); /*0x7d0a53*/
        v3 = (CCINIClass *)((char *)aP1 + 4 * v5); /*0x7d0a53*/
        v4 = (CCINIClass *)((char *)a0 + 4 * v5); /*0x7d0a53*/
        switch ( (unsigned __int8)aP2 & 3 ) /*0x7d0a55*/
        {
          case 0: /*0x7d0a55*/
TrailUp0_0:
            result = (CCINIClass *)a0; /*0x7d0b78*/
            break; /*0x7d0b7e*/
          case 1: /*0x7d0a55*/
TrailUp1_0:
            v4->__pad_0[0] = v3->__pad_0[0]; /*0x7d0b80*/
            result = (CCINIClass *)a0; /*0x7d0b84*/
            break; /*0x7d0b8a*/
          case 2: /*0x7d0a55*/
TrailUp2_0:
            v4->__pad_0[0] = v3->__pad_0[0]; /*0x7d0b8c*/
            v4->__pad_0[1] = v3->__pad_0[1]; /*0x7d0b93*/
            result = (CCINIClass *)a0; /*0x7d0b96*/
            break; /*0x7d0b9c*/
          case 3: /*0x7d0a55*/
TrailUp3_0:
            v4->__pad_0[0] = v3->__pad_0[0]; /*0x7d0ba0*/
            v4->__pad_0[1] = v3->__pad_0[1]; /*0x7d0ba7*/
            v4->__pad_0[2] = v3->__pad_0[2]; /*0x7d0bad*/
            result = (CCINIClass *)a0; /*0x7d0bb0*/
            break; /*0x7d0bb6*/
        }
        break; /*0x7d0bb6*/
    }
  }
  return result; /*0x7d0b7b*/
}
}
} // namespace gamemd

// 0x7D0D55
namespace gamemd {
int _write(int FileHandle, CCINIClass * aP1, unsigned int MaxCharCount)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _write(int FileHandle, CCINIClass *aP1, unsigned int MaxCharCount)
{
  int v3; // edi

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7d0d7b*/
  {
    _lock_fhandle(FileHandle); /*0x7d0d7f*/
    v3 = _write_lk(FileHandle, aP1, MaxCharCount); /*0x7d0d93*/
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
}
} // namespace gamemd

// 0x7D0DBA
namespace gamemd {
int _write_lk(int FileHandle, unsigned char * lpBuffer, DWORD nNumberOfBytesToWrite)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _write_lk(int FileHandle, _BYTE *lpBuffer, DWORD nNumberOfBytesToWrite)
{
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // eax
  _BYTE *v7; // eax
  char *v8; // ecx
  char v9; // cl
  signed int v10; // edi
  _BYTE Buffer[1028]; // [esp+Ch] [ebp-414h] BYREF
  int v12; // [esp+410h] [ebp-10h]
  DWORD NumberOfBytesWritten; // [esp+414h] [ebp-Ch] BYREF
  DWORD v14; // [esp+418h] [ebp-8h]
  char *v15; // [esp+41Ch] [ebp-4h]
  DWORD FileHandlea; // [esp+428h] [ebp+8h]

  v14 = 0; /*0x7d0dcb*/
  v12 = 0; /*0x7d0dce*/
  if ( !nNumberOfBytesToWrite ) /*0x7d0dd1*/
    return 0; /*0x7d0dd1*/
  v4 = (_DWORD *)(4 * (FileHandle >> 5) + 12028544); /*0x7d0de0*/
  v5 = 36 * (FileHandle & 0x1F); /*0x7d0df2*/
  if ( (*(_BYTE *)(dword_B78A80[FileHandle >> 5] + v5 + 4) & 0x20) != 0 ) /*0x7d0dfa*/
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
    v15 = lpBuffer; /*0x7d0e1e*/
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
    if ( (*(_BYTE *)(*v4 + v5 + 4) & 0x40) != 0 && *lpBuffer == 26 ) /*0x7d0f23*/
      return 0; /*0x7d0dd5*/
    *_errno() = 28; /*0x7d0f2e*/
    *__doserrno() = 0; /*0x7d0f39*/
  }
  return -1; /*0x7d0f40*/
}
}
} // namespace gamemd

// 0x7D0F45
namespace gamemd {
void * realloc(CCINIClass * aP0, size_t Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__cdecl realloc(CCINIClass *aP0, size_t Size)
{
  AbstractClass *v3; // esi
  void *v4; // edi
  char *block; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // eax
  AbstractClass *Sizea; // [esp+18h] [ebp+Ch]

  if ( !aP0 ) /*0x7d0f50*/
    return malloc((AbstractClass *)Size); /*0x7d0f5b*/
  v3 = (AbstractClass *)Size; /*0x7d0f60*/
  if ( Size ) /*0x7d0f65*/
  {
    while ( 1 ) /*0x7d0f75*/
    {
      v4 = 0; /*0x7d0f75*/
      if ( (unsigned int)v3 > 0xFFFFFFE0 ) /*0x7d0f7a*/
        goto LABEL_27; /*0x7d0f7a*/
      _lock(9); /*0x7d0f82*/
      block = __sbh_find_block((INIClass *)aP0); /*0x7d0f88*/
      Sizea = (AbstractClass *)block; /*0x7d0f8e*/
      if ( block ) /*0x7d0f94*/
        break; /*0x7d0f94*/
      _unlock(9); /*0x7d1030*/
      if ( !v3 ) /*0x7d1038*/
        v3 = (AbstractClass *)1; /*0x7d103c*/
      v3 = (AbstractClass *)((unsigned int)&v3->__pad_0[15] & 0xFFFFFFF0); /*0x7d1040*/
      v4 = HeapReAlloc(hHeap, 0, aP0, (SIZE_T)v3); /*0x7d1053*/
LABEL_26:
      if ( v4 ) /*0x7d1057*/
        return v4; /*0x7d1057*/
LABEL_27:
      if ( !stru_B782B8.headNode[2] ) /*0x7d1060*/
        return v4; /*0x7d1076*/
      if ( !_callnewh((IUnknown *)v3) ) /*0x7d1063*/
        return 0; /*0x7d106b*/
    }
    if ( (unsigned int)v3 <= *(_DWORD *)&stru_87C374.__pad_1D8[56] ) /*0x7d0fa0*/
    {
      if ( __sbh_resize_block(block, aP0, v3) ) /*0x7d0fa5*/
      {
        v4 = aP0; /*0x7d0fb1*/
LABEL_22:
        _unlock(9); /*0x7d1024*/
        goto LABEL_26; /*0x7d102c*/
      }
      v4 = __sbh_alloc_block((IUnknown *)v3); /*0x7d0fbb*/
      if ( v4 ) /*0x7d0fc0*/
      {
        v6 = (AbstractClass *)(aP0[-1].unknown54 - 1); /*0x7d0fc5*/
        if ( v6 >= v3 ) /*0x7d0fc8*/
          v6 = v3; /*0x7d0fca*/
        memcpy_0(v4, aP0, v6); /*0x7d0fcf*/
        __sbh_free_block(Sizea, (INIClass *)aP0); /*0x7d0fd8*/
        goto LABEL_22; /*0x7d0fd8*/
      }
    }
    if ( !v3 ) /*0x7d0fe6*/
      v3 = (AbstractClass *)1; /*0x7d0fea*/
    v3 = (AbstractClass *)((unsigned int)&v3->__pad_0[15] & 0xFFFFFFF0); /*0x7d0fee*/
    v4 = HeapAlloc(hHeap, 0, (SIZE_T)v3); /*0x7d1000*/
    if ( v4 ) /*0x7d1004*/
    {
      v7 = (AbstractClass *)(aP0[-1].unknown54 - 1); /*0x7d1009*/
      if ( v7 >= v3 ) /*0x7d100c*/
        v7 = v3; /*0x7d100e*/
      memcpy_0(v4, aP0, v7); /*0x7d1013*/
      __sbh_free_block(Sizea, (INIClass *)aP0); /*0x7d101c*/
    }
    goto LABEL_22; /*0x7d101c*/
  }
  free(aP0); /*0x7d0f68*/
  return 0; /*0x7d1078*/
}
}
} // namespace gamemd

// 0x7D107D
namespace gamemd {
size_t _msize(CCINIClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
size_t __cdecl _msize(CCINIClass *aP0)
{
  size_t v1; // esi

  _lock(9); /*0x7d1080*/
  if ( __sbh_find_block((INIClass *)aP0) ) /*0x7d108a*/
  {
    v1 = aP0[-1].unknown54 - 9; /*0x7d109a*/
    _unlock(9); /*0x7d109d*/
  }
  else
  {
    _unlock(9); /*0x7d10a7*/
    return HeapSize(hHeap, 0, aP0); /*0x7d10bc*/
  }
  return v1; /*0x7d10c0*/
}
}
} // namespace gamemd

// 0x7D10C2
namespace gamemd {
int __crtLCMapStringA(CampaignScore * aP0, DWORD dwMapFlags, ObjectClass * aP2, int cchSrc, LPSTR lpDestStr, int cchDest, UINT CodePage, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __crtLCMapStringA(
        CampaignScore *aP0,
        DWORD dwMapFlags,
        ObjectClass *aP2,
        int cchSrc,
        LPSTR lpDestStr,
        int cchDest,
        UINT CodePage,
        int a8)
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

  if ( !stru_B782B8.sectionHead[1] ) /*0x7d10f0*/
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, 0, 0) ) /*0x7d1104*/
    {
      stru_B782B8.sectionHead[1] = 1; /*0x7d110e*/
    }
    else
    {
      if ( !LCMapStringA(0, 0x100u, byte_7F98E4, 1, 0, 0) ) /*0x7d1128*/
        return 0; /*0x7d1263*/
      stru_B782B8.sectionHead[1] = 2; /*0x7d112e*/
    }
  }
  if ( cchSrc > 0 ) /*0x7d113b*/
    cchSrc = (int)strncnt(aP2, cchSrc); /*0x7d114a*/
  if ( stru_B782B8.sectionHead[1] == 2 ) /*0x7d1155*/
    return LCMapStringA((LCID)aP0, dwMapFlags, aP2->__pad_0, cchSrc, lpDestStr, cchDest); /*0x7d116f*/
  if ( stru_B782B8.sectionHead[1] != 1 ) /*0x7d1177*/
    return 0; /*0x7d1177*/
  if ( !CodePage ) /*0x7d1180*/
    CodePage = ::CodePage; /*0x7d1187*/
  v9 = MultiByteToWideChar(CodePage, a8 != 0 ? 9 : 1, aP2->__pad_0, cchSrc, 0, 0);
  v10 = v9; /*0x7d11a7*/
  v22 = v9; /*0x7d11a9*/
  if ( !v9 ) /*0x7d11ae*/
    return 0; /*0x7d11ae*/
  v11 = 2 * v9 + 3; /*0x7d11ba*/
  LOBYTE(v11) = v11 & 0xFC; /*0x7d11bd*/
  v12 = alloca(v11); /*0x7d11bf*/
  ms_exc.old_esp = (DWORD)v18; /*0x7d11c4*/
  lpWideCharStr = v18; /*0x7d11c9*/
  ms_exc.registration.TryLevel = -1; /*0x7d11cc*/
  if ( !v18 ) /*0x7d11e8*/
    return 0; /*0x7d11e8*/
  if ( !MultiByteToWideChar(CodePage, 1u, aP2->__pad_0, cchSrc, lpWideCharStr, v10) ) /*0x7d11f9*/
    return 0; /*0x7d11f9*/
  v13 = LCMapStringW((LCID)aP0, dwMapFlags, lpWideCharStr, v10, 0, 0); /*0x7d120f*/
  v14 = v13; /*0x7d1215*/
  v19 = v13; /*0x7d1217*/
  if ( !v13 ) /*0x7d121c*/
    return 0; /*0x7d121c*/
  if ( (dwMapFlags & 0x400) != 0 )
  {
    if ( cchDest /*0x7d1242*/
      && (v13 > cchDest || !LCMapStringW((LCID)aP0, dwMapFlags, lpWideCharStr, v10, (LPWSTR)lpDestStr, cchDest)) )
    {
      return 0; /*0x7d124a*/
    }
  }
  else
  {
    v15 = 2 * v13 + 3; /*0x7d126e*/
    LOBYTE(v15) = v15 & 0xFC; /*0x7d1271*/
    v16 = alloca(v15); /*0x7d1273*/
    ms_exc.old_esp = (DWORD)v18; /*0x7d1278*/
    v21 = v18; /*0x7d127d*/
    ms_exc.registration.TryLevel = -1; /*0x7d1280*/
    if ( !v18 || !LCMapStringW((LCID)aP0, dwMapFlags, lpWideCharStr, v22, v18, v14) ) /*0x7d12aa*/
      return 0; /*0x7d12aa*/
    v17 = cchDest
        ? WideCharToMultiByte(CodePage, 0x220u, v18, v14, lpDestStr, cchDest, 0, 0)
        : WideCharToMultiByte(CodePage, 0x220u, v18, v14, 0, 0, 0, 0);
    v14 = v17; /*0x7d12d5*/
    if ( !v17 ) /*0x7d12d9*/
      return 0; /*0x7d12d9*/
  }
  return v14; /*0x7d1255*/
}
}
} // namespace gamemd

// 0x7D1311
namespace gamemd {
int _isctype(int C, int Type)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _isctype(int C, int Type)
{
  int v2; // ecx
  int v3; // eax
  int result; // eax
  int SrcStr; // [esp+0h] [ebp-4h] BYREF

  SrcStr = v2; /*0x7d1314*/
  if ( (unsigned int)(C + 1) <= 0x100 ) /*0x7d1321*/
  {
    v3 = *((unsigned __int16 *)MEMORY[0x87C590] + C); /*0x7d1329*/
    return Type & v3; /*0x7d1381*/
  }
  if ( *((char *)MEMORY[0x87C590] + 2 * BYTE1(C) + 1) >= 0 ) /*0x7d1344*/
  {
    LOWORD(SrcStr) = (unsigned __int8)C; /*0x7d1358*/
    result = __crtGetStringTypeA(1u, (LPCSTR)&SrcStr, 1, (LPWORD)&C + 1, 0, 0, 1); /*0x7d136f*/
  }
  else
  {
    LOBYTE(SrcStr) = BYTE1(C); /*0x7d134a*/
    *(_WORD *)((char *)&SrcStr + 1) = (unsigned __int8)C; /*0x7d134d*/
    result = __crtGetStringTypeA(1u, (LPCSTR)&SrcStr, 2, (LPWORD)&C + 1, 0, 0, 1); /*0x7d1352*/
  }
  if ( result ) /*0x7d1379*/
  {
    v3 = HIWORD(C); /*0x7d137d*/
    return Type & v3; /*0x7d137d*/
  }
  return result; /*0x7d137b*/
}
}
} // namespace gamemd

// 0x7D1386
namespace gamemd {
int _mtinit()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int _mtinit()
{
  DWORD *v0; // eax
  DWORD *v1; // esi
  DWORD CurrentThreadId; // eax

  _mtinitlocks(); /*0x7d1387*/
  MEMORY[0x87C7A8] = TlsAlloc(); /*0x7d1395*/
  if ( MEMORY[0x87C7A8] == -1 ) /*0x7d139a*/
    return 0; /*0x7d139a*/
  v0 = (DWORD *)calloc(1u, 0x74u); /*0x7d13a0*/
  v1 = v0; /*0x7d13a5*/
  if ( !v0 || !TlsSetValue(MEMORY[0x87C7A8], v0) ) /*0x7d13b4*/
    return 0; /*0x7d13d6*/
  _initptd(v1); /*0x7d13bf*/
  CurrentThreadId = GetCurrentThreadId(); /*0x7d13c5*/
  v1[1] = -1; /*0x7d13cb*/
  *v1 = CurrentThreadId; /*0x7d13d1*/
  return 1; /*0x7d13d4*/
}
}
} // namespace gamemd

// 0x7D13F8
namespace gamemd {
int _initptd(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _initptd(int a1)
{
  *(_DWORD *)(a1 + 80) = &MEMORY[0x87CB20]; /*0x7d13fc*/
  *(_DWORD *)(a1 + 20) = 1; /*0x7d1403*/
  return a1; /*0x7d140a*/
}
}
} // namespace gamemd

// 0x7D140B
namespace gamemd {
unsigned int * _getptd()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl _getptd()
{
  DWORD LastError; // edi
  _DWORD *Value; // esi
  _DWORD *v2; // eax
  DWORD CurrentThreadId; // eax

  LastError = GetLastError(); /*0x7d1419*/
  Value = TlsGetValue(MEMORY[0x87C7A8]); /*0x7d1421*/
  if ( !Value ) /*0x7d1425*/
  {
    v2 = calloc(1u, 0x74u); /*0x7d142b*/
    Value = v2; /*0x7d1430*/
    if ( !v2 || !TlsSetValue(MEMORY[0x87C7A8], v2) ) /*0x7d143f*/
      _amsg_exit(0x10u); /*0x7d1460*/
    _initptd(Value); /*0x7d144a*/
    CurrentThreadId = GetCurrentThreadId(); /*0x7d1450*/
    Value[1] = -1; /*0x7d1456*/
    *Value = CurrentThreadId; /*0x7d145a*/
  }
  SetLastError(LastError); /*0x7d1467*/
  return Value; /*0x7d146f*/
}
}
} // namespace gamemd

// 0x7D1518
namespace gamemd {
int GetCurrentThread()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
HANDLE __stdcall GetCurrentThread()
{
  return __imp_GetCurrentThread();
}
}
} // namespace gamemd

// 0x7D151E
namespace gamemd {
int _fltin2(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _fltin2(int a1, int a2)
{
  int v2; // edi
  char v3; // bl
  int v4; // eax
  int v6; // ecx
  double v7; // st7
  _BYTE v8[12]; // [esp+Ch] [ebp-18h] BYREF
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
  *(_DWORD *)a1 = v2; /*0x7d1590*/
  *(double *)(a1 + 16) = v7; /*0x7d1593*/
  *(_DWORD *)(a1 + 4) = v6; /*0x7d1597*/
  return a1; /*0x7d1596*/
}
}
} // namespace gamemd

// 0x7D15A0
namespace gamemd {
size_t strlen(const char * Str)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
size_t __cdecl strlen(const char *Str)
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
      v3 = (*(_DWORD *)v1 + 2130640639) ^ ~*(_DWORD *)v1; /*0x7d15c0*/
      v1 += 4; /*0x7d15ce*/
    }
    while ( (v3 & 0x81010100) == 0 ); /*0x7d15d6*/
    v4 = *((_DWORD *)v1 - 1); /*0x7d15d8*/
    if ( !(_BYTE)v4 ) /*0x7d15dd*/
      break; /*0x7d15dd*/
    if ( !BYTE1(v4) ) /*0x7d15e1*/
      return v1 - 3 - Str; /*0x7d1610*/
    if ( (v4 & 0xFF0000) == 0 ) /*0x7d15e8*/
      return v1 - 2 - Str; /*0x7d1606*/
    if ( (v4 & 0xFF000000) == 0 ) /*0x7d15ef*/
      return v1 - 1 - Str; /*0x7d15ef*/
  }
  return v1 - 4 - Str; /*0x7d15fc*/
}
}
} // namespace gamemd

// 0x7D161B
namespace gamemd {
int * _dosmaperr(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__cdecl _dosmaperr(unsigned int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  int *result; // eax

  v1 = 0; /*0x7d1625*/
  *__doserrno() = a1; /*0x7d1627*/
  v2 = &MEMORY[0x87C7B0]; /*0x7d1629*/
  do /*0x7d163b*/
  {
    if ( a1 == *v2 ) /*0x7d1630*/
    {
      result = _errno(); /*0x7d1654*/
      *result = MEMORY[0x87C7B4][2 * v1]; /*0x7d1661*/
      return result; /*0x7d1663*/
    }
    v2 += 2; /*0x7d1632*/
    ++v1; /*0x7d1635*/
  }
  while ( (int)v2 < (int)MEMORY[0x87C918] ); /*0x7d163b*/
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
}
} // namespace gamemd

// 0x7D16A0
namespace gamemd {
unsigned char * _mbsdec(const unsigned char * Start, const unsigned char * Pos)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 *__cdecl _mbsdec(const unsigned __int8 *Start, const unsigned __int8 *Pos)
{
  const unsigned __int8 *v3; // esi

  if ( Start >= Pos ) /*0x7d16aa*/
    return 0; /*0x7d16ac*/
  if ( !dword_B7885C ) /*0x7d16b7*/
    return (unsigned __int8 *)(Pos - 1); /*0x7d16b9*/
  _lock(25); /*0x7d16c0*/
  v3 = Pos - 1; /*0x7d16c9*/
  if ( (byte_B78961[*(Pos - 1)] & 4) != 0 ) /*0x7d16d4*/
  {
    _unlock(25); /*0x7d16d8*/
    return (unsigned __int8 *)(Pos - 2); /*0x7d16de*/
  }
  else
  {
    do /*0x7d16f4*/
      --v3; /*0x7d16e3*/
    while ( Start <= v3 && (byte_B78961[*v3] & 4) != 0 ); /*0x7d16f4*/
    _unlock(25); /*0x7d16f8*/
    return (unsigned __int8 *)&Pos[-(((_BYTE)Pos - (_BYTE)v3) & 1) - 1]; /*0x7d1709*/
  }
}
}
} // namespace gamemd

// 0x7D170D
namespace gamemd {
int _input(FILE * Stream, char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _input(FILE *Stream, char *a2, int a3)
{
  char *v3; // esi
  unsigned __int8 v4; // al
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
  unsigned __int8 v33; // al
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // al
  int v36; // esi
  wchar_t *v37; // esi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rax
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
  _BYTE v54[32]; // [esp+16Ch] [ebp-64h] BYREF
  int v55; // [esp+18Ch] [ebp-44h]
  wchar_t DstCh; // [esp+192h] [ebp-3Eh] BYREF
  int v57; // [esp+194h] [ebp-3Ch]
  char SrcCh[3]; // [esp+198h] [ebp-38h] BYREF
  char v59; // [esp+19Bh] [ebp-35h]
  int v60; // [esp+19Ch] [ebp-34h]
  wchar_t *v61; // [esp+1A0h] [ebp-30h]
  wchar_t *v62; // [esp+1A4h] [ebp-2Ch]
  __int64 v63; // [esp+1A8h] [ebp-28h]
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
    if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7d1743*/
      v6 = *((_BYTE *)MEMORY[0x87C590] + 2 * v4) & 8; /*0x7d1760*/
    else
      v6 = _isctype(v4, 8); /*0x7d174b*/
    if ( v6 ) /*0x7d1765*/
    {
      --v76; /*0x7d1767*/
      v7 = _whiteout((int)&v76, v5); /*0x7d1770*/
      _un_inc(v7, v5); /*0x7d1778*/
      v8 = (unsigned __int8)*++v3; /*0x7d177d*/
      for ( i = isspace(v8); i; i = isspace(v10) ) /*0x7d1783*/
        v10 = (unsigned __int8)*++v3; /*0x7d178f*/
    }
    if ( *v3 != 37 ) /*0x7d17a0*/
    {
      ++v76; /*0x7d207f*/
      v46 = fgetc_0(v5); /*0x7d2088*/
      v47 = (unsigned __int8)*v3++; /*0x7d208b*/
      C = v46; /*0x7d2091*/
      v78 = (int)v3; /*0x7d2094*/
      if ( v47 == v46 ) /*0x7d2097*/
      {
        if ( *((char *)MEMORY[0x87C590] + 2 * (unsigned __int8)v46 + 1) >= 0 ) /*0x7d20a7*/
          goto LABEL_247; /*0x7d20a7*/
        ++v76; /*0x7d20a9*/
        v48 = fgetc_0(v5); /*0x7d20ad*/
        v49 = (unsigned __int8)*v3++; /*0x7d20b3*/
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
      v12 = (unsigned __int8)*++v3; /*0x7d17d4*/
      if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7d17e0*/
        v13 = *((_BYTE *)MEMORY[0x87C590] + 2 * (unsigned __int8)v12) & 4; /*0x7d17fd*/
      else
        v13 = _isctype((unsigned __int8)v12, 4); /*0x7d17e8*/
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
    v57 = (unsigned __int8)*v3 | 0x20; /*0x7d18ca*/
    v14 = v57; /*0x7d18c4*/
    if ( v57 != 110 ) /*0x7d18cd*/
    {
      if ( v57 == 99 || v57 == 123 ) /*0x7d18d7*/
      {
        ++v76; /*0x7d18eb*/
        v15 = fgetc_0(Stream); /*0x7d18ee*/
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
          v30 = MEMORY[0x87C918]; /*0x7d1c74*/
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
            v31 = fgetc_0(Stream); /*0x7d1c16*/
            v16 = v31; /*0x7d1c1b*/
            C = v31; /*0x7d1c21*/
            if ( (_BYTE)v31 == 120 || (_BYTE)v31 == 88 ) /*0x7d1c29*/
            {
              ++v76; /*0x7d1c58*/
              v16 = fgetc_0(Stream); /*0x7d1c61*/
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
            v16 = fgetc_0(Stream); /*0x7d1c01*/
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
              LOBYTE(v32) = 93; /*0x7d1c98*/
              ++v30; /*0x7d1c9a*/
              v54[11] = 32; /*0x7d1c9b*/
            }
            else
            {
              LOBYTE(v32) = v59; /*0x7d1ca1*/
            }
            while ( 1 ) /*0x7d1ca4*/
            {
              v33 = *v30; /*0x7d1ca4*/
              if ( *v30 == 93 ) /*0x7d1ca8*/
                break; /*0x7d1ca8*/
              ++v30; /*0x7d1caa*/
              if ( v33 == 45 && (_BYTE)v32 && (v34 = *v30, *v30 != 93) ) /*0x7d1cb8*/
              {
                ++v30; /*0x7d1cba*/
                if ( (unsigned __int8)v32 >= v34 ) /*0x7d1cbd*/
                {
                  v35 = v32; /*0x7d1cc3*/
                  LOBYTE(v32) = v34; /*0x7d1cc5*/
                }
                else
                {
                  v35 = v34; /*0x7d1cbf*/
                }
                if ( (unsigned __int8)v32 <= v35 ) /*0x7d1cc9*/
                {
                  v32 = (unsigned __int8)v32; /*0x7d1ccb*/
                  v36 = v35 - (unsigned __int8)v32 + 1; /*0x7d1cd3*/
                  do /*0x7d1cea*/
                  {
                    v54[v32 >> 3] |= 1 << (v32 & 7); /*0x7d1ce6*/
                    ++v32; /*0x7d1ce8*/
                    --v36; /*0x7d1ce9*/
                  }
                  while ( v36 ); /*0x7d1cea*/
                }
                LOBYTE(v32) = 0; /*0x7d1cec*/
              }
              else
              {
                LOBYTE(v32) = v33; /*0x7d1cf3*/
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
                v39 = fgetc_0(Stream); /*0x7d1d4a*/
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
                    if ( *((char *)MEMORY[0x87C590] + 2 * (unsigned __int8)v39 + 1) < 0 ) /*0x7d1d93*/
                    {
                      ++v76; /*0x7d1d95*/
                      SrcCh[1] = fgetc_0(Stream); /*0x7d1d9f*/
                    }
                    mbtowc(&DstCh, SrcCh, MEMORY[0x87C79C]); /*0x7d1db0*/
                    *v37++ = DstCh; /*0x7d1dbc*/
                  }
                  else
                  {
                    *(_BYTE *)v37 = v39; /*0x7d1dc3*/
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
                      *(_BYTE *)v62 = 0; /*0x7d1e14*/
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
          if ( (unsigned __int8)*v77 == C ) /*0x7d1b9e*/
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
        v16 = fgetc_0(Stream); /*0x7d1e50*/
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
                if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7d1e75*/
                  v40 = *((_BYTE *)MEMORY[0x87C590] + 2 * v16) & 0x80; /*0x7d1e8e*/
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
                if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7d1ec4*/
                  v41 = *((_BYTE *)MEMORY[0x87C590] + 2 * v16) & 4; /*0x7d1eda*/
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
              v16 = fgetc_0(Stream); /*0x7d1f33*/
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
                if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7d1fc3*/
                  v45 = *((_BYTE *)MEMORY[0x87C590] + 2 * v16) & 0x80; /*0x7d1fdc*/
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
                if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7d1f89*/
                  v43 = *((_BYTE *)MEMORY[0x87C590] + 2 * v16) & 4; /*0x7d1f9f*/
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
              v16 = fgetc_0(Stream); /*0x7d2011*/
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
        v30 = MEMORY[0x87C920]; /*0x7d1b64*/
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
      v17 = fgetc_0(Stream); /*0x7d199b*/
      C = v17; /*0x7d199e*/
LABEL_70:
      if ( !v64 || v74 > 349 ) /*0x7d19b3*/
        v74 = 349; /*0x7d19b5*/
      while ( (int)MEMORY[0x87C79C] <= 1 ? *((_BYTE *)MEMORY[0x87C590] + 2 * v17) & 4 : _isctype(v17, 4) )
      {
        if ( !v74-- ) /*0x7d19e0*/
          break; /*0x7d19e8*/
        ++v65; /*0x7d19ea*/
        *v18++ = v17; /*0x7d19ed*/
        ++v76; /*0x7d19f0*/
        v17 = fgetc_0(v19); /*0x7d19f9*/
        C = v17; /*0x7d19fc*/
      }
      if ( MEMORY[0x87C7A0][0] == (_BYTE)v17 )
      {
        if ( v74-- )
        {
          ++v76; /*0x7d1a13*/
          v17 = fgetc_0(v19); /*0x7d1a1c*/
          *v18 = MEMORY[0x87C7A0][0]; /*0x7d1a23*/
          C = v17; /*0x7d1a26*/
          ++v18; /*0x7d1a29*/
          while ( (int)MEMORY[0x87C79C] <= 1 ? *((_BYTE *)MEMORY[0x87C590] + 2 * v17) & 4 : _isctype(v17, 4) )
          {
            if ( !v74-- ) /*0x7d1a4e*/
              break; /*0x7d1a56*/
            ++v65; /*0x7d1a58*/
            *v18++ = v17; /*0x7d1a5b*/
            ++v76; /*0x7d1a5e*/
            v17 = fgetc_0(v19); /*0x7d1a67*/
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
          v26 = fgetc_0(v19); /*0x7d1a99*/
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
          while ( (int)MEMORY[0x87C79C] <= 1 ? *((_BYTE *)MEMORY[0x87C590] + 2 * v17) & 4 : _isctype(v17, 4) )
          {
            if ( !v74-- ) /*0x7d1af5*/
              break; /*0x7d1afd*/
            ++v65; /*0x7d1aff*/
            *v18++ = v17; /*0x7d1b02*/
LABEL_97:
            ++v76; /*0x7d1ac2*/
            v17 = fgetc_0(v19); /*0x7d1acb*/
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
          MEMORY[0x87C4D8](); /*0x7d1b3d*/
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
      *(_QWORD *)v62 = v63; /*0x7d205a*/
    }
    else if ( v73 ) /*0x7d206b*/
    {
      *(_DWORD *)v62 = v11; /*0x7d206d*/
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
      if ( *v3 == 37 && *(_BYTE *)(v78 + 1) == 110 ) /*0x7d20d3*/
      {
        v3 = (char *)v78; /*0x7d20d5*/
        goto LABEL_251; /*0x7d20d5*/
      }
LABEL_257:
      result = v60; /*0x7d2119*/
      if ( !v60 && !v69 ) /*0x7d2123*/
        return -1; /*0x7d2125*/
      return result; /*0x7d2128*/
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
  return v60; /*0x7d212d*/
}
}
} // namespace gamemd

// 0x7D2132
namespace gamemd {
unsigned int _hextodec(int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __cdecl _hextodec(int C)
{
  int v1; // esi
  int v2; // eax

  v1 = C; /*0x7d213c*/
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7d213a*/
    v2 = *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 4; /*0x7d2158*/
  else
    v2 = _isctype(C, 4); /*0x7d2143*/
  if ( !v2 ) /*0x7d215d*/
    return (C & 0xFFFFFFDF) - 7; /*0x7d2162*/
  return v1; /*0x7d2167*/
}
}
} // namespace gamemd

// 0x7D2169
namespace gamemd {
int fgetc_0(FILE * Stream)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl fgetc_0(FILE *Stream)
{
  if ( --Stream->_cnt < 0 ) /*0x7d216d*/
    return _filbuf(Stream); /*0x7d217c*/
  return *(unsigned __int8 *)Stream->_ptr++; /*0x7d217a*/
}
}
} // namespace gamemd

// 0x7D21BE
namespace gamemd {
int _woutput(FILE * File, CampaignScore * aP1, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _woutput(FILE *File, CampaignScore *aP1, ObjectClass *aP2)
{
  int v4; // ecx
  wchar_t v5; // bx
  bool v6; // zf
  int v7; // eax
  int int_arg_0; // eax
  int v9; // eax
  int v10; // esi
  ObjectClass *v11; // eax
  ObjectClass *v12; // ecx
  int v13; // eax
  __int16 *v14; // eax
  char *v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  ObjectClass *i; // eax
  int v19; // edx
  _WORD *v20; // eax
  __int64 int64_arg_0; // rax
  unsigned __int64 v22; // rdi
  int v23; // eax
  int v24; // ebx
  unsigned __int64 v25; // kr08_8
  char *v26; // eax
  int v27; // eax
  char v28; // bl
  _DWORD *v29; // esi
  char *v30; // edi
  int v31; // ebx
  int v32; // eax
  CampaignScore *v33; // eax
  wchar_t DstCh[255]; // [esp+Ch] [ebp-450h] BYREF
  _BYTE v36[513]; // [esp+20Bh] [ebp-251h] BYREF
  _DWORD v37[2]; // [esp+40Ch] [ebp-50h] BYREF
  __int64 v38; // [esp+414h] [ebp-48h]
  int v39; // [esp+41Ch] [ebp-40h]
  wchar_t WCh[2]; // [esp+420h] [ebp-3Ch] BYREF
  int v41; // [esp+424h] [ebp-38h]
  int v42; // [esp+428h] [ebp-34h]
  int v43; // [esp+42Ch] [ebp-30h]
  int v44; // [esp+430h] [ebp-2Ch]
  int v45; // [esp+434h] [ebp-28h]
  char SrcCh[2]; // [esp+43Ah] [ebp-22h] BYREF
  int v47; // [esp+43Ch] [ebp-20h] BYREF
  int v48; // [esp+440h] [ebp-1Ch]
  int v49; // [esp+444h] [ebp-18h]
  int v50; // [esp+448h] [ebp-14h] BYREF
  int v51; // [esp+44Ch] [ebp-10h]
  char *v52; // [esp+450h] [ebp-Ch]
  int j; // [esp+454h] [ebp-8h]
  int v54; // [esp+458h] [ebp-4h]
  CampaignScore *aP1a; // [esp+468h] [ebp+Ch]

  aP1a = (CampaignScore *)&aP1->__pad_0[2]; /*0x7d21ca*/
  v4 = 0; /*0x7d21cf*/
  v5 = *(_WORD *)aP1->__pad_0; /*0x7d21d1*/
  v6 = *(_WORD *)aP1->__pad_0 == 0; /*0x7d21d5*/
  j = 0; /*0x7d21d9*/
  v50 = 0; /*0x7d21dc*/
  if ( !v6 ) /*0x7d21df*/
  {
    while ( 1 ) /*0x7d21ec*/
    {
      if ( v50 < 0 ) /*0x7d21ef*/
        return v50; /*0x7d21ef*/
      if ( v5 < 0x20u || v5 > 0x78u ) /*0x7d2201*/
        v7 = 0; /*0x7d2211*/
      else
        v7 = byte_7F97CC[v5] & 0xF; /*0x7d220c*/
      v41 = byte_7F97EC[8 * v7 + v4] >> 4; /*0x7d2221*/
      switch ( v41 ) /*0x7d222c*/
      {
        case 0: /*0x7d222c*/
          goto $NORMAL_STATE$1749;
        case 1: /*0x7d222c*/
          v51 = -1; /*0x7d2233*/
          v42 = 0; /*0x7d2237*/
          v43 = 0; /*0x7d223a*/
          v45 = 0; /*0x7d223d*/
          v49 = 0; /*0x7d2240*/
          v54 = 0; /*0x7d2243*/
          v48 = 0; /*0x7d2246*/
          goto LABEL_167; /*0x7d2249*/
        case 2: /*0x7d222c*/
          switch ( v5 ) /*0x7d2253*/
          {
            case ' ': /*0x7d2253*/
              v54 |= 2u; /*0x7d2290*/
              break;
            case '#': /*0x7d2253*/
              LOBYTE(v54) = v54 | 0x80; /*0x7d2287*/
              break;
            case '+': /*0x7d2253*/
              v54 |= 1u; /*0x7d227e*/
              break;
            case '-': /*0x7d2253*/
              v54 |= 4u; /*0x7d2275*/
              break;
            case '0': /*0x7d2253*/
              v54 |= 8u; /*0x7d226c*/
              break;
          }
          goto LABEL_167; /*0x7d2270*/
        case 3: /*0x7d222c*/
          if ( v5 == 42 ) /*0x7d229d*/
          {
            int_arg_0 = get_int_arg_0((ObjectClass *)&aP2); /*0x7d22a3*/
            v45 = int_arg_0; /*0x7d22ab*/
            if ( int_arg_0 >= 0 ) /*0x7d22ae*/
              goto LABEL_167; /*0x7d22ae*/
            v54 |= 4u; /*0x7d22b4*/
            v9 = -int_arg_0; /*0x7d22b8*/
          }
          else
          {
            v9 = v5 + 10 * v45 - 48; /*0x7d22cb*/
          }
          v45 = v9; /*0x7d22ba*/
          goto LABEL_167; /*0x7d22bd*/
        case 4: /*0x7d222c*/
          v51 = 0; /*0x7d22d1*/
          goto LABEL_167; /*0x7d22d4*/
        case 5: /*0x7d222c*/
          if ( v5 == 42 ) /*0x7d22dd*/
          {
            v51 = get_int_arg_0((ObjectClass *)&aP2); /*0x7d22eb*/
            if ( v51 < 0 ) /*0x7d22ee*/
              v51 = -1; /*0x7d22f4*/
          }
          else
          {
            v51 = v5 + 10 * v51 - 48; /*0x7d230a*/
          }
          goto LABEL_167; /*0x7d22f8*/
        case 6: /*0x7d222c*/
          switch ( v5 ) /*0x7d2318*/
          {
            case 'I': /*0x7d2318*/
              if ( *(_WORD *)aP1a->__pad_0 == 54 && *(_WORD *)&aP1a->__pad_0[2] == 52 ) /*0x7d2347*/
              {
                aP1a = (CampaignScore *)((char *)aP1a + 4); /*0x7d2349*/
                BYTE1(v54) |= 0x80u; /*0x7d234d*/
              }
              else
              {
                v41 = 0; /*0x7d2356*/
$NORMAL_STATE$1749: /*0x7d2359*/
                v48 = 1; /*0x7d2359*/
                write_char_0(v5, File, &v50); /*0x7d2368*/
              }
              break;
            case 'h': /*0x7d2318*/
              v54 |= 0x20u; /*0x7d2331*/
              break;
            case 'w': /*0x7d2318*/
              BYTE1(v54) |= 8u; /*0x7d2328*/
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
                v20 = (_WORD *)get_int_arg_0((ObjectClass *)&aP2); /*0x7d2672*/
                if ( (v54 & 0x20) != 0 ) /*0x7d267c*/
                  *v20 = v50; /*0x7d2682*/
                else
                  *(_DWORD *)v20 = v50; /*0x7d268a*/
                v43 = 1; /*0x7d268c*/
                goto LABEL_167; /*0x7d2693*/
              case 'o': /*0x7d25bd*/
                j = 8; /*0x7d265f*/
                if ( (v54 & 0x80u) != 0 ) /*0x7d2666*/
                  BYTE1(v54) |= 2u; /*0x7d2668*/
LABEL_113:
                if ( (v54 & 0x8000) != 0 ) /*0x7d26a7*/
                {
                  int64_arg_0 = get_int64_arg_0((ObjectClass *)&aP2); /*0x7d26ad*/
                  goto LABEL_123; /*0x7d26b3*/
                }
                if ( (v54 & 0x20) != 0 ) /*0x7d26b9*/
                {
                  if ( (v54 & 0x40) != 0 ) /*0x7d26c3*/
                    LODWORD(int64_arg_0) = (__int16)get_int_arg_0((ObjectClass *)&aP2); /*0x7d26cb*/
                  else
                    LODWORD(int64_arg_0) = (unsigned __int16)get_int_arg_0((ObjectClass *)&aP2); /*0x7d26d7*/
LABEL_118:
                  int64_arg_0 = (int)int64_arg_0; /*0x7d26ce*/
                }
                else
                {
                  if ( (v54 & 0x40) != 0 ) /*0x7d26e4*/
                  {
                    LODWORD(int64_arg_0) = get_int_arg_0((ObjectClass *)&aP2); /*0x7d26e6*/
                    goto LABEL_118; /*0x7d26ec*/
                  }
                  int64_arg_0 = (unsigned int)get_int_arg_0((ObjectClass *)&aP2); /*0x7d26ee*/
                }
LABEL_123:
                if ( (v54 & 0x40) != 0 && int64_arg_0 < 0 ) /*0x7d26fe*/
                {
                  HIDWORD(v22) = -(int)int64_arg_0; /*0x7d270b*/
                  BYTE1(v54) |= 1u; /*0x7d270f*/
                  LODWORD(v22) = (unsigned __int64)-int64_arg_0 >> 32; /*0x7d2713*/
                }
                else
                {
                  v22 = __PAIR64__(int64_arg_0, HIDWORD(int64_arg_0)); /*0x7d2719*/
                }
                if ( (v54 & 0x8000) == 0 ) /*0x7d271f*/
                  LODWORD(v22) = 0; /*0x7d2721*/
                if ( v51 >= 0 ) /*0x7d2728*/
                  v54 &= ~8u; /*0x7d2733*/
                else
                  v51 = 1; /*0x7d272a*/
                if ( !v22 ) /*0x7d273b*/
                  v49 = 0; /*0x7d273d*/
                v52 = v36; /*0x7d2747*/
                while ( 1 ) /*0x7d274a*/
                {
                  v23 = v51--; /*0x7d274a*/
                  if ( v23 <= 0 && !v22 ) /*0x7d2758*/
                    break; /*0x7d2758*/
                  v38 = j; /*0x7d2762*/
                  v24 = __PAIR64__(v22, HIDWORD(v22)) % j + 48; /*0x7d2772*/
                  v25 = __PAIR64__(v22, HIDWORD(v22)) / j; /*0x7d2784*/
                  v22 = __PAIR64__(v25, HIDWORD(v25)); /*0x7d2784*/
                  if ( v24 > 57 ) /*0x7d2786*/
                    LOBYTE(v24) = v44 + v24; /*0x7d2788*/
                  v26 = v52--; /*0x7d278b*/
                  *v26 = v24; /*0x7d2791*/
                }
                v27 = v36 - v52++; /*0x7d279b*/
                j = v27; /*0x7d27a5*/
                if ( (v54 & 0x200) != 0 && (*v52 != 48 || !j) ) /*0x7d27b6*/
                {
                  --v52; /*0x7d27b8*/
                  ++j; /*0x7d27bb*/
                  *v52 = 48; /*0x7d27c1*/
                }
                goto LABEL_144; /*0x7d27c1*/
              case 'p': /*0x7d25bd*/
                v51 = 8; /*0x7d262b*/
LABEL_102:
                v44 = 7; /*0x7d2632*/
                goto LABEL_103; /*0x7d2632*/
            }
            if ( v5 != 115 ) /*0x7d25d9*/
            {
              if ( v5 != 117 ) /*0x7d25e1*/
              {
                if ( v5 != 120 ) /*0x7d25ea*/
                  goto LABEL_144; /*0x7d25ea*/
                v44 = 39; /*0x7d25f0*/
LABEL_103:
                j = 16; /*0x7d2635*/
                if ( (v54 & 0x80u) != 0 ) /*0x7d2640*/
                {
                  LOWORD(v47) = 48; /*0x7d2645*/
                  v49 = 2; /*0x7d264e*/
                  HIWORD(v47) = v44 + 81; /*0x7d2655*/
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
              v14 = (__int16 *)get_int_arg_0((ObjectClass *)&aP2); /*0x7d24d5*/
              if ( v14 && (v15 = (char *)*((_DWORD *)v14 + 1)) != 0 ) /*0x7d24e4*/
              {
                if ( (v54 & 0x800) != 0 ) /*0x7d24ea*/
                {
                  v16 = (unsigned int)*v14 >> 1; /*0x7d24ef*/
                  v52 = v15; /*0x7d24f1*/
                  j = v16; /*0x7d24f4*/
                  v48 = 1; /*0x7d24f7*/
                  goto LABEL_144; /*0x7d24fe*/
                }
                v17 = *v14; /*0x7d2503*/
                v48 = 0; /*0x7d2506*/
                v52 = v15; /*0x7d2509*/
              }
              else
              {
                v52 = *(char **)stru_87C374.__pad_154; /*0x7d2519*/
                v17 = strlen(*(const char **)stru_87C374.__pad_154); /*0x7d251d*/
              }
              goto LABEL_81; /*0x7d2509*/
            }
            if ( v5 == 99 ) /*0x7d24ab*/
              goto LABEL_67; /*0x7d24ab*/
            if ( v5 != 100 ) /*0x7d24ae*/
              goto LABEL_144; /*0x7d24ae*/
LABEL_111:
            v54 |= 0x40u; /*0x7d2698*/
            goto LABEL_112; /*0x7d2698*/
          }
          switch ( v5 ) /*0x7d2393*/
          {
            case 'X': /*0x7d2393*/
              goto LABEL_102; /*0x7d2393*/
            case 'C': /*0x7d2393*/
              if ( (v54 & 0x830) == 0 ) /*0x7d245c*/
                v54 |= 0x20u; /*0x7d245e*/
LABEL_67:
              v48 = 1; /*0x7d2461*/
              v13 = get_int_arg_0((ObjectClass *)&aP2); /*0x7d246b*/
              *(_DWORD *)WCh = v13; /*0x7d2475*/
              if ( (v54 & 0x20) != 0 ) /*0x7d2478*/
              {
                SrcCh[1] = 0; /*0x7d2480*/
                SrcCh[0] = v13; /*0x7d2484*/
                if ( mbtowc(DstCh, SrcCh, *(size_t *)&stru_87C374.__pad_3BC[108]) < 0 ) /*0x7d249c*/
                  v43 = 1; /*0x7d249e*/
              }
              else
              {
                DstCh[0] = v13; /*0x7d24b9*/
              }
              j = 1; /*0x7d24c6*/
              v52 = (char *)DstCh; /*0x7d24c9*/
              goto LABEL_144; /*0x7d24cc*/
            case 'E': /*0x7d2393*/
            case 'G': /*0x7d2393*/
              v42 = 1; /*0x7d242b*/
              v5 += 32; /*0x7d2432*/
LABEL_63:
              v54 |= 0x40u; /*0x7d2434*/
              v52 = (char *)DstCh; /*0x7d2441*/
              if ( v51 >= 0 ) /*0x7d2444*/
              {
                if ( !v51 ) /*0x7d2525*/
                  v51 = v5 == 103; /*0x7d252d*/
              }
              else
              {
                v51 = 6; /*0x7d244a*/
              }
              aP2 = (ObjectClass *)((char *)aP2 + 8); /*0x7d253d*/
              v37[0] = aP2[-1].location[2]; /*0x7d2546*/
              v37[1] = aP2[-1].lineTrailer; /*0x7d254c*/
              ((void (__cdecl *)(_DWORD *, wchar_t *, _DWORD, int, int))stru_87C374.field_15C)( /*0x7d255e*/
                v37,
                DstCh,
                (char)v5,
                v51,
                v42);
              break;
          }
          if ( v5 == 83 ) /*0x7d23b1*/
          {
            if ( (v54 & 0x830) == 0 ) /*0x7d23bd*/
              v54 |= 0x20u; /*0x7d23bf*/
LABEL_51:
            v10 = v51; /*0x7d23c3*/
            if ( v51 == -1 ) /*0x7d23c9*/
              v10 = 0x7FFFFFFF; /*0x7d23cb*/
            v11 = (ObjectClass *)get_int_arg_0((ObjectClass *)&aP2); /*0x7d23d4*/
            v12 = v11; /*0x7d23de*/
            v52 = (char *)v11; /*0x7d23e0*/
            if ( (v54 & 0x20) == 0 ) /*0x7d23e3*/
            {
              if ( !v11 ) /*0x7d25fd*/
              {
                v12 = (ObjectClass *)stru_87C374.field_158; /*0x7d25ff*/
                v52 = (char *)stru_87C374.field_158; /*0x7d2605*/
              }
              v48 = 1; /*0x7d2608*/
              for ( i = v12; ; i = (ObjectClass *)((char *)i + 2) ) /*0x7d260f*/
              {
                v19 = v10--; /*0x7d2611*/
                if ( !v19 || !*(_WORD *)i->__pad_0 ) /*0x7d2618*/
                  break; /*0x7d2618*/
              }
              v17 = ((char *)i - (char *)v12) >> 1; /*0x7d2624*/
LABEL_81:
              j = v17; /*0x7d250c*/
              goto LABEL_144; /*0x7d250f*/
            }
            if ( !v11 ) /*0x7d23eb*/
            {
              v12 = *(ObjectClass **)stru_87C374.__pad_154; /*0x7d23ed*/
              v52 = *(char **)stru_87C374.__pad_154; /*0x7d23f3*/
            }
            for ( j = 0; j < v10; ++j ) /*0x7d23fc*/
            {
              if ( !v12->__pad_0[0] ) /*0x7d2402*/
                break; /*0x7d2406*/
              if ( *(char *)(stru_87C374.field_21C + 2 * (unsigned __int8)v12->__pad_0[0] + 1) < 0 ) /*0x7d241a*/
                v12 = (ObjectClass *)((char *)v12 + 1); /*0x7d241c*/
              v12 = (ObjectClass *)((char *)v12 + 1); /*0x7d241d*/
            }
          }
LABEL_144:
          if ( v43 ) /*0x7d27c8*/
            goto LABEL_167; /*0x7d27c8*/
          v28 = v54; /*0x7d27ce*/
          if ( (v54 & 0x40) == 0 ) /*0x7d27d4*/
            goto LABEL_153; /*0x7d27d4*/
          if ( (v54 & 0x100) != 0 ) /*0x7d27d9*/
          {
            LOWORD(v47) = 45; /*0x7d27db*/
LABEL_152:
            v49 = 1; /*0x7d27fb*/
            goto LABEL_153; /*0x7d27fb*/
          }
          if ( (v54 & 1) != 0 ) /*0x7d27e6*/
          {
            LOWORD(v47) = 43; /*0x7d27e8*/
            goto LABEL_152; /*0x7d27ee*/
          }
          if ( (v54 & 2) != 0 ) /*0x7d27f3*/
          {
            LOWORD(v47) = 32; /*0x7d27f5*/
            goto LABEL_152; /*0x7d27f5*/
          }
LABEL_153:
          v29 = (_DWORD *)(v45 - v49 - j); /*0x7d2802*/
          if ( (v54 & 0xC) == 0 ) /*0x7d280e*/
            write_multi_char_0(0x20u, (_DWORD *)(v45 - v49 - j), File, &v50); /*0x7d281a*/
          write_string_0((wchar_t *)&v47, (_DWORD *)v49, File, &v50); /*0x7d2830*/
          if ( (v28 & 8) != 0 && (v28 & 4) == 0 ) /*0x7d2840*/
            write_multi_char_0(0x30u, v29, File, &v50); /*0x7d284c*/
          if ( v48 || j <= 0 ) /*0x7d285e*/
          {
            write_string_0((wchar_t *)v52, (_DWORD *)j, File, &v50); /*0x7d28ae*/
          }
          else
          {
            v30 = v52; /*0x7d2863*/
            v31 = j - 1; /*0x7d2866*/
            do /*0x7d289d*/
            {
              v39 = mbtowc(WCh, v30, *(size_t *)&stru_87C374.__pad_3BC[108]); /*0x7d287c*/
              if ( v39 <= 0 ) /*0x7d2881*/
                break; /*0x7d2881*/
              write_char_0(WCh[0], File, &v50); /*0x7d288d*/
              v30 += v39; /*0x7d2892*/
              v32 = v31--; /*0x7d2898*/
            }
            while ( v32 > 0 ); /*0x7d289d*/
          }
          if ( (v54 & 4) != 0 ) /*0x7d28ba*/
            write_multi_char_0(0x20u, v29, File, &v50); /*0x7d28c6*/
LABEL_167:
          v33 = aP1a; /*0x7d28ce*/
          aP1a = (CampaignScore *)((char *)aP1a + 2); /*0x7d28d1*/
          v5 = *(_WORD *)v33->__pad_0; /*0x7d28d7*/
          if ( !*(_WORD *)v33->__pad_0 ) /*0x7d28d7*/
            return v50; /*0x7d28dd*/
          v4 = v41; /*0x7d21e9*/
          break; /*0x7d21e9*/
        default:
          goto LABEL_167;
      }
    }
  }
  return v50; /*0x7d28e6*/
}
}
} // namespace gamemd

// 0x7D292B
namespace gamemd {
unsigned int * write_multi_char_0(wchar_t WCh, unsigned int * a2, FILE * File, unsigned int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl write_multi_char_0(wchar_t WCh, _DWORD *a2, FILE *File, _DWORD *a4)
{
  _DWORD *result; // eax
  _DWORD *i; // edi

  result = a2; /*0x7d2931*/
  for ( i = (_DWORD *)((char *)a2 - 1); (int)result > 0; i = (_DWORD *)((char *)i - 1) ) /*0x7d2936*/
  {
    result = write_char_0(WCh, File, a4); /*0x7d2945*/
    if ( *a4 == -1 ) /*0x7d2950*/
      break; /*0x7d2950*/
    result = i; /*0x7d2952*/
  }
  return result; /*0x7d2959*/
}
}
} // namespace gamemd

// 0x7D295C
namespace gamemd {
unsigned int * write_string_0(wchar_t * a1, unsigned int * a2, FILE * File, unsigned int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl write_string_0(wchar_t *a1, _DWORD *a2, FILE *File, _DWORD *a4)
{
  _DWORD *result; // eax
  _DWORD *i; // ebx
  wchar_t v7; // ax

  result = a2; /*0x7d2961*/
  for ( i = (_DWORD *)((char *)a2 - 1); (int)result > 0; i = (_DWORD *)((char *)i - 1) ) /*0x7d2968*/
  {
    v7 = *a1++; /*0x7d2972*/
    result = write_char_0(v7, File, a4); /*0x7d297d*/
    if ( *a4 == -1 ) /*0x7d2988*/
      break; /*0x7d2988*/
    result = i; /*0x7d298a*/
  }
  return result; /*0x7d2991*/
}
}
} // namespace gamemd

// 0x7D2995
namespace gamemd {
int get_int_arg_0(ObjectClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl get_int_arg_0(ObjectClass *aP0)
{
  *(_DWORD *)aP0->__pad_0 += 4; /*0x7d2999*/
  return *(_DWORD *)(*(_DWORD *)aP0->__pad_0 - 4); /*0x7d29a1*/
}
}
} // namespace gamemd

// 0x7D29A2
namespace gamemd {
long long get_int64_arg_0(ObjectClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __cdecl get_int64_arg_0(ObjectClass *aP0)
{
  *(_DWORD *)aP0->__pad_0 += 8; /*0x7d29a6*/
  return *(_QWORD *)(*(_DWORD *)aP0->__pad_0 - 8); /*0x7d29b1*/
}
}
} // namespace gamemd

// 0x7D29B2
namespace gamemd {
int __loctotime_t(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __loctotime_t(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebx
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  CampaignScore aP0; // [esp+4h] [ebp-24h] BYREF
  int v13; // [esp+30h] [ebp+8h]

  v7 = a1 - 1900; /*0x7d29bc*/
  if ( a1 - 1900 < 70 || v7 > 138 ) /*0x7d29d1*/
    return -1; /*0x7d2a6e*/
  v8 = a3 + *(_DWORD *)&stru_87C374.__pad_1140[4 * a2 + 252]; /*0x7d29e3*/
  if ( (v7 & 3) == 0 && a2 > 2 ) /*0x7d29ee*/
    ++v8; /*0x7d29f0*/
  __tzset(); /*0x7d29f1*/
  aP0.CampaignScore_field_0x1C = v8; /*0x7d2a06*/
  aP0.CampaignScore_field_0x14 = a1 - 1900; /*0x7d2a0b*/
  aP0.CampaignScore_field_0x08 = a4; /*0x7d2a19*/
  aP0.CampaignScore_field_0x10 = a2 - 1; /*0x7d2a33*/
  v9 = *(_DWORD *)&stru_87C374.__pad_690[92] /*0x7d2a38*/
     + 60 * (a5 + 60 * (a4 + 24 * (((a1 - 1901) >> 2) + v8 + 365 * (a1 - 1900))))
     + a6
     + 2085978496;
  v13 = v9; /*0x7d2a3f*/
  if ( a7 == 1 || a7 == -1 && *(_DWORD *)&stru_87C374.__pad_690[96] && (v10 = _isindst(&aP0), v9 = v13, v10) ) /*0x7d2a62*/
    v9 += *(_DWORD *)&stru_87C374.__pad_690[100]; /*0x7d2a64*/
  return v9; /*0x7d2a71*/
}
}
} // namespace gamemd

// 0x7D2A74
namespace gamemd {
int _close(int FileHandle)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _close(int FileHandle)
{
  int v1; // edi

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7d2a9a*/
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
}
} // namespace gamemd

// 0x7D2AD1
namespace gamemd {
int _close_lk(int FileHandle)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _close_lk(int FileHandle)
{
  intptr_t osfhandle; // edi
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
  *(_BYTE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) = 0; /*0x7d2b3a*/
  if ( !LastError ) /*0x7d2b41*/
    return 0; /*0x7d2b4f*/
  _dosmaperr(LastError); /*0x7d2b44*/
  return -1; /*0x7d2b51*/
}
}
} // namespace gamemd

// 0x7D2B54
namespace gamemd {
int _freebuf(MouseClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _freebuf(MouseClass *aP0)
{
  int result; // eax

  result = (int)aP0->field_C; /*0x7d2b59*/
  if ( (result & 0x83) != 0 && (result & 8) != 0 ) /*0x7d2b62*/
  {
    free(aP0->field_8); /*0x7d2b67*/
    LOWORD(aP0->field_C) &= 0xFBF7u; /*0x7d2b6c*/
    aP0->field_0 = 0; /*0x7d2b75*/
    aP0->field_8 = 0; /*0x7d2b77*/
    aP0->field_4 = 0; /*0x7d2b7a*/
    return 0; /*0x7d2b72*/
  }
  return result; /*0x7d2b7d*/
}
}
} // namespace gamemd

// 0x7D2B7F
namespace gamemd {
int _stbuf(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _stbuf(int a1)
{
  int v1; // eax
  int *v2; // edi
  void *v3; // eax
  int v4; // edi

  if ( !_isatty(*(_DWORD *)(a1 + 16)) ) /*0x7d2b8f*/
    return 0; /*0x7d2b8f*/
  if ( (FILE *)a1 == &File ) /*0x7d2b97*/
  {
    v1 = 0; /*0x7d2b99*/
  }
  else
  {
    if ( (_UNKNOWN *)a1 != &unk_87BF90 ) /*0x7d2ba3*/
      return 0; /*0x7d2c08*/
    v1 = 1; /*0x7d2ba7*/
  }
  ++dword_B781C0; /*0x7d2ba8*/
  if ( (*(_WORD *)(a1 + 12) & 0x10C) != 0 ) /*0x7d2bb4*/
    return 0; /*0x7d2bb4*/
  v2 = (int *)(4 * v1 + 12026576); /*0x7d2bc0*/
  if ( MEMORY[0xB782D0][v1] || (v3 = malloc(0x1000u), (*v2 = (int)v3) != 0) ) /*0x7d2bd9*/
  {
    v4 = *v2; /*0x7d2bee*/
    *(_DWORD *)(a1 + 24) = 4096; /*0x7d2bf0*/
    *(_DWORD *)(a1 + 8) = v4; /*0x7d2bf3*/
    *(_DWORD *)a1 = v4; /*0x7d2bf6*/
    *(_DWORD *)(a1 + 4) = 4096; /*0x7d2bf8*/
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a1 + 20; /*0x7d2be0*/
    *(_DWORD *)a1 = a1 + 20; /*0x7d2be3*/
    *(_DWORD *)(a1 + 24) = 2; /*0x7d2be6*/
    *(_DWORD *)(a1 + 4) = 2; /*0x7d2be9*/
  }
  *(_WORD *)(a1 + 12) |= 0x1102u; /*0x7d2bfb*/
  return 1; /*0x7d2c06*/
}
}
} // namespace gamemd

// 0x7D2C0C
namespace gamemd {
int _ftbuf(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ftbuf(int a1, int a2)
{
  int result; // eax

  if ( a1 ) /*0x7d2c12*/
  {
    if ( (*(_BYTE *)(a2 + 13) & 0x10) != 0 ) /*0x7d2c1c*/
    {
      result = _flush((_DWORD *)a2); /*0x7d2c1f*/
      *(_BYTE *)(a2 + 13) &= 0xEEu; /*0x7d2c24*/
      *(_DWORD *)(a2 + 24) = 0; /*0x7d2c28*/
      *(_DWORD *)a2 = 0; /*0x7d2c2c*/
      *(_DWORD *)(a2 + 8) = 0; /*0x7d2c2f*/
    }
  }
  return result; /*0x7d2c34*/
}
}
} // namespace gamemd

// 0x7D2C36
namespace gamemd {
unsigned int * _openfile(char * FileName, unsigned char * a2, int ShareFlag, unsigned int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl _openfile(char *FileName, _BYTE *a2, int ShareFlag, _DWORD *a4)
{
  _BYTE *v4; // edi
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
              BYTE1(v6) |= 0x40u; /*0x7d2d1f*/
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
        BYTE1(v6) |= 0x80u; /*0x7d2d61*/
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
} // namespace gamemd

// 0x7D2DA6
namespace gamemd {
unsigned int * _getstream()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *_getstream()
{
  _DWORD *v0; // edi
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
      v2 = *(_DWORD *)(dword_B78BC4 + 4 * v1); /*0x7d2dc8*/
      if ( !v2 ) /*0x7d2dcd*/
        break; /*0x7d2dcd*/
      if ( (*(_BYTE *)(v2 + 12) & 0x83) == 0 ) /*0x7d2dd3*/
      {
        _lock_file2(v1, *(_DWORD *)(dword_B78BC4 + 4 * v1)); /*0x7d2dd7*/
        if ( (*(_BYTE *)(*(_DWORD *)(dword_B78BC4 + 4 * v1) + 12) & 0x83) == 0 ) /*0x7d2deb*/
        {
          v0 = *(_DWORD **)(dword_B78BC4 + 4 * v1); /*0x7d2e01*/
          goto LABEL_11; /*0x7d2e04*/
        }
        _unlock_file2(v1, *(_DWORD *)(dword_B78BC4 + 4 * v1)); /*0x7d2def*/
      }
      if ( ++v1 >= (int)Count ) /*0x7d2dfd*/
        goto LABEL_13; /*0x7d2dfd*/
    }
    v3 = 4 * v1; /*0x7d2e08*/
    *(_DWORD *)(v3 + dword_B78BC4) = malloc(0x38u); /*0x7d2e17*/
    v4 = *(_DWORD *)(v3 + dword_B78BC4); /*0x7d2e1f*/
    if ( !v4 ) /*0x7d2e24*/
      goto LABEL_13; /*0x7d2e24*/
    InitializeCriticalSection((LPCRITICAL_SECTION)(v4 + 32)); /*0x7d2e2a*/
    EnterCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)(v3 + dword_B78BC4) + 32)); /*0x7d2e3c*/
    v0 = *(_DWORD **)(v3 + dword_B78BC4); /*0x7d2e47*/
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
} // namespace gamemd

// 0x7D2E6E
namespace gamemd {
unsigned int * E4Recv_7D2E6E::sub_7D2E6E()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_7D2E6E(_DWORD *this)
{
  *(this + 1) = 0; /*0x7d2e70*/
  *(this + 2) = 0; /*0x7d2e74*/
  *this = &exception::`vftable'; /*0x7d2e78*/
  return this; /*0x7d2e7e*/
}
}
} // namespace gamemd

// 0x7D2E7F
namespace gamemd {
ObjectClass * E4Recv_7D2E7F::sub_7D2E7F(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_7D2E7F(void *this, char a2)
{
  Exception::Destructor(this); /*0x7d2e82*/
  if ( (a2 & 1) != 0 ) /*0x7d2e8c*/
    __3_YAXPAX_Z(this); /*0x7d2e8f*/
  return (ObjectClass *)this; /*0x7d2e97*/
}
}
} // namespace gamemd

// 0x7D2E9B
namespace gamemd {
exception * E4Recv_7D2E9B::__0exception_QAE_ABQBD_Z(const char ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
exception *__thiscall __0exception_QAE_ABQBD_Z(exception *this, const char **a2)
{
  size_t v3; // eax
  char *v4; // eax

  *(_DWORD *)this = &exception::`vftable'; /*0x7d2ea3*/
  v3 = strlen(*a2); /*0x7d2eab*/
  v4 = (char *)__2_YAPAXI_Z(v3 + 1); /*0x7d2eb2*/
  this->M4 = v4; /*0x7d2eb8*/
  if ( v4 ) /*0x7d2ebe*/
    strcpy(v4, *a2); /*0x7d2ec3*/
  this->M8 = 1; /*0x7d2eca*/
  return this; /*0x7d2ed3*/
}
}
} // namespace gamemd

// 0x7D2ED8
namespace gamemd {
exception * E4Recv_7D2ED8::__0exception_QAE_ABV0__Z(const struct exception * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
exception *__thiscall __0exception_QAE_ABV0__Z(exception *this, const struct exception *a2)
{
  int v3; // eax
  size_t v4; // eax
  char *v5; // eax

  *(_DWORD *)this = &exception::`vftable'; /*0x7d2ee0*/
  v3 = *((_DWORD *)a2 + 2); /*0x7d2ee6*/
  this->M8 = v3; /*0x7d2eeb*/
  if ( v3 ) /*0x7d2eee*/
  {
    v4 = strlen(*((const char **)a2 + 1)); /*0x7d2ef3*/
    v5 = (char *)__2_YAPAXI_Z(v4 + 1); /*0x7d2efa*/
    this->M4 = v5; /*0x7d2f00*/
    if ( v5 ) /*0x7d2f06*/
      strcpy(v5, *((const char **)a2 + 1)); /*0x7d2f0c*/
  }
  else
  {
    this->M4 = *((_DWORD *)a2 + 1); /*0x7d2f18*/
  }
  return this; /*0x7d2f1d*/
}
}
} // namespace gamemd

// 0x7D2F22
namespace gamemd {
ObjectClass * E4Recv_7D2F22::__4exception_QAEAAV0_ABV0__Z(struct exception * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall __4exception_QAEAAV0_ABV0__Z(exception *this, struct exception *a2)
{
  if ( this != a2 ) /*0x7d2f29*/
  {
    Exception::Destructor(this); /*0x7d2f2b*/
    __0exception_QAE_ABV0__Z(this, a2); /*0x7d2f36*/
  }
  return (ObjectClass *)this; /*0x7d2f3d*/
}
}
} // namespace gamemd

// 0x7D2F57
namespace gamemd {
const char * E4Recv_7D2F57::_what_exception__UBEPBDXZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
const char *__thiscall _what_exception__UBEPBDXZ(exception *this)
{
  const char *result; // eax

  result = (const char *)this->M4; /*0x7d2f57*/
  if ( !result ) /*0x7d2f5c*/
    return "Unknown exception"; /*0x7d2f5e*/
  return result; /*0x7d2f63*/
}
}
} // namespace gamemd

// 0x7D2F64
namespace gamemd {
void  __noreturn _CxxThrowException_8(void * pExceptionObject, _ThrowInfo * pThrowInfo)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall __noreturn _CxxThrowException_8(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, &unk_7F9928, sizeof(dwExceptionCode)); /*0x7d2f7a*/
  dwExceptionCode[6] = (DWORD)pExceptionObject; /*0x7d2f7c*/
  dwExceptionCode[7] = (DWORD)pThrowInfo; /*0x7d2f82*/
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]); /*0x7d2f92*/
}
}
} // namespace gamemd

// 0x7D2F9E
namespace gamemd {
short sub_7D2F9E(wchar_t WCh, FILE * Stream)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __cdecl sub_7D2F9E(wchar_t WCh, FILE *Stream)
{
  __int16 v2; // si

  _lock_file(Stream); /*0x7d2fa3*/
  v2 = _putwc_lk(WCh, Stream); /*0x7d2fb9*/
  _unlock_file(Stream); /*0x7d2fbb*/
  return v2; /*0x7d2fc6*/
}
}
} // namespace gamemd

// 0x7D2FC8
namespace gamemd {
wchar_t _putwc_lk(wchar_t WCh, FILE * File)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t __cdecl _putwc_lk(wchar_t WCh, FILE *File)
{
  FILE *v2; // esi
  char *v3; // eax
  int v4; // eax
  bool v6; // sf
  int v7; // eax
  int v8; // eax

  v2 = File; /*0x7d2fcc*/
  if ( (File->_flag & 0x40) != 0
    || (File->_file == -1
      ? (v3 = (char *)&MEMORY[0x87C928])
      : (v3 = (char *)(dword_B78A80[File->_file >> 5] + 36 * (File->_file & 0x1F))),
        v3[4] >= 0) )
  {
    v6 = File->_cnt - 2 < 0; /*0x7d309e*/
    File->_cnt -= 2; /*0x7d309e*/
    if ( v6 ) /*0x7d30a2*/
      return _flswbuf(WCh, (int)v2); /*0x7d30b7*/
    *(_WORD *)v2->_ptr = WCh; /*0x7d30a9*/
    v2->_ptr += 2; /*0x7d30ac*/
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
    v6 = --v2->_cnt < 0; /*0x7d3033*/
    if ( v6 ) /*0x7d3036*/
    {
      v7 = _flsbuf((char)File, v2); /*0x7d304d*/
      goto LABEL_14; /*0x7d304d*/
    }
    *v2->_ptr = (char)File; /*0x7d303d*/
    v7 = (unsigned __int8)File; /*0x7d303f*/
  }
  else
  {
    v6 = --v2->_cnt < 0; /*0x7d305f*/
    if ( v6 ) /*0x7d3062*/
    {
      v8 = _flsbuf((char)File, v2); /*0x7d3079*/
    }
    else
    {
      *v2->_ptr++ = (char)File; /*0x7d3069*/
      v8 = (unsigned __int8)File; /*0x7d306d*/
    }
    if ( v8 == -1 ) /*0x7d3083*/
      return -1; /*0x7d3083*/
    v6 = --v2->_cnt < 0; /*0x7d3085*/
    if ( v6 ) /*0x7d3088*/
    {
      v7 = _flsbuf(SBYTE1(File), v2); /*0x7d309c*/
      goto LABEL_14; /*0x7d309c*/
    }
    *v2->_ptr = BYTE1(File); /*0x7d308f*/
    v7 = BYTE1(File); /*0x7d3091*/
  }
  ++v2->_ptr; /*0x7d3043*/
LABEL_14:
  if ( v7 == -1 ) /*0x7d3057*/
    return -1; /*0x7d3057*/
  return WCh; /*0x7d30be*/
}
}
} // namespace gamemd

// 0x7D30D1
namespace gamemd {
int _commit(int FileHandle)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _commit(int FileHandle)
{
  int v1; // esi
  void *osfhandle; // eax
  DWORD LastError; // esi

  if ( FileHandle < uNumber ) /*0x7d30de*/
  {
    v1 = 36 * (FileHandle & 0x1F); /*0x7d30f6*/
    if ( (*(_BYTE *)(dword_B78A80[FileHandle >> 5] + v1 + 4) & 1) != 0 ) /*0x7d30fe*/
    {
      _lock_fhandle(FileHandle); /*0x7d3101*/
      if ( (*(_BYTE *)(dword_B78A80[FileHandle >> 5] + v1 + 4) & 1) != 0 ) /*0x7d310e*/
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
} // namespace gamemd

// 0x7D3164
namespace gamemd {
UINT _ioinit()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
UINT _ioinit()
{
  char *v0; // eax
  char *v1; // esi
  unsigned int i; // eax
  int v3; // edi
  LPBYTE v4; // ebx
  _DWORD *v5; // esi
  char *v6; // eax
  unsigned int j; // ecx
  int k; // esi
  int v9; // eax
  int m; // ebx
  int v11; // esi
  DWORD v12; // eax
  HANDLE StdHandle; // eax
  HANDLE v14; // edi
  DWORD FileType; // eax
  struct _STARTUPINFOA StartupInfo; // [esp+Ch] [ebp-48h] BYREF
  HANDLE *v18; // [esp+50h] [ebp-4h]

  v0 = (char *)malloc(0x480u); /*0x7d3172*/
  v1 = v0; /*0x7d3177*/
  if ( !v0 ) /*0x7d317c*/
    _amsg_exit(0x1Bu); /*0x7d3180*/
  dword_B78A80[0] = (int)v0; /*0x7d3186*/
  uNumber = 32; /*0x7d318c*/
  for ( i = (unsigned int)(v0 + 1152); (unsigned int)v1 < i; i = dword_B78A80[0] + 1152 ) /*0x7d3196*/
  {
    v1[4] = 0; /*0x7d31a0*/
    *(_DWORD *)v1 = -1; /*0x7d31a4*/
    *((_DWORD *)v1 + 2) = 0; /*0x7d31a7*/
    v1[5] = 10; /*0x7d31ab*/
    v1 += 36; /*0x7d31b4*/
  }
  GetStartupInfoA(&StartupInfo); /*0x7d31c2*/
  if ( StartupInfo.cbReserved2 && StartupInfo.lpReserved2 ) /*0x7d31d8*/
  {
    v3 = *(_DWORD *)StartupInfo.lpReserved2; /*0x7d31de*/
    v4 = StartupInfo.lpReserved2 + 4; /*0x7d31e0*/
    v18 = (HANDLE *)&StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4]; /*0x7d31e6*/
    if ( v3 >= 2048 ) /*0x7d31f0*/
      v3 = 2048; /*0x7d31f2*/
    if ( (int)uNumber < v3 ) /*0x7d31fa*/
    {
      v5 = &unk_B78A84; /*0x7d31fc*/
      while ( 1 ) /*0x7d3206*/
      {
        v6 = (char *)malloc(0x480u); /*0x7d3206*/
        if ( !v6 ) /*0x7d320e*/
          break; /*0x7d320e*/
        uNumber += 32; /*0x7d3210*/
        *v5 = v6; /*0x7d3217*/
        for ( j = (unsigned int)(v6 + 1152); (unsigned int)v6 < j; j = *v5 + 1152 ) /*0x7d3219*/
        {
          v6[4] = 0; /*0x7d3223*/
          *(_DWORD *)v6 = -1; /*0x7d3227*/
          *((_DWORD *)v6 + 2) = 0; /*0x7d322a*/
          v6[5] = 10; /*0x7d322e*/
          v6 += 36; /*0x7d3234*/
        }
        ++v5; /*0x7d323f*/
        if ( (int)uNumber >= v3 ) /*0x7d3248*/
          goto LABEL_19; /*0x7d3248*/
      }
      v3 = uNumber; /*0x7d324c*/
    }
LABEL_19:
    for ( k = 0; k < v3; ++v4 ) /*0x7d3256*/
    {
      if ( *v18 != (HANDLE)-1 && (*v4 & 1) != 0 && ((*v4 & 8) != 0 || GetFileType(*v18)) ) /*0x7d326d*/
      {
        v9 = dword_B78A80[k >> 5] + 36 * (k & 0x1F); /*0x7d328b*/
        *(_DWORD *)v9 = *v18; /*0x7d3293*/
        *(_BYTE *)(v9 + 4) = *v4; /*0x7d3297*/
      }
      ++v18; /*0x7d329a*/
      ++k; /*0x7d329e*/
    }
  }
  for ( m = 0; m < 3; ++m ) /*0x7d32a4*/
  {
    v11 = dword_B78A80[0] + 36 * m; /*0x7d32b3*/
    if ( *(_DWORD *)v11 == -1 ) /*0x7d32b6*/
    {
      *(_BYTE *)(v11 + 4) = -127; /*0x7d32ba*/
      if ( m ) /*0x7d32be*/
        v12 = -(m != 1) - 11; /*0x7d32cc*/
      else
        v12 = -10; /*0x7d32c2*/
      StdHandle = GetStdHandle(v12); /*0x7d32d0*/
      v14 = StdHandle; /*0x7d32d6*/
      if ( StdHandle == (HANDLE)-1 /*0x7d32f2*/
        || (FileType = GetFileType(StdHandle)) == 0
        || (*(_DWORD *)v11 = v14, (unsigned __int8)FileType == 2) )
      {
        *(_BYTE *)(v11 + 4) |= 0x40u; /*0x7d32f4*/
      }
      else if ( (unsigned __int8)FileType == 3 ) /*0x7d32fd*/
      {
        *(_BYTE *)(v11 + 4) |= 8u; /*0x7d32ff*/
      }
    }
    else
    {
      *(_BYTE *)(v11 + 4) |= 0x80u; /*0x7d3305*/
    }
  }
  return SetHandleCount(uNumber); /*0x7d331b*/
}
}
} // namespace gamemd

// 0x7D3320
namespace gamemd {
void _ioterm_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void _ioterm_0()
{
  void **v0; // esi
  char *v1; // edi
  struct _RTL_CRITICAL_SECTION *v2; // ebx

  v0 = (void **)dword_B78A80; /*0x7d3323*/
  do /*0x7d336e*/
  {
    if ( *v0 ) /*0x7d3328*/
    {
      v1 = (char *)*v0; /*0x7d332e*/
      if ( *v0 < (char *)*v0 + 1152 ) /*0x7d3337*/
      {
        v2 = (struct _RTL_CRITICAL_SECTION *)(v1 + 12); /*0x7d3339*/
        do /*0x7d3358*/
        {
          if ( v2[-1].SpinCount ) /*0x7d333c*/
            DeleteCriticalSection(v2); /*0x7d3343*/
          v1 += 36; /*0x7d334b*/
          v2 = (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 36); /*0x7d3353*/
        }
        while ( v1 < (char *)*v0 + 1152 ); /*0x7d3358*/
      }
      free(*v0); /*0x7d335c*/
      *v0 = 0; /*0x7d3361*/
    }
    ++v0; /*0x7d3365*/
  }
  while ( (int)v0 < (int)&uNumber ); /*0x7d336e*/
}
}
} // namespace gamemd

// 0x7D3374
namespace gamemd {
void * calloc(size_t Count, size_t Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__cdecl calloc(size_t Count, size_t Size)
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
      if ( v3 <= MEMORY[0x87C584] ) /*0x7d33a1*/
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
    if ( !MEMORY[0xB782C4] ) /*0x7d33dc*/
      return v4; /*0x7d33dc*/
  }
  while ( _callnewh(v2) ); /*0x7d33e7*/
  return 0; /*0x7d33f9*/
}
}
} // namespace gamemd

// 0x7D3401
namespace gamemd {
int _fcloseall()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _fcloseall()
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
    v3 = *(_DWORD *)(4 * i + dword_B78BC4); /*0x7d3423*/
    if ( v3 ) /*0x7d3428*/
    {
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 && fclose(*(FILE **)(4 * i + dword_B78BC4)) != -1 ) /*0x7d343a*/
        ++v0; /*0x7d343c*/
      if ( i >= 20 ) /*0x7d3440*/
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)(v2 + dword_B78BC4) + 32)); /*0x7d344e*/
        free(*(void **)(v2 + dword_B78BC4)); /*0x7d345c*/
        *(_DWORD *)(v2 + dword_B78BC4) = 0; /*0x7d3467*/
      }
    }
  }
  _unlock(2); /*0x7d3477*/
  return v0; /*0x7d347f*/
}
}
} // namespace gamemd

// 0x7D3482
namespace gamemd {
int _setmbcp(int CodePage)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _setmbcp(int CodePage)
{
  UINT SystemCP; // eax
  UINT v2; // ebx
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
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
  LCID v16; // eax
  _DWORD *v17; // esi
  unsigned int j; // eax
  struct _cpinfo CPInfo; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v21; // [esp+20h] [ebp-4h]
  int CodePagea; // [esp+2Ch] [ebp+8h]

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
    setSBUpLow(); /*0x7d3613*/
    goto LABEL_2; /*0x7d3618*/
  }
  v4 = 0; /*0x7d34b8*/
  v5 = &MEMORY[0x87C958]; /*0x7d34ba*/
  do /*0x7d34cc*/
  {
    if ( *v5 == v2 ) /*0x7d34c1*/
    {
      v21 = 0; /*0x7d3537*/
      memset(&unk_B78960, 0, 0x100u); /*0x7d3548*/
      v9 = 48 * v4; /*0x7d354a*/
      unk_B78A60 = 0; /*0x7d354d*/
      v10 = (char *)&MEMORY[0x87C968] + 48 * v4; /*0x7d354e*/
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
            v14 = v12; /*0x7d3565*/
            if ( v13 <= v12 ) /*0x7d356a*/
            {
              v15 = MEMORY[0x87C950][v21]; /*0x7d356f*/
              do /*0x7d357e*/
                byte_B78961[v13++] |= v15; /*0x7d3575*/
              while ( v13 <= v14 ); /*0x7d357e*/
            }
            v11 += 2; /*0x7d3581*/
          }
          while ( *v11 ); /*0x7d3582*/
        }
        ++v21; /*0x7d3587*/
        v10 += 8; /*0x7d358a*/
      }
      while ( v21 < 4 ); /*0x7d3591*/
      dword_B7885C = 1; /*0x7d3596*/
      dword_B78840 = CodePagea; /*0x7d35a1*/
      v16 = CPtoLCID(CodePagea); /*0x7d35a6*/
      v17 = (_DWORD *)((char *)&MEMORY[0x87C95C] + v9); /*0x7d35ab*/
      unk_B78850 = *v17++; /*0x7d35b6*/
      unk_B78854 = *v17; /*0x7d35b7*/
      Locale = v16; /*0x7d35b9*/
      unk_B78858 = v17[1]; /*0x7d35be*/
      goto LABEL_32; /*0x7d35bf*/
    }
    v5 += 12; /*0x7d34c3*/
    ++v4; /*0x7d34c6*/
  }
  while ( (int)v5 < (int)MEMORY[0x87CA48] ); /*0x7d34cc*/
  if ( GetCPInfo(v2, &CPInfo) ) /*0x7d34d3*/
  {
    Locale = 0; /*0x7d34e6*/
    memset(&unk_B78960, 0, 0x100u); /*0x7d34f8*/
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
      Locale = CPtoLCID(v2); /*0x7d35e5*/
      dword_B7885C = 1; /*0x7d35ea*/
    }
    unk_B78850 = 0; /*0x7d3600*/
    unk_B78854 = 0; /*0x7d3601*/
    unk_B78858 = 0; /*0x7d3602*/
    goto LABEL_32; /*0x7d3603*/
  }
  if ( MEMORY[0xB782D8] ) /*0x7d360c*/
    goto LABEL_31; /*0x7d360c*/
  v3 = -1; /*0x7d361d*/
LABEL_34:
  _unlock(25); /*0x7d3620*/
  return v3; /*0x7d362a*/
}
}
} // namespace gamemd

// 0x7D362F
namespace gamemd {
UINT getSystemCP(UINT a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax

  result = a1; /*0x7d362f*/
  MEMORY[0xB782D8] = 0; /*0x7d3633*/
  switch ( a1 ) /*0x7d363d*/
  {
    case 0xFFFFFFFE: /*0x7d363d*/
      MEMORY[0xB782D8] = 1; /*0x7d363f*/
      return GetOEMCP(); /*0x7d3649*/
    case 0xFFFFFFFD: /*0x7d363d*/
      MEMORY[0xB782D8] = 1; /*0x7d3654*/
      return GetACP(); /*0x7d365e*/
    case 0xFFFFFFFC: /*0x7d363d*/
      MEMORY[0xB782D8] = 1; /*0x7d366e*/
      return CodePage; /*0x7d3669*/
  }
  return result; /*0x7d3678*/
}
}
} // namespace gamemd

// 0x7D36AC
namespace gamemd {
int setSBCS()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int setSBCS()
{
  memset(&unk_B78960, 0, 0x100u); /*0x7d36b7*/
  unk_B78A60 = 0; /*0x7d36b9*/
  dword_B78840 = 0; /*0x7d36c1*/
  dword_B7885C = 0; /*0x7d36c6*/
  Locale = 0; /*0x7d36cb*/
  unk_B78850 = 0; /*0x7d36d0*/
  unk_B78854 = 0; /*0x7d36d1*/
  unk_B78858 = 0; /*0x7d36d2*/
  return 0; /*0x7d36d3*/
}
}
} // namespace gamemd

// 0x7D36D5
namespace gamemd {
unsigned int setSBUpLow()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int setSBUpLow()
{
  unsigned int i; // eax
  BYTE v1; // al
  BYTE *v2; // edx
  unsigned int v3; // ecx
  unsigned int result; // eax
  WORD *j; // ecx
  char v6; // dl
  char v7; // cl
  WORD CharType[256]; // [esp+4h] [ebp-514h] BYREF
  CHAR v9[256]; // [esp+204h] [ebp-314h] BYREF
  CHAR DestStr[256]; // [esp+304h] [ebp-214h] BYREF
  CHAR SrcStr[256]; // [esp+404h] [ebp-114h] BYREF
  struct _cpinfo CPInfo; // [esp+504h] [ebp-14h] BYREF

  if ( GetCPInfo(dword_B78840, &CPInfo) ) /*0x7d36e9*/
  {
    for ( i = 0; i < 0x100; ++i ) /*0x7d36f8*/
      SrcStr[i] = i; /*0x7d36ff*/
    v1 = CPInfo.LeadByte[0]; /*0x7d370b*/
    SrcStr[0] = 32; /*0x7d370e*/
    if ( CPInfo.LeadByte[0] ) /*0x7d3717*/
    {
      v2 = &CPInfo.LeadByte[1]; /*0x7d371b*/
      do /*0x7d374c*/
      {
        v3 = *v2; /*0x7d371e*/
        if ( v1 <= v3 ) /*0x7d3726*/
          memset(&SrcStr[v1], 0x20u, v3 - v1 + 1); /*0x7d373c*/
        v2 += 2; /*0x7d3746*/
        v1 = *(v2 - 1); /*0x7d3747*/
      }
      while ( v1 ); /*0x7d374c*/
    }
    __crtGetStringTypeA(1u, SrcStr, 256, CharType, dword_B78840, Locale, 0); /*0x7d376f*/
    __crtLCMapStringA(Locale, 0x100u, SrcStr, 256, DestStr, 256, dword_B78840, 0); /*0x7d3793*/
    __crtLCMapStringA(Locale, 0x200u, SrcStr, 256, v9, 256, dword_B78840, 0); /*0x7d37bb*/
    result = 0; /*0x7d37c3*/
    for ( j = CharType; ; ++j ) /*0x7d37c5*/
    {
      if ( (*j & 1) != 0 ) /*0x7d37d1*/
      {
        byte_B78961[result] |= 0x10u; /*0x7d37d3*/
        v6 = DestStr[result]; /*0x7d37da*/
      }
      else
      {
        if ( (*j & 2) == 0 ) /*0x7d37ec*/
        {
          byte_B78860[result] = 0; /*0x7d37fe*/
          goto LABEL_16; /*0x7d37fe*/
        }
        byte_B78961[result] |= 0x20u; /*0x7d37ee*/
        v6 = v9[result]; /*0x7d37f5*/
      }
      byte_B78860[result] = v6; /*0x7d37e1*/
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
      v7 = result + 32; /*0x7d3828*/
LABEL_22:
      byte_B78860[result] = v7; /*0x7d382b*/
      continue; /*0x7d3831*/
    }
    if ( result >= 0x61 && result <= 0x7A ) /*0x7d383b*/
    {
      byte_B78961[result] |= 0x20u; /*0x7d383d*/
      v7 = result - 32; /*0x7d3846*/
      goto LABEL_22; /*0x7d3849*/
    }
    byte_B78860[result] = 0; /*0x7d384b*/
  }
  return result; /*0x7d3857*/
}
}
} // namespace gamemd

// 0x7D385A
namespace gamemd {
int _getmbcp()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _getmbcp()
{
  return dword_B7885C != 0 ? dword_B78840 : 0;
}
}
} // namespace gamemd

// 0x7D386A
namespace gamemd {
int __initmbctable()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __initmbctable()
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
} // namespace gamemd

// 0x7D3886
namespace gamemd {
unsigned char * _mbsnbcpy(IUnknown * aP0, const unsigned char * Source, size_t Count)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 *__cdecl _mbsnbcpy(IUnknown *aP0, const unsigned __int8 *Source, size_t Count)
{
  ObjectClass *v3; // edi
  size_t v5; // edx
  const unsigned __int8 *v6; // ecx
  char v7; // al
  bool v8; // zf
  _BYTE *v9; // ecx
  char v10; // al
  size_t v11; // eax
  size_t v12; // edx

  v3 = (ObjectClass *)aP0; /*0x7d3891*/
  if ( !dword_B7885C ) /*0x7d3897*/
    return (unsigned __int8 *)strncpy((char *)aP0, (const char *)Source, (IUnknown *)Count); /*0x7d38a8*/
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
    v3->__pad_0[0] = *v6; /*0x7d38ca*/
    if ( v8 ) /*0x7d38cc*/
    {
      v3 = (ObjectClass *)((char *)v3 + 1); /*0x7d38e1*/
      ++v6; /*0x7d38e2*/
      if ( !v7 ) /*0x7d38e5*/
        goto LABEL_14; /*0x7d38e5*/
      goto LABEL_10; /*0x7d38e5*/
    }
    v3 = (ObjectClass *)((char *)v3 + 1); /*0x7d38ce*/
    v9 = v6 + 1; /*0x7d38cf*/
    if ( !v5 ) /*0x7d38d2*/
    {
      HIBYTE(v3[-1].lineTrailer) = 0; /*0x7d38ed*/
      goto LABEL_14; /*0x7d38f1*/
    }
    v10 = *v9; /*0x7d38d4*/
    --v5; /*0x7d38d6*/
    v3->__pad_0[0] = *v9; /*0x7d38d7*/
    v3 = (ObjectClass *)((char *)v3 + 1); /*0x7d38d9*/
    v6 = v9 + 1; /*0x7d38da*/
    if ( !v10 ) /*0x7d38dd*/
      break; /*0x7d38dd*/
LABEL_10:
    if ( !v5 ) /*0x7d38e9*/
      goto LABEL_14; /*0x7d38e9*/
  }
  BYTE2(v3[-1].lineTrailer) = 0; /*0x7d38f3*/
LABEL_14:
  v11 = v5; /*0x7d38f7*/
  v12 = v5 - 1; /*0x7d38f9*/
  if ( v11 ) /*0x7d38fd*/
    memset(v3, 0, v12 + 1); /*0x7d3909*/
  _unlock(25); /*0x7d3914*/
  return (unsigned __int8 *)aP0; /*0x7d391d*/
}
}
} // namespace gamemd

// 0x7D3920
namespace gamemd {
int iswctype(wint_t C, wctype_t Type)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl iswctype(wint_t C, wctype_t Type)
{
  int v2; // ecx
  WORD v3; // ax
  WORD CharType[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)CharType = v2; /*0x7d3923*/
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
  v3 = *((_WORD *)MEMORY[0x87C594] + C); /*0x7d393e*/
  return Type & v3; /*0x7d3962*/
}
}
} // namespace gamemd

// 0x7D3982
namespace gamemd {
wint_t towupper(wint_t C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wint_t __cdecl towupper(wint_t C)
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
}
} // namespace gamemd

// 0x7D39F6
namespace gamemd {
wint_t towupper_0(wint_t C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wint_t __cdecl towupper_0(wint_t C)
{
  int v1; // ecx
  wint_t result; // ax
  bool v3; // zf
  WCHAR DestStr; // [esp+0h] [ebp-2h] BYREF

  DestStr = HIWORD(v1); /*0x7d39f9*/
  result = C; /*0x7d39fa*/
  if ( C != 0xFFFF ) /*0x7d3a01*/
  {
    if ( dword_B782A0 ) /*0x7d3a0f*/
    {
      if ( C >= 0x100u || iswctype(C, 2u) ) /*0x7d3a2d*/
      {
        v3 = __crtLCMapStringW((LCID)dword_B782A0, 0x200u, &C, 1, &DestStr, 1, 0) == 0; /*0x7d3a5f*/
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
}
} // namespace gamemd

// 0x7D3A6D
namespace gamemd {
int _winput(FILE * File, CampaignScore * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _winput(FILE *File, CampaignScore *aP1, int a3)
{
  int v3; // ebx
  CampaignScore *v4; // edi
  wint_t v5; // ax
  wint_t v6; // ax
  int i; // eax
  int v8; // esi
  int v10; // esi
  int v11; // eax
  int v12; // esi
  ObjectClass *v13; // esi
  int v14; // eax
  int v16; // edi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  AbstractClass *v25; // esi
  CCINIClass *v26; // edi
  char *v27; // edi
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
  int v41; // eax
  unsigned __int64 v43; // rax
  unsigned int v44; // et0
  int v46; // esi
  int v47; // eax
  int v48; // eax
  __int16 v49; // ax
  int result; // eax
  _BYTE a0[8192]; // [esp+Ch] [ebp-2304h] BYREF
  ObjectClass Source[4]; // [esp+200Ch] [ebp-304h] BYREF
  int v53; // [esp+22C8h] [ebp-48h]
  int v54; // [esp+22CCh] [ebp-44h]
  int v55; // [esp+22D0h] [ebp-40h]
  wchar_t DstCh; // [esp+22D6h] [ebp-3Ah] BYREF
  unsigned __int64 v57; // [esp+22D8h] [ebp-38h]
  int v58; // [esp+22E0h] [ebp-30h]
  int v59; // [esp+22E4h] [ebp-2Ch]
  int v60; // [esp+22E8h] [ebp-28h]
  int v61; // [esp+22ECh] [ebp-24h]
  char *MbCh; // [esp+22F0h] [ebp-20h]
  int v63; // [esp+22F4h] [ebp-1Ch]
  char v64; // [esp+22FAh] [ebp-16h]
  char v65; // [esp+22FBh] [ebp-15h]
  wint_t C[3]; // [esp+22FCh] [ebp-14h]
  char v67; // [esp+2302h] [ebp-Eh]
  char v68; // [esp+2303h] [ebp-Dh]
  int v69; // [esp+2304h] [ebp-Ch]
  char v70; // [esp+2308h] [ebp-8h]
  char v71; // [esp+2309h] [ebp-7h]
  char v72; // [esp+230Ah] [ebp-6h]
  char v73; // [esp+230Bh] [ebp-5h]
  int v74; // [esp+230Ch] [ebp-4h] BYREF
  CampaignScore *aP1a; // [esp+231Ch] [ebp+Ch]

  v67 = 0; /*0x7d3a7a*/
  LOWORD(v3) = C[0]; /*0x7d3a80*/
  v4 = aP1; /*0x7d3a84*/
  v5 = *(_WORD *)aP1->__pad_0; /*0x7d3a89*/
  v74 = 0; /*0x7d3a8c*/
  v58 = 0; /*0x7d3a92*/
  if ( !v5 ) /*0x7d3a95*/
    goto LABEL_252; /*0x7d3a95*/
  do
  {
    if ( iswctype(v5, 8u) ) /*0x7d3aa2*/
    {
      --v74; /*0x7d3ab0*/
      v6 = _whiteout_0(&v74, File); /*0x7d3aba*/
      _un_inc_0(v6, (int)File); /*0x7d3ac2*/
      v4 = (CampaignScore *)((char *)v4 + 2); /*0x7d3ac8*/
      for ( i = iswspace(*(_WORD *)v4->__pad_0); i; i = iswspace(*(_WORD *)v4->__pad_0) ) /*0x7d3acd*/
        v4 = (CampaignScore *)((char *)v4 + 2); /*0x7d3ada*/
    }
    if ( *(_WORD *)v4->__pad_0 != 37 ) /*0x7d3aeb*/
    {
      ++v74; /*0x7d44d7*/
      v3 = fgetwc(File); /*0x7d44df*/
      v49 = *(_WORD *)v4->__pad_0; /*0x7d44e1*/
      v4 = (CampaignScore *)((char *)v4 + 2); /*0x7d44e6*/
      *(_DWORD *)C = v3; /*0x7d44ea*/
      if ( v49 == (_WORD)v3 ) /*0x7d44ed*/
        goto LABEL_246; /*0x7d44ed*/
      goto LABEL_251; /*0x7d44ed*/
    }
    v65 = 0; /*0x7d3af1*/
    v64 = 0; /*0x7d3af5*/
    v72 = 0; /*0x7d3af9*/
    v70 = 0; /*0x7d3afd*/
    v68 = 0; /*0x7d3b01*/
    v73 = 0; /*0x7d3b05*/
    v54 = 0; /*0x7d3b09*/
    v60 = 0; /*0x7d3b0c*/
    v63 = 0; /*0x7d3b0f*/
    v59 = 0; /*0x7d3b12*/
    v69 = 0; /*0x7d3b15*/
    v71 = 1; /*0x7d3b18*/
    v55 = 0; /*0x7d3b1c*/
    do
    {
      v4 = (CampaignScore *)((char *)v4 + 2); /*0x7d3b20*/
      v8 = *(unsigned __int16 *)v4->__pad_0; /*0x7d3b21*/
      if ( (v8 & 0xFF00) == 0 )
      {
        if ( *(int *)&stru_87C374.__pad_3BC[108] <= 1
           ? *(_BYTE *)(stru_87C374.field_21C + 2 * (unsigned __int8)v8) & 4
           : _isctype((unsigned __int8)v8, 4) )
        {
          ++v59; /*0x7d3b61*/
          v69 = v8 + 10 * v69 - 48; /*0x7d3b6b*/
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
            ++v72; /*0x7d3bb0*/
            continue; /*0x7d3bb3*/
          case 'F': /*0x7d3b75*/
            continue; /*0x7d3b7f*/
          case 'I': /*0x7d3b75*/
            if ( *(_WORD *)&v4->__pad_0[2] == 54 && LOWORD(v4->CampaignScore_field_0x04) == 52 ) /*0x7d3b9f*/
            {
              ++v55; /*0x7d3ba1*/
              v57 = 0; /*0x7d3ba4*/
              v4 = (CampaignScore *)((char *)v4 + 4); /*0x7d3bac*/
              continue; /*0x7d3bae*/
            }
            break;
          case 'L': /*0x7d3b75*/
            ++v71; /*0x7d3b8b*/
            continue; /*0x7d3b8e*/
        }
LABEL_28:
        ++v70; /*0x7d3bc4*/
        continue; /*0x7d3bc7*/
      }
      if ( v8 == 104 ) /*0x7d3bb8*/
      {
        --v71; /*0x7d3bd1*/
        --v73; /*0x7d3bd4*/
      }
      else
      {
        if ( v8 == 108 ) /*0x7d3bbd*/
        {
          ++v71; /*0x7d3bc9*/
        }
        else if ( v8 != 119 ) /*0x7d3bc2*/
        {
          goto LABEL_28; /*0x7d3bc2*/
        }
        ++v73; /*0x7d3bcc*/
      }
    }
    while ( !v70 );
    aP1a = v4; /*0x7d3be5*/
    if ( !v72 ) /*0x7d3be8*/
    {
      v53 = a3; /*0x7d3bed*/
      a3 += 4; /*0x7d3bf3*/
      MbCh = *(char **)(a3 - 4); /*0x7d3bf9*/
    }
    v70 = 0; /*0x7d3bfc*/
    if ( !v73 ) /*0x7d3c04*/
    {
      if ( *(_WORD *)v4->__pad_0 == 83 || *(_WORD *)v4->__pad_0 == 67 ) /*0x7d3c13*/
        v73 = -1; /*0x7d3c1b*/
      else
        v73 = 1; /*0x7d3c15*/
    }
    v61 = *(unsigned __int16 *)v4->__pad_0 | 0x20; /*0x7d3c28*/
    v10 = v61; /*0x7d3c22*/
    if ( v61 != 110 ) /*0x7d3c2b*/
    {
      if ( v61 == 99 || v61 == 123 ) /*0x7d3c35*/
      {
        ++v74; /*0x7d3c49*/
        v11 = fgetwc(File); /*0x7d3c4c*/
      }
      else
      {
        LOWORD(v11) = _whiteout_0(&v74, File); /*0x7d3c3e*/
      }
      LOWORD(v3) = v11; /*0x7d3c51*/
      *(_DWORD *)C = v11; /*0x7d3c54*/
    }
    if ( v59 && !v69 ) /*0x7d3c62*/
      goto LABEL_251; /*0x7d3c62*/
    if ( v10 > 111 ) /*0x7d3c6b*/
    {
      switch ( v10 ) /*0x7d3f59*/
      {
        case 'p': /*0x7d3f59*/
          v71 = 1; /*0x7d4205*/
          goto LABEL_175; /*0x7d4205*/
        case 's': /*0x7d3f59*/
          if ( v73 > 0 ) /*0x7d405e*/
            v68 = 1; /*0x7d4060*/
          v27 = &stru_87C374.__pad_690[68]; /*0x7d4064*/
          break;
        case 'u': /*0x7d3f59*/
          goto LABEL_175; /*0x7d3f6a*/
        case 'x': /*0x7d3f59*/
          goto LABEL_59; /*0x7d3f73*/
        case '{': /*0x7d3f59*/
          if ( v73 > 0 ) /*0x7d3fa3*/
            v68 = 1; /*0x7d3fa5*/
          v27 = &v4->__pad_0[2]; /*0x7d3fad*/
          aP1a = (CampaignScore *)v27; /*0x7d3fae*/
          if ( *(_WORD *)v27 != 94 ) /*0x7d3fb5*/
          {
LABEL_138:
            v29 = (int)memset(a0, 0, (AbstractClass *)0x2000); /*0x7d406d*/
            if ( v10 == 123 ) /*0x7d4086*/
            {
              HIWORD(v29) = 0; /*0x7d408a*/
              if ( *(_WORD *)v27 == 93 ) /*0x7d408e*/
              {
                v60 = 93; /*0x7d4091*/
                v27 += 2; /*0x7d4094*/
                a0[11] = 32; /*0x7d4095*/
              }
            }
            while ( 1 ) /*0x7d409c*/
            {
              LOWORD(v29) = *(_WORD *)v27; /*0x7d409c*/
              if ( *(_WORD *)v27 == 93 ) /*0x7d40a3*/
                break; /*0x7d40a3*/
              v27 += 2; /*0x7d40a6*/
              if ( (_WORD)v29 == 45 && (_WORD)v60 && (LOWORD(v30) = *(_WORD *)v27, *(_WORD *)v27 != 93) ) /*0x7d40bb*/
              {
                v27 += 2; /*0x7d40be*/
                if ( (unsigned __int16)v60 >= (unsigned __int16)v30 ) /*0x7d40c3*/
                {
                  v29 = v60; /*0x7d40c9*/
                  v60 = v30; /*0x7d40cc*/
                }
                else
                {
                  v29 = v30; /*0x7d40c5*/
                }
                if ( (unsigned __int16)v60 <= (unsigned __int16)v29 ) /*0x7d40d3*/
                {
                  v31 = (unsigned __int16)v60; /*0x7d40d5*/
                  v32 = (unsigned __int16)v29 - (unsigned __int16)v60 + 1; /*0x7d40de*/
                  do /*0x7d40f8*/
                  {
                    v30 = v31 & 7; /*0x7d40e3*/
                    v29 = (int)&a0[v31 >> 3]; /*0x7d40ed*/
                    *(_BYTE *)v29 |= 1 << v30; /*0x7d40f4*/
                    ++v31; /*0x7d40f6*/
                    --v32; /*0x7d40f7*/
                  }
                  while ( v32 ); /*0x7d40f8*/
                  LOWORD(v3) = C[0]; /*0x7d40fa*/
                }
                v60 = 0; /*0x7d40fd*/
              }
              else
              {
                v60 = v29; /*0x7d4106*/
                v30 = v29 & 7; /*0x7d410b*/
                v29 = (int)&a0[(unsigned __int16)v29 >> 3]; /*0x7d4115*/
                *(_BYTE *)v29 |= 1 << v30; /*0x7d411c*/
              }
            }
            if ( !*(_WORD *)v27 ) /*0x7d4127*/
              goto LABEL_252; /*0x7d4127*/
            if ( v61 == 123 ) /*0x7d4131*/
              aP1a = (CampaignScore *)v27; /*0x7d4133*/
            v33 = MbCh; /*0x7d4139*/
            --v74; /*0x7d413c*/
            _un_inc_0(v3, (int)File); /*0x7d4140*/
            while ( 1 ) /*0x7d4147*/
            {
              if ( v59 ) /*0x7d414b*/
              {
                if ( !v69-- ) /*0x7d414d*/
                  goto LABEL_168; /*0x7d4155*/
              }
              ++v74; /*0x7d415a*/
              v35 = fgetwc(File); /*0x7d415d*/
              LOWORD(v3) = v35; /*0x7d4162*/
              *(_DWORD *)C = v35; /*0x7d416a*/
              if ( (_WORD)v35 == 0xFFFF || ((1 << (v35 & 7)) & (v65 ^ (char)a0[(unsigned __int16)v35 >> 3])) == 0 ) /*0x7d418f*/
                break; /*0x7d418f*/
              if ( v72 ) /*0x7d4195*/
              {
                v33 += 2; /*0x7d41ba*/
              }
              else if ( v68 ) /*0x7d419b*/
              {
                v36 = MbCh; /*0x7d419d*/
                MbCh += 2; /*0x7d41a0*/
                *(_WORD *)v36 = v3; /*0x7d41a4*/
              }
              else
              {
                v37 = wctomb(MbCh, v35); /*0x7d41ad*/
                MbCh += v37; /*0x7d41b2*/
              }
            }
            --v74; /*0x7d41c0*/
            _un_inc_0(v35, (int)File); /*0x7d41c4*/
LABEL_168:
            if ( v33 != MbCh ) /*0x7d41ce*/
            {
              if ( !v72 ) /*0x7d41d8*/
              {
                ++v58; /*0x7d41de*/
                if ( v61 != 99 ) /*0x7d41e5*/
                {
                  if ( v68 ) /*0x7d41f2*/
                    *(_WORD *)MbCh = 0; /*0x7d41f4*/
                  else
                    *MbCh = 0; /*0x7d41fd*/
                }
              }
              goto LABEL_244; /*0x7d41f8*/
            }
            goto LABEL_252; /*0x7d41ce*/
          }
          v27 += 2; /*0x7d3fbd*/
          break;
        default:
          goto LABEL_115; /*0x7d3f7c*/
      }
LABEL_137:
      v65 = -1; /*0x7d4069*/
      goto LABEL_138; /*0x7d4069*/
    }
    if ( v10 == 111 ) /*0x7d3c71*/
      goto LABEL_175; /*0x7d3c71*/
    if ( v10 == 99 ) /*0x7d3c7a*/
    {
      if ( !v59 ) /*0x7d3f34*/
      {
        ++v69; /*0x7d3f36*/
        v59 = 1; /*0x7d3f39*/
      }
      if ( v73 > 0 ) /*0x7d3f44*/
        v68 = 1; /*0x7d3f46*/
      v27 = &stru_87C374.__pad_690[80]; /*0x7d3f4a*/
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
            v12 = v74; /*0x7d3ca6*/
            if ( !v72 ) /*0x7d3ca9*/
            {
LABEL_215:
              if ( v55 ) /*0x7d43a1*/
              {
                *(_QWORD *)MbCh = v57; /*0x7d43ad*/
              }
              else if ( v71 ) /*0x7d44c1*/
              {
                *(_DWORD *)MbCh = v12; /*0x7d44c3*/
              }
              else
              {
                *(_WORD *)MbCh = v12; /*0x7d44c7*/
              }
            }
            goto LABEL_244; /*0x7d43b5*/
          }
LABEL_115:
          if ( *(_WORD *)v4->__pad_0 == (_WORD)v3 ) /*0x7d3f81*/
          {
            --v67; /*0x7d3f87*/
            if ( !v72 ) /*0x7d3f8e*/
              a3 = v53; /*0x7d3f97*/
            goto LABEL_244; /*0x7d3f9a*/
          }
LABEL_251:
          --v74; /*0x7d4512*/
          _un_inc_0(v3, (int)File); /*0x7d4519*/
          break; /*0x7d4519*/
        }
        v10 = 100; /*0x7d3cb6*/
        v61 = 100; /*0x7d3cb7*/
LABEL_59:
        if ( (_WORD)v3 == 45 ) /*0x7d3cbe*/
        {
          v64 = 1; /*0x7d3cc4*/
          goto LABEL_123; /*0x7d3cc8*/
        }
        if ( (_WORD)v3 == 43 ) /*0x7d3fc9*/
        {
LABEL_123:
          if ( --v69 || !v59 ) /*0x7d3fd2*/
          {
            ++v74; /*0x7d3fdd*/
            v3 = fgetwc(File); /*0x7d3fe5*/
            *(_DWORD *)C = v3; /*0x7d3fe8*/
          }
          else
          {
            v70 = 1; /*0x7d3fd4*/
          }
        }
        if ( (_WORD)v3 == 48 ) /*0x7d3fef*/
        {
          ++v74; /*0x7d3ff8*/
          v28 = fgetwc(File); /*0x7d3ffb*/
          LOWORD(v3) = v28; /*0x7d4001*/
          *(_DWORD *)C = v28; /*0x7d4005*/
          if ( (_WORD)v28 == 120 || (_WORD)v28 == 88 ) /*0x7d4012*/
          {
            ++v74; /*0x7d4044*/
            v3 = fgetwc(File); /*0x7d404c*/
            *(_DWORD *)C = v3; /*0x7d404f*/
            v61 = 120; /*0x7d4052*/
          }
          else
          {
            v63 = 1; /*0x7d4016*/
            if ( v10 != 120 ) /*0x7d401d*/
            {
              v61 = 111; /*0x7d401f*/
              goto LABEL_183; /*0x7d4026*/
            }
            --v74; /*0x7d402e*/
            _un_inc_0(v28, (int)File); /*0x7d4032*/
            v3 = 48; /*0x7d403b*/
LABEL_182:
            *(_DWORD *)C = v3; /*0x7d4238*/
          }
        }
        goto LABEL_183; /*0x7d4238*/
      }
      v13 = Source; /*0x7d3cd1*/
      if ( (_WORD)v3 == 45 ) /*0x7d3cd7*/
      {
        *(_WORD *)Source[0].__pad_0 = 45; /*0x7d3cd9*/
        v13 = (ObjectClass *)&Source[0].__pad_0[2]; /*0x7d3ce0*/
        goto LABEL_64; /*0x7d3ce6*/
      }
      if ( (_WORD)v3 == 43 ) /*0x7d3cec*/
      {
LABEL_64:
        --v69; /*0x7d3cee*/
        ++v74; /*0x7d3cf4*/
        v3 = fgetwc(File); /*0x7d3cfc*/
        *(_DWORD *)C = v3; /*0x7d3cff*/
      }
      if ( !v59 || v69 > 349 ) /*0x7d3d0f*/
        v69 = 349; /*0x7d3d11*/
      for ( ; !BYTE1(v3); *(_DWORD *)C = v3 ) /*0x7d3d1b*/
      {
        if ( *(int *)&stru_87C374.__pad_3BC[108] <= 1 ) /*0x7d3d29*/
          v14 = *(_BYTE *)(stru_87C374.field_21C + 2 * (unsigned __int8)v3) & 4; /*0x7d3d48*/
        else
          v14 = _isctype((unsigned __int8)v3, 4); /*0x7d3d32*/
        if ( !v14 ) /*0x7d3d4d*/
          break; /*0x7d3d4d*/
        if ( !v69-- ) /*0x7d3d4f*/
          break; /*0x7d3d57*/
        ++v63; /*0x7d3d59*/
        *(_WORD *)v13->__pad_0 = v3; /*0x7d3d5f*/
        v13 = (ObjectClass *)((char *)v13 + 2); /*0x7d3d63*/
        ++v74; /*0x7d3d64*/
        v3 = fgetwc(File); /*0x7d3d6c*/
      }
      mbtowc(&DstCh, (const char *)&stru_87C374.field_42C, *(size_t *)&stru_87C374.__pad_3BC[108]); /*0x7d3d86*/
      v16 = v69; /*0x7d3d8b*/
      if ( DstCh == (_WORD)v3 )
      {
        v16 = v69 - 1; /*0x7d3d99*/
        if ( v69 )
        {
          ++v74; /*0x7d3da1*/
          v3 = fgetwc(File); /*0x7d3da9*/
          *(_WORD *)v13->__pad_0 = DstCh; /*0x7d3daf*/
          *(_DWORD *)C = v3; /*0x7d3db4*/
          v13 = (ObjectClass *)((char *)v13 + 2); /*0x7d3db7*/
          while ( !BYTE1(v3) )
          {
            if ( !(*(int *)&stru_87C374.__pad_3BC[108] <= 1
                 ? *(_BYTE *)(stru_87C374.field_21C + 2 * (unsigned __int8)v3) & 4
                 : _isctype((unsigned __int8)v3, 4)) )
              break; /*0x7d3dee*/
            if ( !v16-- ) /*0x7d3df0*/
              break; /*0x7d3df5*/
            ++v63; /*0x7d3df7*/
            *(_WORD *)v13->__pad_0 = v3; /*0x7d3dfd*/
            v13 = (ObjectClass *)((char *)v13 + 2); /*0x7d3e01*/
            ++v74; /*0x7d3e02*/
            v3 = fgetwc(File); /*0x7d3e0a*/
            *(_DWORD *)C = v3; /*0x7d3e0d*/
          }
        }
      }
      if ( v63 && ((_WORD)v3 == 101 || (_WORD)v3 == 69) )
      {
        v19 = v16; /*0x7d3e2c*/
        v20 = v16 - 1; /*0x7d3e2e*/
        if ( v19 )
        {
          *(_WORD *)v13->__pad_0 = 101; /*0x7d3e3a*/
          v13 = (ObjectClass *)((char *)v13 + 2); /*0x7d3e40*/
          ++v74; /*0x7d3e41*/
          v21 = fgetwc(File); /*0x7d3e44*/
          LOWORD(v3) = v21; /*0x7d3e49*/
          *(_DWORD *)C = v21; /*0x7d3e50*/
          if ( (_WORD)v21 == 45 ) /*0x7d3e53*/
          {
            *(_WORD *)v13->__pad_0 = 45; /*0x7d3e55*/
            v13 = (ObjectClass *)((char *)v13 + 2); /*0x7d3e59*/
            goto LABEL_92; /*0x7d3e5a*/
          }
          if ( (_WORD)v21 == 43 ) /*0x7d3e60*/
          {
LABEL_92:
            if ( v20-- ) /*0x7d3e62*/
              goto LABEL_94; /*0x7d3e67*/
            v20 = 0; /*0x7d3e69*/
          }
          while ( !BYTE1(v3) )
          {
            if ( !(*(int *)&stru_87C374.__pad_3BC[108] <= 1
                 ? *(_BYTE *)(stru_87C374.field_21C + 2 * (unsigned __int8)v3) & 4
                 : _isctype((unsigned __int8)v3, 4)) )
              break; /*0x7d3eb4*/
            if ( !v20-- ) /*0x7d3eb6*/
              break; /*0x7d3ebb*/
            ++v63; /*0x7d3ebd*/
            *(_WORD *)v13->__pad_0 = v3; /*0x7d3ec0*/
            v13 = (ObjectClass *)((char *)v13 + 2); /*0x7d3ec4*/
LABEL_94:
            ++v74; /*0x7d3e6d*/
            v3 = fgetwc(File); /*0x7d3e78*/
            *(_DWORD *)C = v3; /*0x7d3e7b*/
          }
        }
      }
      --v74; /*0x7d3eca*/
      _un_inc_0(v3, (int)File); /*0x7d3ece*/
      if ( v63 ) /*0x7d3ed9*/
      {
        if ( !v72 ) /*0x7d3ee3*/
        {
          *(_WORD *)v13->__pad_0 = 0; /*0x7d3ee9*/
          ++v58; /*0x7d3ef3*/
          v25 = (AbstractClass *)(2 * (((char *)v13 - (char *)Source) >> 1) + 2); /*0x7d3efa*/
          v26 = (CCINIClass *)malloc(v25); /*0x7d3f04*/
          wcstombs(v26, Source, (size_t)v25); /*0x7d3f0f*/
          (*(void (__cdecl **)(int, char *, CCINIClass *))stru_87C374.__pad_164)(v71 - 1, MbCh, v26); /*0x7d3f1e*/
        }
        goto LABEL_244; /*0x7d3ee3*/
      }
      break; /*0x7d3ed9*/
    }
LABEL_175:
    if ( (_WORD)v3 == 45 ) /*0x7d420d*/
    {
      v64 = 1; /*0x7d420f*/
    }
    else if ( (_WORD)v3 != 43 ) /*0x7d4219*/
    {
      goto LABEL_183; /*0x7d4219*/
    }
    if ( --v69 || !v59 ) /*0x7d4222*/
    {
      ++v74; /*0x7d422d*/
      v3 = fgetwc(File); /*0x7d4236*/
      goto LABEL_182; /*0x7d4236*/
    }
    v70 = 1; /*0x7d4224*/
LABEL_183:
    if ( !v55 )
    {
      v12 = v54; /*0x7d43be*/
      if ( v70 ) /*0x7d43c1*/
        goto LABEL_239; /*0x7d43c1*/
      while ( 1 )
      {
        if ( v61 == 120 || v61 == 112 )
        {
          if ( BYTE1(v3)
            || (*(int *)&stru_87C374.__pad_3BC[108] <= 1
              ? (v47 = *(_BYTE *)(stru_87C374.field_21C + 2 * (unsigned __int8)v3) & 0x80)
              : (v47 = _isctype((unsigned __int8)v3, 128)),
                !v47) )
          {
LABEL_238:
            --v74; /*0x7d449b*/
            _un_inc_0(v3, (int)File); /*0x7d44a2*/
LABEL_239:
            if ( v64 ) /*0x7d44ad*/
              v12 = -v12; /*0x7d44b3*/
            goto LABEL_210; /*0x7d44b5*/
          }
          v46 = 16 * v12; /*0x7d4462*/
          LOWORD(v48) = _hextodec_0(v3); /*0x7d4465*/
          LOWORD(v3) = v48; /*0x7d446a*/
          *(_DWORD *)C = v48; /*0x7d446d*/
        }
        else
        {
          if ( BYTE1(v3) ) /*0x7d43db*/
            goto LABEL_238; /*0x7d43db*/
          if ( !(*(int *)&stru_87C374.__pad_3BC[108] <= 1
               ? *(_BYTE *)(stru_87C374.field_21C + 2 * (unsigned __int8)v3) & 4
               : _isctype((unsigned __int8)v3, 4)) )
            goto LABEL_238; /*0x7d440c*/
          if ( v61 == 111 ) /*0x7d4416*/
          {
            if ( (unsigned __int16)v3 >= 0x38u ) /*0x7d441c*/
              goto LABEL_238; /*0x7d441c*/
            v46 = 8 * v12; /*0x7d441e*/
          }
          else
          {
            v46 = 10 * v12; /*0x7d4426*/
          }
        }
        ++v63; /*0x7d4470*/
        v12 = v46 + (unsigned __int16)v3 - 48; /*0x7d447a*/
        if ( v59 ) /*0x7d447e*/
        {
          if ( !--v69 ) /*0x7d4483*/
            goto LABEL_239; /*0x7d4483*/
        }
        ++v74; /*0x7d4488*/
        v3 = fgetwc(File); /*0x7d4490*/
        *(_DWORD *)C = v3; /*0x7d4493*/
      }
    }
    if ( v70 ) /*0x7d4249*/
      goto LABEL_207; /*0x7d4249*/
    v38 = v57; /*0x7d424f*/
    while ( 2 )
    {
      if ( v61 == 120 )
      {
        if ( BYTE1(v3) ) /*0x7d4260*/
          break; /*0x7d4260*/
        if ( !(*(int *)&stru_87C374.__pad_3BC[108] <= 1
             ? *(_BYTE *)(stru_87C374.field_21C + 2 * (unsigned __int8)v3) & 0x80
             : _isctype((unsigned __int8)v3, 128)) )
          break; /*0x7d4296*/
        HIDWORD(v57) = __PAIR64__(HIDWORD(v57), v38) >> 28; /*0x7d42ac*/
        v40 = 16 * v38; /*0x7d42ac*/
        LOWORD(v41) = _hextodec_0(v3); /*0x7d42af*/
        LOWORD(v3) = v41; /*0x7d42b4*/
        *(_DWORD *)C = v41; /*0x7d42b7*/
        goto LABEL_203; /*0x7d42ba*/
      }
      if ( !BYTE1(v3) )
      {
        if ( *(int *)&stru_87C374.__pad_3BC[108] <= 1
           ? *(_BYTE *)(stru_87C374.field_21C + 2 * (unsigned __int8)v3) & 4
           : _isctype((unsigned __int8)v3, 4) )
        {
          if ( v61 == 111 ) /*0x7d42f6*/
          {
            if ( (unsigned __int16)v3 >= 0x38u ) /*0x7d42fc*/
              break; /*0x7d42fc*/
            v43 = 8 * __PAIR64__(HIDWORD(v57), v38); /*0x7d4306*/
          }
          else
          {
            v43 = 10 * __PAIR64__(HIDWORD(v57), v38); /*0x7d4315*/
          }
          HIDWORD(v57) = HIDWORD(v43); /*0x7d431c*/
          v40 = v43; /*0x7d431c*/
LABEL_203:
          ++v63; /*0x7d431f*/
          v44 = ((unsigned __int16)v3 - 48 + __PAIR64__(HIDWORD(v57), v40)) >> 32; /*0x7d432b*/
          v38 = (unsigned __int16)v3 - 48 + v40; /*0x7d432b*/
          v57 = __PAIR64__(v44, v38); /*0x7d4332*/
          if ( v59 ) /*0x7d4335*/
          {
            if ( !--v69 ) /*0x7d433a*/
              goto LABEL_207; /*0x7d433a*/
          }
          ++v74; /*0x7d433f*/
          v3 = fgetwc(File); /*0x7d4347*/
          *(_DWORD *)C = v3; /*0x7d434a*/
          continue; /*0x7d434d*/
        }
      }
      break;
    }
    --v74; /*0x7d4352*/
    _un_inc_0(v3, (int)File); /*0x7d4359*/
LABEL_207:
    if ( v64 ) /*0x7d4364*/
      v57 = -(__int64)v57; /*0x7d4376*/
    v12 = v54; /*0x7d4379*/
LABEL_210:
    if ( v61 == 70 ) /*0x7d4380*/
      v63 = 0; /*0x7d4382*/
    if ( !v63 ) /*0x7d438a*/
      break; /*0x7d438a*/
    if ( !v72 ) /*0x7d4394*/
    {
      ++v58; /*0x7d439a*/
      goto LABEL_215; /*0x7d439a*/
    }
LABEL_244:
    ++v67; /*0x7d44cd*/
    v4 = (CampaignScore *)&aP1a->__pad_0[2]; /*0x7d44d1*/
LABEL_246:
    if ( (unsigned __int16)v3 == -1 && (*(_WORD *)v4->__pad_0 != 37 || *(_WORD *)&v4->__pad_0[2] != 110) ) /*0x7d4502*/
      break; /*0x7d4502*/
    v5 = *(_WORD *)v4->__pad_0; /*0x7d4504*/
  }
  while ( *(_WORD *)v4->__pad_0 );
LABEL_252:
  result = v58; /*0x7d4520*/
  if ( (unsigned __int16)v3 == -1 && !v58 && !v67 ) /*0x7d4535*/
    return -1; /*0x7d4537*/
  return result; /*0x7d4523*/
}
}
} // namespace gamemd

// 0x7D453C
namespace gamemd {
wint_t _hextodec_0(wint_t C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wint_t __cdecl _hextodec_0(wint_t C)
{
  wint_t result; // ax
  bool v3; // zf

  if ( (C & 0xFF00) == 0 )
  {
    if ( (int)MEMORY[0x87C79C] <= 1
       ? *((_BYTE *)MEMORY[0x87C590] + 2 * (unsigned __int8)C) & 4
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
} // namespace gamemd

// 0x7D45A1
namespace gamemd {
int _un_inc_0(short MbCh, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _un_inc_0(__int16 MbCh, int a2)
{
  int result; // eax

  if ( MbCh != -1 ) /*0x7d45a8*/
    return _ungetwc_lk(MbCh, a2); /*0x7d45b2*/
  return result; /*0x7d45b9*/
}
}
} // namespace gamemd

// 0x7D45BA
namespace gamemd {
wint_t _whiteout_0(unsigned int * a1, FILE * File)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wint_t __cdecl _whiteout_0(_DWORD *a1, FILE *File)
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
}
} // namespace gamemd

// 0x7D45DF
namespace gamemd {
int _mbsnbicoll(const unsigned char * Str1, const unsigned char * Str2, size_t MaxCount)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _mbsnbicoll(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount)
{
  int v4; // eax

  if ( !MaxCount ) /*0x7d45e6*/
    return 0; /*0x7d45e8*/
  v4 = __crtCompareStringA(Locale, 1u, (PCNZCH)Str1, MaxCount, (PCNZCH)Str2, MaxCount, dword_B78840); /*0x7d4606*/
  if ( v4 ) /*0x7d4610*/
    return v4 - 2; /*0x7d4619*/
  else
    return 0x7FFFFFFF; /*0x7d4612*/
}
}
} // namespace gamemd

// 0x7D461E
namespace gamemd {
int __wtomb_environ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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
  if ( !*(_DWORD *)dword_B781EC ) /*0x7d462b*/
    return 0; /*0x7d467f*/
  while ( 1 ) /*0x7d4641*/
  {
    v2 = WideCharToMultiByte(1u, 0, v1, -1, 0, 0, 0, 0); /*0x7d4641*/
    v3 = v2; /*0x7d4643*/
    if ( !v2 ) /*0x7d4647*/
      break; /*0x7d4647*/
    v4 = (CHAR *)malloc(v2); /*0x7d464a*/
    Str = v4; /*0x7d4652*/
    if ( !v4 || !WideCharToMultiByte(1u, 0, *(LPCWCH *)v0, -1, v4, v3, 0, 0) ) /*0x7d4663*/
      break; /*0x7d4663*/
    __crtsetenv(Str, 0); /*0x7d466e*/
    v1 = *(const WCHAR **)(v0 + 4); /*0x7d4673*/
    v0 += 4; /*0x7d4676*/
    if ( !v1 ) /*0x7d467d*/
      return 0; /*0x7d467d*/
  }
  return -1; /*0x7d4681*/
}
}
} // namespace gamemd

// 0x7D482C
namespace gamemd {
_crt_signal_t signal(int Signal, _crt_signal_t Function)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_crt_signal_t __cdecl signal(int Signal, _crt_signal_t Function)
{
  int v2; // esi
  void *v3; // eax
  unsigned int v4; // eax
  void (__cdecl *v5)(int); // edi
  DWORD LastError; // esi

  if ( Function == (_crt_signal_t)4 || Function == (_crt_signal_t)3 ) /*0x7d4841*/
    goto LABEL_28; /*0x7d4841*/
  if ( Signal == 2 || Signal == 21 || Signal == 22 || Signal == 15 ) /*0x7d4868*/
  {
    _lock(1); /*0x7d48fe*/
    if ( (Signal == 2 || Signal == 21) && !MEMORY[0xB782EC] ) /*0x7d4915*/
    {
      if ( !SetConsoleCtrlHandler(ctrlevent_capture_4, 1) ) /*0x7d4925*/
      {
        LastError = GetLastError(); /*0x7d4952*/
        *__doserrno() = LastError; /*0x7d495a*/
        _unlock(1); /*0x7d495c*/
        goto LABEL_28; /*0x7d495c*/
      }
      MEMORY[0xB782EC] = 1; /*0x7d4927*/
    }
    switch ( Signal ) /*0x7d492f*/
    {
      case 2: /*0x7d492f*/
        v5 = (void (__cdecl *)(int))MEMORY[0xB782DC]; /*0x7d4991*/
        MEMORY[0xB782DC] = (int)Function; /*0x7d4997*/
        break;
      case 15: /*0x7d492f*/
        v5 = (void (__cdecl *)(int))MEMORY[0xB782E8]; /*0x7d4983*/
        MEMORY[0xB782E8] = (int)Function; /*0x7d4989*/
        break;
      case 21: /*0x7d492f*/
        v5 = (void (__cdecl *)(int))MEMORY[0xB782E0]; /*0x7d4975*/
        MEMORY[0xB782E0] = (int)Function; /*0x7d497b*/
        break;
      default:
        v5 = (void (__cdecl *)(int))MEMORY[0xB782E4]; /*0x7d493e*/
        MEMORY[0xB782E4] = (int)Function; /*0x7d4944*/
        break;
    }
    _unlock(1); /*0x7d49a4*/
    return v5; /*0x7d49a4*/
  }
  if ( Signal != 8 && Signal != 4 && Signal != 11 ) /*0x7d487b*/
    goto LABEL_28; /*0x7d487b*/
  v2 = _getptd(); /*0x7d4886*/
  if ( *(_UNKNOWN **)(v2 + 80) == &MEMORY[0x87CB20] ) /*0x7d4890*/
  {
    v3 = malloc(MEMORY[0x87CBA0]); /*0x7d4898*/
    *(_DWORD *)(v2 + 80) = v3; /*0x7d48a0*/
    if ( !v3 ) /*0x7d48a3*/
    {
LABEL_28:
      *_errno() = 22; /*0x7d4962*/
      return (_crt_signal_t)-1; /*0x7d4974*/
    }
    memcpy_0(v3, &MEMORY[0x87CB20], MEMORY[0x87CBA0]); /*0x7d48b1*/
  }
  v4 = siglookup(Signal, *(_DWORD *)(v2 + 80)); /*0x7d48bd*/
  if ( !v4 ) /*0x7d48c6*/
    goto LABEL_28; /*0x7d48c6*/
  v5 = *(void (__cdecl **)(int))(v4 + 8); /*0x7d48cc*/
  do /*0x7d48f2*/
  {
    if ( *(_DWORD *)(v4 + 4) != Signal ) /*0x7d48d2*/
      break; /*0x7d48d2*/
    *(_DWORD *)(v4 + 8) = Function; /*0x7d48db*/
    v4 += 12; /*0x7d48e7*/
  }
  while ( v4 < *(_DWORD *)(v2 + 80) + 12 * MEMORY[0x87CBA4] ); /*0x7d48f2*/
  return v5; /*0x7d4970*/
}
}
} // namespace gamemd

// 0x7D49AE
namespace gamemd {
BOOL ctrlevent_capture_4(DWORD CtrlType)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall ctrlevent_capture_4(DWORD CtrlType)
{
  void (__cdecl *v1)(int); // esi
  int *v2; // eax
  int v3; // edi
  int v5; // [esp-4h] [ebp-10h]

  _lock(1); /*0x7d49b5*/
  if ( CtrlType ) /*0x7d49c0*/
  {
    v1 = (void (__cdecl *)(int))MEMORY[0xB782E0]; /*0x7d49d1*/
    v2 = &MEMORY[0xB782E0]; /*0x7d49d7*/
    v5 = 21; /*0x7d49dc*/
  }
  else
  {
    v1 = (void (__cdecl *)(int))MEMORY[0xB782DC]; /*0x7d49c2*/
    v2 = &MEMORY[0xB782DC]; /*0x7d49c8*/
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
}
} // namespace gamemd

// 0x7D4A10
namespace gamemd {
int raise(int Signal)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl raise(int Signal)
{
  void (__cdecl *v2)(_DWORD); // ebx
  int *v3; // edi
  _DWORD *v4; // esi
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
      v2 = (void (__cdecl *)(_DWORD))MEMORY[0xB782DC]; /*0x7d4a8b*/
      v3 = &MEMORY[0xB782DC]; /*0x7d4a91*/
      break;
    case 4: /*0x7d4a22*/
    case 8: /*0x7d4a22*/
    case 11: /*0x7d4a22*/
      v4 = (_DWORD *)_getptd(); /*0x7d4a73*/
      v3 = (int *)(siglookup(Signal, v4[20]) + 8); /*0x7d4a83*/
      v2 = (void (__cdecl *)(_DWORD))*v3; /*0x7d4a87*/
      goto LABEL_15; /*0x7d4a89*/
    case 15: /*0x7d4a22*/
      v2 = (void (__cdecl *)(_DWORD))MEMORY[0xB782E8]; /*0x7d4a61*/
      v3 = &MEMORY[0xB782E8]; /*0x7d4a67*/
      break;
    case 21: /*0x7d4a22*/
      v2 = (void (__cdecl *)(_DWORD))MEMORY[0xB782E0]; /*0x7d4a54*/
      v3 = &MEMORY[0xB782E0]; /*0x7d4a5a*/
      break;
    case 22: /*0x7d4a22*/
      v2 = (void (__cdecl *)(_DWORD))MEMORY[0xB782E4]; /*0x7d4a47*/
      v3 = &MEMORY[0xB782E4]; /*0x7d4a4d*/
      break;
    default:
      return -1; /*0x7d4a42*/
  }
  v10 = 1; /*0x7d4a98*/
  _lock(1); /*0x7d4a9f*/
  v4 = (_DWORD *)Signal; /*0x7d4aa4*/
LABEL_15:
  if ( v2 != (void (__cdecl *)(_DWORD))1 ) /*0x7d4aab*/
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
      v6 = MEMORY[0x87CB98]; /*0x7d4b0f*/
      if ( MEMORY[0x87CB98] < MEMORY[0x87CB98] + MEMORY[0x87CB9C] ) /*0x7d4b1e*/
      {
        v7 = 12 * MEMORY[0x87CB98]; /*0x7d4b23*/
        do /*0x7d4b42*/
        {
          v7 += 12; /*0x7d4b29*/
          *(_DWORD *)(v4[20] + v7 - 4) = 0; /*0x7d4b2c*/
          ++v6; /*0x7d4b3d*/
        }
        while ( v6 < MEMORY[0x87CB98] + MEMORY[0x87CB9C] ); /*0x7d4b42*/
      }
LABEL_33:
      if ( v10 ) /*0x7d4b4c*/
        _unlock(1); /*0x7d4b50*/
      if ( Signal == 8 ) /*0x7d4b5a*/
      {
        ((void (__cdecl *)(int, _DWORD))v2)(8, v4[22]); /*0x7d4b61*/
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
} // namespace gamemd

// 0x7D4B92
namespace gamemd {
unsigned int siglookup(int a1, unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __cdecl siglookup(int a1, unsigned int a2)
{
  unsigned int result; // eax

  result = a2; /*0x7d4ba5*/
  if ( *(_DWORD *)(a2 + 4) != a1 ) /*0x7d4ba7*/
  {
    do /*0x7d4bb9*/
      result += 12; /*0x7d4baf*/
    while ( result < a2 + 12 * MEMORY[0x87CBA4] && *(_DWORD *)(result + 4) != a1 ); /*0x7d4bb9*/
  }
  if ( result >= a2 + 12 * MEMORY[0x87CBA4] || *(_DWORD *)(result + 4) != a1 ) /*0x7d4bc8*/
    return 0; /*0x7d4bca*/
  return result; /*0x7d4bcc*/
}
}
} // namespace gamemd

// 0x7D4BF0
namespace gamemd {
char * strcpy(IUnknown * aP0, const char * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__cdecl strcpy(IUnknown *aP0, const char *Source)
{
  JUMPOUT(0x7D4C61); /*0x7d4c61*/
}
}
} // namespace gamemd

// 0x7D4C00
namespace gamemd {
char * strcat(CCINIClass * aP0, ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__cdecl strcat(CCINIClass *aP0, ObjectClass *aP1)
{
  CCINIClass *v2; // ecx
  char v3; // al
  int v4; // eax
  int unknown54; // eax
  int *p_unknown54; // edi
  ObjectClass *v7; // ecx
  int v8; // edx
  int v9; // eax

  v2 = aP0; /*0x7d4c00*/
  if ( ((unsigned __int8)aP0 & 3) == 0 ) /*0x7d4c0b*/
    goto find_end_of_dest_string_loop; /*0x7d4c0b*/
  do /*0x7d4c1a*/
  {
    v3 = v2->__pad_0[0]; /*0x7d4c0d*/
    v2 = (CCINIClass *)((char *)v2 + 1); /*0x7d4c0f*/
    if ( !v3 ) /*0x7d4c12*/
    {
start_byte_3_0:
      p_unknown54 = (int *)((char *)&v2[-1].unknown54 + 3); /*0x7d4c4f*/
      goto copy_start_0; /*0x7d4c52*/
    }
  }
  while ( ((unsigned __int8)v2 & 3) != 0 ); /*0x7d4c1a*/
  while ( 1 ) /*0x7d4c32*/
  {
    do /*0x7d4c32*/
    {
find_end_of_dest_string_loop:
      v4 = (*(_DWORD *)v2->__pad_0 + 2130640639) ^ ~*(_DWORD *)v2->__pad_0; /*0x7d4c1c*/
      v2 = (CCINIClass *)((char *)v2 + 4); /*0x7d4c2a*/
    }
    while ( (v4 & 0x81010100) == 0 ); /*0x7d4c32*/
    unknown54 = v2[-1].unknown54; /*0x7d4c34*/
    if ( !(_BYTE)unknown54 ) /*0x7d4c39*/
      break; /*0x7d4c39*/
    if ( !BYTE1(unknown54) ) /*0x7d4c3d*/
    {
      p_unknown54 = (int *)((char *)&v2[-1].unknown54 + 1); /*0x7d4c59*/
      goto copy_start_0; /*0x7d4c5c*/
    }
    if ( (unknown54 & 0xFF0000) == 0 ) /*0x7d4c44*/
    {
      p_unknown54 = (int *)((char *)&v2[-1].unknown54 + 2); /*0x7d4c54*/
      goto copy_start_0; /*0x7d4c57*/
    }
    if ( (unknown54 & 0xFF000000) == 0 ) /*0x7d4c4b*/
      goto start_byte_3_0; /*0x7d4c4b*/
  }
  p_unknown54 = &v2[-1].unknown54; /*0x7d4c5e*/
copy_start_0:
  v7 = aP1; /*0x7d4c61*/
  if ( ((unsigned __int8)aP1 & 3) == 0 ) /*0x7d4c6b*/
    goto main_loop_entrance_1; /*0x7d4c6b*/
  while ( 1 ) /*0x7d4c6d*/
  {
    LOBYTE(v8) = v7->__pad_0[0]; /*0x7d4c6d*/
    v7 = (ObjectClass *)((char *)v7 + 1); /*0x7d4c6f*/
    if ( !(_BYTE)v8 ) /*0x7d4c72*/
      break; /*0x7d4c72*/
    *(_BYTE *)p_unknown54 = v8; /*0x7d4c74*/
    p_unknown54 = (int *)((char *)p_unknown54 + 1); /*0x7d4c76*/
    if ( ((unsigned __int8)v7 & 3) == 0 ) /*0x7d4c7d*/
    {
      while ( 1 ) /*0x7d4c92*/
      {
main_loop_entrance_1:
        v9 = (*(_DWORD *)v7->__pad_0 + 2130640639) ^ ~*(_DWORD *)v7->__pad_0; /*0x7d4c86*/
        v8 = *(_DWORD *)v7->__pad_0; /*0x7d4c94*/
        v7 = (ObjectClass *)((char *)v7 + 4); /*0x7d4c96*/
        if ( (v9 & 0x81010100) != 0 ) /*0x7d4c9e*/
        {
          if ( !(_BYTE)v8 ) /*0x7d4ca2*/
            goto LABEL_26; /*0x7d4ca2*/
          if ( !BYTE1(v8) ) /*0x7d4ca6*/
          {
            *(_WORD *)p_unknown54 = (unsigned __int8)v8; /*0x7d4ccf*/
            return aP0->__pad_0; /*0x7d4cd7*/
          }
          if ( (v8 & 0xFF0000) == 0 ) /*0x7d4cae*/
          {
            *(_WORD *)p_unknown54 = v8; /*0x7d4cc2*/
            *((_BYTE *)p_unknown54 + 2) = 0; /*0x7d4cc9*/
            return aP0->__pad_0; /*0x7d4cce*/
          }
          if ( (v8 & 0xFF000000) == 0 ) /*0x7d4cb6*/
          {
            *p_unknown54 = v8; /*0x7d4cba*/
            return aP0->__pad_0; /*0x7d4cc1*/
          }
        }
        *p_unknown54++ = v8; /*0x7d4c81*/
      }
    }
  }
LABEL_26:
  *(_BYTE *)p_unknown54 = v8; /*0x7d4cd8*/
  return aP0->__pad_0; /*0x7d4cc0*/
}
}
} // namespace gamemd

// 0x7D4CE0
namespace gamemd {
void __tzset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __tzset()
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
} // namespace gamemd

// 0x7D4D0E
namespace gamemd {
void _tzset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl _tzset()
{
  _lock(11); /*0x7d4d10*/
  _tzset_lk(); /*0x7d4d15*/
  _unlock(11); /*0x7d4d1c*/
}
}
} // namespace gamemd

// 0x7D4D24
namespace gamemd {
LPSTR _tzset_lk()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LPSTR _tzset_lk()
{
  char *v0; // eax
  const char *v1; // esi
  LPSTR result; // eax
  size_t v3; // eax
  char *v4; // eax
  const char *v5; // esi
  int v6; // ecx
  char v7; // al
  int v8; // eax
  int v9; // [esp+10h] [ebp-8h]
  BOOL UsedDefaultChar; // [esp+14h] [ebp-4h] BYREF

  v9 = 0; /*0x7d4d32*/
  _lock(12); /*0x7d4d35*/
  MEMORY[0x87CB08] = -1; /*0x7d4d3a*/
  MEMORY[0x87CAF8] = -1; /*0x7d4d41*/
  MEMORY[0xB782F0] = 0; /*0x7d4d48*/
  v0 = getenv("TZ"); /*0x7d4d55*/
  v1 = v0; /*0x7d4d5a*/
  if ( !v0 ) /*0x7d4d5f*/
  {
    _unlock(12); /*0x7d4d66*/
    result = (LPSTR)GetTimeZoneInformation(&MEMORY[0xB782F8]); /*0x7d4d72*/
    if ( result == LPSTR_TEXTCALLBACKW ) /*0x7d4d7b*/
      return result; /*0x7d4d7b*/
    MEMORY[0x87CA60] = 60 * MEMORY[0xB782F8].Bias; /*0x7d4d99*/
    MEMORY[0xB782F0] = 1; /*0x7d4d9e*/
    if ( MEMORY[0xB782F8].StandardDate.wMonth ) /*0x7d4da4*/
      MEMORY[0x87CA60] = 60 * MEMORY[0xB782F8].StandardBias + 60 * MEMORY[0xB782F8].Bias; /*0x7d4dad*/
    if ( MEMORY[0xB782F8].DaylightDate.wMonth && MEMORY[0xB782F8].DaylightBias ) /*0x7d4dc2*/
    {
      MEMORY[0x87CA64] = 1; /*0x7d4dc6*/
      MEMORY[0x87CA68] = 60 * (MEMORY[0xB782F8].DaylightBias - MEMORY[0xB782F8].StandardBias); /*0x7d4dcf*/
    }
    else
    {
      MEMORY[0x87CA64] = 0; /*0x7d4dd6*/
      MEMORY[0x87CA68] = 0; /*0x7d4ddc*/
    }
    if ( !WideCharToMultiByte( /*0x7d4e11*/
            CodePage,
            0x220u,
            MEMORY[0xB782F8].StandardName,
            -1,
            MEMORY[0x87CAEC],
            63,
            0,
            &UsedDefaultChar)
      || UsedDefaultChar )
    {
      *MEMORY[0x87CAEC] = 0; /*0x7d4e23*/
    }
    else
    {
      MEMORY[0x87CAEC][63] = 0; /*0x7d4e18*/
    }
    if ( WideCharToMultiByte( /*0x7d4e4e*/
           CodePage,
           0x220u,
           MEMORY[0xB782F8].DaylightName,
           -1,
           MEMORY[0x87CAF0],
           63,
           0,
           &UsedDefaultChar)
      && !UsedDefaultChar )
    {
      result = MEMORY[0x87CAF0]; /*0x7d4e54*/
      MEMORY[0x87CAF0][63] = 0; /*0x7d4e59*/
      return result; /*0x7d4e5d*/
    }
LABEL_41:
    result = MEMORY[0x87CAF0]; /*0x7d4f95*/
    *MEMORY[0x87CAF0] = 0; /*0x7d4f9a*/
    return result; /*0x7d4f9d*/
  }
  if ( *v0 && (!dword_B783A4 || strcmp(v0, dword_B783A4)) ) /*0x7d4e76*/
  {
    free(dword_B783A4); /*0x7d4e8b*/
    v3 = strlen(v1); /*0x7d4e91*/
    v4 = (char *)malloc(v3 + 1); /*0x7d4e98*/
    dword_B783A4 = v4; /*0x7d4ea2*/
    if ( v4 ) /*0x7d4ea7*/
    {
      strcpy(v4, v1); /*0x7d4eaf*/
      _unlock(12); /*0x7d4eb5*/
      strncpy(MEMORY[0x87CAEC], v1, 3u); /*0x7d4ec3*/
      v5 = v1 + 3; /*0x7d4ecd*/
      MEMORY[0x87CAEC][3] = 0; /*0x7d4ed3*/
      if ( *v5 == 45 ) /*0x7d4eda*/
      {
        v9 = 1; /*0x7d4edc*/
        ++v5; /*0x7d4ee3*/
      }
      v6 = 3600 * atol(v5); /*0x7d4eef*/
      MEMORY[0x87CA60] = v6; /*0x7d4ef5*/
      while ( 1 ) /*0x7d4efb*/
      {
        v7 = *v5; /*0x7d4efb*/
        if ( *v5 != 43 && (v7 < 48 || v7 > 57) ) /*0x7d4f07*/
          break; /*0x7d4f07*/
        ++v5; /*0x7d4f09*/
      }
      if ( *v5 == 58 ) /*0x7d4f0f*/
      {
        v6 = 60 * atol(++v5) + MEMORY[0x87CA60]; /*0x7d4f22*/
        MEMORY[0x87CA60] = v6; /*0x7d4f24*/
        while ( *v5 >= 48 && *v5 <= 57 ) /*0x7d4f32*/
          ++v5; /*0x7d4f34*/
        if ( *v5 == 58 ) /*0x7d4f3a*/
        {
          v6 = atol(++v5) + MEMORY[0x87CA60]; /*0x7d4f4a*/
          MEMORY[0x87CA60] = v6; /*0x7d4f4c*/
          while ( *v5 >= 48 && *v5 <= 57 ) /*0x7d4f5a*/
            ++v5; /*0x7d4f5c*/
        }
      }
      if ( v9 ) /*0x7d4f63*/
        MEMORY[0x87CA60] = -v6; /*0x7d4f67*/
      v8 = *v5; /*0x7d4f6d*/
      MEMORY[0x87CA64] = v8; /*0x7d4f72*/
      if ( v8 ) /*0x7d4f77*/
      {
        strncpy(MEMORY[0x87CAF0], v5, 3u); /*0x7d4f82*/
        result = MEMORY[0x87CAF0]; /*0x7d4f87*/
        MEMORY[0x87CAF0][3] = 0; /*0x7d4f8f*/
        return result; /*0x7d4f93*/
      }
      goto LABEL_41; /*0x7d4f77*/
    }
  }
  return (LPSTR)_unlock(12); /*0x7d4fa6*/
}
}
} // namespace gamemd

// 0x7D4FAB
namespace gamemd {
int _isindst(CampaignScore * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _isindst(CampaignScore *aP0)
{
  BOOL v1; // esi

  _lock(11); /*0x7d4fae*/
  v1 = _isindst_0(aP0); /*0x7d4fbe*/
  _unlock(11); /*0x7d4fc0*/
  return v1; /*0x7d4fca*/
}
}
} // namespace gamemd

// 0x7D4FCC
namespace gamemd {
BOOL _isindst_0(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __cdecl _isindst_0(_DWORD *a1)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  if ( !MEMORY[0x87CA64] ) /*0x7d4fd7*/
    return 0; /*0x7d4fd7*/
  v2 = a1[5]; /*0x7d4fe7*/
  if ( v2 != MEMORY[0x87CAF8] || v2 != MEMORY[0x87CB08] ) /*0x7d4ff8*/
  {
    if ( MEMORY[0xB782F0] ) /*0x7d5004*/
    {
      if ( MEMORY[0xB782F8].DaylightDate.wYear ) /*0x7d5031*/
        cvtdate( /*0x7d5065*/
          1,
          0,
          v2,
          MEMORY[0xB782F8].DaylightDate.wMonth,
          0,
          0,
          MEMORY[0xB782F8].DaylightDate.wDay,
          MEMORY[0xB782F8].DaylightDate.wHour,
          MEMORY[0xB782F8].DaylightDate.wMinute,
          MEMORY[0xB782F8].DaylightDate.wSecond,
          MEMORY[0xB782F8].DaylightDate.wMilliseconds);
      else
        cvtdate( /*0x7d504e*/
          1,
          1,
          v2,
          MEMORY[0xB782F8].DaylightDate.wMonth,
          MEMORY[0xB782F8].DaylightDate.wDay,
          MEMORY[0xB782F8].DaylightDate.wDayOfWeek,
          0,
          MEMORY[0xB782F8].DaylightDate.wHour,
          MEMORY[0xB782F8].DaylightDate.wMinute,
          MEMORY[0xB782F8].DaylightDate.wSecond,
          MEMORY[0xB782F8].DaylightDate.wMilliseconds);
      if ( MEMORY[0xB782F8].StandardDate.wYear ) /*0x7d5094*/
        cvtdate( /*0x7d50d4*/
          0,
          0,
          a1[5],
          MEMORY[0xB782F8].StandardDate.wMonth,
          0,
          0,
          MEMORY[0xB782F8].StandardDate.wDay,
          MEMORY[0xB782F8].StandardDate.wHour,
          MEMORY[0xB782F8].StandardDate.wMinute,
          MEMORY[0xB782F8].StandardDate.wSecond,
          MEMORY[0xB782F8].StandardDate.wMilliseconds);
      else
        cvtdate( /*0x7d50b4*/
          0,
          1,
          a1[5],
          MEMORY[0xB782F8].StandardDate.wMonth,
          MEMORY[0xB782F8].StandardDate.wDay,
          MEMORY[0xB782F8].StandardDate.wDayOfWeek,
          0,
          MEMORY[0xB782F8].StandardDate.wHour,
          MEMORY[0xB782F8].StandardDate.wMinute,
          MEMORY[0xB782F8].StandardDate.wSecond,
          MEMORY[0xB782F8].StandardDate.wMilliseconds);
    }
    else
    {
      cvtdate(1, 1, v2, 4, 1, 0, 0, 2, 0, 0, 0); /*0x7d50e3*/
      cvtdate(0, 1, a1[5], 10, 5, 0, 0, 2, 0, 0, 0); /*0x7d50f8*/
    }
  }
  v3 = a1[7]; /*0x7d510b*/
  if ( MEMORY[0x87CAFC] < MEMORY[0x87CB0C] ) /*0x7d5110*/
  {
    if ( v3 >= MEMORY[0x87CAFC] && v3 <= MEMORY[0x87CB0C] ) /*0x7d511c*/
    {
      if ( v3 > MEMORY[0x87CAFC] && v3 < MEMORY[0x87CB0C] ) /*0x7d5128*/
        return 1; /*0x7d512f*/
      goto LABEL_24; /*0x7d5128*/
    }
    return 0; /*0x7d4fdb*/
  }
  if ( v3 < MEMORY[0x87CB0C] || v3 > MEMORY[0x87CAFC] ) /*0x7d5136*/
    return 1; /*0x7d5136*/
  if ( v3 > MEMORY[0x87CB0C] && v3 < MEMORY[0x87CAFC] ) /*0x7d513e*/
    return 0; /*0x7d513e*/
LABEL_24:
  v4 = 1000 * (*a1 + 60 * (a1[1] + 60 * a1[2])); /*0x7d5144*/
  if ( v3 == MEMORY[0x87CAFC] ) /*0x7d515a*/
    return v4 >= MEMORY[0x87CB00]; /*0x7d5164*/
  else
    return v4 < MEMORY[0x87CB10]; /*0x7d5173*/
}
}
} // namespace gamemd

// 0x7D5178
namespace gamemd {
int cvtdate(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl cvtdate(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
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
      v12 = MEMORY[0x87D5B0][a4]; /*0x7d51a6*/
    else
      v12 = MEMORY[0x87D57C][a4]; /*0x7d519b*/
    v13 = v12 + 1; /*0x7d51ae*/
    v14 = (365 * a3 + ((a3 - 1) >> 2) + v12 + 1 - 25563) % 7; /*0x7d51cd*/
    if ( v14 > a6 ) /*0x7d51d6*/
      v15 = a6 + 7 * a5 - v14 + v13; /*0x7d51ee*/
    else
      v15 = v13 + a6 + 7 * a5 - v14 - 7; /*0x7d51e0*/
    if ( a5 == 5 ) /*0x7d51f4*/
    {
      if ( v22 ) /*0x7d51fa*/
        v16 = MEMORY[0x87D5B4][a4]; /*0x7d5204*/
      else
        v16 = MEMORY[0x87D580][a4]; /*0x7d51fc*/
      if ( v15 > v16 ) /*0x7d520c*/
        v15 -= 7; /*0x7d520e*/
    }
  }
  else
  {
    if ( (a3 & 3) != 0 ) /*0x7d5219*/
      v17 = MEMORY[0x87D5B0][a4]; /*0x7d5224*/
    else
      v17 = MEMORY[0x87D57C][a4]; /*0x7d521b*/
    v15 = a7 + v17; /*0x7d522b*/
  }
  if ( a1 == 1 ) /*0x7d5232*/
  {
    MEMORY[0x87CAFC] = v15; /*0x7d5237*/
    MEMORY[0x87CAF8] = a3; /*0x7d5243*/
    result = a11 + 1000 * (a10 + 60 * (a9 + 60 * a8)); /*0x7d5255*/
    MEMORY[0x87CB00] = result; /*0x7d5258*/
    return result; /*0x7d525d*/
  }
  MEMORY[0x87CB0C] = v15; /*0x7d5262*/
  v19 = 1000 * (a10 + MEMORY[0x87CA68] + 60 * (a9 + 60 * a8)); /*0x7d527a*/
  v20 = a11 + v19 < 0; /*0x7d5280*/
  result = a11 + v19; /*0x7d5280*/
  MEMORY[0x87CB10] = result; /*0x7d5283*/
  if ( v20 ) /*0x7d5288*/
  {
    result += 86400000; /*0x7d528a*/
    v21 = v15 - 1; /*0x7d528f*/
    MEMORY[0x87CB10] = result; /*0x7d5290*/
LABEL_24:
    MEMORY[0x87CB0C] = v21; /*0x7d52a8*/
    goto LABEL_25; /*0x7d52a8*/
  }
  if ( result >= 86400000 ) /*0x7d529e*/
  {
    result -= 86400000; /*0x7d52a0*/
    v21 = v15 + 1; /*0x7d52a2*/
    MEMORY[0x87CB10] = result; /*0x7d52a3*/
    goto LABEL_24; /*0x7d52a3*/
  }
LABEL_25:
  MEMORY[0x87CB08] = a3; /*0x7d52ae*/
  return result; /*0x7d52b4*/
}
}
} // namespace gamemd

// 0x7D52B8
namespace gamemd {
struct tm * gmtime(CampaignScore * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
struct tm *__cdecl gmtime(CampaignScore *aP0)
{
  int v1; // esi
  int v2; // ebx
  ObjectClass *v3; // eax
  ObjectClass *v4; // edi
  void *v6; // eax
  struct tm *v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  char *v11; // edi
  int v12; // esi
  int v13; // eax
  int *i; // ebx
  int tm_yday; // edx
  int v16; // eax
  int v17; // esi

  v1 = *(_DWORD *)aP0->__pad_0; /*0x7d52bf*/
  v2 = 0; /*0x7d52c1*/
  v3 = (ObjectClass *)_getptd(); /*0x7d52c3*/
  v4 = v3; /*0x7d52ca*/
  if ( v1 < 0 ) /*0x7d52cc*/
    return 0; /*0x7d52ce*/
  if ( v3->ambientSoundController[1] /*0x7d52ed*/
    || (v6 = malloc((AbstractClass *)0x24), v4->ambientSoundController[1] = (int)v6, v7 = (struct tm *)&unk_B783B0, v6) )
  {
    v7 = (struct tm *)v4->ambientSoundController[1]; /*0x7d52ef*/
  }
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
  v11 = &stru_87C374.__pad_1140[204]; /*0x7d533e*/
  v7->tm_yday = v9 / 86400; /*0x7d5343*/
  v12 = v9 % 86400; /*0x7d534c*/
  if ( !v2 ) /*0x7d5350*/
    v11 = &stru_87C374.__pad_1140[256]; /*0x7d5352*/
  v13 = 1; /*0x7d535c*/
  for ( i = (int *)(v11 + 4); *i < v7->tm_yday; ++i ) /*0x7d535d*/
    ++v13; /*0x7d5364*/
  tm_yday = v7->tm_yday; /*0x7d536a*/
  v16 = v13 - 1; /*0x7d536d*/
  v7->tm_mon = v16; /*0x7d536e*/
  v7->tm_mday = tm_yday - *(_DWORD *)&v11[4 * v16]; /*0x7d537f*/
  v7->tm_wday = (*(_DWORD *)aP0->__pad_0 / 86400 + 4) % 7; /*0x7d5397*/
  v7->tm_hour = v12 / 3600; /*0x7d539e*/
  v17 = v12 % 3600; /*0x7d53a7*/
  v7->tm_min = v17 / 60; /*0x7d53ae*/
  v7->tm_isdst = 0; /*0x7d53b6*/
  v7->tm_sec = v17 % 60; /*0x7d53ba*/
  return v7; /*0x7d53be*/
}
}
} // namespace gamemd

// 0x7D5408
namespace gamemd {
char * _strdup(INIClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__cdecl _strdup(INIClass *aP0)
{
  size_t v1; // eax
  IUnknown *v2; // eax

  if ( aP0 && (v1 = strlen(aP0->__pad_0), (v2 = (IUnknown *)malloc((AbstractClass *)(v1 + 1))) != 0) ) /*0x7d5422*/
    return strcpy(v2, aP0->__pad_0); /*0x7d5426*/
  else
    return 0; /*0x7d542f*/
}
}
} // namespace gamemd

// 0x7D5433
namespace gamemd {
int _open(const char * FileName, int OpenFlag, ... a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int _open(const char *FileName, int OpenFlag, ...)
{
  int v3; // [esp+Ch] [ebp+Ch]
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, OpenFlag);
  v3 = va_arg(va, _DWORD); /*0x7d5433*/
  return _sopen(FileName, OpenFlag, 64, v3); /*0x7d5449*/
}
}
} // namespace gamemd

// 0x7D544A
namespace gamemd {
int _sopen(const char * FileName, int OpenFlag, int ShareFlag, ... a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int _sopen(const char *FileName, int OpenFlag, int ShareFlag, ...)
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
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+Ch] [ebp-1Ch] BYREF
  DWORD dwShareMode; // [esp+18h] [ebp-10h]
  DWORD dwDesiredAccess; // [esp+1Ch] [ebp-Ch]
  DWORD dwCreationDisposition; // [esp+20h] [ebp-8h]
  char v19; // [esp+27h] [ebp-1h]
  char lpFileName_3; // [esp+33h] [ebp+Bh]
  int v21; // [esp+3Ch] [ebp+14h]
  va_list va; // [esp+40h] [ebp+18h] BYREF

  va_start(va, ShareFlag);
  v21 = va_arg(va, _DWORD); /*0x7d544a*/
  SecurityAttributes.nLength = 12; /*0x7d545b*/
  SecurityAttributes.lpSecurityDescriptor = 0; /*0x7d5462*/
  if ( (OpenFlag & 0x80u) == 0 ) /*0x7d5465*/
  {
    v19 = 0; /*0x7d5470*/
    SecurityAttributes.bInheritHandle = 1; /*0x7d5474*/
  }
  else
  {
    SecurityAttributes.bInheritHandle = 0; /*0x7d5467*/
    v19 = 16; /*0x7d546a*/
  }
  if ( (OpenFlag & 0x8000) == 0 && ((OpenFlag & 0x4000) != 0 || dword_B7857C != 0x8000) ) /*0x7d548f*/
    v19 |= 0x80u; /*0x7d5491*/
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
  if ( (OpenFlag & 0x100) != 0 && (v21 & ~(_BYTE)dword_B781C4 & 0x80u) == 0 ) /*0x7d5592*/
    v5 = 1; /*0x7d5596*/
  if ( (OpenFlag & 0x40) != 0 ) /*0x7d5599*/
  {
    v5 |= 0x4000000u; /*0x7d559b*/
    BYTE2(dwDesiredAccess) |= 1u; /*0x7d55a1*/
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
  v6 = _alloc_osfhnd(); /*0x7d55c7*/
  if ( v6 == -1 ) /*0x7d55ce*/
  {
    *_errno() = 24; /*0x7d55d5*/
    *__doserrno() = 0; /*0x7d55e0*/
    return -1; /*0x7d55e5*/
  }
  v7 = CreateFileA(FileName, dwDesiredAccess, dwShareMode, &SecurityAttributes, dwCreationDisposition, v5, 0); /*0x7d55fd*/
  v8 = v7; /*0x7d5603*/
  if ( v7 == (HANDLE)-1 ) /*0x7d5607*/
    goto LABEL_51; /*0x7d5607*/
  FileType = GetFileType(v7); /*0x7d561e*/
  if ( FileType ) /*0x7d5626*/
  {
    if ( FileType == 2 ) /*0x7d5634*/
    {
      v19 |= 0x40u; /*0x7d5636*/
    }
    else if ( FileType == 3 ) /*0x7d563f*/
    {
      v19 |= 8u; /*0x7d5641*/
    }
    _set_osfhnd(v6, v8); /*0x7d5647*/
    v12 = v19 | 1; /*0x7d565f*/
    v13 = 36 * (v6 & 0x1F); /*0x7d566d*/
    v14 = (v19 & 0x48) == 0; /*0x7d5670*/
    lpFileName_3 = v19 & 0x48; /*0x7d5670*/
    *(_BYTE *)(dword_B78A80[v6 >> 5] + v13 + 4) = v19 | 1; /*0x7d5674*/
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
        HIBYTE(ShareFlag) = 0; /*0x7d56b3*/
        if ( !_read_lk(v6, (char *)&ShareFlag + 3, 1u) && HIBYTE(ShareFlag) == 26 && _chsize_lk(v6, dwShareMode) == -1 /*0x7d56f0*/
          || _lseek_lk(v6, 0, 0) == -1 )
        {
          goto LABEL_63; /*0x7d56f0*/
        }
      }
    }
    if ( !lpFileName_3 && (OpenFlag & 8) != 0 ) /*0x7d56fc*/
      *(_BYTE *)(dword_B78A80[v6 >> 5] + v13 + 4) |= 0x20u; /*0x7d5700*/
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
} // namespace gamemd

// 0x7D5719
namespace gamemd {
int GetCurrentProcessId()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
DWORD __stdcall GetCurrentProcessId()
{
  return __imp_GetCurrentProcessId();
}
}
} // namespace gamemd

// 0x7D571F
namespace gamemd {
unsigned char * _mbsrchr(const unsigned char * String, unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 *__cdecl _mbsrchr(const unsigned __int8 *String, unsigned int C)
{
  unsigned __int8 *v2; // esi
  const unsigned __int8 *v4; // ecx
  unsigned __int8 v5; // dl
  int v6; // eax
  bool v7; // zf

  v2 = 0; /*0x7d5723*/
  if ( !dword_B7885C ) /*0x7d572b*/
    return (unsigned __int8 *)strrchr((const char *)String, C); /*0x7d573a*/
  _lock(25); /*0x7d573f*/
  v4 = String; /*0x7d5745*/
  do /*0x7d5781*/
  {
    v5 = *v4; /*0x7d5748*/
    v6 = *v4; /*0x7d574a*/
    if ( (byte_B78961[(unsigned __int8)v6] & 4) != 0 ) /*0x7d5757*/
    {
      v5 = *++v4; /*0x7d5759*/
      if ( v5 ) /*0x7d575f*/
      {
        if ( C == (v5 | (v6 << 8)) ) /*0x7d576c*/
          v2 = (unsigned __int8 *)(v4 - 1); /*0x7d576e*/
        goto LABEL_12; /*0x7d5771*/
      }
      v7 = v2 == 0; /*0x7d5773*/
    }
    else
    {
      v7 = C == v6; /*0x7d5777*/
    }
    if ( v7 ) /*0x7d577a*/
      v2 = (unsigned __int8 *)v4; /*0x7d577c*/
LABEL_12:
    ++v4; /*0x7d577e*/
  }
  while ( v5 ); /*0x7d5781*/
  _unlock(25); /*0x7d5785*/
  return v2; /*0x7d578e*/
}
}
} // namespace gamemd

// 0x7D5791
namespace gamemd {
int _rmtmp()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _rmtmp()
{
  int v0; // edi
  signed int i; // esi
  int v2; // eax

  v0 = 0; /*0x7d5795*/
  _lock(2); /*0x7d5797*/
  for ( i = 0; i < (int)Count; ++i ) /*0x7d57a5*/
  {
    if ( *(_DWORD *)(dword_B78BC4 + 4 * i) ) /*0x7d57ac*/
    {
      _lock_file2(i, *(_DWORD *)(dword_B78BC4 + 4 * i)); /*0x7d57b5*/
      v2 = *(_DWORD *)(dword_B78BC4 + 4 * i); /*0x7d57c1*/
      if ( (*(_BYTE *)(v2 + 12) & 0x83) != 0 && *(_DWORD *)(v2 + 28) ) /*0x7d57ca*/
      {
        _fclose_lk(*(_DWORD *)(dword_B78BC4 + 4 * i)); /*0x7d57d1*/
        ++v0; /*0x7d57d7*/
      }
      _unlock_file2(i, *(_DWORD *)(dword_B78BC4 + 4 * i)); /*0x7d57e1*/
    }
  }
  _unlock(2); /*0x7d57f3*/
  return v0; /*0x7d57fb*/
}
}
} // namespace gamemd

// 0x7D57FE
namespace gamemd {
char * asctime(const struct tm * Tm)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__cdecl asctime(const struct tm *Tm)
{
  int v1; // esi
  void *v2; // eax
  bool v3; // zf
  char *v4; // eax
  char *v5; // ebx
  int v6; // edi
  int v7; // ebp
  int v8; // ecx
  char v9; // dl
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  int v15; // eax
  _BYTE *v16; // eax

  v1 = _getptd(); /*0x7d5807*/
  if ( *(_DWORD *)(v1 + 56) /*0x7d5821*/
    || (v2 = malloc(0x1Au), *(_DWORD *)(v1 + 56) = v2, v3 = v2 == 0, v4 = (char *)&unk_B783DC, !v3) )
  {
    v4 = *(char **)(v1 + 56); /*0x7d5823*/
  }
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
  v11 = (_BYTE *)store_dt(v10 + 1, Tm->tm_mday); /*0x7d5862*/
  *v11 = 32; /*0x7d5867*/
  v12 = (_BYTE *)store_dt(v11 + 1, Tm->tm_hour); /*0x7d586f*/
  *v12 = 58; /*0x7d5874*/
  v13 = (_BYTE *)store_dt(v12 + 1, Tm->tm_min); /*0x7d587c*/
  *v13 = 58; /*0x7d5881*/
  v14 = (_BYTE *)store_dt(v13 + 1, Tm->tm_sec); /*0x7d5888*/
  *v14 = 32; /*0x7d5892*/
  v15 = store_dt(v14 + 1, Tm->tm_year / 100 + 19); /*0x7d58a1*/
  v16 = (_BYTE *)store_dt(v15, Tm->tm_year % 100); /*0x7d58b2*/
  *v16 = 10; /*0x7d58ba*/
  v16[1] = 0; /*0x7d58bd*/
  return v5; /*0x7d58c3*/
}
}
} // namespace gamemd

// 0x7D58F0
namespace gamemd {
LONG _XcptFilter(ObjectClass * aP0, struct _EXCEPTION_POINTERS * ExceptionInfo)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __cdecl _XcptFilter(ObjectClass *aP0, struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  ObjectClass *v2; // esi
  int *v3; // eax
  ObjectClass *v4; // ebx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // [esp+8h] [ebp-4h]

  v2 = (ObjectClass *)_getptd(); /*0x7d58fb*/
  v3 = xcptlookup(aP0, (_DWORD *)v2->customSound_controller[0]); /*0x7d5903*/
  if ( !v3 ) /*0x7d590c*/
    return UnhandledExceptionFilter(ExceptionInfo); /*0x7d590c*/
  v4 = (ObjectClass *)v3[2]; /*0x7d5912*/
  if ( !v4 ) /*0x7d591a*/
    return UnhandledExceptionFilter(ExceptionInfo); /*0x7d5a24*/
  if ( v4 == (ObjectClass *)5 ) /*0x7d5923*/
  {
    v3[2] = 0; /*0x7d5925*/
    return 1; /*0x7d592b*/
  }
  else
  {
    if ( v4 != (ObjectClass *)1 ) /*0x7d5934*/
    {
      v11 = v2->customSound_controller[1]; /*0x7d593d*/
      v2->customSound_controller[1] = (int)ExceptionInfo; /*0x7d5943*/
      v6 = v3[1]; /*0x7d5946*/
      if ( v6 == 8 ) /*0x7d594c*/
      {
        v7 = *(_DWORD *)&stru_87C374.__pad_71C[264]; /*0x7d5952*/
        if ( *(int *)&stru_87C374.__pad_71C[264] < *(_DWORD *)&stru_87C374.__pad_71C[264] /*0x7d5963*/
                                                 + *(_DWORD *)&stru_87C374.__pad_71C[268] )
        {
          v8 = 12 * *(_DWORD *)&stru_87C374.__pad_71C[264]; /*0x7d5968*/
          do /*0x7d5987*/
          {
            v8 += 12; /*0x7d596e*/
            *(_DWORD *)(v8 + v2->customSound_controller[0] - 4) = 0; /*0x7d5971*/
            ++v7; /*0x7d5982*/
          }
          while ( v7 < *(_DWORD *)&stru_87C374.__pad_71C[264] + *(_DWORD *)&stru_87C374.__pad_71C[268] ); /*0x7d5987*/
        }
        v9 = *v3; /*0x7d598c*/
        v10 = v2->customSound_controller[2]; /*0x7d598e*/
        switch ( v9 ) /*0x7d5996*/
        {
          case -1073741682: /*0x7d5996*/
            v2->customSound_controller[2] = 131; /*0x7d5998*/
            break;
          case -1073741680: /*0x7d5996*/
            v2->customSound_controller[2] = 129; /*0x7d59a8*/
            break;
          case -1073741679: /*0x7d5996*/
            v2->customSound_controller[2] = 132; /*0x7d59b8*/
            break;
          case -1073741677: /*0x7d5996*/
            v2->customSound_controller[2] = 133; /*0x7d59c8*/
            break;
          case -1073741683: /*0x7d5996*/
            v2->customSound_controller[2] = 130; /*0x7d59d8*/
            break;
          case -1073741681: /*0x7d5996*/
            v2->customSound_controller[2] = 134; /*0x7d59e8*/
            break;
          case -1073741678: /*0x7d5996*/
            v2->customSound_controller[2] = 138; /*0x7d59f8*/
            break;
        }
        ((void (__cdecl *)(int))v4)(8); /*0x7d5a04*/
        v2->customSound_controller[2] = v10; /*0x7d5a07*/
      }
      else
      {
        v3[2] = 0; /*0x7d5a0e*/
        ((void (__cdecl *)(int))v4)(v6); /*0x7d5a13*/
      }
      v2->customSound_controller[1] = v11; /*0x7d5a19*/
    }
    return -1; /*0x7d5a1c*/
  }
}
}
} // namespace gamemd

// 0x7D5A2E
namespace gamemd {
unsigned int * xcptlookup(ObjectClass * aP0, unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl xcptlookup(ObjectClass *aP0, _DWORD *a1)
{
  _DWORD *result; // eax

  result = a1; /*0x7d5a40*/
  if ( (ObjectClass *)*a1 != aP0 ) /*0x7d5a42*/
  {
    do /*0x7d5a53*/
      result += 3; /*0x7d5a4a*/
    while ( result < &a1[3 * *(_DWORD *)&stru_87C374.__pad_71C[276]] && (ObjectClass *)*result != aP0 ); /*0x7d5a53*/
  }
  if ( result >= &a1[3 * *(_DWORD *)&stru_87C374.__pad_71C[276]] || (ObjectClass *)*result != aP0 ) /*0x7d5a61*/
    return 0; /*0x7d5a63*/
  return result; /*0x7d5a65*/
}
}
} // namespace gamemd

// 0x7D5A68
namespace gamemd {
unsigned char * _wincmdln()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *_wincmdln()
{
  _BYTE *v0; // esi
  unsigned __int8 v1; // al

  if ( !dword_B78BB8 ) /*0x7d5a6f*/
    __initmbctable(); /*0x7d5a71*/
  v0 = (_BYTE *)dword_B78BA8; /*0x7d5a77*/
  if ( *(_BYTE *)dword_B78BA8 != 34 ) /*0x7d5a81*/
  {
    if ( *(_BYTE *)dword_B78BA8 > 0x20u ) /*0x7d5aaa*/
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
} // namespace gamemd

// 0x7D5AC0
namespace gamemd {
void _setenvp()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v2; // esi
  const char *i; // edi
  size_t v4; // eax
  size_t v5; // ebp
  char *v6; // eax

  if ( !dword_B78BB8 ) /*0x7d5acb*/
    __initmbctable(); /*0x7d5acd*/
  v0 = MEMORY[0xB78228]; /*0x7d5ad2*/
  v1 = 0; /*0x7d5ad8*/
  while ( *v0 ) /*0x7d5ade*/
  {
    if ( *v0 != 61 ) /*0x7d5ae2*/
      ++v1; /*0x7d5ae4*/
    v0 += strlen(v0) + 1; /*0x7d5aec*/
  }
  v2 = (char **)malloc(4 * v1 + 4); /*0x7d5aff*/
  dword_B781E4 = v2; /*0x7d5b04*/
  if ( !v2 ) /*0x7d5b0a*/
    _amsg_exit(9u); /*0x7d5b0e*/
  for ( i = MEMORY[0xB78228]; *i; i += v5 ) /*0x7d5b1a*/
  {
    v4 = strlen(i); /*0x7d5b20*/
    v5 = v4 + 1; /*0x7d5b28*/
    if ( *i != 61 ) /*0x7d5b2c*/
    {
      v6 = (char *)malloc(v4 + 1); /*0x7d5b2f*/
      *v2 = v6; /*0x7d5b37*/
      if ( !v6 ) /*0x7d5b39*/
        _amsg_exit(9u); /*0x7d5b3d*/
      strcpy(*v2++, i); /*0x7d5b46*/
    }
  }
  free(MEMORY[0xB78228]); /*0x7d5b5d*/
  MEMORY[0xB78228] = 0; /*0x7d5b63*/
  *v2 = 0; /*0x7d5b69*/
  dword_B78BB4 = 1; /*0x7d5b6d*/
}
}
} // namespace gamemd

// 0x7D5B79
namespace gamemd {
int _setargv()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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
  v0 = Filename; /*0x7d5bad*/
  if ( *(_BYTE *)dword_B78BA8 ) /*0x7d5baf*/
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
} // namespace gamemd

// 0x7D5C12
namespace gamemd {
unsigned int * parse_cmdline(unsigned char * a1, unsigned char ** a2, unsigned char * a3, unsigned int * a4, unsigned int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl parse_cmdline(unsigned __int8 *a1, unsigned __int8 **a2, unsigned __int8 *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int8 *v6; // esi
  unsigned __int8 **v7; // edi
  unsigned __int8 *v8; // eax
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // dl
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned __int8 v15; // dl
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
} // namespace gamemd

// 0x7D5DC6
namespace gamemd {
CHAR * __crtGetEnvironmentStringsA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CHAR *__crtGetEnvironmentStringsA()
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
} // namespace gamemd

// 0x7D5EF8
namespace gamemd {
int * _FF_MSGBANNER()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *_FF_MSGBANNER()
{
  int *result; // eax

  result = (int *)MEMORY[0xB78230]; /*0x7d5ef8*/
  if ( MEMORY[0xB78230] == 1 || !MEMORY[0xB78230] && dword_87C2A4 == 1 ) /*0x7d5f0d*/
  {
    _NMSG_WRITE(0xFCu); /*0x7d5f14*/
    if ( dword_B78500 ) /*0x7d5f21*/
      dword_B78500(); /*0x7d5f23*/
    return _NMSG_WRITE(0xFFu); /*0x7d5f2a*/
  }
  return result; /*0x7d5f30*/
}
}
} // namespace gamemd

// 0x7D5F31
namespace gamemd {
int * _NMSG_WRITE(DWORD NumberOfBytesWritten)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__cdecl _NMSG_WRITE(DWORD NumberOfBytesWritten)
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
  result = MEMORY[0x87CBA8]; /*0x7d5f3f*/
  do /*0x7d5f51*/
  {
    if ( NumberOfBytesWritten == *result ) /*0x7d5f46*/
      break; /*0x7d5f46*/
    result += 2; /*0x7d5f48*/
    ++v1; /*0x7d5f4b*/
  }
  while ( (int)result < (int)&MEMORY[0x87CC38] ); /*0x7d5f51*/
  v3 = 2 * v1; /*0x7d5f56*/
  if ( NumberOfBytesWritten == MEMORY[0x87CBA8][2 * v1] )
  {
    result = (int *)MEMORY[0xB78230]; /*0x7d5f65*/
    if ( MEMORY[0xB78230] == 1 || !MEMORY[0xB78230] && dword_87C2A4 == 1 )
    {
      v5 = (const char **)&(&MEMORY[0x87CBAC])[v3]; /*0x7d605e*/
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
      if ( strlen(Filename) + 1 > 0x3C ) /*0x7d5fd3*/
      {
        v4 = (char *)&savedregs + strlen(Filename) - 479; /*0x7d5fee*/
        strncpy(v4, "...", 3u); /*0x7d5ff6*/
      }
      strcpy(Destination, "Runtime Error!\n\nProgram: ");
      strcat(Destination, v4); /*0x7d6017*/
      strcat(Destination, MEMORY[0x83F318]); /*0x7d6028*/
      strcat(Destination, (&MEMORY[0x87CBAC])[v3]); /*0x7d603a*/
      return (int *)__crtMessageBoxA(Destination, "Microsoft Visual C++ Runtime Library", 73744); /*0x7d6050*/
    }
  }
  return result; /*0x7d6082*/
}
}
} // namespace gamemd

// 0x7D60B5
namespace gamemd {
int __init_time()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __init_time()
{
  void *v0; // eax
  void *v1; // esi

  if ( dword_B782AC ) /*0x7d60bd*/
  {
    v0 = calloc(1u, 0xACu); /*0x7d60c6*/
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
    _free_lc_time(dword_B78504); /*0x7d60ff*/
    free(dword_B78504); /*0x7d610a*/
    dword_B78504 = v1; /*0x7d6110*/
  }
  else
  {
    off_87C1E0 = &off_87C1E8; /*0x7d611f*/
    _free_lc_time(dword_B78504); /*0x7d6129*/
    free(dword_B78504); /*0x7d6134*/
    dword_B78504 = 0; /*0x7d6139*/
  }
  return 0; /*0x7d60d6*/
}
}
} // namespace gamemd

// 0x7D6146
namespace gamemd {
int _get_lc_time(CCINIClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _get_lc_time(CCINIClass *aP0)
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
  LCID unknown38_low; // [esp+4h] [ebp-8h]
  LCID Locale; // [esp+8h] [ebp-4h]

  Locale = *(unsigned __int16 *)&stru_B78508.__pad_35[1]; /*0x7d615f*/
  unknown38_low = LOWORD(stru_B78508.unknown38); /*0x7d6162*/
  if ( !aP0 ) /*0x7d6165*/
    return -1; /*0x7d6167*/
  v2 = __getlocaleinfo(1, *(unsigned __int16 *)&stru_B78508.__pad_35[1], 0x31u, (CCINIClass *)aP0->headNode); /*0x7d6181*/
  v3 = __getlocaleinfo(1, Locale, 0x32u, (CCINIClass *)&aP0->headNode[1]) | v2; /*0x7d6192*/
  v4 = __getlocaleinfo(1, Locale, 0x33u, (CCINIClass *)&aP0->headNode[2]) | v3; /*0x7d61a3*/
  v5 = __getlocaleinfo(1, Locale, 0x34u, (CCINIClass *)aP0->sectionHead) | v4; /*0x7d61b7*/
  v6 = __getlocaleinfo(1, Locale, 0x35u, (CCINIClass *)&aP0->sectionHead[1]) | v5; /*0x7d61c8*/
  v7 = __getlocaleinfo(1, Locale, 0x36u, (CCINIClass *)&aP0->sectionHead[2]) | v6; /*0x7d61df*/
  v8 = __getlocaleinfo(1, Locale, 0x37u, aP0) | v7; /*0x7d61e7*/
  v9 = __getlocaleinfo(1, Locale, 0x2Au, (CCINIClass *)aP0->__pad_20) | v8; /*0x7d61fb*/
  v10 = __getlocaleinfo(1, Locale, 0x2Bu, (CCINIClass *)&aP0->__pad_20[4]) | v9; /*0x7d620c*/
  v11 = __getlocaleinfo(1, Locale, 0x2Cu, (CCINIClass *)&aP0->__pad_20[8]) | v10; /*0x7d621d*/
  v12 = __getlocaleinfo(1, Locale, 0x2Du, (CCINIClass *)&aP0->INIClass_field_2C) | v11; /*0x7d622e*/
  v13 = __getlocaleinfo(1, Locale, 0x2Eu, (CCINIClass *)&aP0->unknown30) | v12; /*0x7d6242*/
  v14 = __getlocaleinfo(1, Locale, 0x2Fu, (CCINIClass *)&aP0->needsSave_flag) | v13; /*0x7d6253*/
  v15 = __getlocaleinfo(1, Locale, 0x30u, (CCINIClass *)&aP0->sectionCount) | v14; /*0x7d6264*/
  v16 = __getlocaleinfo(1, Locale, 0x44u, (CCINIClass *)&aP0->unknown38) | v15; /*0x7d6275*/
  v17 = __getlocaleinfo(1, Locale, 0x45u, (CCINIClass *)&aP0->INIClass_field_3C) | v16; /*0x7d6289*/
  v18 = __getlocaleinfo(1, Locale, 0x46u, (CCINIClass *)&aP0->ownsFile) | v17; /*0x7d629a*/
  v19 = __getlocaleinfo(1, Locale, 0x47u, (CCINIClass *)&aP0->__pad_41[3]) | v18; /*0x7d62ab*/
  v20 = __getlocaleinfo(1, Locale, 0x48u, (CCINIClass *)aP0->__pad_48) | v19; /*0x7d62bc*/
  v21 = __getlocaleinfo(1, Locale, 0x49u, (CCINIClass *)&aP0->CCINIClass_field_4C) | v20; /*0x7d62d0*/
  v22 = __getlocaleinfo(1, Locale, 0x4Au, (CCINIClass *)&aP0->unknown50) | v21; /*0x7d62e1*/
  v23 = __getlocaleinfo(1, Locale, 0x4Bu, (CCINIClass *)&aP0->unknown54) | v22; /*0x7d62f2*/
  v24 = __getlocaleinfo(1, Locale, 0x4Cu, aP0 + 1) | v23; /*0x7d6303*/
  v25 = __getlocaleinfo(1, Locale, 0x4Du, (CCINIClass *)((char *)aP0 + 92)) | v24; /*0x7d6317*/
  v26 = __getlocaleinfo(1, Locale, 0x4Eu, (CCINIClass *)((char *)aP0 + 96)) | v25; /*0x7d6328*/
  v27 = __getlocaleinfo(1, Locale, 0x4Fu, (CCINIClass *)((char *)aP0 + 100)) | v26; /*0x7d6339*/
  v28 = __getlocaleinfo(1, Locale, 0x38u, (CCINIClass *)((char *)aP0 + 104)) | v27; /*0x7d634a*/
  v29 = __getlocaleinfo(1, Locale, 0x39u, (CCINIClass *)((char *)aP0 + 108)) | v28; /*0x7d635e*/
  v30 = __getlocaleinfo(1, Locale, 0x3Au, (CCINIClass *)((char *)aP0 + 112)) | v29; /*0x7d636f*/
  v31 = __getlocaleinfo(1, Locale, 0x3Bu, (CCINIClass *)((char *)aP0 + 116)) | v30; /*0x7d6380*/
  v32 = __getlocaleinfo(1, Locale, 0x3Cu, (CCINIClass *)((char *)aP0 + 120)) | v31; /*0x7d6391*/
  v33 = __getlocaleinfo(1, Locale, 0x3Du, (CCINIClass *)((char *)aP0 + 124)) | v32; /*0x7d63a5*/
  v34 = __getlocaleinfo(1, Locale, 0x3Eu, (CCINIClass *)((char *)aP0 + 128)) | v33; /*0x7d63b9*/
  v35 = __getlocaleinfo(1, Locale, 0x3Fu, (CCINIClass *)((char *)aP0 + 132)) | v34; /*0x7d63cd*/
  v36 = __getlocaleinfo(1, Locale, 0x40u, (CCINIClass *)((char *)aP0 + 136)) | v35; /*0x7d63e1*/
  v37 = __getlocaleinfo(1, Locale, 0x41u, (CCINIClass *)((char *)aP0 + 140)) | v36; /*0x7d63f8*/
  v38 = __getlocaleinfo(1, Locale, 0x42u, (CCINIClass *)((char *)aP0 + 144)) | v37; /*0x7d640c*/
  v39 = __getlocaleinfo(1, Locale, 0x43u, (CCINIClass *)((char *)aP0 + 148)) | v38; /*0x7d6420*/
  v40 = __getlocaleinfo(1, Locale, 0x28u, (CCINIClass *)((char *)aP0 + 152)) | v39; /*0x7d6434*/
  v41 = __getlocaleinfo(1, Locale, 0x29u, (CCINIClass *)((char *)aP0 + 156)) | v40; /*0x7d644b*/
  v42 = __getlocaleinfo(1, unknown38_low, 0x1Fu, (CCINIClass *)((char *)aP0 + 160)) | v41; /*0x7d645f*/
  v43 = __getlocaleinfo(1, unknown38_low, 0x20u, (CCINIClass *)((char *)aP0 + 164)) | v42; /*0x7d6479*/
  return v43 | __getlocaleinfo(1, unknown38_low, 0x1003u, (CCINIClass *)((char *)aP0 + 168)); /*0x7d6491*/
}
}
} // namespace gamemd

// 0x7D6494
namespace gamemd {
void _free_lc_time(CCINIClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl _free_lc_time(CCINIClass *aP0)
{
  if ( aP0 ) /*0x7d649b*/
  {
    free((void *)aP0->headNode[0]); /*0x7d64a4*/
    free((void *)aP0->headNode[1]); /*0x7d64ac*/
    free((void *)aP0->headNode[2]); /*0x7d64b4*/
    free((void *)aP0->sectionHead[0]); /*0x7d64bc*/
    free((void *)aP0->sectionHead[1]); /*0x7d64c4*/
    free((void *)aP0->sectionHead[2]); /*0x7d64cc*/
    free(*(void **)aP0->__pad_0); /*0x7d64d3*/
    free(*(void **)aP0->__pad_20); /*0x7d64db*/
    free(*(void **)&aP0->__pad_20[4]); /*0x7d64e3*/
    free(*(void **)&aP0->__pad_20[8]); /*0x7d64eb*/
    free((void *)aP0->INIClass_field_2C); /*0x7d64f3*/
    free((void *)aP0->unknown30); /*0x7d64fb*/
    free(*(void **)&aP0->needsSave_flag); /*0x7d6503*/
    free((void *)aP0->sectionCount); /*0x7d650b*/
    free((void *)aP0->unknown38); /*0x7d6513*/
    free((void *)aP0->INIClass_field_3C); /*0x7d651b*/
    free(*(void **)&aP0->ownsFile); /*0x7d6526*/
    free(*(void **)&aP0->__pad_41[3]); /*0x7d652e*/
    free(*(void **)aP0->__pad_48); /*0x7d6536*/
    free((void *)aP0->CCINIClass_field_4C); /*0x7d653e*/
    free((void *)aP0->unknown50); /*0x7d6546*/
    free((void *)aP0->unknown54); /*0x7d654e*/
    free(*(void **)aP0[1].__pad_0); /*0x7d6556*/
    free((void *)aP0[1].headNode[0]); /*0x7d655e*/
    free((void *)aP0[1].headNode[1]); /*0x7d6566*/
    free((void *)aP0[1].headNode[2]); /*0x7d656e*/
    free((void *)aP0[1].sectionHead[0]); /*0x7d6576*/
    free((void *)aP0[1].sectionHead[1]); /*0x7d657e*/
    free((void *)aP0[1].sectionHead[2]); /*0x7d6586*/
    free((void *)aP0[1].sectionCount); /*0x7d658e*/
    free(*(void **)aP0[1].__pad_20); /*0x7d6596*/
    free(*(void **)&aP0[1].__pad_20[4]); /*0x7d659e*/
    free(*(void **)&aP0[1].__pad_20[8]); /*0x7d65ac*/
    free((void *)aP0[1].INIClass_field_2C); /*0x7d65b7*/
    free((void *)aP0[1].unknown30); /*0x7d65c2*/
    free(*(void **)&aP0[1].needsSave_flag); /*0x7d65cd*/
    free((void *)aP0[1].unknown38); /*0x7d65d8*/
    free((void *)aP0[1].INIClass_field_3C); /*0x7d65e3*/
    free(*(void **)&aP0[1].ownsFile); /*0x7d65ee*/
    free(*(void **)&aP0[1].__pad_41[3]); /*0x7d65f9*/
    free(*(void **)aP0[1].__pad_48); /*0x7d6604*/
    free((void *)aP0[1].CCINIClass_field_4C); /*0x7d660f*/
    free((void *)aP0[1].unknown50); /*0x7d661a*/
  }
}
}
} // namespace gamemd

// 0x7D6624
namespace gamemd {
int __init_numeric()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __init_numeric()
{
  LCID v0; // edi
  int v1; // esi
  int v2; // esi
  int v3; // esi
  char v5; // al
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  char v8; // al

  v0 = (unsigned __int16)MEMORY[0xB7853A]; /*0x7d662f*/
  if ( dword_B782A8 ) /*0x7d6636*/
  {
    v1 = __getlocaleinfo(1, (unsigned __int16)MEMORY[0xB7853A], 0xEu, (int)&stru_B78508); /*0x7d6657*/
    v2 = __getlocaleinfo(1, v0, 0xFu, (int)&MEMORY[0xB7850C]) | v1; /*0x7d6667*/
    v3 = __getlocaleinfo(1, v0, 0x10u, (int)&MEMORY[0xB78510]) | v2; /*0x7d6674*/
    fix_grouping(MEMORY[0xB78510]); /*0x7d6676*/
    if ( v3 ) /*0x7d6681*/
    {
      free(stru_B78508); /*0x7d6689*/
      free(MEMORY[0xB7850C]); /*0x7d6694*/
      free(MEMORY[0xB78510]); /*0x7d669f*/
      stru_B78508 = 0; /*0x7d66a7*/
      MEMORY[0xB7850C] = 0; /*0x7d66ad*/
      MEMORY[0xB78510] = 0; /*0x7d66b3*/
      return -1; /*0x7d66bc*/
    }
    if ( *MEMORY[0x87D620] != &MEMORY[0x87D5E8] ) /*0x7d66cd*/
    {
      free(*MEMORY[0x87D620]); /*0x7d66d0*/
      free(MEMORY[0x87D620][1]); /*0x7d66dd*/
      free(MEMORY[0x87D620][2]); /*0x7d66ea*/
    }
    *MEMORY[0x87D620] = stru_B78508; /*0x7d66fd*/
    MEMORY[0x87D620][1] = MEMORY[0xB7850C]; /*0x7d670a*/
    MEMORY[0x87D620][2] = MEMORY[0xB78510]; /*0x7d6718*/
    v5 = *(_BYTE *)*MEMORY[0x87D620]; /*0x7d6722*/
    MEMORY[0x87C7A4] = 1; /*0x7d6724*/
    MEMORY[0x87C7A0] = v5; /*0x7d672a*/
  }
  else
  {
    free(stru_B78508); /*0x7d673a*/
    free(MEMORY[0xB7850C]); /*0x7d6745*/
    free(MEMORY[0xB78510]); /*0x7d6750*/
    stru_B78508 = 0; /*0x7d6757*/
    MEMORY[0xB7850C] = 0; /*0x7d675d*/
    MEMORY[0xB78510] = 0; /*0x7d6763*/
    *MEMORY[0x87D620] = malloc(2u); /*0x7d6777*/
    if ( !*MEMORY[0x87D620] ) /*0x7d677e*/
      return -1; /*0x7d677e*/
    strcpy((char *)*MEMORY[0x87D620], stru_826598); /*0x7d678e*/
    MEMORY[0x87D620][1] = malloc(2u); /*0x7d67a3*/
    v6 = MEMORY[0x87D620][1]; /*0x7d67ab*/
    if ( !v6 ) /*0x7d67b0*/
      return -1; /*0x7d67b0*/
    *v6 = 0; /*0x7d67b8*/
    MEMORY[0x87D620][2] = malloc(2u); /*0x7d67c6*/
    v7 = MEMORY[0x87D620][2]; /*0x7d67ce*/
    if ( !v7 ) /*0x7d67d3*/
      return -1; /*0x7d67d3*/
    *v7 = 0; /*0x7d67d9*/
    v8 = *(_BYTE *)*MEMORY[0x87D620]; /*0x7d67e2*/
    MEMORY[0x87C7A4] = 1; /*0x7d67e4*/
    MEMORY[0x87C7A0] = v8; /*0x7d67ee*/
  }
  return 0; /*0x7d67f5*/
}
}
} // namespace gamemd

// 0x7D67F9
namespace gamemd {
char fix_grouping(CCINIClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __cdecl fix_grouping(CCINIClass *aP0)
{
  CCINIClass *v1; // ecx
  char result; // al
  CCINIClass *v3; // eax

  v1 = aP0; /*0x7d67f9*/
  for ( result = aP0->__pad_0[0]; v1->__pad_0[0]; result = v1->__pad_0[0] ) /*0x7d67fd*/
  {
    if ( result < 48 || result > 57 ) /*0x7d680a*/
    {
      if ( result == 59 ) /*0x7d681b*/
      {
        v3 = v1; /*0x7d681d*/
        do /*0x7d6829*/
        {
          v3->__pad_0[0] = v3->__pad_0[1]; /*0x7d6825*/
          v3 = (CCINIClass *)((char *)v3 + 1); /*0x7d6827*/
        }
        while ( v3->__pad_0[0] ); /*0x7d6829*/
        continue; /*0x7d682c*/
      }
    }
    else
    {
      v1->__pad_0[0] = result - 48; /*0x7d680e*/
    }
    v1 = (CCINIClass *)((char *)v1 + 1); /*0x7d6810*/
  }
  return result; /*0x7d6818*/
}
}
} // namespace gamemd

// 0x7D6830
namespace gamemd {
int __init_monetary()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __init_monetary()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  if ( dword_B782A4 ) /*0x7d6838*/
  {
    v0 = calloc(1u, 0x30u); /*0x7d683e*/
    v1 = v0; /*0x7d6843*/
    if ( !v0 ) /*0x7d6849*/
      return 1; /*0x7d684f*/
    if ( _get_lc_lconv(v0) ) /*0x7d6851*/
    {
      _free_lc_lconv(v1); /*0x7d685c*/
      free(v1); /*0x7d6862*/
      return 1; /*0x7d6869*/
    }
    *v1 = *MEMORY[0x87D620]; /*0x7d6872*/
    v1[1] = MEMORY[0x87D620][1]; /*0x7d687c*/
    v1[2] = MEMORY[0x87D620][2]; /*0x7d6887*/
    MEMORY[0x87D620] = (_UNKNOWN **)v1; /*0x7d6890*/
    _free_lc_lconv(MEMORY[0xB78514]); /*0x7d6896*/
    free(MEMORY[0xB78514]); /*0x7d68a1*/
    MEMORY[0xB78514] = v1; /*0x7d68a7*/
  }
  else
  {
    MEMORY[0x87D5F0] = *MEMORY[0x87D620]; /*0x7d68bd*/
    MEMORY[0x87D5F4] = MEMORY[0x87D620][1]; /*0x7d68c6*/
    MEMORY[0x87D5F8] = MEMORY[0x87D620][2]; /*0x7d68cf*/
    MEMORY[0x87D620] = &MEMORY[0x87D5F0]; /*0x7d68d4*/
    _free_lc_lconv(MEMORY[0xB78514]); /*0x7d68de*/
    free(MEMORY[0xB78514]); /*0x7d68e9*/
    MEMORY[0xB78514] = 0; /*0x7d68ee*/
  }
  return 0; /*0x7d684e*/
}
}
} // namespace gamemd

// 0x7D68FB
namespace gamemd {
int _get_lc_lconv(CCINIClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _get_lc_lconv(CCINIClass *aP0)
{
  LCID INIClass_field_2C_low; // edi
  CCINIClass *v3; // ebx
  unsigned int v4; // ebx
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

  INIClass_field_2C_low = LOWORD(stru_B78508.INIClass_field_2C); /*0x7d6901*/
  if ( !aP0 ) /*0x7d690a*/
    return -1; /*0x7d690c*/
  v3 = (CCINIClass *)__getlocaleinfo(1, LOWORD(stru_B78508.INIClass_field_2C), 0x15u, (CCINIClass *)&aP0->headNode[2]); /*0x7d6923*/
  v4 = __getlocaleinfo(1, INIClass_field_2C_low, 0x14u, (CCINIClass *)aP0->sectionHead) | (unsigned int)v3; /*0x7d6933*/
  v5 = __getlocaleinfo(1, INIClass_field_2C_low, 0x16u, (CCINIClass *)&aP0->sectionHead[1]) | v4; /*0x7d6943*/
  v6 = __getlocaleinfo(1, INIClass_field_2C_low, 0x17u, (CCINIClass *)&aP0->sectionHead[2]) | v5; /*0x7d6956*/
  v7 = __getlocaleinfo(1, INIClass_field_2C_low, 0x18u, (CCINIClass *)&aP0->sectionCount) | v6; /*0x7d6969*/
  fix_grouping_0((char *)aP0->sectionCount); /*0x7d696b*/
  v8 = __getlocaleinfo(1, INIClass_field_2C_low, 0x50u, (CCINIClass *)aP0->__pad_20) | v7; /*0x7d697e*/
  v9 = __getlocaleinfo(1, INIClass_field_2C_low, 0x51u, (CCINIClass *)&aP0->__pad_20[4]) | v8; /*0x7d698e*/
  v10 = __getlocaleinfo(0, INIClass_field_2C_low, 0x1Au, (CCINIClass *)&aP0->__pad_20[8]) | v9; /*0x7d69a1*/
  v11 = __getlocaleinfo(0, INIClass_field_2C_low, 0x19u, (CCINIClass *)&aP0->__pad_20[9]) | v10; /*0x7d69b1*/
  v12 = __getlocaleinfo(0, INIClass_field_2C_low, 0x54u, (CCINIClass *)&aP0->__pad_20[10]) | v11; /*0x7d69c1*/
  v13 = __getlocaleinfo(0, INIClass_field_2C_low, 0x55u, (CCINIClass *)&aP0->__pad_20[11]) | v12; /*0x7d69d1*/
  v14 = __getlocaleinfo(0, INIClass_field_2C_low, 0x56u, (CCINIClass *)&aP0->INIClass_field_2C) | v13; /*0x7d69e4*/
  v15 = __getlocaleinfo(0, INIClass_field_2C_low, 0x57u, (CCINIClass *)((char *)&aP0->INIClass_field_2C + 1)) | v14; /*0x7d69f4*/
  v16 = __getlocaleinfo(0, INIClass_field_2C_low, 0x52u, (CCINIClass *)((char *)&aP0->INIClass_field_2C + 2)) | v15; /*0x7d6a07*/
  return v16 | __getlocaleinfo(0, INIClass_field_2C_low, 0x53u, (CCINIClass *)((char *)&aP0->INIClass_field_2C + 3)); /*0x7d6a1a*/
}
}
} // namespace gamemd

// 0x7D6A54
namespace gamemd {
void _free_lc_lconv(CCINIClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl _free_lc_lconv(CCINIClass *aP0)
{
  if ( aP0 ) /*0x7d6a5b*/
  {
    if ( (WCHAR *)aP0->headNode[2] != word_B78594 ) /*0x7d6a65*/
    {
      free((void *)aP0->headNode[2]); /*0x7d6a68*/
      free((void *)aP0->sectionHead[0]); /*0x7d6a70*/
      free((void *)aP0->sectionHead[1]); /*0x7d6a78*/
      free((void *)aP0->sectionHead[2]); /*0x7d6a80*/
      free((void *)aP0->sectionCount); /*0x7d6a88*/
      free(*(void **)aP0->__pad_20); /*0x7d6a90*/
      free(*(void **)&aP0->__pad_20[4]); /*0x7d6a98*/
    }
  }
}
}
} // namespace gamemd

// 0x7D6AA2
namespace gamemd {
int __init_ctype()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __init_ctype()
{
  int v0; // ebx
  WORD *v1; // edi
  const WCHAR *v2; // eax
  int i; // eax
  BYTE *v4; // eax
  int j; // edx
  int v6; // ecx
  WCHAR *v7; // ecx
  int k; // eax
  char *v9; // edi
  BYTE *v10; // eax
  int v11; // esi
  _WORD *v12; // ecx
  struct _cpinfo CPInfo; // [esp+4h] [ebp-24h] BYREF
  void *v15; // [esp+18h] [ebp-10h]
  void *v16; // [esp+1Ch] [ebp-Ch]
  LPCWCH lpSrcStr; // [esp+20h] [ebp-8h]
  void *Block; // [esp+24h] [ebp-4h]

  v0 = 0; /*0x7d6aa9*/
  Block = 0; /*0x7d6ab1*/
  lpSrcStr = 0; /*0x7d6ab4*/
  if ( dword_B782A0 ) /*0x7d6ab7*/
  {
    if ( !CodePage && __getlocaleinfo(0, (unsigned __int16)MEMORY[0xB7852C], 0x1004u, (int)&CodePage) ) /*0x7d6ada*/
      goto LABEL_38; /*0x7d6ada*/
    v1 = (WORD *)malloc(0x202u); /*0x7d6af5*/
    v15 = v1; /*0x7d6af8*/
    v16 = malloc(0x202u); /*0x7d6b05*/
    Block = malloc(0x101u); /*0x7d6b0e*/
    v2 = (const WCHAR *)malloc(0x202u); /*0x7d6b11*/
    lpSrcStr = v2; /*0x7d6b1b*/
    if ( !v1 ) /*0x7d6b1e*/
      goto LABEL_38; /*0x7d6b1e*/
    if ( !v16 ) /*0x7d6b27*/
      goto LABEL_38; /*0x7d6b27*/
    if ( !Block ) /*0x7d6b30*/
      goto LABEL_38; /*0x7d6b30*/
    if ( !v2 ) /*0x7d6b38*/
      goto LABEL_38; /*0x7d6b38*/
    for ( i = 0; i < 256; ++i ) /*0x7d6b3e*/
      *((_BYTE *)Block + i) = i; /*0x7d6b48*/
    if ( !GetCPInfo(CodePage, &CPInfo) || CPInfo.MaxCharSize > 2 ) /*0x7d6b6c*/
      goto LABEL_38; /*0x7d6b6c*/
    MEMORY[0x87C79C] = LOWORD(CPInfo.MaxCharSize); /*0x7d6b79*/
    if ( LOWORD(CPInfo.MaxCharSize) > 1u && CPInfo.LeadByte[0] ) /*0x7d6b83*/
    {
      v4 = &CPInfo.LeadByte[1]; /*0x7d6b85*/
      do /*0x7d6ba7*/
      {
        LOBYTE(j) = *v4; /*0x7d6b88*/
        if ( !*v4 ) /*0x7d6b88*/
          break; /*0x7d6b8c*/
        v6 = *(v4 - 1); /*0x7d6b8e*/
        for ( j = (unsigned __int8)j; v6 <= j; j = *v4 ) /*0x7d6b92*/
          *((_BYTE *)Block + v6++) = 0; /*0x7d6b9c*/
        v4 += 2; /*0x7d6ba6*/
      }
      while ( *(v4 - 1) ); /*0x7d6ba7*/
    }
    if ( !__crtGetStringTypeA(1u, (LPCSTR)Block, 256, v1 + 1, 0, 0, 0) ) /*0x7d6bb9*/
      goto LABEL_38; /*0x7d6bb9*/
    v7 = (WCHAR *)lpSrcStr; /*0x7d6bc9*/
    *v1 = 0; /*0x7d6bcc*/
    for ( k = 0; k < 256; ++k ) /*0x7d6bcf*/
      *v7++ = k; /*0x7d6bd1*/
    v9 = (char *)v16 + 2; /*0x7d6be0*/
    if ( __crtGetStringTypeW(1u, lpSrcStr, 256, (LPWORD)v16 + 1, 0, 0) ) /*0x7d6bea*/
    {
      *(_WORD *)v16 = 0; /*0x7d6bfd*/
      if ( (int)MEMORY[0x87C79C] > 1 && CPInfo.LeadByte[0] ) /*0x7d6c0c*/
      {
        v10 = &CPInfo.LeadByte[1]; /*0x7d6c0e*/
        do /*0x7d6c3a*/
        {
          if ( !*v10 ) /*0x7d6c11*/
            break; /*0x7d6c15*/
          v11 = *(v10 - 1); /*0x7d6c17*/
          if ( v11 <= *v10 ) /*0x7d6c20*/
          {
            v12 = (char *)v15 + 2 * v11 + 2; /*0x7d6c25*/
            do /*0x7d6c36*/
            {
              *v12 = 0x8000; /*0x7d6c29*/
              ++v11; /*0x7d6c2e*/
              ++v12; /*0x7d6c33*/
            }
            while ( v11 <= *v10 ); /*0x7d6c36*/
          }
          v10 += 2; /*0x7d6c39*/
        }
        while ( *(v10 - 1) ); /*0x7d6c3a*/
      }
      MEMORY[0x87C594] = v9; /*0x7d6c42*/
      MEMORY[0x87C590] = (char *)v15 + 2; /*0x7d6c4b*/
      if ( MEMORY[0xB78518] ) /*0x7d6c57*/
        free(MEMORY[0xB78518]); /*0x7d6c5a*/
      MEMORY[0xB78518] = v15; /*0x7d6c63*/
      if ( MEMORY[0xB7851C] ) /*0x7d6c6f*/
        free(MEMORY[0xB7851C]); /*0x7d6c72*/
      MEMORY[0xB7851C] = v16; /*0x7d6c7b*/
    }
    else
    {
LABEL_38:
      free(v15); /*0x7d6c9b*/
      free(v16); /*0x7d6ca3*/
      v0 = 1; /*0x7d6cac*/
    }
    free(Block); /*0x7d6c83*/
    free((void *)lpSrcStr); /*0x7d6c8b*/
    return v0; /*0x7d6c91*/
  }
  else
  {
    MEMORY[0x87C590] = &MEMORY[0x87C598][1]; /*0x7d6cba*/
    MEMORY[0x87C594] = &MEMORY[0x87C598][1]; /*0x7d6cbf*/
    free(MEMORY[0xB78518]); /*0x7d6cc4*/
    free(MEMORY[0xB7851C]); /*0x7d6ccf*/
    MEMORY[0xB78518] = 0; /*0x7d6cd5*/
    MEMORY[0xB7851C] = 0; /*0x7d6cdc*/
    return 0; /*0x7d6ce2*/
  }
}
}
} // namespace gamemd

// 0x7D6D2A
namespace gamemd {
int __get_qualified_locale(char * a0, CCINIClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __get_qualified_locale(char *a0, CCINIClass *aP1, int a3)
{
  char *unknown50; // eax
  int v4; // edi

  if ( !unk_B78564 ) /*0x7d6d35*/
  {
    if ( IsThisWindowsNT() ) /*0x7d6d37*/
      unk_B78564 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetLocaleInfoA; /*0x7d6d45*/
    else
      unk_B78564 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))crtGetLocaleInfoA_16; /*0x7d6d4c*/
  }
  if ( !a0 ) /*0x7d6d5c*/
    goto LABEL_20; /*0x7d6d5c*/
  stru_B78508.CCINIClass_field_4C = (int)a0; /*0x7d6d62*/
  if ( *a0 ) /*0x7d6d68*/
    TranslateName((int)&stru_87C374.__pad_DFC[64], 64, (char **)&stru_B78508.CCINIClass_field_4C); /*0x7d6d78*/
  unknown50 = a0 + 64; /*0x7d6d80*/
  stru_B78508.unknown50 = (int)(a0 + 64); /*0x7d6d85*/
  if ( a0 != (char *)-64 && *unknown50 ) /*0x7d6d8c*/
  {
    TranslateName((int)&stru_87C374.__pad_BC0[452], 22, (char **)&stru_B78508.unknown50); /*0x7d6d9c*/
    unknown50 = (char *)stru_B78508.unknown50; /*0x7d6da1*/
  }
  stru_B78508.unknown54 = 0; /*0x7d6daf*/
  if ( !stru_B78508.CCINIClass_field_4C || !*(_BYTE *)stru_B78508.CCINIClass_field_4C ) /*0x7d6db9*/
  {
    if ( unknown50 && *unknown50 ) /*0x7d6dd7*/
    {
      GetLcidFromCountry(); /*0x7d6ddb*/
      goto LABEL_21; /*0x7d6de0*/
    }
LABEL_20:
    GetLcidFromDefault(); /*0x7d6de2*/
    goto LABEL_21; /*0x7d6de2*/
  }
  if ( unknown50 && *unknown50 ) /*0x7d6dc1*/
    GetLcidFromLangCountry(); /*0x7d6dc5*/
  else
    GetLcidFromLanguage(); /*0x7d6dcc*/
LABEL_21:
  if ( stru_B78508.unknown54 ) /*0x7d6ded*/
  {
    v4 = ProcessCodePage(a0 + 128); /*0x7d6dff*/
    if ( v4 ) /*0x7d6e04*/
    {
      if ( IsValidCodePage((unsigned __int16)v4) && IsValidLocale(stru_B78508.INIClass_field_3C, 1u) ) /*0x7d6e24*/
      {
        if ( aP1 ) /*0x7d6e34*/
        {
          *(_WORD *)aP1->__pad_0 = stru_B78508.INIClass_field_3C; /*0x7d6e3d*/
          *(_WORD *)&aP1->__pad_0[2] = dword_B78560; /*0x7d6e47*/
          LOWORD(aP1->headNode[0]) = v4; /*0x7d6e4b*/
        }
        if ( !a3 ) /*0x7d6e55*/
          return 1; /*0x7d6e55*/
        if ( unk_B78564(stru_B78508.INIClass_field_3C, 4097, a3, 64) && unk_B78564(dword_B78560, 4098, a3 + 64, 64) ) /*0x7d6e80*/
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
} // namespace gamemd

// 0x7D6EA7
namespace gamemd {
int TranslateName(int a1, int a2, char ** a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl TranslateName(int a1, int a2, char **a3)
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
}
} // namespace gamemd

// 0x7D6EFF
namespace gamemd {
int GetLcidFromLangCountry()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int GetLcidFromLangCountry()
{
  size_t v0; // eax
  int result; // eax

  MEMORY[0xB78550] = strlen(MEMORY[0xB78554]) == 3; /*0x7d6f18*/
  v0 = strlen(MEMORY[0xB78558]); /*0x7d6f1d*/
  MEMORY[0xB78544] = 0; /*0x7d6f2a*/
  MEMORY[0xB78548] = v0 == 3; /*0x7d6f3a*/
  if ( MEMORY[0xB78550] ) /*0x7d6f3f*/
    MEMORY[0xB7854C] = 2; /*0x7d6f41*/
  else
    MEMORY[0xB7854C] = GetPrimaryLen(MEMORY[0xB78554]); /*0x7d6f59*/
  EnumSystemLocalesA(LangCountryEnumProc_4, 1u); /*0x7d6f65*/
  result = MEMORY[0xB7855C]; /*0x7d6f6b*/
  if ( (MEMORY[0xB7855C] & 0x100) == 0 || (MEMORY[0xB7855C] & 0x200) == 0 || (MEMORY[0xB7855C] & 7) == 0 ) /*0x7d6f7c*/
    MEMORY[0xB7855C] = 0; /*0x7d6f7e*/
  return result; /*0x7d6f85*/
}
}
} // namespace gamemd

// 0x7D6F86
namespace gamemd {
BOOL LangCountryEnumProc_4(LPSTR a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall LangCountryEnumProc_4(LPSTR a1)
{
  int v1; // esi
  int v2; // eax
  int v4; // eax
  char String2[120]; // [esp+Ch] [ebp-78h] BYREF

  v1 = LcidFromHexString(a1); /*0x7d6f98*/
  v2 = -(MEMORY[0xB78548] != 0); /*0x7d6fa7*/
  LOWORD(v2) = v2 & 0xF005; /*0x7d6fa9*/
  if ( !unk_B78564(v1, v2 + 4098, String2, 120) ) /*0x7d6fbc*/
    goto LABEL_17; /*0x7d6fbc*/
  if ( !_strcmpi(MEMORY[0xB78558], String2) )
  {
    if ( !unk_B78564(v1, MEMORY[0xB78550] != 0 ? 3 : 4097, String2, 120) )
    {
LABEL_17:
      MEMORY[0xB7855C] = 0; /*0x7d70d5*/
      return 1; /*0x7d70df*/
    }
    if ( !_strcmpi(MEMORY[0xB78554], String2) ) /*0x7d7012*/
    {
      LOWORD(MEMORY[0xB7855C]) = MEMORY[0xB7855C] | 0x304; /*0x7d701d*/
      dword_B78560 = v1; /*0x7d7026*/
LABEL_6:
      MEMORY[0xB78544] = v1; /*0x7d702c*/
      goto LABEL_15; /*0x7d7032*/
    }
    if ( (MEMORY[0xB7855C] & 2) == 0 ) /*0x7d703b*/
    {
      if ( MEMORY[0xB7854C] && !_strnicmp(MEMORY[0xB78554], String2, MEMORY[0xB7854C]) ) /*0x7d7051*/
      {
        MEMORY[0xB7855C] |= 2u; /*0x7d7063*/
        dword_B78560 = v1; /*0x7d706a*/
        if ( strlen(MEMORY[0xB78554]) == MEMORY[0xB7854C] ) /*0x7d707c*/
          goto LABEL_6; /*0x7d707c*/
      }
      else if ( (MEMORY[0xB7855C] & 1) == 0 && TestDefaultCountry(v1) ) /*0x7d708a*/
      {
        MEMORY[0xB7855C] |= 1u; /*0x7d7094*/
        dword_B78560 = v1; /*0x7d709b*/
      }
    }
  }
LABEL_15:
  if ( (MEMORY[0xB7855C] & 0x300) != 0x300 )
  {
    if ( !unk_B78564(v1, MEMORY[0xB78550] != 0 ? 3 : 4097, String2, 120) )
      goto LABEL_17; /*0x7d70d3*/
    if ( _strcmpi(MEMORY[0xB78554], String2) ) /*0x7d70ee*/
    {
      if ( MEMORY[0xB78550] || !MEMORY[0xB7854C] || _strnicmp(MEMORY[0xB78554], String2, MEMORY[0xB7854C]) ) /*0x7d7148*/
        return ((unsigned int)~MEMORY[0xB7855C] >> 2) & 1; /*0x7d7152*/
      v4 = TestDefaultLanguage(v1, 0); /*0x7d7156*/
    }
    else
    {
      BYTE1(MEMORY[0xB7855C]) |= 2u; /*0x7d70f9*/
      if ( MEMORY[0xB78550] || !MEMORY[0xB7854C] || strlen(MEMORY[0xB78554]) != MEMORY[0xB7854C] ) /*0x7d7124*/
        goto LABEL_28; /*0x7d7124*/
      v4 = TestDefaultLanguage(v1, 1); /*0x7d7128*/
    }
    if ( v4 ) /*0x7d715f*/
    {
LABEL_28:
      BYTE1(MEMORY[0xB7855C]) |= 1u; /*0x7d7161*/
      if ( !MEMORY[0xB78544] ) /*0x7d716e*/
        MEMORY[0xB78544] = v1; /*0x7d7170*/
    }
  }
  return ((unsigned int)~MEMORY[0xB7855C] >> 2) & 1; /*0x7d7183*/
}
}
} // namespace gamemd

// 0x7D718A
namespace gamemd {
BOOL GetLcidFromLanguage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL GetLcidFromLanguage()
{
  size_t v0; // eax
  BOOL result; // eax

  v0 = strlen(MEMORY[0xB78554]); /*0x7d7190*/
  MEMORY[0xB78550] = v0 == 3; /*0x7d719e*/
  if ( v0 == 3 ) /*0x7d71a3*/
    MEMORY[0xB7854C] = 2; /*0x7d71a5*/
  else
    MEMORY[0xB7854C] = GetPrimaryLen(MEMORY[0xB78554]); /*0x7d71bd*/
  result = EnumSystemLocalesA(LanguageEnumProc_4, 1u); /*0x7d71c9*/
  if ( (MEMORY[0xB7855C] & 4) == 0 ) /*0x7d71d6*/
    MEMORY[0xB7855C] = 0; /*0x7d71d8*/
  return result; /*0x7d71df*/
}
}
} // namespace gamemd

// 0x7D71E0
namespace gamemd {
BOOL LanguageEnumProc_4(LPSTR a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall LanguageEnumProc_4(LPSTR a1)
{
  int v1; // esi
  int v2; // eax
  int v4; // eax
  char String2[120]; // [esp+4h] [ebp-78h] BYREF

  v1 = LcidFromHexString(a1); /*0x7d71f0*/
  v2 = -(MEMORY[0xB78550] != 0); /*0x7d71ff*/
  LOWORD(v2) = v2 & 0xF002; /*0x7d7201*/
  if ( !unk_B78564(v1, v2 + 4097, String2, 120) ) /*0x7d720c*/
  {
    MEMORY[0xB7855C] = 0; /*0x7d7216*/
    return 1; /*0x7d721f*/
  }
  if ( _strcmpi(MEMORY[0xB78554], String2) ) /*0x7d722b*/
  {
    if ( MEMORY[0xB78550] || !MEMORY[0xB7854C] || _strnicmp(MEMORY[0xB78554], String2, MEMORY[0xB7854C]) ) /*0x7d725f*/
      return ((unsigned int)~MEMORY[0xB7855C] >> 2) & 1; /*0x7d7269*/
    v4 = TestDefaultLanguage(v1, 0); /*0x7d726d*/
  }
  else
  {
    if ( MEMORY[0xB78550] ) /*0x7d723c*/
    {
LABEL_11:
      MEMORY[0xB7855C] |= 4u; /*0x7d7278*/
      dword_B78560 = v1; /*0x7d727f*/
      MEMORY[0xB78544] = v1; /*0x7d7285*/
      return ((unsigned int)~MEMORY[0xB7855C] >> 2) & 1; /*0x7d7285*/
    }
    v4 = TestDefaultLanguage(v1, 1); /*0x7d7240*/
  }
  if ( v4 ) /*0x7d7276*/
    goto LABEL_11; /*0x7d7276*/
  return ((unsigned int)~MEMORY[0xB7855C] >> 2) & 1; /*0x7d7298*/
}
}
} // namespace gamemd

// 0x7D729D
namespace gamemd {
BOOL GetLcidFromCountry()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL GetLcidFromCountry()
{
  BOOL result; // eax

  MEMORY[0xB78548] = strlen(MEMORY[0xB78558]) == 3; /*0x7d72b8*/
  result = EnumSystemLocalesA(CountryEnumProc_4, 1u); /*0x7d72bd*/
  if ( (MEMORY[0xB7855C] & 4) == 0 ) /*0x7d72ca*/
    MEMORY[0xB7855C] = 0; /*0x7d72cc*/
  return result; /*0x7d72d3*/
}
}
} // namespace gamemd

// 0x7D72D4
namespace gamemd {
unsigned int CountryEnumProc_4(LPSTR a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __stdcall CountryEnumProc_4(LPSTR a1)
{
  int v1; // esi
  int v2; // eax
  char v4[120]; // [esp+4h] [ebp-78h] BYREF

  v1 = LcidFromHexString(a1); /*0x7d72e4*/
  v2 = -(MEMORY[0xB78548] != 0); /*0x7d72f3*/
  LOWORD(v2) = v2 & 0xF005; /*0x7d72f5*/
  if ( unk_B78564(v1, v2 + 4098, v4, 120) ) /*0x7d7300*/
  {
    if ( !_strcmpi(MEMORY[0xB78558], v4) ) /*0x7d731f*/
    {
      if ( TestDefaultCountry(v1) ) /*0x7d732b*/
      {
        MEMORY[0xB7855C] |= 4u; /*0x7d7335*/
        dword_B78560 = v1; /*0x7d733c*/
        MEMORY[0xB78544] = v1; /*0x7d7342*/
      }
    }
    return ((unsigned int)~MEMORY[0xB7855C] >> 2) & 1; /*0x7d7352*/
  }
  else
  {
    MEMORY[0xB7855C] = 0; /*0x7d730a*/
    return 1; /*0x7d7312*/
  }
}
}
} // namespace gamemd

// 0x7D735A
namespace gamemd {
LCID GetLcidFromDefault()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LCID GetLcidFromDefault()
{
  LCID result; // eax

  LOWORD(MEMORY[0xB7855C]) = MEMORY[0xB7855C] | 0x104; /*0x7d735a*/
  result = GetUserDefaultLCID(); /*0x7d7363*/
  dword_B78560 = result; /*0x7d7369*/
  MEMORY[0xB78544] = result; /*0x7d736e*/
  return result; /*0x7d7373*/
}
}
} // namespace gamemd

// 0x7D7374
namespace gamemd {
int ProcessCodePage(char * String)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl ProcessCodePage(char *String)
{
  const char *v1; // esi
  int result; // eax
  _BYTE v3[8]; // [esp+4h] [ebp-8h] BYREF

  v1 = String; /*0x7d737a*/
  if ( String && *String && strcmp(String, unk_7FA2D8) ) /*0x7d738c*/
  {
    if ( strcmp(String, unk_7FA2D4) ) /*0x7d739d*/
      return atol(v1); /*0x7d73a6*/
    result = unk_B78564(dword_B78560, 11, v3, 8); /*0x7d73b0*/
  }
  else
  {
    result = unk_B78564(dword_B78560, 4100, v3, 8); /*0x7d73c3*/
  }
  if ( !result ) /*0x7d73cb*/
    return result; /*0x7d73cb*/
  v1 = v3; /*0x7d73cd*/
  return atol(v1); /*0x7d73d7*/
}
}
} // namespace gamemd

// 0x7D73DA
namespace gamemd {
int TestDefaultCountry(short a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl TestDefaultCountry(__int16 a1)
{
  _WORD *v1; // eax

  v1 = &MEMORY[0x87D0E4]; /*0x7d73da*/
  while ( a1 != *v1 ) /*0x7d73e7*/
  {
    if ( (int)++v1 >= (int)&MEMORY[0x87D0F8] ) /*0x7d73f0*/
      return 1; /*0x7d73f5*/
  }
  return 0; /*0x7d73f5*/
}
}
} // namespace gamemd

// 0x7D73F9
namespace gamemd {
BOOL TestDefaultLanguage(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __cdecl TestDefaultLanguage(int a1, int a2)
{
  int v2; // eax
  int PrimaryLen; // esi
  BOOL result; // eax
  _BYTE v5[120]; // [esp+0h] [ebp-78h] BYREF

  v2 = a1 & 0x3FF; /*0x7d7408*/
  BYTE1(v2) |= 4u; /*0x7d740f*/
  result = 0; /*0x7d7458*/
  if ( unk_B78564(v2, 1, v5, 120) ) /*0x7d7413*/
  {
    if ( a1 == LcidFromHexString(v5) ) /*0x7d742a*/
      return 1; /*0x7d742a*/
    if ( !a2 ) /*0x7d7430*/
      return 1; /*0x7d7430*/
    PrimaryLen = GetPrimaryLen(MEMORY[0xB78554]); /*0x7d7444*/
    if ( PrimaryLen != strlen(MEMORY[0xB78554]) ) /*0x7d7450*/
      return 1; /*0x7d741b*/
  }
  return result; /*0x7d7454*/
}
}
} // namespace gamemd

// 0x7D745B
namespace gamemd {
BOOL IsThisWindowsNT()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL IsThisWindowsNT()
{
  struct _OSVERSIONINFOA VersionInformation; // [esp+0h] [ebp-94h] BYREF

  VersionInformation.dwOSVersionInfoSize = 148; /*0x7d746a*/
  return GetVersionExA(&VersionInformation) && VersionInformation.dwPlatformId == 2; /*0x7d748b*/
}
}
} // namespace gamemd

// 0x7D7491
namespace gamemd {
int crtGetLocaleInfoA_16(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall crtGetLocaleInfoA_16(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
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
    v7 = MEMORY[0x87CC40][11 * v6]; /*0x7d74ac*/
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
      v9 = &MEMORY[0x87CC44][44 * v6]; /*0x7d7543*/
      break;
    case 3u: /*0x7d74e3*/
      v9 = (char *)&MEMORY[0x87CC50] + 44 * v6; /*0x7d7539*/
      break;
    case 7u: /*0x7d74e3*/
      v9 = (char *)&MEMORY[0x87CC58] + 44 * v6; /*0x7d752f*/
      break;
    case 0xBu: /*0x7d74e3*/
      v9 = (char *)&MEMORY[0x87CC5C] + 44 * v6; /*0x7d7525*/
      break;
    case 0x1001u: /*0x7d74e3*/
      v9 = (&MEMORY[0x87CC4C])[11 * v6]; /*0x7d751a*/
      break;
    case 0x1002u: /*0x7d74e3*/
      v9 = (&MEMORY[0x87CC54])[11 * v6]; /*0x7d750f*/
      break;
    case 0x1004u: /*0x7d74e3*/
      v9 = &MEMORY[0x87CC64][44 * v6]; /*0x7d7505*/
      break;
    default:
      return GetLocaleInfoA(Locale, LCType, lpLCData, cchData); /*0x7d74dc*/
  }
  if ( !v9 || cchData < 1 ) /*0x7d7553*/
    return GetLocaleInfoA(Locale, LCType, lpLCData, cchData); /*0x7d7553*/
  strncpy(lpLCData, v9, cchData - 1); /*0x7d7562*/
  lpLCData[cchData - 1] = 0; /*0x7d756a*/
  return 1; /*0x7d74d8*/
}
}
} // namespace gamemd

// 0x7D75E0
namespace gamemd {
void * memset(void * a0, int Val, AbstractClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__cdecl memset(void *a0, int Val, AbstractClass *aP2)
{
  AbstractClass *v3; // edx
  int v4; // eax
  _BYTE *v5; // edi
  int v6; // ecx
  AbstractClass *v7; // ecx
  unsigned int v8; // ecx

  v3 = aP2; /*0x7d75e0*/
  if ( !aP2 ) /*0x7d75ea*/
    return a0; /*0x7d7633*/
  LOBYTE(v4) = Val; /*0x7d75ee*/
  v5 = a0; /*0x7d75f3*/
  if ( (unsigned int)aP2 < 4 ) /*0x7d75f8*/
    goto LABEL_13; /*0x7d75f8*/
  v6 = -(int)a0 & 3; /*0x7d75fc*/
  if ( v6 ) /*0x7d75ff*/
  {
    v3 = (AbstractClass *)((char *)aP2 - v6); /*0x7d7601*/
    do /*0x7d7607*/
    {
      *v5++ = Val; /*0x7d7603*/
      --v6; /*0x7d7606*/
    }
    while ( v6 ); /*0x7d7607*/
  }
  v4 = 16843009 * (unsigned __int8)Val; /*0x7d7615*/
  v7 = v3; /*0x7d7617*/
  v3 = (AbstractClass *)((unsigned __int8)v3 & 3); /*0x7d7619*/
  v8 = (unsigned int)v7 >> 2; /*0x7d761c*/
  if ( !v8 || (memset32(v5, v4, v8), v5 += 4 * v8, v3) ) /*0x7d7625*/
  {
LABEL_13:
    do /*0x7d762b*/
    {
      *v5++ = v4; /*0x7d7627*/
      v3 = (AbstractClass *)((char *)v3 - 1); /*0x7d762a*/
    }
    while ( v3 ); /*0x7d762b*/
  }
  return a0; /*0x7d7632*/
}
}
} // namespace gamemd

// 0x7D7638
namespace gamemd {
int _lseek(int FileHandle, int Offset, int Origin)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _lseek(int FileHandle, int Offset, int Origin)
{
  int v3; // edi

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7d765e*/
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
}
} // namespace gamemd

// 0x7D769D
namespace gamemd {
DWORD _lseek_lk(int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DWORD __cdecl _lseek_lk(int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod)
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
  *(_BYTE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) &= ~2u; /*0x7d7702*/
  return v4; /*0x7d770d*/
}
}
} // namespace gamemd

// 0x7D7710
namespace gamemd {
int _getbuf(MouseClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _getbuf(MouseClass *aP0)
{
  void *v1; // eax
  int result; // eax

  ++dword_B781C0; /*0x7d7710*/
  v1 = malloc((AbstractClass *)0x1000); /*0x7d771b*/
  aP0->field_8 = v1; /*0x7d7727*/
  if ( v1 ) /*0x7d772a*/
  {
    aP0->field_C = (void *)((int)aP0->field_C | 8); /*0x7d772c*/
    *(_DWORD *)aP0->__pad_18 = 4096; /*0x7d7730*/
  }
  else
  {
    aP0->field_C = (void *)((int)aP0->field_C | 4); /*0x7d7739*/
    aP0->field_8 = &aP0->field_14; /*0x7d7740*/
    *(_DWORD *)aP0->__pad_18 = 2; /*0x7d7743*/
  }
  result = (int)aP0->field_8; /*0x7d774a*/
  aP0->field_4 = 0; /*0x7d774d*/
  aP0->field_0 = result; /*0x7d7751*/
  return result; /*0x7d7753*/
}
}
} // namespace gamemd

// 0x7D7754
namespace gamemd {
int _isatty(int FileHandle)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle < uNumber ) /*0x7d775e*/
    return *(_BYTE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 0x40; /*0x7d7779*/
  else
    return 0; /*0x7d7760*/
}
}
} // namespace gamemd

// 0x7D777D
namespace gamemd {
int wctomb(char * MbCh, wchar_t WCh)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl wctomb(char *MbCh, wchar_t WCh)
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
}
} // namespace gamemd

// 0x7D77D6
namespace gamemd {
int _wctomb_lk(LPSTR lpMultiByteStr, WCHAR WideCharStr)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _wctomb_lk(LPSTR lpMultiByteStr, WCHAR WideCharStr)
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
               MEMORY[0x87C79C],
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
} // namespace gamemd

// 0x7D7840
namespace gamemd {
unsigned long long _aullrem(unsigned long long a1, long long a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int64 __stdcall _aullrem(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  bool v7; // cf
  int v8; // ecx
  unsigned __int64 v9; // rax

  if ( HIDWORD(a2) ) /*0x7d7847*/
  {
    v4 = HIDWORD(a2); /*0x7d7861*/
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
    v8 = HIDWORD(a2) * (v6 / v5); /*0x7d7883*/
    v9 = (unsigned int)a2 * (unsigned __int64)(unsigned int)(v6 / v5); /*0x7d7884*/
    v7 = __CFADD__(v8, HIDWORD(v9)); /*0x7d7888*/
    HIDWORD(v9) += v8; /*0x7d7888*/
    if ( v7 || v9 > a1 ) /*0x7d7898*/
      v9 -= a2; /*0x7d789e*/
    return a1 - v9; /*0x7d78ae*/
  }
  else
  {
    LODWORD(v2) = a1; /*0x7d7859*/
    HIDWORD(v2) = HIDWORD(a1) % (unsigned int)a2; /*0x7d7859*/
    return v2 % (unsigned int)a2; /*0x7d785d*/
  }
}
}
} // namespace gamemd

// 0x7D78B5
namespace gamemd {
int _ZeroTail(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ZeroTail(int a1, int a2)
{
  int v2; // esi
  _DWORD *i; // eax

  if ( (~(-1 << (31 - a2 % 32)) & *(_DWORD *)(a1 + 4 * (a2 / 32))) == 0 ) /*0x7d78dc*/
  {
    v2 = a2 / 32 + 1; /*0x7d78de*/
    if ( v2 >= 3 ) /*0x7d78e2*/
      return 1; /*0x7d78f9*/
    for ( i = (_DWORD *)(a1 + 4 * v2); !*i; ++i ) /*0x7d78e4*/
    {
      if ( ++v2 >= 3 ) /*0x7d78f3*/
        return 1; /*0x7d78f3*/
    }
  }
  return 0; /*0x7d78f8*/
}
}
} // namespace gamemd

// 0x7D78FE
namespace gamemd {
int _IncMan(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _IncMan(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  _DWORD *v4; // edi

  result = __addl(*(_DWORD *)(a1 + 4 * (a2 / 32)), 1 << (31 - a2 % 32), a1 + 4 * (a2 / 32)); /*0x7d7929*/
  v3 = a2 / 32 - 1; /*0x7d7931*/
  if ( v3 >= 0 ) /*0x7d7932*/
  {
    v4 = (_DWORD *)(a1 + 4 * v3); /*0x7d7934*/
    do /*0x7d794e*/
    {
      if ( !result ) /*0x7d7939*/
        break; /*0x7d7939*/
      result = __addl(*v4, 1, v4); /*0x7d7940*/
      --v3; /*0x7d7948*/
      --v4; /*0x7d7949*/
    }
    while ( v3 >= 0 ); /*0x7d794e*/
  }
  return result; /*0x7d7950*/
}
}
} // namespace gamemd

// 0x7D7954
namespace gamemd {
int _RoundMan(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _RoundMan(int a1, int a2)
{
  int v2; // edi
  int v4; // edx
  _DWORD *v5; // eax
  char v6; // si
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]
  _DWORD *v10; // [esp+20h] [ebp+Ch]

  v2 = a2 - 1; /*0x7d795f*/
  v9 = 0; /*0x7d7965*/
  v4 = a2 % 32; /*0x7d797b*/
  v8 = a2 / 32; /*0x7d7983*/
  v5 = (_DWORD *)(a1 + 4 * (a2 / 32)); /*0x7d7986*/
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
}
} // namespace gamemd

// 0x7D79E0
namespace gamemd {
unsigned int * _CopyMan(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl _CopyMan(int a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx

  result = a2; /*0x7d79e0*/
  v3 = 3; /*0x7d79ed*/
  do /*0x7d79f7*/
  {
    *(_DWORD *)((char *)result + a1 - (_DWORD)a2) = *result; /*0x7d79f0*/
    ++result; /*0x7d79f3*/
    --v3; /*0x7d79f6*/
  }
  while ( v3 ); /*0x7d79f7*/
  return result; /*0x7d79f9*/
}
}
} // namespace gamemd

// 0x7D7A07
namespace gamemd {
int _IsZeroMan(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _IsZeroMan(_DWORD *a1)
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
}
} // namespace gamemd

// 0x7D7A22
namespace gamemd {
int * _ShrMan(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__cdecl _ShrMan(int *a1, int a2)
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
}
} // namespace gamemd

// 0x7D7AAF
namespace gamemd {
int _ld12cvt(unsigned short * a1, unsigned int * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ld12cvt(unsigned __int16 *a1, unsigned int *a2, int *a3)
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
  _DWORD v19[3]; // [esp+Ch] [ebp-18h] BYREF
  int v20; // [esp+18h] [ebp-Ch] BYREF
  unsigned int v21; // [esp+1Ch] [ebp-8h]
  int v22; // [esp+20h] [ebp-4h]
  int v23; // [esp+2Ch] [ebp+8h]

  v4 = a1[5]; /*0x7d7abf*/
  v23 = v4 & 0x8000; /*0x7d7ac7*/
  v20 = *(_DWORD *)(a1 + 3); /*0x7d7acd*/
  v5 = *(_DWORD *)(a1 + 1); /*0x7d7ad0*/
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
          HIBYTE(v20) |= 0x80u; /*0x7d7ba8*/
          _ShrMan(&v20, v16); /*0x7d7bb0*/
          v8 = *a3 + a3[5]; /*0x7d7bbb*/
          v17 = 1; /*0x7d7bbd*/
          goto LABEL_5; /*0x7d7bbf*/
        }
        v18 = a3[3]; /*0x7d7bc4*/
        v12 = a3[5]; /*0x7d7bc7*/
        HIBYTE(v20) &= ~0x80u; /*0x7d7bca*/
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
  v14 = v20 | (v23 != 0 ? 0x80000000 : 0) | (v8 << (31 - *((_BYTE *)a3 + 12)));
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
} // namespace gamemd

// 0x7D7C47
namespace gamemd {
int _ld12told(unsigned short * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ld12told(unsigned __int16 *a1, int a2)
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
  v9 = *(_DWORD *)(a1 + 3); /*0x7d7c69*/
  v4 = *(_DWORD *)(a1 + 1); /*0x7d7c6c*/
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
  *(_DWORD *)(a2 + 4) = v6; /*0x7d7cae*/
  v7 = v10; /*0x7d7cb1*/
  *(_WORD *)(a2 + 8) = v5 | v3; /*0x7d7cb4*/
  *(_DWORD *)a2 = v7; /*0x7d7cb8*/
  return v12; /*0x7d7cbd*/
}
}
} // namespace gamemd

// 0x7D7CEE
namespace gamemd {
int _atoldbl(_LDOUBLE * Result, char * String)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _atoldbl(_LDOUBLE *Result, char *String)
{
  unsigned __int16 v3[6]; // [esp+0h] [ebp-Ch] BYREF

  __strgtold12(v3, &String, String, 1, 0, 0, 0); /*0x7d7d06*/
  return _ld12told(v3, (int)Result); /*0x7d7d1a*/
}
}
} // namespace gamemd

// 0x7D7D49
namespace gamemd {
char * _fptostr(BlowStraw * aP0, char * a1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__cdecl _fptostr(BlowStraw *aP0, char *a1, int a3)
{
  int v3; // edx
  char *v4; // ebx
  char *v6; // ecx
  BombClass *v7; // edi
  BombClass *result; // eax
  char v9; // dl
  size_t v10; // eax
  BlowStraw *aP0a; // [esp+14h] [ebp+8h]

  v3 = a3; /*0x7d7d4c*/
  v4 = a1; /*0x7d7d50*/
  v6 = *(char **)(a3 + 12); /*0x7d7d57*/
  v7 = (BombClass *)&aP0->__pad_0[1]; /*0x7d7d5b*/
  aP0->__pad_0[0] = 48; /*0x7d7d5e*/
  result = (BombClass *)&aP0->__pad_0[1]; /*0x7d7d63*/
  if ( (int)a1 > 0 ) /*0x7d7d65*/
  {
    aP0a = (BlowStraw *)a1; /*0x7d7d67*/
    v4 = 0; /*0x7d7d6a*/
    do /*0x7d7d81*/
    {
      v9 = *v6; /*0x7d7d6c*/
      if ( *v6 ) /*0x7d7d6c*/
        ++v6; /*0x7d7d75*/
      else
        v9 = 48; /*0x7d7d7a*/
      result->__pad_0[0] = v9; /*0x7d7d7b*/
      result = (BombClass *)((char *)result + 1); /*0x7d7d7d*/
      aP0a = (BlowStraw *)((char *)aP0a - 1); /*0x7d7d7e*/
    }
    while ( aP0a ); /*0x7d7d81*/
    v3 = a3; /*0x7d7d83*/
  }
  result->__pad_0[0] = 0; /*0x7d7d86*/
  if ( (int)v4 >= 0 && *v6 >= 53 ) /*0x7d7d90*/
  {
    while ( 1 ) /*0x7d7d92*/
    {
      result = (BombClass *)((char *)result - 1); /*0x7d7d92*/
      if ( result->__pad_0[0] != 57 ) /*0x7d7d96*/
        break; /*0x7d7d96*/
      result->__pad_0[0] = 48; /*0x7d7d98*/
    }
    ++result->__pad_0[0]; /*0x7d7d9d*/
  }
  if ( aP0->__pad_0[0] == 49 ) /*0x7d7da2*/
  {
    ++*(_DWORD *)(v3 + 4); /*0x7d7da4*/
  }
  else
  {
    v10 = strlen(v7->__pad_0); /*0x7d7daa*/
    return (char *)memcpy(aP0, (AbstractClass *)v7, v10 + 1); /*0x7d7db3*/
  }
  return result->__pad_0; /*0x7d7dbb*/
}
}
} // namespace gamemd

// 0x7D7DC0
namespace gamemd {
unsigned int * _fltout2(char a1, int a2, unsigned int * a3, char * Destination)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl _fltout2(char a1, int a2, _DWORD *a3, char *Destination)
{
  int v4; // eax
  _DWORD *v5; // esi
  char *v6; // edi
  int v8; // [esp-10h] [ebp-40h]
  __int16 v9; // [esp+8h] [ebp-28h] BYREF
  char v10; // [esp+Ah] [ebp-26h]
  char Source[24]; // [esp+Ch] [ebp-24h] BYREF
  __int64 v12; // [esp+24h] [ebp-Ch] BYREF
  __int16 v13; // [esp+2Ch] [ebp-4h]

  __dtold(&v12, &a1); /*0x7d7dd0*/
  LOWORD(v8) = v13; /*0x7d7de9*/
  v4 = _I10_OUTPUT(v12, v8, 17, 0, (int)&v9); /*0x7d7deb*/
  v5 = a3; /*0x7d7df0*/
  v6 = Destination; /*0x7d7df3*/
  a3[2] = v4; /*0x7d7df6*/
  *v5 = v10; /*0x7d7dfd*/
  v5[1] = v9; /*0x7d7e03*/
  strcpy(v6, Source); /*0x7d7e0b*/
  v5[3] = v6; /*0x7d7e13*/
  return v5; /*0x7d7e18*/
}
}
} // namespace gamemd

// 0x7D7E1C
namespace gamemd {
int ___dtold()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __usercall __dtold@<eax>(unsigned int a1@<eax>, int a2, int *a3)
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

  LOWORD(a1) = *((_WORD *)a3 + 3); /*0x7d7e26*/
  v4 = (a1 >> 4) & 0x7FF; /*0x7d7e39*/
  v14 = a1 & 0x8000; /*0x7d7e3b*/
  v5 = a3[1]; /*0x7d7e3e*/
  v6 = *a3; /*0x7d7e41*/
  v7 = v5 & 0xFFFFF; /*0x7d7e4b*/
  v13 = 0x80000000; /*0x7d7e52*/
  if ( (_WORD)v4 ) /*0x7d7e55*/
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
      *(_DWORD *)(a2 + 4) = 0; /*0x7d7e77*/
      *(_DWORD *)a2 = 0; /*0x7d7e7a*/
      *(_WORD *)(a2 + 8) = 0; /*0x7d7e7c*/
      return a2; /*0x7d7e80*/
    }
    v8 = v4 + 15361; /*0x7d7e82*/
    v13 = 0; /*0x7d7e88*/
  }
  v10 = (v7 << 11) | (v6 >> 21); /*0x7d7e93*/
  result = a2; /*0x7d7e95*/
  v11 = v13 | v10; /*0x7d7e98*/
  *(_DWORD *)(a2 + 4) = v11; /*0x7d7e9e*/
  *(_DWORD *)a2 = v6 << 11; /*0x7d7ea1*/
  while ( (v11 & 0x80000000) == 0 ) /*0x7d7ea5*/
  {
    v12 = 2 * __PAIR64__(v11, *(_DWORD *)a2); /*0x7d7eb2*/
    *(_QWORD *)a2 = v12; /*0x7d7eb5*/
    --v8; /*0x7d7eba*/
    v11 = HIDWORD(v12); /*0x7d7ec0*/
  }
  *(_WORD *)(a2 + 8) = v8 | v14; /*0x7d7ec9*/
  return result; /*0x7d7ecd*/
}
}
} // namespace gamemd

// 0x7D7EE0
namespace gamemd {
int unknown_libname_76()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
double __cdecl unknown_libname_76(_TBYTE a1, _TBYTE a2)
{
  double v2; // st7
  double v3; // st6
  unsigned int v4; // eax

  v2 = *(double *)&a2; /*0x7d7ee0*/
  v3 = *(double *)&a1; /*0x7d7ee4*/
  while ( !__CFADD__(DWORD1(a1), DWORD1(a1)) ) /*0x7d7eee*/
  {
    if ( !*(_QWORD *)&a1 || (HIWORD(a1) & 0x7FFF) != 0 ) /*0x7d7f90*/
      return v2 / v3; /*0x7d7f90*/
    if ( (HIWORD(a2) & 0x7FFF) != 0 ) /*0x7d7fb5*/
    {
      if ( (HIWORD(a2) & 0x7FFF) == 0x7FFF || !__CFADD__(DWORD1(a2), DWORD1(a2)) ) /*0x7d7fc2*/
        return v2 / v3; /*0x7d7ff4*/
    }
    else if ( __CFADD__(DWORD1(a2), DWORD1(a2)) ) /*0x7d7fce*/
    {
      return v2 / v3; /*0x7d7fce*/
    }
    *(double *)&a1 = v3 * MEMORY[0x87D408]; /*0x7d7fdc*/
    v2 = *(double *)&a2; /*0x7d7fe4*/
  }
  v4 = (2 * DWORD1(a1)) ^ 0xE000000; /*0x7d7ef4*/
  if ( (v4 & 0xE000000) != 0 ) /*0x7d7efe*/
    return v2 / v3; /*0x7d7f02*/
  if ( !MEMORY[0x87D3F0][v4 >> 28] ) /*0x7d7f06*/
    return v2 / v3; /*0x7d7f11*/
  if ( (HIWORD(a1) & 0x7FFF) == 0 || (HIWORD(a1) & 0x7FFF) == 0x7FFF ) /*0x7d7f22*/
    return v2 / v3; /*0x7d7f86*/
  if ( (HIWORD(a2) & 0x7FFF) == 1 ) /*0x7d7f4a*/
    return v2 * MEMORY[0x87D404] / (v3 * MEMORY[0x87D404]); /*0x7d7f77*/
  else
    return v2 * MEMORY[0x87D400] / (v3 * MEMORY[0x87D400]); /*0x7d7f60*/
}
}
} // namespace gamemd

// 0x7D7FF7
namespace gamemd {
int unknown_libname_77()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
// positive sp value has been detected, the output may be wrong!
void __usercall unknown_libname_77(char a1@<al>)
{
  _TBYTE v1; // [esp-2Ch] [ebp-58h]
  _TBYTE v2; // [esp-20h] [ebp-4Ch]
  _TBYTE v17; // [esp+0h] [ebp-2Ch]
  _TBYTE v18; // [esp+Ch] [ebp-20h]

  switch ( a1 & 0x3F ) /*0x7d7ffd*/
  {
    case 0: /*0x7d7ffd*/
      __asm { fdiv st, st } /*0x7d8004*/
      return; /*0x7d8009*/
    case 1: /*0x7d7ffd*/
      __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d800d*/
      goto LABEL_4; /*0x7d800d*/
    case 2: /*0x7d7ffd*/
LABEL_4:
      __asm { fdivr st, st } /*0x7d800f*/
      return; /*0x7d8014*/
    case 3: /*0x7d7ffd*/
      __asm { int 6; - internal hardware - UNDEFINED OPCODE (80286+) } /*0x7d8018*/
      goto LABEL_6; /*0x7d8018*/
    case 4: /*0x7d7ffd*/
LABEL_6:
      __asm { fdiv st, st } /*0x7d801a*/
      return; /*0x7d801f*/
    case 5: /*0x7d7ffd*/
      __asm { fdivp st, st } /*0x7d8020*/
      return; /*0x7d8025*/
    case 6: /*0x7d7ffd*/
      __asm { fdivr st, st } /*0x7d8026*/
      return; /*0x7d802b*/
    case 7: /*0x7d7ffd*/
      __asm { fdivrp st, st } /*0x7d802c*/
      return; /*0x7d8031*/
    case 8: /*0x7d7ffd*/
      __asm /*0x7d8032*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp tbyte ptr [esp+0]
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
        fxch st(1)
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
        fstp [esp+2Ch+var_2C]
        fstp [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d8091*/
      return; /*0x7d8099*/
    case 0xE: /*0x7d7ffd*/
      __asm /*0x7d809a*/
      {
        fstp [esp+2Ch+var_20]
        fstp [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d80a1*/
      __asm { fld [esp+2Ch+var_20] } /*0x7d80a6*/
      return; /*0x7d80ad*/
    case 0xF: /*0x7d7ffd*/
      __asm /*0x7d80ae*/
      {
        fstp [esp+2Ch+var_20]
        fstp [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d80b5*/
      return; /*0x7d80bd*/
    case 0x10: /*0x7d7ffd*/
      __asm /*0x7d80be*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp tbyte ptr [esp+0]
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
        fxch st(2)
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
        fstp [esp+2Ch+var_2C]
        fxch st(1)
        fstp [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d812b*/
      __asm { fxch st(1) } /*0x7d8130*/
      return; /*0x7d8135*/
    case 0x16: /*0x7d7ffd*/
      __asm /*0x7d8136*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp [esp+2Ch+var_20]
        fxch st(1)
        fstp [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d8157*/
      __asm { fxch st(1) } /*0x7d815c*/
      return; /*0x7d8161*/
    case 0x18: /*0x7d7ffd*/
      __asm /*0x7d8162*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp tbyte ptr [esp+0]
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
        fxch st(3)
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
        fstp [esp+2Ch+var_2C]
        fxch st(2)
        fstp [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d81cf*/
      __asm { fxch st(2) } /*0x7d81d4*/
      return; /*0x7d81d9*/
    case 0x1E: /*0x7d7ffd*/
      __asm /*0x7d81da*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp [esp+2Ch+var_20]
        fxch st(2)
        fstp [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d81fb*/
      __asm { fxch st(2) } /*0x7d8200*/
      return; /*0x7d8205*/
    case 0x20: /*0x7d7ffd*/
      __asm /*0x7d8206*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp tbyte ptr [esp+0]
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
        fxch st(4)
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
        fstp [esp+2Ch+var_2C]
        fxch st(3)
        fstp [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d8273*/
      __asm { fxch st(3) } /*0x7d8278*/
      return; /*0x7d827d*/
    case 0x26: /*0x7d7ffd*/
      __asm /*0x7d827e*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp [esp+2Ch+var_20]
        fxch st(3)
        fstp [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d829f*/
      __asm { fxch st(3) } /*0x7d82a4*/
      return; /*0x7d82a9*/
    case 0x28: /*0x7d7ffd*/
      __asm /*0x7d82aa*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp tbyte ptr [esp+0]
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
        fxch st(5)
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
        fstp [esp+2Ch+var_2C]
        fxch st(4)
        fstp [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d8317*/
      __asm { fxch st(4) } /*0x7d831c*/
      return; /*0x7d8321*/
    case 0x2E: /*0x7d7ffd*/
      __asm /*0x7d8322*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp [esp+2Ch+var_20]
        fxch st(4)
        fstp [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d8343*/
      __asm { fxch st(4) } /*0x7d8348*/
      return; /*0x7d834d*/
    case 0x30: /*0x7d7ffd*/
      __asm /*0x7d834e*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp tbyte ptr [esp+0]
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
        fxch st(6)
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
        fstp [esp+2Ch+var_2C]
        fxch st(5)
        fstp [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d83bb*/
      __asm { fxch st(5) } /*0x7d83c0*/
      return; /*0x7d83c5*/
    case 0x36: /*0x7d7ffd*/
      __asm /*0x7d83c6*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp [esp+2Ch+var_20]
        fxch st(5)
        fstp [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d83e7*/
      __asm { fxch st(5) } /*0x7d83ec*/
      return; /*0x7d83f1*/
    case 0x38: /*0x7d7ffd*/
      __asm /*0x7d83f2*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp tbyte ptr [esp+0]
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
        fxch st(7)
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
        fstp [esp+2Ch+var_2C]
        fxch st(6)
        fstp [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d845f*/
      __asm { fxch st(6) } /*0x7d8464*/
      break; /*0x7d8469*/
    case 0x3E: /*0x7d7ffd*/
      __asm /*0x7d846a*/
      {
        fstp [esp+2Ch+var_20]
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
        fstp [esp+2Ch+var_20]
        fxch st(6)
        fstp [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_76(v1, v2); /*0x7d848b*/
      __asm { fxch st(6) } /*0x7d8490*/
      break; /*0x7d8490*/
  }
}
}
} // namespace gamemd

// 0x7D8496
namespace gamemd {
int unknown_libname_78()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __usercall unknown_libname_78(double a1@<st1>, double a2@<st0>)
{
  _TBYTE v2; // [esp+0h] [ebp-2Ch]
  _TBYTE v3; // [esp+Ch] [ebp-20h]

  *(double *)&v2 = a1; /*0x7d8499*/
  *(double *)&v3 = a2; /*0x7d849c*/
  unknown_libname_76(v2, v3); /*0x7d84a0*/
}
}
} // namespace gamemd

// 0x7D84A9
namespace gamemd {
int unknown_libname_79()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __usercall unknown_libname_79(double a1@<st1>, double a2@<st0>)
{
  _TBYTE v2; // [esp+0h] [ebp-2Ch]
  _TBYTE v3; // [esp+Ch] [ebp-20h]

  *(double *)&v3 = a1; /*0x7d84ac*/
  *(double *)&v2 = a2; /*0x7d84b0*/
  unknown_libname_76(v2, v3); /*0x7d84b3*/
}
}
} // namespace gamemd

// 0x7D86BC
namespace gamemd {
int unknown_libname_88()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __usercall __spoils<edx,ecx,st0> unknown_libname_88(double a1@<st1>, double a2@<st0>)
{
  _TBYTE v2; // [esp+0h] [ebp-30h]
  _TBYTE v3; // [esp+Ch] [ebp-24h]

  *(double *)&v2 = a1; /*0x7d86c0*/
  *(double *)&v3 = a2; /*0x7d86c3*/
  unknown_libname_76(v2, v3); /*0x7d86c7*/
}
}
} // namespace gamemd

// 0x7D86D1
namespace gamemd {
int unknown_libname_89()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __usercall __spoils<edx,ecx,st0> unknown_libname_89(double a1@<st1>, double a2@<st0>)
{
  _TBYTE v2; // [esp+0h] [ebp-30h]
  _TBYTE v3; // [esp+Ch] [ebp-24h]

  *(double *)&v3 = a1; /*0x7d86d5*/
  *(double *)&v2 = a2; /*0x7d86d9*/
  unknown_libname_76(v2, v3); /*0x7d86dc*/
}
}
} // namespace gamemd

// 0x7D86E6
namespace gamemd {
int unknown_libname_90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
unsigned int __usercall unknown_libname_90@<eax>(char a1@<dl>, __int128 a2, int a3, int a4, __int128 a5)
{
  unsigned int result; // eax
  int v6; // ecx
  double v7; // st7
  __int16 v8; // fps
  double v9; // st6
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  __int16 v13; // fps

  result = *(_DWORD *)((char *)&a2 + 6) ^ 0x700; /*0x7d86ed*/
  if ( ((*(_DWORD *)((char *)&a2 + 6) ^ 0x700) & 0x700) == 0 ) /*0x7d86f7*/
  {
    result = (result >> 11) & 0xF; /*0x7d8700*/
    if ( MEMORY[0x87D40C][result] ) /*0x7d8703*/
    {
      result = *(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000; /*0x7d8714*/
      if ( (*(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000) != 0x7FFF0000 ) /*0x7d871e*/
      {
        result = *(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000; /*0x7d8728*/
        if ( (*(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000) != 0 && result != 2147418112 ) /*0x7d8738*/
        {
          result = 2 * DWORD1(a5); /*0x7d8742*/
          if ( !(2 * DWORD1(a5)) ) /*0x7d8742*/
          {
            result = 2 * DWORD1(a2); /*0x7d874e*/
            if ( !(2 * DWORD1(a2)) ) /*0x7d874e*/
            {
              if ( (WORD4(a5) & 0x7FFFu) > (WORD4(a2) & 0x7FFFu) + 63 ) /*0x7d876e*/
              {
                v6 = ((BYTE8(a5) - BYTE8(a2)) & 0x3F | 0x20) + 1; /*0x7d8811*/
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
                  v7 = v7 * MEMORY[0x87D43C]; /*0x7d884d*/
                  --v6; /*0x7d884f*/
                }
                while ( v6 ); /*0x7d8852*/
              }
              else
              {
                while ( 1 ) /*0x7d8779*/
                {
                  result = (WORD4(a2) & 0x7FFF) + 10; /*0x7d8779*/
                  if ( (int)((WORD4(a5) & 0x7FFF) - result) < 0 ) /*0x7d8788*/
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
} // namespace gamemd

// 0x7D88EC
namespace gamemd {
int unknown_libname_91()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
int __usercall __spoils<ecx,st0> unknown_libname_91@<eax>(double a1@<st1>, double a2@<st0>)
{
  int result; // eax
  char v3; // dl
  _BYTE v4[20]; // [esp+0h] [ebp-34h]
  int v5; // [esp+14h] [ebp-20h]
  __int128 v6; // [esp+18h] [ebp-1Ch]

  *(double *)&v6 = a1; /*0x7d88f0*/
  *(double *)v4 = a2; /*0x7d88f4*/
  if ( (*(_DWORD *)&v4[6] & 0x7FFF0000) != 0 ) /*0x7d8902*/
    return unknown_libname_90(0, *(__int128 *)v4, *(int *)&v4[16], v5, v6); /*0x7d8904*/
  result = *(_DWORD *)&v4[4] | *(_DWORD *)v4; /*0x7d8918*/
  if ( a2 != 0.0 ) /*0x7d891c*/
  {
    *(double *)&v4[12] = a2; /*0x7d8920*/
    v3 = 2; /*0x7d8929*/
    if ( (WORD4(v6) & 0x7FFFu) <= 0x7FBE ) /*0x7d894f*/
    {
      v3 = 3; /*0x7d8951*/
      *(double *)&v6 = a1 * MEMORY[0x87D424]; /*0x7d895a*/
    }
    *(double *)v4 = a2 * MEMORY[0x87D424]; /*0x7d8964*/
    return unknown_libname_90(v3, *(__int128 *)v4, HIDWORD(*(unsigned __int64 *)&a2), v5, v6); /*0x7d898d*/
  }
  return result; /*0x7d890d*/
}
}
} // namespace gamemd

// 0x7D899E
namespace gamemd {
int unknown_libname_92()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
unsigned int __usercall unknown_libname_92@<eax>(char a1@<dl>, __int128 a2, int a3, int a4, __int128 a5)
{
  unsigned int result; // eax
  int v6; // ecx
  double v7; // st7
  __int16 v8; // fps
  double v9; // st6
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  __int16 v13; // fps

  result = *(_DWORD *)((char *)&a2 + 6) ^ 0x700; /*0x7d89a5*/
  if ( ((*(_DWORD *)((char *)&a2 + 6) ^ 0x700) & 0x700) == 0 ) /*0x7d89af*/
  {
    result = (result >> 11) & 0xF; /*0x7d89b8*/
    if ( MEMORY[0x87D40C][result] ) /*0x7d89bb*/
    {
      result = *(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000; /*0x7d89cc*/
      if ( (*(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000) != 0x7FFF0000 ) /*0x7d89d6*/
      {
        result = *(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000; /*0x7d89e0*/
        if ( (*(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000) != 0 && result != 2147418112 ) /*0x7d89f0*/
        {
          result = 2 * DWORD1(a5); /*0x7d89fa*/
          if ( !(2 * DWORD1(a5)) ) /*0x7d89fa*/
          {
            result = 2 * DWORD1(a2); /*0x7d8a06*/
            if ( !(2 * DWORD1(a2)) ) /*0x7d8a06*/
            {
              if ( (WORD4(a5) & 0x7FFFu) > (WORD4(a2) & 0x7FFFu) + 63 ) /*0x7d8a26*/
              {
                v6 = ((BYTE8(a5) - BYTE8(a2)) & 0x3F | 0x20) + 1; /*0x7d8ac9*/
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
                  v7 = v7 * MEMORY[0x87D43C]; /*0x7d8b05*/
                  --v6; /*0x7d8b07*/
                }
                while ( v6 ); /*0x7d8b0a*/
              }
              else
              {
                while ( 1 ) /*0x7d8a31*/
                {
                  result = (WORD4(a2) & 0x7FFF) + 10; /*0x7d8a31*/
                  if ( (int)((WORD4(a5) & 0x7FFF) - result) < 0 ) /*0x7d8a40*/
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
} // namespace gamemd

// 0x7D8BA4
namespace gamemd {
int unknown_libname_93()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
int __usercall __spoils<ecx,st0> unknown_libname_93@<eax>(double a1@<st1>, double a2@<st0>)
{
  int result; // eax
  char v3; // dl
  _BYTE v4[20]; // [esp+0h] [ebp-34h]
  int v5; // [esp+14h] [ebp-20h]
  __int128 v6; // [esp+18h] [ebp-1Ch]

  *(double *)&v6 = a1; /*0x7d8ba8*/
  *(double *)v4 = a2; /*0x7d8bac*/
  if ( (*(_DWORD *)&v4[6] & 0x7FFF0000) != 0 ) /*0x7d8bbd*/
    return unknown_libname_92(0, *(__int128 *)v4, *(int *)&v4[16], v5, v6); /*0x7d8bbf*/
  result = *(_DWORD *)&v4[4] | *(_DWORD *)v4; /*0x7d8bd3*/
  if ( a2 != 0.0 ) /*0x7d8bd7*/
  {
    *(double *)&v4[12] = a2; /*0x7d8bdb*/
    v3 = 2; /*0x7d8be4*/
    if ( (WORD4(v6) & 0x7FFFu) <= 0x7FBE ) /*0x7d8c0a*/
    {
      v3 = 3; /*0x7d8c0c*/
      *(double *)&v6 = a1 * MEMORY[0x87D424]; /*0x7d8c15*/
    }
    *(double *)v4 = a2 * MEMORY[0x87D424]; /*0x7d8c1f*/
    return unknown_libname_92(v3, *(__int128 *)v4, HIDWORD(*(unsigned __int64 *)&a2), v5, v6); /*0x7d8c48*/
  }
  return result; /*0x7d8bc8*/
}
}
} // namespace gamemd

// 0x7D8C6B
namespace gamemd {
int _87except(int a1, int a2, unsigned short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _87except(int a1, int a2, unsigned __int16 *a3)
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
  v5 = *(_DWORD *)a2 - 1; /*0x7d8c7f*/
  v4 = *(_DWORD *)a2 == 1; /*0x7d8c7f*/
  a3 = v3; /*0x7d8c80*/
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
    *(_DWORD *)a2 = 1; /*0x7d8c9c*/
    goto LABEL_21; /*0x7d8ca2*/
  }
  if ( v10 == 1 ) /*0x7d8c96*/
  {
    v13 = 16; /*0x7d8c98*/
    goto LABEL_14; /*0x7d8c9a*/
  }
LABEL_21:
  _ctrlfp(a3, 0xFFFF); /*0x7d8d06*/
  if ( *(_DWORD *)a2 == 8 ) /*0x7d8d18*/
    return _set_errno(*(_DWORD *)a2); /*0x7d8d18*/
  if ( MEMORY[0x87D700] ) /*0x7d8d21*/
    return _set_errno(*(_DWORD *)a2); /*0x7d8d21*/
  result = ReturnNull5(); /*0x7d8d24*/
  if ( !result ) /*0x7d8d2c*/
    return _set_errno(*(_DWORD *)a2); /*0x7d8d30*/
  return result; /*0x7d8d36*/
}
}
} // namespace gamemd

// 0x7D8D3B
namespace gamemd {
double _set_exp(double a1, short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _set_exp(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1; /*0x7d8d53*/
  HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * (a2 + 1022)); /*0x7d8d5b*/
  return v3; /*0x7d8d62*/
}
}
} // namespace gamemd

// 0x7D8DA4
namespace gamemd {
double _set_bexp(double a1, short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _set_bexp(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1; /*0x7d8db5*/
  HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * a2); /*0x7d8dbf*/
  return v3; /*0x7d8dc6*/
}
}
} // namespace gamemd

// 0x7D8DC8
namespace gamemd {
int _sptype(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _sptype(int a1, int a2)
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
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF8 ) /*0x7d8dfe*/
    return 3; /*0x7d8e02*/
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF0 && ((a2 & 0x7FFFF) != 0 || a1) ) /*0x7d8e17*/
    return 4; /*0x7d8e19*/
  return 0; /*0x7d8e1c*/
}
}
} // namespace gamemd

// 0x7D8E22
namespace gamemd {
int __decomp()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
double __cdecl _decomp(double a1, int *a2)
{
  int v2; // esi
  BOOL v3; // eax
  double v5; // [esp+10h] [ebp-8h]

  if ( a1 == 0.0 ) /*0x7d8e34*/
  {
    v2 = 0; /*0x7d8e38*/
    v5 = 0.0; /*0x7d8e3a*/
  }
  else if ( (HIWORD(a1) & 0x7FF0) == 0 && ((HIDWORD(a1) & 0xFFFFF) != 0 || LODWORD(a1)) ) /*0x7d8e58*/
  {
    v2 = -1021; /*0x7d8e63*/
    v3 = a1 < 0.0; /*0x7d8e6b*/
    while ( (BYTE6(a1) & 0x10) == 0 ) /*0x7d8e78*/
    {
      HIDWORD(a1) *= 2; /*0x7d8e7a*/
      if ( SBYTE3(a1) < 0 ) /*0x7d8e81*/
        HIDWORD(a1) |= 1u; /*0x7d8e83*/
      LODWORD(a1) *= 2; /*0x7d8e87*/
      --v2; /*0x7d8e8a*/
    }
    HIWORD(a1) &= ~0x10u; /*0x7d8e8d*/
    if ( v3 ) /*0x7d8e95*/
      HIBYTE(a1) |= 0x80u; /*0x7d8e97*/
    v5 = _set_exp(a1, 0); /*0x7d8ea9*/
  }
  else
  {
    v5 = _set_exp(a1, 0); /*0x7d8ec5*/
    v2 = ((*(_DWORD *)((char *)&a1 + 6) >> 4) & 0x7FF) - 1022; /*0x7d8ed2*/
  }
  *a2 = v2; /*0x7d8ede*/
  return v5; /*0x7d8ee1*/
}
}
} // namespace gamemd

// 0x7D8EE3
namespace gamemd {
double _frnd(double a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _frnd(double a1)
{
  double result; // st7

  _ST7 = a1; /*0x7d8ee8*/
  __asm { frndint } /*0x7d8eeb*/
  return result; /*0x7d8ef3*/
}
}
} // namespace gamemd

// 0x7D8EF5
namespace gamemd {
double _copysign(double Number, double Sign)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _copysign(double Number, double Sign)
{
  double v3; // [esp+0h] [ebp-8h]

  LODWORD(v3) = LODWORD(Number); /*0x7d8efd*/
  HIDWORD(v3) = HIDWORD(Sign) ^ (HIDWORD(Number) ^ HIDWORD(Sign)) & 0x7FFFFFFF; /*0x7d8f0e*/
  return v3; /*0x7d8f14*/
}
}
} // namespace gamemd

// 0x7D8F16
namespace gamemd {
double _chgsign(double X)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _chgsign(double X)
{
  double v2; // [esp+0h] [ebp-8h]

  LODWORD(v2) = LODWORD(X); /*0x7d8f1e*/
  HIDWORD(v2) = ~HIDWORD(X) ^ (HIDWORD(X) ^ ~HIDWORD(X)) & 0x7FFFFFFF; /*0x7d8f33*/
  return v2; /*0x7d8f39*/
}
}
} // namespace gamemd

// 0x7D8F3B
namespace gamemd {
double _scalb(double X, int Y)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _scalb(double X, int Y)
{
  return ldexp(X, Y); /*0x7d8f50*/
}
}
} // namespace gamemd

// 0x7D8F51
namespace gamemd {
double _logb(double X)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _logb(double X)
{
  int v1; // edi
  int v2; // eax
  double result; // st7
  int v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+1Ch] [ebp-4h] BYREF
  double Xa; // [esp+28h] [ebp+8h]

  v1 = _ctrlfp(4927, 0xFFFF); /*0x7d8f6a*/
  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 ) /*0x7d8f79*/
  {
    v2 = _sptype(SLODWORD(X), SHIDWORD(X)); /*0x7d8f80*/
    if ( v2 > 0 ) /*0x7d8f89*/
    {
      if ( v2 <= 2 ) /*0x7d8f8e*/
      {
        _ctrlfp(v1, 0xFFFF); /*0x7d8faf*/
        return X; /*0x7d8fb9*/
      }
      if ( v2 == 3 ) /*0x7d8f93*/
      {
        _handle_qnan1(v4, 37, X, v1); /*0x7d8fa0*/
        return X; /*0x7d8fa8*/
      }
    }
    _except1( /*0x7d8fd6*/
      8u,
      37,
      SLODWORD(X),
      SHIDWORD(X),
      COERCE_UNSIGNED_INT64(X + 1.0),
      HIDWORD(COERCE_UNSIGNED_INT64(X + 1.0)),
      v1);
    return X; /*0x7d8fca*/
  }
  else if ( X == 0.0 ) /*0x7d8fe1*/
  {
    result = X; /*0x7d8ff1*/
    _except1( /*0x7d8ffd*/
      4u,
      37,
      SLODWORD(X),
      SHIDWORD(X),
      COERCE_UNSIGNED_INT64(-MEMORY[0x87D550]),
      HIDWORD(COERCE_UNSIGNED_INT64(-MEMORY[0x87D550])),
      v1);
  }
  else
  {
    _decomp(X, &v5); /*0x7d9013*/
    Xa = (double)(v5 - 1); /*0x7d9026*/
    _ctrlfp(v1, 0xFFFF); /*0x7d9029*/
    return Xa; /*0x7d902e*/
  }
  return result; /*0x7d9034*/
}
}
} // namespace gamemd

// 0x7D9038
namespace gamemd {
double _nextafter(double X, double Y)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _nextafter(double X, double Y)
{
  double result; // st7
  int v3; // edi
  int v4; // eax
  double v5; // [esp+28h] [ebp-1Ch]
  double v6; // [esp+28h] [ebp-1Ch]
  double v7; // [esp+28h] [ebp-1Ch]
  double v8; // [esp+34h] [ebp-10h]
  double v9; // [esp+34h] [ebp-10h]
  int v10; // [esp+3Ch] [ebp-8h] BYREF
  int v11; // [esp+40h] [ebp-4h]

  v11 = _ctrlfp(4927, 0xFFFF); /*0x7d9059*/
  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 || (HIWORD(Y) & 0x7FF0) == 0x7FF0 ) /*0x7d9074*/
  {
    if ( (HIWORD(X) & 0x7FF8) == 0x7FF0 && ((HIDWORD(X) & 0x7FFFF) != 0 || LODWORD(X)) /*0x7d90a3*/
      || (HIWORD(Y) & 0x7FF8) == 0x7FF0 && ((HIDWORD(Y) & 0x7FFFF) != 0 || LODWORD(Y)) )
    {
      _except2( /*0x7d90c7*/
        8u,
        38,
        SLODWORD(X),
        SHIDWORD(X),
        Y,
        COERCE_UNSIGNED_INT64(X + Y),
        HIDWORD(COERCE_UNSIGNED_INT64(X + Y)),
        v11);
      return X; /*0x7d90c7*/
    }
    if ( (HIWORD(X) & 0x7FF8) == 0x7FF8 || (HIWORD(Y) & 0x7FF8) == 0x7FF8 ) /*0x7d90d8*/
    {
      _handle_qnan2(32752, 38, X, Y, v11); /*0x7d92c0*/
      return X; /*0x7d92b6*/
    }
  }
  if ( Y == X ) /*0x7d90ec*/
  {
    _ctrlfp(v11, 0xFFFF); /*0x7d90f2*/
    return X; /*0x7d90fc*/
  }
  if ( X == 0.0 ) /*0x7d910d*/
  {
    LODWORD(v5) = 1; /*0x7d9115*/
    if ( Y <= X ) /*0x7d911f*/
      HIDWORD(v5) = 0x80000000; /*0x7d9127*/
    else
      HIDWORD(v5) = 0; /*0x7d9121*/
  }
  if ( (X <= 0.0 || Y >= X) && (X >= 0.0 || Y <= X) ) /*0x7d915e*/
  {
    if ( (X <= 0.0 || Y <= X) && (X >= 0.0 || Y >= X) ) /*0x7d91a3*/
    {
      v3 = LODWORD(v5); /*0x7d91bb*/
      goto LABEL_32; /*0x7d91bb*/
    }
    v3 = LODWORD(X) + 1; /*0x7d91a8*/
    LODWORD(v5) = LODWORD(X) + 1; /*0x7d91ad*/
    HIDWORD(v5) = HIDWORD(X); /*0x7d91b0*/
    if ( LODWORD(X) == -1 ) /*0x7d91b3*/
    {
      v4 = HIDWORD(X) + 1; /*0x7d91b5*/
      goto LABEL_30; /*0x7d91b5*/
    }
  }
  else
  {
    v3 = LODWORD(X) - 1; /*0x7d9163*/
    LODWORD(v5) = LODWORD(X) - 1; /*0x7d9168*/
    HIDWORD(v5) = HIDWORD(X); /*0x7d916b*/
    if ( !LODWORD(X) ) /*0x7d916e*/
    {
      v4 = HIDWORD(X) - 1; /*0x7d9170*/
LABEL_30:
      HIDWORD(v5) = v4; /*0x7d91b6*/
    }
  }
LABEL_32:
  if ( (HIWORD(v5) & 0x7FF0) == 0 && ((HIDWORD(v5) & 0xFFFFF) != 0 || v3) ) /*0x7d91cf*/
  {
    v8 = _decomp(v5, &v10); /*0x7d91e8*/
    v6 = _set_exp(v8, (unsigned __int16)v10 + 1536); /*0x7d91fe*/
    _except2(0x12u, 38, SLODWORD(X), SHIDWORD(X), Y, SLODWORD(v6), SHIDWORD(v6), v11); /*0x7d9223*/
    return X; /*0x7d9217*/
  }
  else if ( (HIDWORD(v5) != 2146435072 || v3) && (HIDWORD(v5) != -1048576 || v3) ) /*0x7d923d*/
  {
    _ctrlfp(v11, 0xFFFF); /*0x7d929f*/
    return v5; /*0x7d92a4*/
  }
  else
  {
    v9 = _decomp(v5, &v10); /*0x7d9256*/
    v7 = _set_exp(v9, (unsigned __int16)v10 - 1536); /*0x7d926c*/
    result = X; /*0x7d9285*/
    _except2(0x11u, 38, SLODWORD(X), SHIDWORD(X), Y, SLODWORD(v7), SHIDWORD(v7), v11); /*0x7d9291*/
  }
  return result; /*0x7d92c8*/
}
}
} // namespace gamemd

// 0x7D92CD
namespace gamemd {
int _finite(double X)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _finite(double X)
{
  return (HIWORD(X) & 0x7FF0) != 32752; /*0x7d92e0*/
}
}
} // namespace gamemd

// 0x7D92E1
namespace gamemd {
int _isnan(double X)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _isnan(double X)
{
  return (HIWORD(X) & 0x7FF8) == 0x7FF0 && ((HIDWORD(X) & 0x7FFFF) != 0 || LODWORD(X)) || (HIWORD(X) & 0x7FF8) == 0x7FF8; /*0x7d930b*/
}
}
} // namespace gamemd

// 0x7D930F
namespace gamemd {
int _fpclass(double X)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _fpclass(double X)
{
  int v1; // eax
  int v2; // eax
  int v4; // eax
  int v5; // eax

  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 ) /*0x7d9321*/
  {
    v1 = _sptype(SLODWORD(X), SHIDWORD(X)) - 1; /*0x7d9331*/
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
  else if ( (HIWORD(X) & 0x7FF0) == 0 && ((HIDWORD(X) & 0xFFFFF) != 0 || LODWORD(X)) ) /*0x7d9368*/
  {
    v4 = -((HIWORD(X) & 0x8000) != 0); /*0x7d936e*/
    LOBYTE(v4) = v4 & 0x90; /*0x7d9370*/
    return v4 + 128; /*0x7d9372*/
  }
  else
  {
    v5 = -((HIWORD(X) & 0x8000) != 0); /*0x7d938b*/
    LOBYTE(v5) = 0; /*0x7d938d*/
    if ( X == 0.0 ) /*0x7d9387*/
      return v5 + 64; /*0x7d938f*/
    else
      return v5 + 256; /*0x7d939a*/
  }
}
}
} // namespace gamemd

// 0x7D93A1
namespace gamemd {
int _alloc_osfhnd()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int _alloc_osfhnd()
{
  int v0; // edi
  int v1; // ebx
  int *v2; // ebp
  unsigned int v3; // esi
  unsigned int i; // eax
  char *v5; // eax
  unsigned int v6; // edx
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  v0 = -1; /*0x7d93a9*/
  _lock(18); /*0x7d93ac*/
  v1 = 0; /*0x7d93b1*/
  v8 = 0; /*0x7d93b4*/
  v9 = 0; /*0x7d93b8*/
  v2 = dword_B78A80; /*0x7d93bc*/
  while ( 1 ) /*0x7d93c1*/
  {
    v3 = *v2; /*0x7d93c1*/
    if ( !*v2 ) /*0x7d93c1*/
      break; /*0x7d93c1*/
    for ( i = v3 + 1152; v3 < i; i = *v2 + 1152 ) /*0x7d93cc*/
    {
      if ( (*(_BYTE *)(v3 + 4) & 1) == 0 ) /*0x7d93da*/
      {
        if ( !*(_DWORD *)(v3 + 8) ) /*0x7d93dc*/
        {
          _lock(17); /*0x7d93e4*/
          if ( !*(_DWORD *)(v3 + 8) ) /*0x7d93e9*/
          {
            InitializeCriticalSection((LPCRITICAL_SECTION)(v3 + 12)); /*0x7d93f4*/
            ++*(_DWORD *)(v3 + 8); /*0x7d93fa*/
          }
          _unlock(17); /*0x7d93ff*/
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 12)); /*0x7d9409*/
        if ( (*(_BYTE *)(v3 + 4) & 1) == 0 ) /*0x7d9413*/
        {
          *(_DWORD *)v3 = -1; /*0x7d942d*/
          v0 = v9 + (int)(v3 - *v2) / 36; /*0x7d943d*/
          if ( v0 != -1 ) /*0x7d9444*/
            goto LABEL_22; /*0x7d9444*/
          v1 = v8; /*0x7d9446*/
          break; /*0x7d9446*/
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 12)); /*0x7d9416*/
        v1 = v8; /*0x7d941c*/
      }
      v3 += 36; /*0x7d9423*/
    }
    v9 += 32; /*0x7d944a*/
    ++v2; /*0x7d944f*/
    v8 = ++v1; /*0x7d9459*/
    if ( (int)v2 >= (int)&uNumber ) /*0x7d945d*/
      goto LABEL_22; /*0x7d945d*/
  }
  v5 = (char *)malloc(0x480u); /*0x7d946b*/
  if ( v5 ) /*0x7d9473*/
  {
    uNumber += 32; /*0x7d9475*/
    v6 = (unsigned int)(v5 + 1152); /*0x7d9483*/
    dword_B78A80[v1] = (int)v5; /*0x7d9489*/
    while ( (unsigned int)v5 < v6 ) /*0x7d948d*/
    {
      v5[4] = 0; /*0x7d948f*/
      *(_DWORD *)v5 = -1; /*0x7d9493*/
      *((_DWORD *)v5 + 2) = 0; /*0x7d9496*/
      v5[5] = 10; /*0x7d949a*/
      v5 += 36; /*0x7d94a0*/
      v6 = dword_B78A80[v1] + 1152; /*0x7d94a3*/
    }
    v0 = 32 * v1; /*0x7d94aa*/
    _lock_fhandle(32 * v1); /*0x7d94ad*/
  }
LABEL_22:
  _unlock(18); /*0x7d94b3*/
  return v0; /*0x7d94bd*/
}
}
} // namespace gamemd

// 0x7D94C4
namespace gamemd {
int _set_osfhnd(int a1, HANDLE hHandle)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _set_osfhnd(int a1, HANDLE hHandle)
{
  if ( a1 < uNumber && *(_DWORD *)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F)) == -1 ) /*0x7d94ef*/
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
    *(_DWORD *)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F)) = hHandle; /*0x7d951f*/
    return 0; /*0x7d9522*/
  }
  else
  {
    *_errno() = 9; /*0x7d952c*/
    *__doserrno() = 0; /*0x7d9537*/
    return -1; /*0x7d953a*/
  }
}
}
} // namespace gamemd

// 0x7D9540
namespace gamemd {
int _free_osfhnd(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _free_osfhnd(int a1)
{
  int v1; // eax

  if ( a1 >= uNumber /*0x7d9572*/
    || (v1 = 36 * (a1 & 0x1F) + dword_B78A80[a1 >> 5], (*(_BYTE *)(v1 + 4) & 1) == 0)
    || *(_DWORD *)v1 == -1 )
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
    *(_DWORD *)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F)) = -1; /*0x7d959e*/
    return 0; /*0x7d95a2*/
  }
}
}
} // namespace gamemd

// 0x7D95BF
namespace gamemd {
intptr_t _get_osfhandle(int FileHandle)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
intptr_t __cdecl _get_osfhandle(int FileHandle)
{
  int v1; // eax

  if ( FileHandle < uNumber ) /*0x7d95c9*/
  {
    v1 = dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F); /*0x7d95e2*/
    if ( (*(_BYTE *)(v1 + 4) & 1) != 0 ) /*0x7d95e5*/
      return *(_DWORD *)v1; /*0x7d95e7*/
  }
  *_errno() = 9; /*0x7d95ef*/
  *__doserrno() = 0; /*0x7d95fa*/
  return -1; /*0x7d95e9*/
}
}
} // namespace gamemd

// 0x7D9601
namespace gamemd {
int _open_osfhandle(intptr_t OSFileHandle, int Flags)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _open_osfhandle(intptr_t OSFileHandle, int Flags)
{
  char v2; // bl
  DWORD FileType; // eax
  DWORD LastError; // eax
  int v5; // eax
  int v6; // esi

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
  v5 = _alloc_osfhnd(); /*0x7d9651*/
  v6 = v5; /*0x7d9656*/
  if ( v5 == -1 ) /*0x7d965b*/
  {
    *_errno() = 24; /*0x7d9662*/
    *__doserrno() = 0; /*0x7d966d*/
    return -1; /*0x7d966d*/
  }
  _set_osfhnd(v5, (HANDLE)OSFileHandle); /*0x7d9679*/
  *(_BYTE *)(dword_B78A80[v6 >> 5] + 36 * (v6 & 0x1F) + 4) = v2 | 1; /*0x7d9696*/
  _unlock_fhandle(v6); /*0x7d969a*/
  return v6; /*0x7d96a4*/
}
}
} // namespace gamemd

// 0x7D96A8
namespace gamemd {
void _lock_fhandle(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl _lock_fhandle(int a1)
{
  int v1; // edi
  int v2; // esi

  v1 = 36 * (a1 & 0x1F); /*0x7d96c8*/
  v2 = v1 + dword_B78A80[a1 >> 5]; /*0x7d96cb*/
  if ( !*(_DWORD *)(v2 + 8) ) /*0x7d96cd*/
  {
    _lock(17); /*0x7d96d5*/
    if ( !*(_DWORD *)(v2 + 8) ) /*0x7d96da*/
    {
      InitializeCriticalSection((LPCRITICAL_SECTION)(v2 + 12)); /*0x7d96e5*/
      ++*(_DWORD *)(v2 + 8); /*0x7d96eb*/
    }
    _unlock(17); /*0x7d96f0*/
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(dword_B78A80[a1 >> 5] + v1 + 12)); /*0x7d96fd*/
}
}
} // namespace gamemd

// 0x7D9707
namespace gamemd {
void _unlock_fhandle(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F) + 12)); /*0x7d9722*/
}
}
} // namespace gamemd

// 0x7D9729
namespace gamemd {
BOOL __crtGetStringTypeA(DWORD dwInfoType, CCINIClass * aP1, int cchSrc, LPWORD lpCharType, UINT CodePage, LCID Locale, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __cdecl __crtGetStringTypeA(
        DWORD dwInfoType,
        CCINIClass *aP1,
        int cchSrc,
        LPWORD lpCharType,
        UINT CodePage,
        LCID Locale,
        int a7)
{
  int v7; // eax
  CampaignScore *v8; // eax
  int v10; // eax
  AbstractClass *v11; // edi
  int v12; // eax
  void *v13; // esp
  int v14; // eax
  WCHAR v15[8]; // [esp+0h] [ebp-34h] BYREF
  WCHAR *v16; // [esp+10h] [ebp-24h]
  int cchWideChar; // [esp+14h] [ebp-20h]
  WORD CharType; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v7 = unk_B78568; /*0x7d974f*/
  if ( !unk_B78568 ) /*0x7d9758*/
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, &CharType) ) /*0x7d9768*/
    {
      v7 = 1; /*0x7d9772*/
    }
    else
    {
      if ( !GetStringTypeA(0, 1u, byte_7F98E4, 1, &CharType) ) /*0x7d978a*/
        return 0; /*0x7d985e*/
      v7 = 2; /*0x7d9792*/
    }
    unk_B78568 = v7; /*0x7d9793*/
  }
  if ( v7 != 2 )
  {
    if ( v7 == 1 )
    {
      if ( !CodePage ) /*0x7d97cd*/
        CodePage = ::CodePage; /*0x7d97d4*/
      v10 = MultiByteToWideChar(CodePage, a7 != 0 ? 9 : 1, aP1->__pad_0, cchSrc, 0, 0);
      cchWideChar = v10; /*0x7d97f4*/
      if ( v10 ) /*0x7d97f9*/
      {
        v11 = (AbstractClass *)(2 * v10); /*0x7d97fe*/
        v12 = 2 * v10 + 3; /*0x7d9803*/
        LOBYTE(v12) = v12 & 0xFC; /*0x7d9806*/
        v13 = alloca(v12); /*0x7d9808*/
        ms_exc.old_esp = (DWORD)v15; /*0x7d980d*/
        v16 = v15; /*0x7d9812*/
        memset(v15, 0, v11); /*0x7d9818*/
        ms_exc.registration.TryLevel = -1; /*0x7d982d*/
        if ( v15 ) /*0x7d9833*/
        {
          v14 = MultiByteToWideChar(CodePage, 1u, aP1->__pad_0, cchSrc, v15, cchWideChar); /*0x7d9844*/
          if ( v14 ) /*0x7d984c*/
            return GetStringTypeW(dwInfoType, v15, v14, lpCharType); /*0x7d985c*/
        }
      }
    }
    return 0; /*0x7d984c*/
  }
  v8 = (CampaignScore *)Locale; /*0x7d979d*/
  if ( !Locale ) /*0x7d97a2*/
    v8 = dword_B782A0; /*0x7d97a4*/
  return GetStringTypeA((LCID)v8, dwInfoType, aP1->__pad_0, cchSrc, lpCharType); /*0x7d9863*/
}
}
} // namespace gamemd

// 0x7D9872
namespace gamemd {
int __strgtold12(int a1, char ** a2, char * a3, int a4, int a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __strgtold12(int a1, char **a2, char *a3, int a4, int a5, int a6, int a7)
{
  char *v7; // edi
  int v8; // eax
  char v9; // cl
  char v10; // bl
  _BYTE *v12; // eax
  _BYTE *v14; // eax
  int v15; // eax
  char *v16; // ecx
  char *v17; // edi
  int v18; // esi
  int v19; // eax
  bool v21; // zf
  _BYTE *v22; // eax
  int v23; // eax
  int v24; // eax
  char *v25; // ebx
  unsigned int v26; // esi
  __int16 v27; // ax
  __int16 v28; // dx
  __int16 v29; // ax
  int result; // eax
  int v31; // [esp-4h] [ebp-6Ch]
  int v32; // [esp-4h] [ebp-6Ch]
  _BYTE v33[23]; // [esp+Ch] [ebp-5Ch] BYREF
  char v34; // [esp+23h] [ebp-45h]
  _WORD v35[3]; // [esp+28h] [ebp-40h] BYREF
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
  _BYTE *v47; // [esp+5Ch] [ebp-Ch]
  int v48; // [esp+60h] [ebp-8h]
  unsigned int v49; // [esp+64h] [ebp-4h]

  v7 = a3; /*0x7d987b*/
  v47 = v33; /*0x7d9883*/
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
    v9 = *v7; /*0x7d98ad*/
    if ( *v7 != 32 && v9 != 9 && v9 != 10 && v9 != 13 ) /*0x7d98c1*/
      break; /*0x7d98c1*/
    ++v7; /*0x7d98c3*/
  }
  while ( 2 )
  {
    v10 = *v7++; /*0x7d98c9*/
    switch ( v8 )
    {
      case 0:
        if ( v10 >= 49 && v10 <= 57 ) /*0x7d98e4*/
          goto LABEL_10; /*0x7d98e4*/
        if ( v10 == MEMORY[0x87C7A0][0] ) /*0x7d98f3*/
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
        if ( v10 == MEMORY[0x87C7A0][0] ) /*0x7d993e*/
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
          --v7; /*0x7d9b0b*/
        }
        else
        {
          if ( v10 == MEMORY[0x87C7A0][0] ) /*0x7d9996*/
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
        while ( (int)MEMORY[0x87C79C] <= 1
              ? *((_BYTE *)MEMORY[0x87C590] + 2 * (unsigned __int8)v10) & 4
              : _isctype((unsigned __int8)v10, 4) )
        {
          if ( v49 >= 0x19 ) /*0x7d99de*/
          {
            ++v48; /*0x7d99f0*/
          }
          else
          {
            v12 = v47; /*0x7d99e0*/
            ++v49; /*0x7d99e3*/
            ++v47; /*0x7d99e9*/
            *v12 = v10 - 48; /*0x7d99ec*/
          }
          v10 = *v7++; /*0x7d99f3*/
        }
        if ( v10 != MEMORY[0x87C7A0][0] ) /*0x7d99fe*/
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
            v10 = *v7++; /*0x7d9a1b*/
          }
        }
        while ( (int)MEMORY[0x87C79C] <= 1
              ? *((_BYTE *)MEMORY[0x87C590] + 2 * (unsigned __int8)v10) & 4
              : _isctype((unsigned __int8)v10, 4) )
        {
          if ( v49 < 0x19 ) /*0x7d9a4f*/
          {
            v14 = v47; /*0x7d9a51*/
            ++v49; /*0x7d9a54*/
            ++v47; /*0x7d9a5a*/
            --v48; /*0x7d9a5d*/
            *v14 = v10 - 48; /*0x7d9a60*/
          }
          v10 = *v7++; /*0x7d9a62*/
        }
LABEL_57:
        if ( v10 == 43 || v10 == 45 ) /*0x7d9a73*/
        {
LABEL_30:
          --v7; /*0x7d997a*/
          v32 = 11; /*0x7d997b*/
        }
        else
        {
LABEL_25:
          if ( v10 <= 67 || v10 > 69 && (v10 <= 99 || v10 > 101) ) /*0x7d996d*/
          {
LABEL_106:
            v17 = v7 - 1; /*0x7d9be5*/
            goto LABEL_108; /*0x7d9be6*/
          }
          v32 = 6; /*0x7d9973*/
        }
        goto LABEL_89; /*0x7d9975*/
      case 5:
        v41 = 1; /*0x7d9a84*/
        if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7d9a87*/
          v15 = *((_BYTE *)MEMORY[0x87C590] + 2 * (unsigned __int8)v10) & 4; /*0x7d9aa6*/
        else
          v15 = _isctype((unsigned __int8)v10, 4); /*0x7d9a8e*/
        if ( !v15 ) /*0x7d9aaa*/
          goto LABEL_91; /*0x7d9aaa*/
        v8 = 4; /*0x7d9ab0*/
        goto LABEL_81; /*0x7d9ab2*/
      case 6:
        v16 = v7 - 2; /*0x7d9ab4*/
        a3 = v7 - 2; /*0x7d9aba*/
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
          v10 = *v7++; /*0x7d9ae5*/
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
          if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7d9b72*/
            v19 = *((_BYTE *)MEMORY[0x87C590] + 2 * (unsigned __int8)v10) & 4; /*0x7d9b8f*/
          else
            v19 = _isctype((unsigned __int8)v10, 4); /*0x7d9b7a*/
          if ( v19 ) /*0x7d9b94*/
          {
            v18 = v10 + 10 * v18 - 48; /*0x7d9b9c*/
            if ( v18 <= 5200 ) /*0x7d9ba6*/
            {
              v10 = *v7++; /*0x7d9ba8*/
              continue; /*0x7d9bab*/
            }
            v18 = 5201; /*0x7d9bad*/
          }
          break;
        }
        v43 = v18; /*0x7d9bb2*/
        while ( (int)MEMORY[0x87C79C] <= 1
              ? *((_BYTE *)MEMORY[0x87C590] + 2 * (unsigned __int8)v10) & 4
              : _isctype((unsigned __int8)v10, 4) )
          v10 = *v7++; /*0x7d9be0*/
        goto LABEL_106; /*0x7d9bde*/
      case 11:
        if ( !a7 ) /*0x7d9b1c*/
        {
          v17 = v7 - 1; /*0x7d9b4a*/
          goto LABEL_108; /*0x7d9b4f*/
        }
        v16 = v7 - 1; /*0x7d9b21*/
        a3 = v7 - 1; /*0x7d9b27*/
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
        *a2 = v17; /*0x7d9bf1*/
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
            v22 = v47; /*0x7d9c16*/
          }
          else
          {
            if ( v34 >= 5 ) /*0x7d9c05*/
              ++v34; /*0x7d9c07*/
            v49 = 24; /*0x7d9c0a*/
            v22 = v47 - 1; /*0x7d9c10*/
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
              v27 = (__int16)a3; /*0x7d9c77*/
              v28 = (__int16)a3; /*0x7d9c7a*/
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
        *(_DWORD *)(a1 + 6) = v26; /*0x7d9cff*/
        *(_DWORD *)(a1 + 2) = v25; /*0x7d9d02*/
        *(_WORD *)(a1 + 10) = v29; /*0x7d9d05*/
        result = v45; /*0x7d9d09*/
        *(_WORD *)a1 = v28; /*0x7d9d0d*/
        return result;
    }
  }
}
}
} // namespace gamemd

// 0x7D9D43
namespace gamemd {
int __STRINGTOLD(int a1, char ** a2, char * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __STRINGTOLD(int a1, char **a2, char *a3, int a4)
{
  int v4; // esi
  unsigned __int16 v6[6]; // [esp+4h] [ebp-Ch] BYREF

  v4 = __strgtold12((int)v6, a2, a3, a4, 0, 0, 0); /*0x7d9d64*/
  if ( _ld12told(v6, a1) == 1 ) /*0x7d9d75*/
    return v4 | 2; /*0x7d9d77*/
  return v4; /*0x7d9d7c*/
}
}
} // namespace gamemd

// 0x7D9D7F
namespace gamemd {
int mbtowc(wchar_t * DstCh, const char * SrcCh, size_t SrcSizeInBytes)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
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
}
} // namespace gamemd

// 0x7D9DDC
namespace gamemd {
unsigned int _mbtowc_lk(LPWSTR lpWideCharStr, unsigned char * lpMultiByteStr, unsigned int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __cdecl _mbtowc_lk(LPWSTR lpWideCharStr, unsigned __int8 *lpMultiByteStr, unsigned int a3)
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
  if ( *((char *)MEMORY[0x87C590] + 2 * v3 + 1) >= 0 ) /*0x7d9e2e*/
  {
    if ( MultiByteToWideChar(CodePage, 9u, (LPCCH)lpMultiByteStr, 1, lpWideCharStr, lpWideCharStr != 0) ) /*0x7d9e95*/
      return 1; /*0x7d9e1e*/
    goto LABEL_18; /*0x7d9e9d*/
  }
  result = MEMORY[0x87C79C]; /*0x7d9e30*/
  if ( (int)MEMORY[0x87C79C] > 1 ) /*0x7d9e38*/
  {
    if ( (int)a3 >= (int)MEMORY[0x87C79C] ) /*0x7d9e3d*/
    {
      v5 = MultiByteToWideChar(CodePage, 9u, (LPCCH)lpMultiByteStr, MEMORY[0x87C79C], lpWideCharStr, lpWideCharStr != 0) == 0; /*0x7d9e5b*/
      result = MEMORY[0x87C79C]; /*0x7d9e5d*/
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
} // namespace gamemd

// 0x7D9EB0
namespace gamemd {
int __allshl()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __usercall _allshl@<eax>(__int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  __int64 v2; // rax

  if ( a2 >= 0x40u ) /*0x7d9eb3*/
  {
    LODWORD(v2) = 0; /*0x7d9eca*/
  }
  else if ( a2 >= 0x20u ) /*0x7d9eb8*/
  {
    LODWORD(v2) = 0; /*0x7d9ec2*/
  }
  else
  {
    return a1 << (a2 & 0x1F); /*0x7d9ebd*/
  }
  return v2; /*0x7d9ebf*/
}
}
} // namespace gamemd

// 0x7D9ECF
namespace gamemd {
int ungetc(int Character, FILE * Stream)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl ungetc(int Character, FILE *Stream)
{
  int v2; // esi

  _lock_file(Stream); /*0x7d9ed4*/
  v2 = ungetc_0(Character, Stream); /*0x7d9eea*/
  _unlock_file(Stream); /*0x7d9eec*/
  return v2; /*0x7d9ef6*/
}
}
} // namespace gamemd

// 0x7D9EF8
namespace gamemd {
int ungetc_0(int Character, FILE * Stream)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl ungetc_0(int Character, FILE *Stream)
{
  int flag; // eax
  int v4; // eax

  if ( Character == -1 ) /*0x7d9f01*/
    return -1; /*0x7d9f01*/
  flag = Stream->_flag; /*0x7d9f07*/
  if ( (flag & 1) == 0 && ((flag & 0x80u) == 0 || (flag & 2) != 0) ) /*0x7d9f14*/
    return -1; /*0x7d9f14*/
  if ( !Stream->_base ) /*0x7d9f16*/
    _getbuf(Stream); /*0x7d9f1d*/
  if ( Stream->_ptr == Stream->_base ) /*0x7d9f28*/
  {
    if ( Stream->_cnt ) /*0x7d9f2a*/
      return -1; /*0x7d9f49*/
    ++Stream->_ptr; /*0x7d9f31*/
  }
  if ( (Stream->_flag & 0x40) != 0 ) /*0x7d9f37*/
  {
    if ( *--Stream->_ptr != (_BYTE)Character ) /*0x7d9f3f*/
    {
      ++Stream->_ptr; /*0x7d9f42*/
      return -1; /*0x7d9f42*/
    }
  }
  else
  {
    *--Stream->_ptr = Character; /*0x7d9f4e*/
  }
  v4 = Stream->_flag; /*0x7d9f50*/
  ++Stream->_cnt; /*0x7d9f53*/
  LOBYTE(v4) = v4 & 0xEE | 1; /*0x7d9f58*/
  Stream->_flag = v4; /*0x7d9f5a*/
  return (unsigned __int8)Character; /*0x7d9f47*/
}
}
} // namespace gamemd

// 0x7D9F66
namespace gamemd {
LONG ___CxxUnhandledExceptionFilter_YGJPAU_EXCEPTION_POINTERS___Z(struct _EXCEPTION_POINTERS * ExceptionInfo)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall ___CxxUnhandledExceptionFilter_YGJPAU_EXCEPTION_POINTERS___Z(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax

  ExceptionRecord = ExceptionInfo->ExceptionRecord; /*0x7d9f6b*/
  if ( ExceptionInfo->ExceptionRecord->ExceptionCode == -529697949 /*0x7d9f82*/
    && ExceptionRecord->NumberParameters == 3
    && ExceptionRecord->ExceptionInformation[0] == 429065504 )
  {
    _terminate_YAXXZ(); /*0x7d9f84*/
  }
  if ( unk_B7856C && __ValidateExecute_YAHP6GHXZ_Z((FARPROC)unk_B7856C) ) /*0x7d9f93*/
    return unk_B7856C(ExceptionInfo); /*0x7d9f9e*/
  else
    return 0; /*0x7d9fa6*/
}
}
} // namespace gamemd

// 0x7D9FAC
namespace gamemd {
int LONG(__stdcall *sub_7D9FAC())(struct _EXCEPTION_POINTERS * ExceptionInfo)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG (__stdcall *sub_7D9FAC())(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  LONG (__stdcall *result)(struct _EXCEPTION_POINTERS *); // eax

  result = SetUnhandledExceptionFilter(___CxxUnhandledExceptionFilter_YGJPAU_EXCEPTION_POINTERS___Z); /*0x7d9fb1*/
  unk_B7856C = result; /*0x7d9fb7*/
  return result; /*0x7d9fbc*/
}
}
} // namespace gamemd

// 0x7D9FBD
namespace gamemd {
LPTOP_LEVEL_EXCEPTION_FILTER sub_7D9FBD()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LPTOP_LEVEL_EXCEPTION_FILTER sub_7D9FBD()
{
  return SetUnhandledExceptionFilter(unk_B7856C); /*0x7d9fc9*/
}
}
} // namespace gamemd

// 0x7D9FCA
namespace gamemd {
int _flswbuf(unsigned short Buf, FILE * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _flswbuf(unsigned __int16 Buf, FILE *a2)
{
  FILE *v2; // esi
  int flag; // eax
  int file; // ecx
  int v5; // eax
  char *base; // eax
  signed int v7; // edi
  _BYTE *v8; // eax
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
      LOBYTE(flag) = flag & 0xFE; /*0x7da000*/
      v2->_ptr = v2->_base; /*0x7da002*/
      v2->_flag = flag; /*0x7da004*/
      goto LABEL_6; /*0x7da004*/
    }
LABEL_25:
    LOBYTE(flag) = flag | 0x20; /*0x7da0e3*/
    v2->_flag = flag; /*0x7da0e5*/
    return 0xFFFF; /*0x7da0e5*/
  }
LABEL_6:
  v5 = v2->_flag; /*0x7da007*/
  v2->_cnt = 0; /*0x7da00a*/
  a2 = 0; /*0x7da00f*/
  LOBYTE(v5) = v5 & 0xED | 2; /*0x7da012*/
  v2->_flag = v5; /*0x7da018*/
  if ( (v5 & 0x10C) == 0 ) /*0x7da01b*/
  {
    if ( v2 != &File && v2 != (FILE *)&unk_87BF90 || !_isatty(file) ) /*0x7da02e*/
      _getbuf(v2); /*0x7da039*/
    file = v11; /*0x7da03f*/
  }
  if ( (v2->_flag & 0x108) != 0 ) /*0x7da049*/
  {
    base = v2->_base; /*0x7da04b*/
    v7 = v2->_ptr - base; /*0x7da050*/
    v2->_ptr = base + 2; /*0x7da055*/
    v2->_cnt = v2->_bufsiz - 2; /*0x7da05e*/
    if ( v7 <= 0 ) /*0x7da061*/
    {
      if ( file == -1 ) /*0x7da076*/
        v8 = &MEMORY[0x87C928]; /*0x7da091*/
      else
        v8 = (_BYTE *)(dword_B78A80[file >> 5] + 36 * (file & 0x1F)); /*0x7da08c*/
      if ( (v8[4] & 0x20) != 0 ) /*0x7da09a*/
        _lseek(file, 0, 2); /*0x7da0a0*/
    }
    else
    {
      a2 = (FILE *)_write(file, base, v7); /*0x7da06e*/
    }
    v9 = Buf; /*0x7da0ab*/
    *(_WORD *)v2->_base = Buf; /*0x7da0ae*/
  }
  else
  {
    v9 = Buf; /*0x7da0b3*/
    v7 = 2; /*0x7da0b8*/
    a2 = (FILE *)_write(file, &Buf, 2u); /*0x7da0cb*/
  }
  if ( a2 == (FILE *)v7 ) /*0x7da0d2*/
    return v9; /*0x7da0e1*/
  v2->_flag |= 0x20u; /*0x7da0d4*/
  return 0xFFFF; /*0x7da0ed*/
}
}
} // namespace gamemd

// 0x7DA0F1
namespace gamemd {
BOOL __crtGetStringTypeW(DWORD dwInfoType, CCINIClass * aP1, int cchSrc, CCINIClass * aP3, UINT CodePage, LCID Locale)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __cdecl __crtGetStringTypeW(
        DWORD dwInfoType,
        CCINIClass *aP1,
        int cchSrc,
        CCINIClass *aP3,
        UINT CodePage,
        LCID Locale)
{
  int v6; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  void *v11; // esp
  int v12; // eax
  void *v13; // esp
  CampaignScore *v14; // eax
  WORD *v15; // esi
  WORD v16[6]; // [esp+0h] [ebp-38h] BYREF
  LPSTR lpMultiByteStr; // [esp+Ch] [ebp-2Ch]
  int v18; // [esp+10h] [ebp-28h]
  WORD *v19; // [esp+14h] [ebp-24h]
  BOOL StringTypeA; // [esp+18h] [ebp-20h]
  WORD CharType; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v6 = unk_B78570; /*0x7da117*/
  if ( !unk_B78570 ) /*0x7da120*/
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, &CharType) ) /*0x7da130*/
    {
      v6 = 1; /*0x7da13a*/
    }
    else
    {
      if ( !GetStringTypeA(0, 1u, byte_7F98E4, 1, &CharType) ) /*0x7da152*/
        return 0; /*0x7da152*/
      v6 = 2; /*0x7da15a*/
    }
    unk_B78570 = v6; /*0x7da15b*/
  }
  if ( v6 == 1 ) /*0x7da163*/
    return GetStringTypeW(dwInfoType, (LPCWCH)aP1, cchSrc, (LPWORD)aP3); /*0x7da177*/
  if ( v6 == 2 ) /*0x7da17f*/
  {
    if ( !CodePage ) /*0x7da188*/
      CodePage = ::CodePage; /*0x7da18f*/
    v8 = WideCharToMultiByte(CodePage, 0x220u, (LPCWCH)aP1, cchSrc, 0, 0, 0, 0); /*0x7da1a4*/
    v9 = v8; /*0x7da1aa*/
    v18 = v8; /*0x7da1ac*/
    if ( v8 ) /*0x7da1b1*/
    {
      v10 = v8 + 3; /*0x7da1ba*/
      LOBYTE(v10) = v10 & 0xFC; /*0x7da1bd*/
      v11 = alloca(v10); /*0x7da1bf*/
      ms_exc.old_esp = (DWORD)v16; /*0x7da1c4*/
      lpMultiByteStr = (LPSTR)v16; /*0x7da1c9*/
      memset(v16, 0, (AbstractClass *)v9); /*0x7da1cf*/
      ms_exc.registration.TryLevel = -1; /*0x7da1d7*/
      if ( lpMultiByteStr ) /*0x7da1f3*/
      {
        if ( WideCharToMultiByte(CodePage, 0x220u, (LPCWCH)aP1, cchSrc, lpMultiByteStr, v9, 0, 0) ) /*0x7da20d*/
        {
          v12 = 2 * v9 + 5; /*0x7da226*/
          LOBYTE(v12) = v12 & 0xFC; /*0x7da229*/
          v13 = alloca(v12); /*0x7da22b*/
          ms_exc.old_esp = (DWORD)v16; /*0x7da230*/
          v19 = v16; /*0x7da235*/
          ms_exc.registration.TryLevel = -1; /*0x7da245*/
          if ( v16 ) /*0x7da24b*/
          {
            v14 = (CampaignScore *)Locale; /*0x7da24d*/
            if ( !Locale ) /*0x7da252*/
              v14 = dword_B782A0; /*0x7da254*/
            v15 = &v16[cchSrc]; /*0x7da25f*/
            *v15 = -1; /*0x7da262*/
            *(v15 - 1) = -1; /*0x7da267*/
            StringTypeA = GetStringTypeA((LCID)v14, dwInfoType, lpMultiByteStr, v18, v16); /*0x7da27e*/
            if ( *(v15 - 1) != 0xFFFF && *v15 == 0xFFFF ) /*0x7da28e*/
            {
              memcpy(aP3, (AbstractClass *)v16, 2 * cchSrc); /*0x7da295*/
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
} // namespace gamemd

// 0x7DA2B6
namespace gamemd {
int __crtLCMapStringW(CampaignScore * aP0, CampaignScore * aP1, CampaignScore * aP2, int cchSrc, CampaignScore * aP4, CampaignScore * aP5, CampaignScore * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __crtLCMapStringW(
        CampaignScore *aP0,
        CampaignScore *aP1,
        CampaignScore *aP2,
        int cchSrc,
        CampaignScore *aP4,
        CampaignScore *aP5,
        CampaignScore *aP6)
{
  int v8; // eax
  int v9; // eax
  void *v10; // esp
  int v11; // eax
  CampaignScore *v12; // edi
  int v13; // eax
  void *v14; // esp
  CampaignScore *v15; // eax
  int v16; // eax
  CHAR v17[12]; // [esp+0h] [ebp-38h] BYREF
  int v18; // [esp+Ch] [ebp-2Ch]
  CHAR *v19; // [esp+14h] [ebp-24h]
  int cbMultiByte; // [esp+18h] [ebp-20h]
  LPSTR lpMultiByteStr; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  if ( !unk_B78574 ) /*0x7da2e4*/
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, 0, 0) ) /*0x7da2f8*/
    {
      unk_B78574 = 1; /*0x7da302*/
    }
    else
    {
      if ( !LCMapStringA(0, 0x100u, byte_7F98E4, 1, 0, 0) ) /*0x7da31c*/
        return 0; /*0x7da31c*/
      unk_B78574 = 2; /*0x7da322*/
    }
  }
  if ( cchSrc > 0 ) /*0x7da32f*/
    cchSrc = wcsncnt_0(aP2, cchSrc); /*0x7da33e*/
  if ( unk_B78574 == 1 ) /*0x7da349*/
    return LCMapStringW((LCID)aP0, (DWORD)aP1, (LPCWSTR)aP2, cchSrc, (LPWSTR)aP4, (int)aP5); /*0x7da363*/
  if ( unk_B78574 == 2 ) /*0x7da36b*/
  {
    if ( !aP6 ) /*0x7da374*/
      aP6 = (CampaignScore *)CodePage; /*0x7da37b*/
    v8 = WideCharToMultiByte((UINT)aP6, 0x220u, (LPCWCH)aP2, cchSrc, 0, 0, 0, 0); /*0x7da390*/
    cbMultiByte = v8; /*0x7da396*/
    if ( v8 ) /*0x7da39b*/
    {
      v9 = v8 + 3; /*0x7da3a4*/
      LOBYTE(v9) = v9 & 0xFC; /*0x7da3a7*/
      v10 = alloca(v9); /*0x7da3a9*/
      ms_exc.old_esp = (DWORD)v17; /*0x7da3ae*/
      lpMultiByteStr = v17; /*0x7da3b3*/
      ms_exc.registration.TryLevel = -1; /*0x7da3c4*/
      if ( v17 ) /*0x7da3cb*/
      {
        if ( WideCharToMultiByte((UINT)aP6, 0x220u, (LPCWCH)aP2, cchSrc, lpMultiByteStr, cbMultiByte, 0, 0) ) /*0x7da3e7*/
        {
          v11 = LCMapStringA((LCID)aP0, (DWORD)aP1, lpMultiByteStr, cbMultiByte, 0, 0); /*0x7da403*/
          v12 = (CampaignScore *)v11; /*0x7da409*/
          v18 = v11; /*0x7da40b*/
          if ( v11 ) /*0x7da410*/
          {
            v13 = v11 + 3; /*0x7da41d*/
            LOBYTE(v13) = v13 & 0xFC; /*0x7da420*/
            v14 = alloca(v13); /*0x7da422*/
            ms_exc.old_esp = (DWORD)v17; /*0x7da427*/
            v19 = v17; /*0x7da42c*/
            ms_exc.registration.TryLevel = -1; /*0x7da42f*/
            if ( v17 ) /*0x7da449*/
            {
              if ( LCMapStringA((LCID)aP0, (DWORD)aP1, lpMultiByteStr, cbMultiByte, v17, (int)v12) ) /*0x7da459*/
              {
                if ( (BYTE1(aP1) & 4) != 0 ) /*0x7da467*/
                {
                  v15 = aP5; /*0x7da469*/
                  if ( aP5 ) /*0x7da46e*/
                  {
                    if ( (int)aP5 >= (int)v12 ) /*0x7da472*/
                      v15 = v12; /*0x7da474*/
                    strncpy(aP4->__pad_0, v17, (IUnknown *)v15); /*0x7da47b*/
                  }
                  return (int)v12->__pad_0; /*0x7da483*/
                }
                if ( aP5 ) /*0x7da488*/
                  v16 = MultiByteToWideChar((UINT)aP6, 1u, v17, (int)v12, (LPWSTR)aP4, (int)aP5); /*0x7da49b*/
                else
                  v16 = MultiByteToWideChar((UINT)aP6, 1u, v17, (int)v12, 0, 0); /*0x7da48c*/
                v12 = (CampaignScore *)v16; /*0x7da4a1*/
                if ( v16 ) /*0x7da4a5*/
                  return (int)v12->__pad_0; /*0x7da4a9*/
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
} // namespace gamemd

// 0x7DA4BF
namespace gamemd {
int wcsncnt_0(CampaignScore * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl wcsncnt_0(CampaignScore *aP0, int a2)
{
  CampaignScore *v2; // eax
  int v3; // ecx
  int v4; // esi

  v2 = aP0; /*0x7da4c3*/
  v3 = a2 - 1; /*0x7da4ca*/
  if ( a2 ) /*0x7da4cd*/
  {
    do /*0x7da4dc*/
    {
      if ( !*(_WORD *)v2->__pad_0 ) /*0x7da4cf*/
        break; /*0x7da4d3*/
      v4 = v3; /*0x7da4d6*/
      v2 = (CampaignScore *)((char *)v2 + 2); /*0x7da4d8*/
      --v3; /*0x7da4d9*/
    }
    while ( v4 ); /*0x7da4dc*/
  }
  if ( *(_WORD *)v2->__pad_0 ) /*0x7da4de*/
    return a2; /*0x7da4ec*/
  else
    return ((char *)v2 - (char *)aP0) >> 1; /*0x7da4e9*/
}
}
} // namespace gamemd

// 0x7DA4EF
namespace gamemd {
wint_t fgetwc_0x7DA4EF(FILE * Stream)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wint_t __cdecl fgetwc(FILE *Stream)
{
  wint_t v1; // di

  _lock_file(Stream); /*0x7da4f6*/
  v1 = _getwc_lk(Stream); /*0x7da502*/
  _unlock_file(Stream); /*0x7da504*/
  return v1; /*0x7da50f*/
}
}
} // namespace gamemd

// 0x7DA512
namespace gamemd {
short _getwc_lk(FILE * File)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __cdecl _getwc_lk(FILE *File)
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
  if ( (File->_flag & 0x40) != 0
    || (File->_file == -1
      ? (v2 = (char *)&MEMORY[0x87C928])
      : (v2 = (char *)(dword_B78A80[File->_file >> 5] + 36 * (File->_file & 0x1F))),
        v2[4] >= 0) )
  {
    v3 = File->_cnt - 2 < 0; /*0x7da5e6*/
    File->_cnt -= 2; /*0x7da5e6*/
    if ( v3 ) /*0x7da5ea*/
    {
      return _filwbuf(v1); /*0x7da5f9*/
    }
    else
    {
      result = *(_WORD *)v1->_ptr; /*0x7da5ee*/
      v1->_ptr += 2; /*0x7da5f4*/
    }
  }
  else
  {
    v3 = --File->_cnt < 0; /*0x7da553*/
    v4 = 1; /*0x7da558*/
    if ( v3 ) /*0x7da559*/
      v5 = _filbuf(v1); /*0x7da566*/
    else
      v5 = *(unsigned __int8 *)v1->_ptr++; /*0x7da55d*/
    if ( v5 == -1 ) /*0x7da56f*/
      return -1; /*0x7da56f*/
    SrcCh[0] = v5; /*0x7da580*/
    if ( *((char *)MEMORY[0x87C590] + 2 * (unsigned __int8)v5 + 1) < 0 ) /*0x7da58b*/
    {
      v3 = --v1->_cnt < 0; /*0x7da58d*/
      if ( v3 ) /*0x7da590*/
        v7 = _filbuf(v1); /*0x7da59d*/
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
    return HIWORD(File); /*0x7da5e0*/
  }
  return result; /*0x7da5ff*/
}
}
} // namespace gamemd

// 0x7DA638
namespace gamemd {
short _ungetwc_lk(wchar_t MbCh, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __cdecl _ungetwc_lk(wchar_t MbCh, _DWORD *a2)
{
  wchar_t v2; // bx
  _DWORD *v3; // esi
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
    || (v3[4] == -1
      ? (v6 = (char *)&MEMORY[0x87C928])
      : (v6 = (char *)(dword_B78A80[(int)v3[4] >> 5] + 36 * (v3[4] & 0x1F))),
        v6[4] >= 0) )
  {
    if ( *v3 == v3[2] ) /*0x7da6fe*/
    {
      if ( v3[1] ) /*0x7da700*/
        return -1; /*0x7da704*/
      *v3 += 2; /*0x7da709*/
    }
    v3[1] += 2; /*0x7da70b*/
    LOBYTE(v5) = v5 & 0xEE | 1; /*0x7da711*/
    *v3 -= 2; /*0x7da713*/
    v3[3] = v5; /*0x7da716*/
    *(_WORD *)*v3 = v2; /*0x7da71b*/
    return *(_WORD *)*v3; /*0x7da720*/
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
      *(_BYTE *)--*v3 = HIBYTE(MbCh); /*0x7da6dc*/
    *(_BYTE *)--*v3 = MbCh; /*0x7da6e5*/
    v3[1] += v7; /*0x7da6e7*/
    v9 = v3[3]; /*0x7da6ea*/
    LOBYTE(v9) = v9 & 0xEE | 1; /*0x7da6ef*/
    v3[3] = v9; /*0x7da6f1*/
    return v2; /*0x7da6f4*/
  }
}
}
} // namespace gamemd

// 0x7DA725
namespace gamemd {
int __crtCompareStringA(LCID Locale, DWORD dwCmpFlags, CHAR * lpString1, int cchCount1, CHAR * lpString2, int cchCount2, UINT CodePage)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __crtCompareStringA(
        LCID Locale,
        DWORD dwCmpFlags,
        CHAR *lpString1,
        int cchCount1,
        CHAR *lpString2,
        int cchCount2,
        UINT CodePage)
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
    if ( CompareStringW(0, 0, &SrcStr, 1, &SrcStr, 1) ) /*0x7da763*/
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
    v7 = (int)strncnt_0(lpString1, cchCount1); /*0x7da7aa*/
  if ( cchCount2 > 0 ) /*0x7da7b2*/
    cchCount2 = (int)strncnt_0(lpString2, cchCount2); /*0x7da7c1*/
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
              if ( (unsigned __int8)*lpString1 >= *LeadByte && (unsigned __int8)*lpString1 <= v10 ) /*0x7da861*/
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
            if ( (unsigned __int8)*lpString2 >= *i && (unsigned __int8)*lpString2 <= v12 ) /*0x7da892*/
              return 2; /*0x7da892*/
          }
        }
        return 1; /*0x7da81f*/
      }
    }
    v13 = MultiByteToWideChar(CodePage, 9u, lpString1, v7, 0, 0); /*0x7da8ae*/
    cchWideChar = v13; /*0x7da8b4*/
    if ( v13 ) /*0x7da8b9*/
    {
      v14 = 2 * v13 + 3; /*0x7da8c4*/
      LOBYTE(v14) = v14 & 0xFC; /*0x7da8c7*/
      v15 = alloca(v14); /*0x7da8c9*/
      ms_exc.old_esp = (DWORD)v21; /*0x7da8ce*/
      lpWideCharStr = v21; /*0x7da8d3*/
      ms_exc.registration.TryLevel = -1; /*0x7da8d6*/
      if ( v21 ) /*0x7da8f5*/
      {
        if ( MultiByteToWideChar(CodePage, 1u, lpString1, v7, lpWideCharStr, cchWideChar) ) /*0x7da90f*/
        {
          v16 = MultiByteToWideChar(CodePage, 9u, lpString2, cchCount2, 0, 0); /*0x7da922*/
          v17 = v16; /*0x7da924*/
          v25 = v16; /*0x7da926*/
          if ( v16 ) /*0x7da92b*/
          {
            v18 = 2 * v16 + 3; /*0x7da933*/
            LOBYTE(v18) = v18 & 0xFC; /*0x7da936*/
            v19 = alloca(v18); /*0x7da938*/
            ms_exc.old_esp = (DWORD)v21; /*0x7da93d*/
            v23 = v21; /*0x7da942*/
            ms_exc.registration.TryLevel = -1; /*0x7da945*/
            if ( v21 ) /*0x7da95f*/
            {
              if ( MultiByteToWideChar(CodePage, 1u, lpString2, cchCount2, v21, v17) ) /*0x7da96e*/
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
} // namespace gamemd

// 0x7DA9A2
namespace gamemd {
unsigned char * strncnt_0(unsigned char * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__cdecl strncnt_0(_BYTE *a1, int a2)
{
  _BYTE *v2; // eax
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
    return (_BYTE *)a2; /*0x7da9ca*/
  else
    return (_BYTE *)(v2 - a1); /*0x7da9c5*/
}
}
} // namespace gamemd

// 0x7DA9CD
namespace gamemd {
int __crtsetenv(char * Str, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __crtsetenv(char *Str, int a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // esi
  void *v4; // eax
  BOOL v5; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // edi
  void *v13; // eax
  size_t v14; // eax
  char *v15; // eax
  CHAR *v16; // esi
  unsigned __int8 *v17; // eax
  void *v18; // [esp-4h] [ebp-18h]
  unsigned __int8 *v19; // [esp+Ch] [ebp-8h]
  void *Block; // [esp+10h] [ebp-4h]

  if ( !Str ) /*0x7da9da*/
    return -1; /*0x7da9da*/
  v2 = _mbschr((const unsigned __int8 *)Str, 0x3Du); /*0x7da9e1*/
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
  v10 = findenv((unsigned __int8 *)Str, v3 - (unsigned __int8 *)Str); /*0x7daa7f*/
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
    *((_DWORD *)v13 + v11) = Str; /*0x7daaf4*/
    *((_DWORD *)v13 + v11 + 1) = 0; /*0x7daaf7*/
    goto LABEL_30; /*0x7daaf7*/
  }
  return 0; /*0x7daa34*/
}
}
} // namespace gamemd

// 0x7DAB54
namespace gamemd {
int findenv(unsigned char * Str1, size_t MaxCount)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl findenv(unsigned __int8 *Str1, size_t MaxCount)
{
  char *v2; // esi
  const unsigned __int8 *v3; // eax
  char v4; // al

  v2 = (char *)dword_B781E4; /*0x7dab55*/
  v3 = *(const unsigned __int8 **)dword_B781E4; /*0x7dab5c*/
  if ( !*(_DWORD *)dword_B781E4 ) /*0x7dab5c*/
    return -((v2 - (_BYTE *)dword_B781E4) >> 2); /*0x7dab8f*/
  while ( 1 ) /*0x7dab6c*/
  {
    if ( !_mbsnbicoll(Str1, v3, MaxCount) ) /*0x7dab6c*/
    {
      v4 = *(_BYTE *)(*(_DWORD *)v2 + MaxCount); /*0x7dab7a*/
      if ( v4 == 61 || !v4 ) /*0x7dab83*/
        break; /*0x7dab83*/
    }
    v3 = (const unsigned __int8 *)*((_DWORD *)v2 + 1); /*0x7dab85*/
    v2 += 4; /*0x7dab88*/
    if ( !v3 ) /*0x7dab8d*/
      return -((v2 - (_BYTE *)dword_B781E4) >> 2); /*0x7dab8d*/
  }
  return (v2 - (_BYTE *)dword_B781E4) >> 2; /*0x7dab9c*/
}
}
} // namespace gamemd

// 0x7DABAC
namespace gamemd {
unsigned int * copy_environ(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl copy_environ(_DWORD *a1)
{
  int v1; // ecx
  int *v3; // eax
  int v4; // edx
  _DWORD *v5; // esi
  _DWORD *v6; // ebp
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
}
} // namespace gamemd

// 0x7DAC6C
namespace gamemd {
int _chsize_lk(int FileHandle, LONG lDistanceToMove)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _chsize_lk(int FileHandle, LONG lDistanceToMove)
{
  int v2; // esi
  DWORD v3; // eax
  int v4; // edi
  DWORD v5; // eax
  int v6; // eax
  void *osfhandle; // eax
  BOOL v8; // eax
  DWORD LastError; // edi
  _BYTE Buffer[4096]; // [esp+8h] [ebp-1004h] BYREF
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
    memset(Buffer, 0, (AbstractClass *)0x1000); /*0x7dacc7*/
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
} // namespace gamemd

// 0x7DADA2
namespace gamemd {
int _ismbbkprint(unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbbkprint(unsigned int C)
{
  return CRTisctype(C, 0, 3u); /*0x7dadb2*/
}
}
} // namespace gamemd

// 0x7DADB3
namespace gamemd {
int _ismbbkpunct(unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbbkpunct(unsigned int C)
{
  return CRTisctype(C, 0, 2u); /*0x7dadc3*/
}
}
} // namespace gamemd

// 0x7DADC4
namespace gamemd {
int _ismbbalnum(unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbbalnum(unsigned int C)
{
  return CRTisctype(C, 263, 1u); /*0x7dadd7*/
}
}
} // namespace gamemd

// 0x7DADD8
namespace gamemd {
int _ismbbalpha(unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbbalpha(unsigned int C)
{
  return CRTisctype(C, 259, 1u); /*0x7dadeb*/
}
}
} // namespace gamemd

// 0x7DADEC
namespace gamemd {
int _ismbbgraph(unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbbgraph(unsigned int C)
{
  return CRTisctype(C, 279, 3u); /*0x7dadff*/
}
}
} // namespace gamemd

// 0x7DAE00
namespace gamemd {
int _ismbbprint(unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbbprint(unsigned int C)
{
  return CRTisctype(C, 343, 3u); /*0x7dae13*/
}
}
} // namespace gamemd

// 0x7DAE14
namespace gamemd {
int _ismbbpunct(unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbbpunct(unsigned int C)
{
  return CRTisctype(C, 16, 2u); /*0x7dae24*/
}
}
} // namespace gamemd

// 0x7DAE25
namespace gamemd {
int _ismbblead(unsigned int Ch)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbblead(unsigned int Ch)
{
  return CRTisctype(Ch, 0, 4u); /*0x7dae35*/
}
}
} // namespace gamemd

// 0x7DAE36
namespace gamemd {
int _ismbbtrail(unsigned int Ch)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbbtrail(unsigned int Ch)
{
  return CRTisctype(Ch, 0, 8u); /*0x7dae46*/
}
}
} // namespace gamemd

// 0x7DAE47
namespace gamemd {
int _ismbbkana(unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ismbbkana(unsigned int C)
{
  return dword_B78840 == 932 && CRTisctype(C, 0, 3u); /*0x7dae6a*/
}
}
} // namespace gamemd

// 0x7DAE6E
namespace gamemd {
int isctype_CRT(unsigned char a1, int a2, unsigned char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl isctype_CRT(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int result; // eax

  if ( (a3 & (unsigned __int8)byte_B78961[a1]) != 0 ) /*0x7dae7d*/
    return 1; /*0x7dae7d*/
  result = a2 ? (unsigned __int16)(a2 & MEMORY[0x87C598][a1 + 1]) : 0;
  if ( result ) /*0x7dae98*/
    return 1; /*0x7dae9d*/
  return result; /*0x7dae9a*/
}
}
} // namespace gamemd

// 0x7DAE9F
namespace gamemd {
int __crtMessageBoxA(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __crtMessageBoxA(int a1, int a2, int a3)
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
    dword_B78580 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(LibraryA, "MessageBoxA"); /*0x7daecd*/
    if ( !dword_B78580 ) /*0x7daed2*/
      return 0; /*0x7daf24*/
    dword_B78584 = GetProcAddress(v5, "GetActiveWindow"); /*0x7daee2*/
    dword_B78588 = (int (__stdcall *)(_DWORD))GetProcAddress(v5, "GetLastActivePopup"); /*0x7daee9*/
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
} // namespace gamemd

// 0x7DAF28
namespace gamemd {
int __getlocaleinfo(int a1, LCID Locale, LCTYPE LCType, CCINIClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __getlocaleinfo(int a1, LCID Locale, LCTYPE LCType, CCINIClass *aP3)
{
  CCINIClass *p_Source; // edi
  AbstractClass *LocaleInfoA; // esi
  AbstractClass *v6; // eax
  int v7; // esi
  CCINIClass *v8; // eax
  char *v9; // eax
  WCHAR *v11; // esi
  unsigned __int8 v12; // bl
  int v13; // eax
  CCINIClass Source; // [esp+Ch] [ebp-80h] BYREF
  int v15; // [esp+94h] [ebp+8h]

  if ( a1 == 1 ) /*0x7daf38*/
  {
    p_Source = &Source; /*0x7daf4a*/
    v15 = 0; /*0x7daf50*/
    LocaleInfoA = (AbstractClass *)__crtGetLocaleInfoA(Locale, LCType, &Source, 128, 0); /*0x7daf5b*/
    if ( !LocaleInfoA ) /*0x7daf62*/
    {
      if ( GetLastError() != 122 ) /*0x7daf6d*/
        return -1; /*0x7daf6d*/
      v6 = (AbstractClass *)__crtGetLocaleInfoA(Locale, LCType, 0, 0, 0); /*0x7daf78*/
      v7 = (int)v6; /*0x7daf7d*/
      if ( !v6 ) /*0x7daf84*/
        return -1; /*0x7daf84*/
      v8 = (CCINIClass *)malloc(v6); /*0x7daf87*/
      p_Source = v8; /*0x7daf8c*/
      if ( !v8 ) /*0x7daf91*/
        return -1; /*0x7daf91*/
      v15 = 1; /*0x7daf96*/
      LocaleInfoA = (AbstractClass *)__crtGetLocaleInfoA(Locale, LCType, v8, v7, 0); /*0x7dafa8*/
      if ( !LocaleInfoA ) /*0x7dafaf*/
        goto LABEL_9; /*0x7dafaf*/
    }
    v9 = (char *)malloc(LocaleInfoA); /*0x7dafb2*/
    *(_DWORD *)aP3->__pad_0 = v9; /*0x7dafbd*/
    if ( !v9 ) /*0x7dafbf*/
    {
      if ( !v15 ) /*0x7dafc4*/
        return -1; /*0x7dafd4*/
LABEL_9:
      free(p_Source); /*0x7dafc6*/
      return -1; /*0x7dafc7*/
    }
    strncpy(v9, p_Source->__pad_0, (IUnknown *)LocaleInfoA); /*0x7dafd8*/
    if ( v15 ) /*0x7dafe3*/
      free(p_Source); /*0x7dafe6*/
  }
  else
  {
    if ( a1 ) /*0x7daff2*/
      return -1; /*0x7daff2*/
    v11 = &LCData; /*0x7daff6*/
    if ( !__crtGetLocaleInfoW(Locale, LCType, &LCData, 4, 0) ) /*0x7db004*/
      return -1; /*0x7db00e*/
    aP3->__pad_0[0] = 0; /*0x7db013*/
    do /*0x7db057*/
    {
      v12 = *(_BYTE *)v11; /*0x7db01d*/
      if ( *(int *)&stru_87C374.__pad_3BC[108] <= 1 ) /*0x7db01f*/
        v13 = *(_BYTE *)(stru_87C374.field_21C + 2 * v12) & 4; /*0x7db03c*/
      else
        v13 = _isctype(v12, 4); /*0x7db027*/
      if ( !v13 ) /*0x7db041*/
        break; /*0x7db041*/
      ++v11; /*0x7db04e*/
      aP3->__pad_0[0] = v12 + 10 * aP3->__pad_0[0] - 48; /*0x7db04f*/
    }
    while ( (int)v11 < (int)word_B78594 ); /*0x7db057*/
  }
  return 0; /*0x7dafd0*/
}
}
} // namespace gamemd

// 0x7DB060
namespace gamemd {
CCINIClass * sub_7DB060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_7DB060()
{
  return *(CCINIClass **)&stru_87C374.__pad_1258[84]; /*0x7db065*/
}
}
} // namespace gamemd

// 0x7DB066
namespace gamemd {
int __addl(unsigned int a1, unsigned int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __addl(unsigned int a1, unsigned int a2, unsigned int *a3)
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
}
} // namespace gamemd

// 0x7DB087
namespace gamemd {
int __add_12(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __add_12(unsigned int *a1, unsigned int *a2)
{
  if ( __addl(*a1, *a2, a1) && __addl(a1[1], 1u, a1 + 1) ) /*0x7db0aa*/
    ++a1[2]; /*0x7db0b6*/
  if ( __addl(a1[1], a2[1], a1 + 1) ) /*0x7db0c2*/
    ++a1[2]; /*0x7db0ce*/
  return __addl(a1[2], a2[2], a1 + 2); /*0x7db0e2*/
}
}
} // namespace gamemd

// 0x7DB0E5
namespace gamemd {
unsigned int * __shl_12(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int *__cdecl __shl_12(unsigned int *a1)
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
}
} // namespace gamemd

// 0x7DB113
namespace gamemd {
int * __shr_12(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__cdecl __shr_12(int *a1)
{
  unsigned int v2; // edx
  int v3; // edi
  int v4; // ecx

  v2 = a1[2]; /*0x7db119*/
  v3 = a1[1]; /*0x7db121*/
  a1[1] = *(__int64 *)(a1 + 1) >> 1; /*0x7db12a*/
  v4 = (v3 << 31) | ((unsigned int)*a1 >> 1); /*0x7db136*/
  a1[2] = v2 >> 1; /*0x7db139*/
  *a1 = v4; /*0x7db13c*/
  return a1; /*0x7db138*/
}
}
} // namespace gamemd

// 0x7DB140
namespace gamemd {
short __mtold12(char * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __cdecl __mtold12(char *a1, int a2, int a3)
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
  *(_DWORD *)a3 = 0; /*0x7db159*/
  *(_DWORD *)(a3 + 4) = 0; /*0x7db15b*/
  *(_DWORD *)(a3 + 8) = 0; /*0x7db15e*/
  if ( a2 ) /*0x7db161*/
  {
    v12 = a2; /*0x7db164*/
    do /*0x7db1af*/
    {
      v8 = *(_DWORD *)a3; /*0x7db16c*/
      v9 = *(_DWORD *)(a3 + 4); /*0x7db16d*/
      v10 = *(_DWORD *)(a3 + 8); /*0x7db16f*/
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
  while ( !*(_DWORD *)(a3 + 8) ) /*0x7db1b7*/
  {
    v4 = *(_DWORD *)(a3 + 4); /*0x7db1b9*/
    *(_DWORD *)(a3 + 8) = HIWORD(v4); /*0x7db1c1*/
    v5 = (v4 << 16) | HIWORD(*(_DWORD *)a3); /*0x7db1ce*/
    v6 = *(_DWORD *)a3 << 16; /*0x7db1d0*/
    v11 += 65520; /*0x7db1d3*/
    *(_DWORD *)(a3 + 4) = v5; /*0x7db1da*/
    *(_DWORD *)a3 = v6; /*0x7db1dd*/
  }
  while ( (*(_DWORD *)(a3 + 8) & 0x8000) == 0 ) /*0x7db1e9*/
  {
    __shl_12((unsigned int *)a3); /*0x7db1ec*/
    v11 += 0xFFFF; /*0x7db1f1*/
  }
  result = v11; /*0x7db1fb*/
  *(_WORD *)(a3 + 10) = v11; /*0x7db200*/
  return result; /*0x7db1ff*/
}
}
} // namespace gamemd

// 0x7DB207
namespace gamemd {
int _I10_OUTPUT(long long a1, int a2, int a3, char a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _I10_OUTPUT(__int64 a1, int a2, int a3, char a4, int a5)
{
  int v5; // ebx
  __int16 v6; // cx
  unsigned __int16 v7; // dx
  int v8; // edi
  int v9; // esi
  bool v10; // zf
  int v11; // edi
  int v12; // esi
  int i; // esi
  int v14; // eax
  char v15; // al
  _BYTE *v16; // ecx
  char v17; // cl
  _BYTE *v18; // eax
  bool v19; // cc
  _BYTE *v20; // ecx
  char v21; // al
  _BYTE v23[12]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v24[12]; // [esp+18h] [ebp-10h] BYREF
  int v25; // [esp+24h] [ebp-4h]

  v5 = a5; /*0x7db211*/
  v6 = a2 & 0x8000; /*0x7db21c*/
  memset(v23, 204, 10); /*0x7db228*/
  v23[10] = -5; /*0x7db250*/
  v23[11] = 63; /*0x7db254*/
  v25 = 1; /*0x7db258*/
  v7 = a2 & 0x7FFF; /*0x7db25f*/
  if ( (a2 & 0x8000u) == 0 ) /*0x7db261*/
    *(_BYTE *)(a5 + 2) = 32; /*0x7db269*/
  else
    *(_BYTE *)(a5 + 2) = 45; /*0x7db263*/
  v8 = HIDWORD(a1); /*0x7db26d*/
  if ( !v7 && !a1 ) /*0x7db277*/
    goto LABEL_6; /*0x7db277*/
  if ( v7 == 0x7FFF ) /*0x7db296*/
  {
    *(_WORD *)v5 = 1; /*0x7db29d*/
    if ( (v8 != 0x80000000 || (_DWORD)a1) && (v8 & 0x40000000) == 0 ) /*0x7db2b2*/
    {
      strcpy((char *)(v5 + 4), "1#SNAN"); /*0x7db2b9*/
LABEL_22:
      *(_BYTE *)(v5 + 3) = 6; /*0x7db30a*/
      return 0; /*0x7db310*/
    }
    if ( v6 && v8 == -1073741824 ) /*0x7db2c6*/
    {
      if ( !(_DWORD)a1 ) /*0x7db2cc*/
      {
        strcpy((char *)(v5 + 4), "1#IND"); /*0x7db2d3*/
LABEL_19:
        *(_BYTE *)(v5 + 3) = 5; /*0x7db2ed*/
        return 0; /*0x7db2f7*/
      }
    }
    else if ( v8 == 0x80000000 && !(_DWORD)a1 ) /*0x7db2dd*/
    {
      strcpy((char *)(v5 + 4), "1#INF"); /*0x7db2e8*/
      goto LABEL_19; /*0x7db2e8*/
    }
    strcpy((char *)(v5 + 4), "1#QNAN"); /*0x7db305*/
    goto LABEL_22; /*0x7db305*/
  }
  *(_WORD *)v24 = 0; /*0x7db325*/
  *(_WORD *)&v24[10] = v7; /*0x7db32f*/
  v9 = (77 * (HIBYTE(v7) + 2 * HIBYTE(HIDWORD(a1))) + 19728 * v7 - 323162868) >> 16; /*0x7db343*/
  *(_QWORD *)&v24[2] = a1; /*0x7db346*/
  __multtenpow12(v24, -(__int16)v9, 1); /*0x7db353*/
  if ( *(_WORD *)&v24[10] >= 0x3FFFu ) /*0x7db361*/
  {
    LOWORD(v9) = v9 + 1; /*0x7db366*/
    __ld12mul(v24, v23); /*0x7db36c*/
  }
  v10 = (a4 & 1) == 0; /*0x7db373*/
  *(_WORD *)v5 = v9; /*0x7db377*/
  if ( v10 ) /*0x7db37a*/
  {
    v11 = a3; /*0x7db38d*/
    goto LABEL_29; /*0x7db38d*/
  }
  v11 = (__int16)v9 + a3; /*0x7db382*/
  if ( v11 > 0 ) /*0x7db386*/
  {
LABEL_29:
    if ( v11 > 21 ) /*0x7db393*/
      v11 = 21; /*0x7db397*/
    v12 = *(unsigned __int16 *)&v24[10] - 16382; /*0x7db39c*/
    *(_WORD *)&v24[10] = 0; /*0x7db3a2*/
    a5 = 8; /*0x7db3a7*/
    do /*0x7db3bb*/
    {
      __shl_12(v24); /*0x7db3b2*/
      --a5; /*0x7db3b7*/
    }
    while ( a5 ); /*0x7db3bb*/
    if ( v12 < 0 ) /*0x7db3bf*/
    {
      for ( i = (unsigned __int8)-(char)v12; i; --i ) /*0x7db3c9*/
        __shr_12(v24); /*0x7db3cf*/
    }
    v14 = v5 + 4; /*0x7db3db*/
    a5 = v5 + 4; /*0x7db3e0*/
    if ( v11 + 1 > 0 ) /*0x7db3e3*/
    {
      a3 = v11 + 1; /*0x7db3e5*/
      do /*0x7db430*/
      {
        a1 = *(_QWORD *)v24; /*0x7db3ee*/
        a2 = *(_DWORD *)&v24[8]; /*0x7db3f4*/
        __shl_12(v24); /*0x7db3f5*/
        __shl_12(v24); /*0x7db3fe*/
        __add_12(v24, &a1); /*0x7db40b*/
        __shl_12(v24); /*0x7db414*/
        v15 = v24[11]; /*0x7db419*/
        v16 = (_BYTE *)a5; /*0x7db41c*/
        v24[11] = 0; /*0x7db41f*/
        ++a5; /*0x7db428*/
        v10 = a3-- == 1; /*0x7db42b*/
        *v16 = v15 + 48; /*0x7db42e*/
      }
      while ( !v10 ); /*0x7db430*/
      v14 = a5; /*0x7db432*/
    }
    v17 = *(_BYTE *)(v14 - 1); /*0x7db435*/
    v18 = (_BYTE *)(v14 - 2); /*0x7db439*/
    v19 = v17 < 53; /*0x7db43a*/
    v20 = (_BYTE *)(v5 + 4); /*0x7db43d*/
    if ( v19 ) /*0x7db440*/
    {
      while ( v18 >= v20 ) /*0x7db474*/
      {
        if ( *v18 != 48 ) /*0x7db479*/
        {
          if ( v18 >= v20 ) /*0x7db480*/
            goto LABEL_47; /*0x7db480*/
          break; /*0x7db480*/
        }
        --v18; /*0x7db47b*/
      }
      *(_WORD *)v5 = 0; /*0x7db482*/
      *(_BYTE *)(v5 + 2) = 32; /*0x7db486*/
      *(_BYTE *)(v5 + 3) = 1; /*0x7db48a*/
      *v20 = 48; /*0x7db48e*/
      goto LABEL_54; /*0x7db48e*/
    }
    while ( v18 >= v20 ) /*0x7db444*/
    {
      if ( *v18 != 57 ) /*0x7db449*/
      {
        if ( v18 >= v20 ) /*0x7db453*/
          goto LABEL_46; /*0x7db453*/
        break; /*0x7db453*/
      }
      *v18-- = 48; /*0x7db44b*/
    }
    ++v18; /*0x7db455*/
    ++*(_WORD *)v5; /*0x7db456*/
LABEL_46:
    ++*v18; /*0x7db459*/
LABEL_47:
    v21 = (_BYTE)v18 - v5 - 3; /*0x7db45b*/
    *(_BYTE *)(v5 + 3) = v21; /*0x7db45f*/
    *(_BYTE *)(v21 + v5 + 4) = 0; /*0x7db465*/
    return v25; /*0x7db471*/
  }
LABEL_6:
  *(_WORD *)v5 = 0; /*0x7db27e*/
  *(_BYTE *)(v5 + 2) = 32; /*0x7db282*/
  *(_BYTE *)(v5 + 3) = 1; /*0x7db286*/
  *(_BYTE *)(v5 + 4) = 48; /*0x7db28a*/
LABEL_54:
  *(_BYTE *)(v5 + 5) = 0; /*0x7db491*/
  return 1; /*0x7db46d*/
}
}
} // namespace gamemd

// 0x7DB49A
namespace gamemd {
double _handle_qnan1(int a1, double a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _handle_qnan1(int a1, double a2, int a3)
{
  if ( MEMORY[0x87D700] ) /*0x7db4a4*/
  {
    *_errno() = 33; /*0x7db4d9*/
    _ctrlfp(a3, 0xFFFF); /*0x7db4e2*/
  }
  else
  {
    _umatherr( /*0x7db4c5*/
      1,
      a1,
      SLODWORD(a2),
      SHIDWORD(a2),
      COERCE_UNSIGNED_INT64(0.0),
      HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
      a2,
      a3);
  }
  return a2; /*0x7db4cd*/
}
}
} // namespace gamemd

// 0x7DB4EE
namespace gamemd {
double _handle_qnan2(int a1, double a2, double a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _handle_qnan2(int a1, double a2, double a3, int a4)
{
  double v6; // [esp+1Ch] [ebp-8h]

  v6 = a2 + a3; /*0x7db500*/
  if ( MEMORY[0x87D700] ) /*0x7db503*/
  {
    *_errno() = 33; /*0x7db539*/
    _ctrlfp(a4, 0xFFFF); /*0x7db542*/
    return v6; /*0x7db547*/
  }
  else
  {
    _umatherr(1, a1, SLODWORD(a2), SHIDWORD(a2), SLODWORD(a3), SHIDWORD(a3), v6, a4); /*0x7db525*/
    return a2; /*0x7db518*/
  }
}
}
} // namespace gamemd

// 0x7DB54E
namespace gamemd {
double _except1(DWORD dwExceptionCode, int a2, double a3, double a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _except1(DWORD dwExceptionCode, int a2, double a3, double a4, int a5)
{
  int v5; // eax
  double result; // st7
  ULONG_PTR Arguments[14]; // [esp+1Ch] [ebp-58h] BYREF
  int v8; // [esp+54h] [ebp-20h]

  if ( !_handle_exc(dwExceptionCode, &a4, a5) ) /*0x7db55e*/
  {
    v8 &= ~1u; /*0x7db56d*/
    _raise_exc((ULONG_PTR)Arguments, (int)&a5, dwExceptionCode, a2, (int)&a3, (int)&a4); /*0x7db584*/
  }
  v5 = _errcode(dwExceptionCode); /*0x7db58f*/
  if ( MEMORY[0x87D700] || !v5 ) /*0x7db5a0*/
  {
    _set_errno(v5); /*0x7db5cb*/
    _ctrlfp(a5, 0xFFFF); /*0x7db5da*/
    return a4; /*0x7db5df*/
  }
  else
  {
    result = a3; /*0x7db5b4*/
    _umatherr( /*0x7db5c0*/
      v5,
      a2,
      SLODWORD(a3),
      SHIDWORD(a3),
      COERCE_UNSIGNED_INT64(0.0),
      HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
      a4,
      a5);
  }
  return result; /*0x7db5c8*/
}
}
} // namespace gamemd

// 0x7DB5E6
namespace gamemd {
double _except2(DWORD dwExceptionCode, int a2, double a3, double a4, double a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _except2(DWORD dwExceptionCode, int a2, double a3, double a4, double a5, int a6)
{
  int v6; // eax
  int v7; // eax
  double result; // st7
  ULONG_PTR Arguments[10]; // [esp+1Ch] [ebp-58h] BYREF
  double v10; // [esp+44h] [ebp-30h]
  int v11; // [esp+54h] [ebp-20h]

  if ( !_handle_exc(dwExceptionCode, &a5, a6) ) /*0x7db5f6*/
  {
    v6 = v11; /*0x7db602*/
    LOBYTE(v6) = v11 & 0xE0 | 3; /*0x7db607*/
    v11 = v6; /*0x7db609*/
    v10 = a4; /*0x7db620*/
    _raise_exc((ULONG_PTR)Arguments, (int)&a6, dwExceptionCode, a2, (int)&a3, (int)&a5); /*0x7db628*/
  }
  v7 = _errcode(dwExceptionCode); /*0x7db633*/
  if ( MEMORY[0x87D700] || !v7 ) /*0x7db644*/
  {
    _set_errno(v7); /*0x7db670*/
    _ctrlfp(a6, 0xFFFF); /*0x7db67f*/
    return a5; /*0x7db684*/
  }
  else
  {
    result = a3; /*0x7db659*/
    _umatherr(v7, a2, SLODWORD(a3), SHIDWORD(a3), SLODWORD(a4), SHIDWORD(a4), a5, a6); /*0x7db665*/
  }
  return result; /*0x7db66d*/
}
}
} // namespace gamemd

// 0x7DB68B
namespace gamemd {
int _raise_exc(ULONG_PTR Arguments, unsigned int * a2, DWORD dwExceptionCode, short a4, double * a5, double * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _raise_exc(
        ULONG_PTR Arguments,
        unsigned int *a2,
        DWORD dwExceptionCode,
        __int16 a4,
        double *a5,
        double *a6)
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

  *(_DWORD *)(Arguments + 4) = 0; /*0x7db695*/
  *(_DWORD *)(Arguments + 8) = 0; /*0x7db69e*/
  *(_DWORD *)(Arguments + 12) = 0; /*0x7db6a5*/
  v6 = dwExceptionCode; /*0x7db6a8*/
  if ( (dwExceptionCode & 0x10) != 0 ) /*0x7db6ae*/
  {
    dwExceptionCode = -1073741681; /*0x7db6b3*/
    *(_DWORD *)(Arguments + 4) |= 1u; /*0x7db6ba*/
  }
  if ( (v6 & 2) != 0 ) /*0x7db6c0*/
  {
    dwExceptionCode = -1073741677; /*0x7db6c5*/
    *(_DWORD *)(Arguments + 4) |= 2u; /*0x7db6cc*/
  }
  if ( (v6 & 1) != 0 ) /*0x7db6d2*/
  {
    dwExceptionCode = -1073741679; /*0x7db6d7*/
    *(_DWORD *)(Arguments + 4) |= 4u; /*0x7db6de*/
  }
  if ( (v6 & 4) != 0 ) /*0x7db6e5*/
  {
    dwExceptionCode = -1073741682; /*0x7db6ea*/
    *(_DWORD *)(Arguments + 4) |= 8u; /*0x7db6f1*/
  }
  if ( (v6 & 8) != 0 ) /*0x7db6f8*/
  {
    dwExceptionCode = -1073741680; /*0x7db6fd*/
    *(_DWORD *)(Arguments + 4) |= 0x10u; /*0x7db704*/
  }
  v7 = a2; /*0x7db708*/
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFEF | (16 * ((*a2 & 1) == 0)); /*0x7db722*/
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFF7 | (2 * (~(unsigned __int8)*v7 & 4)); /*0x7db739*/
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFFB | (~*v7 >> 1) & 4; /*0x7db750*/
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFFD | (~*v7 >> 3) & 2; /*0x7db767*/
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFFE | (~*v7 >> 5) & 1; /*0x7db77e*/
  v8 = _statfp(); /*0x7db781*/
  if ( (v8 & 1) != 0 ) /*0x7db788*/
    *(_DWORD *)(Arguments + 12) |= 0x10u; /*0x7db78d*/
  if ( (v8 & 4) != 0 ) /*0x7db793*/
    *(_DWORD *)(Arguments + 12) |= 8u; /*0x7db798*/
  if ( (v8 & 8) != 0 ) /*0x7db79e*/
    *(_DWORD *)(Arguments + 12) |= 4u; /*0x7db7a3*/
  if ( (v8 & 0x10) != 0 ) /*0x7db7a9*/
    *(_DWORD *)(Arguments + 12) |= 2u; /*0x7db7ae*/
  if ( (v8 & 0x20) != 0 ) /*0x7db7b3*/
    *(_DWORD *)(Arguments + 12) |= 1u; /*0x7db7b8*/
  v9 = *v7 & 0xC00; /*0x7db7c2*/
  switch ( v9 ) /*0x7db7c4*/
  {
    case 0: /*0x7db7c4*/
      *(_DWORD *)Arguments &= 0xFFFFFFFC; /*0x7db7fd*/
      break; /*0x7db7fd*/
    case 1024: /*0x7db7c4*/
      v10 = (unsigned int *)Arguments; /*0x7db7ec*/
      v11 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1; /*0x7db7f4*/
      goto LABEL_28; /*0x7db7f4*/
    case 2048: /*0x7db7c4*/
      v10 = (unsigned int *)Arguments; /*0x7db7e0*/
      v11 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2; /*0x7db7e8*/
LABEL_28:
      *v10 = v11; /*0x7db7f6*/
      break; /*0x7db7f8*/
    case 3072: /*0x7db7c4*/
      *(_DWORD *)Arguments |= 3u; /*0x7db7db*/
      break;
  }
  v12 = *v7 & 0x300; /*0x7db800*/
  switch ( v12 ) /*0x7db809*/
  {
    case 0: /*0x7db809*/
      v13 = (unsigned int *)Arguments; /*0x7db82b*/
      v14 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8; /*0x7db833*/
      goto LABEL_36; /*0x7db833*/
    case 512: /*0x7db809*/
      v13 = (unsigned int *)Arguments; /*0x7db81e*/
      v14 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4; /*0x7db826*/
LABEL_36:
      *v13 = v14; /*0x7db836*/
      break; /*0x7db836*/
    case 768: /*0x7db809*/
      *(_DWORD *)Arguments &= 0xFFFFFFE3; /*0x7db819*/
      break;
  }
  *(_DWORD *)Arguments = *(_DWORD *)Arguments & 0xFFFE001F | (32 * (a4 & 0xFFF)); /*0x7db838*/
  *(_DWORD *)(Arguments + 32) |= 1u; /*0x7db856*/
  *(_DWORD *)(Arguments + 32) = *(_DWORD *)(Arguments + 32) & 0xFFFFFFE1 | 2; /*0x7db864*/
  *(double *)(Arguments + 16) = *a5; /*0x7db86f*/
  *(_DWORD *)(Arguments + 80) |= 1u; /*0x7db875*/
  v15 = a6; /*0x7db883*/
  *(_DWORD *)(Arguments + 80) = *(_DWORD *)(Arguments + 80) & 0xFFFFFFE1 | 2; /*0x7db886*/
  *(double *)(Arguments + 64) = *v15; /*0x7db88e*/
  _clrfp(); /*0x7db891*/
  RaiseException(dwExceptionCode, 0, 1u, &Arguments); /*0x7db8a0*/
  result = Arguments; /*0x7db8a6*/
  if ( (*(_BYTE *)(Arguments + 8) & 0x10) != 0 ) /*0x7db8ad*/
    *v7 &= ~1u; /*0x7db8af*/
  if ( (*(_BYTE *)(result + 8) & 8) != 0 ) /*0x7db8b6*/
    *v7 &= ~4u; /*0x7db8b8*/
  if ( (*(_BYTE *)(result + 8) & 4) != 0 ) /*0x7db8bf*/
    *v7 &= ~8u; /*0x7db8c1*/
  if ( (*(_BYTE *)(result + 8) & 2) != 0 ) /*0x7db8c8*/
    *v7 &= ~0x10u; /*0x7db8ca*/
  if ( (*(_BYTE *)(result + 8) & 1) != 0 ) /*0x7db8d0*/
    *v7 &= ~0x20u; /*0x7db8d2*/
  v17 = *(_DWORD *)result & 3; /*0x7db8dc*/
  if ( !v17 ) /*0x7db8e2*/
  {
    *v7 &= 0xFFFFF3FF; /*0x7db909*/
    goto LABEL_56; /*0x7db909*/
  }
  v18 = v17 - 1; /*0x7db8e4*/
  if ( !v18 ) /*0x7db8e5*/
  {
    v20 = *v7; /*0x7db8fd*/
    BYTE1(v20) = BYTE1(*v7) & 0xF3 | 4; /*0x7db902*/
    goto LABEL_54; /*0x7db902*/
  }
  v19 = v18 - 1; /*0x7db8e7*/
  if ( !v19 ) /*0x7db8e8*/
  {
    v20 = *v7; /*0x7db8f3*/
    BYTE1(v20) = BYTE1(*v7) & 0xF3 | 8; /*0x7db8f8*/
LABEL_54:
    *v7 = v20; /*0x7db905*/
    goto LABEL_56; /*0x7db907*/
  }
  if ( v19 == 1 ) /*0x7db8eb*/
    *((_BYTE *)v7 + 1) |= 0xCu; /*0x7db8ed*/
LABEL_56:
  v21 = (*(_DWORD *)result >> 2) & 7; /*0x7db90b*/
  if ( !v21 ) /*0x7db916*/
  {
    v23 = *v7 & 0xFFFFF3FF; /*0x7db92d*/
    BYTE1(v23) |= 3u; /*0x7db92f*/
    goto LABEL_62; /*0x7db92f*/
  }
  v22 = v21 - 1; /*0x7db918*/
  if ( !v22 ) /*0x7db919*/
  {
    v23 = *v7 & 0xFFFFF3FF; /*0x7db924*/
    BYTE1(v23) |= 2u; /*0x7db926*/
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
} // namespace gamemd

// 0x7DB93E
namespace gamemd {
BOOL _handle_exc(char a1, double * a2, short a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __cdecl _handle_exc(char a1, double *a2, __int16 a3)
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
    _set_statfp(1); /*0x7db95b*/
    v3 = a1 & 0x17; /*0x7db961*/
    goto LABEL_46; /*0x7db964*/
  }
  if ( (a1 & 4) != 0 && (a3 & 4) != 0 ) /*0x7db971*/
  {
    _set_statfp(4); /*0x7db975*/
    v3 = a1 & 0x1B; /*0x7db97b*/
    goto LABEL_46; /*0x7db97e*/
  }
  if ( (a1 & 1) != 0 && (a3 & 8) != 0 ) /*0x7db98f*/
  {
    _set_statfp(8); /*0x7db997*/
    v4 = a3 & 0xC00; /*0x7db9a5*/
    if ( (a3 & 0xC00) != 0 ) /*0x7db9a7*/
    {
      switch ( v4 ) /*0x7db9b3*/
      {
        case 1024: /*0x7db9b3*/
          v5 = a2; /*0x7dba0d*/
          if ( *a2 <= 0.0 ) /*0x7dba1b*/
            v7 = -MEMORY[0x87D550]; /*0x7dba2b*/
          else
            v7 = MEMORY[0x87D560]; /*0x7dba1d*/
          break;
        case 2048: /*0x7db9b3*/
          v5 = a2; /*0x7db9e5*/
          if ( *a2 <= 0.0 ) /*0x7db9f3*/
            v7 = -MEMORY[0x87D560]; /*0x7dba03*/
          else
            v7 = MEMORY[0x87D550]; /*0x7db9f5*/
          break;
        case 3072: /*0x7db9b3*/
          v5 = a2; /*0x7db9c5*/
          v7 = MEMORY[0x87D560]; /*0x7db9d0*/
          if ( v8 != 0 || v9 != 0 ) /*0x7db9d8*/
            v7 = -MEMORY[0x87D560]; /*0x7db9db*/
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
      v7 = MEMORY[0x87D550]; /*0x7dba40*/
      if ( v11 != 0 || v12 != 0 ) /*0x7dba48*/
        v7 = -MEMORY[0x87D550]; /*0x7dba4b*/
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
        v16 = BYTE6(v20) & 0xF; /*0x7dbada*/
        LOBYTE(v16) = v16 | 0x10; /*0x7dbadd*/
        HIWORD(v20) = v16; /*0x7dbadf*/
        if ( v14 < -1021 ) /*0x7dbaea*/
        {
          v17 = -1021 - v14; /*0x7dbaec*/
          do /*0x7dbb09*/
          {
            if ( (LOBYTE(v20) & 1) != 0 && !v13 ) /*0x7dbaf5*/
              v13 = 1; /*0x7dbaf7*/
            LODWORD(v20) >>= 1; /*0x7dbaf9*/
            if ( (BYTE4(v20) & 1) != 0 ) /*0x7dbaff*/
              BYTE3(v20) |= 0x80u; /*0x7dbb01*/
            HIDWORD(v20) >>= 1; /*0x7dbb05*/
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
      _set_statfp(16); /*0x7dbb2a*/
    v3 = a1 & 0x1D; /*0x7dbb30*/
  }
LABEL_46:
  if ( (a1 & 0x10) != 0 && (a3 & 0x20) != 0 ) /*0x7dbb3d*/
  {
    _set_statfp(32); /*0x7dbb41*/
    v3 &= ~0x10u; /*0x7dbb47*/
  }
  return v3 == 0; /*0x7dbb4e*/
}
}
} // namespace gamemd

// 0x7DBB55
namespace gamemd {
double _umatherr(int Value, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl _umatherr(int Value, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
  if ( _get_fname(a2) ) /*0x7dbb5e*/
  {
    _ctrlfp(a8, 0xFFFF); /*0x7dbb9e*/
    if ( !ReturnNull5() ) /*0x7dbba7*/
      _set_errno(Value); /*0x7dbbb4*/
    return a7; /*0x7dbbba*/
  }
  else
  {
    _ctrlfp(a8, 0xFFFF); /*0x7dbbc8*/
    _set_errno(Value); /*0x7dbbd0*/
    return a7; /*0x7dbbd5*/
  }
}
}
} // namespace gamemd

// 0x7DBBDD
namespace gamemd {
errno_t _set_errno(int Value)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
errno_t __cdecl _set_errno(int Value)
{
  errno_t result; // eax

  result = Value; /*0x7dbbdd*/
  if ( Value == 1 ) /*0x7dbbe4*/
  {
    result = (errno_t)_errno(); /*0x7dbbf9*/
    *(_DWORD *)result = 33; /*0x7dbbfe*/
  }
  else if ( Value > 1 && Value <= 3 ) /*0x7dbbeb*/
  {
    result = (errno_t)_errno(); /*0x7dbbed*/
    *(_DWORD *)result = 34; /*0x7dbbf2*/
  }
  return result; /*0x7dbbf8*/
}
}
} // namespace gamemd

// 0x7DBC05
namespace gamemd {
_UNKNOWN ** _get_fname(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_UNKNOWN **__cdecl _get_fname(int a1)
{
  int v1; // ecx
  int *v2; // eax

  v1 = 0; /*0x7dbc05*/
  v2 = (int *)&MEMORY[0x87D628]; /*0x7dbc07*/
  while ( *v2 != a1 ) /*0x7dbc12*/
  {
    v2 += 2; /*0x7dbc14*/
    ++v1; /*0x7dbc17*/
    if ( (int)v2 >= (int)&MEMORY[0x87D700] ) /*0x7dbc1d*/
      return 0; /*0x7dbc21*/
  }
  return (&MEMORY[0x87D62C])[2 * v1]; /*0x7dbc21*/
}
}
} // namespace gamemd

// 0x7DBC2A
namespace gamemd {
int _errcode(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _errcode(char a1)
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
}
} // namespace gamemd

// 0x7DBC5A
namespace gamemd {
int __statfp()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __usercall _statfp@<eax>(__int16 a1@<fpstat>)
{
  return a1; /*0x7dbc66*/
}
}
} // namespace gamemd

// 0x7DBC68
namespace gamemd {
int __clrfp()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __usercall _clrfp@<eax>(__int16 a1@<fpstat>)
{
  __asm { fnclex } /*0x7dbc6f*/
  return a1; /*0x7dbc75*/
}
}
} // namespace gamemd

// 0x7DBCF0
namespace gamemd {
double ldexp(double X, int Y)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl ldexp(double X, int Y)
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
  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 ) /*0x7dbd1a*/
  {
    v5 = _sptype(SLODWORD(X), SHIDWORD(X)); /*0x7dbd21*/
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
    v14 = _copysign(MEMORY[0x87D550], v7); /*0x7dbdf7*/
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
} // namespace gamemd

// 0x7DBED6
namespace gamemd {
int __ld12mul(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __ld12mul(int a1, int a2)
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

  v4 = *(_WORD *)(a2 + 10); /*0x7dbee4*/
  v15 = 0; /*0x7dbeeb*/
  memset(v13, 0, sizeof(v13)); /*0x7dbeee*/
  v5 = *(_WORD *)(a1 + 10); /*0x7dbef7*/
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
      *(_DWORD *)(a1 + 8) = 0; /*0x7dbf79*/
      *(_DWORD *)(a1 + 4) = 0; /*0x7dbf7c*/
      *(_DWORD *)a1 = 0; /*0x7dbf7f*/
      return result; /*0x7dbf81*/
    }
    if ( (_WORD)result || (++v20, (*(_DWORD *)(a1 + 8) & 0x7FFFFFFF) != 0) ) /*0x7dbf4f*/
    {
      result = 0; /*0x7dbf61*/
    }
    else
    {
      result = 0; /*0x7dbf51*/
      if ( !*(_DWORD *)(a1 + 4) && !*(_DWORD *)a1 ) /*0x7dbf58*/
        goto LABEL_45; /*0x7dbf5a*/
    }
    if ( !(_WORD)v8 ) /*0x7dbf66*/
    {
      ++v20; /*0x7dbf68*/
      if ( (*(_DWORD *)(a2 + 8) & 0x7FFFFFFF) == 0 && !*(_DWORD *)(a2 + 4) && !*(_DWORD *)a2 ) /*0x7dbf75*/
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
          ++*(_WORD *)v19; /*0x7dbfda*/
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
          LOBYTE(v13[0]) |= 1u; /*0x7dc062*/
      }
    }
    if ( LOWORD(v13[0]) > 0x8000u || (v13[0] & 0x1FFFF) == 0x18000 ) /*0x7dc07b*/
    {
      if ( *(unsigned int *)((char *)v13 + 2) == -1 ) /*0x7dc081*/
      {
        *(unsigned int *)((char *)v13 + 2) = 0; /*0x7dc083*/
        if ( *(unsigned int *)((char *)&v13[1] + 2) == -1 ) /*0x7dc08b*/
        {
          *(unsigned int *)((char *)&v13[1] + 2) = 0; /*0x7dc08d*/
          if ( HIWORD(v13[2]) == 0xFFFF ) /*0x7dc097*/
          {
            ++v21; /*0x7dc099*/
            HIWORD(v13[2]) = 0x8000; /*0x7dc09c*/
          }
          else
          {
            ++HIWORD(v13[2]); /*0x7dc0a4*/
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
      *(_WORD *)a1 = HIWORD(v13[0]); /*0x7dc0c1*/
      *(_DWORD *)(a1 + 2) = v13[1]; /*0x7dc0c7*/
      *(_DWORD *)(a1 + 6) = v13[2]; /*0x7dc0cd*/
LABEL_45:
      *(_WORD *)(a1 + 10) = result; /*0x7dc0d0*/
      return result; /*0x7dc0d4*/
    }
  }
  *(_DWORD *)(a1 + 4) = 0; /*0x7dc0db*/
  *(_DWORD *)a1 = 0; /*0x7dc0eb*/
  *(_DWORD *)(a1 + 8) = (_WORD)v9 != 0 ? -32768 : 2147450880;
  return result; /*0x7dc0f1*/
}
}
} // namespace gamemd

// 0x7DC0F6
namespace gamemd {
void __multtenpow12(unsigned short * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl __multtenpow12(_WORD *a1, int a2, int a3)
{
  char *v3; // ebx
  char v4; // al
  int v5; // eax
  char *v6; // esi
  _DWORD *v7; // esi
  __int64 v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-4h]

  v3 = (char *)&MEMORY[0x87D720] - 96; /*0x7dc104*/
  if ( a2 ) /*0x7dc10a*/
  {
    if ( a2 < 0 ) /*0x7dc10c*/
    {
      a2 = -a2; /*0x7dc118*/
      v3 = (char *)&MEMORY[0x87D880] - 96; /*0x7dc11b*/
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
        if ( *(_WORD *)v6 >= 0x8000u ) /*0x7dc14d*/
        {
          LODWORD(v8) = *(_DWORD *)v6; /*0x7dc152*/
          v7 = v6 + 4; /*0x7dc152*/
          HIDWORD(v8) = *v7; /*0x7dc153*/
          v9 = v7[1]; /*0x7dc154*/
          --*(_DWORD *)((char *)&v8 + 2); /*0x7dc155*/
          v6 = (char *)&v8; /*0x7dc158*/
        }
        __ld12mul((int)a1, (int)v6); /*0x7dc15f*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x7DC1AA
namespace gamemd {
BOOL __ValidateExecute_YAHP6GHXZ_Z(FARPROC lpfn)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __cdecl __ValidateExecute_YAHP6GHXZ_Z(FARPROC lpfn)
{
  return !IsBadCodePtr(lpfn); /*0x7dc1c0*/
}
}
} // namespace gamemd

// 0x7DC1C2
namespace gamemd {
void  __noreturn _terminate_YAXXZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl __noreturn _terminate_YAXXZ()
{
  ObjectClass *v0; // eax

  if ( *(_DWORD *)(_getptd() + 96) ) /*0x7dc1f1*/
  {
    v0 = (ObjectClass *)_getptd(); /*0x7dc1fd*/
    ((void (*)(void))v0->customSound_controller[4])(); /*0x7dc202*/
  }
  _NMSG_WRITE(0xAu); /*0x7dc6fc*/
  raise(22); /*0x7dc703*/
  _exit(3); /*0x7dc70c*/
}
}
} // namespace gamemd

// 0x7DC223
namespace gamemd {
void  __noreturn _unexpected_YAXXZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl __noreturn _unexpected_YAXXZ()
{
  int v0; // eax

  if ( *(_DWORD *)(_getptd() + 100) ) /*0x7dc228*/
  {
    v0 = _getptd(); /*0x7dc22e*/
    (*(void (**)(void))(v0 + 100))(); /*0x7dc233*/
  }
  _terminate_YAXXZ(); /*0x7dc236*/
}
}
} // namespace gamemd

// 0x7DC291
namespace gamemd {
int _filwbuf(unsigned short ** a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _filwbuf(unsigned __int16 **a1)
{
  unsigned __int16 *v1; // eax
  unsigned int v2; // eax
  unsigned __int16 *v3; // edx
  _BYTE *v4; // edi
  unsigned __int16 *v5; // ecx
  unsigned __int16 *v6; // ecx
  int result; // eax

  v1 = a1[3]; /*0x7dc296*/
  if ( ((unsigned __int8)v1 & 0x83) == 0 || ((unsigned __int8)v1 & 0x40) != 0 ) /*0x7dc2a3*/
    return 0xFFFF; /*0x7dc2a3*/
  if ( ((unsigned __int8)v1 & 2) != 0 ) /*0x7dc2ab*/
  {
    LOBYTE(v1) = (unsigned __int8)v1 | 0x20; /*0x7dc2ad*/
    a1[3] = v1; /*0x7dc2af*/
    return 0xFFFF; /*0x7dc371*/
  }
  LOBYTE(v1) = (unsigned __int8)v1 | 1; /*0x7dc2b7*/
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
       ? &MEMORY[0x87C928]
       : (_BYTE *)(dword_B78A80[(int)a1[4] >> 5] + 36 * ((unsigned int)a1[4] & 0x1F));
    if ( (v4[4] & 0x82) == 0x82 ) /*0x7dc329*/
    {
      BYTE1(v3) |= 0x20u; /*0x7dc32b*/
      a1[3] = v3; /*0x7dc32e*/
    }
  }
  if ( a1[6] == (unsigned __int16 *)512 ) /*0x7dc338*/
  {
    v5 = a1[3]; /*0x7dc33a*/
    if ( ((unsigned __int8)v5 & 8) != 0 && (BYTE1(v5) & 4) == 0 ) /*0x7dc345*/
      a1[6] = (unsigned __int16 *)4096; /*0x7dc347*/
  }
  v6 = *a1; /*0x7dc34e*/
  a1[1] = (unsigned __int16 *)(v2 - 2); /*0x7dc353*/
  result = *v6; /*0x7dc356*/
  *a1 = v6 + 1; /*0x7dc35c*/
  return result; /*0x7dc35e*/
}
}
} // namespace gamemd

// 0x7DC378
namespace gamemd {
unsigned char * _mbschr(const unsigned char * Str, unsigned int C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 *__cdecl _mbschr(const unsigned __int8 *Str, unsigned int C)
{
  const unsigned __int8 *i; // esi
  unsigned __int16 v4; // bx
  unsigned __int8 v5; // al

  if ( !dword_B7885C ) /*0x7dc384*/
    return (unsigned __int8 *)strchr((const char *)Str, C); /*0x7dc38c*/
  _lock(25); /*0x7dc397*/
  for ( i = Str; ; ++i ) /*0x7dc39c*/
  {
    v4 = *i; /*0x7dc3a0*/
    if ( !*i ) /*0x7dc3a0*/
      break; /*0x7dc3a0*/
    if ( (byte_B78961[(unsigned __int8)v4] & 4) != 0 ) /*0x7dc3b3*/
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
        return (unsigned __int8 *)(i - 1); /*0x7dc3f1*/
      }
    }
    else if ( C == *i ) /*0x7dc3d5*/
    {
      break; /*0x7dc3d5*/
    }
  }
  _unlock(25); /*0x7dc3f3*/
  return v4 == C ? (unsigned __int8 *)i : 0;
}
}
} // namespace gamemd

// 0x7DC468
namespace gamemd {
int _setmode_lk(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _setmode_lk(int a1, int a2)
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
    LOWORD(v5) = v5 & 0xC000; /*0x7dc4b1*/
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
} // namespace gamemd

// 0x7DC4C9
namespace gamemd {
int __crtGetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData, UINT CodePage)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __crtGetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData, UINT CodePage)
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
  LOBYTE(v8) = v8 & 0xFC; /*0x7dc571*/
  v9 = alloca(v8); /*0x7dc573*/
  ms_exc.old_esp = (DWORD)v11; /*0x7dc578*/
  v12 = v11; /*0x7dc57d*/
  ms_exc.registration.TryLevel = -1; /*0x7dc58d*/
  if ( !v11 || !GetLocaleInfoA(Locale, LCType, v11, v13) ) /*0x7dc59f*/
    return 0; /*0x7dc5a7*/
  if ( cchData ) /*0x7dc5ac*/
    return MultiByteToWideChar(CodePage, 1u, v11, -1, lpLCData, cchData); /*0x7dc5c0*/
  else
    return MultiByteToWideChar(CodePage, 1u, v11, -1, 0, 0); /*0x7dc5b0*/
}
}
} // namespace gamemd

// 0x7DC5DC
namespace gamemd {
int __crtGetLocaleInfoA(LCID Locale, LCTYPE LCType, CCINIClass * aP2, int cchData, UINT CodePage)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl __crtGetLocaleInfoA(LCID Locale, LCTYPE LCType, CCINIClass *aP2, int cchData, UINT CodePage)
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
    return GetLocaleInfoA(Locale, LCType, aP2->__pad_0, cchData); /*0x7dc652*/
  if ( v5 != 1 ) /*0x7dc65a*/
    return 0; /*0x7dc65a*/
  if ( !CodePage ) /*0x7dc663*/
    CodePage = ::CodePage; /*0x7dc66a*/
  LocaleInfoW = GetLocaleInfoW(Locale, LCType, 0, 0); /*0x7dc675*/
  v13 = LocaleInfoW; /*0x7dc67b*/
  if ( !LocaleInfoW ) /*0x7dc680*/
    return 0; /*0x7dc680*/
  v8 = 2 * LocaleInfoW + 3; /*0x7dc687*/
  LOBYTE(v8) = v8 & 0xFC; /*0x7dc68a*/
  v9 = alloca(v8); /*0x7dc68c*/
  ms_exc.old_esp = (DWORD)v11; /*0x7dc691*/
  v12 = v11; /*0x7dc696*/
  ms_exc.registration.TryLevel = -1; /*0x7dc6a6*/
  if ( !v11 || !GetLocaleInfoW(Locale, LCType, v11, v13) ) /*0x7dc6b8*/
    return 0; /*0x7dc6c0*/
  if ( cchData ) /*0x7dc6c7*/
    return WideCharToMultiByte(CodePage, 0x220u, v11, -1, aP2->__pad_0, cchData, 0, 0); /*0x7dc6de*/
  else
    return WideCharToMultiByte(CodePage, 0x220u, v11, -1, 0, 0, 0, 0); /*0x7dc6cb*/
}
}
} // namespace gamemd

// 0x7DC78F
namespace gamemd {
int sub_7DC78F(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * perrinfo, LPCWSTR lpString, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_7DC78F(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo *perrinfo, LPCWSTR lpString, int a7)
{
  int v7; // esi

  v7 = HandleErrorCOM(a1, a2, a3, vt, perrinfo, lpString, (int)&a7, (void **)&perrinfo); /*0x7dc7b2*/
  if ( v7 < 0 ) /*0x7dc7b9*/
    SetErrorInfo(0, (IErrorInfo *)perrinfo); /*0x7dc7c0*/
  return v7; /*0x7dc7c8*/
}
}
} // namespace gamemd

// 0x7DC7CB
namespace gamemd {
int HandleErrorCOM(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * pperrinfo, LPCWSTR lpString, int a7, void ** a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl HandleErrorCOM(
        int a1,
        int a2,
        int a3,
        VARTYPE vt,
        ICreateErrorInfo *pperrinfo,
        LPCWSTR lpString,
        int a7,
        void **a8)
{
  LPCWSTR v9; // ebx
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  void *v13; // esp
  _BYTE *v14; // edx
  bool v15; // zf
  unsigned __int16 *v16; // esi
  _DWORD *v17; // ecx
  int v18; // eax
  int v19; // edx
  unsigned __int16 v20; // di
  int v21; // esi
  int v22; // esi
  int v23; // esi
  _DWORD *v24; // esi
  __int16 v25; // si
  _DWORD *v26; // esi
  unsigned __int16 *v27; // edi
  _DWORD *v28; // esi
  unsigned __int16 *v29; // edi
  int v30; // esi
  _BYTE *v31; // eax
  int v32; // edx
  _WORD *v33; // ecx
  _BYTE *v34; // esi
  unsigned int v35; // ecx
  _DWORD *v36; // ebx
  _DWORD *v37; // eax
  _DWORD *v38; // esi
  HRESULT v39; // ebx
  void **v40; // esi
  ICreateErrorInfo *v41; // edi
  _BYTE v42[12]; // [esp+0h] [ebp-60h] BYREF
  _DWORD v43[8]; // [esp+Ch] [ebp-54h] BYREF
  _BYTE *v44; // [esp+2Ch] [ebp-34h] BYREF
  int *v45; // [esp+30h] [ebp-30h]
  int v46; // [esp+34h] [ebp-2Ch]
  unsigned int v47; // [esp+38h] [ebp-28h]
  VARIANTARG pvarg; // [esp+3Ch] [ebp-24h] BYREF
  int v49; // [esp+4Ch] [ebp-14h] BYREF
  int v50; // [esp+50h] [ebp-10h] BYREF
  _BYTE *v51; // [esp+54h] [ebp-Ch]
  _WORD *v52; // [esp+58h] [ebp-8h]
  unsigned __int16 *v53; // [esp+5Ch] [ebp-4h]

  *a8 = 0; /*0x7dc7d7*/
  if ( !a1 ) /*0x7dc7de*/
    return -2147467261; /*0x7dc7e5*/
  v44 = 0; /*0x7dc7ef*/
  v9 = lpString; /*0x7dc7f0*/
  v45 = 0; /*0x7dc7f3*/
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
    LOBYTE(v12) = v12 & 0xFC; /*0x7dc83b*/
    v13 = alloca(v12); /*0x7dc83d*/
    v14 = v42; /*0x7dc842*/
    memset(v42, 0, v11); /*0x7dc84d*/
    v51 = v42; /*0x7dc851*/
    v52 = v9; /*0x7dc857*/
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
          v30 = *(_DWORD *)(v18 + 4); /*0x7dc958*/
          v19 += 4; /*0x7dc95b*/
          v18 += 4; /*0x7dc95d*/
          *v17 = v30; /*0x7dc95f*/
        }
        else
        {
          switch ( v20 ) /*0x7dc8b9*/
          {
            case 2u: /*0x7dc8b9*/
              LOWORD(v21) = *(_WORD *)(v18 + 4); /*0x7dc8c0*/
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
              v22 = *(_DWORD *)(v19 + 8); /*0x7dc8d8*/
              v19 += 8; /*0x7dc8db*/
              *v17 = v22; /*0x7dc8de*/
              v18 += 8; /*0x7dc8e0*/
              v23 = *(_DWORD *)(v19 + 4); /*0x7dc8e3*/
              goto LABEL_21; /*0x7dc8e6*/
            case 6u: /*0x7dc8b9*/
              v24 = *(_DWORD **)(v18 + 4); /*0x7dc8e8*/
              v19 += 4; /*0x7dc8eb*/
              v18 += 4; /*0x7dc8ed*/
              *v17 = *v24; /*0x7dc8f1*/
              v23 = v24[1]; /*0x7dc8f3*/
LABEL_21:
              v17[1] = v23; /*0x7dc8f6*/
              break; /*0x7dc8f9*/
            case 0xBu: /*0x7dc8b9*/
              v25 = *(_WORD *)(v18 + 4); /*0x7dc8fb*/
              v18 += 4; /*0x7dc8ff*/
              v19 += 4; /*0x7dc901*/
              v21 = -(v25 != 0); /*0x7dc906*/
LABEL_17:
              *(_WORD *)v17 = v21; /*0x7dc8c8*/
              break; /*0x7dc8cb*/
            case 0xCu: /*0x7dc8b9*/
              v26 = *(_DWORD **)(v18 + 4); /*0x7dc90a*/
              v27 = v53; /*0x7dc90d*/
              v19 += 4; /*0x7dc910*/
              v18 += 4; /*0x7dc912*/
              *(_DWORD *)v53 = *v26++; /*0x7dc914*/
              v27 += 2; /*0x7dc914*/
              *(_DWORD *)v27 = *v26++; /*0x7dc915*/
              v27 += 2; /*0x7dc915*/
              *(_DWORD *)v27 = *v26; /*0x7dc916*/
              *((_DWORD *)v27 + 1) = v26[1]; /*0x7dc917*/
              break; /*0x7dc918*/
            case 0xEu: /*0x7dc8b9*/
              v28 = *(_DWORD **)(v18 + 4); /*0x7dc91a*/
              v29 = v53; /*0x7dc91d*/
              v19 += 4; /*0x7dc920*/
              v18 += 4; /*0x7dc922*/
              *(_DWORD *)v53 = *v28++; /*0x7dc924*/
              v29 += 2; /*0x7dc924*/
              *(_DWORD *)v29 = *v28++; /*0x7dc925*/
              v29 += 2; /*0x7dc925*/
              *(_DWORD *)v29 = *v28; /*0x7dc926*/
              *((_DWORD *)v29 + 1) = v28[1]; /*0x7dc927*/
              *v53 = 14; /*0x7dc92b*/
              break; /*0x7dc930*/
            case 0x11u: /*0x7dc8b9*/
              v19 += 4; /*0x7dc932*/
              v18 += 4; /*0x7dc934*/
              *(_BYTE *)v17 = *(_BYTE *)v18; /*0x7dc93a*/
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
        v34 = (*v33 & 0x4000) != 0 ? (_BYTE *)*((_DWORD *)v31 + 2) : v31;
        if ( *(_WORD *)v34 != 10 ) /*0x7dc9c7*/
          break; /*0x7dc9c7*/
        if ( *((_DWORD *)v34 + 2) != -2147352572 ) /*0x7dc9d0*/
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
          v36 = v51; /*0x7dc9e7*/
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
  memset(v43, 0, sizeof(v43)); /*0x7dca32*/
  v39 = (*(int (__stdcall **)(int, int, void *, _DWORD, int, _BYTE **, VARIANTARG *, _DWORD *, int *))(*(_DWORD *)a1 + 24))(
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
            LOWORD(pperrinfo->lpVtbl) = pvarg.iVal; /*0x7dcb6e*/
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
            *(_QWORD *)&pperrinfo->lpVtbl = pvarg.llVal; /*0x7dcb5d*/
            return v39; /*0x7dcb65*/
          case 0xCu: /*0x7dcb50*/
          case 0xEu: /*0x7dcb50*/
            v41 = pperrinfo; /*0x7dcb73*/
            pperrinfo->lpVtbl = *(struct ICreateErrorInfoVtbl **)&pvarg.vt; /*0x7dcb79*/
            ++v41; /*0x7dcb79*/
            v41->lpVtbl = (struct ICreateErrorInfoVtbl *)pvarg.decVal.Hi32; /*0x7dcb7a*/
            *(_QWORD *)&v41[1].lpVtbl = pvarg.llVal; /*0x7dcb7b*/
            return v39; /*0x7dcb7d*/
          case 0x11u: /*0x7dcb50*/
            LOBYTE(pperrinfo->lpVtbl) = pvarg.bVal; /*0x7dcb85*/
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
    ((void (__stdcall *)(_DWORD *))v43[6])(v43); /*0x7dca83*/
  pperrinfo = 0; /*0x7dca89*/
  if ( CreateErrorInfo(&pperrinfo) >= 0 ) /*0x7dca95*/
  {
    pperrinfo->lpVtbl->SetGUID(pperrinfo, (const GUID *const)&stru_87C374.__pad_14B0[476]); /*0x7dcaa2*/
    pperrinfo->lpVtbl->SetDescription(pperrinfo, (LPOLESTR)v43[2]); /*0x7dcaae*/
    pperrinfo->lpVtbl->SetHelpContext(pperrinfo, v43[4]); /*0x7dcaba*/
    pperrinfo->lpVtbl->SetHelpFile(pperrinfo, (LPOLESTR)v43[3]); /*0x7dcac6*/
    pperrinfo->lpVtbl->SetSource(pperrinfo, (LPOLESTR)v43[1]); /*0x7dcad2*/
    v40 = a8; /*0x7dcad8*/
    if ( pperrinfo->lpVtbl->QueryInterface(pperrinfo, (const IID *const)&stru_87C374.__pad_14B0[460], a8) < 0 ) /*0x7dcae8*/
      *v40 = 0; /*0x7dcaea*/
  }
  if ( !LOWORD(v43[0]) ) /*0x7dcaf0*/
    return v43[7]; /*0x7dcb12*/
  if ( LOWORD(v43[0]) < 0xFE00u ) /*0x7dcaf8*/
    return LOWORD(v43[0]) - 2147220992; /*0x7dcb08*/
  return -2147155969; /*0x7dcbb3*/
}
}
} // namespace gamemd

// 0x7DCC74
namespace gamemd {
int sub_7DCC74(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * pperrinfo, LPCWSTR lpString, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_7DCC74(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo *pperrinfo, LPCWSTR lpString, int a7)
{
  int result; // eax
  int v8; // [esp+0h] [ebp-4h]

  result = HandleErrorCOM(a1, a2, a3, vt, pperrinfo, lpString, (int)&a7, (void **)&pperrinfo); /*0x7dcc92*/
  if ( result < 0 ) /*0x7dcc9e*/
    ThrowErrorCOM(result, (int)pperrinfo, v8); /*0x7dcca4*/
  return result; /*0x7dccab*/
}
}
} // namespace gamemd

// 0x7DCD9C
namespace gamemd {
void  __noreturn COM_ThrowError(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall __noreturn COM_ThrowError(int a1, int a2, int a3)
{
  _BYTE pExceptionObject[16]; // [esp+0h] [ebp-10h] BYREF

  ThrowErrorCOM_Helper(a1, a2, 0); /*0x7dcdad*/
  _CxxThrowException_8(pExceptionObject, (_ThrowInfo *)&unk_80F0D0); /*0x7dcdbb*/
}
}
} // namespace gamemd

// 0x7DCDF2
namespace gamemd {
ObjectClass * E4Recv_7DCDF2::sub_7DCDF2(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_7DCDF2(_DWORD *this, char a2)
{
  sub_7DCE3B(this); /*0x7dcdf5*/
  if ( (a2 & 1) != 0 ) /*0x7dcdff*/
    __3_YAXPAX_Z(this); /*0x7dce02*/
  return (ObjectClass *)this; /*0x7dce0a*/
}
}
} // namespace gamemd

// 0x7DCE0E
namespace gamemd {
unsigned int * _com_error::sub_7DCE0E(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_7DCE0E(_com_error *this, int a2)
{
  int v3; // eax

  *(this + 1) = *(_com_error *)(a2 + 4); /*0x7dce18*/
  v3 = *(_DWORD *)(a2 + 8); /*0x7dce1b*/
  *((_DWORD *)this + 3) = 0; /*0x7dce1e*/
  *((_DWORD *)this + 2) = v3; /*0x7dce22*/
  this->vfptr = &off_7FA498; /*0x7dce27*/
  if ( v3 ) /*0x7dce2d*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x7dce32*/
  return &this->vfptr; /*0x7dce37*/
}
}
} // namespace gamemd

// 0x7DCE3B
namespace gamemd {
HLOCAL _com_error::sub_7DCE3B()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HLOCAL __thiscall sub_7DCE3B(_com_error *this)
{
  HLOCAL result; // eax
  void *v3; // esi

  result = (HLOCAL)*((_DWORD *)this + 2); /*0x7dce3e*/
  this->vfptr = &off_7FA498; /*0x7dce41*/
  if ( result ) /*0x7dce49*/
    result = (HLOCAL)(*(int (__stdcall **)(HLOCAL))(*(_DWORD *)result + 8))(result); /*0x7dce4e*/
  v3 = (void *)*((_DWORD *)this + 3); /*0x7dce51*/
  if ( v3 ) /*0x7dce56*/
    return LocalFree(v3); /*0x7dce59*/
  return result; /*0x7dce5f*/
}
}
} // namespace gamemd

// 0x7DCE62
namespace gamemd {
int HeapFree()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
{
  return __imp_HeapFree(hHeap, dwFlags, lpMem);
}
}
} // namespace gamemd

// 0x7DCE68
namespace gamemd {
int HeapAlloc()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
{
  return __imp_HeapAlloc(hHeap, dwFlags, dwBytes);
}
}
} // namespace gamemd

// 0x7DCE6E
namespace gamemd {
int GetTimeZoneInformation()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)
{
  return __imp_GetTimeZoneInformation(lpTimeZoneInformation);
}
}
} // namespace gamemd

// 0x7DCE74
namespace gamemd {
int GetLocalTime()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)
{
  __imp_GetLocalTime(lpSystemTime); /*0x7dce74*/
}
}
} // namespace gamemd

// 0x7DCE7A
namespace gamemd {
int RtlUnwind()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue); /*0x7dce7a*/
}
}
} // namespace gamemd

// 0x7DCE80
namespace gamemd {
int GetCommandLineA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
LPSTR __stdcall GetCommandLineA()
{
  return __imp_GetCommandLineA();
}
}
} // namespace gamemd

// 0x7DCE86
namespace gamemd {
int GetVersion()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
DWORD __stdcall GetVersion()
{
  return __imp_GetVersion();
}
}
} // namespace gamemd

// 0x7DCE8C
namespace gamemd {
int FatalAppExitA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
void __stdcall __noreturn FatalAppExitA(UINT uAction, LPCSTR lpMessageText)
{
  __imp_FatalAppExitA(uAction, lpMessageText); /*0x7dce8c*/
}
}
} // namespace gamemd

// 0x7DCE92
namespace gamemd {
int HeapCreate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize)
{
  return __imp_HeapCreate(flOptions, dwInitialSize, dwMaximumSize);
}
}
} // namespace gamemd

// 0x7DCE98
namespace gamemd {
int VirtualFree()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType)
{
  return __imp_VirtualFree(lpAddress, dwSize, dwFreeType);
}
}
} // namespace gamemd

// 0x7DCE9E
namespace gamemd {
int VirtualAlloc()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect)
{
  return __imp_VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
}
}
} // namespace gamemd

// 0x7DCEA4
namespace gamemd {
int HeapReAlloc()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
{
  return __imp_HeapReAlloc(hHeap, dwFlags, lpMem, dwBytes);
}
}
} // namespace gamemd

// 0x7DCEAA
namespace gamemd {
int IsBadWritePtr()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall IsBadWritePtr(LPVOID lp, UINT_PTR ucb)
{
  return __imp_IsBadWritePtr(lp, ucb);
}
}
} // namespace gamemd

// 0x7DCEB0
namespace gamemd {
int HeapSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
SIZE_T __stdcall HeapSize(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem)
{
  return __imp_HeapSize(hHeap, dwFlags, lpMem);
}
}
} // namespace gamemd

// 0x7DCEB6
namespace gamemd {
int LCMapStringA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest)
{
  return __imp_LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
}
} // namespace gamemd

// 0x7DCEBC
namespace gamemd {
int LCMapStringW()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
{
  return __imp_LCMapStringW(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
}
} // namespace gamemd

// 0x7DCEC2
namespace gamemd {
int TlsSetValue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  return __imp_TlsSetValue(dwTlsIndex, lpTlsValue);
}
}
} // namespace gamemd

// 0x7DCEC8
namespace gamemd {
int TlsAlloc()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
DWORD __stdcall TlsAlloc()
{
  return __imp_TlsAlloc();
}
}
} // namespace gamemd

// 0x7DCECE
namespace gamemd {
int TlsFree()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall TlsFree(DWORD dwTlsIndex)
{
  return __imp_TlsFree(dwTlsIndex);
}
}
} // namespace gamemd

// 0x7DCED4
namespace gamemd {
int SetLastError()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
void __stdcall SetLastError(DWORD dwErrCode)
{
  __imp_SetLastError(dwErrCode); /*0x7dced4*/
}
}
} // namespace gamemd

// 0x7DCEDA
namespace gamemd {
int TlsGetValue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
{
  return __imp_TlsGetValue(dwTlsIndex);
}
}
} // namespace gamemd

// 0x7DCEE6
namespace gamemd {
int RaiseException()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
void __stdcall RaiseException(
        DWORD dwExceptionCode,
        DWORD dwExceptionFlags,
        DWORD nNumberOfArguments,
        const ULONG_PTR *lpArguments)
{
  __imp_RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments); /*0x7dcee6*/
}
}
} // namespace gamemd

// 0x7DCEEC
namespace gamemd {
int FlushFileBuffers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall FlushFileBuffers(HANDLE hFile)
{
  return __imp_FlushFileBuffers(hFile);
}
}
} // namespace gamemd

// 0x7DCEF2
namespace gamemd {
int SetHandleCount()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
UINT __stdcall SetHandleCount(UINT uNumber)
{
  return __imp_SetHandleCount(uNumber);
}
}
} // namespace gamemd

// 0x7DCEF8
namespace gamemd {
int GetStdHandle()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
{
  return __imp_GetStdHandle(nStdHandle);
}
}
} // namespace gamemd

// 0x7DCEFE
namespace gamemd {
int GetFileType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
DWORD __stdcall GetFileType(HANDLE hFile)
{
  return __imp_GetFileType(hFile);
}
}
} // namespace gamemd

// 0x7DCF04
namespace gamemd {
int GetCPInfo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo)
{
  return __imp_GetCPInfo(CodePage, lpCPInfo);
}
}
} // namespace gamemd

// 0x7DCF0A
namespace gamemd {
int GetACP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
UINT __stdcall GetACP()
{
  return __imp_GetACP();
}
}
} // namespace gamemd

// 0x7DCF10
namespace gamemd {
int GetOEMCP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
UINT __stdcall GetOEMCP()
{
  return __imp_GetOEMCP();
}
}
} // namespace gamemd

// 0x7DCF16
namespace gamemd {
int SetConsoleCtrlHandler()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)
{
  return __imp_SetConsoleCtrlHandler(HandlerRoutine, Add);
}
}
} // namespace gamemd

// 0x7DCF1C
namespace gamemd {
int GetFileAttributesA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)
{
  return __imp_GetFileAttributesA(lpFileName);
}
}
} // namespace gamemd

// 0x7DCF28
namespace gamemd {
int UnhandledExceptionFilter()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
LONG __stdcall UnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return __imp_UnhandledExceptionFilter(ExceptionInfo);
}
}
} // namespace gamemd

// 0x7DCF2E
namespace gamemd {
int FreeEnvironmentStringsA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall FreeEnvironmentStringsA(LPCH penv)
{
  return __imp_FreeEnvironmentStringsA(penv);
}
}
} // namespace gamemd

// 0x7DCF34
namespace gamemd {
int FreeEnvironmentStringsW()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall FreeEnvironmentStringsW(LPWCH penv)
{
  return __imp_FreeEnvironmentStringsW(penv);
}
}
} // namespace gamemd

// 0x7DCF3A
namespace gamemd {
int GetEnvironmentStrings()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
LPCH __stdcall GetEnvironmentStrings()
{
  return __imp_GetEnvironmentStrings();
}
}
} // namespace gamemd

// 0x7DCF40
namespace gamemd {
int GetEnvironmentStringsW()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
LPWCH __stdcall GetEnvironmentStringsW()
{
  return __imp_GetEnvironmentStringsW();
}
}
} // namespace gamemd

// 0x7DCF46
namespace gamemd {
int IsValidLocale()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall IsValidLocale(LCID Locale, DWORD dwFlags)
{
  return __imp_IsValidLocale(Locale, dwFlags);
}
}
} // namespace gamemd

// 0x7DCF4C
namespace gamemd {
int IsValidCodePage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall IsValidCodePage(UINT CodePage)
{
  return __imp_IsValidCodePage(CodePage);
}
}
} // namespace gamemd

// 0x7DCF52
namespace gamemd {
int GetLocaleInfoA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
  return __imp_GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
}
}
} // namespace gamemd

// 0x7DCF58
namespace gamemd {
int EnumSystemLocalesA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall EnumSystemLocalesA(LOCALE_ENUMPROCA lpLocaleEnumProc, DWORD dwFlags)
{
  return __imp_EnumSystemLocalesA(lpLocaleEnumProc, dwFlags);
}
}
} // namespace gamemd

// 0x7DCF5E
namespace gamemd {
int GetUserDefaultLCID()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
LCID __stdcall GetUserDefaultLCID()
{
  return __imp_GetUserDefaultLCID();
}
}
} // namespace gamemd

// 0x7DCF64
namespace gamemd {
int SetStdHandle()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall SetStdHandle(DWORD nStdHandle, HANDLE hHandle)
{
  return __imp_SetStdHandle(nStdHandle, hHandle);
}
}
} // namespace gamemd

// 0x7DCF6A
namespace gamemd {
int GetStringTypeA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
{
  return __imp_GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
}
} // namespace gamemd

// 0x7DCF70
namespace gamemd {
int GetStringTypeW()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall GetStringTypeW(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)
{
  return __imp_GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
}
} // namespace gamemd

// 0x7DCF76
namespace gamemd {
int CompareStringA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __stdcall CompareStringA(
        LCID Locale,
        DWORD dwCmpFlags,
        PCNZCH lpString1,
        int cchCount1,
        PCNZCH lpString2,
        int cchCount2)
{
  return __imp_CompareStringA(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
}
} // namespace gamemd

// 0x7DCF7C
namespace gamemd {
int CompareStringW()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __stdcall CompareStringW(
        LCID Locale,
        DWORD dwCmpFlags,
        PCNZWCH lpString1,
        int cchCount1,
        PCNZWCH lpString2,
        int cchCount2)
{
  return __imp_CompareStringW(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
}
} // namespace gamemd

// 0x7DCF82
namespace gamemd {
int SetEnvironmentVariableA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue)
{
  return __imp_SetEnvironmentVariableA(lpName, lpValue);
}
}
} // namespace gamemd

// 0x7DCF88
namespace gamemd {
int SetEndOfFile()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall SetEndOfFile(HANDLE hFile)
{
  return __imp_SetEndOfFile(hFile);
}
}
} // namespace gamemd

// 0x7DCF8E
namespace gamemd {
int GetLocaleInfoW()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  return __imp_GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
}
}
} // namespace gamemd

// 0x7DCF94
namespace gamemd {
int lstrlenW()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __stdcall lstrlenW(LPCWSTR lpString)
{
  return __imp_lstrlenW(lpString);
}
}
} // namespace gamemd

// 0x7DCF9A
namespace gamemd {
int LocalFree()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
HLOCAL __stdcall LocalFree(HLOCAL hMem)
{
  return __imp_LocalFree(hMem);
}
}
} // namespace gamemd

// 0x7DCFA0
namespace gamemd {
int GetErrorInfo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
HRESULT __stdcall GetErrorInfo(ULONG dwReserved, IErrorInfo **pperrinfo)
{
  return __imp_GetErrorInfo(dwReserved, pperrinfo);
}
}
} // namespace gamemd

// 0x7DCFA6
namespace gamemd {
int SetErrorInfo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
HRESULT __stdcall SetErrorInfo(ULONG dwReserved, IErrorInfo *perrinfo)
{
  return __imp_SetErrorInfo(dwReserved, perrinfo);
}
}
} // namespace gamemd

// 0x7DCFAC
namespace gamemd {
int VariantChangeType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
HRESULT __stdcall VariantChangeType(VARIANTARG *pvargDest, const VARIANTARG *pvarSrc, USHORT wFlags, VARTYPE vt)
{
  return __imp_VariantChangeType(pvargDest, pvarSrc, wFlags, vt);
}
}
} // namespace gamemd

// 0x7DCFB2
namespace gamemd {
int CreateErrorInfo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
HRESULT __stdcall CreateErrorInfo(ICreateErrorInfo **pperrinfo)
{
  return __imp_CreateErrorInfo(pperrinfo);
}
}
} // namespace gamemd

// 0x7DCFB8
namespace gamemd {
int VariantClear()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
HRESULT __stdcall VariantClear(VARIANTARG *pvarg)
{
  return __imp_VariantClear(pvarg);
}
}
} // namespace gamemd

// 0x7DCFBE
namespace gamemd {
int VariantInit()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
void __stdcall VariantInit(VARIANTARG *pvarg)
{
  __imp_VariantInit(pvarg); /*0x7dcfbe*/
}
}
} // namespace gamemd

// 0x7DCFC4
namespace gamemd {
char * _strupr(char * String)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__cdecl _strupr(char *String)
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
} // namespace gamemd

// 0x7DD0F8
namespace gamemd {
int _wcsicmp(const wchar_t * String1, const wchar_t * String2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
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
      LOWORD(String2a) = towlower_0(v7); /*0x7dd191*/
      v8 = *v6++; /*0x7dd194*/
      v9 = towlower_0(v8); /*0x7dd19a*/
      String1a = v9; /*0x7dd1a6*/
    }
    while ( (_WORD)String2a && (_WORD)String2a == v9 ); /*0x7dd1af*/
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
      LOWORD(v2) = *v4; /*0x7dd10e*/
      if ( *v4 <= 0x5Au && (unsigned __int16)v2 >= 0x41u ) /*0x7dd11b*/
        v2 += 16; /*0x7dd11d*/
      String2a = v2; /*0x7dd120*/
      LOWORD(v2) = *v3; /*0x7dd123*/
      if ( *v3 <= 0x5Au && (unsigned __int16)v2 >= 0x41u ) /*0x7dd130*/
        LOWORD(v2) = (_WORD)v2 + 32; /*0x7dd132*/
      String1a = (unsigned __int16)v2; /*0x7dd136*/
      HIWORD(v2) = HIWORD(String2a); /*0x7dd139*/
      ++v4; /*0x7dd13c*/
      ++v3; /*0x7dd13e*/
    }
    while ( (_WORD)String2a && (_WORD)String2a == (_WORD)v2 ); /*0x7dd14c*/
  }
  return (unsigned __int16)String2a - String1a; /*0x7dd1d1*/
}
}
} // namespace gamemd

// 0x7DD1D7
namespace gamemd {
int sub_7DD1D7()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7DD1D7()
{
  int v0; // esi

  _lock(8); /*0x7dd1da*/
  v0 = _getch(); /*0x7dd1e6*/
  _unlock(8); /*0x7dd1e8*/
  return v0; /*0x7dd1f1*/
}
}
} // namespace gamemd

// 0x7DD20F
namespace gamemd {
int _getch()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _getch()
{
  int result; // eax
  BOOL i; // eax
  int AsciiChar; // edi
  unsigned __int8 *v3; // eax
  struct _INPUT_RECORD Buffer; // [esp+0h] [ebp-1Ch] BYREF
  DWORD Mode; // [esp+14h] [ebp-8h] BYREF
  DWORD NumberOfEventsRead; // [esp+18h] [ebp-4h] BYREF

  if ( MEMORY[0x87DD70] == -1 ) /*0x7dd21f*/
  {
    if ( MEMORY[0x87DD80] == (HANDLE)-1 ) /*0x7dd233*/
    {
      return -1; /*0x7dd235*/
    }
    else
    {
      if ( MEMORY[0x87DD80] == (HANDLE)-2 ) /*0x7dd23c*/
        __initconin(); /*0x7dd23e*/
      GetConsoleMode(MEMORY[0x87DD80], &Mode); /*0x7dd250*/
      SetConsoleMode(MEMORY[0x87DD80], 0); /*0x7dd264*/
      for ( i = ReadConsoleInputA(MEMORY[0x87DD80], &Buffer, 1u, &NumberOfEventsRead); /*0x7dd27c*/
            i && NumberOfEventsRead;
            i = ReadConsoleInputA(MEMORY[0x87DD80], &Buffer, 1u, &NumberOfEventsRead) )
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
            MEMORY[0x87DD70] = v3[1]; /*0x7dd2c4*/
            goto LABEL_17; /*0x7dd2c9*/
          }
        }
      }
      AsciiChar = -1; /*0x7dd2cb*/
LABEL_17:
      SetConsoleMode(MEMORY[0x87DD80], Mode); /*0x7dd2ce*/
      return AsciiChar; /*0x7dd2d9*/
    }
  }
  else
  {
    result = (unsigned __int8)MEMORY[0x87DD70]; /*0x7dd221*/
    MEMORY[0x87DD70] = -1; /*0x7dd224*/
  }
  return result; /*0x7dd22a*/
}
}
} // namespace gamemd

// 0x7DD2E0
namespace gamemd {
int sub_7DD2E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7DD2E0()
{
  int result; // eax
  int v1; // eax
  int v2; // esi

  LOBYTE(result) = MEMORY[0x87DD70]; /*0x7dd2e0*/
  if ( MEMORY[0x87DD70] == -1 ) /*0x7dd2e9*/
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
    MEMORY[0x87DD70] = -1; /*0x7dd2eb*/
    return (unsigned __int8)result; /*0x7dd2f3*/
  }
}
}
} // namespace gamemd

// 0x7DD334
namespace gamemd {
int _kbhit()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _kbhit()
{
  int v0; // eax
  void *v1; // esp
  int *v2; // edi
  int *i; // esi
  int v5; // [esp+0h] [ebp-10h] BYREF
  int v6; // [esp+4h] [ebp-Ch] BYREF
  DWORD NumberOfEvents; // [esp+8h] [ebp-8h] BYREF
  DWORD NumberOfEventsRead; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_DWORD *)&stru_87C374.__pad_14B0[1356] == -1 ) /*0x7dd342*/
  {
    if ( *(_DWORD *)&stru_87C374.__pad_14B0[1372] == -2 ) /*0x7dd34f*/
      __initconin(); /*0x7dd351*/
    if ( *(_DWORD *)&stru_87C374.__pad_14B0[1372] == -1 ) /*0x7dd35e*/
      return 0; /*0x7dd35e*/
    if ( !GetNumberOfConsoleInputEvents(*(HANDLE *)&stru_87C374.__pad_14B0[1372], &NumberOfEvents) ) /*0x7dd369*/
      return 0; /*0x7dd369*/
    if ( !NumberOfEvents ) /*0x7dd378*/
      return 0; /*0x7dd378*/
    v0 = 20 * NumberOfEvents + 3; /*0x7dd380*/
    LOBYTE(v0) = v0 & 0xFC; /*0x7dd383*/
    v1 = alloca(v0); /*0x7dd385*/
    v2 = &v5; /*0x7dd38a*/
    if ( !&v5 /*0x7dd3b0*/
      || !PeekConsoleInputA(
            *(HANDLE *)&stru_87C374.__pad_14B0[1372],
            (PINPUT_RECORD)&v5,
            NumberOfEvents,
            &NumberOfEventsRead)
      || !NumberOfEventsRead
      || NumberOfEventsRead > NumberOfEvents )
    {
      return 0; /*0x7dd3ec*/
    }
    for ( i = &v6; *(_WORD *)v2 != 1 || !*i || !*((_BYTE *)i + 10) && !_getextendedkeycode((int)i); i += 5 ) /*0x7dd3b6*/
    {
      --NumberOfEventsRead; /*0x7dd3d5*/
      v2 += 5; /*0x7dd3d8*/
      if ( !NumberOfEventsRead ) /*0x7dd3e2*/
        return 0; /*0x7dd3e2*/
    }
  }
  return 1; /*0x7dd3e9*/
}
}
} // namespace gamemd

// 0x7DD413
namespace gamemd {
int _ungetch(int Ch)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _ungetch(int Ch)
{
  if ( Ch == -1 || MEMORY[0x87DD70] != -1 ) /*0x7dd423*/
    return -1; /*0x7dd430*/
  MEMORY[0x87DD70] = (unsigned __int8)Ch; /*0x7dd42a*/
  return (unsigned __int8)Ch; /*0x7dd42f*/
}
}
} // namespace gamemd

// 0x7DD434
namespace gamemd {
unsigned char * _getextendedkeycode(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__cdecl _getextendedkeycode(int a1)
{
  int v1; // ebx
  _BYTE *result; // eax
  int v3; // ecx
  _WORD *v4; // esi
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 12); /*0x7dd43a*/
  if ( (v1 & 0x100) != 0 ) /*0x7dd440*/
  {
    result = 0; /*0x7dd446*/
    v3 = 0; /*0x7dd448*/
    v4 = &MEMORY[0x87DA30]; /*0x7dd44a*/
    while ( *v4 != *(_WORD *)(a1 + 8) ) /*0x7dd452*/
    {
      v4 += 5; /*0x7dd454*/
      ++v3; /*0x7dd457*/
      if ( (int)v4 >= (int)MEMORY[0x87DAA8] ) /*0x7dd45e*/
        return result; /*0x7dd45e*/
    }
    if ( (v1 & 3) != 0 ) /*0x7dd468*/
    {
      return (_BYTE *)(10 * v3 + 8903224); /*0x7dd46d*/
    }
    else if ( (v1 & 0xC) != 0 ) /*0x7dd479*/
    {
      return (_BYTE *)(10 * v3 + 8903222); /*0x7dd47e*/
    }
    else if ( (v1 & 0x10) != 0 ) /*0x7dd48d*/
    {
      return (_BYTE *)(10 * v3 + 8903220); /*0x7dd48f*/
    }
    else
    {
      return (_BYTE *)(10 * v3 + 8903218); /*0x7dd498*/
    }
  }
  else
  {
    if ( (v1 & 3) != 0 ) /*0x7dd4a4*/
    {
      result = (_BYTE *)(8 * *(unsigned __int16 *)(a1 + 8) + 8903342); /*0x7dd4aa*/
    }
    else if ( (v1 & 0xC) != 0 ) /*0x7dd4b6*/
    {
      result = (_BYTE *)(8 * *(unsigned __int16 *)(a1 + 8) + 8903340); /*0x7dd4bc*/
    }
    else
    {
      v5 = *(unsigned __int16 *)(a1 + 8); /*0x7dd4c5*/
      if ( (v1 & 0x10) != 0 ) /*0x7dd4cc*/
        result = (_BYTE *)(8 * v5 + 8903338); /*0x7dd4ce*/
      else
        result = (_BYTE *)(8 * v5 + 8903336); /*0x7dd4d7*/
    }
    if ( *result && *result != 0xE0 || !result[1] ) /*0x7dd4e9*/
      return 0; /*0x7dd4ef*/
  }
  return result; /*0x7dd4f1*/
}
}
} // namespace gamemd

// 0x7DD4F4
namespace gamemd {
int _cwprintf(const wchar_t *const Format, ... a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int _cwprintf(const wchar_t *const Format, ...)
{
  va_list va; // [esp+8h] [ebp+8h] BYREF

  va_start(va, Format);
  return output(Format, va); /*0x7dd504*/
}
}
} // namespace gamemd

// 0x7DD505
namespace gamemd {
int output(char * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl output(char *a1, int a2)
{
  char v2; // bl
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
  unsigned int v17; // eax
  size_t v18; // eax
  char *j; // eax
  int v20; // edx
  _WORD *v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  int v24; // eax
  int v25; // ebx
  unsigned __int64 v26; // kr08_8
  char *v27; // eax
  _BYTE *v28; // eax
  char v29; // bl
  int v30; // esi
  wchar_t *v31; // edi
  int v32; // ebx
  wchar_t v33; // ax
  int v34; // eax
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
  _BYTE v51[2]; // [esp+23Eh] [ebp-16h] BYREF
  int v52; // [esp+240h] [ebp-14h] BYREF
  int v53; // [esp+244h] [ebp-10h]
  int v54; // [esp+248h] [ebp-Ch]
  char *p_MbCh; // [esp+24Ch] [ebp-8h]
  int v56; // [esp+250h] [ebp-4h]
  char *v57; // [esp+25Ch] [ebp+8h]

  v2 = *a1; /*0x7dd514*/
  v3 = 0; /*0x7dd516*/
  v57 = a1 + 1; /*0x7dd518*/
  v54 = 0; /*0x7dd51b*/
  v52 = 0; /*0x7dd520*/
  if ( v2 ) /*0x7dd523*/
  {
    v4 = v53; /*0x7dd529*/
    while ( 1 ) /*0x7dd542*/
    {
      if ( v52 < 0 ) /*0x7dd545*/
        return v52; /*0x7dd545*/
      if ( v2 < 32 || v2 > 120 ) /*0x7dd553*/
        v5 = 0; /*0x7dd563*/
      else
        v5 = byte_7F97CC[v2] & 0xF; /*0x7dd55e*/
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
          switch ( v2 ) /*0x7dd5a4*/
          {
            case ' ': /*0x7dd5a4*/
              v56 |= 2u; /*0x7dd5e1*/
              break;
            case '#': /*0x7dd5a4*/
              LOBYTE(v56) = v56 | 0x80; /*0x7dd5d8*/
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
          if ( v2 == 42 ) /*0x7dd5ed*/
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
            v7 = v2 + 10 * v49 - 48; /*0x7dd61b*/
          }
          v49 = v7; /*0x7dd60a*/
          goto LABEL_171; /*0x7dd60d*/
        case 4: /*0x7dd57c*/
          v53 = 0; /*0x7dd621*/
          goto LABEL_171; /*0x7dd624*/
        case 5: /*0x7dd57c*/
          if ( v2 == 42 ) /*0x7dd62c*/
          {
            v53 = get_int_arg_1(&a2); /*0x7dd63a*/
            if ( v53 < 0 ) /*0x7dd63d*/
              v53 = -1; /*0x7dd643*/
          }
          else
          {
            v53 = v2 + 10 * v4 - 48; /*0x7dd656*/
          }
          goto LABEL_171; /*0x7dd647*/
        case 6: /*0x7dd57c*/
          switch ( v2 ) /*0x7dd661*/
          {
            case 'I': /*0x7dd661*/
              if ( *v57 == 54 && v57[1] == 52 ) /*0x7dd69c*/
              {
                BYTE1(v56) |= 0x80u; /*0x7dd6a0*/
                v57 += 2; /*0x7dd6a4*/
              }
              else
              {
                v45 = 0; /*0x7dd6ac*/
$NORMAL_STATE$1533: /*0x7dd6af*/
                v48 = 0; /*0x7dd6af*/
                if ( *((char *)MEMORY[0x87C590] + 2 * (unsigned __int8)v2 + 1) < 0 ) /*0x7dd6c0*/
                {
                  write_char_1(v2, &v52); /*0x7dd6ca*/
                  v8 = v57++; /*0x7dd6cf*/
                  v2 = *v8; /*0x7dd6d6*/
                }
                write_char_1(v2, &v52); /*0x7dd6e1*/
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
          if ( v2 > 103 ) /*0x7dd6f3*/
          {
            switch ( v2 ) /*0x7dd916*/
            {
              case 'i': /*0x7dd916*/
                goto LABEL_114; /*0x7dd916*/
              case 'n': /*0x7dd916*/
                v21 = (_WORD *)get_int_arg_1(&a2); /*0x7dd9c7*/
                if ( (v56 & 0x20) != 0 ) /*0x7dd9d1*/
                  *v21 = v52; /*0x7dd9d7*/
                else
                  *(_DWORD *)v21 = v52; /*0x7dd9df*/
                v47 = 1; /*0x7dd9e1*/
                goto LABEL_171; /*0x7dd9e8*/
              case 'o': /*0x7dd916*/
                v54 = 8; /*0x7dd9b4*/
                if ( (v56 & 0x80u) != 0 ) /*0x7dd9bb*/
                  BYTE1(v56) |= 2u; /*0x7dd9bd*/
                break;
              default:
                switch ( v2 ) /*0x7dd92d*/
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
                  LODWORD(v22) = (__int16)get_int_arg_1(&a2); /*0x7dda20*/
                else
                  LODWORD(v22) = (unsigned __int16)get_int_arg_1(&a2); /*0x7dda2c*/
              }
              else
              {
                if ( (v56 & 0x40) == 0 ) /*0x7dda39*/
                {
                  v22 = (unsigned int)get_int_arg_1(&a2); /*0x7dda43*/
                  goto LABEL_126; /*0x7dda43*/
                }
                LODWORD(v22) = get_int_arg_1(&a2); /*0x7dda3b*/
              }
              v22 = (int)v22; /*0x7dda23*/
            }
            else
            {
              LODWORD(v22) = get_int64_arg_1(&a2); /*0x7dda02*/
            }
LABEL_126:
            if ( (v56 & 0x40) != 0 && v22 < 0 ) /*0x7dda53*/
            {
              HIDWORD(v23) = -(int)v22; /*0x7dda60*/
              BYTE1(v56) |= 1u; /*0x7dda64*/
              LODWORD(v23) = (unsigned __int64)-v22 >> 32; /*0x7dda68*/
            }
            else
            {
              v23 = __PAIR64__(v22, HIDWORD(v22)); /*0x7dda6e*/
            }
            if ( (v56 & 0x8000) == 0 ) /*0x7dda74*/
              LODWORD(v23) = 0; /*0x7dda76*/
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
              v25 = __PAIR64__(v23, HIDWORD(v23)) % v54 + 48; /*0x7ddac4*/
              v26 = __PAIR64__(v23, HIDWORD(v23)) / v54; /*0x7ddad6*/
              v23 = __PAIR64__(v26, HIDWORD(v26)); /*0x7ddad6*/
              if ( v25 > 57 ) /*0x7ddad8*/
                LOBYTE(v25) = v46 + v25; /*0x7ddada*/
              v27 = p_MbCh--; /*0x7ddadd*/
              *v27 = v25; /*0x7ddae3*/
            }
            v28 = (_BYTE *)(&v39 - p_MbCh++); /*0x7ddaea*/
            v54 = (int)v28; /*0x7ddaf4*/
            if ( (v56 & 0x200) != 0 && (*p_MbCh != 48 || !v28) ) /*0x7ddb03*/
            {
              --p_MbCh; /*0x7ddb05*/
              v18 = (size_t)(v28 + 1); /*0x7ddb08*/
              *p_MbCh = 48; /*0x7ddb0c*/
              goto LABEL_147; /*0x7ddb0c*/
            }
            goto LABEL_148; /*0x7ddb03*/
          }
          if ( v2 >= 101 ) /*0x7dd6fc*/
            goto LABEL_65; /*0x7dd6fc*/
          if ( v2 > 88 ) /*0x7dd705*/
          {
            if ( v2 == 90 ) /*0x7dd7f8*/
            {
              v15 = (__int16 *)get_int_arg_1(&a2); /*0x7dd830*/
              if ( v15 && (v16 = (char *)*((_DWORD *)v15 + 1)) != 0 ) /*0x7dd83f*/
              {
                if ( (v56 & 0x800) != 0 ) /*0x7dd844*/
                {
                  v17 = (unsigned int)*v15 >> 1; /*0x7dd849*/
                  p_MbCh = v16; /*0x7dd84b*/
                  v54 = v17; /*0x7dd84e*/
                  v48 = 1; /*0x7dd851*/
                  goto LABEL_148; /*0x7dd858*/
                }
                v48 = 0; /*0x7dd85d*/
                p_MbCh = v16; /*0x7dd861*/
                v18 = *v15; /*0x7dd864*/
              }
              else
              {
                p_MbCh = MEMORY[0x87C4C8]; /*0x7dd871*/
                v18 = strlen(MEMORY[0x87C4C8]); /*0x7dd908*/
              }
              goto LABEL_147; /*0x7dd867*/
            }
            if ( v2 == 99 ) /*0x7dd7fd*/
              goto LABEL_69; /*0x7dd7fd*/
            if ( v2 != 100 ) /*0x7dd800*/
              goto LABEL_148; /*0x7dd800*/
LABEL_114:
            v56 |= 0x40u; /*0x7dd9ed*/
LABEL_115:
            v54 = 10; /*0x7dd9f1*/
            goto LABEL_116; /*0x7dd9f1*/
          }
          switch ( v2 ) /*0x7dd70b*/
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
              v2 += 32; /*0x7dd795*/
LABEL_65:
              v56 |= 0x40u; /*0x7dd798*/
              p_MbCh = &MbCh; /*0x7dd7a4*/
              if ( v4 >= 0 ) /*0x7dd7a7*/
              {
                if ( !v4 && v2 == 103 ) /*0x7dd87f*/
                  v53 = 1; /*0x7dd881*/
              }
              else
              {
                v53 = 6; /*0x7dd7ad*/
              }
              a2 += 8; /*0x7dd891*/
              v40 = *(_DWORD *)(a2 - 8); /*0x7dd89a*/
              v41 = *(_DWORD *)(a2 - 4); /*0x7dd8a0*/
              MEMORY[0x87C4D0](); /*0x7dd8b2*/
            case 'S': /*0x7dd70b*/
              if ( (v56 & 0x830) == 0 ) /*0x7dd731*/
                BYTE1(v56) |= 8u; /*0x7dd733*/
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
                  v11 = (char *)MEMORY[0x87C4CC]; /*0x7dd763*/
                  p_MbCh = (char *)MEMORY[0x87C4CC]; /*0x7dd769*/
                }
                v48 = 1; /*0x7dd76c*/
                for ( i = v11; ; i += 2 ) /*0x7dd773*/
                {
                  v13 = v9--; /*0x7dd775*/
                  if ( !v13 || !*(_WORD *)i ) /*0x7dd780*/
                    break; /*0x7dd780*/
                }
                v18 = (i - v11) >> 1; /*0x7dd954*/
              }
              else
              {
                if ( !v10 ) /*0x7dd95d*/
                {
                  v11 = MEMORY[0x87C4C8]; /*0x7dd95f*/
                  p_MbCh = MEMORY[0x87C4C8]; /*0x7dd965*/
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
          v30 = v49 - v50 - v54; /*0x7ddb4a*/
          if ( (v56 & 0xC) == 0 ) /*0x7ddb56*/
            write_multi_char_1(32, v49 - v50 - v54, &v52); /*0x7ddb5f*/
          write_string_1(v51, v50, &v52); /*0x7ddb72*/
          if ( (v29 & 8) != 0 && (v29 & 4) == 0 ) /*0x7ddb82*/
            write_multi_char_1(48, v30, &v52); /*0x7ddb8b*/
          if ( v48 && v54 > 0 ) /*0x7ddb9e*/
          {
            v31 = (wchar_t *)p_MbCh; /*0x7ddba0*/
            v32 = v54 - 1; /*0x7ddba3*/
            do /*0x7ddbcf*/
            {
              v33 = *v31++; /*0x7ddba4*/
              v34 = wctomb(v43, v33); /*0x7ddbae*/
              if ( v34 <= 0 ) /*0x7ddbb7*/
                break; /*0x7ddbb7*/
              write_string_1(v43, v34, &v52); /*0x7ddbc2*/
            }
            while ( v32-- ); /*0x7ddbcf*/
          }
          else
          {
            write_string_1(p_MbCh, v54, &v52); /*0x7ddbdd*/
          }
          if ( (v56 & 4) != 0 ) /*0x7ddbe9*/
            write_multi_char_1(32, v30, &v52); /*0x7ddbf2*/
LABEL_171:
          v36 = v57++; /*0x7ddbfa*/
          v2 = *v36; /*0x7ddc00*/
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
} // namespace gamemd

// 0x7DDC32
namespace gamemd {
unsigned int * write_char_1(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl write_char_1(int a1, _DWORD *a2)
{
  bool v2; // zf
  _DWORD *result; // eax

  v2 = _putch(a1) == -1; /*0x7ddc3b*/
  result = a2; /*0x7ddc3e*/
  if ( v2 ) /*0x7ddc43*/
    *a2 = -1; /*0x7ddc45*/
  else
    ++*a2; /*0x7ddc49*/
  return result; /*0x7ddc48*/
}
}
} // namespace gamemd

// 0x7DDC4C
namespace gamemd {
unsigned int * write_multi_char_1(int a1, unsigned int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl write_multi_char_1(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *i; // edi

  result = a2; /*0x7ddc52*/
  for ( i = (_DWORD *)((char *)a2 - 1); (int)result > 0; i = (_DWORD *)((char *)i - 1) ) /*0x7ddc57*/
  {
    result = write_char_1(a1, a3); /*0x7ddc62*/
    if ( *a3 == -1 ) /*0x7ddc6c*/
      break; /*0x7ddc6c*/
    result = i; /*0x7ddc6e*/
  }
  return result; /*0x7ddc75*/
}
}
} // namespace gamemd

// 0x7DDC78
namespace gamemd {
unsigned int * write_string_1(char * a1, unsigned int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__cdecl write_string_1(char *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *i; // ebx
  int v6; // [esp-8h] [ebp-14h]

  result = a2; /*0x7ddc7d*/
  for ( i = (_DWORD *)((char *)a2 - 1); (int)result > 0; i = (_DWORD *)((char *)i - 1) ) /*0x7ddc84*/
  {
    v6 = *a1++; /*0x7ddc92*/
    result = write_char_1(v6, a3); /*0x7ddc94*/
    if ( *a3 == -1 ) /*0x7ddc9e*/
      break; /*0x7ddc9e*/
    result = i; /*0x7ddca0*/
  }
  return result; /*0x7ddca7*/
}
}
} // namespace gamemd

// 0x7DDCAB
namespace gamemd {
int get_int_arg_1(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl get_int_arg_1(_DWORD *a1)
{
  *a1 += 4; /*0x7ddcaf*/
  return *(_DWORD *)(*a1 - 4); /*0x7ddcb7*/
}
}
} // namespace gamemd

// 0x7DDCB8
namespace gamemd {
long long get_int64_arg_1(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __cdecl get_int64_arg_1(_DWORD *a1)
{
  *a1 += 8; /*0x7ddcbc*/
  return *(_QWORD *)(*a1 - 8); /*0x7ddcc7*/
}
}
} // namespace gamemd

// 0x7DDCC8
namespace gamemd {
short get_short_arg_0(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __cdecl get_short_arg_0(_DWORD *a1)
{
  *a1 += 4; /*0x7ddccc*/
  return *(_WORD *)(*a1 - 4); /*0x7ddcd5*/
}
}
} // namespace gamemd

// 0x7DDCD6
namespace gamemd {
wchar_t * _wcsupr(CampaignScore * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__cdecl _wcsupr(CampaignScore *aP0)
{
  CampaignScore *result; // eax
  CampaignScore *j; // ecx
  unsigned __int16 v3; // dx
  CampaignScore *i; // ecx
  unsigned __int16 v5; // dx
  CampaignScore *v6; // edi
  CampaignScore *v7; // eax
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
      v6 = (CampaignScore *)__crtLCMapStringW(dword_B782A0, (CampaignScore *)0x200, aP0, -1, 0, 0, 0); /*0x7ddda8*/
      if ( v6 ) /*0x7dddaf*/
      {
        v7 = (CampaignScore *)malloc((AbstractClass *)(2 * (_DWORD)v6)); /*0x7dddb5*/
        Block = (wchar_t *)v7; /*0x7dddbd*/
        if ( v7 ) /*0x7dddc0*/
        {
          if ( __crtLCMapStringW(dword_B782A0, (CampaignScore *)0x200, aP0, -1, v7, v6, 0) ) /*0x7dddd2*/
            wcscpy((wchar_t *)aP0, Block); /*0x7ddde4*/
        }
      }
      if ( v9 ) /*0x7dddf0*/
        _unlock(19); /*0x7dddf4*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7dddfd*/
      free(Block); /*0x7dde06*/
      return (wchar_t *)aP0; /*0x7dde0b*/
    }
    else
    {
      if ( v9 ) /*0x7ddd54*/
        _unlock(19); /*0x7ddd58*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7ddd61*/
      result = aP0; /*0x7ddd67*/
      for ( i = aP0; *(_WORD *)i->__pad_0; i = (CampaignScore *)((char *)i + 2) ) /*0x7ddd6c*/
      {
        v5 = *(_WORD *)i->__pad_0; /*0x7ddd75*/
        if ( *(_WORD *)i->__pad_0 >= 0x61u && v5 <= 0x7Au ) /*0x7ddd82*/
          *(_WORD *)i->__pad_0 = v5 - 32; /*0x7ddd87*/
      }
    }
  }
  else
  {
    result = aP0; /*0x7ddcea*/
    for ( j = aP0; *(_WORD *)j->__pad_0; j = (CampaignScore *)((char *)j + 2) ) /*0x7ddcef*/
    {
      v3 = *(_WORD *)j->__pad_0; /*0x7ddcf8*/
      if ( *(_WORD *)j->__pad_0 >= 0x61u && v3 <= 0x7Au ) /*0x7ddd05*/
        *(_WORD *)j->__pad_0 = v3 - 32; /*0x7ddd0a*/
    }
  }
  return (wchar_t *)result; /*0x7dde0f*/
}
}
} // namespace gamemd

// 0x7DDE13
namespace gamemd {
wchar_t * _wcsdup(CampaignScore * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__cdecl _wcsdup(CampaignScore *aP0)
{
  size_t v1; // eax
  wchar_t *v2; // eax

  if ( aP0 && (v1 = wcslen((const wchar_t *)aP0), (v2 = (wchar_t *)malloc((AbstractClass *)(2 * v1 + 2))) != 0) ) /*0x7dde30*/
    return wcscpy(v2, (const wchar_t *)aP0); /*0x7dde34*/
  else
    return 0; /*0x7dde3d*/
}
}
} // namespace gamemd

// 0x7DDE50
namespace gamemd {
char * _strrev(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__cdecl _strrev(IUnknown *aP0)
{
  ObjectClass *v1; // esi
  unsigned int v2; // kr04_4
  char *i; // edi
  char v4; // ah

  v1 = (ObjectClass *)aP0; /*0x7dde5a*/
  v2 = strlen((const char *)aP0) + 1; /*0x7dde61*/
  if ( ~v2 != -2 ) /*0x7dde66*/
  {
    for ( i = (char *)aP0 + v2 - 2; v1 < (ObjectClass *)i; --i ) /*0x7dde69*/
    {
      v4 = v1->__pad_0[0]; /*0x7dde6e*/
      v1->__pad_0[0] = *i; /*0x7dde72*/
      *i = v4; /*0x7dde74*/
      v1 = (ObjectClass *)((char *)v1 + 1); /*0x7dde76*/
    }
  }
  return (char *)aP0; /*0x7dde7c*/
}
}
} // namespace gamemd

// 0x7DDE80
namespace gamemd {
int _wcsnicmp(ObjectClass * aP0, const wchar_t * String2, size_t MaxCount)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _wcsnicmp(ObjectClass *aP0, const wchar_t *String2, size_t MaxCount)
{
  int result; // eax
  const wchar_t *v4; // edx
  ObjectClass *v5; // ecx
  wchar_t v6; // ax
  ObjectClass *v7; // esi
  const wchar_t *v8; // edi
  wint_t v9; // ax
  wint_t v10; // ax
  wint_t v11; // ax
  bool v12; // zf
  int v13; // [esp+4h] [ebp-4h]
  wint_t String1; // [esp+10h] [ebp+8h]
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
      v7 = aP0; /*0x7ddf1b*/
      v8 = String2; /*0x7ddf1f*/
      do /*0x7ddf50*/
      {
        v9 = *(_WORD *)v7->__pad_0; /*0x7ddf22*/
        v7 = (ObjectClass *)((char *)v7 + 2); /*0x7ddf27*/
        LOWORD(String2a) = towlower_0(v9); /*0x7ddf2d*/
        v10 = *v8++; /*0x7ddf30*/
        v11 = towlower_0(v10); /*0x7ddf36*/
        v12 = MaxCount-- == 1; /*0x7ddf3b*/
        String1 = v11; /*0x7ddf40*/
      }
      while ( !v12 && (_WORD)String2a && (_WORD)String2a == v11 ); /*0x7ddf50*/
      if ( v13 ) /*0x7ddf57*/
        _unlock(19); /*0x7ddf5b*/
      else
        InterlockedDecrement(&dword_B78BA4); /*0x7ddf64*/
    }
    else
    {
      v4 = String2; /*0x7dde9b*/
      v5 = aP0; /*0x7dde9e*/
      do /*0x7ddee8*/
      {
        LOWORD(result) = *(_WORD *)v5->__pad_0; /*0x7ddea1*/
        if ( *(_WORD *)v5->__pad_0 <= 0x5Au && (unsigned __int16)result >= 0x41u ) /*0x7ddeae*/
          result += 32; /*0x7ddeb0*/
        String2a = (const wchar_t *)result; /*0x7ddeb3*/
        v6 = *v4; /*0x7ddeb6*/
        if ( *v4 <= 0x5Au && v6 >= 0x41u ) /*0x7ddec3*/
          v6 += 32; /*0x7ddec5*/
        String1 = v6; /*0x7ddec9*/
        v5 = (ObjectClass *)((char *)v5 + 2); /*0x7ddecc*/
        ++v4; /*0x7ddece*/
        if ( !--MaxCount ) /*0x7dded2*/
          break; /*0x7dded2*/
        HIWORD(result) = HIWORD(String2a); /*0x7dded8*/
        if ( !(_WORD)String2a ) /*0x7ddede*/
          break; /*0x7ddede*/
      }
      while ( (_WORD)String2a == v6 ); /*0x7ddee8*/
    }
    return (unsigned __int16)String2a - String1; /*0x7ddf72*/
  }
  return result; /*0x7ddf75*/
}
}
} // namespace gamemd

// 0x7DDF78
namespace gamemd {
int _filelength(int FileHandle)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _filelength(int FileHandle)
{
  LONG v1; // edi
  DWORD v2; // ebx

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_B78A80[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 ) /*0x7ddf9e*/
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
}
} // namespace gamemd

// 0x7DE002
namespace gamemd {
wint_t towlower(wint_t C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wint_t __cdecl towlower(wint_t C)
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
}
} // namespace gamemd

// 0x7DE07C
namespace gamemd {
wint_t towlower_0(wint_t C)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wint_t __cdecl towlower_0(wint_t C)
{
  int v1; // ecx
  wint_t result; // ax
  bool v3; // zf
  WCHAR DestStr; // [esp+0h] [ebp-2h] BYREF

  DestStr = HIWORD(v1); /*0x7de07f*/
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
}
} // namespace gamemd

// 0x7DE0F1
namespace gamemd {
HANDLE __initconin()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HANDLE __initconin()
{
  HANDLE result; // eax

  result = CreateFileA("CONIN$", 0xC0000000, 3u, 0, 3u, 0, 0); /*0x7de104*/
  MEMORY[0x87DD80] = result; /*0x7de10a*/
  return result; /*0x7de10f*/
}
}
} // namespace gamemd

// 0x7DE110
namespace gamemd {
HANDLE __initconout()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, 0, 3u, 0, 0); /*0x7de123*/
  MEMORY[0x87DD84] = result; /*0x7de129*/
  return result; /*0x7de12e*/
}
}
} // namespace gamemd

// 0x7DE12F
namespace gamemd {
HANDLE __termcon()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( MEMORY[0x87DD84] != (HANDLE)-1 && MEMORY[0x87DD84] != (HANDLE)-2 ) /*0x7de143*/
    CloseHandle(MEMORY[0x87DD84]); /*0x7de146*/
  result = MEMORY[0x87DD80]; /*0x7de148*/
  if ( MEMORY[0x87DD80] != (HANDLE)-1 && MEMORY[0x87DD80] != (HANDLE)-2 ) /*0x7de155*/
    return (HANDLE)CloseHandle(MEMORY[0x87DD80]); /*0x7de158*/
  return result; /*0x7de15a*/
}
}
} // namespace gamemd

// 0x7DE17D
namespace gamemd {
int _putch(int Ch)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl _putch(int Ch)
{
  DWORD v1; // ecx
  DWORD NumberOfCharsWritten; // [esp+0h] [ebp-4h] BYREF

  NumberOfCharsWritten = v1; /*0x7de180*/
  HIBYTE(Ch) = Ch; /*0x7de18b*/
  if ( MEMORY[0x87DD84] == (HANDLE)-2 ) /*0x7de18e*/
    __initconout(); /*0x7de190*/
  if ( MEMORY[0x87DD84] == (HANDLE)-1 || !WriteConsoleA(MEMORY[0x87DD84], (char *)&Ch + 3, 1u, &NumberOfCharsWritten, 0) ) /*0x7de1ac*/
    return -1; /*0x7de1bc*/
  else
    return HIBYTE(Ch); /*0x7de1b6*/
}
}
} // namespace gamemd

// 0x7DE1C2
namespace gamemd {
int ReadConsoleInputA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall ReadConsoleInputA(
        HANDLE hConsoleInput,
        PINPUT_RECORD lpBuffer,
        DWORD nLength,
        LPDWORD lpNumberOfEventsRead)
{
  return __imp_ReadConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
}
} // namespace gamemd

// 0x7DE1C8
namespace gamemd {
int SetConsoleMode()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall SetConsoleMode(HANDLE hConsoleHandle, DWORD dwMode)
{
  return __imp_SetConsoleMode(hConsoleHandle, dwMode);
}
}
} // namespace gamemd

// 0x7DE1CE
namespace gamemd {
int GetConsoleMode()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall GetConsoleMode(HANDLE hConsoleHandle, LPDWORD lpMode)
{
  return __imp_GetConsoleMode(hConsoleHandle, lpMode);
}
}
} // namespace gamemd

// 0x7DE1D4
namespace gamemd {
int PeekConsoleInputA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall PeekConsoleInputA(
        HANDLE hConsoleInput,
        PINPUT_RECORD lpBuffer,
        DWORD nLength,
        LPDWORD lpNumberOfEventsRead)
{
  return __imp_PeekConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
}
} // namespace gamemd

// 0x7DE1DA
namespace gamemd {
int GetNumberOfConsoleInputEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall GetNumberOfConsoleInputEvents(HANDLE hConsoleInput, LPDWORD lpNumberOfEvents)
{
  return __imp_GetNumberOfConsoleInputEvents(hConsoleInput, lpNumberOfEvents);
}
}
} // namespace gamemd

// 0x7DE1E0
namespace gamemd {
int WriteConsoleA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
BOOL __stdcall WriteConsoleA(
        HANDLE hConsoleOutput,
        const void *lpBuffer,
        DWORD nNumberOfCharsToWrite,
        LPDWORD lpNumberOfCharsWritten,
        LPVOID lpReserved)
{
  return __imp_WriteConsoleA(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, lpReserved);
}
}
} // namespace gamemd

// 0x7DE200
namespace gamemd {
unsigned int  __spoils<ecx> ConvertRGB24to556(int a1, unsigned short * a2, __m64 a3, __m64 a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __cdecl __spoils<ecx> ConvertRGB24to556(int a1, _WORD *a2, __m64 a3, __m64 a4, int a5)
{
  _WORD *v5; // edi
  unsigned __int8 *v6; // esi
  _BYTE *v7; // edx
  int v8; // ebx
  unsigned int v9; // kr00_4
  unsigned __int8 *v10; // esi
  _BYTE *v11; // edx
  _WORD *v12; // edi
  unsigned int *v13; // esi
  _BYTE *v14; // edx
  _WORD *v15; // edi
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

  if ( MEMORY[0x84E862] )
  {
    v38 = 255; /*0x7de267*/
    v13 = (unsigned int *)(a1 + 3); /*0x7de277*/
    v14 = (_BYTE *)(a5 + 1); /*0x7de27a*/
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
        *v15 = ((v21 & 0xF80000u) >> 19) | ((unsigned __int16)(v21 & 0xFC00) >> 5) | ((v21 & 0xF8) << 8); /*0x7de301*/
        if ( !--v38 ) /*0x7de307*/
          goto LABEL_8; /*0x7de307*/
      }
      v24 = _mm_cvtsi64_si32(v20); /*0x7de340*/
      v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v19); /*0x7de36b*/
      v13 = (unsigned int *)((char *)v13 + 3); /*0x7de370*/
      ++v14; /*0x7de375*/
      *v15 = ((v24 & 0xF80000u) >> 19) | ((unsigned __int16)(v24 & 0xFC00) >> 5) | ((v24 & 0xF8) << 8); /*0x7de376*/
      --v38; /*0x7de379*/
    }
    while ( v38 ); /*0x7de37c*/
LABEL_8:
    v22 = _mm_cvtsi64_si32(_m_packuswb(v17, v17)); /*0x7de309*/
    result = ((v22 & 0xF80000u) >> 19) | ((unsigned __int16)(v22 & 0xFC00) >> 5) | ((v22 & 0xF8) << 8); /*0x7de332*/
    v15[1] = result; /*0x7de334*/
    _m_empty(); /*0x7de337*/
  }
  else if ( MEMORY[0x84E860] )
  {
    v9 = __readeflags(); /*0x7de23d*/
    v37 = 255; /*0x7de23f*/
    v10 = (unsigned __int8 *)(a1 + 3); /*0x7de256*/
    v11 = (_BYTE *)(a5 + 1); /*0x7de259*/
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
    v6 = (unsigned __int8 *)(a1 + 3); /*0x7de22d*/
    v7 = (_BYTE *)(a5 + 1); /*0x7de230*/
    *a2 = 0; /*0x7de231*/
    v8 = 0; /*0x7de236*/
    do
    {
      while ( 1 )
      {
        LOBYTE(v8) = v6[1]; /*0x7de442*/
        v31 = 0; /*0x7de445*/
        v32 = *v6; /*0x7de447*/
        if ( !*v7 ) /*0x7de449*/
          break; /*0x7de449*/
        LOBYTE(v31) = v6[2]; /*0x7de44e*/
        ++v7; /*0x7de451*/
        v6 += 3; /*0x7de461*/
        v33 = (8 /*0x7de4aa*/
             * (((unsigned __int8)(((unsigned int)(a3.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
               | (unsigned __int8)((unsigned int)(a3.m64_i32[1] * v8) >> 16))
              & 0xFC))
            | ((((unsigned __int8)(((unsigned int)(a3.m64_i32[0] * v32) >> 16 <= 0xFF) - 1)
               | (unsigned __int8)((unsigned int)(a3.m64_i32[0] * v32) >> 16))
              & 0xF8) << 8);
        ++v5; /*0x7de4ac*/
        v8 = 0; /*0x7de4af*/
        result = ((unsigned __int8)(((unsigned int)(a4.m64_i32[0] * v31) >> 16 <= 0xFF
                                   ? (unsigned __int8)((unsigned int)(a4.m64_i32[0] * v31) >> 16)
                                   : -1)
                                  & 0xF8) >> 3)
               | v33;
        v34 = v36-- == 1; /*0x7de4b3*/
        *v5 = result; /*0x7de4b6*/
        if ( v34 ) /*0x7de4b9*/
          return result; /*0x7de4b9*/
      }
      LOBYTE(v31) = v6[2]; /*0x7de4c2*/
      ++v7; /*0x7de4c5*/
      v6 += 3; /*0x7de4d5*/
      v35 = (8 /*0x7de51e*/
           * (((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
             | (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v8) >> 16))
            & 0xFC))
          | ((((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v32) >> 16 <= 0xFF) - 1)
             | (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v32) >> 16))
            & 0xF8) << 8);
      ++v5; /*0x7de520*/
      v8 = 0; /*0x7de523*/
      result = ((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v31) >> 16 <= 0xFF
                                 ? (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v31) >> 16)
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
} // namespace gamemd

// 0x7DE53A
namespace gamemd {
unsigned int  __spoils<ecx> ConvertRGB24toRGB565(int a1, unsigned short * a2, __m64 a3, __m64 a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __cdecl __spoils<ecx> ConvertRGB24toRGB565(int a1, _WORD *a2, __m64 a3, __m64 a4, int a5)
{
  _WORD *v5; // edi
  unsigned __int8 *v6; // esi
  _BYTE *v7; // edx
  int v8; // ebx
  unsigned int v9; // kr00_4
  unsigned __int8 *v10; // esi
  _BYTE *v11; // edx
  _WORD *v12; // edi
  unsigned int *v13; // esi
  _BYTE *v14; // edx
  _WORD *v15; // edi
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

  if ( MEMORY[0x84E862] )
  {
    v38 = 255; /*0x7de5a1*/
    v13 = (unsigned int *)(a1 + 3); /*0x7de5b1*/
    v14 = (_BYTE *)(a5 + 1); /*0x7de5b4*/
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
        *v15 = ((v21 & 0xF80000u) >> 19) | ((unsigned __int16)(v21 & 0xF800) >> 6) | ((v21 & 0xF8) << 7); /*0x7de641*/
        if ( !--v38 ) /*0x7de647*/
          goto LABEL_8; /*0x7de647*/
      }
      v24 = _mm_cvtsi64_si32(v20); /*0x7de680*/
      v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v19); /*0x7de6ab*/
      v13 = (unsigned int *)((char *)v13 + 3); /*0x7de6b0*/
      ++v14; /*0x7de6b5*/
      *v15 = ((v24 & 0xF80000u) >> 19) | ((unsigned __int16)(v24 & 0xF800) >> 6) | ((v24 & 0xF8) << 7); /*0x7de6b6*/
      --v38; /*0x7de6b9*/
    }
    while ( v38 ); /*0x7de6bc*/
LABEL_8:
    v22 = _mm_cvtsi64_si32(_m_packuswb(v17, v17)); /*0x7de649*/
    result = ((v22 & 0xF80000u) >> 19) | ((unsigned __int16)(v22 & 0xF800) >> 6) | ((v22 & 0xF8) << 7); /*0x7de672*/
    v15[1] = result; /*0x7de674*/
    _m_empty(); /*0x7de677*/
  }
  else if ( MEMORY[0x84E860] )
  {
    v9 = __readeflags(); /*0x7de577*/
    v37 = 255; /*0x7de579*/
    v10 = (unsigned __int8 *)(a1 + 3); /*0x7de590*/
    v11 = (_BYTE *)(a5 + 1); /*0x7de593*/
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
    v6 = (unsigned __int8 *)(a1 + 3); /*0x7de567*/
    v7 = (_BYTE *)(a5 + 1); /*0x7de56a*/
    *a2 = 0; /*0x7de56b*/
    v8 = 0; /*0x7de570*/
    do
    {
      while ( 1 )
      {
        LOBYTE(v8) = v6[1]; /*0x7de782*/
        v31 = 0; /*0x7de785*/
        v32 = *v6; /*0x7de787*/
        if ( !*v7 ) /*0x7de789*/
          break; /*0x7de789*/
        LOBYTE(v31) = v6[2]; /*0x7de78e*/
        ++v7; /*0x7de791*/
        v6 += 3; /*0x7de7a1*/
        v33 = (4 /*0x7de7ea*/
             * (((unsigned __int8)(((unsigned int)(a3.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
               | (unsigned __int8)((unsigned int)(a3.m64_i32[1] * v8) >> 16))
              & 0xF8))
            | ((((unsigned __int8)(((unsigned int)(a3.m64_i32[0] * v32) >> 16 <= 0xFF) - 1)
               | (unsigned __int8)((unsigned int)(a3.m64_i32[0] * v32) >> 16))
              & 0xF8) << 7);
        ++v5; /*0x7de7ec*/
        v8 = 0; /*0x7de7ef*/
        result = ((unsigned __int8)(((unsigned int)(a4.m64_i32[0] * v31) >> 16 <= 0xFF
                                   ? (unsigned __int8)((unsigned int)(a4.m64_i32[0] * v31) >> 16)
                                   : -1)
                                  & 0xF8) >> 3)
               | v33;
        v34 = v36-- == 1; /*0x7de7f3*/
        *v5 = result; /*0x7de7f6*/
        if ( v34 ) /*0x7de7f9*/
          return result; /*0x7de7f9*/
      }
      LOBYTE(v31) = v6[2]; /*0x7de802*/
      ++v7; /*0x7de805*/
      v6 += 3; /*0x7de815*/
      v35 = (4 /*0x7de85e*/
           * (((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
             | (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v8) >> 16))
            & 0xF8))
          | ((((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v32) >> 16 <= 0xFF) - 1)
             | (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v32) >> 16))
            & 0xF8) << 7);
      ++v5; /*0x7de860*/
      v8 = 0; /*0x7de863*/
      result = ((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v31) >> 16 <= 0xFF
                                 ? (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v31) >> 16)
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
} // namespace gamemd

// 0x7DE87A
namespace gamemd {
unsigned int  __spoils<ecx> ConvertRGB24to655(int a1, unsigned short * a2, __m64 a3, __m64 a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __cdecl __spoils<ecx> ConvertRGB24to655(int a1, _WORD *a2, __m64 a3, __m64 a4, int a5)
{
  _WORD *v5; // edi
  unsigned __int8 *v6; // esi
  _BYTE *v7; // edx
  int v8; // ebx
  unsigned int v9; // kr00_4
  unsigned __int8 *v10; // esi
  _BYTE *v11; // edx
  _WORD *v12; // edi
  unsigned int *v13; // esi
  _BYTE *v14; // edx
  _WORD *v15; // edi
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

  if ( MEMORY[0x84E862] )
  {
    v38 = 255; /*0x7de8e1*/
    v13 = (unsigned int *)(a1 + 3); /*0x7de8f1*/
    v14 = (_BYTE *)(a5 + 1); /*0x7de8f4*/
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
        *v15 = ((v21 & 0xFC0000u) >> 18) | ((unsigned __int16)(v21 & 0xF800) >> 5) | ((v21 & 0xF8) << 8); /*0x7de981*/
        if ( !--v38 ) /*0x7de987*/
          goto LABEL_8; /*0x7de987*/
      }
      v24 = _mm_cvtsi64_si32(v20); /*0x7de9c0*/
      v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v19); /*0x7de9eb*/
      v13 = (unsigned int *)((char *)v13 + 3); /*0x7de9f0*/
      ++v14; /*0x7de9f5*/
      *v15 = ((v24 & 0xFC0000u) >> 18) | ((unsigned __int16)(v24 & 0xF800) >> 5) | ((v24 & 0xF8) << 8); /*0x7de9f6*/
      --v38; /*0x7de9f9*/
    }
    while ( v38 ); /*0x7de9fc*/
LABEL_8:
    v22 = _mm_cvtsi64_si32(_m_packuswb(v17, v17)); /*0x7de989*/
    result = ((v22 & 0xFC0000u) >> 18) | ((unsigned __int16)(v22 & 0xF800) >> 5) | ((v22 & 0xF8) << 8); /*0x7de9b2*/
    v15[1] = result; /*0x7de9b4*/
    _m_empty(); /*0x7de9b7*/
  }
  else if ( MEMORY[0x84E860] )
  {
    v9 = __readeflags(); /*0x7de8b7*/
    v37 = 255; /*0x7de8b9*/
    v10 = (unsigned __int8 *)(a1 + 3); /*0x7de8d0*/
    v11 = (_BYTE *)(a5 + 1); /*0x7de8d3*/
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
    v6 = (unsigned __int8 *)(a1 + 3); /*0x7de8a7*/
    v7 = (_BYTE *)(a5 + 1); /*0x7de8aa*/
    *a2 = 0; /*0x7de8ab*/
    v8 = 0; /*0x7de8b0*/
    do
    {
      while ( 1 )
      {
        LOBYTE(v8) = v6[1]; /*0x7deac2*/
        v31 = 0; /*0x7deac5*/
        v32 = *v6; /*0x7deac7*/
        if ( !*v7 ) /*0x7deac9*/
          break; /*0x7deac9*/
        LOBYTE(v31) = v6[2]; /*0x7deace*/
        ++v7; /*0x7dead1*/
        v6 += 3; /*0x7deae1*/
        v33 = (8 /*0x7deb2a*/
             * (((unsigned __int8)(((unsigned int)(a3.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
               | (unsigned __int8)((unsigned int)(a3.m64_i32[1] * v8) >> 16))
              & 0xF8))
            | ((((unsigned __int8)(((unsigned int)(a3.m64_i32[0] * v32) >> 16 <= 0xFF) - 1)
               | (unsigned __int8)((unsigned int)(a3.m64_i32[0] * v32) >> 16))
              & 0xF8) << 8);
        ++v5; /*0x7deb2c*/
        v8 = 0; /*0x7deb2f*/
        result = ((unsigned __int8)(((unsigned int)(a4.m64_i32[0] * v31) >> 16 <= 0xFF
                                   ? (unsigned __int8)((unsigned int)(a4.m64_i32[0] * v31) >> 16)
                                   : -1)
                                  & 0xFC) >> 2)
               | v33;
        v34 = v36-- == 1; /*0x7deb33*/
        *v5 = result; /*0x7deb36*/
        if ( v34 ) /*0x7deb39*/
          return result; /*0x7deb39*/
      }
      LOBYTE(v31) = v6[2]; /*0x7deb42*/
      ++v7; /*0x7deb45*/
      v6 += 3; /*0x7deb55*/
      v35 = (8 /*0x7deb9e*/
           * (((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
             | (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v8) >> 16))
            & 0xF8))
          | ((((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v32) >> 16 <= 0xFF) - 1)
             | (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v32) >> 16))
            & 0xF8) << 8);
      ++v5; /*0x7deba0*/
      v8 = 0; /*0x7deba3*/
      result = ((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v31) >> 16 <= 0xFF
                                 ? (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v31) >> 16)
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
} // namespace gamemd

// 0x7DEBBA
namespace gamemd {
unsigned int  __spoils<ecx> ConvertRGB24to565(int a1, unsigned short * a2, __m64 a3, __m64 a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __cdecl __spoils<ecx> ConvertRGB24to565(int a1, _WORD *a2, __m64 a3, __m64 a4, int a5)
{
  _WORD *v5; // edi
  unsigned __int8 *v6; // esi
  _BYTE *v7; // edx
  int v8; // ebx
  unsigned int v9; // kr00_4
  unsigned __int8 *v10; // esi
  _BYTE *v11; // edx
  _WORD *v12; // edi
  unsigned int *v13; // esi
  _BYTE *v14; // edx
  _WORD *v15; // edi
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

  if ( MEMORY[0x84E862] )
  {
    v38 = 255; /*0x7dec21*/
    v13 = (unsigned int *)(a1 + 3); /*0x7dec31*/
    v14 = (_BYTE *)(a5 + 1); /*0x7dec34*/
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
        *v15 = ((v21 & 0xF80000u) >> 19) | ((unsigned __int16)(v21 & 0xF800) >> 6) | ((v21 & 0xFC) << 8); /*0x7decc1*/
        if ( !--v38 ) /*0x7decc7*/
          goto LABEL_8; /*0x7decc7*/
      }
      v24 = _mm_cvtsi64_si32(v20); /*0x7ded00*/
      v17 = _m_pmulhw(_m_psrlwi(_m_punpcklbw(0, (__m64)*v13), 4u), v19); /*0x7ded2b*/
      v13 = (unsigned int *)((char *)v13 + 3); /*0x7ded30*/
      ++v14; /*0x7ded35*/
      *v15 = ((v24 & 0xF80000u) >> 19) | ((unsigned __int16)(v24 & 0xF800) >> 6) | ((v24 & 0xFC) << 8); /*0x7ded36*/
      --v38; /*0x7ded39*/
    }
    while ( v38 ); /*0x7ded3c*/
LABEL_8:
    v22 = _mm_cvtsi64_si32(_m_packuswb(v17, v17)); /*0x7decc9*/
    result = ((v22 & 0xF80000u) >> 19) | ((unsigned __int16)(v22 & 0xF800) >> 6) | ((v22 & 0xFC) << 8); /*0x7decf2*/
    v15[1] = result; /*0x7decf4*/
    _m_empty(); /*0x7decf7*/
  }
  else if ( MEMORY[0x84E860] )
  {
    v9 = __readeflags(); /*0x7debf7*/
    v37 = 255; /*0x7debf9*/
    v10 = (unsigned __int8 *)(a1 + 3); /*0x7dec10*/
    v11 = (_BYTE *)(a5 + 1); /*0x7dec13*/
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
    v6 = (unsigned __int8 *)(a1 + 3); /*0x7debe7*/
    v7 = (_BYTE *)(a5 + 1); /*0x7debea*/
    *a2 = 0; /*0x7debeb*/
    v8 = 0; /*0x7debf0*/
    do
    {
      while ( 1 )
      {
        LOBYTE(v8) = v6[1]; /*0x7dee02*/
        v31 = 0; /*0x7dee05*/
        v32 = *v6; /*0x7dee07*/
        if ( !*v7 ) /*0x7dee09*/
          break; /*0x7dee09*/
        LOBYTE(v31) = v6[2]; /*0x7dee0e*/
        ++v7; /*0x7dee11*/
        v6 += 3; /*0x7dee21*/
        v33 = (4 /*0x7dee6a*/
             * (((unsigned __int8)(((unsigned int)(a3.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
               | (unsigned __int8)((unsigned int)(a3.m64_i32[1] * v8) >> 16))
              & 0xF8))
            | ((((unsigned __int8)(((unsigned int)(a3.m64_i32[0] * v32) >> 16 <= 0xFF) - 1)
               | (unsigned __int8)((unsigned int)(a3.m64_i32[0] * v32) >> 16))
              & 0xFC) << 8);
        ++v5; /*0x7dee6c*/
        v8 = 0; /*0x7dee6f*/
        result = ((unsigned __int8)(((unsigned int)(a4.m64_i32[0] * v31) >> 16 <= 0xFF
                                   ? (unsigned __int8)((unsigned int)(a4.m64_i32[0] * v31) >> 16)
                                   : -1)
                                  & 0xF8) >> 3)
               | v33;
        v34 = v36-- == 1; /*0x7dee73*/
        *v5 = result; /*0x7dee76*/
        if ( v34 ) /*0x7dee79*/
          return result; /*0x7dee79*/
      }
      LOBYTE(v31) = v6[2]; /*0x7dee82*/
      ++v7; /*0x7dee85*/
      v6 += 3; /*0x7dee95*/
      v35 = (4 /*0x7deede*/
           * (((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v8) >> 16 <= 0xFF) - 1)
             | (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v8) >> 16))
            & 0xF8))
          | ((((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v32) >> 16 <= 0xFF) - 1)
             | (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v32) >> 16))
            & 0xFC) << 8);
      ++v5; /*0x7deee0*/
      v8 = 0; /*0x7deee3*/
      result = ((unsigned __int8)(((unsigned int)(a4.m64_i32[1] * v31) >> 16 <= 0xFF
                                 ? (unsigned __int8)((unsigned int)(a4.m64_i32[1] * v31) >> 16)
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
} // namespace gamemd

// 0x7DF9B7
namespace gamemd {
int sub_7DF9B7(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_7DF9B7(int *a1)
{
  return Voxel::FacePixelBuffer(a1);
}
}
} // namespace gamemd

// 0x7D12E6
namespace gamemd {
unsigned char * strncnt(const unsigned char * String, int Count)
{
const unsigned char* scan = String;
int remaining = Count - 1;
if (Count)
{
    do
    {
        if (!*scan)
            break;
        ++scan;
    }
    while (remaining--);
}
if (*scan)
    return (unsigned char *)Count;
else
    return (unsigned char *)(scan - String);
}
} // namespace gamemd

// 0x7D168E
namespace gamemd {
int * _errno()
{
return (int *)(_getptd() + 8);
}
} // namespace gamemd

// 0x7D1697
namespace gamemd {
unsigned int * __doserrno()
{
return (unsigned int *)(_getptd() + 12);
}
} // namespace gamemd

// 0x7D2183
namespace gamemd {
int _un_inc(int Character, FILE * Stream)
{
if (Character != -1)
    return ungetc_0(Character, Stream);
return Character;
}
} // namespace gamemd

// 0x7D219A
namespace gamemd {
int _whiteout(unsigned int * a1, FILE * Stream)
{
int current;
do
{
    ++*a1;
    current = fgetc_0(Stream);
}
while (isspace(current));
return current;
}
} // namespace gamemd

// 0x7D290B
namespace gamemd {
unsigned int * write_char_0(wchar_t WCh, FILE * File, unsigned int * a3)
{
bool failed = (unsigned __int16)_putwc_lk(WCh, File) == 0xFFFF;
unsigned int* result = a3;
if (failed)
    *a3 = -1;
else
    ++*a3;
return result;
}
} // namespace gamemd

// 0x7D3679
namespace gamemd {
int CPtoLCID(int a1)
{
switch (a1)
{
case 932:
    return 1041;
case 936:
    return 2052;
case 949:
    return 1042;
case 950:
    return 1028;
}
return 0;
}
} // namespace gamemd

// 0x7D4596
namespace gamemd {
int fgetwc(FILE * File)
{
return _getwc_lk(File);
}
} // namespace gamemd

// 0x7D468C
namespace gamemd {
char * _itoa(int Value, char * Buffer, int Radix)
{
if (Radix == 10 && Value < 0)
    xtoa(Value, Buffer, 10, 1);
else
    xtoa(Value, Buffer, Radix, 0);
return Buffer;
}
} // namespace gamemd

// 0x7D46B9
namespace gamemd {
char xtoa(unsigned int a1, char * a2, unsigned int a3, int a4)
{
char* out = a2;
unsigned int value;
if (a4)
{
    *a2 = 45;
    ++out;
    value = -a1;
}
else
{
    value = a1;
}
char* start = out;
char result = 0;
do
{
    int digit = value % a3;
    bool isDecimal = value % a3 <= 9;
    value /= a3;
    char digitChar;
    if (isDecimal)
        digitChar = digit + 48;
    else
        digitChar = digit + 87;
    *out = digitChar;
    ++out;
}
while (value);
*out = 0;
char* back = out;
--back;
do
{
    result = *back;
    *back = *start;
    *start = result;
    --back;
    ++start;
}
while (start < back);
return result;
}
} // namespace gamemd

// 0x7D4715
namespace gamemd {
char * _ltoa(int Value, char * Buffer, int Radix)
{
int isNegative = 0;
if (Radix == 10)
    isNegative = Value < 0;
xtoa(Value, Buffer, Radix, isNegative);
return Buffer;
}
} // namespace gamemd

// 0x7D473F
namespace gamemd {
char * _ultoa(unsigned int Value, char * Buffer, int Radix)
{
xtoa(Value, Buffer, Radix, 0);
return Buffer;
}
} // namespace gamemd

// 0x7D475A
namespace gamemd {
char * _i64toa(long long Value, char * Buffer, int Radix)
{
int isNegative = 0;
if (Radix == 10 && (int)(Value >> 32) <= 0)
    isNegative = Value < 0;
x64toa_20(Value, Buffer, Radix, isNegative);
return Buffer;
}
} // namespace gamemd

// 0x7D478B
namespace gamemd {
char * x64toa_20(unsigned long long a1, char * a2, unsigned int a3, int a4)
{
char* out = a2;
unsigned long long value;
if (a4)
{
    *a2 = 45;
    ++out;
    value = -(__int64)a1;
}
else
{
    value = a1;
}
char* start = out;
do
{
    unsigned int digit = value % a3;
    value /= a3;
    char digitChar;
    if (digit <= 9)
        digitChar = digit + 48;
    else
        digitChar = digit + 87;
    *out = digitChar;
    ++out;
}
while ((unsigned int)(value >> 32) || (unsigned int)value);
*out = 0;
char* back = out;
--back;
char* result;
do
{
    char temp = *back;
    *back = *start;
    *start = temp;
    --back;
    ++start;
    result = start;
}
while (result < back);
return result;
}
} // namespace gamemd

// 0x7D4811
namespace gamemd {
char * _ui64toa(unsigned long long Value, char * Buffer, int Radix)
{
x64toa_20(Value, Buffer, Radix, 0);
return Buffer;
}
} // namespace gamemd

// 0x7D4BD8
namespace gamemd {
void ** __pxcptinfoptrs()
{
return (void **)(_getptd() + 84);
}
} // namespace gamemd

// 0x7D53C2
namespace gamemd {
int _access(const char * FileName, int AccessMode)
{
DWORD FileAttributesA = GetFileAttributesA(FileName);
if (FileAttributesA == -1)
{
    DWORD LastError = GetLastError();
    _dosmaperr(LastError);
    return -1;
}
if ((FileAttributesA & 1) != 0 && (AccessMode & 2) != 0)
{
    *_errno() = 13;
    *__doserrno() = 5;
    return -1;
}
return 0;
}
} // namespace gamemd

// 0x7D58C8
namespace gamemd {
unsigned char * store_dt(unsigned char * a1, int a2)
{
  *a1 = a2 / 10 + 48;
  a1[1] = a2 % 10 + 48;
  return a1 + 2;
}
} // namespace gamemd

// 0x7D6A1D
namespace gamemd {
char fix_grouping_0(char * a1)
{
char* scan = a1;
char result = *a1;
for (; *scan; result = *scan)
{
    if (result < 48 || result > 57)
    {
        if (result == 59)
        {
            char* shift = scan;
            char* next = shift;
            ++next;
            do
            {
                *shift = *next;
                ++shift;
                ++next;
            }
            while (*shift);
            continue;
        }
    }
    else
    {
        *scan = result - 48;
    }
    ++scan;
}
return result;
}
} // namespace gamemd

// 0x7D6CE7
namespace gamemd {
int ReturnNull4()
{
return 0;
}
} // namespace gamemd

// 0x7D6CF0
namespace gamemd {
char * strpbrk(const char * Str, const char * Control)
{
char* result = 0;
int table[9];
memset(table, 0, 32);
while (1)
{
    char current = *Control;
    if (!*Control)
        break;
    ++Control;
    unsigned int bit = (unsigned char)current;
    table[bit >> 5] |= 1 << (bit & 31);
}
while (1)
{
    char current = *Str;
    if (!*Str)
        break;
    ++Str;
    unsigned int bit = (unsigned char)current;
    if (table[bit >> 5] & (1 << (bit & 31)))
        return (char *)(Str - 1);
}
return result;
}
} // namespace gamemd

// 0x7D7577
namespace gamemd {
int LcidFromHexString(char * a1)
{
int result = 0;
char current;
for (;; result = current + 16 * (result + 268435453))
{
    current = *a1;
    ++a1;
    if (!current)
        break;
    if (current < 97 || current > 102)
    {
        if (current >= 65 && current <= 70)
            current -= 7;
    }
    else
    {
        current -= 39;
    }
}
return result;
}
} // namespace gamemd

// 0x7D75B0
namespace gamemd {
int GetPrimaryLen(char * a1)
{
int result = 0;
char current;
for (;; ++result)
{
    current = *a1;
    ++a1;
    if ((current < 65 || current > 90) && (current < 97 || current > 122))
        break;
}
return result;
}
} // namespace gamemd

// 0x7D79FB
namespace gamemd {
int _FillZeroMan(unsigned int * a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  return 0;
}
} // namespace gamemd

// 0x7D7ED2
namespace gamemd {
void __noreturn _fptrap()
{
_amsg_exit(2u);
}
} // namespace gamemd

// 0x7DBC57
namespace gamemd {
int ReturnNull5()
{
return 0;
}
} // namespace gamemd

// 0x7DBC77
namespace gamemd {
int _ctrlfp(short a1)
{
return a1;
}
} // namespace gamemd

// 0x7DBC9A
namespace gamemd {
void _set_statfp()
{
  ;
}
} // namespace gamemd

// 0x7DC278
namespace gamemd {
int sub_7DC278()
{
return 1;
}
} // namespace gamemd

// 0x7DC72B
namespace gamemd {
void nullsub_271(int a1)
{
  ;
}
} // namespace gamemd
