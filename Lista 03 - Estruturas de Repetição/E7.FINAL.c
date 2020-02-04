#include <stdio.h>

int main()
{
    int num, max, min;
    int i = 0;
    int n;
    
	printf("Quantos numeros voce quer calcular?");
	scanf("%d", &n);
	
    printf ("Entre %d numeros: ", n);
    scanf ("%d", &num);
    max = min = num;
    
	for (i == 0; i < (n-1); i++)
    { 
        scanf ("%d", &num);
        if (max < num)
            max = num;
        else if (min > num)
            min = num;
    }

    printf ("O menor numero: %d, o maior numero: %d\n", min,  max);
    return 0;
}
