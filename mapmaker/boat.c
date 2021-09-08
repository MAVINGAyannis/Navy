/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "../navy.h"

char **boat_placer(char **map, char *position, char boat)
{
    int number_1 = position[3];
    int number_2 = position[6];
    int line_1 = position[2];
    int line_2 = position[5];

    if (number_1 == number_2) {
        if (line_1 < line_2)
            map = horizontal_right(map, position, boat);
        else if (line_1 > line_2)
            map = horizontal_left(map, position, boat);
    } else if (number_1 != number_2) {
        if (number_1 < number_2)
            map = vertical_down(map, position, boat);
        else if (number_1 > number_2)
            map = vertical_up(map, position, boat);
    }
    return (map);
}
