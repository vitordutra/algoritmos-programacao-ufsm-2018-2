#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a, b;
	
	printf("Digite um numero a: ");
	scanf("%d", &a);
	
	printf("Digite um numero b: ");
	scanf("%d", &b);
	
	if (a % b == 0)
	{
		printf("O numero %d eh divisivel por %d", a, b);
	}
	else
	{
		printf("O numero %d nao eh divisivel por %d", a, b);
	}
	
	return 0;
}
