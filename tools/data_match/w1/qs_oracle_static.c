#include <stdio.h>
#include <stdlib.h>

/* qs_oracle_static.c -- like qs_oracle2.c but linked against the VC6 static
 * libcmt.lib qsort (the 2001-era CRT implementation), to test whether the
 * original gamemd.exe .idata permutation came from the old msvcrt qsort. */
typedef struct { int key; int id; } E;

static int __cdecl cmpE(const void *a, const void *b) {
    const E *x = (const E *)a, *y = (const E *)b;
    if (x->key < y->key) return -1;
    if (x->key > y->key) return 1;
    return 0;
}

int main(void) {
    int cases, c;
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
        qsort(arr, n, sizeof(E), cmpE);
        printf("%d:", n);
        for (i = 0; i < n; i++) printf("%s%d", i ? "," : "", arr[i].id);
        printf("\n");
        free(arr);
    }
    return 0;
}
