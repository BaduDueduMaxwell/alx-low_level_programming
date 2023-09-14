#include <stdio.h>

int main() {
    int n = 50; // Number of Fibonacci numbers to print
    unsigned long long int first = 1, second = 2, next;

    printf("%llu, %llu", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(", %llu", next);

        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}