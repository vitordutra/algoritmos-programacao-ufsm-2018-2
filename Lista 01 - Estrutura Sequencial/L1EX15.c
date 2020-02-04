#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float base, altura, area, perimetro;
	
	printf("Digite a base do retangulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do retangulo: ");
	scanf("%f", &altura);
	
	area = base*altura;
	perimetro = 2*(base + altura);
	
	printf("A area do retangulo: %f\n", area);
	printf("O perimetro do retangulo: %f", perimetro);	
		
	return 0;
}
