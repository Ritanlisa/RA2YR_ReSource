// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AudioController_e4.hpp"

// 0x4325C0
namespace gamemd {
AudioController * * CCFileClass::Close()
{
  char result; // al
  AudioController ** v3;

  if ( !*(&this->FileName1) ) /*0x4325c3*/
    return ((int (*)(void))FileClass::CloseHandle)(); /*0x432607*/
  BufferIO::Flush(); /*0x4325ca*/
  result = *(&this->Handle8); /*0x4325cf*/
  if ( result ) /*0x4325d4*/
  {
    if ( this->MixFileIndex ) /*0x4325d6*/
    {
      v3 = (gamemd::AudioController **)((int)((gamemd::AudioController **)(*(unsigned int *)this)));
      *(&this->FileName1) = 0; /*0x4325e1*/
      result = (*(int (__thiscall **)(unsigned char *))(v3 + 52))(this); /*0x4325e5*/
      *(&this->FileName1) = 1; /*0x4325e8*/
      *(&this->Handle8) = 0; /*0x4325ec*/
      *(&this->Handle7) = 0; /*0x4325f0*/
      return result; /*0x4325f5*/
    }
    result = FileClass::CloseHandle(this); /*0x4325f8*/
    *(&this->Handle8) = 0; /*0x4325fd*/
  }
  *(&this->Handle7) = 0; /*0x432601*/
  return result; /*0x4325f4*/
}
} // namespace gamemd
// 0x535A70
namespace gamemd {
int CCFileClass::Destruct()
{
  *(&this->FileSize5) = 0; /*0x535a7c*/
  Vector::Clear((int)(&this->FileSize2)); /*0x535a83*/
  *this = &off_7E1668; /*0x535a8a*/
  return BufferIOFileClass::Dtor(); /*0x535a95*/
}
} // namespace gamemd
// 0x65D0D0
namespace gamemd {
int CCFileClass::GetFileSize()
{
  void * FileSize;
  void * result;
  int v4; // ebx
  DWORD LastError; // eax
  int v6; // [esp-8h] [ebp-10h]
FileSize = (void *)((DWORD)((void *)(0)));
  result = (void *)(this->FileName);
  if ( result == -1 ) /*0x65d0dc*/
  {
    if ( this->Destru_vt06() ) /*0x65d0e0*/
    {
      FileSize = (void *)(GetFileSize((HANDLE)this->FileTimeDateLo, 0));
      if ( FileSize == -1 ) /*0x65d0f7*/
      {
        v4 = (int)(*this);
        v6 = (int)(this->FileNameAllocated);
        LastError = (int)(GetLastError());
        this->Destru_vt16(LastError, 0, v6); /*0x65d10b*/
        result = -1 - this->Handle; /*0x65d113*/
        this->FileName = result; /*0x65d116*/
        return result; /*0x65d11b*/
      }
    }
    else if ( this->Load_1(1) ) /*0x65d122*/
    {
      FileSize = (void *)(this->GetSize());
      this->Reset_8(); /*0x65d136*/
    }
    result = (void *)((unsigned int)(FileSize - this->Handle));
    this->FileName = (unsigned int)(result);
  }
  return (int)(result);
}
} // namespace gamemd
// 0x69E320
namespace gamemd {
void CCFileClass::ProcessStream(unsigned int a1)
{
  unsigned int v1;
  void *v3; // esi
  int v4; // eax
  int v5; // eax
  unsigned int v6;
  unsigned char *v7; // ebp
  void *v8; // ecx
  unsigned int *v9; // edi
  int v10; // eax
  int v11; // eax

  v1 = dword_B077B0; /*0x69e324*/
  if ( dword_B077B0 ) /*0x69e330*/
  {
    do /*0x69e3a1*/
    {
      if ( v1[8] <= a1 && *(unsigned short *)v1 == 0xFFFF && *((unsigned char *)v1 + 16) ) /*0x69e33d*/
      {
        v3 = (void *)v1[3]; /*0x69e342*/
        if ( v3 ) /*0x69e347*/
        {
          if ( *(unsigned short *)v3 == 0xFFFF ) /*0x69e34d*/
          {
            BTree::DeleteSubtree((unsigned int *)v1[3]); /*0x69e351*/
            v4 = *((unsigned int *)v3 + 6); /*0x69e356*/
            if ( v4 ) /*0x69e35b*/
              *(unsigned int *)(v4 + 28) = *((unsigned int *)v3 + 7); /*0x69e360*/
            v5 = *((unsigned int *)v3 + 7); /*0x69e363*/
            if ( v5 ) /*0x69e368*/
              *(unsigned int *)(v5 + 24) = *((unsigned int *)v3 + 6); /*0x69e36d*/
            else
              dword_B077B0 = (void *)*((unsigned int *)v3 + 6); /*0x69e375*/
            if ( *((unsigned int *)v3 + 2) ) /*0x69e37a*/
            {
              free(*((void **)v3 + 2)); /*0x69e382*/
              *((unsigned int *)v3 + 2) = 0; /*0x69e38a*/
            }
          }
          RA2_OPDEL(v3); /*0x69e38e*/
        }
        v1[3] = 0; /*0x69e396*/
        *((unsigned char *)v1 + 16) = 0; /*0x69e399*/
      }
      v1 = (unsigned int *)v1[6]; /*0x69e39c*/
    }
    while ( v1 ); /*0x69e3a1*/
  }
  v6 = dword_B077B4; /*0x69e3a3*/
  if ( dword_B077B4 ) /*0x69e3ab*/
  {
    if ( *(unsigned short *)dword_B077B4 == 0xFFFF ) /*0x69e3b1*/
    {
      v7 = (unsigned char *)((char *)dword_B077B4 + 16);
      if ( *((unsigned char *)dword_B077B4 + 16) ) /*0x69e3b3*/
      {
        v8 = (unsigned int *)((void *)*((unsigned int *)dword_B077B4 + 3));
        v9 = (unsigned int *)((char *)dword_B077B4 + 12);
        if ( v8 ) /*0x69e3c5*/
          MixFileClass::CacheNode_Dtor(v8, 1); /*0x69e3c9*/
        *v9 = 0; /*0x69e3ce*/
        *v7 = 0; /*0x69e3d0*/
      }
      v10 = *((unsigned int *)v6 + 6); /*0x69e3d3*/
      if ( v10 ) /*0x69e3d8*/
        *(unsigned int *)(v10 + 28) = *((unsigned int *)v6 + 7); /*0x69e3dd*/
      v11 = *((unsigned int *)v6 + 7); /*0x69e3e0*/
      if ( v11 ) /*0x69e3e5*/
        *(unsigned int *)(v11 + 24) = *((unsigned int *)v6 + 6); /*0x69e3ea*/
      else
        dword_B077B0 = (void *)*((unsigned int *)v6 + 6); /*0x69e3f2*/
      if ( *((unsigned int *)v6 + 2) ) /*0x69e3f7*/
      {
        free(*((void **)v6 + 2)); /*0x69e3ff*/
        *((unsigned int *)v6 + 2) = 0; /*0x69e407*/
      }
    }
    RA2_OPDEL(v6); /*0x69e40b*/
    dword_B077B4 = 0; /*0x69e413*/
    dword_B077B8 = 0; /*0x69e419*/
    dword_B077BC = 0; /*0x69e41f*/
  }
}
} // namespace gamemd