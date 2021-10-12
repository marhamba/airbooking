#include "../include.hpp"

void    ft_menu() //Not working, just an infinite loop
{
    int     key;
    int     i;
    int     selected; //final choosen tab of menu

    std::cout<<"\t\tWelcome To The Main Menu\n";
    std::cout<<"Press Enter to continue.\n"; // May be changed
    cbreak();
    key = keypress();
    if (key = 10)
    {
        while (1)
        {
            key = keypress();
            switch (key)
            {
                case  125:
                    if(i != 1)
                        i--;
                    break ;
                case 126:
                    if (i != 4)
                        i++;
                    break ;
                default:
                    break;
            }
            switch (i)
            {
                case 1:
                    std::cout<<"Book my flight\n";
                    break ;
                case 2:
                    std::cout<<"Modify my booking\n";
                    break ;
                case 3:
                    std::cout<<"Get info about bookings\n";
                    break ;
                case 4:
                    std::cout<<"Exit\n";
                    break ;
                default:
                    break;
            }
            if (key == 27) // for Esc exiting
                break ;
        }
    }
    if (key == 10)  // choosing with enter
        selected = i;
}

int main()
{
    ft_menu(); // main menu function
}
