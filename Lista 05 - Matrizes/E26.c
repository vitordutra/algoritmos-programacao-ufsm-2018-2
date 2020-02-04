#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define nl 10
#define nc 10
/*
26) Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento
da linha onde se encontra o maior elemento da matriz. 
Escreva um algoritmo que leia uma matriz 10 X 10 de números e encontre seu elemento minimax, mostrando também sua posição.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int M[nl][nc];
	int i, j, j_minmax;
	int maior_elemento_matriz = 0, i_maior, j_maior, menor_elemento_linha = 999;
	
	//Gerar a Matriz
	printf("Matriz: \n");
	for (i = 0; i < nl; i++)
	{
		for (j = 0; j < nc; j++)
		{
			M[i][j] = rand()/100;
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	//Maior Elemento
	for (i = 0; i < nl; i++)
	{
		for (j = 0; j < nc; j++)
		{
			if (maior_elemento_matriz < M[i][j]){
				maior_elemento_matriz = M[i][j];
				i_maior = i;
				j_maior = j;
			}		
		}
	}
	
	printf("Maior Elemento: M[%d][%d] = %d\n", i_maior, j_maior, maior_elemento_matriz);
	
	//Linha do elemento maior = i_maior
	
	for (j = 0; j < nc; j++)
	{
		if (M[i_maior][j] < menor_elemento_linha)
			menor_elemento_linha = M[i_maior][j];
			j_minmax = j;
	}
	
	printf("Minimax M[%d][%d] = %d", i_maior, j_minmax, menor_elemento_linha);
	return 0;
}
