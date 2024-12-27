#include <stdio.h>
int main(){
  int kolom, isi, a;
  scanf("%d", &kolom);
  int matrix[kolom];
    for (a = 0; a < kolom; a++) {
      scanf("%d", &isi);
      matrix[a] = isi;
  }      
      for (a = 0; a < kolom; a++) {
        printf("%d ", matrix[a] * (a + 1));
    }printf("\n");
}