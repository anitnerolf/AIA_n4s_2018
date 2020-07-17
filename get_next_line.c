/*
** EPITECH PROJECT, 2018
** CPE_getnextline_2018
** File description:
** get_next_line
*/

#include "my.h"

get_line_t	*get_line(get_line_t *g)
{
    g = malloc(sizeof(get_line_t));
    g->str = malloc(sizeof(char) * (READ_SIZE + 1));
    g->r = 0;
    g->i = 0;
    return (g);
}

char	*my_strcpy(char *src, char *dest)
{
    int	i = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}

int	read_file(int fd, char *buffer, int size)
{
    int	k = 0;

    k = read(fd, buffer, size);
    if (k == -1)
        return (84);
    return (k);
}

char	*get_next_line(int fd)
{
    get_line_t	*g = malloc(sizeof(get_line_t));
    static	int	k;
    char	*buffer = malloc(sizeof(char *) * (READ_SIZE + 1));

    g = get_line(g);
    if (g->str == NULL || fd == -1 || buffer == NULL)
        return (NULL);
    while (k <= g->r) {
        for (g->i = 0; (g->r = read_file(fd, buffer, READ_SIZE)) > 0 && \
    buffer[k] != '\n'; g->i++) {
            if (g->r == 84)
                return (NULL);
            g->str = my_strdup(g->str);
            g->str[g->i] = buffer[k];
        }
        g->str = ((g->r == 0 || fd == -1) ? NULL : g->str);
        return (g->str);
        k++;
    }
}
