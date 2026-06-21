#pragma once
// hook_template.hpp — shared definitions for generated reverse_hooks.cpp
// operator<< overloads for game types live in the respective class headers.

#include <windows.h>
#include <sstream>
#include <string>
#include <iomanip>
#include "core/math.hpp"

// ---- shared constants ----

#define FN_BUF_SZ  12288   // per-function buffer size (50 entries × ~200 bytes)
#define SEC_BUF_SZ  65536  // None Calls section buffer
#define MAX_FN      16     // max hooked functions

// ---- register capture struct ----

struct S {
    DWORD a, c, d, b, si, di, bp, sp, re;
    DWORD stk0, stk1, stk2, stk3, stk4, stk5, stk6, stk7;
};

// ---- caller lookup entry ----

struct FE { DWORD a; const char* n; };

// ---- Hex8: 8-digit uppercase hex with 0x prefix ----

inline void Hex8(std::ostream& os, DWORD v) {
    char f = os.fill('0');
    os << "0x" << std::hex << std::uppercase << std::setw(8) << v << std::dec;
    os.fill(f);
}

// ---- FmtPtr: dereference pointer with operator<<, NULL-safe, with address ----

template<typename T>
inline void FmtPtr(std::ostream& os, const T* p) {
    if (p) os << *p; else os << "(null)";
    os << "("; Hex8(os, (DWORD)p); os << ")";
}

// ---- FmtArr: array formatting [v0,v1,...](ADDR) ----

inline void FmtArr(std::ostream& os, int n, DWORD v) {
    if (!v || n <= 0) { os << "(null)"; return; }
    os << "[";
    for (int i = 0; i < n; i++) {
        if (i) os << ",";
        os << std::dec << ((int*)v)[i];
    }
    os << "]("; Hex8(os, v); os << ")";
}

// ---- WrFile: write string to hook log handle ----

inline void WrFile(HANDLE h, const std::string& s) {
    if (h != INVALID_HANDLE_VALUE) {
        DWORD n;
        WriteFile(h, s.c_str(), (DWORD)s.size(), &n, 0);
    }
}
