#include <stdio.h>
#include <stdlib.h>

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
	
	char celta.marca[15] = "chevrolet";
	celta.ano = 2007;
	celta.cor[15] = 'prata';
	celta.preco = 10000.0;
	
	printf("Marca: %s\nAno: %i\nCor: %s\nPreco: %f", celta.marca, celta.ano, celta.cor, celta.preco);
	
	return 0;
}
