#include <stdio.h>
#include <stdlib.h>

// Write a program that creates an array of integers called data of size
// 100 using malloc; then, set data[100] to zero. What happens
// when you run this program? What happens when you run this
// program using valgrind? Is the program correct?
int main()
{
    int *data = malloc(100 * sizeof(int));
    data[100] = 0;
    return 0;
}
