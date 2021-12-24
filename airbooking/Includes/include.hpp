#ifndef INCLUDE_HPP
#define INCLUDE_HPP

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <termios.h>
#include <sys/select.h>
#include <fstream>
#include <string.h>
#include <string>
#include <fcntl.h>
#include <stdarg.h>

typedef struct  helps
{
    char    name[10];
    char    surename[15];
    char    from[15];
    char    where[15];
    char    time[11];
    bool    loged;
    // char    *buffer;
}               t_helps;


void    cbreak();
void    normal();
int     keypress();
void    starting_menu(t_helps *helps);
void    gotoxy(int x, int y);
void    switch_menu(short int menu_point);
void    starting_menu(t_helps *helps);
void    ft_register(t_helps *helps);
char	*ft_strjoin(char *s1, char *s2);
int	    ft_strlen(char *str);
void    print_about();
void    print_menu();
void    print_logs();
void    ft_login(t_helps *helps);
void    constructor(t_helps helps);
void    check_requests(t_helps *helps);


#endif //inclue_hpp
