#include <stdio.h>
#include <stdlib.h>

/*
1) Fa�a uma fun��o recursiva que calcule e retorne o fatorial de um n�mero inteiro N.
*/
int fatorial (int x){
	int resultado;
	if (x == 0){
		resultado = 1;
	}
	else{
		resultado = x*fatorial(x-1);
	}
	
	return resultado;
	
}
int main(int argc, char *argv[]) {
	int num, res;
	
	num = 4;
	
	res = fatorial(num);
	
	printf("%d", res);
	return 0;
}
