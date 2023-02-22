#include "main.h"

/**
 * _is lowe - checks for lowercasw character
 * @c: he character to be checked
 * return: 1 for lowercase and 0 for anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
