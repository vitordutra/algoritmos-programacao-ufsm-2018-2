/*Faça um algoritmo que receba n valores inteiros e positivos, calcule e imprima o maior e o
menor valor do conjunto.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,maior,menor;
    printf("digite um nuemro\n");
    scanf("%d",&n);
    while(n>0){
            if(n>maior){
                maior=n;
            }
            else if(n<menor)
            {
                menor=n;
            }
            printf("digite um numero\n");
            scanf("%d",&n);
    }
    if(maior>0){
        printf("maior valor%d\n",maior);
        printf("menor valor%d\n",menor);
    }
    else{
        printf("o valor digitado eh negativo:\n");
    }
    return 0;
}
