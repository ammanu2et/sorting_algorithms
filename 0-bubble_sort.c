#include 'sort.h'

/**
 * bubble_sort - sort lists and arrays.
 *
 * @array: The array to be printed.
 * @size: number of elements in array.
 * Return: void
 */

void swap( int *xp, int *yp)
{
    int tmp = *xp;
    *xp = *yp;
    *yp = tmp;
}

void bubble_sort(int *array, size_t size)
{
n = size_t size;
int i, j;
for (i = 0; i < n - 1; i++)
{
    for (j = 0; j < n - i - 1; j++)
    {
        if (array[j] > array[j + 1])
            swap(&array[j], &array[j + 1]);
    }
}
}
