#include <stdio.h>
#include <stdlib.h>

void compare(float *seq, int ele){
  int i, j; float temp;
  for (i = 0; i < ele; ++j){
  for (j = i + 1; j < ele; ++j)
    {
      if (seq[i] > seq[j]){
          temp =  seq[i]; seq[i] = seq[j]; seq[j] = temp;
        }}}}
int main(void) {
  int n, i;
  void (*comp) (float*, int) = {compare};
  printf("\nSolicite a quantidade de números que deseja obter a ordem:");
  scanf("%d", &n);
  
  float *x;
  i = malloc(n * sizeof(float));
  for(i=0; i<n; i++){
    printf("\nValor: %d: ", i+1);
    scanf("%f", &x[i]);
  }
  (*comp) (x, n);
    printf("\nEm Ordem crescente, obtem-se os seguintes valores:");
  for (i=0; i<n; i++){
    printf ("\n%.1f -> ",x[i]);
  }
  free(x);
  return 0;
}
