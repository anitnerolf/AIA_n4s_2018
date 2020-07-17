/*
** EPITECH PROJECT, 2019
** main
** File description:
** n4s
*/

#include "./include/my.h"

int	main(int ac, char **av)
{
    n4s_t	*n = malloc(sizeof(n4s_t));

    n = my_n4s(n);
    my_putstr("START_SIMULATION\n");
    if (speed_and_drift(n) == 84)
        return (84);
    return (0);
}
