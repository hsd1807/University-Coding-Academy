/*
To measure the memory taken by a program in C, you can use platform-specific functions. Here’s an example using the getrusage() function on Unix-like systems (Linux, macOS, etc.) to measure the memory usage of a program:
*/
#include <stdio.h>
#include <sys/resource.h>

int main() {
    // Record the start memory usage
    struct rusage usage_start;
    getrusage(RUSAGE_SELF, &usage_start);

    // Place your code to measure memory usage here
    // For example, let's allocate some memory
    int *array = (int *)malloc(1000000 * sizeof(int));

    // Record the end memory usage
    struct rusage usage_end;
    getrusage(RUSAGE_SELF, &usage_end);

    // Calculate memory usage in kilobytes
    long memory_used = usage_end.ru_maxrss - usage_start.ru_maxrss;

    printf("Memory Used: %ld KB\n", memory_used);

    // Free the allocated memory
    free(array);

    return 0;
}
/*
In this example, we use the getrusage() function to get resource usage statistics before and after the code you want to measure. The ru_maxrss field in the struct rusage contains the maximum resident set size in kilobytes, which represents the amount of memory used by the program. Keep in mind that this measures the maximum memory used throughout the program’s execution.
Remember that different platforms may have different ways of measuring memory usage, and the values you obtain might not be an exact representation of the memory your program is using due to various factors like memory allocation granularity and operating system optimizations.
*/
