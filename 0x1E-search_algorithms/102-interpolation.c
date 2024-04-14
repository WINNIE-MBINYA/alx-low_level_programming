#include "search_algos.h"

/**
 *interpolation_search - function that  searches
 *for a value in a sorted array of integers
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
size_t l = 0, r = size - 1;

if (array == NULL || size == 0)
return (-1);

while (l <= r && value >= array[l] && value <= array[r])
{
size_t pos;
double factor;

factor = (double)(value - array[l]) / (array[r] - array[l]);
pos = l + (size_t)((r - l) * factor);
printf("Value checked array [%ld] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
return (pos);
else if (array[pos] < value)
l = pos + 1;
else
r = pos - 1;
}

printf("Value checked array [%ld] is out of range\n", l);

return (-1);
}
