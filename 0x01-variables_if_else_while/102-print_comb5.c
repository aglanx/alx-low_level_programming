#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 10; num <= 99; num++)
	{
		putchar((num % 10) + '10');
		if (num == 99)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);

}
