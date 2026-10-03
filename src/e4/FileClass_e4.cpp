// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Flag_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"

// 0x473AE0
namespace gamemd {
int FileClass::Write(CCFileClass * aP1, DWORD nNumberOfBytesToWrite)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473AE0)
}
} // namespace gamemd
// 0x473FC0
namespace gamemd {
const char* FileClass::SetFileName(char *aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473FC0)
}
} // namespace gamemd
// 0x65CBF0
namespace gamemd {
int FileClass::Open(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65CBF0)
}
    return 1; /*0x65cc0b*/
  if ( !a2 ) /*0x65cc17*/
  {
    FileA = (HANDLE)((int)(CreateFileA((LPCSTR)*((char *)this + 6), 0x80000000, 1u, 0, 3u, 0x80u, 0)));
    *((char *)this + 5) = (int)FileA; /*0x65cc62*/
    if ( FileA == (HANDLE)-1 ) /*0x65cc65*/
      return 0; /*0x65cc6b*/
    if ( CloseHandle(FileA) ) /*0x65cc6f*/
      goto LABEL_13; /*0x65cc77*/
    v4 = *this; /*0x65cc7c*/
    v7 = *((char *)this + 6); /*0x65cc7e*/
    goto LABEL_12; /*0x65cc7e*/
  }
  FileClass::Open2(1); /*0x65cc1d*/
  int FileClass::Open(int a2, int a1, int aP1, int aP2)
  {
    if ( CloseHandle((HANDLE)*((char *)a1 + 5)) ) /*0x65cc31*/
    {
LABEL_13:
      *((char *)a1 + 5) = -1; /*0x65cc8d*/
      return 1; /*0x65cc8d*/
    }
    v4 = (int)(*a1);
    v7 = *((char *)a1 + 6); /*0x65cc40*/
LABEL_12:
    LastError = GetLastError(); /*0x65cc7f*/
    (*(void (**)(int *, DWORD, unsigned int, int))(v4 + 64))(a1, LastError, 0, v7); /*0x65cc8a*/
    goto LABEL_13; /*0x65cc8a*/
  }
  return 1; /*0x65cbfb*/

}
} // namespace gamemd
// 0x65CCE0
namespace gamemd {
int FileClass::Read(char *aP1, signed int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65CCE0)
}
} // namespace gamemd
// 0x65CF00
namespace gamemd {
int FileClass::Seek(LONG lDistanceToMove, DWORD dwMoveMethod)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65CF00)
}
} // namespace gamemd
// 0x65D150
namespace gamemd {
int FileClass::Close()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65D150)
}
} // namespace gamemd
// 0x401950
namespace gamemd {
unsigned int * FileClass::loc_401950()
{

  return (unsigned int *)(*(unsigned int *)&this->FileNameAllocated); /*0x401943*/

}
} // namespace gamemd

// 0x65C5F0
namespace gamemd {
int FileClass::StubReturnFalse()
{

  return 0; /*0x65c5f2*/

}
} // namespace gamemd
// 0x65C600
namespace gamemd {
char FileClass::Stub(int a1)
{

  return 0; /*0x65c602*/

}
} // namespace gamemd
// 0x76F020
namespace gamemd {
int FileClass::GetState()
{

  return this->FilePointer; /*0x76f023*/

}
} // namespace gamemd
// 0x76F070
namespace gamemd {
int FileClass::SetState(void *a1)
{

  return this->FilePointer; /*0x76f073*/

}
} // namespace gamemd