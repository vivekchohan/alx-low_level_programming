#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;
<<<<<<< HEAD
 
=======

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

