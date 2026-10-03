// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/DynamicVectorArray_e4.hpp"
#include "e4/classes/FileExtension_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"
#include "e4/classes/Flag_e4.hpp"
#include "e4/classes/StringVector_e4.hpp"

// 0x626DA0
namespace gamemd {
int FileSystem::ProcessNextFileExtension()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x626DA0)
}
} // namespace gamemd
// 0x5F76B0
namespace gamemd {
void FileSystem::InitPipShapes()
{

  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  if ( !FileSystem_PIPBRD_SHP ) /*0x5f76ba*/
  {
    ((RawFileClass*)v0)->Construct((int)aPipbrdShp); /*0x5f76c5*/
    FileSystem_PIPBRD_SHP = (int)((CCFileClass *)(v0))->ReadEntireFile(); /*0x5f76da*/
    byte_AC1488 = FileSystem_PIPBRD_SHP != 0; /*0x5f76df*/
    if ( !FileSystem_PIPBRD_SHP ) /*0x5f76e5*/
      FileSystem_PIPBRD_SHP = (int)(SearchMIXFile((char *)(aPipbrdShp), 0)); /*0x5f76f3*/
    ((RawFileClass *)(v0))->Dtor(); /*0x5f76fc*/
  }
  if ( !FileSystem_PIPS_SHP ) /*0x5f7708*/
  {
    ((RawFileClass*)v0)->Construct((int)aPipsShp); /*0x5f7713*/
    FileSystem_PIPS_SHP = (int)((CCFileClass *)(v0))->ReadEntireFile(); /*0x5f7728*/
    byte_AC1489 = FileSystem_PIPS_SHP != 0; /*0x5f772d*/
    if ( !FileSystem_PIPS_SHP ) /*0x5f7733*/
      FileSystem_PIPS_SHP = (int)(SearchMIXFile((char *)(aPipsShp), 0)); /*0x5f7741*/
    ((RawFileClass *)(v0))->Dtor(); /*0x5f774a*/
  }
  if ( !FileSystem_PIPS2_SHP ) /*0x5f7756*/
  {
    ((RawFileClass*)v0)->Construct((int)aPips2Shp); /*0x5f7761*/
    FileSystem_PIPS2_SHP = (int)((CCFileClass *)(v0))->ReadEntireFile(); /*0x5f7776*/
    byte_AC148A = FileSystem_PIPS2_SHP != 0; /*0x5f777b*/
    if ( !FileSystem_PIPS2_SHP ) /*0x5f7781*/
      FileSystem_PIPS2_SHP = (int)(SearchMIXFile((char *)(aPips2Shp), 0)); /*0x5f778f*/
    ((RawFileClass *)(v0))->Dtor(); /*0x5f7798*/
  }
  if ( !FileSystem_TALKBUBL_SHP ) /*0x5f77a4*/
  {
    ((RawFileClass*)v0)->Construct((int)aTalkbublShp); /*0x5f77af*/
    FileSystem_TALKBUBL_SHP = (int)((CCFileClass *)(v0))->ReadEntireFile(); /*0x5f77c4*/
    byte_AC148B = FileSystem_TALKBUBL_SHP != 0; /*0x5f77c9*/
    if ( !FileSystem_TALKBUBL_SHP ) /*0x5f77cf*/
      FileSystem_TALKBUBL_SHP = (int)(SearchMIXFile((char *)(aTalkbublShp), 0)); /*0x5f77dd*/
    ((RawFileClass *)(v0))->Dtor(); /*0x5f77e6*/
  }

}
} // namespace gamemd
// 0x72D350
namespace gamemd {
void FileSystem::CleanupTrees()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72D350)
}
} // namespace gamemd