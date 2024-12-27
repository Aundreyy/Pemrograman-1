#include <stdio.h>
#include <math.h>

int main(){
    //kasus 1
    float a,b,c,alas,tinggi,keliling,luas;
    printf("");
    scanf("%f",&a);
    printf("");
    scanf("%f",&b);
    alas=sqrt(b*b-a*a);
    tinggi=a;
    c=sqrt(a*a+b*b);
    keliling=a+b+alas;
    luas=0.5*a*alas;
    
    printf("\n");
    printf("Alas: %.0f cm\n",alas);
    printf("Tinggi: %.0f cm\n",tinggi);
    printf("Keliling: %.0f cm \n",keliling);
    printf("Luas: %.0f cm^2\n\n",luas);
    //kasus 2
    printf("");
    scanf("%f",&a);
    printf("");
    scanf("%f",&b);
    alas=sqrt(b*b-a*a);
    tinggi=a;
    c=sqrt(a*a+b*b);
    keliling=a+b+alas;
    luas=0.5*a*alas;
    
    printf("\n");
    printf("Alas: %.0f cm\n",alas);
    printf("Tinggi: %.0f cm\n",tinggi);
    printf("Keliling: %.0f cm \n",keliling);
    printf("Luas: %.0f cm^2",luas);
    return 0;
}