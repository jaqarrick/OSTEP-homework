#include <stdio.h>
#include <stdlib.h>

// Create a program that allocates an array of integers (as above), frees
// them, and then tries to print the value of one of the elements of
// the array. Does the program run? What happens when you use
// valgrind on it?
int main()
{
    int *data = malloc(100 * sizeof(int));
    data[100] = 0;
    free(data);
    printf("data[50] = %d\n", data[50]);
    return 0;
}
