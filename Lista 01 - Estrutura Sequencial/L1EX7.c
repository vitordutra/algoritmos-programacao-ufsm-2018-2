#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float salario, salario_ajustado;
	
	printf("Digite o seu salario atual: ");
	scanf("%f", &salario);
	
	salario_ajustado = salario*1.25;
	
	printf("O seu salario ajustado e %.2f", salario_ajustado);
	
	return 0;
}
