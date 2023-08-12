#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	char *ptr = malloc(total_size);
	char *end = ptr + total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);

	while (ptr < end)
	{
		*ptr = 0;
		ptr++;
	}
	return (ptr - total_size);
}
