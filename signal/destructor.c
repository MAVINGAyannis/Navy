/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** destructor.c
*/
#include "../navy.h"

int destructor_1(char **map)
{
    if (map[hit2 + 1][hit1 + hit1] == '2') {
        my_putchar(map[0][hit1 + hit1]);
        my_printf("%i: hit\n", hit2);
        map[hit2 + 1][hit1 + hit1] = 'x';
        hit1 = 0;
        hit2 = 0;
        return (1);
    }
    if (map[hit2 + 1][hit1 + hit1] == '3') {
        my_putchar(map[0][hit1 + hit1]);
        my_printf("%i: hit\n", hit2);
        map[hit2 + 1][hit1 + hit1] = 'x';
        hit1 = 0;
        hit2 = 0;
        return (1);
    }
    return (0);
}

int destructor_2(char **map)
{
    if (map[hit2 + 1][hit1 + hit1] == '4') {
        my_putchar(map[0][hit1 + hit1]);
        my_printf("%i: hit\n", hit2);
        map[hit2 + 1][hit1 + hit1] = 'x';
        hit1 = 0;
        hit2 = 0;
        return (1);
    }
    if (map[hit2 + 1][hit1 + hit1] == '5') {
        my_putchar(map[0][hit1 + hit1]);
        my_printf("%i: hit\n", hit2);
        map[hit2 + 1][hit1 + hit1] = 'x';
        hit1 = 0;
        hit2 = 0;
        return (1);
    }
    return (0);
}

int bad_destructor(char **map)
{
    if (map[hit2 + 1][hit1 + hit1] == '.') {
        my_putchar(map[0][hit1 + hit1]);
        my_printf("%i: missed\n", hit2);
        map[hit2 + 1][hit1 + hit1] = 'o';
        hit1 = 0;
        hit2 = 0;
        return (0);
    }
    if (map[hit2 + 1][hit1 + hit1] == 'o') {
        my_putchar(map[0][hit1 + hit1]);
        my_printf("%i: missed\n", hit2);
        map[hit2 + 1][hit1 + hit1] = 'o';
        hit1 = 0;
        hit2 = 0;
        return (0);
    }
    return (1);
}

int bad_destructor_2(char **map)
{
    if (map[hit2 + 1][hit1 + hit1] == 'x') {
        my_putchar(map[0][hit1 + hit1]);
        my_printf("%i: already hit\n", hit2);
        hit1 = 0;
        hit2 = 0;
        return (0);
    }
}

int all_destructor(char **map)
{
    if (destructor_1(map) == 1)
        return (1);
    if (destructor_2(map) == 1)
        return (1);
    if (bad_destructor(map) == 0)
        return (0);
    if (bad_destructor_2(map) == 0)
        return (0);
}