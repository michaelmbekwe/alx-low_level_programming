#include <stdlib.h>
#include <stdio.h>

/**
 *_realloc - a function that reallocates a memory block using malloc and free
 *@ptr: is a pointer
 *@old_size: old size
 *@new_size: new size
 *Return: success
 *
 */




void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;
	unsigned int i;

	if (ptr == NULL)
{
	return (malloc(new_size));
}
if (new_size == 0)
{
	free(ptr);
	return (NULL);
}

if (new_size == old_size)
{
	return (ptr);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
	return (NULL);
}

min_size = (old_size < new_size) ? old_size : new_size;
for (i = 0; i < min_size; i++)
{
	*((char *)new_ptr + i) = *((char *)ptr + i);
}

free(ptr);

return (new_ptr);
}

