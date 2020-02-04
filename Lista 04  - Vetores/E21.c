#include <stdio.h>
#include <stdlib.h>

/*
21) Faça um algoritmo para ler e armazenar em um vetor a temperatura média em todos os dias
do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média anual
*/

int main(int argc, char *argv[]) 
{
	srand(3); //Seed pra randomizar os numeros;
	int vetor[360];
	int i;
	int maior = 0, posicao_maior;
	
	for (i = 0; i < 20; i++)
	{
		vetor[i] = rand();
		printf(" %d ",vetor[i]);
	}
	return 0;
}
