#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float sal, sal_reaj;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &sal);
	
	if (sal <= 500)
	{
		sal_reaj = sal*1.3;
		printf("O valor do seu novo salario: %.2f", sal_reaj);
	}
	else
	{
		printf("Voce nao tem direito a reajuste de salario");
	}
	
	return 0;
}
