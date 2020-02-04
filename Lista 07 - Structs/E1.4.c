#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1) Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os
seguintes campos:
- marca: string de tamanho 15;
- ano: inteiro;
- cor: string de tamanho 10;
- preço: real.
Escreva a definição da estrutura carro.
*/

// Estrutura carro de tipo carro
typedef struct carro
{
	char marca[15];
	int ano;
	char cor[15];
	float preco;
} carro;

int main(int argc, char *argv[]) 
{
	carro celta;
	
	strcpy(celta.marca, "Chevrolet");
	celta.ano = 2007;
	strcpy(celta.cor, "Prata Vomito");
	celta.preco = 10000.0;
	
	printf("Marca: %s\nAno: %i\nPreco: %f\nCor: %s\n",celta.marca, celta.ano, celta.preco, celta.cor);
	
	return 0;
}
