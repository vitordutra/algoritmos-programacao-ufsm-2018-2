#include <stdio.h>
#include <stdlib.h>

/*
24) Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: se
dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela unidade,
e outro pelo milhar e pela centena, somarmos estes dois novos números gerando um terceiro, o
quadrado deste terceiro número é exatamente o número original de quatro dígitos. Por exemplo:
2025 -> dividindo: 20 e 25 -> somando temos 45 -> 45² = 2025.
Escreva um algoritmo que leia um número inteiro de quatro dígitos e passe este número para uma
função que verifique se apresenta ou não a característica, retornando 0 ou 1.
Exiba, na função main, o resultado desta verificação, informando se o número digitado obedece à
característica apresentada.
*/

int main(int argc, char *argv[]) {
	int r1, r2, r3, r4, num;
	
	r1 = num % 10;
	r2 = num % 100;
	r3 = num % 1000;
	r4 = num % 10000;
	
	printf("%d\n%d\n%d\n%d\n", r1, r2, r3, r4);
	return 0;
}
