#include <stdio.h>
#include <stdlib.h>

/*
10) Fa�a um algoritmo que receba o c�digo de cinco produtos e seus respectivos pre�os, calcule
e mostre:
- a quantidade produtos com pre�o inferior a R$50,00
- o c�digo dos produtos com pre�o entre R$50,00 e R$100,00
- a m�dia dos pre�os dos produtos com pre�o superior a R$100,00
Dica: Use um vetor de inteiros para armazenar os c�digos dos produtos, e outro vetor de reais
para armazenar os pre�os. O c�digo e o pre�o de um mesmo produto devem ocupar posi��es correspondentes nos dois vetores
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
		
		if (preco[i] < 50)
		{
			qt_menor++;
		}
		
		if (preco[i] > 100)
		{
			total += preco[i];
			qt_maior += 1;
		}
	}
	
	printf("A quantidade de produtos com preco inferior a 50 reais: %d\n", qt_menor);
	
	for (i = 0; i < 5; i++)
	{
		if ((preco[i] >= 50) && (preco[i] <= 100))
		{
			printf("\n Cod. Produtos com precos entre 50 e 100 reais: \n");
			printf("%d", cod_prod[i]);
		}
	}
	
	total = total/qt_maior;
	
	printf("\nA media dos precos com preco superior a 100.00 reais: %f\n", total);
	
	return 0;
}
