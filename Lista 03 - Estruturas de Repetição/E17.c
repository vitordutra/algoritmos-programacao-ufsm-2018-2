#include <stdio.h>
#include <stdlib.h>
/*

17) Escreva uma Programa que receba um n�mero inteiro e verifique se o n�mero fornecido �
primo ou n�o. Imprima mensagem de n�mero primo ou n�mero n�o primo.

*/

int main(int argc, char *argv[]) 
{
	int n, i, p;
	
	printf("Digite um numero: "); // numero que sera verificado se � par ou n�o
	scanf("%d", &n);
	
	p = 1; // flag come�a VERDADEIRO -> o numero � primo
	for (i = 2; i < n; i++) // o contator vai de 2 a n - 1
	{
		if ((n % i) == 0) // o if vai dividir cada numero pelo contador. se qualquer dessas divis�es for exata o numero n�o � primo.
		{
			//N�mero n�o � primo!
			p = 0 ; //FLAG que identifica se o n�mero � primo ou n�o
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
