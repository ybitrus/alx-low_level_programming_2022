/**
 * times_table - a function that prints the 9 times table
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar('');
		for (m = 1; m <= 9; m++)
		:wq{ 
			p = (n * m);
			if ((p / 10) > 0)
			{
				_putchar((p / 10) + '0');
			}
			else
			{
				_putchar('');
			}
			_putchar((p % 10) + '0');
			
			if (m < 9)
			{
				_putchar('');
				_putchar('');
			}
		}

		_putchar('\n');
	}
}
