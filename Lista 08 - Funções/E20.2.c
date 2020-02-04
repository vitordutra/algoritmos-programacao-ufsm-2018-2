#include <stdio.h>
#include <stdlib.h>

/*
20) Escreva um programa que leia um valor n e chame uma função que calcule e retorne o n-
ésimo elemento de uma série de números em que cada elemento é dado pelo último elemento
somado ao valor da iteração. Para exemplificar, consideremos que o valor digitado foi 5, a série é
construída assim :
- O primeiro elemento é 1 (por definição: 0 do valor anterior + 1 por ser a primeira iteração/soma);
- O próximo elemento é 3 (1 do valor anterior + 2 por ser a segunda iteração/soma);
- O próximo elemento é 6 (3 do valor anterior + 3 por ser a terceira iteração/soma);
- O próximo elemento é 10 (6 do valor anterior + 4 por ser a quarta iteração/soma);
- O próximo e último elemento é 15 (10 do valor anterior + 5 por ser a quinta iteração/soma).
*/

int nElementoDaSerie(int num)
{
	int i, soma = 0;
	
	for (i = 0; i <= num; i++)
	{
		soma += i;
	}
	
	return soma;	
}


int main()
{
	printf("%d", nElementoDaSerie(5));
}
