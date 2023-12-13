#include "shell.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t as66(const listlist65_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->neko;
		i++;
	}
	return (i);
}

/**
 * listlist65_to_strings - returns an array of strings of the list->str
 * @head: pointer to first node
 *
 * Return: array of strings
 */
char **sd6(listlist65_t *head)
{
	listlist65_t *node = head;
	size_t i = as66(head), j;
	char **strs;
	char *str;

	if (!head || !i)
		return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	for (i = 0; node; node = node->neko, i++)
	{
		str = malloc(_strlenadssad(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		}

		str = _strcpyasdsd(str, node->str);
		strs[i] = str;
	}
	strs[i] = NULL;
	return (strs);
}


/**
 * print_list - prints all elements of a listlist65_t linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t aiu12(const listlist65_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puasdtsasd(consadvsadadsnumber(h->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puasdtsasd(h->str ? h->str : "(nil)");
		_puasdtsasd("\n");
		h = h->neko;
		i++;
	}
	return (i);
}


listlist65_t *oo22(listlist65_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = sad_strcmp(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->neko;
	}
	return (NULL);
}


ssize_t ll53(listlist65_t *head, listlist65_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->neko;
		i++;
	}
	return (-1);
}
