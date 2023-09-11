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
	    int num = 0;

	        while (num < 9)
			    {
				            putchar(num + '0');
					            putchar(',');
						            putchar(' ');
							            num++;
								        }

		    putchar(num + '0');  /* Print the last digit (9) without comma and space */
		        putchar('\n');

			    return (0);
}
