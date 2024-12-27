#include <stdio.h>

int main() {
    int a, b, angka, i;
    scanf("%d %d", &a, &b);
    if (a != b) {
        printf("Jumlah tidak sama");
    } else {
        int barisa[a];
        int barisb[b];
        for (i = 0; i < a; i++) {
            scanf("%d", &barisa[i]);
        }
        for (i = 0; i < b; i++) {
            scanf("%d", &barisb[i]);
        }
        for (i = 0; i < a; i++) {
            angka = barisa[i] * barisb[i];
            printf("%d ", angka);
        }
    }
}