#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float A, bmaior, bmenor, h;
	
	printf("Digite o valor da base maior do trapezio: ");
	scanf("%f", &bmaior);
	
	printf("Digite o valor da base menor do trapezio: ");
	scanf("%f", &bmenor);
	
	printf("Digite o valor da altura do trapezio: ");
	scanf("%f", &h);
	
	A = ((bmaior + bmenor)*h)/2;
	
	printf("A area do trapezio: %f", A);
	
	
	return 0;
}
