#include 'sort.h'

/**
 * bubble_sort - sort lists and arrays.
 *
 * @array: The array to be printed.
 * @size: number of elements in array.
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
size_t n;
int i, j;
for (i = 0; i < n - 1; i++)
{
    for (j = 0; j < n - i - 1; j++)
    {
        if (array[j] > array[j + 1])
        {
            int tmp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = tmp;
            print_array(array, size);
        }
    }
}
}
