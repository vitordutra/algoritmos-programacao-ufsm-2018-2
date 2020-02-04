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
	char nome[30];
	int num_v;
	int num_a;
} dad;

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	dad est[n];
	int i, maior_i;
	float media, maior = 0, indice[n], soma_v = 0, soma_a = 0;
	double pct_v[n], pct_a[n];
	
	// Registro estado por estado
	strcpy(est[0].nome, "Acre");
	est[0].num_v = 270581;
	est[0].num_a = 114;
	
	strcpy(est[1].nome, "São Paulo");
	est[1].num_v = 28585395;
	est[1].num_a = 5727;
	
	strcpy(est[2].nome, "Minas Gerais");
	est[2].num_v = 10912579;
	est[2].num_a = 3800;
	
	strcpy(est[3].nome, "Paraná");
	est[3].num_v = 7440441;
	est[3].num_a = 2670;
	
	strcpy(est[4].nome, "Rio Grande do Sul");
	est[4].num_v = 6953857;
	est[4].num_a = 1741;
	
	strcpy(est[5].nome, "Santa Catarina");
	est[5].num_v = 5040578;
	est[5].num_a = 1554;
	
	strcpy(est[6].nome, "Bahia");
	est[6].num_v = 4045983;
	est[6].num_a = 1114;
	
	strcpy(est[7].nome, "Acre");
	est[7].num_v = 270581;
	est[7].num_a = 114;
	
	strcpy(est[8].nome, "Goiás");
	est[8].num_v = 3839725;
	est[8].num_a = 1873;
	
	strcpy(est[9].nome, "Ceará");
	est[9].num_v = 3081815;
	est[9].num_a = 2088;
	
	strcpy(est[10].nome, "Pernambuco");
	est[10].num_v = 2953952;
	est[10].num_a = 1888;
	
	strcpy(est[11].nome, "Mato Grosso");
	est[11].num_v = 2017543;
	est[11].num_a = 650;
	
	strcpy(est[12].nome, "Pará");
	est[12].num_v = 1962185;
	est[12].num_a = 1565;
	
	strcpy(est[13].nome, "Espírito Santo");
	est[13].num_v = 1898542;
	est[13].num_a = 850;
	
	strcpy(est[14].nome, "Distrito Federal");
	est[14].num_v = 1781341;
	est[14].num_a = 469;
	
	
	//a) O maior índice de acidente de trânsito e o nome dos estados em que eles ocorreram;
	for (i = 0; i < n; i++){
		indice[i] = (float) est[i].num_a/est[i].num_v;
		if (indice[i] > maior){
			maior = indice[i];
			maior_i = i;
		}
	}
	
	printf("Estado com maior índice: %s com %f\n", est[maior_i].nome, maior);
	
	//b) O percentual de veículos em cada estado;
	for (i = 0; i < n; i++){
		soma_v += est[i].num_v;
	}
	
	printf("\n\n Veículos \n\n");
	for (i = 0; i < n; i++){
		pct_v[i] = (est[i].num_v/soma_v) * 100;
		printf("Estado: %s - %.2f %%\n", est[i].nome, pct_v[i]);
	}
	
	//c) A média de acidentes em cada um dos estados
	
	for (i = 0; i < n; i++){
		soma_a += est[i].num_a;
	}
	
	printf("\n\n Acidentes \n\n");
	for (i = 0; i < n; i++){
		pct_a[i] = (est[i].num_a/soma_a) * 100;
		printf("Estado: %s - %.2f %%\n", est[i].nome, pct_a[i]);
	}
	
	
	return 0;
}
