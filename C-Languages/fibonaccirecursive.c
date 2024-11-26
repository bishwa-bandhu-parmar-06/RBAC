#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSequence(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int num;
    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &num);

    printf("Fibonacci sequence: ");
    printFibonacciSequence(num);

    return 0;
}

