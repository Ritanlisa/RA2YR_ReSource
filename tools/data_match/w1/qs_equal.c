#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { int key; int id; } E;

static int cmp(const void *a, const void *b) {
    const E *x = (const E *)a, *y = (const E *)b;
    return (x->key > y->key) - (x->key < y->key);
}

int main(void) {
    int n, i;
    for (n = 1; n <= 16; n++) {
        E *arr = (E *)malloc(sizeof(E) * n);
        for (i = 0; i < n; i++) { arr[i].key = 0; arr[i].id = i; }
        qsort(arr, n, sizeof(E), cmp);
        printf("n=%2d :", n);
        for (i = 0; i < n; i++) printf(" %d", arr[i].id);
        printf("\n");
        free(arr);
    }
    return 0;
}
