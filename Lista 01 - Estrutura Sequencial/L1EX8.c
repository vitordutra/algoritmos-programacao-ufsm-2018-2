#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float salario, pct_reajuste, salario_ajustado;
	
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite o percentual de reajuste: ");
	scanf("%f", &pct_reajuste);
	
	salario_ajustado = salario*(pct_reajuste/100+1);
	
	printf("O seu salario ajustado: %.2f", salario_ajustado);
	
	return 0;
}
