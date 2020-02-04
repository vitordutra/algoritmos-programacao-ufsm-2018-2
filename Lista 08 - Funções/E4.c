#include <stdio.h>
#include <stdlib.h>

/*
4) Faça uma função que lê 50 valores inteiros e retorna o maior deles
*/

int main(int argc, char *argv[]) 
{
	int maiorValorMenorValor();
	int maior;
	
	maior = maiorValorMenorValor();
	
	printf("Maior numero: %d", maior);
	return 0;
}

int maiorValorMenorValor()
{
	int x, n, maior = 0, menor = 9999;
	for (x = 1; x <= 50; x++)
	{
		printf("Informe um numero: ");
		scanf("%d", &n);
		if (n > maior)
			maior = n;
		if (n < menor)
			menor = n;
	}
	
	return maior;
}
