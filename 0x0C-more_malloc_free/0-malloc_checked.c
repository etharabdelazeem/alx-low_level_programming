#include "main.h"

/**
 * 
 * malloc_checked: allocates memory using malloc()
 * @b: bytes allocated 
 *
 * Returns: pointer
 */
void *malloc_checked(unsigned in b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return(ptr);
}
