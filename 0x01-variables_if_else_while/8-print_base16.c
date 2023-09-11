include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: This program prints all hexadecimal numbers (0-9 and a-f)
 *     *              in lowercase, followed by a new line, using putchar.
 *      *
 *       * Return: Always 0 (Success)
 *        */
int main(void)
{
	    char i;

	        for (i = '0'; i <= '9'; i++)
			    {
				            putchar(i);
					        }

		    for (i = 'a'; i <= 'f'; i++)
			        {
					        putchar(i);
						    }

		        putchar('\n');

			    return 0;
}
