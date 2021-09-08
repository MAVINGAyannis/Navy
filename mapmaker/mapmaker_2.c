/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "../navy.h"

char **txt_to_map(char **map, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        map[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            map[o][z] = '\n';
            o++;
            v++;
            z = 0;
        }
    }
    return (map);
}

char **malloc_map(char **map, int sizemap)
{
    int col = 19;

    map = malloc(sizeof(char *) * (sizemap + 2));
    for (int i = 0; i != sizemap; i++)
        map[i] = malloc(sizeof(char) * (col + 1));
    return (map);
}

char **number(char **map, int sizemap)
{
    map[2][0] = '1';
    map[3][0] = '2';
    map[4][0] = '3';
    map[5][0] = '4';
    map[6][0] = '5';
    map[7][0] = '6';
    map[8][0] = '7';
    map[9][0] = '8';
    return (map);
}