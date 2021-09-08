/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "../navy.h"

int receiver(char **map, char **map_2, int i, int pid)
{
    if (shoot_placer(map, map_2) == 1) {
        enemy_ship--;
        i = 1;
        send_info(i, pid);
    } else {
        i = 0;
        send_info(i, pid);
    }
    return (i);
}

int player_1(char **map_2, char **map, int sizemap, int pid)
{
    int hit = 0;
    int i = 0;
    int sig = 3;

    while (hit != 14) {
        preliminary_print(map_2, map);
        if (attack(pid, map_2) == 1)
            hit++;
        if (hit == 14)
            return (win_print(map_2, map));
        my_printf("\nwaiting for enemy's attack...\n");
        i = receiver(map, map_2, i, pid);
        if (loose(map_2, map) == 1)
            return (1);
        my_printf("\n");
    }
    return (win_print(map_2, map));
}
