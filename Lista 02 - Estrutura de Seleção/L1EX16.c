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
	
	printf("Digite a opção desejada: \n");
	printf("1. Média entre dois números. \n");
	printf("2. Diferença entre dois números. \n");
	printf("3. O produto entre dois números. \n");
	scanf("%i", &opcao);
	
	if (opcao == 1)
	{
		media = (n1 + n2)/2;
		printf("A média de n1 e n2 é: %f", media);
	}
	else if (opcao == 2)
	{
		dif = n1 - n2;
		printf("A diferença entre n1 e n2 é: %f", dif);
	}
	else if (opcao == 3)
	{
		prod = n1*n2;
		printf("O produto entre n1 e n2 é: %f", prod);
	}
	else
	{
		printf("ERRO");
	}
	
	return 0;
}
