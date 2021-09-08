/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "navy.h"

int help(int argc, char **argv)
{
    if (argc == 2 && argv[1] == "-h") {
        my_printf("USAGE\n");
        my_printf("     ./navy [first_player_pid] navy_positions\n");
        my_printf("DESCRIPTION\n");
        my_printf("     first_player_pid: only for the 2nd player. ");
        my_printf("pid of the first player.\n");
        my_printf("     navy_positions: ");
        my_printf("file representing the positions of the ships.\n");
        return (84);
    }
    return (0);
}

void printmap(char **map, int sizemap)
{
    for (int h = 0; h != sizemap; h++) {
        my_printf("%s", map[h]);
    }
    my_printf("\n");
}
