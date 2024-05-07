#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers linearly.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The first index where value is located.
 *		or -1 If value is not present in array or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i = 0;

	while (array && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
		{
			return (i);
		}
		else
		{
			array++;
			i++;
		}
	}
	return (-1);
}
