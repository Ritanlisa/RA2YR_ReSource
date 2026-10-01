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
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/UDPInterfaceClass_e4.hpp"
#include "e4/classes/BTree_e4.hpp"
#include "e4/classes/BufferIO_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"

// 0x4325C0
namespace gamemd {
AudioController * * CCFileClass::Close(void *a1, void *a2)
{
    unsigned int v3 = 0;  /* G37 hoist */

  char result; // al
  AudioController ** v3;

  if ( !BYTE1(this->BufferSize) ) /*0x4325c3*/
    return ((FileClass *)(int a1))->CloseHandle() ; /*0x432607*/
  BufferIO::Flush((BufferIO *)a1); /*0x4325ca*/
  result = BYTE2(a1->BufferOffset); /*0x4325cf*/
  if ( result ) /*0x4325d4*/
  {
    if ( a1->MixFileIndex ) /*0x4325d6*/
    {
      v3 = (unsigned int)((gamemd::AudioController **)(a1->FileClass));
      BYTE1(a1->BufferSize) = 0; /*0x4325e1*/
      result = (*(int ((gamemd::CCFileClass *)(**))(CCFileClass *))(*(unsigned int *)&v3 + 52))(a1); /*0x4325e5*/
      BYTE1(a1->BufferSize) = 1; /*0x4325e8*/
      BYTE2(a1->BufferOffset) = 0; /*0x4325ec*/
      BYTE1(a1->BufferOffset) = (gamemd::AudioController **)(0); /*0x4325f0*/
      return result; /*0x4325f5*/
    }
    result = ((FileClass *)(a1))->CloseHandle(); /*0x4325f8*/
    BYTE2(a1->BufferOffset) = 0; /*0x4325fd*/
  }
  BYTE1(this->BufferOffset) = (gamemd::AudioController **)(0); /*0x432601*/
  return result; /*0x4325f4*/

}
} // namespace gamemd
// 0x535A70
namespace gamemd {
void CCFileClass::Destruct(void *a1, void *a2)
{

  *(unsigned int *)this->CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x535a76*/
  *((unsigned int *)this + 25) = 0; /*0x535a7c*/
  ((Vector *)((int)(unsigned int *)this + 88))->Clear(); /*0x535a83*/
  *(unsigned int *)this->CDFileClass = (unsigned int)(&off_7E1668); /*0x535a8a*/
  return ((BufferIOFileClass *)((BufferIOFileClass *)this))->Dtor(); /*0x535a95*/

}
} // namespace gamemd
// 0x65D0D0
namespace gamemd {
int CCFileClass::GetFileSize(void *a1, void *a2)
{

  DWORD FileSize; // edi
  int result; // eax
  int v4; // ebx
  DWORD LastError; // eax
  int v6; // [esp-8h] [ebp-10h]

  FileSize = 0; /*0x65d0d4*/
  result = (int)this->FileName; /*0x65d0d6*/
  if ( result == -1 ) /*0x65d0dc*/
  {
    if ( (*(uint8_t ((gamemd::RawFileClass *)(**))(RawFileClass *))(*(unsigned int *)this->FileClass + 24))(this) ) /*0x65d0e0*/
    {
      FileSize = (DWORD)(GetFileSize(*(HANDLE *)this->FileTimeDateLo, 0));
      if ( FileSize == -1 ) /*0x65d0f7*/
      {
        v4 = *(unsigned int *)this->FileClass; /*0x65d0fd*/
        v6 = *(unsigned int *)&this->FileNameAllocated; /*0x65d0ff*/
        LastError = GetLastError(); /*0x65d102*/
        (*(void ((gamemd::RawFileClass *)(**))(RawFileClass *, DWORD, unsigned int, int))(v4 + 64))(this, LastError, 0, v6); /*0x65d10b*/
        result = -1 - (unsigned int)this->Handle; /*0x65d113*/
        this->FileName = (void *)result; /*0x65d116*/
        return result; /*0x65d11b*/
      }
    }
    else if ( (*(int ((gamemd::RawFileClass *)(**))(RawFileClass *, int))(*(unsigned int *)this->FileClass + 28))(this, 1) ) /*0x65d122*/
    {
      FileSize = (*(int ((gamemd::RawFileClass *)(**))(RawFileClass *))(*(unsigned int *)this->FileClass + 44))(this); /*0x65d130*/
      (*(void ((gamemd::RawFileClass *)(**))(RawFileClass *))(*(unsigned int *)this->FileClass + 52))(this); /*0x65d136*/
    }
    result = FileSize - (unsigned int)this->Handle; /*0x65d13e*/
    this->FileName = (void *)result; /*0x65d140*/
  }
  return result; /*0x65d119*/

}
} // namespace gamemd
// 0x69E320
namespace gamemd {
void CCFileClass::ProcessStream(unsigned int a1)
{

  unsigned int *v1; // edi
  void *v3; // esi
  int v4; // eax
  int v5; // eax
  void *v6; // esi
  unsigned char *v7; // ebp
  void *v8; // ecx
  unsigned int *v9; // edi
  int v10; // eax
  int v11; // eax

  v1 = (unsigned int *)(dword_B077B0);
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
              dword_B077B0 = (unsigned int)((void *)*((unsigned int *)v3 + 6)); /*0x69e375*/
            if ( *((unsigned int *)v3 + 2) ) /*0x69e37a*/
            {
              free(*((void **)v3 + 2)); /*0x69e382*/
              *((unsigned int *)v3 + 2) = 0; /*0x69e38a*/
            }
          }
          __3_YAXPAX_Z(v3); /*0x69e38e*/
        }
        v1[3] = 0; /*0x69e396*/
        *((unsigned char *)v1 + 16) = 0; /*0x69e399*/
      }
      v1 = (unsigned int *)v1[6]; /*0x69e39c*/
    }
    while ( v1 ); /*0x69e3a1*/
  }
  v6 = (void *)(dword_B077B4);
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
        dword_B077B0 = (unsigned int)((void *)*((unsigned int *)v6 + 6)); /*0x69e3f2*/
      if ( *((unsigned int *)v6 + 2) ) /*0x69e3f7*/
      {
        free(*((void **)v6 + 2)); /*0x69e3ff*/
        *((unsigned int *)v6 + 2) = 0; /*0x69e407*/
      }
    }
    __3_YAXPAX_Z(v6); /*0x69e40b*/
    dword_B077B4 = 0; /*0x69e413*/
    dword_B077B8 = 0; /*0x69e419*/
    dword_B077BC = 0; /*0x69e41f*/
  }

}
} // namespace gamemd