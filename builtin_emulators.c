#include "shell.h"

int dfgfguy(info_t *info)
{
	int exitcheck;

	if (info->argv[1]) 
	{
		exitcheck = _errahggfdftoi(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			priadsasnt_error(info, "Illegal number: ");
			asdasd435(info->argv[1]);
			_eputcharsadasd('\n');
			return (1);
		}
		info->err_num = _errahggfdftoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}


int _mmghjyhjcd(info_t *info)
{
	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (!s)
		_puasdtsasd("TODO: >>getcwd failure emsg here<<\n");
	if (!info->argv[1])
	{
		dir = _gdsasadnv(info, "HOME=");
		if (!dir)
			chdir_ret = 
				chdir((dir = _gdsasadnv(info, "PWD=")) ? dir : "/");
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmpdassad(info->argv[1], "-") == 0)
	{
		if (!_gdsasadnv(info, "OLDPWD="))
		{
			_puasdtsasd(s);
			_putchar('\n');
			return (1);
		}
		_puasdtsasd(_gdsasadnv(info, "OLDPWD=")), _putchar('\n');
		chdir_ret = 
			chdir((dir = _gdsasadnv(info, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(info->argv[1]);
	if (chdir_ret == -1)
	{
		priadsasnt_error(info, "can't cd to ");
		asdasd435(info->argv[1]), _eputcharsadasd('\n');
	}
	else
	{
		_se9556nv(info, "OLDPWD", _gdsasadnv(info, "PWD="));
		_se9556nv(info, "PWD", getcwd(buffer, 1024));
	}
	return (0);
}


int _myghhfghhelp(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;
	_puasdtsasd("help call works. Function not yet implemented \n");
	if (0)
		_puasdtsasd(*arg_array); 
	return (0);
}
