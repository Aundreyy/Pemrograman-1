#include <stdio.h>

int main(){
   //kasus 1
    float nilai1,nilai2,hasil;
    printf("Masukkan nilai pertama: ");
    scanf("%f",&nilai1);
    printf("Masukkan nilai kedua: ");
    scanf("%f",&nilai2);

    hasil=nilai1+nilai2;

    printf("Hasil penjumlahan dari  nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n",nilai1,nilai2,hasil);
    printf("\n");
    //kasus 2
    printf("Masukkan nilai pertama: ");
    scanf("%f",&nilai1);
    printf("Masukkan nilai kedua: ");
    scanf("%f",&nilai2);

    hasil=nilai1+nilai2;

    printf("Hasil penjumlahan dari  nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n",nilai1,nilai2,hasil);
    return 0;
}