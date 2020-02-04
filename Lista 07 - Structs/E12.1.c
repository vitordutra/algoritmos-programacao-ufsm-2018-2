#include <stdio.h>
#include <stdlib.h>

#define n 3
/*
12) Faça um algoritmo que, utilizando registros, leia o nome e data de nascimento (dia mês ano)
de n pessoas, calcule e mostre a idade de cada pessoa e o nome da pessoa mais velha. Suponha
que não temos duas (ou mais) pessoas com a mesma idade.
*/

typedef struct registro{
	char nome[20];
	int dia;
	int mes;
	int ano;
} reg;
int main(int argc, char *argv[]) {
	
	reg p[n];
	int ano_atual = 2018, mais_velho = 0, i, idade, i_mais_velho;
	
	for (i = 0; i < n; i++){
		printf("Nome: \n");
		scanf("%s", &p[i].nome);
		
		printf("Dia Nascimento: \n");
		scanf("%d", &p[i].dia);
		
		printf("Mes Nascimento: \n");
		scanf("%d", &p[i].mes);
		
		printf("Ano Nascimento: \n");
		scanf("%d", &p[i].ano);
		
		idade = ano_atual - p[i].ano;
		printf("Idade: %d \n", idade);
		
		if (idade > mais_velho){
			mais_velho = idade;
			i_mais_velho = i;
		}
	}
	
	printf("A pessoa mais velha e: %s", p[i_mais_velho].nome);
	
	return 0;
}
