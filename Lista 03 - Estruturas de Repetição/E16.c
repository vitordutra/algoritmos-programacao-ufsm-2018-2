#include <stdio.h>
#include <stdlib.h>

/*
16) Construa um algoritmo para calcular a média de valores pares e ímpares, que serão digitados
pelo usuário. Ao final o algoritmo deve mostrar estas duas médias. O algoritmo deve mostrar
também o maior número PAR digitado e o menor número ímpar digitado. Para finalizar o usuário
irá digitar um valor negativo.
*/

int main() 
{
	int num, ip = 1, inp = 1;
	float = mediadospares = 0, mediadosimpares = 0;
	
	scanf("%i", &num);
	
	// Enquanto o número for não negativo, o while irá rodar.
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
