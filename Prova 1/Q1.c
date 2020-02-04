#include <stdio.h>
#include <math.h>
#include <locale.h>

#define n 1000

int main()
{
    setlocale(LC_ALL,"portuguese");
    
    int i,j,soma;

    for (i=1 ; i < (n+1) ; i++)
    {

    soma = 0;

        for(j=1; j < i ; j++)
        {
            if( (i%j)==0 )
            {
            soma = soma + j;
            }
        }
        if(i == soma)
        {
        	printf("\n%d é número perfeito! \n",soma);
        }

    }
    return 0;
}

