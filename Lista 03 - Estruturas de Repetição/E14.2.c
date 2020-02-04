#include <stdio.h>
#include <stdlib.h>

/*
14) Escreva um algoritmo que calcule o m.d.c. (m�ximo divisor comum) entre A e B (n�mero
inteiros e positivos). Esses dois valores s�o passados pelo usu�rio atrav�s do teclado.
*/

int main(int argc, char *argv[]) 
{
	int n1, n2, resto;
	
	printf("Digite dois numeros: \n");
	scanf("%i\n%i", &n1, &n2);
	
	resto = n1 % n2;
	
	while (resto != 0)
	{
		n1 = n2;
		n2 = resto;
		resto = n1 % n2;
	}
	
	printf("MDC = %d\n", n2);
	return 0;
}
