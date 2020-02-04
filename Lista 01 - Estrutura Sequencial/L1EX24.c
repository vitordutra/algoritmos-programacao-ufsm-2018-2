#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float preco_fabrica, pct_lucro_dist, pct_imp;
	float preco_total, preco_lucro, preco_imp;
	
	printf("Digite o preço de fábrica do carro: ");
	scanf("%f", &preco_fabrica);
	
	printf("Digite o percentual de lucro do distribuidor: ");
	scanf("%f", &pct_lucro_dist);
	
	printf("Digite o percentual de imposto: ");
	scanf("%f", &pct_imp);
	
	preco_lucro = preco_fabrica * pct_lucro_dist;
	preco_imp = preco_fabrica * pct_imp;
	preco_total = preco_fabrica + preco_imp + preco_lucro;
	
	printf("O lucro do distribuidor é: %.2f", preco_lucro);
	printf("O valor correspondente a impostos é: %.2f", preco_imp);
	printf("O preço final do veículo: %.2f", preco_total);
	
	return 0;
}
