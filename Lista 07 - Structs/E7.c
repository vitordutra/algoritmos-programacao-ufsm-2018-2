#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
7) Modele uma estrutura para armazenar o seguinte conjunto de dados: nome da loja, telefone e
preço de um eletrodoméstico
*/

typedef struct cadastro{
	char nome[20];
	int tel;
	float preco;
}cad;

int main() {
	
	cad loja;
	
	strcpy(loja.nome, "Magazine Luiza");
	loja.tel = 32222222;
	loja.preco = 42.90;
	
	printf("Nome da Loja: %s. Telefone: %d. Preço: %.2f", loja.nome, loja.tel, loja.preco);
	return 0;
}
