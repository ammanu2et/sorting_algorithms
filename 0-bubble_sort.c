#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 *
 * @array: The array of integer
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t n;
	int sorted;

	if (!array || size == 0)
		return;

	do {
    		sorted = 1;
    		for (n = 0; n < size - 1; n++)
    		{
    			if (array[n] > array[n + 1])
    			{
    				sorted = 0;
    				int tmp = array[n];
    				array[n] = array[n + 1];
    				array[n + 1] = tmp;
    				print_array(array, size);
    			}
    		}

    } while (sorted == 0);
}
