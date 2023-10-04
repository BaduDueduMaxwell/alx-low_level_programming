#include <stdio.h>
#include <stdlib.h>

/**
 * calculateMinCoins - calculates the minimum number of coins required
 * @cents: the amount in cents
 * Return: the minimum number of coins
 */
int calculateMinCoins(int cents)
{
	int coins25  = 0, coins10 = 0;
	int coins5 = 0, coins2 = 0, coins1 = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			coins25++;
			cents -= 25;
		}
		else if (cents >= 10)
		{
			coins10++;
			cents -= 10;
		}
		else if (cents >= 5)
		{
			coins5++;
			cents -= 5;
		}
		else if (cents >= 2)
		{
			coins2++;
			cents -= 2;
		}
		else if (cents >= 1)
		{
			coins1++;
			cents -= 1;
		}
	}
	return (coins25 + coins10 + coins5 + coins2 + coins1);
}

/**
 * main - prints the minimum number of coins to change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on succeess and 1 on error
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int minCoins = calculateMinCoins(cents);

		printf("%d\n", minCoins);
	}
	return (0);
}
