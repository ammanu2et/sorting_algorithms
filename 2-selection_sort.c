#include 'sort.h'

/**
 * selection_sort - sort a given elements using selection sort algorithm.
 *
 * @size: size of element
 * @array: the array element
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
    size_t i, sorted, min_idx;
    int tmp;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (sorted = i + 1; sorted < size; sorted++)
        {
            if (array[sorted] < array[min_idx])
                min_idx = sorted;
        }
        if (min_idx != i)
        {
            tmp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = tmp;
            print_array(array, size);
        }
    }
}
