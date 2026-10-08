// G42.42q batch minimal carriers (C2036/C2027 family)
#pragma once

namespace gamemd {
struct AnimTypeClass { void* vfptr; };  // minimal E2 (size-fix pending til evidence)
#ifndef GAMEMD_MC_VECTORCLASS_SKIP
struct VectorClass { void* vfptr; };  // minimal E2 (size-fix pending til evidence)
#endif  // GAMEMD_MC_VECTORCLASS_SKIP
} // namespace gamemd
