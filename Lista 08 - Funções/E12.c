#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

/*
12) Fa�a uma fun��o que recebe por par�metro o raio de uma esfera e calcula o seu volume (v =
4/3 x p x R3). Retorne para a fun��o principal (main) o volume.
*/

float volumeEsfera(float raio)
{
	float V;
	
	V = (4.0/3.0)*PI*pow(raio,3);
	
	return V;
}

int main(int argc, char *argv[]) 
{
	float V;
	
	V = volumeEsfera(3);
	
	printf("%f", V);
	return 0;
}
