#include "include.hpp"

void    ft_menu()
{
    int     selected;
    int     key;
    int     i;
    int     pressed_count;

    i = 1;
    selected = 1;
    std::cout<<"\t\tWelcome to Main Menu\n";
    // std::cout<<"Press enter to continue\n";
    // std::cout<<"1. Book My Flight\n";
    // std::cout<<"2. Change My Book\n";
    // std::cout<<"3. Info About Flights\n";
    // std::cout<<"4. Exit\n";
    key = keypress();
    while (key != 0x0A)
    {
        if (key == 125 && i != 4)
            i++;
        else if (key == 126 && i != 1)
            i--;
        selected = i;
    }
    // switch (selected)
    // {
    //     case 1:
    //         /* code */
    //         break;
    
    //     default:
    //         break;
    // }
}

int main()
{
    ft_menu();
}