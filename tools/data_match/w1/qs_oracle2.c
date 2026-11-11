#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef void (__cdecl *QF)(void *, size_t, size_t, int (__cdecl *)(const void *, const void *));

typedef struct { int key; int id; } E;

static int __cdecl cmpE(const void *a, const void *b) {
    const E *x = (const E *)a, *y = (const E *)b;
    if (x->key < y->key) return -1;
    if (x->key > y->key) return 1;
    return 0;
}

int main(void) {
    int cases, c;
    HMODULE h = LoadLibraryA("msvcrt.dll");
    QF q = (QF)GetProcAddress(h, "qsort");
    if (!q) { fprintf(stderr, "no qsort\n"); return 1; }
    if (scanf("%d", &cases) != 1) return 1;
    for (c = 0; c < cases; c++) {
        int n, i;
        E *arr;
        if (scanf("%d", &n) != 1) return 1;
        arr = (E *)malloc(sizeof(E) * (n > 0 ? n : 1));
        for (i = 0; i < n; i++) { arr[i].key = 0; arr[i].id = i; if (scanf("%d", &arr[i].key) != 1) return 1; }
        q(arr, n, sizeof(E), cmpE);
        printf("%d:", n);
        for (i = 0; i < n; i++) printf("%s%d", i ? "," : "", arr[i].id);
        printf("\n");
        free(arr);
    }
    return 0;
}
