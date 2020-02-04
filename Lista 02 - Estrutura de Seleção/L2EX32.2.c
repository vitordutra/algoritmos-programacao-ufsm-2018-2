#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float indice;
	
	printf("Digite o valor do �ndice de polui��o do meio ambiente: \n");
	printf("�ndice aceit�vel: 0.05 - 0.25 \n");
	printf("Ind�ce maior ou igual a 0.3 -> Ind�strias do grupo 1 devem paralisar \n");
	printf("Ind�ce maior ou igual a 0.4 -> Ind�strias do grupo 1 e do grupo 2 devem paralisar \n");
	printf("Ind�ce maior ou igual a 0.5 -> Ind�strias de todos os grupos devem paralisar \n");
	scanf("%f", &indice);
	
	if ((indice >= 0) && (indice < 0.05))
	{
		printf("�ndice excelente!");
	}
	else if ((indice >= 0.05) && (indice < 0.25))
	{
		printf("�ndice aceit�vel.");
	}
	else if ((indice >= 0.25) && (indice < 0.3))
	{
		printf("�ndice n�o adequado\n");
		printf("As ind�strias n�o precisam interromper suas atividades");
	}
	else if ((indice >= 0.3) && (indice < 0.4))
	{
		printf("Ind�strias do grupo 1 devem paralisar.\n");
	}
	else if ((indice >= 0.4) && (indice < 0.5))
	{
		printf("Ind�strias do grupo 1 devem paralisar.\n");
		printf("Ind�strias do grupo 2 devem paralisar.\n");		
	}
	else if (indice >= 0.5)
	{
		printf("Ind�strias do grupo 1 devem paralisar.\n");
		printf("Ind�strias do grupo 2 devem paralisar.\n");
		printf("Ind�strias do grupo 3 devem paralisar.\n");		
	}
	else
	{
		printf("�ndice Inv�lido\n");
	}
	
	return 0;
}
