#include "shell.h"

/**
 * assdfj - main shell loop
 * @info: the parameter & return info struct
 * @av: the argument vector from main()
 *
 * Return: 0 on success, 1 on error, or error code
 */
int assdfj(info_t *info, char **av)
{
	ssize_t r = 0;
	int builtin_ret = 0;

	while (r != -1 && builtin_ret != -2)
	{
		cleasdfo(info);
		if (int423erac12i2ve(info))
			_puasdtsasd("$ ");
		_eputcharsadasd(HELLO_ME2002);
		r = gfgdfgdfgput(info);
		if (r != -1)
		{
			sefsddsffo(info, av);
			builtin_ret = fdgfgh(info);
			if (builtin_ret == -1)
				fjhdshf(info);
		}
		else if (int423erac12i2ve(info))
			_putchar('\n');
		fresdafo(info, 0);
	}
	wri6565ory(info);
	fresdafo(info, 1);
	if (!int423erac12i2ve(info) && info->status)
		exit(info->status);
	if (builtin_ret == -2)
	{
		if (info->err_num == -1)
			exit(info->status);
		exit(info->err_num);
	}
	return (builtin_ret);
}

/**
 * fdgfgh - finds a builtin command
 * @info: the parameter & return info struct
 *
 * Return: -1 if builtin not found,
 *			0 if builtin executed successfully,
 *			1 if builtin found but not successful,
 *			-2 if builtin signals exit()
 */
int fdgfgh(info_t *info)
{
	int i, built_in_ret = -1;
	builtin_table builtintbl[] = {
		{"exit", dfgfguy},
		{"env", _mysda45dnv},
		{"help", _myghhfghhelp},
		{"history", _mydgfjkhry},
		{"setenv", _mydsasaddsaenv},
		{"unsetenv", _my121env},
		{"cd", _mmghjyhjcd},
		{"alias", _mdfgdalfs},
		{NULL, NULL}};

	for (i = 0; builtintbl[i].type; i++)
		if (_strcmpdassad(info->argv[0], builtintbl[i].type) == 0)
		{
			info->line_count++;
			built_in_ret = builtintbl[i].func(info);
			break;
		}
	return (built_in_ret);
}

/**
 * fjhdshf - finds a command in PATH
 * @info: the parameter & return info struct
 *
 * Return: void
 */
void fjhdshf(info_t *info)
{
	char *path = NULL;
	int i, k;

	info->path = info->argv[0];
	if (info->linecount_flag == 1)
	{
		info->line_count++;
		info->linecount_flag = 0;
	}
	for (i = 0, k = 0; info->arg[i]; i++)
		if (!is_dfsldel22im(info->arg[i], " \t\n"))
			k++;
	if (!k)
		return;

	path = fds234(info, _gdsasadnv(info, "PATH="), info->argv[0]);
	if (path)
	{
		info->path = path;
		dfbdfshj(info);
	}
	else
	{
		if ((int423erac12i2ve(info) || _gdsasadnv(info, "PATH=") || info->argv[0][0] == '/') && asdqwer(info, info->argv[0]))
			dfbdfshj(info);
		else if (*(info->arg) != '\n')
		{
			info->status = 127;
			priadsasnt_error(info, "not found\n");
		}
	}
}

/**
 * dfbdfshj - forks a an exec thread to run cmd
 * @info: the parameter & return info struct
 *
 * Return: void
 */
void dfbdfshj(info_t *info)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		/* TODO: PUT ERROR FUNCTION */
		perror("Error:");
		return;
	}
	if (child_pid == 0)
	{
		if (execve(info->path, info->argv, ge566viron(info)) == -1)
		{
			fresdafo(info, 1);
			if (errno == EACCES)
				exit(126);
			exit(1);
		}
		/* TODO: PUT ERROR FUNCTION */
	}
	else
	{
		wait(&(info->status));
		if (WIFEXITED(info->status))
		{
			info->status = WEXITSTATUS(info->status);
			if (info->status == 126)
				priadsasnt_error(info, "Permission denied\n");
		}
	}
}
