#include <stdio.h>
#include <stdlib.h>

/*
10) Escreva um algoritmo que leia dados e armazene-os em um registro contendo Nome (String),
Telefone (String), Idade (Integer) e que ao final imprima estes dados.
*/

typedef struct registro{
	char nome[20];
	char tel[10];
	int idade;
}reg;

int main(int argc, char *argv[]) {
	reg p;
	
	strcpy(p.nome, "Joao");
	strcpy(p.tel, "982470868");
	p.idade = 24;
	
	printf("%s  %s  %d", p.nome, p.tel, p.idade);
	return 0;
}
