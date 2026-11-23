#include <stdio.h>

struct Dompet {
    char nama[50];
    long saldo;
};

void topUp(struct Dompet *d, long nominal) {
    d->saldo += nominal;
    printf("Top up %ld berhasil, saldo = %ld\n", nominal, d->saldo);
}

void bayar(struct Dompet *d, long nominal) {
    if (d->saldo >= nominal) {
        d->saldo -= nominal;
        printf("Bayar %ld berhasil, saldo = %ld\n", nominal, d->saldo);
    } else {
        printf("Bayar %ld gagal, saldo tidak cukup\n", nominal);
    }
}

int main() {
    struct Dompet d;
    int n, i;
    char jenis;
    long nominal;

    scanf("%s %ld", d.nama, &d.saldo);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %c %ld", &jenis, &nominal);
        if (jenis == 'T') {
            topUp(&d, nominal);
        } else if (jenis == 'B') {
            bayar(&d, nominal);
        }
    }

    printf("Saldo akhir %s = %ld\n", d.nama, d.saldo);

    return 0;
}