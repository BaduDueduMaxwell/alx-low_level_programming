#include <stdio.h>

int main() {
    long prev = 1, curr = 2, next, sum = 0;

    // Calculate the sum of even-valued Fibonacci terms not exceeding 4,000,000
    while (curr <= 4000000) {
        if (curr % 2 == 0) {
            sum += curr;
        }
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    printf("The sum of even-valued Fibonacci terms not exceeding 4,000,000 is:
 %ld\n", sum);

    return 0;
}
