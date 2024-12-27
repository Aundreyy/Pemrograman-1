#include <stdio.h>
int main(){
    int hari,total_detik,jam,menit,detik;
    scanf("%d",&total_detik);

    hari=total_detik/86400;
    total_detik%=86400;
    jam=total_detik/3600;
    total_detik%=3600;
    menit=total_detik/60;
    detik=total_detik%60;

    if (hari>0){
        printf("%d hari:%02d:%02d:%02d\n",hari,jam,menit,detik);
    }
    else {
        printf("%02d:%02d:%02d",jam,menit,detik);
    }
    return 0;
}