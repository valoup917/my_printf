/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** .
*/

#include "includes/my_printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
