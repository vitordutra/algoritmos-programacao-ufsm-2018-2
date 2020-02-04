#include <stdio.h>
#include <stdlib.h>

/*
15) Escrever um algoritmo que leia um valor inteiro e chama uma função para calcular a soma de
todos os dígitos da representação decimal deste número. Por exemplo, a soma dos dígitos de 432 é 9 (4 + 3 + 2). 
Lembre-se: para 432 / 10, quociente 43 e resto 2. A função deve retornar o
valor resultante para a função principal, para então ser exibido.
*/

int somaDosDigitos(int num)
{ 
	int resto = 0, soma = 0;
	
	while (num != 0)
	{
		resto = num % 10;
		soma += resto;
		num /= 10;
	}
	
	return soma;	
}

int main(int argc, char *argv[]) 
{
	printf("%d", somaDosDigitos(432));	
	return 0;
}
