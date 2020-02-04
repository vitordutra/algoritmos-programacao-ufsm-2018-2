#include <stdio.h>
#include <stdlib.h>

/*
8) Elabore um algoritmo que carregue um vetor de 15 elementos inteiros e verifique a existência
de elementos iguais a 30, mostrando as posições em que esses elementos apareceram.
*/

int main(int argc, char *argv[]) 
{
	int vet[15], cont_vet = 0, pos_vet, i;
	
	printf("....::::Programa que localiza Numero 30 no Vetor::::....\n\n");
	
	for (i = 0; i < 15; i++)
	{
		printf("Digite o %d numero\t", i+1);
		scanf("%d", &vet[i]);
		if (vet[i] == 30)
		{
			cont_vet++;
		}		
	}
	
	printf("\n\nO numero 30 aparece %d vezes e nas posicoes: \n", cont_vet);
	
	for (i = 0; i < 15; i++)
	{
		if (vet[i] == 30)
		{
			printf("%d \t", i);
		}
	}
	printf(" do vetor\n");
	return 0;
}
