/*
** EPITECH PROJECT, 2019
** init_struct
** File description:
** n4s
*/

#include "my.h"

n4s_t	*my_n4s(n4s_t *n)
{
    n->a = 0;
    n->b = 0;
    n->t = 0;
    n->s = NULL;
    n->map = NULL;
    n->k = 0;
    n->lidar = "GET_INFO_LIDAR\n";
    n->wheels = "WHEELS_DIR:";
    return (n);
}
