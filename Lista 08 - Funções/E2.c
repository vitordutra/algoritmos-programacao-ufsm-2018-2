#include <stdio.h>
#include <stdlib.h>

/*2) Escreva uma função que leia um valor inteiro e retorne este valor.*/

int main(int argc, char *argv[]) 
{
	int lerValorInteiro();
	int valor_inteiro;
	
	valor_inteiro = lerValorInteiro();
	
	printf("%d", valor_inteiro);
	
	return 0;
}

int lerValorInteiro()
{
	int valor_inteiro;
	scanf("%d", &valor_inteiro);
	
	return valor_inteiro;
}
