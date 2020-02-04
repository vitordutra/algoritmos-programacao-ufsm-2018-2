#include <stdio.h>
#include <stdlib.h>

/*
2) Fa�a uma fun��o recursiva que calcule e retorne o N-�simo termo da sequ�ncia
Fibonacci. Alguns n�meros desta sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89..
*/

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main(int argc, char *argv[]) {
	int n, fib;
	
	n = 10;
	
	fib = fibbonacci(30);
	
	printf("%d", fib);
	return 0;
}
