#include <stdio.h>
#include <stdlib.h>

/*
14) Elabore um algoritmo que leia 10 números inteiros e obtenha qual o tamanho da maior
sequencia consecutiva de números em ordem crescente
*/

int main(int argc, char *argv[]) 
{
    int vetor[10] = {1, 2, 3, 4, 0, 0, 0, 8, 9, 10};
    int maior = 1, maior_sequencia = 0, i;
    // Maior começa de 1 pois a menor sequência possível é de 1 elemento
    
    // Preenchendo o Vetor com 10 posições
    //printf("Escreva a sequência numerica \n");
    
    //for (i = 0; i < 10; i++)
    //{
    //    printf("Digite vetor[%d]\n",i);
    //    scanf("%d", &vetor[i]);
    //}
    
    // Definindo a Sequência
    
    // Um vetor de tamamnho 10 tem 10 - 1 comparações!!!
    // Por isso que i vai até 10 - 1, caso contrário dá bug
    for (i = 0; i < (10 - 1); i++)
    {
        // PARTE MAIS IMPORTANTE DO CODIGO
        // Ele compara cada elemento do vetor ao próximo elemento
        // A sequência é crescente se o próxiimo elemento - 1 é igual ao elemento anterior
        // maior é um contador que dá o numero da maior sequencia
        if (vetor[i] == (vetor[i + 1] - 1))
        {
        	// Se for sequencia conta + 1
            maior = maior + 1;
        }
        else
        {
        	// Se não for sequencia reinicia a contagem
          maior = 1;
        }
        
        
        if (maior_sequencia < maior)
        {
            maior_sequencia = maior;
        }        
    }
    
    printf("A maior sequencia tem %d elementos", maior_sequencia);
    return 0;
}
