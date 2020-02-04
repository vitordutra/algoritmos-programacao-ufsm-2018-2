#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float salario_base, imposto, gratificacao, salario;
	
	printf("Digite seu salario base: ");
	scanf("%f", &salario_base);
	
	imposto = 0.07;
	gratificacao = 0.05;
	
	salario = salario_base*(1+(gratificacao - imposto));
	
	printf("Seu salario: %.2f", salario);
	
	return 0;
}
