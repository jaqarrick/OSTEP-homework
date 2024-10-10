#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int pid = getpid();
    printf("PID:%d\n", pid);
    if (argc < 2) {
        printf("Please provide the number of megabytes to allocate.\n");
        return 1;
    }

    // convert input from MB to bytes
    int num_mb = atoi(argv[1]);
    int bytes = num_mb * 1000 * 1000;

    printf("Allocating %d MB (%d bytes)\n", num_mb, bytes);
    char *array = (char *)malloc(bytes);

    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (size_t i = 0; i < bytes; i++) {
        array[i] = 0;
    }

    while (1) {
        for (size_t i = 0; i < bytes; i++) {
            array[i] += 1;
            usleep(1);
        }
    }

    free(array);

    return 0;
}
