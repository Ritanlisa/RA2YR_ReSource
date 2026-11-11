#include <stdio.h>
#include <stdlib.h>

/* LINK sorts an array of 4-byte POINTERS with qsort(width=4). The CRT qsort's
   swap behaviour depends on the element width, so simulate with width=4. */
static int cmp(const void *a, const void *b) {
    (void)a; (void)b;
    return 0; /* all equal */
}

int main(void) {
    int n, i;
    for (n = 1; n <= 64; n++) {
        int *arr = (int *)malloc(4 * n);
        for (i = 0; i < n; i++) arr[i] = i;
        qsort(arr, n, 4, cmp);
        printf("%d:", n);
        for (i = 0; i < n; i++) printf("%s%d", i ? "," : "", arr[i]);
        printf("\n");
        free(arr);
    }
    return 0;
}
