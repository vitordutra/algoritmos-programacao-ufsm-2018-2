#include <stdio.h>
#include <stdlib.h>

/*
8) Faça um algoritmo para ler um número inteiro n, calcular e exibir a soma dos números inteiros
de 1 a n, inclusive.
*/

int main() 
{
	int n, i = 0, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i == 0; i <= n; i++)
	{
		soma = soma + i;
	}
	
	soma = soma - 1; // Tenho que adicionar essa linha para corrigir o código. Como posso ter uma solução mais elegante?
	printf("%d", soma);
	
	return 0;
}
