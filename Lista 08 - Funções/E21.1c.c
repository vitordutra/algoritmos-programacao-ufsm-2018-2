#include <stdio.h>
#include <stdlib.h>

/*
PODE CAIR DA PROVA

21) Escreva um algoritmo que chama uma função que, recebendo um número inteiro não negativo
como PARÂMETRO, retorne o mesmo invertido. Ex: recebido como parâmetro o valor 234, deve
retornar o inteiro 432
*/

int revert(int n)
{
   int ret=0;
   int i=1;
   
   while(i<=n)
   {
       ret*=10;
       ret+=(n%(i*10)-n%i)/i;
       i*=10;
   }
   return ret;
}

main()
{
   int num, rev;
   printf("Numero a inverter:\n");
   scanf("%d",&num);
   rev = revert(num);
   printf("o numero invertido é: %d", rev);
   getch();
}
