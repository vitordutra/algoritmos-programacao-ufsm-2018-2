#include <stdio.h>
#include <stdlib.h>

/*
3) Defina uma estrutura para armazenar o ramal e o departamento de uma empresa. Construa um
algoritmo para ler um valor e mostre-o na tela.
*/

typedef struct empresa
{
	char departamento[50];
	int ramal;
} empresa;
int main(int argc, char *argv[]) 
{
	empresa evilcorp;
	printf("Escreva o departamento da empresa: ");
	gets(evilcorp.departamento);
	printf("Escreva o ramal da empresa: ");
	scanf("%i", &evilcorp.ramal);
	
	printf("Departamento: %s\nRamal: %i\n", evilcorp.departamento, evilcorp.ramal);
	
	return 0;
}
