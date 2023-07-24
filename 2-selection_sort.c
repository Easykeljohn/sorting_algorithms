#include "sort.h"

/**
 * selection_sort - A function that use selection sort algorithm.
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0, j = 0, post = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		post = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[post])
				post = j;
		}
		if (post != i)
		{
			aux = array[i];
			array[i] = array[post];
			array[pos] = temp;
			print_array(array, size);
		}
	}
}
