// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply

struct COMClass {
// --- flat members (BEGIN) ---
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
// --- flat members (END) ---
    VectorCursor * disconnectPoint(unsigned int * Block, char a2);
    void * lockServer(rc_ptr_base * Block, char a2);
    static int RegisterAll(COMClass * aP1);
    unsigned int *m_1;  // G42.33 b3 flat-carrier vocab ([3] 索引基)
    unsigned int m_8;  // G42.35 C9 flat-carrier vocab (0x7656a5)
    int RegisterAll();
    unsigned int * releaseInterface();  // 0x765C70 G42.33 b3 supplied-body sync
    unsigned int *  marshalInterface(char a2);  // 0x767C50
    int ReleaseRef();  // G42.33 b3 supplied-body sync
    unsigned int * initInterface(char a2);  // G42.33 b3 supplied-body sync
    int queryProperty();  // G42.33 b3 supplied-body sync
    unsigned int setProperty(int a2);  // G42.33 b3 supplied-body sync
    char * createInstance(char a2);  // G42.33 b3 supplied-body sync
    unsigned int * getInterface(char a2);  // G42.33 b3 supplied-body sync
    void ** coUninitialize(char a2);  // G42.33 b3 supplied-body sync
};

} // namespace gamemd
