#include <stdio.h>
#include <stdlib.h>

/*
19) Crie um algoritmo que receba um n�mero inteiro diferente de zero, e calcule o fatorial deste
n�mero. (Fatorial de um n�mero � igual ao produto dos n�meros 1 ao n�mero desejado, inclusive.
Ex: 3! (fatorial de 3 � igual a: 1x2x3 = 6)
*/

int main(int argc, char *argv[]) 
{
	int num, fat;
	
	printf("Digite um numero\n ");
	printf("O fatorial desse numero ser� calculado: ");
	scanf("%i", &num);
	
	for (fat = 1; num > 1; num--)
	{
		fat = fat*num;
	}
	
	printf("O fatorial de %i e %i", num, fat);
	
	return 0;
}
