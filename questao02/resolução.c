#include <stdio.h>

int main(void) {
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
printf("p==&i = %d\n", p==&i); // Resultado = 1
printf("*p - *q = %d\n", *p-*q); // Resultado = -2
printf("**&p = %d\n", **&p); // Resultado = 3
printf("3 - *p/(*q) + 7 = %d\n", 3 - *p/(*q) + 7); // Resultado = 10
return 0;
}
