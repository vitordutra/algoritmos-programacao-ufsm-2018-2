#include <stdio.h>
#include <stdlib.h>

/*
20) Leia um vetor de 15 posições, após isso, implemente um algoritmo para inverter as posições
deste vetor da seguinte maneira: 1º troca com o 15º, 2º com o 14º, e assim sucessivamente até
efetuar todas as trocas. Obs.: Não use vetores auxiliares.
*/


/* Problema
v[0] v[1] v[2] v[3] v[4] v[5] v[6] v[7] v[8] v[9] v[10] v[11] v[12] v[13] v[14]

v[0] = v[14]
v[1] = v[13]
v[2] = v[12]
v[3] = v[11]
v[4] = v[10]
v[5] = v[9]
v[6] = v[8]
v[7] = v[7]

variavel auxiliar para ajudar nas trocas
*/
int main(int argc, char *argv[]) 
{
	int v[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int aux, i, j = 14;
	
	printf("Vetor Original\n");
	for (i = 0; i < 15; i++)
	{
		printf(" %d ", v[i]);
	}
	
	for (i = 0; i < 7; i++, j--)
	{
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
	}
	
	printf("\nVetor Permutado\n");
	for (i = 0; i < 15; i++)
	{
		printf(" %d ", v[i]);
	}
	
	return 0;
}
