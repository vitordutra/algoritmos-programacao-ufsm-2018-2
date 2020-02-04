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
	int n, soma = 0, aux, i, q;
	float mp, mi; //media dos pares / media dos impares
	int y, p;
	
	printf("Quantidade de numeros: ");
	scanf("%d", &n); //n é a quantidade de numeros
	
	while (n > 0)
	{
		printf("Digite o proximo numero: ");
		scanf("%d", &n);
	}
	
	for (i = 1; i <= q; i++)
	{
		printf("Digite um numero inteiro.\n");
		scanf("%d", &n);
		
		if (n % 2 == 0)
		{
			mp = mp + n;
			p++;
		}
		else
		{
			mi = mi + n;
			y++;
		}
	}
	
	printf("A media dos numeros pares e: %f\n", mp/p);
	printf("A media dos numeros impares e: %f\n", mp/y);
	
	
	return 0;
}
