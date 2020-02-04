#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,num3,num4,result;
	
	printf("Digite o 1o numero: ");
	scanf("%i", &num1);
	
	printf("Digite o 2o numero: ");
	scanf("%i", &num2);
	
	printf("Digite o 3o numero: ");
	scanf("%i", &num3);
	
	printf("Digite o 4o numero: ");
	scanf("%i", &num4);
		
	result = num1 + num2 + num3 + num4;
	
	printf("A soma dos quatro numeros e: %i", result);
	
	return 0;
}
