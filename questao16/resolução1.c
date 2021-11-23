#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void compp(float *seq, int ele){ 
  int i, j;
  float tmp;
    for (i = 0; i < ele; ++i){
    for (j = i + 1; j < ele; ++j)
    {
        if (seq[i] > seq[j]){
            tmp =  seq[i]; seq[i] = seq[j]; seq[j] = tmp;
        }}}}
int main(void) {
  clock_t Ticks[2];
  Ticks[0] = clock();

  int n, i;
  void (*comp) (float*, int) = {compp}; 
  printf("\nSolicite a quantidade de ordens: ");
  scanf("%d", &n);

  float *x;
  x = malloc(n * sizeof(float));

  for(i=0; i<n; i++){ 
    printf("\n============\nNúmero %d: ", i+1);
    scanf("%f", &x[i]);}
  (*comp) (x, n);

  printf("\nEm ordem crescente, eis o resultado: \n");
  for (i=0; i<n; i++){
    printf ("%.1f - ",x[i]);}
  free(x); 

  Ticks[1] = clock();
  double time = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
  printf("\n============\n%g ms", time);
  getchar();
  return 0;
}
