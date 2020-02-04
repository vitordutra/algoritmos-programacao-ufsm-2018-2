#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 35) Dado um n�mero n na base decimal, escreva uma fun��o recursiva em C que converte este n�mero para bin�rio. */
int converteParaBinario(int n){
    if (n < 2) /* Tirado de http://www.scriptbrasil.com.br/forum/topic/175795-convers%C3%A3o-decimal-bin%C3%A1rio-com-recurs%C3%A3o/*/
        return n;
    return ( 10 * converteParaBinario( n / 2 ) ) + n % 2;
}

int main(int argc, char *argv[]) {
	
	printf("%d", converteParaBinario(512));
	
	return 0;
}
