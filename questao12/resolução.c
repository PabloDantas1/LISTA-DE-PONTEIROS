#include <stdio.h>
#include <stdlib.h>
void soma(int a, int b){
  printf("Soma = %d\n", a+b);
}
void subtracao(int a, int b){
  printf("Subtracao = %d\n", a-b);
}
void multiplicacao(int a, int b){
  printf("Multiplicacao = %d\n", a*b);
}
int main(void) {
  void (*pf_array[]) (int, int) = {soma, subtracao, multiplicacao};
  int opcao, a = 3, b = 4;
  printf("Digite sua escolha: \n");
  scanf("%d", &opcao);
  (*pf_array[opcao]) (a, b);
  return(0);
}
