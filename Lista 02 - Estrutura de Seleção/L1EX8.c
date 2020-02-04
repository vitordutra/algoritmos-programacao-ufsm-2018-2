#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n1, n2, sum;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	sum = n1 + n2;
	
	if (sum > 20)
	{
		sum = sum + 8;
		printf("soma = %d", sum);
	}
	else
	{
		sum = sum - 5;
		printf("soma = %d", sum);
	}
	
	return 0;
}
