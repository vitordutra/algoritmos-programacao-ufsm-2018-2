#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float peso_kg, peso_g;
	
	printf("Digite o valor do seu peso em kg: ");
	scanf("%f", &peso_kg);
	
	peso_g = peso_kg*1000;
	
	printf("Voce pesa %.2f g", peso_g);
	
	return 0;
}
