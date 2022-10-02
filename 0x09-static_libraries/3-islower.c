#include "main.h"
/**
 * _islower - to check for lowercase characters
 * @c: function argument
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
