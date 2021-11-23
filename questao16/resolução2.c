#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compf (const void * a, const void * b)
{
  if ( *(float*)a <  *(float*)b ) return -1; if ( *(float*)a == *(float*)b ) return 0; if ( *(float*)a >  *(float*)b ) return 1;
}
int main (){
  clock_t Ticks[2];
  Ticks[0] = clock();
  int n, i;
  printf("\nSolicite a quantidade de ordens: ");
  scanf("%d", &n);

  float *x;
  x = malloc(n * sizeof(float));
  for(i=0; i<n; i++){
    printf("\n============\nNúmero %d: ", i+1);
    scanf("%f", &x[i]);
  }
  printf("\nEm ordem crescente, eis o resultado: \n");
  qsort (x, n, sizeof(float), compf);
  for (i=0; i<n; i++){
    printf ("%.1f - ",x[i]);
  }
  free(x);

  Ticks[1] = clock();
  double time = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
  printf("\n============\n%g ms", time);
  getchar();
  return 0;
}
