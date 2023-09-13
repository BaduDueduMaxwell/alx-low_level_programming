#include <stdio.h>

int main()
{
    unsigned int i;
    unsigned int a = 1;
    unsigned int b = 2;
    unsigned int next;

    printf("%u, %u", a, b);

    for (i = 3; i <= 98; i++) {
        next = a + b;
        printf(", %u", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
