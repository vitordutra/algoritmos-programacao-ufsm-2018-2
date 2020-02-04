#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
9) Escreva uma fun��o que receba uma cadeia de caracteres e imprima uma tabela que d� o
n�mero de ocorr�ncias de cada car�cter na cadeia.
*/

int main(int argc, char *argv[])
{
  char frase[100] = {"Joao"};
  int fraseaux[100];
  int ascii[255];
  int i;

  printf("\n:::Algoritimo que conta quantas vezes cada letra de uma frase repetiu:::\n");
  printf("\nDigite uma frase: \n");
  printf("\n");
  //gets(frase);

 //Zerando Tabela ASCII
 for (i=0; i<255; i++){
  ascii[i]=0; 
    }

 //Transformando carcteres de frase em inteiros (ASCII)
 for (i=0; i<strlen(frase);i++){
  fraseaux[i]=frase[i];
    }

 //transformando caracteres caixa alta para caixa baixa
 for (i=0; i<strlen(frase); i++){
 		// 65 a 90 s�o as letras mai�sculas
        if (fraseaux[i] > 64 && fraseaux[i] <91){
           fraseaux[i]=fraseaux[i]+32;
           }
    }    

 //contar quantidades de vezes
 for (i=0; i<strlen(frase); i++){                       //rodo por todas as letras 
  if (fraseaux[i] != 32){                            // retirar espa�os da contagem 32 = Espa�o
        ascii[fraseaux[i]]++; 
        }                             /* Guardando quantidade de vezes que a letras se repete*/ 
 }

 //imprimindo repetidos
 // i guarda a letra (em formato de inteiro)
 // ascii[i] � a quantidade de vezes!
 for (i=0; i<255; i++){
        if (ascii[i] > 1){      //verificar se e maior quer 1 pois n�o a necessidade de imprimir 1 ou 0 vezes! 
   printf("\nA letra %c repetiu %d vezes na frase que voce escreveu!\n", i, ascii[i]);
           }      
 }

  printf("\n");
  system("pause");
  return 0;
}
