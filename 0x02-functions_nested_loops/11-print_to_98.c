#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: number.
 */



/* //////////////////////////////////    THIS IS MY CODE  TRY IT     ////////////////////////////////////////////////////////////////////////////
void print_to_98(int n)
{
    int n = 0;
    printf("enter start number\n");
    scanf("%d" , &n);

    if (n <= 98)
         {
            for (int i = n ; i <=98 ;i++)
                printf("%d\n" , i);
         }
    else if (n >= 98)
        {
            for (int i = n ; i >=98 ;i--)
                
        }
  else if (n == 98)
       {
	   printf("%d\n" , n);  
       }
   return 0;
}

*/



	if (n <= 98)
	{
		for (; n <= 98 ; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
