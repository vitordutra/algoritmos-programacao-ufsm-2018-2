#include <stdio.h>
#include <stdlib.h>

#define n 3
/*
15) Uma companhia resolveu facilitar a sua folha de pagamentos. Para tal, mandou criar uma
listagem de todos os funcionários que recebam mais de 30 salários mínimos. Sabendo-se que os
registros possuem os seguintes campos: Nome do funcionário, cargo e salario. Escreva um
algoritmo para criar a listagem pedida.
*/

typedef struct registros{
	char nome[20];
	char cargo[20];
	float salario;
}reg;

int main(int argc, char *argv[]) {
	
	reg p[n];
	int salario_minimo = 954;
	
	// Lembrar do strcpy pra atribuir string
	strcpy(p[0].nome, "Joao");
	strcpy(p[0].cargo, "Advogado");
	p[0].salario = 5000;
	
	strcpy(p[1].nome, "Zadock");
	strcpy(p[1].cargo, "Juiz");
	p[1].salario = 35000;
	
	strcpy(p[2].nome, "Aline");
	strcpy(p[2].cargo, "Procuradora");
	p[2].salario = 15000;
	
	
	for (int i = 0; i < n; i++){
		if (p[i].salario > 30*salario_minimo){
			printf("Nome: %s\n", p[i].nome);
			printf("Cargo: %s\n", p[i].cargo);
			printf("Salario: %f\n", p[i].salario);
		}
	}
	return 0;
}
