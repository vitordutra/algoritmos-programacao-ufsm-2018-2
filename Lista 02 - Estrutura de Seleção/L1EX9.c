#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	
	scanf("%i", &num);
	
	if (num % 3 == 0)
	{
		printf("%i e multiplo de 3", num);
	}
	else
	{
		printf("%i nao e multiplo de 3", num);
	}
	return 0;
}
