#include "main.h"

/**
 * jack_bauer - printsevery minute of the day of jack bauer
 * Return:void
 */

void jack_bauer(void)
{

	int h1;
	int h2;
	int m1;
	int m2;

	h2 = 0;
	while (h2 <= 2)
	{
		if (h2 == 2)
		{
			/*Restrain to 23h, not 29*/
		}
		h1 = 0;
		while (m2 <= 5)
		{
			m1 = 0;
			while (m1 <= 9)
			{
				_putchar('0' + h2);
				_putchar('0' + h1);
				_putchar(':');
				_putchar('0' + m2);
				_putchar('0' + m1);
				_putchar('\n');
				m1++;
			}
			m2++;
		}
		h1++;
	}
	h2++;
}
