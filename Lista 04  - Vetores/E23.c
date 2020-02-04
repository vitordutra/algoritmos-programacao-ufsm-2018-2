#include <stdio.h>
#include <stdlib.h>

/*
23) Faça um algoritmo que leia um vetor A de 50 posições. Em seguida, compacte o vetor,
retirando os valores nulos e negativos. Coloque o resultado no vetor B.
*/

int main(int argc, char *argv[]) {
	int A[50] = {-94, -93, -88, -81, -76, -73, -66, -64, -57, -56, -53,
	 			 -47, -46, -44, -43, -36, -35, -34, -33, -30, -29, -23, -20, -18, -17,
	             -1, 8, 9, 12, 13, 16, 20, 22, 29, 30, 40, 48, 50, 51, 56, 58, 67, 73,
	             75, 76, 80, 83, 85, 92, 99};
	
	int i, j = 0, k;
	int B[50];
	
	for (i = 0; i < 50; i++)
	{
		if ((A[i] > 0))
		{
			B[j] = A[i];
			j++; // No final, j vai ser o maior índice do vetor B
		}
	}
	
	printf("Vetor Compactado B: \n");
	for (i = 0; i < j; i++) //Como j é o maior indice do vetor B, ele é o fim do loop!!!
	{
		printf("%d, ",B[i]);
	}
	
	return 0;
}
