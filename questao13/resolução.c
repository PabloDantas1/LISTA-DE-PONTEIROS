#include <stdio.h>
#include <stdlib.h>

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

  for(i=0; i<n; i++){
    for (j=i+1;j<n;j++){
      if(vetor[i]>vetor[j]){
        aux =  vetor[i];
      vetor[i] = vetor[j];
      vetor[j] = aux;
      }
    }
  }

  printf("Valores ordenados: \n");
  for (i=0;i<n;i++){
    printf("%f ", vetor[i]);
  }
  return 0;
}
