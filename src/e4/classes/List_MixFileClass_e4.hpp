// X74: flat carrier for the List<MixFileClass*> global object at 0xABEFD8
// (RTTI ?$List@PAVMixFileClass@@, vtable 0x7EDF38). Layout evidence: init
// 0x5B3AC0 + atexit dtor 0x5B3B10 store maps (28B GenericList part: vptr +
// two 12B sentinel regions, raw-int link idiom throughout). Object extent
// beyond 28B is untokened at X74 time (no refs; residual documented).
// Raw uint sentinels: the dtor walks links with int arithmetic -- typed
// pointer members would force new casts (forbidden).
#pragma once

namespace gamemd {

struct List_MixFileClass {
    void* vtable1;  // 0x0
    unsigned int First_vfptr;  // 0x4 (sentinel A vptr slot)
    unsigned int First_Previous;  // 0x8
    unsigned int First_tC;  // 0xC
    unsigned int Last_vfptr;  // 0x10 (sentinel B vptr slot)
    unsigned int Last_Previous;  // 0x14
    unsigned int Last_t18;  // 0x18
};

extern List_MixFileClass g_MixFileList;  // data: 0xABEFD8 (X74 merge of dword_ABEFD8/DC/E0/E4/E8/EC/F0)

} // namespace gamemd
