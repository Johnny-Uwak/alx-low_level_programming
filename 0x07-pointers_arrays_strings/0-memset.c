#include "main.h"
/**
 * _memset - fill a block of memory with a specific value,
 * @s: memory area.
 * @b: desired value.
 * @n: bytes to be changed.
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
