#include <stdio.h>
#include <limits.h>

/**
 * main - nums and letters
 *
 * Return: 0 if successful
 */
int main(void)
{
        int num;
        char letter;

        for (num = 0; num < 10; num++)
        {
                putchar(num + '0');
        }
        for (letter = 'a'; letter <= 'f'; letter++)
        {
                putchar(letter);
        }
        putchar('\n');

        return (0);
}
