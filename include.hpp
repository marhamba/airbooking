#ifndef INCLUDE_H
#define INCLUDE_H

#include <unistd.h>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <termios.h>
#include <sys/select.h>

// typedef struct s_list
// {
//     int     menu;


// }   t_list;

// t_list list;

void    ft_menu();
void    cbreak();
void    normal();
int     keypress();

#endif
