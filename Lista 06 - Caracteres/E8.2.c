#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*
8) Faça um algoritmo que receba uma frase e mostre quantas letras diferentes ela contém.
*/
//appears indica se a letra apareceu de novo ou não
int CountUniqueCharacters(char* str){
    int count = 0;

    for (int i = 0; i < strlen(str); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}


int main() {
	
	char str[50];
	int cont;
	
	fgets(str, 50, stdin);
	
	cont = CountUniqueCharacters(str);
	
	printf("%d", cont - 1);
	
	return 0;
		
}
