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
	unsigned int i, j, tmp, minim;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		minim = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[minim] > array[j])
				minim = j;
		}
		if (minim != i)
		{
				tmp = array[i];
				array[i] = array[minim];
				array[minim] = tmp;
				print_array(array, size);
		}
	}
}
