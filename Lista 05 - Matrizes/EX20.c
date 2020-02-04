#include <stdio.h>
#include <stdlib.h>

/*
Exemplo 5.20. Uma matriz de caracteres usada como um vetor de strings.
*/

int main(int argc, char *argv[]) 
{
	char n[5][11];
	int i;
	
	for (i = 0; i < 5; i++);
	{
		printf("%dº nome: ", i+1);
		gets(n[i]);
	}
	return 0;
}
