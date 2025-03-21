#include "main.h"

void print_number(int n)
{
    char buffer[12]; 
    int len = 0, i, temp;
    int is_negative = 0;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
        is_negative = 1;
    }

    temp = n;
    do {
        temp /= 10;
        len++;
    } while (temp > 0);

    buffer[len] = '\0';
    while (len > 0)
    {
        buffer[--len] = (n % 10) + '0';
        n /= 10;
    }

    if (is_negative)
        _putchar('-');

    for (i = 0; buffer[i] != '\0'; i++)
        _putchar(buffer[i]);
}

void print_to_98(int n)
{
    while (n != 98)
    {
        print_number(n);
        _putchar(',');
        _putchar(' ');

        if (n < 98)
            n++;
        else
            n--;
    }

    print_number(98);
    _putchar('\n');
}
