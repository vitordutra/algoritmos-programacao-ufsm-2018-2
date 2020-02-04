#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");

	int n1, n2;
	
	scanf("%i", &n1);
	scanf("%i", &n2);
	
	if (n1 > n2)
	{
		printf("Primeiro é maior");
	}
	else if(n1 == n2)
	{
		printf("Números Iguais");
	}
	else
	{
		printf("Segundo é maior");
	}
	
	return 0;
}
