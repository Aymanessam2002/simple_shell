#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

/* for read/write buffers */
#define AYMAN_2002 1024
#define REAB_SIZE_ME 1024
#define HELLO_ME2002 -1

/* for command chaining */
#define OKAY_NERMEEN 0
#define RE_ME_HE 1
#define CMDC2M2D 2
#define AYM88 3

/* for convert_number() */
#define H25 1
#define LOAY5 2

/* 1 if using system getline() */
#define AUU55 0
#define AS99 0

#define MOP78 ".simple_shell_history"
#define MOLP78 4096

extern char **environ;

/**
 * struct liststr - singly linked list
 * @num: the number field
 * @str: a string
 * @next: points to the next node
 */
typedef struct liststr
{
	int num;
	char *str;
	struct liststr *next;
} list_t;

/**
 *struct passinfo - contains pseudo-arguements to pass into a function,
 *					allowing uniform prototype for function pointer struct
 *@arg: a string generated from getline containing arguements
 *@argv: an array of strings generated from arg
 *@path: a string path for the current command
 *@argc: the argument count
 *@line_count: the error count
 *@err_num: the error code for exit()s
 *@linecount_flag: if on count this line of input
 *@fname: the program filename
 *@env: linked list local copy of environ
 *@environ: custom modified copy of environ from LL env
 *@history: the history node
 *@alias: the alias node
 *@env_changed: on if environ was changed
 *@status: the return status of the last exec'd command
 *@cmd_buf: address of pointer to cmd_buf, on if chaining
 *@cmd_buf_type: CMD_type ||, &&, ;
 *@readfd: the fd from which to read line input
 *@histcount: the history line number count
 */
typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *history;
	list_t *alias;
	char **environ;
	int env_changed;
	int status;

	char **cmd_buf;	  /* pointer to cmd ; chain buffer, for memory mangement */
	int cmd_buf_type; /* CMD_type ||, &&, ; */
	int readfd;
	int histcount;
} info_t;

#define INFO_INIT                                                               \
	{                                                                           \
		NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
			0, 0, 0                                                             \
	}

/**
 *struct builtin - contains a builtin string and related function
 *@type: the builtin command flag
 *@func: the function
 */
typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
} builtin_table;

/* assdfj.c */
int assdfj(info_t *, char **);
int fdgfgh(info_t *);
void fjhdshf(info_t *);
void dfbdfshj(info_t *);

/* path.c */
int asdqwer(info_t *, char *);
char *er345(char *, int, int);
char *fds234(info_t *, char *, char *);

/* sadf456.c */
int sadf456(char **);

/* err_string_functions.c */
void asdasd435(char *);
int _eputcharsadasd(char);
int _putfdasdasd(char c, int fd);
int _puasdtsasdfdsdasd(char *str, int fd);

/* string_functions.c */
int _strlenadssad(char *);
int _strcmpdassad(char *, char *);
char *sad_strcmp(const char *, const char *);
char *_strcatasd(char *, char *);

/* string_functions2.c */
char *_strcpyasdsd(char *, char *);
char *_strcpysdasd(const char *);
void _puasdtsasd(char *);
int _putchar(char);

/* string_functions3.c */
char *_stsadsadrncpy(char *, char *, int);
char *_ssadtrsadncatas(char *, char *, int);
char *_stsdasdarchr(char *, char);

/* string_functions4.c */
char **str324234tow(char *, char *);
char **str324234tow2(char *, char);

/* memory_functions */
char *_mem2002set(char *, char, unsigned int);
void asdnksdakj(char **);
void *asddfng(void *, unsigned int, unsigned int);

/* memory_functions2.c */
int bfree(void **);

/* more_functions.c */
int int423erac12i2ve(info_t *);
int is_dfsldel22im(char, char *);
int _isasdsadalpha(int);
int _adsfdftoi(char *);

/* more_functions2.c */
int _errahggfdftoi(char *);
void priadsasnt_error(info_t *, char *);
int prinsa20dsadt_d(int, int);
char *consadvsadadsnumber(long int, int, int);
void remov26565e_comments(char *);

/* builtin_emulators.c */
int dfgfguy(info_t *);
int _mmghjyhjcd(info_t *);
int _myghhfghhelp(info_t *);

/* builtin_emulators2.c */
int _mydgfjkhry(info_t *);
int _mdfgdalfs(info_t *);

/* getline.c module */
ssize_t gfgdfgdfgput(info_t *);
int _getline(info_t *, char **, size_t *);
void sigintHandler(int);

/* info.c module */
void cleasdfo(info_t *);
void sefsddsffo(info_t *, char **);
void fresdafo(info_t *, int);

/* env.c module */
char *_gdsasadnv(info_t *, const char *);
int _mysda45dnv(info_t *);
int _mydsasaddsaenv(info_t *);
int _my121env(info_t *);
int popula223list(info_t *);

/* env2.c module */
char **ge566viron(info_t *);
int _un99env(info_t *, char *);
int _se9556nv(info_t *, char *, char *);

/* file_io_functions.c */
char *get5656ile(info_t *info);
int wri6565ory(info_t *info);
int rea96ory(info_t *info);
int bu965st(info_t *info, char *buf, int linecount);
int renumb3232tory(info_t *info);

/* liststr.c module */
list_t *ad656ode(list_t **, const char *, int);
list_t *add5665end(list_t **, const char *, int);
size_t pri6366str(const list_t *);
int jasdhj5456(list_t **, unsigned int);
void dgf3(list_t **);

/* liststr2.c module */
size_t as66(const list_t *);
char **sd6(list_t *);
size_t aiu12(const list_t *);
list_t *oo22(list_t *, char *, char);
ssize_t ll53(list_t *, list_t *);

/* chain.c */
int dfs21(info_t *, char *, size_t *);
void dof5(info_t *, char *, size_t *, size_t, size_t);
int ahh4(info_t *);
int replyyu6ars(info_t *);
int uyt12(char **, char *);

#endif
