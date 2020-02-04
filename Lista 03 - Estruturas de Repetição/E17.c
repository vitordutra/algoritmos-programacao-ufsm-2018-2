#include <stdio.h>
#include <stdlib.h>
/*

17) Escreva uma Programa que receba um número inteiro e verifique se o número fornecido é
primo ou não. Imprima mensagem de número primo ou número não primo.

*/

int main(int argc, char *argv[]) 
{
	int n, i, p;
	
	printf("Digite um numero: "); // numero que sera verificado se é par ou não
	scanf("%d", &n);
	
	p = 1; // flag começa VERDADEIRO -> o numero é primo
	for (i = 2; i < n; i++) // o contator vai de 2 a n - 1
	{
		if ((n % i) == 0) // o if vai dividir cada numero pelo contador. se qualquer dessas divisões for exata o numero não é primo.
		{
			//Número não é primo!
			p = 0 ; //FLAG que identifica se o número é primo ou não
			break;	
		}
	}
	
	if (p == 1)
	{
		printf("%d e primo!", n);
	}
	else
	{
		printf("%d nao e primo!", n);
	}
	
	return 0;
}
