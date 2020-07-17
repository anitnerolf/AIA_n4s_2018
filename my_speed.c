/*
** EPITECH PROJECT, 2019
** speed
** File description:
** n4s
*/

#include "./include/my.h"

int	check_for_speed(n4s_t *n)
{
    my_putstr(n->lidar);
    n->s = get_next_line(0);
    if (n->s == NULL || road_is_clear(n->s) == 84)
        return (84);
    road_is_clear(n->s);
    n->map = double_array(n->s, ':');
    n->k = atof(n->map[18]);
    if (check_speed(n->k) == 1)
        return (0);
}

int	check_one_speed(float k)
{
    int i = 0;

    if (k >= 2000)
        i = my_begin("CAR_FORWARD:1.0\n");
    else if (k >= 1500)
        i = my_begin("CAR_FORWARD:0.8\n");
    else
        i = my_begin("CAR_FORWARD:0.5\n");
    return (i);
}

int	check_three_speed(float k)
{
    int i = 0;

    i = my_begin("CAR_FORWARD:0.1\n");
    return (i);
}

int	check_two_speed(float k)
{
    int i = 0;

    if (k >= 600)
        i = my_begin("CAR_FORWARD:0.4\n");
    else
        i = my_begin("CAR_FORWARD:0.2\n");
    return (i);
}

int	check_speed(float k)
{
    int	i = 0;

    if (k >= 1000)
        i = check_one_speed(k);
    else if (k >= 400)
        i = check_two_speed(k);
    else
        i = check_three_speed(k);
    return (i);
}
