/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "navy.h"

void initial_variable(void)
{
    end = 0;
    hit1 = 0;
    hit2 = 0;
    it_match = 0;
    it_not = 0;
    terminal = 0;
}

int game(char **argv, char **map, char **map_2, int argc)
{
    int sizemap = 10;
    int pid = my_getnbr(argv[1]);
    int pid_2 = 0;
    initial_variable();

    pid = connecters(pid);
    if (pid == -1)
        return (84);
    if (argc == 3) {
        terminal = 2;
        return (player_2(map, map_2, pid));
    } else {
        terminal = 1;
        return (player_1(map_2, map, sizemap, pid));
    }
}

int main(int argc, char **argv, char **map, char **map_2)
{
    int fd = 0;
    int size_file = 0;
    enemy_ship = 14;

    if (argc == 2) {
        fd = open(argv[1], O_RDONLY);
        size_file = size_reader(fd, argv);
    } else {
        fd = open(argv[2], O_RDONLY);
        size_file = size_reader_2(fd, argv);
    }
    if (fd == -1)
        return (84);
    char pos1[size_file + 1];
    read(fd, pos1, size_file);
    pos1[size_file] = '\0';
    close(fd);
    map = map_maker(map, pos1, 10);
    map_2 = maker_adv(map, 10);
    return (game(argv, map, map_2, argc));
}
