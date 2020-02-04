#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b,c;
	int maior, menor, medio;
	
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	if ((a > b) && (a > c))
	{
		maior = a;
		
		if (b > c)
		{
			medio = b;
			menor = c;
		}
		else
		{
			medio = c;
			menor = b;
		}
	}
	else if ((b > a) && (b > c))
	{
		maior = b;
		
		if (a > c)
		{
			medio = a;
			menor = c;
		}
		else
		{
			medio = c;
			menor = a;
		}
	}
	else
	{
		maior = c;
		
		if (a > b)
		{
			medio = a;
			menor = b;
		}
		else
		{
			medio = b;
			menor = a;
		}
	}
	
	printf("Do maior para o menor: %d, %d, %d", maior, medio, menor);
	return 0;
}
