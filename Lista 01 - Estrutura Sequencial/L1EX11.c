#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;
	
	printf("Digite um numero de 0 a 9: ");
	scanf("%d", &n);
	
	x1 = n*1;
	x2 = n*2;
	x3 = n*3;
	x4 = n*4;
	x5 = n*5;
	x6 = n*6;
	x7 = n*7;
	x8 = n*8;
	x9 = n*9;
	x10 = n*10;
	
	printf("A tabuada: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", x1,x2,x3,x4,x5,x6,x7,x8,x9,x10);
	
	return 0;
}
