/*
** EPITECH PROJECT, 2020
** my_printf h
** File description:
** .
*/

#include <unistd.h>
#include <stdarg.h>

void my_printf(char *str, ...);
int usigned(int nbr);

/*-----------CONVERT-----------*/
void convert(long number_to_convert, int base);
void convert2(long number_to_convert, int base);


/*----------PRINTF-----------*/
void my_printf(char *str, ...);
int usigned(int nbri);

/*--------MY_PUT_LONG---------*/
long my_put_long(long nb);

/*-----utilities-------*/
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
void my_putchar(char c);
