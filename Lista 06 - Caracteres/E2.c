#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
2) Escrever um programa que receba um nome -Que conte o número de vogais existentes nele. -O
programa deverá imprimir o numero total de caracteres do nome - Quantas vogais - E a respectiva
porcentagem das vogais em relação ao total de caracteres. 
*/

int main(int argc, char *argv[]) 
{
	// Declaração de Variáveis
	char nome[25], M;
	int x, t, soma = 0;
	float percent, t2 = 0;
	
	// Leitura do nome
	printf("Digite um nome: ");
	gets(nome);
	
	// Tamanho do nome
	t = strlen(nome);
	
	// Contador de vogais
	for (x = 0; x <= t-1; x++)
		if (nome[x] == 'a' || nome[x] == 'A' || nome[x] == 'e' || nome[x] == 'E' || nome[x] == 'i' || nome[x] == 'I' || nome[x] == 'o' || nome[x] == 'u' || nome[x] == 'U')
			soma++;
	
	printf("\n O nome %s tem %d caracteres: ", nome, t);
	printf("\n O nome %s tem %d vogais: ", nome, soma);
	
	// Porcentagens de vogais no nome
	for (x = 0; x <= t2; x++)
	{
		t2 = strlen(nome);
		percent = soma*100/t2;
	}
	printf("\n%f por cento do nome %s sao vogais: ", percent, nome);
	return 0;
}
