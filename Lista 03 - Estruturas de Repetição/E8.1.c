#include <stdio.h>
#include <stdlib.h>

/*
8) Fa�a um algoritmo para ler um n�mero inteiro n, calcular e exibir a soma dos n�meros inteiros
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
	
	soma = soma - 1; // Tenho que adicionar essa linha para corrigir o c�digo. Como posso ter uma solu��o mais elegante?
	printf("%d", soma);
	
	return 0;
}
