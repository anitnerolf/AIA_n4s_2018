/*
** EPITECH PROJECT, 2019
** epitech
** File description:
** end
*/

#include"./include/my.h"

int	check_delim(char *str)
{
    int	i = 0;
    int	nb = 0;

    if (str == NULL)
        return (84);
    for (i = 0; str[i] != '\0' && nb <= 2; i++) {
        if (str[i] == ':')
            nb++;
    }
    return (i);
}

void	print_command(void)
{
    my_putstr("CAR_FORWARD:0.0\n");
    my_putstr("STOP_SIMULATION\n");
}

int	road_is_clear(char *str)
{
    int i = check_delim(str);
    int delim = 0;
    int cmp = 0;
    char	*ptr = "Track Cleared";
    char	*k = NULL;

    if (i == 84)
        return (84);
    for ( ; str[i] != '\0'; i++) {
        k = str + i;
        if (!strncmp(k, ptr, my_strlen(ptr))) {
            print_command();
            return (1);
        }
    }
    return 0;
}
