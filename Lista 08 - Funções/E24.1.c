#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
24) Existem n�meros de 4 d�gitos (entre 1000 e 9999) que obedecem � seguinte caracter�stica: se
dividirmos o n�mero em dois n�meros de dois d�gitos, um composto pela dezena e pela unidade,
e outro pelo milhar e pela centena, somarmos estes dois novos n�meros gerando um terceiro, o
quadrado deste terceiro n�mero � exatamente o n�mero original de quatro d�gitos. Por exemplo:
2025 -> dividindo: 20 e 25 -> somando temos 45 -> 45� = 2025.
Escreva um algoritmo que leia um n�mero inteiro de quatro d�gitos e passe este n�mero para uma
fun��o que verifique se apresenta ou n�o a caracter�stica, retornando 0 ou 1.
Exiba, na fun��o main, o resultado desta verifica��o, informando se o n�mero digitado obedece �
caracter�stica apresentada.
*/
int numerosCatedraticos(int n)
{
	
}
int main(int argc, char *argv[]) {
	int r1, r2, r3, r4, num, num1, num2;
	
	num = 2025;
	r1 = num % 10;
	num = num/10;
	
	r2 = num % 10;
	num = num/10;
	
	r3 = num % 10;
	num = num/10;
	
	r4 = num % 10;
	num = num/10;
	
	num1 = r1 + r2*10;
	num2 = r3 + r4*10;
	
	printf("%d\n%d\n%d\n%d\n%d\n%d\n", r1, r2, r3, r4, num1, num2);
	return 0;
}
