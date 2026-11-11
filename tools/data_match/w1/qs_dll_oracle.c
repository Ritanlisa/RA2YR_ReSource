#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* qs_dll_oracle.c -- load a specific msvcrt-like DLL by path and use its qsort.
 *
 * stdin:  <cases>
 *         for each: <n> <k0> <k1> ...
 * stdout: for each: <n>:<perm,comma,separated>
 *
 * Usage: qs_dll_oracle.exe <path-to-msvcrt.dll>
 */
typedef void(__cdecl *QF)(void *, size_t, size_t, int(__cdecl *)(const void *, const void *));
typedef struct { int key; int id; } E;

static int __cdecl cmpE(const void *a, const void *b) {
    const E *x = (const E *)a, *y = (const E *)b;
    if (x->key < y->key) return -1;
    if (x->key > y->key) return 1;
    return 0;
}

int main(int argc, char **argv) {
    int cases, c;
    HMODULE h;
    QF q;
    if (argc < 2) {
        fprintf(stderr, "usage: %s <msvcrt.dll>\n", argv[0]);
        return 2;
    }
    h = LoadLibraryA(argv[1]);
    if (!h) {
        fprintf(stderr, "LoadLibrary failed %lu\n", GetLastError());
        return 1;
    }
    q = (QF)GetProcAddress(h, "qsort");
    if (!q) {
        fprintf(stderr, "no qsort in %s\n", argv[1]);
        return 1;
    }
    if (scanf("%d", &cases) != 1) return 1;
    for (c = 0; c < cases; c++) {
        int n, i;
        E *arr;
        if (scanf("%d", &n) != 1) return 1;
        arr = (E *)malloc(sizeof(E) * (n > 0 ? n : 1));
        for (i = 0; i < n; i++) {
            arr[i].key = 0;
            arr[i].id = i;
            if (scanf("%d", &arr[i].key) != 1) return 1;
        }
        q(arr, n, sizeof(E), cmpE);
        printf("%d:", n);
        for (i = 0; i < n; i++) printf("%s%d", i ? "," : "", arr[i].id);
        printf("\n");
        free(arr);
    }
    return 0;
}
