#include <stdio.h>
#include <stdlib.h>

/*
16) Construa um algoritmo para calcular a m�dia de valores pares e �mpares, que ser�o digitados
pelo usu�rio. Ao final o algoritmo deve mostrar estas duas m�dias. O algoritmo deve mostrar
tamb�m o maior n�mero PAR digitado e o menor n�mero �mpar digitado. Para finalizar o usu�rio
ir� digitar um valor negativo.
*/

int main() 
{
	int num, ip = 1, inp = 1;
	float = mediadospares = 0, mediadosimpares = 0;
	
	scanf("%i", &num);
	
	// Enquanto o n�mero for n�o negativo, o while ir� rodar.
	while (num >= 0)
	{
		if (num % 2 == 0)
		{
			mediadospares = (mediadospares + num)/ip;
			ip++;
		}
		else
		{
			mediadosimpares = (mediadosimpares + num)/inp;
			inp++;
		}
		
		scanf("%i", &num);
	}
	printf("%i\n", mediadospares);
	printf("%i\n", mediadosimpares);
	
	return 0;
}
