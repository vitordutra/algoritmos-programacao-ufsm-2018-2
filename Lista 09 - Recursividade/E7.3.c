#include <stdio.h>
#include <stdlib.h>
#define MAX 5

/* 
7) Crie um programa em C que receba um vetor de n�meros reais
com 100 elementos. Escreva uma fun��o recursiva que
inverta ordem dos elementos presentes no vetor.
*/

void inverter(int numeros[MAX], int posicao) {
    if (posicao < MAX/2) {
        int tmp = numeros[posicao];
        int nova_posicao = MAX-posicao-1;
        numeros[posicao] = numeros[nova_posicao];
        numeros[nova_posicao] = tmp;
        inverter(numeros, posicao+1);
    }
}
int main(void) {
    int numeros[MAX];
    for(int i=0; i<MAX; i++)
        scanf("%d", &numeros[i]);

    inverter(numeros, 0);
    for(int i=0; i<MAX; i++) 
        printf("%d%c", numeros[i], (i == MAX-1)? '\n':' ');
    return 0;
}
