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
	    int num;

	        for (num = 0; num < 10; num++)
			    {
				            putchar(num + '0');
					            if (num < 9)
							            {
									                putchar(',');
											            putchar(' ');
												            }
						        }

		    putchar('\n');

		        return (0);
}
