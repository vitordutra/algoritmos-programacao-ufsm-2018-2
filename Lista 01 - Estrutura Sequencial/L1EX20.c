#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float a1, r, a10;
	
	printf("digite o valor de a1: ");
	scanf("%f", &a1);
	
	printf("digite o valor de r: ");
	scanf("%f", &r);
	
	a10 = a1 + (10 - 1)*r;
	
	printf("O valor do 10º termo: %f", a10);
	return 0;
	
}
