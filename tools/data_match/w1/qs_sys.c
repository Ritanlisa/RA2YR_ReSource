#include <stdio.h>
#include <windows.h>

typedef void (__cdecl *QF)(void *, size_t, size_t, int (__cdecl *)(const void *, const void *));
static int __cdecl cmp(const void *a, const void *b) { (void)a; (void)b; return 0; }

int main(void) {
    int n, i;
    HMODULE h = LoadLibraryA("msvcrt.dll");
    QF q = (QF)GetProcAddress(h, "qsort");
    printf("qsort=%p\n", (void *)q);
    for (n = 1; n <= 64; n++) {
        int *arr = (int *)malloc(4 * (n + 1));
        for (i = 0; i < n; i++) arr[i] = i;
        q(arr, n, 4, cmp);
        printf("%d:", n);
        for (i = 0; i < n; i++) printf("%s%d", i ? "," : "", arr[i]);
        printf("\n");
        free(arr);
    }
    return 0;
}
