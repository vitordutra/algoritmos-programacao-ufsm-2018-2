#include <stdio.h>
#include <stdlib.h>

/* 
13) Escreva um algoritmo que receba números do usuário e imprima o triplo de cada número. O
algoritmo deve encerrar quando o número –999 for digitado.
*/

int main(int argc, char *argv[]) 
{
	int n = 0;
	
	while (n != -999*3)
	{
		scanf("%i", &n);
		n = n*3;
		printf("%d\n", n);
	}
	
	return 0;
}
