#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
15) Construa um algoritmo que receba como entrada uma string (A) e dois caracteres (B e C) e
mostre uma string formada pela substituição de todas as ocorrências do carácter B pelo C dentro
da string A. Ex.: Se A=”a sapa naa lava a pa”, B=”a” e C=”e”, a resposta deve ser: “e sepe nee
leve e pe”
*/

//void troca_letra (char str[50], char original, char novo)
//{
//	int i = 0;
//	int tam = strlen(str) - 1;
//	
//	for(i = 0; i < tam; i++)
//	{
//		if (str[i] == original){
//			str[i] == novo;
//		}
//	}
//	puts(str);
//}

int main(int argc, char *argv[]) {
	char str[50] = "O rato roeu a roupa do rei de roma";
	char original = 'o';
	char novo = 'a';
	
	int i = 0;
	int tam = strlen(str) - 1;
	
	for(i = 0; i < tam; i++)
	{
		if (str[i] == original){
			str[i] = novo;
		}
	}
	puts(str);
	
	return 0;
}
