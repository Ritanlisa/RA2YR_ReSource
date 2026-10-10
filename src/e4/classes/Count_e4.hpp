// G57w17h4v5: e4 flat Count carrier (lightweight, battery-pattern)
// Layout evidence: IDA live decompile (see fixer header) + til Count (m_RefCount@0).
// Suppression contract: defines GAMEMD_E4_Count (utility_ext twin is #ifndef-guarded);
// e4 TUs also get the battery define from e4_globals.hpp. gap2/misc/network TUs that
// never include this file keep the 4-byte utility_ext view ((Count*)+N stride intact).
#pragma once

#include <cstdint>

#define GAMEMD_E4_Count 1  // G57w17h4: suppress utility_ext 4-byte Count twin in opt-in TUs

namespace gamemd {

struct AbstractClass;  // G57w17h4: struct spelling, INSIDE namespace (HouseClass_e4.hpp precedent)

struct Count  // G57w17h4: struct spelling to match _fwd_e4.hpp "struct Count;" fwd (class-vs-struct = C2011)
{
public:
    int32_t m_RefCount;     // 0x00 (til Count; raw *(this+0), Release/ddtor return slot)
    unsigned int u32_4;     // 0x04 (raw Count::Get *(this+1))
    unsigned int u32_8;     // 0x08 (raw Count::Release/ddtor ++/--*(this+2))
    unsigned int u32_1C;    // 0x1C (raw Count::DecrementRefCountsAudio *(this+7))
    unsigned int u32_38;    // 0x38 (raw Count::GetCountQueue *(this+14))

    AbstractClass * * DecrementRefCountsAudio(void *a1 = 0);
    int SetupAllCountriesLobby();
    int32_t GetCountQueue(void *a1 = 0);
    int32_t Get(void *a1 = 0, void *a2 = 0);
    int32_t Release(void *a1 = 0);
    int32_t ddtor(void *a1 = 0);
};

} // namespace gamemd
