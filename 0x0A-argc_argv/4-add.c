#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**                                                                                                 
 * main - adds positive numbers                                                                     
 * @argc: argument count                                                                            
 * @argv: argument vector                                                                           
 * Return: 0 on success and 1 on error                                                              
 */
int main(int argc, char *argv[])
{
        int i;
        int j;
        int sum = 0;

        if (argc == 1)
        {
                printf("0\n");
        }

        else
        {
                for (i = 1; i < argc; i++)
                {
                        j = atoi(argv[i]);

                        if (isdigit(j) != '\0')
                        {
                                printf("Error\n");
                                return (1);
                        }
                        else
                        {
                                sum += j;
                        }
                }
                printf("%d\n", sum);
        }
        return (0);
}
