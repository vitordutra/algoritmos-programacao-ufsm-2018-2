#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float dmenor, dmaior, area;
	
	printf("Digite o valor da diagonal menor do losango: ");
	scanf("%f", &dmenor);
	
	printf("Digite o valor da diagonal maior do losango: ");
	scanf("%f", &dmaior);
	
	area = (dmaior*dmenor)/2;
	
	printf("A area do losango: %.2f", area);
	
	return 0;
}
