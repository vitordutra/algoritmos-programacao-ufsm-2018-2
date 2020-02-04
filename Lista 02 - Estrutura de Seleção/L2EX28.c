#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int sex;
	float h, p;
	
	printf("Digite sua altura (em m): ");
	scanf("%f", &h);
	
	printf("Digite seu sexo: (1 para homem ou 2 para mulher): ");
	scanf("%i", &sex);
	
	if (sex == 1)
	{
		p = (72.7*h) - 58;
	}
	else if (sex == 2)
	{
		p = (62.1*h) - 44.7;
	}
	else
	{
		printf("SEXO INVÁLIDO");
	}
	
	printf("Seu peso ideal é: %.1f", p);
	
	return 0;
}
