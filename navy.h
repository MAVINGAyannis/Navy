/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "lib/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>
#include <time.h>

int end;
int hit1;
int hit2;
int it_match;
int it_not;
int terminal;
int enemy_ship;

typedef struct Player_2 Player_2;
struct Player_2
{
    int pid;
    int sig;
    int hit;
};

typedef struct Boat Boat;
struct Boat
{
    int b;
    int o;
};

typedef void (*sighandler_t)(int);

sighandler_t signal(int signum, sighandler_t handler);

void printmap(char **map, int sizemap);

void waiting(char **map_2, char **map);
void wait_connection(void);

int player_1(char **map_2, char **map, int sizemap, int pid);
int player_2(char **map, char **my_map_2, int pid);

char **maker_adv(char **map_adv, int sizemap);
char **txt_to_map(char **map, char *buffer);
char **malloc_map(char **map, int sizemap);
int how_horizontal(char pos1, char **map);
char **base(char **map);
char **map_maker(char **map, char *pos1, int sizemap);
char **point(char **map);
int help(int argc, char **argv);
void preliminary_print(char **map_2, char **map);

void hor(int i);
void end_up(int i);
void vert(int i);
void match(int i);
void not_match(int i);

int shoot_placer(char **map, char **my_map_2);
int send_hit(char *buffer, int pid);
void send_info(int i, int pid);
int attack(int pid, char **map);
int connecters(int pid);
int it_works(char **map, char **my_map_2, int i, Player_2 *all);
int game(char **argv, char **map, char **map_2, int argc);
void test(int sig, siginfo_t *siginfo, void *context);
void test_2(int sig, siginfo_t *siginfo, void *context);
void first();
char *my_scanf(char *buffer);
char **number(char **map, int sizemap);
int size_reader(int fd, char **argv);
int size_reader_2(int fd, char **argv);
int all_destructor(char **map);
int bad_destructor_2(char **map);
int bad_destructor(char **map);
int destructor_2(char **map);
int destructor_1(char **map);

int loose(char **map_2, char **map);
int win_print(char **map_2, char **map);

int send_hit_2(void);

char **horizontal_right(char **map, char *pos, char boat);
char **horizontal_left(char **map, char *pos, char boat);
char **vertical_up(char **map, char *pos, char boat);
char **vertical_down(char **map, char *pos, char boat);

char **boat_placer(char **map, char *position, char boat);