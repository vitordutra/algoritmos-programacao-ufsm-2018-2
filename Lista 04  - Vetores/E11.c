#include <stdio.h>
#include <stdlib.h>

#define N 5
/*
11) Fa�a um algoritmo que leia um c�digo num�rico inteiro e um vetor de 5 posi��es de n�meros
reais. Se o c�digo for zero, termine o algoritmo. Se o c�digo for 1, mostre o vetor na ordem direta.
Se o c�digo for 2, mostre o vetor na ordem inversa.
*/

int main(int argc, char *argv[]) 
{
	
	float vetor[N], ax;
	int cod, i, j;
	
	for (i = 0; i < N; i++)
	{
		printf("Informe o vetor[%d]: ", i);
		scanf("%f", &vetor[i]);
	}
	
	printf("Opcoes: \n\t 1 - Ordem Direta\n\t 2 - Ordem Inversa\n\t 0 - Fim\nOpcao? ");
	scanf("%d", &cod);
	
	while ((cod < 0) || (cod > 2))
	{
		printf("Opcao Invalida\nOpcao? ");
		scanf("%d", &cod);
	}
	
	switch (cod)
	{
		case 1:
			printf("1 - Ordem Direta\n");
			for (i = 0; i < N; i++)
				printf("\t[%d]: %f", i, vetor[i]);
			break;
		
		case 2:
			printf("2 - Ordem Inversa\n");
			for (i = N - 1; i >= 0; i--)
				printf("\t[%d]: %f", i, vetor[i]);
			break;
		case 0:
			printf("Fim\n");
			break;
	}
	return 0;
}
