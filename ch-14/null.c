
#include <stdio.h>

int main()
{
  int my_int = 3;
  int *p = &my_int;
  
  printf("my_int: %d\n", my_int);
  printf("p: %p\n", p);

  p = NULL;

  printf("set *p to NULL\n");
  printf("my_int: %d\n", my_int);
  printf("p: %p\n", p);

  *p = 5;
}