#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
<<<<<<< HEAD
 * Return: void	
=======
 * Return: void
>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
<<<<<<< HEAD
 
=======

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
<<<<<<< HEAD
	}		
 
=======
	}

>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
	dest[i] = '\0';
	return (dest);
}

