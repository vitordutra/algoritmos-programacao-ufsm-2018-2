#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5) Crie uma estrutura que contenha os seguintes campos: nome, dia aniversario e mês
aniversario.
*/

typedef struct aniversario{
	char nome[20];
	int dia;
	int mes;
} niver;

int main() {
	niver p;
	
	strcpy(p.nome, "Joao");
	p.dia = 06;
	p.mes = 07;
	
	printf("%s, %d, %d", p.nome, p.dia, p.mes);
	return 0;
}
