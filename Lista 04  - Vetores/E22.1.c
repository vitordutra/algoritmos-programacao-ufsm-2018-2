#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
22) Faça um algoritmo que leia um vetor A de 10 posições contendo números inteiros. Determine
e mostre, a seguir, quais elementos de A estão repetidos e quantas vezes cada um se repete.
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese");
	
	int i, x, v[10], cont_vezes, cont;
	
	// Comando de Leitura dos Valores
	for (i = 0; i < 10; i++)
	{
		printf("Digite o Valor da Posição %i: ", i);
		scanf("%i", &v[i]);
	}
	
	// Comando de Comparação
	for (i = 0; i < 10; i++)
	{
		
		for (x = i + 1; x < 10; x++)
		{
			if (v[i] == v[x])
				{
					printf("\n O valor %i se repete\n", v[i]);
				}
			else
				cont++;
		}
	}
	
	if (cont == 45)
		printf("Nenhum Valor se repete!");
	
	return 0;
}
