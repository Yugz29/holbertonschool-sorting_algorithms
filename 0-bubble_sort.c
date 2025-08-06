#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int swap = 1, temp;
	size_t a;

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
				print_array(array, size);
			}
		}
	}

}
