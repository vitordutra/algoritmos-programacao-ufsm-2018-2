#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
30) Escreva um algoritmo que receba vários números e verifique se eles são ou não quadrados
perfeitos. O algoritmo termina a execução quando for digitado um número menor ou igual a 0. (Um
número é quadrado perfeito quando tem um número inteiro como raiz quadrada.)
*/

int main(int argc, char *argv[]) 
{
	int num, c; //num -> numero que quero verificar
	// c -> ?
	
	printf("Digite um numero: ");
	scanf("%i", &num); // Escaneio um numero pra saber se ele é ou não um quadrado perfeito
	
	while (num > 0) // Enquanto o numero for inteiro positivo esse while vai rodar, caso contrario ele para.
	{
		c = 1; // c inicia de 1
		
		//Então ele vai multiplicar c*c e testar -> se c*c = num é um quadrado perfeito. Caso contrario incrementa.
		// Se ao incrementar e multiplicar até o final não é igual ao numero digitado ele não é um quadrado perfeito.
		
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
