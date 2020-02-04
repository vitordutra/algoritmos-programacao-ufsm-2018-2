#include <stdio.h>
#include <stdlib.h>

/*
19) Crie um algoritmo que receba um número inteiro diferente de zero, e calcule o fatorial deste
número. (Fatorial de um número é igual ao produto dos números 1 ao número desejado, inclusive.
Ex: 3! (fatorial de 3 é igual a: 1x2x3 = 6)
*/

int main(int argc, char *argv[]) 
{
	int num, fat;
	
	printf("Digite um numero\n ");
	printf("O fatorial desse numero será calculado: ");
	scanf("%i", &num);
	
	for (fat = 1; num > 1; num--)
	{
		fat = fat*num;
	}
	
	printf("O fatorial de %i e %i", num, fat);
	
	return 0;
}
