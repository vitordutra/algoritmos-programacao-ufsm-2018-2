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
	int n, soma = 0, aux, i, q;
	float mp, mi; //media dos pares / media dos impares
	int y, p;
	
	printf("Quantidade de numeros: ");
	scanf("%d", &n); //n � a quantidade de numeros
	
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
