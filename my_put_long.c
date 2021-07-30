/*
** EPITECH PROJECT, 2020
** print long
** File description:
** .
*/

#include "includes/my_printf.h"

long my_put_long(long nb)
{
    long a;

    a = 1;
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    while ((nb / a) >= 10)
        a *= 10;
    while (a > 0) {
        my_putchar((nb / a) % 10 + '0');
        a /= 10;
    }
    return 0;
}
