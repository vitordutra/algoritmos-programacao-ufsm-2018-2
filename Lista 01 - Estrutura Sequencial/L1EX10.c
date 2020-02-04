#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float deposito, taxa_juros, juros, valor_total;
	
	printf("Digite o valor do seu deposito: ");
	scanf("%f", &deposito);
	
	printf("Digite o valor da taxa de juros: ");
	scanf("%f", &taxa_juros);
	
	juros = deposito*taxa_juros;
	
	valor_total = juros + deposito;
	
	printf("O valor do seu rendimento: %f\n",juros);
	printf("O valor total: %f", valor_total);
	
	return 0;
}
