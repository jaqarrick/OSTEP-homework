
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int my_int = 3;
  int *p = malloc(sizeof(int));

  printf("my_int: %d\n", my_int);
  printf("p: %p\n", p);

  return 0;
}