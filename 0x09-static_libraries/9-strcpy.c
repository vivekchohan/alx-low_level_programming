#include "main.h"
<<<<<<< HEAD
		
=======

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;
<<<<<<< HEAD
 
=======

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

