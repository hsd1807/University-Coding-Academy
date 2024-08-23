/*
Program that measures the execution time of another program. We’ll use the clock() function from the <time.h> library to capture the start and end times of the program execution. Here’s an example program:
*/
#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_time, end_time;
    double cpu_time_used;

    // Record the start time
    start_time = clock();

    // Place your code to measure execution time here
    // For example, let's simulate some computation
    int sum = 0;
    for (int i = 1; i <= 1000000; ++i) {
        sum += i;
    }

    // Record the end time
    end_time = clock();

    // Calculate the CPU time used in seconds
    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Sum: %d\n", sum);
    printf("CPU Time Used: %f seconds\n", cpu_time_used);

    return 0;
}
/*
In this example, I’ve included a simple loop that computes the sum of numbers from 1 to 1,000,000. You can replace this part with your own program that you want to measure the execution time for. The clock() function returns the number of clock ticks used by the program, and we convert it to seconds using the CLOCKS_PER_SEC constant.

Remember that this approach measures the CPU time used by the program, which might include time when your program is not actively running due to multitasking and other factors. If you want to measure the actual elapsed time, you might need to look into system-specific functions, such as gettimeofday() on Unix-like systems or QueryPerformanceCounter() on Windows.

Also, keep in mind that modern operating systems and hardware can introduce variability in timing due to various optimizations and scheduling, so the accuracy of the measurement might not be perfect for very short durations.

**Here is a recommened YouTube Video to understand the Clock Speed in the CPU :

https://youtu.be/3PcO10iAXTk?si=Z_63XoTTpVYZBhc6
*/
