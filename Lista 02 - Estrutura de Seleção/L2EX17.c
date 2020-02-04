#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite idade: ");
	scanf("%i", &idade);
	
	if ((idade >= 18) && (idade <= 65))
	{
		printf("Eleitor obrigatório");
	}
	else if (idade < 16)
	{
		printf("Não votante");
	}
	else
	{
		printf("Eleitor facultativo");
	}
	return 0;
	
}
