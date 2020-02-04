#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	// declarar variáveis
	int numero,ant,suc;
	
	// Print de uma string para dizer ao usuário para digitar um número
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	ant = numero - 1;
	suc = numero + 1;
	
	printf("Antecessor = %i\n", ant);
	printf("Sucessor = %i", suc);
	
	return 0;
}
