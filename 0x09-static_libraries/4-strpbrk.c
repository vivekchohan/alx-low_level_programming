#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;
<<<<<<< HEAD
 
=======

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
<<<<<<< HEAD
 
=======

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
return ('\0');
}

