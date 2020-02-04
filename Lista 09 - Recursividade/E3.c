#include <stdio.h>
#include <stdlib.h>

/*
3) Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321
*/

int invert(int n)
{
    if(n==0)
      return n;
    else {
     printf("%d", n % 10);
     n = n/10;
     return invert(n);
    }
	return 0;
 }
 
int main()
{
	int numero;
   	printf("Digite um numero:");
   	scanf("%d",&numero);
   	invert(numero);
  	return 0;
}
