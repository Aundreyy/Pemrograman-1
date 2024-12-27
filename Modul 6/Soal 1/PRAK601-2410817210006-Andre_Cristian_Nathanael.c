#include <stdio.h>
int main(){
  int baris, kolom, isi, a, b;
  scanf("%d %d", &baris, &kolom);
  int matrix[baris][kolom];
    for (a = 0; a < baris; a++) {
      for (b= 0; b < kolom; b++) {
        scanf("%d", &isi);
        matrix[a][b] = isi;
      }
    }      
    for (a = 0; a < baris; a++) {
      for (b = 0; b < kolom; b++) {
        printf("%d ", matrix[a][b]);
      } printf("\n");
    }
}