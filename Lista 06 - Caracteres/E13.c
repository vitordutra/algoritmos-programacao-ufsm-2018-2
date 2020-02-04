#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
13) Escreva um algoritmo que receba uma cadeia de caracteres e substitua cada subcadeia de
dois ou mais espaços em branco por um só carácter ' '.
*/

int main(void) {
    char *pch;
    char sentence[1000] = {"O rato roeu        a roupa           do rei de roma"};
    char without[1000];

    printf("Sentence: ");
    //fgets(sentence,1000, stdin);
    
    strtok(sentence, "\n"); // remove any newlines
    pch = strtok(sentence, " ");
    while(pch != NULL) {
      strcat(without, pch);
      strcat(without, " \0");
      pch = strtok(NULL, " ");
    }
    without[strlen(without)-1] = '\0'; // remove extra whitespace at the end
    printf("|%s|\n",without);
    return 0;
}
