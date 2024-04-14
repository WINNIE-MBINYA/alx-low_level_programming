#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in array, or -1 if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
size_t inc;

if (array == NULL)
return (-1);
for (inc = 0; inc < size; inc++)
{
printf("Value checked array[%ld] = [%d]\n", inc, array[inc]);
if (array[inc] == value)
return (inc);
}
return (-1);
}
