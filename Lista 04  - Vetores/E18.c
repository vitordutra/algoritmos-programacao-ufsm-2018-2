#include <stdio.h>
#include <stdlib.h>

/*
18) Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número qualquer,
calcular e escrever quantas vezes esse número aparece no vetor.
*/

int main(int argc, char *argv[]) 
{
	srand(1); //Seed pra randomizar os numeros;
	int vetor[30];
	int i, numero = 10;
	int cont = 0;
	
	printf("Vetor\n");
	for (i = 0; i < 30; i++)
	{
		vetor[i] = rand()%13;
		printf("%d\n",vetor[i]);
	}
	
	printf("Numero: %d\n", numero);
	
	for (i = 0; i < 30; i++)
	{
		if (vetor[i] == numero)
		{
			cont = cont + 1;
		}
	}
	
	printf("O numero %d aparece %d vezes no vetor", numero, cont);
	
	
	
	return 0;
}
