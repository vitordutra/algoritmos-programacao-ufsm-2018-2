#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define quantidade_alunos 1
#define quantidade_questoes 10

int main(void) 
{
  int i, j;
  char matriz[quantidade_alunos][quantidade_questoes];
  int acertos[quantidade_alunos] = {0};
  char gab[quantidade_questoes];
  char nota;

  // Criar o gabarito

  printf("\n Digite o Gabarito: \n");

  for (i = 0; i < quantidade_questoes; i++)
  {
    printf("\n Gabarito da Questao %d (a, b, c ou d): ", i+1);
    scanf("%c", &gab[i]);
    getchar();
  }

  for (i = 0; i < quantidade_alunos; i++)
  {
    acertos[i] = 0;
    printf("Informe as respostas do aluno %d.\n", i+1);

    for (j = 0; j < quantidade_questoes; j++)
    {
      printf("Questao %d: \n", j + 1);
      scanf("%c", &matriz[i][j]);
      getchar();

      if (matriz[i][j] == gab[i])
      {
        acertos[i] = acertos[i] + 1;
      }
    }
  }

  for (i = 0; i < quantidade_alunos; i++)
  {
    printf("O aluno %d teve %d acertos.\n", i, acertos[i]);
  }
}
