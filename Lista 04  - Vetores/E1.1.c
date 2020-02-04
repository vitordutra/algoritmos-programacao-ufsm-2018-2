#include <stdio.h>
#include <stdlib.h>
#define TAM 5 // macro de preprocessamento -> equivalente ao procurar e substituir do word

/*
1) Escreva um algoritmo que leia e mostre um vetor de 5 elementos inteiros. a seguir, conte
quantos valores pares existem no vetor.
*/

int main(int argc, char *argv[]) 
{
	int v[TAM], i, p;
	
	for (i = 0; i < 5; i++)
	{
		printf("Digite o valor de v[%d]: ", i);
		scanf("%d", &v[i]);
	}
	
	for (i = 0, p = 0; i < 5; i++)
	{
		printf("v[%d] = %d\n", i, v[i]);
		if ((v[i] % 2) == 0)
		{
			p++;
		}
	}
	
	printf("Quantidade de numeros pares: %d", p);
	
	return 0;
}
