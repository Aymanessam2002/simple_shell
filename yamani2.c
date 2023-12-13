#include "shell.h"


int dfs21(inf12o_t *info, char *buf, size_t *p)
{
	size_t j = *p;

	if (buf[j] == '|' && buf[j + 1] == '|')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = RE_ME_HE;
	}
	else if (buf[j] == '&' && buf[j + 1] == '&')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = CMDC2M2D;
	}
	else if (buf[j] == ';') 
	{
		buf[j] = 0; 
		info->cmd_buf_type = AYM88;
	}
	else
		return (0);
	*p = j;
	return (1);
}


void dof5(inf12o_t *info, char *buf, size_t *p, size_t i, size_t len)
{
	size_t j = *p;

	if (info->cmd_buf_type == CMDC2M2D)
	{
		if (info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	if (info->cmd_buf_type == RE_ME_HE)
	{
		if (!info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}

	*p = j;
}


int ahh4(inf12o_t *info)
{
	int i;
	listlist65_t *node;
	char *p;

	for (i = 0; i < 10; i++)
	{
		node = oo22(info->alias, info->aasdsadrv123[0], '=');
		if (!node)
			return (0);
		free(info->aasdsadrv123[0]);
		p = _stsdasdarchr(node->str, '=');
		if (!p)
			return (0);
		p = _strcpysdasd(p + 1);
		if (!p)
			return (0);
		info->aasdsadrv123[0] = p;
	}
	return (1);
}


int replyyu6ars(inf12o_t *info)
{
	int i = 0;
	listlist65_t *node;

	for (i = 0; info->aasdsadrv123[i]; i++)
	{
		if (info->aasdsadrv123[i][0] != '$' || !info->aasdsadrv123[i][1])
			continue;

		if (!_strcmpdassad(info->aasdsadrv123[i], "$?"))
		{
			uyt12(&(info->aasdsadrv123[i]),
				  _strcpysdasd(consadvsadadsnumber(info->status, 10, 0)));
			continue;
		}
		if (!_strcmpdassad(info->aasdsadrv123[i], "$$"))
		{
			uyt12(&(info->aasdsadrv123[i]),
				  _strcpysdasd(consadvsadadsnumber(getpid(), 10, 0)));
			continue;
		}
		node = oo22(info->env, &info->aasdsadrv123[i][1], '=');
		if (node)
		{
			uyt12(&(info->aasdsadrv123[i]),
				  _strcpysdasd(_stsdasdarchr(node->str, '=') + 1));
			continue;
		}
		uyt12(&info->aasdsadrv123[i], _strcpysdasd(""));
	}
	return (0);
}


int uyt12(char **old, char *new)
{
	free(*old);
	*old = new;
	return (1);
}
