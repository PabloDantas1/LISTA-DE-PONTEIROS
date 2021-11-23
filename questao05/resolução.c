#include <stdio.h>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor); // 20 -> Esperado

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp); // 29.0 -> Esperado

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux); // P -> Esperado

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux); // e -> Esperado

  /* (e) */
  p3 = nome;
  printf("%c \n", *p3); // P -> Esperado

  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3); // e -> Esperado
  
  /* (g) */
  p3--;
  printf("%c \n", *p3); // t -> Esperado
 
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade); // 31 -> Esperado
  
  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade); // 45 -> Esperado
 
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade); // 27 -> Esperado
  
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade); // 31 -> Esperado
  
  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5); // 45 -> Esperado
 
  /* (n) */
  p5;
  printf("%d \n", *p5); // 45 -> Esperado
  return(0);
}
