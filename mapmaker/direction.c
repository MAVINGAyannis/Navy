/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "../navy.h"

char **horizontal_right(char **map, char *pos, char boat)
{
    int number_begin = pos[3] - 47;
    int number_end = pos[6] - 47;
    int line_begin = (pos[2] - 64) * 2;
    int line_end = (pos[5] - 64) * 2;
    int max = boat - 48;

    while (line_begin != (line_end + 2)) {
        if (max < 0)
            return (NULL);
        map[number_begin][line_begin] = boat;
        line_begin += 2;
    }
    return (map);
}

char **horizontal_left(char **map, char *pos, char boat)
{
    int number_begin = pos[3] - 47;
    int number_end = pos[6] - 47;
    int line_begin = (pos[2] - 64) * 2;
    int line_end = (pos[5] - 64) * 2;
    int max = boat - 48;

    while (line_begin != (line_end - 2)) {
        if (max < 0)
            return (NULL);
        map[number_begin][line_begin] = boat;
        line_begin -= 2;
    }
    return (map);
}

char **vertical_up(char **map, char *pos, char boat)
{
    int number_begin = pos[3] - 47;
    int number_end = pos[6] - 47;
    int line_begin = (pos[2] - 64) * 2;
    int line_end = (pos[5] - 64) * 2;
    int max = boat - 48;

    while (number_begin != (number_end - 1)) {
        if (max < 0)
            return (NULL);
        map[number_begin][line_begin] = boat;
        number_begin--;
    }
    return (map);
}

char **vertical_down(char **map, char *pos, char boat)
{
    int number_begin = pos[3] - 47;
    int number_end = pos[6] - 47;
    int line_begin = (pos[2] - 64) * 2;
    int line_end = (pos[5] - 64) * 2;
    int max = boat - 48;

    while (number_begin != (number_end + 1)) {
        if (max < 0)
            return (NULL);
        map[number_begin][line_begin] = boat;
        number_begin++;
    }
    return (map);
}