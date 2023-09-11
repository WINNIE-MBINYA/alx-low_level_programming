#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: This program prints single-digit numbers in base 10
 *     *              starting from 0 and followed by a new line.
 *      *
 *       * Return: Always 0 (Success)
 *        */
int main(void)
{
	    int number = 0;

	        while (number <= 9)
			    {
				            putchar(number + '0');  /* Convert and print as a character */
					            number++;
						        }

		    putchar('\n');

		        return (0);
}
