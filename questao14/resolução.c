#include <stdio.h> // Incluir novas funções como scanf
#include <stdlib.h> // Incluir novas funções como qsort e malloc

int comp (const void * a, const void * b) // Comparar váriavel com tipo float
{
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

int main(void) { // Inicio do programa
  int n, i, j; // Variaveís declaradas
  float *vetor, aux; // Ponteiro float
  printf("Quantos valores você quer ordenar? "); // Interação na tela para responder
  scanf("%d", &n); // Números de sequências

  vetor = malloc(n*sizeof(int)); // Utilização da função malloc

  for (i=0;i<n;i++){ // Iniciação do laço com os valores do vetor
    printf("Digite o valor %d: ", i+1); // Interação na tela para responder
    scanf("%f", &vetor[i]); // Utilização da função scanf
  }

  qsort (vetor, n, sizeof(int), comp); // Utilização da função qsort
  for (i=0; i<n; i++) // Resultados impressos na tela
     printf ("%f ",vetor[i]);
  return 0;
}
