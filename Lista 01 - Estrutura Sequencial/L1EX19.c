#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float a, b, c;
	
	printf("Digite o valor do angulo a: ");
	scanf("%f", &a);
	
	printf("Digite o valor do angulo b: ");
	scanf("%f", &b);
	
	c = 180 - a - b;
	
	printf("O valor do angulo c: %f", c);
	
	return 0;
	
}
