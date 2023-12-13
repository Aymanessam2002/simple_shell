#include "shell.h"



char *get5656ile(inf12o_t *info)
{
	char *buf, *dir;

	dir = _gdsasadnv(info, "HOME=");
	if (!dir)
		return (NULL);
	buf = malloc(sizeof(char) * (_strlenadssad(dir) + _strlenadssad(MOP78) + 2));
	if (!buf)
		return (NULL);
	buf[0] = 0;
	_strcpyasdsd(buf, dir);
	_strcatasd(buf, "/");
	_strcatasd(buf, MOP78);
	return (buf);
}

int wri6565ory(inf12o_t *info)
{
	ssize_t fd;
	char *filename = get5656ile(info);
	listlist65_t *node = NULL;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0644);
	free(filename);
	if (fd == -1)
		return (-1);
	for (node = info->myhistro; node; node = node->neko)
	{
		_puasdtsasdfdsdasd(node->str, fd);
		_putfdasdasd('\n', fd);
	}
	_putfdasdasd(HELLO_ME2002, fd);
	close(fd);
	return (1);
}


int rea96ory(inf12o_t *info)
{
	int i, last = 0, linecount = 0;
	ssize_t fd, rdlen, fsize = 0;
	struct stat st;
	char *buf = NULL, *filename = get5656ile(info);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	free(filename);
	if (fd == -1)
		return (0);
	if (!fstat(fd, &st))
		fsize = st.st_size;
	if (fsize < 2)
		return (0);
	buf = malloc(sizeof(char) * (fsize + 1));
	if (!buf)
		return (0);
	rdlen = read(fd, buf, fsize);
	buf[fsize] = 0;
	if (rdlen <= 0)
		return (free(buf), 0);
	close(fd);
	for (i = 0; i < fsize; i++)
		if (buf[i] == '\n')
		{
			buf[i] = 0;
			bu965st(info, buf + last, linecount++);
			last = i + 1;
		}
	if (last != i)
		bu965st(info, buf + last, linecount++);
	free(buf);
	info->histcount = linecount;
	while (info->histcount-- >= MOLP78)
		jasdhj5456(&(info->myhistro), 0);
	renumb3232tory(info);
	return (info->histcount);
}


int bu965st(inf12o_t *info, char *buf, int linecount)
{
	listlist65_t *node = NULL;

	if (info->myhistro)
		node = info->myhistro;
	add5665end(&node, buf, linecount);

	if (!info->myhistro)
		info->myhistro = node;
	return (0);
}


int renumb3232tory(inf12o_t *info)
{
	listlist65_t *node = info->myhistro;
	int i = 0;

	while (node)
	{
		node->num = i++;
		node = node->neko;
	}
	return (info->histcount = i);
}
