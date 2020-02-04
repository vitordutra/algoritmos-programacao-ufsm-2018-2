#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define n 50

int main()
{
    setlocale(LC_ALL,"portuguese");

    char cmaior,cmen;
    char v[n];
    int i,s=1, maior=s, menor=s;

    printf("\nDigite a string: ");
    gets(v);

    for(i=0;i<(strlen(v)-1);i++)
    {

        if(v[i] == v[i+1])
        {

        s++;

        }else{

        s=1;

        }

        if (s > maior)
        {

        maior = s;
        cmaior = v[i];

        }
        
        
        if (s < menor)
        {

        menor = s;
        cmen = v[i];

        }

    }

    printf("\nA maior sequência é composta pela letra %c e possui %d caracter(es)! \n",cmaior,maior);

    printf("\nA menor sequência é composta pela letra %c e possui %d caracter(es)! \n",cmen,menor);

    return 0;
}
