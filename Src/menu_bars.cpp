#include "../include.hpp"

void    sign_in(t_helps *helps)
{
    helps->sign_in = true;
    starting_menu();
    // const int   UP      = 65;
    // const int   DOWN    = 66;
    // const int   ENTER   = 10;
    // bool        menu_on = true;

    // cbreak();
    // while (menu_on == true)
    // {
    //     int key = keypress();
    //     switch (key)
    //     {
    //         case    
    //     }
    // }
} 

void    my_bookings(t_helps *helps)
{
    normal();
    if (helps->sign == 0)
    {
        sign_in(helps);
    }
    else
    {
        // t_helps helps;
        system("clear");
        print_logs();
        std::cout<<"\n\n\t\t\t\t\t\t_________________________________________________\n";
        std::cout<<"\t\t\t\t\t\t\033[1;34m\t LET'T LOG YOUR FLIGHT\033[0m\n";
        std::cout<<"\t\t\t\t\t\t\t \033[1;33mYOUR NAME :\033[0m\n";
        std::cout<<"\t\t\t\t\t\t\t \n";
        std::cin>>helps->name;
        // helps.buffer = ft_strjoin(helps.buffer, helps.name);
        std::cout<<"Your input :" << helps->name << "\n";
        std::cout<<"\t\t\t\t\t\t\t \033[1;33mYOUR SURENAME :\033[0m\n";
        std::cout<<"\t\t\t\t\t\t\t \n";
        std::cin>>helps->surename;
        // helps.buffer = ft_strjoin(helps.buffer, helps.surename);
        // std::cout<<"Your inout :" << .surename << "\n";
        std::cout<<"\t\t\t\t\t\t\t\033[1;33m FROM WHERE?\033[0m\n";
        std::cin>>helps->where;
        // helps.buffer = ft_strjoin(helps.buffer, helps.where);
        // std::cout<<"your input :" << helps.buffer << "\n";
        // std::cout<<"\t\t\t|\t WHERE TO?";
    }
}