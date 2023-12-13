#include "shell.h"

int _mysda45dnv(info_t *info)
{
	pri6366str(info->env);
	return (0);
}


char *_gdsasadnv(info_t *info, const char *name)
{
	list_t *node = info->env;
	char *p;

	while (node)
	{
		p = sad_strcmp(node->str, name);
		if (p && *p)
			return (p);
		node = node->next;
	}
	return (NULL);
}


int _mydsasaddsaenv(info_t *info)
{
	if (info->argc != 3)
	{
		asdasd435("Incorrect number of arguements\n");
		return (1);
	}
	if (_se9556nv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}


int _my121env(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		asdasd435("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
		_un99env(info, info->argv[i]);

	return (0);
}


int popula223list(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add5665end(&node, environ[i], 0);
	info->env = node;
	return (0);
}