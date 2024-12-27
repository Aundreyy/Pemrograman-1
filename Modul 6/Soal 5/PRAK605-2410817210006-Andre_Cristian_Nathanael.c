#include <stdio.h>
int main(){
    int Matriks_A[10][10], Matriks_B[10][10], Matriks_AXB[10][10];
    int a, b, i, j, jumlah = 0;
    scanf("%d", &j);
    printf("Matriks A\n");
    for(a = 0; a < j; a++){
        for(b = 0; b < j; b++){
            scanf("%d", &Matriks_A[a][b]);
            }
        }
    printf("Matriks B\n");
    for(a = 0; a < j; a++){
        for(b = 0; b < j; b++){
            scanf("%d", &Matriks_B[a][b]);
            }
        }
    for(a = 0; a < j; a++){
        for(b = 0; b < j; b++){
            for(i = 0; i < j; i++){
                jumlah = jumlah + Matriks_A[a][i] * Matriks_B[i][b];
            }
            Matriks_AXB[a][b] = jumlah;
            jumlah = 0;
            }
        }
    printf("Matriks AXB\n");
    for(a = 0; a < j; a++){
        for(b = 0; b < j; b++){
            printf("%d ", Matriks_AXB[a][b]);
            }
        printf("\n");
    }
}