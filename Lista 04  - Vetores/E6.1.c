#include <stdio.h>
#include <stdlib.h>

#define tam 6

/*
6) Faça um algoritmo que carregue um vetor de seis elementos numéricos inteiros, calcule e
mostre:
- a quantidade de números pares;
- Quais os números pares;
- a quantidade de números ímpares;
- quais os números ímpares.
*/

int main(int argc, char *argv[]) 
{
	int vetor[tam], vetor_par[tam], vetor_impar[tam];
	int i = 0, j = 0, k = 0;
	int par = 0, impar = 0;
	
	for (i; i < tam; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
	
	if (vetor[i] % 2 == 0)
	{
		par++;
		vetor[i] = vetor_par[j];
		j++;
	}
	else
	{
		impar++;
		vetor[i] = vetor_impar[k];
		k++;
	}
	}
	
	printf("Numero de Pares: %d\n", par);
	printf("Os numeros pares sao: \n");
	for (j = 0; j < tam; j++)
	{
		printf("%d\t", vetor_par[j]);
	}
	printf("\nNumero de Impares %d\n", impar);
	printf("Os numeros impares sao: \n");
	for (k = 0; k < tam; k++)
	{
		printf("%d\t", vetor_impar[k]);
	}
	
	return 0;
}
