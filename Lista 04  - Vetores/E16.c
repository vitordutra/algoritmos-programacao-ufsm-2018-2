#include <stdio.h>
#include <stdlib.h>

/*
16) Ler um vetor A de 10 n�meros. Ap�s, ler mais um n�mero e guardar em uma vari�vel X.
Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo
ap�s, imprimir o vetor M.
*/

int main(int argc, char *argv[]) {
	
	//Equivale aos scanf
	int vetor[10] = {1, 2, 3 ,4, 5, 6, 7, 8, 9, 10};
	int M = 9;
	int produto[10];
	
	for (i = 0; i < 10; i++)
	{
		produto[i] = vetor[i]*M;
	}
	
	printf("Vetor M");
	for (i = 0; i < 10; i++)
	{
		printf("%d", produto[i]);
	}
	
	return 0;
}
