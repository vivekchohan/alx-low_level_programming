#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;
<<<<<<< HEAD
 
=======

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
<<<<<<< HEAD
 
		if (*p == '\0')
			return (haystack);
	}
 
=======

		if (*p == '\0')
			return (haystack);
	}

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
	return (0);
}

