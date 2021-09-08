/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** size_reader.c
*/
#include "navy.h"

int size_reader(int fd, char **argv)
{
    struct stat statbuf = {0};

    fd = stat(argv[1], &statbuf);
    if (fd == -1)
        return (-1);
    return (statbuf.st_size);
}

int size_reader_2(int fd, char **argv)
{
    struct stat statbuf = {0};

    fd = stat(argv[2], &statbuf);
    if (fd == -1)
        return (-1);
    return (statbuf.st_size);
}