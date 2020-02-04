#include <stdio.h>
#include <stdlib.h>

#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))

/*
15) Escreva um algoritmo que leia um vetor de 10 posições de números inteiros e imprimir, logo
após, gerar 2 vetores a partir dele, um contendo os elementos de posições ímpares do vetor e o
outro os elementos de posições pares. Imprimi-los no final.
*/

int main(int argc, char *argv[]) 
{
    int i, j = 0, k = 0;
    int vetor_pares[10], vetor_impares[10];
    
    int vetor[10] = {70, 32, 12, 77, 83, 93, 41, 13, 10, 15};
    
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetor_pares[j] = vetor[i];
            j++;
        }
        else
        {
            vetor_impares[k] = vetor[i];
            k++;
        }
    }
    
    printf("Vetor Pares:\n");
    for (i = 0; i < j; i++)
    {
    	printf("%d\n", vetor_pares[i]);
	}
	
	printf("Vetor Impares:\n");
    for (i = 0; i < k; i++)
    {
    	printf("%d\n", vetor_impares[i]);
	}
    return 0;
}
