#include<stdio.h>
#include<string.h>

/* 
13) Escreva um algoritmo que receba uma cadeia de caracteres e substitua cada subcadeia de
dois ou mais espaços em branco por um só carácter ' '.
*/

int main(void)
    {
        char input[1000] = {"O rato               roeu a roupa do          rei de roma"};
        int i=0;
        //gets(input); 
        for(i=0;input[i]!='\0';i++)
        {
            if(input[i]!=' ' || input[i+1]!=' ')
                printf("%c",input[i]);
        }
        return 0;
    }
