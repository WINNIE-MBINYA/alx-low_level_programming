nclude <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: This program prints all possible combinations of single-digit
 *     * numbers in ascending order, separated by ", ".
 *      *
 *       * Return: Always 0 (Success)
 *        */
int main(void)
{
	    int n = '0';

	        while (n <= '9')
			    {
				            putchar(n);
					            if (n != '9')
							            {
									                putchar(',');
											            putchar(' ');
												            }
						            n++;
							        }

		    putchar('\n');

		        return (0);
}
