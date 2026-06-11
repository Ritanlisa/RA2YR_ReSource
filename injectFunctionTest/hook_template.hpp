#pragma once
// hook_template.hpp — shared definitions for generated reverse_hooks.cpp
// operator<< overloads for game types live in the respective class headers.

#include <windows.h>
#include <sstream>
#include <string>
#include <iomanip>
#include <gamemd/core/math.hpp>

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

// ---- Fmt: type-aware value formatting ----

inline bool _ty_match(const char* ty, const char* keyword) {
    if (!ty || !keyword) return false;
    for (; *keyword; ty++, keyword++)
        if (toupper((unsigned char)*ty) != toupper((unsigned char)*keyword))
            return false;
    return true;
}

inline void Fmt(std::ostream& os, const char* ty, DWORD v) {
    if (!ty) ty = "";
    // Pointer type (contains '*') → format as hex address, no dereference
    if (strchr(ty, '*')) {
        Hex8(os, v); return;
    }
    if (_ty_match(ty, "this")) {
        Hex8(os, v); return;
    }
    // Struct types: dereference, but NULL-safe
    if (strstr(ty, "Point2D") || _ty_match(ty, "point2d")) {
        if (v) os << *(const gamemd::Point2D*)v << "(";
        else   os << "(null)(";
        Hex8(os, v); os << ")"; return;
    }
    if (strstr(ty, "RectangleStruct")) {
        if (v) os << *(const gamemd::RectangleStruct*)v << "(";
        else   os << "(null)(";
        Hex8(os, v); os << ")"; return;
    }
    if (strstr(ty, "bool") || _ty_match(ty, "Bool"))
        os << (v ? "true" : "false") << "(";
    else
        os << std::dec << v << "(";
    Hex8(os, v); os << ")";
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
