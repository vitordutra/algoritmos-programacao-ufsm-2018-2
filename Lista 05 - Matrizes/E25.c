#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 10
#define nc 10

/*
25) Escreva um algoritmo que leia uma matriz M(10, 10) de números inteiros e depois calcule e
mostre a sua matriz transposta
*/

void matriz_transposta (int l, int c, int matriz[l][c]) {
  int i, j, aux;
  
  for (i = 0; i < l; i++) {
    for (j = i+1; j < c; j++) {
      if (j != i) { 
      // Faço o algoritmo da troca a não ser que j == i. Se j == i não preciso trocar.
   		aux = matriz[i][j];
   		matriz[i][j] = matriz[j][i];
   		matriz[j][i] = aux;
      }
    }
  }
  
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf ("%d ",matriz[i][j]);
    }
    printf ("\n");
  }
  
}

int main () {
  int l, c, i, j;
  
  scanf ("%d%d",&l, &c);
  
  int matriz[l][c];
  
  for (i = 0; i < l; i++) {
    for (j= 0; j < c; j++) {
      scanf ("%d",&matriz[i][j]);
    }
  }
  printf ("\n");
  
  matriz_transposta (l, c, matriz);
  
  return 0;
}
