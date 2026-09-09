// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Trigger {
    void* vfptr;  // minimal E2 declaration
    char EnableOnce(AbstractClass * aP1);  // 0x554A60
    void ProcessMapEvents(int this@<ecx> a1, int *a2@<ebp> a2, int a3@<edi> a3, int a4, char a5, char a6);  // 0x76D4D0
    unsigned int * processTrigger(int a2, int a3);  // 0x76F090
    unsigned int * checkCondition(ObjectClass * aP1, ObjectClass * aP2);  // 0x76F1C0
    int executeActions(int a2);  // 0x76FF20
};
} // namespace gamemd
