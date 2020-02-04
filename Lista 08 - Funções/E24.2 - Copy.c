#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
int numerosCatedraticos(int n)
{
	int r1, r2, r3, r4, num1, num2;
	int soma, quadrado;
	int aux;
	
	aux = n; //Variável auxiliar porque se mudar o valor de n dá problema no if do final
	
	//Cada resto é um dígito do numero
	r1 = aux % 10;
	aux /= 10;
	
	r2 = aux % 10;
	aux = aux/10;
	
	r3 = aux % 10;
	aux = aux/10;
	
	r4 = aux % 10;
	aux = aux/10;
	
	//Essa é a composição do número -> 2025 -> num1 = 25 e num2 = 20;
	num1 = r1 + r2*10;
	num2 = r3 + r4*10;
	
	soma = num1 + num2;
	
	quadrado = soma*soma;
	
	if (quadrado == n) // O numero é catedrático se soma² = n;
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(int argc, char *argv[]) 
{
	printf("%d", numerosCatedraticos(2025));
	return 0;
}
