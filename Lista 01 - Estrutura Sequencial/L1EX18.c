#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float v, x, t;
	char cod;
	
	printf("Piloto, digite seu codigo: ");
	scanf("%c", &cod);
	
	printf("Piloto %c, diga a velocidade percorrida (km): ", cod);
	scanf("%f", &x);
	
	printf("Piloto %c, diga o tempo percorrido (h): ", cod);
	scanf("%f", &t);
	
	v = x/t;
	
	printf("Piloto %c, sua velocidade media foi: %f", cod, v);
	
	return 0;
}
