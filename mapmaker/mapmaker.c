/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "../navy.h"

char **point(char **map)
{
    int sizemap = 10;
    int longer = 18;
    int b = 0;

    for (int i = 2; i != sizemap; i++) {
        map = number(map, sizemap);
        map[i][1] = '|';
        for (int a = 2; a != longer; a++) {
            map[i][a] = '.';
            a++;
            map[i][a] = ' ';
        }
        map[i][18] = '\n';
    }
    return (map);
}

char **base(char **map)
{
    map[0] = " |A B C D E F G H\n";
    map[1] = "-+---------------\n";
    map = point(map);
    return (map);
}

char **boat(char **map, char *pos1)
{
    char *str = malloc(sizeof(char *) * 10);
    int g = 0;
    int i = 0;
    int ships = 0;

    while (ships <= 3) {
        free(str);
        str = malloc(sizeof(char *) * 10);
        for (i = i; (pos1[i] != '\n' && pos1[i] != '\0'); i++) {
            str[g] = pos1[i];
            g++;
        }
        str[g] = '\0';
        i++;
        g = 0;
        boat_placer(map, str, str[0]);
        ships++;
    }
    free(str);
    return (map);
}

char **map_maker(char **map, char *pos1, int sizemap)
{
    map = malloc_map(map, sizemap);
    map = base(map);
    map = boat(map, pos1);
    return (map);
}
