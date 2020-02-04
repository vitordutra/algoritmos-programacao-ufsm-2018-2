#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Type 3 sides of a triangle: a, b and c, respectively\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if ((a < (b + c)) && (b < (a + c)) && (c < (a + b)))
	{
		printf("Is a triangle\n");
		
		if ((a == b) && (b == c))
		{
			printf("Is an equilateral triangle");
		}
		else if ((a == b) || (a == c) || (b == c))
		{
			printf("Is an isosceles triangle");
		}
		else
		{
			printf("Is a scalene triangle");
		}
	}
	else
	{
		printf("The values don't make up a triangle");
	}
	
	return 0;
}
