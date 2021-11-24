#include <stdio.h>
#include <stdlib.h>

void valorvetor(int *vetor, int elem){
  int i;
  for(i=0;i<elem;i++){
    vetor[i]=0; }
  for(i=0;i<elem;i++){
    printf("Valor %d: ", i+1);
    scanf("%d", &vetor[i]); }}

void somavetor(int *vetorx, int *vetory, int *vetorz, int elem){
  int i;
  for(i=0;i<elem;i++){
    vetorz[i]=vetorx[i]+vetory[i];}}

int main(void) {
  int *x, *y, *z, n;
  void (*atribvetor) (int*, int)={valorvetor};
  void (*opvetor) (int*, int*, int*, int) = {somavetor};

  printf("Quantidade de elementos: ");
  scanf("%d", &n);
  x = malloc(n * sizeof(int));
  y = malloc(n * sizeof(int));
  z = malloc(n * sizeof(int));

  printf("\nValores vetor 1: \n");
  (*atribvetor) (x, n);
  printf("\nValores vetor 2: \n");
  (*atribvetor) (y, n);
  (*opvetor) (x, y, z, n);
  printf("\nSoma dos vetores: \n");
  for(int i=0; i<n; i++){
    printf("\n===============\n%d ", z[i]);
  }
  return 0;
}
