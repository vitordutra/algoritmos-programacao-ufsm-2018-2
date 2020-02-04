#include <stdio.h>
#include <stdlib.h>

/*
37) Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de
código. Os códigos utilizados são:
1, 2, 3, 4 Valores para os respectivos candidatos
5 Voto nulo
6 Voto em branco
Escreva um algoritmo que calcule e mostre:
- o total de votos para cada candidato;
- o total de votos nulos;
- o total de votos em branco;
- a porcentagem de votos nulos sobre o total de votos;
- a percentagem de votos em branco sobre o total de votos.
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa
deverá mostrar uma mensagem. 
*/

int main() 
{
	int v;
	float vt[6], t = 0;
	
	for (v = 0; v < 6; v++)
		vt[v] = 0;
		
		do
		{
			scanf("%d", &v);
			if ((v >= 1) && (v <= 6))
				vt[(v-1)]++;
			else if (v != 0)
				printf("Codigo Invalido!\n");
		} while (v != 0);
		
		for (v = 0; v < 6; v++)
		{
			printf("Candidatp %d teve %.2f votos!\n", (v+1), vt[v]);
			t += vt[v];
		}
		printf("%.2f, %.2f\n", ((vt[4]/t)*100), ((vt[5]/t)*100));
	return 0;
}
