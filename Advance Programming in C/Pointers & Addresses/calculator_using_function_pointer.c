/*
Problem: Implement a Simple Calculator

Create a simple calculator that uses function pointers to perform basic arithmetic operations. You should:

    Define functions for addition, subtraction, multiplication, and division.
    Implement a function that takes two integers and a function pointer to an operation function.
    Use function pointers to perform the selected operation and print the result.

Example Functions:

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
void performOperation(int (*operation)(int, int), int a, int b);
*/

#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

void performOperation(int (*operation)(int, int), int a, int b) {
	printf("%d\n", operation(a, b));
}

int main() {
	performOperation(add, 10, 3);
	performOperation(sub, 18, 5);
	performOperation(mul, 6, 3);
	performOperation(div, 54, 3);
	return 0;
}
