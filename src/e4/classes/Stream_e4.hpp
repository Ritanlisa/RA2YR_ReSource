// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct StreamClass;  // fix_fwd_type_supply

struct Stream {
    StreamClass* m_Stream;  // 0x0
    void* Stream_field_04;  // 0x4
    unsigned int Stream_field_08;  // 0x8
    char Stream_field_0C[4];  // 0xC
    unsigned int Stream_field_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int FlushAndReset();
    int GetChecked();
    int ReadIntArray(int a2);
    int WriteIntArray(TechnoTypeClass * aP1);
    char * InitializeBinkAudio(const char *a2, int a3, int a4, int a5, int a6, int a7, int a8);  // G57w10-S raw 0x00759260 IUnknown 占位清除
    static void CopyFromTemplate(Stream * aP1);
    int  WriteBlock(int a2, int a3, int a4, void *a1 = 0);  // 0x5f1bf0
    int ReadPacket(void *a1 = 0);
};

} // namespace gamemd
