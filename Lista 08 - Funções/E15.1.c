#include <stdio.h>
#include <stdlib.h>

/*
15) Escrever um algoritmo que leia um valor inteiro e chama uma fun��o para calcular a soma de
todos os d�gitos da representa��o decimal deste n�mero. Por exemplo, a soma dos d�gitos de 432 � 9 (4 + 3 + 2). 
Lembre-se: para 432 / 10, quociente 43 e resto 2. A fun��o deve retornar o
valor resultante para a fun��o principal, para ent�o ser exibido.
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
