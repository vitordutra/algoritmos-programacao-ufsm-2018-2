#include <stdio.h>
#include <stdlib.h>

/* 
10) Fa�a um algoritmo para ler um n�mero inteiro n e exibir os 10 n�meros �mpares anteriores, em
ordem decrescente.
*/

int main() 
{
    int n = 20, i;
	
	printf("Digite um numero: ");
	scanf("%d", &i);
	
    while (n > 0)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
        
        i = i - 1;
        n = n - 1;
    }
    
    return 0;
}
