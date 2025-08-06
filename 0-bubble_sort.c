#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}


void bubble_sort(int *array, size_t size)
{
	int swap = 1, a, temp;

	if (array == NULL || size < 2)
		return;

	while (swap)
	{
		swap = 0;

		for (a = 0; a < size - 1; a++)
			{
				if (array[a] > array[a + 1])
				{
					swap = 1;
					temp = array[a];
					array[a] = array[a + 1];
					array[a + 1] = temp;
					print(array, size);
				}
			}
	}

}