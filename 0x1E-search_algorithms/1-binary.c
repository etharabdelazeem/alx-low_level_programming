#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers binaryly.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The index where value is located.
 *		or -1 If value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int m;
	unsigned long int L = 0;
	unsigned long int R = size - 1;

	while (array && L <= R)
	{
		/*printing the array*/
		print_array(array, L, R);

		m = floor((L + R) / 2);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}


/**
* print_array - function to print the array
* @array: array to be printed
* @start: where to start printing
* @stop: where to stop printing
*/
void print_array(int *array, unsigned long int start, unsigned long int stop)
{
	unsigned long int j;

	printf("Searching in array:");
	for (j = start; j < stop + 1; j++)
	{
		printf("%d", array[j]);
		if (j < stop)
			printf(",");
	}
	printf("\n");
}
