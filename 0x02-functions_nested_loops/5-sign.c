#include "main.h"

/**
 * print_sign-prints the sign of a number
 * @n: the number to be checked
 * return: 1 for positive num,-1 for negative num or zero for anything else
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar(43);  /* output '+' for positive numbers */
        return (1);
    }
    else if (n < 0)
    {
        _putchar(45);  /* output '-' for negative numbers */
        return (-1);
    }
    else
    {
        _putchar(48);  /* output '0' for zero */
        return (0);
    }
}	

