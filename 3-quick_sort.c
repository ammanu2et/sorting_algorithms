#include "sort.h"

/**
 * quick_sort_sub - sort a sub array by using quick sort algorithm
 * @array: the sub array
 * @low: the start of sub array
 * @high: the end of sub array
 * @size: the size of the sub array
 */

void quick_sort_sub(int *array, size_t low, size_t high, size_t size)
{
    size_t i, j;
    int tmp, pivot;

    if ((low >= high) || (array == NULL))
        return;

    pivot = array[high];
    i = low;

    for (j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            if (i != j)
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                print_array(array, size);
            }
            i++;
        }
    }

    if (i != high)
    {
        tmp = array[i];
        array[i] = array[high];
        array[high] = tmp;
        print_array(array, size);
    }
    if (i - low > 1)
        quick_sort_sub(array, low, i - 1, size);
    if (high - i > 1)
        quick_sort_sub(array, i + 1, high, size);
}

/**
 * quick_sort - sort a given element by using quick sort algorithm
 * @array: an array to sort
 * @size: the size of the array or element
 * Return: void
 */
void quick_sort(int *array, size_t size);
{
    if (array != NULL)
    {
        quick_sort_sub(array, 0, size - 1, size);
    }
}
