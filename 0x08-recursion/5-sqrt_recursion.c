#include "main.h"

/**
 * mainsqrt - To find the natural square root of a number
 * @n: The value for square root calculation
 * @i: iteration value
 * Return: the resulting square root
 */

int mainsqrt(int n, int i)
{
		if (i * i > n)
		{
			return (-1);
		}
		if (i * i == n)
		{
			return (i);
		}
		return (mainsqrt(n, i + 1));
}
