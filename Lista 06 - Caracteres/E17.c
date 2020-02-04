#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 51

/*
17) Considere uma string composta por várias subsequencias, por exemplo,
cccaaaabbbbxdddddddddaaannn. A menor subsequencia é a da letra x, com apenas um
elemento; a maior subsequencia é a da letra d, com 9 elementos. Faça um algoritmo para ler uma
string e mostrar qual é a letra que ocorre na maior subsequencia e o tamanho desta.
Ex.: Entrada: aaabbbbaa; Saída: maior b, tamanho 4.
*/

int main() {
	setlocale(LC_ALL,"portuguese");
    char cmaior, cmenor;
    char v[N];
    int i;
    int contMaior = 1, contMenor = 1, maior = 1, menor = N;
    
    printf("\nDigite a string: ");
    scanf("%s", v);
    for (i = 0; v[i] != '\0'; i++) {
        if (v[i] == v[i + 1]) {
            contMaior++;
            contMenor++;
        } else {
            contMaior = 1;
            contMenor = N;
        }
        if (contMaior > maior) {
            maior = contMaior;
            cmaior = v[i];
        }
        if (contMenor < menor) {
            menor = contMenor;
            cmenor = v[i];
        }
    }
    printf("\n Maior: %c, tamanho %d; Menor: %c, tamanho %d\n", cmaior, maior, cmenor, menor);
    
    return 0;
	
	return 0;
}
