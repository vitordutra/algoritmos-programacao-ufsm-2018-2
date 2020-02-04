#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float num, r;
	
	scanf("%f", &num);
	
	if (num >= 0)
	{
		r = sqrt(num);
	}
	else
	{
		r = pow(num,2);
	}
	
	printf("%f", r);
	
	return 0;
}
