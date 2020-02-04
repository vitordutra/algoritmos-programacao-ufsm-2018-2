#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

/*
13) Escrever um algoritmo que gera os 10 primeiros n�meros primos acima de 100 e os armazena
em um vetor de X(10) escrevendo, no final, o vetor X.
 */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int n,k, cont = 0;
	int X[10];
	
	// printf("\nDigite um n�mero natural: ");
	//scanf("%u", &n);
	
	for (n = 100; n < 1000; n++)
	{
		//Itera��o para saber se o numero � primo
		for (k = 2; k <= n-1; k++) // O intervalo vai de k = 2 at� k = numero - 1
		{
			if (n % k == 0) // se n for divisivel por qualquer numero diferente de 1 e ele mesmo ele N�O � primo
			{
				break;
			}
		}
		
		//Print se o numero � primo
		if (k == n) // Se o numero for igual ao indice ele � primo porque foi a ultima possibilidade que sobrou
			{
				X[cont] = n; //O vetor na posi��o 0 � registrado no vetor X
				cont = cont + 1;
			}
		
		if (cont > 10) //Para limitar aos 10 primeiros primos acima de 100
			break;
	}
	
	printf("10 Primeiros Numeros Primos Acima de 100: \n");
	
	for (k = 0; k < 10; k++)
	{
		printf("%d\n", X[k]);
	}
	
	return 0;
}
