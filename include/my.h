/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#define         READ_SIZE (1)

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>

typedef struct  get_line
{
    char        *str;
    int r;
    int i;
}       get_line_t;

typedef	struct	double_str
{
    int	i;
    int	j;
    int	k;
}	double_str_t;

typedef	struct	n4s
{
    float	a;
    float	b;
    int	t;
    float	k;
    char	**map;
    char	*s;
    char	*lidar;
    char	*wheels;
}	n4s_t;

int	main(int, char **);
int	my_putstr(char const *);
char	*get_next_line(int);
int	my_strlen(char const *);
int	check_column(char *, char);
int	count_words(char *, char);
void	my_putchar(char);
char	**double_array(char *, char);
int	my_direction(float, char *, n4s_t *);
n4s_t	*my_n4s(n4s_t *);
int	check_drift(float, float, float, n4s_t *);
int	check_one_drift(float, n4s_t *);
int	check_two_drift(float, n4s_t *);
int	check_three_drift(float, n4s_t *);
int	check_speed(float);
int	check_one_speed(float);
int	check_two_speed(float);
int	check_three_speed(float);
int	my_begin(char *);
int	road_is_clear(char *);
int	check_for_speed(n4s_t *);
int	check_for_drift(n4s_t *);
int	speed_and_drift(n4s_t *);
char	*my_strdup(char *);

#endif /* MY_H_ */
