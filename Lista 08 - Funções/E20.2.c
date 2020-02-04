#include <stdio.h>
#include <stdlib.h>

/*
20) Escreva um programa que leia um valor n e chame uma fun��o que calcule e retorne o n-
�simo elemento de uma s�rie de n�meros em que cada elemento � dado pelo �ltimo elemento
somado ao valor da itera��o. Para exemplificar, consideremos que o valor digitado foi 5, a s�rie �
constru�da assim :
- O primeiro elemento � 1 (por defini��o: 0 do valor anterior + 1 por ser a primeira itera��o/soma);
- O pr�ximo elemento � 3 (1 do valor anterior + 2 por ser a segunda itera��o/soma);
- O pr�ximo elemento � 6 (3 do valor anterior + 3 por ser a terceira itera��o/soma);
- O pr�ximo elemento � 10 (6 do valor anterior + 4 por ser a quarta itera��o/soma);
- O pr�ximo e �ltimo elemento � 15 (10 do valor anterior + 5 por ser a quinta itera��o/soma).
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
