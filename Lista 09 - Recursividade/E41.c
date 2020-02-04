#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 41) Escreva uma função recursiva que dado um número n, gere todas as possíveis combinações com as n primeiras letras
do alfabeto. Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA
A(n,r) = n! / (n - r)!
ALFABETO MAIUSCULO [0x41; 0x5A]*/

int fatorial(int n) {
	if(n < 2) {
		return 1;
	}
	return n * fatorial(n - 1);
}

void arranjo(int n){
    int fat = fatorial(n);
    char A(char a){
        if(a ==  0x41 + n){
            if(fat < 0) exit(0);
            a = 'B';
            fat--;
            printf("\n");
        }
        printf("%c", a);
        A(a + 1);
    }
    A('A');
}

int main(int argc, char *argv[]) {
	
	arranjo(4);
	
	return 0;
}
