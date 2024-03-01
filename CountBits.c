#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int setBitsCount = countSetBits(num);

    printf("Count of Set bits: %d\n", setBitsCount);

    return 0;
}
