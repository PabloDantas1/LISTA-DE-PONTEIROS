#include <stdio.h>

int main(void) {
  int i, j, *p, *q;
  p = &i;
  *q = &j;
  p = &*&i;
  i = (*&)j; // Ilegal
  i = *&j;
  i = &&j; // Ilegal
  q = *p;
  i = (*p) + *q;
  return 0;
}
