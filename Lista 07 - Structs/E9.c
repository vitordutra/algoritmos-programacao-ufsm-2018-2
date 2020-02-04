#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Nlojas 3

/*
9) Use a base do algoritmo anterior, incrementando-o para mostrar qual foi a média dos preços
cadastrados e a relação contendo o nome e o telefone das lojas cujo preço estava abaixo da
média.
Vou testar com 3 lojas
*/

typedef struct cadastro{
	char nome[20];
	int tel;
	float preco;
}cad;

int main() {
	
	cad loja[Nlojas];
	float soma = 0, media;
	
	for (int i = 0; i < Nlojas; i++){
		scanf("%s", &loja[i].nome);
		scanf("%d", &loja[i].tel);
		scanf("%f", &loja[i].preco);
		soma += loja[i].preco;
		//printf("Nome da Loja: %s. Telefone: %d. Preço: %.2f\n", loja[i].nome, loja[i].tel, loja[i].preco);
	}
	
	media = (float) soma/Nlojas;
	
	for (int i = 0; i < Nlojas; i++){
		if (loja[i].preco < media)
		{
			printf("Nome da Loja: %s. Telefone: %d. Preço: %.2f\n", loja[i].nome, loja[i].tel, loja[i].preco);
		}
	}
	
	return 0;
}
