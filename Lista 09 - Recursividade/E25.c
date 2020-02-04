#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ex25 --> Uma palavra de Fibonacci � definida por  f(n) = b se n = 0; f(n) = a se n = 1; f(n - 1) + f(n - 2)
Aqui + denota a concatena��o de duas strings. Esta sequ�ncia inicia com as seguintes palavras:
b, a, ab, aba, abaab, abaababa, abaababaabaab, ...  Fa�a uma fun��o recursiva que receba um n�mero N e
retorne a N-�sima palavra de Fibonacci.*/

char * palaFibonacci(int n) {

	char * interna(int n, char * menos1, char * menos2) {
		if(n == 0) {
			return menos2;
		}
		if(n == 1) {
			return menos1;
		}
		int tamMenos1 = strlen(menos1);
		int tamMenos2 = strlen(menos2);
		char aux[tamMenos1];
		strcpy(aux,menos1);
		char auxMenos1[tamMenos1 + tamMenos2 + 1];
		strcpy(auxMenos1,menos1);
		strcat(auxMenos1,menos2);
		return interna(n - 1, auxMenos1, aux);
	}
	char * a = "a";
	char * b = "b";
	return interna(n, a, b);
}

int main(int argc, char *argv[]) {
	
	printf("%s", palaFibonacci(10));
	
	return 0;
}
