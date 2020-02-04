#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	float sal_fixo, preco, n_vendas, comissao, total_vendas, sal_total;
	
	printf("Digite o salário fixo do vendedor: ");
	scanf("%f", &sal_fixo);
	
	printf("Digite o preço do carro: ");
	scanf("%f", &preco);
	
	printf("Digite o número de carros vendidos: ");
	scanf("%f", &n_vendas);
	
	total_vendas = n_vendas*preco;
	
	// Comissão fixa: 100 reais por carro vendido.
	sal_total = sal_fixo + n_vendas*100 + 0.05*total_vendas;
	
	printf("O salário total do vendedor é: %.2f reais", sal_total);
	
	return 0;
}
