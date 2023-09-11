/**
 * main - Entry point
 *
 *  * Description: This program prints a sequence of characters representing
 *   *              digits (0-9) and lowercase hexadecimal numbers (a-f),
 *    *              followed by a newline character.
 *     *
 *      * Return: Always 0 (Success)
*/
int main(void)
{
	   char i;
		for (i = '0'; i <= '9'; i++)
		putchar(i);
		for (i = 'a'; i <= 'f'; i++)
		putchar(i);
		putchar('\n');

		return (0);
}
