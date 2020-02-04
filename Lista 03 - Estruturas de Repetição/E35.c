#include <stdio.h>
#include <stdlib.h>

/*
35) João tem 1,50 metros e cresce 2 cm por ano, enquanto Pedro tem 1,10 metros e cresce 3 cm
por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que
Pedro seja maior que João.
*/

int main(int argc, char *argv[]) 
{
	int anos = 0;
	int hj = 150, hp = 110;
	
	for (anos; hp <= hj; anos++, hj = hj + 2, hp = hp + 3)
	{
		printf("Ano: %i\t Altura de Joao: %i\t Altura de Pedro: %i\n", anos, hj, hp);
	}
	
	printf("Pedro estara mais alto que Joao em %i anos", anos);
	
	return 0;
}
