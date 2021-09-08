/*
** EPITECH PROJECT, 2019
** navy
** File description:
** PSU
*/
#include "../navy.h"

int adv;

void test(int sig, siginfo_t *siginfo, void *context)
{
    my_putstr("\nenemy connected\n");
    adv = siginfo->si_pid;
}

void test_2(int sig, siginfo_t *siginfo, void *context)
{
    my_putstr("successfully connected\n");
}

void wait_connection(void)
{
    my_printf("my_pid: %d\n", getpid());
    my_printf("waiting for enemy connection...\n");
    pause();
    usleep(1000);
    kill(adv, SIGUSR2);
    my_printf("\n");
}

int connecters(int pid)
{
    struct sigaction connect;
    connect.sa_flags = SA_SIGINFO;

    if (pid == 0) {
        connect.sa_sigaction = &test;
        if (sigaction(SIGUSR1, &connect, NULL) == -1)
            return (-1);
        wait_connection();
        return (adv);
    } else {
        connect.sa_sigaction = &test_2;
        if (sigaction(SIGUSR2, &connect, NULL) == -1)
            return (-1);
        if (kill(pid, SIGUSR1) == -1)
            return (-1);
        my_printf("my_pid: %d\n", getpid());
        pause();
        return (pid);
    }
}
