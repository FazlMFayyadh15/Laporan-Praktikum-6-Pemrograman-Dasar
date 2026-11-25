#include <stdio.h>
#include <stdint.h>

int main() {
    int x;
    int *p;

    scanf("%d", &x);
    p = &x;

    printf("Nilai variabel = %d\n", x);
    printf("Alamat variabel = 0x%012llx\n", (unsigned long long)(uintptr_t)&x);
    printf("Nilai melalui pointer = %d\n", *p);

    *p = *p * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", x);

    return 0;
}