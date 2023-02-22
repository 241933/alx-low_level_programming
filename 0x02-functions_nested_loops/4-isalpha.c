#include "main.h"

/**
 * _lsalpha - checks for alphabet
 * @c: character to be checked
 * Return: 1 if character is a later,0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
