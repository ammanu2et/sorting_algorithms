#include "sort.h"

/**
 * shell_sort - sort the list and print the changes
 * @array: The array to sort.
 * @size: Size of the array
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
    size_t n;
    int interval, tmp, i, j;

    for (interval = n/2; interval > 0; interval /= 2)
    {
        for (i = interval; i < n; i += 1)
        {
            tmp = array[i];
            for (j = i; j >= interval && array[j - interval] > tmp; j -= interval)
            {
                array[j] = array[j - interval];
            }
            array[j] = tmp;
            print_array(array, size);
        }
    }
}
