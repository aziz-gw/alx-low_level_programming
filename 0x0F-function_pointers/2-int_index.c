#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: an array of integers
 * @size: number of elements in the array
 * @cmp: pointer a to function to be used to compare values
 *
 * Return: index of the first element for which the cmp
 * function does not return 0, -1 if no element matches,
 * -1 if size is less than or equal to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
	}

	return (-1);
}
