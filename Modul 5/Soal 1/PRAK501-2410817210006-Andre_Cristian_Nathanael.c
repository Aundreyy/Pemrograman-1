#include <stdio.h>
int MaxBilangan(int a, int b, int c, int d){
    int nilai = a;
    if(b > nilai){
        nilai = b;
    }
    if(c > nilai){
        nilai = c;
    }
    if(d > nilai){
        nilai = d;
    }
    return nilai;
}
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    return 0;
}