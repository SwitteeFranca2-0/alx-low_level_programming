#include "main.h"


/**
 * binary_to_uint - binary to unsigned int.
 * @b: string of binary numbers.
 * Return: unsigned int in decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, c, g, d;


	if (!b)
		return (0);

	for (c = 0; b[c]; c++)
		;
	c -= 1;

	for (i = 0; b[i], c >= 0; i++, c--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			g = c;
			d = 1;
			while (g)
			{
				d *= 2;
				g--;
			}
			n += d;
		}
	}


	return (n);
}


