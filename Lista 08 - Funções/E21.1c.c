#include <stdio.h>
#include <stdlib.h>

/*
PODE CAIR DA PROVA

21) Escreva um algoritmo que chama uma fun��o que, recebendo um n�mero inteiro n�o negativo
como PAR�METRO, retorne o mesmo invertido. Ex: recebido como par�metro o valor 234, deve
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
   printf("o numero invertido �: %d", rev);
   getch();
}
