#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d\n",i); // Esperado -> Aqui irá mostrar número do contador
  printf("vet[%d] = %.1f\n",i, vet[i]); // Esperado -> A medida que o contador for aumentando, irá mostraros valores contidos nas diferentes posições do vetor.
  printf("*(f + %d) = %.1f\n",i, *(f+i)); // Esperado -> A medida que o contador for aumentando, irá ocorrer pulos na memória equivalentes a o número do contador em relação a "f", dessa forma, exibirá os valores contidos nas diferentes posições do vetor.
  printf("&vet[%d] = %X\n",i, &vet[i]); // Esperado -> Mostra como ocorre o salto da memória de 4 em 4 bytes.
  printf("(f + %d) = %X\n",i, f+i); // Esperado -> Mostra como ocorre o salto da memória em relação a "f", acompanhando a memória do vetor.
 }
}
