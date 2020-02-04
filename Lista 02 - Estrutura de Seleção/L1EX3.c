#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n1, n2, n3;
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	if (n1 > n2) && (n1 > n3)
	{
		i = n1;
	}
	else if (n2 > n1) && (n2 > n3)
	{
		i = n2;
	}
	else
	{
		i = n3;
	}
	
	printf("O menor numero: %d", i);
	
	return 0;
}
