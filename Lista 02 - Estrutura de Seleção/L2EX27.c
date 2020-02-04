#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float sal_fixo, vendas, sal_total;
	
	printf("Digite o valor do salário fixo: ");
	scanf("%f", &sal_fixo);
	
	printf("Digite o valor das vendas: ");
	scanf("%f", &vendas);
	
	if (vendas <= 1500)
	{
		sal_total = sal_fixo + vendas*0.03;
	}
	else
	{
		sal_total = sal_fixo + 1500*0.03 + (vendas - 1500)*0.05;
	}
	
	printf("O salário total do vendedor é: %.2f", sal_total);
	
	return 0;
}
