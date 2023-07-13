#include "search_algos.h"
/**
 * find_min - function that finds minimum between two integers
 * @a: first value
 * @b: second value
 * Return: a if a is smaller than b else return b
 */
size_t find_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where values is located
 * -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (array[find_min(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump = step;
		step += sqrt(size);
		if (jump >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	while (array[jump] < value)
	{
		jump += 1;
		if (jump == find_min(step, size))
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
	}
	printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

	if (array[jump] == value)
		return (jump);
	else
		return (-1);
}
