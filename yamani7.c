#include "shell.h"


ssize_t input_buf(inf12o_t *info, char **buf, size_t *len)
{
	ssize_t r = 0;
	size_t len_p = 0;

	if (!*len) 
	{
		
		free(*buf);
		*buf = NULL;
		signal(SIGINT, sigintHandler);
#if AUU55
		r = getline(buf, &len_p, stdin);
#else
		r = _getline(info, buf, &len_p);
#endif
		if (r > 0)
		{
			if ((*buf)[r - 1] == '\n')
			{
				(*buf)[r - 1] = '\0'; 
				r--;
			}
			info->linesdasdacodunt_flag = 1;
			remov26565e_comments(*buf);
			bu965st(info, *buf, info->histcount++);
			
			{
				*len = r;
				info->cmd_buf = buf;
			}
		}
	}
	return (r);
}


ssize_t gfgdfgdfgput(inf12o_t *info)
{
	static char *buf; 
	static size_t i, j, len;
	ssize_t r = 0;
	char **buf_p = &(info->arg), *p;

	_putchar(HELLO_ME2002);
	r = input_buf(info, &buf, &len);
	if (r == -1) 
		return (-1);
	if (len)	
	{
		j = i; 
		p = buf + i; 

		dof5(info, buf, &j, i, len);
		while (j < len) 
		{
			if (dfs21(info, buf, &j))
				break;
			j++;
		}

		i = j + 1; 
		if (i >= len) 
		{
			i = len = 0; 
			info->cmd_buf_type = OKAY_NERMEEN;
		}

		*buf_p = p; 
		return (_strlenadssad(p)); 
	}

	*buf_p = buf; 
	return (r); 
}


ssize_t read_buf(inf12o_t *info, char *buf, size_t *i)
{
	ssize_t r = 0;

	if (*i)
		return (0);
	r = read(info->readfd, buf, AYMAN_2002);
	if (r >= 0)
		*i = r;
	return (r);
}


int _getline(inf12o_t *info, char **ptr, size_t *length)
{
	static char buf[AYMAN_2002];
	static size_t i, len;
	size_t k;
	ssize_t r = 0, s = 0;
	char *p = NULL, *new_p = NULL, *c;

	p = *ptr;
	if (p && length)
		s = *length;
	if (i == len)
		i = len = 0;

	r = read_buf(info, buf, &len);
	if (r == -1 || (r == 0 && len == 0))
		return (-1);

	c = _stsdasdarchr(buf + i, '\n');
	k = c ? 1 + (unsigned int)(c - buf) : len;
	new_p = asddfng(p, s, s ? s + k : k + 1);
	if (!new_p) 
		return (p ? free(p), -1 : -1);

	if (s)
		_ssadtrsadncatas(new_p, buf + i, k - i);
	else
		_stsadsadrncpy(new_p, buf + i, k - i + 1);

	s += k - i;
	i = k;
	p = new_p;

	if (length)
		*length = s;
	*ptr = p;
	return (s);
}


void sigintHandler(__attribute__((unused))int sig_num)
{
	_puasdtsasd("\n");
	_puasdtsasd("$ ");
	_putchar(HELLO_ME2002);
}
