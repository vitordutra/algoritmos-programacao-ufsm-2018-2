#include <stdio.h>
#include <stdlib.h>

/* 
22) Escreva um algoritmo no qual seja chamada uma fun��o que receba como par�metro um ano
e retorne 1 se o ano for bissexto, e 0 caso contr�rio. S�o bissextos todos os anos n�o seculares
divis�veis por 4 (mas n�o por 100) e os anos divis�veis por 400.
*/
int bissexto(int ano)
//  && (ano % 400 == 0))
	{
{
	if ((ano % 4 == 0) && (ano % 100 != 0))
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(int argc, char *argv[]) 
{
	printf("%d", bissexto(2020));
	return 0;
}
