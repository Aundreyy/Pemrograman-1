#include <stdio.h>
#include <math.h>
int main() {
    //kasus 1
    float jarijari,tinggi,volume,luas,keliling;

    scanf("%f", &jarijari);
    scanf("%f", &tinggi);

    volume=22.0/7*jarijari*jarijari*tinggi;
    luas= 2*22.0/7*jarijari*(jarijari+tinggi);
    keliling= 2*22.0/7*jarijari;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n\n", keliling);
    //kasus 2
    scanf("%f", &jarijari);
    scanf("%f", &tinggi);

    volume=22.0/7*jarijari*jarijari*tinggi;
    luas= 2*22.0/7*jarijari*(jarijari+tinggi);
    keliling= 2*22.0/7*jarijari;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    return 0;
}