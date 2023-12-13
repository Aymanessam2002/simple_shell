#include "shell.h"


char *_strcpyasdsd(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}


char *_strcpysdasd(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}


void _puasdtsasd(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}


int _putchar(char c)
{
	static int i;
	static char buf[REAB_SIZE_ME];

	if (c == HELLO_ME2002 || i >= REAB_SIZE_ME)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != HELLO_ME2002)
		buf[i++] = c;
	return (1);
}
