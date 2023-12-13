#include "shell.h"


void cleasdfo(inf12o_t *info)
{
	info->arg = NULL;
	info->aasdsadrv123 = NULL;
	info->path123 = NULL;
	info->argc123 = 0;
}


void sefsddsffo(inf12o_t *info, char **av)
{
	int i = 0;

	info->fnsdasadme = av[0];
	if (info->arg)
	{
		info->aasdsadrv123 = str324234tow(info->arg, " \t");
		if (!info->aasdsadrv123)
		{

			info->aasdsadrv123 = malloc(sizeof(char *) * 2);
			if (info->aasdsadrv123)
			{
				info->aasdsadrv123[0] = _strcpysdasd(info->arg);
				info->aasdsadrv123[1] = NULL;
			}
		}
		for (i = 0; info->aasdsadrv123 && info->aasdsadrv123[i]; i++)
			;
		info->argc123 = i;

		ahh4(info);
		replyyu6ars(info);
	}
}


void fresdafo(inf12o_t *info, int all)
{
	asdnksdakj(info->aasdsadrv123);
	info->aasdsadrv123 = NULL;
	info->path123 = NULL;
	if (all)
	{
		if (!info->cmd_buf)
			free(info->arg);
		if (info->env)
			dgf3(&(info->env));
		if (info->myhistro)
			dgf3(&(info->myhistro));
		if (info->alias)
			dgf3(&(info->alias));
		asdnksdakj(info->environ);
			info->environ = NULL;
		bfree((void **)info->cmd_buf);
		if (info->readfd > 2)
			close(info->readfd);
		_putchar(HELLO_ME2002);
	}
}
