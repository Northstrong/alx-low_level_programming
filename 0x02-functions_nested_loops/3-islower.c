#include "main.h"

/**
 * _islower - check for lowercase alphabet
 * @c: charcter to check
 * Return: always 1 else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
