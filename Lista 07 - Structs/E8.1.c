#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
8) Desenvolva um algoritmo que permita cadastrar 15 registros da estrutura anterior e armazená-
los, mostrando-os a seguir
*/

typedef struct cadastro{
	char nome[20];
	int tel;
	float preco;
}cad;

int main() {
	
	cad loja[15];
	
	for (int i = 0; i < 15; i++){
		scanf("%s", &loja[i].nome);
		scanf("%d", &loja[i].tel);
		scanf("%f", &loja[i].preco);
		printf("Nome da Loja: %s. Telefone: %d. Preço: %.2f\n", loja[i].nome, loja[i].tel, loja[i].preco);
	}
	
	
	
	return 0;
}
