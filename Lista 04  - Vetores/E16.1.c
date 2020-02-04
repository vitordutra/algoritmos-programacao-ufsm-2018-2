#include <stdio.h>
#include <stdlib.h>

/*
16) Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo
após, imprimir o vetor M.
*/

int main(int argc, char *argv[]) {
	
	//Equivale aos scanf
	int vetor[10] = {456, 789, 456 ,321, 456, 6, 7, 8, 9, 10};
	int M = 136, i;
	int produto[10];
	
	for (i = 0; i < 10; i++)
	{
		produto[i] = vetor[i]*M;
	}
	
	printf("Vetor M\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", produto[i]);
	}
	
	return 0;
}
