/*
** EPITECH PROJECT, 2019
** main
** File description:
** n4s
*/

#include "./include/my.h"

int	check_for_drift(n4s_t *n)
{
    my_putstr(n->lidar);
    n->s = get_next_line(0);
    road_is_clear(n->s);
    if (n->s == NULL || road_is_clear(n->s) == 84)
        return (84);
    n->map = double_array(n->s, ':');
    n->k = atof(n->map[18]);
    n->a = atof(n->map[4]);
    n->b = atof(n->map[30]);
    if (check_drift(n->a, n->b, n->k, n) == 1)
        return (0);
}

int	check_one(float a, float b, float k, n4s_t *n)
{
    int i = 0;

    if (k >= 1500)
        i = my_direction(a - b, "0.005\n", n);
    else if (k >= 1000)
        i = my_direction(a - b, "0.05\n", n);
    else
        i = my_direction(a - b, "0.1\n", n);
    return (i);
}

int	check_three(float a, float b, float k, n4s_t *n)
{
    int i = 0;

    i = my_direction(a - b, "0.5\n", n);
    return (i);
}

int	check_two(float a, float b, float k, n4s_t *n)
{
    int i = 0;

    if (k >= 400)
        i = my_direction(a - b, "0.2\n", n);
    else
        i = my_direction(a - b, "0.3\n", n);
    return (i);
}

int	check_drift(float a, float b, float k, n4s_t *n)
{
    int	i = 0;

    if (k >= 600)
        i = check_one(a, b, k, n);
    else if (k >= 200)
        i = check_two(a, b, k, n);
    else
        i = check_three(a, b, k, n);
    return (i);
}
