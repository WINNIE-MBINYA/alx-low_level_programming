#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: This program generates a random number and prints its last digit
 *     *              along with a description.
 *      *
 *       * Return: Always 0 (Success)
 *        */
int main(void)
{
	    int n;
	        int lastDigit;

		    srand(time(0));
		        n = rand() - RAND_MAX / 2;

			    lastDigit = abs(n) % 10;  // Get the last digit, ensuring it's positive
						      //
						      //     printf("Last digit of %d is %d and is ", n, lastDigit);
						      //
						      //         if (lastDigit > 5)
						      //             {
						      //                     printf("greater than 5\n");
						      //                         }
						      //                             else if (lastDigit == 0)
						      //                                 {
						      //                                         printf("0\n");
						      //                                             }
						      //                                                 else
						      //                                                     {
						      //                                                             printf("less than 6 and not 0\n");
						      //                                                                 }
						      //
						      //                                                                     return (0);
						      //                                                                     }
						      //
