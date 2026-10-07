// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


namespace gamemd {
#ifndef GAMEMD_TREE_UNIVERSE
struct AbstractClass;  // fix_fwd_type_supply
#endif // GAMEMD_TREE_UNIVERSE

struct KeyboardConfig {
    unsigned int Debug;
    void* vfptr;
    AbstractClass * ReleaseBuffer(int a2, void *a2_2);
    static int LoadINI();
    // --- W16G3 supply (BEGIN) ---
    unsigned int u32_8;  // @0x538ba0 (W16G3 raw-usage vocab)
    unsigned int u32_4;  // @0x538xxx (W16G3 raw-usage vocab)
    unsigned int u32_10;  // @0x538xxx (W16G3 raw-usage vocab)
    // --- W16G3 supply (END) ---

};

} // namespace gamemd
