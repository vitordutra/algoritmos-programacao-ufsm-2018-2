#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float indice;
	
	printf("Digite o valor do índice de poluição do meio ambiente: \n");
	printf("Índice aceitável: 0.05 - 0.25 \n");
	printf("Indíce maior ou igual a 0.3 -> Indústrias do grupo 1 devem paralisar \n");
	printf("Indíce maior ou igual a 0.4 -> Indústrias do grupo 1 e do grupo 2 devem paralisar \n");
	printf("Indíce maior ou igual a 0.5 -> Indústrias de todos os grupos devem paralisar \n");
	scanf("%f", &indice);
	
	if ((indice >= 0) && (indice < 0.05))
	{
		printf("Índice excelente!");
	}
	else if ((indice >= 0.05) && (indice < 0.25))
	{
		printf("Índice aceitável.");
	}
	else if ((indice >= 0.25) && (indice < 0.3))
	{
		printf("Índice não adequado\n");
		printf("As indústrias não precisam interromper suas atividades");
	}
	else if ((indice >= 0.3) && (indice < 0.4))
	{
		printf("Indústrias do grupo 1 devem paralisar.\n");
	}
	else if ((indice >= 0.4) && (indice < 0.5))
	{
		printf("Indústrias do grupo 1 devem paralisar.\n");
		printf("Indústrias do grupo 2 devem paralisar.\n");		
	}
	else if (indice >= 0.5)
	{
		printf("Indústrias do grupo 1 devem paralisar.\n");
		printf("Indústrias do grupo 2 devem paralisar.\n");
		printf("Indústrias do grupo 3 devem paralisar.\n");		
	}
	else
	{
		printf("Índice Inválido\n");
	}
	
	return 0;
}
