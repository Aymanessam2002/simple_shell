#include "shell.h"


int _mydgfjkhry(info_t *info)
{
	aiu12(info->history);
	return (0);
}


int unset_alias(info_t *info, char *str)
{
	char *p, c;
	int ret;

	p = _stsdasdarchr(str, '=');
	if (!p)
		return (1);
	c = *p;
	*p = 0;
	ret = jasdhj5456(&(info->alias),
		ll53(info->alias, oo22(info->alias, str, -1)));
	*p = c;
	return (ret);
}


int set_alias(info_t *info, char *str)
{
	char *p;

	p = _stsdasdarchr(str, '=');
	if (!p)
		return (1);
	if (!*++p)
		return (unset_alias(info, str));

	unset_alias(info, str);
	return (add5665end(&(info->alias), str, 0) == NULL);
}


int print_alias(list_t *node)
{
	char *p = NULL, *a = NULL;

	if (node)
	{
		p = _stsdasdarchr(node->str, '=');
		for (a = node->str; a <= p; a++)
			_putchar(*a);
		_putchar('\'');
		_puasdtsasd(p + 1);
		_puasdtsasd("'\n");
		return (0);
	}
	return (1);
}


int _mdfgdalfs(info_t *info)
{
	int i = 0;
	char *p = NULL;
	list_t *node = NULL;

	if (info->argc == 1)
	{
		node = info->alias;
		while (node)
		{
			print_alias(node);
			node = node->next;
		}
		return (0);
	}
	for (i = 1; info->argv[i]; i++)
	{
		p = _stsdasdarchr(info->argv[i], '=');
		if (p)
			set_alias(info, info->argv[i]);
		else
			print_alias(oo22(info->alias, info->argv[i], '='));
	}

	return (0);
}
