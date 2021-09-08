/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "../navy.h"

char **maker_adv(char **map_adv, int sizemap)
{
    map_adv = malloc_map(map_adv, sizemap);
    map_adv = base(map_adv);
    return (map_adv);
}

void send_info(int i, int pid)
{
    int sig = 0;

    if (i == 1) {
        sig = 12;
    }
    else if (i == 0) {
        sig = 10;
    }
    kill(pid, sig);
}

int it_works(char **map, char **map_2, int i, Player_2 *all)
{
    if (shoot_placer(map, map_2) != 0) {
        enemy_ship--;
        all->hit++;
        i = 1;
        send_info(i, all->pid);
        i = 0;
    } else {
        i = 0;
        send_info(i, all->pid);
    }
    return (all->hit);
}

void waiting(char **map_2, char **map)
{
    my_printf("\n");
    preliminary_print(map_2, map);
    my_printf("waiting for enemy's attack...\n");
}

int player_2(char **map, char **map_2, int pid)
{
    Player_2 All;
    Player_2 *all = &All;
    all->hit = 0;
    all->sig = 3;
    all->pid = pid;
    int i = 0;
    int block = 0;

    while (block != 14) {
        waiting(map_2, map);
        it_works(map, map_2, i, all);
        if (loose(map_2, map) == 1)
            return (1);
        pid = all->pid;
        my_printf("\n");
        if (attack(pid, map_2) == 1)
            block++;
    }
    return (win_print(map_2, map));
}
