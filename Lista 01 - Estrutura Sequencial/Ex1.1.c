#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	// declarar variáveis
	int numero,ant,suc;
	
	// Print de uma string para dizer ao usuário para digitar um número
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	/*ant = numero - 1;
	suc = numero + 1;*/
	
	printf("Antecessor = %i\n", (numero - 1));
	printf("Sucessor = %i", (numero + 1));
	
	return 0;
}
