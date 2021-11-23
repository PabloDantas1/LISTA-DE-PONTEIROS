#include <stdio.h>
#include <stdlib.h>

int comp (const void * a, const void * b)
{
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

int main(void) {
  int n, i, j;
  float *vetor, aux;
  printf("Quantos valores você quer ordenar? ");
  scanf("%d", &n);

  vetor = malloc(n*sizeof(int));

  for (i=0;i<n;i++){
    printf("Digite o valor %d: ", i+1);
    scanf("%f", &vetor[i]);
  }

  qsort (vetor, n, sizeof(int), comp);
  for (i=0; i<n; i++)
     printf ("%f ",vetor[i]);
  return 0;
}
