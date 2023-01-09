#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
<<<<<<< HEAD
 
=======

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
<<<<<<< HEAD
 
=======

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
	return (dest);
}

