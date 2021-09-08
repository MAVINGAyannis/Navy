/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** attack.c
*/
#include "../navy.h"

int horiz = 0;
int vertic = 0;

int loose(char **map_2, char **map)
{
    if (enemy_ship == 0) {
        my_printf("\n");
        preliminary_print(map_2, map);
        my_printf("Enemy won\n");
        return (1);
    }
    return (0);
}

char *error_hit(char *buffer, int pid)
{
    while (vertic > 8 || vertic <= 0 || horiz > 8 || horiz <= 0) {
        horiz = 0;
        vertic = 0;
        my_printf("wrong position\n", buffer);
        buffer = my_scanf(buffer);
        horiz = buffer[0] - 64;
        vertic = buffer[1] - 48;
    }
    return (buffer);
}

char *my_scanf(char *buffer)
{
    size_t i = 0;

    my_printf("attack: ");
    getline(&buffer, &i, stdin);
    buffer[2] = '\0';
    return (buffer);
}

void preliminary_print(char **map_2, char **map)
{
    int sizemap = 10;

    my_printf("my positions:\n");
    printmap(map, sizemap);
    my_printf("enemy's positions:\n");
    printmap(map_2, sizemap);
}

int attack(int pid, char **map)
{
    char *buffer = malloc(sizeof(char *) * 100);

    buffer = my_scanf(buffer);
    horiz = buffer[0] - 64;
    vertic = buffer[1] - 48;
    buffer = error_hit(buffer, pid);
    if (send_hit(buffer, pid) != 0) {
        map[vertic + 1][horiz + horiz] = 'x';
        my_printf("%s: hit\n", buffer);
        horiz = 0;
        vertic = 0;
        return (1);
    } else {
        map[vertic + 1][horiz + horiz] = 'o';
        my_printf("%s: missed\n", buffer);
        horiz = 0;
        vertic = 0;
        return (0);
    }
    free(buffer);
}