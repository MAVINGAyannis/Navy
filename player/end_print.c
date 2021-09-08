/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** end_print.c
*/
#include "../navy.h"

int win_print(char **map_2, char **map)
{
    my_printf("\n");
    preliminary_print(map_2, map);
    my_printf("I won\n");
    return (0);
}