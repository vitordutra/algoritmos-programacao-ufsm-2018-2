#include <stdio.h>
#include <stdlib.h>

#define n 3
/*
11) Crie uma estrutura para descrever 10 restaurantes. Os campos dessa estrutura devem
armazenar: o nome, o endere�o e pre�o da comida por quilo. Calcule e exiba a m�dia de pre�o da
comida por quilo e imprima quais restaurantes t�m o pre�o da comida menor ou igual � m�dia.
*/

typedef struct restaurante{
	char nome[20];
	char end;
	float preco;
}res;
int main(int argc, char *argv[]) {
	
	res p[n];
	float soma, media;
	
	for (int i = 0; i < n; i++){
		printf("Nome: \n");
		scanf("%s", &p[i].nome);
		printf("Endereco: \n");
		scanf("%s", &p[i].end);
		printf("Preco: \n");
		scanf("%f", &p[i].preco);
		soma += p[i].preco;
	}
	
	media = (float) soma/n;
	
	for (int i = 0; i < n; i++){
		if (p[i].preco <= media)
			printf("%s tem preco menor que a media\n", p[i].nome);
	}	
	return 0;
}
