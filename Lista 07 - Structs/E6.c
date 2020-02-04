#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6) A partir do exercício anterior e considerando um conjunto de 40 pessoas, escreva um algoritmo
que liste as pessoas que fazem no mês de maio

Vou fazer pra 10 pessoas.
*/

typedef struct aniversario{
	char nome[20];
	int dia;
	int mes;
} niver;

int main() {
	niver p[5];
	
	for (int i = 0; i < 5; i++){
		printf("Nome %d", i+1);
		fgets(p[i].nome, 20, stdin);
		printf("Dia da pessoa %d", i+1);
		scanf("%d", p[i].dia);
		printf("Mes da pessoa %d", i+1);
		scanf("%d", p[i].mes);
		
		if (p.mes == 5)
			printf("%s faz aniversario em Maio", p.nome);
	}
		
	return 0;
}
