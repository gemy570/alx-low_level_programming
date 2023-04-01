#include "main.h"
#include <stdio.h>
/**
 * _strncat -concanite two strings use at most n bytes
 * @dest: char pointer
 * @src: char pointer
 * @n: bytes
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
