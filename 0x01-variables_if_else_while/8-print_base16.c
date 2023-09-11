nclude <stdio.h>

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
	    char hexChar;

	        for (hexChar = '0'; hexChar <= '9'; hexChar++)
			    {
				            putchar(hexChar);
					        }

		    for (hexChar = 'a'; hexChar <= 'f'; hexChar++)
			        {
					        putchar(hexChar);
						    }

		        putchar('\n');

			    return (0);
}
