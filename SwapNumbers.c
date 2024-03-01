#include <stdio.h>

void swapNumbers(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    void (*swapFunction)(int *, int *) = swapNumbers;
    swapFunction(&num1, &num2);

    printf("Swapped numbers: %d %d\n", num1, num2);

    return 0;
}
