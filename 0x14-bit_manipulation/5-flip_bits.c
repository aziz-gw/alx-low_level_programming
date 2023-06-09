#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: num of bits ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		xor = xor & (xor - 1);
		cnt++;
	}

	return (cnt);
}
