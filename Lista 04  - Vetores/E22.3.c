#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
/*
22) Faça um algoritmo que leia um vetor A de 10 posições contendo números inteiros. Determine
e mostre, a seguir, quais elementos de A estão repetidos e quantas vezes cada um se repete.
*/

int main(int argc, char** argv){
	
    //Quantidade de números
    const int tamanho=20;
    //Vetor com os números
    int vet[tamanho];
    //Obtém a lista
    for(int i = 0; i < tamanho; i++){
        printf("\n\nDigite o numero para a posicao %d: ",i);
        scanf("%d",&vet[i]);
    }
    //Percorre os números e armazena os repetidos
    printf("\n");
    for(int i = 0; i < tamanho; i++){
        int cont=0; // Reinicio o Contador no Primeiro for
        for(int j = 0; j < tamanho; j++){
            if(vet[j]==vet[i]){
                if(j<i){
                    //essa verificação já foi feita antes, portanto o valor já foi escrito na tela
                    break;
                }
                cont++;
            }
        }
        if(cont>1){
            printf("O numero %d se repete %d vezes, nas posicoes: ",vet[i],cont);
            bool virgula=false; //variável que apenas indica se devemos colocar a vírgula antes do número
            for(int j=0; j < tamanho; j++){
                if(vet[j]==vet[i]){
                    if(virgula){
                        printf(", "); //escreve a vírgula
                    }
                    printf("%d",j);
                    virgula=true; //como já escrevemos ao menos uma vez, precisaremos de vírgula
                }
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
