#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
    int i = 0;
    long j = 1, k = 1; // fix typo in variable declaration and initialization

    while (i < 52)
    {
        if (i == 0)
        {
            printf("%ld", j);
        }
        else if (i == 1)
        {
            printf(", %ld", k);
        }
        else
        {
            long temp = k; // add temporary variable to swap values
            k = j + k;
            j = temp;
            printf(", %ld", k);
        }
        i++;
    }
    printf("\n");

    return (0);
}
