#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int n,k;
	
	clrscr();
	
	printf("\nDigite um n�mero natural: ");
	scanf("%u", &n);
	
	for (k = 2; k <= n-1; k++)
	{
		if (n % k == 0)
		{
			break;
		}
		
		if (k == n)
		{
			printf("O n�mero � primo");
		}
		else
		{
			printf("\nO n�mero n�o � primo");
		}
	}
	getch();
	
	return 0;
}
