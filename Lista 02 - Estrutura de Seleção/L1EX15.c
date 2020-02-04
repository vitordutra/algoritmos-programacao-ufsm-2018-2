#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int dia, mes, ano;
	
	printf("Digite dia (entre 1 e 31): ");
	scanf("%i", &dia);
	
	printf("Digite mes (entre 1 e 12): ");
	scanf("%i", &mes);
	
	printf("Digite ano (entre 1900 e 2018): ");
	scanf("%i", &ano);
	
	if ((dia >= 1) && (dia <= 31))
	{
		printf("Dia Valido\n");
		
		if ((mes >= 1) && (mes <= 12))
		{
			printf("Mes valido\n");
			
			if ((ano >= 1900) && (ano <= 2018))
			{
				printf("Ano valido\n");
			}
			else
			{
				printf("Ano invalido\n");
				printf("Data invalida");
			}
		}
		else
		{
			printf("Mes Invalido\n");
			printf("Data Invalida");
		}
	}
	else
	{
		printf("Dia Invalido\n");
		printf("Data Invalida");
	}
	
	return 0;
}
