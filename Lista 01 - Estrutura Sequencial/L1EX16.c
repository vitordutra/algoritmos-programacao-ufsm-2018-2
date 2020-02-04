#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float r, pi, h, V;
	
	printf("Digite o raio da lata de oleo: ");
	scanf("%f", &r);
	
	printf("Digite a altura da lata de oleo: ");
	scanf("%f", &h);
	
	pi = 3.14159265359;
	
	V = pi*r*r*h;
	
	printf("O volume da lata de oleo: %f", V);
		
	return 0;
}
