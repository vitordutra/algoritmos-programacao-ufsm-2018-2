#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int n,k;
	
	// printf("\nDigite um número natural: ");
	//scanf("%u", &n);
	
	n = 4;
	
	for (k = 2; k <= n-1; k++) // O intervalo vai de k = 2 até k = numero - 1
	{
		if (n % k == 0) // se n for divisivel por qualquer numero diferente de 1 e ele mesmo ele NÃO é primo
		{
			break;
		}
	}
	
	if (k == n)
		{
			printf("O número é primo");
		}
		else
		{
			printf("\nO número não é primo");
		}
	
	return 0;
}
