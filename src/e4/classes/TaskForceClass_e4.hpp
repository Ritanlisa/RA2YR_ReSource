// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct TaskForceClass {
    void* vfptr;  // minimal E2 declaration
    unsigned int * ParseUnitCountAndType(char * Buffer);  // 0x4C4EF0
    unsigned int * Construct(ObjectClass * aP1);  // 0x6E7E80
    CCINIClass * LoadFromINI(char * a1, int a2);  // 0x6E8220
    int LoadTaskForce(AbstractTypeClass * aP0, int aP1);  // 0x6E86A0
    TaskForceClass * ExecuteAction(char a2);  // 0x6E87F0
    char GetUnitCount(unsigned char *** aP1);  // 0x6E8420
    char GetUnitType(char * a2);  // 0x6E8510
    int LoadTask(int * a2);  // 0x6E8750
    ObjectClass * Check();  // 0x4C4F90
    int SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2);  // 0x6E8680
    int ddtor(int a1, unsigned int * a2);  // 0x6E8710
    int StubReturn33();  // 0x6E87D0
    int StubReturn212();  // 0x6E87E0
};
} // namespace gamemd
