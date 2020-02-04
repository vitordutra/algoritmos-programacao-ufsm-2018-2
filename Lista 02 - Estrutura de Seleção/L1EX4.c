#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	
	scanf("%d", &num);
	
	if (num % 2 == 0)
	{
		printf("O numero %d eh par", num);
	}
	else
	{
		printf("O numero %d eh impar", num);
	}
	return 0;
}
