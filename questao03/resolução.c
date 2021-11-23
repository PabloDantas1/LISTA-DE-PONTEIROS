#include <stdio.h>

int main(){
  int i=5, *p;
  p = &i;
  printf("%x\n", p); // 4094
  printf("*p+2 = %d\n", *p+2); // 7
  printf("**&p = %d\n", **&p); // 5
  printf("3**p = %d\n", 3**p); // 15
  printf("**&p+4 = %d\n", **&p+4); // 9
}
