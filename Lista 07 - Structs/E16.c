#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 15
/*
16) Foi feita um estat�stica em 15 estados brasileiros para coletar dados sobre acidentes de
tr�nsito. Em cada estado foram observados os seguintes aspectos:
- nome do estado;
- n�mero de ve�culos que circularam nesse estado (em 2010);
- n�mero de acidentes de tr�nsito (em 2010).
Fa�a um algoritmo que permita conhecer:
a) O maior �ndice de acidente de tr�nsito e o nome dos estados em que eles ocorreram;
b) O percentual de ve�culos em cada estado;
c) A m�dia de acidentes em cada um dos estados
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
	
	strcpy(est[0].nome, "S�o Paulo");
	est[0].num_v = 270581;
	est[0].num_a = 114;
	return 0;
}
