#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/cc_file.hpp"
#include "gamemd/core/vector.hpp"

#include <cstring>

namespace gamemd
{

extern void* MixFileClass_vftable[1];

LinkedList<MixFileClass*> MixFileClass_MIXes;
DynamicVectorClass<MixFileClass*> MixFileClass_Array;
DynamicVectorClass<MixFileClass*> MixFileClass_Array_Alt;
DynamicVectorClass<MixFileClass*> MixFileClass_Maps;
DynamicVectorClass<MixFileClass*> MixFileClass_Movies;
MixFileClass MixFileClass_MULTIMD_instance;
MixFileClass MixFileClass_MULTI_instance;
MixFileClass::GenericMixFiles MixFileClass_Generics;

// Static member definitions
LinkedList<MixFileClass*>& MixFileClass::MIXes     = MixFileClass_MIXes;
DynamicVectorClass<MixFileClass*>& MixFileClass::Array     = MixFileClass_Array;
DynamicVectorClass<MixFileClass*>& MixFileClass::Array_Alt = MixFileClass_Array_Alt;
DynamicVectorClass<MixFileClass*>& MixFileClass::Maps      = MixFileClass_Maps;
DynamicVectorClass<MixFileClass*>& MixFileClass::Movies    = MixFileClass_Movies;
MixFileClass& MixFileClass::MULTIMD = MixFileClass_MULTIMD_instance;
MixFileClass& MixFileClass::MULTI   = MixFileClass_MULTI_instance;
MixFileClass::GenericMixFiles& MixFileClass::Generics = MixFileClass_Generics;

MixFileClass::MixFileClass(const char* pFileName) noexcept
    : Node(noinit_t())
{
    FileName        = pFileName;
    Blowfish        = false;
    Encryption      = false;
    CountFiles      = 0;
    FileSize        = 0;
    FileStartOffset = 0;
    Headers         = nullptr;
    field_24        = 0;

    const auto vft = const_cast<void**>(reinterpret_cast<void* const*>(MixFileClass_vftable));
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    // TODO: complete implementation
    // - Open the MIX file on disk
    // - Check for encryption/blowfish header
    // - Read index table (file headers)
    // - Register in global MIX file list
}

void MixFileClass::Bootstrap()
{
    // TODO: complete implementation
    // Initialize all global MIX file pointers
    // Load expandmd##.mix, ra2md.mix, language.mix, etc.
    // Set up Generics struct with theater-specific MIX files
}

} // namespace gamemd
