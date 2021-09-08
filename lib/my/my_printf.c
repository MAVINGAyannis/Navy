/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "../my.h"

int whatflag(char f, va_list ap)
{
    if (f == 'd' || f == 'i')
        my_put_nbr(va_arg(ap, int));
    if (f == 'c')
        my_putstr(va_arg(ap, char *));
    if (f == 's')
        my_putstr(va_arg(ap, char *));
}

int my_printf(char *f, ...)
{
    va_list ap;
    va_start (ap, f);

    int i = 0;

    while (f[i] != '\0') {
        if (f[i] != '%')
            my_putchar(f[i]);
        if (f[i] == '%') {
            whatflag(f[i+1], ap);
            i++;
        }
        i++;
    }
    va_end (ap);
}
