#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	float n1, n2;
	float media, dif, prod;
	
	printf("Digite n1: ");
	scanf("%f", &n1);
	
	printf("Digite n2: ");
	scanf("%f", &n2);
	
	printf("Digite a op��o desejada: \n");
	printf("1. M�dia entre dois n�meros. \n");
	printf("2. Diferen�a entre dois n�meros. \n");
	printf("3. O produto entre dois n�meros. \n");
	scanf("%i", &opcao);
	
	if (opcao == 1)
	{
		media = (n1 + n2)/2;
		printf("A m�dia de n1 e n2 �: %f", media);
	}
	else if (opcao == 2)
	{
		dif = n1 - n2;
		printf("A diferen�a entre n1 e n2 �: %f", dif);
	}
	else if (opcao == 3)
	{
		prod = n1*n2;
		printf("O produto entre n1 e n2 �: %f", prod);
	}
	else
	{
		printf("ERRO");
	}
	
	return 0;
}
