#include "shell.h"

int _mysda45dnv(inf12o_t *info)
{
	pri6366str(info->env);
	return (0);
}


char *_gdsasadnv(inf12o_t *info, const char *name)
{
	listlist65_t *node = info->env;
	char *p;

	while (node)
	{
		p = sad_strcmp(node->str, name);
		if (p && *p)
			return (p);
		node = node->neko;
	}
	return (NULL);
}


int _mydsasaddsaenv(inf12o_t *info)
{
	if (info->argc123 != 3)
	{
		asdasd435("Incorrect number of arguements\n");
		return (1);
	}
	if (_se9556nv(info, info->aasdsadrv123[1], info->aasdsadrv123[2]))
		return (0);
	return (1);
}


int _my121env(inf12o_t *info)
{
	int i;

	if (info->argc123 == 1)
	{
		asdasd435("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->argc123; i++)
		_un99env(info, info->aasdsadrv123[i]);

	return (0);
}


int popula223list(inf12o_t *info)
{
	listlist65_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add5665end(&node, environ[i], 0);
	info->env = node;
	return (0);
}
