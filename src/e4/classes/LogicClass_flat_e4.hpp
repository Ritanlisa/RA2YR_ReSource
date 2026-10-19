// X74: flat carrier for the LogicClass global object at 0x87F778.
// Binary evidence: init 0x40CB80 + atexit dtor 0x40CBC0 store maps; 24B
// DynamicVectorClass<ObjectClass*> shape (vptr@0, Items@4, Capacity@8,
// IsInit@C(byte), IsAlloc@D(byte), Count@10, GrowStep@14=10); vtable
// 0x7E18FC. Raw-int idiom: dtor deletes Items and the Scene consumers walk
// Items/Count with int arithmetic -- pointer-typed members would force new
// casts (forbidden). Raw-carrier model per X74-P0 S3 (virtual-dtor wall).
#pragma once

namespace gamemd {

struct LogicClass_flat {
    unsigned int ptr_0;  // 0x0
    unsigned int Items;  // 0x4
    unsigned int Capacity;  // 0x8
    unsigned char IsInit;  // 0xC
    unsigned char IsAlloc;  // 0xD
    unsigned int Count;  // 0x10
    unsigned int GrowStep;  // 0x14
};

extern LogicClass_flat g_LogicClass;  // data: 0x87F778 (X74 merge of the 7 tokens)

} // namespace gamemd
