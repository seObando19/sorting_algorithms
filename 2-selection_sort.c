#include "sort.h"

/**
* selection_sort - function that sorts an array of integers
* in ascending order using the Selection sort algorithm
void selection_sort(int *array, size_t size)
* @array: array to value
* @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = i + 1;
	int tmp;

	if (size < 2)
		return;

	while (i < size)
	{
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
			print_array(array, size);
		}
		i++;
		j = i + 1;
	}
}
