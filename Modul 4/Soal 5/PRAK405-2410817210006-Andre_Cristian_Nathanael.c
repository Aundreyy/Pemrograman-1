#include <stdio.h>
int main() {
    int n, kelipatan;
    scanf("%d %d", &n, &kelipatan);

    int total = 0;
    for(int i = 1; i <= n; i++) {
        int hasil = 0;
        for(int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, kelipatan);
            hasil += j * kelipatan;
            if(j > 1) {
                printf(" + ");
            }
        }
        total += hasil;
        printf(" = %d \n", hasil);
    }
    printf("%d \n", total);
    return 0;
}