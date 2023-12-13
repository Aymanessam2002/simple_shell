#include "shell.h"


char **ge566viron(inf12o_t *info)
{
	if (!info->environ || info->env_changed)
	{
		info->environ = sd6(info->env);
		info->env_changed = 0;
	}

	return (info->environ);
}


int _un99env(inf12o_t *info, char *var)
{
	listlist65_t *node = info->env;
	size_t i = 0;
	char *p;

	if (!node || !var)
		return (0);

	while (node)
	{
		p = sad_strcmp(node->str, var);
		if (p && *p == '=')
		{
			info->env_changed = jasdhj5456(&(info->env), i);
			i = 0;
			node = info->env;
			continue;
		}
		node = node->neko;
		i++;
	}
	return (info->env_changed);
}


int _se9556nv(inf12o_t *info, char *var, char *value)
{
	char *buf = NULL;
	listlist65_t *node;
	char *p;

	if (!var || !value)
		return (0);

	buf = malloc(_strlenadssad(var) + _strlenadssad(value) + 2);
	if (!buf)
		return (1);
	_strcpyasdsd(buf, var);
	_strcatasd(buf, "=");
	_strcatasd(buf, value);
	node = info->env;
	while (node)
	{
		p = sad_strcmp(node->str, var);
		if (p && *p == '=')
		{
			free(node->str);
			node->str = buf;
			info->env_changed = 1;
			return (0);
		}
		node = node->neko;
	}
	add5665end(&(info->env), buf, 0);
	free(buf);
	info->env_changed = 1;
	return (0);
}
