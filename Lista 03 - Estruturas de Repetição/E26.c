#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
26) Faça um algoritmo que receba 10 valores inteiros e positivos, e resolva as seguintes
questões:
- Calcule a raiz quadrada dos valores menores que 100;
- Para todo valor maior que 100, verifique se o mesmo é par, caso seja,, imprimir o valor e a
mensagem “valor par”;
- Ao final, imprimir a quantidade de números pares.
*/

int main(int argc, char *argv[]) 
{
	int i, qtpares = 0, num;
	float raiz;
	printf("Digite 10 numeros: \n");
	
	for (i = 1; i <= 10; i++)
	{
		printf("Digite um numero:\t");
		scanf("%i", &num);
		
		if (num <= 100)
		{
			raiz = sqrt(num);
			printf("Numero menor ou igual a 100: %i -> Raiz Quadrada %.2f\n", num, raiz);
		}
		else if (num % 2 == 0)
		{
			printf("Numero %i -> Numero Par\n", num);
			qtpares++;
		}
	}
	
	printf("Quantidade de numeros pares: %i", qtpares);
	
	return 0;
}
