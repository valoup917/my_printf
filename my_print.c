 /*
** EPITECH PROJECT, 2020
** my_print
** File description:
** .
*/

#include "includes/my_printf.h"

void my_printf(char *str, ...)
{
    va_list argptr;
    va_start(argptr, str);

    for (int i = 0; str[i] != '\0';i++)
        if (str[i] == '%') {
            if (str[i + 1] == 'd' || str[i + 1] == 'i')
                my_put_nbr(va_arg(argptr, int));
            if (str[i + 1] == 'S' || str[i + 1] == 's')
                my_putstr(va_arg(argptr, char *));
            if (str[i + 1] == 'c' || str[i + 1] == 'C')
                my_putchar(va_arg(argptr, int));
            if (str[i + 1] == 'u')
                usigned(va_arg(argptr, int));
            if (str[i + 1] == 'o')
                convert(va_arg(argptr, int), 8);
            if (str[i + 1] == 'X')
                convert(va_arg(argptr, int), 16);
            if (str[i + 1] == 'x')
                convert2(va_arg(argptr, int), 16);
            if (str[i + 1] == '%')
                my_putchar('%');
            i++;
        }
        else
            my_putchar(str[i]);
    va_end(argptr);
}

int usigned(int nbri)
{
    long nbr = nbri;
    if (nbr >= 0)
        my_put_nbr(nbr);
    else if (nbr < 0) {
        nbr = 4294967296 + nbr;
        my_put_long(nbr);
    }
    return 0;
}
