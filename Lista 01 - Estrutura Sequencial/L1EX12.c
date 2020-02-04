#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float salario_minimo, salario, x;
	
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &salario_minimo);
	
	printf("Digite o valor do seu salario: ");
	scanf("%f", &salario);
	
	x = salario/salario_minimo;
	
	printf("Voce ganha %.2f salarios minimos", x);
	
	return 0;
}
