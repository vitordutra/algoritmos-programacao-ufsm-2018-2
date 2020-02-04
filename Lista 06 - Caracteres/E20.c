#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
20) Escrever um algoritmo que recebe uma cadeia de carácteres S, a posição inicial P da
subcadeia a ser retirada e N o comprimento desta subcadeia e devolve S sem a subcadeia
especificada.
*/

int main(int argc, char *argv[]) {
	char S[50];
	int P0, N;
	
	printf("Digite uma string:\n");
	fgets(S, 50, stdin);
	
	printf("Digite a posição inicial P da subcadeia a ser retirada:\n");
	scanf("%d", &P0);
	
	printf("Digite N, o comprimento desta subcadeia: \n");
	scanf("%d", &N);
	
	for (int i = P0; i < N; i++)
	{
		
	}
	
	
	return 0;
}
