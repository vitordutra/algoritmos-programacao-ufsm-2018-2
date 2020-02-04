#include <stdio.h>
#include <stdlib.h>

/*
14) Elabore um algoritmo que leia 10 n�meros inteiros e obtenha qual o tamanho da maior
sequencia consecutiva de n�meros em ordem crescente
*/

int main(int argc, char *argv[]) 
{
    int vetor[10] = {1, 2, 3, 4, 0, 0, 0, 8, 9, 10};
    int maior = 1, maior_sequencia = 0, i;
    // Maior come�a de 1 pois a menor sequ�ncia poss�vel � de 1 elemento
    
    // Preenchendo o Vetor com 10 posi��es
    //printf("Escreva a sequ�ncia numerica \n");
    
    //for (i = 0; i < 10; i++)
    //{
    //    printf("Digite vetor[%d]\n",i);
    //    scanf("%d", &vetor[i]);
    //}
    
    // Definindo a Sequ�ncia
    
    // Um vetor de tamamnho 10 tem 10 - 1 compara��es!!!
    // Por isso que i vai at� 10 - 1, caso contr�rio d� bug
    for (i = 0; i < (10 - 1); i++)
    {
        // PARTE MAIS IMPORTANTE DO CODIGO
        // Ele compara cada elemento do vetor ao pr�ximo elemento
        // A sequ�ncia � crescente se o pr�xiimo elemento - 1 � igual ao elemento anterior
        // maior � um contador que d� o numero da maior sequencia
        if (vetor[i] == (vetor[i + 1] - 1))
        {
        	// Se for sequencia conta + 1
            maior = maior + 1;
        }
        else
        {
        	// Se n�o for sequencia reinicia a contagem
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
