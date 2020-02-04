#include <stdio.h>
#include <stdlib.h>

/*
No exemplo acima, a matriz mtrx é preenchida, sequencialmente por linhas, com os
números de 1 a 200. Você deve entender o funcionamento do programa acima antes de
prosseguir.
*/

int main(int argc, char *argv[]) 
{
	int matriz[3][3];
	int i, j, cont;
	
	cont = 0;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Digite Matriz [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			printf("Matriz [%d][%d] : %d\n", i, j, matriz[i][j]);
			cont++;
		}
	}
	printf("\n%d", cont);
	return 0;
}
