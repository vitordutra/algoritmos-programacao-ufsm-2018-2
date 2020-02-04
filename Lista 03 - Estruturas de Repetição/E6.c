#include <stdio.h>
#include <stdlib.h>

/* 
6) Escreva uma Programa que receba a idade de 10 pessoas, calcule e imprima a quantidade de pessoas maiores de idade (idade >= 18 anos).
*/

int main(int argc, char *argv[]) 
{
	int idade, cont = 0, i = 0;
	
	for (i == 0; i < 10; i++)
	{
		printf("Digite a idade de uma pessoa: ");
		scanf("%d", &idade);
		
		if (idade >= 18)
		{
			cont++;
		}
	}
	
	printf("%d pessoas sao maiores de idade", cont);
	
	return 0;
}
