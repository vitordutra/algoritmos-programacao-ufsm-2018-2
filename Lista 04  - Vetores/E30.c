#include <stdio.h>
#include <stdlib.h>

/*
30) Faça um algoritmo que leia dois vetores (A e B) de 50 posições de números inteiros. O
algoritmo deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor,
subtrair o segundo elemento de A do penúltimo de B, acumulando o valor, e assim por diante.
Mostre o resultado da soma final.
*/

int main(int argc, char *argv[]) 
{
	int A[50] = {2, 5, 6, 7, 8, 10, 12, 18, 19, 20, 21, 22, 24, 26, 30, 31, 33, 38, 39, 42, 43, 45, 46, 47, 48, 50, 51, 52, 56, 57, 59, 65, 66, 71, 73, 78, 79, 82, 83, 86, 87, 88, 90, 91, 92, 93, 94, 96, 97, 100};
	int B[50] = {1, 5, 6, 7, 9, 14, 17, 19, 20, 21, 23, 26, 30, 32, 33, 34, 35, 36, 38, 39, 40, 42, 46, 48, 51, 53, 54, 55, 57, 59, 61, 64, 65, 66, 68, 70, 71, 72, 73, 76, 79, 83, 86, 87, 90, 91, 93, 94, 96, 100};
	int acumulado = 0;
	int i, j;
	
	for (i = 0, j = 49; i < 50; i++, j--)
	{
		acumulado = acumulado + (A[i] - B[j]);
		printf("Acumulado: %d\n", acumulado);
	}	
	
	printf("Soma Final: %d", acumulado);
	return 0;
}
