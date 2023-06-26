#include "main.h"
/**
 * _path - function that constructs the full path of an executable
 *@bin: binary
 *@path: default path
 *@full:the full path
 *Return: -
 */
void _path(char *bin, char *path, char **full)
{
	if (bin[0] == '/')
	{
		*full = malloc(strlen(bin) + 1);
		strcpy(*full, bin);

	}
	else
	{
		*full = malloc(strlen(path) + strlen(bin) + 1);
		strcpy(*full, path);
		strcat(*full, bin);

	}
}
