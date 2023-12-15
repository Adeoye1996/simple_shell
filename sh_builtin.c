#include "shell.h"

/**
 * _myexit - exits the shell
 * @info: Structure containing potential arguments.
 * Return: Exits with a given exit status (0 if info->argv[0] != "exist").
 */
int _myexit(info_t *info)
{
	int exit_check;

	if (info->argv[1]) /*If there is an exist argument */
	{
		exit_check = _erratoi(info->argv[1]);
		if (exit_check == -1)
		{
			info->status = 2;
			print_error(info, "Number not found: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		info->err_num = exit_check;
		return (-2);
	}

	info->err_num = -1;
	return (-2);
}

/**
 * _mycd - changes the current directory of the process
 * @info: Structure containing potential argument.
 * Return: Always 0
 */
int _mycd(info_t *info)
{
	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, sizeof(buffer));
	if (!s)
		_puts("TODO: >>getcwd failure emsg here<<\n");

	if (!info->argv[1])

	{
		dir = _getenv(info, "HOME=");
		if (!dir)
			chdir_ret = chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(s);
			_putchar('\n');
			return (1);
		}
		_puts(_getenv(info, "OLDPWD="));
		_putchar('\n');
		chdir_ret = chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
	}
	else
	{
		chdir_ret = chdir(info->argv[1]);
	}
		if (chdir_ret == -1)
		{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]);
		_eputchar('\n');
		}
		else
		{
			_setenv(info, "OLDPWD", _getenv(info, "PWD="));
			_setenv(info, "PWD", getcwd(buffer, sizeof(buffer)));
		}

		return (0);
}
/**
 * _myhelp - displays help message (not yet implemented)
 * @info: Structure containing potential arguments.
 * Return: Always 0
 */
int _myhelp(info_t *info)
{
	(void)info; /* Suppress unused parameter warning */
	_puts("help call works. Function not yet implemented\n");

	return (0);
}
