#include <stdio.h>
int main(){
    while(1){
        int pilihan;
        float nilai1, nilai2;
        printf("Pilih Program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan pilihan : ");
        scanf("%d",&pilihan);
       
        if(pilihan == 5){
            printf("Terimakasih, telah menggunakan kalkulator Andre Cristian Nathanael"); 
            break;
        }
        if(pilihan>5 || pilihan<1){
            printf("\nInput anda salah, silahkan coba lagi\n\n"); 
            continue;
        }
        printf("Masukkan nilai pertama : ");
        scanf("%f",&nilai1);
        printf("Masukkan nilai kedua : ");
        scanf("%f",&nilai2);

        switch(pilihan){
            case 1 :
            printf("\nHasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n\n",nilai1,nilai2,nilai1+nilai2);
            break;
            case 2 :
            printf("\nHasil Pengurangan antara %.2f dan %.2f adalah %.2f\n\n",nilai1,nilai2,nilai1-nilai2);
            break;
            case 3 :
            printf("\nHasil Pengurangan antara %.2f dan %.2f adalah %.2f\n\n",nilai1,nilai2,nilai1*nilai2);
            break;
            case 4 :
            if(nilai2==0)printf("Hasil tidak terdefinisi\n\n");
            else printf("\nHasil Pengurangan antara %.2f dan %.2f adalah %.2f\n\n",nilai1,nilai2,nilai1/nilai2);
            break;
        }
    }
    return 0;
}