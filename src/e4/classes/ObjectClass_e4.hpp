// G42.33 b8 repair: file was NUL-corrupted in 07f25216 (G37 session). Canonical definition
// lives in _tree_full_e4.hpp; this header forwards to it (single-definition discipline).
#pragma once

// X10: marks the e4 flat authority as present so object/object.hpp suppresses its tree twin
#ifndef GAMEMD_E4_OWNS_ObjectClass
#define GAMEMD_E4_OWNS_ObjectClass 1
#endif

#include "e4/classes/_tree_full_e4.hpp"
