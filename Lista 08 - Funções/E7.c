#include <stdio.h>
#include <stdlib.h>

/*
7) Fa�a um fun��o que receba duas notas e imprima a m�dia destes valores.
*/

int main(int argc, char *argv[]) 
{
	float mediaNotas(float n1, float n2);
	
	float media = mediaNotas(10, 7.5);
	
	printf("%d", media);
	return 0;
}

float mediaNotas(float n1, float n2)
{
	return (n1 + n2)/2;	
}
