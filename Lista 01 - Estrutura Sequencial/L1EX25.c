#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float m, i, c, t;
	
	c = 500;
	i = 1.2/100;
	t = 5;
	
	m = c*pow((1 + i),t);
	
	printf("%.2f",m);
	
	return 0;
}
