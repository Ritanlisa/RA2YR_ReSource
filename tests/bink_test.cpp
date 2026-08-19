#include <windows.h>
#include <ddraw.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>

typedef void*  (__stdcall *BinkOpen_t)(const char*, uint32_t);
typedef void   (__stdcall *BinkClose_t)(void*);
typedef int    (__stdcall *BinkDoFrame_t)(void*);
typedef void   (__stdcall *BinkCopyToBuffer_t)(void*, void*, int32_t, uint32_t, uint32_t, uint32_t, uint32_t);
#define BINKSURFACE565 0x20000000U

int main() {
    // Load binkw32.dll
    HMODULE dll = LoadLibraryA("binkw32.dll");
    if (!dll) {
        DWORD err = GetLastError();
        char* msg = nullptr;
        FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM,
            0, err, 0, (char*)&msg, 0, 0);
        printf("FAIL: LoadLibrary binkw32.dll (err=%d: %s)\n", err, msg ? msg : "?");
        if (msg) LocalFree(msg);
        return 1;
    }

    auto pOpen = (BinkOpen_t)GetProcAddress(dll, "_BinkOpen@8");
    auto pDoFrame = (BinkDoFrame_t)GetProcAddress(dll, "_BinkDoFrame@4");
    auto pCopy = (BinkCopyToBuffer_t)GetProcAddress(dll, "_BinkCopyToBuffer@28");
    auto pClose = (BinkClose_t)GetProcAddress(dll, "_BinkClose@4");
    if (!pOpen || !pDoFrame || !pCopy || !pClose) {
        printf("FAIL: GetProcAddress\n"); return 1;
    }

    // Open BINK file (must be in current directory)
    void* bnk = pOpen("ra2ts_l.bik", 0);
    if (!bnk) { printf("FAIL: BinkOpen ra2ts_l.bik\n"); return 1; }

    int* hdr = (int*)bnk;
    printf("BINK open: %dx%d, %d frames\n", hdr[0], hdr[1], hdr[2]);

    // Decode first frame
    int doResult = pDoFrame(bnk);
    printf("BinkDoFrame: %d\n", doResult);

    // Copy to a buffer (small = 632x570)
    int w = 632, h = 570;
    int pitch = ((w * 2 + 3) / 4) * 4;  // DWORD aligned
    uint16_t* buf = (uint16_t*)calloc(pitch, h);
    pCopy(bnk, buf, pitch, h, 0, 0, BINKSURFACE565);

    // Check pixels
    int nonZero = 0, firstNonZero = -1;
    for (int i = 0; i < w * h; i++) {
        if (buf[i]) {
            if (firstNonZero < 0) firstNonZero = i;
            nonZero++;
        }
    }
    printf("Non-zero pixels: %d / %d (%.2f%%), first at %d\n",
        nonZero, w*h, 100.0*nonZero/(w*h), firstNonZero);

    // Sample with alpha flag
    memset(buf, 0xCD, pitch * h);
    pCopy(bnk, buf, pitch, h, 0, 0, 0x80000000);  // 32-bit test
    nonZero = 0;
    for (int i = 0; i < w * h; i++) if (buf[i]) nonZero++;
    printf("32-bit test: %d non-0xCDCD pixels\n", nonZero);

    // Test with #0
    memset(buf, 0xCD, pitch * h);
    pCopy(bnk, buf, pitch, h, 0, 0, 0);
    nonZero = 0;
    for (int i = 0; i < w * h; i++) if (buf[i] != 0xCDCD) nonZero++;
    printf("Flag=0 test: %d non-0xCDCD pixels\n", nonZero);

    // Dump first 16 bytes
    uint8_t* raw = (uint8_t*)buf;
    printf("First 16 bytes after copy: ");
    for (int i = 0; i < 16; i++) printf("%02X ", raw[i]);
    printf("\n");

    free(buf);
    pClose(bnk);
    FreeLibrary(dll);
    return 0;
}
