#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
<<<<<<< HEAD

=======
>>>>>>> 5e3f9d9f648d2c04854363729d7b199cb2171374
