#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int n,k;
	
	// printf("\nDigite um n�mero natural: ");
	//scanf("%u", &n);
	
	n = 4;
	
	for (k = 2; k <= n-1; k++) // O intervalo vai de k = 2 at� k = numero - 1
	{
		if (n % k == 0) // se n for divisivel por qualquer numero diferente de 1 e ele mesmo ele N�O � primo
		{
			break;
		}
	}
	
	if (k == n)
		{
			printf("O n�mero � primo");
		}
		else
		{
			printf("\nO n�mero n�o � primo");
		}
	
	return 0;
}
