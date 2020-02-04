#include <stdio.h>
#include <stdlib.h>

#define tam 5

/*
5) Escrever um programa que crie um vetor de 10 elementos inteiros. A seguir, o vetor deve ser
preenchido por 10 valores n�o repetidos lidos do teclado. A n�o inclus�o de elementos repetidos
deve ser garantida pelo programa, e n�o pelo usu�rio.
*/

int v[tam] = {1, 2, 3, 4, 5};
int v_dis[tam];
int i, j, repete = 0, n = 0;


int main(int argc, char *argv[]) 
{
	// Primeiro for verifica o primeiro valor.
	// O primeiro valor � necessariamente n�o repetido, ent�o ele guarda
	// A proxima linha diz que ele vai pro outro indice do vetor
	for (i = 0; i < tam; i++)
	{
		if (i == 0)
		{
			v_dis[n] = v[i];
			n++;
		}
		else
		{
			repete = 0;
			// Percorre o vetor distinto verificando se o valor v[i] existe no mesmo
			for (j = 0; j < n; j++)
			{
				if (v[i] == v_dis[j])
				{
					repete++;
				}
			}
			// Se o valor v[i] n�o foi encontrado no vetor distinto, ent�o adiciona:
			if (repete < 1)
			{
				v_dis[n] = v[i];
				n++; // Aumenta o tamanho do valor distinto
			}
		}
	}
	
	printf("Valor distinto: ");
	for (i = 0; i < n; i++)
	{
		printf("%d", v_dis[i]);
	}
	
	return 0;
}
