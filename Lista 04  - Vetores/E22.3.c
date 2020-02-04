#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
/*
22) Fa�a um algoritmo que leia um vetor A de 10 posi��es contendo n�meros inteiros. Determine
e mostre, a seguir, quais elementos de A est�o repetidos e quantas vezes cada um se repete.
*/

int main(int argc, char** argv){
	
    //Quantidade de n�meros
    const int tamanho=20;
    //Vetor com os n�meros
    int vet[tamanho];
    //Obt�m a lista
    for(int i = 0; i < tamanho; i++){
        printf("\n\nDigite o numero para a posicao %d: ",i);
        scanf("%d",&vet[i]);
    }
    //Percorre os n�meros e armazena os repetidos
    printf("\n");
    for(int i = 0; i < tamanho; i++){
        int cont=0; // Reinicio o Contador no Primeiro for
        for(int j = 0; j < tamanho; j++){
            if(vet[j]==vet[i]){
                if(j<i){
                    //essa verifica��o j� foi feita antes, portanto o valor j� foi escrito na tela
                    break;
                }
                cont++;
            }
        }
        if(cont>1){
            printf("O numero %d se repete %d vezes, nas posicoes: ",vet[i],cont);
            bool virgula=false; //vari�vel que apenas indica se devemos colocar a v�rgula antes do n�mero
            for(int j=0; j < tamanho; j++){
                if(vet[j]==vet[i]){
                    if(virgula){
                        printf(", "); //escreve a v�rgula
                    }
                    printf("%d",j);
                    virgula=true; //como j� escrevemos ao menos uma vez, precisaremos de v�rgula
                }
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
