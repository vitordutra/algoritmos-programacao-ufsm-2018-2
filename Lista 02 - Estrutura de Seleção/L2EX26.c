#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	// Número de horas regulares por mês = 160 h
	int n_h;
	float sal_por_h, sal_tot;
	
	printf("Quantas horas houveram de trabalho esse mês? ");
	scanf("%i", &n_h);
	
	printf("Qual o salário por hora do trabalhador? ");
	scanf("%f", &sal_por_h);
	
	if (n_h <= 160)
	{
		sal_tot = n_h*sal_por_h;
	}
	else
	{
		sal_tot = 160*sal_por_h + (n_h - 160)*sal_por_h*1.5;
	}
	
	printf("O salario mensal do funcionario e: %.2f", sal_tot);
	
	return 0;
}
