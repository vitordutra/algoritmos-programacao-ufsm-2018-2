#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num, quad, cub, raizq, raizc;
	
	printf("Digite um numero positivo maior que 0: ");
	scanf("%f", &num);
	
	quad = pow(num, 2);
	cub = pow(num, 3);
	raizq = sqrt(num);
	raizc = pow(num, 0.3333333);
	
	printf("Os resultados: quadrado %f, cubo %f, raiz quadrada %f, raiz cubica %f", quad, cub, raizq, raizc);
	
	return 0;
}
