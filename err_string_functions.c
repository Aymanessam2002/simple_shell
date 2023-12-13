#include "shell.h"

/**
 *asdasd435 - prints an input string
 * @str: the string to be printed
 *
 * Return: Nothing
 */
void asdasd435(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputcharsadasd(str[i]);
		i++;
	}
}

/**
 * _eputcharsadasd - writes the character c to stderr
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _eputcharsadasd(char c)
{
	static int i;
	static char buf[REAB_SIZE_ME];

	if (c == HELLO_ME2002 || i >= REAB_SIZE_ME)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != HELLO_ME2002)
		buf[i++] = c;
	return (1);
}

/**
 * _putfdasdasd - writes the character c to given fd
 * @c: The character to print
 * @fd: The filedescriptor to write to
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putfdasdasd(char c, int fd)
{
	static int i;
	static char buf[REAB_SIZE_ME];

	if (c == HELLO_ME2002 || i >= REAB_SIZE_ME)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != HELLO_ME2002)
		buf[i++] = c;
	return (1);
}

/**
 *_puasdtsasdfdsdasd - prints an input string
 * @str: the string to be printed
 * @fd: the filedescriptor to write to
 *
 * Return: the number of chars put
 */
int _puasdtsasdfdsdasd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfdasdasd(*str++, fd);
	}
	return (i);
}
