#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
	srand(time(NULL)); //Seed pra randomizar os numeros;
	int vetor[365];
	int i;
	// Maior = -1 pois a temperatura pode ser 0 -> negativa num caso ideal, mas to com preguiça
	int maior = -1, menor = 50, soma = 0; // Inicializo menor num valor grande
	float media;
	int cont_dias = 0;
	
	// Criação do vetor
	for (i = 0; i < 365; i++)
	{
		vetor[i] = rand() % 46; // Temperatura máxima 45 graus
	}
	
	// Maior Temperatura do Ano
	for (i = 0; i < 365; i++)
	{
		if (maior < vetor[i])
			maior = vetor[i];
	}
	// Menor Temperatura do Ano
	for (i = 0; i < 365; i++)
	{
		if (menor > vetor[i])
			menor = vetor[i];
	}
	
	// Temperatura média anual
	for (i = 0; i < 365; i++)
	{
		soma = soma + vetor[i];
		media = (float) soma/365;
	}
	
	// Numero de Dias em Que T < Tmedia
	for (i = 0; i < 365; i++)
	{
		if (vetor[i] < media)
		{
			cont_dias++;
		}
	}
	printf("\nMaior Temperatura: %d\n", maior);
	printf("\nMenor Temperatura: %d\n", menor);
	printf("\nMedia de Temperatura: %.2f\n", media);
	printf("\nNumero de dias no ano em que a temperatura foi inferior a media anual %d\n", cont_dias);
		
	return 0;
}
