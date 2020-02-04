#include <stdio.h>
#include <stdlib.h>

/*
10) Faça um algoritmo que receba o código de cinco produtos e seus respectivos preços, calcule
e mostre:
- a quantidade produtos com preço inferior a R$50,00
- o código dos produtos com preço entre R$50,00 e R$100,00
- a média dos preços dos produtos com preço superior a R$100,00
Dica: Use um vetor de inteiros para armazenar os códigos dos produtos, e outro vetor de reais
para armazenar os preços. O código e o preço de um mesmo produto devem ocupar posições correspondentes nos dois vetores
*/

int main(int argc, char *argv[]) 
{
	int cod_prod[5], cod[5];
	int i;
	int qt_maior = 0, qt_menor = 0;
	float preco[5], total = 0;
	
	for (i = 0; i < 5; i++)
	{
		printf("\n Informe o Cod. do Produto: ", i+1);
		scanf("%d", &cod_prod[i]);
		
		printf("Informe o Preco do Produto: ", i+1);
		scanf("%f", &preco[i]);
	}
	return 0;
}
