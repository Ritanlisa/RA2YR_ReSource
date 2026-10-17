#include "core/stream_ext.hpp"
#include "e4/classes/Audio_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/AudioStream_e4.hpp"  // g57c5 W5d scope supply
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int ProcessAudioStream(int* p0, int p1);  // x4:signals@0x409880
} // namespace gamemd
// ---- g57c5 W5 vocab (declaration-only) ----
namespace gamemd {
class AudioBuffer;  // g57c5 W5 fwd
} // namespace gamemd
// ---- g57c5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) 
namespace gamemd {

    void Debug_Log(void);                              // raw 0x449612 Debug::Log;
} // namespace gamemd
// ---- g57b5 W3 end ----

namespace gamemd {

// --- Buffer ---

// 0x40a340
int Buffer::CreateDirectSound()
{

  int *v1; // ebx
  unsigned int *v2; // esi
  unsigned int *v3; // ebp
  int v4; // edx
  int v5; // eax
  unsigned int *v6; // eax
  unsigned int v7; // eax
  __int16 v9; // cx
  unsigned __int16 v10; // di
  int v11; // eax
  int v12; // edx
  unsigned int v13; // [esp+1Ch] [ebp-30h] BYREF
  Buffer *v14; // [esp+20h] [ebp-2Ch]
  unsigned short v15[2]; // [esp+24h] [ebp-28h] BYREF
  int v16; // [esp+28h] [ebp-24h]
  int v17; // [esp+2Ch] [ebp-20h]
  unsigned __int16 v18; // [esp+30h] [ebp-1Ch]
  __int16 v19; // [esp+32h] [ebp-1Ah]
  unsigned __int16 *v20; // [esp+34h] [ebp-18h]
  unsigned int v21[2]; // [esp+38h] [ebp-14h] BYREF
  int v22; // [esp+40h] [ebp-Ch]
  int v23; // [esp+44h] [ebp-8h]
  unsigned short *v24; // [esp+48h] [ebp-4h]

  v1 = (int *)this->u32_158; /*0x40a34a*/
  v2 = *(unsigned int **)(this->u32_168 + 20); /*0x40a352*/
  v14 = this; /*0x40a35a*/
  if ( !v2 ) /*0x40a35e*/
    v2 = (unsigned int *)(this->u32_AC + 68); /*0x40a366*/
  AudioStream::CheckFormatChanged(*v1, v2); /*0x40a36d*/
  v3 = v1 + 25; /*0x40a375*/
  if ( v1->q064 ) /*0x40a372*/
  {
    if ( v1->q050 == v2[3] && v1[19] == v2[2] && v1->q054 == v2[4] ) /*0x40a3a4*/
    {
      *(unsigned int *)(*v1 + 416) = 0; /*0x40a3ac*/
      goto LABEL_8; /*0x40a3ac*/
    }
    *(unsigned int *)(*v1 + 416) = 1; /*0x40a48c*/
  }
  if ( *v3 ) /*0x40a496*/
  {
    (*(void (**)(unsigned int))(*(unsigned int *)*v3 + 8))(*v3); /*0x40a4a0*/
    *v3 = 0; /*0x40a4a3*/
  }
  v9 = *((unsigned short *)v2 + 8); /*0x40a4a6*/
  v10 = *((unsigned short *)v2 + 6) * v9; /*0x40a4b2*/
  v15[1] = *((unsigned short *)v2 + 6); /*0x40a4b9*/
  v16 = 0; /*0x40a4be*/
  v15[0] = 1; /*0x40a4c2*/
  v17 = 0; /*0x40a4c9*/
  v19 = 0; /*0x40a4cd*/
  v18 = v10; /*0x40a4d1*/
  LOWORD(v20) = 0; /*0x40a4da*/
  v11 = v2[2] * v10; /*0x40a4e7*/
  v16 = v2[2]; /*0x40a4ea*/
  v19 = 8 * v9; /*0x40a4f7*/
  v17 = v11; /*0x40a508*/
  qmemcpy(v1 + 17, v2, 0x20u); /*0x40a50c*/
  v22 = 0; /*0x40a50e*/
  v23 = 0; /*0x40a515*/
  v24 = 0; /*0x40a51e*/
  LOWORD(v20) = 0; /*0x40a527*/
  v21[0] = 20; /*0x40a52e*/
  v21[1] = 232; /*0x40a53d*/
  v1->u32_6C = ((int)(8 * (3 * v11 / 0x64u) + 1023) / 1024) << 10; /*0x40a55a*/
  Debug::Log(); /*0x40a55d*/
  v12 = v1->u32_6C; /*0x40a562*/
  v24 = v15; /*0x40a56c*/
  v22 = 4 * v12; /*0x40a578*/
  if ( ppDS->lpVtbl->CreateSoundBuffer(ppDS, (LPCDSBUFFERDESC)v21, (LPDIRECTSOUNDBUFFER *)(v1 + 25), 0) ) /*0x40a587*/
  {
    *v3 = 0; /*0x40a593*/
    Debug::Log(); /*0x40a59a*/
    return -2147221504; /*0x40a5ae*/
  }
  v1->u32_68 = v22; /*0x40a5b9*/
  Debug::Log(); /*0x40a5bc*/
LABEL_8:
  v1->u32_2C = 0; /*0x40a3b2*/
  v1->u32_8 = 0; /*0x40a3b5*/
  v1->u32_3C = 4 * v1[27]; /*0x40a3be*/
  (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*v3 + 52))(*v3, 0); /*0x40a3c8*/
  (*(void (**)(unsigned int, unsigned int *, int *))(*(unsigned int *)*v3 + 16))(*v3, &v13, v1 + 13); /*0x40a3da*/
  v1->u32_C = v13 / v1->u32_6C; /*0x40a3e6*/
  v1->u32_10 = Audio::Callback(); /*0x40a3ee*/
  v1->u32_14 = v4; /*0x40a3f1*/
  v5 = *v3; /*0x40a3f7*/
  v1->q040 = v1[26]; /*0x40a3fd*/
  (*(void (**)(int, int *, int *))(*(unsigned int *)v5 + 16))(v5, v1 + 12, v1 + 13); /*0x40a405*/
  v1->q038 = v1[26] - v1[12]; /*0x40a40f*/
  v1->u32_D0 = 0; /*0x40a414*/
  v1->u32_D8 = v1->u32_C; /*0x40a41d*/
  v1->u32_D4 = 0; /*0x40a423*/
  v1->u32_DC = v1[12]; /*0x40a42b*/
  AudioBuffer::InitializePlayback((AudioBuffer *)v1); /*0x40a433*/
  v1->u32_CC = 0; /*0x40a438*/
  v6 = (unsigned int *)*v1; /*0x40a43e*/
  v1->q028 = *(unsigned int *)(*v1 + 368); /*0x40a446*/
  v1->q020 = v6[92]; /*0x40a44f*/
  v7 = v6[93]; /*0x40a452*/
  v1->q024 = v7; /*0x40a458*/
  v1->u32_2C = v7; /*0x40a45b*/
  if ( ProcessAudioStream((AudioBuffer *)v1, v1->u32_68) ) /*0x40a463*/
  {
    Buffer::UpdateVolumeSettings(v14); /*0x40a5cf*/
    if ( !(*(int (**)(unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)*v3 + 48))(*v3, 0, 0, 1) ) /*0x40a5df*/
      return 0; /*0x40a603*/
  }
  Debug::Log(); /*0x40a475*/
  return -2147221504; /*0x40a482*/

}