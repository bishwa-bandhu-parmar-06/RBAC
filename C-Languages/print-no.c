#include <stdio.h>

void printNumbers(int n) {
    if (n > 1) {
        printNumbers(n - 1);
    }
    printf("%d ", n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Numbers from 1 to %d: ", num);
    printNumbers(num);

    return 0;
}

