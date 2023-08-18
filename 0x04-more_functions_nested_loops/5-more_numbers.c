#include "main.h"

/**
 * more_numbers - function to print more numbers
 *      from 0 to 14 using _putchar
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
        int num, tim, c;

<<<<<<< HEAD
			if (c > 9)
			{
				_putchar(1 + 48);
				num = c % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
=======
        for (tim = 1; tim <= 10; tim++)
        {
                for (c = 0; c <= 14; c++)
                {
                        num = c;

                        if (c > 9)
                        {
                                _putchar(1 + 48);
                                num = c % 10;
                        }
                        _putchar(num + 48);
                }
                _putchar('\n');
        }
>>>>>>> 89b6ee29f78d5bfd43b9ed556ae46c1fe646d764
}
