nclude <stdio.h>

int main(void) {
	  /* Prints all possible combinations of single-digit numbers,
	   *    * separated by commas and spaces, in ascending order. */
	  putchar('0');
	    putchar(',');
	      putchar(' ');
	        putchar('1');

		  for (int i = 2; i < 10; i++) {
			      putchar(',');
			          putchar(' ');
				      putchar(i + '0');
				        }

		    putchar('\n');

		      return 0;
}
