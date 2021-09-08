/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "../navy.h"

int send_hit_2(void)
{
    while (1) {
        signal(12, match);
        signal(10, not_match);
        pause();
        break;
    }
    if (it_match >= 1) {
        it_match = 0;
        return (1);
    }
    else if (it_not >= 1) {
        it_not = 0;
        return (0);
    }
}

int send_hit(char *buffer, int pid)
{
    int pid_test = 2;
    int horiz = buffer[0] - 64;
    int vertic = buffer[1] - 48;
    int i = horiz;
    int z = vertic;

    while (i != 0) {
        kill(pid, 12);
        i--;
        usleep(1000);
    }
    kill(pid, 10);
    usleep(1000);
    while (z != 0) {
        kill(pid, 12);
        z--;
        usleep(1000);
    }
    kill(pid, 10);
    return (send_hit_2());
}

int shoot_placer(char **map, char **my_map_2)
{
    while (1) {
        signal(12, hor);
        signal(10, end_up);
        if (end != 0) {
            end = 0;
            break;
        }
        pause();
    }
    while (1) {
        signal(12, vert);
        signal(10, end_up);
        if (end != 0) {
            end = 0;
            break;
        }
        pause();
    }
    return (all_destructor(map));
}
