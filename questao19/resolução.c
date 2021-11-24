#include "gc.h"
#include <assert.h>
#include <stdio.h>
int main()
{
  int x;
  GC_INIT();
  for (x = 0; x < 10000; ++x)
   {
     int *p = (int *) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 25 * sizeof(int));
     if (x % 100 == 0)
       printf("resultado = %d", GC_get_heap_size()); }
  return 0;
}
