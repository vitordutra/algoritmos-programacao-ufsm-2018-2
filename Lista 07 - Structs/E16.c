#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 15
/*
16) Foi feita um estatística em 15 estados brasileiros para coletar dados sobre acidentes de
trânsito. Em cada estado foram observados os seguintes aspectos:
- nome do estado;
- número de veículos que circularam nesse estado (em 2010);
- número de acidentes de trânsito (em 2010).
Faça um algoritmo que permita conhecer:
a) O maior índice de acidente de trânsito e o nome dos estados em que eles ocorreram;
b) O percentual de veículos em cada estado;
c) A média de acidentes em cada um dos estados
*/

typedef struct dados{
	char nome[20];
	int num_v;
	int num_a;
} dad;

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	dad est[n];
	
	// Registro estado por estado
	strcpy(est[0].nome, "Acre");
	est[0].num_v = 270581;
	est[0].num_a = 114;
	
	strcpy(est[0].nome, "São Paulo");
	est[0].num_v = 270581;
	est[0].num_a = 114;
	return 0;
}
