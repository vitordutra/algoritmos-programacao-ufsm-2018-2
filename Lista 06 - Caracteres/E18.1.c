#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
18) Faça um algoritmo que receba uma frase e faça a criptografia, retirando das palavras suas
vogais. O algoritmo deverá armazenar estas vogais e suas posições originais em vetores, mostrar
a frase criptografada e posteriormente descriptografá-la.
*/

int main(int argc, char *argv[]) {
	
	char frase[50];
	char vogais_na_frase[50];
	char vogais[10] = "aeiouAEIOU";
	int tam;
	
	fgets(frase, 50, stdin);
	tam = strlen(frase);
	
	//Criptografando
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++)
		{
			if (frase[i] == vogais[j])
			{
				vogais_na_frase[i] = frase[i];
				frase[i] = '-';
			}
		}
	}
	
	puts(frase);
	
	//Descriptografia
	
	for (int i = 0; i < tam; i++){
		if (frase[i] == '-'){
			frase[i] = vogais_na_frase[i];
		}
	}
	
	puts(frase);
	
	return 0;
}
