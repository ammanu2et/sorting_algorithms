#include 'sort.h'

/**
 * selection_sort - sort a given elements using selection sort algorithm.
 * @size: size of element
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
    size_t i;
    int tmp, sorted;

    do
    {
        for (i = 0; i < size - 1; i++)
        int min_idx = i;
            for (int sorted = i + 1; sorted < size; sorted++)
            {
                if (array[sorted] < array[min_idx])
                    min_idx = sorted;

                if (min_idx != i)
                    tmp = array[min_idx];
                    array[min_idx] = array[i];
                    array[i] = tmp;
                    print_array(array, size);
            }
    }
    while (sorted == 0);
}
