/*
** EPITECH PROJECT, 2019
** main
** File description:
** n4s
*/

#include "./include/my.h"

int	my_begin(char *s)
{
    my_putstr(s);
    s = get_next_line(0);
    if (s == NULL || road_is_clear(s) == 84)
        return (84);
    if (road_is_clear(s) == 1)
        return (1);
    return (0);
}

int	my_direction(float f, char *s, n4s_t *n)
{
    my_putstr(n->wheels);
    if (f < 0.0)
        my_putchar('-');
    my_putstr(s);
    s = get_next_line(0);
    if (s == NULL || road_is_clear(s) == 84)
        return (84);
    if (road_is_clear(s) == 1)
        return (1);
    return (0);
}

int	speed_and_drift(n4s_t *n)
{
    n->s = get_next_line(0);
    if (n->s == NULL)
        return (84);
    while (1) {
        if (check_for_speed(n) == 84)
            return (84);
        if (check_for_drift(n) == 84)
            return (84);
    }
    return (0);
}
