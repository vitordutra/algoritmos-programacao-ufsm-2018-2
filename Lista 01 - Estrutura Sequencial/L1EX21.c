#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, aux;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("O valor de a: %d, de b: %d", a,b);
	
	
	return 0;
}
