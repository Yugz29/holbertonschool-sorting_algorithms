#include <stdlib.h>
#include <stdio.h>
#include "sort.h"



/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 *
 * @array: The array of integers to sort
 * @size: The number of elements in the array
 *
 * Description: Goes through the array, finds the smallest element
 *              in the unsorted part and swaps it with the current
 *              position. After each swap, the array is printed.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, search_min;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		search_min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[search_min])
				search_min = j;
		}

		if (search_min != i)
		{
			temp = array[i];
			array[i] = array[search_min];
			array[search_min] = temp;

			print_array(array, size);
		}
	}
}