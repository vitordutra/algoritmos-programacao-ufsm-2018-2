#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
30) Escreva um algoritmo que receba v�rios n�meros e verifique se eles s�o ou n�o quadrados
perfeitos. O algoritmo termina a execu��o quando for digitado um n�mero menor ou igual a 0. (Um
n�mero � quadrado perfeito quando tem um n�mero inteiro como raiz quadrada.)
*/

int main(int argc, char *argv[]) 
{
	int num, c; //num -> numero que quero verificar
	// c -> ?
	
	printf("Digite um numero: ");
	scanf("%i", &num); // Escaneio um numero pra saber se ele � ou n�o um quadrado perfeito
	
	while (num > 0) // Enquanto o numero for inteiro positivo esse while vai rodar, caso contrario ele para.
	{
		c = 1; // c inicia de 1
		
		//Ent�o ele vai multiplicar c*c e testar -> se c*c = num � um quadrado perfeito. Caso contrario incrementa.
		// Se ao incrementar e multiplicar at� o final n�o � igual ao numero digitado ele n�o � um quadrado perfeito.
		
		while (c*c <= num)
		{
			if (c*c == num)
			{
				printf("O numero digitado e um quadrado perfeito!\n");
			}
			else
			{
				printf("O numero digitado NAO E um quadrado perfeito\n");
			}
			
			c++;
		}
		printf("Digite um numero: ");
		scanf("%i", &num);
	}
	return 0;
}
